// src/misc/cVertexFormatF16_4_4_R8.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4970..00ECC580, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_4_4_R8.h"

// 00EC4970  cVertexFormatF16_4_4_R8::vf00  size=11  [class]
void cVertexFormatF16_4_4_R8::vf00(void)

{
  FUN_00f9f050(&DAT_016d9400);
  return;
}

// 00ECC550  cVertexFormatF16_4_4_R8::cVertexFormatF16_4_4_R8  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_4_4_R8::cVertexFormatF16_4_4_R8(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC580  cVertexFormatF16_4_4_R8::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_4_4_R8::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

