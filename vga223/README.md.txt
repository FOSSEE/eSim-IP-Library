# vga223 - VGA Display Timing Generator (640x480)

## Description
A purely digital hardware controller capable of generating industry-standard VGA timing signals and managing pixel coordinates for a 640x480 resolution display at a 60Hz refresh rate. It utilizes nested horizontal and vertical counters to synchronize active video areas and blanking intervals.

## Block Diagram
Refer to the comprehensive project report for detailed schematics and block diagrams.

## Pin Configuration
* **Inputs (2):** clk (1), reset (1)
* **Outputs (23):** h_sync (1), v_sync (1), video_on (1), pixel_x (10), pixel_y (10)

## Author & Contact
* **Name:** Hanzala Zafar
* **Institution:** Jamia Millia Islamia
* **GitHub:** [@zafarhanzala](https://github.com/zafarhanzala)