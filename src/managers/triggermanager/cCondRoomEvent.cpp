// src/managers/triggermanager/cCondRoomEvent.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7ABF0..00C85A70, 3 functions

#include "mgrr.h"

// 00C7ABF0  Trigger::cCondRoomEvent::vf14  size=61  [class]
undefined4 __fastcall Trigger::cCondRoomEvent::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 4) == 0x2b) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar3 = 1;
  }
  else {
    if (*(int *)(iVar1 + 4) != 0x39) {
      return 0;
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar3 = 2;
  }
  uVar2 = FUN_00e678d0(uVar3,uVar2,0xffffffff);
  uVar2 = FUN_00e7a6e0(uVar2);
  return uVar2;
}

// 00C7AC30  Trigger::cCondRoomEvent::vf1C  size=16  [class]
void __thiscall Trigger::cCondRoomEvent::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85A70  Trigger::cCondRoomEvent::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondRoomEvent::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

