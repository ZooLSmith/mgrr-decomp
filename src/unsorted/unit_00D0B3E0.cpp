// src/unsorted/unit_00D0B3E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0B3E0..00D0B550, 4 functions

#include "mgrr.h"

// 00D0B3E0  FUN_00d0b3e0  size=65  [run]
void __fastcall FUN_00d0b3e0(undefined4 *param_1)

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

// 00D0B4A0  FUN_00d0b4a0  size=65  [run]
void __fastcall FUN_00d0b4a0(undefined4 *param_1)

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

// 00D0B4F0  FUN_00d0b4f0  size=93  [run]
undefined4 __thiscall FUN_00d0b4f0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00cf62f0();
  return 1;
}

// 00D0B550  FUN_00d0b550  size=103  [run]
int * __thiscall FUN_00d0b550(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 4);
  iVar2 = *(int *)(*param_3 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_3 + 4) = iVar2;
  *(int *)(*param_3 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

