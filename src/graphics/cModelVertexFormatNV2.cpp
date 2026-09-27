// src/graphics/cModelVertexFormatNV2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F910..00F942C0, 3 functions

#include "types.h"

// 00F8F910  cModelVertexFormatNV2::cModelVertexFormatNV2  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNV2::cModelVertexFormatNV2(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F907C0  cModelVertexFormatNV2::vf00  size=11  [class]
void cModelVertexFormatNV2::vf00(void)

{
  FUN_00f9f050(&DAT_016ead30);
  return;
}

// 00F942C0  cModelVertexFormatNV2::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNV2::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

