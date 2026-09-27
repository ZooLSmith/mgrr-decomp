// src/enemy/em0190/Em0190SearchLight.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004FBAB0..00AB8000, 4 functions

#include "mgrr.h"
#include "Em0190SearchLight.h"

// 004FBAB0  Em0190SearchLight::vf50  size=16  [class]
void Em0190SearchLight::vf50(void)

{
  Behavior::vf50();
  switchD_0080dbae::default();
  return;
}

// 00AA69C0  Em0190SearchLight::Em0190SearchLight  size=18  [class]
undefined4 * __fastcall Em0190SearchLight::Em0190SearchLight(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA69E0  Em0190SearchLight::vf04  size=6  [class]
undefined * Em0190SearchLight::vf04(void)

{
  return &DAT_01b34f28;
}

// 00AB8000  Em0190SearchLight::destruct  size=105  [class]
undefined4 * __thiscall Em0190SearchLight::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

