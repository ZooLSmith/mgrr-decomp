// src/unsorted/unit_00CCA5A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCA5A0..00CCA700, 3 functions

#include "types.h"

// 00CCA5A0  FUN_00cca5a0  size=104  [run]
int __thiscall FUN_00cca5a0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = FUN_00932720();
    if (*(int *)(param_1 + 0xe8) == iVar1) {
      param_2 = (param_2 != 1) + 1;
    }
    else {
      iVar1 = FUN_00932720();
      if (*(int *)(param_1 + 0x1bc) == iVar1) {
        param_2 = 2 - (uint)(param_2 != 1);
      }
    }
  }
  param_1 = param_2 * 0xd4 + 0xc + param_1;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    return param_1 + 0x38;
  }
  return 0;
}

// 00CCA690  FUN_00cca690  size=98  [run]
void FUN_00cca690(char *param_1,rsize_t param_2,undefined4 param_3,undefined4 param_4)

{
  char local_144 [64];
  undefined1 local_104 [260];
  
  FUN_00df8090(local_104,0x104,param_3);
  FUN_00cad960(local_144,0x40,local_104,param_4);
  _strcpy_s(param_1,param_2,local_144);
  return;
}

// 00CCA700  FUN_00cca700  size=98  [run]
void FUN_00cca700(char *param_1,rsize_t param_2,undefined4 param_3,undefined4 param_4)

{
  char local_144 [64];
  undefined1 local_104 [260];
  
  FUN_00df8090(local_104,0x104,param_3);
  FUN_00cada50(local_144,0x40,local_104,param_4);
  _strcpy_s(param_1,param_2,local_144);
  return;
}

