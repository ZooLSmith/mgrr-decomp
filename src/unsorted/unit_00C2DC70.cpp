// src/unsorted/unit_00C2DC70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C2DC70..00C317B0, 33 functions

#include "mgrr.h"

// 00C2DC70  FUN_00c2dc70  size=336  [run]
void __fastcall FUN_00c2dc70(int param_1)

{
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_00c21960(0x20,&DAT_01b7bd48);
  FUN_00964450(0x20,&DAT_01b7bd48);
  FUN_008609b0(0x20,&DAT_01b7bd48);
  FUN_00a7c950();
  FUN_00c21b90(10,&DAT_01b7bd48);
  FUN_00c21c60(10,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0xac) = 1;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 1;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 100) = 0x40400000;
  *(undefined4 *)(param_1 + 0xe8) = 0x40600000;
  return;
}

// 00C2DDC0  FUN_00c2ddc0  size=52  [run]
void __fastcall FUN_00c2ddc0(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  return;
}

// 00C2DE00  FUN_00c2de00  size=53  [run]
void __fastcall FUN_00c2de00(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  FUN_00a7c950();
  if (*(int *)(param_1 + 0x178) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  return;
}

// 00C2DE50  FUN_00c2de50  size=415  [run]
undefined4 FUN_00c2de50(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [92];
  
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          iVar2 = FUN_00a12210(*(undefined4 *)(param_2 + 8));
          if (iVar2 != 0) {
            uStack_84 = *(undefined4 *)(iVar2 + 0x40);
            uStack_80 = *(undefined4 *)(iVar2 + 0x44);
            uStack_7c = *(undefined4 *)(iVar2 + 0x48);
            uStack_78 = *(undefined4 *)(iVar2 + 0x4c);
            uStack_94 = 0;
            uStack_90 = 0x3f800000;
            uStack_8c = 0;
            D3DXVec3TransformNormal(&uStack_94,&uStack_94,iVar1 + 0x10);
            uVar8 = 0;
            pcVar7 = "weakPointViewCheck";
            uVar6 = 0;
            uVar5 = 0x48;
            uVar4 = 0;
            uVar3 = FUN_009f8b40(0,0,0,0,0x48,0,"weakPointViewCheck",0);
            uVar3 = FUN_00410130(3,uVar3);
            FUN_00445d40(&stack0xffffff50,&uStack_90,uVar3,uVar4,uVar5,uVar6,pcVar7,uVar8);
            iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_2
                              (&uStack_80,auStack_70,0,0,auStack_60);
            if (iVar1 != 0) {
              *param_1 = uStack_80;
              param_1[1] = uStack_7c;
              param_1[2] = uStack_78;
              param_1[3] = uStack_74;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00C2DFF0  FUN_00c2dff0  size=725  [run]
undefined4 FUN_00c2dff0(float *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  float fStack_b8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [92];
  
  iVar5 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
      (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
     ((iVar6 = FUN_00a7c8a0(), iVar6 != 0 &&
      (iVar6 = FUN_00a12210(*(undefined4 *)(param_2 + 8)), iVar6 != 0)))) {
    fStack_94 = *(float *)(iVar6 + 0x40);
    fStack_90 = *(float *)(iVar6 + 0x44);
    fStack_8c = *(float *)(iVar6 + 0x48);
    fStack_88 = *(float *)(iVar6 + 0x4c);
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x44);
    fVar3 = *(float *)(iVar5 + 0x48);
    fVar4 = *(float *)(iVar5 + 0x4c);
    fStack_a4 = 0.0;
    fStack_a0 = 1.0;
    fStack_9c = 0.0;
    D3DXVec3TransformNormal(&fStack_a4,&fStack_a4,iVar5 + 0x10);
    uVar12 = 0;
    pcVar11 = "weakPointViewCheck";
    uVar10 = 0;
    uVar9 = 0x48;
    uVar8 = 0;
    fStack_90 = fVar2 * 1.35 + unaff_EDI;
    fStack_8c = fVar3 * 1.35 + unaff_ESI;
    fStack_88 = fVar4 * 1.35 + fStack_b8;
    fStack_84 = fStack_a4 * 1.35 + fVar1;
    uVar7 = FUN_009f8b40(0,0,0,0,0x48,0,"weakPointViewCheck",0);
    uVar7 = FUN_00410130(3,uVar7);
    FUN_00445d40(&stack0xffffff40,&fStack_a0,uVar7,uVar8,uVar9,uVar10,pcVar11,uVar12);
    iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_80,auStack_70,0,0,auStack_60);
    if (iVar5 != 0) {
      fVar1 = fStack_a0 - fStack_90;
      fVar2 = fStack_9c - fStack_8c;
      fStack_98 = fStack_98 - fStack_88;
      fVar3 = fStack_94 - fStack_84;
      if (((fVar1 != 0.0) || (fVar2 != 0.0)) || (fStack_98 != 0.0)) {
        fVar4 = fStack_98 * fStack_98 + fVar1 * fVar1 + fVar2 * fVar2;
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          FUN_00ddf460(&stack0xffffff40,&stack0xffffff40);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_98 = 0.0;
          fVar1 = 0.0;
          fVar2 = 1.0;
        }
      }
      *param_1 = fStack_80 + fVar1 * param_3;
      param_1[1] = fStack_7c + fVar2 * param_3;
      param_1[2] = fStack_78 + fStack_98 * param_3;
      param_1[3] = param_3 * fVar3 + fStack_74;
      return 1;
    }
  }
  return 0;
}

// 00C2E2D0  FUN_00c2e2d0  size=437  [run]
undefined4
FUN_00c2e2d0(float *param_1,float *param_2,float *param_3,float param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = *param_1 - *param_3;
  local_1c = param_1[1] - param_3[1];
  local_18 = param_1[2] - param_3[2];
  local_30 = *param_2 - *param_1;
  local_2c = param_2[1] - param_1[1];
  local_28 = param_2[2] - param_1[2];
  local_24 = param_2[3] - param_1[3];
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  fVar1 = local_30 * local_20 + local_2c * local_1c + local_28 * local_18;
  fVar2 = (local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) - param_4 * param_4;
  if ((0.0 < fVar2) && (0.0 < fVar1)) {
    return 0;
  }
  fVar2 = fVar1 * fVar1 - fVar2;
  if (fVar2 < 0.0) {
    return 0;
  }
  fVar1 = -fVar1 - SQRT(fVar2);
  *param_5 = fVar1;
  if (fVar1 < 0.0) {
    *param_5 = 0.0;
  }
  fVar1 = *param_5;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *param_6 = *param_1 + local_30 * fVar1;
  param_6[1] = fVar2 + local_2c * fVar1;
  param_6[2] = local_28 * fVar1 + fVar3;
  param_6[3] = fVar4 + local_24 * fVar1;
  return 1;
}

// 00C2E490  FUN_00c2e490  size=331  [run]
void __fastcall FUN_00c2e490(int param_1)

{
  FUN_00dd7240();
  FUN_00c21f20(10,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_00c21960(10,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  FUN_00a7c950();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x26c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x27c) = 0x32;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x284) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
  return;
}

// 00C2E5E0  FUN_00c2e5e0  size=104  [run]
void __thiscall FUN_00c2e5e0(int param_1,int param_2)

{
  FUN_00418130(param_2);
  *(undefined4 *)(param_1 + 0x194) = 0x41f00000;
  *(undefined4 *)(param_1 + 400) = 1;
  if ((*(int *)(param_1 + 0x230) != 0) && (*(int *)(param_1 + 0x22c) != *(int *)(param_2 + 0x8c))) {
    FUN_00418130(param_2);
    *(undefined4 *)(param_1 + 0x234) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x230) = 1;
  }
  return;
}

// 00C2E650  FUN_00c2e650  size=65  [run]
void __fastcall FUN_00c2e650(int param_1)

{
  if (((*(int *)(param_1 + 0x230) != 0) && (*(int *)(param_1 + 400) != 0)) &&
     (*(int *)(param_1 + 0x22c) != *(int *)(param_1 + 0x18c))) {
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}

// 00C2E6A0  FUN_00c2e6a0  size=536  [run]
void __thiscall FUN_00c2e6a0(int *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1[0xce] == param_2) {
    return;
  }
  if (param_2 == 0x138) {
    param_2 = 0x140;
  }
  else if (param_2 == 0x520) {
    param_2 = 0x510;
  }
  if (param_1[2] != 0) {
    FUN_00a00bd0(*param_1,0);
    param_1[0xce] = 0;
  }
  param_1[1] = 0;
  if ((param_2 & 0xff0) == 0) {
    *param_1 = -1;
    return;
  }
  iVar1 = (param_2 | 0xa000) << 4;
  *param_1 = iVar1;
  iVar1 = FUN_009fe920(iVar1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00a00a60(*param_1,0);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0xa70) {
    iVar1 = 0x39d1b717;
  }
  else {
    iVar1 = 0x391d4952;
  }
  param_1[0x2c] = iVar1;
  param_1[0x2d] = (int)((float)param_1[0x2b] * (float)param_1[0x2c]);
  if (DAT_018b9174 < 0x471) {
    if (DAT_018b9174 != 0x470) {
      if (DAT_018b9174 < 0x341) {
        if (DAT_018b9174 != 0x340) {
          if (0x230 < DAT_018b9174) {
            switch(DAT_018b9174) {
            case 0x2d0:
            case 0x310:
            case 800:
            case 0x330:
              goto switchD_00c2e7d9_caseD_2d0;
            default:
              goto switchD_00c2e7d9_caseD_2d1;
            }
          }
          if (DAT_018b9174 != 0x230) {
            if (0x210 < DAT_018b9174) {
              if (DAT_018b9174 == 0x220) {
                iVar1 = -0x4036f025;
                goto LAB_00c2e898;
              }
              goto switchD_00c2e7d9_caseD_2d1;
            }
            if (DAT_018b9174 != 0x210) {
              iVar1 = DAT_018b9174 + -0x110;
              bVar2 = iVar1 == 0;
              goto LAB_00c2e798;
            }
          }
        }
      }
      else if (DAT_018b9174 < 0x431) {
        if (DAT_018b9174 != 0x430) {
          switch(DAT_018b9174) {
          case 0x350:
          case 0x360:
          case 0x410:
          case 0x420:
            break;
          default:
            goto switchD_00c2e7d9_caseD_2d1;
          }
        }
      }
      else if (DAT_018b9174 != 0x448) {
        iVar1 = DAT_018b9174 + -0x458;
        bVar2 = iVar1 == 0;
        goto LAB_00c2e798;
      }
    }
  }
  else {
    if (0xc40 < DAT_018b9174) {
      if (DAT_018b9174 < 0xd31) {
        if (DAT_018b9174 != 0xd30) {
          switch(DAT_018b9174) {
          case 0xc50:
          case 0xc60:
            goto switchD_00c2e7d9_caseD_2d0;
          default:
            goto switchD_00c2e7d9_caseD_2d1;
          case 0xd10:
            goto switchD_00c2e876_caseD_d10;
          }
        }
      }
      else if (((DAT_018b9174 != 0xd40) && (DAT_018b9174 != 0xd50)) && (DAT_018b9174 != 0xd60)) {
switchD_00c2e7d9_caseD_2d1:
        iVar1 = 0;
        goto LAB_00c2e898;
      }
      iVar1 = 0x40490fdb;
      goto LAB_00c2e898;
    }
    if (DAT_018b9174 != 0xc40) {
      if (DAT_018b9174 < 0xa16) {
        if (DAT_018b9174 != 0xa15) {
          if (DAT_018b9174 < 0x711) {
            if (DAT_018b9174 != 0x710) {
              iVar1 = DAT_018b9174 + -0x510;
              bVar2 = iVar1 == 0;
              goto LAB_00c2e798;
            }
          }
          else if (DAT_018b9174 != 0xa10) goto switchD_00c2e7d9_caseD_2d1;
        }
switchD_00c2e876_caseD_d10:
        iVar1 = 0x3fc90fdb;
        goto LAB_00c2e898;
      }
      if (DAT_018b9174 != 0xc10) {
        iVar1 = DAT_018b9174 + -0xc20;
        bVar2 = iVar1 == 0;
LAB_00c2e798:
        if ((!bVar2) && (iVar1 != 0x10)) goto switchD_00c2e7d9_caseD_2d1;
      }
    }
  }
switchD_00c2e7d9_caseD_2d0:
  iVar1 = -0x4036f025;
LAB_00c2e898:
  param_1[0x2e] = iVar1;
  cXmlBinary::cXmlBinary_28(param_2);
  param_1[0xcc] = 0;
  param_1[0xce] = param_2;
  return;
}

