// src/unsorted/unit_00401810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401810..00401810, 1 functions

#include "types.h"

// 00401810  FUN_00401810  size=53  [run]
void __fastcall FUN_00401810(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    (**(code **)(*param_1 + 4))();
    LVar1 = InterlockedDecrement(param_1 + 2);
    if (LVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00401840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}

