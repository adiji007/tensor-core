// Writeback unit testbench
// tahan

`timescale 1ns/1ps
`include "writeback_if.vh"

module writeback_tb;

    // Clock and Reset
    logic CLK;
    logic nRST;

    // Instantiate Interface
    writeback_if wbif();

    // DUT (Device Under Test) Instantiation
    writeback DUT (
        .CLK(CLK),
        .nRST(nRST),
        .wbif(wbif)
    );

    // Clock Generation
    always #5 CLK = ~CLK;  // 10 ns clock period

    // Test Sequence
    initial begin
        
        /* Test Case 0: nRST */
        CLK = 0;
        nRST = 0;
        wbif.w_dat = '0;
        wbif.reg_sel = '0;
        wbif.branch_mispredict = 0;
        wbif.branch_spec = 0;

        #10 nRST = 1;  
        #10;

        /* Test Case 1: Normal Write Back Operations */

        for (int i = 1; i < 9; i++ ) begin
            wbif.w_dat = i * 10;
            wbif.reg_sel = i;
            #10;
        end
        

        $stop;
    end
endmodule

