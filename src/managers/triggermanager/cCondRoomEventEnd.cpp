// src/managers/triggermanager/cCondRoomEventEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AC70..00C85A90, 3 functions

#include "mgrr.h"

// 00C7AC70  Trigger::cCondRoomEventEnd::vf14  size=83  [class]
uint __fastcall Trigger::cCondRoomEventEnd::vf14(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  uVar2 = 0;
  if (iVar1 == 0x2c) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 1;
  }
  else {
    if (iVar1 != 0x3a) goto LAB_00c7acac;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 2;
  }
  uVar3 = FUN_00e678d0(uVar4,uVar3,0xffffffff);
  uVar2 = FUN_00e7a6e0(uVar3);
LAB_00c7acac:
  if (*(int *)(param_1 + 0x14) == 0) {
    *(uint *)(param_1 + 0x14) = uVar2;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

// 00C7ACD0  Trigger::cCondRoomEventEnd::vf1C  size=16  [class]
void __thiscall Trigger::cCondRoomEventEnd::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85A90  Trigger::cCondRoomEventEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondRoomEventEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

