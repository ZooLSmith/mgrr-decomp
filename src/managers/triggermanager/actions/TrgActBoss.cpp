// src/managers/triggermanager/actions/TrgActBoss.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EBB0..00C7EBB0, 1 functions

#include "mgrr.h"

// 00C7EBB0  Trigger::Act::BOSS  size=42  [class]
undefined4 __fastcall Trigger::Act::BOSS(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa764);
    return 0;
  }
  uVar1 = FUN_00c2a520();
  return uVar1;
}

