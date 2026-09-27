// src/unsorted/unit_00F42180.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F42180..00F42180, 1 functions

#include "types.h"

// 00F42180  FUN_00f42180  size=157  [run]
int __thiscall FUN_00f42180(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  InterlockedIncrement(param_1 + 0x59e);
  iVar1 = param_3;
  if (param_1[3] <= param_1[4]) {
    return 0;
  }
  if (param_3 < 0x100) {
    iVar2 = param_3 * 5 + 0x36;
  }
  else {
    if (0x13 < param_3 - 0x8000U) {
      return 0;
    }
    iVar2 = param_3 * 5 + -0x27aca;
  }
  if ((param_1 + iVar2 != (int *)0x0) && (iVar2 = (*(code *)(param_1 + iVar2)[1])(), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x24))(&param_3,iVar2,param_4);
    *(short *)(iVar2 + 0x4c) = (short)iVar1;
    *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xfbffffff;
    *(int *)(iVar2 + 0x398) = param_1[0x5a0];
    param_1[0x5a0] = param_1[0x5a0] + 1;
    return iVar2;
  }
  return 0;
}

