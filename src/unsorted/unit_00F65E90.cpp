// src/unsorted/unit_00F65E90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F65E90..00F65F10, 2 functions

#include "mgrr.h"

// 00F65E90  FUN_00f65e90  size=128  [run]
undefined4 __thiscall FUN_00f65e90(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 & 0xf;
  uVar1 = param_2 << 0xc;
  uVar2 = param_2 << 0x10;
  param_2 = param_2 << 0x14;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff000fff | uVar1 | uVar2 | param_2;
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff000fff | uVar1 | uVar2 | param_2;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xff000fff | uVar1 | uVar2 | param_2;
  return 1;
}

// 00F65F10  FUN_00f65f10  size=98  [run]
undefined4 __thiscall FUN_00f65f10(int param_1,uint param_2)

{
  param_2 = param_2 & 0xf;
  *(uint *)(param_1 + 0x48) =
       *(uint *)(param_1 + 0x48) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  *(uint *)(param_1 + 0x90) =
       *(uint *)(param_1 + 0x90) & 0xff000fff | param_2 << 0xc | param_2 << 0x10 | param_2 << 0x14;
  return 1;
}

