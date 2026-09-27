// src/graphics/cModelVertexFormatN2I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F760..00F941A0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatN2I.h"

// 00F8F760  cModelVertexFormatN2I::cModelVertexFormatN2I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatN2I::cModelVertexFormatN2I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F907B0  cModelVertexFormatN2I::vf00  size=11  [class]
void cModelVertexFormatN2I::vf00(void)

{
  FUN_00f9f050(&DAT_016eace0);
  return;
}

// 00F941A0  cModelVertexFormatN2I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatN2I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

