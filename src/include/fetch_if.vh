`ifndef FETCH_IF_VH
`define FETCH_IF_VH

`include "isa_types.vh"

interface fetch_if;
  import isa_pkg::*;

  logic freeze, misprediction, imemREN;
  word_t imemaddr, imemload, pc_prediction, instr, pc, correct_pc;

  modport ft (
    input imemload, freeze, pc_prediction, misprediction, correct_pc,
    output imemREN, imemaddr, instr, pc
  );

  modport tb (
    input imemREN, imemaddr, instr, pc,
    output imemload, freeze, pc_prediction, misprediction, correct_pc
  );

endinterface

`endif
