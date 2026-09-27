// src/phase/app/pd30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4B9B0..00D70A20, 10 functions

#include "types.h"

// 00D4B9B0  cPd30::vf08  size=107  [class]
void __fastcall cPd30::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0094e9c0(0x3855170f,7);
  if (iVar1 != 0) {
    FUN_00c82240(0xf);
    FUN_00c82240(10);
  }
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  uVar2 = FUN_00e03ea0("rd24_guncamera_base_guncamebase");
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  return;
}

// 00D4BA20  cPd30::vf0C  size=1  [class]
void cPd30::vf0C(void)

{
  return;
}

// 00D4BA40  FUN_00d4ba40  size=113  [callgraph]
void __fastcall FUN_00d4ba40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x1c))(*(undefined4 *)(param_1 + 0x120),0xd24);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_009c4bf0();
  if (iVar2 < 3) {
    piVar1 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d4ba83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x20))();
    return;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d4ba9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x1c))();
    return;
  }
  piVar1 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d4baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x20))();
  return;
}

// 00D4BAC0  FUN_00d4bac0  size=96  [callgraph]
void FUN_00d4bac0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 local_8 [2];
  
  local_8[0] = 0xe0111;
  local_8[1] = 0xe0074;
  uVar4 = 0;
  do {
    iVar1 = FUN_00a18d70(param_1,local_8[uVar4]);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        if (param_2 == 0) {
          pcVar3 = *(code **)(*piVar2 + 0x20);
        }
        else {
          pcVar3 = *(code **)(*piVar2 + 0x1c);
        }
        (*pcVar3)();
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return;
}

// 00D56920  cPd30::vf10  size=88  [class]
void __fastcall cPd30::vf10(int param_1)

{
  int *piVar1;
  
  FUN_00951f30();
  DAT_01bea090 = DAT_01bea090 & 0xf3ffffff;
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x84))();
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  }
  DAT_0188694c = 0;
  return;
}

// 00D56980  cPd30::vf18  size=167  [class]
void __fastcall cPd30::vf18(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (0.0 < *(float *)(param_1 + 0x128)) {
    fVar2 = (float10)FUN_00e03a90(0);
    fVar2 = (float10)*(float *)(param_1 + 0x128) - fVar2;
    *(float *)(param_1 + 0x128) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      DAT_0188694c = 1;
      *(float *)(param_1 + 0x128) = (float)(float10)0;
      if (*(int *)(param_1 + 0x1e4) == 0) {
        *(undefined4 *)(param_1 + 0x1e4) = 1;
        FUN_00954070();
      }
    }
  }
  FUN_00d4ba40();
  if ((*(int *)(param_1 + 0x1ec) == 0) && (iVar1 = FUN_00937e00("PD30_M1_CLEAR1"), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1ec) = 1;
    *(undefined4 *)(param_1 + 0x1e0) = 1;
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
  }
  return;
}

// 00D5D880  cPd30::vf30  size=79  [class]
undefined * cPd30::vf30(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = "aFstartFadePD30";
  while( true ) {
    pcVar2 = pcVar2 + 2;
    bVar1 = *param_1;
    bVar3 = bVar1 < (byte)*pcVar2;
    if (bVar1 != *pcVar2) break;
    if (bVar1 == 0) {
      return &DAT_00d56880;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < (byte)pcVar2[1];
    if (bVar1 != pcVar2[1]) break;
    param_1 = param_1 + 2;
    if (bVar1 == 0) {
      return &DAT_00d56880;
    }
  }
  return (undefined *)(~-(uint)(1 - bVar3 != (uint)(bVar3 != 0)) & 0xd56880);
}

// 00D5D8D0  cPd30::vf2C  size=20  [class]
void cPd30::vf2C(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x5c))(0xffff);
  return;
}

