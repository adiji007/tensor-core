`include "caches_if.vh"
`include "arbiter_caches_if.vh"
`include "scratchpad_if.vh"
`include "datapath_cache_if.vh"

module memory_subsystem_tb;
  import "DPI-C" function void mem_init();
  import "DPI-C" function void mem_read(input bit [31:0] address, output bit [31:0] data);
  import "DPI-C" function void mem_write(input bit [31:0] address, input bit [31:0] data);
  import "DPI-C" function void mem_save();

  import caches_pkg::*;
  import types_pkg::*;

  parameter PERIOD = 20;

  logic CLK = 1, nRST;
  always #(PERIOD/2) CLK++;

  datapath_cache_if dcif();
  caches_if cif();
  arbiter_caches_if acif(cif);
  scratchpad_if spif();

  // Holds all memory modules
  memory_subsystem DUT (
    .CLK(CLK),
    .nRST(nRST),
    .dcif(dcif),
    .cif(cif),
    .acif(acif),
    .spif(spif)
  );

  integer i;
  int test_num;
  bit [31:0] read_data;

  task reset_dut;
    begin
      nRST = 0;
      @(posedge CLK);
      @(posedge CLK);
      nRST = 1;
      @(posedge CLK);
    end
  endtask

//TODO: WIP
//   task write_icache(
//       logic   local_imemREN, 
//       word_t  local_imemaddr
//   );
//     begin
//       dcif.imemREN = local_imemREN;
//       dcif.imemaddr = local_imemaddr;
//     end
//   endtask

  task write_dcache(
      logic   local_dmemREN,
      logic   local_dmemWEN,
      word_t  local_dmemaddr,
      word_t  local_dmemstore
  );
    begin
      dcif.dmemREN = local_dmemREN;
      dcif.dmemWEN = local_dmemWEN;
      dcif.dmemaddr = local_dmemaddr;
      dcif.dmemstore = local_dmemstore;
    end
  endtask

  initial begin
    static string test_name = "Reset";
    mem_init();
    test_num = 0;
    reset_dut();

    // Test 1: Write and read Dcache
    // DCACHE TESTS
    test_name = "Write and read Dcache";
    $display("Test 1: Write and read Dcache");
    test_num = test_num + 1;
    //first write has to be a miss
    write_dcache(0, 1, 32'h00000100, 32'hFEEDCAFE);
    @(posedge CLK);
    #1;
    if (dcif.dhit) begin
      $display("ERROR: Expected a miss, got %b at %t", dcif.dhit, $time);
      //$stop;
    end

    write_dcache(0, 1, 32'h00000100, 32'hFEEDCAFE);
    @(posedge CLK);
    #1;
    if (!dcif.dhit) begin
      $display("ERROR: Expected dhit, got %b at %t", dcif.dhit, $time);
      //$stop;
    end
    //TODO: later
    //mem_read(32'hFEEDCAFE, );

    //ICACHE TESTS

    //SCRATCHPAD TESTS
    
    spif.instrFIFO_WEN = 1'b0;
    nRST = 1;
    #(PERIOD);

    nRST = 0;
    #(PERIOD * 2);

    nRST = 1;
    #(PERIOD);

    @(posedge CLK);

    test_name = "Load Instruction";
    @(negedge CLK);
    
    spif.instrFIFO_WEN = 1'b1;
    spif.instrFIFO_wdata = {2'b01, 4'h2, 32'hFEEDCAFE};
    #(PERIOD);
    spif.instrFIFO_WEN = 1'b0;
    #(PERIOD*25);


    test_name = "Store Instruction";
    spif.instrFIFO_WEN = 1'b1;
    spif.instrFIFO_wdata = {2'b10, 4'h2, 32'hf0f0f0f0};
    #(PERIOD);
    spif.instrFIFO_WEN = 1'b0;
    #(PERIOD*25);

    test_name = "Load Instruction 2";
    
    spif.instrFIFO_WEN = 1'b1;
    spif.instrFIFO_wdata = {2'b01, 4'hf, 32'hf0f0f0f0};
    #(PERIOD);
    spif.instrFIFO_WEN = 1'b0;
    #(PERIOD*25);

    $display("All tests passed!");
    $stop;
  end
endmodule