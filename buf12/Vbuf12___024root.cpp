// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuf12.h for the primary calling header

#include "Vbuf12___024root.h"
#include "Vbuf12__Syms.h"

//==========

VL_INLINE_OPT void Vbuf12___024root___combo__TOP__1(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->y = vlSelf->a;
    vlSelf->ybar = (1U & (~ (IData)(vlSelf->a)));
}

void Vbuf12___024root___eval(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___eval\n"); );
    // Body
    Vbuf12___024root___combo__TOP__1(vlSelf);
}

QData Vbuf12___024root___change_request_1(Vbuf12___024root* vlSelf);

VL_INLINE_OPT QData Vbuf12___024root___change_request(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___change_request\n"); );
    // Body
    return (Vbuf12___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vbuf12___024root___change_request_1(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbuf12___024root___eval_debug_assertions(Vbuf12___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf12___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
}
#endif  // VL_DEBUG
