# dbn0301
## Description

This IP implements a digital switch debouncer in Verilog to filter out the noise and bouncing associated with physical pushbuttons.
## Parameters

* `DEBOUNCE_LIMIT` (Default: `16'd2000`): Stability counter threshold to detect a steady state

## Inputs

* `clk` : High-speed system clock (e.g., 10 MHz)
* `rst_n` : Active-low reset
* `button_in` : The messy, bouncing physical button input

## Outputs

* `button_out` : The clean, debounced digital output

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
