// src/behavior/BehaviorBulletBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC5CE0..00AE8970, 23 functions

#include "mgrr.h"
#include "BehaviorBulletBase.h"

// 00AC5CE0  BehaviorBulletBase::setCutCrerateInfo  size=31  [class]
void BehaviorBulletBase::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x4200b;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00ACABD0  BehaviorBulletBase::startup  size=397  [class]
undefined4 __fastcall BehaviorBulletBase::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  *(undefined4 *)(param_1 + 0x8e4) = 0xffff;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x1200) = 0;
  *(undefined4 *)(param_1 + 0xd90) = 1;
  *(undefined4 *)(param_1 + 0xd88) = 0;
  *(undefined4 *)(param_1 + 0xd8c) = 0;
  FUN_00410540(4,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x930) = 0xffffffff;
  FUN_00a8d280();
  uVar2 = 3;
  *(undefined4 *)(param_1 + 0xda4) = 0;
  *(undefined4 *)(param_1 + 0xf10) = 0;
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a92fb0(3);
  FUN_00e08640(uVar2);
  *(undefined4 *)(param_1 + 0xf24) = 1;
  *(undefined4 *)(param_1 + 0xf18) = 0;
  *(undefined4 *)(param_1 + 0xf30) = 0;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = 0;
  local_8 = 0;
  local_4 = 0;
  local_c = 1;
  iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1108) = 0;
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x930) = 0x3a;
  *(undefined2 *)(param_1 + 0x900) = 0xffff;
  FUN_00a7c950();
  iVar1 = *(int *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x1114) = 0;
  *(undefined4 *)(param_1 + 0x111c) = 0;
  *(undefined4 *)(param_1 + 0x120c) = 100;
  if (((iVar1 == 0x310a1) || (iVar1 == 0x31011)) || (iVar1 == 0x31013)) {
    FUN_00c3d2a0(*(undefined4 *)(param_1 + 0x4f0));
  }
  return 1;
}

// 00ACCE00  BehaviorBulletBase::BehaviorBulletBase  size=235  [class]
undefined4 * __fastcall BehaviorBulletBase::BehaviorBulletBase(undefined4 *param_1)

{
  Behavior::Behavior();
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
  EspControllerBullet::EspControllerBullet();
  FUN_00a7c930();
  return param_1;
}

// 00ACCEF0  BehaviorBulletBase::vf04  size=6  [class]
undefined * BehaviorBulletBase::vf04(void)

{
  return &DAT_01be9c94;
}

// 00ACCF00  BehaviorBulletBase::destruct  size=98  [class]
undefined4 __thiscall BehaviorBulletBase::destruct(undefined4 param_1,byte param_2)

