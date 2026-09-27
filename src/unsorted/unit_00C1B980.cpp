// src/unsorted/unit_00C1B980.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1B980..00C1B9B0, 3 functions

#include "types.h"

// 00C1B980  FUN_00c1b980  size=29  [run]
void FUN_00c1b980(void)

{
  if (DAT_01bea184 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea184)(1);
    DAT_01bea184 = (undefined4 *)0x0;
  }
  return;
}

// 00C1B9A0  FUN_00c1b9a0  size=6  [run]
undefined4 FUN_00c1b9a0(void)

{
  return DAT_01bea184;
}

// 00C1B9B0  FUN_00c1b9b0  size=12  [run]
undefined4 __fastcall FUN_00c1b9b0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

