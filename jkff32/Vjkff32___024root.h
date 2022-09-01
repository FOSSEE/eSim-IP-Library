// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjkff32.h for the primary calling header

#ifndef VERILATED_VJKFF32___024ROOT_H_
#define VERILATED_VJKFF32___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjkff32__Syms;

//----------

VL_MODULE(Vjkff32___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(j,0,0);
    VL_IN8(k,0,0);
    VL_OUT8(q,0,0);
    VL_OUT8(qb,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vjkff32__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjkff32___024root);  ///< Copying not allowed
  public:
    Vjkff32___024root(const char* name);
    ~Vjkff32___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjkff32__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
