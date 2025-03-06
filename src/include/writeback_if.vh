/*
    Interface signals for the Writeback Module
*/

`ifndef WRITEBACK_IF_VH
`define WRITEBACK_IF_VH
`include "datapath_types.vh"
`include "isa_types.vh"

interface writeback_if;
    import datapath_pkg::*;
    import isa_pkg::*;

    // Inputs from Functional Units
    // ALU_out, alu_done
    // Scalar_load, L/S done
    word_t s_wdata;
    logic  branch_mispredict, branch_spec;
    regbits_t reg_sel;

    // Possible other done flags? 
    // Outputs of stage
    wb_t wb_out;
    
    modport wb (
        input s_wdata, reg_sel, branch_mispredict, branch_spec,
        output wb_out
    );

endinterface
`endif

