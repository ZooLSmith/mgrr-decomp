// src/behavior/BehaviorDebrisExplode.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8F00..005E2C30, 10 functions

#include "types.h"

// 005D8F00  BehaviorDebrisExplode::thunk_vf44  size=5  [class]
void __fastcall BehaviorDebrisExplode::thunk_vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x93c) != 0) {
    FUN_00d8b4a0(param_1);
  }
  if (*(int *)(param_1 + 0x904) != 0) {
    FUN_00d8a1d0(0x1e,*(int *)(param_1 + 0x904));
    if (*(undefined4 **)(param_1 + 0x904) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x904))(1);
      *(undefined4 *)(param_1 + 0x904) = 0;
    }
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    FUN_00d8a1d0(0x1f,*(int *)(param_1 + 0x908));
    if (*(undefined4 **)(param_1 + 0x908) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x908))(1);
      *(undefined4 *)(param_1 + 0x908) = 0;
    }
  }
  FUN_00900ca0();
  FUN_00a8c820();
  FUN_00a944d0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 005D8F10  BehaviorDebrisExplode::vf50  size=5  [class]
void __fastcall BehaviorDebrisExplode::vf50(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  Behavior::vf50();
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && (param_1[0x222] != 0)) {
    (**(code **)(*param_1 + 100))();
    FUN_00a93170();
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36970(0);
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    if (fVar3 < (float10)(float)fVar2 != (fVar3 == (float10)(float)fVar2)) {
      if (param_1[0x1ed] != 0) {
        FUN_0091c6c0(4);
      }
      param_1[0x222] = 0;
      param_1[0x223] = 1;
    }
    if ((param_1[0x1ed] != 0) && (param_1[0x220] != 0)) {
      FUN_0091ea00(param_1);
    }
  }
  return;
}

// 005D8F20  BehaviorDebrisExplode::vf1B8  size=31  [class]
void BehaviorDebrisExplode::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42005;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 005DBF00  BehaviorDebrisExplode::vf48  size=5  [class]
void __fastcall BehaviorDebrisExplode::vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  BehaviorDebrisActor::vf48();
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x898) != 0)) {
    iVar1 = Hw::cHeapVariableBase::vf18();
    if (iVar1 < 0x100000) {
      FUN_00dd5650(&DAT_016438f8,iVar1,0x100000);
      *(undefined4 *)(param_1 + 0x944) = 1;
      fVar2 = (float10)FUN_00e049b0();
      fVar3 = (float10)1;
      if (fVar2 < fVar3) {
        fVar3 = (float10)0.4;
      }
      FUN_005d8530((float)fVar3);
      iVar1 = *(int *)(param_1 + 0x7b4);
      if (iVar1 != 0) {
        lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
        FUN_00dd4920(iVar1);
        *(undefined4 *)(param_1 + 0x7b4) = 0;
        *(undefined4 *)(param_1 + 0x898) = 0;
        return;
      }
    }
    else {
      FUN_00912890(DAT_01885d20);
      *(undefined4 *)(param_1 + 0x880) = 1;
    }
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  return;
}

// 005DBF10  BehaviorDebrisExplode::vf30  size=5  [class]
void __fastcall BehaviorDebrisExplode::vf30(int param_1)

{
  int iVar1;
  
  Bh0064::vf30();
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x98) != 0) {
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
      *(undefined4 *)(iVar1 + 0x98) = 1;
    }
    if (*(int *)(param_1 + 0x8e4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x90) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x94) = *(undefined4 *)(param_1 + 0x8e0);
    }
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0x694);
    *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(param_1 + 0x698);
    *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(param_1 + 0x69c);
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xd0) = *(undefined4 *)(param_1 + 0x6a0);
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0x6a4);
    *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0x6a8);
    *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_1 + 0x6ac);
    *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0) = *(undefined1 *)(param_1 + 0x6b0);
    iVar1 = *(int *)(param_1 + 0x588);
    if (*(int *)(iVar1 + 0x150) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x138));
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    if (*(int *)(iVar1 + 0x150) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x138));
    }
  }
  return;
}

// 005DBF70  BehaviorDebrisExplode::vf04  size=6  [class]
undefined * BehaviorDebrisExplode::vf04(void)

{
  return &DAT_01b35324;
}

