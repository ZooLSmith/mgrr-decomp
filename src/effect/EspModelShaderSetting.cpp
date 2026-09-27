// src/effect/EspModelShaderSetting.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D21D0..009E6240, 3 functions

#include "types.h"

// 009D21D0  EspModelShaderSetting::vf24  size=24  [class]
void __fastcall EspModelShaderSetting::vf24(int param_1)

{
  FUN_00fab0c0();
  FUN_00f990e0(*(undefined4 *)(param_1 + 0x78));
  return;
}

// 009DCBC0  EspModelShaderSetting::vf10  size=41  [class]
void __fastcall EspModelShaderSetting::vf10(int param_1)

{
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 4))();
    if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}

// 009E6240  EspModelShaderSetting::vf00  size=73  [class]
undefined4 * __thiscall EspModelShaderSetting::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
    if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1e])(1);
    }
    param_1[0x1e] = 0;
  }
  *param_1 = cShaderSetting::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

