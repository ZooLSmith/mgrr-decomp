// src/unsorted/unit_0058A620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0058A620..0058A620, 1 functions

#include "mgrr.h"

// 0058A620  FUN_0058a620  size=118  [run]
bool __thiscall FUN_0058a620(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_64;
  undefined1 local_60 [92];
  
  FUN_00586130(local_60);
  *(undefined4 *)(param_1 + 0x990) = *param_2;
  *(undefined4 *)(param_1 + 0x994) = param_2[1];
  *(undefined4 *)(param_1 + 0x998) = param_2[2];
  local_64 = 0;
  *(undefined4 *)(param_1 + 0x99c) = param_2[3];
  *(undefined4 *)(param_1 + 0x9a0) = param_2[4];
  *(undefined4 *)(param_1 + 0x9a4) = param_2[5];
  iVar1 = FUN_00d91dc0(&local_64,param_2,local_60);
  return iVar1 != 0;
}

