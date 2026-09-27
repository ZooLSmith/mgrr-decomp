// src/unsorted/unit_00E50E70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E50E70..00E50E70, 1 functions

#include "mgrr.h"

// 00E50E70  FUN_00e50e70  size=439  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e50e70(void)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  pfVar2 = (float *)FUN_00e9fe70();
  local_30 = *pfVar2;
  local_2c = pfVar2[1];
  local_28 = pfVar2[2];
  local_24 = pfVar2[3];
  pfVar2 = (float *)FUN_00e9feb0();
  local_40 = *pfVar2 - local_30;
  local_3c = pfVar2[1] - local_2c;
  local_38 = pfVar2[2] - local_28;
  local_34 = pfVar2[3] - local_24;
  puVar3 = (undefined4 *)FUN_00e9fed0();
  local_20 = *puVar3;
  local_1c = puVar3[1];
  local_18 = puVar3[2];
  local_14 = puVar3[3];
  fVar1 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
  }
  _DAT_01dd99c0 = local_30;
  _DAT_01dd99c4 = local_2c;
  _DAT_01dd99c8 = local_28;
  _DAT_01dd99cc = local_24;
  _DAT_01dd99d0 = local_40;
  _DAT_01dd99d4 = local_3c;
  _DAT_01dd99d8 = local_38;
  _DAT_01dd99dc = local_34;
  _DAT_01dd99e0 = local_20;
  _DAT_01dd99e4 = local_1c;
  _DAT_01dd99e8 = local_18;
  _DAT_01dd99ec = local_14;
  FUN_00df3e00(0,&DAT_01dd99c0,&DAT_01dd99d0,&DAT_01dd99e0);
  FUN_00df3e00(1,&DAT_01dd99c0,&DAT_01dd99d0,&DAT_01dd99e0);
  return;
}

