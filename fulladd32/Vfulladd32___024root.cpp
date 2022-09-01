// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfulladd32.h for the primary calling header

#include "Vfulladd32___024root.h"
#include "Vfulladd32__Syms.h"

//==========

VL_INLINE_OPT void Vfulladd32___024root___combo__TOP__1(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->c_out = (1U & ((((IData)(vlSelf->a) + (IData)(vlSelf->b)) 
                            + (IData)(vlSelf->c_in)) 
                           >> 1U));
    vlSelf->s = (1U & (((IData)(vlSelf->a) + (IData)(vlSelf->b)) 
                       + (IData)(vlSelf->c_in)));
}

void Vfulladd32___024root___eval(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___eval\n"); );
    // Body
    Vfulladd32___024root___combo__TOP__1(vlSelf);
}

QData Vfulladd32___024root___change_request_1(Vfulladd32___024root* vlSelf);

VL_INLINE_OPT QData Vfulladd32___024root___change_request(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___change_request\n"); );
    // Body
    return (Vfulladd32___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfulladd32___024root___change_request_1(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfulladd32___024root___eval_debug_assertions(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
}
#endif  // VL_DEBUG
