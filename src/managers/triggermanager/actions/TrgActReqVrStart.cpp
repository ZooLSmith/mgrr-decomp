// src/managers/triggermanager/actions/TrgActReqVrStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81620..00C81620, 1 functions

#include "mgrr.h"

// 00C81620  Trigger::Act::REQ_VR_START  size=37  [class]
undefined4 __fastcall Trigger::Act::REQ_VR_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abf88);
    return 0;
  }
  FUN_0095c2c0();
  return 1;
}

