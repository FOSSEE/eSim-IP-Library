// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm11.h for the primary calling header

#include "Vpwm11___024root.h"
#include "Vpwm11__Syms.h"

//==========


void Vpwm11___024root___ctor_var_reset(Vpwm11___024root* vlSelf);

Vpwm11___024root::Vpwm11___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vpwm11___024root___ctor_var_reset(this);
}

void Vpwm11___024root::__Vconfigure(Vpwm11__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vpwm11___024root::~Vpwm11___024root() {
}

void Vpwm11___024root___initial__TOP__2(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->pwm11__DOT__counter = 0U;
}

void Vpwm11___024root___settle__TOP__3(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->led = ((0x50U > (IData)(vlSelf->pwm11__DOT__counter))
                    ? 1U : 0U);
}

void Vpwm11___024root___eval_initial(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vpwm11___024root___initial__TOP__2(vlSelf);
}

void Vpwm11___024root___eval_settle(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___eval_settle\n"); );
    // Body
    Vpwm11___024root___settle__TOP__3(vlSelf);
}

void Vpwm11___024root___final(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___final\n"); );
}

void Vpwm11___024root___ctor_var_reset(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(1);
    vlSelf->pwm11__DOT__counter = VL_RAND_RESET_I(8);
}
