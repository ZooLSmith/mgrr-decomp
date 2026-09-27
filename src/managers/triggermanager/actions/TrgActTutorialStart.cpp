// src/managers/triggermanager/actions/TrgActTutorialStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F6B0..00C7F6B0, 1 functions

#include "mgrr.h"

// 00C7F6B0  Trigger::Act::TUTORIAL_START  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall Trigger::Act::TUTORIAL_START(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aae28);
    return false;
  }
  _DAT_01d61384 = *(undefined4 *)(iVar1 + 8);
  _DAT_01d61388 = 1;
  _DAT_01d6138c = 0;
  bVar2 = *(int *)(iVar1 + 8) != 999;
  if (!bVar2) {
    FUN_00dd5650(&DAT_016aade8);
  }
  return bVar2;
}

