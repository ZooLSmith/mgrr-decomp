// src/managers/triggermanager/actions/TrgActBattleAreaOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80C80..00C80C80, 1 functions

#include "mgrr.h"

// 00C80C80  Trigger::Act::BATTLE_AREA_OFF  size=54  [class]
undefined4 __fastcall Trigger::Act::BATTLE_AREA_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab9d8);
    return 0;
  }
  piVar2 = (int *)FUN_00401110();
  (**(code **)(*piVar2 + 8))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

