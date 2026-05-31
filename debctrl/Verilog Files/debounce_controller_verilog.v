module debounce_controller_verilog(
    input clk,
    input reset,
    input noisy_in,
    input [1:0] mode,
    output reg clean_out
);

    reg [3:0] count;
    reg candidate;              
    reg [3:0] stable_cycles;

    // Mode decode
    always @(*) begin
        case (mode)
            2'b00: stable_cycles = 1;
            2'b01: stable_cycles = 2;
            2'b10: stable_cycles = 4;
            2'b11: stable_cycles = 8;
        endcase
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            clean_out <= 0;
            candidate <= 0;
            count <= 0;
        end else begin

            if (noisy_in != candidate) begin
                // new value detected ? restart counting
                candidate <= noisy_in;
                count <= 1;
            end 
            else if (count < stable_cycles) begin
                // same value ? increment stability counter
                count <= count + 1;
            end

            // update output only AFTER full stability
            if (count == stable_cycles)
                clean_out <= candidate;
        end
    end

endmodule
