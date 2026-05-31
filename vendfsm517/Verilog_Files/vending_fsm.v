module vending_fsm (
    input clk,
    input rst,
    input coin_5,
    input coin_10,
    input buy,
    output reg dispense,
    output reg [7:0] change,
    output reg [7:0] balance
);

    parameter PRICE = 8'd15;

    // FSM State Encoding
    parameter IDLE   = 2'd0;
    parameter VEND   = 2'd1;
    parameter RETURN = 2'd2;

    reg [1:0] state;

    // Edge Detectors (Crucial for mixed-signal Vpulse compatibility)
    reg c5_d, c10_d, buy_d;
    wire c5_pulse  = coin_5 & ~c5_d;
    wire c10_pulse = coin_10 & ~c10_d;
    wire buy_pulse = buy & ~buy_d;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            c5_d <= 1'b0;
            c10_d <= 1'b0;
            buy_d <= 1'b0;
            state <= IDLE;
            balance <= 8'd0;
            dispense <= 1'b0;
            change <= 8'd0;
        end else begin
            // 1. Update delayed signals for edge detection
            c5_d <= coin_5;
            c10_d <= coin_10;
            buy_d <= buy;

            // 2. Default outputs (Stops them from latching high permanently)
            dispense <= 1'b0;

            // 3. FSM State Transitions
            case (state)
                IDLE: begin
                    change <= 8'd0; // Clear change display
                    
                    if (c5_pulse) begin
                        balance <= balance + 8'd5;
                    end else if (c10_pulse) begin
                        balance <= balance + 8'd10;
                    end else if (buy_pulse) begin
                        if (balance >= PRICE) begin
                            state <= VEND;
                        end
                    end
                end

                VEND: begin
                    dispense <= 1'b1;              // Trigger the drop mechanism
                    balance <= balance - PRICE;    // Deduct the cost
                    state <= RETURN;
                end

                RETURN: begin
                    change <= balance;             // Spit out the remaining balance
                    balance <= 8'd0;               // Reset internal tracker
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule