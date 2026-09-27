// src/misc/stKogekkoCamParamNarrow.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F56D0..00A90D50, 3 functions

#include "types.h"

// 005F56D0  stKogekkoCamParamNarrow::vf04  size=100  [class]
void __fastcall stKogekkoCamParamNarrow::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f32b8c2;
  *(undefined4 *)(param_1 + 0x38) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f000000;
  return;
}

// 00A90B20  stKogekkoCamParamNarrow::stKogekkoCamParamNarrow  size=18  [class]
undefined4 * __fastcall stKogekkoCamParamNarrow::stKogekkoCamParamNarrow(undefined4 *param_1)

{
  stKogekkoCamParamBase::stKogekkoCamParamBase();
  *param_1 = vftable;
  return param_1;
}

// 00A90D50  stKogekkoCamParamNarrow::vf00  size=30  [class]
undefined4 __thiscall stKogekkoCamParamNarrow::vf00(undefined4 param_1,byte param_2)

{
  stKogekkoCamParamBase::stKogekkoCamParamBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

