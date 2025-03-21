`include "fetch_if.vh"
`include "isa_types.vh"

module fetch(
    input logic CLK, nRST, ihit,
    fetch_if.ft fif
);
    import isa_pkg::*;

    parameter PC_INIT = 32'd0;
    word_t pc_reg;
    word_t next_pc;

    always_comb begin
        next_pc = fif.pc_prediction;

        if (fif.misprediction) begin
            next_pc = fif.correct_pc;
        end
        
        if (fif.freeze) begin
            next_pc = pc_reg;
        end
    end

    always_ff @(posedge CLK, negedge nRST) begin : REG_LOGIC
        if (!nRST) begin
            pc_reg <= PC_INIT;
            fif.instr <= '0;
        end else begin
            if (ihit && !fif.freeze) begin
                pc_reg <= next_pc;
                fif.instr <= fif.imemload;
            end else begin
                pc_reg <= '0;
                fif.instr <= '0;
            end
        end
    end

    assign fif.imemaddr = next_pc;
    assign fif.pc = pc_reg;
endmodule