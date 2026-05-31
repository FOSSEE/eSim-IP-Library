module handshake_pulse_sync_verilog (
    input  wire clk_a,      // Source clock domain
    input  wire rst_a,
    input  wire pulse_in,   // Input pulse (clk_a domain)

    input  wire clk_b,      // Destination clock domain
    input  wire rst_b,
    output wire pulse_out   // Output pulse (clk_b domain)
);

    // -------------------------------
    // Source Domain (clk_a)
    // -------------------------------
    reg req;        // Request signal
    reg ack_sync1, ack_sync2;

    wire ack;       // Acknowledge from clk_b

    // Synchronize ack back to clk_a
    always @(posedge clk_a or posedge rst_a) begin
        if (rst_a) begin
            ack_sync1 <= 0;
            ack_sync2 <= 0;
        end else begin
            ack_sync1 <= ack;
            ack_sync2 <= ack_sync1;
        end
    end

    // Generate request
    always @(posedge clk_a or posedge rst_a) begin
        if (rst_a)
            req <= 0;
        else if (pulse_in)
            req <= 1;              // Set request on pulse
        else if (ack_sync2)
            req <= 0;              // Clear when acknowledged
    end

    // -------------------------------
    // Destination Domain (clk_b)
    // -------------------------------
    reg req_sync1, req_sync2;
    reg req_d;

    reg ack_reg;
    assign ack = ack_reg;

    // Synchronize req into clk_b
    always @(posedge clk_b or posedge rst_b) begin
        if (rst_b) begin
            req_sync1 <= 0;
            req_sync2 <= 0;
        end else begin
            req_sync1 <= req;
            req_sync2 <= req_sync1;
        end
    end

    // Edge detection for pulse generation
    always @(posedge clk_b or posedge rst_b) begin
        if (rst_b)
            req_d <= 0;
        else
            req_d <= req_sync2;
    end

    assign pulse_out = req_sync2 & ~req_d;  // Rising edge detect

    // Generate acknowledge
    always @(posedge clk_b or posedge rst_b) begin
        if (rst_b)
            ack_reg <= 0;
        else if (req_sync2)
            ack_reg <= 1;        // Send ack when request received
        else
            ack_reg <= 0;
    end

endmodule