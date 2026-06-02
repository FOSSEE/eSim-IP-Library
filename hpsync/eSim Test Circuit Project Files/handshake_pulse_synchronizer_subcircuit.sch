EESchema Schematic File Version 2
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:power
LIBS:eSim_Plot
LIBS:transistors
LIBS:conn
LIBS:eSim_User
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:eSim_Analog
LIBS:eSim_Devices
LIBS:eSim_Digital
LIBS:eSim_Hybrid
LIBS:eSim_Miscellaneous
LIBS:eSim_Power
LIBS:eSim_Sources
LIBS:eSim_Subckt
LIBS:eSim_Nghdl
LIBS:eSim_Ngveri
LIBS:eSim_SKY130
LIBS:eSim_SKY130_Subckts
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L handshake_pulse_sync_verilog U1
U 1 1 69D94662
P 3100 5250
F 0 "U1" H 5950 7050 60  0000 C CNN
F 1 "handshake_pulse_sync_verilog" H 5950 7250 60  0000 C CNN
F 2 "" H 5950 7200 60  0000 C CNN
F 3 "" H 5950 7200 60  0000 C CNN
	1    3100 5250
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_5 U3
U 1 1 69D946BA
P 4700 3400
F 0 "U3" H 4700 3400 60  0000 C CNN
F 1 "adc_bridge_5" H 4700 3550 60  0000 C CNN
F 2 "" H 4700 3400 60  0000 C CNN
F 3 "" H 4700 3400 60  0000 C CNN
	1    4700 3400
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U4
U 1 1 69D9470D
P 7250 3400
F 0 "U4" H 7250 3400 60  0000 C CNN
F 1 "dac_bridge_1" H 7250 3550 60  0000 C CNN
F 2 "" H 7250 3400 60  0000 C CNN
F 3 "" H 7250 3400 60  0000 C CNN
	1    7250 3400
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 1 1 69D94770
P 3850 3350
F 0 "U2" H 3900 3450 30  0000 C CNN
F 1 "PORT" H 3850 3350 30  0000 C CNN
F 2 "" H 3850 3350 60  0000 C CNN
F 3 "" H 3850 3350 60  0000 C CNN
	1    3850 3350
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 2 1 69D947D3
P 3850 3450
F 0 "U2" H 3900 3550 30  0000 C CNN
F 1 "PORT" H 3850 3450 30  0000 C CNN
F 2 "" H 3850 3450 60  0000 C CNN
F 3 "" H 3850 3450 60  0000 C CNN
	2    3850 3450
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 3 1 69D947FC
P 3850 3550
F 0 "U2" H 3900 3650 30  0000 C CNN
F 1 "PORT" H 3850 3550 30  0000 C CNN
F 2 "" H 3850 3550 60  0000 C CNN
F 3 "" H 3850 3550 60  0000 C CNN
	3    3850 3550
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 4 1 69D94825
P 3850 3650
F 0 "U2" H 3900 3750 30  0000 C CNN
F 1 "PORT" H 3850 3650 30  0000 C CNN
F 2 "" H 3850 3650 60  0000 C CNN
F 3 "" H 3850 3650 60  0000 C CNN
	4    3850 3650
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 5 1 69D94850
P 3850 3750
F 0 "U2" H 3900 3850 30  0000 C CNN
F 1 "PORT" H 3850 3750 30  0000 C CNN
F 2 "" H 3850 3750 60  0000 C CNN
F 3 "" H 3850 3750 60  0000 C CNN
	5    3850 3750
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 6 1 69D949B1
P 8050 3350
F 0 "U2" H 8100 3450 30  0000 C CNN
F 1 "PORT" H 8050 3350 30  0000 C CNN
F 2 "" H 8050 3350 60  0000 C CNN
F 3 "" H 8050 3350 60  0000 C CNN
	6    8050 3350
	-1   0    0    1   
$EndComp
$EndSCHEMATC
