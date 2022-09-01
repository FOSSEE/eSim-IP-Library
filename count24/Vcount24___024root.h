// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcount24.h for the primary calling header

#ifndef VERILATED_VCOUNT24___024ROOT_H_
#define VERILATED_VCOUNT24___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcount24__Syms;

//----------

VL_MODULE(Vcount24___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(count,3,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vcount24__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcount24___024root);  ///< Copying not allowed
  public:
    Vcount24___024root(const char* name);
    ~Vcount24___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcount24__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
