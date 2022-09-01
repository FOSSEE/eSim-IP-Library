// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtrafficlight2_12.h for the primary calling header

#ifndef VERILATED_VTRAFFICLIGHT2_12___024ROOT_H_
#define VERILATED_VTRAFFICLIGHT2_12___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtrafficlight2_12__Syms;

//----------

VL_MODULE(Vtrafficlight2_12___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(light_S1,2,0);
    VL_OUT8(light_S2,2,0);
    VL_OUT8(light_S3,2,0);
    VL_OUT8(light_S4,2,0);

    // LOCAL SIGNALS
    CData/*3:0*/ trafficlight2_12__DOT__count;
    CData/*2:0*/ trafficlight2_12__DOT__ps;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vtrafficlight2_12__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtrafficlight2_12___024root);  ///< Copying not allowed
  public:
    Vtrafficlight2_12___024root(const char* name);
    ~Vtrafficlight2_12___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtrafficlight2_12__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
