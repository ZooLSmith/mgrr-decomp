// src/graphics/cModelVertexFormatNV1I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F8E0..00F942A0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNV1I.h"

// 00F8F8E0  cModelVertexFormatNV1I::cModelVertexFormatNV1I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNV1I::cModelVertexFormatNV1I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90750  cModelVertexFormatNV1I::vf00  size=11  [class]
void cModelVertexFormatNV1I::vf00(void)

{
  FUN_00f9f050(&DAT_016eaba0);
  return;
}

// 00F942A0  cModelVertexFormatNV1I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNV1I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

