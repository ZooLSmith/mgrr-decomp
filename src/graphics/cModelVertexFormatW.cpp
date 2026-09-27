// src/graphics/cModelVertexFormatW.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F5E0..00F940A0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatW.h"

// 00F8F5E0  cModelVertexFormatW::cModelVertexFormatW  size=18  [class]
undefined4 * __fastcall cModelVertexFormatW::cModelVertexFormatW(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90620  cModelVertexFormatW::vf00  size=11  [class]
void cModelVertexFormatW::vf00(void)

{
  FUN_00f9f050(&DAT_016ea7fc);
  return;
}

// 00F940A0  cModelVertexFormatW::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatW::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

