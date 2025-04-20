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

  always_comb begin
    acif.ramstore = '0;
    acif.ramaddr = '0;
    acif.ramWEN = '0;
    acif.ramREN = '0;
    acif.dwait = '0;
    acif.dload = '0;
    acif.iwait = '0;
    acif.iload = '0;
    dcache_load = '0;
    icache_load = '0;
    acif.load_done = '0;
    acif.store_done = '0;
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
endmodule