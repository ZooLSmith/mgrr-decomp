// src/unsorted/unit_00E9A310.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9A310..00E9A4B0, 6 functions

#include "types.h"

// 00E9A310  FUN_00e9a310  size=42  [run]
void __fastcall FUN_00e9a310(int param_1)

{
  FUN_00e9a0f0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E9A360  FUN_00e9a360  size=59  [run]
undefined4 __thiscall FUN_00e9a360(int *param_1,int param_2,int param_3)

{
  char cVar1;
  
  FUN_00e9a0f0();
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_2);
    if (cVar1 == '\0') break;
    param_2 = param_2 + 0xc;
  }
  return 0;
}

// 00E9A3A0  FUN_00e9a3a0  size=42  [run]
void __fastcall FUN_00e9a3a0(int param_1)

{
  FUN_00e9a230();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E9A3D0  FUN_00e9a3d0  size=59  [run]
undefined4 __thiscall FUN_00e9a3d0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  
  FUN_00e9a230();
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_2);
    if (cVar1 == '\0') break;
    param_2 = param_2 + 4;
  }
  return 0;
}

// 00E9A490  FUN_00e9a490  size=18  [run]
void __fastcall FUN_00e9a490(int param_1)

{
  FUN_00e9a0f0();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E9A4B0  FUN_00e9a4b0  size=34  [run]
int __thiscall FUN_00e9a4b0(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00e9a0f0();
  *(undefined4 *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 0xc) = param_3 / 0xc;
  return param_3 * -0x55555555;
}

