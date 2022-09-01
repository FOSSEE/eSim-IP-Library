// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfullsub32.h for the primary calling header

#include "Vfullsub32___024root.h"
#include "Vfullsub32__Syms.h"

//==========

VL_INLINE_OPT void Vfullsub32___024root___combo__TOP__1(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->D = (((IData)(vlSelf->X) ^ (IData)(vlSelf->Y)) 
                 ^ (IData)(vlSelf->Z));
    vlSelf->B = (((~ (IData)(vlSelf->X)) & ((IData)(vlSelf->Y) 
                                            ^ (IData)(vlSelf->Z))) 
                 | ((IData)(vlSelf->Y) & (IData)(vlSelf->Z)));
}

void Vfullsub32___024root___eval(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___eval\n"); );
    // Body
    Vfullsub32___024root___combo__TOP__1(vlSelf);
}

QData Vfullsub32___024root___change_request_1(Vfullsub32___024root* vlSelf);

VL_INLINE_OPT QData Vfullsub32___024root___change_request(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___change_request\n"); );
    // Body
    return (Vfullsub32___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfullsub32___024root___change_request_1(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfullsub32___024root___eval_debug_assertions(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->X & 0xfeU))) {
        Verilated::overWidthError("X");}
    if (VL_UNLIKELY((vlSelf->Y & 0xfeU))) {
        Verilated::overWidthError("Y");}
    if (VL_UNLIKELY((vlSelf->Z & 0xfeU))) {
        Verilated::overWidthError("Z");}
}
#endif  // VL_DEBUG
