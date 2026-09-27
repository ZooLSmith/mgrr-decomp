// src/unsorted/unit_00A85F70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A85F70..00A85F70, 1 functions

#include "types.h"

// 00A85F70  FUN_00a85f70  size=60  [run]
void __thiscall FUN_00a85f70(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

