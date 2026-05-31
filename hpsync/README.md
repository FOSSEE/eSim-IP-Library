# hpsync

## Description

This IP implements a Handshake Pulse Synchronizer for Clock Domain Crossing (CDC) in Verilog.

The synchronizer safely transfers a pulse signal from one clock domain to another using a request-acknowledge handshake mechanism. It helps avoid metastability issues during asynchronous clock domain communication.

## Features

* Safe clock domain crossing
* Handshake-based synchronization
* Request and acknowledge mechanism
* Pulse transfer between asynchronous clock domains
* Rising edge pulse detection
* Metastability reduction

## Inputs

* clk_a : Source clock domain

* rst_a : Reset for source domain

* pulse_in : Input pulse signal

* clk_b : Destination clock domain

* rst_b : Reset for destination domain

## Outputs

* pulse_out : Synchronized output pulse in destination clock domain

## Operation

1. Source domain generates a request signal on pulse input.
2. Request signal is synchronized into destination clock domain.
3. Destination domain detects rising edge and generates output pulse.
4. Acknowledge signal is sent back to source domain.
5. Request is cleared after acknowledgment.

## Files Included

* Verilog source file
* eSim test circuit project files

## Author

Yamini
