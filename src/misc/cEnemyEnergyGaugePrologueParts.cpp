// src/misc/cEnemyEnergyGaugePrologueParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD2C90..00D2E1B0, 7 functions

#include "types.h"

// 00CD2C90  cEnemyEnergyGaugePrologueParts::cEnemyEnergyGaugePrologueParts  size=134  [class]
void __fastcall cEnemyEnergyGaugePrologueParts::cEnemyEnergyGaugePrologueParts(undefined4 *param_1)

{
  param_1[0x12] = 0;
  param_1[0x1b] = 0;
  param_1[1] = 0;
  param_1[0x1e] = 0;
  param_1[2] = 0;
  param_1[0x1f] = 0;
  param_1[3] = 0;
  param_1[0x20] = 0;
  param_1[4] = 1;
  param_1[0x21] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  return;
}

// 00CD2D50  FUN_00cd2d50  size=151  [callgraph]
undefined4 __fastcall FUN_00cd2d50(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return 0;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x18);
    uVar1 = DAT_01bea094 >> 0x12;
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),~uVar1 & 1,3);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    return 0;
  case 2:
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x1c));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      return 0;
    }
    break;
  case 3:
    uVar3 = 1;
  }
  return uVar3;
}

// 00CEDBC0  cEnemyEnergyGaugePrologueParts::vf00  size=63  [class]
undefined4 * __thiscall cEnemyEnergyGaugePrologueParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEDC00  cEnemyEnergyGaugePrologueParts::vf08  size=464  [class]
void __fastcall cEnemyEnergyGaugePrologueParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8e);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x90);
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x148);
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (iVar2 != 0) {
    FUN_00cdeec0(7);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x28);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    *(undefined4 *)(iVar2 + 0xd0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x18);
  if (DAT_01dc2d70 == 0) {
    if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  else {
    if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(5);
    }
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  return;
}

// 00D2E080  FUN_00d2e080  size=72  [callgraph]
int FUN_00d2e080(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x94,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cEnemyEnergyGaugePrologueParts::cEnemyEnergyGaugePrologueParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cEnemyEnergyGaugePrologueParts";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0x15);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2E0D0  cEnemyEnergyGaugePrologueParts::vf14  size=211  [class]
void __fastcall cEnemyEnergyGaugePrologueParts::vf14(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar2 = *(uint *)(param_1 + 0x74) & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar1 + 0x80))) &&
       (iVar1 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
      *(uint *)(iVar1 + 0x3b0) = (uint)((int)uVar2 < 1);
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    if (4 < *(int *)(param_1 + 0x74)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(5);
      }
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
  }
  else if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_00cdf400(5);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x70) = 2;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x88);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_00d237c0(0);
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar2 = FUN_00cd2d50();
    uVar3 = FUN_00d23a50();
    *(uint *)(param_1 + 0x54) = uVar3 & uVar2;
  }
  return;
}

// 00D2E1B0  FUN_00d2e1b0  size=127  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d2e1b0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (DAT_01dc08f8 == 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    uVar4 = FUN_00d2e080();
    *(undefined4 *)(param_1 + 4) = uVar4;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = DAT_018b5618;
    fVar2 = (float)_DAT_01dc08f0;
    fVar3 = (float)_DAT_01dc08f4;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x88) = 1;
    *(float *)(iVar1 + 0x8c) = fVar2;
    *(float *)(iVar1 + 0x90) = fVar3;
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  DAT_01dc08f8 = 0;
  return;
}

