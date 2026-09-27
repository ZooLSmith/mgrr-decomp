// src/hw/cTexture.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F972C0..00FA8B50, 7 functions

#include "mgrr.h"

// 00F972C0  Hw::cTexture::cTexture  size=29  [class]
void __fastcall Hw::cTexture::cTexture(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00F972E0  Hw::cTexture::~cTexture  size=7  [class]
void __fastcall Hw::cTexture::~cTexture(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00F9F2D0  Hw::cTexture::cTexture  size=85  [class]
void __fastcall Hw::cTexture::cTexture(undefined4 *param_1)

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
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 1;
  *param_1 = vftable;
  return;
}

// 00F9F380  Hw::cTexture::cTexture_2  size=85  [class]
void __fastcall Hw::cTexture::cTexture_2(undefined4 *param_1)

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
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 1;
  *param_1 = vftable;
  return;
}

// 00F9F430  Hw::cTexture::cTexture_4  size=85  [class]
void __fastcall Hw::cTexture::cTexture_4(undefined4 *param_1)

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
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 1;
  *param_1 = vftable;
  return;
}

// 00F9F4E0  Hw::cTexture::cTexture_3  size=85  [class]
void __fastcall Hw::cTexture::cTexture_3(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = cLockableTexture::vftable;
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
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 1;
  *param_1 = vftable;
  return;
}

// 00FA8B50  Hw::cTexture::vf00  size=31  [class]
undefined4 * __thiscall Hw::cTexture::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

