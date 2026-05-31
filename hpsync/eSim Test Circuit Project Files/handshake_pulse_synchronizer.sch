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
LIBS:handshake_pulse_synchronizer-cache
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
L handshake_pulse_synchronizer_ip X1
U 1 1 69D948B0
P 6000 3250
F 0 "X1" H 6000 3250 60  0000 C CNN
F 1 "handshake_pulse_synchronizer_ip" H 6050 3100 60  0000 C CNN
F 2 "" H 6000 3250 60  0001 C CNN
F 3 "" H 6000 3250 60  0001 C CNN
	1    6000 3250
	1    0    0    -1  
$EndComp
$Comp
L pulse v1
U 1 1 69D94907
P 3250 2150
F 0 "v1" H 3050 2250 60  0000 C CNN
F 1 "pulse" H 3050 2100 60  0000 C CNN
F 2 "R1" H 2950 2150 60  0000 C CNN
F 3 "" H 3250 2150 60  0000 C CNN
	1    3250 2150
	0    1    1    0   
$EndComp
$Comp
L pulse v2
U 1 1 69D9495A
P 3250 2650
F 0 "v2" H 3050 2750 60  0000 C CNN
F 1 "pulse" H 3050 2600 60  0000 C CNN
F 2 "R1" H 2950 2650 60  0000 C CNN
F 3 "" H 3250 2650 60  0000 C CNN
	1    3250 2650
	0    1    1    0   
$EndComp
$Comp
L pulse v3
U 1 1 69D9498D
P 3250 3150
F 0 "v3" H 3050 3250 60  0000 C CNN
F 1 "pulse" H 3050 3100 60  0000 C CNN
F 2 "R1" H 2950 3150 60  0000 C CNN
F 3 "" H 3250 3150 60  0000 C CNN
	1    3250 3150
	0    1    1    0   
$EndComp
$Comp
L pulse v4
U 1 1 69D949CA
P 3300 3650
F 0 "v4" H 3100 3750 60  0000 C CNN
F 1 "pulse" H 3100 3600 60  0000 C CNN
F 2 "R1" H 3000 3650 60  0000 C CNN
F 3 "" H 3300 3650 60  0000 C CNN
	1    3300 3650
	0    1    1    0   
$EndComp
$Comp
L pulse v5
U 1 1 69D949F7
P 3300 4150
F 0 "v5" H 3100 4250 60  0000 C CNN
F 1 "pulse" H 3100 4100 60  0000 C CNN
F 2 "R1" H 3000 4150 60  0000 C CNN
F 3 "" H 3300 4150 60  0000 C CNN
	1    3300 4150
	0    1    1    0   
$EndComp
Wire Wire Line
	3700 2150 5000 2150
Wire Wire Line
	5000 2150 5000 3100
Wire Wire Line
	3700 2650 4900 2650
Wire Wire Line
	4900 2650 4900 3200
Wire Wire Line
	4900 3200 5000 3200
Wire Wire Line
	3700 3150 4800 3150
Wire Wire Line
	4800 3150 4800 3300
Wire Wire Line
	4800 3300 5000 3300
Wire Wire Line
	3750 4150 5000 4150
Wire Wire Line
	5000 4150 5000 3550
Wire Wire Line
	3750 3650 4900 3650
Wire Wire Line
	4900 3650 4900 3450
Wire Wire Line
	4900 3450 5000 3450
$Comp
L DC v6
U 1 1 69D94CDF
P 6100 1800
F 0 "v6" H 5900 1900 60  0000 C CNN
F 1 "DC" H 5900 1750 60  0000 C CNN
F 2 "R1" H 5800 1800 60  0000 C CNN
F 3 "" H 6100 1800 60  0000 C CNN
	1    6100 1800
	0    1    1    0   
$EndComp
$Comp
L eSim_GND #PWR01
U 1 1 69D94DB5
P 5650 1800
F 0 "#PWR01" H 5650 1550 50  0001 C CNN
F 1 "eSim_GND" H 5650 1650 50  0000 C CNN
F 2 "" H 5650 1800 50  0001 C CNN
F 3 "" H 5650 1800 50  0001 C CNN
	1    5650 1800
	0    1    1    0   
$EndComp
$Comp
L eSim_GND #PWR02
U 1 1 69D94E9B
P 2800 2150
F 0 "#PWR02" H 2800 1900 50  0001 C CNN
F 1 "eSim_GND" H 2800 2000 50  0000 C CNN
F 2 "" H 2800 2150 50  0001 C CNN
F 3 "" H 2800 2150 50  0001 C CNN
	1    2800 2150
	1    0    0    -1  
$EndComp
$Comp
L eSim_GND #PWR03
U 1 1 69D94EBD
P 2800 2650
F 0 "#PWR03" H 2800 2400 50  0001 C CNN
F 1 "eSim_GND" H 2800 2500 50  0000 C CNN
F 2 "" H 2800 2650 50  0001 C CNN
F 3 "" H 2800 2650 50  0001 C CNN
	1    2800 2650
	1    0    0    -1  