// 00C2EAF0  FUN_00c2eaf0  size=426  [run]
undefined4 __fastcall FUN_00c2eaf0(int param_1)

{
  int iVar1;
  
  if (DAT_01dc1490 != 0) {
    if (((DAT_01bea090 & 0x80000000) == 0) && (iVar1 = FUN_00caad20(), iVar1 != 0)) {
      return 0;
    }
    if ((DAT_01bea070 & 0x2000000) == 0) {
      if ((DAT_01bea060 & 0x2000000) == 0) {
        if (*(int *)(param_1 + 0x31c) != 0) {
          iVar1 = *(int *)(param_1 + 0x31c) + -1;
          *(int *)(param_1 + 0x31c) = iVar1;
          if (iVar1 < 0) {
            *(undefined4 *)(param_1 + 0x31c) = 0;
          }
          return 0;
        }
        iVar1 = FUN_00cad240();
        if (((((iVar1 == 0) && (iVar1 = FUN_00cad290(), iVar1 == 0)) &&
             (iVar1 = FUN_00416910(4), iVar1 == 0)) &&
            (((iVar1 = FUN_00cad2e0(), iVar1 == 0 && (iVar1 = FUN_00cad420(), iVar1 == 0)) &&
             ((iVar1 = FUN_00416910(8), iVar1 == 0 &&
              ((iVar1 = FUN_00416d50(0x24), iVar1 == 0 && (iVar1 = FUN_00cad330(), iVar1 == 0)))))))
            ) && ((DAT_01dc1308 == 0 && (6 < DAT_01be9f94 - 1U)))) {
          iVar1 = FUN_00932720();
          if (iVar1 != 0xa15) {
            return 1;
          }
          iVar1 = FUN_00d45a70("btl_ray02_2_start");
          if (((((iVar1 == 0) && (iVar1 = FUN_00d45a70("btl_ray02_2"), iVar1 == 0)) &&
               (iVar1 = FUN_00d45a70("btl_ray02_2_end"), iVar1 == 0)) &&
              ((iVar1 = FUN_00d45a70("btl_ray02_3_start"), iVar1 == 0 &&
               (iVar1 = FUN_00d45a70("btl_ray02_3"), iVar1 == 0)))) &&
             (iVar1 = FUN_00d45a70("btl_ray02_3_end"), iVar1 == 0)) {
            return 1;
          }
        }
      }
      else if (DAT_018b9174 == 0xa15) {
        *(undefined4 *)(param_1 + 0x31c) = 5;
      }
    }
  }
  return 0;
}

