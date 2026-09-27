// src/unsorted/unit_009059E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009059E0..00905B30, 4 functions

#include "types.h"

// 009059E0  FUN_009059e0  size=148  [run]
void __fastcall FUN_009059e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_1[5] != '\0') {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x1d])) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1[0x1c] + 0x50 + iVar4);
      if (DAT_01b35f90 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
      }
      if ((((*(char *)(iVar1 + 0x18) == '\x01') &&
           (iVar3 = *(char *)(iVar1 + 0x10) + iVar1, iVar3 != 0)) ||
          ((*(char *)(iVar1 + 0x18) == '\x02' &&
           (iVar3 = *(char *)(iVar1 + 0x10) + iVar1, iVar3 != 0)))) && (*(short *)(iVar3 + 6) != 0))
      {
        FUN_010060a0();
      }
      if (DAT_01b35f90 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x60;
    } while (iVar2 < param_1[0x1d]);
  }
                    /* WARNING: Could not recover jumptable at 0x00905a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00905A80  FUN_00905a80  size=15  [run]
void __fastcall FUN_00905a80(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
                    /* WARNING: Could not recover jumptable at 0x00905a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x30) + 8))();
  return;
}

// 00905A90  FUN_00905a90  size=148  [run]
void __fastcall FUN_00905a90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_1[5] != '\0') {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x11])) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1[0x10] + 0x28 + iVar4);
      if (DAT_01b35f90 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
      }
      if ((((*(char *)(iVar1 + 0x18) == '\x01') &&
           (iVar3 = *(char *)(iVar1 + 0x10) + iVar1, iVar3 != 0)) ||
          ((*(char *)(iVar1 + 0x18) == '\x02' &&
           (iVar3 = *(char *)(iVar1 + 0x10) + iVar1, iVar3 != 0)))) && (*(short *)(iVar3 + 6) != 0))
      {
        FUN_010060a0();
      }
      if (DAT_01b35f90 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < param_1[0x11]);
  }
                    /* WARNING: Could not recover jumptable at 0x00905b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00905B30  FUN_00905b30  size=189  [run]
void __thiscall FUN_00905b30(int *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fStack_24;
  
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(param_1 + 0x18);
  }
  if (param_3 != (float *)0x0) {
    iVar6 = (**(code **)(*param_1 + 0xc))();
    if (iVar6 != 0) {
      iVar6 = param_1[0x10];
      fVar3 = *(float *)(iVar6 + 0xd0);
      fVar4 = *(float *)(iVar6 + 0xd4);
      fVar5 = *(float *)(iVar6 + 0xd8);
      fVar1 = (float)param_1[0xd];
      fVar2 = (float)param_1[0xe];
      fStack_24 = *(float *)(param_1[0x1c] + 0x1c);
      if (fStack_24 == 0.0) {
        fStack_24 = 0.001;
      }
      *param_3 = (((float)param_1[0xc] + fVar3) - fVar3) * fStack_24 + fVar3;
      param_3[1] = ((fVar1 + fVar4) - fVar4) * fStack_24 + fVar4;
      param_3[2] = ((fVar2 + fVar5) - fVar5) * fStack_24 + fVar5;
    }
  }
  return;
}

