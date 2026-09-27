// src/unsorted/unit_009911F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009911F0..00991210, 2 functions

#include "types.h"

// 009911F0  FUN_009911f0  size=23  [run]
void __fastcall FUN_009911f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00de4500("ui_menu_keyinfo.mkd");
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

// 00991210  FUN_00991210  size=17  [run]
void __thiscall FUN_00991210(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}

