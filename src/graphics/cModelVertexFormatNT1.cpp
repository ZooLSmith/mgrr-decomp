// src/graphics/cModelVertexFormatNT1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F790..00F941C0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNT1.h"

// 00F8F790  cModelVertexFormatNT1::cModelVertexFormatNT1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNT1::cModelVertexFormatNT1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90700  cModelVertexFormatNT1::vf00  size=11  [class]
void cModelVertexFormatNT1::vf00(void)

{
  FUN_00f9f050(&DAT_016eaa98);
  return;
}

// 00F941C0  cModelVertexFormatNT1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNT1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

