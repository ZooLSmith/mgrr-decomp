// src/managers/triggermanager/actions/TrgActSendSignalContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C801A0..00C801A0, 1 functions

#include "mgrr.h"

// 00C801A0  Trigger::Act::SEND_SIGNAL_CONTEXT  size=86  [class]
undefined4 __fastcall Trigger::Act::SEND_SIGNAL_CONTEXT(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab2a4);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    FUN_00d89e90(*(undefined4 *)(&DAT_018abcd4 + *(int *)(param_1 + 8) * 8),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
    return 1;
  }
  FUN_00dd5650(&DAT_016ab26c);
  return 0;
}

