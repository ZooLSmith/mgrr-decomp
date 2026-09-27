// src/managers/triggermanager/actions/TrgActQteButtonDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FC60..00C7FC60, 1 functions

#include "mgrr.h"

// 00C7FC60  Trigger::Act::QTE_BUTTON_DISP  size=48  [class]
undefined4 __fastcall Trigger::Act::QTE_BUTTON_DISP(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab154);
    return 0;
  }
  FUN_00cbc8f0((int)*(short *)(*(int *)(param_1 + 4) + 8),0);
  return 1;
}

