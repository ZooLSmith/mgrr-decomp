// src/managers/scenariomanager/ScenarioManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6D440..00A7BBD0, 2 functions

#include "types.h"

// 00A6D440  ScenarioManager::vfA8  size=31  [class]
undefined4 * __thiscall ScenarioManager::vfA8(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A7BBD0  ScenarioManager::ScenarioManager  size=213  [class]
void __fastcall ScenarioManager::ScenarioManager(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = ScenarioManagerImplement::vftable;
  if (DAT_01be9a34 != (undefined4 *)0x0) {
    (**(code **)*DAT_01be9a34)(1);
    DAT_01be9a34 = (undefined4 *)0x0;
  }
  if (((int *)param_1[0x2d] != (int *)0x0) && (param_1[0x2e] != 0)) {
    (**(code **)(*(int *)param_1[0x2d] + 0x10))();
    if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x2d])(1);
      param_1[0x2d] = 0;
    }
  }
  piVar2 = param_1 + 0x1d;
  iVar1 = 8;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 8))();
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x14))(1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00dd8450();
  if (param_1[10] != 0) {
    FUN_00dd4940(param_1[10]);
    param_1[10] = 0;
  }
  hkMemoryAllocator::~hkMemoryAllocator();
  FUN_00dd8450();
  if (param_1[10] != 0) {
    FUN_00dd4940(param_1[10]);
    param_1[10] = 0;
  }
  thunk_FUN_00dd8450();
  *param_1 = vftable;
  return;
}

