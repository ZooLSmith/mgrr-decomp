// src/graphics/cModelVertexFormatNW1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FC40..00F944E0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNW1.h"

// 00F8FC40  cModelVertexFormatNW1::cModelVertexFormatNW1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNW1::cModelVertexFormatNW1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90770  cModelVertexFormatNW1::vf00  size=11  [class]
void cModelVertexFormatNW1::vf00(void)

{
  FUN_00f9f050(&DAT_016eac18);
  return;
}

// 00F944E0  cModelVertexFormatNW1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNW1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

