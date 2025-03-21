`include "fetch_if.vh"
`include "isa_types.vh"

module fetch(
    input logic CLK, nRST, ihit,
    fetch_if.ft fif
);
    import isa_pkg::*;

    parameter PC_INIT = 32'd0;
    word_t next_pc;

    always_comb begin
        next_pc = fif.pc_prediction;

        if (fif.misprediction) begin
            next_pc = fif.correct_pc;
        end else if (fif.freeze) begin
            next_pc = fif.pc;
        end else begin
            next_pc = fif.pc_prediction;
        end
    end

    always_ff @(posedge CLK, negedge nRST) begin : REG_LOGIC
        if (!nRST) begin
            fif.pc <= PC_INIT;
            fif.instr <= '0;
        end else begin
            if (ihit && !fif.freeze) begin
                fif.pc <= next_pc;
                fif.instr <= fif.imemload;
            end else begin
                fif.pc <= '0;
                fif.instr <= '0;
            end
        end
    end
endmodule