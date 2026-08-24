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
L clock_freq_divider_ip U1
U 1 1 69C60879
P 2750 5500
F 0 "U1" H 5600 7300 60  0000 C CNN
F 1 "clock_freq_divider_ip" H 5600 7500 60  0000 C CNN
F 2 "" H 5600 7450 60  0000 C CNN
F 3 "" H 5600 7450 60  0000 C CNN
	1    2750 5500
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U4
U 1 1 69C608F1
P 6900 3650
F 0 "U4" H 6900 3650 60  0000 C CNN
F 1 "dac_bridge_1" H 6900 3800 60  0000 C CNN
F 2 "" H 6900 3650 60  0000 C CNN
F 3 "" H 6900 3650 60  0000 C CNN
	1    6900 3650
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_2 U3
U 1 1 69C60938
P 4350 3650
F 0 "U3" H 4350 3650 60  0000 C CNN
F 1 "adc_bridge_2" H 4350 3800 60  0000 C CNN
F 2 "" H 4350 3650 60  0000 C CNN
F 3 "" H 4350 3650 60  0000 C CNN
	1    4350 3650
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 1 1 69C6096F
P 3500 3600
F 0 "U2" H 3550 3700 30  0000 C CNN
F 1 "PORT" H 3500 3600 30  0000 C CNN
F 2 "" H 3500 3600 60  0000 C CNN
F 3 "" H 3500 3600 60  0000 C CNN
	1    3500 3600
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 2 1 69C609B6
P 3500 3700
F 0 "U2" H 3550 3800 30  0000 C CNN
F 1 "PORT" H 3500 3700 30  0000 C CNN
F 2 "" H 3500 3700 60  0000 C CNN
F 3 "" H 3500 3700 60  0000 C CNN
	2    3500 3700
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 5 1 69C609D9
P 7700 3600
F 0 "U2" H 7750 3700 30  0000 C CNN
F 1 "PORT" H 7700 3600 30  0000 C CNN
F 2 "" H 7700 3600 60  0000 C CNN
F 3 "" H 7700 3600 60  0000 C CNN
	5    7700 3600
	-1   0    0    1   
$EndComp
$Comp
L PORT U2
U 3 1 69C60A26
P 4900 2700
F 0 "U2" H 4950 2800 30  0000 C CNN
F 1 "PORT" H 4900 2700 30  0000 C CNN
F 2 "" H 4900 2700 60  0000 C CNN
F 3 "" H 4900 2700 60  0000 C CNN
	3    4900 2700
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 4 1 69C60A85
P 4900 2800
F 0 "U2" H 4950 2900 30  0000 C CNN
F 1 "PORT" H 4900 2800 30  0000 C CNN
F 2 "" H 4900 2800 60  0000 C CNN
F 3 "" H 4900 2800 60  0000 C CNN
	4    4900 2800
	1    0    0    -1  
$EndComp
NoConn ~ 5150 2700
NoConn ~ 5150 2800
$EndSCHEMATC
