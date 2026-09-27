// src/managers/battlesituationmanager/BattleSituationManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D72AD0..00D76C30, 2 functions

#include "mgrr.h"
#include "BattleSituationManager.h"

// 00D72AD0  BattleSituationManager::vf0C  size=31  [class]
undefined4 * __thiscall BattleSituationManager::vf0C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D76C30  BattleSituationManager::BattleSituationManager  size=64  [class]
void __fastcall BattleSituationManager::BattleSituationManager(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = BattleSituationManagerImplement::vftable;
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    FUN_00dd4920(iVar1);
    param_1[2] = 0;
  }
  *param_1 = vftable;
  return;
}

