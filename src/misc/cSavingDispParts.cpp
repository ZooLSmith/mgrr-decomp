// src/misc/cSavingDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF1DD0..00D339D0, 4 functions

#include "types.h"

// 00CF1DD0  cSavingDispParts::vf00  size=63  [class]
undefined4 * __thiscall cSavingDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF1E10  cSavingDispParts::vf08  size=107  [class]
void __fastcall cSavingDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x13a);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 != 0) {
    FUN_00cdeec0(3);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00CF1E80  cSavingDispParts::vf14  size=353  [class]
void __fastcall cSavingDispParts::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00cf1f4e;
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = 0;
    if ((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= *(uint *)(param_1 + 0x1c))) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(uint *)(param_1 + 0x1c) * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c));
    }
    local_20 = *puVar3;
    local_1c = puVar3[1];
    local_18 = puVar3[2];
    local_14 = puVar3[3];
    FUN_00cb27c0(*(undefined4 *)(param_1 + 0x24),&local_20);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        bVar4 = *(int *)(param_1 + 0x30) == 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          if (*(int *)(param_1 + 0x18) == 0) goto LAB_00cf1f4e;
          iVar2 = FUN_00cdf400(1);
          bVar4 = iVar2 != 0;
        }
        if (bVar4) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
      goto LAB_00cf1f4e;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(2);
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_00cf1f4e:
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x28) != 3)) {
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x34) = fVar1;
    if ((180.0 < fVar1) && (*(int *)(param_1 + 0x2c) == 0)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(undefined4 *)(param_1 + 0x28) = 3;
    }
  }
  if (((1 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x28) < 4)) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x30);
  }
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0)) &&
     ((*(int *)(param_1 + 0x18) != 0 && (iVar2 = FUN_00cdf400(0), iVar2 != 0)))) {
    FUN_00cdeec0(0);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

// 00D339D0  cSavingDispParts::cSavingDispParts  size=115  [class]
undefined4 * cSavingDispParts::cSavingDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0xd] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[3] = "cSavingDispParts";
    puVar1[2] = 10;
    uVar2 = FUN_00d29960(0x40);
    puVar1[5] = uVar2;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

