// src/behavior/BehaviorBulletBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACCE00..00AE8970, 13 functions

#include "types.h"

// 00ACCE00  BehaviorBulletBase::BehaviorBulletBase  size=235  [class]
undefined4 * __fastcall BehaviorBulletBase::BehaviorBulletBase(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a603a0();
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  FUN_00a7c930();
  FUN_004105d0();
  FUN_004105d0();
  FUN_00a7c930();
  param_1[0x2fe] = 0x42700000;
  param_1[0x2fd] = 0;
  param_1[0x2ff] = 0x40a00000;
  FUN_00445db0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00410710();
  FUN_009003e0();
  FUN_009003e0();
  param_1[0x443] = 0;
  FUN_00904d60();
  FUN_00904d60();
  EspControllerBullet::EspControllerBullet_5();
  FUN_00a7c930();
  return param_1;
}

// 00ACCEF0  BehaviorBulletBase::vf04  size=6  [class]
undefined * BehaviorBulletBase::vf04(void)

{
  return &DAT_01be9c94;
}

// 00ACCF00  BehaviorBulletBase::vf00  size=98  [class]
undefined4 __thiscall BehaviorBulletBase::vf00(undefined4 param_1,byte param_2)

{
  EspControllerBullet::EspControllerBullet_6();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ACCF70  FUN_00accf70  size=225  [callgraph]
void __fastcall FUN_00accf70(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_150 [16];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  uint local_b4;
  uint local_b0;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00410710();
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_24 = 1;
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_34 = *(undefined4 *)(param_1 + 0x4c);
  local_30 = 0x3fa00000;
  local_2c = 0x3fa00000;
  local_28 = 0;
  local_20 = 0x3f000000;
  puVar1 = (undefined4 *)FUN_009f8b60();
  local_18 = *puVar1;
  local_b0 = local_b0 | 0x400000;
  local_14 = 0;
  local_13c = 100;
  local_138 = 100;
  local_b4 = local_b4 | 0x1000c0;
  local_140 = 0x141;
  local_134 = 0x14;
  local_130 = 0x500;
  Behavior::createAttackImpactWave(local_150);
  return;
}

// 00ACD060  FUN_00acd060  size=110  [callgraph]
void __fastcall FUN_00acd060(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  sVar1 = FUN_00dde2d0(0,0x7fff);
  *(int *)(param_1 + 0xa34) = (int)sVar1;
  uVar2 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar3 = CollisionCapsule::CollisionCapsule(0xe,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (iVar3 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,0);
    FUN_00acb020(iVar3,*(undefined4 *)(param_1 + 0xb90),0x3dcccccd,0xffffffff);
  }
  return;
}

// 00ACD0D0  FUN_00acd0d0  size=870  [callgraph]
void __fastcall FUN_00acd0d0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((param_1[0x139] == 0) && (param_1[0x3c4] == 0)) {
    if (param_1[0x300] != 0) {
      FUN_00eaa7b0(1,param_1[0x304],param_1[0x305],param_1[0x306],0);
      fVar3 = (float10)fpatan((float10)(float)param_1[0x309],
                              SQRT((float10)(float)param_1[0x308] * (float10)(float)param_1[0x308] +
                                   (float10)(float)param_1[0x30a] * (float10)(float)param_1[0x30a]))
      ;
      local_60 = (float)-fVar3;
      fVar3 = (float10)fpatan((float10)(float)param_1[0x308],(float10)(float)param_1[0x30a]);
      local_5c = (float)fVar3;
      FUN_00c76f00();
      local_90 = param_1[0x304];
      local_64 = param_1[0x239];
      local_8c = param_1[0x305];
      local_88 = param_1[0x306];
      local_84 = param_1[0x307];
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = 0.0;
      local_74 = local_54;
      if (local_64 != 0xffff) {
        local_80 = (float)param_1[0x308];
        local_7c = (float)param_1[0x309];
        local_78 = (float)param_1[0x30a];
        local_74 = param_1[0x30b];
      }
      iVar1 = param_1[0x357];
      FUN_00a81330(iVar1);
      FUN_00a7c800();
      local_6c = FUN_00a12210(iVar1);
      local_68 = param_1[0x35d];
      local_70 = FUN_00a81330();
      FUN_009e85d0(0x65,0x3f800000);
      FUN_00eaa840();
      FUN_00acc0a0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      return;
    }
    local_20 = param_1[0x244];
    local_1c = param_1[0x245];
    local_18 = param_1[0x246];
    local_14 = param_1[0x247];
    local_30 = param_1[0x14];
    local_2c = param_1[0x15];
    local_28 = param_1[0x16];
    local_24 = param_1[0x17];
    local_94 = 0;
    iVar1 = FUN_00907560(param_1 + 0x449,&local_40,&local_50,&local_94,0,&local_20,&local_30,0);
    if (iVar1 != 0) {
      FUN_00eaa7b0(1,local_40,local_3c,local_38,0);
      fVar3 = (float10)local_50;
      fVar2 = (float10)local_48;
      fVar4 = (float10)fpatan((float10)local_4c,SQRT(fVar2 * fVar2 + fVar3 * fVar3));
      local_60 = (float)-fVar4;
      fVar3 = (float10)fpatan(fVar3,fVar2);
      local_5c = (float)fVar3;
      FUN_00c76f00();
      local_64 = param_1[0x239];
      local_90 = local_40;
      local_8c = local_3c;
      local_88 = local_38;
      local_84 = local_34;
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = 0.0;
      local_74 = local_54;
      if (local_64 != 0xffff) {
        local_80 = local_50;
        local_7c = local_4c;
        local_78 = local_48;
        local_74 = local_44;
      }
      FUN_00c76f30(local_94);
      (**(code **)(*param_1 + 0x318))(&local_90);
      FUN_009e85d0(0x65,0x3f800000);
      FUN_00eaa840();
      FUN_00acc0a0();
    }
  }
  return;
}

// 00AE2910  BehaviorBulletBase::vf304  size=428  [class]
void __fastcall BehaviorBulletBase::vf304(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  switch(param_1[0x24c]) {
  case 0:
  case 8:
  case 0x1d:
  case 0x1e:
  case 0x3e:
    FUN_00ad0b70();
    break;
  case 1:
  case 0xd:
  case 0x25:
  case 0x26:
  case 0x28:
    FUN_00ad5210();
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xb:
  case 0x27:
    FUN_00ad9760();
    break;
  case 6:
  case 7:
  case 9:
    FUN_00ad8440();
    break;
  case 0xc:
    FUN_00ad1ad0();
    break;
  case 0xe:
  case 0xf:
    FUN_00ad76d0();
    break;
  case 0x11:
  case 0x29:
    FUN_00acb750();
    break;
  case 0x1a:
    FUN_00ad70e0();
    break;
  case 0x1b:
    FUN_00ad6730();
    break;
  case 0x1c:
    FUN_00ad15e0();
    break;
  case 0x1f:
    FUN_00adb940();
    break;
  case 0x20:
    FUN_00adbb10();
    break;
  case 0x21:
    FUN_0047f430();
    break;
  case 0x22:
    FUN_00ad2300();
    break;
  case 0x23:
    FUN_00ad22a0();
    break;
  case 0x24:
    FUN_00ad2360();
    break;
  case 0x2a:
    FUN_00ad1c80();
    break;
  case 0x2c:
    FUN_00adc900();
    break;
  case 0x2d:
  case 0x2e:
  case 0x31:
  case 0x32:
    FUN_00acc070();
    break;
  case 0x33:
    FUN_00ad5260();
    break;
  case 0x34:
  case 0x35:
    FUN_00ad5a30();
    break;
  case 0x36:
    FUN_00ac5aa0();
    break;
  case 0x37:
    FUN_00ad1950();
    break;
  case 0x3b:
    FUN_00add050();
    break;
  case 0x3c:
    FUN_00ad23b0();
    break;
  case 0x3d:
    FUN_00acd0d0();
    break;
  case 0x40:
    if (param_1[0x300] != 0) {
      FUN_00acc0a0();
    }
  }
  if (param_1[0x243] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x68))(0,0xffffffff);
    thunk_FUN_00e58e40(param_1[0x243],uVar2);
  }
  if (param_1[0x3c7] == 0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x3f800000;
    D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
    local_2c = 0;
    local_28 = 0;
    uStack_24 = 0;
    pfVar1 = (float *)(param_1 + 0x24);
    thunk_FUN_00dde510(pfVar1,param_1 + 0x25,&stack0xffffffc4,&local_2c);
    *pfVar1 = *pfVar1 * -1.0;
    param_1[0x26] = 0;
    param_1[0x25c] = param_1[0x25];
  }
  param_1[0x3c7] = 0;
  return;
}

// 00AE2BC0  FUN_00ae2bc0  size=98  [callgraph]
void FUN_00ae2bc0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  FUN_0040b190();
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01be9c98;
      (**(code **)(*piVar1 + 4))(&DAT_01be9c98);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00ae0640(param_1,param_2);
      }
    }
  }
  return;
}

// 00AE2C30  FUN_00ae2c30  size=437  [callgraph]
void __fastcall FUN_00ae2c30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_160 [348];
  
  iVar1 = FUN_00de4550("_col.hkx",0);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(int *)(param_1 + 0x7b0) = iVar2;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00de46d0("_col.hkx",0);
      FUN_008f6410(uVar4,iVar1,uVar3);
      FUN_008f2cd0(1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
      FUN_008f40f0(param_1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xb9c));
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x930) == 0x18) {
    uVar3 = 5;
    iVar1 = param_1;
  }
  else {
    iVar1 = FUN_00a7c8a0(0);
    uVar3 = 0;
  }
  FUN_004039a0(uVar3,iVar1,uVar4);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
  uVar4 = 0x40000000;
  if (*(int *)(param_1 + 0x940) == 0x101) {
    uVar4 = 0x3e4ccccd;
  }
  if (*(int *)(param_1 + 0x930) == 0x17) {
    uVar3 = 10;
  }
  else {
    uVar3 = 100;
  }
  FUN_00acb220(uVar3,uVar4,0x3daaaaab);
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10;
  }
  FUN_00addd40(param_1 + 0xb40,param_1 + 0xb50,0x41a00000,0x40000000);
  FUN_00cd4530(param_1);
  return;
}

// 00AE2DF0  FUN_00ae2df0  size=1253  [callgraph]
void __fastcall FUN_00ae2df0(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_10c [4];
  int iStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined1 auStack_9c [12];
  undefined1 local_90 [40];
  int aiStack_68 [25];
  
  iVar11 = FUN_00a81330();
  if (iVar11 != 0) {
    FUN_00a7c8a0();
  }
  D3DXMatrixInverse(local_90,0,param_1 + 4);
  D3DXVec3TransformNormal(auStack_10c,param_1 + 0x2d4,auStack_9c);
  fVar14 = (float10)(**(code **)(*param_1 + 0x24))();
  iVar11 = param_1[0x186];
  if (iVar11 == 0) {
    param_1[0x2fc] = 0x42b40000;
    param_1[0x186] = 1;
    if (param_1[0x24c] == 0x16) {
      param_1[0x2fc] = 0x43960000;
    }
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    FUN_00ae2c30();
    (**(code **)(*param_1 + 0xd8))(1);
    FUN_004066f0();
    iVar11 = param_1[0x248];
    iVar1 = param_1[0x249];
    iVar2 = param_1[0x24a];
    FUN_0091a620(&stack0xfffffed8);
    fVar15 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar17 = (float)fVar15;
    fVar15 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    uStack_f8 = 0xc1200000;
    fStack_f0 = (float)fVar15;
    fStack_f4 = fVar17;
    FUN_0091a6d0(&uStack_f8);
    FUN_00915ef0(0x3ecccccd);
    FUN_00915e60(0x41200000);
    iStack_108 = iVar11;
    iStack_104 = iVar1;
    iStack_100 = iVar2;
    FUN_0091a620(&iStack_108);
    param_1[0x360] = 0;
    if (DAT_01885d68 != 1) {
      piVar12 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar12 = *piVar12 + -1;
      if (((*piVar12 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else if (iVar11 != 1) goto joined_r0x00ae31a3;
  param_1[0x360] = (int)((float)param_1[0x360] + (float)fVar14);
  FUN_0091a5e0(&iStack_108);
  if (param_1[0x237] != 0) {
    FUN_0091df60(&iStack_e8);
    FUN_01005140(aiStack_68);
    piVar12 = aiStack_68;
    piVar13 = param_1 + 4;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *piVar13 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar13 = piVar13 + 1;
    }
  }
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[0x17] = param_1[0x13];
  fVar17 = (float)param_1[4];
  fVar3 = (float)param_1[5];
  fVar4 = (float)param_1[6];
  fVar5 = (float)param_1[8];
  fVar6 = (float)param_1[9];
  fVar7 = (float)param_1[10];
  fVar10 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
                (float)param_1[0xd] * (float)param_1[0xd] +
                (float)param_1[0xc] * (float)param_1[0xc]);
  fVar8 = (float)param_1[10];
  fVar18 = (float)param_1[0xe] / fVar10;
  fVar15 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar10));
  fVar16 = (float10)fpatan((float10)(fVar8 / fVar10),(float10)fVar18);
  param_1[0x24] = (int)(float)fVar16;
  param_1[0x25] = (int)(float)fVar15;
  fVar15 = (float10)fpatan((float10)(float)param_1[5] /
                           (float10)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7),
                           (float10)(float)param_1[4] /
                           (float10)SQRT(fVar3 * fVar3 + fVar17 * fVar17 + fVar4 * fVar4));
  param_1[0x26] = (int)(float)fVar15;
  fVar17 = (float)param_1[0x2fc] - (float)fVar14;
  param_1[0x2fc] = (int)fVar17;
  if (fVar17 < 0.0) {
    param_1[0x186] = 2;
  }
  if (((param_1[0x24c] != 0x15) && (iVar11 = FUN_009165d0(), iVar11 != 0)) &&
     (0 < *(int *)(iVar11 + 0x14))) {
    param_1[0x186] = 2;
  }
  iVar11 = param_1[0x186];
joined_r0x00ae31a3:
  if (iVar11 == 2) {
    FUN_00c76f00();
    iStack_e8 = param_1[0x14];
    iStack_bc = param_1[0x239];
    iStack_e4 = param_1[0x15];
    iStack_e0 = param_1[0x16];
    iStack_dc = param_1[0x17];
    uStack_d8 = 0;
    uStack_d4 = 0xbf800000;
    uStack_d0 = 0;
    uStack_cc = uStack_fc;
    iVar11 = FUN_00c76fa0(param_1 + 0x237);
    if (iVar11 != 0) {
      uVar9 = *(uint *)(iVar11 + 0xc);
      if (uVar9 == 0) {
        uStack_c0 = 0;
      }
      else {
        uStack_c0 = *(undefined4 *)((-(uint)(uVar9 != 0) & uVar9) + 0x2c);
      }
      iVar11 = FUN_008f7780(iVar11);
      if (iVar11 != 0) {
        uStack_c8 = *(undefined4 *)(iVar11 + 0x4f0);
      }
    }
    (**(code **)(*param_1 + 0x318))(&iStack_e8);
    param_1[0x414] = param_1[0x14];
    param_1[0x415] = param_1[0x15];
    param_1[0x416] = param_1[0x16];
    param_1[0x417] = param_1[0x17];
    Behavior::createAttackImpactWave(param_1 + 0x3d0);
    param_1[0x2fc] = 0x42f00000;
    param_1[0x186] = 4;
    FUN_00acc2f0(0x42f00000,0);
    FUN_00cd4630(param_1);
  }
  switchD_0080dbae::default();
  if (param_1[0x237] != 0) {
    FUN_00916660();
  }
  return;
}

