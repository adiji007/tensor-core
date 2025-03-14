// PIPELINE PACKAGES
`include "pipeline_types.vh"
`include "datapath_types.vh"
`include "isa_types.vh"

// INTERFACES
`include "fetch_if.vh"
`include "scoreboard_if.vh"
`include "dispatch_if.vh"
`include "issue_if.vh"
`include "regfile_if.vh"
`include "execute_if.vh"
`include "writeback_if.vh"
`include "datapath_cache_if.vh"


module sc_datapath
(
    input logic CLK, nrst,
    datapath_cache_if.dp dcif
);
    fetch_if fif();
    fetch FETCH (CLK, nrst, dcif.ihit, fif);

    scoreboard_if sbif();
    scoreboard SCOREBOARD (CLK, nrst, sbif);

    dispatch_if dif();
    dispatch DISPATCH (CLK, nrst, dif);
    
    issue_if isif();
    issue ISSUE (CLK, nrst, isif);
    
    regfile_if rfif();
    // // regfile REGFILE (CLK, nrst, fuif);
    regfile REGFILE (CLK, nrst, rfif);

    execute_if eif();
    execute EXECUTE (CLK, nrst, eif);

    writeback_if wbif();
    writeback WRITEBACK (CLK, nrst, wbif);

    // //Scratch Pad 
    // scratchpad_if spif();

// IMPORT PACKAGE
    import pipeline_pkg::*;
    import isa_pkg::*;
    import datapath_pkg::*;

// LATCH INSTANTIATIONS

    fd_t fd_fetch;
    fd_t fd_dispatch;

    ie_t ie_issue;
    ie_t ie_execute;

    ew_t ew_execute;
    ew_t ew_writeback;

// DATAPATH GENERAL CONNECTIONS
    assign dcif.imemREN = 1;
    assign dcif.imemaddr = fif.pc;

    assign dcif.dmemREN = eif.eif_output.sls_dmemREN;
    assign dcif.dmemWEN = eif.eif_output.sls_dmemWEN;
    assign dcif.dmemaddr = eif.eif_output.sls_dmemaddr;
    assign dcif.halt = ie_issue.halt;
    assign dcif.dmemstore = eif.eif_output.sls_dmemstore;

//Scoreboard Connection 
    assign sbif.fetch.br_pred = eif.eif_output.bfu_misprediction;
    assign sbif.fetch.br_pc = eif.eif_output.bfu_correct_pc; //want to receive the correct pc
    assign sbif.fetch.imemload = dcif.imemload;
    assign sbif.wb.s_wdata = ew_writeback.s_wdata;
    assign sbif.wb = wbif.wb_out;
    assign sbif.wb_ctrl.alu_done = wbif.wb_out.alu_done;
    assign sbif.wb_ctrl.load_done = wbif.wb_out.load_done;
    assign sbif.wb_ctrl.s_rw_en = wbif.wb_out.s_rw_en;
    assign sbif.wb_ctrl.s_rw = wbif.wb_out.s_rw;
    assign sbif.branch_miss = eif.eif_output.bfu_misprediction;
    assign sbif.branch_resolved = eif.eif_output.resolved;

//Scratchpad Connection

    // assign spif.sStore = '1; 
    //reason its not working is because of no data request signals

    //FETCH CONNECTIONS
    assign fif.imemload = dcif.imemload;
    assign fif.freeze = dif.out.freeze;
    assign fif.flush = ew_execute.bfu_misprediction; //mispredicted branch = flush
    // assign fif.stall = 

    //BEFORE LATCH
    assign fd_fetch.instr = fif.instr; //imemload
    assign fd_fetch.pc = fif.pc;

//  ISSUE/EXECUTE CONNECTIONS

    //BEFORE LATCH
    assign ie_issue.rdat1 = sbif.out.rdat1;
    assign ie_issue.rdat2 = sbif.out.rdat2;
    assign ie_issue.fu_en = sbif.out.fu_en;
    assign ie_issue.branch_pc = sbif.out.branch_pc;
    assign ie_issue.bfu_branch = sbif.out.fu_en;
    assign ie_issue.branch_type = sbif.out.branch_type;
    assign ie_issue.imm = sbif.out.imm;
    assign ie_issue.branch_pred_pc = sbif.out.branch_pred_pc;
//  EXECUTE/WRITEBACK CONNECTIONS
    
    //BEFORE LATCH
    // assign ew_execute.wb_data = wbif.wb_out;
    // assign ie_issue.d_out = dif.out;

    //assign ie_excecute signals here to the functional units

    // EXECUTE BFU FUNCTIONAL UNIT
    assign eif.bfu_branch_type = ie_execute.branch_type;
    assign eif.bfu_reg_a = ie_execute.rdat1;
    assign eif.bfu_reg_b = ie_execute.rdat2;
    assign eif.bfu_current_pc = ie_execute.branch_pc;
    assign eif.bfu_branch = ie_execute.bfu_branch;
    assign eif.bfu_reg_a = ie_execute.rdat1;
    assign eif.bfu_reg_b = ie_execute.rdat2;
    assign eif.bfu_imm = ie_execute.imm;
    assign eif.bfu_predicted_outcome = ie_execute.branch_pred_pc;
    // assign eif.bfu_branch_gate_sel = '0; //dont have something from scoreboard for this

    //SCALAR ALU FU
    assign eif.salu_aluop = ie_execute.alu_op;
    assign eif.salu_port_a = ie_execute.rdat1;
    assign eif.salu_port_b = ie_execute.rdat2;

    //SCALAR LOAD/STORE FU
    assign eif.sls_imm = ie_execute.imm;
    assign eif.sls_rs1 = ie_execute.rdat1;
    assign eif.sls_rs2 = ie_execute.rdat2;
    assign eif.sls_dmem_in = dcif.dmemload;
    assign eif.sls_dhit_in = dcif.dhit;
    assign eif.sls_mem_type = ie_execute.mem_type;

    //MLS FU
    //didnt implement yet

    //GEMM

    //EXECUTE LATCHES

    assign ew_execute.salu_port_output = eif.eif_output.salu_port_output;
    assign ew_execute.alu_done = eif.eif_output
    assign ew_execute.load_done = eif.eif_output
    assign ew_execute.sls_dmemload = dcif.dmemload;
    
    //WRITE BACK ASSIGNMENTS
    assign wbif.alu_out = ew_writeback.salu_port_output;
    assign wbif.load_ready = ew_writeback.load_done;
    assign wbif.dmemload = ew_writeback.sls_dmemload;
    assign wbif.alu_ready = ew_writeback.alu_done;

    // assign wbif.wb_out.s_rw_en =
    assign sbif.s_wdata = wbif.wb_out.s_wdata;
    // assign wbif.wb_out.alu_done = 

    //AFTER LATCH
    assign sbif.wb = ew_writeback;

// FLIP-FLOP FOR LATCHES

    always_ff @(posedge CLK, negedge nrst) begin
        if (nrst == 0) begin
            fd_dispatch <= 0;
            ie_execute <= 0;
            ew_writeback <= 0;
        end
        else begin
            if(dcif.ihit && !dif.out.freeze) begin
                fd_dispatch <= fd_fetch;
            end
            ie_execute <= ie_issue;
            ew_writeback <= ew_execute;
        end
    end

endmodule