// 00C2ECA0  FUN_00c2eca0  size=752  [run]
void __fastcall FUN_00c2eca0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  int local_2c;
  int local_24;
  byte local_10 [16];
  
  iVar2 = *(int *)(param_1 + 0x33c);
  if (iVar2 == 0) {
    if (DAT_018b9174 == 0xc20) {
      *(undefined4 *)(param_1 + 0x334) = 1;
      return;
    }
  }
  else {
    iVar3 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    if ((*(int *)(param_1 + 4) != 0) && (iVar4 = FUN_00a7c800(), iVar4 != 0)) {
      local_2c = 0;
      if (0 < iVar2) {
LAB_00c2ed00:
        iVar5 = FUN_00cbe780(local_2c);
        if (iVar5 != 0) {
          iVar5 = *(int *)(iVar5 + 0x14);
          FUN_0099a460(local_10,"ui%03x0_%02d%02d",iVar3,local_2c + 1,0);
          iVar9 = (int)*(short *)(iVar4 + 0x324);
          iVar10 = 0;
          if (0 < iVar9) {
            piVar11 = (int *)(*(int *)(iVar4 + 800) + 0x60);
            do {
              pbVar8 = *(byte **)(*piVar11 + 0x40);
              if (pbVar8 != (byte *)0x0) {
                pbVar6 = local_10;
                do {
                  bVar1 = *pbVar6;
                  bVar12 = bVar1 < *pbVar8;
                  if (bVar1 != *pbVar8) {
LAB_00c2ed80:
                    iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00c2ed85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar12 = bVar1 < pbVar8[1];
                  if (bVar1 != pbVar8[1]) goto LAB_00c2ed80;
                  pbVar6 = pbVar6 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_00c2ed85:
                if (iVar7 == 0) {
                  if ((iVar10 != -1) && (iVar10 * 0x70 + *(int *)(iVar4 + 800) != 0)) {
                    iVar10 = 0;
                    if (iVar9 < 1) goto LAB_00c2edfa;
                    piVar11 = (int *)(*(int *)(iVar4 + 800) + 0x60);
                    goto LAB_00c2edb0;
                  }
                  break;
                }
              }
              iVar10 = iVar10 + 1;
              piVar11 = piVar11 + 0x1c;
            } while (iVar10 < iVar9);
          }
          goto LAB_00c2ee11;
        }
        goto LAB_00c2ef40;
      }
LAB_00c2ef53:
      *(undefined4 *)(param_1 + 0x330) = 1;
      if ((iVar3 == 0x458) || (iVar3 == 0xc20)) {
        *(undefined4 *)(param_1 + 0x334) = 1;
      }
    }
  }
  return;
LAB_00c2edb0:
  do {
    pbVar8 = *(byte **)(*piVar11 + 0x40);
    if (pbVar8 != (byte *)0x0) {
      pbVar6 = local_10;
      do {
        bVar1 = *pbVar6;
        bVar12 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00c2ede0:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00c2ede5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar12 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00c2ede0;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00c2ede5:
      if (iVar7 == 0) {
        if (iVar10 == -1) {
LAB_00c2edfa:
          iVar9 = 0;
        }
        else {
          iVar9 = iVar10 * 0x70 + *(int *)(iVar4 + 800);
        }
        goto LAB_00c2ee0d;
      }
    }
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 0x1c;
  } while (iVar10 < iVar9);
  iVar9 = 0;
LAB_00c2ee0d:
  *(uint *)(iVar9 + 0x38) = *(uint *)(iVar9 + 0x38) | 1;
LAB_00c2ee11:
  local_24 = 1;
  if (1 < iVar5) {
LAB_00c2ee24:
    FUN_0099a460(local_10,"ui%03x0_%02d%02d",iVar3,local_2c + 1,local_24);
    iVar9 = (int)*(short *)(iVar4 + 0x324);
    iVar10 = 0;
    if (0 < iVar9) {
      piVar11 = (int *)(*(int *)(iVar4 + 800) + 0x60);
      do {
        pbVar8 = *(byte **)(*piVar11 + 0x40);
        if (pbVar8 != (byte *)0x0) {
          pbVar6 = local_10;
          do {
            bVar1 = *pbVar6;
            bVar12 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00c2ee90:
              iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00c2ee95;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar12 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00c2ee90;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00c2ee95:
          if (iVar7 == 0) {
            if ((iVar10 != -1) && (iVar10 * 0x70 + *(int *)(iVar4 + 800) != 0)) {
              iVar10 = 0;
              if (iVar9 < 1) goto LAB_00c2ef0a;
              piVar11 = (int *)(*(int *)(iVar4 + 800) + 0x60);
              goto LAB_00c2eec0;
            }
            break;
          }
        }
        iVar10 = iVar10 + 1;
        piVar11 = piVar11 + 0x1c;
      } while (iVar10 < iVar9);
    }
    goto LAB_00c2ef21;
  }
LAB_00c2ef40:
  local_2c = local_2c + 1;
  if (iVar2 <= local_2c) goto LAB_00c2ef53;
  goto LAB_00c2ed00;
LAB_00c2eec0:
  do {
    pbVar8 = *(byte **)(*piVar11 + 0x40);
    if (pbVar8 != (byte *)0x0) {
      pbVar6 = local_10;
      do {
        bVar1 = *pbVar6;
        bVar12 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00c2eef0:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00c2eef5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar12 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00c2eef0;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00c2eef5:
      if (iVar7 == 0) {
        if (iVar10 == -1) {
LAB_00c2ef0a:
          iVar9 = 0;
        }
        else {
          iVar9 = iVar10 * 0x70 + *(int *)(iVar4 + 800);
        }
        goto LAB_00c2ef1d;
      }
    }
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 0x1c;
  } while (iVar10 < iVar9);
  iVar9 = 0;
LAB_00c2ef1d:
  *(uint *)(iVar9 + 0x38) = *(uint *)(iVar9 + 0x38) & 0xfffffffe;
LAB_00c2ef21:
  local_24 = local_24 + 1;
  if (iVar5 <= local_24) goto LAB_00c2ef40;
  goto LAB_00c2ee24;
}

// 00C2EFA0  FUN_00c2efa0  size=3470  [run]
void __fastcall FUN_00c2efa0(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int local_70;
  int local_5c;
  byte local_40 [16];
  byte local_30 [16];
  byte local_20 [28];
  
  if (*(int *)(param_1 + 0x33c) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      return;
    }
    iVar12 = FUN_00a7c800();
    if (iVar12 == 0) {
      return;
    }
    iVar16 = FUN_00d45a70("PC20_LIFT_END");
    if (iVar16 == 0) {
      return;
    }
    _strcpy_s((char *)local_30,0x10,"uic200_0100");
    iVar16 = (int)*(short *)(iVar12 + 0x324);
    iVar7 = 0;
    if (0 < iVar16) {
      piVar15 = (int *)(*(int *)(iVar12 + 800) + 0x60);
      do {
        pbVar13 = *(byte **)(*piVar15 + 0x40);
        if (pbVar13 != (byte *)0x0) {
          pbVar9 = local_30;
          do {
            bVar5 = *pbVar9;
            bVar18 = bVar5 < *pbVar13;
            if (bVar5 != *pbVar13) {
LAB_00c2fb90:
              iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_00c2fb95;
            }
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar18 = bVar5 < pbVar13[1];
            if (bVar5 != pbVar13[1]) goto LAB_00c2fb90;
            pbVar9 = pbVar9 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar5 != 0);
          iVar8 = 0;
LAB_00c2fb95:
          if (iVar8 == 0) {
            if ((iVar7 != -1) && (iVar7 * 0x70 + *(int *)(iVar12 + 800) != 0)) {
              iVar7 = 0;
              if (iVar16 < 1) goto LAB_00c2fc0d;
              piVar15 = (int *)(*(int *)(iVar12 + 800) + 0x60);
              goto LAB_00c2fbc4;
            }
            break;
          }
        }
        iVar7 = iVar7 + 1;
        piVar15 = piVar15 + 0x1c;
      } while (iVar7 < iVar16);
    }
    goto LAB_00c2fc24;
  }
  pfVar6 = (float *)FUN_00caac10();
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[2];
  iVar12 = *(int *)(*(int *)(param_1 + 0x33c) + 8);
  iVar16 = *(int *)(*(int *)(param_1 + 0x33c) + 4);
  if (*(int *)(param_1 + 0x330) == 0) {
    return;
  }
  iVar7 = FUN_00a7c800();
  local_70 = 0;
  if (0 < iVar16) {
LAB_00c2f020:
    iVar8 = FUN_00cbe780(local_70);
    if (iVar8 != 0) {
      if ((((*(float *)(iVar8 + 4) <= fVar2) &&
           (fVar2 < *(float *)(iVar8 + 0xc) != (fVar2 == *(float *)(iVar8 + 0xc)))) &&
          (*(float *)(iVar8 + 8) <= fVar4)) &&
         (fVar4 < *(float *)(iVar8 + 0x10) != (fVar4 == *(float *)(iVar8 + 0x10)))) {
        iVar8 = *(int *)(iVar8 + 0x14);
        pfVar6 = (float *)FUN_00cbe700(*(undefined4 *)(param_1 + 0x324));
        if ((((pfVar6 == (float *)0x0) || (fVar3 <= *pfVar6)) ||
            ((fVar3 < pfVar6[1] == (fVar3 == pfVar6[1]) || (*(int *)(param_1 + 0x324) == -1)))) &&
           (iVar17 = 0, 0 < iVar8)) {
          do {
            pfVar6 = (float *)FUN_00cbe700(iVar17);
            if (((pfVar6 != (float *)0x0) && (*pfVar6 < fVar3)) &&
               (fVar3 < pfVar6[1] != (fVar3 == pfVar6[1]))) {
              *(int *)(param_1 + 0x324) = iVar17;
              break;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < iVar8);
        }
        if (*(int *)(param_1 + 0x324) != *(int *)(param_1 + 0x328)) {
          FUN_0099a460(local_20,"ui%03x0_%02d%02d",iVar12,local_70 + 1,*(int *)(param_1 + 0x324));
          local_5c = 0;
          if (0 < iVar8) {
LAB_00c2f150:
            FUN_0099a460(local_40,"ui%03x0_%02d%02d",iVar12,local_70 + 1,local_5c);
            pbVar13 = local_20;
            pbVar9 = local_40;
            do {
              bVar5 = *pbVar9;
              bVar18 = bVar5 < *pbVar13;
              if (bVar5 != *pbVar13) {
LAB_00c2f1b2:
                iVar17 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                goto LAB_00c2f1b7;
              }
              if (bVar5 == 0) break;
              bVar5 = pbVar9[1];
              bVar18 = bVar5 < pbVar13[1];
              if (bVar5 != pbVar13[1]) goto LAB_00c2f1b2;
              pbVar9 = pbVar9 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar5 != 0);
            iVar17 = 0;
LAB_00c2f1b7:
            iVar14 = 0;
            if (iVar17 == 0) {
              iVar17 = (int)*(short *)(iVar7 + 0x324);
              if (0 < iVar17) {
                iVar11 = *(int *)(iVar7 + 800);
                piVar15 = (int *)(iVar11 + 0x60);
                do {
                  pbVar13 = *(byte **)(*piVar15 + 0x40);
                  if (pbVar13 != (byte *)0x0) {
                    pbVar9 = local_40;
                    do {
                      bVar5 = *pbVar9;
                      bVar18 = bVar5 < *pbVar13;
                      if (bVar5 != *pbVar13) {
LAB_00c2f212:
                        iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                        goto LAB_00c2f217;
                      }
                      if (bVar5 == 0) break;
                      bVar5 = pbVar9[1];
                      bVar18 = bVar5 < pbVar13[1];
                      if (bVar5 != pbVar13[1]) goto LAB_00c2f212;
                      pbVar9 = pbVar9 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar5 != 0);
                    iVar10 = 0;
LAB_00c2f217:
                    if (iVar10 == 0) {
                      if ((iVar14 != -1) && (iVar14 * 0x70 + iVar11 != 0)) {
                        iVar14 = 0;
                        if (iVar17 < 1) goto LAB_00c2f299;
                        piVar15 = (int *)(iVar11 + 0x60);
                        goto LAB_00c2f249;
                      }
                      break;
                    }
                  }
                  iVar14 = iVar14 + 1;
                  piVar15 = piVar15 + 0x1c;
                } while (iVar14 < iVar17);
              }
            }
            else {
              iVar17 = (int)*(short *)(iVar7 + 0x324);
              if (0 < iVar17) {
                piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
                do {
                  pbVar13 = *(byte **)(*piVar15 + 0x40);
                  if (pbVar13 != (byte *)0x0) {
                    pbVar9 = local_40;
                    do {
                      bVar5 = *pbVar9;
                      bVar18 = bVar5 < *pbVar13;
                      if (bVar5 != *pbVar13) {
LAB_00c2f303:
                        iVar11 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                        goto LAB_00c2f308;
                      }
                      if (bVar5 == 0) break;
                      bVar5 = pbVar9[1];
                      bVar18 = bVar5 < pbVar13[1];
                      if (bVar5 != pbVar13[1]) goto LAB_00c2f303;
                      pbVar9 = pbVar9 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar5 != 0);
                    iVar11 = 0;
LAB_00c2f308:
                    if (iVar11 == 0) {
                      if ((iVar14 != -1) && (iVar14 * 0x70 + *(int *)(iVar7 + 800) != 0)) {
                        iVar14 = 0;
                        if (iVar17 < 1) goto LAB_00c2f380;
                        piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
                        goto LAB_00c2f337;
                      }
                      break;
                    }
                  }
                  iVar14 = iVar14 + 1;
                  piVar15 = piVar15 + 0x1c;
                } while (iVar14 < iVar17);
              }
            }
            goto LAB_00c2f397;
          }
LAB_00c2f3aa:
          *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x324);
        }
        *(int *)(param_1 + 0x32c) = local_70;
        *(undefined4 *)(param_1 + 800) = 1;
        goto LAB_00c2f65f;
      }
      if (*(int *)(param_1 + 0x32c) != local_70) goto LAB_00c2f65f;
      if (*(int *)(param_1 + 800) == 1) {
        iVar8 = *(int *)(iVar8 + 0x14);
        FUN_0099a460(local_30,"ui%03x0_%02d%02d",iVar12,local_70 + 1,0);
        iVar17 = (int)*(short *)(iVar7 + 0x324);
        if (0 < iVar17) {
          piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
          iVar14 = 0;
          do {
            pbVar13 = *(byte **)(*piVar15 + 0x40);
            if (pbVar13 != (byte *)0x0) {
              pbVar9 = local_30;
              do {
                bVar5 = *pbVar9;
                bVar18 = bVar5 < *pbVar13;
                if (bVar5 != *pbVar13) {
LAB_00c2f470:
                  iVar11 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                  goto LAB_00c2f475;
                }
                if (bVar5 == 0) break;
                bVar5 = pbVar9[1];
                bVar18 = bVar5 < pbVar13[1];
                if (bVar5 != pbVar13[1]) goto LAB_00c2f470;
                pbVar9 = pbVar9 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar5 != 0);
              iVar11 = 0;
LAB_00c2f475:
              if (iVar11 == 0) {
                if ((iVar14 != -1) && (iVar14 * 0x70 + *(int *)(iVar7 + 800) != 0)) {
                  iVar14 = 0;
                  if (iVar17 < 1) goto LAB_00c2f4ed;
                  piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
                  goto LAB_00c2f4a4;
                }
                break;
              }
            }
            iVar14 = iVar14 + 1;
            piVar15 = piVar15 + 0x1c;
          } while (iVar14 < iVar17);
        }
        goto LAB_00c2f504;
      }
      goto LAB_00c2f655;
    }
    goto LAB_00c2f65f;
  }
LAB_00c2f66e:
  if (*(int *)(param_1 + 0x334) == 0) {
    return;
  }
  if (iVar12 != 0x458) {
    if (iVar12 != 0xc20) {
      return;
    }
    iVar12 = FUN_00d45a70("PC20_LIFT_END");
    if (iVar12 == 0) {
      return;
    }
    _strcpy_s((char *)local_30,0x10,"uic200_0100");
    iVar12 = (int)*(short *)(iVar7 + 0x324);
    iVar16 = 0;
    if (0 < iVar12) {
      piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
      do {
        pbVar13 = *(byte **)(*piVar15 + 0x40);
        if (pbVar13 != (byte *)0x0) {
          pbVar9 = local_30;
          do {
            bVar5 = *pbVar9;
            bVar18 = bVar5 < *pbVar13;
            if (bVar5 != *pbVar13) {
LAB_00c2f960:
              iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_00c2f965;
            }
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar18 = bVar5 < pbVar13[1];
            if (bVar5 != pbVar13[1]) goto LAB_00c2f960;
            pbVar9 = pbVar9 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar5 != 0);
          iVar8 = 0;
LAB_00c2f965:
          if (iVar8 == 0) {
            if ((iVar16 != -1) && (iVar16 * 0x70 + *(int *)(iVar7 + 800) != 0)) {
              iVar16 = 0;
              if (iVar12 < 1) goto LAB_00c2f9dd;
              piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
              goto LAB_00c2f994;
            }
            break;
          }
        }
        iVar16 = iVar16 + 1;
        piVar15 = piVar15 + 0x1c;
      } while (iVar16 < iVar12);
    }
    goto LAB_00c2f9f4;
  }
  iVar12 = FUN_00d45a70("p458_RIDE_SET");
  if ((iVar12 == 0) && (iVar12 = FUN_00d45a70("p458_END"), iVar12 == 0)) {
    return;
  }
  FUN_0099a460(local_30,"ui4580_0100");
  iVar12 = (int)*(short *)(iVar7 + 0x324);
  iVar16 = 0;
  if (0 < iVar12) {
    piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar15 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pbVar9 = local_30;
        do {
          bVar5 = *pbVar9;
          bVar18 = bVar5 < *pbVar13;
          if (bVar5 != *pbVar13) {
LAB_00c2f720:
            iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_00c2f725;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar18 = bVar5 < pbVar13[1];
          if (bVar5 != pbVar13[1]) goto LAB_00c2f720;
          pbVar9 = pbVar9 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar5 != 0);
        iVar8 = 0;
LAB_00c2f725:
        if (iVar8 == 0) {
          if ((iVar16 != -1) && (iVar16 * 0x70 + *(int *)(iVar7 + 800) != 0)) {
            iVar16 = 0;
            if (iVar12 < 1) goto LAB_00c2f79d;
            piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
            goto LAB_00c2f754;
          }
          break;
        }
      }
      iVar16 = iVar16 + 1;
      piVar15 = piVar15 + 0x1c;
    } while (iVar16 < iVar12);
  }
  goto LAB_00c2f7b4;
LAB_00c2fbc4:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2fbf1:
          iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2fbf6;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2fbf1;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar8 = 0;
LAB_00c2fbf6:
      if (iVar8 == 0) {
        if (iVar7 == -1) {
LAB_00c2fc0d:
          iVar16 = 0;
        }
        else {
          iVar16 = iVar7 * 0x70 + *(int *)(iVar12 + 800);
        }
        goto LAB_00c2fc20;
      }
    }
    iVar7 = iVar7 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar7 < iVar16);
  iVar16 = 0;
LAB_00c2fc20:
  *(uint *)(iVar16 + 0x38) = *(uint *)(iVar16 + 0x38) & 0xfffffffe;
LAB_00c2fc24:
  _strcpy_s((char *)local_30,0x10,"uic200_0101");
  iVar16 = (int)*(short *)(iVar12 + 0x324);
  iVar7 = 0;
  if (iVar16 < 1) {
    return;
  }
  iVar12 = *(int *)(iVar12 + 800);
  piVar15 = (int *)(iVar12 + 0x60);
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2fc90:
          iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2fc95;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2fc90;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar8 = 0;
LAB_00c2fc95:
      if (iVar8 == 0) {
        if (iVar7 == -1) {
          return;
        }
        if (iVar7 * 0x70 + iVar12 == 0) {
          return;
        }
        iVar7 = 0;
        if (iVar16 < 1) goto LAB_00c2fd15;
        piVar15 = (int *)(iVar12 + 0x60);
        break;
      }
    }
    iVar7 = iVar7 + 1;
    piVar15 = piVar15 + 0x1c;
    if (iVar16 <= iVar7) {
      return;
    }
  } while( true );
