// src/phase/app/pf0a.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47640..00D6FEA0, 4 functions

#include "types.h"

// 00D47640  cPf0a::vf0C  size=50  [class]
void __fastcall cPf0a::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x11c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
  }
  if (*(int *)(param_1 + 0x120) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d4766e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x120) + 4))();
    return;
  }
  return;
}

// 00D50C80  cPf0a::vf08  size=82  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf0a::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  _DAT_01bea098 = _DAT_01bea098 | 0x40000000;
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  DAT_01bea088 = DAT_01bea088 | 0x200000;
  FUN_00c16770(0);
  FUN_00991d00();
  uVar1 = cMovieViewerBg::cMovieViewerBg_2();
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  iVar2 = FUN_009a3020();
  *(int *)(param_1 + 0x120) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x11c);
  }
  return;
}

// 00D50CE0  cPf0a::vf10  size=88  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cPf0a::vf10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  _DAT_01bea098 = _DAT_01bea098 & 0xbfffffff;
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea088 = DAT_01bea088 & 0xffdfffff;
  return;
}

// 00D6FEA0  cPf0a::vf00  size=54  [class]
undefined4 * __thiscall cPf0a::vf00(undefined4 *param_1,byte param_2)

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

