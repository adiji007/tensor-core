// PIPELINE PACKAGES
`include "datapath_types.vh"

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

    execute_if eif();
    execute EXECUTE (CLK, nrst, eif);

    writeback_if wbif();
    writeback WRITEBACK (CLK, nrst, wbif);

    // total dp inputs and outputs
    // input   ihit, imemload, dhit, dmemload
    // output  halt, imemREN, imemaddr, dmemREN, dmemWEN, dmemstore, dmemaddr

    // IMPORT PACKAGE
    import isa_pkg::*;
    import datapath_pkg::*;

    // LATCH INSTANTIATIONS
    fetch_t fetch_out;
    fetch_t sb_in;

    issue_t sb_out;
    issue_t execute_in;

    execute_t execute_out;
    execute_t wb_in;

    // fetch signals
    // TODO 
    // - all the input signals from execute combinationally
    // - check the mem signals are correct to fetch
    // - the outputs of fetch should be set to the inputs of the fetch -> sb latch

    // input
    // assign fif.ihit = dcif.ihit;
    // assign fif.imemload = dcif.imemload

    // output
    // assign fetch_out.imemload  = fif.(idk yet)
    // assign fetch_out.br_pc     = fif.(idk yet)
    // assign fetch_out.br_pred   = fif.(idk yet)

    // sb signals

    // inputs
    assign sbif.fetch                 = sb_in;
    assign sbif.wb_issue              = wbif.wb_out;
    assign sbif.wb_dispatch.s_rw_en   = wbif.wb_out.reg_en;
    assign sbif.wb_dispatch.s_rw      = wbif.wb_out.reg_sel;
    assign sbif.branch_miss           = eif.eif_output.bfu_miss;
    assign sbif.branch_resolved       = eif.eif_output.bfu_resolved;
    assign sbif.fu_ex                 = eif.eif_output.fu_ex;

    // outputs
    assign sb_out = sbif.out;

    // execute signals

    // inputs

    // ouputs
    assign execute_out.alu_done      = eif.eif_output.fu_ex[0];
    assign execute_out.alu_wdat      = eif.eif_output.salu_port_output;
    assign execute_out.alu_reg_sel   = eif.eif_output.salu_rd;
    assign execute_out.load_done     = (eif.eif_output.sls_dhit == dhit_load);
    assign execute_out.load_wdat     = eif.eif_output.sls_dmemload;
    assign execute_out.load_reg_sel  = eif.eif_output.sls_rd;

    // wb signals

    // FLIP-FLOP FOR LATCHES
    always_ff @(posedge CLK, negedge nrst) begin
        if (!nrst) begin
            sb_in <= '0;
            execute_in <= '0;
            wb_in <= '0;
        end
        else begin
            sb_in <= fetch_out;
            execute_in <= sb_out;
            wb_in <= execute_out;
        end
    end

endmodule
