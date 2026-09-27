// src/managers/triggermanager/actions/TrgActSubphase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E8F0..00C7E8F0, 1 functions

#include "mgrr.h"

// 00C7E8F0  Trigger::Act::SUBPHASE  size=48  [class]
undefined4 __fastcall Trigger::Act::SUBPHASE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa5fc);
    return 0;
  }
  uVar2 = FUN_00d5ea40(iVar1 + 8,1,*(undefined4 *)(iVar1 + 0x28));
  return uVar2;
}

