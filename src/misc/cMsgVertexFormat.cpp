// src/misc/cMsgVertexFormat.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB1D60..00CCD980, 4 functions

#include "mgrr.h"
#include "cMsgVertexFormat.h"

// 00CB1D60  cMsgVertexFormat::cMsgVertexFormat  size=18  [class]
undefined4 * __fastcall cMsgVertexFormat::cMsgVertexFormat(undefined4 *param_1)

{
  Hw::cVertexFormat::cVertexFormat();
  *param_1 = vftable;
  return param_1;
}

// 00CB1D80  cMsgVertexFormat::vf00  size=11  [class]
void cMsgVertexFormat::vf00(void)

{
  FUN_00f9f050(&PTR_016b6f58);
  return;
}

// 00CB1DA0  cMsgVertexFormat::vf04  size=30  [class]
undefined4 __thiscall cMsgVertexFormat::vf04(undefined4 param_1,byte param_2)

{
  Hw::cVertexFormat::~cVertexFormat();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCD980  cMsgVertexFormat::cMsgVertexFormat  size=134  [class]
undefined4 * __fastcall cMsgVertexFormat::cMsgVertexFormat(undefined4 *param_1)

{
  *param_1 = cMsgSystem::vftable;
  param_1[1] = cMsgCtrl::vftable;
  Hw::cTexture::cTexture();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x31) = 0;
  FUN_00fd60c0();
  FUN_00fd68e0();
  FUN_00fd6bf0();
  FUN_00fd6f00();
  FUN_00fd62f0();
  FUN_00fd6680();
  Hw::cVertexFormat::cVertexFormat();
  param_1[0xed] = vftable;
  param_1[0x11] = 0;
  return param_1;
}

