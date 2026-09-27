// src/unsorted/unit_00CB8170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8170..00CB8170, 1 functions

#include "mgrr.h"

// 00CB8170  FUN_00cb8170  size=92  [run]
void __thiscall FUN_00cb8170(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined4 *)(param_1 + 0x1e4) = 1;
  *(undefined4 *)(param_1 + 0x1ec) = 1;
  iVar1 = FUN_00d9fa80(&local_20,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = local_20;
  *(undefined4 *)(param_1 + 0x84) = local_1c;
  return;
}

