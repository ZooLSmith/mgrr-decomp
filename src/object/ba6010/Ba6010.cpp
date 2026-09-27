// src/object/ba6010/Ba6010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00602E20..00ABA950, 14 functions

#include "mgrr.h"
#include "Ba6010.h"

// 00602E20  Ba6010::vf1C  size=16  [class]
void Ba6010::vf1C(void)

{
  Bh0056::vf1C();
  FUN_00a93820();
  return;
}

// 00602E30  Ba6010::vf20  size=16  [class]
void Ba6010::vf20(void)

{
  Bh0056::vf20();
  FUN_00a937e0();
  return;
}

// 00602E40  Ba6010::vfFC  size=18  [class]
void __fastcall Ba6010::vfFC(int *param_1)

{
  Bh0064::vfFC();
                    /* WARNING: Could not recover jumptable at 0x00602e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00602E60  FUN_00602e60  size=159  [between]
void __thiscall FUN_00602e60(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x324) < 1) {
    FUN_00dd5650(&DAT_0164524c);
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 800) + 0x1c);
  }
  if (fVar1 <= param_2) {
    if (fVar1 < param_2) {
      fVar1 = fVar1 + 0.033333335;
    }
  }
  else {
    fVar1 = fVar1 - 0.033333335;
  }
  if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
    fVar1 = 1.0;
  }
  if (fVar1 < *(float *)(param_1 + 0xb50) != (fVar1 == *(float *)(param_1 + 0xb50))) {
    fVar1 = *(float *)(param_1 + 0xb50);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      *(float *)(iVar3 + 0x1c + *(int *)(param_1 + 800)) = fVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00602F00  FUN_00602f00  size=139  [between]
undefined4 __thiscall FUN_00602f00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 0x88);
  uVar2 = 0;
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0xb30);
  do {
    if (iVar1 == *piVar4) {
      uVar2 = 1;
      break;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 8);
  *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_1 + 0xb48);
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_1 + 0xb44);
  *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_1 + 0xb40);
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0xb3c);
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_1 + 0xb38);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_1 + 0xb34);
  *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(param_1 + 0xb30);
  *(int *)(param_1 + 0xb30) = iVar1;
  return uVar2;
}

// 00602F90  FUN_00602f90  size=42  [between]
uint FUN_00602f90(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c38;
  (**(code **)(*param_1 + 4))(&DAT_01be9c38);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00602FC0  Ba6010::vf40  size=307  [class]
undefined4 __fastcall Ba6010::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  switchD_0080dbae::default();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(4);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),9);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_008f1600(8);
      switchD_0080dbae::default();
      FUN_008f3cb0(param_1);
    }
  }
  FUN_00410540(4,&DAT_01b7bd48);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffefffff;
  *(undefined4 *)(param_1 + 0xb50) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xb5c) = 0;
  iVar1 = FUN_00de4550("_param.bxm",0);
  if (iVar1 != 0) {
    cXmlBinary::cXmlBinary_103();
    FUN_00e062b0(iVar1,0);
    uVar2 = FUN_00e041c0();
    iVar1 = FUN_00e06390(uVar2,"CamAlphaRate");
    if (iVar1 != -1) {
      FUN_00e06970(iVar1,param_1 + 0xb50);
    }
    FUN_00e04180();
    FUN_00e04180();
  }
  *(undefined4 *)(param_1 + 0xb54) = 0x41200000;
  return 1;
}

// 00603100  FUN_00603100  size=604  [between]
/* WARNING: Removing unreachable block (ram,0x006031d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00603100(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int *piStack_68;
  int aiStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  
  local_a0 = param_1;
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar7 = &DAT_01be9c38;
      piStack_68 = piVar2;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
      iVar1 = FUN_00dd6d80(puVar7);
      if (iVar1 != 0) {
        param_1 = param_1 + 0xb58;
        uVar8 = 0;
        iStack_98 = param_1;
        iVar1 = FUN_00907640(param_1,&local_a0,0);
        if (iVar1 != 0) {
          FUN_0112bcf0();
          iVar1 = local_a0;
          iStack_9c = 0;
          if (0 < *(int *)(local_a0 + 0x14)) {
            iVar5 = 0;
            do {
              iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 0x28 + iVar5);
              iVar4 = 0;
              iVar6 = 0;
              if (*(char *)(iVar3 + 0x18) == '\x01') {
                iVar4 = *(char *)(iVar3 + 0x10) + iVar3;
              }
              if (*(char *)(iVar3 + 0x18) == '\x02') {
                if (*(char *)(iVar3 + 0x18) == '\x02') {
                  iVar6 = *(char *)(iVar3 + 0x10) + iVar3;
                }
                else {
                  iVar6 = 0;
                }
              }
              if (((iVar4 != 0) && (iVar3 = FUN_008f7780(iVar4), iVar3 != 0)) &&
                 (*(int *)(iVar3 + 0x4b0) == *(int *)(iStack_a4 + 0x4b0))) {
                uVar8 = 1;
              }
              if (((iVar6 != 0) && (iVar3 = FUN_008f7780(iVar6), iVar3 != 0)) &&
                 (*(int *)(iVar3 + 0x4b0) == *(int *)(iStack_a4 + 0x4b0))) {
                uVar8 = 1;
              }
              iStack_9c = iStack_9c + 1;
              iVar5 = iVar5 + 0x30;
              param_1 = iStack_98;
              piVar2 = piStack_68;
            } while (iStack_9c < *(int *)(iVar1 + 0x14));
          }
        }
        fStack_94 = _DAT_01bea630;
        fStack_90 = _DAT_01bea634;
        fStack_8c = _DAT_01bea638;
        fStack_88 = _DAT_01bea63c;
        fStack_84 = (float)piVar2[0x10] - _DAT_01bea630;
        fStack_80 = (float)piVar2[0x11] - _DAT_01bea634;
        fStack_7c = (float)piVar2[0x12] - _DAT_01bea638;
        fStack_78 = (float)piVar2[0x13] - _DAT_01bea63c;
        iVar1 = FUN_009f8b40();
        fStack_54 = fStack_94;
        uStack_30 = iVar1 << 0x10 | 7;
        fStack_50 = fStack_90;
        uStack_28 = 0;
        fStack_4c = fStack_8c;
        uStack_24 = 0;
        fStack_48 = fStack_88;
        fStack_44 = fStack_84;
        aiStack_64[1] = 5;
        fStack_40 = fStack_80;
        uStack_2c = 0x3bf001b;
        pcStack_20 = "Ba6010Translucent";
        fStack_3c = fStack_7c;
        fStack_38 = fStack_78;
        uStack_34 = 0x3dcccccd;
        aiStack_64[0] = param_1;
        FUN_0090fb00(aiStack_64);
        return uVar8;
      }
    }
  }
  return 0;
}

// 00603360  Ba6010::vf44  size=74  [class]
void __fastcall Ba6010::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  BehaviorBgBase::vf44();
  return;
}

// 006033B0  FUN_006033b0  size=286  [between]
undefined4 __fastcall FUN_006033b0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_2b0 [336];
  undefined1 local_160 [348];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar5 = param_1[0x19f];
  iVar4 = param_1[0x1a1] * 0x150 + iVar5;
  FUN_00445db0();
  iVar2 = -1;
  bVar1 = false;
  if (iVar5 != iVar4) {
    do {
      if (iVar2 < *(int *)(iVar5 + 4)) {
        bVar1 = true;
        FUN_00448f50(iVar5);
        iVar2 = *(int *)(iVar5 + 4);
      }
      iVar5 = iVar5 + 0x150;
    } while (iVar5 != iVar4);
    if (((bVar1) && (iVar5 = FUN_00602f00(local_2b0), iVar5 == 0)) &&
       (iVar5 = FUN_00a81330(), iVar5 != 0)) {
      FUN_00a81330();
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        FUN_004039a0(0xe,param_1,0);
        FUN_00a8c8b0(0x20130,local_160);
        if (param_1[0x2d7] != 0) {
          iVar5 = FUN_00a12210(0);
          uVar3 = FUN_009f8b40(0);
          FUN_009577e0(0x23a6f56d,iVar5 + 0x40,uVar3);
        }
        (**(code **)(*param_1 + 0x20))();
        return 1;
      }
    }
  }
  return 0;
}

// 006034D0  Ba6010::vf48  size=130  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Ba6010::vf48(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  BehaviorBgBase::vf48();
  FUN_006033b0();
  iVar4 = FUN_00a12210(0);
  if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (iVar4 != 0)) {
    fVar1 = _DAT_01bea630 - *(float *)(iVar4 + 0x40);
    fVar3 = _DAT_01bea634 - *(float *)(iVar4 + 0x44);
    fVar2 = _DAT_01bea638 - *(float *)(iVar4 + 0x48);
    fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    fVar2 = *(float *)(param_1 + 0xb54) * *(float *)(param_1 + 0xb54);
    if (fVar1 < fVar2 != (fVar1 == fVar2)) {
      FUN_00602e60(*(undefined4 *)(param_1 + 0xb50));
      return;
    }
    FUN_00602e60(0x3f800000);
  }
  return;
}

// 00AB6130  Ba6010::Ba6010  size=29  [class]
undefined4 * __fastcall Ba6010::Ba6010(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  FUN_00904d60();
  return param_1;
}

// 00AB6150  Ba6010::vf04  size=6  [class]
undefined * Ba6010::vf04(void)

{
  return &DAT_01b354d0;
}

// 00ABA950  Ba6010::vf00  size=54  [class]
undefined4 __thiscall Ba6010::vf00(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

