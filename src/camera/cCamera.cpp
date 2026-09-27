// src/camera/cCamera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C40720..00C56CE0, 3 functions

#include "mgrr.h"
#include "cCamera.h"

// 00C40720  cCamera::vf00  size=11  [class]
void cCamera::vf00(void)

{
  vf00();
  return;
}

// 00C40730  cCamera::vf00  size=41  [class]
undefined4 * __thiscall cCamera::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0xb0] = cCameraFrustum::vftable;
  *param_1 = Hw::CameraProj::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C56CE0  cCamera::cCamera  size=128  [class]
undefined4 * __fastcall cCamera::cCamera(undefined4 *param_1)

{
  cCameraFrustum::cCameraFrustum();
  *param_1 = cCameraGame::vftable;
  param_1[0xb0] = cCameraGame::vftable;
  FUN_00a7c930();
  param_1[0x32c] = 1;
  param_1[0x308] = vftable;
  param_1[600] = vftable;
  param_1[0x404] = 1;
  param_1[0x3e0] = vftable;
  param_1[0x330] = vftable;
  param_1[0x4dc] = 1;
  param_1[0x4b8] = vftable;
  param_1[0x408] = vftable;
  param_1[0x5b4] = 1;
  param_1[0x590] = vftable;
  param_1[0x4e0] = vftable;
  return param_1;
}

