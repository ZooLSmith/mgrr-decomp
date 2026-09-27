// src/unsorted/unit_00C5BBB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C5BBB0..00C5BC40, 2 functions

#include "types.h"

// 00C5BBB0  FUN_00c5bbb0  size=126  [run]
void __thiscall FUN_00c5bbb0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  iVar2 = FUN_00c5af90(param_2);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  puVar1 = puVar3 + *(int *)(iVar2 + 0xc);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    FUN_00c5b080(*puVar3,param_2 == 0x4000);
  }
  if (*(int *)(param_1 + 0x178) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c5bc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
    return;
  }
  return;
}

// 00C5BC40  FUN_00c5bc40  size=159  [run]
void __thiscall FUN_00c5bc40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  iVar2 = *(int *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0xf8) * 0x90 + iVar2;
  for (; iVar2 != iVar3; iVar2 = iVar2 + 0x90) {
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) &&
        (((param_3 != 0x2000 && (param_3 != 0x1000)) || (*(int *)(iVar2 + 4) == param_3)))) &&
       ((param_2 == 0 || (param_2 == iVar1)))) {
      FUN_00c5b080(*(undefined4 *)(iVar2 + 0x8c),0);
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  return;
}

