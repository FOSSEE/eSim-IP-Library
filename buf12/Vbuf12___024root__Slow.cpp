// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuf12.h for the primary calling header

#include "Vbuf12___024root.h"
#include "Vbuf12__Syms.h"

//==========


void Vbuf12___024root___ctor_var_reset(Vbuf12___024root* vlSelf);

Vbuf12___024root::Vbuf12___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vbuf12___024root___ctor_var_reset(this);
}

void Vbuf12___024root::__Vconfigure(Vbuf12__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vbuf12___024root::~Vbuf12___024root() {
}

void Vbuf12___024root___eval_initial(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___eval_initial\n"); );
}

void Vbuf12___024root___combo__TOP__1(Vbuf12___024root* vlSelf);

void Vbuf12___024root___eval_settle(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___eval_settle\n"); );
    // Body
    Vbuf12___024root___combo__TOP__1(vlSelf);
}

void Vbuf12___024root___final(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___final\n"); );
}

void Vbuf12___024root___ctor_var_reset(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
    vlSelf->ybar = VL_RAND_RESET_I(1);
}
