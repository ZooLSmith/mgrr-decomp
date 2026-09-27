// src/managers/triggermanager/actions/TrgActRadioInfoStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F5F0..00C7F5F0, 1 functions

#include "mgrr.h"

// 00C7F5F0  Trigger::Act::RADIO_INFO_START  size=32  [class]
undefined4 __fastcall Trigger::Act::RADIO_INFO_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aacb4);
    return 0;
  }
  return 1;
}

