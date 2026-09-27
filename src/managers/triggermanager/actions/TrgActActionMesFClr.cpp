// src/managers/triggermanager/actions/TrgActActionMesFClr.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C807B0..00C807B0, 1 functions

#include "mgrr.h"

// 00C807B0  Trigger::Act::ACTION_MES_F_CLR  size=37  [class]
undefined4 __fastcall Trigger::Act::ACTION_MES_F_CLR(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab65c);
    return 0;
  }
  FUN_00cb5520();
  return 1;
}

