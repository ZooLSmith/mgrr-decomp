// src/managers/triggermanager/actions/TrgActSubTrgActive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81940..00C81940, 1 functions

#include "mgrr.h"

// 00C81940  Trigger::Act::SUB_TRG_ACTIVE  size=48  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_ACTIVE(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac138);
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  uVar3 = 0;
  uVar2 = 0;
  FUN_00958f70(0,uVar1,0);
  uVar1 = FUN_009596e0(uVar2,uVar1,uVar3);
  return uVar1;
}

