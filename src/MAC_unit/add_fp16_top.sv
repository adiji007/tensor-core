//By            : Joe Nasti
//Last Updated  : 11/25/2024

// I forgot what this fi
// Vinay Pundith

//
//Module Summary:
//    Three-stage floating point unit supporting operations:
//    multiplication (in progress)
//
//Inputs:
//      weight: FP16 value
//      in_value: FP16 value
//      in_accumulate: FP16 value
//      start signal
//      
//Outputs:
//    out_accumulate

`include "systolic_array_MAC_if.vh"

module add_fp16_top (
    input [15:0] floating_point1,
    input [15:0] floating_point2,
    output [15:0] floating_point_out
);

    // mul step1
    // mul step2
    // add step1
    // add step2
    // add step3


    // right shift smaller fraction by difference in exponents

    // multiply fractions

    MUL_step1 mulStep1 (
        .fp1_in(floating_point1),
        .fp2_in(floating_point2),
        .sign1(mul_sign1),
        .sign2(mul_sign2),
        .exp1(mul_exp1),
        .exp2(mul_exp2),
        .product(product),
        .carry_out(mul_carry_out)
    );

   always_ff @(posedge clk, negedge nrst) begin:
   begin
    if(nrst == 0) begin
        {step2_mul_carry_out, step2_mul_exp1, step2_mul_exp2, step2_mul_sign1, step2_mul_sign2, step2_product} <= 0;
    end
    else begin
        step2_mul_exp1 <= mul_exp1;
        step2_mul_exp2 <= mul_exp2;
        step2_mul_sign1 <= mul_sign1;
        step2_mul_sign2 <= mul_sign2;
        step2_product <= mul_product;
        step2_mul_carry_out <= mul_carry_out;
    end

    // add signed fractions
    // add exponents and xor sign bits

    MUL_step2 mul_step2 (
        .sign1(step1_to_step2[61]),  // mul_sign1
        .sign2(step1_to_step2[60]),  // mul_sign2
        .exp1(step1_to_step2[59:52]),  // mul_exp1
        .exp2(step1_to_step2[51:44]),  // mul_exp2
        .sign_out(mul_sign_out),
        .sum_exp(sum_exp),
        .ovf(mul_ovf),
        .unf(mul_unf),
        .carry(step1_to_step2[17])
    );
    end

    assign floating_point_out = {mul_sign_out,sum_exp,product};

endmodule
