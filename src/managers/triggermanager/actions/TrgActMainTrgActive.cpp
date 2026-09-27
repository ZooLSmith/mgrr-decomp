// src/managers/triggermanager/actions/TrgActMainTrgActive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C818E0..00C818E0, 1 functions

#include "mgrr.h"

// 00C818E0  Trigger::Act::MAIN_TRG_ACTIVE  size=41  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_ACTIVE(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac0d0);
    return 0;
  }
  uVar1 = 0;
  FUN_00958f70(0);
  uVar1 = FUN_00959630(uVar1);
  return uVar1;
}

