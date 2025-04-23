onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /system_tb/CLK
add wave -noupdate /system_tb/nRST
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
add wave -noupdate -expand -group {datapath instr signals} /system_tb/DUT/dcif/imemaddr
add wave -noupdate -expand -group {datapath instr signals} -radix unsigned /system_tb/DUT/dcif/imemload
add wave -noupdate -expand -group {datapath instr signals} /system_tb/DUT/dcif/imemREN
add wave -noupdate -expand -group {cif icache} /system_tb/cif/iwait
add wave -noupdate -expand -group {cif icache} /system_tb/cif/iREN
add wave -noupdate -expand -group {cif icache} /system_tb/cif/iload
add wave -noupdate -expand -group {cif icache} -radix unsigned /system_tb/cif/iaddr
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/instr
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/imemREN
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/imemaddr
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/imemload
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/pc
add wave -noupdate -expand -group {fif interface fetch} /system_tb/DUT/DP/FETCH/fif/correct_pc
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/ihit
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemREN
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemload
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemaddr
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iREN
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/acif/ramREN
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/acif/ramaddr
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iload
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/icache_load
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iaddr
add wave -noupdate -divider {Scalar Operations}
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fetch
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fust_s
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fust_m
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fust_g
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fust_state
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/wb
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/ihit
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/branch_resolved
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/branch_miss
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/fu_ex
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/out
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_m
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_g
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fu_s
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fu_t
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_s_en
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_m_en
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_fust_g_en
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_t1
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_t2
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_gt1
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_gt2
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_gt3
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/n_mt1
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/jump
add wave -noupdate -group dispatch /system_tb/DUT/DP/SCOREBOARD/diif/freeze
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/dispatch
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fu_t
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_s
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_m
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_g
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fu_s
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fu_m
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fu_g
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_s_en
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_m_en
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_fust_g_en
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_t1
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_t2
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_gt1
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_gt2
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_gt3
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/n_mt1
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/branch_miss
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/branch_resolved
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fu_ex
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/freeze
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/wb
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/s_wdata
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/out
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_s
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_m
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_g
add wave -noupdate -group issue /system_tb/DUT/DP/SCOREBOARD/isif/fust_state
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dhit
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemREN
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemWEN
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemload
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemstore
add wave -noupdate -expand -group datapath -radix unsigned /system_tb/DUT/dcif/dmemaddr
add wave -noupdate -group dcache /system_tb/DUT/acif/dREN
add wave -noupdate -group dcache /system_tb/DUT/acif/dWEN
add wave -noupdate -group dcache /system_tb/DUT/acif/load_done
add wave -noupdate -group dcache /system_tb/DUT/acif/store_done
add wave -noupdate -group dcache /system_tb/DUT/acif/daddr
add wave -noupdate -group dcache /system_tb/DUT/acif/dload
add wave -noupdate -group dcache /system_tb/DUT/acif/dstore
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/dcache_format
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/dcache
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/next_dcache
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/hit_count
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/dcache_state
add wave -noupdate -group dcache /system_tb/DUT/MS/DCACHE/next_dcache_state
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dREN
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dWEN
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/daddr
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dload
add wave -noupdate -expand -group arbiter /system_tb/DUT/acif/dstore
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramWEN
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramREN
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramaddr
add wave -noupdate -expand -group ram /system_tb/DUT/acif/ramstore
add wave -noupdate -expand -group ram /system_tb/DUT/MS/ARB/dcache_load
add wave -noupdate -divider {Matrix Operations}
add wave -noupdate /system_tb/DUT/DP/SCOREBOARD/IS/RF/register
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {164 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 163
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
WaveRestoreZoom {0 ns} {733 ns}
