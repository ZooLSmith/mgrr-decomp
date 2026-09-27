// src/misc/cBossWeaponInfoDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB5AA0..00CD04E0, 3 functions

#include "types.h"

// 00CB5AA0  cBossWeaponInfoDisp::cBossWeaponInfoDisp_2  size=43  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cBossWeaponInfoDisp::cBossWeaponInfoDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  _DAT_01dc0748 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CB5AD0  cBossWeaponInfoDisp::cBossWeaponInfoDisp  size=52  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * cBossWeaponInfoDisp::cBossWeaponInfoDisp(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    _DAT_01dc0748 = 0;
    DAT_01dc074c = 0;
    DAT_01dc0750 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD04E0  cBossWeaponInfoDisp::vf00  size=63  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall cBossWeaponInfoDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  _DAT_01dc0748 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

