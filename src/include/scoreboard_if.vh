`ifndef SCOREBOARD_IF_VH
`define SCOREBOARD_IF_VH
`include "isa_types.vh"
`include "datapath_types.vh"

interface scoreboard_if;
    import isa_pkg::*;
    import datapath_pkg::*;

    // inputs
    fetch_t fetch;
    // logic flush;

    wb_t wb_issue;
    wb_ctr_t wb_dispatch;
    word_t s_wdata;

    // execute signals
    logic branch_miss, branch_resolved;
    logic [4:0] fu_ex;

    issue_t out;
    
    modport SB (
        input fetch, wb_issue, wb_dispatch, branch_miss, branch_resolved, fu_ex,
        output out
    );

    modport tb (
        input out,
        output fetch, wb_issue, wb_dispatch, branch_miss, branch_resolved, fu_ex
    );
    

endinterface
`endif
