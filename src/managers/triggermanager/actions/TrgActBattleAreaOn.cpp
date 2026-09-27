// src/managers/triggermanager/actions/TrgActBattleAreaOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80C40..00C80C40, 1 functions

#include "mgrr.h"

// 00C80C40  Trigger::Act::BATTLE_AREA_ON  size=54  [class]
undefined4 __fastcall Trigger::Act::BATTLE_AREA_ON(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab9a4);
    return 0;
  }
  piVar2 = (int *)FUN_00401110();
  (**(code **)(*piVar2 + 4))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

