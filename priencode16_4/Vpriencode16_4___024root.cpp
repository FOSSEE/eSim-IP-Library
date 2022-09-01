// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriencode16_4.h for the primary calling header

#include "Vpriencode16_4___024root.h"
#include "Vpriencode16_4__Syms.h"

//==========

VL_INLINE_OPT void Vpriencode16_4___024root___combo__TOP__1(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->out = (((((((((1U == (IData)(vlSelf->i)) 
                          | (2U == (0xfffeU & (IData)(vlSelf->i)))) 
                         | (4U == (0xfffcU & (IData)(vlSelf->i)))) 
                        | (8U == (0xfff8U & (IData)(vlSelf->i)))) 
                       | (0x10U == (0xfff0U & (IData)(vlSelf->i)))) 
                      | (0x20U == (0xffe0U & (IData)(vlSelf->i)))) 
                     | (0x40U == (0xffc0U & (IData)(vlSelf->i)))) 
                    | (0x100U == (0xff00U & (IData)(vlSelf->i))))
                    ? ((1U == (IData)(vlSelf->i)) ? 0U
                        : ((2U == (0xfffeU & (IData)(vlSelf->i)))
                            ? 1U : ((4U == (0xfffcU 
                                            & (IData)(vlSelf->i)))
                                     ? 2U : ((8U == 
                                              (0xfff8U 
                                               & (IData)(vlSelf->i)))
                                              ? 3U : 
                                             ((0x10U 
                                               == (0xfff0U 
                                                   & (IData)(vlSelf->i)))
                                               ? 4U
                                               : ((0x20U 
                                                   == 
                                                   (0xffe0U 
                                                    & (IData)(vlSelf->i)))
                                                   ? 5U
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0xffc0U 
                                                     & (IData)(vlSelf->i)))
                                                    ? 6U
                                                    : 7U)))))))
                    : (((((((((0x200U == (0xfe00U & (IData)(vlSelf->i))) 
                              | (0x400U == (0xfc00U 
                                            & (IData)(vlSelf->i)))) 
                             | (0x800U == (0xf800U 
                                           & (IData)(vlSelf->i)))) 
                            | (0x1000U == (0xf000U 
                                           & (IData)(vlSelf->i)))) 
                           | (0x2000U == (0xe000U & (IData)(vlSelf->i)))) 
                          | (0x2000U == (0xe000U & (IData)(vlSelf->i)))) 
                         | (0x2000U == (0xe000U & (IData)(vlSelf->i)))) 
                        | (0x8000U == (0x8000U & (IData)(vlSelf->i))))
                        ? ((0x200U == (0xfe00U & (IData)(vlSelf->i)))
                            ? 8U : ((0x400U == (0xfc00U 
                                                & (IData)(vlSelf->i)))
                                     ? 9U : ((0x800U 
                                              == (0xf800U 
                                                  & (IData)(vlSelf->i)))
                                              ? 0xaU
                                              : ((0x1000U 
                                                  == 
                                                  (0xf000U 
                                                   & (IData)(vlSelf->i)))
                                                  ? 0xbU
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->i)))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xe000U 
                                                     & (IData)(vlSelf->i)))
                                                    ? 0xdU
                                                    : 
                                                   ((0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->i)))
                                                     ? 0xeU
                                                     : 0xfU)))))))
                        : 0U));
}

void Vpriencode16_4___024root___eval(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___eval\n"); );
    // Body
    Vpriencode16_4___024root___combo__TOP__1(vlSelf);
}

QData Vpriencode16_4___024root___change_request_1(Vpriencode16_4___024root* vlSelf);

VL_INLINE_OPT QData Vpriencode16_4___024root___change_request(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___change_request\n"); );
    // Body
    return (Vpriencode16_4___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpriencode16_4___024root___change_request_1(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpriencode16_4___024root___eval_debug_assertions(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
