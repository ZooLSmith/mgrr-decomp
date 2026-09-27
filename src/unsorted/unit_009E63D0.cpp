// src/unsorted/unit_009E63D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E63D0..009E63D0, 1 functions

#include "types.h"

// 009E63D0  FUN_009e63d0  size=155  [run]
void __thiscall FUN_009e63d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe4fff3f3 | 0x4000303;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xe4fff3f3 | 0x4000303;
    return;
  }
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
  return;
}

