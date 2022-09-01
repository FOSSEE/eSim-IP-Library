// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRAFFICLIGHT2_12__SYMS_H_
#define VERILATED_VTRAFFICLIGHT2_12__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtrafficlight2_12.h"

// INCLUDE MODULE CLASSES
#include "Vtrafficlight2_12___024root.h"

// SYMS CLASS (contains all model state)
class Vtrafficlight2_12__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtrafficlight2_12* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtrafficlight2_12___024root    TOP;

    // CONSTRUCTORS
    Vtrafficlight2_12__Syms(VerilatedContext* contextp, const char* namep, Vtrafficlight2_12* modelp);
    ~Vtrafficlight2_12__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
