`include "fetch_stage_if.vh"
`include "fetch_if.vh"
`include "fu_branch_predictor_if.vh"
`include "isa_types.vh"

module fetch_stage(
  input logic CLK, nRST, ihit,
  fetch_stage_if.fs fsif
);
  import isa_pkg::*;

  // Instantiation interfaces
  fetch_if fif();
  fu_branch_predictor_if fubpif();

  // Fetch unit connections
  assign fif.imemload = fsif.imemload;
  assign fif.freeze = fsif.freeze;
  assign fif.misprediction = fsif.misprediction;
  assign fif.correct_pc = fsif.correct_pc;
  assign fsif.pc = fif.pc;
  assign fsif.instr = fif.instr;

  // Branch predictor connections
  assign fubpif.pc = fif.pc;
  assign fubpif.update_btb = fsif.update_btb;
  assign fubpif.branch_outcome = fsif.branch_outcome;
  assign fubpif.update_pc = fsif.update_pc;
  assign fubpif.branch_target = fsif.branch_target;
  assign fsif.predicted_pc = fubpif.predicted_target;

  // Module instances
  fetch fetch_unit (
    .CLK(CLK),
    .nRST(nRST),
    .ihit(ihit),
    .fif(fif.ft)
  );

  fu_branch_predictor predictor (
    .CLK(CLK),
    .nRST(nRST),
    .fubpif(fubpif.btb)
  );

  assign fif.pc_prediction = fubpif.predicted_target;

endmodule