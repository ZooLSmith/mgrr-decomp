// src/ui/cUIExtendFactory.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D28F50..00D29160, 3 functions

#include "types.h"

// 00D28F50  cUIExtendFactory::cUIExtendFactory_2  size=28  [class]
undefined4 * __fastcall cUIExtendFactory::cUIExtendFactory_2(undefined4 *param_1)

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

// 00D29160  cUIExtendFactory::cUIExtendFactory  size=305  [class]
void __fastcall cUIExtendFactory::cUIExtendFactory(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cUISystem::vftable;
  Hw::cTexture::cTexture_5();
  Hw::cTexture::cTexture_5();
  Hw::cTexture::cTexture_5();
  param_1[0x29e] = vftable;
  iVar1 = (**(code **)(param_1[0x2a4] + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b720();
  }
  Hw::cHeap::cHeap_5();
  iVar1 = (**(code **)(param_1[0x288] + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b6e0();
  }
  Hw::cHeap::cHeap_5();
  cUIWorkExecList::cUIWorkExecList();
  Hw::cVertexFormat::cVertexFormat_2();
  FUN_00fcd070();
  FUN_00fccf60();
  FUN_00fcce50();
  FUN_00fcccf0();
  FUN_00fccb90();
  FUN_00fcd4e0();
  FUN_00fcda70();
  FUN_00fcd640();
  FUN_00fccaa0();
  FUN_00fcd3f0();
  FUN_00fcd300();
  FUN_00fcd8c0();
  FUN_00fcc9b0();
  return;
}

