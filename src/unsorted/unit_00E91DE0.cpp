// src/unsorted/unit_00E91DE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E91DE0..00E91F50, 3 functions

#include "mgrr.h"

// 00E91DE0  FUN_00e91de0  size=65  [run]
void FUN_00e91de0(undefined4 *param_1)

{
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    FUN_00e91de0(param_1[1]);
  }
  if (*(char *)(param_1[2] + 0xd) == '\0') {
    FUN_00e91de0(param_1[2]);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 00E91EE0  FUN_00e91ee0  size=38  [run]
void __fastcall FUN_00e91ee0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(0);
    FUN_00dd48d0(*param_1,0);
    *param_1 = 0;
  }
  return;
}

// 00E91F50  FUN_00e91f50  size=59  [run]
int FUN_00e91f50(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00e04240();
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_00e05b60(*param_1);
    if (cVar1 != '\0') break;
    iVar2 = FUN_00e04220();
  }
  return iVar2;
}

