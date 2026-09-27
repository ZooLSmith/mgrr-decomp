// src/enemy/em0221/Em0221.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0055C8D0..00AB6F10, 13 functions

#include "mgrr.h"
#include "Em0221.h"

// 0055C8D0  Em0221::vf44  size=117  [class]
void __fastcall Em0221::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a5dc60();
  FUN_00a5dc60();
  FUN_00a944d0();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 0055C950  Em0221::thunk_vf48  size=5  [class]
void __fastcall Em0221::thunk_vf48(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00c13920();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
  }
  param_1[0x2a2] = iVar1;
  param_1[0x2a1] = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01be9c24;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c24);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    param_1[0x2a1] = uVar3;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar4 = FUN_00a92fb0();
    FUN_00e08600(uVar4);
  }
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar5;
  param_1[0x361] = 0;
  iVar1 = FUN_00a8c760(0x15);
  if (iVar1 != 0) {
    FUN_00a8d280();
  }
  (**(code **)(*param_1 + 0x32c))();
  if (param_1[0x2fc] != 0) {
    uVar4 = FUN_00a8eea0();
    *(undefined4 *)(param_1[0x2fc] + 0x44) = uVar4;
  }
  iVar1 = FUN_00a8c760(0x18);
  if ((iVar1 == 0) && (param_1[0x21e] != 0)) {
    Behavior::updateGroundSupportForParts
              (param_1 + 0x297,param_1 + 0x16c,param_1 + 0x165,param_1 + 0x17c,param_1[0x21f]);
    Behavior::updateGroundSupportForParts
              (param_1 + 0x298,param_1 + 0x170,param_1 + 0x166,param_1 + 0x17d,param_1[0x220]);
  }
  FUN_00c3dac0(param_1 + 0x10,param_1 + 0x365);
  BehaviorAppBase::vf48();
  return;
}

// 0055C960  Em0221::vf50  size=16  [class]
void Em0221::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 0055C970  Em0221::vf264  size=115  [class]
undefined4 __thiscall Em0221::vf264(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0040ac60(param_2);
  if (*(int *)(param_1 + 0xb24) != -1) {
    iVar1 = FUN_00d46690(*(undefined1 *)(param_1 + 0xb24));
    if (iVar1 != 0) {
      FUN_00a5dcc0(iVar1);
    }
  }
  FUN_00aa0ba0(*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0xec));
  if (*(int *)(param_1 + 0xb84) == 1) {
    FUN_00a8caf0(3,0,0,0);
  }
  return 1;
}

// 0055C9F0  Em0221::vf268  size=32  [class]
undefined4 __thiscall Em0221::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if (*param_4 != 10) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf60) = 0;
  return 1;
}

// 0055CA10  FUN_0055ca10  size=183  [callgraph]
float10 __thiscall FUN_0055ca10(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  if (param_3 != 0.0) {
    fVar2 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
    fVar3 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)1 - fVar3) * (float10)(float)fVar2;
    fVar3 = (float10)param_4;
    if (fVar2 <= -fVar3) {
      fVar2 = -fVar3;
    }
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar2;
    fVar1 = (float10)(float)fVar1;
  }
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 0055CB40  FUN_0055cb40  size=92  [callgraph]
void __fastcall FUN_0055cb40(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9e290(&DAT_016419e8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0056CA20  Em0221::vf40  size=546  [class]
undefined4 __fastcall Em0221::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  local_24 = 2.3;
  iVar1 = FUN_00932720();
  if (iVar1 == 0x210) {
    local_24 = 8.0;
  }
  uVar2 = FUN_008ec660(param_1,local_24,0x3f266666,0x41700000,0x41a00000,0x78,7,0);
  local_20 = 0x3fc90fdb;
  local_1c = 0.0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x764) = uVar2;
  FUN_008e0b20(&local_20);
  local_20 = 0;
  local_1c = 0.65 - local_24 * 0.5;
  local_18 = 0x3f000000;
  FUN_008e0d30(&local_20);
  FUN_008e6d00();
  FUN_008e59c0(2);
  FUN_00a82610(*(undefined4 *)(param_1 + 0x4f0),6,0xffffffff);
  *(undefined4 *)(param_1 + 0xe94) = 0x3c8efa35;
  local_20 = 0;
  local_1c = 0.17453292;
  local_18 = 0;
  FUN_00a83270(&local_20,0x3f490fdb,0x3f490fdb);
  iVar1 = *(int *)(param_1 + 0x4a0);
  if ((iVar1 == 1) || (iVar1 == 3)) {
    uVar2 = 0;
  }
  else {
    if (iVar1 != 2) {
      FUN_00a8caf0(0xffffffff,0,0,0);
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      goto LAB_0056cbc2;
    }
    uVar2 = 1;
  }
  FUN_00a8caf0(uVar2,0,0,0);
LAB_0056cbc2:
  *(undefined4 *)(param_1 + 0xf6c) = 0;
  if ((*(int *)(param_1 + 0x76c) != 0) &&
     (uVar4 = 0, *(int *)(*(int *)(param_1 + 0x76c) + 0x18) != 0)) {
    iVar1 = 0;
    puVar3 = (undefined4 *)(param_1 + 0xf70);
    do {
      uVar4 = uVar4 + 1;
      *puVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x76c) + 0x1c) + 0xfc + iVar1);
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + 0x100;
    } while (uVar4 < *(uint *)(*(int *)(param_1 + 0x76c) + 0x18));
  }
  FUN_00ac9420("tentacle_a");
  FUN_00ac94e0("tentacle_b");
  *(undefined4 *)(param_1 + 0xf68) = 0;
  FUN_00aa92c0(0);
  return 1;
}

