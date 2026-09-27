// src/misc/cVertexFormatUI.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA8F20..00CA8F60, 3 functions

#include "mgrr.h"
#include "cVertexFormatUI.h"

// 00CA8F20  cVertexFormatUI::cVertexFormatUI  size=18  [class]
undefined4 * __fastcall cVertexFormatUI::cVertexFormatUI(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00CA8F40  cVertexFormatUI::vf00  size=11  [class]
void cVertexFormatUI::vf00(void)

{
  FUN_00f9f050(&PTR_016b6a3c);
  return;
}

// 00CA8F60  cVertexFormatUI::vf04  size=30  [class]
undefined4 __thiscall cVertexFormatUI::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

