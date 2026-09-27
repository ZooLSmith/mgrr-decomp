// src/unsorted/unit_00C775E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C775E0..00C77B20, 11 functions

#include "mgrr.h"

// 00C775E0  FUN_00c775e0  size=1  [run]
void FUN_00c775e0(void)

{
  return;
}

// 00C775F0  FUN_00c775f0  size=219  [run]
void __fastcall FUN_00c775f0(uint *param_1)

{
  if ((*param_1 & 1) != 0) {
    if (param_1[2] == 0) {
      FUN_00da9760(2,param_1[1]);
    }
    else {
      FUN_00da9760(2,param_1[1]);
      param_1[2] = param_1[2] - 1;
      if ((int)param_1[2] < 1) {
        *param_1 = *param_1 & 0xfffffffe;
        param_1[2] = 0;
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (param_1[0xd] == 0) {
      FUN_00da9790(2,param_1[0xb]);
    }
    else {
      FUN_00da9790(2,param_1[0xb]);
      param_1[0xd] = param_1[0xd] - 1;
      if ((int)param_1[0xd] < 1) {
        *param_1 = *param_1 & 0xfffffffd;
        param_1[0xd] = 0;
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    if (param_1[10] == 0) {
      FUN_00da9760(2,param_1[8]);
      FUN_00da9660(2,param_1 + 4,param_1[9]);
      return;
    }
    FUN_00da9760(2,param_1[8]);
    FUN_00da9660(2,param_1 + 4,param_1[9]);
    param_1[10] = param_1[10] - 1;
    if ((int)param_1[10] < 1) {
      *param_1 = *param_1 & 0xfffffffb;
      param_1[10] = 0;
    }
  }
  return;
}

// 00C777E0  FUN_00c777e0  size=83  [run]
undefined4 __thiscall FUN_00c777e0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[0xb] == 1) {
    param_2[0xb] = 2;
    return 1;
  }
  iVar1 = FUN_00e9e570(2,param_2 + 1,*(undefined4 *)(param_1 + 0x3c),0,0);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    param_2[10] = 2;
    return 1;
  }
  return 0;
}

// 00C77840  FUN_00c77840  size=138  [run]
undefined4 FUN_00c77840(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0xb] == 1) {
    param_1[0xb] = 0;
    param_1[10] = 6;
    return 1;
  }
  iVar1 = FUN_00e9cf60(*param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_00e9cfe0(*param_1);
    if (iVar1 == 1) {
      uVar2 = FUN_00e9d0b0(*param_1);
      param_1[0xc] = uVar2;
      if (param_1[0xd] != 0) {
        FUN_00de3540(uVar2,0);
      }
      param_1[0xe] = param_1[0xe] + 1;
      FUN_00e9d710(*param_1);
      param_1[10] = 3;
      return 1;
    }
  }
  return 0;
}

// 00C778F0  FUN_00c778f0  size=68  [run]
undefined4 FUN_00c778f0(undefined4 *param_1)

{
  int iVar1;
  
  FUN_00e9d6a0(*param_1);
  iVar1 = 0;
  if (0 < (int)param_1[0xe]) {
    do {
      FUN_00e9d7a0(*param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0xe]);
  }
  param_1[10] = 5;
  return 1;
}

// 00C77940  FUN_00c77940  size=48  [run]
undefined4 FUN_00c77940(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9d4d0(param_1 + 4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
    return 1;
  }
  return 0;
}

// 00C779A0  FUN_00c779a0  size=47  [run]
undefined4 FUN_00c779a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9cf60(*param_1);
  if (iVar1 != 0) {
    param_1[0xb] = 2;
    return 1;
  }
  return 0;
}

// 00C77A60  FUN_00c77a60  size=59  [run]
undefined4 FUN_00c77a60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbbd0(param_1,&DAT_0165bfb4);
  if (iVar1 == 0) {
    iVar1 = FUN_00fdbbd0(param_1,&DAT_0165bfac);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00C77AE0  FUN_00c77ae0  size=12  [run]
undefined4 __fastcall FUN_00c77ae0(undefined4 param_1)

{
  FUN_00a6e670();
  return param_1;
}

// 00C77B00  FUN_00c77b00  size=18  [run]
void FUN_00c77b00(void)

{
  FUN_00a6e690(0x10,0x10000,&DAT_01b7bd48);
  return;
}

// 00C77B20  thunk_FUN_00a6e700  size=5  [run]
void thunk_FUN_00a6e700(void)

{
  FUN_00dd8da0();
  return;
}

