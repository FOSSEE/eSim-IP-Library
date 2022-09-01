// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsrlatch32.h for the primary calling header

#include "Vsrlatch32___024root.h"
#include "Vsrlatch32__Syms.h"

//==========


void Vsrlatch32___024root___ctor_var_reset(Vsrlatch32___024root* vlSelf);

Vsrlatch32___024root::Vsrlatch32___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsrlatch32___024root___ctor_var_reset(this);
}

void Vsrlatch32___024root::__Vconfigure(Vsrlatch32__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsrlatch32___024root::~Vsrlatch32___024root() {
}

void Vsrlatch32___024root___eval_initial(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___eval_initial\n"); );
}

void Vsrlatch32___024root___combo__TOP__1(Vsrlatch32___024root* vlSelf);

void Vsrlatch32___024root___eval_settle(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___eval_settle\n"); );
    // Body
    Vsrlatch32___024root___combo__TOP__1(vlSelf);
}

void Vsrlatch32___024root___final(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___final\n"); );
}

void Vsrlatch32___024root___ctor_var_reset(Vsrlatch32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsrlatch32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsrlatch32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Q = VL_RAND_RESET_I(1);
    vlSelf->Qn = VL_RAND_RESET_I(1);
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->S = VL_RAND_RESET_I(1);
    vlSelf->R = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__Q = VL_RAND_RESET_I(1);
}
