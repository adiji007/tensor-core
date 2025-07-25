`include "caches_pkg.vh"

module memory_arbiter_basic(
  input logic CLK, nRST,
  arbiter_caches_if.cc acif,
  scratchpad_if.arbiter spif
);
  import caches_pkg::*;
  import "DPI-C" function void mem_init();
  import "DPI-C" function void mem_read(input bit [31:0] address, output bit [31:0] data);
  import "DPI-C" function void mem_write(input bit [31:0] address, input bit [31:0] data);
  import "DPI-C" function void mem_save();

  logic [31:0] dcache_load, icache_load;
  
  
  //scratchpad stuff
  logic [31:0] local_addr_inc1 = 32'd8;
  logic [31:0] local_addr_inc2 = 32'd4;
  logic [1:0] load_count, next_load_count;
  // logic [1:0] store_count, next_store_count;
  logic [2:0] sLoad_row_reg, next_sLoad_row_reg;
  logic sp_wait, dwait, iwait;

  typedef enum logic [2:0] {
      IDLE      = 4'b0000,
      SP_LOAD1  = 4'b0001,
      SP_LOAD2  = 4'b0010,
      SP_STORE1 = 4'b0011,
      SP_STORE2 = 4'b0100
  } arbiter_states;

  arbiter_states arbiter_state, next_arbiter_state;

  always_ff @ (posedge CLK, negedge nRST) begin
    if (!nRST) begin
      arbiter_state <= IDLE;
      load_count <= '0;
      sLoad_row_reg <= 3'd0;
    end
    else begin
      arbiter_state <= next_arbiter_state;
      load_count <= next_load_count;
      sLoad_row_reg <= next_sLoad_row_reg;
    end
  end

  always_comb begin
    next_arbiter_state = arbiter_state;
    next_load_count = load_count;
    next_sLoad_row_reg = sLoad_row_reg;
    case (arbiter_state)
      IDLE: begin
        if (spif.sLoad) begin
          next_arbiter_state = SP_LOAD1;
          next_load_count = '0;
          next_sLoad_row_reg = 3'd0;
        end
        else if (spif.sStore) begin
          next_arbiter_state = SP_STORE1;
        end
      end
      SP_LOAD1: begin
        if (!spif.sLoad) begin
          next_arbiter_state = IDLE;
        end
        else if (!sp_wait) begin
          next_arbiter_state = SP_LOAD2;
        end
      end
      SP_LOAD2: begin
        if (!spif.sLoad) begin
          next_arbiter_state = IDLE;
        end
        else if (!sp_wait) begin
          next_sLoad_row_reg = load_count;
          if (load_count < 2'd3) begin
            next_arbiter_state = SP_LOAD1;
            next_load_count = load_count + 1;
          end
          else begin
            next_arbiter_state = IDLE;
            next_load_count = '0;
          end
        end
      end
      SP_STORE1: begin
        if (!spif.sStore) begin
          next_arbiter_state = IDLE;
        end
        else if (!sp_wait) begin
          next_arbiter_state = SP_STORE2;
        end
      end
      SP_STORE2: begin
        if (!spif.sStore) begin
          next_arbiter_state = IDLE;
        end
        else if (!sp_wait) begin
          next_arbiter_state = IDLE;
        end
      end
    endcase
  end

  logic [63:0] load_data_reg;
  logic [31:0] sp_load_addr;
  logic [31:0] sp_load_data;
  logic sp_hit;

  always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
      spif.sLoad_hit <= '0;
    end
    else begin
      spif.sLoad_hit <= sp_hit;
    end
  end

  always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
      load_data_reg <= '0;
    end
    else if (arbiter_state == SP_LOAD1) begin
      load_data_reg[31:0] <= sp_load_data;
    end
    else if (arbiter_state == SP_LOAD2) begin
      load_data_reg[63:32] <= sp_load_data;
    end
  end
  assign spif.load_data = load_data_reg;
  assign spif.sLoad_row = sLoad_row_reg;
  always_comb begin
    if (((arbiter_state == SP_LOAD1) || (arbiter_state == SP_LOAD2)))
      mem_read(sp_load_addr, sp_load_data);
  end

  always_comb begin
    acif.ramstore = '0;
    acif.ramaddr = '0;
    acif.ramWEN = '0;
    acif.ramREN = '0;
    acif.dwait = '1;
    acif.dload = '0;
    acif.iwait = 1;
    acif.iload = '0;
    dcache_load = '0;
    icache_load = '0;
    acif.load_done = '0;
    acif.store_done = '0;
    spif.sStore_hit = '0;
    sp_wait = 1'b0;
    sp_load_addr = '0;
    sp_hit = '0;
    case (arbiter_state)
      SP_LOAD1: begin
        // sp_wait = acif.ramstate == BUSY;
        sp_load_addr = spif.load_addr + (load_count * local_addr_inc1);
        acif.ramREN = 1'b1;
      end
      SP_LOAD2: begin
        // sp_wait = acif.ramstate == BUSY;
        sp_load_addr = spif.load_addr + (load_count * local_addr_inc1) + local_addr_inc2;
        acif.ramREN = 1'b1;
        if (!sp_wait) sp_hit = 1'b1;
      end
      SP_STORE1: begin
        // sp_wait = acif.ramstate == BUSY;
        mem_write(spif.store_addr, spif.store_data[31:0]);
        mem_save();
        acif.ramWEN = 1'b1;
      end
      SP_STORE2: begin
        // sp_wait = acif.ramstate == BUSY;
        mem_write(spif.store_addr + local_addr_inc2, spif.store_data[63:32]);
        mem_save();
        acif.ramWEN = 1'b1;
        // if (!sp_wait) spif.sStore_hit = 1'b1;
        spif.sStore_hit = 1'b1;
      end
      IDLE: begin
        //DCACHE
        if (acif.dREN || acif.dWEN) begin
            acif.ramstore = acif.dstore;
            acif.ramaddr = acif.daddr;
            acif.ramWEN = acif.dWEN;
            acif.ramREN = !acif.dWEN && acif.dREN;
            acif.dwait = ((acif.dREN) || (acif.dWEN)) ? 1'b0 : 1'b1;
            if(acif.ramWEN) begin
              mem_write(acif.ramaddr, acif.ramstore);
              mem_save();  
              acif.store_done = 1;
            end
            else if(acif.ramREN) begin
              mem_read(acif.ramaddr, dcache_load);
              acif.dload = dcache_load;
              acif.load_done = 1;
            end
        end
        //ICACHE
        else if (acif.iREN) begin
            acif.ramREN = acif.iREN;
            acif.ramaddr = acif.iaddr;
            acif.iwait = (acif.dREN || acif.dWEN) ? 1'b1 : 1'b0;
            if(acif.ramREN) begin
              mem_read(acif.ramaddr, icache_load);
              acif.iload = icache_load;
            end
        end
      end
    endcase
  end
endmodule