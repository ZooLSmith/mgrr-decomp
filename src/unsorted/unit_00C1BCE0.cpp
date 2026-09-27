// src/unsorted/unit_00C1BCE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1BCE0..00C1C0D0, 11 functions

#include "types.h"

// 00C1BCE0  FUN_00c1bce0  size=33  [run]
void FUN_00c1bce0(void)

{
  if (DAT_01bea188 != (int *)0x0) {
    (**(code **)(*DAT_01bea188 + 0x94))(1);
    DAT_01bea188 = (int *)0x0;
  }
  return;
}

// 00C1BD10  FUN_00c1bd10  size=6  [run]
undefined4 FUN_00c1bd10(void)

{
  return DAT_01bea188;
}

// 00C1BD80  FUN_00c1bd80  size=13  [run]
bool __fastcall FUN_00c1bd80(uint *param_1)

{
  return (*param_1 & 0xf) != 0;
}

// 00C1BDB0  FUN_00c1bdb0  size=19  [run]
void __thiscall FUN_00c1bdb0(uint *param_1,int param_2)

{
  if (param_2 == 1) {
    *param_1 = *param_1 | 2;
    return;
  }
  *param_1 = *param_1 & 0xfffffffd;
  return;
}

// 00C1BDD0  FUN_00c1bdd0  size=14  [run]
void __fastcall FUN_00c1bdd0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00C1BE00  FUN_00c1be00  size=41  [run]
undefined4 FUN_00c1be00(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_01d64450)[uVar1 * 2] == param_1) {
      return *(undefined4 *)(&DAT_01d64454 + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return 60000;
}

// 00C1BFF0  FUN_00c1bff0  size=64  [run]
undefined4 __thiscall FUN_00c1bff0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x800)) {
    piVar3 = (int *)(param_1 + 0x10);
    while (*piVar3 != param_2) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 8;
      if (*(int *)(param_1 + 0x800) <= iVar2) {
        return uVar1;
      }
    }
    *(undefined4 *)(iVar2 * 0x20 + 0x18 + param_1) = param_3;
    uVar1 = 1;
  }
  return uVar1;
}

// 00C1C060  FUN_00c1c060  size=65  [run]
void __fastcall FUN_00c1c060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x40;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    puVar1[4] = 0;
    puVar1[-2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-1] = 0;
    puVar1[2] = 0xffffffff;
    *puVar1 = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}

// 00C1C0B0  thunk_FUN_00c1c060  size=5  [run]
void __fastcall thunk_FUN_00c1c060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x40;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    puVar1[4] = 0;
    puVar1[-2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-1] = 0;
    puVar1[2] = 0xffffffff;
    *puVar1 = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}

// 00C1C0C0  FUN_00c1c0c0  size=3  [run]
void FUN_00c1c0c0(void)

{
  return;
}

// 00C1C0D0  FUN_00c1c0d0  size=85  [run]
undefined4 __thiscall FUN_00c1c0d0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x800)) {
    piVar4 = (int *)(param_1 + 0x10);
    while (*piVar4 != param_2) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 8;
      if (*(int *)(param_1 + 0x800) <= iVar3) {
        return uVar2;
      }
    }
    param_1 = iVar3 * 0x20 + param_1;
    if (param_3 == 1) {
      puVar1 = (uint *)(param_1 + 0x1c);
      *puVar1 = *puVar1 | 1;
      return 1;
    }
    puVar1 = (uint *)(param_1 + 0x1c);
    *puVar1 = *puVar1 & 0xfffffffe;
    uVar2 = 1;
  }
  return uVar2;
}

