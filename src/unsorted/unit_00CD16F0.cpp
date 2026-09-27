// src/unsorted/unit_00CD16F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD16F0..00CD16F0, 1 functions

#include "mgrr.h"

// 00CD16F0  FUN_00cd16f0  size=576  [run]
void __fastcall FUN_00cd16f0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int extraout_EDX;
  uint uVar4;
  
  if (((*(int *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0xb0) != 0)) &&
     (*(int *)(param_1 + 0xb0) < 5)) {
    *(undefined4 *)(param_1 + 0xb0) = 5;
  }
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 0:
    if (*(int *)(param_1 + 0x90) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      puVar3 = (undefined4 *)FUN_00ccde20(uVar1);
      *(undefined4 *)(param_1 + 0xa0) = *puVar3;
      *(undefined4 *)(param_1 + 0xa4) = puVar3[1];
      FUN_00cb2310(uVar1,0);
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return;
    }
    break;
  case 1:
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc0) + 4) = (uint)((int)uVar4 < 2);
    goto LAB_00cd1792;
  case 2:
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)((int)uVar4 < 2);
    fVar2 = *(float *)(param_1 + 0xb8) + 0.1;
    *(float *)(param_1 + 0xb8) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    }
    goto LAB_00cd1792;
  case 3:
    fVar2 = *(float *)(param_1 + 0xb8) + 0.1;
    *(float *)(param_1 + 0xb8) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    }
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    if (0xc < *(int *)(param_1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
      *(int *)(*(int *)(param_1 + 0xc4) + 4) = extraout_EDX;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + extraout_EDX;
      return;
    }
    break;
  case 5:
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc0) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xb4) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)((int)uVar4 < 2);
LAB_00cd1792:
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    if (0xc < *(int *)(param_1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      return;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
  }
  return;
}

