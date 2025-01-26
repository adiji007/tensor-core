// subtracts shifted amount from the exponent
// converted to work with 5 bit values for systolic array.

module subtract (
    input  [4:0] exp1,
    input  [4:0] shifted_amount,
    output [4:0] result
);

    reg [5:0] u_exp1 = {1'b0, exp1};
    reg [5:0] u_shifted_amount = {1'b0, shifted_amount};
    reg [5:0] u_result;

    always_comb begin
        u_exp1           = {1'b0, exp1};
        u_shifted_amount = {1'b0, shifted_amount};
        u_result         = u_exp1 - u_shifted_amount;
    end

    assign result = u_result[4:0];
endmodule  // subtract
