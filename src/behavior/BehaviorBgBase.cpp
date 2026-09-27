// src/behavior/BehaviorBgBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A98F50..00AA94C0, 10 functions

#include "mgrr.h"
#include "BehaviorBgBase.h"

// 00A98F50  FUN_00a98f50  size=237  [callgraph]
undefined4 __fastcall FUN_00a98f50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  uVar2 = FUN_00de3850(0,"_col.hkx",0);
  iVar3 = FUN_00de3cf0(uVar2);
  if (iVar3 != 0) {
    iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = RigidBodyCollision::RigidBodyCollision();
    }
    *(int *)(param_1 + 0x7b0) = iVar4;
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4f0);
      uVar2 = FUN_00de3ee0(uVar2);
      FUN_008f6410(uVar1,iVar3,uVar2);
      if ((*(uint *)(param_1 + 0x364) & 0x2000000) == 0) {
        FUN_008f2ea0();
      }
      else {
        FUN_008f03a0(0x200000,1);
        FUN_008f01e0(0x3f800000);
      }
    }
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x1c))();
      if (iVar3 != 0) {
        fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x7b0) + 0xd8))();
        *(float *)(param_1 + 0x7c0) = (float)fVar5;
      }
    }
  }
  return 1;
}

// 00A99040  BehaviorBgBase::vf4C  size=140  [class]
void __fastcall BehaviorBgBase::vf4C(int *param_1)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  if (param_1[0x22c] != 0) {
    fVar1 = (float)param_1[0x22d] - 1.0;
    param_1[0x22d] = (int)fVar1;
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x27d] != 0)) {
    param_1[0x206] = 1;
  }
  return;
}

