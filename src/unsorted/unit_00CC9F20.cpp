// src/unsorted/unit_00CC9F20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC9F20..00CCA2E0, 9 functions

#include "types.h"

// 00CC9F20  FUN_00cc9f20  size=111  [run]
undefined4 __thiscall FUN_00cc9f20(int param_1,int param_2)

{
  int iVar1;
  
  if (5 < param_2) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = FUN_00932720();
    if (*(int *)(param_1 + 0xe8) == iVar1) {
      return *(undefined4 *)(((param_2 != 1) + 1) * 0xd4 + 0x8c + param_1);
    }
    iVar1 = FUN_00932720();
    if (*(int *)(param_1 + 0x1bc) == iVar1) {
      param_2 = 2 - (uint)(param_2 != 1);
    }
  }
  return *(undefined4 *)(param_2 * 0xd4 + 0x8c + param_1);
}

// 00CC9F90  FUN_00cc9f90  size=154  [run]
void __thiscall FUN_00cc9f90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00df7c00(8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x514);
    puVar1 = (undefined4 *)(iVar2 * 0xd4 + 0xc + param_1);
    *(int *)(param_1 + 0x518) = iVar2;
    puVar1[0x21] = iVar2;
    puVar1[4] = 0;
    puVar1[1] = 1;
    puVar1[5] = DAT_01dc2cd8;
    puVar1[0x23] = param_2;
    *puVar1 = 0;
    puVar1[0x22] = 1;
    *(uint *)(param_1 + 0x514) = 2 - (uint)(*(int *)(param_1 + 0x514) != 1);
    *(undefined4 *)(param_1 + 0x510) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x504) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 4;
  }
  return;
}

// 00CCA030  FUN_00cca030  size=108  [run]
void __fastcall FUN_00cca030(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x518) * 0xd4 + 0xc + param_1;
  FUN_00f972f0();
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined2 *)(iVar1 + 0x65) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  FUN_00f972f0();
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined2 *)(iVar1 + 0xbd) = 0;
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe00) = 0;
  return;
}

// 00CCA0A0  FUN_00cca0a0  size=111  [run]
void __fastcall FUN_00cca0a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00df7c00(8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x28c) = 1;
    *(undefined4 *)(param_1 + 0x30c) = 3;
    *(undefined4 *)(param_1 + 0x29c) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x310) = 2;
    *(undefined4 *)(param_1 + 0x510) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x504) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 4;
  }
  return;
}

// 00CCA110  FUN_00cca110  size=105  [run]
void __fastcall FUN_00cca110(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined2 *)(param_1 + 0x2ed) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x345) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}

// 00CCA180  FUN_00cca180  size=125  [run]
void __thiscall FUN_00cca180(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x508) = param_2;
  iVar1 = FUN_00df7c00(8);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x508);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x20) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = 3;
    *(uint *)(param_1 + 0xc) = (*(int *)(param_1 + 0x508) != 0xfff) - 1;
    *(undefined4 *)(param_1 + 0x510) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x504) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 4;
  }
  return;
}

// 00CCA200  FUN_00cca200  size=113  [run]
void __fastcall FUN_00cca200(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00df7c00(8);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x508);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x20) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = 3;
    *(uint *)(param_1 + 0xc) = (*(int *)(param_1 + 0x508) != 0xfff) - 1;
    *(undefined4 *)(param_1 + 0x510) = DAT_01dc2cd8;
    *(undefined4 *)(param_1 + 0x504) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 4;
  }
  return;
}

// 00CCA280  FUN_00cca280  size=90  [run]
void __fastcall FUN_00cca280(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}

// 00CCA2E0  FUN_00cca2e0  size=176  [run]
void FUN_00cca2e0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbd) = 0;
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x18));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x20));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x28));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 8) = 0xfff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