LAB_00c2fcc1:
  pbVar13 = *(byte **)(*piVar15 + 0x40);
  if (pbVar13 != (byte *)0x0) {
    pbVar9 = local_30;
    do {
      bVar5 = *pbVar9;
      bVar18 = bVar5 < *pbVar13;
      if (bVar5 != *pbVar13) {
LAB_00c2fcf0:
        iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_00c2fcf5;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar18 = bVar5 < pbVar13[1];
      if (bVar5 != pbVar13[1]) goto LAB_00c2fcf0;
      pbVar9 = pbVar9 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar5 != 0);
    iVar8 = 0;
LAB_00c2fcf5:
    if (iVar8 == 0) goto LAB_00c2fd10;
  }
  iVar7 = iVar7 + 1;
  piVar15 = piVar15 + 0x1c;
  if (iVar16 <= iVar7) {
    uRam00000038 = uRam00000038 | 1;
    return;
  }
  goto LAB_00c2fcc1;
LAB_00c2f337:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_40;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f364:
          iVar11 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f369;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f364;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar11 = 0;
LAB_00c2f369:
      if (iVar11 == 0) {
        if (iVar14 == -1) {
LAB_00c2f380:
          iVar17 = 0;
        }
        else {
          iVar17 = iVar14 * 0x70 + *(int *)(iVar7 + 800);
        }
        goto LAB_00c2f393;
      }
    }
    iVar14 = iVar14 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar14 < iVar17);
  iVar17 = 0;
LAB_00c2f393:
  *(uint *)(iVar17 + 0x38) = *(uint *)(iVar17 + 0x38) & 0xfffffffe;
  goto LAB_00c2f397;
LAB_00c2f249:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_40;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f276:
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f27b;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f276;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar10 = 0;
LAB_00c2f27b:
      if (iVar10 == 0) {
        if (iVar14 == -1) {
LAB_00c2f299:
          uRam00000038 = uRam00000038 | 1;
        }
        else {
          puVar1 = (uint *)(iVar14 * 0x70 + iVar11 + 0x38);
          *puVar1 = *puVar1 | 1;
        }
        goto LAB_00c2f397;
      }
    }
    iVar14 = iVar14 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar14 < iVar17);
  uRam00000038 = uRam00000038 | 1;
LAB_00c2f397:
  local_5c = local_5c + 1;
  if (iVar8 <= local_5c) goto LAB_00c2f3aa;
  goto LAB_00c2f150;
LAB_00c2f4a4:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f4d1:
          iVar11 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f4d6;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f4d1;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar11 = 0;
LAB_00c2f4d6:
      if (iVar11 == 0) {
        if (iVar14 == -1) {
LAB_00c2f4ed:
          iVar17 = 0;
        }
        else {
          iVar17 = iVar14 * 0x70 + *(int *)(iVar7 + 800);
        }
        goto LAB_00c2f500;
      }
    }
    iVar14 = iVar14 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar14 < iVar17);
  iVar17 = 0;
LAB_00c2f500:
  *(uint *)(iVar17 + 0x38) = *(uint *)(iVar17 + 0x38) | 1;
LAB_00c2f504:
  local_5c = 1;
  if (1 < iVar8) {
LAB_00c2f517:
    FUN_0099a460(local_30,"ui%03x0_%02d%02d",iVar12,local_70 + 1,local_5c);
    iVar17 = (int)*(short *)(iVar7 + 0x324);
    iVar14 = 0;
    if (0 < iVar17) {
      piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
      do {
        pbVar13 = *(byte **)(*piVar15 + 0x40);
        if (pbVar13 != (byte *)0x0) {
          pbVar9 = local_30;
          do {
            bVar5 = *pbVar9;
            bVar18 = bVar5 < *pbVar13;
            if (bVar5 != *pbVar13) {
LAB_00c2f590:
              iVar11 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_00c2f595;
            }
            if (bVar5 == 0) break;
            bVar5 = pbVar9[1];
            bVar18 = bVar5 < pbVar13[1];
            if (bVar5 != pbVar13[1]) goto LAB_00c2f590;
            pbVar9 = pbVar9 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar5 != 0);
          iVar11 = 0;
LAB_00c2f595:
          if (iVar11 == 0) {
            if ((iVar14 != -1) && (iVar14 * 0x70 + *(int *)(iVar7 + 800) != 0)) {
              iVar14 = 0;
              if (iVar17 < 1) goto LAB_00c2f60d;
              piVar15 = (int *)(*(int *)(iVar7 + 800) + 0x60);
              goto LAB_00c2f5c4;
            }
            break;
          }
        }
        iVar14 = iVar14 + 1;
        piVar15 = piVar15 + 0x1c;
      } while (iVar14 < iVar17);
    }
    goto LAB_00c2f624;
  }
LAB_00c2f637:
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
LAB_00c2f655:
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
LAB_00c2f65f:
  local_70 = local_70 + 1;
  if (iVar16 <= local_70) goto LAB_00c2f66e;
  goto LAB_00c2f020;
LAB_00c2f5c4:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f5f1:
          iVar11 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f5f6;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f5f1;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar11 = 0;
LAB_00c2f5f6:
      if (iVar11 == 0) {
        if (iVar14 == -1) {
LAB_00c2f60d:
          iVar17 = 0;
        }
        else {
          iVar17 = iVar14 * 0x70 + *(int *)(iVar7 + 800);
        }
        goto LAB_00c2f620;
      }
    }
    iVar14 = iVar14 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar14 < iVar17);
  iVar17 = 0;
LAB_00c2f620:
  *(uint *)(iVar17 + 0x38) = *(uint *)(iVar17 + 0x38) & 0xfffffffe;
LAB_00c2f624:
  local_5c = local_5c + 1;
  if (iVar8 <= local_5c) goto LAB_00c2f637;
  goto LAB_00c2f517;
LAB_00c2f994:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f9c1:
          iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f9c6;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f9c1;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar8 = 0;
LAB_00c2f9c6:
      if (iVar8 == 0) {
        if (iVar16 == -1) {
LAB_00c2f9dd:
          iVar12 = 0;
        }
        else {
          iVar12 = iVar16 * 0x70 + *(int *)(iVar7 + 800);
        }
        goto LAB_00c2f9f0;
      }
    }
    iVar16 = iVar16 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar16 < iVar12);
  iVar12 = 0;
LAB_00c2f9f0:
  *(uint *)(iVar12 + 0x38) = *(uint *)(iVar12 + 0x38) & 0xfffffffe;
LAB_00c2f9f4:
  _strcpy_s((char *)local_30,0x10,"uic200_0101");
  iVar16 = (int)*(short *)(iVar7 + 0x324);
  iVar8 = 0;
  if (iVar16 < 1) {
    return;
  }
  iVar12 = *(int *)(iVar7 + 800);
  piVar15 = (int *)(iVar12 + 0x60);
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2fa60:
          iVar7 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2fa65;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2fa60;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar7 = 0;
