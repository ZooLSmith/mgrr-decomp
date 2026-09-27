// src/graphics/cModelVertexFormatNT2I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F820..00F94220, 3 functions

#include "types.h"

// 00F8F820  cModelVertexFormatNT2I::cModelVertexFormatNT2I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNT2I::cModelVertexFormatNT2I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90810  cModelVertexFormatNT2I::vf00  size=11  [class]
void cModelVertexFormatNT2I::vf00(void)

{
  FUN_00f9f050(&DAT_016eae58);
  return;
}

// 00F94220  cModelVertexFormatNT2I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNT2I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

