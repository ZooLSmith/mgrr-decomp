// src/misc/cMsgSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCDA10..00CE4B00, 2 functions

#include "mgrr.h"
#include "cMsgSystem.h"

// 00CCDA10  cMsgSystem::~cMsgSystem  size=124  [class]
void __fastcall cMsgSystem::~cMsgSystem(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cVertexFormat::~cVertexFormat();
  FUN_00fcc690();
  FUN_00fcc560();
  FUN_00fcc8f0();
  FUN_00fcc830();
  FUN_00fcc770();
  FUN_00fcc4a0();
  param_1[1] = cMsgCtrl::vftable;
  FUN_00f972f0();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x31) = 0;
  Hw::cTexture::~cTexture();
  return;
}

// 00CE4B00  cMsgSystem::vf00  size=30  [class]
undefined4 __thiscall cMsgSystem::vf00(undefined4 param_1,byte param_2)

{
  ~cMsgSystem();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

