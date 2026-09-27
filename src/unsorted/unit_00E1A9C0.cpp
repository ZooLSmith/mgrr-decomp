// src/unsorted/unit_00E1A9C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E1A9C0..00E1ABB0, 5 functions

#include "types.h"

// 00E1A9C0  FUN_00e1a9c0  size=106  [run]
void FUN_00e1a9c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 byte *param_5,int param_6)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  
  do {
    if (param_6 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_00e1aa10:
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *param_5;
      if ((*(int *)param_4[9] == 0) || (piVar2 = (int *)param_4[0xd], *piVar2 < 1)) {
        uVar4 = (**(code **)(*param_4 + 0xc))(bVar1);
      }
      else {
        *piVar2 = *piVar2 + -1;
        pbVar3 = *(byte **)param_4[9];
        *(byte **)param_4[9] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_00e1aa10;
    }
    param_5 = param_5 + 1;
    param_6 = param_6 + -1;
  } while( true );
}

// 00E1AA30  FUN_00e1aa30  size=101  [run]
void FUN_00e1aa30(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 byte param_5,int param_6)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  
  do {
    if (param_6 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_00e1aa7d:
      uVar3 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar3,1);
    }
    else {
      if ((*(int *)param_4[9] == 0) || (piVar1 = (int *)param_4[0xd], *piVar1 < 1)) {
        uVar3 = (**(code **)(*param_4 + 0xc))(param_5);
      }
      else {
        *piVar1 = *piVar1 + -1;
        pbVar2 = *(byte **)param_4[9];
        *(byte **)param_4[9] = pbVar2 + 1;
        *pbVar2 = param_5;
        uVar3 = (uint)param_5;
      }
      if (uVar3 == 0xffffffff) goto LAB_00e1aa7d;
    }
    param_6 = param_6 + -1;
  } while( true );
}

// 00E1AAA0  FUN_00e1aaa0  size=106  [run]
void FUN_00e1aaa0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 byte *param_5,int param_6)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  
  do {
    if (param_6 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_00e1aaf0:
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *param_5;
      if ((*(int *)param_4[9] == 0) || (piVar2 = (int *)param_4[0xd], *piVar2 < 1)) {
        uVar4 = (**(code **)(*param_4 + 0xc))(bVar1);
      }
      else {
        *piVar2 = *piVar2 + -1;
        pbVar3 = *(byte **)param_4[9];
        *(byte **)param_4[9] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_00e1aaf0;
    }
    param_5 = param_5 + 1;
    param_6 = param_6 + -1;
  } while( true );
}

// 00E1AB10  FUN_00e1ab10  size=157  [run]
undefined4 *
FUN_00e1ab10(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            void *param_5,size_t param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  size_t sVar4;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  while( true ) {
    pvVar2 = _memchr(param_5,0,param_6);
    sVar4 = param_6;
    if (pvVar2 != (void *)0x0) {
      sVar4 = (int)pvVar2 - (int)param_5;
    }
    puVar3 = (undefined4 *)FUN_00e1aaa0(param_1,local_18,param_3,param_4,param_5,sVar4);
    param_3 = *puVar3;
    param_4 = puVar3[1];
    if (param_6 - sVar4 == 0) break;
    if ((char)param_7 != '\0') {
      puVar3 = (undefined4 *)FUN_00e1aa30(param_1,local_10,*puVar3,puVar3[1],param_7,1);
      param_3 = *puVar3;
      param_4 = puVar3[1];
    }
    param_5 = (void *)((int)param_5 + sVar4 + 1);
    param_6 = (param_6 - sVar4) - 1;
  }
  uVar1 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar1;
  return param_2;
}

// 00E1ABB0  FUN_00e1abb0  size=144  [run]
void __thiscall FUN_00e1abb0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Lockit local_8 [4];
  uint local_4;
  
  uVar1 = **(uint **)(param_1 + 0x30);
  local_4 = uVar1;
  std::_Lockit::_Lockit(local_8,0);
  if (*(int *)(uVar1 + 4) != -1) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  FUN_00fda874();
  piVar3 = (int *)FUN_00e1a000(&local_4);
  std::_Lockit::_Lockit((_Lockit *)&local_4,0);
  iVar2 = *(int *)(uVar1 + 4);
  if ((iVar2 != 0) && (iVar2 != -1)) {
    *(int *)(uVar1 + 4) = iVar2 + -1;
  }
  iVar2 = *(int *)(uVar1 + 4);
  FUN_00fda874();
  puVar4 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar1);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  (**(code **)(*piVar3 + 0x18))(param_2);
  return;
}

