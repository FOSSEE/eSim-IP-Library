# ps2rx49 - PS/2 Keyboard Protocol Receiver

## Description
A hardware receiver capable of safely crossing asynchronous clock boundaries to decode 11-bit PS/2 peripheral frames. The architecture features a 3-stage digital synchronizer to immunize the host system against external metastability and safely extract multi-cycle data payloads.

## Block Diagram
Refer to the comprehensive project report for detailed schematics and block diagrams.

## Pin Configuration
* **Inputs (4):** clk (1), rst (1), ps2_clk (1), ps2_data (1)
* **Outputs (9):** rx_data (8), rx_done (1)

## Author & Contact
* **Name:** Hanzala Zafar
* **Institution:** Jamia Millia Islamia
* **GitHub:** [@zafarhanzala](https://github.com/zafarhanzala)