LAB_00c2fa65:
      if (iVar7 == 0) {
        if (iVar8 == -1) {
          return;
        }
        if (iVar8 * 0x70 + iVar12 == 0) {
          return;
        }
        iVar7 = 0;
        if (iVar16 < 1) goto LAB_00c2fd15;
        piVar15 = (int *)(iVar12 + 0x60);
        do {
          pbVar13 = *(byte **)(*piVar15 + 0x40);
          if (pbVar13 != (byte *)0x0) {
            pbVar9 = local_30;
            do {
              bVar5 = *pbVar9;
              bVar18 = bVar5 < *pbVar13;
              if (bVar5 != *pbVar13) {
LAB_00c2fad0:
                iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                goto LAB_00c2fad5;
              }
              if (bVar5 == 0) break;
              bVar5 = pbVar9[1];
              bVar18 = bVar5 < pbVar13[1];
              if (bVar5 != pbVar13[1]) goto LAB_00c2fad0;
              pbVar9 = pbVar9 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar5 != 0);
            iVar8 = 0;
LAB_00c2fad5:
            if (iVar8 == 0) {
LAB_00c2fd10:
              if (iVar7 != -1) {
                puVar1 = (uint *)(iVar7 * 0x70 + iVar12 + 0x38);
                *puVar1 = *puVar1 | 1;
                return;
              }
LAB_00c2fd15:
              uRam00000038 = uRam00000038 | 1;
              return;
            }
          }
          iVar7 = iVar7 + 1;
          piVar15 = piVar15 + 0x1c;
          if (iVar16 <= iVar7) {
            uRam00000038 = uRam00000038 | 1;
            return;
          }
        } while( true );
      }
    }
    iVar8 = iVar8 + 1;
    piVar15 = piVar15 + 0x1c;
    if (iVar16 <= iVar8) {
      return;
    }
  } while( true );
LAB_00c2f85f:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f890:
          iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f895;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f890;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar8 = 0;
LAB_00c2f895:
      if (iVar8 == 0) {
        if (iVar16 == -1) {
LAB_00c2f8ac:
          iVar7 = 0;
        }
        else {
          iVar7 = iVar16 * 0x70 + iVar7;
        }
        goto LAB_00c2f8b7;
      }
    }
    iVar16 = iVar16 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar16 < iVar12);
  iVar7 = 0;
LAB_00c2f8b7:
  *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 1;
  goto LAB_00c2f8bb;
LAB_00c2f754:
  do {
    pbVar13 = *(byte **)(*piVar15 + 0x40);
    if (pbVar13 != (byte *)0x0) {
      pbVar9 = local_30;
      do {
        bVar5 = *pbVar9;
        bVar18 = bVar5 < *pbVar13;
        if (bVar5 != *pbVar13) {
LAB_00c2f781:
          iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_00c2f786;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar9[1];
        bVar18 = bVar5 < pbVar13[1];
        if (bVar5 != pbVar13[1]) goto LAB_00c2f781;
        pbVar9 = pbVar9 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar5 != 0);
      iVar8 = 0;
LAB_00c2f786:
      if (iVar8 == 0) {
        if (iVar16 == -1) {
LAB_00c2f79d:
          iVar12 = 0;
        }
        else {
          iVar12 = iVar16 * 0x70 + *(int *)(iVar7 + 800);
        }
        goto LAB_00c2f7b0;
      }
    }
    iVar16 = iVar16 + 1;
    piVar15 = piVar15 + 0x1c;
  } while (iVar16 < iVar12);
  iVar12 = 0;
LAB_00c2f7b0:
  *(uint *)(iVar12 + 0x38) = *(uint *)(iVar12 + 0x38) & 0xfffffffe;
LAB_00c2f7b4:
  FUN_0099a460(local_30,"ui4580_0101");
  iVar12 = (int)*(short *)(iVar7 + 0x324);
  iVar16 = 0;
  if (0 < iVar12) {
    iVar7 = *(int *)(iVar7 + 800);
    piVar15 = (int *)(iVar7 + 0x60);
    do {
      pbVar13 = *(byte **)(*piVar15 + 0x40);
      if (pbVar13 != (byte *)0x0) {
        pbVar9 = local_30;
        do {
          bVar5 = *pbVar9;
          bVar18 = bVar5 < *pbVar13;
          if (bVar5 != *pbVar13) {
LAB_00c2f820:
            iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_00c2f825;
          }
          if (bVar5 == 0) break;
          bVar5 = pbVar9[1];
          bVar18 = bVar5 < pbVar13[1];
          if (bVar5 != pbVar13[1]) goto LAB_00c2f820;
          pbVar9 = pbVar9 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar5 != 0);
        iVar8 = 0;
LAB_00c2f825:
        if (iVar8 == 0) {
          if ((iVar16 == -1) || (iVar16 * 0x70 + iVar7 == 0)) break;
          iVar16 = 0;
          if (iVar12 < 1) goto LAB_00c2f8ac;
          piVar15 = (int *)(iVar7 + 0x60);
          goto LAB_00c2f85f;
        }
      }
      iVar16 = iVar16 + 1;
      piVar15 = piVar15 + 0x1c;
      if (iVar12 <= iVar16) {
        *(undefined4 *)(param_1 + 0x334) = 0;
        return;
      }
    } while( true );
  }
LAB_00c2f8bb:
  *(undefined4 *)(param_1 + 0x334) = 0;
  return;
}

// 00C2FD40  FUN_00c2fd40  size=704  [run]
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall
FUN_00c2fd40(int param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  undefined1 *unaff_ESI;
  float10 fVar2;
  undefined1 *puStack_150;
  float fStack_14c;
  float fStack_148;
  float *pfStack_144;
  float fStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  float *pfStack_134;
  undefined1 *puStack_130;
  float *pfStack_12c;
  float fStack_128;
  float *pfStack_124;
  undefined1 *puStack_120;
  float *pfStack_11c;
  undefined1 *puStack_118;
  undefined4 local_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined1 auStack_fc [12];
  float local_f0;
  float local_ec;
  float local_e8 [20];
  undefined1 auStack_98 [8];
  undefined1 local_90 [8];
  undefined1 auStack_88 [20];
  undefined1 auStack_74 [112];
  
  local_f0 = 1.5707964;
  puStack_118 = local_90;
  local_ec = 0.0;
  local_e8[0] = 1.5707964;
  local_e8[1] = 1.0;
  local_e8[0x11] = 1.0;
  local_e8[0xc] = 1.0;
  local_e8[7] = 1.0;
  local_e8[2] = 1.0;
  local_e8[0x10] = 0.0;
  local_e8[0xf] = 0.0;
  local_e8[0xe] = 0.0;
  local_e8[0xd] = 0.0;
  local_e8[0xb] = 0.0;
  local_e8[10] = 0.0;
  local_e8[9] = 0.0;
  local_e8[8] = 0.0;
  local_e8[6] = 0.0;
  local_e8[5] = 0.0;
  local_e8[4] = 0.0;
  local_e8[3] = 0.0;
  local_114 = 0x3fc90fdb;
  pfStack_11c = (float *)0xc2fdbe;
  D3DXMatrixRotationZ();
  pfStack_124 = local_e8;
  puStack_120 = auStack_98;
  fStack_128 = 1.7907141e-38;
  pfStack_11c = pfStack_124;
  D3DXMatrixMultiply();
  if (fStack_100 != 0.0) {
    pfStack_12c = local_e8 + 0x11;
    fStack_128 = fStack_100;
    puStack_130 = (undefined1 *)0xc2fdf5;
    D3DXMatrixRotationY();
    puStack_138 = auStack_fc;
    pfStack_134 = local_e8 + 0xf;
    puStack_13c = (undefined1 *)0xc2fe0a;
    puStack_130 = puStack_138;
    D3DXMatrixMultiply();
  }
  if (fStack_104 != 0.0) {
    pfStack_12c = local_e8 + 0x11;
    fStack_128 = fStack_104;
    puStack_130 = (undefined1 *)0xc2fe30;
    D3DXMatrixRotationX();
    puStack_138 = auStack_fc;
    pfStack_134 = local_e8 + 0xf;
    puStack_13c = (undefined1 *)0xc2fe45;
    puStack_130 = puStack_138;
    D3DXMatrixMultiply();
  }
  fStack_128 = *(float *)(param_1 + 0xb4);
  pfStack_12c = *(float **)(param_1 + 0xb4);
  puStack_130 = *(undefined1 **)(param_1 + 0xb4);
  pfStack_134 = (float *)param_2;
  puStack_138 = (undefined1 *)0xc2fe72;
  D3DXMatrixScaling();
  puStack_13c = auStack_74;
  puStack_138 = (undefined1 *)param_5;
  fStack_140 = 1.7907392e-38;
  D3DXMatrixRotationY();
  fStack_140 = param_2;
  pfStack_144 = &fStack_10c;
  fStack_148 = param_2;
  fStack_14c = 1.7907409e-38;
  D3DXMatrixMultiply();
  fStack_14c = param_2;
  puStack_150 = auStack_88;
  D3DXMatrixMultiply(param_2);
  puStack_138 = *(undefined1 **)(param_3 + 0x4c);
  pfStack_144 = (float *)(*(float *)(param_3 + 0x40) * -1.0);
  puStack_13c = (undefined1 *)(*(float *)(param_3 + 0x48) * -1.0);
  fStack_140 = 0.0;
  D3DXVec4Transform(local_e8 + 1,&pfStack_144,param_2);
  fVar2 = (float10)FUN_00cad4b0();
  puStack_150 = (undefined1 *)(float)(fVar2 * (float10)1094.0);
  fVar2 = (float10)FUN_00cad4d0();
  fStack_14c = (float)(fVar2 * (float10)144.0);
  fStack_148 = 0.0;
  pfStack_144 = (float *)0x3f800000;
  FUN_00d9fab0(&fStack_140,&puStack_150);
  fStack_14c = fStack_10c;
  fStack_148 = fStack_108;
  pfStack_144 = (float *)0x3f800000;
  fVar1 = fStack_108 * fStack_108 + fStack_10c * fStack_10c + (float)unaff_ESI * (float)unaff_ESI;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    puStack_150 = unaff_ESI;
    FUN_00ddf460(&puStack_150,&puStack_150);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_148 = 0.0;
    puStack_150 = (undefined1 *)0x0;
    fStack_14c = 1.0;
  }
  *(float *)((int)param_2 + 0x30) = local_f0 + (float)puStack_150 * -0.0001 + fStack_140;
  *(float *)((int)param_2 + 0x34) = local_ec + fStack_14c * -0.0001 + (float)puStack_13c;
  *(float *)((int)param_2 + 0x38) = fStack_148 * -0.0001 + (float)puStack_138 + local_e8[0];
  *(undefined4 *)((int)param_2 + 0x3c) = 0x3f800000;
  return 1;
}

