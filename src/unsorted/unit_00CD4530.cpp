// src/unsorted/unit_00CD4530.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD4530..00CD4630, 2 functions

#include "mgrr.h"

// 00CD4530  FUN_00cd4530  size=242  [run]
void FUN_00cd4530(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x4b0) == 0x31013)) &&
     (iVar1 = *(int *)(param_1 + 0x4f0), iVar1 != 0)) {
    if (DAT_01dc4778 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dc4760);
    }
    uVar4 = 0xffffffff;
    uVar6 = 0;
    do {
      iVar2 = FUN_00a81330();
      if (iVar1 == iVar2) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
    uVar6 = 0;
    do {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        if (((&DAT_01dbffb0)[uVar6] == 0) && (uVar4 == 0xffffffff)) {
          uVar4 = uVar6;
        }
      }
      else {
        iVar2 = FUN_00a81330();
        uVar5 = uVar6;
        if (iVar2 == iVar1) break;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar4;
    } while (uVar6 < 0x20);
    if (uVar5 != 0xffffffff) {
      FUN_00a7c970(iVar1);
      (&DAT_01dbffb0)[uVar5] = 1;
    }
    if (DAT_01dc4778 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dc4760);
    }
  }
  return;
}

// 00CD4630  FUN_00cd4630  size=105  [run]
void FUN_00cd4630(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x4f0), iVar1 != 0)) {
    if (DAT_01dc4778 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dc4760);
    }
    uVar3 = 0;
    do {
      iVar2 = FUN_00a81330();
      if (iVar1 == iVar2) {
        (&DAT_01dbffb0)[uVar3] = 0;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
    if (DAT_01dc4778 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dc4760);
    }
  }
  return;
}

