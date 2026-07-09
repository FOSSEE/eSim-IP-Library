`timescale 1ns / 1ps

module digital_tachometer (
    input  wire        clk_sys,      // High-speed system clock (10 MHz)
    input  wire        rst_n,        // Active-low asynchronous reset
    input  wire        sensor_in,    // Asynchronous pulse from the motor/sensor

    output reg  [15:0] period_count, // Output: Number of sys_clks between sensor pulses
    output reg         data_valid    // Output: Pulses HIGH for 1 tick when reading is ready
);

    // 1. Asynchronous Sensor Synchronizer & Edge Detector
    reg sync_1, sync_2, sync_3;

    always @(posedge clk_sys or negedge rst_n) begin
        if (!rst_n) begin
            sync_1 <= 1'b0;
            sync_2 <= 1'b0;
            sync_3 <= 1'b0;
        end else begin
            sync_1 <= sensor_in;
            sync_2 <= sync_1;
            sync_3 <= sync_2; 
        end
    end

    // Detect a clean rising edge on the synchronized signal
    wire sensor_rising_edge = (sync_2 == 1'b1) && (sync_3 == 1'b0);

    // 2. Period Measurement Counter
    reg [15:0] counter;

    always @(posedge clk_sys or negedge rst_n) begin
        if (!rst_n) begin
            counter      <= 16'd0;
            period_count <= 16'd0;
            data_valid   <= 1'b0;
        end else begin
            if (sensor_rising_edge) begin
                // Lap complete! Output count and reset.
                period_count <= counter;
                counter      <= 16'd0;
                data_valid   <= 1'b1;
            end else begin
                // Still running.
                data_valid <= 1'b0;
                if (counter != 16'hFFFF) begin // Prevent integer overflow
                    counter <= counter + 16'd1;
                end
            end
        end
    end

endmodule