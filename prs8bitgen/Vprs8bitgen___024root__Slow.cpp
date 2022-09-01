// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprs8bitgen.h for the primary calling header

#include "Vprs8bitgen___024root.h"
#include "Vprs8bitgen__Syms.h"

//==========


void Vprs8bitgen___024root___ctor_var_reset(Vprs8bitgen___024root* vlSelf);

Vprs8bitgen___024root::Vprs8bitgen___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vprs8bitgen___024root___ctor_var_reset(this);
}

void Vprs8bitgen___024root::__Vconfigure(Vprs8bitgen__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vprs8bitgen___024root::~Vprs8bitgen___024root() {
}

void Vprs8bitgen___024root___eval_initial(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vprs8bitgen___024root___eval_settle(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___eval_settle\n"); );
}

void Vprs8bitgen___024root___final(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___final\n"); );
}

void Vprs8bitgen___024root___ctor_var_reset(Vprs8bitgen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprs8bitgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprs8bitgen___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(1);
    vlSelf->prs8bitgen__DOT__sr = VL_RAND_RESET_I(8);
}
