// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsram6t23.h for the primary calling header

#ifndef VERILATED_VSRAM6T23___024ROOT_H_
#define VERILATED_VSRAM6T23___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsram6t23__Syms;

//----------

VL_MODULE(Vsram6t23___024root) {
  public:

    // PORTS
    VL_IN8(din,0,0);
    VL_IN8(wen,0,0);
    VL_OUT8(q,0,0);

    // INTERNAL VARIABLES
    Vsram6t23__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsram6t23___024root);  ///< Copying not allowed
  public:
    Vsram6t23___024root(const char* name);
    ~Vsram6t23___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsram6t23__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
