// src/managers/triggermanager/actions/TrgActVrMistake.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C810E0..00C810E0, 1 functions

#include "mgrr.h"

// 00C810E0  Trigger::Act::VR_MISTAKE  size=65  [class]
undefined4 __fastcall Trigger::Act::VR_MISTAKE(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abba4);
    return 0;
  }
  uVar3 = 0;
  iVar2 = FUN_0095bfa0();
  if (iVar2 != 0) {
    FUN_0095bfa0();
    uVar3 = FUN_0095c0b0(*(undefined4 *)(iVar1 + 8));
  }
  return uVar3;
}

