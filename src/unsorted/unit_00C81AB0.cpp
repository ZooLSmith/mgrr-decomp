// src/unsorted/unit_00C81AB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81AB0..00C81E90, 13 functions

#include "mgrr.h"

// 00C81AB0  FUN_00c81ab0  size=127  [run]
undefined4 __thiscall FUN_00c81ab0(int param_1,int param_2)

{
  void *_Dst;
  uint uVar1;
  
  uVar1 = param_2 + 0x1fU >> 5;
  _Dst = (void *)FUN_00dd3580(uVar1 * 4,&DAT_01b7bcf0);
  *(void **)(param_1 + 8) = _Dst;
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,uVar1 * 4);
    *(uint *)(param_1 + 0xc) = uVar1;
    FUN_00dd7240();
    return 1;
  }
  FUN_00dd5650(&DAT_016ac274);
  FUN_00dd7240();
  return 0;
}

// 00C81B30  FUN_00c81b30  size=71  [run]
void __thiscall FUN_00c81b30(int param_1,uint param_2)

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

// 00C81B80  FUN_00c81b80  size=73  [run]
void __thiscall FUN_00c81b80(int param_1,uint param_2)

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

// 00C81BD0  FUN_00c81bd0  size=131  [run]
void __thiscall FUN_00c81bd0(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)param_2 & 0x1f));
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)param_2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

// 00C81C60  FUN_00c81c60  size=38  [run]
bool __thiscall FUN_00c81c60(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4) &
         0x80000000U >> ((byte)param_2 & 0x1f)) != 0;
}

// 00C81D30  FUN_00c81d30  size=35  [run]
void __fastcall FUN_00c81d30(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C81D90  FUN_00c81d90  size=8  [run]
void FUN_00c81d90(void)

{
  FUN_00c81ab0(0x5b);
  return;
}

// 00C81DA0  FUN_00c81da0  size=38  [run]
bool __thiscall FUN_00c81da0(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4) &
         0x80000000U >> ((byte)param_2 & 0x1f)) != 0;
}

// 00C81DD0  FUN_00c81dd0  size=38  [run]
bool __thiscall FUN_00c81dd0(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4) &
         0x80000000U >> ((byte)param_2 & 0x1f)) != 0;
}

// 00C81E00  FUN_00c81e00  size=37  [run]
bool __thiscall FUN_00c81e00(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4) &
         0x80000000U >> ((byte)param_2 & 0x1f)) == 0;
}

// 00C81E30  thunk_FUN_00c81bd0  size=5  [run]
void __thiscall thunk_FUN_00c81bd0(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)param_2 & 0x1f));
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(*(int *)(param_1 + 8) + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)param_2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

// 00C81E40  FUN_00c81e40  size=71  [run]
void __thiscall FUN_00c81e40(int param_1,uint param_2)

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

// 00C81E90  FUN_00c81e90  size=73  [run]
void __thiscall FUN_00c81e90(int param_1,uint param_2)

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

