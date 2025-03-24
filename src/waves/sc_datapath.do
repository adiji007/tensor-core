onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/halt
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/ihit
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/imemREN
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/imemload
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/imemaddr
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/dhit
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/datomic
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/dmemREN
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/dmemWEN
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/flushed
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/dmemload
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/dmemstore
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/dmemaddr
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/mhit
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/matrix_ls
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/gemm_new_weight
add wave -noupdate -expand -group dcif /sc_datapath_tb/DUT/dcif/gemm_matrices
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/flush
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/freeze
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/misprediction
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/br_predicted
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/imemREN
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/imemaddr
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/imemload
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/pc_prediction
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/instr
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/pc
add wave -noupdate -expand -group FETCH /sc_datapath_tb/DUT/FETCH/fif/correct_pc
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/fetch
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/wb_issue
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/wb_dispatch
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/s_wdata
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/branch_miss
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/branch_resolved
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/fu_ex
add wave -noupdate -expand -group SB /sc_datapath_tb/DUT/SCOREBOARD/sbif/freeze
add wave -noupdate -expand -group SB -childformat {{/sc_datapath_tb/DUT/SCOREBOARD/sbif/out.rd -radix unsigned} {/sc_datapath_tb/DUT/SCOREBOARD/sbif/out.imm -radix unsigned}} -expand -subitemconfig {/sc_datapath_tb/DUT/SCOREBOARD/sbif/out.rd {-height 16 -radix unsigned} /sc_datapath_tb/DUT/SCOREBOARD/sbif/out.imm {-height 16 -radix unsigned}} /sc_datapath_tb/DUT/SCOREBOARD/sbif/out
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_branch
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_branch_outcome
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_enable
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_predicted_outcome
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_misprediction
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_update_btb
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/resolved
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_branch_type
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_reg_a
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_reg_b
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_current_pc
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_imm
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_updated_pc
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_correct_pc
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_update_pc
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/bfu_branch_target
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/salu_port_a
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/salu_port_b
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/salu_aluop
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/salu_enable
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_imm
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_rs1
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_rs2
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_dmem_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_dhit_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_enable
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/sls_mem_type
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_mhit
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_enable
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_ls_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_rd_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_rs_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_imm_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/mls_stride_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/gemm_enable
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/gemm_new_weight_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/gemm_rs1_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/gemm_rs2_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/gemm_rs3_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/gemm_rd_in
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/eif_output
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/halt
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/spec
add wave -noupdate -expand -group EX /sc_datapath_tb/DUT/EXECUTE/eif/rd
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/alu_wdat
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/load_wdat
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/branch_mispredict
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/branch_spec
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/branch_correct
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/alu_done
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/load_done
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/alu_reg_sel
add wave -noupdate -expand -group WB /sc_datapath_tb/DUT/WRITEBACK/wbif/load_reg_sel
add wave -noupdate -expand -group WB -expand /sc_datapath_tb/DUT/WRITEBACK/wbif/wb_out
add wave -noupdate -expand -group register /sc_datapath_tb/DUT/SCOREBOARD/IS/RF/CLK
add wave -noupdate -expand -group register /sc_datapath_tb/DUT/SCOREBOARD/IS/RF/nRST
add wave -noupdate -expand -group register /sc_datapath_tb/DUT/SCOREBOARD/IS/RF/register
add wave -noupdate -expand -group register /sc_datapath_tb/DUT/SCOREBOARD/IS/RF/next_reg
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/negative
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/overflow
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/zero
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/enable
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/aluop
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/port_a
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/port_b
add wave -noupdate -expand -group ALU /sc_datapath_tb/DUT/EXECUTE/SALU/aluif/port_output
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {120000 ps} 0}
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
configure wave -timelineunits ps
update
WaveRestoreZoom {750 ps} {315750 ps}
