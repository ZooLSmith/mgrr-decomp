// src/camera/cCameraViewProj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C23650..00DA3890, 2 functions

#include "types.h"

// 00C23650  cCameraViewProj::vf00  size=31  [class]
undefined4 * __thiscall cCameraViewProj::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::CameraProj::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA3890  cCameraViewProj::vf04  size=55  [class]
void cCameraViewProj::vf04(void)

{
  FUN_00de4ec0();
  FUN_00de4d60(0x3dcccccd,0x461c4000,0x3f5f66f3);
  return;
}