{
  EspControllerBullet::~EspControllerBullet();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  Behavior::~Behavior();
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

// 00ADE4B0  BehaviorBulletBase::setSeqAtk  size=2207  [class]
void __fastcall BehaviorBulletBase::setSeqAtk(int *param_1)

{
  float fVar1;
  float fVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int **ppiVar10;
  undefined4 *puVar11;
  int *unaff_EDI;
  undefined4 *puVar12;
  bool bVar13;
  float10 fVar14;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  int iStack_610;
  float local_608;
  int *piStack_604;
  undefined1 auStack_5f8 [12];
  undefined4 uStack_5ec;
  float local_5e8;
  int *piStack_5e4;
  float fStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  float local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  float local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined1 auStack_57c [8];
  int local_574 [17];
  float local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined1 local_520 [36];
  undefined1 auStack_4fc [8];
  undefined1 auStack_4f4 [84];
  int local_4a0 [16];
  undefined4 local_460 [16];
  undefined **local_420;
  int *local_41c;
  int local_418;
  undefined4 local_414;
  int local_410 [259];
  
  Behavior::setSeqAtk();
  if (param_1[0x24c] == 0x2a) {
    iVar5 = FUN_00a96130();
    local_41c = local_410;
    local_418 = 0;
    local_414 = 0x100;
    local_420 = lib::StaticArray<Collision*,256>::vftable;
    local_574[0] = iVar5;
    FUN_00a9d9a0();
    local_5e8 = 0.0;
    if (0 < iVar5) {
      do {
        puVar3 = (ushort *)local_460[(int)local_5e8];
        FID_conflict__memcpy(local_4a0,param_1 + 4,0x40);
        FID_conflict__memcpy(local_520,param_1 + 4,0x40);
        FUN_00a92f90();
        iVar5 = FUN_00e3a1e0();
        bVar13 = iVar5 != 0;
        local_608 = (float)(uint)bVar13;
        uVar4 = puVar3[3];
        if (bVar13) {
          uVar4 = FUN_00a96170();
        }
        piVar6 = param_1;
        if (uVar4 != 0xffff) {
          piVar6 = (int *)FUN_00a12210();
        }
        if (piVar6 != (int *)0x0) {
          piVar6 = piVar6 + 4;
          piVar9 = local_4a0;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
          }
        }
        local_530 = *(float *)(puVar3 + 6);
        local_52c = *(undefined4 *)(puVar3 + 8);
        local_528 = *(undefined4 *)(puVar3 + 10);
        fVar1 = *(float *)(puVar3 + 0xc);
        fVar2 = *(float *)(puVar3 + 0xe);
        if (bVar13) {
          fVar2 = fVar2 * -1.0;
          local_530 = local_530 * -1.0;
        }
        local_588 = 0;
        local_58c = 0;
        local_590 = 0.0;
        local_594 = 0;
        local_59c = 0;
        local_5a0 = 0.0;
        local_5a4 = 0.0;
        local_5a8 = 0.0;
        local_5b0 = 0;
        local_5b4 = 0.0;
        local_5b8 = 0;
        local_5bc = 0;
        local_584 = 0x3f800000;
        local_598 = 0x3f800000;
        local_5ac = 0x3f800000;
        local_5c0 = 0x3f800000;
        if (*(float *)(puVar3 + 0x10) != 0.0) {
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
        }
        if (fVar2 != 0.0) {
          D3DXMatrixRotationY();
          D3DXMatrixMultiply();
        }
        if (fVar1 != 0.0) {
          D3DXMatrixRotationX();
          D3DXMatrixMultiply();
        }
        local_590 = local_530;
        local_58c = local_52c;
        local_588 = local_528;
        D3DXMatrixMultiply();
        uStack_5d8 = *(undefined4 *)(puVar3 + 0x14);
        uStack_5dc = 0;
        uStack_5d4 = 0;
        local_5e8 = -*(float *)(puVar3 + 0x14);
        uStack_5ec = 0;
        piStack_5e4 = (int *)0x0;
        D3DXVec3TransformNormal(&uStack_5dc);
        local_5e8 = local_5e8 + local_5a8;
        piStack_5e4 = (int *)((float)piStack_5e4 + local_5a4);
        fStack_5e0 = fStack_5e0 + local_5a0;
        D3DXVec3TransformNormal(auStack_5f8,auStack_5f8,&uStack_5d8);
        piStack_604 = (int *)((float)piStack_604 + local_5b4);
        piVar6 = param_1;
        switch(*(undefined1 *)((int)puVar3 + 3)) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        case 6:
          break;
        case 8:
          goto LAB_00ade978;
        case 9:
LAB_00ade978:
          ppiVar10 = &piStack_5e4;
          piVar9 = local_574 + 0xc;
          for (iVar5 = 0x10; piVar6 = unaff_EDI, iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = (int)*ppiVar10;
            ppiVar10 = ppiVar10 + 1;
            piVar9 = piVar9 + 1;
          }
          break;
        case 10:
        case 7:
          goto LAB_00ade978;
        case 0xb:
          ppiVar10 = &piStack_5e4;
          piVar9 = local_574 + 0xc;
          for (iVar5 = 0x10; piVar6 = unaff_EDI, iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = (int)*ppiVar10;
            ppiVar10 = ppiVar10 + 1;
            piVar9 = piVar9 + 1;
          }
          break;
        case 0xc:
          ppiVar10 = &piStack_5e4;
          piVar9 = local_574 + 0xc;
          for (iVar5 = 0x10; piVar6 = unaff_EDI, iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = (int)*ppiVar10;
            ppiVar10 = ppiVar10 + 1;
            piVar9 = piVar9 + 1;
          }
        }
        D3DXVec3TransformNormal(&stack0xfffff9bc,&stack0xfffff9bc,local_574 + 0xc);
        piVar6 = (int *)(**(code **)(*piVar6 + 0x130))(puVar3);
        piStack_5e4 = piVar6;
        if (piVar6 == (int *)0x0) {
          FUN_00dd5650();
        }
        else {
          iVar5 = piVar6[2];
          *(ushort *)(iVar5 + 0x80) = puVar3[4];
          *(ushort *)(iVar5 + 0x82) = puVar3[2];
          *(undefined4 *)(iVar5 + 0x20) = uStack_620;
          *(undefined4 *)(iVar5 + 0x24) = uStack_61c;
          *(undefined4 *)(iVar5 + 0x28) = uStack_618;
          *(undefined4 *)(iVar5 + 0x2c) = uStack_614;
          fVar14 = (float10)fpatan((float10)(float)piStack_604,(float10)local_608);
          *(float *)(iVar5 + 0x30) = (float)fVar14;
          local_608 = (float)(uint)*puVar3;
          if (3 < (uint)local_608) {
            local_608 = 5.60519e-45;
          }
          iVar7 = FUN_00a12210();
          if (iVar7 == 0) {
            local_574[0xf] = 0;
            local_574[0xe] = 0;
            local_574[0xd] = 0;
            local_574[0xc] = 0;
            local_574[10] = 0;
            local_574[9] = 0;
            local_574[8] = 0;
            local_574[7] = 0;
            local_574[5] = 0;
            local_574[4] = 0;
            local_574[3] = 0;
            local_574[2] = 0;
            local_574[0x10] = 0x3f800000;
            local_574[0xb] = 0x3f800000;
            local_574[6] = 0x3f800000;
            local_574[1] = 0x3f800000;
            D3DXMatrixRotationZ();
            D3DXMatrixMultiply();
            D3DXMatrixRotationX(auStack_4f4,0x40490fdb);
            D3DXMatrixMultiply(&local_58c,auStack_4fc,&local_58c);
            D3DXMatrixMultiply(iVar5 + 0x40,&local_598,&local_5e8);
          }
          else {
            puVar11 = (undefined4 *)(iVar7 + 0x10);
            puVar12 = (undefined4 *)(iVar5 + 0x40);
            for (iVar8 = 0x10; piVar6 = piStack_5e4, iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
          }
          if (((char)puVar3[1] == '\x03') &&
             (piStack_604 = local_41c, piVar9 = local_41c, local_41c != local_41c + local_418)) {
            do {
              iVar5 = *(int *)(*piStack_604 + 0x378);
              if (iVar5 != 0) {
                piVar6 = (int *)FUN_00c13920();
                iVar7 = (**(code **)(*piVar6 + 0x28))();
                if (iVar7 != 0) {
                  piVar6 = (int *)FUN_00a7c8a0();
                  if (piVar6 != (int *)0x0) {
                    (**(code **)(*piVar6 + 4))();
                    iVar7 = FUN_00dd6d80();
                    if (iVar7 != 0) {
                      *(int *)(*(int *)(iVar5 + 8) + 0x14) = piVar6[0x13c];
                      goto LAB_00adec49;
                    }
                  }
                  *(undefined4 *)(*(int *)(iVar5 + 8) + 0x14) = *(undefined4 *)(iStack_610 + 0x4f0);
                }
LAB_00adec49:
                FUN_00a7c7f0();
                FUN_00a7c960();
                FID_conflict__memcpy(local_574,(void *)(iStack_610 + 0x10),0x40);
                D3DXMatrixRotationY();
                D3DXMatrixMultiply(auStack_57c);
                iVar5 = *(int *)(iVar5 + 8);
                iVar7 = *(int *)(iStack_610 + 0x760);
                *(undefined4 *)(iVar5 + 0x94) = 1;
                piVar6 = local_574;
                piVar9 = (int *)(iVar5 + 0xa0);
                for (iVar8 = 0x10; piVar6 = piVar6 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
                  *piVar9 = *piVar6;
                  piVar9 = piVar9 + 1;
                }
                *(undefined4 *)(iVar5 + 0xe0) = 0x40a00000;
                *(undefined4 *)(iVar5 + 0xe4) = 0x3f060a92;
                *(undefined4 *)(iVar5 + 0xe8) = 3;
                *(undefined4 *)(iVar5 + 0xec) = 1;
                *(int *)(iVar5 + 0xf0) = iVar7 + (int)local_608;
                piVar9 = local_41c;
              }
              piStack_604 = piStack_604 + 1;
              piVar6 = piStack_5e4;
            } while (piStack_604 != piVar9 + local_418);
          }
          (**(code **)(*piVar6 + 4))();
        }
        local_5e8 = (float)((int)local_5e8 + 1);
      } while ((int)local_5e8 < local_574[0]);
    }
  }
  return;
}

