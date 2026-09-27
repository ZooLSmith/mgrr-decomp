// src/behavior/BehaviorBalkan.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAFE40..00AE0EA0, 19 functions

#include "mgrr.h"
#include "BehaviorBalkan.h"

// 00AAFE40  BehaviorBalkan::BehaviorBalkan  size=59  [class]
undefined4 * __fastcall BehaviorBalkan::BehaviorBalkan(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  param_1[0x48a] = 0;
  iVar1 = 0xf9;
  do {
    FUN_00aa0ea0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AAFE80  BehaviorBalkan::vf04  size=6  [class]
undefined * BehaviorBalkan::vf04(void)

{
  return &DAT_01be9c98;
}

// 00AAFE90  FUN_00aafe90  size=64  [callgraph]
void FUN_00aafe90(void)

{
  int iVar1;
  
  iVar1 = 0xf9;
  do {
    FUN_00905ce0();
    EspControllerBullet::~EspControllerBullet();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00dd7270();
  Behavior::~Behavior();
  return;
}

// 00AB8C50  BehaviorBalkan::destruct  size=30  [class]
undefined4 __thiscall BehaviorBalkan::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aafe90();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC57B0  BehaviorBalkan::vf50  size=207  [class]
void __fastcall BehaviorBalkan::vf50(int *param_1)

{
  int iVar1;
  undefined1 local_50 [76];
  
  if (param_1[0x241] != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
        iVar1 = FUN_00a12210((int)(short)param_1[0x240]);
        if (iVar1 != 0) {
          D3DXMatrixTranslation(local_50,param_1[0x23c],param_1[0x23d],param_1[0x23e]);
          D3DXMatrixMultiply(param_1 + 4,&stack0xffffffa0,iVar1 + 0x10);
        }
      }
    }
  }
  Behavior::vf50();
  (**(code **)(*param_1 + 100))();
  if (param_1[0x1ed] == 0) {
    FUN_00a93170();
  }
  else {
    switchD_0080dbae::default();
  }
  if ((param_1[0x24c] != -1) && (param_1[0x1ed] != 0)) {
    FUN_0091ea00(param_1);
  }
  return;
}

// 00AC5880  BehaviorBalkan::vf54  size=35  [class]
void __fastcall BehaviorBalkan::vf54(int param_1)

{
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x930) != -1) && (*(int *)(param_1 + 0x7b4) != 0)) {
    FUN_0091e980(param_1);
  }
  return;
}

// 00AC5FB0  BehaviorBalkan::vf324  size=784  [class]
void __thiscall BehaviorBalkan::vf324(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x1698);
  iVar2 = 0x19;
  do {
    if (((*(byte *)(puVar1 + -0x11a) & 1) != 0) && (puVar1[-0xc9] == *(int *)(param_2 + 0xf4))) {
      puVar1[-0x3d] = 1;
      puVar1[-2] = *(undefined4 *)(param_2 + 0x100);
      puVar1[-1] = *(undefined4 *)(param_2 + 0x104);
      *puVar1 = *(undefined4 *)(param_2 + 0x108);
      puVar1[1] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 2) & 1) != 0) && (puVar1[0x53] == *(int *)(param_2 + 0xf4))) {
      puVar1[0xdf] = 1;
      puVar1[0x11a] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x11b] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x11c] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x11d] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x11e) & 1) != 0) && (puVar1[0x16f] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x1fb] = 1;
      puVar1[0x236] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x237] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x238] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x239] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x23a) & 1) != 0) && (puVar1[0x28b] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x317] = 1;
      puVar1[0x352] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x353] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x354] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x355] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x356) & 1) != 0) && (puVar1[0x3a7] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x433] = 1;
      puVar1[0x46e] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x46f] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x470] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x471] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x472) & 1) != 0) && (puVar1[0x4c3] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x54f] = 1;
      puVar1[0x58a] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x58b] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x58c] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x58d] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x58e) & 1) != 0) && (puVar1[0x5df] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x66b] = 1;
      puVar1[0x6a6] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x6a7] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x6a8] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x6a9] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x6aa) & 1) != 0) && (puVar1[0x6fb] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x787] = 1;
      puVar1[0x7c2] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x7c3] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x7c4] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x7c5] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x7c6) & 1) != 0) && (puVar1[0x817] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x8a3] = 1;
      puVar1[0x8de] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x8df] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x8e0] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x8e1] = *(undefined4 *)(param_2 + 0x10c);
    }
    if (((*(byte *)(puVar1 + 0x8e2) & 1) != 0) && (puVar1[0x933] == *(int *)(param_2 + 0xf4))) {
      puVar1[0x9bf] = 1;
      puVar1[0x9fa] = *(undefined4 *)(param_2 + 0x100);
      puVar1[0x9fb] = *(undefined4 *)(param_2 + 0x104);
      puVar1[0x9fc] = *(undefined4 *)(param_2 + 0x108);
      puVar1[0x9fd] = *(undefined4 *)(param_2 + 0x10c);
    }
    puVar1 = puVar1 + 0xb18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00ACAD60  BehaviorBalkan::vf4C  size=73  [class]
