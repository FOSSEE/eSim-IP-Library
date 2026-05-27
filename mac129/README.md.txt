# mac129 - Multiply-Accumulate (MAC) Unit

## Description
The Multiply-Accumulate (MAC) unit is a foundational hardware block for Digital Signal Processing (DSP). This synchronous RTL module multiplies two 4-bit input buses and continuously accumulates the product over multiple clock cycles into an 8-bit register, featuring internal overflow detection.

## Block Diagram
Refer to the comprehensive project report for detailed schematics and block diagrams.

## Pin Configuration
* **Inputs (12):** clk (1), reset (1), enable (1), clr_accum (1), data_a (4), data_b (4)
* **Outputs (9):** accum_out (8), overflow_flag (1)

## Author & Contact
* **Name:** Hanzala Zafar
* **Institution:** Jamia Millia Islamia
* **GitHub:** [@zafarhanzala](https://github.com/zafarhanzala)