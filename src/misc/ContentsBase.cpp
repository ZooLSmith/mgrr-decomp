// src/misc/ContentsBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DC280..008DCB10, 4 functions

#include "types.h"

// 008DC280  ContentsBase::ContentsBase  size=34  [class]
void __thiscall
ContentsBase::ContentsBase(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = vftable;
  param_1[2] = param_3;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  return;
}

// 008DC2B0  ContentsBase::vf00  size=6  [class]
undefined * ContentsBase::vf00(void)

{
  return &DAT_01b35d64;
}

// 008DC2C0  ContentsBase::ContentsBase_2  size=7  [class]
void __fastcall ContentsBase::ContentsBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 008DCB10  ContentsBase::vf04  size=31  [class]
undefined4 * __thiscall ContentsBase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

