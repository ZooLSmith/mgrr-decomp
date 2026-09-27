// src/managers/triggermanager/actions/TrgActResultRecEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80840..00C80840, 1 functions

#include "mgrr.h"

// 00C80840  Trigger::Act::RESULT_REC_END  size=46  [class]
undefined4 __fastcall Trigger::Act::RESULT_REC_END(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab70c);
    return 0;
  }
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x14))();
  return 1;
}

