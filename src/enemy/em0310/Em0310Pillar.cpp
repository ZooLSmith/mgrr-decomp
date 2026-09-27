// src/enemy/em0310/Em0310Pillar.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E240..00AB7180, 9 functions

#include "types.h"

// 0057E240  Em0310Pillar::vf40  size=253  [class]
undefined4 __fastcall Em0310Pillar::vf40(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar3 = BehaviorBgBase::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  uVar15 = 0x3f800000;
  iVar3 = 0;
  uVar14 = 0xbf800000;
  uVar13 = 0;
  uVar12 = 0x3f800000;
  uVar11 = 0;
  uVar10 = 0;
  puVar9 = &DAT_0163b5f4;
  FUN_00a92f90(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00e3ff90(puVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  *(undefined4 *)(param_1 + 0xa74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar7) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pcVar6 = "poleattack";
        do {
          bVar2 = *pbVar4;
          bVar8 = bVar2 < (byte)*pcVar6;
          if (bVar2 != *pcVar6) {
LAB_0057e320:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0057e325;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar8 = bVar2 < (byte)pcVar6[1];
          if (bVar2 != pcVar6[1]) goto LAB_0057e320;
          pbVar4 = pbVar4 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_0057e325:
        if (iVar5 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + iVar7 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  return 1;
}

// 0057E350  Em0310Pillar::vf44  size=5  [class]
void __fastcall Em0310Pillar::vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 0057E360  Em0310Pillar::vf54  size=43  [class]
void __fastcall Em0310Pillar::vf54(int param_1)

{
  Em0010DebrisTest::vf54();
  if ((*(int *)(param_1 + 0xa70) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 00585CD0  Em0310Pillar::vf4C  size=283  [class]
void __fastcall Em0310Pillar::vf4C(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00a92ff0();
  BehaviorBgBase::vf4C();
  if (*(int *)(param_1 + 0xa70) == 0) {
    Bh0064::vf64();
  }
  if ((*(byte *)(param_1 + 0x4c8) & 2) == 0) {
    if (((*(int *)(param_1 + 0xa70) != 0) || (*(float *)(param_1 + 0xa74) < 1.0)) &&
       (fVar1 = *(float *)(param_1 + 0xa78) - (float)fVar4, *(float *)(param_1 + 0xa78) = fVar1,
       fVar1 <= 0.0)) {
      iVar3 = 0;
      iVar2 = 0;
      fVar1 = *(float *)(param_1 + 0xa74) - (float)fVar4 * 0.01;
      *(float *)(param_1 + 0xa74) = fVar1;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(float *)(iVar3 + 0x1c + *(int *)(param_1 + 800)) = fVar1;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      if (*(float *)(param_1 + 0xa74) <= 0.8) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
      }
      if (*(float *)(param_1 + 0xa74) <= 0.0) {
        *(undefined4 *)(param_1 + 0xa74) = 0;
        FUN_00a805f0();
      }
    }
    if ((*(int *)(param_1 + 0x4e4) != 0) && (*(int *)(param_1 + 0xb18) == 0)) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00585E60  Em0310Pillar::vf1D0  size=85  [class]
void Em0310Pillar::vf1D0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35140;
    (**(code **)(*piVar2 + 4))(&DAT_01b35140);
    iVar1 = FUN_00dd6d70(puVar3);
    if ((iVar1 != 0) && (iVar1 = FUN_00ac8350(), iVar1 == 0)) {
      return;
    }
  }
  Bh0056::vf1D0(param_1);
  return;
}

// 00590FA0  Em0310Pillar::vf30  size=64  [class]
void Em0310Pillar::vf30(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35140;
    (**(code **)(*piVar2 + 4))(&DAT_01b35140);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_00590410();
      return;
    }
  }
  return;
}

// 00AA64B0  Em0310Pillar::Em0310Pillar  size=40  [class]
undefined4 * __fastcall Em0310Pillar::Em0310Pillar(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  FUN_00a7c930();
  cEspControler::cEspControler();
  return param_1;
}

// 00AA64E0  Em0310Pillar::vf04  size=6  [class]
undefined * Em0310Pillar::vf04(void)

{
  return &DAT_01b35148;
}

// 00AB7180  Em0310Pillar::vf00  size=43  [class]
undefined4 __thiscall Em0310Pillar::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

