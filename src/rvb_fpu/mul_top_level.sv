//By            : Joe Nasti
//Last Updated  : 8/25/18

// Updated to be just a multiplier for TPU project, 11/2024
// Vinay Pundith

//
//Module Summary:
//    Three-stage floating point unit supporting operations:
//    multiplication (in progress)
//
//Inputs:
//    clk                - system clock
//    nrst               - active low reset
//    floating_point1/2  - floating points to be operated on
//    frm                - rounding mode
//    funct7             - 7 bit operation code
//Outputs:
//    floating_point_out - result of operation
//    flags              - 5 error flags (overflow,  underflow, divide by zero, inexact result, invalid operation)

module multiplier_rvb (
    input         clk,
    input         nrst,
    input  [15:0] floating_point1,
    input  [15:0] floating_point2,
    output [15:0] floating_point_out,
);



    reg [2:0] frm2;
    reg [2:0] frm3;

    // MUL step1 outputs
    reg        mul_sign1;
    reg        mul_sign2;
    reg [ 5:0] mul_exp1;
    reg [ 5:0] mul_exp2;
    reg [25:0] product;
    reg        mul_carry_out;

    // MUL step2 inputs
    reg        step2_mul_sign1;
    reg        step2_mul_sign2;
    reg [ 5:0] step2_mul_exp1;
    reg [ 5:0] step2_mul_exp2;
    reg [25:0] step2_product;
    reg        step2_mul_carry_out;

    // MUL step2 outputs -> step3 inputs
    reg        mul_sign_out;
    reg [ 7:0] sum_exp;
    reg        mul_ovf;
    reg        mul_unf;

    // invalid operation flag
    // reg        inv;
    // reg        inv2;
    // reg        inv3;

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

   always_ff @(posedge clk, negedge nrst) begin : STEP1_to_STEP2
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

    //shift fraction until 1 is the first digit
    //round based on rounding mode
    reg o;

    always_comb begin
        if((step2_t o_step3[7:0] == 8'b11111111) && (step2_to_step3[36] == 1'b0) && (step2_to_step3[8] == 0))
            o = 1;
        else o = step2_to_step3[37];
    end

endmodule
