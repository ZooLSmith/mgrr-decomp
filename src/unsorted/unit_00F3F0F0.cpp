// src/unsorted/unit_00F3F0F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F3F0F0..00F3F0F0, 1 functions

#include "mgrr.h"

// 00F3F0F0  FUN_00f3f0f0  size=205  [run]
undefined4 __thiscall FUN_00f3f0f0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x80 < param_2) {
    FUN_00dd5650(&DAT_016def60,param_2,0x80);
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar2 = param_2 + 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = FUN_00dd29b0(iVar2 * 0x40,param_4,0,0);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016def98);
    return 0;
  }
  *(int *)(param_1 + 8) = iVar2 * 0x10 + iVar1;
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x24) = iVar2 * 0x40;
  *(int *)(param_1 + 0xc) = iVar2 * 0x20 + iVar1;
  *(uint *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x10) = iVar2 * 0x30 + iVar1;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return 1;
}

