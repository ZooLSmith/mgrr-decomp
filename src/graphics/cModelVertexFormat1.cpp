// src/graphics/cModelVertexFormat1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8F490..00F93FC0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormat1.h"

// 00F8F490  cModelVertexFormat1::cModelVertexFormat1  size=18  [class]
undefined4 * __fastcall cModelVertexFormat1::cModelVertexFormat1(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90600  cModelVertexFormat1::vf00  size=11  [class]
void cModelVertexFormat1::vf00(void)

{
  FUN_00f9f050(&DAT_016ea7ac);
  return;
}

// 00F93FC0  cModelVertexFormat1::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormat1::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

