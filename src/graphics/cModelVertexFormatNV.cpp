// src/graphics/cModelVertexFormatNV.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F850..00F94240, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNV.h"

// 00F8F850  cModelVertexFormatNV::cModelVertexFormatNV  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNV::cModelVertexFormatNV(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90720  cModelVertexFormatNV::vf00  size=11  [class]
void cModelVertexFormatNV::vf00(void)

{
  FUN_00f9f050(&DAT_016eab10);
  return;
}

// 00F94240  cModelVertexFormatNV::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNV::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

