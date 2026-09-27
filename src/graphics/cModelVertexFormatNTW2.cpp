// src/graphics/cModelVertexFormatNTW2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FCD0..00F94540, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNTW2.h"

// 00F8FCD0  cModelVertexFormatNTW2::cModelVertexFormatNTW2  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNTW2::cModelVertexFormatNTW2(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90640  cModelVertexFormatNTW2::vf00  size=11  [class]
void cModelVertexFormatNTW2::vf00(void)

{
  FUN_00f9f050(&DAT_016ea848);
  return;
}

// 00F94540  cModelVertexFormatNTW2::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNTW2::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

