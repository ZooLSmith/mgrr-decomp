// src/graphics/cModelVertexFormatNVW.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F9D0..00F94340, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVW.h"

// 00F8F9D0  cModelVertexFormatNVW::cModelVertexFormatNVW  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVW::cModelVertexFormatNVW(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F908A0  cModelVertexFormatNVW::vf00  size=11  [class]
void cModelVertexFormatNVW::vf00(void)

{
  FUN_00f9f050(&DAT_016eb0a8);
  return;
}

// 00F94340  cModelVertexFormatNVW::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVW::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

