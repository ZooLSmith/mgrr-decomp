// src/unsorted/unit_00FA4420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA4420..00FA46E0, 7 functions

#include "mgrr.h"

// 00FA4420  FUN_00fa4420  size=125  [run]
undefined4 __fastcall FUN_00fa4420(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa01f0(*(undefined4 *)(param_1 + 0x50),param_1 + 0x54,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa01f0(*(undefined4 *)(param_1 + 0x5c),param_1 + 0x60,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa01f0(*(undefined4 *)(param_1 + 0x68),param_1 + 0x6c,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa01f0(*(undefined4 *)(param_1 + 0x74),param_1 + 0x78,uVar1);
  return 1;
}

// 00FA44A0  FUN_00fa44a0  size=64  [run]
void __fastcall FUN_00fa44a0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  return;
}

// 00FA44E0  FUN_00fa44e0  size=81  [run]
undefined4 __thiscall FUN_00fa44e0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = FUN_00fa22e0(param_2,param_3,param_4,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[6] = param_4;
  param_1[7] = param_2;
  param_1[5] = param_3;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}

// 00FA4560  FUN_00fa4560  size=62  [run]
void __fastcall FUN_00fa4560(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00fa16d0(*(undefined4 *)(param_1 + 4));
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00FA45A0  FUN_00fa45a0  size=92  [run]
void __fastcall FUN_00fa45a0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  return;
}

// 00FA4600  FUN_00fa4600  size=99  [run]
undefined4 __thiscall FUN_00fa4600(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = FUN_00fa2490(param_2,param_3,param_4,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = param_2;
  param_1[8] = param_5;
  if (param_5 != 0) {
    FUN_00f9c8a0();
  }
  return 1;
}

// 00FA46E0  FUN_00fa46e0  size=78  [run]
void __fastcall FUN_00fa46e0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}

