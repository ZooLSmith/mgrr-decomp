// src/managers/triggermanager/actions/TrgActMainTrgAddFunc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C819A0..00C819A0, 1 functions

#include "mgrr.h"

// 00C819A0  Trigger::Act::MAIN_TRG_ADD_FUNC  size=46  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_ADD_FUNC(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac19c);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  FUN_00958f70(uVar1);
  FUN_00959760(uVar1);
  return 0;
}

