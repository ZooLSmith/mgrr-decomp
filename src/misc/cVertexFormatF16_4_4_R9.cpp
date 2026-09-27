// src/misc/cVertexFormatF16_4_4_R9.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4980..00ECC5D0, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_4_4_R9.h"

// 00EC4980  cVertexFormatF16_4_4_R9::vf00  size=11  [class]
void cVertexFormatF16_4_4_R9::vf00(void)

{
  FUN_00f9f050(&DAT_016d9428);
  return;
}

// 00ECC5A0  cVertexFormatF16_4_4_R9::cVertexFormatF16_4_4_R9  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_4_4_R9::cVertexFormatF16_4_4_R9(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC5D0  cVertexFormatF16_4_4_R9::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_4_4_R9::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

