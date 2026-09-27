// src/unsorted/unit_00C412D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C412D0..00C420C0, 9 functions

#include "mgrr.h"

// 00C412D0  FUN_00c412d0  size=65  [run]
bool FUN_00c412d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x4458,param_1);
  if (iVar1 != 0) {
    DAT_01bea104 = ScrManagerImplement::ScrManagerImplement(param_1);
    return DAT_01bea104 != 0;
  }
  DAT_01bea104 = 0;
  return false;
}

// 00C414A0  FUN_00c414a0  size=30  [run]
byte __fastcall FUN_00c414a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c26190();
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)~*(byte *)(param_1 + 8) >> 2 & 1;
}

// 00C414C0  FUN_00c414c0  size=38  [run]
byte __fastcall FUN_00c414c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = FUN_00c26190();
    if (iVar1 != 0) {
      return (byte)~*(byte *)(param_1 + 8) >> 2 & 1;
    }
  }
  return 0;
}

// 00C414F0  FUN_00c414f0  size=34  [run]
byte __fastcall FUN_00c414f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = FUN_00c26190();
    if (iVar1 != 0) {
      return *(byte *)(param_1 + 8) >> 2 & 1;
    }
  }
  return 0;
}

// 00C41520  FUN_00c41520  size=211  [run]
int __thiscall FUN_00c41520(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return -1;
  }
  if ((DAT_01be8e58 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    piVar2 = (int *)FUN_00a7c8a0();
    iVar1 = (**(code **)(*piVar2 + 0x14c))(param_2,param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_00c27de0(param_2,param_3), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x20) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
      }
      iVar1 = -1;
      iVar5 = 0;
      do {
        iVar3 = FUN_00a81330();
        if (iVar3 == 0) {
          iVar1 = iVar5;
          if (iVar5 != -1) {
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
          }
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      if (*(int *)(param_1 + 0x20) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
      }
      return iVar1;
    }
  }
  return -1;
}

// 00C41600  FUN_00c41600  size=623  [run]
void __thiscall FUN_00c41600(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_18 = 0;
  iVar5 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x3c);
  local_10 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  sVar2 = 0;
  local_8 = (int *)0x0;
  for (; iVar1 != iVar5; iVar1 = *(int *)(iVar1 + 8)) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) &&
       (piVar4[0x139] == 0)) {
      puVar6 = &DAT_01be9c78;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c78);
      iVar3 = FUN_00dd6d80(puVar6);
      if (((iVar3 != 0) && (iVar3 = FUN_00a82d50(), iVar3 == 4)) &&
         ((piVar4[0x36a] != -1 && (piVar4[0x36a] == param_2)))) {
        if (piVar4[0x36c] == 0) {
          piVar4[0x36c] = 1;
        }
        local_14 = local_14 + 1;
        iVar3 = FUN_00ac48f0(0);
        if (iVar3 == 0) {
          *(short *)(piVar4 + 0x36b) = (short)piVar4[0x36b] + 1;
          if (99 < (short)piVar4[0x36b]) {
            *(undefined2 *)(piVar4 + 0x36b) = 100;
          }
        }
        else {
          *(undefined2 *)(piVar4 + 0x36b) = 0;
          iVar3 = FUN_00464930();
          if ((iVar3 == 0) && ((*(byte *)(piVar4 + 0x36d) & 8) == 0)) {
            local_c = local_c + 1;
          }
          *(byte *)(piVar4 + 0x36d) = *(byte *)(piVar4 + 0x36d) | 4;
        }
        iVar3 = FUN_00464930();
        if (iVar3 == 0) {
          *(undefined1 *)((int)piVar4 + 0xdae) = 0;
        }
        else {
          sVar2 = (short)piVar4[0x36b];
          local_10 = local_10 + 1;
          *(char *)((int)piVar4 + 0xdae) = *(char *)((int)piVar4 + 0xdae) + '\x01';
          local_8 = piVar4;
        }
        if ((*(byte *)(piVar4 + 0x36d) & 1) != 0) {
          local_18 = local_18 + 1;
        }
        if ((*(byte *)(piVar4 + 0x36d) & 8) == 0) {
          local_1c = local_1c + 1;
        }
        iVar3 = FUN_009c4bf0();
        if (2 < iVar3) {
          piVar4[0x36c] = 2;
          *(undefined1 *)(piVar4 + 0x36d) = 0;
        }
      }
    }
  }
  iVar5 = FUN_009c4bf0();
  if ((iVar5 < 3) && (local_14 != 0)) {
    if ((local_10 == 0) && (local_18 == 0)) {
      FUN_00c28020(param_2,0);
      return;
    }
    if (((local_8 != (int *)0x0) && ((*(byte *)(local_8 + 0x36d) & 8) != 0)) && (local_1c != 0)) {
      FUN_00c28020(param_2,1);
      return;
    }
    if (local_18 != 0) {
      FUN_00c28170(param_2);
      return;
    }
    if (((0x13 < sVar2) && (local_c != 0)) &&
       ((local_1c != 0 && ((*(byte *)(local_8 + 0x36d) & 2) == 0)))) {
      FUN_00c28210(param_2);
      return;
    }
    if ((1 < local_10) && (local_1c != 0)) {
      FUN_00c28210(param_2);
    }
  }
  return;
}

// 00C41910  FUN_00c41910  size=100  [run]
undefined4 FUN_00c41910(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 != 0) &&
      ((*(int *)(param_3 + 0x20) == -1 || (*(int *)(param_2 + 0x4b0) == *(int *)(param_3 + 0x20)))))
     && ((*(char *)(param_3 + 0x25) != '\0' || (param_2 != param_1)))) {
    param_2 = param_2 + 0x40;
    switch(*(undefined4 *)(param_3 + 0x2c)) {
    case 0:
      goto switchD_00c41946_caseD_0;
    case 1:
      iVar1 = FUN_00c15be0(param_2);
      break;
    case 2:
      iVar1 = FUN_00c283d0(param_2);
      break;
    case 3:
      iVar1 = FUN_00c28410(param_2);
      break;
    default:
      goto switchD_00c41946_default;
    }
    if (iVar1 != 0) {
switchD_00c41946_caseD_0:
      return 1;
    }
  }
switchD_00c41946_default:
  return 0;
}

// 00C41990  FUN_00c41990  size=138  [run]
int __fastcall FUN_00c41990(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  local_8 = 0x1f;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  do {
    FUN_00a7c930();
    *(undefined1 *)(puVar1 + -5) = 0;
    puVar1[-3] = 0;
    puVar1[-4] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    FUN_00a7c950();
    FUN_00401040(puVar1 + 0xc,0x30,0x10,&LAB_00c15ce0);
    puVar1 = puVar1 + 0xd3;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return param_1;
}

// 00C420C0  FUN_00c420c0  size=35  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c420c0(undefined4 param_1)

{
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  _DAT_01bea164 = param_1;
  DAT_01bea160 = 1;
  FUN_00c29a50();
  return;
}

