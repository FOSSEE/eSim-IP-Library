// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDADDAMUL88__SYMS_H_
#define VERILATED_VDADDAMUL88__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdaddamul88.h"

// INCLUDE MODULE CLASSES
#include "Vdaddamul88___024root.h"

// SYMS CLASS (contains all model state)
class Vdaddamul88__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdaddamul88* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdaddamul88___024root          TOP;

    // CONSTRUCTORS
    Vdaddamul88__Syms(VerilatedContext* contextp, const char* namep, Vdaddamul88* modelp);
    ~Vdaddamul88__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
