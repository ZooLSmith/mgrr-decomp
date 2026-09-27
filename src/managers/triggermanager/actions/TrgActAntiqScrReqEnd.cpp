// src/managers/triggermanager/actions/TrgActAntiqScrReqEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80C10..00C80C10, 1 functions

#include "mgrr.h"

// 00C80C10  Trigger::Act::ANTIQ_SCR_REQ_END  size=42  [class]
undefined4 __fastcall Trigger::Act::ANTIQ_SCR_REQ_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab970);
    return 0;
  }
  FUN_00a55820();
  return 1;
}

