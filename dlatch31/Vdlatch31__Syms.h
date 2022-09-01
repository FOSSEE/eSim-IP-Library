// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDLATCH31__SYMS_H_
#define VERILATED_VDLATCH31__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdlatch31.h"

// INCLUDE MODULE CLASSES
#include "Vdlatch31___024root.h"

// SYMS CLASS (contains all model state)
class Vdlatch31__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdlatch31* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdlatch31___024root            TOP;

    // CONSTRUCTORS
    Vdlatch31__Syms(VerilatedContext* contextp, const char* namep, Vdlatch31* modelp);
    ~Vdlatch31__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
