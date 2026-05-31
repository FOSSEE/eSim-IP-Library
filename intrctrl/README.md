# intrctrl

## Description

This IP implements an Interrupt Controller in Verilog.

The controller receives interrupt requests and selects the highest priority interrupt using a priority encoder. It communicates interrupt requests to the CPU and waits for acknowledgment before returning to idle state.

## Inputs

* clk : System clock
* rst : Reset signal
* irq[3:0] : Interrupt request lines
* ack : CPU acknowledge signal

## Outputs

* intr : Interrupt signal to CPU
* int_id_0 : Interrupt ID bit 0
* int_id_1 : Interrupt ID bit 1

## Files Included

* Verilog source file
* eSim test circuit project files

## Author

Yamini
