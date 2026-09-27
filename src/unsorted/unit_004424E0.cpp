// src/unsorted/unit_004424E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004424E0..004427F0, 7 functions

#include "mgrr.h"

// 004424E0  FUN_004424e0  size=114  [run]
void __fastcall FUN_004424e0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_1 + 0xb04);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0xaf8) < *(int *)(param_1 + 0xafc)) {
    fVar1 = *(float *)(param_1 + 0xb00) - *(float *)(param_1 + 0xb08);
    *(float *)(param_1 + 0xb00) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_1 + 0xb04);
      *(int *)(param_1 + 0xaf8) = *(int *)(param_1 + 0xaf8) + 1;
      return;
    }
  }
  else {
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

// 00442560  FUN_00442560  size=32  [run]
void FUN_00442560(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00442690  FUN_00442690  size=129  [run]
void __thiscall FUN_00442690(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    FUN_00a8ce90(local_30,local_20);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar3;
    D3DXVec3TransformNormal(local_30,local_30,param_2 + 0x10);
    fVar1 = *(float *)(param_2 + 0x44);
    fVar2 = *(float *)(param_2 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + fStack_38;
    *(float *)(param_1 + 0x58) = fVar2 + fStack_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 00442720  FUN_00442720  size=101  [run]
void FUN_00442720(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 != 0) {
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36970(0);
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,(float)fVar2);
    }
  }
  return;
}

// 00442790  FUN_00442790  size=50  [run]
void __fastcall FUN_00442790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
  }
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  return;
}

// 004427D0  FUN_004427d0  size=32  [run]
void __fastcall FUN_004427d0(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 004427F0  FUN_004427f0  size=299  [run]
void __fastcall FUN_004427f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a81330();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4520(0x9e,uVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00db3e80(0x41f00000,0,&DAT_01bea1d0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    FUN_00a8caf0(0xcd,0,0,0);
    FUN_00b96b30();
    iVar2 = FUN_00b7c970();
    if (iVar2 < 1) {
      FUN_00a8caf0(0xdb,0,0,0);
    }
  }
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x30c))(0x33,0);
  }
  return;
}

