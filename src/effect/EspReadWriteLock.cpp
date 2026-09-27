// src/effect/EspReadWriteLock.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAABC0..00EAACE0, 3 functions

#include "mgrr.h"

// 00EAABC0  EspReadWriteLock::enterWrite  size=131  [class]
undefined4 __fastcall EspReadWriteLock::enterWrite(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(int *)((int)param_1 + 4) < 0) {
    FUN_00dd5650(&DAT_016d2aa0,*(undefined4 *)((int)param_1 + 4));
  }
  if ((int)param_1[4] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  }
  do {
    uVar2 = 0;
    LOCK();
    lVar1 = *param_1;
    bVar3 = (ulonglong)*(uint *)((int)param_1 + 4) << 0x20 == lVar1;
    if (bVar3) {
      *param_1 = (ulonglong)(*(uint *)((int)param_1 + 4) + 1) << 0x20;
    }
    else {
      uVar2 = (undefined4)lVar1;
    }
    UNLOCK();
  } while (!bVar3);
  return uVar2;
}

// 00EAAC50  FUN_00eaac50  size=139  [callgraph]
void __fastcall FUN_00eaac50(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = (undefined4)*param_1;
  iVar1 = *(int *)((int)param_1 + 4);
  while (0 < iVar1) {
    LOCK();
    bVar3 = CONCAT44(iVar1,uVar2) == *param_1;
    if (bVar3) {
      *param_1 = CONCAT44(iVar1 + -1,uVar2);
    }
    UNLOCK();
    if (bVar3) break;
    uVar2 = (undefined4)*param_1;
    iVar1 = *(int *)((int)param_1 + 4);
  }
  if ((int)param_1[4] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  }
  return;
}

// 00EAACE0  FUN_00eaace0  size=20  [callgraph]
undefined4 * __thiscall FUN_00eaace0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  EspReadWriteLock::enterWrite();
  return param_1;
}

