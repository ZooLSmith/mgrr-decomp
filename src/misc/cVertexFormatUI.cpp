// src/misc/cVertexFormatUI.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA8F20..00D28FF0, 4 functions

#include "mgrr.h"
#include "cVertexFormatUI.h"

// 00CA8F20  cVertexFormatUI::cVertexFormatUI_2  size=18  [class]
undefined4 * __fastcall cVertexFormatUI::cVertexFormatUI_2(undefined4 *param_1)

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
  Hw::cVertexFormat::cVertexFormat_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D28FF0  cVertexFormatUI::cVertexFormatUI  size=353  [class]
undefined4 * __fastcall cVertexFormatUI::cVertexFormatUI(undefined4 *param_1)

{
  *param_1 = cUISystem::vftable;
  FUN_00fd7210();
  FUN_00fd9800();
  FUN_00fd8a50();
  FUN_00fd8db0();
  FUN_00fd7480();
  FUN_00fd94a0();
  FUN_00fd9c20();
  FUN_00fd9110();
  FUN_00fd76e0();
  FUN_00fd7aa0();
  FUN_00fd7e60();
  FUN_00fd80f0();
  FUN_00fd8380();
  Hw::cVertexFormat::cVertexFormat();
  param_1[0x24c] = vftable;
  param_1[0x252] = 0;
  param_1[0x250] = cUIWorkList::vftable;
  param_1[0x25a] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = cUIWorkExecList::vftable;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x252] = 0;
  param_1[0x286] = 0;
  Hw::cHeapVariable::cHeapVariable();
  param_1[0x29e] = cUIExtendFactory::vftable;
  param_1[0x2a2] = 0;
  Hw::cHeapVariable::cHeapVariable();
  param_1[0x2ba] = 0;
  Hw::cTexture::cTexture_6();
  Hw::cTexture::cTexture_6();
  Hw::cTexture::cTexture_6();
  return param_1;
}

