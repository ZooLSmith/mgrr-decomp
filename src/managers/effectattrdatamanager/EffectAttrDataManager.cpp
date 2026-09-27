// src/managers/effectattrdatamanager/EffectAttrDataManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E5E80..009E5FD0, 4 functions

#include "types.h"

// 009E5E80  FUN_009e5e80  size=80  [callgraph]
void __thiscall FUN_009e5e80(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + 0x10);
    while (*piVar2 != *(int *)(param_2 + 0x44)) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 6;
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        FUN_009dc560(param_2);
        return;
      }
    }
    if (*(int *)(param_1 + 0x1c) + uVar1 * 0x18 != 0) {
      return;
    }
  }
  FUN_009dc560(param_2);
  return;
}

// 009E5ED0  FUN_009e5ed0  size=185  [callgraph]
int __thiscall FUN_009e5ed0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if ((float)param_1[5] != 0.0) {
    if ((float)param_1[6] < (float)param_1[5]) {
      return 0;
    }
    param_1[6] = 0;
  }
  uVar1 = 0;
  if (param_1[2] != 0) {
    piVar3 = (int *)(*param_1 + 0x24);
    do {
      if (*piVar3 == *(int *)(param_2 + 0x28)) {
        if (*param_1 + uVar1 * 0x28 != 0) {
          iVar2 = FUN_009e5e80(param_2);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = param_1[1];
          goto joined_r0x009e5f62;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 10;
    } while (uVar1 < (uint)param_1[2]);
  }
  iVar2 = param_1[1];
joined_r0x009e5f62:
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0165ae38,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x28));
    return 0;
  }
  iVar2 = FUN_009e5e80(param_2);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0165adfc,*(undefined4 *)(param_2 + 0x2c));
  }
  return iVar2;
}

// 009E5F90  FUN_009e5f90  size=55  [callgraph]
int __fastcall FUN_009e5f90(int param_1)

{
  FUN_00de3610(0,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x8001;
  *(undefined4 *)(param_1 + 0x14) = 10;
  FUN_00de3540(0,0);
  return param_1;
}

// 009E5FD0  EffectAttrDataManager::searchCallData  size=381  [class]
int __thiscall EffectAttrDataManager::searchCallData(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    iVar2 = *param_1;
    piVar3 = (int *)(iVar2 + 0xc);
    do {
      if (*piVar3 == *(int *)(param_2 + 0x2c)) {
        piVar3 = (int *)(iVar2 + uVar1 * 0x1c);
        if (*(float *)(iVar2 + 0x14 + uVar1 * 0x1c) != 0.0) {
          if ((float)piVar3[6] < (float)piVar3[5]) {
            return 0;
          }
          piVar3[6] = 0;
        }
        uVar1 = 0;
        if (piVar3[2] == 0) goto LAB_009e6079;
        piVar4 = (int *)(*piVar3 + 0x24);
        goto LAB_009e6060;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 7;
    } while (uVar1 < (uint)param_1[1]);
  }
  FUN_00dd5650(&DAT_0165ae78,*(undefined4 *)(param_2 + 0x2c));
  return 0;
  while( true ) {
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 10;
    if ((uint)piVar3[2] <= uVar1) break;
LAB_009e6060:
    if (*piVar4 == *(int *)(param_2 + 0x28)) {
      iVar2 = *piVar3 + uVar1 * 0x28;
      if (iVar2 != 0) {
        uVar1 = 0;
        if (*(uint *)(iVar2 + 0x20) == 0) goto LAB_009e60e5;
        piVar4 = (int *)(*(int *)(iVar2 + 0x1c) + 0x10);
        goto LAB_009e60d5;
      }
      break;
    }
  }
LAB_009e6079:
  if (piVar3[1] != 0) {
    iVar2 = FUN_009e5e80(param_2);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_0165adfc,*(undefined4 *)(param_2 + 0x2c));
    }
    return iVar2;
  }
  FUN_00dd5650(&DAT_0165ae38,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x28));
  return 0;
  while( true ) {
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 6;
    if (*(uint *)(iVar2 + 0x20) <= uVar1) break;
LAB_009e60d5:
    if (*piVar4 == *(int *)(param_2 + 0x44)) {
      iVar2 = *(int *)(iVar2 + 0x1c) + uVar1 * 0x18;
      if (iVar2 != 0) goto LAB_009e60eb;
      break;
    }
  }
LAB_009e60e5:
  iVar2 = FUN_009dc560(param_2);
LAB_009e60eb:
  if (iVar2 != 0) {
    return iVar2;
  }
  if (piVar3[1] != 0) {
    iVar2 = FUN_009e5e80(param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00dd5650(&DAT_0165adfc,*(undefined4 *)(param_2 + 0x2c));
    return 0;
  }
  FUN_00dd5650(&DAT_0165ae38,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x28));
  return 0;
}

