// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor21.h for the primary calling header

#include "Vxor21___024root.h"
#include "Vxor21__Syms.h"

//==========


void Vxor21___024root___ctor_var_reset(Vxor21___024root* vlSelf);

Vxor21___024root::Vxor21___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vxor21___024root___ctor_var_reset(this);
}

void Vxor21___024root::__Vconfigure(Vxor21__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vxor21___024root::~Vxor21___024root() {
}

void Vxor21___024root___eval_initial(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___eval_initial\n"); );
}

void Vxor21___024root___combo__TOP__1(Vxor21___024root* vlSelf);

void Vxor21___024root___eval_settle(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___eval_settle\n"); );
    // Body
    Vxor21___024root___combo__TOP__1(vlSelf);
}

void Vxor21___024root___final(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___final\n"); );
}

void Vxor21___024root___ctor_var_reset(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->c = VL_RAND_RESET_I(1);
}
