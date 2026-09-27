// src/unsorted/unit_00401040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401040..00401070, 2 functions

#include "mgrr.h"

// 00401040  FUN_00401040  size=39  [run]
void FUN_00401040(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)();
  }
  return;
}

// 00401070  FUN_00401070  size=48  [run]
int FUN_00401070(undefined4 param_1,int param_2,int param_3,code *param_4)

{
  param_2 = param_2 * param_3;
  while (param_3 = param_3 + -1, -1 < param_3) {
    param_2 = (*param_4)();
  }
  return param_2;
}