// 00C30000  FUN_00c30000  size=2655  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c30000(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  char local_40 [64];
  
  switch(DAT_01be9f94) {
  case 0:
    iVar4 = FUN_00eb4340(DAT_01be9f88);
    if (iVar4 != 0) {
      DAT_01bea070 = DAT_01bea070 | 0x200000;
      if (DAT_01be9f32 != '\0') {
        FUN_00c193b0();
        FUN_00951930();
        FUN_00a7f330();
      }
      DAT_01be9f94 = DAT_01be9f94 + 1;
      return;
    }
    break;
  case 1:
    if ((DAT_01be8e44 < 4) && (DAT_01dc5510 == 0)) {
      iVar4 = FUN_00932720();
      if (iVar4 == 0xf0a) {
        FUN_00e80d20();
        DAT_01be9f94 = DAT_01be9f94 + 1;
        return;
      }
      FUN_00e80ce0(&DAT_018aa470);
      DAT_01be9f94 = DAT_01be9f94 + 1;
      return;
    }
    break;
  case 2:
    iVar4 = FUN_00e7a640(&DAT_018aa470);
    if ((iVar4 == 0) && (DAT_018b5758 == 0)) {
      iVar4 = FUN_00e7a690(&DAT_018aa470);
      if (iVar4 == 0) {
        DAT_01be9f94 = 6;
        return;
      }
      _sprintf_s(local_40,0x40,"bgm_ev%04x_start",DAT_018aa474);
      FUN_00e5e1b0(local_40);
      _sprintf_s(local_40,0x40,"se_ev%04x_start",DAT_018aa474);
      FUN_00e5e050(local_40,0);
      iVar4 = FUN_00932720();
      if (iVar4 == 0xf0a) {
        FUN_00e80d40();
      }
      else {
        FUN_00e80d00(&DAT_018aa470);
      }
      (**(code **)(*DAT_01bea100 + 0x34))();
      DAT_01be9f94 = DAT_01be9f94 + 1;
      DAT_01be9f33 = 1;
      return;
    }
    break;
  case 3:
    iVar3 = FUN_00e7a6e0(&DAT_018aa470);
    iVar4 = DAT_01be9f88;
    if (((iVar3 != 0) && (DAT_01be9f88 != 0)) && (DAT_01be9f84 = DAT_01be9f84 + 1, 5 < DAT_01be9f84)
       ) {
      FUN_0049cd00(10);
      FUN_00ebdd50(iVar4);
      DAT_01be9f94 = DAT_01be9f94 + 1;
      DAT_01be9f88 = 0;
      return;
    }
    break;
  case 4:
    iVar4 = FUN_00df7c00(8);
    if (iVar4 != 0) {
      thunk_FUN_00e7d700();
      DAT_01be9f94 = 0xffffffff;
      return;
    }
    if (DAT_01b5d1dc == 0) {
      iVar4 = FUN_00e7a5f0(&DAT_018aa470);
      if (iVar4 == 0) {
        if ((DAT_01b391fc != 0) && (iVar4 = FUN_00991e70(1), iVar4 != -1)) {
          DAT_01bea1a0 = 1;
        }
        DAT_01be9f88 = cFade::set(0,0xff000000,0xff000000,1,1,0,0x68);
        DAT_01be9f94 = DAT_01be9f94 + 3;
      }
      else {
        iVar4 = FUN_009c5800();
        if (iVar4 == 0) {
          if ((((DAT_01be9f8c != 0x28) && (DAT_01be9f8c != 0x30)) ||
              (iVar4 = FUN_00932720(), iVar4 == 0xf0a)) &&
             ((((DAT_01b7b914 & 0x100) != 0 || (iVar4 = FUN_00dd9400(0x91), iVar4 != 0)) ||
              (iVar4 = FUN_009c7c10(), iVar4 != 0)))) {
            if (DAT_01bea194 == (int *)0x0) {
              DAT_01bea194 = (int *)cEventPauseMenu::cEventPauseMenu_3();
            }
            if (DAT_01bea198 == (int *)0x0) {
              DAT_01bea198 = (int *)cPauseMenuBg::cPauseMenuBg_2();
            }
            FUN_00cad1b0(1);
            _DAT_01dc2d78 = 1;
            FUN_00e71c90(1);
            DAT_01be9f94 = DAT_01be9f94 + 1;
          }
        }
        else {
          DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
          DAT_01be9f94 = 6;
        }
      }
    }
    else {
      FUN_00e71c90(1);
      DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
      DAT_01be9f94 = DAT_01be9f94 + 2;
    }
    iVar4 = FUN_00932720();
    if (iVar4 != 0xf0a) {
      return;
    }
    if ((DAT_01b7b914 & 0x400) == 0) {
      if ((DAT_01b7b914 & 0x2000) == 0) {
        if ((DAT_01b7b914 & 0x800) == 0) {
          if ((DAT_01b7b914 & 0x4000) == 0) {
            if ((_DAT_01bea19c != 0.0) &&
               (((DAT_01b7b914 & 0x300) != 0 || ((DAT_01b7b914 & 0xf0) != 0)))) {
              _DAT_01bea19c = 0.0;
            }
          }
          else {
            _DAT_01bea19c = 5.0;
          }
        }
        else {
          _DAT_01bea19c = -5.0;
        }
      }
      else {
        FUN_00e71c90(1);
        DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
        iVar4 = FUN_00991e70(1);
        DAT_01bea1a0 = (uint)(iVar4 != -1);
        DAT_01be9f94 = 6;
      }
    }
    else {
      FUN_00e71c90(1);
      DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
      fVar6 = (float10)FUN_00e773a0(&DAT_018aa470);
      if (fVar6 < (float10)60.0 == (fVar6 == (float10)60.0)) {
        DAT_01bea1a0 = 0xffffffff;
        DAT_01be9f94 = 6;
      }
      else {
        iVar4 = FUN_00991e20(1);
        DAT_01bea1a0 = -(uint)(iVar4 != -1) & 0xfffffffe;
        DAT_01be9f94 = 6;
      }
    }
    iVar4 = FUN_00e77450(&DAT_018aa470);
    if (iVar4 == 0) {
      return;
    }
    if (_DAT_01bea19c == -5.0) {
      fVar7 = (float10)FUN_00e773a0(&DAT_018aa470);
      fVar6 = (float10)0;
      if (fVar7 <= fVar6) {
        _DAT_01bea19c = (float)fVar6;
        FUN_00dfb400(iVar4,(float)fVar6);
        return;
      }
    }
    else if (_DAT_01bea19c == 5.0) {
      iVar3 = FUN_00dfc070(iVar4);
      if (DAT_018aa474 == 0x1000) {
        bVar1 = (float)iVar3 < 6500.0;
      }
      else if (DAT_018aa474 == 0x1010) {
        bVar1 = (float)iVar3 < 3400.0;
      }
      else {
        if (DAT_018aa474 != 0x2010) goto LAB_00c305de;
        bVar1 = (float)iVar3 < 3700.0;
      }
      if (!bVar1) {
        if ((DAT_01b391fc != 0) && (iVar3 = FUN_00991e70(1), iVar3 != -1)) {
          DAT_01bea1a0 = 1;
        }
        thunk_FUN_00e7d700();
        DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
        _DAT_01bea19c = 0.0;
        DAT_01be9f94 = 6;
        FUN_00dfb400(iVar4,0);
        return;
      }
    }
LAB_00c305de:
    FUN_00dfb400(iVar4,_DAT_01bea19c);
    break;
  case 5:
    iVar4 = FUN_009c5800();
    if ((iVar4 != 0) || (iVar4 = FUN_00e7a5f0(&DAT_018aa470), iVar4 == 0)) {
      DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
      FUN_00cad1b0(0);
      _DAT_01dc2d78 = 0;
      if (DAT_01bea198 != (int *)0x0) {
        (**(code **)*DAT_01bea198)(1);
        DAT_01bea198 = (int *)0x0;
      }
      if (DAT_01bea194 == (int *)0x0) {
        DAT_01be9f94 = 6;
        return;
      }
      (**(code **)*DAT_01bea194)(1);
      DAT_01be9f94 = 6;
      DAT_01bea194 = (int *)0x0;
      return;
    }
    uVar5 = FUN_00e77450(&DAT_018aa470);
    iVar4 = FUN_00dfbff0(uVar5);
    if (iVar4 == 0) {
      FUN_00e71c90(1);
      return;
    }
    if (DAT_01bea194 == (int *)0x0) {
LAB_00c306f7:
      DAT_01be9f94 = DAT_01be9f94 + -1;
    }
    else {
      (**(code **)(*DAT_01bea194 + 4))();
      iVar4 = FUN_00cb2660();
      if (iVar4 != 0) {
        if (DAT_01bea194[0xf] == 0) {
          if (_DAT_01dc203c <= 0.0) {
            FUN_00e71c90(0);
            if (DAT_01bea198 != (int *)0x0) {
              (**(code **)*DAT_01bea198)(1);
              DAT_01bea198 = (int *)0x0;
            }
            if (DAT_01bea194 != (int *)0x0) {
              (**(code **)*DAT_01bea194)(1);
              DAT_01bea194 = (int *)0x0;
            }
            FUN_00cad1b0(0);
            _DAT_01dc2d78 = 0;
            goto LAB_00c306f7;
          }
        }
        else if (DAT_01bea194[0xf] == 1) {
          DAT_01be9f88 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
          DAT_01be9f94 = DAT_01be9f94 + 1;
        }
      }
    }
    if (DAT_01bea198 != (int *)0x0) {
      (**(code **)(*DAT_01bea198 + 4))();
      return;
    }
    break;
  case 6:
    iVar4 = FUN_00eb4340(DAT_01be9f88);
    if (iVar4 != 0) {
      FUN_00cad1b0(0);
      _DAT_01dc2d78 = 0;
      if (DAT_01bea198 != (int *)0x0) {
        (**(code **)*DAT_01bea198)(1);
        DAT_01bea198 = (int *)0x0;
      }
      if (DAT_01bea194 != (int *)0x0) {
        (**(code **)*DAT_01bea194)(1);
        DAT_01bea194 = (int *)0x0;
      }
      DAT_01be9f94 = DAT_01be9f94 + 1;
    }
    if (DAT_01b5d1dc != 0) {
      DAT_01be9f90 = 0xffffffff;
      FUN_00cad0c0();
      FUN_009c5840();
      FUN_00c20a80();
      FUN_0049cc90(4);
      FUN_00a4ac40(0xf01,0,0xffffffff);
      FUN_009c6630();
      return;
    }
    break;
  case 7:
    if (DAT_01be9f88 != 0) {
      FUN_00ebdd50(DAT_01be9f88);
      DAT_01be9f88 = 0;
    }
    if (DAT_01be9f90 != -1) {
      FUN_00d5ecf0(DAT_01be9f90,1,1);
    }
    (&DAT_01be9f4c)[DAT_01be9f8c] = 1;
    DAT_01be9f88 = cFade::set(0,0xff000000,0,0x1e,1,0,0x68);
    if (DAT_01be9f33 != '\0') {
      FUN_00e71c90(0);
    }
    (**(code **)(*DAT_01bea100 + 0x38))();
    thunk_FUN_00e7d700();
    DAT_01be9f94 = DAT_01be9f94 + 1;
    _DAT_01bea19c = 0.0;
    DAT_01be9f31 = 0;
    return;
  case 8:
    DAT_01be9f31 = DAT_01be9f31 + '\x01';
    if (DAT_01be9f31 == '\x02') {
      _sprintf_s(local_40,0x40,"bgm_ev%04x_end",DAT_018aa474);
      FUN_00e5e1b0(local_40);
      _sprintf_s(local_40,0x40,"se_ev%04x_end",DAT_018aa474);
      FUN_00e5e050(local_40,0);
    }
    iVar4 = FUN_00932720();
    if (iVar4 == 0xf0a) {
      if (DAT_01be9f31 == '\x04') {
        FUN_00e5e1b0("bgm_pend");
      }
      iVar4 = FUN_00eb4340(DAT_01be9f88);
      if (iVar4 == 0) {
        if (DAT_01be9f88 != 0) {
          return;
        }
      }
      else {
        FUN_00ebdd50(DAT_01be9f88);
        DAT_01be9f88 = 0;
      }
      uVar2 = DAT_01bea1a0;
      DAT_01bea1a0 = 0;
      DAT_01be9f94 = 0xffffffff;
      if (uVar2 == 0xfffffffe) {
        DAT_01be9f84 = DAT_01be9f84 + -1;
        uVar5 = FUN_00991e20(0,0);
        FUN_00c1d5b0(uVar5);
        return;
      }
      if (uVar2 == 0xffffffff) {
        DAT_01be9f84 = DAT_01be9f84 + -1;
        uVar5 = FUN_00991ed0(0);
        FUN_00c1d5b0(uVar5);
        return;
      }
      if (uVar2 == 1) {
        DAT_01be9f84 = DAT_01be9f84 + -1;
        uVar5 = FUN_00991e70(0,0);
        FUN_00c1d5b0(uVar5);
        return;
      }
    }
    else {
      iVar4 = FUN_00eb4340(DAT_01be9f88);
      if (iVar4 == 0) {
        if (DAT_01be9f88 != 0) {
          return;
        }
      }
      else {
        FUN_00ebdd50(DAT_01be9f88);
        DAT_01be9f88 = 0;
      }
    }
    DAT_01bea1a0 = 0;
    DAT_01be9f94 = 0xffffffff;
    DAT_01be9f84 = 0;
    return;
  }
  return;
}

