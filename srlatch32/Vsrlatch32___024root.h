// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsrlatch32.h for the primary calling header

#ifndef VERILATED_VSRLATCH32___024ROOT_H_
#define VERILATED_VSRLATCH32___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsrlatch32__Syms;

//----------

VL_MODULE(Vsrlatch32___024root) {
  public:

    // PORTS
    VL_OUT8(Q,0,0);
    VL_OUT8(Qn,0,0);
    VL_IN8(CLK,0,0);
    VL_IN8(S,0,0);
    VL_IN8(R,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vchglast__TOP__Q;

    // INTERNAL VARIABLES
    Vsrlatch32__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsrlatch32___024root);  ///< Copying not allowed
  public:
    Vsrlatch32___024root(const char* name);
    ~Vsrlatch32___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsrlatch32__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
