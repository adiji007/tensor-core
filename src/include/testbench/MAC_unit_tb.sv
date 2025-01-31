`timescale 1ns/1ps

`include "systolic_array_MAC_if.vh"

module sysarr__control_unit_tb;

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

    mac_unit dut (.clk(clk), .nRST(nRST), .mac_if(mac_if.MAC));

    // Test sequence
    initial begin
        // Initialize interface signals
        
        nRST = 0;
        #CLK_PERIOD;
        nRST = 1;

        mac_if.in_value = 25;
        mac_if.weight = 5;
        mac_if.in_accumulate = 30;
        #(CLK_PERIOD * 6) 

        $finish;
    end

endmodule