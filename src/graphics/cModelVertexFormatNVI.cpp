// src/graphics/cModelVertexFormatNVI.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F880..00F94260, 3 functions

#include "types.h"

// 00F8F880  cModelVertexFormatNVI::cModelVertexFormatNVI  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVI::cModelVertexFormatNVI(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90730  cModelVertexFormatNVI::vf00  size=11  [class]
void cModelVertexFormatNVI::vf00(void)

{
  FUN_00f9f050(&DAT_016eab30);
  return;
}

// 00F94260  cModelVertexFormatNVI::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVI::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

