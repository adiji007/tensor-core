/* PIPELINE TYPES INTERFACE */

`ifndef PIPELINE_PKG_VH
`define PIPELINE_PKG_VH
`include "isa_types.vh"
`include "datapath_types.vh"

package pipeline_pkg;
    import isa_pkg::*;
    import datapath_pkg::*;

// FETCH/DISPATCH LATCH:
    typedef struct packed
    {
        word_t instr, pc;
    }   fd_t;

// ISSUE/EXECUTE LATCH:
    typedef struct packed
    {
    fu_bits_t fu_en; // 0 - alu, 1 - sls, 2 - br, 3 - mls, 4 - gemm
    // br, alu, sls, mls
    word_t rdat1; // mls needs for addr
    word_t rdat2; // mls usees as stride
    word_t imm;   // mls needs for addr 
    // branch
    branch_t branch_type;
    word_t branch_pc;
    logic branch_pred_pc;
    logic bfu_branch;
    // alu
    aluop_t alu_op;
    // matrix ls
    matrix_mem_t ls_in;
    // scalar ls
    scalar_mem_t mem_type;
    // gemm
    matbits_t md;
    matbits_t ms1; // used for m_ls
    matbits_t ms2; // used for m_ls
    matbits_t ms3;

    logic halt;
    } ie_t;

//  EXECUTE/WRITEBACK LATCH:
    typedef struct packed
    {
    word_t wb_data;
    logic s_rw_en;
    regbits_t s_rw;
    logic m_rw_en;
    matbits_t m_rw; 
    logic [WORD_W-1:0] s_wdata; 
    logic load_done;  
    logic alu_done; 
    logic bfu_branch_outcome;
    word_t bfu_updated_pc;
    logic bfu_misprediction;
    word_t bfu_correct_pc;
    logic bfu_update_btb;
    word_t bfu_update_pc;
    word_t bfu_branch_target;
    /////////////////////////

    // Scalar ALU FU
    logic salu_negative;
    logic salu_overflow;
    word_t salu_port_output;
    logic salu_zero;
    
    // Scalar Load/Store FU
    word_t sls_dmemaddr;
    logic sls_dmemREN;
    logic sls_dmemWEN;
    word_t sls_dmemstore;
    word_t sls_dmemload;
    logic sls_dhit;
    
    // MLS FU
    matrix_ls_t fu_matls_out;
    
    // Gemm FU
    logic gemm_new_weight_out;
    fu_gemm_t gemm_matrix_num; 
    }   ew_t;

endpackage;
`endif