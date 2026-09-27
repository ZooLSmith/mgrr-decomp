// src/graphics/cModelVertexFormatB.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F6D0..00F94140, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatB.h"

// 00F8F6D0  cModelVertexFormatB::cModelVertexFormatB  size=18  [class]
undefined4 * __fastcall cModelVertexFormatB::cModelVertexFormatB(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F906E0  cModelVertexFormatB::vf00  size=11  [class]
void cModelVertexFormatB::vf00(void)

{
  FUN_00f9f050(&DAT_016eaa38);
  return;
}

// 00F94140  cModelVertexFormatB::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatB::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

