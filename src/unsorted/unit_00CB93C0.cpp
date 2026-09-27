// src/unsorted/unit_00CB93C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB93C0..00CB93C0, 1 functions

#include "types.h"

// 00CB93C0  FUN_00cb93c0  size=80  [run]
undefined4 FUN_00cb93c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00d9fa80(&local_20,param_1);
  if (iVar1 != 0) {
    *param_2 = local_20;
    param_2[1] = local_1c;
    param_2[2] = 0;
    param_2[3] = 0x3f800000;
    return 1;
  }
  return 0;
}

