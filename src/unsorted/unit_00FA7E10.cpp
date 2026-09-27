// src/unsorted/unit_00FA7E10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA7E10..00FA88E0, 12 functions

#include "types.h"

// 00FA7E10  FUN_00fa7e10  size=107  [run]
void __fastcall FUN_00fa7e10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_00fa6e20(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20));
  }
  else {
    iVar1 = FUN_00fa6d70(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20));
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(param_1 + 0x2c);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0xac) = 0;
  return;
}

// 00FA7E80  FUN_00fa7e80  size=107  [run]
void __fastcall FUN_00fa7e80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_00fa7540(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  else {
    iVar1 = FUN_00fa7490(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 8);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(param_1 + 0x30);
  return;
}

// 00FA7EF0  FUN_00fa7ef0  size=123  [run]
void __fastcall FUN_00fa7ef0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_00fa77d0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28));
  }
  else {
    iVar1 = FUN_00fa76f0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28));
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(param_1 + 0x2c);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  return;
}

// 00FA7F70  FUN_00fa7f70  size=99  [run]
void __fastcall FUN_00fa7f70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_00fa7b90(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x20));
  }
  else {
    iVar1 = FUN_00fa7ae0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x20));
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(param_1 + 4);
  puVar3 = (undefined4 *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar1 + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 8);
  return;
}

// 00FA8570  FUN_00fa8570  size=70  [run]
void __thiscall FUN_00fa8570(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00fa85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00FA85C0  FUN_00fa85c0  size=155  [run]
longlong __fastcall FUN_00fa85c0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00FA8720  FUN_00fa8720  size=52  [run]
void __fastcall FUN_00fa8720(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00dd7270();
  return;
}

// 00FA8760  FUN_00fa8760  size=52  [run]
void __fastcall FUN_00fa8760(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00dd7270();
  return;
}

// 00FA87A0  FUN_00fa87a0  size=43  [run]
int __thiscall FUN_00fa87a0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00fa8fa0(*(int *)(param_1 + 4));
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FA87E0  FUN_00fa87e0  size=71  [run]
void __thiscall FUN_00fa87e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x18) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00fa8821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00FA8830  FUN_00fa8830  size=155  [run]
longlong __fastcall FUN_00fa8830(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x18));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00FA88E0  FUN_00fa88e0  size=52  [run]
void __fastcall FUN_00fa88e0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00dd7270();
  return;
}