// 0056CC50  FUN_0056cc50  size=387  [callgraph]
void __fastcall FUN_0056cc50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar3 = FUN_00a8c760(0x30);
  if (iVar3 == 0) {
    fVar1 = *(float *)(param_1 + 0xf6c);
    if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) && (*(int *)(param_1 + 0x76c) != 0)) {
      FUN_009fb990();
    }
    fVar1 = *(float *)(param_1 + 0xf6c);
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xf6c) = (float)((float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar6));
  }
  else {
    fVar1 = *(float *)(param_1 + 0xf6c);
    fVar7 = (float10)FUN_00fdc1f0();
    fVar6 = (float10)1;
    fVar7 = (fVar6 - fVar7) * (fVar6 - (float10)fVar1) + (float10)fVar1;
    *(float *)(param_1 + 0xf6c) = (float)fVar7;
    if ((float10)0.99 < fVar7) {
      *(float *)(param_1 + 0xf6c) = (float)fVar6;
    }
  }
  if (*(int *)(param_1 + 0x76c) != 0) {
    uVar4 = 0;
    fVar1 = *(float *)(param_1 + 0xf6c) / *(float *)(param_1 + 0x910);
    *(float *)(*(int *)(param_1 + 0x76c) + 0xb94) = fVar1;
    if (*(int *)(*(int *)(param_1 + 0x76c) + 0x18) != 0) {
      iVar3 = 0;
      pfVar5 = (float *)(param_1 + 0xf70);
      do {
        fVar2 = *pfVar5;
        if (*pfVar5 < fVar1) {
          fVar2 = fVar1;
        }
        *(float *)(*(int *)(*(int *)(param_1 + 0x76c) + 0x1c) + 0xfc + iVar3) = fVar2;
        uVar4 = uVar4 + 1;
        pfVar5 = pfVar5 + 1;
        iVar3 = iVar3 + 0x100;
      } while (uVar4 < *(uint *)(*(int *)(param_1 + 0x76c) + 0x18));
    }
  }
  iVar3 = FUN_00a8c760(0x33);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xf68) != 0) {
      FUN_00ac9420("tentacle_a");
      FUN_00ac94e0("tentacle_b");
    }
    *(undefined4 *)(param_1 + 0xf68) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xf68) == 0) {
    FUN_00ac9420("tentacle_b");
    FUN_00ac94e0("tentacle_a");
  }
  *(undefined4 *)(param_1 + 0xf68) = 1;
  return;
}

// 0057A770  Em0221::vf4C  size=114  [class]
void __fastcall Em0221::vf4C(int param_1)

{
  BehaviorEmBase::vf4C();
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_005723e0();
    FUN_0056cc50();
    return;
  case 1:
    FUN_0055cb40();
    FUN_0056cc50();
    return;
  case 2:
    FUN_00576c60();
    FUN_0056cc50();
    return;
  case 3:
    FUN_00577560();
    break;
  case 0xffffffff:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0056cc50();
    return;
  }
  FUN_0056cc50();
  return;
}

// 00AAD360  Em0221::Em0221  size=51  [class]
undefined4 * __fastcall Em0221::Em0221(undefined4 *param_1)

{
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a831e0();
  FUN_00a603a0();
  FUN_00a603a0();
  return param_1;
}

// 00AAD3A0  Em0221::vf04  size=6  [class]
undefined * Em0221::vf04(void)

{
  return &DAT_01b35004;
}

// 00AB6F10  Em0221::vf00  size=54  [class]
undefined4 __thiscall Em0221::vf00(undefined4 param_1,byte param_2)

{
  cXml::cXml_7();
  cXml::cXml_7();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

