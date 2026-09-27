// src/phase/app/pf0b.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47680..00D6FEE0, 4 functions

#include "types.h"

// 00D47680  cPf0b::vf0C  size=23  [class]
void __fastcall cPf0b::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x11c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d47694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
    return;
  }
  return;
}

// 00D50D40  cPf0b::vf08  size=51  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf0b::vf08(int param_1)

{
  undefined4 uVar1;
  
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  FUN_00c16770(0);
  _DAT_01bea098 = _DAT_01bea098 | 0x40000000;
  FUN_0098b3a0();
  uVar1 = FUN_0099ca20();
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  return;
}

// 00D50D80  cPf0b::vf10  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf0b::vf10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  _DAT_01bea098 = _DAT_01bea098 & 0xbfffffff;
  return;
}

// 00D6FEE0  cPf0b::vf00  size=54  [class]
undefined4 * __thiscall cPf0b::vf00(undefined4 *param_1,byte param_2)

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

