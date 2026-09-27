// src/graphics/cModelVertexFormatNV1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F8B0..00F94280, 3 functions

#include "types.h"

// 00F8F8B0  cModelVertexFormatNV1::cModelVertexFormatNV1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNV1::cModelVertexFormatNV1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90740  cModelVertexFormatNV1::vf00  size=11  [class]
void cModelVertexFormatNV1::vf00(void)

{
  FUN_00f9f050(&DAT_016eab78);
  return;
}

// 00F94280  cModelVertexFormatNV1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNV1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

