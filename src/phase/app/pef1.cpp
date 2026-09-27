// src/phase/app/pef1.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4ADA0..00D70650, 7 functions

#include "mgrr.h"
#include "cPef1.h"

// 00D4ADA0  cPef1::vf1C  size=3  [class]
void cPef1::vf1C(void)

{
  return;
}

// 00D554D0  cPef1::vf14  size=275  [class]
void __thiscall cPef1::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "PEF1_START";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d55500:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d55505;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d55500;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d55505:
  if (iVar3 == 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    return;
  }
  pcVar4 = "PEF1_GAME";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d55560:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d55565;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d55560;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d55565:
  if (iVar3 == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    FUN_00dc1270(0x43870000,1);
    *(undefined4 *)(param_1 + 0x120) = 0x40900000;
    return;
  }
  pbVar2 = &DAT_016bd174;
  do {
    bVar1 = *param_3;
    bVar5 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00d555c1:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d555c6;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar5 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00d555c1;
    param_3 = param_3 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d555c6:
  if (iVar3 == 0) {
    DAT_01bea064 = DAT_01bea064 | 0x8000000;
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  return;
}

// 00D555F0  cPef1::vf18  size=202  [class]
void __fastcall cPef1::vf18(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00e03ea0("PEF1_GAME");
  if (DAT_018b9178 == iVar1) {
    if (*(int *)(param_1 + 0x11c) == 0) {
      iVar1 = FUN_00936700("pef1_002");
      if (iVar1 == 0) goto LAB_00d5566a;
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    }
    else {
      if ((*(int *)(param_1 + 0x11c) != 1) || (iVar1 = FUN_00c18d20(0,1), iVar1 == 0))
      goto LAB_00d5566a;
      DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
      DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
    }
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
LAB_00d5566a:
  if (0.0 < *(float *)(param_1 + 0x120)) {
    fVar2 = (float10)FUN_00e03a90(0);
    fVar2 = (float10)*(float *)(param_1 + 0x120) - fVar2 * (float10)0.016666668;
    *(float *)(param_1 + 0x120) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x120) = (float)(float10)0;
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
      return;
    }
  }
  return;
}

// 00D556C0  cPef1::vf08  size=169  [class]
void __fastcall cPef1::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  DAT_01bea090 = DAT_01bea090 | 2;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    FUN_00b7d900();
  }
  *(undefined2 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  uVar3 = FUN_00e03ea0("vr_suica_01");
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  uVar3 = FUN_00e03ea0("vr_suica_02");
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  return;
}

// 00D55770  cPef1::vf10  size=67  [class]
void __fastcall cPef1::vf10(int param_1)

{
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
  DAT_01bea090 = DAT_01bea090 & 0xff7f3bfd;
  *(undefined1 *)(param_1 + 0x132) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    DAT_01bea064 = DAT_01bea064 & 0xf7ffffff;
  }
  return;
}

// 00D5CB20  cPef1::vf0C  size=304  [class]
void __fastcall cPef1::vf0C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    if (*(int *)(param_1 + 0x128) == 0) {
      uVar1 = FUN_00a18cf0(*(undefined4 *)(param_1 + 0x134));
      *(undefined4 *)(param_1 + 0x128) = uVar1;
    }
    if (*(int *)(param_1 + 300) == 0) {
      uVar1 = FUN_00a18cf0(*(undefined4 *)(param_1 + 0x138));
      *(undefined4 *)(param_1 + 300) = uVar1;
    }
    if ((*(int *)(param_1 + 0x128) != 0) && (*(int *)(param_1 + 300) != 0)) {
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
    if (*(char *)(param_1 + 0x130) == '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x131) == '\0') {
    if ((*(int *)(param_1 + 0x128) != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 == 0)) {
      *(char *)(param_1 + 0x132) = *(char *)(param_1 + 0x132) + '\x01';
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    if ((*(int *)(param_1 + 300) != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 == 0)) {
      *(char *)(param_1 + 0x132) = *(char *)(param_1 + 0x132) + '\x01';
      *(undefined4 *)(param_1 + 300) = 0;
    }
    if (1 < *(byte *)(param_1 + 0x132)) {
      *(undefined1 *)(param_1 + 0x131) = 1;
      iVar2 = FUN_00c78580(0,&local_a0);
      if (iVar2 != 0) {
        FUN_0040b190();
        local_40 = local_a0;
        local_3c = local_9c;
        local_38 = local_98;
        FUN_00a82090("JamboSuica",0xe005b,local_90);
      }
    }
  }
  return;
}

// 00D70650  cPef1::vf00  size=54  [class]
undefined4 * __thiscall cPef1::vf00(undefined4 *param_1,byte param_2)

{
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

