/* Single-Block MAC Unit for eSim Mixed-Signal Simulation */
module mac_unit (
    input wire clk,
    input wire reset,
    input wire enable,
    input wire clr_accum,       // Pulse high to reset accumulator to 0 before a new operation
    input wire [3:0] data_a,    // 4-bit multiplicand
    input wire [3:0] data_b,    // 4-bit multiplier
    output reg [7:0] accum_out, // 8-bit accumulated result
    output reg overflow_flag    // Goes high if addition exceeds 8 bits
);

    reg [7:0] product;
    reg [8:0] temp_accum; // 9 bits internally to catch overflow

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            accum_out <= 8'd0;
            overflow_flag <= 1'b0;
        end else if (enable) begin
            product = data_a * data_b; // Combinational multiplication
            
            if (clr_accum) begin
                // Start a new sequence: just store the product, don't add to old data
                accum_out <= product;
                overflow_flag <= 1'b0;
            end else begin
                // Accumulate: add new product to existing total
                temp_accum = accum_out + product;
                accum_out <= temp_accum[7:0];
                overflow_flag <= temp_accum[8];
            end
        end
    end
endmodule