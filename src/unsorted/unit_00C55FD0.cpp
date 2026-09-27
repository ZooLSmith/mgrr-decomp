// src/unsorted/unit_00C55FD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C55FD0..00C56140, 6 functions

#include "mgrr.h"

// 00C55FD0  FUN_00c55fd0  size=57  [run]
void __fastcall FUN_00c55fd0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00c3f310();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C56010  FUN_00c56010  size=65  [run]
void __fastcall FUN_00c56010(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C56060  FUN_00c56060  size=92  [run]
undefined4 __thiscall FUN_00c56060(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x50 + 0x50,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x50 + iVar1;
  FUN_00c4c870();
  return 1;
}

// 00C560E0  FUN_00c560e0  size=38  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00c560e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00C56110  FUN_00c56110  size=36  [run]
void __fastcall FUN_00c56110(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00c4c940();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00C56140  FUN_00c56140  size=145  [run]
int * FUN_00c56140(void)

{
  int *_Dst;
  int iVar1;
  
  _Dst = (int *)FUN_00dd2bc0();
  if (_Dst != (int *)0x0) {
    _memset(_Dst,0,0x5c);
    *_Dst = 0;
    _Dst[1] = 0;
    _Dst[2] = 0;
    _Dst[3] = -0x40800000;
    _Dst[5] = 0x3f800000;
    _Dst[9] = 0x3f800000;
    _Dst[6] = 0;
    _Dst[0x14] = 0x3f800000;
    _Dst[10] = 0;
    _Dst[0xb] = 0;
    iVar1 = FUN_00c3ff60(_Dst);
    if (iVar1 != 0) {
      if (*_Dst == 0) {
        *_Dst = iVar1;
        return _Dst;
      }
      FUN_00c40020(iVar1);
    }
    FUN_00c40020(*_Dst);
    if ((undefined4 *)_Dst[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)_Dst[2])(1);
    }
    FUN_00dd4920(_Dst);
  }
  return (int *)0x0;
}

