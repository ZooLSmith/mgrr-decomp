// src/unsorted/unit_00D55A20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D55A20..00D55AA0, 2 functions

#include "mgrr.h"

// 00D55A20  FUN_00d55a20  size=117  [run]
void __fastcall FUN_00d55a20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00c81c60(0xb);
  if (iVar1 == 1) {
    if ((*(int *)(param_1 + 8) != 0) &&
       (piVar3 = *(int **)(param_1 + 4), piVar3 != piVar3 + *(int *)(param_1 + 8))) {
      do {
        iVar1 = *piVar3;
        if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x40) != 0 && (iVar2 = FUN_00a7c7e0(), iVar2 == 0))))
        {
          *(undefined4 *)(iVar1 + 0x40) = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
    }
    DAT_01dc075c = *(undefined4 *)(param_1 + 0xa4);
    DAT_01dc0758 = *(undefined4 *)(param_1 + 0xa8);
    DAT_01dc0754 = 1;
  }
  return;
}

// 00D55AA0  FUN_00d55aa0  size=373  [run]
void __thiscall FUN_00d55aa0(int *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[0x34] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e));
  }
  piVar3 = param_4;
  piVar4 = (int *)param_1[1];
  piVar6 = piVar4 + param_1[2];
  bVar2 = false;
  if (piVar4 != piVar6) {
    do {
      piVar1 = (int *)*piVar4;
      if ((piVar1 == (int *)0x0) || ((*piVar1 == param_3 && ((int *)piVar1[1] == param_4)))) {
        bVar2 = true;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar6);
    if (bVar2) goto LAB_00d55bfc;
  }
  param_4 = (int *)FUN_00dd3500(0x50,&DAT_01b7bd48);
  if (param_4 == (int *)0x0) {
    param_4 = (int *)0x0;
  }
  else {
    param_4[2] = 0;
    param_4[5] = 0;
    *(undefined1 *)((int)param_4 + 0xe) = 0;
    *(undefined2 *)(param_4 + 3) = 0;
    param_4[4] = 0x41200000;
    param_4[0x10] = 0;
    *param_4 = -1;
    param_4[1] = -1;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0x3f800000;
    param_4[0xf] = 0x3f800000;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
  }
  iVar5 = FUN_00a7c8a0();
  param_4[2] = *(int *)(iVar5 + 0x4a0);
  iVar5 = FUN_00a7c8a0();
  param_4[6] = *(int *)(iVar5 + 0x4b0);
  *param_4 = param_3;
  param_4[1] = (int)piVar3;
  param_4[4] = param_1[0x24];
  piVar6 = (int *)FUN_00a7c8b0();
  param_4[8] = *piVar6;
  param_4[9] = piVar6[1];
  param_4[10] = piVar6[2];
  param_4[0xb] = piVar6[3];
  piVar6 = (int *)FUN_00a7c8d0();
  param_4[0xc] = *piVar6;
  param_4[0xd] = piVar6[1];
  param_4[0xe] = piVar6[2];
  param_4[0xf] = piVar6[3];
  param_4[0x10] = param_2;
  (**(code **)(*param_1 + 8))(&param_4);
LAB_00d55bfc:
  if (param_1[0x34] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e));
  }
  return;
}

