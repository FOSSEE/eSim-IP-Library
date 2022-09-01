// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjscount24.h for the primary calling header

#ifndef VERILATED_VJSCOUNT24___024ROOT_H_
#define VERILATED_VJSCOUNT24___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjscount24__Syms;

//----------

VL_MODULE(Vjscount24___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,3,0);

    // LOCAL SIGNALS
    CData/*3:0*/ jscount24__DOT__q;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vjscount24__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjscount24___024root);  ///< Copying not allowed
  public:
    Vjscount24___024root(const char* name);
    ~Vjscount24___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjscount24__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
