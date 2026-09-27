// src/graphics/cModelVertexFormatNI.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F670..00F94100, 3 functions

#include "types.h"

// 00F8F670  cModelVertexFormatNI::cModelVertexFormatNI  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNI::cModelVertexFormatNI(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F906C0  cModelVertexFormatNI::vf00  size=11  [class]
void cModelVertexFormatNI::vf00(void)

{
  FUN_00f9f050(&DAT_016ea9e0);
  return;
}

// 00F94100  cModelVertexFormatNI::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNI::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

