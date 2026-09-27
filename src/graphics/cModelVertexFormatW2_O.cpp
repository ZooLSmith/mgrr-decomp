// src/graphics/cModelVertexFormatW2_O.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FD30..00F94580, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatW2_O.h"

// 00F8FD30  cModelVertexFormatW2_O::cModelVertexFormatW2_O  size=18  [class]
undefined4 * __fastcall cModelVertexFormatW2_O::cModelVertexFormatW2_O(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F908E0  cModelVertexFormatW2_O::vf00  size=11  [class]
void cModelVertexFormatW2_O::vf00(void)

{
  FUN_00f9f050(&DAT_016eb168);
  return;
}

// 00F94580  cModelVertexFormatW2_O::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatW2_O::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

