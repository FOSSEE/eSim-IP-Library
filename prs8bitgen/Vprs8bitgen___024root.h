// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprs8bitgen.h for the primary calling header

#ifndef VERILATED_VPRS8BITGEN___024ROOT_H_
#define VERILATED_VPRS8BITGEN___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vprs8bitgen__Syms;

//----------

VL_MODULE(Vprs8bitgen___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(out,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ prs8bitgen__DOT__sr;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vprs8bitgen__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vprs8bitgen___024root);  ///< Copying not allowed
  public:
    Vprs8bitgen___024root(const char* name);
    ~Vprs8bitgen___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vprs8bitgen__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