void __fastcall BehaviorBalkan::vf4C(int *param_1)

{
  Behavior::vf4C();
  switchD_0080dbae::default();
  if (param_1[0x24c] != -1) {
    (**(code **)(*param_1 + 0x304))();
    if ((param_1[0x3c5] != 0) && (*(int *)(param_1[0x3c5] + 0x378) != 0)) {
      FUN_0043e160(param_1 + 0x250);
    }
  }
  return;
}

// 00ACD440  BehaviorBalkan::startup  size=14  [class]
undefined4 __fastcall BehaviorBalkan::startup(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = BehaviorBulletBase::startup();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = param_1 + 0x1590;
  iVar5 = 0xfa;
  do {
    *(undefined2 *)(iVar2 + -0x360) = 0;
    FUN_00a7c950();
    *(undefined4 *)(iVar2 + 8) = 0xbf800000;
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0;
    RayCastManager::getWork(iVar2 + 0xf0);
    iVar2 = iVar2 + 0x470;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar2 = 0;
  iVar5 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x360);
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = param_1;
    }
    if (*(short *)(iVar4 + 0x358) <= iVar2) break;
    if (iVar3 == 0) {
      iVar3 = param_1;
    }
    if (((-1 < iVar2) && (iVar2 < *(short *)(iVar3 + 0x358))) &&
       (iVar3 = *(int *)(iVar3 + 0x350) + iVar5, iVar3 != 0)) {
      puVar1 = (ushort *)(iVar3 + 0xa2);
      *puVar1 = *puVar1 | 4;
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 0xb0;
  }
  FUN_00dd7240();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0xfa,0);
  return 1;
}

// 00ACD44E  FUN_00acd44e  size=199  [callgraph]
undefined4 FUN_00acd44e(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  iVar4 = unaff_EBP + 0x1590;
  iVar5 = 0xfa;
  do {
    *(undefined2 *)(iVar4 + -0x360) = 0;
    FUN_00a7c950();
    *(undefined4 *)(iVar4 + 8) = 0xbf800000;
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = 0;
    RayCastManager::getWork(iVar4 + 0xf0);
    iVar4 = iVar4 + 0x470;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar4 = 0;
  iVar5 = 0;
  while( true ) {
    iVar2 = *(int *)(unaff_EBP + 0x360);
    iVar3 = iVar2;
    if (iVar2 == 0) {
      iVar3 = unaff_EBP;
    }
    if (*(short *)(iVar3 + 0x358) <= iVar4) break;
    if (iVar2 == 0) {
      iVar2 = unaff_EBP;
    }
    if (((-1 < iVar4) && (iVar4 < *(short *)(iVar2 + 0x358))) &&
       (iVar2 = *(int *)(iVar2 + 0x350) + iVar5, iVar2 != 0)) {
      puVar1 = (ushort *)(iVar2 + 0xa2);
      *puVar1 = *puVar1 | 4;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0xb0;
  }
  FUN_00dd7240();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0xfa,0);
  return 1;
}

// 00ACD520  FUN_00acd520  size=563  [callgraph]
undefined4 * __thiscall FUN_00acd520(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_0043e160(param_2 + 4);
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = param_2[0x57];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5d] = param_2[0x5d];
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined2 *)((int)param_1 + 0x17a) = *(undefined2 *)((int)param_2 + 0x17a);
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  FUN_00acae80(param_2 + 0x68);
  param_1[0xb8] = param_2[0xb8];
  param_1[0xbc] = param_2[0xbc];
  param_1[0xbd] = param_2[0xbd];
  param_1[0xbe] = param_2[0xbe];
  param_1[0xbf] = param_2[0xbf];
  param_1[0xc0] = param_2[0xc0];
  param_1[0xc1] = param_2[0xc1];
  param_1[0xc2] = param_2[0xc2];
  param_1[0xc3] = param_2[0xc3];
  param_1[0xc4] = param_2[0xc4];
  return param_1;
}

