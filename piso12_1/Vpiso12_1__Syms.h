// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPISO12_1__SYMS_H_
#define VERILATED_VPISO12_1__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vpiso12_1.h"

// INCLUDE MODULE CLASSES
#include "Vpiso12_1___024root.h"

// SYMS CLASS (contains all model state)
class Vpiso12_1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpiso12_1* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpiso12_1___024root            TOP;

    // CONSTRUCTORS
    Vpiso12_1__Syms(VerilatedContext* contextp, const char* namep, Vpiso12_1* modelp);
    ~Vpiso12_1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
