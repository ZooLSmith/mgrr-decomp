// src/unsorted/unit_008F9160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F9160..008F91A0, 2 functions

#include "types.h"

// 008F9160  FUN_008f9160  size=57  [run]
void __thiscall FUN_008f9160(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  puVar4 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 008F91A0  FUN_008f91a0  size=75  [run]
void __thiscall FUN_008f91a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

