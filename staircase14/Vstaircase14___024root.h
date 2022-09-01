// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstaircase14.h for the primary calling header

#ifndef VERILATED_VSTAIRCASE14___024ROOT_H_
#define VERILATED_VSTAIRCASE14___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vstaircase14__Syms;

//----------

VL_MODULE(Vstaircase14___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_OUT8(val,3,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vstaircase14__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vstaircase14___024root);  ///< Copying not allowed
  public:
    Vstaircase14___024root(const char* name);
    ~Vstaircase14___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vstaircase14__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
