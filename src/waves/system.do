onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /system_tb/CLK
add wave -noupdate /system_tb/nRST
add wave -noupdate /system_tb/dcif/halt
add wave -noupdate /system_tb/dcif/flushed
add wave -noupdate -divider {Instruction Operations}
add wave -noupdate -group icache /system_tb/DUT/MS/ICACHE/icache_format
add wave -noupdate -group icache /system_tb/DUT/MS/ICACHE/icache
add wave -noupdate -group icache /system_tb/DUT/MS/ICACHE/nxt_icache
add wave -noupdate -group icache /system_tb/DUT/MS/ICACHE/icache_state
add wave -noupdate -group icache /system_tb/DUT/MS/ICACHE/nxt_icache_state
add wave -noupdate -expand -group {datapath enables} /system_tb/DUT/DP/eif/bfu_enable
add wave -noupdate -expand -group {datapath enables} /system_tb/DUT/DP/eif/salu_enable
add wave -noupdate -expand -group {datapath enables} /system_tb/DUT/DP/eif/sls_enable
add wave -noupdate -expand -group {datapath enables} /system_tb/DUT/DP/eif/mls_enable
add wave -noupdate -expand -group {datapath enables} /system_tb/DUT/DP/eif/gemm_enable
add wave -noupdate -expand -group {datapath instr signals} /system_tb/dcif/gemm_complete
add wave -noupdate -expand -group {datapath instr signals} /system_tb/dcif/load_complete
add wave -noupdate -expand -group {datapath instr signals} /system_tb/dcif/store_complete
add wave -noupdate -expand -group {datapath instr signals} /system_tb/DUT/dcif/imemaddr
add wave -noupdate -expand -group {datapath instr signals} -radix hexadecimal /system_tb/DUT/dcif/imemload
add wave -noupdate -expand -group {datapath instr signals} /system_tb/DUT/dcif/imemREN
add wave -noupdate -expand -group {cif icache} /system_tb/cif/iwait
add wave -noupdate -expand -group {cif icache} /system_tb/cif/iREN
add wave -noupdate -expand -group {cif icache} /system_tb/cif/iload
add wave -noupdate -expand -group {cif icache} -radix unsigned /system_tb/cif/iaddr
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/instr
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/imemREN
add wave -noupdate -expand -group {fif interface fetch} -radix unsigned /system_tb/DUT/DP/FETCH/fif/imemaddr
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/imemload
add wave -noupdate -expand -group {fif interface fetch} -radix unsigned /system_tb/DUT/DP/FETCH/fif/pc
add wave -noupdate -expand -group {fif interface fetch} -radix unsigned /system_tb/DUT/DP/FETCH/fetch_unit/next_pc
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/correct_pc
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/ihit
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemREN
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemload
add wave -noupdate -expand -group icache-datapath -radix unsigned /system_tb/dcif/imemaddr
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iREN
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/acif/ramREN
add wave -noupdate -expand -group icache-arbiter -radix unsigned /system_tb/DUT/MS/ARB/acif/ramaddr
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iload
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/icache_load
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iaddr
add wave -noupdate -divider {Scalar Operations}
add wave -noupdate -expand -group dispatch -childformat {{/system_tb/DUT/DP/SCOREBOARD/diif/fetch.br_pc -radix unsigned}} -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/diif/fetch.br_pc {-height 16 -radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/diif/fetch
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/DI/RSTS/status
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fust_s
add wave -noupdate -expand -group dispatch -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/diif/fust_m.op {-height 16 -childformat {{md -radix unsigned}} -expand} /system_tb/DUT/DP/SCOREBOARD/diif/fust_m.op.md {-radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/diif/fust_m
add wave -noupdate -expand -group dispatch -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/diif/fust_g.op {-height 16 -childformat {{ms1 -radix unsigned} {ms2 -radix unsigned} {ms3 -radix unsigned} {md -radix unsigned}} -expand} /system_tb/DUT/DP/SCOREBOARD/diif/fust_g.op.ms1 {-radix unsigned} /system_tb/DUT/DP/SCOREBOARD/diif/fust_g.op.ms2 {-radix unsigned} /system_tb/DUT/DP/SCOREBOARD/diif/fust_g.op.ms3 {-radix unsigned} /system_tb/DUT/DP/SCOREBOARD/diif/fust_g.op.md {-radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/diif/fust_g
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fust_state
add wave -noupdate -expand -group dispatch -radix unsigned /system_tb/DUT/DP/SCOREBOARD/DI/m_rs1
add wave -noupdate -expand -group dispatch -radix unsigned /system_tb/DUT/DP/SCOREBOARD/DI/m_rs2
add wave -noupdate -expand -group dispatch -radix unsigned /system_tb/DUT/DP/SCOREBOARD/DI/m_rs3
add wave -noupdate -expand -group dispatch -childformat {{/system_tb/DUT/DP/SCOREBOARD/diif/wb.s_rw -radix unsigned}} -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/diif/wb.s_rw {-height 16 -radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/diif/wb
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/branch_resolved
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/branch_miss
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fu_ex
add wave -noupdate -expand -group dispatch -radix unsigned /system_tb/DUT/DP/SCOREBOARD/DI/m_rd
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/DI/tag_val
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/DI/dispatch.fust_m.op.md
add wave -noupdate -expand -group dispatch -group rstmif /system_tb/DUT/DP/SCOREBOARD/DI/rstmif/di_sel
add wave -noupdate -expand -group dispatch -group rstmif /system_tb/DUT/DP/SCOREBOARD/DI/rstmif/di_write
add wave -noupdate -expand -group dispatch -group rstmif /system_tb/DUT/DP/SCOREBOARD/DI/rstmif/di_tag
add wave -noupdate -expand -group dispatch -group rstmif /system_tb/DUT/DP/SCOREBOARD/DI/rstmif/wb_sel
add wave -noupdate -expand -group dispatch -group rstmif /system_tb/DUT/DP/SCOREBOARD/DI/rstmif/wb_write
add wave -noupdate -expand -group dispatch -group rstmif -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/DI/rstmif/status.idx -expand} /system_tb/DUT/DP/SCOREBOARD/DI/rstmif/status
add wave -noupdate -expand -group dispatch -group {scalar rst} -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/DI/RSTS/status.idx -expand} /system_tb/DUT/DP/SCOREBOARD/DI/RSTS/status
add wave -noupdate -expand -group dispatch -group {matrix rst} -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/DI/RSTM/status.idx -expand} /system_tb/DUT/DP/SCOREBOARD/DI/RSTM/status
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/DI/spec
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/out
add wave -noupdate -expand -group dispatch -childformat {{/system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s.rd -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s.rs1 -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s.rs2 -radix unsigned}} -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s.rd {-height 16 -radix unsigned} /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s.rs1 {-height 16 -radix unsigned} /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s.rs2 {-height 16 -radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_m
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_g
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fu_s
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fu_t
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s_en
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_m_en
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_g_en
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_t1
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_t2
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_gt1
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_gt2
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_gt3
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/alu_op
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/stride
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/halt
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/i_flag
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/m_reg_write
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/s_reg_write
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/jalr
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/jal
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/s_mem_type
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/branch_op
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/imm
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/instr
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/u_type
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/fu_s
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/fu_m
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/m_mem_type
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/matrix_rd
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/matrix_rs1
add wave -noupdate -expand -group dispatch -expand -group cuif /system_tb/DUT/DP/SCOREBOARD/DI/cuif/fu_t
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/jump
add wave -noupdate -expand -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/freeze
add wave -noupdate /system_tb/DUT/DP/SCOREBOARD/DI/s_busy
add wave -noupdate /system_tb/DUT/DP/SCOREBOARD/DI/m_busy
add wave -noupdate /system_tb/DUT/DP/SCOREBOARD/DI/WAW
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/dispatch
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fu_t
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_s
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_m
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_g
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fu_s
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_s_en
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_m_en
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_g_en
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_t1
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_t2
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_gt1
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_gt2
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_gt3
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/branch_miss
add wave -noupdate -expand -group issue -expand /system_tb/DUT/DP/SCOREBOARD/isif/fu_ex
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/freeze
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/wb
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/s_wdata
add wave -noupdate -expand -group issue -expand /system_tb/DUT/DP/SCOREBOARD/IS/fust_state
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/next_fust_state
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/oldest_rdy
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/age
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/rdy
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/next_oldest_rdy
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/test
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/n_age
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/next_ready
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/next_single_ready
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/IS/n_rdy
add wave -noupdate -expand -group issue -childformat {{/system_tb/DUT/DP/SCOREBOARD/isif/out.rd -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/isif/out.rdat2 -radix hexadecimal} {/system_tb/DUT/DP/SCOREBOARD/isif/out.imm -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/isif/out.branch_pc -radix unsigned}} -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/isif/out.fu_en -expand /system_tb/DUT/DP/SCOREBOARD/isif/out.rd {-height 16 -radix unsigned} /system_tb/DUT/DP/SCOREBOARD/isif/out.rdat2 {-height 16 -radix hexadecimal} /system_tb/DUT/DP/SCOREBOARD/isif/out.imm {-height 16 -radix unsigned} /system_tb/DUT/DP/SCOREBOARD/isif/out.branch_pc {-height 16 -radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/isif/out
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_s
add wave -noupdate -expand -group issue -expand -subitemconfig {/system_tb/DUT/DP/SCOREBOARD/isif/fust_m.op -expand} /system_tb/DUT/DP/SCOREBOARD/isif/fust_m
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_g
add wave -noupdate -expand -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_state
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/bfu_enable
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/bfu_j_type
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/bfu_predicted_outcome
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/bfu_branch_type
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/bfu_reg_a
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/bfu_reg_b
add wave -noupdate -expand -group Execute -radix unsigned /system_tb/DUT/DP/EXECUTE/eif/bfu_current_pc
add wave -noupdate -expand -group Execute -radix unsigned /system_tb/DUT/DP/EXECUTE/eif/bfu_imm
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/salu_port_a
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/salu_port_b
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/salu_aluop
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/salu_enable
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_imm
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_rs1
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_rs2
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_dmem_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_dhit_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_enable
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/sls_mem_type
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/mls_mhit
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/mls_enable
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/mls_ls_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/mls_rd_in
add wave -noupdate -expand -group Execute -radix unsigned /system_tb/DUT/DP/EXECUTE/eif/mls_rs_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/mls_imm_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_enable
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_new_weight_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_rs1_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/eif_output.bfu_resolved
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_rs2_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_rs3_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_rd_in
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/gemm_done
add wave -noupdate -expand -group Execute -childformat {{/system_tb/DUT/DP/EXECUTE/eif/eif_output.jump_wdat -radix unsigned}} -expand -subitemconfig {/system_tb/DUT/DP/EXECUTE/eif/eif_output.jump_wdat {-height 16 -radix unsigned}} /system_tb/DUT/DP/EXECUTE/eif/eif_output
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/halt
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/spec
add wave -noupdate -expand -group Execute /system_tb/DUT/DP/EXECUTE/eif/rd
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/mhit
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/enable
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/ls_in
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/rd_in
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/rs_in
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/imm_in
add wave -noupdate -expand -group {matrix ls fu} /system_tb/DUT/DP/EXECUTE/mlsif/stride_in
add wave -noupdate -expand -group {matrix ls fu} -expand /system_tb/DUT/DP/EXECUTE/mlsif/fu_matls_out
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/EXECUTE/BFU/CLK
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/EXECUTE/BFU/nRST
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/EXECUTE/BFU/zero
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/EXECUTE/BFU/actual_outcome
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/EXECUTE/BFU/btb_updated
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/fif/br_jump
add wave -noupdate -expand -group {Branch FU} /system_tb/DUT/DP/EXECUTE/BFU/last_branch_pc
add wave -noupdate -expand -group {Branch FU} -radix unsigned /system_tb/DUT/DP/FETCH/fif/correct_pc
add wave -noupdate -expand -group {Branch FU} -radix unsigned /system_tb/DUT/DP/EXECUTE/BFU/updated_pc
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/alu_wdat
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/load_wdat
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/jump_wdat
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/branch_mispredict
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/branch_spec
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/branch_correct
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/alu_done
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/load_done
add wave -noupdate -expand -group wbif /system_tb/DUT/DP/wbif/jump_done
add wave -noupdate -expand -group wbif -radix unsigned /system_tb/DUT/DP/wbif/alu_reg_sel
add wave -noupdate -expand -group wbif -radix unsigned /system_tb/DUT/DP/wbif/load_reg_sel
add wave -noupdate -expand -group wbif -radix unsigned /system_tb/DUT/DP/wbif/jump_reg_sel
add wave -noupdate -expand -group wbif -expand /system_tb/DUT/DP/wbif/wb_out
add wave -noupdate /system_tb/DUT/DP/SCOREBOARD/DI/cuif/fu_s
add wave -noupdate -expand -group spif /system_tb/DUT/spif/instrFIFO_WEN
add wave -noupdate -expand -group spif /system_tb/DUT/spif/psumout_en
add wave -noupdate -expand -group spif /system_tb/DUT/spif/drained
add wave -noupdate -expand -group spif /system_tb/DUT/spif/fifo_has_space
add wave -noupdate -expand -group spif /system_tb/DUT/spif/sLoad_hit
add wave -noupdate -expand -group spif /system_tb/DUT/spif/sStore_hit
add wave -noupdate -expand -group spif /system_tb/DUT/spif/instrFIFO_wdata
add wave -noupdate -expand -group spif /system_tb/DUT/spif/psumout_row_sel_in
add wave -noupdate -expand -group spif /system_tb/DUT/spif/sLoad_row
add wave -noupdate -expand -group spif /system_tb/DUT/spif/psumout_data
add wave -noupdate -expand -group spif /system_tb/DUT/spif/load_data
add wave -noupdate -expand -group spif /system_tb/DUT/spif/instrFIFO_full
add wave -noupdate -expand -group spif /system_tb/DUT/spif/partial_enable
add wave -noupdate -expand -group spif /system_tb/DUT/spif/weight_enable
add wave -noupdate -expand -group spif /system_tb/DUT/spif/input_enable
add wave -noupdate -expand -group spif /system_tb/DUT/spif/sLoad
add wave -noupdate -expand -group spif /system_tb/DUT/spif/sStore
add wave -noupdate -expand -group spif /system_tb/DUT/spif/gemm_complete
add wave -noupdate -expand -group spif /system_tb/DUT/spif/load_complete
add wave -noupdate -expand -group spif /system_tb/DUT/spif/store_complete
add wave -noupdate -expand -group spif /system_tb/DUT/spif/weight_input_data
add wave -noupdate -expand -group spif /system_tb/DUT/spif/partial_sum_data
add wave -noupdate -expand -group spif /system_tb/DUT/spif/store_data
add wave -noupdate -expand -group spif /system_tb/DUT/spif/weight_input_row_sel
add wave -noupdate -expand -group spif /system_tb/DUT/spif/partial_sum_row_sel
add wave -noupdate -expand -group spif -radix unsigned /system_tb/DUT/spif/load_addr
add wave -noupdate -expand -group spif /system_tb/DUT/spif/store_addr
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dhit
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemREN
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemWEN
add wave -noupdate -expand -group datapath -radix unsigned /system_tb/DUT/dcif/dmemload
add wave -noupdate -expand -group datapath -radix unsigned /system_tb/DUT/dcif/dmemstore
add wave -noupdate -expand -group datapath -radix unsigned /system_tb/DUT/dcif/dmemaddr
add wave -noupdate -group dcache /system_tb/DUT/acif/dREN
add wave -noupdate -group dcache /system_tb/DUT/acif/dWEN
add wave -noupdate -group dcache /system_tb/DUT/acif/load_done
add wave -noupdate -group dcache /system_tb/DUT/acif/store_done
add wave -noupdate -group dcache /system_tb/DUT/acif/daddr
add wave -noupdate -group dcache /system_tb/DUT/acif/dload
add wave -noupdate -group dcache /system_tb/DUT/acif/dstore
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/dcache_format
add wave -noupdate -group dcache -expand -subitemconfig {{/system_tb/DUT/MS/DCACHE/dcache[1]} -expand} /system_tb/DUT/MS/DCACHE/dcache
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/next_dcache
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/hit_count
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/dcache_state
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/next_dcache_state
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dREN
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dWEN
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/daddr
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dload
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dstore
add wave -noupdate /system_tb/DUT/MS/ARB/arbiter_state
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramWEN
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramREN
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramaddr
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramstore
add wave -noupdate -expand -group ram /system_tb/DUT/MS/ARB/dcache_load
add wave -noupdate -divider {Matrix Operations}
add wave -noupdate -childformat {{{/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[30]} -radix unsigned} {{/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[16]} -radix unsigned} {{/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[5]} -radix unsigned} {{/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[4]} -radix unsigned} {{/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[3]} -radix unsigned}} -subitemconfig {{/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[30]} {-height 16 -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[16]} {-height 16 -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[5]} {-height 16 -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[4]} {-height 16 -radix unsigned} {/system_tb/DUT/DP/SCOREBOARD/IS/RF/register[3]} {-height 16 -radix unsigned}} /system_tb/DUT/DP/SCOREBOARD/IS/RF/register
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/CLK
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/nRST
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/dcache_load
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/icache_load
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/local_addr_inc1
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/local_addr_inc2
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/load_count
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/next_load_count
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/sLoad_row_reg
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/next_sLoad_row_reg
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/sp_wait
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/dwait
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/iwait
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/arbiter_state
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/next_arbiter_state
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/load_data_reg
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/sp_load_addr
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/sp_load_data
add wave -noupdate -group {arbiter inside} /system_tb/DUT/MS/ARB/sp_hit
add wave -noupdate -expand -subitemconfig {{/system_tb/DUT/MS/SP/spb0/mats[1]} -expand} /system_tb/DUT/MS/SP/spb0/mats
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1046000 ps} 1} {{Cursor 2} {497000 ps} 1} {{Cursor 3} {734000 ps} 1} {{Cursor 4} {886000 ps} 1} {{Cursor 5} {433918 ps} 1} {{Cursor 6} {437875 ps} 0}
quietly wave cursor active 6
configure wave -namecolwidth 331
configure wave -valuecolwidth 143
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ps} {639811 ps}
