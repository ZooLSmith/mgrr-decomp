// src/managers/triggermanager/actions/TrgActSubTrgSleep.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81970..00C81970, 1 functions

#include "mgrr.h"

// 00C81970  Trigger::Act::SUB_TRG_SLEEP  size=48  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_SLEEP(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac16c);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  uVar3 = 1;
  uVar2 = 0;
  FUN_00958f70(0,uVar1,1);
  uVar1 = FUN_009596e0(uVar2,uVar1,uVar3);
  return uVar1;
}