// 00ACD760  FUN_00acd760  size=113  [callgraph]
void FUN_00acd760(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  sVar1 = FUN_00dde2d0(0,0x7fff);
  *(int *)(param_1 + 0x144) = (int)sVar1;
  uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x50);
  iVar3 = CollisionCapsule::CollisionCapsule(0xb,*(undefined4 *)(param_1 + 0x1b0),uVar2);
  if (iVar3 != 0) {
    FUN_00acb020(iVar3,*(undefined4 *)(param_1 + 0x1a0),0x3dcccccd,*(undefined1 *)(param_1 + 2));
    *(int *)(param_1 + 0x454) = iVar3;
  }
  return;
}

// 00ACD7E0  FUN_00acd7e0  size=555  [callgraph]
void FUN_00acd7e0(byte *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_98 [2];
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*param_1 & 1) != 0) {
    if (*(int *)(param_1 + 0x374) == 0) {
      local_40 = *(undefined4 *)(param_1 + 0x20);
      local_3c = *(undefined4 *)(param_1 + 0x24);
      local_38 = *(undefined4 *)(param_1 + 0x28);
      local_34 = *(undefined4 *)(param_1 + 0x2c);
      local_20 = *(undefined4 *)(param_1 + 0x10);
      local_1c = *(undefined4 *)(param_1 + 0x14);
      local_18 = *(undefined4 *)(param_1 + 0x18);
      local_14 = *(undefined4 *)(param_1 + 0x1c);
      local_98[0] = 0;
      iVar1 = FUN_00907560(param_1 + 0x450,&local_80,&local_90,local_98,0,&local_40,&local_20,0);
      if (iVar1 == 0) {
        return;
      }
      FUN_00eaa7b0(1,local_80,local_7c,local_78,0);
      fVar2 = (float10)local_90;
      fVar3 = (float10)local_88;
      fVar4 = (float10)fpatan((float10)local_8c,SQRT(fVar3 * fVar3 + fVar2 * fVar2));
      local_30 = (float)-fVar4;
      fVar2 = (float10)fpatan(fVar2,fVar3);
      local_2c = (float)fVar2;
      FUN_00c76f00();
      local_44 = *(int *)(param_1 + 0x150);
      local_70 = local_80;
      local_6c = local_7c;
      local_68 = local_78;
      local_64 = local_74;
      local_60 = local_30;
      local_5c = local_2c;
      local_58 = 0.0;
      local_54 = local_24;
      if (local_44 != 0xffff) {
        local_60 = local_90;
        local_5c = local_8c;
        local_58 = local_88;
        local_54 = local_84;
      }
      FUN_00c76f30(local_98[0]);
      if (*(int *)(param_1 + 0x150) != 0xffff) {
        FUN_00c76db0(&local_70);
      }
    }
    else {
      FUN_00eaa7b0(1,*(undefined4 *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x464),
                   *(undefined4 *)(param_1 + 0x468),0);
    }
    FUN_009e85d0(0x65,0x3f800000);
    FUN_00eaa840();
    if (*(int *)(param_1 + 0x454) != 0) {
      FUN_00a9dac0(*(int *)(param_1 + 0x454));
    }
    param_1[0x454] = 0;
    param_1[0x455] = 0;
    param_1[0x456] = 0;
    param_1[0x457] = 0;
    FUN_00a8f230();
  }
  return;
}

