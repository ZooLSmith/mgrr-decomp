// src/unsorted/unit_00D334C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D334C0..00D334C0, 1 functions

#include "mgrr.h"

// 00D334C0  FUN_00d334c0  size=996  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d334c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_a0 [4];
  undefined1 local_90 [16];
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  undefined4 local_50 [19];
  
  iVar10 = 0;
  if (DAT_01dc1308 == 0) {
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0x46c) == 9)) {
      if ((((byte)DAT_01bea060 & 0x40) == 0) || ((DAT_018b9174 & 0xff0) == 0xef0)) {
        DAT_01bea094 = DAT_01bea094 & 0xf7ffffff;
      }
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    DAT_01bea094 = DAT_01bea094 | 0x8000000;
    DAT_01bea090 = DAT_01bea090 | 0x8000;
    uVar6 = FUN_00d32e00();
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    *(undefined4 *)(param_1 + 0x30) = 1;
    DAT_01dc130c = 0x168;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  if ((*(int *)(*(int *)(param_1 + 0x10) + 0x3c4) != 0) &&
     (cVar5 = FUN_00cac640(0x20,0), cVar5 != '\0')) {
    DAT_01dc130c = 0;
  }
  DAT_01dc130c = DAT_01dc130c + -1;
  if (DAT_01dc130c < 1) {
    DAT_01dc130c = 0;
    DAT_01dc1308 = 0;
  }
  iVar7 = FUN_00932720();
  if (iVar7 == 0xa15) {
    DAT_01dc1310 = 0;
  }
  else if (DAT_01dc1310 != 0) {
    local_a0[3] = 9;
    local_a0[0] = 6;
    local_a0[1] = 5;
    local_a0[2] = 0;
    puVar9 = local_a0;
    do {
      puVar8 = (undefined4 *)FUN_00caac30(*puVar9);
      *(undefined4 *)((int)local_50 + iVar10) = *puVar8;
      *(undefined4 *)((int)local_50 + iVar10 + 4) = puVar8[1];
      *(undefined4 *)((int)local_50 + iVar10 + 8) = puVar8[2];
      *(undefined4 *)((int)local_50 + iVar10 + 0xc) = puVar8[3];
      FUN_00d9fa80(local_90 + iVar10,(int)local_50 + iVar10);
      iVar10 = iVar10 + 0x10;
      puVar9 = puVar9 + 1;
    } while (iVar10 < 0x40);
    iVar10 = FUN_00f98a90();
    iVar7 = FUN_00f98aa0();
    fVar1 = (float)iVar10 * 0.00078125 * 30.0 + (local_80 - local_70) * _DAT_018b8c6c + local_70;
    fVar2 = (float)iVar7 * 0.0013888889 * -360.0 + local_6c + (local_7c - local_6c) * _DAT_018b8c6c;
    if (*(int *)(param_1 + 0x30) != 0) {
      *(float *)(param_1 + 0x20) = fVar1;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(float *)(param_1 + 0x24) = fVar2;
    }
    fVar3 = (fVar1 - *(float *)(param_1 + 0x20)) * _DAT_018b8c68;
    fVar4 = _DAT_018b8c68 * (fVar2 - *(float *)(param_1 + 0x24));
    if (*(float *)(param_1 + 0x20) <= fVar1) {
      if ((*(float *)(param_1 + 0x20) < fVar1) &&
         (fVar3 = *(float *)(param_1 + 0x20) + fVar3, *(float *)(param_1 + 0x20) = fVar3,
         fVar1 < fVar3)) {
        *(float *)(param_1 + 0x20) = fVar1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x20) + fVar3;
      *(float *)(param_1 + 0x20) = fVar3;
      if (fVar3 < fVar1) {
        *(float *)(param_1 + 0x20) = fVar1;
      }
    }
    if (*(float *)(param_1 + 0x24) <= fVar2) {
      if ((*(float *)(param_1 + 0x24) < fVar2) &&
         (fVar4 = *(float *)(param_1 + 0x24) + fVar4, *(float *)(param_1 + 0x24) = fVar4,
         fVar2 < fVar4)) {
        *(float *)(param_1 + 0x24) = fVar2;
      }
    }
    else {
      fVar4 = *(float *)(param_1 + 0x24) + fVar4;
      *(float *)(param_1 + 0x24) = fVar4;
      if (fVar4 < fVar2) {
        *(float *)(param_1 + 0x24) = fVar2;
      }
    }
    iVar10 = FUN_00f98a90();
    fVar1 = (float)iVar10 * 0.00078125 * 300.0;
    iVar10 = FUN_00f98a90();
    fVar2 = (float)iVar10 * 0.00078125 * 820.0;
    iVar10 = FUN_00f98aa0();
    fVar3 = (float)iVar10 * 0.0013888889 * 0.0;
    iVar10 = FUN_00f98aa0();
    fVar4 = (float)iVar10 * 0.0013888889 * 350.0;
    if (fVar1 <= *(float *)(param_1 + 0x20)) {
      if (fVar2 < *(float *)(param_1 + 0x20)) {
        *(float *)(param_1 + 0x20) = fVar2;
      }
    }
    else {
      *(float *)(param_1 + 0x20) = fVar1;
    }
    if (fVar3 <= *(float *)(param_1 + 0x24)) {
      if (fVar4 < *(float *)(param_1 + 0x24)) {
        *(float *)(param_1 + 0x24) = fVar4;
      }
    }
    else {
      *(float *)(param_1 + 0x24) = fVar3;
    }
    goto LAB_00d3385d;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar10 = FUN_00f98aa0();
  iVar7 = FUN_00f98a90();
  *(float *)(param_1 + 0x20) = (float)iVar7 * 0.00078125 * 660.0;
  *(float *)(param_1 + 0x24) = (float)iVar10 * 0.0013888889 * 80.0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = local_a0[3];
LAB_00d3385d:
  iVar10 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar10 + 0x310) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar10 + 0x314) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar10 + 0x318) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar10 + 0x31c) = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(*(int *)(param_1 + 0x10) + 0x3bc) = DAT_01dc1308;
  (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  return;
}

