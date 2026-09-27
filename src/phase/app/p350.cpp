// src/phase/app/p350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D487C0..00D70380, 9 functions

#include "mgrr.h"
#include "P350.h"

// 00D487C0  P350::vf1C  size=35  [class]
void P350::vf1C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fdbbd0(param_2,"P350_MALL_BTL");
  if (iVar1 != 0) {
    FUN_0093db80();
  }
  return;
}

// 00D487F0  P350::vf08  size=613  [class]
void __fastcall P350::vf08(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0x120) = 1;
  uVar1 = FUN_00e03ea0("P350_SAM_CHANGE");
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  uVar1 = FUN_00e03ea0(&DAT_016bc69c);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  uVar1 = FUN_00e03ea0(&DAT_016bc690);
  *(undefined4 *)(param_1 + 300) = uVar1;
  uVar1 = FUN_00e03ea0("P350_SAM_DELETE");
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0xd0600;
  *(undefined4 *)(param_1 + 0x148) = 0x16;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0xd0601;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0xe;
  *(undefined4 *)(param_1 + 0x284) = 0xd0602;
  *(undefined4 *)(param_1 + 0x288) = 9;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0xf0600;
  *(undefined4 *)(param_1 + 0x328) = 0xe;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0xf0601;
  *(undefined4 *)(param_1 + 0x3c8) = 0xb;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0xf0603;
  *(undefined4 *)(param_1 + 0x468) = 6;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_cloud01",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x1c))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_cloud02",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x1c))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_rain01",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_rain02",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x44))(1,"r30f_cloud_COL");
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x44))(0,"r30f_rain_COL");
  FUN_00a33520(0,0x300,1);
  FUN_00a33520(0,0x300,0x11);
  FUN_00a33520(1,0x300,4);
  return;
}

// 00D48A60  P350::vf0C  size=1  [class]
void P350::vf0C(void)

{
  return;
}

// 00D53190  P350::vf14  size=687  [class]
void __thiscall P350::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  undefined *puVar10;
  
  pcVar7 = "P350_START";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_00d531c0:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00d531c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_00d531c0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d531c5:
  if ((iVar3 == 0) && (iVar3 = FUN_00c81e00(0x39), iVar3 != 0)) {
    FUN_009c6540(0xc);
  }
  iVar3 = FUN_00d4f040(*(undefined4 *)(param_1 + 300),1);
  if ((iVar3 != 0) && (iVar3 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x130),1), iVar3 == 0)) {
    FUN_00cad200(1);
    DAT_01bea094 = DAT_01bea094 | 0x2400;
  }
  if ((DAT_01bea094 & 0x2000) == 0) {
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
    DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
  }
  else {
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
    DAT_01bea094 = DAT_01bea094 | 0x100;
  }
  pbVar8 = &DAT_016bc690;
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00d53284:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00d53289;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00d53284;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d53289:
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0);
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar10 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar10);
      if ((iVar3 != 0) && (piVar4[0x2dd] == 0)) {
        uVar5 = FUN_00de4500("pl0010_0205.mot");
        uVar6 = FUN_00de4500("pl0010_0205_seq.bxm");
        FUN_00bc2600(uVar5,uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,"Direct");
        *(undefined4 *)(param_1 + 0x514) = 1;
      }
    }
  }
  pbVar8 = &DAT_016bc69c;
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00d53364:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00d53369;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00d53364;
    pbVar2 = pbVar2 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d53369:
  if (iVar3 == 0) {
    DAT_01bea090 = DAT_01bea090 & 0xfe7f3bff;
    DAT_01bea094 = DAT_01bea094 & 0xfffffaff;
    DAT_01bea070 = DAT_01bea070 & 0xffefffff;
  }
  iVar3 = FUN_009c4bf0();
  if (iVar3 < 3) {
    return;
  }
  iVar3 = FUN_00c18d20(DAT_01d5bad4,2);
  if (iVar3 == 0) {
    pcVar7 = "P350_MALL_WOLF";
    pbVar2 = param_3;
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) goto LAB_00d53405;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00d53405;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
  }
  else {
    pcVar7 = "P350_MALL";
    pbVar2 = param_3;
    do {
      bVar1 = *pbVar2;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) goto LAB_00d53405;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00d53405;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
  }
LAB_00d5340a:
  if ((iVar3 == 0) && (iVar3 = FUN_00ca57e0(3), iVar3 != 0)) {
    FUN_00dd5650(&DAT_016bd024,param_3,3);
    EnemySetReader::requestEnd(3);
  }
  return;
LAB_00d53405:
  iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  goto LAB_00d5340a;
}

// 00D53440  P350::vf10  size=53  [class]
void P350::vf10(void)

{
  FUN_00cad200(0);
  DAT_01bea090 = DAT_01bea090 & 0xfe7f3bff;
  DAT_01bea070 = DAT_01bea070 & 0xffefffff;
  DAT_01bea094 = DAT_01bea094 & 0xffffdaff;
  return;
}

