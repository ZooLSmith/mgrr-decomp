// src/misc/cEnemyTarget.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB80B0..00CD3030, 3 functions

#include "types.h"

// 00CB80B0  cEnemyTarget::cEnemyTarget  size=88  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnemyTarget::cEnemyTarget(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  uVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    *(undefined4 *)((int)&DAT_01dc03b8 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x3c);
  param_1 = param_1 + 0x10;
  uVar1 = 0;
  do {
    *param_1 = 0;
    *(undefined4 *)((int)&DAT_01dc0340 + uVar1) = 0;
    uVar1 = uVar1 + 4;
    param_1 = param_1 + 1;
  } while (uVar1 < 0x78);
  DAT_01dc08fc = 0;
  DAT_01dc0900 = 0;
  _DAT_01dc0904 = 0;
  return;
}

// 00CB8110  cEnemyTarget::~cEnemyTarget  size=93  [class]
void __fastcall cEnemyTarget::~cEnemyTarget(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = (int)vftable;
  iVar3 = 0xf;
  piVar1 = param_1;
  do {
    iVar2 = iVar3;
    piVar1 = piVar1 + 1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    iVar3 = iVar2 + -1;
  } while (iVar3 != 0);
  param_1 = param_1 + 0x10;
  iVar2 = iVar2 + 0x1d;
  do {
    iVar3 = *param_1;
    if (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00CD3030  cEnemyTarget::vf00  size=30  [class]
undefined4 __thiscall cEnemyTarget::vf00(undefined4 param_1,byte param_2)

{
  ~cEnemyTarget();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

