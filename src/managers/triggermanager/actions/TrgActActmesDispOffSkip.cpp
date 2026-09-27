// src/managers/triggermanager/actions/TrgActActmesDispOffSkip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80B50..00C80B50, 1 functions

#include "mgrr.h"

// 00C80B50  Trigger::Act::ACTMES_DISP_OFF_SKIP  size=37  [class]
undefined4 __fastcall Trigger::Act::ACTMES_DISP_OFF_SKIP(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab8d4);
    return 0;
  }
  DAT_01dc0744 = 1;
  return 1;
}

