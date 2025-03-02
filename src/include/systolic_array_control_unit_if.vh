`ifndef SYSTOLIC_ARRAY_CONTROL_UNIT_IF_VH
`define SYSTOLIC_ARRAY_CONTROL_UNIT_IF_VH

`include "sys_arr_pkg.vh"
/* verilator lint_off IMPORTSTAR */
import sys_arr_pkg::*;
/* verilator lint_off IMPORTSTAR */

interface systolic_array_control_unit_if;

  // Signals
  logic weight_en;        // Current input bus is for array weights
  logic input_en;         // Current input bus is for array inputs
  logic partial_en;       // Memory is sending partial sums
  logic [$clog2(N)-1:0] row_in_en;          // Row enable for inputs/weights & partial sums
  logic [$clog2(N)-1:0] row_ps_en;          // Row enable for  partial sums
  logic fifo_has_space;   // FIFOS can load more inputs 
  logic input_type;       // Inputs are weights/inputs
  logic input_load;       // Load inputs into certain FIFOs
  logic weight_load;      // Load weights into certain row of MACS
  logic partials_load;    // Load partials into certain FIFOs
  logic MAC_start;           // Start signals for all MACs
  logic [$clog2(MUL_LEN+ADD_LEN):0] MAC_count;     // Count signals for all MACs
  logic add_start;           // Start signals for all partial sum adders
  logic [$clog2(ADD_LEN):0] add_count;            // Count signals for all partial sum adders
  logic [N-1:0] in_fifo_shift;      // Shift signal for partial sum FIFOS
  logic [N-1:0] ps_fifo_shift;      // Shift signal for FIFOS
  logic MAC_shift;                          // Shift signal for MACs
  logic out_fifo_shift;                             // Shift signal for output FIFOS
  logic [$clog2(N)-1:0] input_row;          // Which FIFO to load input into
  logic [$clog2(N)-1:0] weight_row;         // Whi ch MAC row to load weights into
  logic [$clog2(N)-1:0] partials_row;       // Which FIFO to load partials into
  logic [$clog2(3*N)-1:0] iteration [2:0];            // Which row the systolic array is outputing

  // Control Unit Ports
  modport control_unit(
    input  weight_en, input_en, partial_en, row_in_en, row_ps_en,
    output fifo_has_space, in_fifo_shift, ps_fifo_shift, MAC_shift, out_fifo_shift, input_type, input_load, input_row, weight_load, weight_row, partials_load, partials_row, iteration, MAC_start, MAC_count, add_start, add_count
  );
endinterface

`endif
