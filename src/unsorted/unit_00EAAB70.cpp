// src/unsorted/unit_00EAAB70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAAB70..00EAAB70, 1 functions

#include "mgrr.h"

// 00EAAB70  FUN_00eaab70  size=26  [run]
void __fastcall FUN_00eaab70(int *param_1)

{
  param_1[0xc] = param_1[0xc] | 0x80000000;
  (**(code **)(*param_1 + 0xc))();
  param_1[0xc] = param_1[0xc] | 0x8000000;
  return;
}

