`ifndef FETCH_IF_VH
`define FETCH_IF_VH

`include "isa_types.vh"

interface fetch_if;
  import isa_pkg::*;

  // fetch.sv should have all the fetch related parts in it including branch pred and btb
  // the inputs to fetch.sv should be 
  // ihit and imemload from mem
  // fu_branch signals from execute to control branch prediction fu and btb
  // the outputs should be whats already there
  // current pc (pc), the instr (instr), and what the prediction was (branch_pred)

  logic flush, freeze, misprediction, ihit, branch_pred;
  word_t imemload, pc_prediction, instr, pc, correct_target, correct_pc;

  modport ft (
    input ihit, imemload, flush, freeze, pc_prediction, misprediction, correct_target, correct_pc,
    output instr, pc, branch_pred
  );

  modport tb (
    input instr, pc, branch_pred,
    output ihit, imemload, flush, freeze, pc_prediction, misprediction, correct_target, correct_pc
  );

endinterface

`endif
