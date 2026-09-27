// src/unsorted/unit_009F3DA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F3DA0..009F3E10, 2 functions

#include "mgrr.h"

// 009F3DA0  FUN_009f3da0  size=104  [run]
undefined4 __thiscall FUN_009f3da0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009ee1c0;
  piVar2[2] = 0x500;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F3E10  FUN_009f3e10  size=104  [run]
undefined4 __thiscall FUN_009f3e10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009ee220;
  piVar2[2] = 0x560;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

