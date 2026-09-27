// src/unsorted/unit_00412450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00412450..00412450, 1 functions

#include "types.h"

// 00412450  FUN_00412450  size=53  [run]
void __fastcall FUN_00412450(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] < 2) {
                    /* WARNING: Could not recover jumptable at 0x0041247b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00412483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

