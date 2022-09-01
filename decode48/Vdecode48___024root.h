// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode48.h for the primary calling header

#ifndef VERILATED_VDECODE48___024ROOT_H_
#define VERILATED_VDECODE48___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdecode48__Syms;

//----------

VL_MODULE(Vdecode48___024root) {
  public:

    // PORTS
    VL_IN8(in,2,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,7,0);

    // INTERNAL VARIABLES
    Vdecode48__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdecode48___024root);  ///< Copying not allowed
  public:
    Vdecode48___024root(const char* name);
    ~Vdecode48___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdecode48__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
