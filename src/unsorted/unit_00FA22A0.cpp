// src/unsorted/unit_00FA22A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA22A0..00FA2710, 9 functions

#include "mgrr.h"

// 00FA22A0  FUN_00fa22a0  size=55  [run]
void __fastcall FUN_00fa22a0(int *param_1)

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
  return;
}

// 00FA22E0  FUN_00fa22e0  size=193  [run]
undefined4 __thiscall FUN_00fa22e0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  size_t _Size;
  void *_Dst;
  int *piStack_14;
  undefined4 uStack_10;
  
  if (DAT_01f206d4 != (int *)0x0) {
    _Size = param_3 * param_4;
    uStack_10 = 0;
    piStack_14 = param_1;
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x6c))(DAT_01f206d4,_Size,0,(param_3 != 2) + 'e',1);
    if (-1 < iVar2) {
      _Dst = (void *)0x0;
      param_1[1] = 1;
      iVar2 = (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,_Size);
      if ((-1 < iVar2) && (_Dst != (void *)0x0)) {
        FID_conflict__memcpy(_Dst,&piStack_14,_Size);
        (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1);
        return 1;
      }
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
    }
  }
  return 0;
}

// 00FA2440  FUN_00fa2440  size=80  [run]
void __fastcall FUN_00fa2440(int *param_1)

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
  return;
}

// 00FA2490  FUN_00fa2490  size=132  [run]
/* WARNING: Removing unreachable block (ram,0x00fa24f1) */

undefined4 __thiscall FUN_00fa2490(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x68))(DAT_01f206d4,param_3 * param_4,0,0);
    if (-1 < iVar1) {
      param_1[1] = 1;
      (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,param_3 * param_4);
      FUN_00fa2440();
    }
  }
  return 0;
}

// 00FA2580  FUN_00fa2580  size=69  [run]
void __fastcall FUN_00fa2580(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_00fa16d0(*(undefined4 *)(param_1 + 8));
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00FA25D0  FUN_00fa25d0  size=80  [run]
undefined4 __thiscall FUN_00fa25d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd5650(&DAT_016eb500);
    return 0;
  }
  iVar1 = FUN_00fa1ae0(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016eb52c);
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  return 1;
}

// 00FA2620  FUN_00fa2620  size=120  [run]
void __fastcall FUN_00fa2620(int param_1)

{
  int *piVar1;
  
  FUN_00fa16d0(*(undefined4 *)(param_1 + 0x4c));
  FUN_00fa16d0(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

// 00FA26B0  FUN_00fa26b0  size=93  [run]
void __fastcall FUN_00fa26b0(int param_1)

{
  int *piVar1;
  
  FUN_00fa16d0(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  return;
}

// 00FA2710  FUN_00fa2710  size=46  [run]
void __fastcall FUN_00fa2710(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    *param_1 = 0;
  }
  return;
}

