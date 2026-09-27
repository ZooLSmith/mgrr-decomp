// src/unsorted/unit_00C40800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C40800..00C40800, 1 functions

#include "mgrr.h"

// 00C40800  FUN_00c40800  size=73  [run]
undefined4 * __fastcall FUN_00c40800(undefined4 *param_1)

{
  FUN_00405230();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_00a7c950();
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}