// 00C30A90  FUN_00c30a90  size=261  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c30a90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (DAT_01be9f48 == 0) {
    iVar1 = FUN_00eb4340(DAT_01be9f40);
    if (iVar1 != 0) {
      uVar2 = FUN_00c1d7d0(local_c);
      FUN_00e80d00(uVar2);
      FUN_00ebdd50(DAT_01be9f40);
      DAT_01be9f40 = 0;
      if (0 < DAT_01be9f34) {
        DAT_01be9f40 = cFade::set(0,0xff000000,0,DAT_01be9f34,1,0,0x68);
      }
      DAT_01be9f48 = DAT_01be9f48 + 1;
    }
    return;
  }
  if (DAT_01be9f48 == 1) {
    if (DAT_01be9f38 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
    FUN_00e678d0(uVar2,DAT_01be9f44,0xffffffff);
    iVar1 = FUN_00e7a5f0(local_18);
    if (iVar1 != 0) {
      return;
    }
    DAT_01be9f48 = DAT_01be9f48 + 1;
  }
  else if (DAT_01be9f48 != 2) {
    return;
  }
  if (DAT_01be9f40 != 0) {
    FUN_00ebdd50(DAT_01be9f40);
    DAT_01be9f40 = 0;
    return;
  }
  DAT_01be9f48 = 0xffffffff;
  _DAT_01be9f3c = DAT_01be9f40;
  return;
}

// 00C30BB0  FUN_00c30bb0  size=281  [run]
undefined4 __thiscall
FUN_00c30bb0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_18;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
  uVar4 = 0;
  for (piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x14); piVar2 != piVar1;
      piVar2 = (int *)piVar2[0x11]) {
    if (((*piVar2 != param_2) && ((piVar2[0xd] & param_3) != 0)) && (piVar2[0xe] < 0xb)) {
      local_40 = (float)piVar2[4];
      local_3c = (float)piVar2[5];
      local_38 = (float)piVar2[6];
      local_34 = (float)piVar2[7];
      local_28 = (float)piVar2[10];
      local_24 = (float)piVar2[0xb];
      local_18 = local_28 * param_6;
      local_50 = (float)piVar2[8] * param_6 + local_40;
      local_4c = (float)piVar2[9] * param_6 + local_3c;
      local_48 = local_18 + local_38;
      local_44 = local_34 + local_24 * param_6;
      iVar3 = FUN_00d92360(&local_40,&local_50,piVar2[0xc],param_4,param_4,param_5);
      if (iVar3 != 0) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

// 00C30CD0  FUN_00c30cd0  size=465  [run]
undefined4 __thiscall
FUN_00c30cd0(int param_1,int param_2,uint param_3,float *param_4,undefined4 param_5,float param_6,
            float *param_7)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float local_80;
  undefined4 local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
  local_80 = 10000.0;
  piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x14);
  local_7c = 0;
  iVar5 = 10;
  for (; piVar2 != piVar1; piVar2 = (int *)piVar2[0x11]) {
    if (((*piVar2 != param_2) && ((piVar2[0xd] & param_3) != 0)) && (piVar2[0xe] <= iVar5)) {
      local_40 = (float)piVar2[4];
      local_3c = (float)piVar2[5];
      local_38 = (float)piVar2[6];
      local_34 = (float)piVar2[7];
      local_5c = (float)piVar2[9];
      local_58 = (float)piVar2[10];
      local_54 = (float)piVar2[0xb];
      local_2c = local_5c * param_6;
      local_28 = local_58 * param_6;
      local_50 = (float)piVar2[8] * param_6 + local_40;
      local_4c = local_3c + local_2c;
      local_48 = local_38 + local_28;
      local_44 = local_34 + local_54 * param_6;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_70 = 0.0;
      local_6c = 0.0;
      local_68 = 0.0;
      iVar4 = FUN_00d92c80(&local_40,&local_50,piVar2[0xc],param_4,param_4,param_5,&local_20,
                           &local_70);
      if ((iVar4 != 0) &&
         (fVar3 = (local_6c - param_4[1]) * (local_6c - param_4[1]) +
                  (local_70 - *param_4) * (local_70 - *param_4) +
                  (local_68 - param_4[2]) * (local_68 - param_4[2]), fVar3 < local_80)) {
        local_7c = 1;
        *param_7 = local_70;
        param_7[1] = local_6c;
        param_7[2] = local_68;
        param_7[3] = local_64;
        iVar5 = piVar2[0xe];
        local_80 = fVar3;
      }
    }
  }
  return local_7c;
}

// 00C30EC0  FUN_00c30ec0  size=78  [run]
int __fastcall FUN_00c30ec0(int param_1)

{
  FUN_00a7f290(0);
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}

// 00C30F20  FUN_00c30f20  size=144  [run]
undefined4 FUN_00c30f20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    uVar1 = FUN_00d96a00(param_1 + 0x10,*(undefined4 *)(param_1 + 0x50),param_2 + 0x10,
                         *(undefined4 *)(param_2 + 0x50));
    break;
  case 1:
    uVar1 = FUN_00d96ac0(param_1 + 0x10,*(undefined4 *)(param_1 + 0x50),param_2 + 0x20,
                         param_2 + 0x30,*(undefined4 *)(param_2 + 0x50));
    return uVar1;
  case 2:
    uVar1 = FUN_00d91d90(param_1 + 0x10,*(undefined4 *)(param_1 + 0x50),param_2 + 0x60);
    return uVar1;
  case 4:
    uVar1 = FUN_00c1dab0();
    return uVar1;
  }
  return uVar1;
}

// 00C30FD0  FUN_00c30fd0  size=121  [run]
uint FUN_00c30fd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    uVar2 = FUN_00d96ac0(param_2 + 0x10,*(undefined4 *)(param_2 + 0x50),param_1 + 0x20,
                         param_1 + 0x30,*(undefined4 *)(param_1 + 0x50));
    return uVar2;
  case 1:
  case 4:
    uVar2 = FUN_00d917a0(param_2 + 0x20,param_2 + 0x30,*(undefined4 *)(param_2 + 0x50),
                         param_1 + 0x20,param_1 + 0x30,*(undefined4 *)(param_1 + 0x50));
    return uVar2;
  case 2:
    break;
  default:
    return 0;
  }
  param_2 = param_2 + 0x60;
  iVar1 = FUN_00d91d90(param_1 + 0x20,*(undefined4 *)(param_1 + 0x50),param_2);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00d91d90(param_1 + 0x30,*(undefined4 *)(param_1 + 0x50),param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00d91ba0(param_1 + 0x20,param_1 + 0x30,param_2);
    return (uint)(iVar1 != 0);
  }
  return 1;
}

// 00C31060  FUN_00c31060  size=206  [run]
uint FUN_00c31060(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    uVar2 = FUN_00d91d90(param_2 + 0x10,*(undefined4 *)(param_2 + 0x50),param_1 + 0x60);
    return uVar2;
  case 1:
  case 4:
    break;
  case 2:
    uVar2 = FUN_00d91e70(param_1 + 0x60,param_2 + 0x60);
  default:
    return uVar2;
  }
  param_1 = param_1 + 0x60;
  iVar1 = FUN_00d91d90(param_2 + 0x20,*(undefined4 *)(param_2 + 0x50),param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00d91d90(param_2 + 0x30,*(undefined4 *)(param_2 + 0x50),param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00d91ba0(param_2 + 0x20,param_2 + 0x30,param_1);
  return (uint)(iVar1 != 0);
}

// 00C310E0  FUN_00c310e0  size=97  [run]
uint FUN_00c310e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    uVar2 = FUN_00c1dab0();
    return uVar2;
  case 1:
  case 4:
    uVar2 = FUN_00d917a0(param_2 + 0x20,param_2 + 0x30,*(undefined4 *)(param_2 + 0x50),
                         param_1 + 0x20,param_1 + 0x30,*(undefined4 *)(param_1 + 0x50));
  default:
    return uVar2;
  case 2:
    break;
  }
  param_2 = param_2 + 0x60;
  iVar1 = FUN_00d91d90(param_1 + 0x20,*(undefined4 *)(param_1 + 0x50),param_2);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00d91d90(param_1 + 0x30,*(undefined4 *)(param_1 + 0x50),param_2);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00d91ba0(param_1 + 0x20,param_1 + 0x30,param_2);
  return (uint)(iVar1 != 0);
}

