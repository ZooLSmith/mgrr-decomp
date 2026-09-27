// src/misc/cRadarMapEnemySIconParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD6D30..00CF1050, 4 functions

#include "types.h"

// 00CD6D30  cRadarMapEnemySIconParts::cRadarMapEnemySIconParts  size=190  [class]
void __fastcall cRadarMapEnemySIconParts::cRadarMapEnemySIconParts(undefined4 *param_1)

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
  param_1[0x3c] = 0xffffffff;
  param_1[0x46] = 0xffffffff;
  param_1[9] = 0;
  param_1[0x3d] = 0xffffffff;
  param_1[0x47] = 0xffffffff;
  param_1[10] = 0;
  param_1[0x3e] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0x3f] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0x40] = 0xffffffff;
  param_1[0x4a] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0x41] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x4c] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x43] = 0xffffffff;
  param_1[0x4d] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x44] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x45] = 0xffffffff;
  param_1[0x4f] = 0xffffffff;
  return;
}

// 00CDE710  cRadarMapEnemySIconParts::vf00  size=63  [class]
undefined4 * __thiscall cRadarMapEnemySIconParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF1020  cRadarMapEnemySIconParts::vf08  size=33  [class]
void __fastcall cRadarMapEnemySIconParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CF1050  cRadarMapEnemySIconParts::vf14  size=321  [class]
void __fastcall cRadarMapEnemySIconParts::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = DAT_01dc0ec8;
  iVar4 = 0;
  local_2c = 0;
  piVar5 = (int *)(param_1 + 0xf0);
  do {
    if ((piVar5[-0x34] == 0) || (iVar3 != 0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1a8);
      if ((iVar1 != 0) && (local_2c < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)((int)piVar5 + iVar1 + (-0xf0 - param_1)) = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1a8);
      if ((iVar1 != 0) && (local_2c < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)((int)piVar5 + iVar1 + (-0xf0 - param_1)) = 1;
      }
      FUN_00cbe4c0(param_1 + 0x50 + iVar4,&local_20);
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
      if ((iVar1 != 0) && (local_2c < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)(iVar4 + iVar1) = local_20;
        *(undefined4 *)(iVar4 + 4 + iVar1) = local_1c;
        *(undefined4 *)(iVar4 + 8 + iVar1) = local_18;
        *(undefined4 *)(iVar4 + 0xc + iVar1) = local_14;
      }
      iVar1 = *piVar5;
      if (iVar1 != piVar5[10]) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar1 == 1) {
          if (iVar2 != 0) {
            FUN_00cdeec0(2);
          }
        }
        else if (iVar1 == 4) {
          if (iVar2 != 0) {
            FUN_00cdeec0(0);
          }
        }
        else if (iVar2 != 0) {
          FUN_00cdeec0(1);
        }
      }
    }
    piVar5[10] = *piVar5;
    piVar5[-0x34] = 0;
    local_2c = local_2c + 1;
    iVar4 = iVar4 + 0x10;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0xa0);
  return;
}

