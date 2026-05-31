module programmable_timer_verilog(
    input wire clk,
    input wire reset,

    input wire start,
    input wire load_enable,
    input wire [7:0] load_value,

    input wire mode,        // 0 = one-shot, 1 = periodic
    input wire int_clear,

    output reg timer_interrupt,
    output reg [7:0] current_count
);

    reg running;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_count <= 8'd0;
            timer_interrupt <= 1'b0;
            running <= 1'b0;
        end else begin

            // Default interrupt LOW every clock
            timer_interrupt <= 1'b0;

            // Load value
            if (load_enable) begin
                current_count <= load_value;
                running <= 1'b0;
            end

            // Start timer
            else if (start) begin
                running <= 1'b1;
            end

            // Counting logic
            if (running) begin
                if (current_count > 0) begin
                    current_count <= current_count - 1;
                end else begin
                    // Generate 1-cycle interrupt pulse
                    timer_interrupt <= 1'b1;

                    if (mode) begin
                        // periodic mode
                        current_count <= load_value;
                    end else begin
                        // one-shot mode
                        running <= 1'b0;
                    end
                end
            end

            // Clear interrupt
            if (int_clear) begin
                timer_interrupt <= 1'b0;
            end

        end
    end

endmodule