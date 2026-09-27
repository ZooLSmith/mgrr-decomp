// src/unsorted/unit_00C820C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C820C0..00C82550, 9 functions

#include "types.h"

// 00C820C0  FUN_00c820c0  size=105  [run]
undefined4 __thiscall FUN_00c820c0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((&DAT_018abcf8)[uVar2] == param_2) && (*(int *)(param_1 + 0x28) != 0)) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      puVar1 = (uint *)(*(int *)(param_1 + 8) + (uVar2 >> 5) * 4);
      *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x5b);
  return 1;
}

// 00C82130  FUN_00c82130  size=35  [run]
void __fastcall FUN_00c82130(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C82190  FUN_00c82190  size=164  [run]
undefined4 __thiscall FUN_00c82190(int param_1,int param_2,undefined4 param_3)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2 + 0x1fU >> 5;
  if (4 < uVar1) {
    FUN_00dd5650(&DAT_016ac314,param_3);
    return 0;
  }
  _Dst = (void *)FUN_00dd3580(uVar1 * 4,&DAT_01b7bcf0);
  *(void **)(param_1 + 8) = _Dst;
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,uVar1 * 4);
    *(uint *)(param_1 + 0xc) = uVar1;
    FUN_00dd7240();
    return 1;
  }
  FUN_00dd5650(&DAT_016ac300,param_3);
  FUN_00dd7240();
  return 0;
}

// 00C82240  FUN_00c82240  size=71  [run]
void __thiscall FUN_00c82240(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)param_2 & 0x1f);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00C82290  FUN_00c82290  size=73  [run]
void __thiscall FUN_00c82290(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)param_2 & 0x1f));
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00C82370  FUN_00c82370  size=38  [run]
bool __thiscall FUN_00c82370(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4) &
         0x80000000U >> ((byte)param_2 & 0x1f)) != 0;
}

// 00C82440  FUN_00c82440  size=35  [run]
void __fastcall FUN_00c82440(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C824A0  FUN_00c824a0  size=13  [run]
void FUN_00c824a0(void)

{
  FUN_00c82190(0x18,&DAT_016ac34c);
  return;
}

// 00C82550  FUN_00c82550  size=71  [run]
void __thiscall FUN_00c82550(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)param_2 & 0x1f);
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

