// src/misc/cVertexFormatF16_PRXX.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC48E0..00ECC2B0, 3 functions

#include "mgrr.h"
#include "cVertexFormatF16_PRXX.h"

// 00EC48E0  cVertexFormatF16_PRXX::vf00  size=11  [class]
void cVertexFormatF16_PRXX::vf00(void)

{
  FUN_00f9f050(&DAT_016d92a8);
  return;
}

// 00ECC280  cVertexFormatF16_PRXX::cVertexFormatF16_PRXX  size=18  [class]
undefined4 * __fastcall cVertexFormatF16_PRXX::cVertexFormatF16_PRXX(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC2B0  cVertexFormatF16_PRXX::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatF16_PRXX::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

