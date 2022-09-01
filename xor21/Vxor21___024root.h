// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vxor21.h for the primary calling header

#ifndef VERILATED_VXOR21___024ROOT_H_
#define VERILATED_VXOR21___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vxor21__Syms;

//----------

VL_MODULE(Vxor21___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(c,0,0);

    // INTERNAL VARIABLES
    Vxor21__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vxor21___024root);  ///< Copying not allowed
  public:
    Vxor21___024root(const char* name);
    ~Vxor21___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vxor21__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
