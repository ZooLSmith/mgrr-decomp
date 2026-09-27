// src/unsorted/unit_009CF770.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CF770..009CF830, 3 functions

#include "mgrr.h"

// 009CF770  FUN_009cf770  size=31  [run]
void __fastcall FUN_009cf770(int param_1)

{
  FUN_00f59e50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 009CF7C0  FUN_009cf7c0  size=50  [run]
void __thiscall FUN_009cf7c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a099d0(param_3);
  FUN_00a097d0(*(undefined4 *)(param_1 + 0x490),0);
  return;
}

// 009CF830  FUN_009cf830  size=180  [run]
undefined4
FUN_009cf830(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,int param_12)

{
  undefined4 uVar1;
  
  if (param_12 == 0) {
    return 0;
  }
  FUN_00a0b820(param_10);
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_009cf864;
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_00a0b950(uVar1);
LAB_009cf864:
  FUN_00a0b5b0();
  FUN_00a0b990(param_11);
  FUN_00a0b860(param_1);
  FUN_00a0ba10(param_2);
  if (param_7 == 0) {
    *(uint *)(param_12 + 0x364) = *(uint *)(param_12 + 0x364) & 0xffffffef;
  }
  else {
    *(uint *)(param_12 + 0x364) = *(uint *)(param_12 + 0x364) | 0x10;
  }
  FUN_00a0bb60(param_9);
  FUN_00a0ba60(param_5);
  FUN_00a13340(param_6);
  if (param_8 != 0) {
    FUN_00a0b7c0(1);
  }
  return 1;
}

