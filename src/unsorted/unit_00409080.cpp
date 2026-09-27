// src/unsorted/unit_00409080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00409080..004090D0, 4 functions

#include "mgrr.h"

// 00409080  FUN_00409080  size=8  [run]
void __fastcall FUN_00409080(int param_1)

{
  *(undefined1 *)(param_1 + 0xb34) = 1;
  return;
}

// 004090A0  FUN_004090a0  size=13  [run]
void __thiscall FUN_004090a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb30) = param_2;
  return;
}

// 004090B0  FUN_004090b0  size=7  [run]
undefined4 __fastcall FUN_004090b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb30);
}

// 004090D0  FUN_004090d0  size=21  [run]
void __thiscall FUN_004090d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb48) = param_2;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  return;
}

