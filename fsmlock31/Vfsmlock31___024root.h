// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfsmlock31.h for the primary calling header

#ifndef VERILATED_VFSMLOCK31___024ROOT_H_
#define VERILATED_VFSMLOCK31___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vfsmlock31__Syms;

//----------

VL_MODULE(Vfsmlock31___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(din,0,0);
    VL_OUT8(pattern_detect,0,0);

    // LOCAL SIGNALS
    CData/*1:0*/ fsmlock31__DOT__present_state;
    CData/*1:0*/ fsmlock31__DOT__next_state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    Vfsmlock31__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfsmlock31___024root);  ///< Copying not allowed
  public:
    Vfsmlock31___024root(const char* name);
    ~Vfsmlock31___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vfsmlock31__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
