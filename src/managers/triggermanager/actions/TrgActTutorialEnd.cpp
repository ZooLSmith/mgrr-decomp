// src/managers/triggermanager/actions/TrgActTutorialEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F700..00C7F700, 1 functions

#include "mgrr.h"

// 00C7F700  Trigger::Act::TUTORIAL_END  size=42  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::TUTORIAL_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aae5c);
    return 0;
  }
  _DAT_01d61384 = 0xffffffff;
  return 1;
}

