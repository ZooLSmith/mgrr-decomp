// src/managers/triggermanager/actions/TrgActDoorLock.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81010..00C81010, 1 functions

#include "mgrr.h"

// 00C81010  Trigger::Act::DOOR_LOCK  size=74  [class]
undefined4 __fastcall Trigger::Act::DOOR_LOCK(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abb18);
    return 0;
  }
  FUN_00e03ea0(iVar1 + 8);
  if (*(int *)(iVar1 + 0x18) != 0) {
    uVar2 = FUN_00c47bb0();
    return uVar2;
  }
  uVar2 = FUN_00c47bf0();
  return uVar2;
}

