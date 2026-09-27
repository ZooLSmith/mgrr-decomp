// src/misc/cMeshBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A11AE0..00A158B0, 3 functions

#include "types.h"

// 00A11AE0  cMeshBase::cMeshBase  size=78  [class]
void __fastcall cMeshBase::cMeshBase(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xc] != 0) {
    FUN_00dd4940(param_1[0xc]);
  }
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  return;
}

// 00A11B90  cMeshBase::cMeshBase_2  size=78  [class]
void __fastcall cMeshBase::cMeshBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xc] != 0) {
    FUN_00dd4940(param_1[0xc]);
  }
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  return;
}

// 00A158B0  cMeshBase::vf00  size=98  [class]
undefined4 * __thiscall cMeshBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0xc] != 0) {
    FUN_00dd4940(param_1[0xc]);
  }
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

