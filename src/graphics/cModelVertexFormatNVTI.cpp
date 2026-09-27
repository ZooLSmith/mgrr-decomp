// src/graphics/cModelVertexFormatNVTI.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FA90..00F943C0, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVTI.h"

// 00F8FA90  cModelVertexFormatNVTI::cModelVertexFormatNVTI  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVTI::cModelVertexFormatNVTI(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90840  cModelVertexFormatNVTI::vf00  size=11  [class]
void cModelVertexFormatNVTI::vf00(void)

{
  FUN_00f9f050(&DAT_016eaf10);
  return;
}

// 00F943C0  cModelVertexFormatNVTI::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVTI::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

