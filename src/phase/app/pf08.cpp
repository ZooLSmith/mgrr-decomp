// src/phase/app/pf08.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47600..00D6FE10, 4 functions

#include "types.h"

// 00D47600  cPf08::vf0C  size=23  [class]
void __fastcall cPf08::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x11c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d47614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
    return;
  }
  return;
}

// 00D50AC0  cPf08::vf08  size=172  [class]
void __fastcall cPf08::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  DAT_01bea070 = DAT_01bea070 | 0x40200000;
  DAT_01bea09c = DAT_01bea09c | 0x40000000;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_008e3c10();
    }
  }
  DAT_01bea088 = DAT_01bea088 | 0x200000;
  iVar2 = cCollectionMenu::cCollectionMenu_2();
  *(int *)(param_1 + 0x11c) = iVar2;
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016bcd98);
  }
  FUN_00c16770(0);
  FUN_00a33520(0,0xf00,3);
  FUN_00a33520(0,0xf00,4);
  FUN_00a33520(1,0xf00,5);
  return;
}

// 00D50B70  cPf08::vf10  size=82  [class]
void __fastcall cPf08::vf10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xbfdfffff;
  DAT_01bea088 = DAT_01bea088 & 0xffdfffff;
  DAT_01bea09c = DAT_01bea09c & 0xbfffffff;
  FUN_00a33520(0,0xf00,3);
  return;
}

// 00D6FE10  cPf08::vf00  size=54  [class]
undefined4 * __thiscall cPf08::vf00(undefined4 *param_1,byte param_2)

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

