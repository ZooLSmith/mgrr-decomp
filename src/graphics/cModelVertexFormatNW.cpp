// src/graphics/cModelVertexFormatNW.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FC10..00F944C0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNW.h"

// 00F8FC10  cModelVertexFormatNW::cModelVertexFormatNW  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNW::cModelVertexFormatNW(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90760  cModelVertexFormatNW::vf00  size=11  [class]
void cModelVertexFormatNW::vf00(void)

{
  FUN_00f9f050(&DAT_016eabf0);
  return;
}

// 00F944C0  cModelVertexFormatNW::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNW::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

