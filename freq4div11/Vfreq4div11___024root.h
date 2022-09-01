// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfreq4div11.h for the primary calling header

#ifndef VERILATED_VFREQ4DIV11___024ROOT_H_
#define VERILATED_VFREQ4DIV11___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfreq4div11__Syms;

//----------

VL_MODULE(Vfreq4div11___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_OUT8(COUNT,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ freq4div11__DOT__C1;
    CData/*0:0*/ freq4div11__DOT__TFF1__DOT__state;
    CData/*0:0*/ freq4div11__DOT__TFF2__DOT__state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vclklast__TOP__freq4div11__DOT__C1;

    // INTERNAL VARIABLES
    Vfreq4div11__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfreq4div11___024root);  ///< Copying not allowed
  public:
    Vfreq4div11___024root(const char* name);
    ~Vfreq4div11___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfreq4div11__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
