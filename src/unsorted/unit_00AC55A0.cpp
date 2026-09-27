// src/unsorted/unit_00AC55A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC55A0..00AC5660, 4 functions

#include "mgrr.h"

// 00AC55A0  FUN_00ac55a0  size=28  [run]
void __fastcall FUN_00ac55a0(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ac55b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))();
    return;
  }
  return;
}

// 00AC55C0  thunk_FUN_00a8c480  size=5  [run]
void __fastcall thunk_FUN_00a8c480(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3c70();
    return;
  }
  return;
}

// 00AC55E0  FUN_00ac55e0  size=71  [run]
int __fastcall FUN_00ac55e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa00) = 0;
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar1 = 0x10;
  do {
    iVar2 = iVar1;
    FUN_00a7c950();
    iVar1 = iVar2 + -1;
  } while (iVar1 != 0);
  return iVar2;
}

// 00AC5660  FUN_00ac5660  size=50  [run]
void FUN_00ac5660(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x10;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      FUN_00a7c950();
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

