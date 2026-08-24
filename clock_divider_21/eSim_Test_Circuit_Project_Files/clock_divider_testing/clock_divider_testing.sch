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
LIBS:clock_divider_testing-cache
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
L clock_freq_divider_ip X1
U 1 1 69C609F4
P 5400 3900
F 0 "X1" H 5400 3900 60  0000 C CNN
F 1 "clock_freq_divider_ip" H 5400 3850 60  0000 C CNN
F 2 "" H 5400 3900 60  0001 C CNN
F 3 "" H 5400 3900 60  0001 C CNN
	1    5400 3900
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 69C60A20
P 3200 3950
F 0 "v1" H 3000 4050 60  0000 C CNN
F 1 "pulse" H 3000 3900 60  0000 C CNN
F 2 "R1" H 2900 3950 60  0000 C CNN
F 3 "" H 3200 3950 60  0000 C CNN
	1    3200 3950
	1    0    0    -1  
$EndComp
$Comp
L pulse v2
U 1 1 69C60A55
P 3650 4150
F 0 "v2" H 3450 4250 60  0000 C CNN
F 1 "pulse" H 3450 4100 60  0000 C CNN
F 2 "R1" H 3350 4150 60  0000 C CNN
F 3 "" H 3650 4150 60  0000 C CNN
	1    3650 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 3700 4650 3700
Wire Wire Line
	4650 3700 4650 3750
Wire Wire Line
	3200 3500 4650 3500
$Comp
L GND #PWR01
U 1 1 69C60A96
P 3650 4600
F 0 "#PWR01" H 3650 4350 50  0001 C CNN
F 1 "GND" H 3650 4450 50  0000 C CNN
F 2 "" H 3650 4600 50  0001 C CNN
F 3 "" H 3650 4600 50  0001 C CNN
	1    3650 4600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 69C60AB0
P 3200 4400
F 0 "#PWR02" H 3200 4150 50  0001 C CNN
F 1 "GND" H 3200 4250 50  0000 C CNN
F 2 "" H 3200 4400 50  0001 C CNN
F 3 "" H 3200 4400 50  0001 C CNN
	1    3200 4400
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR03
U 1 1 69C60AD3
P 6200 3450
F 0 "#PWR03" H 6200 3300 50  0001 C CNN
F 1 "VCC" H 6200 3600 50  0000 C CNN
F 2 "" H 6200 3450 50  0001 C CNN
F 3 "" H 6200 3450 50  0001 C CNN
	1    6200 3450
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 69C60AED
P 4650 4350
F 0 "#PWR04" H 4650 4100 50  0001 C CNN
F 1 "GND" H 4650 4200 50  0000 C CNN
F 2 "" H 4650 4350 50  0001 C CNN
F 3 "" H 4650 4350 50  0001 C CNN
	1    4650 4350
	1    0    0    -1  
$EndComp
Text GLabel 6800 3600 2    60   Output ~ 0
clk_10
Text GLabel 3100 3300 0    60   Input ~ 0
clk0
Text GLabel 3750 3150 0    60   Input ~ 0
reset0
Wire Wire Line
	6600 3450 6600 3650
Wire Wire Line
	6600 3600 6800 3600
Wire Wire Line
	6600 3650 6200 3650
Connection ~ 6600 3600
Wire Wire Line
	3750 3150 4300 3150
Connection ~ 3900 3150
Connection ~ 3900 3500
Wire Wire Line
	3250 3250 3100 3250
Wire Wire Line
	3100 3250 3100 3300
Wire Wire Line
	3250 3250 3250 3500
Wire Wire Line
	3250 3500 3300 3500
Connection ~ 3300 3500
$Comp
L plot_v1 U3
U 1 1 69C60CC7
P 6600 3650
F 0 "U3" H 6600 4150 60  0000 C CNN
F 1 "plot_v1" H 6800 4000 60  0000 C CNN
F 2 "" H 6600 3650 60  0000 C CNN
F 3 "" H 6600 3650 60  0000 C CNN
	1    6600 3650
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U2
U 1 1 69C60D07
P 3900 3300
F 0 "U2" H 3900 3800 60  0000 C CNN
F 1 "plot_v1" H 4100 3650 60  0000 C CNN
F 2 "" H 3900 3300 60  0000 C CNN
F 3 "" H 3900 3300 60  0000 C CNN
	1    3900 3300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U1
U 1 1 69C60D4D
P 3250 3450
F 0 "U1" H 3250 3950 60  0000 C CNN
F 1 "plot_v1" H 3450 3800 60  0000 C CNN
F 2 "" H 3250 3450 60  0000 C CNN
F 3 "" H 3250 3450 60  0000 C CNN
	1    3250 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 3100 3900 3150
Wire Wire Line
	4300 3150 4300 3700
Connection ~ 4300 3700
$EndSCHEMATC
