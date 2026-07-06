# AXI-Lite RAM Controller

## Overview
This IP core implements a synchronous AXI4-Lite slave interface designed to manage data storage in an internal RAM module. It supports standard 32-bit read and write operations using a dedicated state machine for each channel, ensuring robust handshake protocols and proper signal latching. The design provides a seamless interface between AXI-Lite signaling and simple memory primitives, including full support for the write response (BRESP) and read response (RRESP) channels.

## Pinout / I-O Ports
| Port Name | Direction | Width | Description |
| :--- | :--- | :--- | :--- |
| `aclk` | Input | 1-bit | System clock |
| `aresetn` | Input | 1-bit | Active-low asynchronous reset |
| `s_axi_awaddr` | Input | `addr_width` | Write address channel |
| `s_axi_awvalid` | Input | 1-bit | Write address valid |
| `s_axi_awready` | Output | 1-bit | Write address ready |
| `s_axi_wdata` | Input | `data_width` | Write data channel |
| `s_axi_wvalid` | Input | 1-bit | Write data valid |
| `s_axi_wready` | Output | 1-bit | Write data ready |
| `s_axi_bresp` | Output | 2-bit | Write response channel |
| `s_axi_bvalid` | Output | 1-bit | Write response valid |
| `s_axi_bready` | Input | 1-bit | Write response ready |
| `s_axi_araddr` | Input | `addr_width` | Read address channel |
| `s_axi_arvalid` | Input | 1-bit | Read address valid |
| `s_axi_arready` | Output | 1-bit | Read address ready |
| `s_axi_rdata` | Output | `data_width` | Read data channel |
| `s_axi_rresp` | Output | 2-bit | Read response channel |
| `s_axi_rvalid` | Output | 1-bit | Read data valid |
| `s_axi_rready` | Input | 1-bit | Read data ready |


## Architecture Logic
* **Write Channel State Machine:** Uses an IDLE-WAIT-WRITE-RESP flow to handle the asynchronous arrival of address and data signals, ensuring both are latched before triggering the memory write operation.
* **Read Channel State Machine:** Operates through IDLE-READ-RESP states, latching the address from the master and driving the RAM output data onto the `s_axi_rdata` bus during the response phase.
* **Memory Interface:** Utilizes a combinational wrapper (`ram_design`) that derives `write_en`, `addr`, and `wdata` directly from the current state machine registers to ensure cycle-accurate memory access.
* **Response Handling:** Standardizes response signals to `2'b00` (OKAY) for both write and read transactions upon completion of the respective handshakes.

---
*Note: This design has been verified via dedicated testbench, which confirms operation via simulated write and read transactions.*
*Note: For the ease of connection and schematic simplicity, the modelled AXI Protocol Interface is hard coded for 4-bit data-width and 1-bit address*
