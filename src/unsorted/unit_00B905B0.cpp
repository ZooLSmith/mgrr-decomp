// src/unsorted/unit_00B905B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B905B0..00B90AB0, 7 functions

#include "mgrr.h"

// 00B905B0  FUN_00b905b0  size=236  [run]
void __fastcall FUN_00b905b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x26d4) = 0;
  *(undefined4 *)(param_1 + 0x3f9c) = 1;
  FUN_00a8caf0(0xe9,0,0,0);
  DAT_01bea060 = DAT_01bea060 | 0x100000;
  DAT_01bea094 = DAT_01bea094 | 0x100;
  DAT_01bea090 = DAT_01bea090 | 0x4c000;
  CharacterControl::setRadius(0x3eb33333);
  *(undefined4 *)(param_1 + 0x5074) = 0;
  *(undefined4 *)(param_1 + 0x416c) = 0;
  *(undefined4 *)(param_1 + 0x5080) = 1;
  FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
  DAT_01bea060 = DAT_01bea060 & 0xffbfffff;
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6d00();
    FUN_008e5c50(6);
    iVar1 = *(int *)(param_1 + 0x764);
    if (*(int *)(iVar1 + 0x104) != 1) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x416c) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0xbfc90fdb;
  return;
}

// 00B906A0  FUN_00b906a0  size=205  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b906a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  DAT_01bea060 = DAT_01bea060 & 0xffefffff;
  DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
  DAT_01bea090 = DAT_01bea090 & 0xfffb3fff;
  param_1[0xfe7] = 0;
  FUN_008e6d00();
  FUN_008e5c50(6);
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  FUN_00b893e0(&local_20,1);
  piVar2 = param_1 + 0x2c;
  piVar3 = &DAT_01bea560;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  D3DXMatrixInverse(&DAT_01bea5a0,0,&DAT_01bea560);
  _DAT_01bea6c0 = 0;
  (**(code **)(*param_1 + 0x388))(0);
  param_1[0x105b] = 0;
  param_1[0x99a] = 0;
  FUN_00dc1300(0);
  return;
}

// 00B90770  FUN_00b90770  size=383  [run]
undefined4 __thiscall FUN_00b90770(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  float10 fVar5;
  float local_20 [2];
  float local_18;
  
  uVar3 = 0;
  if ((param_3 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  switch(param_2) {
  case 0:
    if ((*(uint *)(param_1 + 0xe50) & *(uint *)(param_1 + 0xcf8)) == 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0xe4c) & *(uint *)(param_1 + 0xcf8)) == 0) {
      return 0;
    }
    if (0xe < *(int *)(param_1 + 0xf60)) {
      return 0;
    }
    if (0xe < *(int *)(param_1 + 0xf5c)) {
      return 0;
    }
    return 1;
  case 1:
    uVar1 = *(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe50);
    goto LAB_00b9080a;
  case 2:
    bVar4 = (*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe24)) == 0;
    break;
  case 3:
    if ((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe24)) == 0) {
      return 0;
    }
    if (*(float *)(param_1 + 0xd28) <= 90000.0) {
      return 0;
    }
    return 1;
  case 4:
  case 5:
    uVar1 = *(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe50);
LAB_00b9080a:
    if (uVar1 == 0) {
      return 0;
    }
    if (0xe < *(int *)(param_1 + 0xf5c)) {
      return 0;
    }
    return 1;
  case 6:
    if (param_3 == 0) {
      return 0;
    }
    FUN_00c15370(local_20);
    fVar5 = (float10)fpatan((float10)local_20[0] - (float10)*(float *)(param_1 + 0x40),
                            (float10)local_18 - (float10)*(float *)(param_1 + 0x48));
    FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0xd30)));
    bVar4 = *(int *)(param_1 + 0x2580) == 0;
    break;
  case 7:
    bVar4 = (*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe30)) == 0;
    break;
  case 8:
    if ((DAT_01bea094 & 0x80000000) != 0) {
      return 0;
    }
  case 9:
    bVar4 = *(int *)(param_1 + 0xe74) == 0;
    break;
  default:
    goto switchD_00b907ac_default;
  }
  if (!bVar4) {
    uVar3 = 1;
  }
switchD_00b907ac_default:
  return uVar3;
}

// 00B90920  FUN_00b90920  size=102  [run]
undefined4 __fastcall FUN_00b90920(int param_1)

{
  int iVar1;
  
  if ((((DAT_01bea094 & 0x20000000) == 0) &&
      ((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe30)) != 0)) &&
     (*(int *)(param_1 + 0x12b4) != 0)) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x12b4) + 0x34) != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a8caf0(0x60,0,0,0);
        FUN_00b8a620();
        return 1;
      }
    }
  }
  return 0;
}

// 00B90990  FUN_00b90990  size=134  [run]
void __fastcall FUN_00b90990(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x111c) = 0;
  FUN_004066f0();
  FUN_00a7c950();
  FUN_00901540(0x1f);
  FUN_0112c440(0x3f800000);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00B90A20  FUN_00b90a20  size=130  [run]
void __fastcall FUN_00b90a20(int *param_1)

{
  int iVar1;
  
  param_1[0x2de] = 1;
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    param_1[0x2de] = 0;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = FUN_00b8cd60();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar1 != 0) {
      FUN_00a8caf0(0xc,0,0,0);
      return;
    }
    iVar1 = FUN_00a8c760(1);
    if (iVar1 != 0) {
      FUN_00b86b00(1,0,1,1);
    }
  }
  return;
}

// 00B90AB0  FUN_00b90ab0  size=155  [run]
void __fastcall FUN_00b90ab0(int *param_1)

{
  int iVar1;
  
  param_1[0x2de] = 1;
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    param_1[0x2de] = 0;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 == 0) {
    iVar1 = FUN_00b8cd60();
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_00b86b00(1,1,1,1), iVar1 != 0)) {
        return;
      }
      if (param_1[0x9f0] != 0) {
        param_1[0x225] = 0x3e99999a;
      }
    }
    return;
  }
  FUN_00a8caf0(0xc,0,0,0);
  return;
}

