// src/managers/triggermanager/actions/TrgActNoCodecMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C816C0..00C816C0, 1 functions

#include "mgrr.h"

// 00C816C0  Trigger::Act::NO_CODEC_MENU  size=41  [class]
undefined4 __fastcall Trigger::Act::NO_CODEC_MENU(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac010);
    return 0;
  }
  DAT_01bea178 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  return 1;
}

