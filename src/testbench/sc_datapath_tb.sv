`include "pipeline_types.vh"
`include "datapath_types.vh"
`include "isa_types.vh"

// INTERFACES
`include "fetch_if.vh"
`include "scoreboard_if.vh"
`include "dispatch_if.vh"
`include "issue_if.vh"
`include "regfile_if.vh"
`include "execute_if.vh"
`include "writeback_if.vh"
`include "datapath_cache_if.vh"

`timescale 1 ns / 10ps

module sc_datapath_tb;
  // clock period
  parameter PERIOD = 10;

  // signals
  logic CLK = 1, nrst;

  // clock
  always #(PERIOD/2) CLK++;

  // interface
  datapath_cache_if                   dcif ();

  // dut
  sc_datapath                         DUT (.CLK(CLK), .nrst(nrst), .dcif(dcif));

  test                                PROG (.CLK(CLK), .nrst(nrst), .dcif(dcif));

endmodule

program test(input logic CLK, output logic nrst, datapath_cache_if.tb dcif);

  initial begin 
      nrst = 0;
      dcif.imemload = '0;
      dcif.ihit = 0;
      dcif.dhit = '0;
      dcif.mhit = '0;
      dcif.dmemload = '0;
      dcif.dmemaddr = '0;

      $finish;
  end

endprogram

