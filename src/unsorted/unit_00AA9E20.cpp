// src/unsorted/unit_00AA9E20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA9E20..00AA9EC0, 3 functions

#include "types.h"

// 00AA9E20  FUN_00aa9e20  size=67  [run]
void __thiscall FUN_00aa9e20(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0x150;
  if (param_1[1] + iVar1 != 0) {
    FUN_004adf40(param_3);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00AA9E70  FUN_00aa9e70  size=65  [run]
void __fastcall FUN_00aa9e70(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00AA9EC0  FUN_00aa9ec0  size=91  [run]
undefined4 __thiscall FUN_00aa9ec0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x10 + 0x10,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x10 + iVar1;
  FUN_00aa8f60();
  return 1;
}

