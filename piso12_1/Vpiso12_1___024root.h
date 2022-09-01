// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpiso12_1.h for the primary calling header

#ifndef VERILATED_VPISO12_1___024ROOT_H_
#define VERILATED_VPISO12_1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vpiso12_1__Syms;

//----------

VL_MODULE(Vpiso12_1___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(load,0,0);
    VL_OUT8(Data_sr,0,0);
    VL_IN16(Data_pr,9,0);

    // LOCAL SIGNALS
    SData/*9:0*/ piso12_1__DOT__tmp;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vpiso12_1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpiso12_1___024root);  ///< Copying not allowed
  public:
    Vpiso12_1___024root(const char* name);
    ~Vpiso12_1___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vpiso12_1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