// 005DBF90  BehaviorDebrisExplode::vf00  size=30  [class]
undefined4 __thiscall BehaviorDebrisExplode::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005DE330  BehaviorDebrisExplode::vf4C  size=5  [class]
void __fastcall BehaviorDebrisExplode::vf4C(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float fStack_8;
  float fStack_4;
  
  Behavior::vf4C();
  if ((0.0 < *(float *)(param_1 + 0x958) != (*(float *)(param_1 + 0x958) == 0.0)) &&
     (fVar3 = *(float *)(param_1 + 0x958) - 1.0, *(float *)(param_1 + 0x958) = fVar3, fVar3 < 0.0))
  {
    FUN_005dc340();
  }
  fVar10 = (float10)1;
  iVar7 = 0;
  if ((*(int *)(param_1 + 0x948) != 0) &&
     (fVar9 = (float10)*(float *)(param_1 + 0x94c) - fVar10,
     *(float *)(param_1 + 0x94c) = (float)fVar9, fVar9 < (float10)0)) {
    *(undefined4 *)(param_1 + 0x948) = 0;
  }
  if (DAT_01b372f8 != 0) {
    FUN_009fdde0();
    return;
  }
  if (*(int *)(param_1 + 0x928) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x890) == 0) || (*(int *)(param_1 + 0x92c) != 0)) {
    if (*(int *)(param_1 + 0x88c) == 0) goto LAB_005ddd03;
    fVar10 = (float10)FUN_00a93060();
    *(float *)(param_1 + 0x884) = (float)(fVar10 + (float10)*(float *)(param_1 + 0x884));
    if (*(int *)(param_1 + 0x920) == 0) {
      iVar8 = FUN_009f9400(*(undefined4 *)(param_1 + 0x4b4));
      if (iVar8 == 0) {
        iVar8 = FUN_009f93b0(*(undefined4 *)(param_1 + 0x4b4));
        if (iVar8 == 0) {
          fVar10 = (float10)FUN_005d9db0();
        }
        else {
          iVar8 = *(int *)(param_1 + 0x4b4);
          fVar10 = (float10)3.0;
          if (iVar8 == 0x20030) {
            fVar10 = (float10)180.0;
          }
          else if (iVar8 == 0x20180) {
            fVar10 = (float10)180.0;
          }
          else if (iVar8 == 0x20190) {
            fVar10 = (float10)180.0;
          }
          else if (iVar8 == 0x2022f) {
            fVar10 = (float10)10.0;
          }
        }
      }
      else {
        fVar10 = (float10)3.0;
      }
    }
    else {
      fVar10 = (float10)6.0;
    }
    fStack_8 = (float)fVar10;
    if (*(int *)(param_1 + 0x89c) != 0) {
      fStack_8 = *(float *)(param_1 + 0x924);
      fVar10 = (float10)fStack_8;
    }
    fVar10 = fVar10 - (float10)2.0;
    if (fVar10 < (float10)*(float *)(param_1 + 0x884) !=
        (fVar10 == (float10)*(float *)(param_1 + 0x884))) {
      fVar9 = (float10)1;
      fVar10 = fVar9 - ((float10)*(float *)(param_1 + 0x884) - fVar10) * (float10)0.5;
      fStack_4 = (float)fVar10;
      if (fVar10 < fVar9) {
        if ((fVar10 <= (float10)0.8) && (*(int *)(param_1 + 0x7b4) != 0)) {
          FUN_0091adf0(1);
          FUN_0091adf0(2);
          fVar10 = (float10)fStack_4;
        }
      }
      else {
        fStack_4 = (float)fVar9;
        fVar10 = fVar9;
      }
      iVar5 = 0;
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0x944) = 1;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(float *)(iVar5 + 0x1c + *(int *)(param_1 + 800)) = (float)fVar10;
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar8 < *(short *)(param_1 + 0x324));
      }
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        **(undefined4 **)(param_1 + 0x370) = 1;
      }
      iVar5 = 0;
      iVar8 = FUN_00a94360();
      if (0 < iVar8) {
        do {
          FUN_00a94380(iVar5);
          iVar8 = FUN_00a81330();
          if ((iVar8 != 0) && (iVar8 = FUN_00a7c800(), iVar8 != 0)) {
            iVar6 = 0;
            iVar4 = 0;
            if (0 < *(short *)(iVar8 + 0x324)) {
              do {
                *(float *)(iVar6 + 0x1c + *(int *)(iVar8 + 800)) = fStack_4;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 0x70;
              } while (iVar4 < *(short *)(iVar8 + 0x324));
            }
          }
          iVar5 = iVar5 + 1;
          iVar8 = FUN_00a94360();
        } while (iVar5 < iVar8);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x938) == 0) {
      fVar10 = (float10)FUN_00a93060();
    }
    fVar10 = fVar10 + (float10)*(float *)(param_1 + 0x884);
    *(float *)(param_1 + 0x884) = (float)fVar10;
    if (((float10)*(float *)(param_1 + 0x900) <= fVar10) && (*(int *)(param_1 + 0x8fc) == 0)) {
      FUN_005d9490();
    }
    fStack_8 = *(float *)(param_1 + 0x900) + 7.0;
  }
  if (fStack_8 < *(float *)(param_1 + 0x884) != (fStack_8 == *(float *)(param_1 + 0x884))) {
    FUN_009fdde0();
  }
