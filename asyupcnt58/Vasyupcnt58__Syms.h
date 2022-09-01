// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASYUPCNT58__SYMS_H_
#define VERILATED_VASYUPCNT58__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vasyupcnt58.h"

// INCLUDE MODULE CLASSES
#include "Vasyupcnt58___024root.h"

// SYMS CLASS (contains all model state)
class Vasyupcnt58__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vasyupcnt58* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vasyupcnt58___024root          TOP;

    // CONSTRUCTORS
    Vasyupcnt58__Syms(VerilatedContext* contextp, const char* namep, Vasyupcnt58* modelp);
    ~Vasyupcnt58__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
