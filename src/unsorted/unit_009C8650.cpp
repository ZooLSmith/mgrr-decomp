// src/unsorted/unit_009C8650.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C8650..009C86D0, 3 functions

#include "mgrr.h"

// 009C8650  FUN_009c8650  size=74  [run]
undefined4 __thiscall FUN_009c8650(int param_1,int param_2)

{
  FUN_009c8280();
  FID_conflict__memcpy((void *)(param_1 + 0x50),&DAT_01b660c0,0x8ee0);
  FUN_009c56d0(param_1 + 0x18 + param_2 * 0x10,&DAT_01b660c0);
  *(int *)(param_1 + 8) = param_2;
  return 1;
}

// 009C86A0  FUN_009c86a0  size=45  [run]
undefined4 __thiscall FUN_009c86a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = 6;
  iVar1 = FUN_009c81f0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[4] = param_2;
  return 1;
}

// 009C86D0  FUN_009c86d0  size=45  [run]
undefined4 __thiscall FUN_009c86d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = 5;
  iVar1 = FUN_009c81f0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[4] = param_2;
  return 1;
}