// 00AE32E0  FUN_00ae32e0  size=2079  [callgraph]
void __fastcall FUN_00ae32e0(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  undefined4 uStack_298;
  float fStack_294;
  float afStack_290 [2];
  int iStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  int iStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined4 uStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  int iStack_244;
  int iStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined1 auStack_22c [4];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_15c [12];
  undefined1 local_150 [24];
  float fStack_138;
  float fStack_134;
  float afStack_130 [2];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [64];
  int aiStack_a8 [14];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [100];
  
  iVar13 = FUN_00a81330();
  if (iVar13 != 0) {
    FUN_00a7c8a0();
  }
  D3DXMatrixInverse(local_150,0,param_1 + 4);
  D3DXVec3TransformNormal(auStack_22c,param_1 + 0x2d4,auStack_15c);
  fStack_238 = fStack_138 + fStack_238;
  fStack_234 = fStack_134 + fStack_234;
  fStack_230 = afStack_130[0] + fStack_230;
  fVar16 = (float10)(**(code **)(*param_1 + 0x24))();
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x2fc] = 0x42b40000;
    param_1[0x186] = 1;
    FUN_00ae2c30();
    FUN_00acccc0(1);
    FUN_004066f0();
    fVar9 = (float)param_1[0x248];
    iVar13 = param_1[0x249];
    iVar1 = param_1[0x24a];
    FUN_0091a620(&stack0xfffffd48);
    fVar18 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar17 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    uStack_298 = 0xc1200000;
    afStack_290[0] = (float)fVar17;
    fStack_294 = (float)fVar18;
    FUN_0091a6d0(&uStack_298);
    FUN_00915ef0(0x3ecccccd);
    FUN_00915e60(0x43480000);
    fStack_248 = fVar9;
    iStack_244 = iVar13;
    iStack_240 = iVar1;
    FUN_0091a620(&fStack_248);
    param_1[0x360] = 0;
    FUN_00406760();
  case 1:
    param_1[0x360] = (int)((float)param_1[0x360] + (float)fVar16);
    FUN_0091a5e0(&fStack_248);
    if (param_1[0x237] != 0) {
      FUN_0091df60(&uStack_1e8);
      FUN_01005140(aiStack_a8);
      piVar14 = aiStack_a8;
      piVar15 = param_1 + 4;
      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar15 = *piVar14;
        piVar14 = piVar14 + 1;
        piVar15 = piVar15 + 1;
      }
      if (param_1[0x238] != 0) {
        D3DXMatrixTranslation(&fStack_228,param_1[0x10],param_1[0x11],param_1[0x12]);
        uStack_298 = uStack_1f8;
        fStack_294 = fStack_1f4;
        afStack_290[0] = fStack_1f0;
        fVar9 = fStack_224 * fStack_224;
        fVar3 = fStack_228 * fStack_228;
        fVar2 = SQRT(fStack_200 * fStack_200 + fStack_208 * fStack_208 + fStack_204 * fStack_204);
        fVar17 = (float10)FUN_00ddbaa0(-(fStack_220 / fVar2));
        fVar18 = (float10)fpatan((float10)(fStack_210 / fVar2),(float10)(fStack_200 / fVar2));
        fStack_248 = (float)fVar18;
        fVar19 = (float10)fpatan((float10)fStack_224 /
                                 (float10)SQRT(fStack_210 * fStack_210 +
                                               fStack_218 * fStack_218 + fStack_214 * fStack_214),
                                 (float10)fStack_228 /
                                 (float10)SQRT(fStack_220 * fStack_220 + fVar3 + fVar9));
        fVar18 = (float10)0;
        fStack_250 = (float)fVar18;
        fStack_254 = (float)fVar18;
        fStack_258 = (float)fVar18;
        fStack_25c = (float)fVar18;
        fStack_264 = (float)fVar18;
        fStack_268 = (float)fVar18;
        fStack_26c = (float)fVar18;
        fStack_270 = (float)fVar18;
        fStack_278 = (float)fVar18;
        fStack_27c = (float)fVar18;
        fStack_280 = (float)fVar18;
        fStack_284 = (float)fVar18;
        uStack_24c = 0x3f800000;
        uStack_260 = 0x3f800000;
        iStack_274 = 0x3f800000;
        iStack_288 = 0x3f800000;
        if (fVar18 != fVar19) {
          D3DXMatrixRotationZ(auStack_128,(float)fVar19);
          D3DXMatrixMultiply(afStack_290,afStack_130,afStack_290);
          fVar17 = (float10)(float)fVar17;
        }
        if ((float10)0 != fVar17) {
          D3DXMatrixRotationY(auStack_e8,(float)fVar17);
          D3DXMatrixMultiply(afStack_290,auStack_f0,afStack_290);
        }
        if (fStack_248 != 0.0) {
          D3DXMatrixRotationX(auStack_68,fStack_248);
          D3DXMatrixMultiply(afStack_290,auStack_70,afStack_290);
        }
        fStack_258 = (float)uStack_298;
        fStack_254 = fStack_294;
        fStack_250 = afStack_290[0];
        FUN_01005190(&iStack_288);
        uStack_1e8 = uStack_1a8;
        uStack_1e4 = uStack_1a4;
        uStack_1e0 = uStack_1a0;
        uStack_1dc = uStack_19c;
        uStack_1d8 = uStack_198;
        uStack_1d4 = uStack_194;
        uStack_1d0 = uStack_190;
        uStack_1cc = uStack_18c;
        uStack_1c8 = uStack_188;
        uStack_1c4 = uStack_184;
        uStack_1c0 = uStack_180;
        uStack_1bc = uStack_17c;
        uStack_1b8 = uStack_178;
        uStack_1b4 = uStack_174;
        uStack_1b0 = uStack_170;
        uStack_1ac = uStack_16c;
        FUN_00915780(&uStack_1e8);
      }
    }
    param_1[0x14] = param_1[0x10];
    param_1[0x15] = param_1[0x11];
    param_1[0x16] = param_1[0x12];
    param_1[0x17] = param_1[0x13];
    fVar9 = (float)param_1[4];
    fVar2 = (float)param_1[5];
    fVar3 = (float)param_1[6];
    fVar4 = (float)param_1[8];
    fVar5 = (float)param_1[9];
    fVar6 = (float)param_1[10];
    fVar11 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
                  (float)param_1[0xd] * (float)param_1[0xd] +
                  (float)param_1[0xc] * (float)param_1[0xc]);
    fVar7 = (float)param_1[10];
    fVar8 = (float)param_1[0xe];
    fVar18 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar11));
    fVar17 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
    param_1[0x24] = (int)(float)fVar17;
    param_1[0x25] = (int)(float)fVar18;
    fVar18 = (float10)fpatan((float10)(float)param_1[5] /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)(float)param_1[4] /
                             (float10)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3));
    param_1[0x26] = (int)(float)fVar18;
    if ((param_1[0x24c] != 0x16) &&
       (fVar9 = (float)param_1[0x2fc] - (float)fVar16, param_1[0x2fc] = (int)fVar9, fVar9 < 0.0)) {
      param_1[0x186] = 2;
    }
    if (((param_1[0x24c] != 0x15) && (iVar13 = FUN_009165d0(), iVar13 != 0)) &&
       (0 < *(int *)(iVar13 + 0x14))) {
      param_1[0x186] = 2;
    }
    if (param_1[0x186] == 2) {
switchD_00ae3391_caseD_2:
      FUN_00c76f00();
      iStack_288 = param_1[0x14];
      fStack_25c = (float)param_1[0x239];
      fStack_284 = (float)param_1[0x15];
      fStack_280 = (float)param_1[0x16];
      fStack_27c = (float)param_1[0x17];
      fStack_278 = (float)param_1[0x24];
      iStack_274 = param_1[0x25];
      fStack_270 = (float)param_1[0x26];
      fStack_26c = (float)param_1[0x27];
      iVar13 = FUN_00c76fa0(param_1 + 0x237);
      if (iVar13 != 0) {
        uVar10 = *(uint *)(iVar13 + 0xc);
        if (uVar10 == 0) {
          uStack_260 = 0;
        }
        else {
          uStack_260 = *(undefined4 *)((-(uint)(uVar10 != 0) & uVar10) + 0x2c);
        }
        iVar13 = FUN_008f7780(iVar13);
        if (iVar13 != 0) {
          fStack_268 = *(float *)(iVar13 + 0x4f0);
        }
      }
      (**(code **)(*param_1 + 0x318))(&iStack_288);
      param_1[0x414] = param_1[0x14];
      param_1[0x415] = param_1[0x15];
      param_1[0x416] = param_1[0x16];
      param_1[0x417] = param_1[0x17];
      param_1[0x3f7] = param_1[0x3f7] | 0x20;
      Behavior::createAttackImpactWave(param_1 + 0x3d0);
      param_1[0x2fc] = 0x44160000;
      param_1[0x186] = 3;
      piVar14 = (int *)FUN_00c13920();
      iVar13 = (**(code **)(*piVar14 + 0x28))(0);
      if (iVar13 != 0) {
        FUN_00a7c8a0();
      }
      uVar12 = 0x40a00000;
      if (param_1[0x239] == 0x71) {
        param_1[0x2fc] = 0x44610000;
        uVar12 = 0x43960000;
      }
      FUN_00bc39f0(param_1[0x13c],param_1 + 0x14,uVar12,param_1[0x2fc]);
      (**(code **)(*param_1 + 0x20))();
      FUN_00cd4630(param_1);
      if (param_1[0x1ec] != 0) {
        FUN_008f2cd0(1);
        FUN_008f18c0(0x40000);
      }
      goto switchD_00ae3391_caseD_3;
    }
    break;
  case 2:
    goto switchD_00ae3391_caseD_2;
  case 3:
switchD_00ae3391_caseD_3:
    fVar9 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar9 - (float)param_1[0x3c8]);
    if (fVar9 - (float)param_1[0x3c8] < 0.0) {
      FUN_00acc2f0(0x40400000,0);
    }
    break;
  default:
    break;
  }
  switchD_0080dbae::default();
  if (param_1[0x237] != 0) {
    FUN_00916660();
  }
  return;
}

