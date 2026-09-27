// src/graphics/cModelVertexFormatNV2I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F940..00F942E0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNV2I.h"

// 00F8F940  cModelVertexFormatNV2I::cModelVertexFormatNV2I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNV2I::cModelVertexFormatNV2I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F907D0  cModelVertexFormatNV2I::vf00  size=11  [class]
void cModelVertexFormatNV2I::vf00(void)

{
  FUN_00f9f050(&DAT_016ead60);
  return;
}

// 00F942E0  cModelVertexFormatNV2I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNV2I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

