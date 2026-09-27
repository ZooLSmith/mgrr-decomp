// src/ui/cUIExtendFactory.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D28F50..00D28FF0, 3 functions

#include "mgrr.h"
#include "cUIExtendFactory.h"

// 00D28F50  cUIExtendFactory::cUIExtendFactory  size=28  [class]
undefined4 * __fastcall cUIExtendFactory::cUIExtendFactory(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 00D28FA0  cUIExtendFactory::vf00  size=66  [class]
undefined4 * __thiscall cUIExtendFactory::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = (**(code **)(param_1[6] + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b720();
  }
  Hw::cHeap::cHeap_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D28FF0  cUIExtendFactory::cUIExtendFactory  size=353  [class]
undefined4 * __fastcall cUIExtendFactory::cUIExtendFactory(undefined4 *param_1)

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
  param_1[0x24c] = cVertexFormatUI::vftable;
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
  param_1[0x29e] = vftable;
  param_1[0x2a2] = 0;
  Hw::cHeapVariable::cHeapVariable();
  param_1[0x2ba] = 0;
  Hw::cTexture::cTexture();
  Hw::cTexture::cTexture();
  Hw::cTexture::cTexture();
  return param_1;
}

