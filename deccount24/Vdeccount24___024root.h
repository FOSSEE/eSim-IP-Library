// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdeccount24.h for the primary calling header

#ifndef VERILATED_VDECCOUNT24___024ROOT_H_
#define VERILATED_VDECCOUNT24___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdeccount24__Syms;

//----------

VL_MODULE(Vdeccount24___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(q,3,0);

    // LOCAL SIGNALS
    CData/*0:0*/ deccount24__DOT__a;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__deccount24__DOT__a;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__deccount24__DOT__a;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vchglast__TOP__deccount24__DOT__a;

    // INTERNAL VARIABLES
    Vdeccount24__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdeccount24___024root);  ///< Copying not allowed
  public:
    Vdeccount24___024root(const char* name);
    ~Vdeccount24___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdeccount24__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
