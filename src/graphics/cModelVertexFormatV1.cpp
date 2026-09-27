// src/graphics/cModelVertexFormatV1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F4F0..00F94000, 3 functions

#include "types.h"

// 00F8F4F0  cModelVertexFormatV1::cModelVertexFormatV1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatV1::cModelVertexFormatV1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90670  cModelVertexFormatV1::vf00  size=11  [class]
void cModelVertexFormatV1::vf00(void)

{
  FUN_00f9f050(&DAT_016ea908);
  return;
}

// 00F94000  cModelVertexFormatV1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatV1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