// 00ADED90  FUN_00aded90  size=780  [callgraph]
void __fastcall FUN_00aded90(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  uVar3 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar4 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar3);
  if (iVar4 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar4,0x3f4ccccd,0x3e99999a,0xffffffff);
    if ((*(int *)(param_1 + 0x8e8) != 0) && (*(int *)(*(int *)(param_1 + 0x8e8) + 0x24) == 0x20120))
    {
      uVar3 = FUN_00a8d2a0();
      iVar4 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c),0);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
        *(undefined4 *)(iVar4 + 0x594) = 0x3f000000;
        *(undefined4 *)(iVar4 + 0x590) = 0x3e4ccccd;
        *(undefined4 *)(iVar4 + 0x580) = 0xbfc90fdb;
        *(undefined4 *)(iVar4 + 0x584) = 0;
        *(undefined4 *)(iVar4 + 0x588) = 0;
        *(undefined4 *)(iVar4 + 0x58c) = local_164;
        local_170 = 0;
        local_16c = 0;
        local_168 = 0x3e800000;
        FUN_00d77c90(&local_170);
        FUN_00a93a00(iVar4,uVar3);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
    }
    uVar8 = 0;
    uVar3 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar3,uVar8);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    if ((*(uint *)(param_1 + 0x1110) & 0x20) != 0) {
      uVar5 = FUN_00fdbc60();
      uVar5 = uVar5 & 0xffff;
      uVar1 = FUN_00fdbc60(uVar5);
      sVar2 = FUN_00dde2d0(uVar1,uVar5);
      *(float *)(param_1 + 0xbc0) = (float)(int)sVar2;
      uVar5 = FUN_00fdbc60();
      uVar5 = uVar5 & 0xffff;
      uVar1 = FUN_00fdbc60(uVar5);
      sVar2 = FUN_00dde2d0(uVar1,uVar5);
      *(float *)(param_1 + 0xbc4) = (float)(int)sVar2;
      uVar5 = FUN_00fdbc60();
      uVar5 = uVar5 & 0xffff;
      uVar1 = FUN_00fdbc60(uVar5);
      sVar2 = FUN_00dde2d0(uVar1,uVar5);
      *(undefined4 *)(param_1 + 0x1118) = 0;
      *(float *)(param_1 + 0xbc8) = (float)(int)sVar2;
      return;
    }
    if ((char)*(uint *)(param_1 + 0x1110) < '\0') {
      sVar2 = FUN_00dde2d0(0,0x168);
      fVar6 = (float10)FUN_00dde300(0,*(undefined4 *)(param_1 + 0xbb0));
      fVar7 = (float10)fcos((float10)((float)(int)sVar2 * 0.017453292));
      *(float *)(param_1 + 0xbc0) = (float)(fVar7 * (fVar6 + (float10)5.0));
      *(undefined4 *)(param_1 + 0xbc4) = 0;
      fVar6 = (float10)FUN_00dde300(0,*(undefined4 *)(param_1 + 3000));
      *(undefined4 *)(param_1 + 0x1118) = 0;
      fVar7 = (float10)fsin((float10)((float)(int)sVar2 * 0.017453292));
      *(float *)(param_1 + 0xbc8) = (float)(-fVar7 * (fVar6 + (float10)5.0));
      return;
    }
    *(undefined4 *)(param_1 + 0xbc0) = 0;
    *(undefined4 *)(param_1 + 0xbc4) = 0;
    *(undefined4 *)(param_1 + 0xbc8) = 0;
    *(undefined4 *)(param_1 + 0xbcc) = local_164;
    *(undefined4 *)(param_1 + 0x1118) = 0;
  }
  return;
}

// 00ADF0A0  FUN_00adf0a0  size=192  [callgraph]
void __fastcall FUN_00adf0a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x3f4ccccd,0x3e99999a,0xffffffff);
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar3);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    FUN_00acb190(0x43c80000,0x3f800000,0xffffffff);
  }
  return;
}

