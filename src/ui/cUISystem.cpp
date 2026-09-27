// src/ui/cUISystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D29160..00D292A0, 2 functions

#include "mgrr.h"
#include "cUISystem.h"

// 00D29160  cUISystem::~cUISystem  size=305  [class]
void __fastcall cUISystem::~cUISystem(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  Hw::cTexture::~cTexture();
  Hw::cTexture::~cTexture();
  Hw::cTexture::~cTexture();
  param_1[0x29e] = cUIExtendFactory::vftable;
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
  Hw::cVertexFormat::~cVertexFormat();
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

// 00D292A0  cUISystem::vf00  size=30  [class]
undefined4 __thiscall cUISystem::vf00(undefined4 param_1,byte param_2)

{
  ~cUISystem();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

