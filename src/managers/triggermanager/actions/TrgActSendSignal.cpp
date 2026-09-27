// src/managers/triggermanager/actions/TrgActSendSignal.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80110..00C80110, 1 functions

#include "mgrr.h"

// 00C80110  Trigger::Act::SEND_SIGNAL  size=80  [class]
undefined4 __fastcall Trigger::Act::SEND_SIGNAL(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab23c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    FUN_00d89e60(*(undefined4 *)(&DAT_018abcd4 + *(int *)(param_1 + 8) * 8));
    return 1;
  }
  FUN_00dd5650(&DAT_016ab20c);
  return 0;
}

