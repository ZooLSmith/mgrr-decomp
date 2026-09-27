// src/misc/RayArmorDebris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AEAC00..00AEF860, 6 functions

#include "types.h"

// 00AEAC00  RayArmorDebris::vf40  size=163  [class]
undefined4 __fastcall RayArmorDebris::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = BehaviorDebrisBase::vf40();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x970) = 1;
    FUN_009fd240();
    iVar1 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        *(undefined4 *)(iVar2 + 0x10 + iVar3) = 0x3f800000;
        iVar2 = iVar2 + iVar3;
        *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar2 + 0x18) = 0x3f800000;
        iVar3 = iVar3 + 0x70;
        *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
      } while (iVar1 < *(short *)(param_1 + 0x324));
    }
    iVar1 = FUN_009f8d30();
    if ((((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x588), iVar1 != 0)) &&
        (*(int *)(iVar1 + 0x34) != 0)) && (*(int *)(param_1 + 0x7b4) != 0)) {
      FUN_0091c760(*(undefined4 *)(iVar1 + 0x38));
      FUN_009f8ae0(*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38));
    }
    return 1;
  }
  return 0;
}

// 00AEAD40  RayArmorDebris::vf1B8  size=31  [class]
void RayArmorDebris::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42200;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00AEF570  RayArmorDebris::vf300  size=697  [class]
void __fastcall RayArmorDebris::vf300(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
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
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
     (*(int *)(param_1 + 0x970) != 0)) {
    *(undefined4 *)(param_1 + 0x970) = 0;
    FUN_005d95e0(&local_40);
    iVar1 = *(int *)(param_1 + 0x4b4);
    if (((iVar1 != 0x20603) && (iVar1 != 0x20604)) && ((iVar1 != 0x20607 && (iVar1 != 0x20608)))) {
      fVar3 = (float10)FUN_00916de0();
      fVar4 = (float10)-0.3;
      local_30 = (float)((float10)local_40 * fVar3 * fVar4);
      local_2c = (float)((float10)local_3c * fVar3 * fVar4);
      local_28 = (float)(fVar3 * (float10)local_38 * fVar4);
      local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
      FUN_0091ab40(&local_30);
      FUN_0091e980(param_1);
      local_20 = DAT_01bea380;
      local_1c = DAT_01bea384;
      local_18 = DAT_01bea388;
      local_14 = DAT_01bea38c;
      local_50 = DAT_01bea380 - *(float *)(param_1 + 0x40);
      local_4c = DAT_01bea384 - *(float *)(param_1 + 0x44);
      local_48 = DAT_01bea388 - *(float *)(param_1 + 0x48);
      local_44 = DAT_01bea38c - *(float *)(param_1 + 0x4c);
      fVar2 = local_48 * local_48 + local_4c * local_4c + local_50 * local_50;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_50,&local_50);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_50 = 0.0;
        local_4c = 1.0;
        local_48 = 0.0;
      }
      fVar3 = (float10)FUN_00916de0();
      fVar4 = (float10)2.0;
      local_30 = (float)((float10)local_50 * fVar3 * fVar4);
      local_2c = (float)((float10)local_4c * fVar3 * fVar4);
      local_28 = (float)((float10)local_48 * fVar3 * fVar4);
      local_24 = (float)(fVar4 * (float10)local_44 * fVar3);
      FUN_0091ab40(&local_30);
      fVar3 = (float10)FUN_00916de0();
      fVar4 = (float10)-0.2;
      local_30 = (float)((float10)local_40 * fVar3 * fVar4);
      local_2c = (float)(fVar3 * (float10)local_3c * fVar4);
      local_28 = (float)(fVar3 * (float10)local_38 * fVar4);
      local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
      FUN_0091abd0(&local_20,&local_30);
      return;
    }
    fVar3 = (float10)FUN_00916de0();
    fVar4 = (float10)-100.0;
    local_30 = (float)((float10)local_40 * fVar3 * fVar4);
    local_2c = (float)((float10)local_3c * fVar3 * fVar4);
    local_28 = (float)(fVar3 * (float10)local_38 * fVar4);
    local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
    FUN_0091ab40(&local_30);
  }
  return;
}

// 00AEF830  RayArmorDebris::RayArmorDebris  size=18  [class]
undefined4 * __fastcall RayArmorDebris::RayArmorDebris(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00AEF850  RayArmorDebris::vf04  size=6  [class]
undefined * RayArmorDebris::vf04(void)

{
  return &DAT_01be9cdc;
}

// 00AEF860  RayArmorDebris::vf00  size=30  [class]
undefined4 __thiscall RayArmorDebris::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

