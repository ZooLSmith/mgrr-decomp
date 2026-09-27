// src/managers/triggermanager/actions/TrgActSubTrgAddFunc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C819D0..00C819D0, 1 functions

#include "mgrr.h"

// 00C819D0  Trigger::Act::SUB_TRG_ADD_FUNC  size=50  [class]
undefined4 __fastcall Trigger::Act::SUB_TRG_ADD_FUNC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac1d0);
    return 0;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar3 = 0;
  FUN_00958f70(0,uVar4,uVar2);
  uVar2 = FUN_00959810(uVar3,uVar4,uVar2);
  return uVar2;
}

