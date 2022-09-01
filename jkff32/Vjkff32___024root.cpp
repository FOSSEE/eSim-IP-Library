// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjkff32.h for the primary calling header

#include "Vjkff32___024root.h"
#include "Vjkff32__Syms.h"

//==========

VL_INLINE_OPT void Vjkff32___024root___sequent__TOP__1(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->j) {
        vlSelf->q = (1U & ((~ (IData)(vlSelf->k)) | 
                           (~ (IData)(vlSelf->q))));
    } else if (vlSelf->k) {
        vlSelf->q = 0U;
    }
    vlSelf->qb = (1U & (~ (IData)(vlSelf->q)));
}

void Vjkff32___024root___eval(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vjkff32___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vjkff32___024root___change_request_1(Vjkff32___024root* vlSelf);

VL_INLINE_OPT QData Vjkff32___024root___change_request(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___change_request\n"); );
    // Body
    return (Vjkff32___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjkff32___024root___change_request_1(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjkff32___024root___eval_debug_assertions(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->j & 0xfeU))) {
        Verilated::overWidthError("j");}
    if (VL_UNLIKELY((vlSelf->k & 0xfeU))) {
        Verilated::overWidthError("k");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