// 00AE5AD0  FUN_00ae5ad0  size=3045  [callgraph]
void __fastcall FUN_00ae5ad0(int *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 uVar10;
  float fVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  undefined1 auStack_274 [4];
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float afStack_264 [2];
  undefined1 auStack_25c [8];
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_224;
  undefined1 auStack_204 [12];
  undefined1 auStack_1f8 [24];
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  
  if (param_1[0x139] != 0) {
    return;
  }
  if (param_1[0x3c4] != 0) {
    return;
  }
  fVar13 = 1.4013e-45;
  iVar3 = (**(code **)(*param_1 + 0x308))(1,1);
  if (iVar3 != 0) {
    param_1[0x186] = 3;
    return;
  }
  iVar3 = FUN_00a81330();
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  param_1[0x2d8] = param_1[0x2dc];
  param_1[0x2d9] = param_1[0x2dd];
  param_1[0x2da] = param_1[0x2de];
  param_1[0x2db] = param_1[0x2df];
  if (iVar4 == 0) {
    FUN_00a7c950();
  }
  else {
    param_1[0x2dc] = *(int *)(iVar4 + 0x50);
    param_1[0x2dd] = *(int *)(iVar4 + 0x54);
    param_1[0x2de] = *(int *)(iVar4 + 0x58);
    param_1[0x2df] = *(int *)(iVar4 + 0x5c);
    iVar3 = FUN_00a12210((int)(short)param_1[0x2f5]);
    if ((-1 < (short)param_1[0x2f5]) && (iVar3 != 0)) {
      param_1[0x2dc] = *(int *)(iVar3 + 0x40);
      param_1[0x2dd] = *(int *)(iVar3 + 0x44);
      param_1[0x2de] = *(int *)(iVar3 + 0x48);
      param_1[0x2df] = *(int *)(iVar3 + 0x4c);
    }
  }
  piVar7 = param_1 + 4;
  fVar11 = 0.0;
  piVar12 = piVar7;
  D3DXMatrixInverse(auStack_1f8,0);
  piVar1 = param_1 + 0x2d4;
  D3DXVec3TransformNormal(auStack_274,piVar1,auStack_204);
  fStack_280 = fStack_280 + fStack_1e0;
  fStack_27c = fStack_1dc + fStack_27c;
  fStack_278 = fStack_1d8 + fStack_278;
  fVar9 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar14 = (float)fVar9;
  switch(param_1[0x186]) {
  case 0:
    param_1[0x186] = 1;
    sVar2 = FUN_00dde2d0(0,10);
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    iStack_254 = (int)sVar2;
    param_1[0x360] = (int)((float)iStack_254 + 30.0);
    FUN_00acb910();
    uVar10 = 0;
    param_1[0x364] = 1;
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar5,uVar10);
    FUN_00dffb20(param_1 + 0x36c);
    FUN_00e03080(param_1[0x13c],0);
    FUN_00a8c8b0(param_1[300],auStack_1d0);
    uVar10 = 0;
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(0xc3,uVar5,uVar10);
    FUN_0041cdb0(piVar1);
    FUN_00dffb20(param_1 + 0x36c);
    FUN_00a8c930(0,auStack_1d0);
    goto LAB_00ae5d48;
  case 1:
LAB_00ae5d48:
    fVar13 = (float)param_1[0x2e4] * fVar14;
    D3DXVec3TransformNormal(&stack0xfffffd60,&stack0xfffffd60,param_1 + 4);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + 0.0);
    param_1[0x15] = (int)((float)param_1[0x15] + 0.0);
    param_1[0x16] = (int)(fVar13 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_294);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - fVar14);
    param_1[0x360] = (int)((float)param_1[0x360] - fVar14);
    fVar13 = SQRT(fStack_278 * fStack_278 + fStack_27c * fStack_27c + fStack_280 * fStack_280);
    if (fVar13 < 15.0 != (fVar13 == 15.0)) {
      param_1[0x360] = -0x40800000;
    }
    if ((float)param_1[0x360] < 0.0) {
      param_1[0x360] = 0x42200000;
      param_1[0x186] = 2;
      fVar9 = (float10)FUN_00dde300(0,0x3e4ccccd);
      param_1[0x2e4] = (int)(float)(fVar9 + (float10)0.8);
    }
    if ((float)param_1[0x360] < 20.0) {
      FUN_00acc460(piVar1,&stack0xfffffd60,0x3e99999a,fVar14 * 0.27925268,1);
    }
    fStack_270 = (float)param_1[0x244];
    fStack_26c = (float)param_1[0x245];
    fStack_268 = (float)param_1[0x246];
    afStack_264[0] = (float)param_1[0x247];
    fStack_290 = (float)param_1[0x14] - fStack_270;
    fStack_28c = (float)param_1[0x15] - fStack_26c;
    fStack_288 = (float)param_1[0x16] - fStack_268;
    fStack_284 = (float)param_1[0x17] - afStack_264[0];
    uVar5 = FUN_009f8b40();
    FUN_00acb320(&fStack_270,0x3f000000,&fStack_290,uVar5);
    break;
  case 2:
    D3DXVec3TransformNormal(&stack0xfffffd60,&stack0xfffffd60,piVar7);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)piVar12 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + fVar13);
    param_1[0x16] = (int)(fVar14 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    fVar9 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
    D3DXMatrixRotationZ(auStack_25c,(float)((float10)fVar11 * (float10)0.27925268 * fVar9));
    D3DXMatrixMultiply(piVar7,afStack_264,piVar7);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    if ((5.0 < fStack_278) ||
       ((float)param_1[0x2d5] + 15.0 < (float)param_1[0x15] !=
        ((float)param_1[0x2d5] + 15.0 == (float)param_1[0x15]))) {
      FUN_00acc460(piVar1,&stack0xfffffd60,0x3dcccccd,fVar14 * 0.13962634,1);
    }
    fVar13 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar13 - fVar14);
    if (0.0 <= fVar13 - fVar14) {
      fStack_270 = (float)param_1[0x244];
      fStack_26c = (float)param_1[0x245];
      fStack_268 = (float)param_1[0x246];
      afStack_264[0] = (float)param_1[0x247];
      fStack_290 = (float)param_1[0x14] - fStack_270;
      fStack_28c = (float)param_1[0x15] - fStack_26c;
      fStack_288 = (float)param_1[0x16] - fStack_268;
      fStack_284 = (float)param_1[0x17] - afStack_264[0];
      uVar5 = FUN_009f8b40();
      FUN_00acb320(&fStack_270,0x3f000000,&fStack_290,uVar5);
    }
    else {
      param_1[0x186] = 3;
    }
    break;
  case 3:
    FUN_00eaa6e0(0x41200000,0);
    FUN_00acc2f0(0x43340000,0);
    uVar8 = param_1[300];
    param_1[0x186] = 100;
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    if (uVar8 == 0x7c0000) {
      uVar8 = 0;
    }
    else if ((uVar8 < 0x10000) || (uVar8 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,uVar8);
    }
    uVar10 = 0;
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar5,uVar10);
    piVar7 = param_1 + 0x14;
    FUN_0041cdb0(piVar7);
    FUN_00a8c930(uVar8,auStack_1d0);
    FUN_00e5e0c0("em0200_se_atk_missile_exp",param_1,0xffffffff,0);
    FUN_00c76f00();
    iStack_250 = *piVar7;
    iStack_224 = param_1[0x239];
    iStack_24c = param_1[0x15];
    iStack_248 = param_1[0x16];
    iStack_244 = param_1[0x17];
    iStack_240 = param_1[0x24];
    iStack_23c = param_1[0x25];
    iStack_238 = param_1[0x26];
    iStack_234 = param_1[0x27];
    (**(code **)(*param_1 + 0x318))(&iStack_250);
    param_1[0x3d0] = 1;
    param_1[0x414] = *piVar7;
    param_1[0x415] = param_1[0x15];
    param_1[0x416] = param_1[0x16];
    param_1[0x417] = param_1[0x17];
    Behavior::createAttackImpactWave(param_1 + 0x3d0);
    break;
  case 4:
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x2fc] = 0x43b40000;
    if ((param_1[0x24c] == 7) &&
       (fVar13 = (float)param_1[0x11], !NAN(fVar13) && 318.0 < fVar13 != (fVar13 == 318.0))) {
      param_1[0x2fc] = 0;
    }
    param_1[0x186] = param_1[0x186] + 1;
    if (param_1[0x1ed] != 0) {
      FUN_0091c6c0(1);
    }
    FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0,0x3f800000,0x3e99999a);
    (**(code **)(param_1[0x36c] + 8))(0x41200000,0,0);
    uVar10 = 0;
    param_1[0x360] = 0x41200000;
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(2,uVar5,uVar10);
    FUN_00dffb20(param_1 + 0x36c);
    FUN_00a8c8b0(param_1[300],auStack_1d0);
    *(undefined2 *)(param_1 + 0x365) = 0;
    if (param_1[0x1ec] != 0) {
      FUN_004066f0();
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(1);
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(param_1[0x2e7]);
      FUN_00406760();
    }
    goto LAB_00ae63b3;
  case 5:
LAB_00ae63b3:
    fVar13 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar13 - fVar14);
    if (0.0 < fVar13 - fVar14) {
      fStack_290 = 0.0;
      piVar7 = param_1 + 4;
      fStack_28c = 0.0;
      fStack_288 = 1.0;
      D3DXVec3TransformNormal(&fStack_290,&fStack_290,piVar7);
      FUN_00acc460(piVar1,&stack0xfffffd64,(float)param_1[0x360] * 0.1 * 0.2,0x3dd67750,1);
      fVar9 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
      D3DXMatrixRotationZ(auStack_25c,(float)((float10)fVar11 * (float10)0.27925268 * fVar9));
      D3DXMatrixMultiply(piVar7,afStack_264,piVar7);
    }
    fVar14 = (float)param_1[0x2fc] - fVar14;
    param_1[0x2fc] = (int)fVar14;
    if (((short)param_1[0x365] == 0) && (fVar14 < 120.0 != (fVar14 == 120.0))) {
      uVar10 = 0;
      *(undefined2 *)(param_1 + 0x365) = 1;
      uVar5 = FUN_00a7c8a0(0);
      FUN_004039a0(4,uVar5,uVar10);
      FUN_00dffb20(param_1 + 0x36c);
      FUN_00a8c8b0(param_1[300],auStack_1d0);
    }
    if ((float)param_1[0x2fc] < 0.0) {
      param_1[0x186] = 3;
    }
    FUN_004066f0();
    if (param_1[0x421] != 0) {
      hkpAllCdPointCollector::hkpAllCdPointCollector_5();
      FUN_00900350(auStack_1d0);
      if ((0 < iStack_1bc) && (iVar3 = 0, 0 < iStack_1bc)) {
        iVar4 = 0;
        do {
          iVar6 = *(int *)(iVar4 + 0x28 + iStack_1c0);
          if ((((*(char *)(iVar6 + 0x18) == '\x02') &&
               (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)) &&
              (piVar7 = (int *)FUN_008f7780(iVar6), piVar7 != (int *)0x0)) &&
             ((param_1[300] == piVar7[300] && (piVar7 != param_1)))) {
            param_1[0x186] = 3;
            iVar6 = FUN_0065f570(piVar7);
            if (iVar6 != 0) {
              FUN_00a8cb50(3);
            }
          }
          iVar6 = *(int *)(iVar4 + 0x28 + iStack_1c0);
          if (((*(char *)(iVar6 + 0x18) == '\x01') &&
              (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)) &&
             ((piVar7 = (int *)FUN_008f7780(iVar6), piVar7 != (int *)0x0 &&
              ((param_1[300] == piVar7[300] && (piVar7 != param_1)))))) {
            param_1[0x186] = 3;
            iVar6 = FUN_0065f570(piVar7);
            if (iVar6 != 0) {
              FUN_00a8cb50(3);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar3 < iStack_1bc);
      }
      hkpCdPointCollector::hkpCdPointCollector_4();
    }
    FUN_00406760();
  }
  FUN_004066f0();
  if (param_1[0x421] != 0) {
    Phantom::setTransform(param_1 + 4);
  }
  if (DAT_01885d68 != 1) {
    piVar7 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar7 = *piVar7 + -1;
    if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  switchD_0080dbae::default();
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar3 != 0)) {
    FUN_008f5990(param_1);
  }
  return;
}