// 00ADF160  FUN_00adf160  size=2559  [callgraph]
void __fastcall FUN_00adf160(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  short sVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfStack_120;
  float *pfStack_11c;
  int *piStack_118;
  float *pfStack_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  float fStack_108;
  int *piStack_104;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int iStack_cc;
  int iStack_c8;
  int aiStack_c4 [4];
  float fStack_b4;
  undefined1 auStack_ac [8];
  int aiStack_a4 [2];
  undefined1 auStack_9c [64];
  undefined1 auStack_5c [12];
  undefined1 local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  if ((DAT_01bea060 & 0x10000) != 0) {
    piStack_104 = (int *)0xadf185;
    FUN_00a805f0();
    return;
  }
  piStack_104 = (int *)0xadf197;
  iVar6 = FUN_00a81330();
  piVar9 = (int *)0x0;
  if (iVar6 != 0) {
    piStack_104 = (int *)0xadf1a4;
    piVar9 = (int *)FUN_00a7c8a0();
  }
  piVar1 = param_1 + 4;
  fStack_108 = 0.0;
  puStack_10c = local_50;
  local_e8 = 0.0;
  puStack_110 = (undefined1 *)0xadf1c1;
  piStack_104 = piVar1;
  D3DXMatrixInverse();
  if (piVar9 == (int *)0x0) {
    puStack_110 = (undefined1 *)0xadf4ad;
    FUN_00a7c950();
  }
  else {
    if (((*(byte *)(param_1 + 0x444) & 0x10) == 0) || (param_1[0x186] == 0)) {
      param_1[0x2d4] = piVar9[0x14];
      param_1[0x2d5] = piVar9[0x15];
      param_1[0x2d6] = piVar9[0x16];
      param_1[0x2d7] = piVar9[0x17];
      puStack_110 = (undefined1 *)(int)(short)param_1[0x2f5];
      pfStack_114 = (float *)0xadf212;
      iVar6 = FUN_00a12210();
      if (((short)param_1[0x2f5] < 0) || (iVar6 == 0)) {
        param_1[0x2d4] = piVar9[0x10];
        param_1[0x2d5] = piVar9[0x11];
        param_1[0x2d6] = piVar9[0x12];
        iVar6 = piVar9[0x13];
      }
      else {
        param_1[0x2d4] = *(int *)(iVar6 + 0x40);
        param_1[0x2d5] = *(int *)(iVar6 + 0x44);
        param_1[0x2d6] = *(int *)(iVar6 + 0x48);
        iVar6 = *(int *)(iVar6 + 0x4c);
      }
      param_1[0x2d7] = iVar6;
      param_1[0x2d4] = (int)((float)param_1[0x2f8] + (float)param_1[0x2d4]);
      param_1[0x2d5] = (int)((float)param_1[0x2f9] + (float)param_1[0x2d5]);
      param_1[0x2d6] = (int)((float)param_1[0x2fa] + (float)param_1[0x2d6]);
      param_1[0x2d7] = (int)((float)param_1[0x2fb] + (float)param_1[0x2d7]);
      if ((*(byte *)(param_1 + 0x444) & 0x40) != 0) {
        puStack_110 = (undefined1 *)0xf;
        pfStack_114 = (float *)0xa;
        piStack_118 = (int *)0xadf2c3;
        sVar5 = FUN_00dde2d0();
        puStack_110 = auStack_ac;
        fStack_f4 = (float)(int)sVar5;
        pfStack_114 = (float *)0xadf2de;
        pfVar7 = (float *)FUN_00a925a0();
        fVar2 = pfVar7[2];
        fVar3 = pfVar7[3];
        param_1[0x2d4] = (int)(*pfVar7 * fStack_f4 + (float)param_1[0x2d4]);
        param_1[0x2d5] = param_1[0x2d5];
        param_1[0x2d6] = (int)(fVar2 * fStack_f4 + (float)param_1[0x2d6]);
        param_1[0x2d7] = (int)(fVar3 * fStack_f4 + (float)param_1[0x2d7]);
      }
      if ((param_1[0x444] & 0x20U) != 0) {
        puStack_110 = (undefined1 *)param_1[0x2ec];
        pfStack_114 = (float *)param_1[0x2e8];
        piStack_118 = (int *)0xadf352;
        fVar10 = (float10)FUN_00dde300();
        fStack_ec = (float)fVar10;
        local_e8 = 0.0;
        puStack_110 = (undefined1 *)param_1[0x2ee];
        pfStack_114 = (float *)param_1[0x2ea];
        piStack_118 = (int *)0xadf37c;
        fVar10 = (float10)FUN_00dde300();
        fStack_e4 = (float)fVar10;
        puStack_110 = (undefined1 *)0xadf38c;
        iVar6 = (**(code **)(*piVar9 + 0x84))();
        puStack_110 = *(undefined1 **)(iVar6 + 4);
        pfStack_114 = (float *)auStack_9c;
        piStack_118 = (int *)0xadf39d;
        D3DXMatrixRotationY();
        piStack_118 = aiStack_a4;
        pfStack_120 = &fStack_f4;
        pfStack_11c = pfStack_120;
        D3DXVec3TransformNormal();
        fStack_f4 = 1.4013e-45;
        param_1[0x2d4] = (int)(fStack_ec + (float)param_1[0x2d4]);
        param_1[0x2d5] = (int)((float)param_1[0x2d5] + local_e8);
        param_1[0x2d6] = (int)((float)param_1[0x2d6] + fStack_e4);
        param_1[0x2d7] = (int)(fStack_e0 + (float)param_1[0x2d7]);
        goto LAB_00adf4ad;
      }
      if ((char)param_1[0x444] < '\0') {
        puStack_110 = (undefined1 *)0x168;
        pfStack_114 = (float *)0x0;
        piStack_118 = (int *)0xadf415;
        sVar5 = FUN_00dde2d0();
        fStack_f4 = (float)(int)sVar5;
        fStack_f0 = (float)(int)fStack_f4 * 0.017453292;
        puStack_110 = (undefined1 *)param_1[0x2ec];
        pfStack_114 = (float *)0x0;
        piStack_118 = (int *)0xadf446;
        fVar10 = (float10)FUN_00dde300();
        fVar11 = (float10)fcos((float10)fStack_f0);
        param_1[0x2d4] =
             (int)(float)(fVar11 * (fVar10 + (float10)5.0) + (float10)(float)param_1[0x2d4]);
        puStack_110 = (undefined1 *)param_1[0x2ee];
        pfStack_114 = (float *)0x0;
        piStack_118 = (int *)0xadf47c;
        fVar10 = (float10)FUN_00dde300();
        fVar11 = (float10)fsin((float10)fStack_f0);
        param_1[0x2d6] =
             (int)(float)(-fVar11 * (fVar10 + (float10)5.0) + (float10)(float)param_1[0x2d6]);
      }
    }
    fStack_f4 = 1.4013e-45;
  }
LAB_00adf4ad:
  puStack_110 = auStack_5c;
  pfVar7 = (float *)(param_1 + 0x2d4);
  piStack_118 = &iStack_cc;
  pfStack_11c = (float *)0xadf4c6;
  pfStack_114 = pfVar7;
  D3DXVec3TransformNormal();
  fStack_d8 = fStack_d8 + fStack_38;
  fStack_d4 = fStack_d4 + fStack_34;
  fStack_d0 = fStack_30 + fStack_d0;
  pfStack_11c = (float *)0xadf4fc;
  fVar10 = (float10)(**(code **)(*param_1 + 0x24))();
  piStack_104 = (int *)(float)fVar10;
  pfStack_11c = (float *)0xadf505;
  piVar9 = (int *)FUN_00c13920();
  pfStack_11c = (float *)0x0;
  pfStack_120 = (float *)0xadf510;
  iVar6 = (**(code **)(*piVar9 + 0x28))();
  if (iVar6 != 0) {
    pfStack_120 = (float *)0xadf51b;
    piVar9 = (int *)FUN_00a7c8a0();
    if (piVar9 != (int *)0x0) {
      pfStack_120 = (float *)0xadf52b;
      iVar6 = (**(code **)(*piVar9 + 0x32c))();
      if (iVar6 != 0) {
        fStack_108 = fStack_108 * 0.5;
      }
    }
  }
  pfStack_120 = (float *)0xadf542;
  piVar9 = (int *)FUN_00c13920();
  pfStack_120 = (float *)0x0;
  iVar6 = (**(code **)(*piVar9 + 0x28))();
  if (((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) && (iVar6 = FUN_00b7e570(), iVar6 != 0)
     ) {
    puStack_10c = (undefined1 *)((float)puStack_10c * 0.1);
  }
  piStack_104 = (int *)0x0;
  iVar6 = FUN_00a84000(param_1,0xffffffff);
  if ((iVar6 == 0) && ((DAT_01bea060 & 0x20000) != 0)) {
    piStack_104 = (int *)0x1;
  }
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x40e00000;
    param_1[0x186] = 1;
    FUN_00adf0a0();
  case 1:
    fStack_f0 = 0.0;
    pfVar7 = &fStack_f0;
    local_e8 = (float)param_1[0x2e4] * (float)puStack_10c;
    fStack_ec = local_e8 * 0.01;
    D3DXVec3TransformNormal(pfVar7,pfVar7,piVar1);
    puVar4 = puStack_110;
    fVar2 = (float)piStack_118 * 0.02 + (float)param_1[0x2e4];
    param_1[0x2e4] = (int)fVar2;
    if (!NAN(fVar2) && 0.3 < fVar2 != (fVar2 == 0.3)) {
      param_1[0x2e4] = 0x3e99999a;
    }
    if (puStack_110 != (undefined1 *)0x0) {
      param_1[0x2e4] = (int)((float)param_1[0x2e4] * 1.5);
    }
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)(unaff_ESI + (float)param_1[0x14]);
    param_1[0x15] = (int)(unaff_EBX + (float)param_1[0x15]);
    param_1[0x16] = (int)(fStack_f4 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_f0 + (float)param_1[0x17]);
    D3DXMatrixRotationZ(aiStack_c4 + 2,(float)piStack_118 * 0.13962634);
    D3DXMatrixMultiply(piVar1,aiStack_c4,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)pfVar7);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar2 - (float)pfVar7);
    if (fVar2 - (float)pfVar7 < 0.0) {
      param_1[0x186] = 2;
    }
    fStack_f0 = (float)param_1[0x244];
    fStack_ec = (float)param_1[0x245];
    local_e8 = (float)param_1[0x246];
    fStack_e4 = (float)param_1[0x247];
    pfStack_120 = (float *)((float)param_1[0x14] - fStack_f0);
    pfStack_11c = (float *)((float)param_1[0x15] - fStack_ec);
    piStack_118 = (int *)((float)param_1[0x16] - local_e8);
    pfStack_114 = (float *)((float)param_1[0x17] - fStack_e4);
    puVar8 = (undefined4 *)FUN_009f8b60();
    if (puVar4 != (undefined1 *)0x0) {
      FUN_00acb360(&fStack_f0,0x3e19999a,&pfStack_120,*puVar8);
      return;
    }
    FUN_00acb320(&fStack_f0,0x3e19999a,&pfStack_120,*puVar8);
    return;
  case 2:
    fStack_f0 = 0.0;
    pfVar12 = &fStack_f0;
    fStack_ec = (float)puStack_10c * 0.01 * (float)param_1[0x2e4];
    local_e8 = (float)puStack_10c * (float)param_1[0x2e4];
    pfVar13 = pfVar12;
    piVar9 = piVar1;
    D3DXVec3TransformNormal();
    fVar10 = (float10)FUN_00fdc1f0();
    fVar10 = ((float10)0.04 * (float10)(float)piStack_118 + (float10)(float)param_1[0x2e4]) * fVar10
    ;
    param_1[0x2e4] = (int)(float)fVar10;
    if (puStack_110 != (undefined1 *)0x0) {
      param_1[0x2e4] = (int)(float)(fVar10 * (float10)1.5);
    }
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)(unaff_ESI + (float)param_1[0x14]);
    param_1[0x15] = (int)(unaff_EBX + (float)param_1[0x15]);
    param_1[0x16] = (int)(fStack_f4 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_f0 + (float)param_1[0x17]);
    D3DXMatrixRotationZ(aiStack_c4 + 2,(float)((float10)(float)piStack_118 * (float10)0.13962634));
    D3DXMatrixMultiply(piVar1,aiStack_c4,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    if (param_1[0x445] != 0) {
      fVar2 = (SQRT(unaff_EBX * unaff_EBX + unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI) + 1.0) *
              0.14285715;
      fStack_e0 = 2.0;
      if ((NAN(fVar2) || 2.0 < fVar2 == (fVar2 == 2.0)) && (fStack_e0 = fVar2, fVar2 <= 0.2)) {
        fStack_e0 = 0.2;
      }
      fStack_dc = fStack_e0;
      fStack_d8 = fStack_e0;
      FUN_00a7cf90(&fStack_e0);
    }
    if ((pfVar13 != (float *)0x0) &&
       (((4.0 <= unaff_EBX * unaff_EBX + unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI ||
         (!NAN(unaff_EBX) && 1.0 < unaff_EBX != (unaff_EBX == 1.0))) ||
        (unaff_EBX < -1.0 != (unaff_EBX == -1.0))))) {
      FUN_00acc460(pfVar7,&puStack_110,0x3dcccccd,(float)pfVar12 * 0.027925268,1);
    }
    fVar2 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar2 - (float)pfVar12);
    if (fVar2 - (float)pfVar12 < 0.0) {
      param_1[0x186] = 3;
      return;
    }
    fStack_f0 = (float)param_1[0x244];
    fStack_ec = (float)param_1[0x245];
    local_e8 = (float)param_1[0x246];
    fStack_e4 = (float)param_1[0x247];
    pfStack_120 = (float *)((float)param_1[0x14] - fStack_f0);
    pfStack_11c = (float *)((float)param_1[0x15] - fStack_ec);
    piStack_118 = (int *)((float)param_1[0x16] - local_e8);
    pfStack_114 = (float *)((float)param_1[0x17] - fStack_e4);
    puVar8 = (undefined4 *)FUN_009f8b60();
    if (piVar9 == (int *)0x0) {
      FUN_00acb320(&fStack_f0,0x3e19999a,&pfStack_120,*puVar8);
    }
    else {
      FUN_00acb360(&fStack_f0,0x3e19999a,&pfStack_120,*puVar8);
    }
    iVar6 = FUN_00416910(0xe);
    if (iVar6 == 0) {
      return;
    }
    if ((0.5 <= SQRT((*pfVar7 - (float)param_1[0x14]) * (*pfVar7 - (float)param_1[0x14]) +
                     ((float)param_1[0x2d5] - (float)param_1[0x15]) *
                     ((float)param_1[0x2d5] - (float)param_1[0x15]) +
                     ((float)param_1[0x2d6] - (float)param_1[0x16]) *
                     ((float)param_1[0x2d6] - (float)param_1[0x16]))) &&
       ((float)param_1[0x2d5] <= (float)param_1[0x15])) {
      return;
    }
    param_1[0x14] = (int)*pfVar7;
    param_1[0x15] = param_1[0x2d5];
    param_1[0x16] = param_1[0x2d6];
    param_1[0x17] = param_1[0x2d7];
    FUN_00acc2f0(0x43340000,0);
    FUN_00c76f00();
    fStack_d0 = *pfVar7;
    aiStack_a4[0] = param_1[0x239];
    iStack_cc = param_1[0x2d5];
    iStack_c8 = param_1[0x2d6];
    aiStack_c4[0] = param_1[0x2d7];
    aiStack_c4[1] = 0;
    aiStack_c4[2] = 0x3f800000;
    aiStack_c4[3] = 0;
    fStack_b4 = fStack_d4;
    (**(code **)(*param_1 + 0x318))(&fStack_d0);
    FUN_00accf70();
    param_1[0x186] = 3;
