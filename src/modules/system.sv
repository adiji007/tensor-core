/*
  Chase Johnson
  cyjohnso@purdue.edu

  Connects Data Path Together
*/

// system interface
`include "system_if.vh"
//types
`include "isa_types.vh"
`include "datapath_types.vh"
`include "ram_pkg.vh"
`include "types_pkg.vh"
// `include "ram_if.vh"
`include "cpu_ram_if.vh"
`include "datapath_cache_if.vh"
`include "caches_if.vh"
`include "arbiter_caches_if.vh"
`include "scratchpad_if.vh"


module system (input logic CLK, nrst, system_if.sys syif);

  import ram_pkg::*;
  import isa_pkg::*;
  import types_pkg::*;
  import datapath_pkg::*;

  // stopped running
  // logic halt;

  // clock division
  parameter CLKDIV = 2;
  logic CPUCLK;
  logic [3:0] count;
  //logic CPUnrst;

  always_ff @(posedge CLK, negedge nrst)
  begin
    if (!nrst)
    begin
      count <= 0;
      CPUCLK <= 0;
    end
    else if (count == CLKDIV-2)
    begin
      count <= 0;
      CPUCLK <= ~CPUCLK;
    end
    else
    begin
      count <= count + 1;
    end
  end

  datapath_cache_if dpif();
  sc_datapath DP (CLK, nrst, dpif);

  caches_if cif();
  arbiter_caches_if acif(cif);
  scratchpad_if spif();
  memory_subsystem MS (CLK, nrst, dpif, cif, acif, spif);


  // // interfaces
  // cpu_ram_if                            prif ();

  // // scheduler core processor
  // scheduler_core                        CPU (CPUCLK, nrst, halt, prif);

  // // memory
  // ram                                   RAM (CLK, nrst, prif);

  // // interface connections
  // assign syif.halt = halt;
  // assign syif.load = prif.ramload;

  // // who has ram control
  // assign prif.ramWEN = (syif.tbCTRL) ? syif.WEN : prif.memWEN;
  // assign prif.ramREN = (syif.tbCTRL) ? syif.REN : prif.memREN;
  // assign prif.ramaddr = (syif.tbCTRL) ? syif.addr : prif.memaddr;
  // assign prif.ramstore = (syif.tbCTRL) ? syif.store : prif.memstore;



endmodule