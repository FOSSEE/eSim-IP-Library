// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdaddamul88.h for the primary calling header

#ifndef VERILATED_VDADDAMUL88___024ROOT_H_
#define VERILATED_VDADDAMUL88___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdaddamul88__Syms;

//----------

VL_MODULE(Vdaddamul88___024root) {
  public:

    // PORTS
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_OUT8(Y,7,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*0:0*/, 4> daddamul88__DOT__sum;
    VlUnpacked<CData/*0:0*/, 4> daddamul88__DOT__hcar;
    VlUnpacked<CData/*0:0*/, 3> daddamul88__DOT__smm;
    VlUnpacked<CData/*0:0*/, 4> daddamul88__DOT__caar;
    VlUnpacked<CData/*0:0*/, 3> daddamul88__DOT__crr;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> daddamul88__DOT__gen_pp;

    // LOCAL VARIABLES
    VlUnpacked<CData/*0:0*/, 3> __Vchglast__TOP__daddamul88__DOT__crr;

    // INTERNAL VARIABLES
    Vdaddamul88__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdaddamul88___024root);  ///< Copying not allowed
  public:
    Vdaddamul88___024root(const char* name);
    ~Vdaddamul88___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdaddamul88__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
