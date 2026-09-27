// src/unsorted/unit_00A87CB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A87CB0..00A87D50, 2 functions

#include "types.h"

// 00A87CB0  FUN_00a87cb0  size=146  [run]
void __thiscall FUN_00a87cb0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_3 + 1);
    *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)((int)param_3 + 6);
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    puVar1[4] = param_3[4];
    puVar1[5] = param_3[5];
    puVar1[6] = param_3[6];
    puVar1[7] = param_3[7];
    puVar1[8] = param_3[8];
    puVar1[9] = param_3[9];
    *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(param_3 + 10);
    *(undefined2 *)((int)puVar1 + 0x2a) = *(undefined2 *)((int)param_3 + 0x2a);
    puVar1[0xb] = param_3[0xb];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00A87D50  FUN_00a87d50  size=63  [run]
void __fastcall FUN_00a87d50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

