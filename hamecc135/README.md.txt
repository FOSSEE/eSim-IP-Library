# hamecc135 - Pipelined Hamming (7,4) Error Correction Core

## Description
A Pipelined Hamming (7,4) Error Correction Code (ECC) IP core designed for fault-tolerant architectures. Operating across three distinct synchronous stages, the core identifies and strictly corrects single-bit physical channel errors in real-time utilizing a purely Boolean XOR toggling logic engine.

## Block Diagram
Refer to the comprehensive project report for detailed schematics and block diagrams.

## Pin Configuration
* **Inputs (13):** clk (1), rst (1), data_in (4), error_inject (7)
* **Outputs (5):** data_out (4), error_detected (1)

## Author & Contact
* **Name:** Hanzala Zafar
* **Institution:** Jamia Millia Islamia
* **GitHub:** [@zafarhanzala](https://github.com/zafarhanzala)