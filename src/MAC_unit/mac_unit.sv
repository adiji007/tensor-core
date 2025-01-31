// MAC unit top level file for systolic array. Ties together adder and multiplier.
/* 
Input comes from systolic array IF

MUL_step1
MUL_step2

ADD_step1
ADD_step2
ADD_step3

https://en.wikipedia.org/wiki/Half-precision_floating-point_format
https://www.sciencedirect.com/topics/computer-science/floating-point-addition
https://verilator.org/guide/latest/install.html#git-install
https://www.veripool.org/ftp/verilator_doc.pdf

*/

// To Do
// Add proper overflow handling -- done? 
// Add start and done signals
//
 
// 




`include "include/systolic_array_MAC_if.vh"

module mac_unit(input logic clk, input logic nRST, systolic_array_MAC_if.MAC mac_if);

    // phase 1: multiply

    // signals connecting mul stage1 with stage2. these are registered, so need 2 signals (one coming out of stage1 going into register, the other coming out of register going into stage2)
    logic mul_sign1_out, mul_sign2_out, carryout_out;
    logic mul_sign1_in, mul_sign2_in, carryout_in;
    logic [5:0] mul_exp1_out, mul_exp2_out;
    logic [5:0] mul_exp1_in, mul_exp2_in;
    logic [25:0] mul_product_out;
    logic [25:0] mul_product_in;

    MUL_step1 mul1 (mac_if.in_value, mac_if.weight, mul_sign1_out, mul_sign2_out, mul_exp1_out, mul_exp2_out, mul_product_out, mul_carryout_out);
    
    // flipflop to connect mul stage1 and stage 2
    always_ff @(posedge clk, negedge nRST) begin
        if(nRST == 1'b0) begin
            mul_sign1_in <= 0;
            mul_sign2_in <= 0;
            mul_exp1_in <= 0;
            mul_exp2_in <= 0;
            mul_carryout_in <= 0;
            mul_product_in <= 0;
        end
        else begin
            mul_sign1_in    <= mul_sign1_out;
            mul_sign2_in    <= mul_sign2_out;
            mul_exp1_in     <= mul_exp1_out;
            mul_exp2_in     <= mul_exp2_out;
            mul_carryout_in <= mul_carryout_out;
            mul_product_in  <= mul_product_out;
        end
    end

    // signals coming out of mul stage2
    logic mul_sign_result;
    logic [4:0] mul_sum_exp;
    logic mul_ovf, mul_unf;

    MUL_step2 mul2 (mul_sign1_out, mul_sign2_out, mul_exp1_out, mul_exp2_out, mul_sign_result, mul_sum_exp, mul_ovf, mul_unf, mul_carryout_in);

    //final multiplication result
    logic [15:0] mul_result;
    assign mul_result = {mul_sign_result, mul_sum_exp, mul_product_out[9:0]};


    // phase 2: accumulate

    // signals connecting add stage1 with stage2
    logic add_sign_shifted_in, add_sign_not_shifted_in;
    logic add_sign_shifted_out, add_sign_not_shifted_out;
    logic [12:0] frac_shifted_out, frac_not_shifted_out;
    logic [12:0] frac_shifted_in, frac_not_shifted_in;
    logic [4:0] add_exp_max_out, add_exp_max_in;

    ADD_step1 add1 (mul_resullt, mac_if.in_accumulate, add_sign_shifted_out, frac_shifted_out, add_sign_not_shifted_out, frac_not_shifted_out, add_exp_max_out);

    // flipflop to connect add stage1 and stage2
    always_ff @(posedge clk, negedge nRST) begin
        if(nRST == 1'b0) begin
            add_sign_shifted_in     <= 0;
            add_sign_not_shifted_in <= 0;
            frac_shifted_in         <= 0;
            frac_not_shifted_in     <= 0;
            add_exp_max_in          <= 0;
        end
        else begin
            add_sign_shifted_in     <= add_sign_shifted_out;
            add_sign_not_shifted_in <= add_sign_not_shifted_out;
            frac_shifted_in         <= frac_shifted_out;
            frac_not_shifted_in     <= frac_not_shifted_out;
            add_exp_max_in          <= add_exp_max_out;
        end
    end

    // signals connecting add stage2 with stage3
    logic add_sign_out, add_sign_in;
    logic [12:0] add_sum_out, add_sum_in;
    logic add_carry_out, add_carry_in;
    logic [4:0] add_exp_max_s2_out, add_exp_max_s3_in;

    ADD_step2 add2 (frac_shifted_in, add_sign_shifted_in, frac_not_shifted_in, add_sign_not_shifted_in, add_exp_max_in, add_sign_out, add_sum_out, add_carry_out, add_exp_max_s2_out);

    always_ff @(posedge clk, negedge nRST) begin
        if(nRST == 1'b0) begin
            add_sign_in             <= 0;
            add_sum_in              <= 0;
            add_carry_in            <= 0;
            add_exp_max_s3_in       <= 0;
        end
        else begin
            add_sign_in             <= add_sign_out;
            add_sum_in              <= add_sum_out;
            add_carry_in            <= add_carry_out;
            add_exp_max_s3_in       <= add_exp_max_s2_out;
        end
    end

    // ADD stage3 outputs
    logic [15:0] accumulate_result;
    logic [4:0] add_flags;
    // Rounding mode: truncation. Maybe should pick something else?
    ADD_step3 add3(0, 0, 0, 0, 3'b001, add_exp_max_s3_in, add_sign_in, add_sum_in, add_carry_in, accumulate_result, add_flags);

    // Check for overflow and assign the value to the interface port
    assign mac_if.out_accumulate = add_flags[2] ? 16'b0111110000000000 : accumulate_result;

endmodule
