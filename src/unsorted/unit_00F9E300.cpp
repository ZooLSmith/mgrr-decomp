// src/unsorted/unit_00F9E300.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9E300..00F9E370, 2 functions

#include "mgrr.h"

// 00F9E300  FUN_00f9e300  size=108  [run]
int __thiscall FUN_00f9e300(int param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x60) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar1 = *(int **)(param_1 + 0x68 + (param_2 % 0x409) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (*(int *)(param_1 + 0x60) != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    iVar2 = *piVar1;
    if (*(uint *)(iVar2 + 0xc) == param_2) break;
    piVar1 = (int *)piVar1[1];
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar2;
}

// 00F9E370  FUN_00f9e370  size=70  [run]
undefined4 FUN_00f9e370(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  uVar1 = FUN_00f9e300(param_1);
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  return uVar1;
}

