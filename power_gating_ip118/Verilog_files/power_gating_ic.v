module power_gating_ic (
    input wire clk,
    input wire rst,
    input wire sleep,
    input wire [7:0] d,
    output wire [7:0] y
);

    wire vdd = 1'b1;
    wire vdd_sw;

    wire [7:0] q_internal;

    // Switch Cell
    switch_cell u_switch (
        .sleep(sleep),
        .vdd(vdd),
        .vdd_sw(vdd_sw)
    );

    // Retention Register
    retention_reg  u_retention (
        .clk(clk),
        .rst(rst),
        .sleep(sleep),
        .vdd_sw(vdd_sw),
        .d(d),
        .q(q_internal)
    );

    // Isolation Cell
    isolation_cell  u_isolation (
        .sleep(sleep),
        .in(q_internal),
        .out(y)
    );

endmodule
module isolation_cell (
    input wire sleep,
    input wire [7:0] in,
    output wire [7:0] out
);

    // When sleep = 1 → isolate → output = 0 (safe value)
    // When sleep = 0 → pass input
    assign out = (sleep) ? {8{1'b0}} : in;

endmodule

module retention_reg (
    input wire clk,
    input wire rst,
    input wire sleep,        // sleep control
    input wire vdd_sw,       // switched supply from switch cell
    input wire [7:0] d,
    output reg [7:0] q
);

    reg [7:0] retention_latch; // stores data during sleep

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            q <= 0;
            retention_latch <= 0;
        end
        else begin
            if (vdd_sw) begin
                // Power ON → normal operation
                if (!sleep) begin
                    q <= d;  // normal FF operation
                end
            end
            else begin
                // Power OFF → store value
                retention_latch <= q;
            end
        end
    end

    // Restore logic (when waking up)
    always @(negedge sleep) begin
        if (vdd_sw) begin
            q <= retention_latch;
        end
    end

endmodule



module switch_cell (
    input wire sleep,     // sleep control
    input wire vdd,       // main supply (logic 1)
    output wire vdd_sw    // switched supply
);

    // When sleep = 1 → cut power → vdd_sw = 0
    // When sleep = 0 → pass power → vdd_sw = vdd
    assign vdd_sw = (sleep) ? 1'b0 : vdd;

endmodule