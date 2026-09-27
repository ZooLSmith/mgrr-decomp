// src/misc/cVertexFormatPTTC2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC48B0..00ECC1C0, 3 functions

#include "mgrr.h"
#include "cVertexFormatPTTC2.h"

// 00EC48B0  cVertexFormatPTTC2::vf00  size=11  [class]
void cVertexFormatPTTC2::vf00(void)

{
  FUN_00f9f050(&DAT_016d9238);
  return;
}

// 00ECC190  cVertexFormatPTTC2::cVertexFormatPTTC2  size=18  [class]
undefined4 * __fastcall cVertexFormatPTTC2::cVertexFormatPTTC2(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC1C0  cVertexFormatPTTC2::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatPTTC2::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

