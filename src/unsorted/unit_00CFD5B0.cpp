// src/unsorted/unit_00CFD5B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFD5B0..00CFD730, 3 functions

#include "types.h"

// 00CFD5B0  FUN_00cfd5b0  size=181  [run]
undefined4 __thiscall FUN_00cfd5b0(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_30;
  int local_28 [2];
  undefined1 local_20 [32];
  
  if (param_3 != (void *)0x0) {
    local_30 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      piVar2 = *(int **)(param_1 + 0x34);
      if (piVar2 != piVar2 + *(int *)(param_1 + 0x3c) * 10) {
        do {
          piVar3 = piVar2;
          piVar4 = local_28;
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          if (local_28[0] == param_2) {
            FID_conflict__memcpy(param_3,local_20,0x20);
            local_30 = 1;
          }
          piVar2 = piVar2 + 10;
        } while (piVar2 != (int *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 0x28));
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return local_30;
  }
  return 0;
}

// 00CFD670  FUN_00cfd670  size=181  [run]
undefined4 __thiscall FUN_00cfd670(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_30;
  int local_28 [2];
  undefined1 local_20 [32];
  
  if (param_3 != (void *)0x0) {
    local_30 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      piVar2 = *(int **)(param_1 + 0x34);
      if (piVar2 != piVar2 + *(int *)(param_1 + 0x3c) * 10) {
        do {
          piVar3 = piVar2;
          piVar4 = local_28;
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          if (local_28[1] == param_2) {
            FID_conflict__memcpy(param_3,local_20,0x20);
            local_30 = 1;
          }
          piVar2 = piVar2 + 10;
        } while (piVar2 != (int *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 0x28));
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return local_30;
  }
  return 0;
}

// 00CFD730  FUN_00cfd730  size=139  [run]
undefined4 __thiscall FUN_00cfd730(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  int local_28 [10];
  
  local_2c = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  piVar2 = *(int **)(param_1 + 0x34);
  uVar6 = 0;
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x3c) * 10) {
    piVar1 = piVar2 + *(int *)(param_1 + 0x3c) * 10;
    do {
      piVar4 = piVar2;
      piVar5 = local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      if (local_28[1] == param_2) {
        local_2c = 1;
        uVar6 = local_2c;
        break;
      }
      piVar2 = piVar2 + 10;
      uVar6 = local_2c;
    } while (piVar2 != piVar1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar6;
}

