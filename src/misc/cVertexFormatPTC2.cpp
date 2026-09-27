// src/misc/cVertexFormatPTC2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4890..00ECC120, 3 functions

#include "mgrr.h"
#include "cVertexFormatPTC2.h"

// 00EC4890  cVertexFormatPTC2::vf00  size=11  [class]
void cVertexFormatPTC2::vf00(void)

{
  FUN_00f9f050(&DAT_016d91f0);
  return;
}

// 00ECC0F0  cVertexFormatPTC2::cVertexFormatPTC2  size=18  [class]
undefined4 * __fastcall cVertexFormatPTC2::cVertexFormatPTC2(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC120  cVertexFormatPTC2::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatPTC2::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

