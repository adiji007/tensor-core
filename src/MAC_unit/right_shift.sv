//By            : Joe Nasti
//Last Updated  : 11/17/2024 - convert to FP16 for systolic array MAC unit
//
//Module Summary:
//    right shifts a 13 bit value by a given amount
//
//Inputs:
//    fraction     - 13 bit value to be shifted
//    shift_amount - unsigned 8 bit value amount to shift fraction
//Outputs:
//    result       - 13 bit result of the shift

`timescale 1ns/1ps

module right_shift (
    input      [12:0] fraction,
    input      [ 4:0] shift_amount,
    output reg [12:0] result
);

    always_comb begin
        result = fraction >> shift_amount;
        // case (shift_amount)
        //     0: result = fraction;

        //     // result = fraction << shift_amount;

        //     1: result = {1'd0,   fraction[12:1]};
        //     2: result = {2'd0,   fraction[12:2]};
        //     3: result = {3'd0,   fraction[12:3]};
        //     4: result = {4'd0,   fraction[12:4]};
        //     5: result = {5'd0,   fraction[12:5]};
        //     6: result = {6'd0,   fraction[12:6]};
        //     7: result = {7'd0,   fraction[12:7]};
        //     8: result = {8'd0,   fraction[12:8]};
        //     9: result = {9'd0,   fraction[12:9]};
        //     10: result = {10'd0, fraction[12:10]};
        //     11: result = {11'd0, fraction[12:11]};
        //     12: result = {12'd0, fraction[12:12]};
        //     default: result = 13'd0;
        // endcase
    end
endmodule

