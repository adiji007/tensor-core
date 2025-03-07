onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /execute_tb/eif/bfu_branch
add wave -noupdate /execute_tb/eif/bfu_branch_gate_sel
add wave -noupdate /execute_tb/eif/bfu_branch_outcome
add wave -noupdate /execute_tb/eif/bfu_predicted_outcome
add wave -noupdate /execute_tb/eif/bfu_misprediction
add wave -noupdate /execute_tb/eif/bfu_update_btb
add wave -noupdate /execute_tb/eif/bfu_branch_type
add wave -noupdate /execute_tb/eif/bfu_reg_a
add wave -noupdate /execute_tb/eif/bfu_reg_b
add wave -noupdate /execute_tb/eif/bfu_current_pc
add wave -noupdate /execute_tb/eif/bfu_imm
add wave -noupdate /execute_tb/eif/bfu_updated_pc
add wave -noupdate /execute_tb/eif/bfu_correct_pc
add wave -noupdate /execute_tb/eif/bfu_update_pc
add wave -noupdate /execute_tb/eif/bfu_branch_target
add wave -noupdate /execute_tb/eif/salu_port_a
add wave -noupdate /execute_tb/eif/salu_port_b
add wave -noupdate /execute_tb/eif/salu_aluop
add wave -noupdate /execute_tb/eif/sls_imm
add wave -noupdate /execute_tb/eif/sls_rs1
add wave -noupdate /execute_tb/eif/sls_rs2
add wave -noupdate /execute_tb/eif/sls_dmem_in
add wave -noupdate /execute_tb/eif/sls_dhit_in
add wave -noupdate /execute_tb/eif/sls_mem_type
add wave -noupdate /execute_tb/eif/mls_mhit
add wave -noupdate /execute_tb/eif/mls_enable
add wave -noupdate /execute_tb/eif/mls_ls_in
add wave -noupdate /execute_tb/eif/mls_rd_in
add wave -noupdate /execute_tb/eif/mls_rs_in
add wave -noupdate /execute_tb/eif/mls_imm_in
add wave -noupdate /execute_tb/eif/mls_stride_in
add wave -noupdate /execute_tb/eif/gemm_enable
add wave -noupdate /execute_tb/eif/gemm_new_weight_in
add wave -noupdate /execute_tb/eif/gemm_rs1_in
add wave -noupdate /execute_tb/eif/gemm_rs2_in
add wave -noupdate /execute_tb/eif/gemm_rs3_in
add wave -noupdate /execute_tb/eif/gemm_rd_in
add wave -noupdate /execute_tb/eif/eif_output
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {229080 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
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
WaveRestoreZoom {0 ps} {229010 ps}
