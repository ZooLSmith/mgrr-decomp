// src/misc/cVertexFormatF16_PRXR.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC48D0..00ECC260, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_PRXR.h"

// 00EC48D0  cVertexFormatF16_PRXR::vf00  size=11  [class]
void cVertexFormatF16_PRXR::vf00(void)

{
  FUN_00f9f050(&DAT_016d9288);
  return;
}

// 00ECC230  cVertexFormatF16_PRXR::cVertexFormatF16_PRXR  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_PRXR::cVertexFormatF16_PRXR(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC260  cVertexFormatF16_PRXR::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_PRXR::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

