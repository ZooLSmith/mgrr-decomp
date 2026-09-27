// src/misc/cVertexFormatF16_4_4_R4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4930..00ECC440, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_4_4_R4.h"

// 00EC4930  cVertexFormatF16_4_4_R4::vf00  size=11  [class]
void cVertexFormatF16_4_4_R4::vf00(void)

{
  FUN_00f9f050(&DAT_016d9360);
  return;
}

// 00ECC410  cVertexFormatF16_4_4_R4::cVertexFormatF16_4_4_R4  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_4_4_R4::cVertexFormatF16_4_4_R4(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC440  cVertexFormatF16_4_4_R4::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_4_4_R4::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

