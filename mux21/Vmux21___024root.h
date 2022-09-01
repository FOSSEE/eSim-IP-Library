// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux21.h for the primary calling header

#ifndef VERILATED_VMUX21___024ROOT_H_
#define VERILATED_VMUX21___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux21__Syms;

//----------

VL_MODULE(Vmux21___024root) {
  public:

    // PORTS
    VL_IN8(i0,0,0);
    VL_IN8(i1,0,0);
    VL_IN8(sel,0,0);
    VL_OUT8(y,0,0);

    // INTERNAL VARIABLES
    Vmux21__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux21___024root);  ///< Copying not allowed
  public:
    Vmux21___024root(const char* name);
    ~Vmux21___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux21__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
