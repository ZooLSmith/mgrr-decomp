// src/graphics/cModelVertexFormatN1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F6A0..00F94120, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatN1.h"

// 00F8F6A0  cModelVertexFormatN1::cModelVertexFormatN1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatN1::cModelVertexFormatN1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F906D0  cModelVertexFormatN1::vf00  size=11  [class]
void cModelVertexFormatN1::vf00(void)

{
  FUN_00f9f050(&DAT_016eaa18);
  return;
}

// 00F94120  cModelVertexFormatN1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatN1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

