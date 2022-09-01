// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdff32.h for the primary calling header

#ifndef VERILATED_VDFF32___024ROOT_H_
#define VERILATED_VDFF32___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdff32__Syms;

//----------

VL_MODULE(Vdff32___024root) {
  public:

    // PORTS
    VL_OUT8(Q,0,0);
    VL_OUT8(Qbar,0,0);
    VL_IN8(D,0,0);
    VL_IN8(Clk,0,0);
    VL_IN8(Reset,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vchglast__TOP__Q;

    // INTERNAL VARIABLES
    Vdff32__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdff32___024root);  ///< Copying not allowed
  public:
    Vdff32___024root(const char* name);
    ~Vdff32___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdff32__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
