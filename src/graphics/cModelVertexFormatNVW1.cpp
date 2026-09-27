// src/graphics/cModelVertexFormatNVW1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FA00..00F94360, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVW1.h"

// 00F8FA00  cModelVertexFormatNVW1::cModelVertexFormatNVW1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVW1::cModelVertexFormatNVW1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F908B0  cModelVertexFormatNVW1::vf00  size=11  [class]
void cModelVertexFormatNVW1::vf00(void)

{
  FUN_00f9f050(&DAT_016eb0d8);
  return;
}

// 00F94360  cModelVertexFormatNVW1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVW1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

