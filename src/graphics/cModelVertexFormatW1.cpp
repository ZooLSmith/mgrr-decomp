// src/graphics/cModelVertexFormatW1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F610..00F940C0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatW1.h"

// 00F8F610  cModelVertexFormatW1::cModelVertexFormatW1  size=18  [class]
undefined4 * __fastcall cModelVertexFormatW1::cModelVertexFormatW1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90630  cModelVertexFormatW1::vf00  size=11  [class]
void cModelVertexFormatW1::vf00(void)

{
  FUN_00f9f050(&DAT_016ea81c);
  return;
}

// 00F940C0  cModelVertexFormatW1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatW1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

