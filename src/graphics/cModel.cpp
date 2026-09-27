// src/graphics/cModel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A19480..00A196F0, 3 functions

#include "types.h"

// 00A19480  cModel::cModel  size=179  [class]
undefined4 * __fastcall cModel::cModel(undefined4 *param_1)

{
  cModelBase::cModelBase();
  *param_1 = vftable;
  param_1[0x117] = 0x3f800000;
  param_1[0x118] = 0x3e99999a;
  param_1[0x119] = 1;
  param_1[0x11a] = 0xffffffff;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0xff000000;
  FUN_00a2b3c0();
  param_1[0xdc] = 0;
  param_1[0x116] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x113) = 0x2ff;
  *(undefined1 *)((int)param_1 + 0x44e) = 0xff;
  param_1[0x120] = 0xffffffff;
  return param_1;
}

// 00A19540  cModel::~cModel  size=88  [class]
void __fastcall cModel::~cModel(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00a17b70();
  *(undefined2 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)((int)param_1 + 0x472) = 0;
  *(undefined1 *)((int)param_1 + 0x473) = 0xff;
  param_1[0x11a] = 0xffffffff;
  param_1[0x119] = 1;
  param_1[0x11b] = 0;
  param_1[0x117] = 0x3f800000;
  param_1[0x118] = 0x3e99999a;
  cParts::cParts();
  return;
}

// 00A196F0  cModel::vf00  size=30  [class]
undefined4 __thiscall cModel::vf00(undefined4 param_1,byte param_2)

{
  ~cModel();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

