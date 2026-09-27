// src/managers/triggermanager/conditions/TrgCondRoomEventNotEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B760..00C7B760, 1 functions

#include "mgrr.h"

// 00C7B760  Trigger::Cond::ROOM_EVENT_NOT_END  size=87  [class]
uint __fastcall Trigger::Cond::ROOM_EVENT_NOT_END(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016a9628);
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0x40) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 1;
  }
  else {
    if (iVar1 != 0x41) goto LAB_00c7b7b0;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 2;
  }
  uVar3 = FUN_00e678d0(uVar4,uVar3,0xffffffff);
  uVar2 = FUN_00e7a6e0(uVar3);
LAB_00c7b7b0:
  return uVar2 ^ 1;
}

