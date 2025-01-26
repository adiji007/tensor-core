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

module MUL_step1 (
    input  [15:0] fp1_in,
    input  [15:0] fp2_in,
    output        sign1,
    output        sign2,
    output [ 5:0] exp1,
    output [ 5:0] exp2,
    output [25:0] product,
    output        carry_out
);

    assign sign1 = fp1_in[15];
    assign sign2 = fp2_in[15];
    assign exp1  = fp1_in[14:10];
    assign exp2  = fp2_in[14:10];

    mul_13b MUL (
        .frac_in1({1'b1, fp1_in[9:0], 2'b00}),
        .frac_in2({1'b1, fp2_in[9:0], 2'b00}),
        .frac_out(product),
        .overflow(carry_out)
    );

endmodule  // MUL_step1



