// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrfasic43_9.h for the primary calling header

#ifndef VERILATED_VRFASIC43_9___024ROOT_H_
#define VERILATED_VRFASIC43_9___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrfasic43_9__Syms;

//----------

VL_MODULE(Vrfasic43_9___024root) {
  public:

    // PORTS
    VL_IN8(in_Global_Clock,0,0);
    VL_IN8(in_Clk,0,0);
    VL_IN8(in_RST,0,0);
    VL_IN8(in_Sensor1,7,0);
    VL_IN8(in_Sensor2,7,0);
    VL_IN8(in_Sensor3,7,0);
    VL_IN8(in_Sensor4,7,0);
    VL_IN8(in_Sensor5,7,0);
    VL_OUT8(out_Light,7,0);
    VL_OUT8(out_Tx_Serial,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ rfasic43_9__DOT__reg_1minRecord;
    CData/*0:0*/ rfasic43_9__DOT__reg_5minTransmit;
    CData/*7:0*/ rfasic43_9__DOT__reg_address;
    CData/*7:0*/ rfasic43_9__DOT__reg_Tx_8bitData;
    CData/*7:0*/ rfasic43_9__DOT__reg_trackaddress;
    CData/*2:0*/ rfasic43_9__DOT__reg_Tx_Byte;
    CData/*5:0*/ rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countsec;
    CData/*5:0*/ rfasic43_9__DOT__glenn_TIMER__DOT__reg_Countmin;
    CData/*2:0*/ rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main;
    CData/*2:0*/ rfasic43_9__DOT__glenn_UART__DOT__reg_Bit_Index;
    CData/*7:0*/ rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Data;
    CData/*0:0*/ rfasic43_9__DOT__glenn_UART__DOT__reg_Tx_Done;
    IData/*31:0*/ rfasic43_9__DOT__reg_d;
    IData/*31:0*/ rfasic43_9__DOT__reg_q;
    VlUnpacked<IData/*31:0*/, 128> rfasic43_9__DOT__glenn_RAM128x32__DOT__MEMORY;

    // LOCAL VARIABLES
    CData/*2:0*/ __Vdly__rfasic43_9__DOT__glenn_UART__DOT__reg_State_Main;
    CData/*0:0*/ __Vclklast__TOP__in_Global_Clock;
    CData/*0:0*/ __Vclklast__TOP__in_RST;
    CData/*0:0*/ __Vclklast__TOP__in_Clk;

    // INTERNAL VARIABLES
    Vrfasic43_9__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrfasic43_9___024root);  ///< Copying not allowed
  public:
    Vrfasic43_9___024root(const char* name);
    ~Vrfasic43_9___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vrfasic43_9__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
