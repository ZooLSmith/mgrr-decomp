// src/unsorted/unit_00FA9F30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA9F30..00FAA050, 3 functions

#include "mgrr.h"

// 00FA9F30  FUN_00fa9f30  size=65  [run]
void __fastcall FUN_00fa9f30(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00FA9F80  FUN_00fa9f80  size=92  [run]
undefined4 __thiscall FUN_00fa9f80(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x30 + 0x30,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x30 + iVar1;
  FUN_00fa99f0();
  return 1;
}

// 00FAA050  FUN_00faa050  size=243  [run]
void __thiscall FUN_00faa050(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((param_2 < *(int **)(param_1 + 0x30)) || (*(int **)(param_1 + 0x34) <= param_2)) {
    if (param_2 != (int *)0x0) {
      if (*param_2 != 0) {
        FUN_00fa8fa0(*param_2);
        *param_2 = 0;
      }
      if (param_2[1] != 0) {
        FUN_00fa8fa0(param_2[1]);
        param_2[1] = 0;
      }
      FUN_00dd4920(param_2);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    uVar2 = (uint)((int)param_2 - (int)*(int **)(param_1 + 0x30)) / 0x18;
    if (*param_2 != 0) {
      FUN_00fa8fa0(*param_2);
      *param_2 = 0;
    }
    if (param_2[1] != 0) {
      FUN_00fa8fa0(param_2[1]);
      param_2[1] = 0;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0x38) + (uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if (*(int *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00faa0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}

