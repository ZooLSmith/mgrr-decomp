// src/unsorted/unit_00CCEEB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCEEB0..00CCEF30, 2 functions

#include "mgrr.h"

// 00CCEEB0  FUN_00cceeb0  size=118  [run]
undefined4 __thiscall FUN_00cceeb0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = param_3;
  if (param_4 != -1) {
    iVar1 = FUN_00cc8f60(param_4);
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x14) = iVar1;
  }
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0)) &&
     (iVar1 = FUN_00cb1cd0(param_2), -1 < iVar1)) {
    *(undefined4 *)(param_1 + 0xac) = param_3;
    *(int *)(param_1 + 0xa8) = iVar1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return 1;
  }
  return 0;
}

// 00CCEF30  FUN_00ccef30  size=93  [run]
undefined4 __thiscall FUN_00ccef30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = param_3;
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0)) {
    iVar1 = FUN_00cb1c40(param_2);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0xac) = param_3;
      *(int *)(param_1 + 0xa8) = iVar1;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      return 1;
    }
  }
  return 0;
}

