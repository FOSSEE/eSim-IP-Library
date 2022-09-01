// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpriencode16_4.h for the primary calling header

#ifndef VERILATED_VPRIENCODE16_4___024ROOT_H_
#define VERILATED_VPRIENCODE16_4___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vpriencode16_4__Syms;

//----------

VL_MODULE(Vpriencode16_4___024root) {
  public:

    // PORTS
    VL_OUT8(out,3,0);
    VL_IN16(i,15,0);

    // INTERNAL VARIABLES
    Vpriencode16_4__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpriencode16_4___024root);  ///< Copying not allowed
  public:
    Vpriencode16_4___024root(const char* name);
    ~Vpriencode16_4___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vpriencode16_4__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