$EndComp
$Comp
L eSim_GND #PWR04
U 1 1 69D94EDF
P 2800 3150
F 0 "#PWR04" H 2800 2900 50  0001 C CNN
F 1 "eSim_GND" H 2800 3000 50  0000 C CNN
F 2 "" H 2800 3150 50  0001 C CNN
F 3 "" H 2800 3150 50  0001 C CNN
	1    2800 3150
	1    0    0    -1  
$EndComp
$Comp
L eSim_GND #PWR05
U 1 1 69D94F01
P 2850 3650
F 0 "#PWR05" H 2850 3400 50  0001 C CNN
F 1 "eSim_GND" H 2850 3500 50  0000 C CNN
F 2 "" H 2850 3650 50  0001 C CNN
F 3 "" H 2850 3650 50  0001 C CNN
	1    2850 3650
	1    0    0    -1  
$EndComp
$Comp
L eSim_GND #PWR06
U 1 1 69D94FB6
P 2850 4150
F 0 "#PWR06" H 2850 3900 50  0001 C CNN
F 1 "eSim_GND" H 2850 4000 50  0000 C CNN
F 2 "" H 2850 4150 50  0001 C CNN
F 3 "" H 2850 4150 50  0001 C CNN
	1    2850 4150
	1    0    0    -1  
$EndComp
$Comp
L eSim_VCC #PWR07
U 1 1 69D95048
P 6550 1800
F 0 "#PWR07" H 6550 1650 50  0001 C CNN
F 1 "eSim_VCC" H 6550 1950 50  0000 C CNN
F 2 "" H 6550 1800 50  0001 C CNN
F 3 "" H 6550 1800 50  0001 C CNN
	1    6550 1800
	0    1    1    0   
$EndComp
$Comp
L plot_v1 U1
U 1 1 69D9514A
P 3950 2300
F 0 "U1" H 3950 2800 60  0000 C CNN
F 1 "plot_v1" H 4150 2650 60  0000 C CNN
F 2 "" H 3950 2300 60  0000 C CNN
F 3 "" H 3950 2300 60  0000 C CNN
	1    3950 2300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U3
U 1 1 69D95309
P 3950 3300
F 0 "U3" H 3950 3800 60  0000 C CNN
F 1 "plot_v1" H 4150 3650 60  0000 C CNN
F 2 "" H 3950 3300 60  0000 C CNN
F 3 "" H 3950 3300 60  0000 C CNN
	1    3950 3300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U4
U 1 1 69D953D9
P 3950 3800
F 0 "U4" H 3950 4300 60  0000 C CNN
F 1 "plot_v1" H 4150 4150 60  0000 C CNN
F 2 "" H 3950 3800 60  0000 C CNN
F 3 "" H 3950 3800 60  0000 C CNN
	1    3950 3800
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U5
U 1 1 69D95470
P 3950 4300
F 0 "U5" H 3950 4800 60  0000 C CNN
F 1 "plot_v1" H 4150 4650 60  0000 C CNN
F 2 "" H 3950 4300 60  0000 C CNN
F 3 "" H 3950 4300 60  0000 C CNN
	1    3950 4300
	1    0    0    -1  
$EndComp
$Comp
L plot_v1 U6
U 1 1 69D9558D
P 7300 3250
F 0 "U6" H 7300 3750 60  0000 C CNN
F 1 "plot_v1" H 7500 3600 60  0000 C CNN
F 2 "" H 7300 3250 60  0000 C CNN
F 3 "" H 7300 3250 60  0000 C CNN
	1    7300 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 3150 7550 3150
Wire Wire Line
	3950 2100 3950 2150
Connection ~ 3950 2150
Wire Wire Line
	3950 2600 3950 2650
Connection ~ 3950 2650
Wire Wire Line
	3950 3100 3950 3150
Connection ~ 3950 3150
Wire Wire Line
	3950 3600 3950 3650
Connection ~ 3950 3650
Wire Wire Line
	3950 4100 3950 4150
Connection ~ 3950 4150
Text GLabel 4400 2100 1    60   Input ~ 0
clk_a
Text GLabel 4400 2550 1    60   Input ~ 0
rst_a
Text GLabel 4500 3100 1    60   Input ~ 0
pulse_in
Text GLabel 4450 3550 1    60   Input ~ 0
clk_b
Text GLabel 4450 4050 1    60   Input ~ 0
rst_b
Text GLabel 7550 3150 2    60   Output ~ 0
pulse_out
Wire Wire Line
	4450 4050 4450 4150
Connection ~ 4450 4150
Wire Wire Line
	4450 3550 4450 3650
Connection ~ 4450 3650
Wire Wire Line
	4500 3100 4500 3150
Connection ~ 4500 3150
Wire Wire Line
	4400 2550 4400 2650
Connection ~ 4400 2650
Wire Wire Line
	4400 2100 4400 2150
Connection ~ 4400 2150
$Comp
L plot_v1 U2
U 1 1 69D9D363
P 3950 2800
F 0 "U2" H 3950 3300 60  0000 C CNN
F 1 "plot_v1" H 4150 3150 60  0000 C CNN
F 2 "" H 3950 2800 60  0000 C CNN
F 3 "" H 3950 2800 60  0000 C CNN
	1    3950 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	7300 3050 7300 3150
Connection ~ 7300 3150
$EndSCHEMATC
