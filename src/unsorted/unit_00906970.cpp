// src/unsorted/unit_00906970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00906970..00906970, 1 functions

#include "mgrr.h"

// 00906970  FUN_00906970  size=76  [run]
void __thiscall FUN_00906970(int *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x14))();
  iVar1 = 0;
  if (-param_1[0x11] != -0x10 && -1 < -param_1[0x11] + 0x10) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10 - param_1[0x11]);
  }
  param_1[0x11] = 0x10;
  *param_2 = param_1[8] + 0x10;
  param_2[2] = 0x10;
  param_2[1] = param_1[0x10];
  param_2[3] = 0;
  return;
}

