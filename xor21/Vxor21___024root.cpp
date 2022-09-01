// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor21.h for the primary calling header

#include "Vxor21___024root.h"
#include "Vxor21__Syms.h"

//==========

VL_INLINE_OPT void Vxor21___024root___combo__TOP__1(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->c = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void Vxor21___024root___eval(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___eval\n"); );
    // Body
    Vxor21___024root___combo__TOP__1(vlSelf);
}

QData Vxor21___024root___change_request_1(Vxor21___024root* vlSelf);

VL_INLINE_OPT QData Vxor21___024root___change_request(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___change_request\n"); );
    // Body
    return (Vxor21___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vxor21___024root___change_request_1(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vxor21___024root___eval_debug_assertions(Vxor21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxor21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor21___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
