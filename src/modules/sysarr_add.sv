`include "systolic_array_add_if.vh"
`include "sys_arr_pkg.vh"
/* verilator lint_off IMPORTSTAR */
import sys_arr_pkg::*;
/* verilator lint_off IMPORTSTAR */

module sysarr_add (
    /* verilator lint_off UNUSEDSIGNAL */
    input logic clk, nRST,
    /* verilator lint_off UNUSEDSIGNAL */
    systolic_array_add_if.add adder
);
always_comb begin
    adder.add_ouput= '0;
    if (adder.count == ADD_LEN-1)begin
        adder.add_ouput = adder.add_input1 + adder.add_input2;
    end
end
   
   
endmodule
