// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux20_4.h for the primary calling header

#ifndef VERILATED_VMUX20_4___024ROOT_H_
#define VERILATED_VMUX20_4___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux20_4__Syms;

//----------

VL_MODULE(Vmux20_4___024root) {
  public:

    // PORTS
    VL_IN8(s,3,0);
    VL_OUT8(out,0,0);
    VL_IN16(in,15,0);

    // INTERNAL VARIABLES
    Vmux20_4__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux20_4___024root);  ///< Copying not allowed
  public:
    Vmux20_4___024root(const char* name);
    ~Vmux20_4___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux20_4__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
