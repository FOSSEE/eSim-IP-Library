# i2stx351 - 16-Bit I2S Stereo Audio Transmitter

## Description
A robust, synthesis-ready IP core capable of serializing parallel 16-bit Left and Right audio channels into a standard I2S stereo stream. The architecture incorporates the strict 1-bit delay constraint required for proper Word Select (WS/LRCLK) protocol alignment in digital audio devices.

## Block Diagram
Refer to the comprehensive project report for detailed schematics and block diagrams.

## Pin Configuration
* **Inputs (35):** clk (1), rst (1), lrclk (1), left_data (16), right_data (16)
* **Outputs (1):** sdata (1)

## Author & Contact
* **Name:** Hanzala Zafar
* **Institution:** Jamia Millia Islamia
* **GitHub:** [@zafarhanzala](https://github.com/zafarhanzala)