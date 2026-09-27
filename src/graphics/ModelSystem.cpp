// src/graphics/ModelSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A0C980..00A19710, 2 functions

#include "types.h"

// 00A0C980  ModelSystem::vf00  size=31  [class]
undefined4 * __thiscall ModelSystem::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A19710  ModelSystem::ModelSystem  size=156  [class]
void __fastcall ModelSystem::ModelSystem(undefined4 *param_1)

{
  *param_1 = SceneModelSystem::vftable;
  if (param_1[0x2b] != 0) {
    param_1[0x2d] = 0;
    if (param_1[0x2e] != 0) {
      FUN_00dd48d0(param_1[0x2b],0);
      param_1[0x2e] = 0;
    }
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[2] = Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::vftable;
  if ((param_1[8] != 0) && (param_1[10] != 0)) {
    FUN_00dd3d90(param_1[8],0);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  return;
}

