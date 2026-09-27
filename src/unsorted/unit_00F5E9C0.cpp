// src/unsorted/unit_00F5E9C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5E9C0..00F5EA60, 2 functions

#include "mgrr.h"

// 00F5E9C0  FUN_00f5e9c0  size=92  [run]
undefined4 __thiscall FUN_00f5e9c0(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  return 1;
}

// 00F5EA60  FUN_00f5ea60  size=196  [run]
undefined4 __thiscall FUN_00f5ea60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x48) = iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x54) = iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xe1ffffff | 0x1000000;
    return 1;
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe4fff3f3 | 0x4000303;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xe4fff3f3 | 0x4000303;
  return 1;
}

