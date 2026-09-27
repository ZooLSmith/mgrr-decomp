// src/managers/triggermanager/actions/TrgActGimmickRevert.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81170..00C81170, 1 functions

#include "mgrr.h"

// 00C81170  Trigger::Act::GIMMICK_REVERT  size=49  [class]
undefined4 __fastcall Trigger::Act::GIMMICK_REVERT(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abc08);
    return 0;
  }
  FUN_009453f0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  return 1;
}

