// src/managers/triggermanager/actions/TrgActVrTimerStop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C816F0..00C816F0, 1 functions

#include "mgrr.h"

// 00C816F0  Trigger::Act::VR_TIMER_STOP  size=37  [class]
undefined4 __fastcall Trigger::Act::VR_TIMER_STOP(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac040);
    return 0;
  }
  FUN_0095c2e0();
  return 1;
}

