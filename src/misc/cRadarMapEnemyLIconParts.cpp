// src/misc/cRadarMapEnemyLIconParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD69F0..00CF0FC0, 4 functions

#include "mgrr.h"
#include "cRadarMapEnemyLIconParts.h"

// 00CD69F0  cRadarMapEnemyLIconParts::cRadarMapEnemyLIconParts  size=115  [class]
void __fastcall cRadarMapEnemyLIconParts::cRadarMapEnemyLIconParts(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 1;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[9] = 0;
  param_1[0x25] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[10] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0x27] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  return;
}

// 00CD6A70  cRadarMapEnemyLIconParts::vf14  size=246  [class]
void __fastcall cRadarMapEnemyLIconParts::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_01dc0ec8;
  iVar4 = 0;
  local_2c = 0;
  piVar3 = (int *)(param_1 + 0x20);
  do {
    if ((*piVar3 == 0) || (iVar2 != 0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1a8);
      if ((iVar1 != 0) && (local_2c < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)((int)piVar3 + iVar1 + (-0x20 - param_1)) = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1a8);
      if ((iVar1 != 0) && (local_2c < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)((int)piVar3 + iVar1 + (-0x20 - param_1)) = 1;
      }
      FUN_00cbe040(param_1 + 0x40 + iVar4,&local_20);
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
      if ((iVar1 != 0) && (local_2c < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)(iVar4 + iVar1) = local_20;
        *(undefined4 *)(iVar4 + 4 + iVar1) = local_1c;
        *(undefined4 *)(iVar4 + 8 + iVar1) = local_18;
        *(undefined4 *)(iVar4 + 0xc + iVar1) = local_14;
      }
    }
    piVar3[0x21] = piVar3[0x1c];
    *piVar3 = 0;
    local_2c = local_2c + 1;
    iVar4 = iVar4 + 0x10;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x50);
  return;
}

// 00CDE630  cRadarMapEnemyLIconParts::vf00  size=63  [class]
undefined4 * __thiscall cRadarMapEnemyLIconParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF0FC0  cRadarMapEnemyLIconParts::vf08  size=33  [class]
void __fastcall cRadarMapEnemyLIconParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

