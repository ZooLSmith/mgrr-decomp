// src/graphics/cModelVertexFormatNVW2_B.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F9A0..00F94320, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVW2_B.h"

// 00F8F9A0  cModelVertexFormatNVW2_B::cModelVertexFormatNVW2_B  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVW2_B::cModelVertexFormatNVW2_B(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F907E0  cModelVertexFormatNVW2_B::vf00  size=11  [class]
void cModelVertexFormatNVW2_B::vf00(void)

{
  FUN_00f9f050(&DAT_016eadb8);
  return;
}

// 00F94320  cModelVertexFormatNVW2_B::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVW2_B::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

