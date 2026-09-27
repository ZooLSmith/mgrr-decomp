// src/unsorted/unit_00F99EF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F99EF0..00F99EF0, 1 functions

#include "mgrr.h"

// 00F99EF0  FUN_00f99ef0  size=101  [run]
undefined4 __thiscall FUN_00f99ef0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2,0x1000,1,0);
  *(int *)(param_1 + 8) = iVar1;
  if ((iVar1 != 0) && (DAT_01f206d4 != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x68))(DAT_01f206d4,param_2,0,0,1,param_1,0);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 4) = 1;
      return 1;
    }
  }
  return 0;
}

