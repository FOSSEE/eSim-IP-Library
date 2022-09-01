// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuf1_2.h for the primary calling header

#include "Vbuf1_2___024root.h"
#include "Vbuf1_2__Syms.h"

//==========

VL_INLINE_OPT void Vbuf1_2___024root___combo__TOP__1(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->y = vlSelf->a;
    vlSelf->ybar = (1U & (~ (IData)(vlSelf->a)));
}

void Vbuf1_2___024root___eval(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___eval\n"); );
    // Body
    Vbuf1_2___024root___combo__TOP__1(vlSelf);
}

QData Vbuf1_2___024root___change_request_1(Vbuf1_2___024root* vlSelf);

VL_INLINE_OPT QData Vbuf1_2___024root___change_request(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___change_request\n"); );
    // Body
    return (Vbuf1_2___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vbuf1_2___024root___change_request_1(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbuf1_2___024root___eval_debug_assertions(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
}
#endif  // VL_DEBUG
