// src/unsorted/unit_0093E2B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093E2B0..0093E4A0, 7 functions

#include "mgrr.h"

// 0093E2B0  FUN_0093e2b0  size=38  [run]
void __thiscall FUN_0093e2b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0xbc);
  iVar2 = 0xc;
  do {
    if (puVar1[-0x1a] == param_2) {
      *puVar1 = 1;
    }
    puVar1 = puVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0093E2E0  FUN_0093e2e0  size=71  [run]
void __fastcall FUN_0093e2e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x51c);
      puVar2 = (undefined4 *)(param_1 + 0xbc);
      iVar3 = 0xc;
      do {
        if (puVar2[-0x1a] == iVar1) {
          *puVar2 = 1;
        }
        puVar2 = puVar2 + 0x2c;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

// 0093E330  FUN_0093e330  size=56  [run]
undefined4 __thiscall FUN_0093e330(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  while ((*(int *)((uint)bVar1 * 0xb0 + 0x54 + param_1) != param_2 ||
         (*(int *)((uint)bVar1 * 0xb0 + 0xbc + param_1) == 0))) {
    bVar1 = bVar1 + 1;
    if (0xb < bVar1) {
      return 0;
    }
  }
  return 1;
}

// 0093E370  FUN_0093e370  size=47  [run]
undefined4 FUN_0093e370(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_0093e330(*(undefined4 *)(iVar1 + 0x51c));
      return uVar2;
    }
  }
  return 1;
}

// 0093E3A0  FUN_0093e3a0  size=56  [run]
undefined4 __thiscall FUN_0093e3a0(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*(int *)((uint)bVar1 * 0xb0 + 0x54 + param_1) == param_2) {
      return *(undefined4 *)((uint)bVar1 * 0xb0 + 0xa4 + param_1);
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0xc);
  return 0;
}

// 0093E3F0  FUN_0093e3f0  size=38  [run]
void __thiscall FUN_0093e3f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0xb8);
  iVar2 = 0xc;
  do {
    if (puVar1[-0x19] == param_2) {
      *puVar1 = 1;
    }
    puVar1 = puVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0093E4A0  FUN_0093e4a0  size=32  [run]
int __thiscall FUN_0093e4a0(int param_1,int param_2)

{
  param_1 = param_2 * 0xb0 + param_1;
  if (*(int *)(*(int *)(param_1 + 0x50) + 8) == 0) {
    return 0;
  }
  return param_1 + 0x40;
}