// 00ACFCB0  BehaviorBalkan::vf48  size=360  [class]
void __fastcall BehaviorBalkan::vf48(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  FUN_00a92fb0();
  fVar6 = (float10)FUN_00e049b0();
  param_1[0x3c8] = (int)(float)fVar6;
  BehaviorDebrisActor::vf48();
  if (param_1[0x369] == 0) {
    if (param_1[0x24c] != -1) {
      if (param_1[0x301] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00acfe16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x300))();
        return;
      }
      if (param_1[0x302] != 0) {
        FUN_00acc200();
      }
      param_1[0x302] = 1;
    }
  }
  else {
    fVar2 = (float)param_1[0x366];
    if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
      fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
      param_1[0x366] = (int)(float)((float10)(float)param_1[0x366] - fVar6);
    }
    if (param_1[0x36a] != 0) {
      fVar2 = (float)param_1[0x367] - (float)param_1[0x368];
      param_1[0x367] = (int)fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        param_1[0x367] = 0;
      }
      iVar3 = param_1[0x367];
      iVar5 = 0;
      iVar4 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          *(int *)(iVar5 + 0x1c + param_1[200]) = iVar3;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar4 < (short)param_1[0xc9]);
      }
    }
    if ((float)param_1[0x366] < 0.0) {
      FUN_00acc0a0();
      param_1[0x369] = 0;
    }
    if (param_1[0x237] != 0) {
      FUN_004066f0();
      FUN_00916660();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  return;
}

// 00AD2690  BehaviorBalkan::vf44  size=56  [class]
void __fastcall BehaviorBalkan::vf44(int param_1)

{
  int iVar1;
  
  FUN_00dd7270();
  Pl1500Knife::vf44();
  param_1 = param_1 + 0x1680;
  iVar1 = 0xfa;
  do {
    RayCastManager::getWork(param_1);
    param_1 = param_1 + 0x470;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00AD26D0  BehaviorBalkan::vf304  size=116  [class]
void __fastcall BehaviorBalkan::vf304(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1228) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1210));
  }
  piVar2 = (int *)(param_1 + 0x15ac);
  iVar1 = 0xfa;
  do {
    if ((*(byte *)(piVar2 + -0xdf) & 1) != 0) {
      FUN_00acd7e0(piVar2 + -0xdf);
      if (*piVar2 != 0) {
        thunk_FUN_00e58e40(*piVar2,piVar2 + -0xdb,0,0xffffffff);
      }
    }
    piVar2 = piVar2 + 0x11c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x1228) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1210));
  }
  return;
}

// 00AD2750  FUN_00ad2750  size=560  [callgraph]
void __thiscall FUN_00ad2750(int *param_1,byte *param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  float10 fVar4;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [92];
  
  if ((*param_2 & 1) == 0) {
    return;
  }
  fVar4 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar1 = (float)fVar4;
  bVar2 = param_2[1];
  if (bVar2 == 0) {
    FUN_00acd760(param_2);
    fVar4 = (float10)fVar1;
    param_2[1] = 1;
  }
  else if (bVar2 != 1) {
    if (bVar2 == 2) {
      (**(code **)(*(int *)(param_2 + 0x380) + 8))(0x3f800000,0,0);
      FUN_00eaa840();
      if (*(int *)(param_2 + 0x454) != 0) {
        FUN_00a9dac0(*(int *)(param_2 + 0x454));
      }
      param_2[0x454] = 0;
      param_2[0x455] = 0;
      param_2[0x456] = 0;
      param_2[0x457] = 0;
      FUN_00a8f230();
    }
    goto LAB_00ad295a;
  }
  fStack_80 = (float)(fVar4 * (float10)*(float *)(param_2 + 0x30));
  fStack_7c = (float)(fVar4 * (float10)*(float *)(param_2 + 0x34));
  fStack_78 = (float)(fVar4 * (float10)*(float *)(param_2 + 0x38));
  fStack_74 = (float)(fVar4 * (float10)*(float *)(param_2 + 0x3c));
  *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x1a8) + *(float *)(param_2 + 0x34);
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_2 + 0x30) = (float)(fVar4 * (float10)*(float *)(param_2 + 0x30));
  *(float *)(param_2 + 0x34) = (float)(fVar4 * (float10)*(float *)(param_2 + 0x34));
  *(float *)(param_2 + 0x38) = (float)(fVar4 * (float10)*(float *)(param_2 + 0x38));
  *(float *)(param_2 + 0x3c) = (float)(fVar4 * (float10)*(float *)(param_2 + 0x3c));
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x1c);
  *(float *)(param_2 + 0x10) = fStack_80 + *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0x14) = fStack_7c + *(float *)(param_2 + 0x14);
  *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + fStack_78;
  *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) + fStack_74;
  fVar1 = *(float *)(param_2 + 0x368) - fVar1;
  *(float *)(param_2 + 0x368) = fVar1;
  if (0.0 <= fVar1) {
    *(uint *)(param_2 + 1000) = *(uint *)(param_2 + 1000) | 0x40;
    *(undefined4 *)(param_2 + 0x3c0) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x3c4) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x3c8) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x3cc) = *(undefined4 *)(param_2 + 0x3c);
    uStack_70 = *(undefined4 *)(param_2 + 0x20);
    uStack_6c = *(undefined4 *)(param_2 + 0x24);
    uStack_68 = *(undefined4 *)(param_2 + 0x28);
    uStack_64 = *(undefined4 *)(param_2 + 0x2c);
    fStack_80 = *(float *)(param_2 + 0x10);
    fStack_7c = *(float *)(param_2 + 0x14);
    fStack_78 = *(float *)(param_2 + 0x18);
    fStack_74 = *(float *)(param_2 + 0x1c);
    iVar3 = FUN_009f8b40();
    FUN_00468970(param_2 + 0x450,0,&uStack_70,&fStack_80,iVar3 << 0x10 | 5,0,2,0,"balkan",0,0);
    HavokRayCastManager::set(auStack_60);
  }
  else {
    param_2[1] = 2;
  }
