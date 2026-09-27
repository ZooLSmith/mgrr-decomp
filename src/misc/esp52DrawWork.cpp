// src/misc/esp52DrawWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF6560..00F3FAF0, 2 functions

#include "mgrr.h"
#include "esp52DrawWork.h"

// 00EF6560  esp52DrawWork::draw  size=109  [class]
void __fastcall esp52DrawWork::draw(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00f458a0();
  local_10 = *(undefined4 *)(param_1 + 0x98);
  local_c = 0;
  local_8 = 0;
  local_4 = 0x3f800000;
  FUN_00eb7970(*(undefined4 *)(param_1 + 0x18),&local_10,*(undefined4 *)(param_1 + 0x90),
               *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa4),0,1,1,0);
  return;
}

// 00F3FAF0  esp52DrawWork::vf00  size=31  [class]
undefined4 * __thiscall esp52DrawWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

