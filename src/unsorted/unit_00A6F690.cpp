// src/unsorted/unit_00A6F690.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6F690..00A6F710, 2 functions

#include "mgrr.h"

// 00A6F690  FUN_00a6f690  size=87  [run]
void __thiscall FUN_00a6f690(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar1 = FUN_00d900c0(*(undefined4 *)(param_1 + 0x58),param_2);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffff8;
      if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 4;
      }
    }
    else {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 3;
      if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
        uVar2 = *(uint *)(param_1 + 100) & 0xfffffffd;
        *(uint *)(param_1 + 100) = uVar2;
        *(uint *)(param_1 + 0x68) = uVar2;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 100);
  }
  return;
}

// 00A6F710  FUN_00a6f710  size=76  [run]
void __thiscall FUN_00a6f710(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x58);
  if (*pcVar4 == '\x06') {
    FUN_00d9c9a0();
    return;
  }
  if (*pcVar4 == '\a') {
    FUN_00d9c2d0();
    return;
  }
  fVar1 = *(float *)(param_2 + 0x34);
  fVar2 = *(float *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x3c);
  *(float *)(pcVar4 + 0x10) = *(float *)(param_2 + 0x30) + *(float *)(pcVar4 + 0x30);
  *(float *)(pcVar4 + 0x14) = *(float *)(pcVar4 + 0x34) + fVar1;
  *(float *)(pcVar4 + 0x18) = *(float *)(pcVar4 + 0x38) + fVar2;
  *(float *)(pcVar4 + 0x1c) = *(float *)(pcVar4 + 0x3c) + fVar3;
  return;
}