// 00A99640  BehaviorBgBase::setCutCrerateInfo  size=867  [class]
void __thiscall
BehaviorBgBase::setCutCrerateInfo(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *unaff_EDI;
  int iVar11;
  int unaff_retaddr;
  undefined *puVar12;
  int local_18;
  uint uStack_14;
  int *piStack_8;
  int iStack_4;
  
  iVar2 = FUN_00a99500();
  if (iVar2 == 0) {
    if (0 < (int)param_4) {
      do {
        *param_2 = 0x42000;
        param_2 = param_2 + 3;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    uVar3 = FUN_00a1d5c0();
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x24 >> 0x20) != 0) |
                         (uint)((ulonglong)param_4 * 0x24),uVar3);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar11 = param_4 - 1;
      if (-1 < iVar11) {
        puVar5 = (undefined4 *)(iVar2 + 0x1c);
        do {
          puVar5[-1] = 0xffffffff;
          *puVar5 = 0xffffffff;
          puVar5[1] = 0xffffffff;
          puVar5[-7] = 0;
          puVar5[-6] = 0;
          puVar5[-5] = 0;
          puVar5[-4] = 0;
          puVar5[-3] = 0;
          puVar5[-2] = 0;
          puVar5 = puVar5 + 9;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
    param_1[0x299] = iVar2;
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01665490);
    }
    else {
      iVar2 = 0;
      if (0 < (int)param_4) {
        iVar11 = 0;
        do {
          uVar3 = *(undefined4 *)(param_3 + iVar2 * 4);
          iVar9 = param_1[0x299];
          *(int *)(iVar9 + iVar11 + 0x1c) = iVar2;
          FUN_00a91d70(param_1,uVar3);
          (**(code **)(*param_1 + 0x314))(uVar3,iVar9 + iVar11);
          iVar2 = iVar2 + 1;
          iVar11 = iVar11 + 0x24;
        } while (iVar2 < (int)param_4);
      }
      (**(code **)(*param_1 + 0x310))(param_3,param_1[0x299],param_4);
      iVar2 = -1;
      iStack_4 = -1;
      local_18 = -1;
      if (0 < (int)param_4) {
        piVar4 = param_1 + 0x12d;
        iVar11 = param_1[0x299];
        uStack_14 = param_4;
        do {
          if (*(int *)(iVar11 + 0x18) == *piVar4) {
            iVar8 = 0;
            uVar7 = 2;
            iVar9 = 0x10;
            do {
              bVar1 = (byte)uVar7;
              uVar10 = 0x80000000 >> (bVar1 - 2 & 0x1f);
              uVar6 = uVar7 - 2 >> 5;
              if (((*(uint *)(iVar11 + 0x10 + uVar6 * 4) & uVar10) != 0) &&
                 ((*(uint *)(iVar11 + 8 + uVar6 * 4) & uVar10) == 0)) {
                iVar8 = iVar8 + 1;
              }
              uVar10 = 0x80000000 >> (bVar1 - 1 & 0x1f);
              uVar6 = uVar7 - 1 >> 5;
              if (((*(uint *)(iVar11 + 0x10 + uVar6 * 4) & uVar10) != 0) &&
                 ((*(uint *)(iVar11 + 8 + uVar6 * 4) & uVar10) == 0)) {
                iVar8 = iVar8 + 1;
              }
              uVar6 = 0x80000000 >> (bVar1 & 0x1f);
              if (((*(uint *)(iVar11 + 0x10 + (uVar7 >> 5) * 4) & uVar6) != 0) &&
                 ((*(uint *)(iVar11 + 8 + (uVar7 >> 5) * 4) & uVar6) == 0)) {
                iVar8 = iVar8 + 1;
              }
              uVar10 = 0x80000000 >> (bVar1 + 1 & 0x1f);
              uVar6 = uVar7 + 1 >> 5;
              if (((*(uint *)(iVar11 + 0x10 + uVar6 * 4) & uVar10) != 0) &&
                 ((*(uint *)(iVar11 + 8 + uVar6 * 4) & uVar10) == 0)) {
                iVar8 = iVar8 + 1;
              }
              uVar7 = uVar7 + 4;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            if (local_18 <= iVar8) {
              iStack_4 = *(int *)(iVar11 + 0x1c);
              local_18 = iVar8;
            }
            param_1 = unaff_EDI;
            if (*(int *)(iVar11 + 0x20) < iVar2) {
              iVar2 = *(int *)(iVar11 + 0x1c);
            }
          }
          iVar11 = iVar11 + 0x24;
          uStack_14 = uStack_14 - 1;
        } while (uStack_14 != 0);
        if (iVar2 != -1) {
          iStack_4 = iVar2;
        }
      }
      iVar2 = 0;
      if (0 < (int)param_4) {
        iVar11 = 0;
        do {
          iVar9 = *(int *)(param_1[0x299] + 0x18 + iVar11);
          if (iVar9 == param_1[0x12d]) {
            iVar9 = FUN_00a81330();
            if (iVar9 == 0) {
LAB_00a99917:
              uVar7 = 0;
            }
            else {
              FUN_00a81330();
              iVar9 = FUN_00a7c8a0();
              if (iVar9 == 0) goto LAB_00a99917;
              FUN_00a81330();
              piVar4 = (int *)FUN_00a7c8a0();
              if (piVar4 == (int *)0x0) goto LAB_00a99917;
              puVar12 = &DAT_01be9c34;
              (**(code **)(*piVar4 + 4))(&DAT_01be9c34);
              iVar9 = FUN_00dd6d80(puVar12);
              uVar7 = -(uint)(iVar9 != 0) & (uint)piVar4;
            }
            if (iStack_4 == iVar2) {
              if (uVar7 == 0) {
                iStack_4 = -1;
LAB_00a9993c:
                *piStack_8 = 0x42000;
              }
              else {
                *piStack_8 = *(int *)(uVar7 + 0x4b4);
                piStack_8[2] = 1;
              }
            }
            else {
              if (uVar7 == 0) goto LAB_00a9993c;
              piStack_8[1] = param_1[300];
              *piStack_8 = *(int *)(uVar7 + 0x4b4);
            }
          }
          else {
            *piStack_8 = iVar9;
          }
          iVar11 = iVar11 + 0x24;
          iVar2 = iVar2 + 1;
          piStack_8 = piStack_8 + 3;
        } while (iVar2 < unaff_retaddr);
      }
      if (iStack_4 == -1) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      if (param_1[0x299] != 0) {
        FUN_00dd4940(param_1[0x299]);
        param_1[0x299] = 0;
        return;
      }
    }
  }
  return;
}

// 00AA12D0  BehaviorBgBase::vf44  size=473  [class]
void __fastcall BehaviorBgBase::vf44(int param_1)

