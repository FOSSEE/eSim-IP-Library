// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm11.h for the primary calling header

#ifndef VERILATED_VPWM11___024ROOT_H_
#define VERILATED_VPWM11___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vpwm11__Syms;

//----------

VL_MODULE(Vpwm11___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_OUT8(led,0,0);

    // LOCAL SIGNALS
    CData/*7:0*/ pwm11__DOT__counter;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vpwm11__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpwm11___024root);  ///< Copying not allowed
  public:
    Vpwm11___024root(const char* name);
    ~Vpwm11___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vpwm11__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