// 00D53480  FUN_00d53480  size=316  [callgraph]
void __fastcall FUN_00d53480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x134) == 0) {
    iVar1 = FUN_00c19c00(1,0,0);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x134) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar1 = FUN_00a7f600(0xf001e);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x138) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    iVar1 = FUN_00e03ea0("P350_SAM_CHANGE");
    if ((DAT_018b9178 == iVar1) && (*(int **)(param_1 + 0x134) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x134) + 0x1c))();
      FUN_00aa92c0(1);
      *(undefined4 *)(param_1 + 0x11c) = 1;
      FUN_00e5e0c0("r30f_se_hologram_sam",*(undefined4 *)(param_1 + 0x134),0xffffffff,0);
    }
  }
  else {
    iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
    if (iVar1 != 0) {
      iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x128),1);
      if (iVar1 == 0) goto LAB_00d5357f;
    }
    if (*(int **)(param_1 + 0x134) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x134) + 0x20))();
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
LAB_00d5357f:
  if (*(int *)(param_1 + 0x120) != 0) {
    iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
    if ((iVar1 != 0) && (*(int **)(param_1 + 0x138) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x138) + 0x20))();
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
  }
  return;
}

// 00D535C0  FUN_00d535c0  size=493  [callgraph]
void __fastcall FUN_00d535c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  float fStack_40;
  int iStack_3c;
  int local_38;
  
  piVar9 = (int *)FUN_00c13920();
  iVar10 = (**(code **)(*piVar9 + 0x28))(0);
  if ((iVar10 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
    fVar1 = *(float *)(iVar10 + 0x40);
    piVar9 = (int *)(param_1 + 0x158);
    local_38 = 6;
    fVar2 = *(float *)(iVar10 + 0x44);
    fVar3 = *(float *)(iVar10 + 0x48);
    *(undefined4 *)(param_1 + 0x504) = 0;
    fStack_40 = 10000.0;
    do {
      if ((piVar9[-3] == 0) && (iVar10 = FUN_00a7f440(piVar9[-5],piVar9 + -1), piVar9[-4] <= iVar10)
         ) {
        piVar9[-3] = 1;
      }
      puVar14 = (undefined4 *)*piVar9;
      if (puVar14 != puVar14 + piVar9[1]) {
        do {
          piVar11 = (int *)FUN_00a7c8a0();
          if (piVar11 != (int *)0x0) {
            pfVar12 = (float *)(**(code **)(*piVar11 + 0x68))();
            fVar4 = *pfVar12;
            fVar5 = pfVar12[2];
            if (*(int *)(iStack_3c + 0x504) == 0) {
              *(undefined4 *)(iStack_3c + 0x504) = *puVar14;
              pfVar12 = (float *)FUN_00a7c8b0();
              fVar6 = fVar2 - pfVar12[1];
              fStack_40 = (fVar3 - pfVar12[2]) * (fVar3 - pfVar12[2]) +
                          fVar6 * fVar6 + (fVar1 - *pfVar12) * (fVar1 - *pfVar12);
            }
            else {
              fVar6 = fVar1 - fVar4;
              fVar8 = fVar2 - pfVar12[1];
              fVar7 = fVar3 - fVar5;
              fVar6 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6;
              if (fVar6 < fStack_40) {
                *(undefined4 *)(iStack_3c + 0x504) = *puVar14;
                fStack_40 = fVar6;
              }
            }
            iVar10 = FUN_00a8cbe0(0);
            if ((iVar10 != 0) &&
               (fVar4 = fVar1 - fVar4, fVar5 = fVar3 - fVar5, fVar4 = fVar5 * fVar5 + fVar4 * fVar4,
               fVar4 < 900.0 != (fVar4 == 900.0))) {
              FUN_00a8caf0(1,0,0,0);
            }
          }
          puVar14 = puVar14 + 1;
          param_1 = iStack_3c;
        } while (puVar14 != (undefined4 *)(*piVar9 + piVar9[1] * 4));
      }
      piVar9 = piVar9 + 0x28;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
    if ((*(int *)(param_1 + 0x504) != 0) && (iVar10 = FUN_00a7c7e0(), iVar10 != 0)) {
      uVar13 = FUN_00a7c8b0();
      FUN_00937500(uVar13);
    }
  }
  return;
}

// 00D5AAA0  P350::vf18  size=296  [class]
void __fastcall P350::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  FUN_00d53480();
  iVar1 = FUN_00e03ea0(&DAT_016bc690);
  if (((DAT_018b9178 == iVar1) || (iVar1 = FUN_00e03ea0("P350_SAM_CODEC"), DAT_018b9178 == iVar1))
     && (*(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1, 10 < *(int *)(param_1 + 0x140)))
  {
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_00d535c0();
  }
  if ((DAT_01bea094 & 0x2000) != 0) {
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
  }
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
  if ((iVar1 != 0) && (iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x128),1), iVar1 == 0)) {
    DAT_01bea090 = DAT_01bea090 | 0x180c400;
    DAT_01bea094 = DAT_01bea094 | 0x500;
    DAT_01bea070 = DAT_01bea070 | 0x100000;
  }
  if (*(int *)(param_1 + 0x514) != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (iVar1 = FUN_00b7a9c0(), iVar1 != 0)) {
        (**(code **)(*piVar2 + 0x388))(0);
        piVar2[0x2dd] = 1;
        *(undefined4 *)(param_1 + 0x514) = 0;
      }
    }
  }
  return;
}

// 00D70380  P350::vf00  size=30  [class]
undefined4 __thiscall P350::vf00(undefined4 param_1,byte param_2)

{
  lib::Array<Entity*>::Array<Entity*>_7();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

