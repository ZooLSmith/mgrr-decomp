// src/misc/cRpgSite.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF060..00CD8370, 3 functions

#include "types.h"

// 00CBF060  cRpgSite::cRpgSite_2  size=45  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cRpgSite::cRpgSite_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  _DAT_01dc1318 = 0;
  DAT_01dc1314 = 0;
  return;
}

// 00CBF090  cRpgSite::cRpgSite  size=66  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * cRpgSite::cRpgSite(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    _DAT_01dc4eb0 = 0;
    _DAT_01dc4eb4 = 0;
    DAT_01dc1314 = 0;
    _DAT_01dc4eb8 = 0;
    _DAT_01dc4ebc = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00CD8370  cRpgSite::vf00  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall cRpgSite::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc1314 = 0;
  _DAT_01dc1318 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

