// src/managers/triggermanager/ACT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F4A0..00C7F4A0, 1 functions

#include "mgrr.h"

// 00C7F4A0  Trigger::ACT::ENM_MOVE  size=32  [class]
undefined4 __fastcall Trigger::ACT::ENM_MOVE(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aabf0);
    return 0;
  }
  return 1;
}

