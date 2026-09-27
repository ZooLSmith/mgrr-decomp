// src/unsorted/unit_00C4CF20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C4CF20..00C4D1A0, 5 functions

#include "mgrr.h"

// 00C4CF20  FUN_00c4cf20  size=65  [run]
undefined4 FUN_00c4cf20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 4);
  iVar1 = iVar3 + *(int *)(param_2 + 0xc) * 4;
  while( true ) {
    if (iVar3 == iVar1) {
      return 0;
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 == param_1)) break;
    iVar3 = iVar3 + 4;
  }
  return 1;
}

// 00C4CF70  FUN_00c4cf70  size=130  [run]
void __fastcall FUN_00c4cf70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + 0x60;
  iVar4 = 0x100;
  do {
    RayCastManager::getWork(iVar3);
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar3 = *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x3c);
  for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar3 * 0x70 + iVar1; iVar4 = iVar4 + 0x70) {
    iVar2 = *(int *)(iVar4 + 0x60);
    if (iVar2 != -1) {
      FUN_00a7c950();
      *(undefined2 *)(iVar4 + 4) = 0xffff;
      *(undefined2 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      if (*(int *)(iVar4 + 0x60) != -1) {
        RayCastManager::getWork(param_1 + 0x60 + iVar2 * 4);
      }
      *(undefined4 *)(iVar4 + 0x60) = 0xffffffff;
    }
  }
  return;
}

// 00C4D000  FUN_00c4d000  size=117  [run]
void __thiscall FUN_00c4d000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar1 * 0x70 + iVar2; iVar4 = iVar4 + 0x70) {
      if ((((*(byte *)(iVar4 + 8) & 1) != 0) && (iVar3 = FUN_00a81330(), iVar3 == param_2)) &&
         (*(int *)(iVar4 + 0x60) != -1)) {
        FUN_00c14fc0(param_1 + 0x60 + *(int *)(iVar4 + 0x60) * 4);
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D100  FUN_00c4d100  size=160  [run]
void __thiscall FUN_00c4d100(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar1 * 0x70 + iVar2; iVar4 = iVar4 + 0x70) {
      if ((*(int *)(iVar4 + 0x40) == param_2) && (iVar3 = *(int *)(iVar4 + 0x60), iVar3 != -1)) {
        FUN_00a7c950();
        *(undefined2 *)(iVar4 + 4) = 0xffff;
        *(undefined2 *)(iVar4 + 0x38) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        if (*(int *)(iVar4 + 0x60) != -1) {
          RayCastManager::getWork(param_1 + 0x60 + iVar3 * 4);
        }
        *(undefined4 *)(iVar4 + 0x60) = 0xffffffff;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 00C4D1A0  FUN_00c4d1a0  size=104  [run]
void __thiscall FUN_00c4d1a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x3c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != iVar1 * 0x70 + iVar2; iVar4 = iVar4 + 0x70) {
      if (((*(byte *)(iVar4 + 8) & 1) != 0) && (iVar3 = FUN_00a81330(), iVar3 == param_2)) {
        *(undefined4 *)(iVar4 + 0x34) = param_3;
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

