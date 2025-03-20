onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /execute_tb/PROG/#ublk#502948#92/tb_test_case
add wave -noupdate -expand -group {Matrix LS} /execute_tb/DUT/mlsif/mhit
add wave -noupdate -expand -group {Matrix LS} /execute_tb/DUT/mlsif/enable
add wave -noupdate -expand -group {Matrix LS} /execute_tb/DUT/mlsif/ls_in
add wave -noupdate -expand -group {Matrix LS} -radix unsigned /execute_tb/DUT/mlsif/rd_in
add wave -noupdate -expand -group {Matrix LS} -radix decimal /execute_tb/DUT/mlsif/rs_in
add wave -noupdate -expand -group {Matrix LS} -radix decimal /execute_tb/DUT/mlsif/imm_in
add wave -noupdate -expand -group {Matrix LS} -radix decimal /execute_tb/DUT/mlsif/stride_in
add wave -noupdate -expand -group {Matrix LS} -childformat {{/execute_tb/DUT/mlsif/fu_matls_out.rd_out -radix unsigned} {/execute_tb/DUT/mlsif/fu_matls_out.address -radix decimal} {/execute_tb/DUT/mlsif/fu_matls_out.stride_out -radix decimal}} -expand -subitemconfig {/execute_tb/DUT/mlsif/fu_matls_out.rd_out {-radix unsigned} /execute_tb/DUT/mlsif/fu_matls_out.address {-radix decimal} /execute_tb/DUT/mlsif/fu_matls_out.stride_out {-radix decimal}} /execute_tb/DUT/mlsif/fu_matls_out
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/enable
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/branch
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/branch_outcome
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/predicted_outcome
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/misprediction
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/update_btb
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/resolved
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/branch_type
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/reg_a
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/reg_b
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/current_pc
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/imm
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/updated_pc
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/correct_pc
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/update_pc
add wave -noupdate -expand -group Branch /execute_tb/DUT/fubif/branch_target
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/negative
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/overflow
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/zero
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/enable
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/aluop
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/port_a
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/port_b
add wave -noupdate -expand -group ALU /execute_tb/DUT/aluif/port_output
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/imm
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/dmemload
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/dmemaddr
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/dmem_in
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/dmemstore
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/rs1
add wave -noupdate -expand -group {Scalar LS} -radix decimal /execute_tb/DUT/slsif/rs2
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/mem_type
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/dmemWEN
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/dmemREN
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/dhit_in
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/enable
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/rd_in
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/rd
add wave -noupdate -expand -group {Scalar LS} /execute_tb/DUT/slsif/dhit
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/gemm_enable
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/new_weight_in
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/rs1_in
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/rs2_in
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/rs3_in
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/rd_in
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/new_weight_out
add wave -noupdate -expand -group GEMM /execute_tb/DUT/fugif/gemm_matrix_num
add wave -noupdate -expand -subitemconfig {/execute_tb/DUT/eif/eif_output.fu_ex -expand} /execute_tb/DUT/eif/eif_output
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {524130 ps} 0}
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
WaveRestoreZoom {1510 ps} {636760 ps}
