// src/managers/battleparametermanager/BattleParameterManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D72800..00D76170, 2 functions

#include "mgrr.h"
#include "BattleParameterManager.h"

// 00D72800  BattleParameterManager::vf0C  size=31  [class]
undefined4 * __thiscall BattleParameterManager::vf0C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D76170  BattleParameterManager::BattleParameterManager  size=30  [class]
void __fastcall BattleParameterManager::BattleParameterManager(undefined4 *param_1)

{
  *param_1 = BattleParameterManagerImplement::vftable;
  FUN_00d73210();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

