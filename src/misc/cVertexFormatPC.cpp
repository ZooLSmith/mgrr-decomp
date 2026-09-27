// src/misc/cVertexFormatPC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4860..00ECC030, 3 functions

#include "mgrr.h"
#include "cVertexFormatPC.h"

// 00EC4860  cVertexFormatPC::vf00  size=11  [class]
void cVertexFormatPC::vf00(void)

{
  FUN_00f9f050(&DAT_016d9198);
  return;
}

// 00ECC000  cVertexFormatPC::cVertexFormatPC  size=18  [class]
undefined4 * __fastcall cVertexFormatPC::cVertexFormatPC(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00ECC030  cVertexFormatPC::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatPC::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

