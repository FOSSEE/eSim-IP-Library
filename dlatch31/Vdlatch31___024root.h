// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdlatch31.h for the primary calling header

#ifndef VERILATED_VDLATCH31___024ROOT_H_
#define VERILATED_VDLATCH31___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdlatch31__Syms;

//----------

VL_MODULE(Vdlatch31___024root) {
  public:

    // PORTS
    VL_IN8(d,0,0);
    VL_IN8(en,0,0);
    VL_IN8(rstn,0,0);
    VL_OUT8(q,0,0);

    // INTERNAL VARIABLES
    Vdlatch31__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdlatch31___024root);  ///< Copying not allowed
  public:
    Vdlatch31___024root(const char* name);
    ~Vdlatch31___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdlatch31__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
