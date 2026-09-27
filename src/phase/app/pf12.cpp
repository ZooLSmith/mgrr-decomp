// src/phase/app/pf12.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D476A0..00D706E0, 7 functions

#include "types.h"

// 00D476A0  Pf12::vf1C  size=3  [class]
void Pf12::vf1C(void)

{
  return;
}

// 00D50DC0  Pf12::vf14  size=194  [class]
void __thiscall Pf12::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = "slash_test_start";
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d50df0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d50df5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d50df0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d50df5:
  if (iVar3 == 0) {
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  pcVar4 = "slash_test";
  do {
    bVar1 = *param_3;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00d50e48:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d50e4d;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00d50e48;
    param_3 = param_3 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d50e4d:
  if (iVar3 == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    FUN_00dc1270(0x43870000,1);
    *(undefined4 *)(param_1 + 0x120) = 0x40900000;
  }
  return;
}

// 00D5FA90  Pf12::vf18  size=574  [class]
void __fastcall Pf12::vf18(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  float10 fVar6;
  char *apcStack_45c [19];
  undefined **ppuStack_410;
  undefined1 *puStack_40c;
  int iStack_408;
  undefined4 uStack_404;
  undefined1 auStack_400 [1024];
  
  iVar2 = FUN_00e03ea0("slash_test");
  if (DAT_018b9178 != iVar2) goto LAB_00d5fc6a;
  if (*(int *)(param_1 + 0x11c) == 0) {
    iVar2 = FUN_00936700("pf12_002");
    if (iVar2 != 0) {
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      goto LAB_00d5fb12;
    }
  }
  else if ((*(int *)(param_1 + 0x11c) == 1) && (iVar2 = FUN_00c18d20(0,0xb), iVar2 != 0)) {
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
LAB_00d5fb12:
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  }
  apcStack_45c[5] = "tree_enseki_model";
  apcStack_45c[6] = "road_road_migi";
  apcStack_45c[7] = "hamabe_sunahama_right";
  apcStack_45c[8] = "gomi_gomi";
  apcStack_45c[9] = "gate_nakami_bg";
  apcStack_45c[10] = "ms_scrap_gareki";
  apcStack_45c[0xb] = "ms_scrap_scrap";
  apcStack_45c[0xc] = "dead_pl_s_pl";
  apcStack_45c[0xd] = "UI_frame_gate_hata_01_nr_navi_03";
  apcStack_45c[0xe] = "UI_frame_gate_hata_02_nr_navi_04";
  apcStack_45c[0xf] = "UI_frame_gareki_03_nr_navi_05";
  apcStack_45c[0x10] = "UI_frame_gareki_02_nr_navi_02";
  apcStack_45c[0x11] = "UI_frame_gareki_01_nr_navi_01";
  apcStack_45c[0x12] = "gateura_ura";
  uVar4 = 0;
  do {
    piVar3 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar3 + 0x20))(apcStack_45c[uVar4 + 5],0x101);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x20))();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xe);
  apcStack_45c[0] = (char *)0xd00e6;
  apcStack_45c[1] = (char *)0xd00ed;
  apcStack_45c[2] = (char *)0xd0084;
  apcStack_45c[3] = (char *)0xd00e7;
  apcStack_45c[4] = (char *)0xd00b4;
  uVar4 = 0;
  do {
    puStack_40c = auStack_400;
    iStack_408 = 0;
    uStack_404 = 0x100;
    ppuStack_410 = lib::StaticArray<Entity*,256>::vftable;
    FUN_00a7f440(apcStack_45c[uVar4],&ppuStack_410);
    puVar5 = puStack_40c;
    if (puStack_40c != puStack_40c + iStack_408 * 4) {
      do {
        iVar2 = FUN_00a7c8a0();
        if (*(int *)(iVar2 + 0x4e0) == 0x10a) {
          FUN_00a805f0();
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != puStack_40c + iStack_408 * 4);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
LAB_00d5fc6a:
  if (0.0 < *(float *)(param_1 + 0x120)) {
    fVar1 = *(float *)(param_1 + 0x120);
    fVar6 = (float10)FUN_00e03a90(0);
    fVar6 = (float10)fVar1 - fVar6 * (float10)0.016666668;
    *(float *)(param_1 + 0x120) = (float)fVar6;
    if (fVar6 <= (float10)0) {
      *(float *)(param_1 + 0x120) = (float)(float10)0;
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
      return;
    }
  }
  return;
}

// 00D5FCD0  Pf12::vf0C  size=305  [class]
void __fastcall Pf12::vf0C(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_9c [12];
  undefined1 auStack_90 [80];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(char *)(param_1 + 0x125) != '\0') && (*(char *)(param_1 + 0x124) == '\0')) {
    local_ac = local_9c;
    local_b0 = 0;
    local_a8 = 3;
    local_a4 = 0;
    local_a0 = 0;
    FUN_00a814d0(&local_b0,0xe0063);
    if (local_a4 == 3) {
      FUN_00dde2d0(0,2);
      piVar1 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar1 + 0x20))();
      FUN_00a805f0();
      FUN_0040b190();
      puVar2 = (undefined4 *)FUN_00a7c8b0();
      uStack_40 = *puVar2;
      uStack_3c = puVar2[1];
      uStack_38 = puVar2[2];
      puVar2 = (undefined4 *)FUN_00a7c8d0();
      uStack_34 = *puVar2;
      uStack_30 = puVar2[1];
      uStack_2c = puVar2[2];
      FUN_00a82090("Meron",0xe0065,auStack_90);
      *(undefined1 *)(param_1 + 0x124) = 1;
    }
    if ((local_ac != (undefined1 *)0x0) && (local_a4 = 0, local_a0 != 0)) {
      FUN_00dd48d0(local_ac,0);
    }
  }
  FUN_00d55a20();
  return;
}

// 00D5FE10  Pf12::vf08  size=144  [class]
void __fastcall Pf12::vf08(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  cXmlBinary::cXmlBinary_34();
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  DAT_01bea090 = DAT_01bea090 | 2;
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    FUN_00b7d900();
  }
  *(undefined2 *)(param_1 + 0x124) = 0;
  sVar1 = FUN_00dde2d0(0,1);
  if (sVar1 == 1) {
    *(undefined1 *)(param_1 + 0x125) = 1;
  }
  return;
}

// 00D5FEA0  Pf12::vf10  size=50  [class]
void Pf12::vf10(void)

{
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
  DAT_01bea090 = DAT_01bea090 & 0xff7f3bfd;
  FUN_00d5d0c0();
  return;
}

// 00D706E0  Pf12::vf00  size=54  [class]
undefined4 * __thiscall Pf12::vf00(undefined4 *param_1,byte param_2)

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

