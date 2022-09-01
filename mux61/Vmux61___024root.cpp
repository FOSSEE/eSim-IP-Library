// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux61.h for the primary calling header

#include "Vmux61___024root.h"
#include "Vmux61__Syms.h"

//==========

VL_INLINE_OPT void Vmux61___024root___combo__TOP__1(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSelf->s1) ? ((IData)(vlSelf->s0)
                                           ? (IData)(vlSelf->d)
                                           : (IData)(vlSelf->c))
                    : ((IData)(vlSelf->s0) ? (IData)(vlSelf->b)
                        : (IData)(vlSelf->a)));
}

void Vmux61___024root___eval(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___eval\n"); );
    // Body
    Vmux61___024root___combo__TOP__1(vlSelf);
}

QData Vmux61___024root___change_request_1(Vmux61___024root* vlSelf);

VL_INLINE_OPT QData Vmux61___024root___change_request(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___change_request\n"); );
    // Body
    return (Vmux61___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux61___024root___change_request_1(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux61___024root___eval_debug_assertions(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c & 0xfeU))) {
        Verilated::overWidthError("c");}
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->s0 & 0xfeU))) {
        Verilated::overWidthError("s0");}
    if (VL_UNLIKELY((vlSelf->s1 & 0xfeU))) {
        Verilated::overWidthError("s1");}
}
#endif  // VL_DEBUG
