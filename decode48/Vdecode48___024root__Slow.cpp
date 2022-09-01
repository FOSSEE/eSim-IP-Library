// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode48.h for the primary calling header

#include "Vdecode48___024root.h"
#include "Vdecode48__Syms.h"

//==========


void Vdecode48___024root___ctor_var_reset(Vdecode48___024root* vlSelf);

Vdecode48___024root::Vdecode48___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdecode48___024root___ctor_var_reset(this);
}

void Vdecode48___024root::__Vconfigure(Vdecode48__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdecode48___024root::~Vdecode48___024root() {
}

void Vdecode48___024root___eval_initial(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___eval_initial\n"); );
}

void Vdecode48___024root___combo__TOP__1(Vdecode48___024root* vlSelf);

void Vdecode48___024root___eval_settle(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___eval_settle\n"); );
    // Body
    Vdecode48___024root___combo__TOP__1(vlSelf);
}

void Vdecode48___024root___final(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___final\n"); );
}

void Vdecode48___024root___ctor_var_reset(Vdecode48___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode48__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode48___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in = VL_RAND_RESET_I(3);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
}
