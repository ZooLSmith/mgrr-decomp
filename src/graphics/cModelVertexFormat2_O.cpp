// src/graphics/cModelVertexFormat2_O.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FD00..00F94560, 3 functions

#include "mgrr.h"
#include "cModelVertexFormat2_O.h"

// 00F8FD00  cModelVertexFormat2_O::cModelVertexFormat2_O  size=18  [class]
undefined4 * __fastcall cModelVertexFormat2_O::cModelVertexFormat2_O(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F908D0  cModelVertexFormat2_O::vf00  size=11  [class]
void cModelVertexFormat2_O::vf00(void)

{
  FUN_00f9f050(&DAT_016eb150);
  return;
}

// 00F94560  cModelVertexFormat2_O::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormat2_O::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