// 00AE8970  BehaviorBulletBase::vf300  size=11323  [class]
void __fastcall BehaviorBulletBase::vf300(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  code *pcVar9;
  float fVar10;
  int *piVar11;
  float **ppfVar12;
  float **ppfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  short sVar18;
  int *piVar19;
  int iVar20;
  undefined4 uVar21;
  int *piVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  float unaff_EDI;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float afStack_4fc [4];
  undefined1 auStack_4ec [12];
  undefined1 local_4e0 [40];
  undefined **ppuStack_4b8;
  undefined4 uStack_4b4;
  undefined1 *puStack_4a8;
  int iStack_4a4;
  uint uStack_4a0;
  undefined1 auStack_498 [384];
  undefined **ppuStack_318;
  undefined4 uStack_314;
  float ***pppfStack_308;
  int *piStack_304;
  uint uStack_300;
  float **ppfStack_2fc;
  float **ppfStack_2f8;
  float **ppfStack_2f4;
  float **ppfStack_2f0;
  float ***pppfStack_2ec;
  float **ppfStack_2e8;
  undefined1 *puStack_2e4;
  float **ppfStack_2e0;
  float *pfStack_2dc;
  float *pfStack_2d8;
  float ***pppfStack_2d4;
  float ***pppfStack_2d0;
  float **ppfStack_2cc;
  float *pfStack_2c8;
  float **ppfStack_2c4;
  int *piStack_2c0;
  int **ppiStack_2bc;
  float **ppfStack_2b8;
  float **ppfStack_2b4;
  float **ppfStack_2b0;
  int **ppiStack_2ac;
  int *piStack_2a8;
  float **ppfStack_2a4;
  float *pfStack_288;
  float *pfStack_284;
  int *piStack_280;
  undefined1 *puStack_27c;
  undefined1 *puStack_278;
  float fStack_274;
  int *piStack_270;
  float fStack_26c;
  float local_268;
  float local_264;
  int *piStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float local_234;
  int *local_230;
  undefined1 auStack_22c [8];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined1 auStack_1f8 [12];
  undefined1 auStack_1ec [24];
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined **ppuStack_1c8;
  undefined4 uStack_1c4;
  undefined1 *puStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined1 auStack_1a8 [36];
  float afStack_184 [3];
  undefined1 auStack_178 [184];
  undefined4 uStack_c0;
  float *pfStack_bc;
  undefined4 uStack_b8;
  float *pfStack_b4;
  undefined4 uStack_b0;
  float *pfStack_ac;
  float *pfStack_a8;
  float *pfStack_a4;
  int iStack_8c;
  float fStack_88;
  undefined1 auStack_84 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  int iStack_14;
  
  switch(param_1[0x24c]) {
  case 0:
  case 8:
  case 0x3e:
    FUN_00ad3e80();
    return;
  case 1:
  case 0xd:
  case 0x25:
  case 0x26:
  case 0x28:
    FUN_00ad4ad0();
    return;
  case 2:
  case 3:
    if ((param_1[0x139] != 0) || (param_1[0x3c4] != 0)) {
      return;
    }
    local_264 = 0.0;
    local_268 = 1.4013e-45;
    fStack_26c = 1.5938114e-38;
    iVar20 = (**(code **)(*param_1 + 0x308))();
    if (iVar20 == 0) {
      fStack_26c = 1.5938132e-38;
      piVar22 = (int *)FUN_00c13920();
      fStack_26c = 0.0;
      piStack_270 = (int *)0xad8d12;
      iVar20 = (**(code **)(*piVar22 + 0x28))();
      local_230 = (int *)0x0;
      if (iVar20 != 0) {
        piStack_270 = (int *)0xad8d23;
        local_230 = (int *)FUN_00a7c8a0();
      }
      piVar19 = local_230;
      piVar22 = param_1 + 0x2d4;
      param_1[0x2d8] = param_1[0x2d4];
      param_1[0x2d9] = param_1[0x2d5];
      param_1[0x2da] = param_1[0x2d6];
      param_1[0x2db] = param_1[0x2d7];
      if (1 < param_1[0x186]) {
        if (local_230 == (int *)0x0) {
          piStack_270 = (int *)0xad8dbb;
          FUN_00a7c950();
        }
        else {
          *piVar22 = local_230[0x14];
          param_1[0x2d5] = local_230[0x15];
          param_1[0x2d6] = local_230[0x16];
          param_1[0x2d7] = local_230[0x17];
          piStack_270 = (int *)(int)(short)param_1[0x2f5];
          fStack_274 = 1.5938314e-38;
          iVar20 = FUN_00a12210();
          if ((-1 < (short)param_1[0x2f5]) && (iVar20 != 0)) {
            *piVar22 = *(int *)(iVar20 + 0x40);
            param_1[0x2d5] = *(int *)(iVar20 + 0x44);
            param_1[0x2d6] = *(int *)(iVar20 + 0x48);
            param_1[0x2d7] = *(int *)(iVar20 + 0x4c);
          }
        }
      }
      piStack_270 = param_1 + 4;
      fStack_274 = 0.0;
      puStack_278 = auStack_1ec;
      puStack_27c = (undefined1 *)0xad8dce;
      D3DXMatrixInverse();
      puStack_27c = auStack_1f8;
      pfStack_284 = &local_238;
      pfStack_288 = (float *)0xad8de1;
      piStack_280 = piVar22;
      D3DXVec3TransformNormal();
      fVar26 = (float10)fStack_1d4 + (float10)fStack_244;
      fStack_244 = (float)fVar26;
      fVar27 = (float10)fStack_1d0 + (float10)fStack_240;
      fStack_240 = (float)fVar27;
      fVar28 = (float10)fStack_23c;
      fStack_23c = (float)((float10)fStack_1cc + fVar28);
      fVar28 = (float10)fpatan(SQRT(fVar27 * fVar27 + fVar26 * fVar26),(float10)fStack_1cc + fVar28)
      ;
      local_268 = (float)fVar28;
      pfStack_288 = (float *)0xad8e2f;
      fVar28 = (float10)(**(code **)(*param_1 + 0x24))();
      fStack_26c = (float)fVar28;
      switch(param_1[0x186]) {
      case 0:
        pfStack_288 = (float *)0x3c;
        param_1[0x186] = 1;
        sVar18 = FUN_00dde2d0();
        *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
        piStack_270 = (int *)(int)sVar18;
        param_1[0x360] = (int)((float)(int)piStack_270 + 30.0);
        pfStack_288 = (float *)0xad8e90;
        FUN_00acbc40();
        if (param_1[0x24c] == 3) {
          pfStack_288 = (float *)0xa;
          sVar18 = FUN_00dde2d0();
          piStack_270 = (int *)(int)sVar18;
          param_1[0x360] = (int)((float)(int)piStack_270 + 20.0);
        }
        pfVar2 = (float *)(param_1 + 0x248);
        fVar4 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar2 * *pfVar2 +
                (float)param_1[0x24a] * (float)param_1[0x24a];
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          piStack_270 = (int *)param_1[0x24a];
          pfStack_288 = pfVar2;
          FUN_00ddf460();
        }
        else {
          pfStack_288 = (float *)&DAT_0163d0ac;
          FUN_00dd5650();
          *pfVar2 = 0.0;
          param_1[0x249] = 0x3f800000;
          param_1[0x24a] = 0;
        }
        *pfVar2 = *pfVar2 * 0.1;
        param_1[0x249] = (int)((float)param_1[0x249] * 0.1);
        param_1[0x24a] = (int)((float)param_1[0x24a] * 0.1);
        param_1[0x24b] = (int)((float)param_1[0x24b] * 0.1);
        param_1[0x364] = 1;
        param_1[0x2e4] = 0;
        param_1[0x188] = 0;
        piVar19 = piStack_248;
      case 1:
        pfStack_288 = (float *)0xad8fad;
        fVar28 = (float10)FUN_00fdc1f0();
        param_1[0x249] =
             (int)(float)(((float10)(float)param_1[0x249] - (float10)0.006 * (float10)fStack_26c) *
                         fVar28);
        pfStack_288 = (float *)0xad8fd6;
        fVar28 = (float10)FUN_00fdc1f0();
        param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] * fVar28);
        param_1[0x24a] = (int)(float)(fVar28 * (float10)(float)param_1[0x24a]);
        param_1[0x244] = param_1[0x14];
        param_1[0x245] = param_1[0x15];
        param_1[0x246] = param_1[0x16];
        param_1[0x247] = param_1[0x17];
        param_1[0x14] = (int)((float)param_1[0x248] * fStack_26c + (float)param_1[0x14]);
        param_1[0x15] = (int)((float)param_1[0x249] * fStack_26c + (float)param_1[0x15]);
        param_1[0x16] = (int)((float)param_1[0x24a] * fStack_26c + (float)param_1[0x16]);
        param_1[0x17] = (int)((float)param_1[0x24b] * fStack_26c + (float)param_1[0x17]);
        param_1[0x10] = param_1[0x14];
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        param_1[0x2fc] = (int)((float)param_1[0x2fc] - fStack_26c);
        fVar4 = (float)param_1[0x360] - fStack_26c;
        param_1[0x360] = (int)fVar4;
        if ((fVar4 < 0.0) ||
           (((local_268 < 1.0471976 != (local_268 == 1.0471976) && (0.0 <= local_268)) &&
            (fVar4 < 30.0)))) {
          pfStack_288 = (float *)0x0;
          param_1[0x186] = 2;
          FUN_00eaa6e0();
          param_1[0x360] = 0x3f800000;
          pfStack_288 = (float *)0x0;
          FUN_00a7c8a0();
          FUN_004039a0();
          pfStack_288 = (float *)(param_1 + 0x36c);
          FUN_00dffb20();
          pfStack_288 = (float *)0x0;
          FUN_00e03080();
          pfStack_288 = afStack_184;
          FUN_00a8c8b0();
          if (piVar19 != (int *)0x0) {
            *piVar22 = piVar19[0x14];
            param_1[0x2d5] = piVar19[0x15];
            param_1[0x2d6] = piVar19[0x16];
            param_1[0x2d7] = piVar19[0x17];
            pfStack_288 = (float *)(int)(short)param_1[0x2f5];
            iVar20 = FUN_00a12210();
            if ((-1 < (short)param_1[0x2f5]) && (iVar20 != 0)) {
              *piVar22 = *(int *)(iVar20 + 0x40);
              param_1[0x2d5] = *(int *)(iVar20 + 0x44);
              param_1[0x2d6] = *(int *)(iVar20 + 0x48);
              param_1[0x2d7] = *(int *)(iVar20 + 0x4c);
            }
          }
        }
        pfStack_288 = (float *)(param_1 + 4);
        local_264 = 0.0;
        D3DXVec3TransformNormal();
        puStack_27c = (undefined1 *)((float)puStack_278 * 0.17453292);
        FUN_00dde300();
        piStack_2a8 = (int *)0xad9216;
        ppfStack_2a4 = (float **)piVar22;
        FUN_00acc460();
        if (param_1[0x24c] == 3) {
          piStack_2a8 = (int *)0xad9242;
          ppfStack_2a4 = (float **)piVar22;
          FUN_00acc460();
        }
        fStack_240 = (float)param_1[0x244];
        fStack_23c = (float)param_1[0x245];
        local_238 = (float)param_1[0x246];
        local_234 = (float)param_1[0x247];
        fStack_220 = (float)param_1[0x14] - fStack_240;
        fStack_21c = (float)param_1[0x15] - fStack_23c;
        fStack_218 = (float)param_1[0x16] - local_238;
        fStack_214 = (float)param_1[0x17] - local_234;
        FUN_009f8b40();
        ppfStack_2a4 = (float **)0xad92b5;
        FUN_00acb320();
        return;
      case 2:
        goto switchD_00ad8e49_caseD_2;
      case 3:
        pfStack_288 = (float *)0x0;
        FUN_00eaa6e0();
        pfStack_288 = (float *)0x0;
        FUN_00acc2f0();
        param_1[0x3cb] = 0;
        param_1[0x186] = 100;
        param_1[0x3c4] = 1;
        param_1[0x139] = 1;
        param_1[0x1bb] = 0;
        return;
      default:
        return;
      case 100:
        pfStack_288 = (float *)0xad96d0;
        (**(code **)(*param_1 + 0x20))();
        return;
      }
    }
    goto LAB_00ad95d8;
  case 4:
  case 0x27:
    FUN_00ad97e0();
    return;
  case 5:
    FUN_00ada800();
    return;
  case 6:
  case 7:
    FUN_00ae5ad0();
    return;
  case 9:
    FUN_00ad8570();
    return;
  case 10:
  case 0xb:
    FUN_00adaa00();
    return;
  case 0xc:
    FUN_00ad1980();
    return;
  case 0xe:
  case 0xf:
    FUN_00ad7100();
    return;
  case 0x10:
    FUN_00ad7b40();
    return;
  case 0x11:
  case 0x29:
    hkpAllCdPointCollector::hkpAllCdPointCollector_44();
    return;
  case 0x12:
  case 0x13:
    FUN_00ad8150();
    return;
  case 0x14:
  case 0x15:
  case 0x16:
    FUN_00ae2df0();
    return;
  case 0x17:
    FUN_00ae32e0();
    return;
  case 0x18:
    pfStack_a4 = (float *)0xae3b2b;
    iVar20 = FUN_00a81330();
    if (iVar20 != 0) {
      pfStack_a4 = (float *)0xae3b36;
      FUN_00a7c8a0();
    }
    pfStack_a4 = (float *)0xae3b3f;
    fVar28 = (float10)(**(code **)(*param_1 + 0x24))();
    fStack_88 = (float)fVar28;
    iVar20 = param_1[0x186];
    if (iVar20 == 0) {
      param_1[0x440] = 0;
      param_1[0x235] = 0;
      param_1[0x186] = 1;
      pfStack_a4 = (float *)0xae3b7e;
      FUN_00ae2c30();
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        pfStack_a4 = (float *)0xae3b8f;
        iVar20 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
        if (iVar20 != 0) {
          pfStack_a4 = (float *)0xae3b9c;
          FUN_004066f0();
          pfStack_a4 = (float *)0x0;
          pfStack_a8 = (float *)auStack_84;
          pfStack_ac = (float *)0xae3bb0;
          pfStack_a4 = (float *)(**(code **)(*(int *)param_1[0x1ec] + 0x14))();
          pfStack_a8 = (float *)0xae3bbc;
          FUN_00910ab0();
          pfStack_a4 = (float *)0xae3bc7;
          FUN_009277e0();
          pfStack_a4 = (float *)0xae3bd0;
          FUN_00406760();
        }
      }
    }
    else if (iVar20 != 1) goto joined_r0x00ae3f5b;
    pfStack_a4 = (float *)&iStack_70;
    pfStack_a8 = (float *)&iStack_8c;
    uStack_b0 = 0xae3beb;
    pfStack_ac = (float *)(param_1 + 0x449);
    iVar20 = FUN_00907640();
    if (iVar20 == 0) {
      pfStack_a4 = (float *)param_1[0x440];
      pfStack_ac = &fStack_80;
      pfStack_a8 = (float *)0x0;
      uStack_b0 = 0xae3dcc;
      FUN_00a581b0();
      fVar4 = fStack_88 * 0.028571429 + (float)param_1[0x440];
      param_1[0x440] = (int)fVar4;
      if (!NAN(fVar4) && 2.0 < fVar4 != (fVar4 == 2.0)) {
        param_1[0x440] = 0x40000000;
        pfStack_a4 = (float *)0xae3e08;
        FUN_00c76f00();
        iStack_40 = param_1[0x14];
        iStack_14 = param_1[0x239];
        iStack_3c = param_1[0x15];
        pfStack_a4 = (float *)(param_1 + 0x237);
        iStack_38 = param_1[0x16];
        iStack_34 = param_1[0x17];
        fStack_30 = 0.0;
        fStack_2c = -1.0;
        fStack_28 = 0.0;
        fStack_24 = fStack_44;
        pfStack_a8 = (float *)0xae3e5c;
        pfStack_a4 = (float *)FUN_00c76fa0();
        if (pfStack_a4 != (float *)0x0) {
          uVar8 = *(uint *)((int)pfStack_a4 + 0xc);
          if (uVar8 == 0) {
            uStack_18 = 0;
          }
          else {
            uStack_18 = *(undefined4 *)((-(uint)(uVar8 != 0) & uVar8) + 0x2c);
          }
          pfStack_a8 = (float *)0xae3e86;
          iVar20 = FUN_008f7780();
          if (iVar20 != 0) {
            uStack_20 = *(undefined4 *)(iVar20 + 0x4f0);
          }
        }
        pfStack_a4 = (float *)&iStack_40;
        pfStack_a8 = (float *)0xae3eab;
        (**(code **)(*param_1 + 0x318))();
        param_1[0x186] = param_1[0x186] + 1;
      }
      fStack_50 = (float)param_1[0x14];
      pfStack_a4 = (float *)0x1645904;
      fStack_4c = (float)param_1[0x15];
      pfStack_ac = &fStack_60;
      fStack_48 = (float)param_1[0x16];
      pfStack_b4 = &fStack_50;
      fStack_44 = (float)param_1[0x17];
      param_1[0x14] = (int)fStack_80;
      param_1[0x15] = (int)fStack_7c;
      param_1[0x16] = (int)fStack_78;
      param_1[0x17] = 0x3f800000;
      pfStack_a8 = (float *)(param_1[0x2e7] << 0x10 | 5);
      fStack_60 = (float)param_1[0x14] - fStack_50;
      fStack_5c = (float)param_1[0x15] - fStack_4c;
      fStack_58 = (float)param_1[0x16] - fStack_48;
      fStack_54 = (float)param_1[0x17] - fStack_44;
      uStack_b0 = 0x3f000000;
      uStack_b8 = 0;
      uStack_c0 = 0xae3f54;
      pfStack_bc = (float *)(param_1 + 0x449);
      FUN_0090fa30();
    }
    else {
      pfStack_a4 = (float *)0xae3bfc;
      FUN_0112bcf0();
      iVar20 = *(int *)(iStack_8c + 0x10);
      iVar24 = *(int *)(iVar20 + 0x28);
      iVar25 = 0;
      if (*(char *)(iVar24 + 0x18) == '\x01') {
        iVar25 = *(char *)(iVar24 + 0x10) + iVar24;
      }
      fStack_7c = *(float *)(iVar20 + 0x14);
      fStack_78 = *(float *)(iVar20 + 0x18);
      fStack_80 = *(float *)(iVar20 + 0x10);
      if (((fStack_80 == 0.0) && (fStack_7c == 0.0)) && (fStack_78 == 0.0)) {
        fStack_80 = 0.0;
        fStack_7c = -1.0;
        fStack_78 = 0.0;
      }
      fVar4 = fStack_78 * fStack_78 + fStack_7c * fStack_7c + fStack_80 * fStack_80;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        pfStack_a8 = &fStack_80;
        pfStack_ac = (float *)0xae3cc7;
        pfStack_a4 = pfStack_a8;
        FUN_00ddf460();
      }
      else {
        pfStack_a4 = (float *)&DAT_0163d0ac;
        pfStack_a8 = (float *)0xae3ce2;
        FUN_00dd5650();
        fStack_80 = 0.0;
        fStack_7c = 1.0;
        fStack_78 = 0.0;
      }
      if (iVar25 != 0) {
        pfStack_a4 = (float *)0xae3d06;
        FUN_00c76f00();
        uVar8 = *(uint *)(iVar25 + 0xc);
        iStack_40 = iStack_70;
        iStack_14 = param_1[0x239];
        iStack_3c = iStack_6c;
        iStack_38 = iStack_68;
        iStack_34 = iStack_64;
        fStack_30 = fStack_80;
        fStack_2c = fStack_7c;
        fStack_28 = fStack_78;
        fStack_24 = fStack_74;
        if (uVar8 == 0) {
          uStack_18 = 0;
        }
        else {
          uStack_18 = *(undefined4 *)((-(uint)(uVar8 != 0) & uVar8) + 0x2c);
        }
        pfStack_a8 = (float *)0xae3d76;
        pfStack_a4 = (float *)iVar25;
        iVar20 = FUN_008f7780();
        if (iVar20 != 0) {
          uStack_20 = *(undefined4 *)(iVar20 + 0x4f0);
        }
        pfStack_a4 = (float *)&iStack_40;
        pfStack_a8 = (float *)0xae3d9b;
        (**(code **)(*param_1 + 0x318))();
      }
      param_1[0x186] = 2;
    }
    iVar20 = param_1[0x186];
