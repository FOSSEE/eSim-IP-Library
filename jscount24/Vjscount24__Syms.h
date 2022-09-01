// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJSCOUNT24__SYMS_H_
#define VERILATED_VJSCOUNT24__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjscount24.h"

// INCLUDE MODULE CLASSES
#include "Vjscount24___024root.h"

// SYMS CLASS (contains all model state)
class Vjscount24__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjscount24* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjscount24___024root           TOP;

    // CONSTRUCTORS
    Vjscount24__Syms(VerilatedContext* contextp, const char* namep, Vjscount24* modelp);
    ~Vjscount24__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
