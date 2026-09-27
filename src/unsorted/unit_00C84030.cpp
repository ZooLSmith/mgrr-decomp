// src/unsorted/unit_00C84030.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C84030..00C84470, 5 functions

#include "mgrr.h"

// 00C84030  FUN_00c84030  size=29  [run]
undefined4 __fastcall FUN_00c84030(int param_1)

{
  FUN_00c82ce0(10,*(undefined4 *)(param_1 + 0x38));
  FUN_00dd7240();
  return 1;
}

// 00C840A0  FUN_00c840a0  size=99  [run]
void __fastcall FUN_00c840a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (0 < iVar1) {
      iVar1 = **(int **)(param_1 + 4);
      iVar2 = *(int *)(iVar1 + 0x34);
      if (iVar2 != 0) {
        FUN_00dd4920(iVar2);
      }
      FUN_00dd4920(iVar1);
      iVar1 = *(int *)(param_1 + 0xc);
      if (0 < iVar1) {
        iVar2 = 0;
        if (iVar1 != 1 && -1 < iVar1 + -1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 4);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      iVar1 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}

// 00C84110  FUN_00c84110  size=121  [run]
void __fastcall FUN_00c84110(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  do {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = 0;
    if (iVar1 < 1) {
      return;
    }
    piVar3 = *(int **)(param_1 + 4);
    while (*(int *)(*piVar3 + 0x2c) != 2) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    if (iVar4 < iVar1) {
      iVar1 = (*(int **)(param_1 + 4))[iVar4];
      iVar2 = *(int *)(iVar1 + 0x34);
      if (iVar2 != 0) {
        FUN_00dd4920(iVar2);
      }
      FUN_00dd4920(iVar1);
      if (iVar4 < *(int *)(param_1 + 0xc)) {
        if (iVar4 < *(int *)(param_1 + 0xc) + -1) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0xc) + -1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
    }
  } while( true );
}

// 00C84190  FUN_00c84190  size=51  [run]
int __thiscall FUN_00c84190(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -1;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar1 = *(int **)(param_1 + 4);
    iVar2 = 0;
    while (param_2 != *(int *)(*piVar1 + 0x24)) {
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)(param_1 + 0xc) <= iVar2) {
        return -1;
      }
    }
  }
  return iVar2;
}

// 00C84470  FUN_00c84470  size=21  [run]
void FUN_00c84470(void)

{
  FUN_00a6e770(0xfffe);
  FUN_00a6e710();
  return;
}

