

module Clock_gating_controller_ip(
    input  wire                  clk,
    input  wire                  rst_n,
    input  wire [3:0]   enable,
    input  wire                  test_mode,

    output wire [3:0]   gated_clk
);

    reg [3:0] enable_reg;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            enable_reg <= 0;
        else
            enable_reg <= enable;
    end

    // Clock gating
    genvar j;
    generate
        for (j = 0; j <4; j = j + 1) begin : GATING
            assign gated_clk[j] = test_mode ? clk : (clk & enable_reg[j]);
        end
    endgenerate

endmodule