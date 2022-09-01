// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpriencode83.h for the primary calling header

#ifndef VERILATED_VPRIENCODE83___024ROOT_H_
#define VERILATED_VPRIENCODE83___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vpriencode83__Syms;

//----------

VL_MODULE(Vpriencode83___024root) {
  public:

    // PORTS
    VL_IN8(din,7,0);
    VL_OUT8(dout,2,0);

    // INTERNAL VARIABLES
    Vpriencode83__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpriencode83___024root);  ///< Copying not allowed
  public:
    Vpriencode83___024root(const char* name);
    ~Vpriencode83___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vpriencode83__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
