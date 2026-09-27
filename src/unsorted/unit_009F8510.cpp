// src/unsorted/unit_009F8510.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F8510..009F86E0, 2 functions

#include "types.h"

// 009F8510  FUN_009f8510  size=50  [run]
undefined4 __thiscall FUN_009f8510(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x330) == 0) {
    return 0;
  }
  uVar1 = FUN_00a06de0(param_3);
  uVar1 = FUN_00a06ec0(param_2,uVar1);
  return uVar1;
}

// 009F86E0  FUN_009f86e0  size=56  [run]
void __thiscall FUN_009f86e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  _sprintf_s((char *)(param_1 + 0x870),0x40,"%s",param_2);
  uVar1 = FUN_00e03ea0((char *)(param_1 + 0x870));
  FUN_00c31470(0,uVar1);
  return;
}

