// src/unsorted/unit_00FA3B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA3B30..00FA3B30, 1 functions

#include "mgrr.h"

// 00FA3B30  FUN_00fa3b30  size=143  [run]
undefined4 __fastcall FUN_00fa3b30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa08f0(param_1 + 0x58,"g_Sampler0");
  if (iVar1 == 0) {
    iVar1 = FUN_00fa0850(param_1 + 0x58,"g_Sampler0");
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ebd04,"g_Sampler0");
      return 0;
    }
  }
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x60) = iVar1 << 8 | *(uint *)(param_1 + 0x60) & 0xfffff020 | uVar2 | 0x20;
  FUN_00f9e6d0(param_1 + 0x4c,"g_UVPos");
  return 1;
}

