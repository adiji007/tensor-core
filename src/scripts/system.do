onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /system_tb/CLK
add wave -noupdate /system_tb/nRST
add wave -noupdate -divider {Instruction Operations}
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/ihit
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemREN
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemload
add wave -noupdate -expand -group icache-datapath /system_tb/dcif/imemaddr
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iREN
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iload
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/arbiter_state
add wave -noupdate -expand -group icache-arbiter /system_tb/DUT/MS/ARB/next_arbiter_state
add wave -noupdate -expand -group icache-arbiter /system_tb/acif/iaddr
add wave -noupdate -divider {Scalar Operations}
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dhit
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemREN
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemWEN
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemload
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemstore
add wave -noupdate -expand -group datapath /system_tb/DUT/dcif/dmemaddr
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
add wave -noupdate -expand -group arbiter /system_tb/DUT/MS/ARB/arbiter_state
add wave -noupdate -expand -group arbiter /system_tb/DUT/MS/ARB/next_arbiter_state
add wave -noupdate -group ram /system_tb/DUT/acif/ramWEN
add wave -noupdate -group ram /system_tb/DUT/acif/ramREN
add wave -noupdate -group ram /system_tb/DUT/acif/ramaddr
add wave -noupdate -group ram /system_tb/DUT/acif/ramstore
add wave -noupdate -group ram /system_tb/DUT/MS/ARB/dcache_load
add wave -noupdate -divider {Matrix Operations}
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {25 ns} 0}
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
WaveRestoreZoom {9 ns} {33 ns}
