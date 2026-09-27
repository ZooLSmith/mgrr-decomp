// src/managers/havokraycastmanager/HavokRayCastManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090F3B0..0090F3B0, 1 functions

#include "types.h"

// 0090F3B0  HavokRayCastManager::set  size=182  [class]
void HavokRayCastManager::set(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    if (param_1[0x12] == 0) {
      iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_5();
    }
    else {
      iVar2 = RayCastMultiHitWork::RayCastMultiHitWork_2();
    }
    iVar3 = RayCastManager::set(iVar2,*param_1,param_1[0x10]);
    if (iVar3 == 0) {
      return;
    }
LAB_0090f3ea:
    iVar3 = RayCastWork::set(param_1[1],param_1 + 4,param_1 + 8,param_1[0xc],param_1[0xd],
                             param_1[0xe],param_1[0xf],param_1[0x10],(param_1[0x12] != 0) + '\x01',0
                             ,param_1[0x11]);
    if (iVar3 == 0) {
      *(undefined2 *)(iVar2 + 0x1a) = 1;
    }
    return;
  }
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (piVar1 == *(int **)(iVar2 + 0x10)) {
      if (iVar2 != 0) goto LAB_0090f3ea;
    }
    else {
      FUN_00dd5650(&DAT_0164c08c);
    }
  }
  FUN_00dd5650("HavokRayCastManager::set %s:not found work.",param_1[0x10]);
  return;
}

