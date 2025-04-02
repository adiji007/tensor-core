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
  fu_branch_predictor_if btbif();

  // Fetch unit connections
  assign fif.imemload = fsif.imemload;           // Input from memory
  assign fif.freeze = fsif.freeze;               // Input from scoreboard
  assign fif.misprediction = fsif.misprediction; // Input from branch predictor
  assign fif.correct_pc = fsif.correct_pc;       // Input from branch predictor
  assign fsif.pc = fif.pc;                       // Output to scoreboard, branch predictor
  assign fsif.instr = fif.instr;                 // Output to scoreboard
  assign fsif.imemREN = fif.imemREN;             // Output to memory
  assign fsif.imemaddr = fif.imemaddr;           // Output to memory

  // Branch predictor connections
  assign btbif.pc = fif.pc;
  assign btbif.update_btb = fsif.update_btb;
  assign btbif.branch_outcome = fsif.branch_outcome;
  assign btbif.update_pc = fsif.update_pc;
  assign btbif.branch_target = fsif.branch_target;
  assign btbif.imemaddr = fif.imemaddr;

  assign fsif.predicted_outcome = btbif.predicted_outcome;

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
    .ihit(ihit),
    .fubpif(btbif.btb)
  );

  assign fif.pc_prediction = btbif.predicted_target;

endmodule