// 00D651D0  cPd30::vf14  size=1918  [class]
void __thiscall cPd30::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined *puVar15;
  int iStack_174;
  int *piStack_170;
  int *piStack_16c;
  int local_168;
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [348];
  
  pcVar14 = "PD30_M1_ON";
  uVar13 = 0;
  local_168 = param_1;
  uVar2 = FUN_00e03ea0("PD30_M1_ON",0,"PD30_M1_ON");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  if (iVar3 == 0) {
    FUN_00c82290(0x13);
    *(undefined4 *)(param_1 + 0x128) = 0x42700000;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
    DAT_0188694c = 1;
  }
  pcVar14 = "PD30_MISSION2";
  uVar13 = 1;
  uVar2 = FUN_00e03ea0("PD30_MISSION2",1,"PD30_MISSION2");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  if (iVar3 != 0) {
    pcVar14 = "PD30_M2_END";
    uVar13 = 0;
    uVar2 = FUN_00e03ea0("PD30_M2_END",0,"PD30_M2_END");
    iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x1e8) == 0)) {
      piVar4 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar4 + 0xa0))(0xd20,7,"PD30_MISSION2_EFF");
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
  }
  pcVar14 = "PD30_MISSION3";
  uVar13 = 1;
  uVar2 = FUN_00e03ea0("PD30_MISSION3",1,"PD30_MISSION3");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  *(uint *)(param_1 + 0x11c) = (uint)(iVar3 == 0);
  iVar3 = FUN_00e03ea0("PD30_MISSION3");
  if ((DAT_018b9178 == iVar3) || (iVar3 = FUN_00e03ea0("PD30_MISSION2"), DAT_018b9178 == iVar3)) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(0xffffffff);
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar15 = &DAT_01b35b90;
      (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
      iVar3 = FUN_00dd6d80(puVar15);
      if (iVar3 != 0) {
        piVar4[0x15c1] = 0;
      }
    }
  }
  pcVar14 = "PD30_MISSION3";
  uVar13 = 1;
  uVar2 = FUN_00e03ea0("PD30_MISSION3",1,"PD30_MISSION3");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar4 + 0xa4))(0xd20,0,"PD30_MISSION2_EFF");
  }
  pcVar14 = "PD30_MISSION2";
  uVar13 = 1;
  uVar2 = FUN_00e03ea0("PD30_MISSION2",1,"PD30_MISSION2");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
    FUN_00951f30();
  }
  pcVar14 = "PD30_MISSION3";
  uVar13 = 1;
  uVar2 = FUN_00e03ea0("PD30_MISSION3",1,"PD30_MISSION3");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  if (iVar3 != 0) {
    FUN_00a33520(0,0xd20,2);
    FUN_00a33520(0,0xd20,3);
    FUN_00a33520(1,0xd20,4);
  }
  pbVar6 = DAT_018b925c;
  if ((DAT_018b925c != (byte *)0x0) && (DAT_018b925c != (byte *)0x0)) {
    pcVar14 = "PD30_M1_RESULT";
    pbVar5 = DAT_018b925c;
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < (byte)*pcVar14;
      if (bVar1 != *pcVar14) {
LAB_00d65445:
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00d6544a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < (byte)pcVar14[1];
      if (bVar1 != pcVar14[1]) goto LAB_00d65445;
      pbVar5 = pbVar5 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d6544a:
    if (iVar3 == 0) {
      piVar4 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar4 + 0x28))(0);
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        FUN_004117d0(0x2ba,iVar3,param_1 + 0x130);
        FUN_00a963e0(auStack_160);
      }
    }
    pbVar5 = &DAT_016be094;
    do {
      bVar1 = *pbVar6;
      bVar12 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d654b8:
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00d654bd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar12 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d654b8;
      pbVar6 = pbVar6 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d654bd:
    if (iVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 0x130) + 8))(0,0,0);
      FUN_00eaa840();
      piVar4 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar4 + 0x28))(0);
      if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        puVar15 = &DAT_01b35b90;
        (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
        iVar3 = FUN_00dd6d80(puVar15);
        if (iVar3 != 0) {
          FUN_008b9340(0);
        }
      }
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
      DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
    }
  }
  pcVar14 = "PD30_MISSION2";
  uVar13 = 1;
  uVar2 = FUN_00e03ea0("PD30_MISSION2",1,"PD30_MISSION2");
  iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
  if (iVar3 != 0) {
    pcVar14 = "PD30_M2_CLEAR";
    uVar13 = 1;
    uVar2 = FUN_00e03ea0("PD30_M2_CLEAR",1,"PD30_M2_CLEAR");
    iVar3 = FUN_00d4f0b0(uVar2,uVar13,pcVar14);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x124) = 1;
      iStack_174 = iVar3;
      piVar4 = (int *)FUN_00c14bb0();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&iStack_174,0xd22);
      piStack_170 = piVar4;
      if (piVar4 != (int *)0x0) {
        piStack_16c = (int *)0x0;
        piVar11 = piVar4;
        if (0 < iStack_174) {
          do {
            if (((int *)*piVar11 != (int *)0x0) &&
               (iVar3 = (**(code **)(*(int *)*piVar11 + 8))(), iVar3 != 0)) {
              iVar3 = (**(code **)(*(int *)*piVar11 + 0xc))();
              iVar9 = 0;
              piVar4 = piStack_170;
              if (0 < iVar3) {
                do {
                  (**(code **)(*(int *)*piVar11 + 300))(auStack_164,iVar9);
                  FUN_00916360();
                  iVar9 = iVar9 + 1;
                  piVar4 = piStack_170;
                } while (iVar9 < iVar3);
              }
            }
            piStack_16c = (int *)((int)piStack_16c + 1);
            piVar11 = piVar11 + 1;
          } while ((int)piStack_16c < iStack_174);
        }
        iVar3 = 0;
        if (0 < iStack_174) {
          do {
            if (((int *)piVar4[iVar3] != (int *)0x0) &&
               (iVar9 = (**(code **)(*(int *)piVar4[iVar3] + 8))(), iVar9 != 0)) {
              (**(code **)(*(int *)piVar4[iVar3] + 0xe0))(1,"_hvk_confloor3",0,0);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iStack_174);
        }
      }
    }
  }
  iVar3 = FUN_00e03ea0("PD30_M2_CLEAR");
  if (DAT_018b9258 != 0) {
    iVar9 = 0;
    if (0 < *(int *)(DAT_018b9258 + 4)) {
      piVar4 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
      do {
        if (*piVar4 == iVar3) {
          if (-1 < iVar9) {
            iVar3 = FUN_00e03ea0(&DAT_018b917c);
            if (DAT_018b9258 == 0) goto LAB_00d65702;
            iVar7 = 0;
            if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d65702;
            piVar4 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
            goto LAB_00d656f6;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar4 = piVar4 + 0xb;
      } while (iVar9 < *(int *)(DAT_018b9258 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbf8,"PD30_M2_CLEAR");
  goto LAB_00d657f3;
  while( true ) {
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar7) break;
LAB_00d658f5:
    if (*piVar4 == iVar3) goto LAB_00d65904;
  }
LAB_00d65901:
  iVar7 = -1;
LAB_00d65904:
  if (iVar7 == iVar9) {
    uVar10 = 1;
  }
  else {
    uVar10 = (uint)(iVar9 < iVar7);
  }
  goto LAB_00d65918;
  while( true ) {
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 0xb;
    if (*(int *)(DAT_018b9258 + 4) <= iVar7) break;
LAB_00d656f6:
    if (*piVar4 == iVar3) goto LAB_00d65705;
  }
LAB_00d65702:
  iVar7 = -1;
LAB_00d65705:
  if (((iVar7 == iVar9) || (iVar9 < iVar7)) && (*(int *)(local_168 + 0x124) != 0)) {
    *(undefined4 *)(local_168 + 0x124) = 0;
    iStack_174 = 0;
    piVar4 = (int *)FUN_00c14bb0();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&iStack_174,0xd22);
    piStack_16c = piVar4;
    if (piVar4 != (int *)0x0) {
      piStack_170 = (int *)0x0;
      piVar11 = piVar4;
      if (0 < iStack_174) {
        do {
          if (((int *)*piVar11 != (int *)0x0) &&
             (iVar3 = (**(code **)(*(int *)*piVar11 + 8))(), iVar3 != 0)) {
            iVar3 = (**(code **)(*(int *)*piVar11 + 0xc))();
            iVar9 = 0;
            piVar4 = piStack_16c;
            if (0 < iVar3) {
              do {
                (**(code **)(*(int *)*piVar11 + 300))(auStack_164,iVar9);
                FUN_0091a8a0();
                iVar9 = iVar9 + 1;
                piVar4 = piStack_16c;
              } while (iVar9 < iVar3);
            }
          }
          piStack_170 = (int *)((int)piStack_170 + 1);
          piVar11 = piVar11 + 1;
        } while ((int)piStack_170 < iStack_174);
      }
      iVar3 = 0;
      if (0 < iStack_174) {
        do {
          if (((int *)piVar4[iVar3] != (int *)0x0) &&
             (iVar9 = (**(code **)(*(int *)piVar4[iVar3] + 8))(), iVar9 != 0)) {
            (**(code **)(*(int *)piVar4[iVar3] + 0xe0))(0,&DAT_016be07c,0,0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_174);
      }
    }
  }
LAB_00d657f3:
  pcVar14 = "PD30_MISSION1";
  pbVar6 = param_3;
  do {
    bVar1 = *pbVar6;
    bVar12 = bVar1 < (byte)*pcVar14;
    if (bVar1 != *pcVar14) {
LAB_00d65820:
      iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00d65825;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar12 = bVar1 < (byte)pcVar14[1];
    if (bVar1 != pcVar14[1]) goto LAB_00d65820;
    pbVar6 = pbVar6 + 2;
    pcVar14 = pcVar14 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d65825:
  if (iVar3 == 0) {
LAB_00d65859:
    *(undefined4 *)(local_168 + 0x1e0) = 1;
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
  }
  else {
    pcVar14 = "PD30_MISSION3";
    do {
      bVar1 = *param_3;
      bVar12 = bVar1 < (byte)*pcVar14;
      if (bVar1 != *pcVar14) {
LAB_00d65850:
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00d65855;
      }
      if (bVar1 == 0) break;
      bVar1 = param_3[1];
      bVar12 = bVar1 < (byte)pcVar14[1];
      if (bVar1 != pcVar14[1]) goto LAB_00d65850;
      param_3 = param_3 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d65855:
    if (iVar3 == 0) goto LAB_00d65859;
  }
  iVar3 = FUN_00e03ea0("PD30_MISSION2");
  if (DAT_018b9258 != 0) {
    iVar9 = 0;
    if (0 < *(int *)(DAT_018b9258 + 4)) {
      piVar4 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
      do {
        if (*piVar4 == iVar3) {
          if (-1 < iVar9) {
            iVar3 = FUN_00e03ea0(&DAT_018b917c);
            if (DAT_018b9258 == 0) goto LAB_00d65901;
            iVar7 = 0;
            if (*(int *)(DAT_018b9258 + 4) < 1) goto LAB_00d65901;
            piVar4 = (int *)(*(int *)(DAT_018b9258 + 8) + 0x20);
            goto LAB_00d658f5;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar4 = piVar4 + 0xb;
      } while (iVar9 < *(int *)(DAT_018b9258 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbf8,"PD30_MISSION2");
  uVar10 = 0;
LAB_00d65918:
  uVar8 = (uint)(uVar10 == 0);
  uVar2 = FUN_00e03ea0("lobbybench",uVar8);
  FUN_00d4bac0(uVar2,uVar8);
  uVar2 = FUN_00e03ea0("lobbysofa",uVar10);
  FUN_00d4bac0(uVar2,uVar10);
  return;
}

// 00D70A20  cPd30::vf00  size=65  [class]
undefined4 * __thiscall cPd30::vf00(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

