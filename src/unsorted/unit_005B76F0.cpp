// src/unsorted/unit_005B76F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B76F0..005B76F0, 1 functions

#include "types.h"

// 005B76F0  FUN_005b76f0  size=111  [run]
undefined4 __fastcall FUN_005b76f0(int param_1)

{
  int iVar1;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = local_20 | 0x80000000;
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_4 = 0;
  local_1c = 0;
  local_1a = 0;
  iVar1 = FUN_00c3d9d0(param_1 + 0x40,&local_20);
  if ((iVar1 != 0) && ((local_18 & 0x40000000) != 0)) {
    return 1;
  }
  return 0;
}

