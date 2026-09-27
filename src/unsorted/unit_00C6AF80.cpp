// src/unsorted/unit_00C6AF80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C6AF80..00C6B900, 8 functions

#include "types.h"

// 00C6AF80  FUN_00c6af80  size=43  [run]
void __fastcall FUN_00c6af80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C6AFB0  FUN_00c6afb0  size=43  [run]
void __fastcall FUN_00c6afb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C6B0C0  FUN_00c6b0c0  size=46  [run]
undefined1 __thiscall FUN_00c6b0c0(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[1] == '\0') {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[2];
      iVar3 = (**(code **)(*piVar1 + 4))();
      if (param_2 <= (uint)(iVar3 - iVar2)) goto LAB_00c6b0e7;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_00c6b0e7:
  return (char)param_1[1];
}

// 00C6B630  FUN_00c6b630  size=37  [run]
void __fastcall FUN_00c6b630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C6B6A0  FUN_00c6b6a0  size=90  [run]
int FUN_00c6b6a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) / 0x18;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(int *)(*(int *)(param_1 + iVar1 * 0x18) + 0xc) <= *(int *)(*param_3 + 0xc)) {
        param_1 = param_1 + iVar1 * 0x18 + 0x18;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

// 00C6B7C0  FUN_00c6b7c0  size=56  [run]
bool __fastcall FUN_00c6b7c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0xa8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  }
  return iVar1 == 2;
}

// 00C6B800  FUN_00c6b800  size=56  [run]
bool __fastcall FUN_00c6b800(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0xa8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  }
  return iVar1 == 3;
}

// 00C6B900  FUN_00c6b900  size=161  [run]
float * __thiscall FUN_00c6b900(int param_1,float *param_2,short param_3)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x30);
  piVar1 = piVar4 + *(int *)(param_1 + 0x34) * 6;
  while( true ) {
    if (piVar4 == piVar1) {
      return (float *)0x0;
    }
    if ((((*(uint *)(param_1 + 0x118) & 1 << ((byte)*(undefined2 *)(*piVar4 + 0x1a) & 0x1f)) != 0)
        && (((param_3 < 0 || (*(short *)(*piVar4 + 0x1c) == param_3)) &&
            (pfVar2 = (float *)*piVar4,
            fVar3 = SQRT((pfVar2[2] - param_2[2]) * (pfVar2[2] - param_2[2]) +
                         (pfVar2[1] - param_2[1]) * (pfVar2[1] - param_2[1]) +
                         (*pfVar2 - *param_2) * (*pfVar2 - *param_2)),
            fVar3 < pfVar2[4] != (fVar3 == pfVar2[4]))))) && (ABS(pfVar2[1] - param_2[1]) < 1.0))
    break;
    piVar4 = piVar4 + 6;
  }
  return pfVar2;
}

