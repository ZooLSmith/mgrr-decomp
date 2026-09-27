// src/unsorted/unit_00F690C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F690C0..00F690C0, 1 functions

#include "mgrr.h"

// 00F690C0  FUN_00f690c0  size=92  [run]
undefined4 __thiscall FUN_00f690c0(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  *(uint *)(param_1 + 0x6c) =
       *(uint *)(param_1 + 0x6c) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  return 1;
}

