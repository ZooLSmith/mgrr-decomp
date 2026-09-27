// src/unsorted/unit_00E204F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E204F0..00E20D50, 17 functions

#include "types.h"

// 00E204F0  FUN_00e204f0  size=67  [run]
void __thiscall FUN_00e204f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) != iVar1) {
    uVar2 = FUN_00e1bd70(*(int *)(param_1 + 4),iVar1,iVar1);
    FUN_00e1a8a0(uVar2,*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  FUN_00e1f7d0(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}

// 00E20540  FUN_00e20540  size=57  [run]
undefined1 * __thiscall FUN_00e20540(undefined1 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00e1e430(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return param_1;
}

// 00E20580  FUN_00e20580  size=47  [run]
void __fastcall FUN_00e20580(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E205B0  FUN_00e205b0  size=115  [run]
undefined4 * __thiscall FUN_00e205b0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    if (0xf < (uint)param_1[5]) {
      FUN_00dd4920(*param_1);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
    if ((uint)param_2[5] < 0x10) {
      FID_conflict__memcpy(param_1,param_2,param_2[4] + 1);
    }
    else {
      *param_1 = *param_2;
      *param_2 = 0;
    }
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_2[5] = 0xf;
    param_2[4] = 0;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}

// 00E20630  FUN_00e20630  size=64  [run]
void FUN_00e20630(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = 0;
  if (param_1[1] - iVar2 >> 2 != 0) {
    do {
      uVar1 = *(undefined4 *)(iVar2 + uVar3 * 4);
      FUN_00e1e390();
      (*DAT_01b7b790)(uVar1);
      iVar2 = *param_1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(param_1[1] - iVar2 >> 2));
  }
  return;
}

// 00E20680  FUN_00e20680  size=166  [run]
void FUN_00e20680(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  local_10 = 0;
  local_20 = local_20 & 0xffffff00;
  local_c = 0xf;
  if (&local_20 != param_1) {
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
    local_10 = param_1[4];
    param_1[4] = 0;
    local_c = param_1[5];
    param_1[5] = 0xf;
    local_20 = uVar2;
    local_1c = uVar1;
    local_18 = uVar3;
    local_14 = uVar4;
    if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(uVar2);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

// 00E207E0  FUN_00e207e0  size=208  [run]
void __thiscall FUN_00e207e0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*DAT_01b7b794)(param_2 * 4);
    }
    local_8 = 0;
    FUN_00e1fb20(*param_1,param_1[1],iVar3);
    local_8 = 0xffffffff;
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if ((iVar1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar1);
    }
    param_1[2] = iVar3 + param_2 * 4;
    param_1[1] = iVar3 + (iVar2 - iVar1 >> 2) * 4;
    *param_1 = iVar3;
  }
  ExceptionList = local_10;
  return;
}

// 00E208B0  Catch@00e208b0  size=27  [run]
void Catch_00e208b0(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E208D0  FUN_00e208d0  size=208  [run]
void __thiscall FUN_00e208d0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*DAT_01b7b794)(param_2 * 4);
    }
    local_8 = 0;
    FUN_00e1fb50(*param_1,param_1[1],iVar3);
    local_8 = 0xffffffff;
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if ((iVar1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar1);
    }
    param_1[2] = iVar3 + param_2 * 4;
    param_1[1] = iVar3 + (iVar2 - iVar1 >> 2) * 4;
    *param_1 = iVar3;
  }
  ExceptionList = local_10;
  return;
}

// 00E209A0  Catch@00e209a0  size=27  [run]
void Catch_00e209a0(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E209C0  FUN_00e209c0  size=208  [run]
void __thiscall FUN_00e209c0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*DAT_01b7b794)(param_2 * 4);
    }
    local_8 = 0;
    FUN_00e1fb80(*param_1,param_1[1],iVar3);
    local_8 = 0xffffffff;
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if ((iVar1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar1);
    }
    param_1[2] = iVar3 + param_2 * 4;
    param_1[1] = iVar3 + (iVar2 - iVar1 >> 2) * 4;
    *param_1 = iVar3;
  }
  ExceptionList = local_10;
  return;
}

// 00E20A90  Catch@00e20a90  size=27  [run]
void Catch_00e20a90(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E20B00  FUN_00e20b00  size=190  [run]
int * __thiscall FUN_00e20b00(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7990;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = param_2[1] - *param_2 >> 3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar2 != 0) {
    if (0x1fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::length_error::length_error_3("vector<T> too long");
    }
    if (DAT_01b7b794 == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*DAT_01b7b794)(uVar2 * 8);
    }
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + uVar2 * 8;
    local_8 = 0;
    iVar1 = FUN_00e1e8d0(*param_2,param_2[1],*param_1);
    param_1[1] = iVar1;
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E20BBE  Catch@00e20bbe  size=17  [run]
void Catch_00e20bbe(void)

{
  FUN_00e1fbe0();
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E20BD0  FUN_00e20bd0  size=47  [run]
void __fastcall FUN_00e20bd0(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E20D10  FUN_00e20d10  size=47  [run]
void __fastcall FUN_00e20d10(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E20D50  FUN_00e20d50  size=110  [run]
void __thiscall FUN_00e20d50(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && ((undefined4 *)*param_1 <= param_2)) {
    iVar3 = (int)param_2 - (int)*param_1 >> 3;
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e1fee0(1);
    }
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *param_1;
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 8);
      param_1[1] = param_1[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e1fee0(1);
    }
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}

