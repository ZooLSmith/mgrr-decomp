// src/graphics/cLightDataMinimum.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A40810..00A409E0, 4 functions

#include "mgrr.h"
#include "cLightDataMinimum.h"

// 00A40810  cLightDataMinimum::vf00  size=6  [class]
undefined ** cLightDataMinimum::vf00(void)

{
  return &PTR_s_cLightDataMinimum_0189f69c;
}

// 00A40820  cLightDataMinimum::vf04  size=30  [class]
undefined4 __thiscall cLightDataMinimum::vf04(undefined4 param_1,byte param_2)

{
  cObject::cObject();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A40840  FUN_00a40840  size=411  [between]
void __thiscall FUN_00a40840(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    iVar4 = 0x20;
    puVar1 = (undefined4 *)(param_2 + 0xc18);
    puVar2 = (undefined4 *)(param_1 + 0x1d88);
    do {
      puVar2[-5] = puVar1[-5];
      puVar2[-4] = puVar1[-4];
      puVar2[-3] = puVar1[-3];
      puVar2[-2] = puVar1[-2];
      iVar4 = iVar4 + -1;
      puVar2[-1] = puVar1[-1];
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      puVar2[6] = puVar1[6];
      puVar2[7] = puVar1[7];
      puVar2[8] = puVar1[8];
      puVar2[9] = puVar1[9];
      puVar2[10] = puVar1[10];
      puVar2[0xb] = puVar1[0xb];
      puVar2[0xc] = puVar1[0xc];
      puVar2[0xd] = puVar1[0xd];
      puVar2[0xe] = puVar1[0xe];
      puVar2[0xf] = puVar1[0xf];
      *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(puVar1 + 0x10);
      *(undefined1 *)((int)puVar2 + 0x41) = *(undefined1 *)((int)puVar1 + 0x41);
      *(undefined1 *)((int)puVar2 + 0x42) = *(undefined1 *)((int)puVar1 + 0x42);
      puVar2[0x11] = puVar1[0x11];
      puVar2[0x12] = puVar1[0x12];
      puVar2[0x14] = puVar1[0x14];
      puVar2[0x15] = puVar1[0x15];
      puVar2[0x16] = puVar1[0x16];
      puVar2[0x17] = puVar1[0x17];
      puVar2[0x18] = puVar1[0x18];
      puVar2[0x19] = puVar1[0x19];
      puVar2[0x1a] = puVar1[0x1a];
      puVar2[0x1b] = puVar1[0x1b];
      puVar1 = puVar1 + 0x24;
      puVar2 = puVar2 + -0x24;
    } while (iVar4 != 0);
    return;
  }
  iVar4 = param_1 + 0xc00;
  iVar3 = 0x20;
  do {
    FUN_00a36040((param_2 - param_1) + iVar4);
    iVar4 = iVar4 + 0x90;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00A409E0  cLightDataMinimum::cLightDataMinimum  size=244  [class]
void __fastcall cLightDataMinimum::cLightDataMinimum(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  param_1[0x52] = cLightApplyScale::vftable;
  param_1[0x59] = cLightApplyScale::vftable;
  param_1[0x60] = cLightApplyScale::vftable;
  param_1[0x67] = cLightApplyScale::vftable;
  param_1[0x6e] = cLightApplyScale::vftable;
  param_1[0x75] = cLightApplyScale::vftable;
  param_1[0x7c] = cLightApplyScale::vftable;
  param_1[0x83] = cLightApplyScale::vftable;
  param_1[0xd6] = cLightApplyScale::vftable;
  param_1[0xdd] = cLightApplyScale::vftable;
  param_1[0xe4] = cLightApplyScale::vftable;
  param_1[0xeb] = cLightApplyScale::vftable;
  param_1[0xf2] = cLightApplyScale::vftable;
  param_1[0xf9] = cLightApplyScale::vftable;
  param_1[0x100] = cLightApplyScale::vftable;
  param_1[0x107] = cLightApplyScale::vftable;
  param_1[0x11e] = cLightApplyScale::vftable;
  param_1[0x125] = cLightApplyScale::vftable;
  param_1[300] = cLightApplyScale::vftable;
  param_1[0x133] = cLightApplyScale::vftable;
  param_1[0x13a] = cLightApplyScale::vftable;
  param_1[0x141] = cLightApplyScale::vftable;
  param_1[0x148] = cLightApplyScale::vftable;
  param_1[0x14f] = cLightApplyScale::vftable;
  param_1[0x156] = cLightApplyScale::vftable;
  param_1[0x15d] = cLightApplyScale::vftable;
  param_1[0x164] = cLightApplyScale::vftable;
  param_1[0x16b] = cLightApplyScale::vftable;
  param_1[0x172] = cLightApplyScale::vftable;
  param_1[0x179] = cLightApplyScale::vftable;
  param_1[0x180] = cLightApplyScale::vftable;
  param_1[0x187] = cLightApplyScale::vftable;
  param_1 = param_1 + 0x300;
  iVar1 = 0x1f;
  do {
    *param_1 = cLightSaveWork::vftable;
    param_1[0x19] = cLightApplyScale::vftable;
    param_1 = param_1 + 0x24;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

