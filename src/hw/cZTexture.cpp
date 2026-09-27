// src/hw/cZTexture.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FAA310..00FAA310, 1 functions

#include "mgrr.h"

// 00FAA310  Hw::cZTexture::vf00  size=105  [class]
undefined4 * __thiscall Hw::cZTexture::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  
  *param_1 = cTargetTexture::vftable;
  param_1[7] = cTextureInstance::vftable;
  if (param_1[0xf] != 0) {
    piVar1 = (int *)param_1[8];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[8] = 0;
    }
    param_1[8] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  *param_1 = cTexture::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

