// src/unsorted/unit_00C49EE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C49EE0..00C4A030, 3 functions

#include "types.h"

// 00C49EE0  FUN_00c49ee0  size=39  [run]
void __fastcall FUN_00c49ee0(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    FUN_00e913d0(*param_1);
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return;
}

// 00C49F70  FUN_00c49f70  size=64  [run]
void __fastcall FUN_00c49f70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00C4A030  FUN_00c4a030  size=60  [run]
void __fastcall FUN_00c4a030(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

