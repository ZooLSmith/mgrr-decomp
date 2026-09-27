// src/battle/BattleParameter.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D726C0..00D752A0, 2 functions

#include "types.h"

// 00D726C0  BattleParameter::vf98  size=31  [class]
undefined4 * __thiscall BattleParameter::vf98(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D752A0  BattleParameter::BattleParameter  size=39  [class]
void __fastcall BattleParameter::BattleParameter(undefined4 *param_1)

{
  *param_1 = BattleParameterImplement::vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  *param_1 = vftable;
  return;
}

