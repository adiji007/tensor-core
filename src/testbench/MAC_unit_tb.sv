`timescale 1ns/1ps

`include "systolic_array_MAC_if.vh"

// to run this: verilator --binary -j 0 -Wall -Wno-fatal MAC_unit_tb -IMAC_unit -Itestbench -Iinclude --hierarchical --trace

/* verilator lint_off UNUSEDSIGNAL */
module MAC_unit_tb;

    // Parameters
    localparam CLK_PERIOD = 1;

    // Testbench Signals
    logic tb_clk;
    logic tb_nrst;


    // Clk init
    always
    begin
        tb_clk = 1'b0;
        #(CLK_PERIOD/2.0);
        tb_clk = 1'b1;
        #(CLK_PERIOD/2.0);
    end
    
    // sysarr_control_unit_if instance
    systolic_array_MAC_if mac_if();

    mac_unit dut (.clk(tb_clk), .nRST(tb_nrst), .mac_if(mac_if.MAC));
    
    // Test sequence
    initial begin
        // Initialize interface signals
        $dumpfile("waves.vcd");
        $dumpvars();
        tb_nrst = 0;
        #CLK_PERIOD;
        tb_nrst = 1;

        mac_if.in_value = 16'h4B80;
        mac_if.weight = 16'h4000;
        mac_if.in_accumulate = 16'h4500;
        #(CLK_PERIOD * 6) 

        $finish;
    end

endmodule