{
  int iVar1;
  undefined1 local_10c [12];
  undefined1 local_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(local_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(local_100,"%s_se_setobj_stop",local_10c);
    FUN_00e5e080(local_100,param_1 + 0x40,0,0xffffffff,0);
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

// 00AA14B0  BehaviorBgBase::vf48  size=260  [class]
void __fastcall BehaviorBgBase::vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_10c [12];
  undefined1 local_100 [256];
  
  BehaviorDebrisActor::vf48();
  if ((((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x884) != 0)) &&
     ((*(char *)(param_1 + 0x470) == '\0' ||
      (((*(byte *)(param_1 + 0x472) & 0x80) == 0 || (*(char *)(param_1 + 0x471) == '\0')))))) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x884) + 0x20) != '\0') {
      iVar1 = FUN_0092b680();
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_00928de0();
        if ((fVar2 < (float10)(float)(undefined *)0x0 != (fVar2 == (float10)(float)(undefined *)0x0)
            ) && (*(int *)(param_1 + 0x898) != 0)) {
          if (*(int *)(param_1 + 0x89c) != 0) {
            FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
            *(undefined4 *)(param_1 + 0x89c) = 0;
          }
          FUN_009f8ea0(local_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
          FUN_00a90970(local_100,"%s_se_setobj_stop",local_10c);
          FUN_00e5e080(local_100,param_1 + 0x40,0,0xffffffff,0);
          *(undefined4 *)(param_1 + 0x898) = 0;
        }
      }
    }
  }
  return;
}

// 00AA15C0  BehaviorBgBase::vf50  size=149  [class]
void __fastcall BehaviorBgBase::vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x8a4) != 0)) {
    if (*(int *)(param_1 + 0x8a8) == 0) {
      if (*(int *)(param_1 + 0x7b4) != 0) {
        FUN_0091ea00(param_1);
      }
      if (*(int *)(param_1 + 0x7b0) != 0) {
        FUN_008f3cb0(param_1);
      }
    }
    else if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_008f5990(param_1);
      return;
    }
  }
  return;
}

// 00AA4D50  BehaviorBgBase::BehaviorBgBase  size=216  [class]
undefined4 * __fastcall BehaviorBgBase::BehaviorBgBase(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00c1e220();
  param_1[0x221] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22e] = 0;
  param_1[0x238] = 0;
  FUN_004105d0();
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  FUN_00c5a260();
  param_1[0x292] = 0x40400000;
  param_1[0x293] = 0x41200000;
  param_1[0x295] = 0;
  param_1[0x296] = 0xffffffff;
  param_1[0x294] = 0x3f800000;
  param_1[0x297] = 0xffffffff;
  FUN_00a7c930();
  *(undefined1 *)(param_1 + 0x29a) = 0;
  param_1[0x29b] = 0;
  FUN_00a7c950();
  return param_1;
}

// 00AA4E30  BehaviorBgBase::vf04  size=6  [class]
undefined * BehaviorBgBase::vf04(void)

{
  return &DAT_01be9c28;
}

// 00AA94A0  BehaviorBgBase::destruct  size=30  [class]
undefined4 __thiscall BehaviorBgBase::destruct(undefined4 param_1,byte param_2)

