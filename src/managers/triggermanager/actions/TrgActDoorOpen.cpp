// src/managers/triggermanager/actions/TrgActDoorOpen.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EA30..00C81840, 2 functions

#include "mgrr.h"

// 00C7EA30  Trigger::Act::DOOR_OPEN  size=58  [class]
undefined4 __fastcall Trigger::Act::DOOR_OPEN(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa680);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c478b0(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 00C81840  Trigger::Act::DOOR_OPEN_2  size=57  [class]
undefined4 __fastcall Trigger::Act::DOOR_OPEN_2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa680);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c31610(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

