// src/graphics/cVariationTexture.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAF7E0..00EC2D90, 2 functions

#include "mgrr.h"
#include "cVariationTexture.h"

// 00EAF7E0  cVariationTexture::cVariationTexture  size=21  [class]
undefined4 * __fastcall cVariationTexture::cVariationTexture(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cTexture::cTexture();
  return param_1;
}

// 00EC2D90  cVariationTexture::vf00  size=39  [class]
undefined4 * __thiscall cVariationTexture::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Hw::cTexture::~cTexture();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