{
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA94C0  BehaviorBgBase::startup  size=2096  [class]
undefined4 __fastcall BehaviorBgBase::startup(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 extraout_ECX;
  char *pcVar13;
  bool bVar14;
  float10 fVar15;
  int local_1cc;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined **local_1a8;
  int iStack_188;
  undefined1 auStack_184 [4];
  undefined1 auStack_180 [112];
  undefined1 auStack_110 [68];
  undefined4 uStack_cc;
  
  iVar5 = Behavior::startup();
  if (iVar5 == 0) {
    return 0;
  }
  FUN_009fd240();
  if ((*(uint *)(param_1 + 0x364) & 0x2000000) == 0) {
    *(undefined4 *)(param_1 + 0x8a0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x8a0) = 1;
  }
  if (*(int *)(param_1 + 0x4f0) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00a7c890();
  }
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(uint *)(param_1 + 0x8a4) = (uint)(iVar5 != 0);
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7c910();
  }
  FUN_00e08640(3);
  if (((*(int *)(param_1 + 0x490) == 0) || (iVar5 = FUN_009fedd0(), iVar5 == 0)) &&
     (iVar5 = FUN_009f94c0(*(undefined4 *)(param_1 + 0x4b0)), iVar5 == 0)) {
    FUN_00a98f50();
  }
  if ((*(int *)(param_1 + 0x4b0) == 0x71000) || (*(int *)(param_1 + 0x4b0) == 0x71001)) {
    FUN_00a98f50();
  }
  iVar5 = *(int *)(param_1 + 0x4b0);
  if (((iVar5 == 0x71002) || (iVar5 == 0x71003)) || ((iVar5 == 0x71004 || (iVar5 == 0x71005)))) {
    FUN_00a98f50();
  }
  if (*(uint **)(param_1 + 0x588) != (uint *)0x0) {
    **(uint **)(param_1 + 0x588) = ~(*(uint *)(param_1 + 0x364) >> 0x19) & 1;
  }
  iVar5 = FUN_00de4550("_DRInfo.bxm",0);
  if (iVar5 != 0) {
    iVar6 = FUN_00dd3500(0x50,&DAT_01b7bd48);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0092b420();
    }
    *(int *)(param_1 + 0x884) = iVar6;
    if (iVar6 == 0) {
      return 0;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x7b0);
    uVar7 = FUN_00a7c7f0(iVar5,uVar8);
    uVar11 = extraout_ECX;
    FUN_00a7c940(uVar7);
    FUN_0092b4e0(uVar11,iVar5,uVar8);
    iVar5 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = cEspControler::cEspControler();
    }
    *(int *)(param_1 + 0x888) = iVar5;
    if (iVar5 == 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x80000;
  }
  switchD_0080dbae::default();
  iVar5 = FUN_00de4550("_param.bxm",0);
  if (iVar5 != 0) {
    cXmlBinary::cXmlBinary();
    FUN_00e062b0(iVar5,0);
    uVar8 = cXmlBinary::vf04();
    iVar5 = cXmlBinary::vf18(uVar8,"Carry");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x658) = 1;
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(2,1);
    }
    iVar5 = cXmlBinary::vf18(uVar8,"CutZanMode");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x8ac) = 1;
    }
    iVar5 = cXmlBinary::vf18(uVar8,"NeedlessApplyRigidBody");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x88c) = 1;
      *(undefined4 *)(param_1 + 0x8a0) = 0;
      *(undefined4 *)(param_1 + 0x8a4) = 0;
      *(undefined4 *)(param_1 + 0x8a8) = 0;
    }
    iVar5 = cXmlBinary::vf18(uVar8,"InstallationKeyframed");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x890) = 1;
      *(undefined4 *)(param_1 + 0x8a4) = 1;
      *(undefined4 *)(param_1 + 0x8a0) = 0;
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        iStack_188 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
        iVar5 = 0;
        if (0 < iStack_188) {
          do {
            piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(auStack_184,iVar5);
            iVar6 = *piVar9;
            fVar15 = (float10)FUN_011a2a30();
            if (iVar6 != 0) {
              FUN_004066f0();
              uVar10 = *(uint *)(iVar6 + 0xc);
              uVar10 = -(uint)(uVar10 != 0) & uVar10;
              puVar1 = (uint *)(uVar10 + 4);
              *puVar1 = *puVar1 | 4;
              *(float *)(uVar10 + 0x90) = (float)fVar15;
              if (DAT_01885d68 != 1) {
                piVar9 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
                *piVar9 = *piVar9 + -1;
                if (((*piVar9 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                  FUN_00dd7320();
                }
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iStack_188);
        }
        FUN_008f2cd0(0);
      }
    }
    iVar5 = cXmlBinary::vf18(uVar8,"RideCheckActivate");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x894) = 1;
    }
    iVar5 = cXmlBinary::vf18(uVar8,"AutoSePlay");
    if ((iVar5 != -1) &&
       (cXmlBinary::vf58(iVar5,(int *)(param_1 + 0x898)), *(int *)(param_1 + 0x898) != 0)) {
      FUN_009f8ea0(&uStack_1c0,10,*(undefined4 *)(param_1 + 0x4b0),0);
      FUN_00a90970(auStack_110,"%s_se_setobj_play",&uStack_1c0);
      uVar11 = FUN_00e5e080(auStack_110,param_1 + 0x40,0,0xffffffff,0);
      *(undefined4 *)(param_1 + 0x89c) = uVar11;
    }
    iVar5 = cXmlBinary::vf18(uVar8,"ZanTargetDisp");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0xa54) = 1;
      iVar5 = cXmlBinary::vf18(uVar8,"ZanTargetRad");
      if (iVar5 == -1) {
        *(undefined4 *)(param_1 + 0xa4c) = 0x41200000;
      }
      else {
        cXmlBinary::vf54(iVar5,param_1 + 0xa4c);
      }
      iVar5 = cXmlBinary::vf18(uVar8,"ZanTargetEnableRange");
      puVar2 = (undefined4 *)(param_1 + 0xa48);
      if (iVar5 == -1) {
        *puVar2 = 0x40400000;
      }
      else {
        cXmlBinary::vf54(iVar5,puVar2);
      }
      iVar5 = cXmlBinary::vf18(uVar8,"ZanTargetHomingRange");
      puVar3 = (undefined4 *)(param_1 + 0xa50);
      if (iVar5 == -1) {
        *puVar3 = 0x3f800000;
      }
      else {
        cXmlBinary::vf54(iVar5,puVar3);
      }
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,0xf30,&uStack_1c0,&uStack_1c0,
                   *(undefined4 *)(param_1 + 0xa4c),0x3f000000,0xbf800000);
      uStack_cc = *puVar2;
      uVar11 = FUN_00c5abe0(auStack_110);
      *(undefined4 *)(param_1 + 0xa58) = uVar11;
      FUN_00405230();
      FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0xf30,&uStack_1c0,0,0x3f800000,*puVar3,1,8);
      uVar11 = FUN_00c57830(auStack_180);
      *(undefined4 *)(param_1 + 0xa5c) = uVar11;
      iVar5 = FUN_00c4d470(uVar11);
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x4c) = 3;
      }
    }
    iVar5 = cXmlBinary::vf18(uVar8,"EnemyNoBreak");
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x9f8) = 1;
    }
    FUN_00e04180();
    local_1a8 = cXmlBinary::vftable;
    FUN_00e04180();
  }
  FUN_00a993c0();
  if ((*(int *)(param_1 + 0x4b4) == 0xe0056) && (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xf8))(1);
  }
  if ((*(int *)(param_1 + 0x4b4) == 0xe0047) && (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xd4))(0x42480000);
  }
  FUN_00a04500();
  FUN_00a93fc0();
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 1;
  iVar5 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_1c0);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = FUN_00de4550("_sco.bxm",0);
  if (iVar5 != 0) {
    cXmlBinary::cXmlBinary_83(*(undefined4 *)(param_1 + 0x4f0),iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x4b0);
  if ((((iVar5 == 0xd5040) || ((0xf0fff < iVar5 && (iVar5 < 0xf2000)))) ||
      ((0xe0fff < iVar5 && (iVar5 < 0xe2000)))) ||
     ((((0xd0fff < iVar5 && (iVar5 < 0xd2000)) || ((0x70fff < iVar5 && (iVar5 < 0x72000)))) ||
      (iVar5 - 0xf0d00U < 0xff)))) {
    FUN_009880b0(param_1);
  }
  if ((*(int *)(param_1 + 0x4b0) == 0xd0700) && (local_1cc = 0, 0 < *(short *)(param_1 + 0x324))) {
    iVar5 = 0;
    do {
      pbVar12 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar5) + 0x40);
      if (pbVar12 != (byte *)0x0) {
        pcVar13 = "Monitor_On";
        do {
          bVar4 = *pbVar12;
          bVar14 = bVar4 < (byte)*pcVar13;
          if (bVar4 != *pcVar13) {
LAB_00aa9c06:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_00aa9c0b;
          }
          if (bVar4 == 0) break;
          bVar4 = pbVar12[1];
          bVar14 = bVar4 < (byte)pcVar13[1];
          if (bVar4 != pcVar13[1]) goto LAB_00aa9c06;
          pbVar12 = pbVar12 + 2;
          pcVar13 = pcVar13 + 2;
        } while (bVar4 != 0);
        iVar6 = 0;
LAB_00aa9c0b:
        if (iVar6 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      local_1cc = local_1cc + 1;
      iVar5 = iVar5 + 0x70;
    } while (local_1cc < *(short *)(param_1 + 0x324));
  }
  if ((*(int *)(param_1 + 0x7b0) != 0) &&
     (((((((iVar5 = *(int *)(param_1 + 0x4b0), iVar5 == 0xd000f || (iVar5 == 0xd0080)) ||
          (iVar5 == 0xd0084)) || ((iVar5 == 0xd0085 || (iVar5 == 0xd00cd)))) ||
        (((iVar5 == 0xd00ed || ((iVar5 == 0xd0171 || (iVar5 == 0xd017b)))) || (iVar5 == 0xd01f1))))
       || (((((iVar5 == 0xd01f2 || (iVar5 == 0xd0226)) || (iVar5 == 0xd0315)) ||
            (((iVar5 == 0xd0316 || (iVar5 == 0xd0504)) ||
             ((iVar5 == 0xd00e6 || ((iVar5 == 0xd00e7 || (iVar5 == 0xd00ee)))))))) ||
           (iVar5 == 0xe0084)))) || ((iVar5 == 0xe0085 || (iVar5 == 0xe0086)))))) {
    FUN_008f1600(0x800000);
  }
  if (*(int *)(param_1 + 0x4b0) == 0xd0300) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  }
  return 1;
}

