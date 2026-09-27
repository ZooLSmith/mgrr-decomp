// src/unsorted/unit_00D11A80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D11A80..00D11C90, 5 functions

#include "mgrr.h"

// 00D11A80  FUN_00d11a80  size=148  [run]
void __thiscall FUN_00d11a80(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
    (**(code **)*piVar1)(1);
  }
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar3;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar2;
  }
  *param_2 = iVar3;
  if (*(int **)(param_1 + 0x44) == param_3) {
    *(int *)(param_1 + 0x44) = iVar3;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 4);
  }
  param_3[1] = iVar3;
  param_3[2] = iVar2;
  if (iVar3 != 0) {
    *(int **)(iVar3 + 8) = param_3;
  }
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = param_3;
    *(int **)(param_1 + 0x40) = param_3;
    return;
  }
  *(int **)(param_1 + 0x40) = param_3;
  return;
}

// 00D11B20  FUN_00d11b20  size=73  [run]
void __fastcall FUN_00d11b20(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_4;
  
  piVar3 = *(int **)(param_1 + 0x44);
  local_4 = param_1;
  if (piVar3 != *(int **)(param_1 + 0x48)) {
    do {
      uVar1 = *(uint *)(*piVar3 + 0x24);
      if ((uVar1 & 2) == 0) {
        if ((~uVar1 & 1) == 0) {
          *(uint *)(*piVar3 + 0x24) = uVar1 | 2;
        }
        piVar3 = (int *)piVar3[2];
      }
      else {
        puVar2 = (undefined4 *)FUN_00d11a80(&local_4,piVar3);
        piVar3 = (int *)*puVar2;
      }
    } while (piVar3 != *(int **)(param_1 + 0x48));
  }
  return;
}

// 00D11BB0  FUN_00d11bb0  size=108  [run]
void __fastcall FUN_00d11bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    piVar2 = *(int **)(param_1 + 0x44);
    if (piVar2 != *(int **)(param_1 + 0x48)) {
      do {
        iVar1 = *piVar2;
        if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x28) & 0x20000000) != 0)) &&
           ((*(uint *)(iVar1 + 0x24) & 1) == 0)) {
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        piVar2 = (int *)piVar2[2];
      } while (piVar2 != *(int **)(param_1 + 0x48));
    }
    FUN_00d11b20();
    FUN_00d11b20();
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00D11C20  FUN_00d11c20  size=108  [run]
void __fastcall FUN_00d11c20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    piVar2 = *(int **)(param_1 + 0x44);
    if (piVar2 != *(int **)(param_1 + 0x48)) {
      do {
        iVar1 = *piVar2;
        if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x28) & 0x10000000) != 0)) &&
           ((*(uint *)(iVar1 + 0x24) & 1) == 0)) {
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        piVar2 = (int *)piVar2[2];
      } while (piVar2 != *(int **)(param_1 + 0x48));
    }
    FUN_00d11b20();
    FUN_00d11b20();
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return;
}

// 00D11C90  FUN_00d11c90  size=564  [run]
void __thiscall FUN_00d11c90(int param_1,undefined4 *param_2,ushort *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  param_2[2] = 0;
  *param_2 = 0xffffffff;
  param_2[3] = 0;
  param_2[1] = 0xffffffff;
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined2 *)(param_2 + 0x10) = 0xffff;
  *(undefined2 *)((int)param_2 + 0x42) = 0;
  uVar3 = *param_3;
  uVar4 = (uint)uVar3;
  if ((uVar3 & 0x8000) == 0) {
    if ((uVar3 & 0x4000) == 0) {
      iVar6 = *(int *)(param_1 + 4);
      if ((((*(int *)(iVar6 + 0x10) != 0) && (iVar7 = *(int *)(iVar6 + 0x10) + iVar6, iVar7 != 0))
          && ((int)(uVar4 & 0xffffbfff) < *(int *)(iVar6 + 0x14))) &&
         (puVar2 = (uint *)(iVar7 + (uVar4 & 0xffffbfff) * 0x28), puVar2 != (uint *)0x0)) {
        *param_2 = 5;
        param_2[2] = puVar2[8];
        param_2[3] = (float)(int)(short)param_3[1];
        param_2[7] = puVar2[5];
        param_2[8] = puVar2[6];
        param_2[0xc] = puVar2[1];
        param_2[0xd] = puVar2[2];
        param_2[0xe] = puVar2[3];
        param_2[0xf] = puVar2[4];
        uVar4 = *puVar2;
        if (*(int *)(param_1 + 0x28) != 0) {
          uVar4 = uVar4 | 0x80000000;
        }
        uVar5 = FUN_00fa0740(uVar4);
        param_2[9] = uVar5;
      }
    }
    else if (DAT_01dc3dd0 != 0) {
      if (((*(int *)(DAT_01dc3dd0 + 0x10) != 0) &&
          (iVar6 = *(int *)(DAT_01dc3dd0 + 0x10) + DAT_01dc3dd0, iVar6 != 0)) &&
         (((int)(uVar4 & 0xffffbfff) < *(int *)(DAT_01dc3dd0 + 0x14) &&
          (puVar1 = (undefined4 *)(iVar6 + (uVar4 & 0xffffbfff) * 0x28), puVar1 != (undefined4 *)0x0
          )))) {
        *param_2 = 5;
        param_2[2] = puVar1[8];
        param_2[3] = (float)(int)(short)param_3[1];
        param_2[7] = puVar1[5];
        param_2[8] = puVar1[6];
        param_2[0xc] = puVar1[1];
        param_2[0xd] = puVar1[2];
        param_2[0xe] = puVar1[3];
        param_2[0xf] = puVar1[4];
        uVar5 = FUN_00fa0740(*puVar1);
        param_2[9] = uVar5;
        return;
      }
    }
  }
  else {
    switch(uVar4 & 0xffff7fff) {
    case 0:
      *param_2 = 0;
      return;
    case 1:
      iVar6 = FUN_00cb1b60(param_3[1]);
      if (iVar6 != 0) {
        *param_2 = 1;
        param_2[7] = *(undefined4 *)(iVar6 + 4);
        param_2[8] = *(undefined4 *)(iVar6 + 8);
        return;
      }
      break;
    case 2:
      *param_2 = 2;
      return;
    case 3:
      FUN_00cf8890(param_2,param_3[1],param_4);
      return;
    case 6:
      *param_2 = 6;
      *(ushort *)(param_2 + 0x10) = param_3[1];
      return;
    case 7:
      *param_2 = 7;
      return;
    case 8:
      *param_2 = 8;
      *(ushort *)((int)param_2 + 0x42) = param_3[1];
      return;
    case 9:
      *param_2 = 9;
      return;
    case 10:
      *param_2 = 10;
      return;
    }
  }
  return;
}

