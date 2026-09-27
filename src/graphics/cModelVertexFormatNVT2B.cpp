// src/graphics/cModelVertexFormatNVT2B.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FB80..00F94460, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVT2B.h"

// 00F8FB80  cModelVertexFormatNVT2B::cModelVertexFormatNVT2B  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVT2B::cModelVertexFormatNVT2B(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90890  cModelVertexFormatNVT2B::vf00  size=11  [class]
void cModelVertexFormatNVT2B::vf00(void)

{
  FUN_00f9f050(&DAT_016eb070);
  return;
}

// 00F94460  cModelVertexFormatNVT2B::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVT2B::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

