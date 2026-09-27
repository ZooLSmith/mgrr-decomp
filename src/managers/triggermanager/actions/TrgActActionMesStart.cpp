// src/managers/triggermanager/actions/TrgActActionMesStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80780..00C80780, 1 functions

#include "mgrr.h"

// 00C80780  Trigger::Act::ACTION_MES_START  size=45  [class]
undefined4 __fastcall Trigger::Act::ACTION_MES_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab628);
    return 0;
  }
  FUN_00cb54e0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

