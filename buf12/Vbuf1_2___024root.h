// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbuf1_2.h for the primary calling header

#ifndef VERILATED_VBUF1_2___024ROOT_H_
#define VERILATED_VBUF1_2___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vbuf1_2__Syms;

//----------

VL_MODULE(Vbuf1_2___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_OUT8(y,0,0);
    VL_OUT8(ybar,0,0);

    // INTERNAL VARIABLES
    Vbuf1_2__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbuf1_2___024root);  ///< Copying not allowed
  public:
    Vbuf1_2___024root(const char* name);
    ~Vbuf1_2___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vbuf1_2__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
