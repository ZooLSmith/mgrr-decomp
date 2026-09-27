// src/managers/triggermanager/conditions/TrgCondTimeSta.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D140..00C7D140, 1 functions

#include "mgrr.h"

// 00C7D140  Trigger::Cond::TIME_STA  size=40  [class]
undefined4 __fastcall Trigger::Cond::TIME_STA(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa070);
  }
  else if (*(float *)(param_1 + 0x30) <= 0.0) {
    return 1;
  }
  return 0;
}

