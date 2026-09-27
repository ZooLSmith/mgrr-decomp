// src/graphics/cModelVertexFormatNVT1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FAC0..00F943E0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVT1.h"

// 00F8FAC0  cModelVertexFormatNVT1::cModelVertexFormatNVT1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVT1::cModelVertexFormatNVT1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90850  cModelVertexFormatNVT1::vf00  size=11  [class]
void cModelVertexFormatNVT1::vf00(void)

{
  FUN_00f9f050(&DAT_016eaf58);
  return;
}

// 00F943E0  cModelVertexFormatNVT1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVT1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