LAB_005ddd03:
  if ((((*(int *)(param_1 + 0x894) != 0) && (*(char *)(param_1 + 0x470) != '\0')) &&
      ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) && (*(char *)(param_1 + 0x471) != '\0')) {
    FUN_009fdde0();
  }
  if (*(int *)(param_1 + 0x8e4) != 0) {
    fVar3 = *(float *)(param_1 + 0x8e0) - 0.011111111;
    *(float *)(param_1 + 0x8e0) = fVar3;
    if (fVar3 <= 0.0) {
      iVar8 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar5 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar5 + 0x60 + iVar7) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"_DEB0"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar8 < *(short *)(param_1 + 0x324));
      }
      *(undefined4 *)(param_1 + 0x8e0) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x8e0);
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar8 = 0;
      do {
        iVar5 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar5 + 0x60 + iVar8) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"_DEB0"), iVar4 != 0)) {
          *(undefined4 *)(iVar5 + 0x1c + iVar8) = uVar2;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar7 < *(short *)(param_1 + 0x324));
    }
  }
  return;
}

// 005E17A0  BehaviorDebrisExplode::vf40  size=12  [class]
bool BehaviorDebrisExplode::vf40(void)

{
  int iVar1;
  
  iVar1 = BehaviorDebrisBase::vf40();
  return iVar1 != 0;
}

