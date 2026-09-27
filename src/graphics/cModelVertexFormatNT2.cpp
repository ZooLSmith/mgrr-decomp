// src/graphics/cModelVertexFormatNT2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F7F0..00F94200, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNT2.h"

// 00F8F7F0  cModelVertexFormatNT2::cModelVertexFormatNT2  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNT2::cModelVertexFormatNT2(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90800  cModelVertexFormatNT2::vf00  size=11  [class]
void cModelVertexFormatNT2::vf00(void)

{
  FUN_00f9f050(&DAT_016eae28);
  return;
}

// 00F94200  cModelVertexFormatNT2::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNT2::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

