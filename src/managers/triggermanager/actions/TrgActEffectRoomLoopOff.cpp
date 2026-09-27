// src/managers/triggermanager/actions/TrgActEffectRoomLoopOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80AF0..00C80AF0, 1 functions

#include "mgrr.h"

// 00C80AF0  Trigger::Act::EFFECT_ROOM_LOOP_OFF  size=96  [class]
undefined4 __fastcall Trigger::Act::EFFECT_ROOM_LOOP_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 0;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab89c);
    return 0;
  }
  piVar2 = (int *)FUN_00a6dd90();
  iVar3 = (**(code **)(*piVar2 + 0x9c))(*(undefined4 *)(iVar1 + 8));
  if (iVar3 != 0) {
    uVar4 = FUN_00e03ea0(iVar1 + 0x10);
    uVar4 = FUN_00a71830(*(undefined4 *)(iVar1 + 0xc),uVar4);
  }
  return uVar4;
}

