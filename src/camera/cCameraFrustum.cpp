// src/camera/cCameraFrustum.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C12370..00C40760, 2 functions

#include "types.h"

// 00C12370  cCameraFrustum::vf00  size=31  [class]
undefined4 * __thiscall cCameraFrustum::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C40760  cCameraFrustum::cCameraFrustum  size=87  [class]
undefined4 * __fastcall cCameraFrustum::cCameraFrustum(undefined4 *param_1)

{
  param_1[0xb0] = vftable;
  param_1[0xd4] = 1;
  *param_1 = cCameraApp::vftable;
  param_1[0xb0] = cCameraApp::vftable;
  FUN_00a7c930();
  FUN_00da4f10();
  FUN_00da5590();
  FUN_00da50b0();
  return param_1;
}

