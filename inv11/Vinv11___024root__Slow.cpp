// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinv11.h for the primary calling header

#include "Vinv11___024root.h"
#include "Vinv11__Syms.h"

//==========


void Vinv11___024root___ctor_var_reset(Vinv11___024root* vlSelf);

Vinv11___024root::Vinv11___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vinv11___024root___ctor_var_reset(this);
}

void Vinv11___024root::__Vconfigure(Vinv11__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vinv11___024root::~Vinv11___024root() {
}

void Vinv11___024root___eval_initial(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___eval_initial\n"); );
}

void Vinv11___024root___combo__TOP__1(Vinv11___024root* vlSelf);

void Vinv11___024root___eval_settle(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___eval_settle\n"); );
    // Body
    Vinv11___024root___combo__TOP__1(vlSelf);
}

void Vinv11___024root___final(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___final\n"); );
}

void Vinv11___024root___ctor_var_reset(Vinv11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinv11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinv11___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->inv_out = VL_RAND_RESET_I(1);
    vlSelf->inv_in = VL_RAND_RESET_I(1);
}
