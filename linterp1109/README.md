# linterp1109
## Description

This IP implements a linear interpolator that generates intermediate values between consecutive slow-sampled input data points, performing real-time signal smoothing and up-sampling.
## Inputs

* `clk_fast` : High-speed master clock
* `rst_n` : Active-low asynchronous reset
* `valid_in` : Data valid signal for slow-rate input (pulses high every 4th clock cycle)
* `data_in[7:0]` : 8-bit signed low-sample-rate input

## Outputs

* `data_out[7:0]` : 8-bit signed smoothed high-sample-rate output
* `valid_out` : Output valid strobe

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
