// src/misc/cWeaponInfoDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1EC0..00CDAB90, 3 functions

#include "types.h"

// 00CC1EC0  cWeaponInfoDisp::cWeaponInfoDisp  size=43  [class]
void __fastcall cWeaponInfoDisp::cWeaponInfoDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  DAT_01dc13f4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CC1EF0  cWeaponInfoDisp::cWeaponInfoDisp_2  size=46  [class]
undefined4 * cWeaponInfoDisp::cWeaponInfoDisp_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc13f0 = 0;
    DAT_01dc13f4 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CDAB90  cWeaponInfoDisp::vf00  size=63  [class]
undefined4 * __thiscall cWeaponInfoDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DAT_01dc13f4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

