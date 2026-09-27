// src/misc/cEnemyEnergyGaugePrologue.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7E90..00CD2E00, 3 functions

#include "types.h"

// 00CB7E90  cEnemyEnergyGaugePrologue::cEnemyEnergyGaugePrologue_2  size=33  [class]
void __fastcall cEnemyEnergyGaugePrologue::cEnemyEnergyGaugePrologue_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CB7EC0  cEnemyEnergyGaugePrologue::cEnemyEnergyGaugePrologue  size=62  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * cEnemyEnergyGaugePrologue::cEnemyEnergyGaugePrologue(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_018b5618 = 0xffffffff;
    _DAT_01dc08f0 = 0;
    _DAT_01dc08f4 = 0;
    DAT_01dc08f8 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD2E00  cEnemyEnergyGaugePrologue::vf00  size=53  [class]
undefined4 * __thiscall cEnemyEnergyGaugePrologue::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

