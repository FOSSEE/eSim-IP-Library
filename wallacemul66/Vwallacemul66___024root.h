// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwallacemul66.h for the primary calling header

#ifndef VERILATED_VWALLACEMUL66___024ROOT_H_
#define VERILATED_VWALLACEMUL66___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vwallacemul66__Syms;

//----------

VL_MODULE(Vwallacemul66___024root) {
  public:

    // PORTS
    VL_IN8(A,2,0);
    VL_IN8(B,2,0);
    VL_OUT8(prod,5,0);

    // INTERNAL VARIABLES
    Vwallacemul66__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vwallacemul66___024root);  ///< Copying not allowed
  public:
    Vwallacemul66___024root(const char* name);
    ~Vwallacemul66___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vwallacemul66__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
