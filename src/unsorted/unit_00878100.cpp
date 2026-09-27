// src/unsorted/unit_00878100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00878100..00878130, 2 functions

#include "mgrr.h"

// 00878100  FUN_00878100  size=43  [run]
void __fastcall FUN_00878100(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00878130  FUN_00878130  size=67  [run]
void __thiscall FUN_00878130(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 4;
  if (param_1[1] + iVar1 != 0) {
    FUN_00a7c940(param_3);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

