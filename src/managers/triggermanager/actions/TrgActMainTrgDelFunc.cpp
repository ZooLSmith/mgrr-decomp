// src/managers/triggermanager/actions/TrgActMainTrgDelFunc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81A10..00C81A10, 1 functions

#include "mgrr.h"

// 00C81A10  Trigger::Act::MAIN_TRG_DEL_FUNC  size=44  [class]
undefined4 __fastcall Trigger::Act::MAIN_TRG_DEL_FUNC(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac204);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  FUN_00958f70(uVar1);
  uVar1 = FUN_009597b0(uVar1);
  return uVar1;
}

