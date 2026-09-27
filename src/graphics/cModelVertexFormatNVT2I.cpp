// src/graphics/cModelVertexFormatNVT2I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FB50..00F94440, 3 functions

#include "mgrr.h"
#include "cModelVertexFormatNVT2I.h"

// 00F8FB50  cModelVertexFormatNVT2I::cModelVertexFormatNVT2I  size=18  [class]
undefined4 * __fastcall cModelVertexFormatNVT2I::cModelVertexFormatNVT2I(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00F90880  cModelVertexFormatNVT2I::vf00  size=11  [class]
void cModelVertexFormatNVT2I::vf00(void)

{
  FUN_00f9f050(&DAT_016eb010);
  return;
}

// 00F94440  cModelVertexFormatNVT2I::vf04  size=30  [class]
undefined4 __thiscall cModelVertexFormatNVT2I::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

