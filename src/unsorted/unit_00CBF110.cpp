// src/unsorted/unit_00CBF110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF110..00CBF180, 3 functions

#include "types.h"

// 00CBF110  FUN_00cbf110  size=49  [run]
void __fastcall FUN_00cbf110(int param_1)

{
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CBF150  FUN_00cbf150  size=35  [run]
void __fastcall FUN_00cbf150(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x14) + 0x28);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x28);
    *puVar1 = *puVar1 | 0x20000000;
  }
  return;
}

// 00CBF180  FUN_00cbf180  size=291  [run]
void __thiscall FUN_00cbf180(int param_1,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x24);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(*(float *)(param_1 + 0x84) * param_2,0);
    *(float *)(iVar2 + 0xc4) = (float)fVar3;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(*(float *)(param_1 + 0x88) * param_3,0);
    *(float *)(iVar2 + 0xc4) = (float)fVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(*(float *)(param_1 + 0x88) * param_3,0);
    *(float *)(iVar2 + 0xc4) = (float)fVar3;
    return;
  }
  return;
}

