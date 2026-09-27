// src/unsorted/unit_00D73170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D73170..00D73170, 1 functions

#include "mgrr.h"

// 00D73170  FUN_00d73170  size=44  [run]
void __fastcall FUN_00d73170(int param_1)

{
  if (param_1 != 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x98))(1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    FUN_00dd4920(param_1);
  }
  return;
}

