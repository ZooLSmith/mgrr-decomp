// src/unsorted/unit_00907EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00907EC0..00907EF0, 2 functions

#include "mgrr.h"

// 00907EC0  FUN_00907ec0  size=36  [run]
void __fastcall FUN_00907ec0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_009078e0();
  }
  Hw::cHeap::cHeap_5();
  return;
}

// 00907EF0  FUN_00907ef0  size=42  [run]
void __fastcall FUN_00907ef0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_009078e0();
                    /* WARNING: Could not recover jumptable at 0x00907f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