joined_r0x00ae3f5b:
    if (iVar20 == 2) {
      pfStack_a4 = (float *)(param_1 + 0x3d0);
      param_1[0x414] = param_1[0x14];
      param_1[0x415] = param_1[0x15];
      param_1[0x416] = param_1[0x16];
      param_1[0x417] = param_1[0x17];
      pfStack_a8 = (float *)0xae3f8f;
      Behavior::createAttackImpactWave();
      pfStack_a4 = (float *)0x0;
      param_1[0x2fc] = 0x42f00000;
      pfStack_a8 = (float *)0x42f00000;
      param_1[0x186] = 3;
      pfStack_ac = (float *)0xae3fb2;
      FUN_00acc2f0();
      pfStack_a8 = (float *)0xae3fb8;
      pfStack_a4 = (float *)param_1;
      FUN_00cd4630();
    }
    pfStack_a4 = (float *)0xae3fc2;
    switchD_0080dbae::default();
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      pfStack_a4 = (float *)0xae3fd3;
      iVar20 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
      if (iVar20 != 0) {
        pfStack_a8 = (float *)0xae3fe3;
        pfStack_a4 = (float *)param_1;
        FUN_008f40f0();
      }
    }
    return;
  default:
    return;
  case 0x1a:
    FUN_00ad6be0();
    return;
  case 0x1b:
    FUN_00ad6230();
    return;
  case 0x1c:
    FUN_00ad67a0();
    return;
  case 0x1d:
  case 0x1e:
    FUN_00ad4300();
    return;
  case 0x1f:
    FUN_00adb360();
    return;
  case 0x20:
    ppfStack_2a4 = (float **)0xae66ec;
    iVar20 = FUN_00a81330();
    if (iVar20 != 0) {
      ppfStack_2a4 = (float **)0xae66fd;
      FUN_00a7c8a0();
    }
    piVar22 = param_1 + 4;
    piStack_2a8 = (int *)0x0;
    ppiStack_2ac = &local_230;
    local_268 = 0.0;
    local_264 = 0.0;
    ppfStack_2b0 = (float **)0xae6718;
    ppfStack_2a4 = (float **)piVar22;
    D3DXMatrixInverse();
    ppfStack_2b8 = (float **)&stack0xfffffda4;
    ppiStack_2bc = (int **)0xae673a;
    ppfStack_2b4 = ppfStack_2b8;
    ppfStack_2b0 = (float **)piVar22;
    D3DXVec3TransformNormal();
    local_268 = (float)param_1[0x10] + local_268;
    uStack_1b4 = 0;
    pfVar2 = (float *)(param_1 + 0x14);
    puStack_1b8 = auStack_1a8;
    local_264 = (float)param_1[0x11] + local_264;
    ppiStack_2bc = (int **)0x16a0470;
    piStack_2c0 = (int *)(param_1[0x2e7] << 0x10 | 6);
    ppfStack_2c4 = (float **)&stack0xfffffd68;
    ppuStack_1c8 = hkpAllCdPointCollector::vftable;
    uStack_1b0 = 0x80000008;
    uStack_1c4 = 0x7f7fffee;
    pfStack_2c8 = (float *)0x3e99999a;
    pppfStack_2d0 = (float ***)0x0;
    pppfStack_2d4 = (float ***)0x0;
    pfStack_2d8 = (float *)0xae67e7;
    ppfStack_2cc = (float **)pfVar2;
    iVar20 = FUN_0090eea0();
    if (iVar20 != 0) {
      puStack_27c = (undefined1 *)0x1;
    }
    ppuStack_1c8 = hkpAllCdPointCollector::vftable;
    uStack_1b4 = 0;
    if (-1 < (int)uStack_1b0) {
      ppiStack_2bc = (int **)((uStack_1b0 & 0x3fffffff) * 0x30);
      piStack_2c0 = (int *)puStack_1b8;
      ppfStack_2c4 = (float **)0xae6838;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))();
    }
    if (ppiStack_2ac == (int **)0x0) {
      ppiStack_2bc = (int **)0xae69a7;
      FUN_00a7c950();
    }
    else {
      param_1[0x2d4] = (int)ppiStack_2ac[0x14];
      param_1[0x2d5] = (int)ppiStack_2ac[0x15];
      param_1[0x2d6] = (int)ppiStack_2ac[0x16];
      param_1[0x2d7] = (int)ppiStack_2ac[0x17];
      ppiStack_2bc = (int **)(int)(short)param_1[0x2f5];
      piStack_2c0 = (int *)0xae6875;
      iVar20 = FUN_00a12210();
      if ((-1 < (short)param_1[0x2f5]) && (iVar20 != 0)) {
        param_1[0x2d4] = *(int *)(iVar20 + 0x40);
        param_1[0x2d5] = *(int *)(iVar20 + 0x44);
        param_1[0x2d6] = *(int *)(iVar20 + 0x48);
        param_1[0x2d7] = *(int *)(iVar20 + 0x4c);
      }
      uStack_1c4 = 0x7f7fffee;
      puStack_1b8 = auStack_1a8;
      ppuStack_1c8 = hkpAllCdPointCollector::vftable;
      uStack_1b0 = 0x80000008;
      uStack_1b4 = 0;
      ppiStack_2bc = (int **)0xae691f;
      iVar20 = FUN_009f8b40();
      ppiStack_2bc = (int **)0x16a0470;
      piStack_2c0 = (int *)(iVar20 << 0x10 | 6);
      ppfStack_2c4 = (float **)&stack0xfffffd68;
      pfStack_2c8 = (float *)0x3e99999a;
      pppfStack_2d0 = (float ***)0x0;
      pppfStack_2d4 = (float ***)0x0;
      pfStack_2d8 = (float *)0xae6949;
      ppfStack_2cc = (float **)pfVar2;
      iVar20 = FUN_0090eea0();
      if (iVar20 == 0) {
        piStack_280 = (int *)0x1;
      }
      ppuStack_1c8 = hkpAllCdPointCollector::vftable;
      uStack_1b4 = 0;
      if (-1 < (int)uStack_1b0) {
        ppiStack_2bc = (int **)((uStack_1b0 & 0x3fffffff) * 0x30);
        piStack_2c0 = (int *)puStack_1b8;
        ppfStack_2c4 = (float **)0xae699a;
        (**(code **)(PTR_vftable_018e9b94 + 0x10))();
      }
    }
    ppiStack_2bc = &piStack_248;
    piStack_2c0 = param_1 + 0x2d4;
    ppfStack_2c4 = (float **)&puStack_278;
    pfStack_2c8 = (float *)0xae69bd;
    D3DXVec3TransformNormal();
    pfStack_284 = (float *)((float)pfStack_284 + fStack_224);
    piStack_280 = (int *)((float)piStack_280 + fStack_220);
    puStack_27c = (undefined1 *)(fStack_21c + (float)puStack_27c);
    pfStack_2c8 = (float *)0xae69f3;
    fVar28 = (float10)(**(code **)(*param_1 + 0x24))();
    ppfStack_2b8 = (float **)(float)fVar28;
    pfStack_2c8 = (float *)0xae69fc;
    piVar19 = (int *)FUN_00c13920();
    pfStack_2c8 = (float *)0x0;
    ppfStack_2cc = (float **)0xae6a07;
    iVar20 = (**(code **)(*piVar19 + 0x28))();
    if (iVar20 != 0) {
      ppfStack_2cc = (float **)0xae6a12;
      iVar20 = FUN_00a7c8a0();
      if (iVar20 != 0) {
        ppfStack_2cc = (float **)0xae6a1d;
        iVar20 = FUN_00b8c050();
        if (iVar20 != 0) {
          ppiStack_2bc = (int **)((float)ppiStack_2bc * 0.5);
          ppfStack_2cc = (float **)0xae6a34;
          piVar19 = (int *)FUN_00c13920();
          ppfStack_2cc = (float **)0x0;
          pppfStack_2d0 = (float ***)0xae6a3f;
          iVar20 = (**(code **)(*piVar19 + 0x28))();
          if (iVar20 != 0) {
            ppfStack_2cc = (float **)0xae6a4a;
            iVar20 = FUN_00a7c8a0();
            if (iVar20 != 0) {
              ppfStack_2cc = (float **)0xae6a55;
              iVar20 = FUN_00b7e570();
              if (iVar20 != 0) {
                ppiStack_2bc = (int **)((float)ppiStack_2bc * 0.1);
              }
            }
          }
        }
      }
    }
    ppfStack_2e8 = (float **)piVar22;
    switch(param_1[0x186]) {
    case 0:
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
      param_1[0x360] = 0x40e00000;
      param_1[0x186] = 1;
      ppfStack_2cc = (float **)0xae6aaa;
      FUN_00adb990();
      param_1[0x2fc] = 0x44610000;
    case 1:
      ppfStack_2b8 = (float **)0x0;
      pppfStack_2d4 = &ppfStack_2b8;
      ppfStack_2b0 = (float **)((float)ppiStack_2bc * (float)param_1[0x2e4]);
      ppfStack_2b4 = (float **)((float)ppfStack_2b0 * 0.01);
      pfStack_2d8 = (float *)0xae6ae4;
      pppfStack_2d0 = pppfStack_2d4;
      ppfStack_2cc = (float **)piVar22;
      D3DXVec3TransformNormal();
      fVar4 = (float)pfStack_2c8 * 0.01 + (float)param_1[0x2e4];
      param_1[0x2e4] = (int)fVar4;
      if (!NAN(fVar4) && 0.15 < fVar4 != (fVar4 == 0.15)) {
        param_1[0x2e4] = 0x3e19999a;
      }
      param_1[0x244] = (int)*pfVar2;
      pfStack_2dc = &fStack_224;
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      *pfVar2 = *pfVar2 + (float)ppfStack_2c4;
      param_1[0x15] = (int)((float)piStack_2c0 + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)ppiStack_2bc + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x17] + (float)ppfStack_2b8);
      pfStack_2d8 = (float *)((float)pfStack_2c8 * 0.13962634);
      ppfStack_2e0 = (float **)0xae6b77;
      D3DXMatrixRotationZ();
      puStack_2e4 = auStack_22c;
      pppfStack_2ec = (float ***)0xae6b86;
      ppfStack_2e0 = (float **)piVar22;
      D3DXMatrixMultiply();
      param_1[0x10] = (int)*pfVar2;
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)pfStack_2dc);
      fVar4 = (float)param_1[0x360];
      param_1[0x360] = (int)(fVar4 - (float)pfStack_2dc);
      if (fVar4 - (float)pfStack_2dc < 0.0) {
        param_1[0x186] = 2;
        param_1[0x360] = 0x42700000;
      }
      pfStack_288 = (float *)param_1[0x244];
      pppfStack_2ec = (float ***)0x1645904;
      pfStack_284 = (float *)param_1[0x245];
      ppfStack_2f0 = (float **)(param_1[0x2e7] << 0x10 | 5);
      piStack_280 = (int *)param_1[0x246];
      ppfStack_2f4 = &pfStack_2c8;
      puStack_27c = (undefined1 *)param_1[0x247];
      ppfStack_2fc = &pfStack_288;
      piStack_304 = param_1 + 0x449;
      pfStack_2c8 = (float *)(*pfVar2 - (float)pfStack_288);
      ppfStack_2c4 = (float **)((float)param_1[0x15] - (float)pfStack_284);
      piStack_2c0 = (int *)((float)param_1[0x16] - (float)piStack_280);
      ppiStack_2bc = (int **)((float)param_1[0x17] - (float)puStack_27c);
      ppfStack_2f8 = (float **)0x3e19999a;
      uStack_300 = 0;
      pppfStack_308 = (float ***)0xae6c60;
      FUN_0090fa30();
      return;
    case 2:
      goto switchD_00ae6a7c_caseD_2;
    case 3:
      ppfStack_2cc = (float **)0xae6f93;
      FUN_00acc0a0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      param_1[0x186] = 4;
      return;
    default:
      return;
    }
  case 0x21:
    return;
  case 0x22:
    FUN_00adf160();
    return;
  case 0x23:
    if ((DAT_01bea060 & 0x10000) != 0) {
      ppfStack_2a4 = (float **)0xae7ec5;
      FUN_00a805f0();
      return;
    }
    ppfStack_2a4 = (float **)0xae7ed7;
    iVar20 = FUN_00a81330();
    if (iVar20 != 0) {
      ppfStack_2a4 = (float **)0xae7ee8;
      FUN_00a7c8a0();
    }
    ppfVar13 = (float **)(param_1 + 4);
    piStack_2a8 = (int *)0x0;
    ppiStack_2ac = &local_230;
    local_234 = 0.0;
    local_238 = 0.0;
    ppfStack_2b0 = (float **)0xae7f03;
    ppfStack_2a4 = ppfVar13;
    D3DXMatrixInverse();
    ppfStack_2b8 = (float **)&stack0xfffffd64;
    ppiStack_2bc = (int **)0xae7f25;
    ppfStack_2b4 = ppfStack_2b8;
    ppfStack_2b0 = ppfVar13;
    D3DXVec3TransformNormal();
    piStack_2a8 = (int *)((float)piStack_2a8 + (float)param_1[0x10]);
    uStack_1b4 = 0;
    pfVar2 = (float *)(param_1 + 0x14);
    puStack_1b8 = auStack_1a8;
    ppfStack_2a4 = (float **)((float)param_1[0x11] + (float)ppfStack_2a4);
    ppiStack_2bc = (int **)0x16a04a8;
    piStack_2c0 = (int *)(param_1[0x2e7] << 0x10 | 6);
    ppfStack_2c4 = &pfStack_288;
    ppuStack_1c8 = hkpAllCdPointCollector::vftable;
    uStack_1b0 = 0x80000008;
    uStack_1c4 = 0x7f7fffee;
    pfStack_288 = (float *)((float)piStack_2a8 - *pfVar2);
    pfStack_284 = (float *)((float)ppfStack_2a4 - (float)param_1[0x15]);
    piStack_280 = (int *)(((float)param_1[0x12] + unaff_EDI) - (float)param_1[0x16]);
    puStack_27c = (undefined1 *)(0.0 - (float)param_1[0x17]);
    pfStack_2c8 = (float *)0x3e99999a;
    pppfStack_2d0 = (float ***)0x0;
    pppfStack_2d4 = (float ***)0x0;
    pfStack_2d8 = (float *)0xae7fd2;
    ppfStack_2cc = (float **)pfVar2;
    FUN_0090eea0();
    ppuStack_1c8 = hkpAllCdPointCollector::vftable;
    uStack_1b4 = 0;
    if (-1 < (int)uStack_1b0) {
      ppiStack_2bc = (int **)((uStack_1b0 & 0x3fffffff) * 0x30);
      piStack_2c0 = (int *)puStack_1b8;
      ppfStack_2c4 = (float **)0xae8023;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))();
    }
    if (ppiStack_2ac == (int **)0x0) {
      ppiStack_2bc = (int **)0xae8322;
      FUN_00a7c950();
    }
    else {
      piStack_2a8 = ppiStack_2ac[0x14];
      ppiStack_2bc = (int **)(int)(short)param_1[0x2f5];
      ppfStack_2a4 = (float **)ppiStack_2ac[0x15];
      piVar22 = ppiStack_2ac[0x16];
      piVar19 = ppiStack_2ac[0x17];
      piStack_2c0 = (int *)0xae8058;
      iVar20 = FUN_00a12210();
      piVar11 = piStack_2a8;
      ppfVar12 = ppfStack_2a4;
      if ((-1 < (short)param_1[0x2f5]) && (iVar20 != 0)) {
        piVar22 = *(int **)(iVar20 + 0x48);
        piVar19 = *(int **)(iVar20 + 0x4c);
        piVar11 = *(int **)(iVar20 + 0x40);
        ppfVar12 = (float **)*(int **)(iVar20 + 0x44);
      }
      fVar4 = (float)param_1[0x2f8] + (float)param_1[0x2f0] + (float)piVar11;
      fVar7 = (float)param_1[0x2f1] + (float)param_1[0x2f9] + (float)ppfVar12;
      fVar6 = (float)param_1[0x2f2] + (float)param_1[0x2fa] + (float)piVar22;
      fVar5 = (float)param_1[0x2f3] + (float)param_1[0x2fb] + (float)piVar19;
      if (((*(byte *)(param_1 + 0x444) & 0x80) == 0) && (1 < param_1[0x186])) {
        if (param_1[0x187] == 0) {
          if (3.0 < SQRT(((float)param_1[0x2d6] - fVar6) * ((float)param_1[0x2d6] - fVar6) +
                         ((float)param_1[0x2d5] - fVar7) * ((float)param_1[0x2d5] - fVar7) +
                         ((float)param_1[0x2d4] - fVar4) * ((float)param_1[0x2d4] - fVar4))) {
            ppiStack_2bc = (int **)0x40000000;
            piStack_2c0 = (int *)0x0;
            ppfStack_2c4 = (float **)0xae8213;
            fVar28 = (float10)FUN_00dde300();
            param_1[0x2f0] = (int)(float)(fVar28 - (float10)1.0);
            ppiStack_2bc = (int **)0x40000000;
            piStack_2c0 = (int *)0x0;
            ppfStack_2c4 = (float **)0xae823b;
            fVar28 = (float10)FUN_00dde300();
            param_1[0x187] = 1;
            param_1[0x2f2] = (int)(float)(fVar28 - (float10)1.0);
          }
        }
        else if (param_1[0x187] == 1) {
          param_1[0x2d4] = (int)((fVar4 - (float)param_1[0x2d4]) * 0.1 + (float)param_1[0x2d4]);
          param_1[0x2d5] = (int)((fVar7 - (float)param_1[0x2d5]) * 0.1 + (float)param_1[0x2d5]);
          param_1[0x2d6] = (int)((fVar6 - (float)param_1[0x2d6]) * 0.1 + (float)param_1[0x2d6]);
          param_1[0x2d7] = (int)((fVar5 - (float)param_1[0x2d7]) * 0.1 + (float)param_1[0x2d7]);
          if (SQRT(((float)param_1[0x2d4] - fVar4) * ((float)param_1[0x2d4] - fVar4) +
                   ((float)param_1[0x2d5] - fVar7) * ((float)param_1[0x2d5] - fVar7) +
                   ((float)param_1[0x2d6] - fVar6) * ((float)param_1[0x2d6] - fVar6)) < 0.05) {
            param_1[0x2d4] = (int)fVar4;
            param_1[0x2d5] = (int)fVar7;
            param_1[0x2d6] = (int)fVar6;
            param_1[0x2d7] = (int)fVar5;
            param_1[0x187] = 0;
          }
        }
      }
      uStack_1c4 = 0x7f7fffee;
      puStack_1b8 = auStack_1a8;
      ppuStack_1c8 = hkpAllCdPointCollector::vftable;
      pfStack_288 = (float *)((float)param_1[0x2d4] - *pfVar2);
      uStack_1b0 = 0x80000008;
      uStack_1b4 = 0;
      pfStack_284 = (float *)((float)param_1[0x2d5] - (float)param_1[0x15]);
      piStack_280 = (int *)((float)param_1[0x2d6] - (float)param_1[0x16]);
      puStack_27c = (undefined1 *)((float)param_1[0x2d7] - (float)param_1[0x17]);
      ppiStack_2bc = (int **)0xae82d3;
      iVar20 = FUN_009f8b40();
      ppiStack_2bc = (int **)0x16a0490;
      piStack_2c0 = (int *)(iVar20 << 0x10 | 6);
      ppfStack_2c4 = &pfStack_288;
      pfStack_2c8 = (float *)0x3e99999a;
      pppfStack_2d0 = (float ***)0x0;
      pppfStack_2d4 = (float ***)0x0;
      pfStack_2d8 = (float *)0xae82fd;
      ppfStack_2cc = (float **)pfVar2;
      FUN_0090eea0();
      ppiStack_2bc = (int **)0xae8315;
      hkpCdPointCollector::hkpCdPointCollector_4();
    }
    ppiStack_2bc = &piStack_248;
    piStack_2c0 = param_1 + 0x2d4;
    ppfStack_2c4 = (float **)&puStack_278;
    pfStack_2c8 = (float *)0xae8338;
    D3DXVec3TransformNormal();
    pfStack_284 = (float *)((float)pfStack_284 + fStack_224);
    piStack_280 = (int *)(fStack_220 + (float)piStack_280);
    puStack_27c = (undefined1 *)(fStack_21c + (float)puStack_27c);
    pfStack_2c8 = (float *)0xae836e;
    fVar28 = (float10)(**(code **)(*param_1 + 0x24))();
    ppfStack_2b8 = (float **)(float)fVar28;
    pfStack_2c8 = (float *)0xae8377;
    piVar22 = (int *)FUN_00c13920();
    pfStack_2c8 = (float *)0x0;
    ppfStack_2cc = (float **)0xae8382;
    iVar20 = (**(code **)(*piVar22 + 0x28))();
    if (iVar20 != 0) {
      ppfStack_2cc = (float **)0xae838d;
      iVar20 = FUN_00a7c8a0();
      if (iVar20 != 0) {
        ppfStack_2cc = (float **)0xae8398;
        iVar20 = FUN_00b8c050();
        if (iVar20 != 0) {
          ppiStack_2bc = (int **)((float)ppiStack_2bc * 0.5);
          ppfStack_2cc = (float **)0xae83af;
          piVar22 = (int *)FUN_00c13920();
          ppfStack_2cc = (float **)0x0;
          pppfStack_2d0 = (float ***)0xae83ba;
          iVar20 = (**(code **)(*piVar22 + 0x28))();
          if (iVar20 != 0) {
            ppfStack_2cc = (float **)0xae83c5;
            iVar20 = FUN_00a7c8a0();
            if (iVar20 != 0) {
              ppfStack_2cc = (float **)0xae83d0;
              iVar20 = FUN_00b7e570();
              if (iVar20 != 0) {
                ppiStack_2bc = (int **)((float)ppiStack_2bc * 0.1);
              }
            }
          }
        }
      }
    }
    if (param_1[0x445] != 0) {
      ppfStack_2cc = (float **)(param_1 + 0x2d4);
      pppfStack_2d0 = (float ***)0xae83f8;
      FUN_00a7ce90();
    }
    ppfStack_2e8 = ppfVar13;
    switch(param_1[0x186]) {
    case 0:
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
      param_1[0x360] = 0x40400000;
      param_1[0x186] = 1;
      ppfStack_2cc = (float **)0xae8433;
      FUN_00aded90();
    case 1:
      piStack_2a8 = (int *)0x0;
      pppfStack_2d4 = (float ***)&piStack_2a8;
      ppfStack_2a4 = (float **)((float)ppiStack_2bc * (float)param_1[0x2e4] * 0.01);
      pfStack_2d8 = (float *)0xae8461;
      pppfStack_2d0 = pppfStack_2d4;
      ppfStack_2cc = ppfVar13;
      D3DXVec3TransformNormal();
      fVar4 = (float)pfStack_2c8 * 0.01 + (float)param_1[0x2e4];
      param_1[0x2e4] = (int)fVar4;
      if (!NAN(fVar4) && 0.15 < fVar4 != (fVar4 == 0.15)) {
        param_1[0x2e4] = 0x3e19999a;
      }
      param_1[0x244] = (int)*pfVar2;
      pfStack_2dc = &fStack_224;
      param_1[0x245] = param_1[0x15];
      param_1[0x246] = param_1[0x16];
      param_1[0x247] = param_1[0x17];
      *pfVar2 = (float)ppfStack_2b4 + *pfVar2;
      param_1[0x15] = (int)((float)ppfStack_2b0 + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)ppiStack_2ac + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)piStack_2a8 + (float)param_1[0x17]);
      pfStack_2d8 = (float *)((float)pfStack_2c8 * 0.13962634);
      ppfStack_2e0 = (float **)0xae84f4;
      D3DXMatrixRotationZ();
      puStack_2e4 = auStack_22c;
      pppfStack_2ec = (float ***)0xae8503;
      ppfStack_2e0 = ppfVar13;
      D3DXMatrixMultiply();
      param_1[0x10] = (int)*pfVar2;
      param_1[0x11] = param_1[0x15];
      param_1[0x12] = param_1[0x16];
      param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)pfStack_2dc);
      fVar4 = (float)param_1[0x360];
      param_1[0x360] = (int)(fVar4 - (float)pfStack_2dc);
      if (fVar4 - (float)pfStack_2dc < 0.0) {
        param_1[0x360] = 0;
        param_1[0x186] = 2;
      }
      pppfStack_2ec = (float ***)0xffffffff;
      pfStack_2d8 = (float *)(*pfVar2 - (float)param_1[0x244]);
      pppfStack_2d4 = (float ***)((float)param_1[0x15] - (float)param_1[0x245]);
      pppfStack_2d0 = (float ***)((float)param_1[0x16] - (float)param_1[0x246]);
      ppfStack_2cc = (float **)((float)param_1[0x17] - (float)param_1[0x247]);
      ppfStack_2f4 = (float **)0xae85ac;
      ppfStack_2f0 = (float **)param_1;
      iVar20 = FUN_00a84000();
      if ((iVar20 != 0) && ((DAT_01bea060 & 0x20000) == 0)) {
        pppfStack_2ec = (float ***)0xae85c6;
        puVar23 = (undefined4 *)FUN_009f8b60();
        pppfStack_2ec = (float ***)*puVar23;
        ppfStack_2f0 = &pfStack_2d8;
        ppfStack_2f8 = (float **)&stack0xfffffd68;
        ppfStack_2f4 = (float **)0x3e19999a;
        ppfStack_2fc = (float **)0xae85e4;
        FUN_00acb320();
        return;
      }
      pppfStack_2ec = (float ***)0xae85f2;
      puVar23 = (undefined4 *)FUN_009f8b60();
      pppfStack_2ec = (float ***)*puVar23;
      ppfStack_2f0 = &pfStack_2d8;
      ppfStack_2f8 = (float **)&stack0xfffffd68;
      ppfStack_2f4 = (float **)0x3e19999a;
      ppfStack_2fc = (float **)0xae8610;
      FUN_00acb360();
      return;
    case 2:
      break;
    case 3:
      ppfStack_2cc = (float **)0xae8905;
      FUN_00acc0a0();
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
    default:
      return;
    }
  case 0x24:
    FUN_00adfc30();
    return;
  case 0x2a:
    FUN_00adbdc0();
    return;
  case 0x2c:
    FUN_00adc300();
    return;
  case 0x2d:
  case 0x2e:
  case 0x31:
  case 0x32:
    goto LAB_00ae6fd0;
  case 0x2f:
  case 0x30:
    hkpAllCdPointCollector::hkpAllCdPointCollector_35();
    return;
  case 0x33:
    FUN_00ad0f70();
    return;
  case 0x34:
  case 0x35:
    FUN_00ad5570();
    return;
  case 0x36:
    FUN_00ad5a60();
    return;
  case 0x39:
    if (param_1[0x186] == 0) {
      param_1[0x186] = 1;
    }
    else if ((param_1[0x186] == 1) && (DAT_01bea740 == 0)) {
      FUN_00acc0a0();
      return;
    }
    return;
  case 0x3a:
    FUN_00ac5ba0();
    return;
  case 0x3b:
    FUN_00adcd60();
    return;
  case 0x3c:
    FUN_00ae0150();
    return;
  case 0x3d:
    FUN_00ad23e0();
    return;
  case 0x40:
    FUN_00add200();
    return;
  }
  piStack_2a8 = (int *)0x0;
  pppfStack_2d4 = (float ***)&piStack_2a8;
  ppfStack_2a4 = (float **)((float)ppiStack_2bc * 0.01 * (float)param_1[0x2e4]);
  fVar4 = (float)ppiStack_2bc * (float)param_1[0x2e4];
  pfStack_2d8 = (float *)0xae864b;
  pppfStack_2d0 = pppfStack_2d4;
  ppfStack_2cc = ppfVar13;
  D3DXVec3TransformNormal();
  pfStack_2d8 = (float *)0xae865c;
  fVar28 = (float10)FUN_00fdc1f0();
  pfStack_2dc = &fStack_224;
  param_1[0x2e4] =
       (int)(float)(((float10)0.02 * (float10)(float)pfStack_2c8 + (float10)(float)param_1[0x2e4]) *
                   fVar28);
  param_1[0x244] = (int)*pfVar2;
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  *pfVar2 = (float)ppfStack_2b4 + *pfVar2;
  param_1[0x15] = (int)((float)ppfStack_2b0 + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)ppiStack_2ac + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)piStack_2a8 + (float)param_1[0x17]);
  pfStack_2d8 = (float *)(float)((float10)(float)pfStack_2c8 * (float10)0.13962634);
  ppfStack_2e0 = (float **)0xae86d8;
  D3DXMatrixRotationZ();
  puStack_2e4 = auStack_22c;
  pppfStack_2ec = (float ***)0xae86e7;
  ppfStack_2e0 = ppfVar13;
  D3DXMatrixMultiply();
  param_1[0x10] = (int)*pfVar2;
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if (param_1[0x445] != 0) {
    ppfVar13 = (float **)
               ((SQRT(fVar4 * fVar4 +
                      (float)ppfStack_2a4 * (float)ppfStack_2a4 +
                      (float)piStack_2a8 * (float)piStack_2a8) + 1.0) * 0.14285715);
    ppfStack_2b8 = (float **)0x40000000;
    if ((NAN((float)ppfVar13) || 2.0 < (float)ppfVar13 == ((float)ppfVar13 == 2.0)) &&
       (ppfStack_2b8 = ppfVar13, (float)ppfVar13 < 0.2 != ((float)ppfVar13 == 0.2))) {
      ppfStack_2b8 = (float **)0x3e4ccccd;
    }
    pppfStack_2ec = &ppfStack_2b8;
    ppfStack_2f0 = (float **)0xae8755;
    ppfStack_2b4 = ppfStack_2b8;
    ppfStack_2b0 = ppfStack_2b8;
    FUN_00a7cf90();
  }
  if ((puStack_27c != (undefined1 *)0x0) && (param_1[0x446] == 0)) {
    if (fVar4 * fVar4 +
        (float)ppfStack_2a4 * (float)ppfStack_2a4 + (float)piStack_2a8 * (float)piStack_2a8 < 4.0) {
      param_1[0x446] = 1;
    }
    else {
      pppfStack_2ec = (float ***)0x1;
      ppfStack_2f0 = (float **)((float)pfStack_2dc * 0.027925268);
      ppfStack_2f8 = &pfStack_2c8;
      ppfStack_2f4 = (float **)0x3dcccccd;
      uStack_300 = 0xae87d2;
      ppfStack_2fc = (float **)(param_1 + 0x2d4);
      FUN_00acc460();
      if (piStack_280 != (int *)0x0) {
        pppfStack_2ec = (float ***)0x1;
        ppfStack_2f0 = (float **)((float)pfStack_2dc * 0.06981317);
        ppfStack_2f8 = &pfStack_2c8;
        ppfStack_2f4 = (float **)0x3e4ccccd;
        uStack_300 = 0xae8802;
        ppfStack_2fc = (float **)(param_1 + 0x2d4);
        FUN_00acc460();
      }
    }
  }
  fVar4 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar4 - (float)pfStack_2dc);
  if (0.0 <= fVar4 - (float)pfStack_2dc) {
    pppfStack_2ec = (float ***)0xffffffff;
    pfStack_2d8 = (float *)(*pfVar2 - (float)param_1[0x244]);
    pppfStack_2d4 = (float ***)((float)param_1[0x15] - (float)param_1[0x245]);
    pppfStack_2d0 = (float ***)((float)param_1[0x16] - (float)param_1[0x246]);
    ppfStack_2cc = (float **)((float)param_1[0x17] - (float)param_1[0x247]);
    ppfStack_2f4 = (float **)0xae8891;
    ppfStack_2f0 = (float **)param_1;
    iVar20 = FUN_00a84000();
    if (iVar20 != 0) {
      pppfStack_2ec = (float ***)0xe;
      ppfStack_2f0 = (float **)0xae889f;
      iVar20 = FUN_00416910();
      if (iVar20 == 0) {
        pppfStack_2ec = (float ***)0xae88ad;
        puVar23 = (undefined4 *)FUN_009f8b60();
        pppfStack_2ec = (float ***)*puVar23;
        ppfStack_2f0 = &pfStack_2d8;
        ppfStack_2f8 = (float **)&stack0xfffffd68;
        ppfStack_2f4 = (float **)0x3e19999a;
        ppfStack_2fc = (float **)0xae88cb;
        FUN_00acb320();
        return;
      }
    }
    pppfStack_2ec = (float ***)0xae88d9;
    puVar23 = (undefined4 *)FUN_009f8b60();
    pppfStack_2ec = (float ***)*puVar23;
    ppfStack_2f0 = &pfStack_2d8;
    ppfStack_2f8 = (float **)&stack0xfffffd68;
    ppfStack_2f4 = (float **)0x3e19999a;
    ppfStack_2fc = (float **)0xae88f7;
    FUN_00acb360();
    return;
  }
  param_1[0x186] = 3;
  return;
