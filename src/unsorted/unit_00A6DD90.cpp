// src/unsorted/unit_00A6DD90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6DD90..00A6DE90, 4 functions

#include "types.h"

// 00A6DD90  FUN_00a6dd90  size=6  [run]
undefined4 FUN_00a6dd90(void)

{
  return DAT_01be9a30;
}

// 00A6DDA0  FUN_00a6dda0  size=33  [run]
void FUN_00a6dda0(void)

{
  if (DAT_01be9a30 != (int *)0x0) {
    (**(code **)(*DAT_01be9a30 + 0xa8))(1);
    DAT_01be9a30 = (int *)0x0;
  }
  return;
}

// 00A6DE50  FUN_00a6de50  size=45  [run]
undefined4 __thiscall FUN_00a6de50(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  param_2[2] = *(undefined4 *)(iVar1 + 0x18);
  param_2[3] = *(undefined4 *)(iVar1 + 0x1c);
  return 1;
}

// 00A6DE90  FUN_00a6de90  size=9  [run]
void __fastcall FUN_00a6de90(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffff8;
  return;
}

