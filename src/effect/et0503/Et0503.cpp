// src/effect/et0503/Et0503.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D7330..00AB8BE0, 4 functions

#include "mgrr.h"
#include "Et0503.h"

// 005D7330  Et0503::vf50  size=468  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Et0503::vf50(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  Behavior::vf50();
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    FUN_00a805f0();
    switchD_0080dbae::default();
    return;
  }
  uVar4 = 2;
  local_40 = _DAT_01bea630;
  local_3c = _DAT_01bea634;
  local_38 = _DAT_01bea638;
  local_34 = _DAT_01bea63c;
  FUN_00a7c8a0(2);
  iVar3 = FUN_00a12210(uVar4);
  local_30 = *(float *)(iVar3 + 0x40);
  local_2c = *(float *)(iVar3 + 0x44);
  local_28 = *(float *)(iVar3 + 0x48);
  local_24 = *(float *)(iVar3 + 0x4c);
  local_50 = local_40 - local_30;
  local_4c = local_3c - local_2c;
  local_48 = local_38 - local_28;
  local_44 = local_34 - local_24;
  if (((local_50 != 0.0) || (local_4c != 0.0)) || (local_48 != 0.0)) {
    fVar2 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_50 = 0.0;
      local_4c = 1.0;
      local_48 = 0.0;
    }
  }
  pfVar1 = (float *)(param_1 + 0x50);
  *pfVar1 = local_50 + local_30;
  *(float *)(param_1 + 0x54) = local_4c + local_2c;
  *(float *)(param_1 + 0x58) = local_48 + local_28;
  *(float *)(param_1 + 0x5c) = local_44 + local_24;
  FUN_00d9fa80(local_20,pfVar1);
  FUN_00d9fab0(pfVar1,local_20);
  switchD_0080dbae::default();
  return;
}

// 00AA6D30  Et0503::Et0503  size=29  [class]
undefined4 * __fastcall Et0503::Et0503(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6D50  Et0503::vf04  size=6  [class]
undefined * Et0503::vf04(void)

{
  return &DAT_01b352b8;
}

// 00AB8BE0  Et0503::vf00  size=105  [class]
undefined4 * __thiscall Et0503::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

