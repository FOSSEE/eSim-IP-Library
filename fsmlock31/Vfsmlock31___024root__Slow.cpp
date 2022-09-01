// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsmlock31.h for the primary calling header

#include "Vfsmlock31___024root.h"
#include "Vfsmlock31__Syms.h"

//==========


void Vfsmlock31___024root___ctor_var_reset(Vfsmlock31___024root* vlSelf);

Vfsmlock31___024root::Vfsmlock31___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfsmlock31___024root___ctor_var_reset(this);
}

void Vfsmlock31___024root::__Vconfigure(Vfsmlock31__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfsmlock31___024root::~Vfsmlock31___024root() {
}

void Vfsmlock31___024root___eval_initial(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

void Vfsmlock31___024root___settle__TOP__2(Vfsmlock31___024root* vlSelf);

void Vfsmlock31___024root___eval_settle(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___eval_settle\n"); );
    // Body
    Vfsmlock31___024root___settle__TOP__2(vlSelf);
}

void Vfsmlock31___024root___final(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___final\n"); );
}

void Vfsmlock31___024root___ctor_var_reset(Vfsmlock31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsmlock31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsmlock31___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(1);
    vlSelf->pattern_detect = VL_RAND_RESET_I(1);
    vlSelf->fsmlock31__DOT__present_state = VL_RAND_RESET_I(2);
    vlSelf->fsmlock31__DOT__next_state = VL_RAND_RESET_I(2);
}
