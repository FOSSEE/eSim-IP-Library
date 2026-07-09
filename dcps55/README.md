# dcps55
## Description

This IP implements a dynamic clock phase shifter that generates four quadrature phase outputs (0°, 90°, 180°, and 270°) using a Johnson counter, and selects one of them using multiplexing logic.
## Inputs

* `clk_in` : Input Master Clock (4x target frequency)
* `rst_n` : Asynchronous Reset (Active Low)
* `en` : Clock Generator Enable
* `phase_sel[1:0]` : Phase select: 00 = 0°, 01 = 90°, 10 = 180°, 11 = 270°

## Outputs

* `clk_0` : 0° Phase clock
* `clk_90` : 90° Phase clock
* `clk_180` : 180° Phase clock
* `clk_270` : 270° Phase clock
* `clk_out` : Glitch-free selected phase clock output

## Files Included

* Verilog source files
* eSim test circuit project files

## Author

Thejesh Varma