switchD_00ae6a7c_caseD_2:
  ppfStack_2b8 = (float **)0x0;
  pppfStack_2d4 = &ppfStack_2b8;
  ppfStack_2b4 = (float **)((float)ppiStack_2bc * 0.01 * (float)param_1[0x2e4]);
  ppfStack_2b0 = (float **)((float)ppiStack_2bc * (float)param_1[0x2e4]);
  pfStack_2d8 = (float *)0xae6c97;
  pppfStack_2d0 = pppfStack_2d4;
  ppfStack_2cc = (float **)piVar22;
  D3DXVec3TransformNormal();
  fVar5 = (float)pfStack_2c8 * 0.014 + (float)param_1[0x2e4];
  param_1[0x2e4] = (int)fVar5;
  fVar4 = (float)param_1[0x360];
  param_1[0x360] = (int)(fVar4 - (float)pfStack_2c8);
  if (fVar4 - (float)pfStack_2c8 < 0.0) {
    param_1[0x2e4] = (int)((float)pfStack_2c8 * 0.002 + fVar5);
  }
  pfStack_2d8 = (float *)0xae6cef;
  fVar28 = (float10)FUN_00fdc1f0();
  pfStack_2dc = &fStack_224;
  param_1[0x2e4] = (int)(float)(fVar28 * (float10)(float)param_1[0x2e4]);
  param_1[0x244] = (int)*pfVar2;
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  *pfVar2 = *pfVar2 + (float)ppfStack_2c4;
  param_1[0x15] = (int)((float)piStack_2c0 + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)ppiStack_2bc + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x17] + (float)ppfStack_2b8);
  pfStack_2d8 = (float *)((float)pfStack_2c8 * 0.27925268);
  ppfStack_2e0 = (float **)0xae6d5f;
  D3DXMatrixRotationZ();
  puStack_2e4 = auStack_22c;
  pppfStack_2ec = (float ***)0xae6d6e;
  ppfStack_2e0 = (float **)piVar22;
  D3DXMatrixMultiply();
  param_1[0x10] = (int)*pfVar2;
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  if (ppfStack_2b0 != (float **)0x0) {
    if (4.0 <= unaff_EDI * unaff_EDI +
               (float)ppfStack_2a4 * (float)ppfStack_2a4 + (float)piStack_2a8 * (float)piStack_2a8)
    {
      pppfStack_2ec = (float ***)0x1;
      ppfStack_2f0 = (float **)((float)pfStack_2dc * 0.0418879);
      ppfStack_2f8 = &pfStack_2d8;
      ppfStack_2fc = (float **)(param_1 + 0x2d4);
      ppfStack_2f4 = (float **)0x3dcccccd;
      uStack_300 = 0xae6de2;
      FUN_00acc460();
    }
    else {
      if ((NAN(unaff_EDI) || 1.0 < unaff_EDI == (unaff_EDI == 1.0)) && (-1.0 < unaff_EDI))
      goto LAB_00ae6eb0;
      pppfStack_2ec = (float ***)0x1;
      ppfStack_2f0 = (float **)((float)pfStack_2dc * 0.0418879);
      ppfStack_2f8 = &pfStack_2d8;
      ppfStack_2fc = (float **)(param_1 + 0x2d4);
      ppfStack_2f4 = (float **)0x3dcccccd;
      uStack_300 = 0xae6e5f;
      FUN_00acc460();
    }
    if (ppiStack_2ac != (int **)0x0) {
      ppfStack_2f0 = (float **)((float)pfStack_2dc * 0.13962634);
      ppfStack_2f8 = &pfStack_2d8;
      pppfStack_2ec = (float ***)0x1;
      ppfStack_2f4 = (float **)0x3e4ccccd;
      ppfStack_2fc = (float **)(param_1 + 0x2d4);
      uStack_300 = 0xae6e8f;
      FUN_00acc460();
      pppfStack_2ec = (float ***)0xae6ea0;
      fVar28 = (float10)FUN_00fdc1f0();
      param_1[0x2e4] = (int)(float)(fVar28 * (float10)(float)param_1[0x2e4]);
    }
  }
