// src/unsorted/unit_00F94640.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F94640..00F94640, 1 functions

#include "mgrr.h"

// 00F94640  FUN_00f94640  size=114  [run]
void FUN_00f94640(undefined4 param_1,uint param_2)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  local_c = (float)(param_2 >> 8 & 0xff) / 255.0;
  local_8 = (float)(param_2 & 0xff) / 255.0;
  local_4 = (float)(param_2 >> 0x18) / 255.0;
  FUN_00f9ea50(param_1,&local_10,4);
  return;
}

