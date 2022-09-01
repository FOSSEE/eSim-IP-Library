// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcount23.h for the primary calling header

#ifndef VERILATED_VCOUNT23___024ROOT_H_
#define VERILATED_VCOUNT23___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcount23__Syms;

//----------

VL_MODULE(Vcount23___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(counter,2,0);

    // LOCAL SIGNALS
    CData/*2:0*/ count23__DOT__counter_up;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vcount23__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcount23___024root);  ///< Copying not allowed
  public:
    Vcount23___024root(const char* name);
    ~Vcount23___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcount23__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
