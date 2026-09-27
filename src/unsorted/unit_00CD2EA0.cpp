// src/unsorted/unit_00CD2EA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD2EA0..00CD2FF0, 5 functions

#include "mgrr.h"

// 00CD2EA0  FUN_00cd2ea0  size=45  [run]
void __thiscall FUN_00cd2ea0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00cb7fe0(param_2);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

// 00CD2ED0  FUN_00cd2ed0  size=53  [run]
void __thiscall FUN_00cd2ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_00cb7fe0(param_2);
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x54) = 1;
  return;
}

// 00CD2F90  FUN_00cd2f90  size=59  [run]
void __thiscall FUN_00cd2f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x48) = 3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00cb7fe0(param_2);
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x54) = 1;
  return;
}

// 00CD2FD0  FUN_00cd2fd0  size=23  [run]
void __fastcall FUN_00cd2fd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00cb7fe0();
  return;
}

// 00CD2FF0  FUN_00cd2ff0  size=59  [run]
void __thiscall FUN_00cd2ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00cb7fe0(param_2);
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x54) = 1;
  return;
}

