// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Veleasm63.h for the primary calling header

#ifndef VERILATED_VELEASM63___024ROOT_H_
#define VERILATED_VELEASM63___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Veleasm63__Syms;

//----------

VL_MODULE(Veleasm63___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ra,0,0);
    VL_IN8(rb,0,0);
    VL_IN8(rc,0,0);
    VL_IN8(rd,0,0);
    VL_OUT8(floor,1,0);
    VL_OUT8(dir,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ eleasm63__DOT__state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Veleasm63__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Veleasm63___024root);  ///< Copying not allowed
  public:
    Veleasm63___024root(const char* name);
    ~Veleasm63___024root();

    // INTERNAL METHODS
    void __Vconfigure(Veleasm63__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
