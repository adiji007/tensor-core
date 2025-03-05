//By            : Joe Nasti
//Last Updated  : 7/23/18

// modified 11/2024: converted to 16 bit FP multiplier for TPU Systolic Array --Vinay Pundith


//
//Module Summary:
//    First step of multiplication in three-step pipeline.
//    multiplies fraction from fp16 value - padded to 13 bits
//
//Inputs:
//    fp1/2     - single precision floating points
//Outputs:
//    sign1/2   - signs of floating points
//    exp1/2    - exponents of floating points
//    product   - result of fraction multiplication
//    carry_out - signal if there is a carry out of the multiplication

`timescale 1ns/1ps

module MUL_step1 (
    input  [15:0] fp1_in,
    input  [15:0] fp2_in,
    output        sign1,
    output        sign2,
    output [ 4:0] exp1,
    output [ 4:0] exp2,
    output [12:0] product,
    output        carry_out,
    output        round_loss
);

    assign sign1 = fp1_in[15];
    assign sign2 = fp2_in[15];
    assign exp1  = fp1_in[14:10];
    assign exp2  = fp2_in[14:10];

    logic frac_leading_bit_fp1;
    logic frac_leading_bit_fp2;
    always_comb begin
        if(exp1 == 5'b0)
            frac_leading_bit_fp1 = 1'b0;
        else
            frac_leading_bit_fp1 = 1'b1;

        if(exp2 == 5'b0)
            frac_leading_bit_fp2 = 1'b0;
        else
            frac_leading_bit_fp2 = 1'b1;
    end

    mul_13b MUL (
        .frac_in1({frac_leading_bit_fp1, fp1_in[9:0], 2'b00}),
        .frac_in2({frac_leading_bit_fp2, fp2_in[9:0], 2'b00}),
        .frac_out(product),
        .overflow(carry_out),
        .round_loss(round_loss)
    );

endmodule  // MUL_step1