LAB_00ae6eb0:
  fVar4 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar4 - (float)pfStack_2dc);
  if ((ppfStack_2b0 == (float **)0x0) && (unaff_EDI <= -10.0)) {
    param_1[0x2fc] = (int)((fVar4 - (float)pfStack_2dc) - (float)pfStack_2dc * 5.0);
  }
  if (0.0 <= (float)param_1[0x2fc]) {
    pfStack_288 = (float *)param_1[0x244];
    pppfStack_2ec = (float ***)param_1[0x2e7];
    pfStack_284 = (float *)param_1[0x245];
    ppfStack_2f0 = &pfStack_2c8;
    piStack_280 = (int *)param_1[0x246];
    ppfStack_2f8 = &pfStack_288;
    puStack_27c = (undefined1 *)param_1[0x247];
    pfStack_2c8 = (float *)(*pfVar2 - (float)pfStack_288);
    ppfStack_2c4 = (float **)((float)param_1[0x15] - (float)pfStack_284);
    piStack_2c0 = (int *)((float)param_1[0x16] - (float)piStack_280);
    ppiStack_2bc = (int **)((float)param_1[0x17] - (float)puStack_27c);
    ppfStack_2f4 = (float **)0x3e19999a;
    ppfStack_2fc = (float **)0xae6f83;
    FUN_00acb320();
    return;
  }
  param_1[0x186] = 3;
  return;
switchD_00ad8e49_caseD_2:
  fVar26 = (float10)0.3 * fVar28 + (float10)(float)param_1[0x360];
  param_1[0x360] = (int)(float)fVar26;
  if ((local_268 < 0.5235988 != (local_268 == 0.5235988)) &&
     (!NAN(local_268) && 0.0 < local_268 != (local_268 == 0.0))) {
    fVar26 = fVar28 * (float10)0.1 + fVar26;
    param_1[0x360] = (int)(float)fVar26;
    if (param_1[0x24c] == 3) {
      param_1[0x360] = (int)(float)(fVar28 * (float10)0.5 + fVar26);
    }
  }
  pfStack_288 = (float *)0xad932c;
  fVar28 = (float10)FUN_00fdc1f0();
  param_1[0x249] = (int)(float)(fVar28 * (float10)(float)param_1[0x249]);
  pfStack_288 = (float *)0xad9347;
  fVar28 = (float10)FUN_00fdc1f0();
  pfStack_288 = (float *)(param_1 + 4);
  param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] * fVar28);
  param_1[0x24a] = (int)(float)(fVar28 * (float10)(float)param_1[0x24a]);
  local_264 = 0.0;
  fVar4 = fStack_26c * 0.01;
  fVar5 = fStack_26c * (float)param_1[0x2e4];
  D3DXVec3TransformNormal();
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)piStack_270 + (float)param_1[0x14]);
  param_1[0x15] = (int)(fStack_26c + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)param_1[0x16] + local_268);
  param_1[0x17] = (int)(local_264 + (float)param_1[0x17]);
  param_1[0x14] = (int)((float)param_1[0x248] * (float)puStack_278 + (float)param_1[0x14]);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x249] * (float)puStack_278);
  param_1[0x16] = (int)((float)param_1[0x24a] * (float)puStack_278 + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x24b] * (float)puStack_278 + (float)param_1[0x17]);
  fStack_274 = (float)param_1[0x360] * 0.0004;
  if (0.16 < fStack_274) {
    fStack_274 = 0.16;
  }
  fVar28 = (float10)FUN_00fdc1f0();
  param_1[0x2e4] = (int)(float)(fVar28 * (float10)(float)param_1[0x2e4]);
  fVar28 = (float10)FUN_00dde300();
  param_1[0x2e4] =
       (int)(float)((float10)fStack_274 * (float10)(float)puStack_278 * fVar28 +
                   (float10)(float)param_1[0x2e4]);
  FUN_00dde300();
  D3DXMatrixRotationZ();
  ppfStack_2a4 = (float **)(param_1 + 4);
  piStack_2a8 = (int *)0xad94e1;
  D3DXMatrixMultiply();
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  fVar4 = fVar5 * fVar5 + local_264 * local_264 + fVar4 * fVar4;
  if (fVar4 < 400.0 != (fVar4 == 400.0)) {
    param_1[0x364] = 0;
  }
  if (piVar19 != (int *)0x0) {
    piStack_2a8 = (int *)0xad9530;
    (**(code **)(*piVar19 + 0x1fc))();
  }
  piStack_2a8 = (int *)0xad9535;
  piVar19 = (int *)FUN_00c13920();
  piStack_2a8 = (int *)0x0;
  ppiStack_2ac = (int **)0xad9540;
  iVar20 = (**(code **)(*piVar19 + 0x28))();
  if (iVar20 != 0) {
    ppiStack_2ac = (int **)0xad954b;
    iVar20 = FUN_00a7c8a0();
    if (iVar20 != 0) {
      ppiStack_2ac = (int **)0x0;
      *piVar22 = *(int *)(iVar20 + 0x50);
      param_1[0x2d5] = *(int *)(iVar20 + 0x54);
      param_1[0x2d6] = *(int *)(iVar20 + 0x58);
      param_1[0x2d7] = *(int *)(iVar20 + 0x5c);
      ppfStack_2b0 = (float **)0xad956f;
      iVar20 = FUN_00a12210();
      if (iVar20 != 0) {
        *piVar22 = *(int *)(iVar20 + 0x40);
        param_1[0x2d5] = *(int *)(iVar20 + 0x44);
        param_1[0x2d6] = *(int *)(iVar20 + 0x48);
        param_1[0x2d7] = *(int *)(iVar20 + 0x4c);
      }
      ppiStack_2ac = (int **)0x1;
      ppfStack_2b0 = (float **)((float)&local_264 * 0.02617994);
      ppfStack_2b8 = &pfStack_288;
      param_1[0x364] = 1;
      ppfStack_2b4 = (float **)0x3d4ccccd;
      piStack_2c0 = (int *)0xad95bd;
      ppiStack_2bc = (int **)piVar22;
      FUN_00acc460();
    }
  }
  fVar4 = (float)param_1[0x2fc] - (float)&local_264;
  param_1[0x2fc] = (int)fVar4;
  if (0.0 <= fVar4) {
    piStack_248 = (int *)((float)param_1[0x14] - (float)param_1[0x244]);
    fStack_244 = (float)param_1[0x15] - (float)param_1[0x245];
    fStack_240 = (float)param_1[0x16] - (float)param_1[0x246];
    fStack_23c = (float)param_1[0x17] - (float)param_1[0x247];
    ppiStack_2ac = (int **)0xad9640;
    ppiStack_2ac = (int **)FUN_009f8b40();
    ppfStack_2b0 = (float **)&piStack_248;
    ppfStack_2b8 = (float **)&stack0xfffffda8;
    ppfStack_2b4 = (float **)0x3f000000;
    ppiStack_2bc = (int **)0xad965c;
    FUN_00acb320();
    return;
  }
