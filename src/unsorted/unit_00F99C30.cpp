// src/unsorted/unit_00F99C30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F99C30..00F99DF0, 6 functions

#include "mgrr.h"

// 00F99C30  FUN_00f99c30  size=78  [run]
undefined4 __thiscall FUN_00f99c30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x6c))
                      (DAT_01f206d4,param_2 * param_3,0,(param_2 != 2) + 'e',1,param_1,0);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 4) = 1;
      return 1;
    }
  }
  return 0;
}

// 00F99CA0  FUN_00f99ca0  size=138  [run]
int __fastcall FUN_00f99ca0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    local_4 = param_1;
    if (param_1[3] == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_1[5],param_1[7] * param_1[6],&local_4,0);
      param_1[4] = (iVar2 < 0) - 1 & (uint)local_4;
    }
    else {
      FUN_00dd5650(&DAT_016eb440);
      if (*(int *)(param_1[3] + 0x18) == 0) {
        param_1[4] = 0;
      }
      else {
        param_1[4] = param_1[5] + *(int *)(param_1[3] + 0x18);
      }
    }
    if (param_1[4] == 0) {
      FUN_00dd5650(&DAT_016eb470);
    }
    iVar2 = param_1[4];
  }
  return iVar2;
}

// 00F99D30  FUN_00f99d30  size=32  [run]
void __fastcall FUN_00f99d30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (param_1[3] == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1);
    }
    param_1[4] = 0;
  }
  return;
}

// 00F99D50  FUN_00f99d50  size=96  [run]
undefined4 __thiscall FUN_00f99d50(int *param_1,void *param_2,int param_3,int param_4)

{
  int *piVar1;
  void *_Dst;
  
  if ((param_1[6] == param_3) && (param_1[7] == param_4)) {
    _Dst = (void *)FUN_00f99ca0();
    if (_Dst != (void *)0x0) {
      FID_conflict__memcpy(_Dst,param_2,param_3 * param_4);
      piVar1 = (int *)*param_1;
      if (piVar1 != (int *)0x0) {
        if (param_1[3] == 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        param_1[4] = 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00F99DB0  FUN_00f99db0  size=59  [run]
void __fastcall FUN_00f99db0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *local_4;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (param_1[6] == 0)) {
    uVar3 = param_1[4];
    local_4 = param_1;
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,uVar3,&local_4,0);
    param_1[6] = (iVar2 < 0) - 1 & uVar3;
  }
  return;
}

// 00F99DF0  FUN_00f99df0  size=32  [run]
void __fastcall FUN_00f99df0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (param_1[6] != 0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    param_1[6] = 0;
  }
  return;
}

