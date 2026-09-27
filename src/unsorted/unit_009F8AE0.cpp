// src/unsorted/unit_009F8AE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F8AE0..009F8B10, 2 functions

#include "mgrr.h"

// 009F8AE0  FUN_009f8ae0  size=45  [run]
void __thiscall FUN_009f8ae0(int *param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0x135] = *(int *)param_1[0x133];
  param_1[0x136] = param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x3c);
  param_1[0x134] = 1;
                    /* WARNING: Could not recover jumptable at 0x009f8b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 009F8B10  FUN_009f8b10  size=48  [run]
void __fastcall FUN_009f8b10(int *param_1)

{
  code *pcVar1;
  
  if (param_1[0x134] != 0) {
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x136] = param_1[0x135];
    param_1[0x134] = 0;
    (*pcVar1)(*(undefined4 *)param_1[0x133]);
  }
  return;
}

