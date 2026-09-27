// src/managers/triggermanager/actions/TrgActMainTrgSleep.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81910..00C81910, 1 functions

#include "mgrr.h"

// 00C81910  Trigger::Act::MAIN_TRG_SLEEP  size=41  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_SLEEP(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac104);
    return 0;
  }
  uVar1 = 1;
  FUN_00958f70(1);
  uVar1 = FUN_00959630(uVar1);
  return uVar1;
}

