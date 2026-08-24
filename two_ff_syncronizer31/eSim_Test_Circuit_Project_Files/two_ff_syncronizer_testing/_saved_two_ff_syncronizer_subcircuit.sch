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
L two_ff_synchronizer U1
U 1 1 6A0B4C95
P 2850 5550
F 0 "U1" H 5700 7350 60  0000 C CNN
F 1 "two_ff_synchronizer" H 5700 7550 60  0000 C CNN
F 2 "" H 5700 7500 60  0000 C CNN
F 3 "" H 5700 7500 60  0000 C CNN
	1    2850 5550
	1    0    0    -1  
$EndComp
$Comp
L adc_bridge_3 U3
U 1 1 6A0B4CE5
P 4450 3700
F 0 "U3" H 4450 3700 60  0000 C CNN
F 1 "adc_bridge_3" H 4450 3850 60  0000 C CNN
F 2 "" H 4450 3700 60  0000 C CNN
F 3 "" H 4450 3700 60  0000 C CNN
	1    4450 3700
	1    0    0    -1  
$EndComp
$Comp
L dac_bridge_1 U4
U 1 1 6A0B4D16
P 7000 3700
F 0 "U4" H 7000 3700 60  0000 C CNN
F 1 "dac_bridge_1" H 7000 3850 60  0000 C CNN
F 2 "" H 7000 3700 60  0000 C CNN
F 3 "" H 7000 3700 60  0000 C CNN
	1    7000 3700
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 1 1 6A0B5147
P 3600 3650
F 0 "U2" H 3650 3750 30  0000 C CNN
F 1 "PORT" H 3600 3650 30  0000 C CNN
F 2 "" H 3600 3650 60  0000 C CNN
F 3 "" H 3600 3650 60  0000 C CNN
	1    3600 3650
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 2 1 6A0B5208
P 3600 3750
F 0 "U2" H 3650 3850 30  0000 C CNN
F 1 "PORT" H 3600 3750 30  0000 C CNN
F 2 "" H 3600 3750 60  0000 C CNN
F 3 "" H 3600 3750 60  0000 C CNN
	2    3600 3750
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 3 1 6A0B522B
P 3600 3850
F 0 "U2" H 3650 3950 30  0000 C CNN
F 1 "PORT" H 3600 3850 30  0000 C CNN
F 2 "" H 3600 3850 60  0000 C CNN
F 3 "" H 3600 3850 60  0000 C CNN
	3    3600 3850
	1    0    0    -1  
$EndComp
$Comp
L PORT U2
U 4 1 6A0B53C1
P 7800 3650
F 0 "U2" H 7850 3750 30  0000 C CNN
F 1 "PORT" H 7800 3650 30  0000 C CNN
F 2 "" H 7800 3650 60  0000 C CNN
F 3 "" H 7800 3650 60  0000 C CNN
	4    7800 3650
	-1   0    0    1   
$EndComp
$EndSCHEMATC
