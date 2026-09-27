// src/misc/stKogekkoCamParamNormal.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F5660..00A90D30, 3 functions

#include "mgrr.h"
#include "stKogekkoCamParamNormal.h"

// 005F5660  stKogekkoCamParamNormal::vf04  size=104  [class]
void __fastcall stKogekkoCamParamNormal::vf04(int param_1)

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
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x38) = 0x40400000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3e428f5c;
  *(undefined4 *)(param_1 + 0x40) = 0x3e19999a;
  return;
}

// 00A90AF0  stKogekkoCamParamNormal::stKogekkoCamParamNormal  size=18  [class]
undefined4 * __fastcall stKogekkoCamParamNormal::stKogekkoCamParamNormal(undefined4 *param_1)

{
  stKogekkoCamParamBase::stKogekkoCamParamBase();
  *param_1 = vftable;
  return param_1;
}

// 00A90D30  stKogekkoCamParamNormal::vf00  size=30  [class]
undefined4 __thiscall stKogekkoCamParamNormal::vf00(undefined4 param_1,byte param_2)

{
  stKogekkoCamParamBase::stKogekkoCamParamBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

