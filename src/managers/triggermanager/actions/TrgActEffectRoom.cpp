// src/managers/triggermanager/actions/TrgActEffectRoom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C97140..00C97140, 1 functions

#include "mgrr.h"

// 00C97140  Trigger::Act::EFFECT_ROOM  size=75  [class]
undefined4 __fastcall Trigger::Act::EFFECT_ROOM(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b13a8);
    return 0;
  }
  uVar2 = FUN_00e01ca0();
  uVar2 = FUN_00e01540(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),uVar2);
  return uVar2;
}

