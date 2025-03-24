`ifndef FETCH_IF_VH
`define FETCH_IF_VH

`include "isa_types.vh"

interface fetch_if;
  import isa_pkg::*;

  logic flush, freeze, misprediction, ihit, br_predicted;
  word_t imemaddr, imemload, pc_prediction, instr, pc, correct_pc;

  modport ft (
    input imemload, flush, freeze, pc_prediction, misprediction, correct_pc, ihit,
    output imemaddr, instr, pc, br_predicted
  );

  modport tb (
    input imemaddr, instr, pc, br_predicted,
    output imemload, flush, freeze, pc_prediction, misprediction, correct_pc, ihit
  );

endinterface

`endif
