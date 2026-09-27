// src/unsorted/unit_00A663E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A663E0..00A66470, 3 functions

#include "types.h"

// 00A663E0  FUN_00a663e0  size=83  [run]
void __fastcall FUN_00a663e0(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 100) != 0)) {
    if (*(int *)(param_1 + 0x68) == 0) {
      cVar1 = FUN_00a65460();
      if (cVar1 != '\x01') {
        return;
      }
      *(undefined4 *)(param_1 + 0x68) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      FUN_00a5b570();
    }
    FUN_00a64460();
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00a65fe0();
      return;
    }
  }
  return;
}

// 00A66440  FUN_00a66440  size=38  [run]
void __fastcall FUN_00a66440(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a0af0 + uVar1) == *(int *)(*param_1 + 0xb0)) {
      FUN_00a663e0();
      return;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  return;
}

// 00A66470  FUN_00a66470  size=237  [run]
void __thiscall FUN_00a66470(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_4;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_018a0af0 + uVar1) == param_2) {
      local_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (param_3 == 0) {
        pcVar3 = "ANTIQ_NOT_INIT";
      }
      else {
        pcVar3 = "ANTIQ_CHANGE_NOT_INIT";
      }
      iVar2 = FUN_00d45e00(pcVar3,&local_4,1);
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_00d45e00("END_UNIT_START",&local_4,0);
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_00d45e00("ANTIQ_RELEASE",&local_4,0);
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 8) = 1;
      }
      local_4 = 0xffffffff;
      iVar2 = FUN_00d45e00("START_UNIT_NOT",&local_4,0);
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
      if (*(int *)(param_1 + 4) == 1) {
        FUN_00a661f0(1,param_2,0);
      }
      return;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  return;
}

