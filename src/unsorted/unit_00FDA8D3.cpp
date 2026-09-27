// src/unsorted/unit_00FDA8D3.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA8D3..00FDA921, 4 functions

#include "types.h"

// 00FDA8D3  FUN_00fda8d3  size=28  [run]
void FUN_00fda8d3(uint param_1)

{
  __Mtxlock((_Rmtx *)(&DAT_01f8ed38 + (param_1 & 3) * 0x18));
  return;
}

// 00FDA8EF  FUN_00fda8ef  size=28  [run]
void FUN_00fda8ef(uint param_1)

{
  __Mtxunlock((_Rmtx *)(&DAT_01f8ed38 + (param_1 & 3) * 0x18));
  return;
}

// 00FDA911  FUN_00fda911  size=16  [run]
void __thiscall FUN_00fda911(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00FDA921  FUN_00fda921  size=22  [run]
void __thiscall FUN_00fda921(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

