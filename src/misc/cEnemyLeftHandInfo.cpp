// src/misc/cEnemyLeftHandInfo.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8450..00CD3770, 3 functions

#include "mgrr.h"
#include "cEnemyLeftHandInfo.h"

// 00CB8450  cEnemyLeftHandInfo::cEnemyLeftHandInfo  size=131  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnemyLeftHandInfo::cEnemyLeftHandInfo(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc0a2c = 0;
  DAT_01dc0228 = 0;
  param_1[2] = 0;
  DAT_01dc0a30 = 0;
  DAT_01dc022c = 0;
  param_1[3] = 0;
  _DAT_01dc0a34 = 0;
  _DAT_01dc0230 = 0;
  param_1[4] = 0;
  _DAT_01dc0a38 = 0;
  _DAT_01dc0234 = 0;
  param_1[5] = 0;
  _DAT_01dc0a3c = 0;
  _DAT_01dc0238 = 0;
  param_1[6] = 0;
  _DAT_01dc0a40 = 0;
  _DAT_01dc023c = 0;
  param_1[7] = 0;
  _DAT_01dc0a44 = 0;
  _DAT_01dc0240 = 0;
  param_1[8] = 0;
  _DAT_01dc0a48 = 0;
  _DAT_01dc0244 = 0;
  return;
}

// 00CB8510  FUN_00cb8510  size=29  [callgraph]
undefined4 FUN_00cb8510(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x24,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cEnemyLeftHandInfo::cEnemyLeftHandInfo();
    return uVar2;
  }
  return 0;
}

// 00CD3770  cEnemyLeftHandInfo::vf00  size=69  [class]
int * __thiscall cEnemyLeftHandInfo::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 8;
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

