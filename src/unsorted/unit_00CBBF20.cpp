// src/unsorted/unit_00CBBF20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBF20..00CBBF70, 2 functions

#include "types.h"

// 00CBBF20  FUN_00cbbf20  size=41  [run]
char * FUN_00cbbf20(uint param_1)

{
  if ((param_1 < 0x10a02) && ((0x109ff < param_1 || ((0x107ff < param_1 && (param_1 < 0x10802))))))
  {
    return "HUD_TYPE_03";
  }
  return (char *)0x0;
}

// 00CBBF70  FUN_00cbbf70  size=27  [run]
void __fastcall FUN_00cbbf70(int param_1)

{
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

