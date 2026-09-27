// src/managers/triggermanager/actions/TrgActGimmickFinish.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81130..00C81130, 1 functions

#include "mgrr.h"

// 00C81130  Trigger::Act::GIMMICK_FINISH  size=49  [class]
undefined4 __fastcall Trigger::Act::GIMMICK_FINISH(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abbd4);
    return 0;
  }
  FUN_009453f0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),1);
  return 1;
}

