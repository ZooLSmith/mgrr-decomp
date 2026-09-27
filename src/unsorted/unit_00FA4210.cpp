// src/unsorted/unit_00FA4210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA4210..00FA4210, 1 functions

#include "mgrr.h"

// 00FA4210  FUN_00fa4210  size=439  [run]
undefined4 __fastcall FUN_00fa4210(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa08f0(param_1 + 0x4c,"g_Sampler0");
  if ((iVar1 == 0) && (iVar1 = FUN_00fa0850(param_1 + 0x4c,"g_Sampler0"), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016ebd04,"g_Sampler0");
    return 0;
  }
  iVar1 = FUN_00fa08f0(param_1 + 0x58,"g_Sampler1");
  if ((iVar1 == 0) && (iVar1 = FUN_00fa0850(param_1 + 0x58,"g_Sampler1"), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016ebd04,"g_Sampler1");
    return 0;
  }
  iVar1 = FUN_00fa08f0(param_1 + 100,"g_Sampler2");
  if ((iVar1 == 0) && (iVar1 = FUN_00fa0850(param_1 + 100,"g_Sampler2"), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016ebd04,"g_Sampler2");
    return 0;
  }
  iVar1 = FUN_00fa39a0(param_1 + 0x70,"g_Sampler3");
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x54) = iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x60) = iVar1 << 8 | *(uint *)(param_1 + 0x60) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x6c) = iVar1 << 8 | *(uint *)(param_1 + 0x6c) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x78) = iVar1 << 8 | *(uint *)(param_1 + 0x78) & 0xfffff020 | uVar2 | 0x20;
  return 1;
}

