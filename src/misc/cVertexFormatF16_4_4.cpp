// src/misc/cVertexFormatF16_4_4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC48F0..00ECC300, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_4_4.h"

// 00EC48F0  cVertexFormatF16_4_4::vf00  size=11  [class]
void cVertexFormatF16_4_4::vf00(void)

{
  FUN_00f9f050(&DAT_016d92c0);
  return;
}

// 00ECC2D0  cVertexFormatF16_4_4::cVertexFormatF16_4_4  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_4_4::cVertexFormatF16_4_4(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC300  cVertexFormatF16_4_4::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_4_4::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

