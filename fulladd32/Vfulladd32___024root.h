// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfulladd32.h for the primary calling header

#ifndef VERILATED_VFULLADD32___024ROOT_H_
#define VERILATED_VFULLADD32___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfulladd32__Syms;

//----------

VL_MODULE(Vfulladd32___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c_in,0,0);
    VL_OUT8(s,0,0);
    VL_OUT8(c_out,0,0);

    // INTERNAL VARIABLES
    Vfulladd32__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfulladd32___024root);  ///< Copying not allowed
  public:
    Vfulladd32___024root(const char* name);
    ~Vfulladd32___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfulladd32__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
