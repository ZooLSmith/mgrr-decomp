// src/collision/EffectCollisionMaterial.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FE8B0..009001E0, 2 functions

#include "types.h"

// 008FE8B0  EffectCollisionMaterial::vf08  size=31  [class]
undefined4 * __thiscall EffectCollisionMaterial::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009001E0  EffectCollisionMaterial::EffectCollisionMaterial  size=25  [class]
void __fastcall EffectCollisionMaterial::EffectCollisionMaterial(undefined4 *param_1)

{
  *param_1 = EffectCollisionMaterialImplement::vftable;
  FUN_008fec00();
  *param_1 = vftable;
  return;
}

