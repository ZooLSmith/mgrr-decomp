// src/misc/cEnemyTargetDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB89A0..00CD3DB0, 3 functions

#include "mgrr.h"
#include "cEnemyTargetDisp.h"

// 00CB89A0  cEnemyTargetDisp::cEnemyTargetDisp  size=54  [class]
void __fastcall cEnemyTargetDisp::cEnemyTargetDisp(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = vftable;
  uVar1 = 0;
  do {
    param_1 = param_1 + 1;
    *param_1 = 0;
    *(undefined4 *)((int)&DAT_01dc0cd8 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01dc0d58 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01dc00a8 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x80);
  return;
}

// 00CB8A10  FUN_00cb8a10  size=32  [callgraph]
undefined4 FUN_00cb8a10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x84,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cEnemyTargetDisp::cEnemyTargetDisp();
    return uVar2;
  }
  return 0;
}

// 00CD3DB0  cEnemyTargetDisp::vf00  size=69  [class]
int * __thiscall cEnemyTargetDisp::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 0x20;
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

