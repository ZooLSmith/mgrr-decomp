// src/graphics/cModelVertexFormatN1I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F700..00F94160, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatN1I.h"

// 00F8F700  cModelVertexFormatN1I::cModelVertexFormatN1I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatN1I::cModelVertexFormatN1I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F906F0  cModelVertexFormatN1I::vf00  size=11  [class]
void cModelVertexFormatN1I::vf00(void)

{
  FUN_00f9f050(&DAT_016eaa58);
  return;
}

// 00F94160  cModelVertexFormatN1I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatN1I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

