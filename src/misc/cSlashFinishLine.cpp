// src/misc/cSlashFinishLine.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF3F0..00CD85C0, 3 functions

#include "mgrr.h"
#include "cSlashFinishLine.h"

// 00CBF3F0  cSlashFinishLine::cSlashFinishLine  size=86  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cSlashFinishLine::cSlashFinishLine(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc132c = 0;
  DAT_01dbf950 = 0;
  param_1[2] = 0;
  DAT_01dc1330 = 0;
  DAT_01dbf954 = 0;
  param_1[3] = 0;
  _DAT_01dc1334 = 0;
  _DAT_01dbf958 = 0;
  param_1[4] = 0;
  _DAT_01dc1338 = 0;
  _DAT_01dbf95c = 0;
  param_1[5] = 0;
  _DAT_01dc133c = 0;
  _DAT_01dbf960 = 0;
  return;
}

// 00CBF480  FUN_00cbf480  size=29  [callgraph]
undefined4 FUN_00cbf480(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x18,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cSlashFinishLine::cSlashFinishLine();
    return uVar2;
  }
  return 0;
}

// 00CD85C0  cSlashFinishLine::vf00  size=69  [class]
int * __thiscall cSlashFinishLine::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 5;
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

