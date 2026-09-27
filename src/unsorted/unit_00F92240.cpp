// src/unsorted/unit_00F92240.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F92240..00F92240, 1 functions

#include "mgrr.h"

// 00F92240  FUN_00f92240  size=164  [run]
void __thiscall FUN_00f92240(int param_1,uint param_2)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  local_c = (float)(param_2 >> 8 & 0xff) / 255.0;
  local_8 = (float)(param_2 & 0xff) / 255.0;
  local_4 = (float)(param_2 >> 0x18) / 255.0;
  FUN_00f9ea50(param_1 + 0x178,&local_10,4);
  return;
}

