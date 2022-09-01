// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbuf12.h for the primary calling header

#ifndef VERILATED_VBUF12___024ROOT_H_
#define VERILATED_VBUF12___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vbuf12__Syms;

//----------

VL_MODULE(Vbuf12___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_OUT8(y,0,0);
    VL_OUT8(ybar,0,0);

    // INTERNAL VARIABLES
    Vbuf12__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbuf12___024root);  ///< Copying not allowed
  public:
    Vbuf12___024root(const char* name);
    ~Vbuf12___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vbuf12__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
