// src/misc/cEnemyEnergyGauge.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7DB0..00CD2C50, 3 functions

#include "types.h"

// 00CB7DB0  cEnemyEnergyGauge::cEnemyEnergyGauge_2  size=33  [class]
void __fastcall cEnemyEnergyGauge::cEnemyEnergyGauge_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CB7DE0  cEnemyEnergyGauge::cEnemyEnergyGauge  size=74  [class]
undefined4 * cEnemyEnergyGauge::cEnemyEnergyGauge(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_018b4414 = 0xffffffff;
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = 0;
    DAT_01dc08e4 = 0;
    DAT_01dc08e8 = 0;
    DAT_01dc08ec = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD2C50  cEnemyEnergyGauge::vf00  size=53  [class]
undefined4 * __thiscall cEnemyEnergyGauge::vf00(undefined4 *param_1,byte param_2)

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

