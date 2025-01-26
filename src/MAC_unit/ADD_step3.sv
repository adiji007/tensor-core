//By            : Joe Nasti
//Last Updated  : 11/17/2024 - convert to FP16 for systolic array MAC unit
//
//Module Summary:
//    Third step of addition operation in three-step pipeline.
//    Rounds result based on rounding mode (frm) and left shifts fraction if needed
//
//Inputs:
//    frm              - 3 bit rounding mode
//    exponent_max_in  - exponent of result floating point
//    sign_in          - sign of result floating point
//    frac_in          - fraction of result floating point
//    carry_out        - carry out from step 2
//Outputs:
//    floating_point_out - final floating point

module ADD_step3 (
    input ovf_in,
    input unf_in,
    input dz,  // divide by zero flag
    input inv,
    input [2:0] frm,
    input [4:0] exponent_max_in,
    input sign_in,
    input [12:0] frac_in,
    input carry_out,
    output [31:0] floating_point_out,
    output [4:0] flags
);

    wire        inexact;
    wire        sign;
    wire [ 4:0] exponent;
    wire [9:0] frac;

    assign {sign, exponent, frac} = floating_point_out;

    reg [ 8:0] exp_minus_shift_amount;
    reg [12:0] shifted_frac;
    reg [ 4:0] shifted_amount;
    reg [ 4:0] exp_out;
    reg        ovf;
    reg        unf;


    left_shift shift_left (
        .fraction(frac_in),
        .result(shifted_frac),
        .shifted_amount(shifted_amount)
    );

    subtract SUB (
        .exp1(exponent_max_in),
        .shifted_amount(shifted_amount),
        .result(exp_minus_shift_amount)
    );


    reg [11:0] round_this;

    always_comb begin
        ovf = 0;
        unf = 0;
        if (carry_out == 1) begin
            round_this = frac_in[12:1];
            exp_out    = exponent_max_in + 1;
            if ((exponent_max_in == 5'b11110) && (~unf_in)) ovf = 1;
        end else begin
            round_this = shifted_frac[11:0];
            exp_out    = exp_minus_shift_amount;
            if (({1'b0, exponent_max_in} < shifted_amount) && (~ovf_in)) unf = 1;
        end
    end

    reg [15:0] round_out;

    rounder ROUND (
        .frm(frm),
        .sign(sign_in),
        .exp_in(exp_out),
        .fraction(round_this),
        .round_out(round_out),
        .rounded(round_flag)
    );

    assign inexact = ovf_in | ovf | unf_in | unf | round_flag;
    assign flags = {inv, dz, (ovf | ovf_in), (unf | unf_in), inexact};
    assign floating_point_out[15] = round_out[15];
    assign floating_point_out[14:0] = inv    ? 15'b111110111111111 :
				     ovf_in ? 15'b111110000000000 :
				     ovf    ? 15'b111110000000000 :
				     unf_in ? 15'b000000000000000 :
				     unf    ? 15'b000000000000000 :
				     round_out[14:0];

endmodule
