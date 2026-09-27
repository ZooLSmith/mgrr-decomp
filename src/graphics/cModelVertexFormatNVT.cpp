// src/graphics/cModelVertexFormatNVT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FA60..00F943A0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVT.h"

// 00F8FA60  cModelVertexFormatNVT::cModelVertexFormatNVT  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVT::cModelVertexFormatNVT(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90830  cModelVertexFormatNVT::vf00  size=11  [class]
void cModelVertexFormatNVT::vf00(void)

{
  FUN_00f9f050(&DAT_016eaee8);
  return;
}

// 00F943A0  cModelVertexFormatNVT::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVT::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