LAB_00ad295a:
  if ((*param_2 & 1) != 0) {
    iVar3 = *(int *)(param_2 + 0x364);
    *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  }
  return;
}

// 00AE0640  FUN_00ae0640  size=2134  [callgraph]
void __thiscall FUN_00ae0640(int param_1,int param_2,uint *param_3)

{
  float *pfVar1;
  float *pfVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  byte *pbVar3;
  float fVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  float unaff_EBX;
  undefined4 unaff_ESI;
  float10 fVar10;
  undefined4 *local_234;
  float local_230;
  float local_22c;
  float local_228;
  float fStack_224;
  float local_220;
  float local_21c;
  float local_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  LPCRITICAL_SECTION local_1e8;
  int local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 auStack_198 [8];
  undefined1 local_190 [28];
  undefined1 auStack_174 [92];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [56];
  undefined1 auStack_98 [8];
  undefined1 local_90 [4];
  undefined1 auStack_8c [36];
  undefined1 auStack_68 [100];
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1210);
    local_1e8 = lpCriticalSection;
    local_1e4 = param_1;
    if (*(int *)(param_1 + 0x1228) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar7 = 0;
    do {
      pbVar3 = (byte *)(uVar7 * 0x470 + 0x1230 + param_1);
      if ((*(byte *)(uVar7 * 0x470 + 0x1230 + param_1) & 1) == 0) {
        pbVar3[2] = (byte)uVar7;
        iVar8 = FUN_00a12210(uVar7);
        *(int *)(pbVar3 + 0x364) = iVar8;
        if (iVar8 != 0) {
          *pbVar3 = *pbVar3 | 1;
          FUN_00acd520(param_3);
          uVar9 = FUN_00a7c7f0();
          FUN_00a7c960(uVar9);
          *(ushort *)(*(int *)(pbVar3 + 0x364) + 0xa2) =
               *(ushort *)(*(int *)(pbVar3 + 0x364) + 0xa2) | 4;
          pfVar1 = (float *)(pbVar3 + 0x10);
          pbVar3[0x378] = 0;
          pbVar3[0x379] = 0;
          pbVar3[0x37a] = 0;
          pbVar3[0x37b] = 0;
          pbVar3[0x37c] = 0;
          pbVar3[0x37d] = 0;
          pbVar3[0x37e] = 0;
          pbVar3[0x37f] = 0;
          *pfVar1 = (float)param_3[0x48];
          *(uint *)(pbVar3 + 0x14) = param_3[0x49];
          *(uint *)(pbVar3 + 0x18) = param_3[0x4a];
          *(uint *)(pbVar3 + 0x1c) = param_3[0x4b];
          *(float *)(pbVar3 + 0x20) = *pfVar1;
          *(undefined4 *)(pbVar3 + 0x24) = *(undefined4 *)(pbVar3 + 0x14);
          *(undefined4 *)(pbVar3 + 0x28) = *(undefined4 *)(pbVar3 + 0x18);
          *(undefined4 *)(pbVar3 + 0x2c) = *(undefined4 *)(pbVar3 + 0x1c);
          uVar6 = FUN_00c763f0(*(undefined4 *)(pbVar3 + 0x150));
          *(undefined2 *)(pbVar3 + 0xd4) = uVar6;
          if ((*param_3 & 1) != 0) {
            pfVar2 = (float *)(pbVar3 + 0x30);
            *pfVar2 = *(float *)(pbVar3 + 0x170) - *pfVar1;
            *(float *)(pbVar3 + 0x34) = *(float *)(pbVar3 + 0x174) - *(float *)(pbVar3 + 0x14);
            *(float *)(pbVar3 + 0x38) = *(float *)(pbVar3 + 0x178) - *(float *)(pbVar3 + 0x18);
            *(float *)(pbVar3 + 0x3c) = *(float *)(pbVar3 + 0x17c) - *(float *)(pbVar3 + 0x1c);
            if (*(float *)(pbVar3 + 0x38) * *(float *)(pbVar3 + 0x38) +
                *pfVar2 * *pfVar2 + *(float *)(pbVar3 + 0x34) * *(float *)(pbVar3 + 0x34) == 0.0) {
              pbVar3[0x34] = 0;
              pbVar3[0x35] = 0;
              pbVar3[0x36] = 0x80;
              pbVar3[0x37] = 0x3f;
            }
            else {
              fVar4 = *(float *)(pbVar3 + 0x38) * *(float *)(pbVar3 + 0x38) +
                      *pfVar2 * *pfVar2 + *(float *)(pbVar3 + 0x34) * *(float *)(pbVar3 + 0x34);
              if (fVar4 < 0.0 == (fVar4 == 0.0)) {
                local_234 = *(undefined4 **)(pbVar3 + 0x38);
                FUN_00ddf460(pfVar2,pfVar2);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                pbVar3[0x30] = 0;
                pbVar3[0x31] = 0;
                pbVar3[0x32] = 0;
                pbVar3[0x33] = 0;
                pbVar3[0x34] = 0;
                pbVar3[0x35] = 0;
                pbVar3[0x36] = 0x80;
                pbVar3[0x37] = 0x3f;
                pbVar3[0x38] = 0;
                pbVar3[0x39] = 0;
                pbVar3[0x3a] = 0;
                pbVar3[0x3b] = 0;
              }
            }
            fVar4 = *(float *)(pbVar3 + 0x1a0);
            *(float *)(pbVar3 + 0x30) = *(float *)(pbVar3 + 0x30) * fVar4;
            *(float *)(pbVar3 + 0x34) = fVar4 * *(float *)(pbVar3 + 0x34);
            *(float *)(pbVar3 + 0x38) = fVar4 * *(float *)(pbVar3 + 0x38);
            *(float *)(pbVar3 + 0x3c) = fVar4 * *(float *)(pbVar3 + 0x3c);
            local_200 = *pfVar1 + *(float *)(pbVar3 + 0x30);
            local_1fc = *(float *)(pbVar3 + 0x14) + *(float *)(pbVar3 + 0x34);
            local_1f8 = *(float *)(pbVar3 + 0x18) + *(float *)(pbVar3 + 0x38);
            local_1f4 = *(float *)(pbVar3 + 0x1c) + *(float *)(pbVar3 + 0x3c);
            thunk_FUN_00dde510(&local_230,&local_22c,&local_200,pfVar1);
            local_230 = local_230 * -1.0;
            local_228 = 0.0;
            thunk_FUN_00ddc1d0(*(int *)(pbVar3 + 0x364) + 0x10,&local_230,5);
            *(float *)(pbVar3 + 0x80) = local_22c;
          }
          if ((*param_3 & 2) != 0) {
            pbVar3[0x30] = 0;
            pbVar3[0x31] = 0;
            pbVar3[0x32] = 0;
            pbVar3[0x33] = 0;
            pbVar3[0x34] = 0;
            pbVar3[0x35] = 0;
            pbVar3[0x36] = 0;
            pbVar3[0x37] = 0;
            *(undefined4 *)(pbVar3 + 0x38) = *(undefined4 *)(pbVar3 + 0x1a0);
            iVar8 = *(int *)(pbVar3 + 0x364);
            local_200 = (float)param_3[0x50];
            local_234 = (undefined4 *)(iVar8 + 0x10);
            local_1fc = (float)param_3[0x51];
            fVar4 = (float)param_3[0x52];
            *(undefined4 *)(iVar8 + 0x48) = 0;
            *(undefined4 *)(iVar8 + 0x44) = 0;
            *(undefined4 *)(iVar8 + 0x40) = 0;
            *(undefined4 *)(iVar8 + 0x3c) = 0;
            *(undefined4 *)(iVar8 + 0x34) = 0;
            *(undefined4 *)(iVar8 + 0x30) = 0;
            *(undefined4 *)(iVar8 + 0x2c) = 0;
            *(undefined4 *)(iVar8 + 0x28) = 0;
            *(undefined4 *)(iVar8 + 0x20) = 0;
            *(undefined4 *)(iVar8 + 0x1c) = 0;
            *(undefined4 *)(iVar8 + 0x18) = 0;
            *(undefined4 *)(iVar8 + 0x14) = 0;
            *(undefined4 *)(iVar8 + 0x4c) = 0x3f800000;
            *(undefined4 *)(iVar8 + 0x38) = 0x3f800000;
            *(undefined4 *)(iVar8 + 0x24) = 0x3f800000;
            *local_234 = 0x3f800000;
            if (fVar4 != 0.0) {
              D3DXMatrixRotationZ(local_190,fVar4);
              D3DXMatrixMultiply(unaff_ESI,auStack_198,unaff_ESI);
            }
            if (local_1fc != 0.0) {
              D3DXMatrixRotationY(local_90,local_1fc);
              D3DXMatrixMultiply(unaff_ESI,auStack_98,unaff_ESI);
            }
            if (local_200 != 0.0) {
              D3DXMatrixRotationX(auStack_110,local_200);
              D3DXMatrixMultiply(unaff_ESI,auStack_118,unaff_ESI);
            }
            D3DXVec3TransformNormal(pbVar3 + 0x30,pbVar3 + 0x30,*(int *)(pbVar3 + 0x364) + 0x10);
            fVar10 = (float10)fpatan((float10)*(float *)(pbVar3 + 0x30),
                                     (float10)*(float *)(pbVar3 + 0x38));
            *(float *)(pbVar3 + 0x80) = (float)fVar10;
          }
          iVar8 = *(int *)(pbVar3 + 0x364);
          *(float *)(iVar8 + 0x40) = *pfVar1;
          *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(pbVar3 + 0x14);
          *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)(pbVar3 + 0x18);
          if (*(int *)(pbVar3 + 0x364) != 0) {
            local_220 = 0.0;
            local_218 = 0.0;
            local_21c = 1.0;
            fVar4 = *(float *)(pbVar3 + 0x30);
            fVar4 = *(float *)(pbVar3 + 0x38) * *(float *)(pbVar3 + 0x38) +
                    fVar4 * fVar4 + *(float *)(pbVar3 + 0x34) * *(float *)(pbVar3 + 0x34);
            if (fVar4 < 0.0 == (fVar4 == 0.0)) {
              local_234 = *(undefined4 **)(pbVar3 + 0x38);
              FUN_00ddf460(&uStack_1e0,pbVar3 + 0x30);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              uStack_1e0 = 0;
              uStack_1dc = 0x3f800000;
              uStack_1d8 = 0;
            }
            local_230 = local_21c * *(float *)(pbVar3 + 0x38) -
                        local_218 * *(float *)(pbVar3 + 0x34);
            local_22c = local_218 * *(float *)(pbVar3 + 0x30) -
                        local_220 * *(float *)(pbVar3 + 0x38);
            local_228 = local_220 * *(float *)(pbVar3 + 0x34) -
                        local_21c * *(float *)(pbVar3 + 0x30);
            fVar4 = local_228 * local_228 + local_230 * local_230 + local_22c * local_22c;
            fStack_210 = local_230;
            fStack_20c = local_22c;
            fStack_208 = local_228;
            if (SQRT(fVar4) != 0.0) {
              if (NAN(fVar4) || fVar4 < 0.0 == (fVar4 == 0.0)) {
                FUN_00ddf460(&fStack_210,&fStack_210);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                fStack_210 = 0.0;
                fStack_20c = 1.0;
                fStack_208 = 0.0;
              }
              local_230 = fStack_208 * *(float *)(pbVar3 + 0x34) -
                          fStack_20c * *(float *)(pbVar3 + 0x38);
              local_22c = fStack_210 * *(float *)(pbVar3 + 0x38) -
                          fStack_208 * *(float *)(pbVar3 + 0x30);
              local_228 = fStack_20c * *(float *)(pbVar3 + 0x30) -
                          fStack_210 * *(float *)(pbVar3 + 0x34);
              fVar4 = local_228 * local_228 + local_230 * local_230 + local_22c * local_22c;
              local_220 = local_230;
              local_21c = local_22c;
              local_218 = local_228;
              if (fVar4 < 0.0 == (fVar4 == 0.0)) {
                FUN_00ddf460(&local_220,&local_220);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_220 = 0.0;
                local_21c = 1.0;
                local_218 = 0.0;
              }
              D3DXMatrixRotationAxis(auStack_d0,&local_220,param_3[0x65]);
              FUN_00ddcfe0(&uStack_1dc,&local_22c,param_3[0x65]);
              D3DXVec3TransformNormal(pbVar3 + 0x30,pbVar3 + 0x30,&uStack_1dc);
              local_228 = (float)local_234 * *(float *)(pbVar3 + 0x38) -
                          local_230 * *(float *)(pbVar3 + 0x34);
              fStack_224 = local_230 * *(float *)(pbVar3 + 0x30) -
                           unaff_EBX * *(float *)(pbVar3 + 0x38);
              local_220 = unaff_EBX * *(float *)(pbVar3 + 0x34) -
                          (float)local_234 * *(float *)(pbVar3 + 0x30);
              D3DXMatrixRotationAxis(auStack_68,&local_228,param_3[100]);
              FUN_00ddcfe0(auStack_174,&local_234,param_3[100]);
              D3DXVec3TransformNormal(pbVar3 + 0x30,pbVar3 + 0x30,auStack_174);
              D3DXMatrixMultiply(*(int *)(pbVar3 + 0x364) + 0x10,*(int *)(pbVar3 + 0x364) + 0x10,
                                 auStack_100);
              D3DXMatrixMultiply(*(int *)(pbVar3 + 0x364) + 0x10,*(int *)(pbVar3 + 0x364) + 0x10,
                                 auStack_8c);
              iVar8 = *(int *)(pbVar3 + 0x364);
              *(float *)(iVar8 + 0x40) = *pfVar1;
              *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(pbVar3 + 0x14);
              *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)(pbVar3 + 0x18);
            }
          }
          iVar8 = local_1e4;
          pbVar3[1] = 0;
          *(float *)(pbVar3 + 0x368) = (float)param_3[0x59] / (float)param_3[0x58];
          *(uint *)(pbVar3 + 0x36c) = *param_3 & 4;
          *(uint *)(pbVar3 + 0x370) = *param_3 & 8;
          FUN_00ac5ea0(pbVar3);
          FUN_00ad2980(pbVar3);
          if (param_3[0x45] == 0x3e) {
            FUN_009f8ae0(param_3[0x5c]);
            *(uint *)(iVar8 + 0xb9c) = param_3[0x5c];
          }
          pbVar3[0x374] = 0;
          pbVar3[0x375] = 0;
          pbVar3[0x376] = 0;
          pbVar3[0x377] = 0;
          if (local_1e8[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            return;
          }
          LeaveCriticalSection(local_1e8);
          return;
        }
        break;
      }
      bVar5 = (byte)uVar7 + 1;
      uVar7 = (uint)bVar5;
    } while (bVar5 < 0xfa);
    if (*(int *)(param_1 + 0x1228) != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}

// 00AE0EA0  BehaviorBalkan::vf300  size=78  [class]
void __fastcall BehaviorBalkan::vf300(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1228) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1210));
  }
  pbVar1 = (byte *)(param_1 + 0x1230);
  iVar2 = 0xfa;
  do {
    if ((*pbVar1 & 1) != 0) {
      FUN_00ad2750(pbVar1);
    }
    pbVar1 = pbVar1 + 0x470;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x1228) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1210));
  }
  return;
}

