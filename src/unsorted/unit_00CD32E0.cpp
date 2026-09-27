// src/unsorted/unit_00CD32E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD32E0..00CD32E0, 1 functions

#include "mgrr.h"

// 00CD32E0  FUN_00cd32e0  size=654  [run]
void __fastcall FUN_00cd32e0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x84) != 0)) &&
     (*(int *)(param_1 + 0x84) < 6)) {
    *(undefined4 *)(param_1 + 0x84) = 6;
  }
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 0:
    if (*(int *)(param_1 + 0x80) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      puVar3 = (undefined4 *)FUN_00ccde20(uVar1);
      *(undefined4 *)(param_1 + 0xa0) = *puVar3;
      *(undefined4 *)(param_1 + 0xa4) = puVar3[1];
      FUN_00cb2310(uVar1,0);
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      return;
    }
    break;
  case 1:
    uVar4 = *(uint *)(param_1 + 0x88) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x98) + 4) = (uint)((int)uVar4 < 2);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    if (0xc < *(int *)(param_1 + 0x88)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      *(undefined4 *)(param_1 + 0x74) = 1;
      return;
    }
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0x88) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x9c) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0x88) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x94) + 4) = (uint)((int)uVar4 < 2);
    fVar2 = *(float *)(param_1 + 0x8c) + 0.1;
    *(float *)(param_1 + 0x8c) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
    }
    goto LAB_00cd351f;
  case 3:
    fVar2 = *(float *)(param_1 + 0x8c) + 0.1;
    *(float *)(param_1 + 0x8c) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
    }
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    if (0xc < *(int *)(param_1 + 0x88)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),0);
      *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 1;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      return;
    }
    break;
  case 4:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    return;
  case 5:
    break;
  case 6:
    uVar4 = *(uint *)(param_1 + 0x88) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x9c) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0x88) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x98) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0x88) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x94) + 4) = (uint)((int)uVar4 < 2);
LAB_00cd351f:
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    if (0xc < *(int *)(param_1 + 0x88)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      return;
    }
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x94) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 0;
    break;
  default:
    goto switchD_00cd3319_default;
  }
switchD_00cd3319_default:
  return;
}

