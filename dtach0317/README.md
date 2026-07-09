# dtach0317
## Description

This IP implements a digital tachometer to measure the period of an asynchronous sensor signal (e.g., from a rotating motor) by counting system clock cycles between sensor pulses.
## Inputs

* `clk_sys` : High-speed system clock (e.g., 10 MHz)
* `rst_n` : Active-low asynchronous reset
* `sensor_in` : Asynchronous pulse input from speed sensor

## Outputs

* `period_count[15:0]` : Number of system clock cycles between pulses
* `data_valid` : Strobe signal that pulses high when a new measurement is ready

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
