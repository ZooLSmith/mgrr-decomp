// src/managers/triggermanager/actions/TrgActResultRecStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C807E0..00C81880, 2 functions

#include "mgrr.h"

// 00C807E0  Trigger::Act::RESULT_REC_START  size=83  [class]
undefined4 __fastcall Trigger::Act::RESULT_REC_START(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab6d8);
    return 0;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00dd5650(&DAT_016ab690);
    return 1;
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x10))(iVar1 + 8,0);
  return 1;
}

// 00C81880  Trigger::Act::RESULT_REC_START_2  size=83  [class]
undefined4 __fastcall Trigger::Act::RESULT_REC_START_2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab6d8);
    return 0;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00dd5650(&DAT_016ab690);
    return 1;
  }
  piVar2 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar2 + 0x10))(iVar1 + 8,1);
  return 1;
}

