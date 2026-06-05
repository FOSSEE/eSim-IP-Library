/*module rle_compressor (
    input  wire clk,
    input  wire rst,

    // Input stream
    input  wire data_in,
    input  wire valid_in,
    input  wire last_in,   // indicates end of input stream

    // Output compressed stream
    output reg  [7:0] count_out,
    output reg  value_out,
    output reg  valid_out
);

    reg prev_bit;
    reg [7:0] count;
    reg first;

    // Define the maximum value the counter can hold
    wire [7:0] MAX_COUNT = {8{1'b1}};

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            count      <= 0;
            prev_bit   <= 0;
            valid_out  <= 0;
            first      <= 1;
        end else begin
            valid_out <= 0; // default

            if (valid_in) begin
                if (first) begin
                    // Case 1: First bit of a new stream
                    if (last_in) begin
                        // Edge case: Stream is only 1 bit long
                        count_out <= 1;
                        value_out <= data_in;
                        valid_out <= 1;
                        first     <= 1;
                    end else begin
                        prev_bit  <= data_in;
                        count     <= 1;
                        first     <= 0;
                    end
                end else if (data_in == prev_bit && count < MAX_COUNT) begin
                    // Case 2: Bit continues and hasn't overflowed
                    if (last_in) begin
                        count_out <= count + 1;
                        value_out <= prev_bit;
                        valid_out <= 1;
                        first     <= 1; // reset for next packet
                    end else begin
                        count <= count + 1;
                    end
                end else begin
                    // Case 3: Value changed OR Counter reached max
                    count_out <= count;
                    value_out <= prev_bit;
                    valid_out <= 1;

                    if (last_in) begin
                        // If it's the last bit AND it changed, we have a problem:
                        // We need to output the OLD run (done above) AND the NEW run (last bit).
                        // To keep your style without a state machine, we assume the next
                        // bit will start a new 'first' cycle. 
                        // Note: A 1-cycle "last-bit change" usually requires an extra state.
                        prev_bit <= data_in;
                        count    <= 1;
                        first    <= 0; 
                    end else begin
                        // Start new run normally
                        prev_bit <= data_in;
                        count    <= 1;
                    end
                end
            end
        end
    end

endmodule

*/
module rle_compressor(output y,input x);
assign y=~x;
endmodule