switchD_00adf5af_caseD_3:
    FUN_00acc0a0();
    param_1[0x139] = 1;
    param_1[0x3c4] = 1;
    return;
  case 3:
    goto switchD_00adf5af_caseD_3;
  default:
    return;
  }
}

// 00ADFB70  FUN_00adfb70  size=179  [callgraph]
void __fastcall FUN_00adfb70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  uVar1 = CollisionAttackData::CollisionAttackData(param_1 + 0x940);
  iVar2 = CollisionCapsule::CollisionCapsule(0xc,*(undefined4 *)(param_1 + 0xb9c),uVar1);
  if (iVar2 != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    FUN_00acb020(iVar2,0x3f4ccccd,0x3e99999a,0xffffffff);
    uVar3 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(0,uVar1,uVar3);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(float *)(param_1 + 0xb90) = *(float *)(param_1 + 0xb90) * 1.3;
  }
  return;
}

// 00ADFC30  FUN_00adfc30  size=682  [callgraph]
void __fastcall FUN_00adfc30(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  float fStack_e4;
  float fStack_e0;
  undefined1 *puStack_dc;
  float fStack_d8;
  int *piStack_d4;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [96];
  undefined1 local_50 [76];
  
  piVar4 = param_1 + 4;
  fStack_d8 = 0.0;
  puStack_dc = local_50;
  fStack_e0 = 1.5978058e-38;
  piStack_d4 = piVar4;
  D3DXMatrixInverse();
  fStack_e0 = 1.597807e-38;
  (**(code **)(*param_1 + 0x24))();
  fStack_e0 = 1.5978083e-38;
  piVar2 = (int *)FUN_00c13920();
  fStack_e0 = 0.0;
  fStack_e4 = 1.5978098e-38;
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (iVar3 != 0) {
    fStack_e4 = 1.5978114e-38;
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      fStack_e4 = 1.5978136e-38;
      iVar3 = (**(code **)(*piVar2 + 0x32c))();
      if (iVar3 != 0) {
        piStack_d4 = (int *)((float)piStack_d4 * 0.5);
      }
    }
  }
  fStack_e4 = 1.5978168e-38;
  piVar2 = (int *)FUN_00c13920();
  fStack_e4 = 0.0;
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (iVar3 = FUN_00b7e570(), iVar3 != 0)
     ) {
    fStack_d8 = fStack_d8 * 0.1;
  }
  iVar3 = param_1[0x186];
  if (iVar3 == 0) {
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x40400000;
    param_1[0x186] = 1;
    FUN_00adfb70();
  }
  else if (iVar3 != 1) {
    if (iVar3 != 3) {
      return;
    }
    FUN_00acc0a0();
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  }
  piStack_d4 = (int *)0x0;
  D3DXVec3TransformNormal(&piStack_d4,&piStack_d4,piVar4);
  fVar1 = fStack_e4 * 0.015 + (float)param_1[0x2e4];
  param_1[0x2e4] = (int)fVar1;
  if (!NAN(fVar1) && 0.4 < fVar1 != (fVar1 == 0.4)) {
    param_1[0x2e4] = 0x3ecccccd;
  }
  param_1[0x244] = param_1[0x14];
  puVar5 = auStack_b0;
  param_1[0x245] = param_1[0x15];
  param_1[0x246] = param_1[0x16];
  param_1[0x247] = param_1[0x17];
  param_1[0x14] = (int)((float)param_1[0x14] + fStack_e0);
  param_1[0x15] = (int)((float)param_1[0x15] + (float)puStack_dc);
  param_1[0x16] = (int)((float)param_1[0x16] + fStack_d8);
  param_1[0x17] = (int)((float)piStack_d4 + (float)param_1[0x17]);
  D3DXMatrixRotationZ(puVar5,fStack_e4 * 0.13962634);
  D3DXMatrixMultiply(piVar4,auStack_b8,piVar4);
  param_1[0x10] = param_1[0x14];
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)puVar5);
  fVar1 = (float)param_1[0x360];
  param_1[0x360] = (int)(fVar1 - (float)puVar5);
  if (fVar1 - (float)puVar5 < 0.0) {
    param_1[0x360] = 0;
  }
  piStack_d4 = (int *)param_1[0x244];
  fStack_e4 = (float)param_1[0x14] - (float)piStack_d4;
  fStack_e0 = (float)param_1[0x15] - (float)param_1[0x245];
  puStack_dc = (undefined1 *)((float)param_1[0x16] - (float)param_1[0x246]);
  fStack_d8 = (float)param_1[0x17] - (float)param_1[0x247];
  piVar4 = (int *)FUN_009f8b60();
  FUN_0090fa30(param_1 + 0x449,0,&piStack_d4,0x3e19999a,&fStack_e4,*piVar4 << 0x10 | 5,"Bullet");
  return;
}

