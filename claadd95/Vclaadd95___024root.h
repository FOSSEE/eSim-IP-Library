// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclaadd95.h for the primary calling header

#ifndef VERILATED_VCLAADD95___024ROOT_H_
#define VERILATED_VCLAADD95___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vclaadd95__Syms;

//----------

VL_MODULE(Vclaadd95___024root) {
  public:

    // PORTS
    VL_OUT8(sum,3,0);
    VL_OUT8(c_out,0,0);
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(c_in,0,0);

    // INTERNAL VARIABLES
    Vclaadd95__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vclaadd95___024root);  ///< Copying not allowed
  public:
    Vclaadd95___024root(const char* name);
    ~Vclaadd95___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vclaadd95__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
