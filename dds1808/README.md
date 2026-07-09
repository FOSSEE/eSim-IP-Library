# dds1808
## Description

This IP implements a Direct Digital Synthesis (DDS) architecture using a 16-bit phase accumulator and a pre-calculated 32-entry sine lookup table (LUT) to generate an 8-bit digital sine wave.
## Inputs

* `clk` : High-speed system clock
* `rst_n` : Active-low asynchronous reset
* `tuning_word[15:0]` : Frequency control word (controls step size of phase accumulator)

## Outputs

* `sine_out[7:0]` : 8-bit digital sine wave amplitude output

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
