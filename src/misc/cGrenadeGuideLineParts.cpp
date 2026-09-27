// src/misc/cGrenadeGuideLineParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8EC0..00CE3680, 4 functions

#include "types.h"

// 00CB8EC0  cGrenadeGuideLineParts::vf08  size=15  [class]
void __fastcall cGrenadeGuideLineParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CB8ED0  cGrenadeGuideLineParts::vf14  size=968  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cGrenadeGuideLineParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_d8 [48];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90 [44];
  undefined4 auStack_64 [3];
  undefined1 auStack_58 [84];
  
  fVar1 = _DAT_01b7b928 * -0.001;
  if ((-0.2 < fVar1) && (fVar1 < 0.2)) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_018b64ac;
  if (*(float *)(param_1 + 0x160) <= fVar1) {
    if ((*(float *)(param_1 + 0x160) < fVar1) &&
       (fVar2 = _DAT_018b64a8 * fVar1 + _DAT_018b64a4 + *(float *)(param_1 + 0x160),
       *(float *)(param_1 + 0x160) = fVar2, fVar1 < fVar2)) {
      *(float *)(param_1 + 0x160) = fVar1;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x160) - (_DAT_018b64a8 * fVar1 + _DAT_018b64a4);
    *(float *)(param_1 + 0x160) = fVar2;
    if (fVar2 < fVar1) {
      *(float *)(param_1 + 0x160) = fVar1;
    }
  }
  D3DXMatrixRotationZ(local_90,*(undefined4 *)(param_1 + 0x160));
  FUN_00da0640(auStack_d8);
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  D3DXMatrixMultiply(auStack_58,auStack_98,auStack_d8);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar3 = auStack_64;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  iVar5 = -0x28 - param_1;
  puVar3 = (undefined4 *)(param_1 + 0x28);
  iVar4 = 2;
  do {
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + -2 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      puVar6 = (undefined4 *)((int)puVar3 + iVar5 + iVar7);
      *puVar6 = puVar3[-2];
      puVar6[1] = puVar3[-1];
      puVar6[2] = *puVar3;
      puVar6[3] = puVar3[1];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + -1 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      *(undefined4 *)((int)puVar3 + iVar5 + iVar7 + 0x10) = puVar3[2];
      iVar7 = iVar5 + iVar7 + 0x10;
      *(undefined4 *)((int)puVar3 + iVar7 + 4) = puVar3[3];
      *(undefined4 *)((int)puVar3 + iVar7 + 8) = puVar3[4];
      *(undefined4 *)((int)puVar3 + iVar7 + 0xc) = puVar3[5];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      iVar7 = iVar7 + (-8 - param_1);
      *(undefined4 *)(iVar7 + (int)puVar3) = puVar3[6];
      *(undefined4 *)((int)puVar3 + iVar7 + 4) = puVar3[7];
      *(undefined4 *)((int)puVar3 + iVar7 + 8) = puVar3[8];
      *(undefined4 *)((int)puVar3 + iVar7 + 0xc) = puVar3[9];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 1 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      iVar7 = iVar7 + (8 - param_1);
      *(undefined4 *)(iVar7 + (int)puVar3) = puVar3[10];
      *(undefined4 *)((int)puVar3 + iVar7 + 4) = puVar3[0xb];
      *(undefined4 *)((int)puVar3 + iVar7 + 8) = puVar3[0xc];
      *(undefined4 *)((int)puVar3 + iVar7 + 0xc) = puVar3[0xd];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 2 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      iVar7 = iVar7 + (0x18 - param_1);
      *(undefined4 *)(iVar7 + (int)puVar3) = puVar3[0xe];
      *(undefined4 *)((int)puVar3 + iVar7 + 4) = puVar3[0xf];
      *(undefined4 *)((int)puVar3 + iVar7 + 8) = puVar3[0x10];
      *(undefined4 *)((int)puVar3 + iVar7 + 0xc) = puVar3[0x11];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 3 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      iVar7 = iVar7 + (0x28 - param_1);
      *(undefined4 *)(iVar7 + (int)puVar3) = puVar3[0x12];
      *(undefined4 *)((int)puVar3 + iVar7 + 4) = puVar3[0x13];
      *(undefined4 *)((int)puVar3 + iVar7 + 8) = puVar3[0x14];
      *(undefined4 *)((int)puVar3 + iVar7 + 0xc) = puVar3[0x15];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 4 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      iVar7 = iVar7 + (0x38 - param_1);
      *(undefined4 *)(iVar7 + (int)puVar3) = puVar3[0x16];
      *(undefined4 *)((int)puVar3 + iVar7 + 4) = puVar3[0x17];
      *(undefined4 *)((int)puVar3 + iVar7 + 8) = puVar3[0x18];
      *(undefined4 *)((int)puVar3 + iVar7 + 0xc) = puVar3[0x19];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 5 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      puVar6 = (undefined4 *)((int)puVar3 + (0x48 - param_1) + iVar7);
      *puVar6 = puVar3[0x1a];
      puVar6[1] = puVar3[0x1b];
      puVar6[2] = puVar3[0x1c];
      puVar6[3] = puVar3[0x1d];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 6 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      puVar6 = (undefined4 *)((int)puVar3 + (0x58 - param_1) + iVar7);
      *puVar6 = puVar3[0x1e];
      puVar6[1] = puVar3[0x1f];
      puVar6[2] = puVar3[0x20];
      puVar6[3] = puVar3[0x21];
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
    if ((iVar7 != 0) && (iVar4 + 7 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
      puVar6 = (undefined4 *)((int)puVar3 + (0x68 - param_1) + iVar7);
      *puVar6 = puVar3[0x22];
      puVar6[1] = puVar3[0x23];
      puVar6[2] = puVar3[0x24];
      puVar6[3] = puVar3[0x25];
    }
    iVar7 = iVar4 + 8;
    puVar3 = puVar3 + 0x28;
    iVar4 = iVar4 + 10;
  } while (iVar7 < 0x14);
  return;
}

// 00CD4410  cGrenadeGuideLineParts::cGrenadeGuideLineParts  size=89  [class]
void __fastcall cGrenadeGuideLineParts::cGrenadeGuideLineParts(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[0x58] = 0;
  param_1[1] = 0;
  param_1[0x59] = 0x42c80000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 1;
  *param_1 = vftable;
  iVar2 = 0x14;
  puVar1 = param_1 + 10;
  do {
    iVar2 = iVar2 + -1;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  return;
}

// 00CE3680  cGrenadeGuideLineParts::vf00  size=63  [class]
undefined4 * __thiscall cGrenadeGuideLineParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

