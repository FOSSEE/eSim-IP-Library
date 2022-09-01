// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vseqdetect31.h for the primary calling header

#ifndef VERILATED_VSEQDETECT31___024ROOT_H_
#define VERILATED_VSEQDETECT31___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vseqdetect31__Syms;

//----------

VL_MODULE(Vseqdetect31___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RST,0,0);
    VL_IN8(I,0,0);
    VL_OUT8(Z,0,0);

    // LOCAL SIGNALS
    CData/*4:0*/ seqdetect31__DOT__state;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vclklast__TOP__RST;

    // INTERNAL VARIABLES
    Vseqdetect31__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vseqdetect31___024root);  ///< Copying not allowed
  public:
    Vseqdetect31___024root(const char* name);
    ~Vseqdetect31___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vseqdetect31__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