// 00ADFEE0  FUN_00adfee0  size=613  [callgraph]
void __fastcall FUN_00adfee0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int *piStack_204;
  int iStack_1f0;
  undefined1 auStack_1ec [40];
  undefined1 auStack_1c4 [8];
  undefined1 auStack_1bc [80];
  undefined1 auStack_16c [360];
  
  piStack_204 = (int *)0x1;
  uStack_208 = 2;
  uStack_20c = 0xadfefa;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>();
  uStack_208 = 0xadff06;
  piStack_204 = (int *)(param_1 + 0x940);
  uStack_208 = CollisionAttackData::CollisionAttackData();
  uStack_20c = *(undefined4 *)(param_1 + 0xb9c);
  puStack_210 = (undefined1 *)0xc;
  piVar2 = (int *)CollisionCapsule::CollisionCapsule();
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x20);
    piVar2[0xe0] = *(int *)(param_1 + 0x940);
    piVar2[0xe3] = 1;
    uStack_208 = *(undefined4 *)(param_1 + 0xb9c);
    piStack_204 = (int *)0x0;
    uStack_20c = 0x1e;
    puStack_210 = (undefined1 *)0xadff48;
    (*pcVar1)();
    puStack_210 = (undefined1 *)0xffffffff;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0));
    piVar2[0x165] = 0x3f4ccccd;
    puStack_210 = &stack0xfffffe04;
    piVar2[0x164] = 0x3e99999a;
    piVar2[0x160] = -0x4036f025;
    piVar2[0x161] = 0;
    piVar2[0x162] = 0;
    piVar2[0x163] = iStack_1f0;
    FUN_00d77c90();
    puStack_210 = *(undefined1 **)(param_1 + 0x760);
    FUN_00a8c370(piVar2);
    puStack_210 = (undefined1 *)0xadffc8;
    FUN_00d7b0f0();
    puStack_210 = (undefined1 *)0xadffcf;
    FUN_00d7b890();
    puStack_210 = (undefined1 *)0xadffd6;
    puVar3 = (undefined1 *)FUN_00a8d2a0();
    puStack_210 = (undefined1 *)0x0;
    iVar4 = CollisionCapsule::CollisionCapsule(2,*(undefined4 *)(param_1 + 0xb9c));
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x380) = 0;
      puStack_210 = (undefined1 *)0xffffffff;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0));
      *(undefined4 *)(iVar4 + 0x594) = 0x3f4ccccd;
      puStack_210 = &stack0xfffffe04;
      *(undefined4 *)(iVar4 + 0x590) = 0x3e99999a;
      *(undefined4 *)(iVar4 + 0x580) = 0xbfc90fdb;
      *(undefined4 *)(iVar4 + 0x584) = 0;
      *(undefined4 *)(iVar4 + 0x588) = 0;
      *(int *)(iVar4 + 0x58c) = iStack_1f0;
      FUN_00d77c90();
      puStack_210 = puVar3;
      FUN_00a93a00(iVar4);
      puStack_210 = (undefined1 *)0xae0079;
      FUN_00d7b0f0();
      puStack_210 = (undefined1 *)0xae0080;
      FUN_00d7b890();
    }
    puStack_210 = (undefined1 *)0x0;
    uVar5 = FUN_00a7c8a0();
    FUN_004039a0(0,uVar5);
    puStack_210 = auStack_16c;
    FUN_00a963e0();
    puStack_210 = (undefined1 *)0xffffffff;
    FUN_00acb190(0x43c80000,0x3f800000);
    *(undefined4 *)(param_1 + 0x70) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x78) = 0x3fc00000;
    puStack_210 = *(undefined1 **)(param_1 + 0x78);
    D3DXMatrixScaling(auStack_1ec,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    D3DXMatrixRotationZ(auStack_1bc,0x3fc90fdb);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    D3DXMatrixMultiply(&piStack_204,&piStack_204,auStack_1c4);
    D3DXMatrixMultiply(param_1 + 0x10,&puStack_210,param_1 + 0x10);
    *(float *)(param_1 + 0x78) = 1.0 / *(float *)(param_1 + 0x78);
  }
  return;
}

