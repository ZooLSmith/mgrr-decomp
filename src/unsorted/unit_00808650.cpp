// src/unsorted/unit_00808650.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00808650..008087F0, 4 functions

#include "types.h"

// 00808650  FUN_00808650  size=43  [run]
void __thiscall FUN_00808650(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00e26e90();
  FUN_00e35de0(param_1 + 0x98,param_2,param_3);
  return;
}

// 008086D0  FUN_008086d0  size=35  [run]
bool __fastcall FUN_008086d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 008087C0  FUN_008087c0  size=38  [run]
void __fastcall FUN_008087c0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1be0) + 8))(0x41200000,0,0);
  return;
}

// 008087F0  FUN_008087f0  size=32  [run]
void FUN_008087f0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

