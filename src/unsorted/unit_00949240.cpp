// src/unsorted/unit_00949240.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949240..00949550, 12 functions

#include "mgrr.h"

// 00949240  FUN_00949240  size=24  [run]
void __fastcall FUN_00949240(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 00949270  FUN_00949270  size=4  [run]
undefined4 __fastcall FUN_00949270(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}

// 00949280  FUN_00949280  size=4  [run]
undefined4 __fastcall FUN_00949280(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}

// 00949290  FUN_00949290  size=35  [run]
void __thiscall FUN_00949290(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_2;
  piVar3 = param_1 + 2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  (**(code **)(*param_1 + 8))(param_2);
  return;
}

// 00949320  FUN_00949320  size=4  [run]
undefined4 __fastcall FUN_00949320(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00949390  FUN_00949390  size=38  [run]
void __fastcall FUN_00949390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a7c8b0();
  if (*(float *)(iVar1 + 4) <= -1000.0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

// 00949490  FUN_00949490  size=27  [run]
void __thiscall FUN_00949490(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x4000;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffbfff;
  return;
}

// 009494B0  FUN_009494b0  size=27  [run]
void __thiscall FUN_009494b0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  return;
}

// 009494F0  FUN_009494f0  size=10  [run]
void __thiscall FUN_009494f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}

// 00949510  FUN_00949510  size=10  [run]
void __thiscall FUN_00949510(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}

// 00949530  FUN_00949530  size=13  [run]
void __thiscall FUN_00949530(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}

// 00949550  FUN_00949550  size=37  [run]
void __thiscall FUN_00949550(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 0x70) = *param_3;
  *(undefined4 *)(param_1 + 0x74) = param_3[1];
  *(undefined4 *)(param_1 + 0x78) = param_3[2];
  *(undefined4 *)(param_1 + 0x7c) = param_3[3];
  return;
}

