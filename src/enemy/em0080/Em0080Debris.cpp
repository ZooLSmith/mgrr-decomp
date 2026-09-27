// src/enemy/em0080/Em0080Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00486D50..00AB86F0, 7 functions

#include "types.h"

// 00486D50  Em0080Debris::vf40  size=63  [class]
void __fastcall Em0080Debris::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = RayArmorDebris::vf40();
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x980) = 0;
  if (*(int *)(param_1 + 0x4b0) == 0x42381) {
    *(undefined4 *)(param_1 + 0x984) = 1;
    *(undefined4 *)(param_1 + 0x980) = 0x1e;
  }
  return;
}

// 00486D90  Em0080Debris::vf300  size=576  [class]
void __fastcall Em0080Debris::vf300(int param_1)

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
  
  if ((*(int *)(param_1 + 0x984) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x980), *(int *)(param_1 + 0x980) = iVar1 + -1, iVar1 == 0)) {
    FUN_005d8530(0x3f000000);
  }
  if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
     (*(int *)(param_1 + 0x970) != 0)) {
    *(undefined4 *)(param_1 + 0x970) = 0;
    FUN_005d95e0(&local_40);
    fVar3 = (float10)FUN_00916de0();
    fVar4 = (float10)-2.0;
    local_30 = (float)((float10)local_40 * fVar3 * fVar4);
    local_2c = (float)((float10)local_3c * fVar3 * fVar4);
    local_28 = (float)((float10)local_38 * fVar3 * fVar4);
    local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
    FUN_0091ab40(&local_30);
    local_20 = DAT_01bea380;
    local_1c = DAT_01bea384;
    local_18 = DAT_01bea388;
    local_14 = DAT_01bea38c;
    local_50 = DAT_01bea380 - *(float *)(param_1 + 0x40);
    local_4c = DAT_01bea384 - *(float *)(param_1 + 0x44);
    local_48 = DAT_01bea388 - *(float *)(param_1 + 0x48);
    local_44 = DAT_01bea38c - *(float *)(param_1 + 0x4c);
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
    fVar3 = (float10)FUN_00916de0();
    local_30 = (float)((float10)local_50 * fVar3);
    local_2c = (float)((float10)local_4c * fVar3);
    local_28 = (float)((float10)local_48 * fVar3);
    local_24 = (float)((float10)local_44 * fVar3);
    FUN_0091ab40(&local_30);
    fVar3 = (float10)FUN_00916de0();
    fVar4 = (float10)-0.1;
    local_30 = (float)((float10)local_40 * fVar3 * fVar4);
    local_2c = (float)(fVar3 * (float10)local_3c * fVar4);
    local_28 = (float)(fVar3 * (float10)local_38 * fVar4);
    local_24 = (float)(fVar4 * (float10)local_34 * fVar3);
    FUN_0091abd0(&local_20,&local_30);
  }
  return;
}

// 00486FD0  Em0080Debris::vf1B8  size=34  [class]
void __thiscall Em0080Debris::vf1B8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (0 < param_4) {
    do {
      *param_2 = *(undefined4 *)(param_1 + 0x4b0);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 00487000  Em0080Debris::vf1BC  size=110  [class]
void __thiscall Em0080Debris::vf1BC(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  ContainerDebris::vf1BC(param_2);
  if (param_2 != (int *)0x0) {
    puVar3 = &DAT_01be9c20;
    (**(code **)(*param_2 + 4))(&DAT_01be9c20);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7b4) != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_0091c760(uVar2);
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      uVar2 = cXmlBinary::cXmlBinary_41();
      FUN_0091b870(uVar2);
    }
  }
  return;
}

// 00AAFA50  Em0080Debris::Em0080Debris  size=18  [class]
undefined4 * __fastcall Em0080Debris::Em0080Debris(undefined4 *param_1)

{
  RayArmorDebris::RayArmorDebris();
  *param_1 = vftable;
  return param_1;
}

// 00AAFA70  Em0080Debris::vf04  size=6  [class]
undefined * Em0080Debris::vf04(void)

{
  return &DAT_01b34d80;
}

// 00AB86F0  Em0080Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0080Debris::vf00(undefined4 *param_1,byte param_2)

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

