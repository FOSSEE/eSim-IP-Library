// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VWALLACEMUL66__SYMS_H_
#define VERILATED_VWALLACEMUL66__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vwallacemul66.h"

// INCLUDE MODULE CLASSES
#include "Vwallacemul66___024root.h"

// SYMS CLASS (contains all model state)
class Vwallacemul66__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vwallacemul66* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vwallacemul66___024root        TOP;

    // CONSTRUCTORS
    Vwallacemul66__Syms(VerilatedContext* contextp, const char* namep, Vwallacemul66* modelp);
    ~Vwallacemul66__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
