// src/managers/triggermanager/actions/TrgActAreacollisionoff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F410..00C7F410, 1 functions

#include "mgrr.h"

// 00C7F410  Trigger::Act::AreaCollisionOff  size=54  [class]
undefined4 __fastcall Trigger::Act::AreaCollisionOff(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aab80);
    return 0;
  }
  piVar2 = (int *)FUN_00a6e640();
  (**(code **)(*piVar2 + 0x68))(*(undefined4 *)(iVar1 + 8));
  return 1;
}

