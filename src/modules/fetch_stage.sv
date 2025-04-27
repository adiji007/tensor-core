`include "fetch_stage_if.vh"
`include "fetch_if.vh"
`include "fu_branch_predictor_if.vh"
`include "isa_types.vh"

module fetch_stage(
  input logic CLK, nRST, ihit,
  fetch_stage_if.fs fsif
);
  import isa_pkg::*;

  word_t prev_pc, prev_instr;
  logic prev_pred;

  // Instantiation interfaces
  fetch_if fif();
  fu_branch_predictor_if btbif();

  // Fetch unit connections
  assign fif.imemload = fsif.imemload;           // Input from memory
  assign fif.freeze = fsif.freeze || fsif.jump;               // Input from scoreboard
  assign fif.misprediction = fsif.misprediction; // Input from branch predictor
  assign fif.correct_pc = fsif.correct_pc;       // Input from branch predictor
  assign fsif.pc = (fsif.freeze) ? prev_pc : fif.pc;                       // Output to scoreboard, branch predictor
  assign fsif.instr = (fsif.freeze) ? prev_instr : fif.instr;                 // Output to scoreboard
  assign fsif.imemREN = fif.imemREN;             // Output to memory
  assign fsif.imemaddr = fif.imemaddr;           // Output to memory

  always_ff @(posedge CLK, negedge nRST) begin
    if (!nRST) begin
      prev_pc <= '0;
      prev_instr <= '0;
      prev_pred <= '0;
    end
    else if (fsif.freeze) begin
      prev_pc <= prev_pc;
      prev_instr <= prev_instr;
      prev_pred <= prev_pred;
    end
    else begin
      prev_pc <= fif.pc;
      prev_instr <= fif.instr;
      prev_pred <= btbif.predicted_outcome;
    end
  end

  // Branch predictor connections
  assign btbif.pc = fif.pc;
  assign btbif.update_btb = fsif.update_btb;
  assign btbif.branch_outcome = fsif.branch_outcome;
  assign btbif.update_pc = fsif.update_pc;
  assign btbif.branch_target = fsif.branch_target;
  assign btbif.imemaddr = fif.imemaddr;

  assign fsif.predicted_outcome = (fsif.freeze) ? prev_pred : btbif.predicted_outcome;

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