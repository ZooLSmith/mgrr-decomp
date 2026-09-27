// src/unsorted/unit_00404B90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00404B90..00404BD0, 3 functions

#include "mgrr.h"

// 00404B90  FUN_00404b90  size=28  [run]
void FUN_00404b90(undefined4 param_1)

{
  FUN_00e26e90();
  FUN_00e22f10(param_1);
  return;
}

// 00404BB0  FUN_00404bb0  size=13  [run]
void __thiscall FUN_00404bb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb30) = param_2;
  return;
}

// 00404BD0  FUN_00404bd0  size=33  [run]
void __thiscall FUN_00404bd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xb34) = 1;
  *(undefined4 *)(param_1 + 0xb38) = param_2;
  *(undefined4 *)(param_1 + 0xb3c) = param_3;
  return;
}

