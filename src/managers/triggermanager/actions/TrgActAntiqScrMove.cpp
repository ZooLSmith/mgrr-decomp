// src/managers/triggermanager/actions/TrgActAntiqScrMove.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80BE0..00C80BE0, 1 functions

#include "mgrr.h"

// 00C80BE0  Trigger::Act::ANTIQ_SCR_MOVE  size=44  [class]
undefined1 __fastcall Trigger::Act::ANTIQ_SCR_MOVE(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab93c);
    return 0;
  }
  uVar1 = FUN_00a5be00(0xffffffff,1);
  return uVar1;
}

