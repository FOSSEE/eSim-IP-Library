// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinv11.h for the primary calling header

#ifndef VERILATED_VINV11___024ROOT_H_
#define VERILATED_VINV11___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vinv11__Syms;

//----------

VL_MODULE(Vinv11___024root) {
  public:

    // PORTS
    VL_OUT8(inv_out,0,0);
    VL_IN8(inv_in,0,0);

    // INTERNAL VARIABLES
    Vinv11__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vinv11___024root);  ///< Copying not allowed
  public:
    Vinv11___024root(const char* name);
    ~Vinv11___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vinv11__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
