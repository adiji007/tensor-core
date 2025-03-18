`include "caches_if.vh"
`include "arbiter_caches_if.vh"
`include "scratchpad_if.vh"

module memory_arbiter_basic_tb;

  import caches_pkg::*;
  import types_pkg::*;

  // clock period
  parameter PERIOD = 20;

  // signals
  logic CLK = 1, nRST;

  // clock
  always #(PERIOD/2) CLK++;

  // Interfaces
  caches_if cif();
  arbiter_caches_if acif(cif);
  scratchpad_if spif();

  // DUT
  memory_arbiter_basic DUT (
    .CLK(CLK),
    .nRST(nRST),
    .acif(acif),
    .spif(spif.arbiter)
  );

  // Test variables
  integer i;
  logic [63:0] expected_load_data;
  logic [31:0] expected_store_data;

  // Test tasks
  task reset_dut;
    begin
      nRST = 0;
      @(posedge CLK);
      @(posedge CLK);
      nRST = 1;
      @(posedge CLK);
    end
  endtask

  task check_state;
    input [3:0] expected_state;
    begin
      // @(posedge CLK);
      $display("Checking state: expected=%b, actual=%b, spif.sLoad=%b, time=%t", 
               expected_state, DUT.arbiter_state, spif.sLoad, $time);
      if(DUT.arbiter_state !== expected_state) begin
        $display("ERROR: Expected state %b, got %b at time %t", 
                 expected_state, DUT.arbiter_state, $time);
      end
    end
  endtask

  // Main test
  initial begin
    // Initialize all interface signals to prevent unknown values
    spif.sLoad = 0;
    spif.sStore = 0;
    cif.iREN = 0;
    cif.dREN = 0;
    cif.dWEN = 0;
    acif.ramstate = FREE;
    spif.load_addr = 32'h1000;
    spif.store_addr = 32'h2000;
    spif.store_data = 64'hDEADBEEFCAFEFACE;
    cif.iaddr = 32'h3000;
    cif.daddr = 32'h4000;
    cif.dstore = 32'hBEEFBEEF;

    // Test 1: Reset
    reset_dut();
    check_state(4'b0000);

    // Test 2: SP_LOAD with wait and no wait
    $display("Testing SP_LOAD...");
    spif.sLoad = 1;
    $display("Set spif.sLoad=1 at time %t", $time);
    @(posedge CLK);
    #1;
    check_state(4'b0001);
    
    // Wait condition
    acif.ramstate = BUSY;
    #1;
    check_state(4'b0001);
    
    // No wait, move to SP_LOAD2
    acif.ramstate = ACCESS;
    acif.ramload = 32'h12345678;
    @(posedge CLK);
    #1;
    check_state(4'b0010);
    
    // Wait in SP_LOAD2
    acif.ramstate = BUSY;
    #1
    check_state(4'b0010);
    
    // Complete load
    acif.ramstate = ACCESS;
    acif.ramload = 32'h9ABCDEF0;
    @(posedge CLK);
    #1;
    check_state(4'b0000);
    if(spif.load_data !== 64'h9ABCDEF012345678) begin
      $display("ERROR: Load data mismatch at %t", $time);
      $stop;
    end
    spif.sLoad = 0;

    // Test 3: SP_STORE with wait and no wait
  $display("Testing SP_STORE...");
  repeat(5) begin
    @(negedge CLK);          
    #1;                      
    spif.sStore = 1;       
    $display("Set spif.sStore=1 at time %t", $time);
    @(posedge CLK);        
    #1;                   
    check_state(4'b0011);    // SP_STORE1

    acif.ramstate = BUSY;    // Set wait condition
    @(posedge CLK);      
    #1;
    check_state(4'b0011);    // Stays in SP_STORE1

    acif.ramstate = ACCESS;  // No wait, move to SP_STORE2
    @(posedge CLK);         
    #1;
    check_state(4'b0100);    // SP_STORE2

    acif.ramstate = BUSY;    // Wait in SP_STORE2
    @(posedge CLK);       
    #1;
    check_state(4'b0100);    // Stays in SP_STORE2

    acif.ramstate = ACCESS;  // Complete store
    @(posedge CLK);        
    #1;
    check_state(4'b0000);    // Back to IDLE
    spif.sStore = 0;         
  end
  if(spif.sLoad_row !== 3'd1) begin
    $display("ERROR: sLoad_row expected 1 after wraparound, got %d at %t", spif.sLoad_row, $time);
    $stop;
  end

    $display("All tests passed!");
    $finish;
  end


endmodule