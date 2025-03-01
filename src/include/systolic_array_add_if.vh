`ifndef SYSTOLIC_ARRAY_ADD_IF_VH
`define SYSTOLIC_ARRAY_ADD_IF_VH

`include "sys_arr_pkg.vh"
/* verilator lint_off IMPORTSTAR */
import sys_arr_pkg::*;
/* verilator lint_off IMPORTSTAR */

interface systolic_array_add_if;
  // Signals
  /* verilator lint_off UNUSEDSIGNAL */
  logic start;          // MAC unit start signal
  /* verilator lint_off UNUSEDSIGNAL */
  /* verilator lint_off UNUSEDSIGNAL */
  logic [$clog2(ADD_LEN):0]count;          // Count for adder pipelined execution
  /* verilator lint_off UNUSEDSIGNAL */
  logic [DW-1:0] add_input1;            // Input weight value to be pre-loaded
  logic [DW-1:0] add_input2;          // Input value to be multiplied
  logic [DW-1:0] add_ouput;     // Input accumulate value from above

  // add Port for Array
  modport add(
    input  start, count, add_input1, add_input2,
    output add_ouput
  );
endinterface

`endif
