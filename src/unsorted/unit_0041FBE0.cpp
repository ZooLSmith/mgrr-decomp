// src/unsorted/unit_0041FBE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0041FBE0..0041FDD0, 4 functions

#include "types.h"

// 0041FBE0  FUN_0041fbe0  size=43  [run]
void __fastcall FUN_0041fbe0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 0041FCB0  FUN_0041fcb0  size=60  [run]
void __thiscall FUN_0041fcb0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0041FCF0  FUN_0041fcf0  size=209  [run]
undefined4 * FUN_0041fcf0(undefined4 *param_1,float *param_2)

{
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_50,param_2[2]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_50,param_2[1]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_50,*param_2);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  return param_1;
}

// 0041FDD0  FUN_0041fdd0  size=258  [run]
void FUN_0041fdd0(undefined4 param_1,float *param_2,undefined4 param_3)

{
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_50,param_2[2]);
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_50,param_2[1]);
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_50,*param_2);
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  D3DXMatrixMultiply(param_1,&local_90,param_3);
  return;
}

