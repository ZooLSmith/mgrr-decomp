// src/managers/triggermanager/actions/TrgActRadioInfoEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F610..00C7F610, 1 functions

#include "mgrr.h"

// 00C7F610  Trigger::Act::RADIO_INFO_END  size=32  [class]
undefined4 __fastcall Trigger::Act::RADIO_INFO_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aace8);
    return 0;
  }
  return 1;
}