// 005E2C30  BehaviorDebrisExplode::thunk_vf54  size=5  [class]
void __fastcall BehaviorDebrisExplode::thunk_vf54(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined **ppuStack_1f0;
  uint uStack_1ec;
  int *piStack_1e8;
  int iStack_1e4;
  undefined1 *puStack_1e0;
  int aiStack_1dc [3];
  undefined1 auStack_1d0 [380];
  undefined1 auStack_54 [80];
  
  Behavior::vf54();
  if (param_1[0x1ed] == 0) {
LAB_005e18b2:
    switchD_0080dbae::default();
  }
  else {
    iVar2 = param_1[0x220];
    if ((param_1[0x234] == 0) || (param_1[0x23d] != 0)) {
      FUN_0091e980(param_1);
    }
    if (iVar2 != 0) goto LAB_005e18b2;
  }
  if (param_1[0x1ed] == 0) {
    return;
  }
  if (param_1[0x220] != 0) {
    return;
  }
  if (param_1[0x21c] == 0) {
    return;
  }
  FUN_004066f0();
  uStack_1ec = 0x7f7fffee;
  puStack_1e0 = auStack_1d0;
  ppuStack_1f0 = hkpAllCdPointCollector::vftable;
  aiStack_1dc[1] = 0x80000008;
  aiStack_1dc[0] = 0;
  FUN_00900350(&ppuStack_1f0);
  fStack_224 = (float)(uint)(aiStack_1dc[0] != 0);
  hkpCdPointCollector::hkpCdPointCollector_4();
  if (fStack_224 == 0.0) {
    piStack_1e8 = aiStack_1dc;
    ppuStack_1f0 = hkpAllCdBodyPairCollector::vftable;
    puStack_1e0 = &DAT_80000010;
    iStack_1e4 = 0;
    uStack_1ec = uStack_1ec & 0xffffff00;
    FUN_00900320(&ppuStack_1f0);
    fStack_224 = (float)(uint)(iStack_1e4 != 0);
    hkpCdBodyPairCollector::hkpCdBodyPairCollector();
  }
  if (param_1[0x12d] == 0xe00a7) {
    fStack_224 = 0.0;
LAB_005e1992:
    FUN_009174c0();
    FUN_00a8b6e0();
    (**(code **)(*param_1 + 0x118))(0);
  }
  else {
    if (((fStack_224 == 0.0) || ((int *)param_1[0x162] == (int *)0x0)) ||
       (*(int *)param_1[0x162] == 0)) goto LAB_005e1992;
    FUN_00917560();
    if (param_1[0x239] == 0) {
      param_1[0x239] = 1;
      param_1[0x238] = 0x3f800000;
    }
    if (param_1[0x162] != 0) {
      FUN_005d9170();
      iVar2 = param_1[0x162];
      if (1 < *(int *)(iVar2 + 8)) {
        param_1[0x225] = 1;
      }
      if (((*(int *)(param_1[0xcc] + 0xcc) < 0xb) && (*(int *)(iVar2 + 0x34) != 0)) &&
         (FUN_009f8ae0(*(undefined4 *)(iVar2 + 0x38)), param_1[0x1ed] != 0)) {
        FUN_0091c760(*(undefined4 *)(param_1[0x162] + 0x38));
      }
    }
    iVar2 = FUN_009f9460(param_1[0x12d]);
    if ((((iVar2 != 0) || (iVar2 = FUN_009f94a0(param_1[0x12d]), iVar2 != 0)) ||
        (iVar2 = FUN_009f9480(param_1[0x12d]), iVar2 != 0)) && (*(int *)(param_1[0xcc] + 0xc4) != 0)
       ) {
      FUN_005d95e0(&fStack_210);
      fStack_220 = fStack_210 * -0.01;
      fStack_21c = fStack_20c * -0.01;
      fStack_218 = fStack_208 * -0.01;
      fStack_214 = fStack_204 * -0.01;
      (**(code **)(*param_1 + 0x70))(&fStack_220);
      fStack_224 = 0.0;
      fStack_220 = 1.0;
      fStack_21c = 0.0;
      FUN_00ddcfe0(auStack_54,&fStack_224,0x3fc90fdb);
      D3DXVec3TransformNormal(&fStack_204,&fStack_214,auStack_54);
      fStack_230 = fStack_210 * 0.02;
      fStack_22c = fStack_20c * 0.02;
      fStack_228 = fStack_208 * 0.02;
      fStack_224 = fStack_204 * 0.02;
      (**(code **)(*param_1 + 0x70))(&fStack_230);
      switchD_0080dbae::default();
      if (param_1[0x1ed] != 0) {
        FUN_0091ea00(param_1);
      }
    }
    if (param_1[0x248] == 0) goto LAB_005e19bc;
  }
  param_1[0x223] = 1;
LAB_005e19bc:
  FUN_00900ca0();
  if (param_1[0x1ed] != 0) {
    param_1[0x226] = 1;
    if (param_1[0x211] == 0) {
      FUN_0091adf0(2);
    }
    if (param_1[0x210] == 0) {
      FUN_0091adf0(1);
    }
  }
  if (((*(int *)(param_1[0xcc] + 0xc4) != 0) && (fStack_224 == 0.0)) && (param_1[0x12d] != 0x20141))
  {
    fVar3 = (float10)FUN_00916de0();
    fVar3 = fVar3 * (float10)-1.0;
    fStack_210 = (float)fVar3;
    fStack_20c = (float)((float10)0.2 * fVar3);
    fStack_208 = (float)fVar3;
    pfVar1 = (float *)FUN_005d95e0(&fStack_220);
    fStack_200 = fStack_210 * *pfVar1;
    fStack_1fc = pfVar1[1] * fStack_20c;
    fStack_1f8 = pfVar1[2] * fStack_208;
    fStack_1f4 = pfVar1[3] * fStack_204;
    fVar3 = (float10)FUN_00a93060();
    if ((float10)0 != fVar3) {
      FUN_0091ab40(&fStack_200);
    }
  }
  FUN_00406760();
  return;
}

