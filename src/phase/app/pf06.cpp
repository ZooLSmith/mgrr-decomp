// src/phase/app/pf06.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D474F0..00D6FD80, 4 functions

#include "types.h"

// 00D474F0  cPf06::vf0C  size=85  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf06::vf0C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar1 = cVRMissionMenu::cVRMissionMenu();
    *(int *)(param_1 + 0x11c) = iVar1;
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016bc4f8);
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    }
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_009bf7d0();
  }
  _DAT_01be5568 = 2;
  return;
}

// 00D50850  cPf06::vf08  size=61  [class]
void __fastcall cPf06::vf08(int param_1)

{
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  FUN_00c16770(0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((DAT_01bea094 & 4) != 0) {
    DAT_01bea094 = DAT_01bea094 & 0xfffffffb;
  }
  return;
}

// 00D50890  cPf06::vf10  size=43  [class]
void __fastcall cPf06::vf10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  return;
}

// 00D6FD80  cPf06::vf00  size=54  [class]
undefined4 * __thiscall cPf06::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

