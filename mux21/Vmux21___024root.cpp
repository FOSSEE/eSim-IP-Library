// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux21.h for the primary calling header

#include "Vmux21___024root.h"
#include "Vmux21__Syms.h"

//==========

VL_INLINE_OPT void Vmux21___024root___combo__TOP__1(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->y = ((IData)(vlSelf->sel) ? (IData)(vlSelf->i1)
                  : (IData)(vlSelf->i0));
}

void Vmux21___024root___eval(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval\n"); );
    // Body
    Vmux21___024root___combo__TOP__1(vlSelf);
}

QData Vmux21___024root___change_request_1(Vmux21___024root* vlSelf);

VL_INLINE_OPT QData Vmux21___024root___change_request(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___change_request\n"); );
    // Body
    return (Vmux21___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux21___024root___change_request_1(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux21___024root___eval_debug_assertions(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i0 & 0xfeU))) {
        Verilated::overWidthError("i0");}
    if (VL_UNLIKELY((vlSelf->i1 & 0xfeU))) {
        Verilated::overWidthError("i1");}
    if (VL_UNLIKELY((vlSelf->sel & 0xfeU))) {
        Verilated::overWidthError("sel");}
}
#endif  // VL_DEBUG
