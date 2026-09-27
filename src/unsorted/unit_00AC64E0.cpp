// src/unsorted/unit_00AC64E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC64E0..00AC65E0, 3 functions

#include "mgrr.h"

// 00AC64E0  FUN_00ac64e0  size=75  [run]
void __fastcall FUN_00ac64e0(int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x618) == 1) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x870) + 8);
    *(undefined4 *)(param_1 + 0x9d0) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x9d4) = 0xbf800000;
    (*pcVar1)(0x3f800000,0,0);
    *(undefined4 *)(param_1 + 0x618) = 0;
  }
  return;
}

// 00AC6530  FUN_00ac6530  size=57  [run]
void __fastcall FUN_00ac6530(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 2) {
    (**(code **)(*(int *)(param_1 + 0x920) + 8))(0x3f800000,0,0);
    *(undefined4 *)(param_1 + 0x618) = 0;
  }
  return;
}

// 00AC65E0  FUN_00ac65e0  size=49  [run]
void __thiscall FUN_00ac65e0(int param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_1 + 0x9d0);
  }
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_2[2];
  *(undefined4 *)(param_1 + 0x5c) = param_2[3];
  return;
}

