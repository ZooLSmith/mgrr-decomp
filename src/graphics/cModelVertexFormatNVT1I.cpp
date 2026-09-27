// src/graphics/cModelVertexFormatNVT1I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FAF0..00F94400, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVT1I.h"

// 00F8FAF0  cModelVertexFormatNVT1I::cModelVertexFormatNVT1I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVT1I::cModelVertexFormatNVT1I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90860  cModelVertexFormatNVT1I::vf00  size=11  [class]
void cModelVertexFormatNVT1I::vf00(void)

{
  FUN_00f9f050(&DAT_016eaf88);
  return;
}

// 00F94400  cModelVertexFormatNVT1I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVT1I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

