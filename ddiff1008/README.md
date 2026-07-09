# ddiff1008
## Description

This IP implements a digital differentiator using a first-order difference equation ($y[n] = x[n] - x[n-1]$). It scales the difference and applies a DC offset of 128 to prevent out-of-range values, suitable for calculating derivatives of digital signals.
## Inputs

* `clk` : System clock
* `rst_n` : Active-low reset
* `data_in[7:0]` : 8-bit digital input data (e.g. from an ADC)

## Outputs

* `data_out[7:0]` : 8-bit derivative output

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
