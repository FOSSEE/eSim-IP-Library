// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX20_4__SYMS_H_
#define VERILATED_VMUX20_4__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vmux20_4.h"

// INCLUDE MODULE CLASSES
#include "Vmux20_4___024root.h"

// SYMS CLASS (contains all model state)
class Vmux20_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux20_4* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux20_4___024root             TOP;

    // CONSTRUCTORS
    Vmux20_4__Syms(VerilatedContext* contextp, const char* namep, Vmux20_4* modelp);
    ~Vmux20_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
