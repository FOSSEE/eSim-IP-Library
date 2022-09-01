module inv11 (inv_out, inv_in);
	output inv_out;
	input inv_in;
	supply0 GND; 
	supply1 PWR;

	pmos(inv_out, PWR, inv_in);
	nmos(inv_out, GND, inv_in);
endmodule
