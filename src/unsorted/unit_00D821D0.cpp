// src/unsorted/unit_00D821D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D821D0..00D821D0, 1 functions

#include "types.h"

// 00D821D0  FUN_00d821d0  size=64  [run]
undefined4 __thiscall FUN_00d821d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == param_2) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar1 = FUN_00d821d0(param_2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar1 = FUN_00d821d0(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

