// src/managers/triggermanager/actions/TrgActDoorClose.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F0E0..00C7F0E0, 1 functions

#include "mgrr.h"

// 00C7F0E0  Trigger::Act::DOOR_CLOSE  size=58  [class]
undefined4 __fastcall Trigger::Act::DOOR_CLOSE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaa1c);
    return 0;
  }
  uVar2 = FUN_00e03ea0(iVar1 + 8);
  uVar2 = FUN_00c47a30(uVar2,*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

