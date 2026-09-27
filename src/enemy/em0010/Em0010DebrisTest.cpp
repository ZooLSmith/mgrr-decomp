// src/enemy/em0010/Em0010DebrisTest.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E4160..00AA1660, 16 functions

#include "mgrr.h"
#include "Em0010DebrisTest.h"

// 005E4160  Em0010DebrisTest::Em0010DebrisTest_2  size=50  [class]
void __fastcall Em0010DebrisTest::Em0010DebrisTest_2(undefined4 *param_1)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  return;
}

// 005E41A0  Em0010DebrisTest::vf04  size=6  [class]
undefined * Em0010DebrisTest::vf04(void)

{
  return &DAT_01b35364;
}

// 005E41B0  Em0010DebrisTest::vf40  size=39  [class]
undefined4 __fastcall Em0010DebrisTest::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0xa78) = *(uint *)(param_1 + 0xa78) | 0x80000000;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  return 1;
}

// 005E41E0  Em0010DebrisTest::vf44  size=5  [class]
void __fastcall Em0010DebrisTest::vf44(int param_1)

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

// 005E4280  FUN_005e4280  size=81  [callgraph]
void __fastcall FUN_005e4280(int param_1)

{
  int iVar1;
  
  FUN_00a8c820();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00900ca0();
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 005E4550  FUN_005e4550  size=24  [callgraph]
void __fastcall FUN_005e4550(int *param_1)

{
  Bh0064::vf20();
  (**(code **)(*param_1 + 200))(0);
  return;
}

// 005E4570  FUN_005e4570  size=24  [callgraph]
void __fastcall FUN_005e4570(int *param_1)

{
  Bh0064::vf1C();
  (**(code **)(*param_1 + 200))(1);
  return;
}

// 005E4590  FUN_005e4590  size=28  [callgraph]
void FUN_005e4590(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 005E45D0  FUN_005e45d0  size=42  [callgraph]
uint FUN_005e45d0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c58;
  (**(code **)(*param_1 + 4))(&DAT_01be9c58);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 005E4DE0  Em0010DebrisTest::Em0010DebrisTest  size=83  [class]
undefined4 * __fastcall Em0010DebrisTest::Em0010DebrisTest(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[0x2a1] = 0;
  cEspControler::cEspControler();
  param_1[0x29f] = 0;
  param_1[0x29e] = 0;
  FUN_00a7c950();
  return param_1;
}

// 005E4E40  Em0010DebrisTest::vf00  size=71  [class]
undefined4 * __thiscall Em0010DebrisTest::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005E4E90  Em0010DebrisTest::vf4C  size=71  [class]
void __fastcall Em0010DebrisTest::vf4C(int param_1)

{
  float10 fVar1;
  
  BehaviorBgBase::vf4C();
  if ((*(uint *)(param_1 + 0xa78) & 0x4000000) != 0) {
    FUN_00a92fb0();
    fVar1 = (float10)FUN_00e049b0();
    fVar1 = (float10)*(float *)(param_1 + 0xa70) - fVar1;
    *(float *)(param_1 + 0xa70) = (float)fVar1;
    if (fVar1 < (float10)0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 005E4EE0  Em0010DebrisTest::vf50  size=63  [class]
void __fastcall Em0010DebrisTest::vf50(int param_1)

{
  FUN_00a93170();
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0xb28) == 0)) {
    if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
    }
    *(undefined4 *)(param_1 + 0xa84) = 0;
  }
  BehaviorBgBase::vf50();
  return;
}

// 005E6080  Em0010DebrisTest::vf48  size=519  [class]
void __fastcall Em0010DebrisTest::vf48(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_90 [80];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((param_1[0x29e] & 0x4000000U) != 0) {
    return;
  }
  BehaviorBgBase::vf48();
  if ((param_1[0x29e] & 0x8000000U) == 0) {
    return;
  }
  param_1[0x29e] = param_1[0x29e] & 0xf7ffffff;
  param_1[0x29e] = param_1[0x29e] | 0x4000000;
  piVar1 = (int *)FUN_00a7c800();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))();
  }
  iVar2 = FUN_00e01c40(param_1,10);
  if (iVar2 != 0) {
    FUN_00e02cd0(param_1,10);
    param_1[0x29c] = 0x43700000;
  }
  iVar2 = param_1[300];
  if (iVar2 == 0x110eb000) {
    uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff,0);
    pcVar5 = "Play_HAKO_bhb000_se_Break00";
  }
  else if (iVar2 == 0x110eb001) {
    uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff,0);
    pcVar5 = "Play_HAKO_bhb001_se_Break00";
  }
  else if (iVar2 == 0x110eb002) {
    uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff,0);
    pcVar5 = "Play_HAKO_bhb002_se_Break00";
  }
  else if (iVar2 == 0x110eb003) {
    uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff,0);
    pcVar5 = "Play_HAKO_bhb003_se_Break00";
  }
  else {
    if (iVar2 != 0x110eb004) goto LAB_005e61a8;
    uVar3 = (**(code **)(*param_1 + 0x68))(0,0xffffffff,0);
    pcVar5 = "Play_HAKO_bhb004_se_Break00";
  }
  FUN_00e5e080(pcVar5,uVar3);
