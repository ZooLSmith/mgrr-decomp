// src/graphics/cModelVertexFormatV2_B.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F580..00F94060, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatV2_B.h"

// 00F8F580  cModelVertexFormatV2_B::cModelVertexFormatV2_B  size=18  [class]
undefined4 * __fastcall cModelVertexFormatV2_B::cModelVertexFormatV2_B(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F906A0  cModelVertexFormatV2_B::vf00  size=11  [class]
void cModelVertexFormatV2_B::vf00(void)

{
  FUN_00f9f050(&DAT_016ea9a0);
  return;
}

// 00F94060  cModelVertexFormatV2_B::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatV2_B::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

