// src/misc/cStingerMissileSite.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF740..00CD87C0, 4 functions

#include "mgrr.h"
#include "cStingerMissileSite.h"

// 00CBF740  cStingerMissileSite::cStingerMissileSite  size=112  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cStingerMissileSite::cStingerMissileSite(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = vftable;
  param_1[1] = 0;
  _DAT_01dc4ed0 = 0;
  _DAT_01dc4ed4 = 0;
  _DAT_01dc4ed8 = 0;
  _DAT_01dc4edc = 0;
  DAT_01dc1340 = 0;
  puVar1 = &DAT_01dc4ee8;
  param_1 = param_1 + 2;
  iVar2 = 0;
  do {
    puVar1[-2] = 0;
    *param_1 = 0;
    puVar1[-1] = 0;
    *(undefined4 *)((int)&DAT_01dbf8f0 + iVar2) = 0;
    *puVar1 = 0;
    *(undefined4 *)((int)&DAT_01dbf8a0 + iVar2) = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 4;
  } while ((int)puVar1 < 0x1dc5028);
  DAT_01dbf89c = 0;
  return;
}

// 00CBF7B0  cStingerMissileSite::cStingerMissileSite  size=45  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cStingerMissileSite::cStingerMissileSite(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  _DAT_01dc1344 = 0;
  DAT_01dc1340 = 0;
  return;
}

// 00CBF7E0  FUN_00cbf7e0  size=29  [callgraph]
undefined4 FUN_00cbf7e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x58,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cStingerMissileSite::cStingerMissileSite();
    return uVar2;
  }
  return 0;
}

// 00CD87C0  cStingerMissileSite::vf00  size=73  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall cStingerMissileSite::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  DAT_01dc1340 = 0;
  _DAT_01dc1344 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

