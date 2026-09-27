// src/unsorted/unit_00C82840.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C82840..00C82950, 3 functions

#include "types.h"

// 00C82840  FUN_00c82840  size=35  [run]
void __fastcall FUN_00c82840(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00dd7270();
  return;
}

// 00C828A0  FUN_00c828a0  size=13  [run]
void FUN_00c828a0(void)

{
  FUN_00c82190(0x16,&DAT_016ac3c0);
  return;
}

// 00C82950  FUN_00c82950  size=71  [run]
void __thiscall FUN_00c82950(int param_1,uint param_2)

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

