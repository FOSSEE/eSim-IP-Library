// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux61.h for the primary calling header

#ifndef VERILATED_VMUX61___024ROOT_H_
#define VERILATED_VMUX61___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux61__Syms;

//----------

VL_MODULE(Vmux61___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c,0,0);
    VL_IN8(d,0,0);
    VL_IN8(s0,0,0);
    VL_IN8(s1,0,0);
    VL_OUT8(out,0,0);

    // INTERNAL VARIABLES
    Vmux61__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux61___024root);  ///< Copying not allowed
  public:
    Vmux61___024root(const char* name);
    ~Vmux61___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux61__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
