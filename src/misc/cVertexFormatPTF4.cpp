// src/misc/cVertexFormatPTF4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4850..00ECBFE0, 3 functions

#include "types.h"

// 00EC4850  cVertexFormatPTF4::vf00  size=11  [class]
void cVertexFormatPTF4::vf00(void)

{
  FUN_00f9f050(&DAT_016d9180);
  return;
}

// 00ECBFB0  cVertexFormatPTF4::cVertexFormatPTF4  size=18  [class]
undefined4 * __fastcall cVertexFormatPTF4::cVertexFormatPTF4(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECBFE0  cVertexFormatPTF4::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatPTF4::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

