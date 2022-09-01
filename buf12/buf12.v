module buf12(a,y,ybar);
	input a;
	output y;
	output ybar;
	assign y=a;
	assign ybar=~a;	
endmodule
