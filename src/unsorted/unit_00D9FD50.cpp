// src/unsorted/unit_00D9FD50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D9FD50..00D9FE40, 2 functions

#include "mgrr.h"

// 00D9FD50  FUN_00d9fd50  size=68  [run]
undefined4 __thiscall FUN_00d9fd50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0x114))(iVar1,param_2,param_3);
  return 1;
}

// 00D9FE40  FUN_00d9fe40  size=68  [run]
undefined4 __thiscall FUN_00d9fe40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0xfc))(iVar1,param_2,param_3);
  return 1;
}