LAB_005e61a8:
  if ((param_1[0x29e] & 0x20000000U) != 0) {
    FUN_0040b190();
    puVar4 = (undefined4 *)FUN_00a7c8b0();
    uStack_40 = *puVar4;
    uStack_3c = puVar4[1];
    uStack_38 = puVar4[2];
    puVar4 = (undefined4 *)FUN_00a7c8d0();
    uStack_34 = *puVar4;
    uStack_30 = puVar4[1];
    uStack_2c = puVar4[2];
    puVar4 = (undefined4 *)FUN_00a7c8f0();
    uStack_28 = *puVar4;
    uStack_24 = puVar4[1];
    uStack_20 = puVar4[2];
    FUN_00a82090(0,param_1[0x2a0],auStack_90);
  }
  if (param_1[300] == 0x110e0110) {
    uVar6 = 0x447a0000;
    uVar3 = (**(code **)(*param_1 + 0x68))(0x447a0000);
    iVar2 = FUN_00a7f660(0x110f0127,uVar3,uVar6);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c800();
      (**(code **)(*piVar1 + 0x1c))();
      uVar3 = FUN_00a7c8a0();
      FUN_005e45d0(uVar3);
    }
  }
  return;
}

// 005E6290  Em0010DebrisTest::vf34  size=394  [class]
void __fastcall Em0010DebrisTest::vf34(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 local_160 [348];
  
  FUN_004117d0(10,param_1,param_1 + 0x2a4);
  FUN_00a963e0(local_160);
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = 100;
      *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = 500;
      **(undefined4 **)(iVar2 + 8) = 4;
      *(undefined4 *)(*(int *)(iVar2 + 8) + 0x30) = 0;
      puVar3 = *(undefined4 **)(iVar2 + 8);
      *puVar3 = 0x18a;
      puVar3[1] = 0x32;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[2] = 0;
      *(undefined1 *)(*(int *)(iVar2 + 8) + 0x11) = 7;
      *(undefined4 *)(iVar2 + 4) = 1;
      puVar3 = (undefined4 *)FUN_009f8b60();
      piVar4 = (int *)FUN_00602cb0(5,*puVar3,iVar2);
      if (piVar4 != (int *)0x0) {
        iVar2 = *piVar4;
        uVar5 = (**(code **)(*param_1 + 0x68))();
        (**(code **)(iVar2 + 0x6c))(uVar5);
        piVar1 = (int *)piVar4[0x21c];
        piVar4[0x21d] = 0x3fd55555;
        puVar3 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar3,0);
        piVar6 = (int *)FUN_00d773c0();
        (**(code **)(*piVar6 + 8))(piVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar4[0x13c],0xffffffff);
        piVar1[0x144] = 0x3dcccccd;
        FUN_00d77580(0x3dcccccd,0x40800000,0x3e800000);
        piVar1[0xe0] = 0x18a;
        FUN_00d7b890();
      }
    }
  }
  (**(code **)(*param_1 + 0x20))();
  param_1[0x2a1] = 1;
  return;
}

// 00AA1660  Em0010DebrisTest::vf54  size=95  [class]
void __fastcall Em0010DebrisTest::vf54(int param_1)

{
  Behavior::vf54();
  if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x8a0) != 0)) {
    if (*(int *)(param_1 + 0x8a8) == 0) {
      if (*(int *)(param_1 + 0x7b4) != 0) {
        FUN_0091e980(param_1);
      }
      if (*(int *)(param_1 + 0x7b0) != 0) {
        FUN_008f7700(param_1);
      }
    }
    if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b0) != 0)) {
      FUN_00a17aa0();
      return;
    }
  }
  return;
}

