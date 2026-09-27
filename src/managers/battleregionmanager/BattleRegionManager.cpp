// src/managers/battleregionmanager/BattleRegionManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401010..004024A0, 2 functions

#include "types.h"

// 00401010  BattleRegionManager::vf14  size=31  [class]
undefined4 * __thiscall BattleRegionManager::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004024A0  BattleRegionManager::BattleRegionManager  size=30  [class]
void __fastcall BattleRegionManager::BattleRegionManager(undefined4 *param_1)

{
  *param_1 = BattleRegionManagerImplement::vftable;
  FUN_00401a90();
  cEspControler::~cEspControler();
  *param_1 = vftable;
  return;
}

