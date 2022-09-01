// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstaircase14.h for the primary calling header

#include "Vstaircase14___024root.h"
#include "Vstaircase14__Syms.h"

//==========

VL_INLINE_OPT void Vstaircase14___024root___sequent__TOP__1(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->val = ((8U & (IData)(vlSelf->val)) ? 0U
                    : (0xfU & ((IData)(1U) + ((IData)(vlSelf->val) 
                                              + (IData)(vlSelf->val)))));
}

void Vstaircase14___024root___eval(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vstaircase14___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vstaircase14___024root___change_request_1(Vstaircase14___024root* vlSelf);

VL_INLINE_OPT QData Vstaircase14___024root___change_request(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___change_request\n"); );
    // Body
    return (Vstaircase14___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vstaircase14___024root___change_request_1(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vstaircase14___024root___eval_debug_assertions(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
