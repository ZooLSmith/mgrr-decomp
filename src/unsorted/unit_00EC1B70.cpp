// src/unsorted/unit_00EC1B70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1B70..00EC1B70, 1 functions

#include "mgrr.h"

// 00EC1B70  FUN_00ec1b70  size=147  [run]
void __thiscall
FUN_00ec1b70(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            undefined4 param_8)

{
  if (((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) {
    param_8 = 0;
  }
  if (((param_2 != *(int *)(param_1 + 100)) || (param_3 != *(int *)(param_1 + 0x68))) ||
     (param_4 != *(int *)(param_1 + 0x6c))) {
    if (param_2 != 0) {
      *(int *)(param_1 + 100) = param_2;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = param_3;
    }
    if (param_4 != 0) {
      *(int *)(param_1 + 0x6c) = param_4;
    }
    if (param_5 == 0) {
      *(int *)(param_1 + 0x70) = param_2;
    }
    else {
      *(int *)(param_1 + 0x70) = param_5;
    }
    if (param_6 == 0) {
      *(int *)(param_1 + 0x74) = param_5;
    }
    else {
      *(int *)(param_1 + 0x74) = param_6;
    }
    if (param_7 != 0) {
      *(int *)(param_1 + 0x78) = param_7;
      FUN_00ebf1f0(param_8);
      return;
    }
    *(int *)(param_1 + 0x78) = param_5;
    FUN_00ebf1f0(param_8);
  }
  return;
}

