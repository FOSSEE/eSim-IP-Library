// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSRAM6T23__SYMS_H_
#define VERILATED_VSRAM6T23__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vsram6t23.h"

// INCLUDE MODULE CLASSES
#include "Vsram6t23___024root.h"

// SYMS CLASS (contains all model state)
class Vsram6t23__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsram6t23* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsram6t23___024root            TOP;

    // CONSTRUCTORS
    Vsram6t23__Syms(VerilatedContext* contextp, const char* namep, Vsram6t23* modelp);
    ~Vsram6t23__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
