// src/unsorted/unit_00AC1990.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC1990..00AC1A30, 3 functions

#include "types.h"

// 00AC1990  FUN_00ac1990  size=34  [run]
void __fastcall FUN_00ac1990(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  return;
}

// 00AC19F0  FUN_00ac19f0  size=51  [run]
bool __fastcall FUN_00ac19f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return iVar2 == 0;
}

// 00AC1A30  FUN_00ac1a30  size=55  [run]
void __fastcall FUN_00ac1a30(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  return;
}

