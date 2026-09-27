// src/misc/cSentryGunSite.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF2E0..00CD8540, 3 functions

#include "mgrr.h"
#include "cSentryGunSite.h"

// 00CBF2E0  cSentryGunSite::cSentryGunSite  size=45  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cSentryGunSite::cSentryGunSite(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  _DAT_01dc1320 = 0;
  DAT_01dc131c = 0;
  return;
}

// 00CBF310  cSentryGunSite::cSentryGunSite_2  size=66  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * cSentryGunSite::cSentryGunSite_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    _DAT_01dc4ec0 = 0;
    _DAT_01dc4ec4 = 0;
    DAT_01dc131c = 0;
    _DAT_01dc4ec8 = 0;
    _DAT_01dc4ecc = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD8540  cSentryGunSite::vf00  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall cSentryGunSite::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc131c = 0;
  _DAT_01dc1320 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

