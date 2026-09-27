// src/misc/cSubWeaponInfoDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBFBB0..00CD8DA0, 3 functions

#include "types.h"

// 00CBFBB0  cSubWeaponInfoDisp::cSubWeaponInfoDisp_2  size=43  [class]
void __fastcall cSubWeaponInfoDisp::cSubWeaponInfoDisp_2(undefined4 *param_1)

{
  *param_1 = vftable;
  DAT_01dc1348 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 00CBFBE0  cSubWeaponInfoDisp::cSubWeaponInfoDisp  size=58  [class]
undefined4 * cSubWeaponInfoDisp::cSubWeaponInfoDisp(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    DAT_01dc1348 = 0;
    DAT_01dc134c = 0;
    DAT_01dc1350 = 0;
    DAT_01dc1354 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD8DA0  cSubWeaponInfoDisp::vf00  size=63  [class]
undefined4 * __thiscall cSubWeaponInfoDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DAT_01dc1348 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

