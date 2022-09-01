// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpiso12_1.h for the primary calling header

#include "Vpiso12_1___024root.h"
#include "Vpiso12_1__Syms.h"

//==========


void Vpiso12_1___024root___ctor_var_reset(Vpiso12_1___024root* vlSelf);

Vpiso12_1___024root::Vpiso12_1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vpiso12_1___024root___ctor_var_reset(this);
}

void Vpiso12_1___024root::__Vconfigure(Vpiso12_1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vpiso12_1___024root::~Vpiso12_1___024root() {
}

void Vpiso12_1___024root___eval_initial(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vpiso12_1___024root___eval_settle(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___eval_settle\n"); );
}

void Vpiso12_1___024root___final(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___final\n"); );
}

void Vpiso12_1___024root___ctor_var_reset(Vpiso12_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso12_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso12_1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->load = VL_RAND_RESET_I(1);
    vlSelf->Data_pr = VL_RAND_RESET_I(10);
    vlSelf->Data_sr = VL_RAND_RESET_I(1);
    vlSelf->piso12_1__DOT__tmp = VL_RAND_RESET_I(10);
}
