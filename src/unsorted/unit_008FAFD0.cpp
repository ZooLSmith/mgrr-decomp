// src/unsorted/unit_008FAFD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FAFD0..008FB1D0, 3 functions

#include "types.h"

// 008FAFD0  FUN_008fafd0  size=279  [run]
void FUN_008fafd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_5 + 8);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = 0x3f800000;
  local_28 = 0x3f800000;
  local_3c = 0x3f800000;
  local_50 = 0x3f800000;
  if (cVar1 == '\r') {
    FUN_008f8d20(param_1,param_2,param_3,param_4,param_5,&local_50);
    return;
  }
  if (cVar1 == '\t') {
    iVar2 = *(int *)(param_5 + 0x34);
    if (*(char *)(iVar2 + 8) == '\r') {
      FUN_008f8d20(param_1,param_2,param_3,param_4,iVar2,&local_50);
      return;
    }
    if (*(char *)(iVar2 + 8) == '\x1b') {
      FUN_008f8280(param_1,param_2,param_3,param_4,iVar2,&local_50);
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      FUN_008f9fc0(param_1,param_2,param_3,param_4,param_5,&local_50);
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f8280(param_1,param_2,param_3,param_4,param_5,&local_50);
    }
  }
  return;
}

// 008FB0F0  FUN_008fb0f0  size=219  [run]
void FUN_008fb0f0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_2 + 8);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = 0x3f800000;
  local_28 = 0x3f800000;
  local_3c = 0x3f800000;
  local_50 = 0x3f800000;
  if (cVar1 == '\r') {
    FUN_008f9810(param_1,param_2,&local_50);
    return;
  }
  if (cVar1 == '\t') {
    iVar2 = *(int *)(param_2 + 0x34);
    if (*(char *)(iVar2 + 8) == '\r') {
      FUN_008f9810(param_1,iVar2,&local_50);
      return;
    }
    if (*(char *)(iVar2 + 8) == '\x1b') {
      FUN_008f9a20(param_1,iVar2,&local_50);
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      FUN_008fa0a0(param_1,param_2,&local_50);
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f9a20(param_1,param_2,&local_50);
    }
  }
  return;
}

// 008FB1D0  FUN_008fb1d0  size=219  [run]
void FUN_008fb1d0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_2 + 8);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = 0x3f800000;
  local_28 = 0x3f800000;
  local_3c = 0x3f800000;
  local_50 = 0x3f800000;
  if (cVar1 == '\r') {
    FUN_008f8e50(param_1,param_2,&local_50);
    return;
  }
  if (cVar1 == '\t') {
    iVar2 = *(int *)(param_2 + 0x34);
    if (*(char *)(iVar2 + 8) == '\r') {
      FUN_008f8e50(param_1,iVar2,&local_50);
      return;
    }
    if (*(char *)(iVar2 + 8) == '\x1b') {
      FUN_008f8320(param_1,iVar2,&local_50);
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      FUN_008fa1e0(param_1,param_2,&local_50);
      return;
    }
    if (cVar1 == '\x1b') {
      FUN_008f8320(param_1,param_2,&local_50);
    }
  }
  return;
}

