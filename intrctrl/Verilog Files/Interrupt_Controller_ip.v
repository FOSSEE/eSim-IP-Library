`timescale 1ns/1ps

module Interrupt_Controller_ip(
    input  wire        clk,
    input  wire        rst,
    input  wire [3:0]  irq,     // interrupt requests
    input  wire        ack,     // acknowledge from CPU

    output reg         intr,     // interrupt signal to CPU
    output reg    int_id_0,   // which interrupt (0-3)
   output reg int_id_1
);

    // FSM States
    parameter IDLE  = 2'b00;
    parameter SERVE = 2'b01;

    reg [1:0] state, next_state;

    // Priority Encoder (combinational)
    reg [1:0] priority_id;
    reg       valid_irq;

    always @(*) begin
        valid_irq = 1'b1;
        casez (irq)
            4'b1???: priority_id = 2'd3;
            4'b01??: priority_id = 2'd2;
            4'b001?: priority_id = 2'd1;
            4'b0001: priority_id = 2'd0;
            default: begin
                priority_id = 2'd0;
                valid_irq   = 1'b0;
            end
        endcase
    end

    // State register
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= IDLE;
        else
            state <= next_state;
    end

    // Next state logic
    always @(*) begin
        case (state)
            IDLE: begin
                if (valid_irq)
                    next_state = SERVE;
                else
                    next_state = IDLE;
            end

            SERVE: begin
                if (ack)
                    next_state = IDLE;
                else
                    next_state = SERVE;
            end

            default: next_state = IDLE;
        endcase
    end

    // Output logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            intr    <= 0;
            int_id_0 <= 0;
           int_id_1 <= 0;
        end
        else begin
            case (state)
                IDLE: begin
                    if (valid_irq) begin
                        intr    <= 1;
                        int_id_0 <= priority_id[0];
                        int_id_1 <= priority_id[1];
                    end else begin
                        intr <= 0;
                    end
                end

                SERVE: begin
                    intr <= 1;  // keep interrupt high
                    if (ack)
                        intr <= 0;
                end
            endcase
        end
    end

endmodule