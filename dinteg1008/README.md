# dinteg1008
## Description

This IP implements a discrete digital integrator ($y[n] = y[n-1] + x[n]$) with scaling to mimic the analog charging and discharging behavior of an RC integrator circuit.
## Inputs

* `clk` : System clock
* `rst_n` : Active-low reset
* `data_in[7:0]` : 8-bit digital input data (e.g. from an ADC)

## Outputs

* `data_out[7:0]` : 8-bit integrated sum output

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
