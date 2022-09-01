// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfreq8div11.h for the primary calling header

#ifndef VERILATED_VFREQ8DIV11___024ROOT_H_
#define VERILATED_VFREQ8DIV11___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfreq8div11__Syms;

//----------

VL_MODULE(Vfreq8div11___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_OUT8(out_clk,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ freq8Div11__DOT__m;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vfreq8div11__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfreq8div11___024root);  ///< Copying not allowed
  public:
    Vfreq8div11___024root(const char* name);
    ~Vfreq8div11___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfreq8div11__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
