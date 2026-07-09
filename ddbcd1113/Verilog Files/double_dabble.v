
module double_dabble (
    input  wire        clk,      // System clock
    input  wire        rst_n,    // Active-low asynchronous reset
    input  wire        start,    // Pulse high for 1 clock cycle to begin
    input  wire [7:0]  bin_in,   // 8-bit binary input (Max 255)
    output reg  [11:0] bcd_out,  // 12-bit BCD output (Hundreds, Tens, Ones)
    output reg         done      // Goes high when conversion is complete
);

    // FSM State Encoding
    localparam IDLE  = 2'b00;
    localparam ADD3  = 2'b01;
    localparam SHIFT = 2'b10;
    localparam DONE  = 2'b11;

    reg [1:0]  state;
    reg [19:0] shift_reg;  // 20-bit register: [19:8] is BCD, [7:0] is Binary
    reg [3:0]  shift_cnt;  // Tracks the 8 required shifts

    // Combinational evaluation signals for the "Dabble" (Add 3) step
    wire [3:0] nibble1 = shift_reg[11:8];
    wire [3:0] nibble2 = shift_reg[15:12];
    wire [3:0] nibble3 = shift_reg[19:16];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state     <= IDLE;
            shift_reg <= 20'd0;
            shift_cnt <= 4'd0;
            bcd_out   <= 12'd0;
            done      <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        // Load the binary input into the lower 8 bits, clear upper 12 bits
                        shift_reg <= {12'd0, bin_in};
                        shift_cnt <= 4'd0;
                        state     <= ADD3;
                    end
                end

                ADD3: begin
                    // Check each BCD column. If >= 5, add 3.
                    // This is done concurrently using concatenation to be perfectly safe in synthesis.
                    shift_reg[19:8] <= {
                        (nibble3 >= 5) ? (nibble3 + 4'd3) : nibble3,
                        (nibble2 >= 5) ? (nibble2 + 4'd3) : nibble2,
                        (nibble1 >= 5) ? (nibble1 + 4'd3) : nibble1
                    };
                    state <= SHIFT;
                end

                SHIFT: begin
                    // Shift the entire 20-bit register left by 1
                    shift_reg <= shift_reg << 1;
                    shift_cnt <= shift_cnt + 4'd1;
                    
                    // If we have shifted 8 times, we are done
                    if (shift_cnt == 4'd7) begin 
                        state <= DONE;
                    end else begin
                        state <= ADD3;
                    end
                end

                DONE: begin
                    // Latch the final BCD value to the output port
                    bcd_out <= shift_reg[19:8];
                    done    <= 1'b1;
                    state   <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule