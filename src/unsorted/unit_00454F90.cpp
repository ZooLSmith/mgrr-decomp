// src/unsorted/unit_00454F90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00454F90..004552A0, 2 functions

#include "types.h"

// 00454F90  FUN_00454f90  size=741  [run]
void __fastcall FUN_00454f90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_20 [4];
  float local_1c;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    puVar3 = local_20;
    FUN_00a92f90(puVar3);
    FUN_0044fd10(puVar3);
    param_1[0x225] = (int)(local_1c * 0.016666668);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x77,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = (uint)(param_1[0x6ca] != 0) * 2 + 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x8d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 8:
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 9;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 9:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00a8caf0(0x80006,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
  return;
}

// 004552A0  FUN_004552a0  size=741  [run]
void __fastcall FUN_004552a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_20 [4];
  float local_1c;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x7b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    puVar3 = local_20;
    FUN_00a92f90(puVar3);
    FUN_0044fd10(puVar3);
    param_1[0x225] = (int)(local_1c * 0.016666668);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x7c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x7d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = (uint)(param_1[0x6ca] != 0) * 2 + 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x8d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 8:
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 9;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 9:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00a8caf0(0x80006,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
  return;
}

