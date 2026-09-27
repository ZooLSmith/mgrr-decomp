// src/graphics/cModelVertexFormatNVTW1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FBB0..00F94480, 3 functions

#include "types.h"

// 00F8FBB0  cModelVertexFormatNVTW1::cModelVertexFormatNVTW1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVTW1::cModelVertexFormatNVTW1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90790  cModelVertexFormatNVTW1::vf00  size=11  [class]
void cModelVertexFormatNVTW1::vf00(void)

{
  FUN_00f9f050(&DAT_016eac78);
  return;
}

// 00F94480  cModelVertexFormatNVTW1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVTW1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

