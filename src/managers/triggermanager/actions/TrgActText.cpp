// src/managers/triggermanager/actions/TrgActText.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F150..00C7F150, 1 functions

#include "mgrr.h"

// 00C7F150  Trigger::Act::TEXT  size=66  [class]
undefined4 __fastcall Trigger::Act::TEXT(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aaa4c);
    return 0;
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x2c);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  uVar5 = 0;
  uVar2 = FUN_00e03ea0(iVar1 + 8,uVar3,uVar4,0);
  FUN_00ce3040(uVar2,uVar3,uVar4,uVar5);
  return 1;
}

