// src/unsorted/unit_00949110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949110..009491A0, 5 functions

#include "mgrr.h"

// 00949110  FUN_00949110  size=29  [run]
void __fastcall FUN_00949110(int param_1)

{
  FUN_00948cf0();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  lib::Array<stGimmickInfoData*>::Array<stGimmickInfoData*>();
  return;
}

// 00949130  thunk_FUN_00948fd0  size=5  [run]
void __fastcall thunk_FUN_00948fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar4 * 4);
      if (iVar1 != 0) {
        FUN_00dd4920(iVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (piVar2 != (int *)0x0) {
      LVar3 = InterlockedDecrement(piVar2 + 1);
      if (LVar3 == 0) {
        (**(code **)(*piVar2 + 4))();
        LVar3 = InterlockedDecrement(piVar2 + 2);
        if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00949056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 8))();
          return;
        }
      }
    }
  }
  return;
}

// 00949140  thunk_FUN_00948fd0  size=5  [run]
void __fastcall thunk_FUN_00948fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar4 * 4);
      if (iVar1 != 0) {
        FUN_00dd4920(iVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (piVar2 != (int *)0x0) {
      LVar3 = InterlockedDecrement(piVar2 + 1);
      if (LVar3 == 0) {
        (**(code **)(*piVar2 + 4))();
        LVar3 = InterlockedDecrement(piVar2 + 2);
        if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00949056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 8))();
          return;
        }
      }
    }
  }
  return;
}

// 00949150  FUN_00949150  size=72  [run]
void FUN_00949150(undefined4 param_1)

{
  undefined4 uVar1;
  char local_100 [256];
  
  _sprintf_s(local_100,0x100,"_Gimmick.bxm",param_1);
  uVar1 = FUN_00de4550(local_100,0);
  cXmlBinary::cXmlBinary_75(uVar1);
  return;
}

// 009491A0  thunk_FUN_00948fd0  size=5  [run]
void __fastcall thunk_FUN_00948fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar4 * 4);
      if (iVar1 != 0) {
        FUN_00dd4920(iVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (piVar2 != (int *)0x0) {
      LVar3 = InterlockedDecrement(piVar2 + 1);
      if (LVar3 == 0) {
        (**(code **)(*piVar2 + 4))();
        LVar3 = InterlockedDecrement(piVar2 + 2);
        if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00949056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 8))();
          return;
        }
      }
    }
  }
  return;
}

