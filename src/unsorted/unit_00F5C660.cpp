// src/unsorted/unit_00F5C660.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C660..00F5C660, 1 functions

#include "types.h"

// 00F5C660  FUN_00f5c660  size=111  [run]
void __thiscall FUN_00f5c660(int param_1,float param_2,float param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (param_3 - param_2 == 0.0) {
    local_18 = 3.4028235e+38;
  }
  else {
    local_18 = 1.0 / (param_3 - param_2);
  }
  local_20 = param_2;
  local_1c = param_3;
  local_14 = 0;
  FUN_00f9ec50(param_1 + 0x70,&local_20,4);
  return;
}

