// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux20_4.h for the primary calling header

#include "Vmux20_4___024root.h"
#include "Vmux20_4__Syms.h"

//==========

VL_INLINE_OPT void Vmux20_4___024root___combo__TOP__1(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___combo__TOP__1\n"); );
    // Body
    if (((((((((0U == (IData)(vlSelf->s)) | (1U == (IData)(vlSelf->s))) 
              | (2U == (IData)(vlSelf->s))) | (3U == (IData)(vlSelf->s))) 
            | (4U == (IData)(vlSelf->s))) | (5U == (IData)(vlSelf->s))) 
          | (6U == (IData)(vlSelf->s))) | (7U == (IData)(vlSelf->s)))) {
        vlSelf->out = (1U & ((0U == (IData)(vlSelf->s))
                              ? (IData)(vlSelf->in)
                              : ((1U == (IData)(vlSelf->s))
                                  ? ((IData)(vlSelf->in) 
                                     >> 1U) : ((2U 
                                                == (IData)(vlSelf->s))
                                                ? ((IData)(vlSelf->in) 
                                                   >> 2U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->s))
                                                    ? 
                                                   ((IData)(vlSelf->in) 
                                                    >> 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->s))
                                                     ? 
                                                    ((IData)(vlSelf->in) 
                                                     >> 4U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->s))
                                                      ? 
                                                     ((IData)(vlSelf->in) 
                                                      >> 5U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->s))
                                                       ? 
                                                      ((IData)(vlSelf->in) 
                                                       >> 6U)
                                                       : 
                                                      ((IData)(vlSelf->in) 
                                                       >> 7U)))))))));
    } else if (((((((((8U == (IData)(vlSelf->s)) | 
                      (9U == (IData)(vlSelf->s))) | 
                     (0xaU == (IData)(vlSelf->s))) 
                    | (0xbU == (IData)(vlSelf->s))) 
                   | (0xcU == (IData)(vlSelf->s))) 
                  | (0xdU == (IData)(vlSelf->s))) | 
                 (0xeU == (IData)(vlSelf->s))) | (0xfU 
                                                  == (IData)(vlSelf->s)))) {
        vlSelf->out = (1U & ((8U == (IData)(vlSelf->s))
                              ? ((IData)(vlSelf->in) 
                                 >> 8U) : ((9U == (IData)(vlSelf->s))
                                            ? ((IData)(vlSelf->in) 
                                               >> 9U)
                                            : ((0xaU 
                                                == (IData)(vlSelf->s))
                                                ? ((IData)(vlSelf->in) 
                                                   >> 0xaU)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->s))
                                                    ? 
                                                   ((IData)(vlSelf->in) 
                                                    >> 0xbU)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->s))
                                                     ? 
                                                    ((IData)(vlSelf->in) 
                                                     >> 0xcU)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->s))
                                                      ? 
                                                     ((IData)(vlSelf->in) 
                                                      >> 0xdU)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelf->s))
                                                       ? 
                                                      ((IData)(vlSelf->in) 
                                                       >> 0xeU)
                                                       : 
                                                      ((IData)(vlSelf->in) 
                                                       >> 0xfU)))))))));
    }
}

void Vmux20_4___024root___eval(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___eval\n"); );
    // Body
    Vmux20_4___024root___combo__TOP__1(vlSelf);
}

QData Vmux20_4___024root___change_request_1(Vmux20_4___024root* vlSelf);

VL_INLINE_OPT QData Vmux20_4___024root___change_request(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___change_request\n"); );
    // Body
    return (Vmux20_4___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux20_4___024root___change_request_1(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux20_4___024root___eval_debug_assertions(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->s & 0xf0U))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
