onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /system_tb/DUT/CLK
add wave -noupdate /system_tb/DUT/nrst
add wave -noupdate /system_tb/DUT/CPU/SC_DP/FETCH/fif/imemload
add wave -noupdate /system_tb/DUT/CPU/SC_DP/FETCH/fif/instr
add wave -noupdate /system_tb/DUT/CPU/SC_DP/FETCH/fif/pc
add wave -noupdate /system_tb/DUT/CPU/SC_DP/REGFILE/rf_if/rdat1
add wave -noupdate /system_tb/DUT/CPU/SC_DP/REGFILE/rf_if/rdat2
add wave -noupdate /system_tb/DUT/CPU/SC_DP/SCOREBOARD/sbif/out
add wave -noupdate /system_tb/DUT/CPU/SC_DP/isif/n_fust_s
add wave -noupdate /system_tb/DUT/CPU/SC_DP/isif/n_fust_m
add wave -noupdate /system_tb/DUT/CPU/SC_DP/isif/n_fust_g
add wave -noupdate /system_tb/DUT/CPU/SC_DP/isif/fust_s
add wave -noupdate /system_tb/DUT/CPU/SC_DP/isif/fust_m
add wave -noupdate /system_tb/DUT/CPU/SC_DP/isif/fust_g
add wave -noupdate /system_tb/DUT/CPU/SC_DP/dcif/imemload
add wave -noupdate /system_tb/DUT/CPU/SC_DP/dcif/imemaddr
add wave -noupdate /system_tb/DUT/CPU/SC_DP/dcif/ihit
add wave -noupdate /system_tb/DUT/CPU/SC_DP/dcif/halt
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/misprediction
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/pc_prediction
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/FETCH/pc_reg
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/FETCH/next_pc
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/stall
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/freeze
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/dispatch_free
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/ihit
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/instr
add wave -noupdate -expand -group FETCH /system_tb/DUT/CPU/SC_DP/fif/correct_pc
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/dcif/ihit
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/dcif/imemREN
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/icache_format
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/icache
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/nxt_icache
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/icache_state
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/CM/ICACHE/nxt_icache_state
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/cif/iwait
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/cif/iREN
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/cif/iload
add wave -noupdate -expand -group iCACHE /system_tb/DUT/CPU/cif/iaddr
add wave -noupdate -expand -group RAM /system_tb/DUT/prif/ramREN
add wave -noupdate -expand -group RAM /system_tb/DUT/prif/ramaddr
add wave -noupdate -expand -group RAM /system_tb/DUT/prif/ramload
add wave -noupdate -expand -group RAM /system_tb/DUT/prif/ramstate
add wave -noupdate -expand -group RAM /system_tb/DUT/prif/memREN
add wave -noupdate -expand -group RAM /system_tb/DUT/prif/memaddr
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/MEM/ccif/dREN
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/MEM/ccif/dWEN
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/MEM/ccif/dload
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/MEM/ccif/dstore
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/MEM/ccif/daddr
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/iwait
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/iREN
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/dREN
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/iload
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/iaddr
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/ramREN
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/ramstate
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/ramaddr
add wave -noupdate -expand -group {MEMORY CONTROLLER} /system_tb/DUT/CPU/ccif/ramload
add wave -noupdate -expand -group EXECUTE -expand /system_tb/DUT/CPU/SC_DP/eif/eif_output
add wave -noupdate -expand -group EXECUTE /system_tb/DUT/CPU/SC_DP/eif/sls_mem_type
add wave -noupdate -expand -group EXECUTE /system_tb/DUT/CPU/SC_DP/eif/sls_imm
add wave -noupdate -expand -group EXECUTE /system_tb/DUT/CPU/SC_DP/eif/sls_rs1
add wave -noupdate -expand -group EXECUTE /system_tb/DUT/CPU/SC_DP/eif/sls_rs2
add wave -noupdate -expand -group EXECUTE /system_tb/DUT/CPU/SC_DP/eif/sls_dmem_in
add wave -noupdate -expand -group EXECUTE /system_tb/DUT/CPU/SC_DP/eif/sls_dhit_in
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/ihit
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/imemREN
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/imemload
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/dhit
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/dmemREN
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/dmemWEN
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/dmemload
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/dmemstore
add wave -noupdate -expand -group {DATAPATH CACHE} /system_tb/DUT/CPU/dcif/dmemaddr
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {20 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 345
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
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
WaveRestoreZoom {0 ns} {128 ns}
