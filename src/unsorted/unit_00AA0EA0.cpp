// src/unsorted/unit_00AA0EA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA0EA0..00AA12A0, 10 functions

#include "types.h"

// 00AA0EA0  FUN_00aa0ea0  size=138  [run]
undefined2 * __fastcall FUN_00aa0ea0(undefined2 *param_1)

{
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  FUN_00a7c930();
  EspControllerBullet::EspControllerBullet_5();
  FUN_00904d60();
  *param_1 = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1b4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  *(undefined4 *)(param_1 + 0x22a) = 0;
  RayCastManager::getWork(param_1 + 0x228);
  return param_1;
}

// 00AA0F30  FUN_00aa0f30  size=260  [run]
undefined4 __thiscall FUN_00aa0f30(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0x604);
  if ((iVar6 < 0) || (0x11 < iVar6)) {
    FUN_00dd5650(&DAT_01665754);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0x11 < iVar6) {
      iVar6 = 0x11;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar4 = (int *)FUN_00a90dd0();
    if (piVar4 != (int *)0x0) {
      if (*(int *)(param_1 + 0x40) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      }
      if (*(int *)(param_1 + 0x48 + iVar6 * 8) == 0) {
        *(int **)(param_1 + 0x48 + iVar6 * 8) = piVar4;
      }
      iVar2 = *(int *)(param_1 + 0x4c + iVar6 * 8);
      puVar1 = (uint *)(param_1 + 0x4c + iVar6 * 8);
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        *(int **)(iVar2 + 8) = piVar4;
        *(int **)(*puVar1 + 0xc) = piVar4;
        piVar4[1] = *puVar1;
      }
      *puVar1 = (uint)piVar4;
      piVar4[2] = 0;
      piVar4[3] = 0;
      *piVar4 = param_2;
      *(int *)(param_2 + 0x60c) = param_1;
      piVar3 = *(int **)(param_1 + 0x18);
      if ((piVar4 < piVar3) || (piVar3 + *(int *)(param_1 + 0x1c) * 5 <= piVar4)) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)((int)piVar4 - (int)piVar3) / 0x14;
      }
      *(uint *)(param_2 + 0x610) = uVar5;
      if (*(int *)(param_1 + 0x40) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      }
      return 1;
    }
  }
  FUN_00dd5650(&DAT_0166572c);
  return 0;
}

// 00AA1040  FUN_00aa1040  size=290  [run]
void __thiscall FUN_00aa1040(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x604);
    if ((iVar4 < 0) || (0x11 < iVar4)) {
      FUN_00dd5650(&DAT_01665754);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x11 < iVar4) {
        iVar4 = 0x11;
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x40) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar3 = *(int *)(param_2 + 0x610);
    if (((iVar3 < 0) || (*(int *)(param_1 + 0x1c) <= iVar3)) ||
       (piVar1 = (int *)(*(int *)(param_1 + 0x18) + iVar3 * 0x14), piVar1 == (int *)0x0)) {
      if (*(int *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa10c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection(lpCriticalSection);
        return;
      }
    }
    else if (*piVar1 == param_2) {
      if (piVar1[1] == 0) {
        iVar3 = piVar1[2];
        *(int *)(param_1 + 0x48 + iVar4 * 8) = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
      }
      else {
        *(int *)(piVar1[1] + 8) = piVar1[2];
        *(int *)(piVar1[1] + 0xc) = piVar1[2];
      }
      if (piVar1[2] == 0) {
        iVar3 = piVar1[1];
        piVar2 = (int *)(param_1 + 0x4c + iVar4 * 8);
        *piVar2 = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(*piVar2 + 0xc) = 0;
        }
      }
      else {
        *(int *)(piVar1[2] + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      FUN_00a9c200(piVar1);
      if (*(int *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa1155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection(lpCriticalSection);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa10e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}

// 00AA1170  FUN_00aa1170  size=95  [run]
void __fastcall FUN_00aa1170(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  if (0x80 < iVar1) {
    iVar1 = 0x80;
  }
  if (0 < iVar1) {
    piVar2 = (int *)(param_1 + 0xe0);
    do {
      if (*piVar2 != 0) {
        FUN_00aa1040(*piVar2);
        *(int *)(*piVar2 + 0x604) = piVar2[1];
        FUN_00aa0f30(*piVar2);
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}

// 00AA11D0  FUN_00aa11d0  size=35  [run]
void FUN_00aa11d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00f98a40();
  FUN_00a98ae0(&LAB_00a98ca0,5 - (uint)(iVar1 != 0),0,0xf);
  return;
}

// 00AA1200  FUN_00aa1200  size=35  [run]
void FUN_00aa1200(void)

{
  int iVar1;
  
  iVar1 = FUN_00f98a40();
  FUN_00a98ae0(&LAB_00a98d10,5 - (uint)(iVar1 != 0),0,0xf);
  return;
}

// 00AA1230  FUN_00aa1230  size=35  [run]
void FUN_00aa1230(void)

{
  int iVar1;
  
  iVar1 = FUN_00f98a40();
  FUN_00a98ae0(&LAB_00a98d70,5 - (uint)(iVar1 != 0),0,0xf);
  return;
}

// 00AA1260  FUN_00aa1260  size=35  [run]
void FUN_00aa1260(void)

{
  int iVar1;
  
  iVar1 = FUN_00f98a40();
  FUN_00a98b90(&LAB_00a98dc0,5 - (uint)(iVar1 != 0),0,0x10);
  return;
}

// 00AA1290  FUN_00aa1290  size=8  [run]
void FUN_00aa1290(void)

{
  FUN_00aa0f30();
  return;
}

// 00AA12A0  FUN_00aa12a0  size=37  [run]
void FUN_00aa12a0(int *param_1)

{
  FUN_00aa1040(param_1);
  (**(code **)(*param_1 + 0x44))();
  (**(code **)*param_1)(1);
  return;
}

