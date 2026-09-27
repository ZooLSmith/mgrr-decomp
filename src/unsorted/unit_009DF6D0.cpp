// src/unsorted/unit_009DF6D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DF6D0..009DF830, 3 functions

#include "mgrr.h"

// 009DF6D0  FUN_009df6d0  size=102  [run]
undefined8 __fastcall FUN_009df6d0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  do {
    uVar3 = (uint)*param_1;
    uVar4 = 0;
    LOCK();
    uVar1 = *param_1;
    uVar2 = (ulonglong)uVar3;
    if (uVar2 == uVar1) {
      *param_1 = (ulonglong)(uVar3 + 1);
    }
    else {
      uVar4 = (undefined4)(uVar1 >> 0x20);
      uVar3 = (uint)uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return CONCAT44(uVar4,uVar3);
}

// 009DF740  FUN_009df740  size=126  [run]
void __fastcall FUN_009df740(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (int)*param_1;
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  while( true ) {
    if (iVar2 < 1) {
      return;
    }
    LOCK();
    bVar3 = CONCAT44(uVar1,iVar2) == *param_1;
    if (bVar3) {
      *param_1 = CONCAT44(uVar1,iVar2 + -1);
    }
    UNLOCK();
    if (bVar3) break;
    iVar2 = (int)*param_1;
    uVar1 = *(undefined4 *)((int)param_1 + 4);
  }
  return;
}

// 009DF830  FUN_009df830  size=82  [run]
void FUN_009df830(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (DAT_01b788a8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b78890);
  }
  uVar2 = 0x80000000 >> ((byte)param_1 & 0x1f);
  puVar1 = &DAT_01b78874 + (param_1 >> 5);
  if (param_2 == 0) {
    *puVar1 = *puVar1 & ~uVar2;
  }
  else {
    *puVar1 = *puVar1 | uVar2;
  }
  if (DAT_01b788a8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b78890);
  }
  return;
}

