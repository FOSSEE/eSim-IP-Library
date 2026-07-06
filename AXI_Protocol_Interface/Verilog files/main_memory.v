module main_memory (
    input                       clk,
    input                       rst_n,
    input                       write_en,
    input      addr,
    input  [3:0]     wdata,
    output reg [3:0] rdata
);

    reg [3:0] mem [0:1];

    always @(posedge clk) begin
        if (!rst_n) begin
            rdata <= {4{1'b0}};
        end else begin
            if (write_en)
                mem[addr] <= wdata;
            // Registered read - rdata updates every cycle based on addr
            rdata <= mem[addr];
        end
    end

endmodule