LAB_00ad95d8:
  param_1[0x186] = 3;
  return;
LAB_00ae6fd0:
  iVar20 = FUN_00a81330();
  if ((iVar20 == 0) || (iVar20 = FUN_00a7c8a0(), iVar20 == 0)) {
    FUN_00a7c950();
  }
  else {
    param_1[0x2d4] = *(int *)(iVar20 + 0x50);
    param_1[0x2d5] = *(int *)(iVar20 + 0x54);
    param_1[0x2d6] = *(int *)(iVar20 + 0x58);
    param_1[0x2d7] = *(int *)(iVar20 + 0x5c);
    iVar20 = FUN_00a12210((int)(short)param_1[0x2f5]);
    if ((-1 < (short)param_1[0x2f5]) && (iVar20 != 0)) {
      param_1[0x2d4] = *(int *)(iVar20 + 0x40);
      param_1[0x2d5] = *(int *)(iVar20 + 0x44);
      param_1[0x2d6] = *(int *)(iVar20 + 0x48);
      param_1[0x2d7] = *(int *)(iVar20 + 0x4c);
    }
  }
  D3DXMatrixInverse(local_4e0,0,param_1 + 4);
  pfVar2 = (float *)(param_1 + 0x2d4);
  D3DXVec3TransformNormal(afStack_4fc,pfVar2,auStack_4ec);
  fVar28 = (float10)(**(code **)(*param_1 + 0x24))();
  iVar20 = param_1[0x186];
  fVar4 = (float)fVar28;
  if (iVar20 == 0) {
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_00adc970();
    param_1[0x42c] = param_1[0x248];
    param_1[0x42d] = param_1[0x249];
    param_1[0x42e] = param_1[0x24a];
    param_1[0x42f] = param_1[0x24b];
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    if (param_1[0x24c] == 0x31) {
      param_1[0x360] = 0x40400000;
      iVar20 = 0x42f00000;
    }
    else {
      if (param_1[0x24c] != 0x32) goto LAB_00ae7221;
      param_1[0x360] = 0x41200000;
      iVar20 = 0x43960000;
    }
    param_1[0x2fc] = iVar20;
  }
  else if (iVar20 != 1) {
    iVar20 = iVar20 + -2;
    if (iVar20 == 0) {
      uVar21 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar21,iVar20);
      FUN_00a8c8b0(param_1[300],auStack_178);
      param_1[0x2fc] = 0x42f00000;
      pcVar9 = *(code **)(*param_1 + 0x20);
      param_1[0x186] = 3;
      (*pcVar9)();
      FUN_00eaa6e0(0x41200000,0);
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      FUN_00acc2f0(param_1[0x2fc],0);
    }
    goto LAB_00ae748d;
  }
LAB_00ae7221:
  if (param_1[0x24c] == 0x2d) {
    pfVar1 = (float *)(param_1 + 0x248);
    *pfVar1 = *pfVar2 - (float)param_1[0x14];
    param_1[0x249] = (int)((float)param_1[0x2d5] - (float)param_1[0x15]);
    param_1[0x24a] = (int)((float)param_1[0x2d6] - (float)param_1[0x16]);
    param_1[0x24b] = (int)((float)param_1[0x2d7] - (float)param_1[0x17]);
    fVar5 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar1 * *pfVar1 +
            (float)param_1[0x24a] * (float)param_1[0x24a];
    if (fVar5 < 0.0 == (fVar5 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      param_1[0x249] = 0x3f800000;
      param_1[0x24a] = 0;
    }
    fVar5 = fVar4 * 0.1;
    *pfVar1 = *pfVar1 * fVar5;
    param_1[0x249] = (int)(fVar5 * (float)param_1[0x249]);
    param_1[0x24a] = (int)((float)param_1[0x24a] * fVar5);
    param_1[0x24b] = (int)(fVar5 * (float)param_1[0x24b]);
  }
  if (param_1[0x24c] == 0x31) {
    pfVar1 = (float *)(param_1 + 0x248);
    *pfVar1 = *pfVar2 - (float)param_1[0x14];
    param_1[0x249] = (int)((float)param_1[0x2d5] - (float)param_1[0x15]);
    param_1[0x24a] = (int)((float)param_1[0x2d6] - (float)param_1[0x16]);
    param_1[0x24b] = (int)((float)param_1[0x2d7] - (float)param_1[0x17]);
    fVar5 = (float)param_1[0x249] * (float)param_1[0x249] + *pfVar1 * *pfVar1 +
            (float)param_1[0x24a] * (float)param_1[0x24a];
    if (fVar5 < 0.0 == (fVar5 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      param_1[0x249] = 0x3f800000;
      param_1[0x24a] = 0;
    }
    fVar5 = fVar4 * 0.05;
    *pfVar1 = *pfVar1 * fVar5;
    param_1[0x249] = (int)(fVar5 * (float)param_1[0x249]);
    param_1[0x24a] = (int)((float)param_1[0x24a] * fVar5);
    param_1[0x24b] = (int)(fVar5 * (float)param_1[0x24b]);
  }
  param_1[0x244] = param_1[0x14];
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x248] + (float)param_1[0x14]);
  param_1[0x15] = (int)((float)param_1[0x249] + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)param_1[0x24a] + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x24b] + (float)param_1[0x17]);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  fVar5 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar5 - fVar4);
  if (fVar5 - fVar4 < 0.0) {
    param_1[0x186] = 2;
  }
LAB_00ae748d:
  FUN_004066f0();
  if (param_1[0x421] != 0) {
    Phantom::setTransform(param_1 + 4);
  }
  if (param_1[0x425] != 0) {
    Phantom::setTransform(param_1 + 4);
  }
  if (param_1[0x421] != 0) {
    pppfStack_308 = &ppfStack_2f8;
    uStack_314 = 0x7f7fffee;
    ppuStack_318 = hkpAllCdPointCollector::vftable;
    uStack_300 = 0x80000008;
    piStack_304 = (int *)0x0;
    FUN_00900350(&ppuStack_318);
    if ((0 < (int)piStack_304) && (iVar20 = 0, 0 < (int)piStack_304)) {
      iVar24 = 0;
      fVar4 = afStack_4fc[0];
      do {
        fVar5 = *(float *)((int)pppfStack_308 + iVar24 + 0x1c);
        pfVar2 = (float *)(iVar24 + 0x10 + (int)pppfStack_308);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar14 = pfVar2[3];
        pfVar3 = (float *)(iVar24 + 0x10 + (int)pppfStack_308);
        pfVar2 = (float *)(iVar24 + (int)pppfStack_308);
        fVar15 = pfVar2[1];
        fVar16 = pfVar2[2];
        fVar17 = pfVar2[3];
        pfVar1 = (float *)(iVar24 + (int)pppfStack_308);
        *pfVar1 = fVar5 * fVar6 + *pfVar2;
        pfVar1[1] = fVar5 * fVar7 + fVar15;
        pfVar1[2] = fVar5 * fVar10 + fVar16;
        pfVar1[3] = fVar5 * fVar14 + fVar17;
        *pfVar3 = -fVar6;
        pfVar3[1] = -fVar7;
        pfVar3[2] = -fVar10;
        pfVar3[3] = fVar14;
        fVar5 = pfVar3[3];
        iVar20 = iVar20 + 1;
        fVar6 = pfVar3[1];
        iVar24 = iVar24 + 0x30;
        fVar7 = pfVar3[2];
        fVar4 = fVar4 * fVar5;
        fVar10 = (float)param_1[0x3c8] * 0.015;
        param_1[0x42c] = (int)(fVar10 * *pfVar3 * fVar5 + (float)param_1[0x42c]);
        param_1[0x42d] = (int)(fVar10 * fVar6 * fVar5 + (float)param_1[0x42d]);
        param_1[0x42e] = (int)((float)param_1[0x42e] + fVar10 * fVar7 * fVar5);
        param_1[0x42f] = (int)(fVar4 + (float)param_1[0x42f]);
      } while (iVar20 < (int)piStack_304);
    }
    ppuStack_318 = hkpAllCdPointCollector::vftable;
    piStack_304 = (int *)0x0;
    if (-1 < (int)uStack_300) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(pppfStack_308,(uStack_300 & 0x3fffffff) * 0x30);
    }
  }
  if (param_1[0x425] != 0) {
    puStack_4a8 = auStack_498;
    uStack_4b4 = 0x7f7fffee;
    ppuStack_4b8 = hkpAllCdPointCollector::vftable;
    uStack_4a0 = 0x80000008;
    iStack_4a4 = 0;
    FUN_00900350(&ppuStack_4b8);
    if ((0 < iStack_4a4) && (iVar20 = 0, 0 < iStack_4a4)) {
      iVar24 = 0;
      do {
        fVar4 = *(float *)(puStack_4a8 + iVar24 + 0x1c);
        pfVar2 = (float *)(puStack_4a8 + iVar24 + 0x10);
        fVar5 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar3 = (float *)(puStack_4a8 + iVar24 + 0x10);
        pfVar2 = (float *)(puStack_4a8 + iVar24);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar1 = (float *)(puStack_4a8 + iVar24);
        *pfVar1 = fVar4 * fVar5 + *pfVar2;
        pfVar1[1] = fVar4 * fVar6 + fVar14;
        pfVar1[2] = fVar4 * fVar7 + fVar15;
        pfVar1[3] = fVar4 * fVar10 + fVar16;
        *pfVar3 = -fVar5;
        pfVar3[1] = -fVar6;
        pfVar3[2] = -fVar7;
        pfVar3[3] = fVar10;
        fVar4 = pfVar3[3];
        iVar20 = iVar20 + 1;
        fVar5 = pfVar3[1];
        iVar24 = iVar24 + 0x30;
        fVar6 = pfVar3[2];
        afStack_4fc[0] = afStack_4fc[0] * fVar4;
        fVar7 = (float)param_1[0x3c8] * 0.01;
        param_1[0x42c] = (int)(fVar7 * *pfVar3 * fVar4 + (float)param_1[0x42c]);
        param_1[0x42d] = (int)(fVar7 * fVar5 * fVar4 + (float)param_1[0x42d]);
        param_1[0x42e] = (int)((float)param_1[0x42e] + fVar7 * fVar6 * fVar4);
        param_1[0x42f] = (int)(afStack_4fc[0] + (float)param_1[0x42f]);
      } while (iVar20 < iStack_4a4);
    }
    ppuStack_4b8 = hkpAllCdPointCollector::vftable;
    iStack_4a4 = 0;
    if (-1 < (int)uStack_4a0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_4a8,(uStack_4a0 & 0x3fffffff) * 0x30);
    }
  }
  if (DAT_01885d68 != 1) {
    piVar22 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar22 = *piVar22 + -1;
    if (((*piVar22 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  param_1[0x14] = (int)((float)param_1[0x42c] + (float)param_1[0x14]);
  param_1[0x15] = (int)((float)param_1[0x42d] + (float)param_1[0x15]);
  param_1[0x16] = (int)((float)param_1[0x42e] + (float)param_1[0x16]);
  param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x42f]);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  fVar28 = (float10)FUN_00fdc1f0();
  param_1[0x42c] = (int)(float)(fVar28 * (float10)(float)param_1[0x42c]);
  param_1[0x42d] = (int)(float)(fVar28 * (float10)(float)param_1[0x42d]);
  param_1[0x42e] = (int)(float)(fVar28 * (float10)(float)param_1[0x42e]);
  param_1[0x42f] = (int)(float)(fVar28 * (float10)(float)param_1[0x42f]);
  fVar4 = (float)param_1[0x42d] - (float)param_1[0x3c8] * 0.006;
  param_1[0x42d] = (int)fVar4;
  if (param_1[0x24c] != 0x32) {
    return;
  }
  param_1[0x42d] = (int)(fVar4 - (float)param_1[0x3c8] * -0.001);
  return;
}

