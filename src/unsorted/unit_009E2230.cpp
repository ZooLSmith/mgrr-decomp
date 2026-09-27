// src/unsorted/unit_009E2230.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E2230..009E2230, 1 functions

#include "types.h"

// 009E2230  FUN_009e2230  size=290  [run]
void __thiscall FUN_009e2230(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  FUN_00edb3c0(param_2);
  FUN_00efc5c0(param_2);
  puVar1 = *(uint **)(param_2 + 4);
  if (param_3 == 0) {
    iVar2 = FUN_00edb270(param_2);
    if ((iVar2 != 0) && (*(float *)(param_1 + 0x110) != *(float *)(param_1 + 0x118))) {
      FUN_00edffc0(param_2);
      iVar2 = *(int *)(param_2 + 0x18);
      if ((iVar2 != 0) &&
         (((*(byte *)(iVar2 + 0x68) & 0x40) != 0 && ((*(uint *)(param_1 + 0x3c) & 0x40000) == 0))))
      {
        *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(iVar2 + 0x40);
        *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar2 + 0x4c);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000;
      }
      if ((*puVar1 & 0x4000000) != 0) {
        FUN_00edfda0(param_2);
      }
      if ((*puVar1 & 0x40000000) != 0) {
        FUN_00f0afe0(param_2);
      }
      if ((*(uint *)(param_1 + 0x30) & 0x4000) != 0) {
        FUN_00ef8ed0(param_2);
      }
      if ((*puVar1 & 0x10000000) != 0) {
        FUN_00ef9850(param_2);
      }
      FUN_00efa160(param_2);
    }
  }
  if (puVar1[0x5a] != 0) {
    FUN_00f0b110(param_2);
  }
  if (*(float *)(param_1 + 0x3f8) != 0.0) {
    *(float *)(param_1 + 0x3f8) = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x3f8);
  }
  FUN_00efd260(param_2);
  return;
}

