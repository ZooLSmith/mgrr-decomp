// src/unsorted/unit_00B2F270.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B2F270..00B2F3A0, 2 functions

#include "types.h"

// 00B2F270  FUN_00b2f270  size=284  [run]
void __fastcall FUN_00b2f270(int param_1)

{
  int iVar1;
  int *piVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_00b2f28a_caseD_1;
  case 2:
    *(undefined4 *)(param_1 + 0x19c0) = 1;
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    FUN_00aa4080(0x397,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    piVar2 = (int *)FUN_00c209f0();
    (**(code **)(*piVar2 + 0x14))(10);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  FUN_00aa4080(0x396,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_00b2f28a_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00B2F3A0  FUN_00b2f3a0  size=123  [run]
void __fastcall FUN_00b2f3a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x19c8) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    FUN_009fdde0();
    return;
  }
  return;
}

