// src/graphics/cModelVertexFormatNT1I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F7C0..00F941E0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNT1I.h"

// 00F8F7C0  cModelVertexFormatNT1I::cModelVertexFormatNT1I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNT1I::cModelVertexFormatNT1I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90710  cModelVertexFormatNT1I::vf00  size=11  [class]
void cModelVertexFormatNT1I::vf00(void)

{
  FUN_00f9f050(&DAT_016eaac0);
  return;
}

// 00F941E0  cModelVertexFormatNT1I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNT1I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

