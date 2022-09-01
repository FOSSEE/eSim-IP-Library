  `timescale 1ns / 1ps

module pwm11(
	input clk,
	output led
	);
// Create a simple counter

reg [7:0] counter =0;
always @ (posedge clk) begin
	if (counter < 5000) counter<= counter +1; // count until 5000
	else counter <=0;// reset counter
end

// create 80% duty cycle

assign led = (counter<80) ? 1:0; // assign LED to 1 if counter value is less than 80
endmodule
