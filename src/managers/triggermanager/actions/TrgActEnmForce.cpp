// src/managers/triggermanager/actions/TrgActEnmForce.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EC80..00C7ECD0, 2 functions

#include "mgrr.h"

// 00C7EC80  Trigger::Act::ENM_FORCE  size=42  [class]
undefined4 __fastcall Trigger::Act::ENM_FORCE(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7b4);
    return 0;
  }
  uVar1 = FUN_00c2a520();
  return uVar1;
}

// 00C7ECD0  Trigger::Act::ENM_FORCE_2  size=42  [class]
undefined4 __fastcall Trigger::Act::ENM_FORCE_2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa7b4);
    return 0;
  }
  uVar1 = FUN_00c185c0();
  return uVar1;
}