// 00C31170  FUN_00c31170  size=58  [run]
void __fastcall FUN_00c31170(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x965] = 0;
  param_1[0x964] = 0;
  param_1[0x966] = 0;
  param_1[0x967] = 0;
  param_1[0x968] = 0;
  param_1[0x969] = 0;
  return;
}

// 00C311F0  FUN_00c311f0  size=123  [run]
void __thiscall FUN_00c311f0(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar5 = 0;
    do {
      if (param_2 == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + 8 + iVar5);
        uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0xc + iVar5);
LAB_00c31227:
        if (((iVar4 != 0) && (uVar3 != 0)) && (uVar2 = 0, uVar3 != 0)) {
          do {
            if (*(int *)(iVar4 + uVar2 * 4) == param_3) {
              puVar1 = (uint *)(param_4 + (uVar6 >> 5) * 4);
              *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar6 & 0x1f);
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
      }
      else if (param_2 == 1) {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10 + iVar5);
        uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x14 + iVar5);
        goto LAB_00c31227;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x18;
    } while ((int)uVar6 < *(int *)(param_1 + 0xc));
  }
  return;
}

// 00C31270  FUN_00c31270  size=257  [run]
void __fastcall FUN_00c31270(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x2598) = 0;
  *(undefined4 *)(param_1 + 0x259c) = 0;
  *(undefined4 *)(param_1 + 0x25a0) = 0;
  *(undefined4 *)(param_1 + 0x25a4) = 0;
  if ((*(int *)(param_1 + 8) != 0) && (0 < *(int *)(param_1 + 0xc))) {
    local_20 = *(undefined4 *)(DAT_01beb8c0 + 800);
    local_1c = *(undefined4 *)(DAT_01beb8c0 + 0x324);
    local_18 = *(undefined4 *)(DAT_01beb8c0 + 0x328);
    local_14 = *(undefined4 *)(DAT_01beb8c0 + 0x32c);
    iVar3 = *(int *)(param_1 + 4);
    if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0xc))) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 0x18), iVar3 == 0 ||
        (iVar3 = FUN_00d900c0(iVar3,&local_20), iVar3 == 0)))) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
    if ((*(int *)(param_1 + 4) == -1) && (0 < *(int *)(param_1 + 0xc))) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + iVar5);
        if ((iVar4 != 0) && (iVar4 = FUN_00d900c0(iVar4,&local_20), iVar4 != 0)) {
          *(int *)(param_1 + 4) = iVar3;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 != 0xffffffff) {
      puVar1 = (uint *)(param_1 + 0x2598 + (uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
    }
  }
  return;
}

// 00C313B0  FUN_00c313b0  size=184  [run]
void __thiscall FUN_00c313b0(int *param_1,int param_2,short param_3)

{
  int iVar1;
  float *pfVar2;
  int unaff_EDI;
  float *pfVar3;
  int iVar4;
  float afStack_68 [3];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  if (param_2 != 0) {
    param_1[5] = param_2;
    param_1[6] = (int)param_3;
    param_2 = param_2 + 0x10;
    if (-1 < param_3) {
      iVar1 = FUN_00a12210((int)param_3);
      if (iVar1 != 0) {
        param_2 = iVar1 + 0x10;
      }
    }
    iVar4 = param_2;
    D3DXMatrixInverse(local_50);
    iVar1 = *param_1;
    afStack_68[0] = *(float *)(iVar1 + 0x14) - *(float *)(param_2 + 0x34);
    afStack_68[1] = *(float *)(iVar1 + 0x18) - *(float *)(param_2 + 0x38);
    afStack_68[2] = *(float *)(iVar1 + 0x1c) - *(float *)(param_2 + 0x3c);
    D3DXVec3TransformNormal(&stack0xffffff94,&stack0xffffff94,auStack_5c);
    pfVar2 = afStack_68;
    pfVar3 = (float *)(param_1 + 8);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    param_1[0x14] = 0;
    param_1[0x15] = iVar4;
    param_1[0x16] = unaff_EDI;
  }
  return;
}

// 00C31470  FUN_00c31470  size=37  [run]
void __thiscall FUN_00c31470(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00c311f0(param_2,param_3,param_1 + 1);
  *param_1 = 1;
  return;
}

// 00C314A0  FUN_00c314a0  size=60  [run]
void FUN_00c314a0(undefined4 param_1)

{
  char local_100 [256];
  
  _sprintf_s(local_100,0x100,"_Doorparam.bxm",param_1);
  FUN_00de4550(local_100,0);
  return;
}

// 00C314E0  FUN_00c314e0  size=47  [run]
int __thiscall FUN_00c314e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  iVar2 = 0;
  if (piVar3 != piVar1) {
    while (iVar2 = *piVar3, *(int *)(iVar2 + 4) != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return 0;
      }
    }
  }
  return iVar2;
}

// 00C315D0  FUN_00c315d0  size=50  [run]
void FUN_00c315d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 != (int *)0x0) {
    puVar2 = &DAT_01b34b48;
    (**(code **)(*param_1 + 4))(&DAT_01b34b48);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      FUN_004090a0(param_2);
    }
  }
  return;
}

// 00C31610  FUN_00c31610  size=413  [run]
undefined4 __thiscall FUN_00c31610(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_c;
  undefined4 local_8;
  LPCRITICAL_SECTION local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x44);
  local_8 = 0;
  local_4 = lpCriticalSection;
  if (param_1[0x4a] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = puVar3 + param_1[2];
  for (; (local_c = (int *)0x0, puVar3 != puVar1 &&
         (local_c = (int *)*puVar3, lpCriticalSection = local_4, local_c[1] != param_2));
      puVar3 = puVar3 + 1) {
  }
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
    if (local_c == (int *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c[1] = 0;
      local_c[2] = 0;
      local_c[3] = 0;
      *local_c = 0;
    }
    local_c[3] = 0;
    local_c[1] = param_2;
    local_c[2] = local_c[2] & 0xfffffffb;
    local_c[2] = local_c[2] | 0x10000;
    if (((local_c != (int *)0x0) && (local_c[3] != 0)) && ((local_c[2] & 8U) == 0)) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      if ((local_c[2] & 4U) == 0) {
        uVar8 = 3;
      }
      else {
        uVar8 = 4;
      }
      FUN_00a7c8a0(uVar8,0,0,0);
      FUN_00a8caf0(uVar8,uVar5,uVar6,uVar7);
    }
    cVar2 = (**(code **)(*param_1 + 8))(&local_c);
    if (cVar2 == '\x01') {
      local_c[2] = local_c[2] | 1;
      *local_c = param_1[2];
      local_8 = 1;
    }
    else {
      FUN_00dd5650(&DAT_016a4184,0x40,param_2);
      if (local_c != (int *)0x0) {
        if (local_c[3] != 0) {
          local_c[3] = 0;
        }
        FUN_00dd4920(local_c);
        local_c = (int *)0x0;
      }
    }
  }
  else if (((local_c[2] & 2U) == 0) && ((local_c[2] & 4U) != 0)) {
    if (local_c[3] != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 6;
      FUN_00a7c8a0(6,0,0,0);
      FUN_00a8caf0(uVar5,uVar6,uVar7,uVar8);
      uVar5 = FUN_00a7c8a0();
      iVar4 = FUN_00410f70(uVar5);
      if (iVar4 != 0) {
        FUN_004090d0(param_3);
      }
    }
    local_c[2] = local_c[2] & 0xfffffffb;
    local_8 = 1;
  }
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return local_8;
}

// 00C317B0  FUN_00c317b0  size=418  [run]
undefined4 __thiscall FUN_00c317b0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int *local_c;
  undefined4 local_8;
  LPCRITICAL_SECTION local_4;
  
  local_4 = (LPCRITICAL_SECTION)(param_1 + 0x44);
  local_8 = 0;
  if (param_1[0x4a] != 0) {
    EnterCriticalSection(local_4);
  }
  puVar3 = (undefined4 *)param_1[1];
  puVar1 = puVar3 + param_1[2];
  for (; (local_c = (int *)0x0, puVar3 != puVar1 &&
         (local_c = (int *)*puVar3, local_c[1] != param_2)); puVar3 = puVar3 + 1) {
  }
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
    if (local_c == (int *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c[1] = 0;
      local_c[2] = 0;
      local_c[3] = 0;
      *local_c = 0;
    }
    local_c[3] = 0;
    local_c[1] = param_2;
    local_c[2] = local_c[2] | 4;
    local_c[2] = local_c[2] | 0x10000;
    if (((local_c != (int *)0x0) && (local_c[3] != 0)) && ((local_c[2] & 8U) == 0)) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      if ((local_c[2] & 4U) == 0) {
        uVar9 = 3;
      }
      else {
        uVar9 = 4;
      }
      FUN_00a7c8a0(uVar9,0,0,0);
      FUN_00a8caf0(uVar9,uVar6,uVar7,uVar8);
    }
    cVar2 = (**(code **)(*param_1 + 8))(&local_c);
    if (cVar2 == '\x01') {
      local_c[2] = local_c[2] | 1;
      *local_c = param_1[2];
      local_8 = 1;
    }
    else {
      FUN_00dd5650(&DAT_016a4184,0x40,param_2);
      if (local_c != (int *)0x0) {
        if (local_c[3] != 0) {
          local_c[3] = 0;
        }
        FUN_00dd4920(local_c);
        local_c = (int *)0x0;
      }
    }
  }
  else {
    if ((*(byte *)(local_c + 2) & 4) == 0) {
      if (local_c[3] != 0) {
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 7;
        FUN_00a7c8a0(7,0,0,0);
        FUN_00a8caf0(uVar6,uVar7,uVar8,uVar9);
        piVar4 = (int *)FUN_00a7c8a0();
        if (piVar4 != (int *)0x0) {
          puVar10 = &DAT_01b34b48;
          (**(code **)(*piVar4 + 4))(&DAT_01b34b48);
          iVar5 = FUN_00dd6d80(puVar10);
          if (iVar5 != 0) {
            FUN_004090d0(param_3);
          }
        }
      }
      local_c[2] = local_c[2] | 4;
    }
    local_8 = 1;
  }
  if (local_4[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(local_4);
  }
  return local_8;
}

