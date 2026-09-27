// src/unsorted/unit_00930DD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930DD0..00930DD0, 1 functions

#include "mgrr.h"

// 00930DD0  FUN_00930dd0  size=137  [run]
undefined4 __fastcall FUN_00930dd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_008e09d0();
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_008e09d0();
  (**(code **)(*piVar1 + 0x10))();
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x34))();
  FUN_00910d80();
  FUN_00900460();
  FUN_008e09b0();
  FUN_008dfeb0();
  piVar1 = (int *)FUN_0092c170();
  (**(code **)(*piVar1 + 0x20))();
  FUN_00907d20();
  piVar1 = (int *)FUN_0092c170();
  (**(code **)(*piVar1 + 8))();
  FUN_008fe9a0();
  if (*param_1 != 0) {
    FUN_010060a0();
    *param_1 = 0;
  }
  FUN_008f77b0();
  return 1;
}

