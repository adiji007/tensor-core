`include "systolic_array_FIFO_if.vh"
`include "sys_arr_pkg.vh"
/* verilator lint_off IMPORTSTAR */
import sys_arr_pkg::*;
/* verilator lint_off IMPORTSTAR */

module sysarr_FIFO#(
    parameter DEPTH = 2
)(
    input logic clk, nRST,
    systolic_array_FIFO_if.FIFO fifo
);

    // Internal storage for FIFO
    logic [DW * N - 1 : 0] fifo_mem [0:DEPTH-1]; //need space for two arrays 2 rows of matrix rows
    logic [DW * N - 1 : 0] fifo_mem_nxt [0:DEPTH-1];
    // Valid flags for each row.
    logic valid [0:DEPTH-1];

    // Pointers for writing and reading rows.
    logic [$clog2(DEPTH)-1:0] wr_ptr, rd_ptr;
    // Column pointer for the current word within a row (0 to N-1).
    logic [$clog2(N):0] col_ptr;

    // Combinationally extract the current output word from the current row.
    // This uses bit slicing based on the column pointer.
    assign fifo.out = mem[rd_ptr][col_ptr*WIDTH +: WIDTH];

    always_ff @(posedge clk or negedge nRST) begin
        if (!nRST) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            col_ptr <= 0;
            valid[0] <= 1'b0;
            valid[1] <= 1'b0;
        end else begin
            // --- Load Operation ---
            // When load is asserted, store the incoming row into the FIFO.
            if (fifo.load) begin
                mem[wr_ptr] <= fifo.load_values;  // load an entire row (WIDTH*N bits)
                valid[wr_ptr] <= 1'b1;
                // Advance the write pointer circularly.
                wr_ptr <= (wr_ptr + 1) % DEPTH;
                // If FIFO is empty, initialize read pointer and column pointer.
                if (!valid[rd_ptr]) begin
                    rd_ptr <= wr_ptr;
                    col_ptr <= 0;
                end
            end

            // --- Shift Operation ---
            // When shift is asserted, output the next word in the current row.
            if (fifo.shift && valid[rd_ptr]) begin
                if (col_ptr < N - 1) begin
                    col_ptr <= col_ptr + 1;
                end else begin
                    // End of current row reached: mark row as invalid and move to the next row.
                    valid[rd_ptr] <= 1'b0;
                    rd_ptr <= (rd_ptr + 1) % DEPTH;
                    col_ptr <= 0;
                end
            end
        end
    end
endmodule