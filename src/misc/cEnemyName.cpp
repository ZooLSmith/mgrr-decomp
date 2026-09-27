// src/misc/cEnemyName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8850..00CD3BA0, 2 functions

#include "mgrr.h"
#include "cEnemyName.h"

// 00CB8850  cEnemyName::cEnemyName  size=72  [class]
undefined4 * cEnemyName::cEnemyName(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x84,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    uVar2 = 0;
    puVar3 = puVar1;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      *(undefined4 *)((int)&DAT_01dc0bd0 + uVar2) = 0;
      *(undefined4 *)((int)&DAT_01dc0128 + uVar2) = 0;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x80);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD3BA0  cEnemyName::vf00  size=69  [class]
int * __thiscall cEnemyName::vf00(int *param_1,byte param_2)

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

