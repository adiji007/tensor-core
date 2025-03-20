onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /memory_subsystem_tb/#ublk#264626690#74/test_name
add wave -noupdate /memory_subsystem_tb/CLK
add wave -noupdate /memory_subsystem_tb/nRST
add wave -noupdate -expand -group Scheduler /memory_subsystem_tb/spif/instrFIFO_WEN
add wave -noupdate -expand -group Scheduler /memory_subsystem_tb/spif/instrFIFO_wdata
add wave -noupdate -expand -group {Systolic Array} /memory_subsystem_tb/spif/psumout_en
add wave -noupdate -expand -group {Systolic Array} /memory_subsystem_tb/spif/drained
add wave -noupdate -expand -group {Systolic Array} /memory_subsystem_tb/spif/fifo_has_space
add wave -noupdate -expand -group {Systolic Array} /memory_subsystem_tb/spif/psumout_row_sel_in
add wave -noupdate -expand -group {Systolic Array} /memory_subsystem_tb/spif/psumout_data
add wave -noupdate -expand -group Arb /memory_subsystem_tb/spif/sLoad_hit
add wave -noupdate -expand -group Arb /memory_subsystem_tb/spif/sStore_hit
add wave -noupdate -expand -group Arb /memory_subsystem_tb/spif/sLoad_row
add wave -noupdate -expand -group Arb /memory_subsystem_tb/spif/load_data
add wave -noupdate -expand -group Arb -divider Outputs
add wave -noupdate -expand -group {Scheduler Out} /memory_subsystem_tb/spif/instrFIFO_full
add wave -noupdate -expand -group {Scheduler Out} /memory_subsystem_tb/spif/gemm_complete
add wave -noupdate -expand -group {Scheduler Out} /memory_subsystem_tb/spif/load_complete
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/partial_enable
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/weight_enable
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/input_enable
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/weight_input_data
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/partial_sum_data
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/weight_input_row_sel
add wave -noupdate -expand -group {Systolic Array Out} /memory_subsystem_tb/spif/partial_sum_row_sel
add wave -noupdate -expand -group {Arb Out} /memory_subsystem_tb/spif/sLoad
add wave -noupdate -expand -group {Arb Out} /memory_subsystem_tb/spif/sStore
add wave -noupdate -expand -group {Arb Out} /memory_subsystem_tb/spif/store_data
add wave -noupdate -expand -group {Arb Out} /memory_subsystem_tb/spif/load_addr
add wave -noupdate -expand -group {Arb Out} /memory_subsystem_tb/spif/store_addr
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {649 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 191
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
WaveRestoreZoom {0 ns} {1691 ns}
