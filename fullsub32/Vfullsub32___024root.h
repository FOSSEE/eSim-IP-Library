// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfullsub32.h for the primary calling header

#ifndef VERILATED_VFULLSUB32___024ROOT_H_
#define VERILATED_VFULLSUB32___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfullsub32__Syms;

//----------

VL_MODULE(Vfullsub32___024root) {
  public:

    // PORTS
    VL_OUT8(D,0,0);
    VL_OUT8(B,0,0);
    VL_IN8(X,0,0);
    VL_IN8(Y,0,0);
    VL_IN8(Z,0,0);

    // INTERNAL VARIABLES
    Vfullsub32__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfullsub32___024root);  ///< Copying not allowed
  public:
    Vfullsub32___024root(const char* name);
    ~Vfullsub32___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfullsub32__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