// 00AE0150  FUN_00ae0150  size=1240  [callgraph]
void __fastcall FUN_00ae0150(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  float *pfVar7;
  float unaff_EDI;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  float fStack_a8;
  float fStack_a4;
  float afStack_88 [7];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [12];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_2c;
  
  fStack_a4 = 0.0;
  fStack_a8 = 1.4013e-45;
  iVar3 = (**(code **)(*param_1 + 0x308))();
  if (iVar3 != 0) {
    FUN_00acc0a0();
    return;
  }
  fVar8 = (float10)(**(code **)(*param_1 + 0x24))();
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_00adfee0();
  case 1:
    piVar1 = param_1 + 4;
    D3DXVec3TransformNormal(&stack0xffffff68,&stack0xffffff68,piVar1);
    fVar2 = (float)param_1[0x1e];
    fStack_a4 = fStack_a4 * fVar2;
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_a4);
    param_1[0x15] = (int)(unaff_EDI * fVar2 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)fVar8 * fVar2);
    param_1[0x17] = (int)(fVar2 * 0.0 + (float)param_1[0x17]);
    fVar8 = (float10)FUN_00fdc1f0();
    puVar13 = auStack_64;
    param_1[0x2e4] = (int)(float)(fVar8 * (float10)(float)param_1[0x2e4]);
    D3DXMatrixRotationZ(puVar13,(float)param_1[0x3c8] * 0.5235988);
    D3DXMatrixMultiply(piVar1,auStack_6c,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)puVar13);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar2 - (float)puVar13);
    if (fVar2 - (float)puVar13 < 0.0) {
      param_1[0x186] = 2;
      iVar3 = FUN_00a93530(0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x510) = 0x3e4ccccd;
      }
    }
    fStack_a8 = (float)param_1[0x14] - (float)param_1[0x244];
    fStack_a4 = (float)param_1[0x15] - (float)param_1[0x245];
    uVar6 = FUN_009f8b40();
    FUN_00acb320(&stack0xffffff68,0x3f000000,&fStack_a8,uVar6);
    afStack_88[0] = 0.0;
    pfVar4 = &fStack_a8;
    pfVar7 = afStack_88;
    afStack_88[2] = 2.0;
    fStack_a8 = -1.5707964;
    break;
  case 2:
    piVar1 = param_1 + 4;
    D3DXVec3TransformNormal(&stack0xffffff68,&stack0xffffff68,piVar1);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_a4);
    param_1[0x15] = (int)((float)param_1[0x15] + unaff_EDI);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)fVar8);
    param_1[0x17] = (int)((float)param_1[0x17] + 0.0);
    fVar8 = (float10)FUN_00fdc1f0();
    puVar13 = auStack_64;
    param_1[0x2e4] = (int)(float)(fVar8 * (float10)(float)param_1[0x2e4]);
    D3DXMatrixRotationZ(puVar13,(float)param_1[0x3c8] * 0.5235988);
    D3DXMatrixMultiply(piVar1,auStack_6c,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar2 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar2 - (float)puVar13);
    if (fVar2 - (float)puVar13 < 0.0) {
      param_1[0x186] = 3;
      return;
    }
    fStack_a8 = (float)param_1[0x14] - (float)param_1[0x244];
    fStack_a4 = (float)param_1[0x15] - (float)param_1[0x245];
    uVar6 = FUN_009f8b40();
    FUN_00acb320(&stack0xffffff68,0x3f000000,&fStack_a8,uVar6);
    fStack_a8 = 0.0;
    pfVar4 = afStack_88;
    pfVar7 = &fStack_a8;
    afStack_88[0] = -1.5707964;
    afStack_88[2] = 0.0;
    break;
  case 3:
    FUN_00c76f00();
    iStack_58 = param_1[0x14];
    iStack_2c = param_1[0x239];
    iStack_54 = param_1[0x15];
    iStack_50 = param_1[0x16];
    iStack_4c = param_1[0x17];
    iStack_48 = param_1[0x24];
    iStack_44 = param_1[0x25];
    iStack_40 = param_1[0x26];
    iStack_3c = param_1[0x27];
    (**(code **)(*param_1 + 0x318))(&iStack_58);
    param_1[0x186] = param_1[0x186] + 1;
    goto LAB_00ae05f7;
  case 4:
LAB_00ae05f7:
    param_1[0x2fc] = 0x3f800000;
    FUN_00acc2f0(0x3f800000,0);
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  afStack_88[1] = 0.0;
  fStack_a4 = 0.0;
  uVar12 = 1;
  uVar11 = 0x40400000;
  uVar10 = 0x3f19999a;
  uVar9 = 0xffffffff;
  uVar5 = FUN_00a7c7f0(0xffffffff,pfVar7,pfVar4,0x3f19999a,0x40400000,1);
  uVar6 = extraout_ECX;
  FUN_00a7c940(uVar5);
  FUN_00c630c0(uVar6,uVar9,pfVar7,pfVar4,uVar10,uVar11,uVar12);
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
      iVar2 = RigidBodyCollision::RigidBodyCollision();
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
      hkpAllCdPointCollector::hkpAllCdPointCollector();
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
      hkpCdPointCollector::hkpCdPointCollector();
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
      hkpCdPointCollector::hkpCdPointCollector();
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

