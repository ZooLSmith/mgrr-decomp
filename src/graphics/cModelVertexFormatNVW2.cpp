// src/graphics/cModelVertexFormatNVW2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FA30..00F94380, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVW2.h"

// 00F8FA30  cModelVertexFormatNVW2::cModelVertexFormatNVW2  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVW2::cModelVertexFormatNVW2(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F908C0  cModelVertexFormatNVW2::vf00  size=11  [class]
void cModelVertexFormatNVW2::vf00(void)

{
  FUN_00f9f050(&DAT_016eb110);
  return;
}

// 00F94380  cModelVertexFormatNVW2::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVW2::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

