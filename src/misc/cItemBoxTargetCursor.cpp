// src/misc/cItemBoxTargetCursor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB1D0..00CD4F70, 3 functions

#include "types.h"

// 00CBB1D0  cItemBoxTargetCursor::cItemBoxTargetCursor  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemBoxTargetCursor::cItemBoxTargetCursor(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = vftable;
  _DAT_01dc0e1c = 0;
  uVar1 = 0;
  do {
    param_1 = param_1 + 1;
    *param_1 = 0;
    *(undefined4 *)((int)&DAT_01dbfcd0 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01dbfc80 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x50);
  return;
}

// 00CBB240  FUN_00cbb240  size=29  [callgraph]
undefined4 FUN_00cbb240(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x54,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cItemBoxTargetCursor::cItemBoxTargetCursor();
    return uVar2;
  }
  return 0;
}

// 00CD4F70  cItemBoxTargetCursor::vf00  size=69  [class]
int * __thiscall cItemBoxTargetCursor::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 0x14;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

