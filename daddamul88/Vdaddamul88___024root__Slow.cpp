// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdaddamul88.h for the primary calling header

#include "Vdaddamul88___024root.h"
#include "Vdaddamul88__Syms.h"

//==========


void Vdaddamul88___024root___ctor_var_reset(Vdaddamul88___024root* vlSelf);

Vdaddamul88___024root::Vdaddamul88___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdaddamul88___024root___ctor_var_reset(this);
}

void Vdaddamul88___024root::__Vconfigure(Vdaddamul88__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdaddamul88___024root::~Vdaddamul88___024root() {
}

void Vdaddamul88___024root___eval_initial(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___eval_initial\n"); );
}

void Vdaddamul88___024root___combo__TOP__1(Vdaddamul88___024root* vlSelf);

void Vdaddamul88___024root___eval_settle(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___eval_settle\n"); );
    // Body
    Vdaddamul88___024root___combo__TOP__1(vlSelf);
}

void Vdaddamul88___024root___final(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___final\n"); );
}

void Vdaddamul88___024root___ctor_var_reset(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->Y = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->daddamul88__DOT__sum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->daddamul88__DOT__hcar[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->daddamul88__DOT__smm[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->daddamul88__DOT__caar[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->daddamul88__DOT__crr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->daddamul88__DOT__gen_pp[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vchglast__TOP__daddamul88__DOT__crr[__Vi0] = VL_RAND_RESET_I(1);
    }
}
