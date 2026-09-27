// src/managers/triggermanager/actions/TrgActQteButtonDispOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80360..00C80360, 1 functions

#include "mgrr.h"

// 00C80360  Trigger::Act::QTE_BUTTON_DISP_OFF  size=44  [class]
undefined4 __fastcall Trigger::Act::QTE_BUTTON_DISP_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab3b8);
    return 0;
  }
  FUN_00cbc9c0(1,0);
  return 1;
}

