// src/misc/cVertexFormatF16_PRRR.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC48C0..00ECC210, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_PRRR.h"

// 00EC48C0  cVertexFormatF16_PRRR::vf00  size=11  [class]
void cVertexFormatF16_PRRR::vf00(void)

{
  FUN_00f9f050(&DAT_016d9260);
  return;
}

// 00ECC1E0  cVertexFormatF16_PRRR::cVertexFormatF16_PRRR  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_PRRR::cVertexFormatF16_PRRR(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC210  cVertexFormatF16_PRRR::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_PRRR::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

