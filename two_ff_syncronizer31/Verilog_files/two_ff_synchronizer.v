module two_ff_synchronizer (
    input  wire clk,
    input  wire reset_n,     // Active low reset
    input  wire async_in,    // Asynchronous input
    output wire sync_out     // Synchronized output
);

    reg ff1, ff2;

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            ff1 <= 1'b0;
            ff2 <= 1'b0;
        end
        else begin
            ff1 <= async_in;
            ff2 <= ff1;
        end
    end

    assign sync_out = ff2;

endmodule