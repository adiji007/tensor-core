/* Writeback Module */

`include "datapath_types.vh"
`include "isa_types.vh"
`include "writeback_if.vh"

module writeback
(
    input logic CLK, 
    input logic nRST,
    writeback_if.wb wbif // WRITEBACK IF
);

// Importing types
import datapath_pkg::*;
import isa_pkg::*;

logic bbuff_wen, bbuff_ren;
wb_t bbuff_out, bbuff_in;
logic bbuff_full, bbuff_empty;

logic nbuff_wen, nbuff_ren;
wb_t nbuff_out, nbuff_in;
logic nbuff_full, nbuff_empty;

buffer_module #(.BUFFER_WIDTH($bits(wb_t)),
                .BUFFER_DEPTH(31)
) branch_buff (
        .CLK(CLK),
        .nRST(nRST),
        .write_en(bbuff_wen),  // if spec signal is high
        .read_en(bbuff_ren),   // Branch Resolved can read data --> Need to Leave on till empty
        .clear(wbif.branch_mispredict),    // Clear data in Buffer if Branch Mispredict
        .din(bbuff_in),
        .dout(bbuff_out),            // Buffer out, in wb_t
        .full(bbuff_full),
        .empty(bbuff_empty)
);

buffer_module #(.BUFFER_WIDTH($bits(wb_t)),
                .BUFFER_DEPTH(31)
) norm_buff (
        .CLK(CLK),
        .nRST(nRST),
        .write_en(nbuff_wen),  // if spec signal is high
        .read_en(nbuff_ren),   // Branch Resolved can read data --> Need to Leave on till empty
        .clear(0),    // Clear data in Buffer if Branch Mispredict
        .din(nbuff_in),
        .dout(nbuff_out),            // Buffer out, in wb_t
        .full(nbuff_full),
        .empty(nbuff_empty)
);

    // OUTPUTS
    // logic s_reg_en;  // scalar read write reg enable
    // regbits_t s_reg; // scalar read write register
    // logic [WORD_W-1:0] s_wdata; //empty until execute (write data)

    // INPUTS
    // input s_wdata, reg_sel, reg_en, buff_clear, buff_w_en, buff_r_en,

always_comb begin : Writeback
    // Buffer input signals
    bbuff_in.s_reg_en        =  0;
    bbuff_in.s_reg           = '0;
    bbuff_in.s_wdata         = '0;
    bbuff_wen = 0;
    bbuff_ren = 0;

    nbuff_in.s_reg_en        =  0;
    nbuff_in.s_reg           = '0;
    nbuff_in.s_wdata         = '0;
    nbuff_wen = 0;
    nbuff_ren = 0;

    // Writeback output signals
    wbif.wb_out.s_reg_en    =  0;
    wbif.wb_out.s_reg       = '0;
    wbif.wb_out.s_wdata     = '0;

    if (wbif.branch_mispredict) begin
        bbuff_clear = 1;
    end

    else if (wbif.branch_spec) begin   // Speculative load into buffer
        bbuff_wen  = 1;
        bbuff_in.s_reg_en        =  1;
        bbuff_in.s_reg           =  wbif.reg_sel;
        bbuff_in.s_wdata         =  wbif.s_wdata;
        if (!nbuff_empty) begin
            nbuff_ren = 1;
            wbif.wb_out.s_reg_en = 1;
            wbif.wb_out.s_reg = nbuff_out.s_reg;
            wbif.wb_out.s_wdata = nbuff_out.s_wdata;
        end
    end
    else if (!wbif.branch_spec && !bbuff_empty) begin  // Branch Buffer resolved but all data not written back
        nbuff_wen = 1;
        nbuff_in.s_reg_en        =  1;
        nbuff_in.s_reg           =  wbif.reg_sel;
        nbuff_in.s_wdata         =  wbif.s_wdata;

        bbuff_ren = 1;
        wbif.wb_out.s_reg_en = 1;
        wbif.wb_out.s_reg = bbuff_out.s_reg;
        wbif.wb_out.s_wdata = bbuff_out.s_wdata;
    end

    else if (!nbuff_empty) begin
        nbuff_wen = 1;
        nbuff_in.s_reg_en        =  1;
        nbuff_in.s_reg           =  wbif.reg_sel;
        nbuff_in.s_wdata         =  wbif.s_wdata;

        nbuff_ren = 1;
        wbif.wb_out.s_reg_en = 1;
        wbif.wb_out.s_reg = nbuff_out.s_reg;
        wbif.wb_out.s_wdata = nbuff_out.s_wdata;
    end
    else begin
        wbif.wb_out.s_reg_en = 1;
        wbif.wb_out.s_reg = wbif.reg_sel;
        wbif.wb_out.s_wdata = wbif.s_wdata;
    end
end

endmodule
