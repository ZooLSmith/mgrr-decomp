// src/managers/triggermanager/actions/TrgActAddExp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C813E0..00C813E0, 1 functions

#include "mgrr.h"

// 00C813E0  Trigger::Act::ADD_EXP  size=54  [class]
undefined4 __fastcall Trigger::Act::ADD_EXP(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abdd0);
    return 0;
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x3c))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

