// src/phase/app/p430.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D491A0..00D6D020, 9 functions

#include "types.h"

// 00D491A0  P430::vf20  size=104  [class]
void P430::vf20(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00e678d0(2,0x10,0xffffffff);
  if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) && (piVar1[2] == param_1[2])) {
    piVar1 = (int *)FUN_00c18350();
    iVar3 = *piVar1;
    uVar2 = FUN_00e03ea0("break_g0");
    iVar3 = (**(code **)(iVar3 + 0x40))(uVar2);
    if (iVar3 != 0) {
      uVar2 = 0;
      FUN_00a7c8a0(0);
      FUN_00a8c400(uVar2);
    }
  }
  return;
}

// 00D49210  P430::vf0C  size=1  [class]
void P430::vf0C(void)

{
  return;
}

// 00D540C0  P430::vf28  size=117  [class]
void P430::vf28(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00e678d0(2,0x41,0xffffffff);
  if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) && (piVar1[2] == param_1[2])) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b906a0();
      }
    }
  }
  return;
}

// 00D54140  P430::vf1C  size=35  [class]
void P430::vf1C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fdbbd0(param_2,"P430_SLIDER_RUN");
  if (iVar1 != 0) {
    DAT_01bea094 = DAT_01bea094 & 0xfff7ffff;
  }
  return;
}

// 00D54170  P430::vf18  size=576  [class]
void P430::vf18(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00e03ea0("P430_SLIDER_RUN");
  if (DAT_018b9178 == iVar1) {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x24))(200,2,2);
    if (iVar1 != 0) {
      DAT_01bea094 = DAT_01bea094 | 0x80000;
    }
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x24))(200,4,2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c13920();
      (**(code **)(*piVar2 + 0x28))(0);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (((((iVar1 != 0) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x40)) &&
             (iVar1 = FUN_00a8cab0(), iVar1 != 0x41)) &&
            ((iVar1 = FUN_00a8cab0(), iVar1 != 0x42 && (iVar1 = FUN_00a8cab0(), iVar1 != 0x43)))) &&
           (iVar1 = FUN_00a8cab0(), iVar1 != 0x44)) {
          FUN_0049cc90(0x2c);
        }
      }
    }
  }
  iVar1 = FUN_00e03ea0("P430_RUN_FIRST_HALF");
  if ((DAT_018b9178 != iVar1) &&
     (iVar1 = FUN_00e03ea0("P430_RUN_SECOND_HALF"), DAT_018b9178 != iVar1)) goto LAB_00d54304;
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar2 + 0x20))(0x50,1,2);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x20))(0x51,1,2);
    if (iVar1 != 0) goto LAB_00d542b4;
    DAT_01bea060 = DAT_01bea060 & 0xfffdffff;
  }
  else {
LAB_00d542b4:
    DAT_01bea060 = DAT_01bea060 | 0x20000;
  }
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar2 + 0x20))(0x52,1,2);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x20))(0x53,1,2);
    if (iVar1 == 0) {
      DAT_01bea060 = DAT_01bea060 & 0xfffeffff;
      goto LAB_00d54304;
    }
  }
  DAT_01bea060 = DAT_01bea060 | 0x10000;
LAB_00d54304:
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar2 + 0x20))(0x28,1,2);
  if (iVar1 != 0) {
    FUN_00c19400(7,0);
  }
  DAT_01bea060 = DAT_01bea060 | 0x10;
  piVar2 = (int *)FUN_00a6e640();
  (**(code **)(*piVar2 + 0x70))(0x16,0x5a);
  piVar2 = (int *)FUN_00a6e640();
  (**(code **)(*piVar2 + 0x70))(0x4e,0x5b);
  piVar2 = (int *)FUN_00a6e640();
  (**(code **)(*piVar2 + 0x74))(0x28,0x5c);
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar2 + 0x24))(0x2a,1,2);
  if (iVar1 != 0) {
    FUN_0091a8a0();
  }
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar2 + 0x24))(0x62,1,2);
  if (iVar1 == 0) {
    return;
  }
  FUN_0091a8a0();
  return;
}

// 00D543B0  P430::vf10  size=127  [class]
void __fastcall P430::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x124;
  iVar3 = 2;
  do {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(iVar2);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1 = param_1 + 0x11c;
  iVar2 = 2;
  do {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1);
    param_1 = param_1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_01bea060 = DAT_01bea060 & 0xffffffef;
  FUN_00cbc9c0(1,0);
  DAT_01bea094 = DAT_01bea094 & 0xfff7ffff;
  DAT_01bea090 = DAT_01bea090 & 0xfffbffff;
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x44))(1);
  return;
}

// 00D629E0  P430::vf14  size=980  [class]
void __thiscall P430::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  undefined *puVar11;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_e4 [4];
  undefined4 auStack_e0 [36];
  undefined4 uStack_50;
  undefined1 uStack_2c;
  
  DAT_01bea060 = DAT_01bea060 & 0xfffdffff;
  pcVar8 = "P430_OUTER_WALL";
  pbVar3 = param_3;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00d62a26:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d62a2b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_00d62a26;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d62a2b:
  if (iVar4 != 0) {
    pbVar9 = &DAT_016bde84;
    pbVar3 = param_3;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_00d62a56:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00d62a5b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_00d62a56;
      pbVar3 = pbVar3 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d62a5b:
    if (iVar4 != 0) goto LAB_00d62a6f;
  }
  piVar5 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar5 + 0x44))(0);
LAB_00d62a6f:
  pcVar8 = "P430_OUTER_WALL";
  pbVar3 = param_3;
  do {
    bVar1 = *pbVar3;
    bVar10 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00d62a96:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d62a9b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_00d62a96;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d62a9b:
  if (iVar4 == 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        puVar11 = &DAT_01be9db8;
        (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
        iVar4 = FUN_00dd6d80(puVar11);
        if (iVar4 != 0) {
          FUN_00b905b0();
        }
      }
    }
  }
  iVar4 = FUN_00fdbbd0(param_3,"P430_SLIDER_RUN");
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar5 + 0x58))(0x406,0);
  }
  iVar4 = FUN_00fdbbd0(param_3,"P430_SLIDER_RUN_INIT");
  if (iVar4 != 0) {
    FUN_0118f7b0();
    uStack_50 = 0;
    uStack_2c = 5;
    auStack_e0[0] = 0x14;
    piVar5 = (int *)FUN_00910da0();
    uStack_120 = 0x3fc00000;
    uStack_11c = 0x41a00000;
    uStack_118 = 0x41400000;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_100 = 0x41e00000;
    uStack_fc = 0x42680000;
    uStack_f8 = 0xc2aa0000;
    uVar6 = (**(code **)(*piVar5 + 4))(auStack_e4,auStack_e0,&uStack_100,&uStack_110,&uStack_120,1);
    FUN_00910ab0(uVar6);
    iVar4 = *(int *)(param_1 + 0x124);
    if (iVar4 != 0) {
      FUN_004066f0();
      uVar2 = *(uint *)(iVar4 + 0xc);
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0x1b;
      if (DAT_01885d68 != 1) {
        piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar5 = *piVar5 + -1;
        if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x124),4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x124),0x20);
    FUN_00911ca0("programmabled");
  }
  iVar4 = FUN_00fdbbd0(param_3,"P430_RUN_SECOND_HALF");
  if (iVar4 != 0) {
    FUN_0118f7b0();
    uStack_50 = 0;
    uStack_2c = 5;
    auStack_e0[0] = 0x14;
    piVar5 = (int *)FUN_00910da0();
    uStack_100 = 0x41780000;
    uStack_fc = 0x41200000;
    uStack_f8 = 0x41400000;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_120 = 0xc0400000;
    uStack_11c = 0x426c0000;
    uStack_118 = 0xc2aa0000;
    uVar6 = (**(code **)(*piVar5 + 4))(auStack_e4,auStack_e0,&uStack_120,&uStack_110,&uStack_100,1);
    FUN_00910ab0(uVar6);
    iVar4 = *(int *)(param_1 + 0x128);
    if (iVar4 != 0) {
      FUN_004066f0();
      uVar2 = *(uint *)(iVar4 + 0xc);
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0xf;
      if (DAT_01885d68 != 1) {
        piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar5 = *piVar5 + -1;
        if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x128),4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x128),0x20);
    FUN_00911ca0("programmabled");
  }
  return;
}

// 00D62DC0  P430::vf08  size=551  [class]
void __fastcall P430::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  uStack_124 = 0xd62dda;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  uStack_124 = 0xd62df8;
  piVar4 = (int *)FUN_00910da0();
  local_f0 = 0x3fa00000;
  uStack_124 = 1;
  puStack_128 = &local_f0;
  local_ec = 0x41200000;
  local_e8 = 0x41200000;
  puStack_12c = &local_110;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_100 = 0xc2d30000;
  local_fc = 0x41a00000;
  piVar7 = (int *)(param_1 + 0x11c);
  local_f8[0] = 0x42380000;
  uVar5 = (**(code **)(*piVar4 + 4))(&local_114,local_e0,&local_100);
  FUN_00910ab0(uVar5);
  piVar4 = (int *)FUN_00910da0();
  local_114 = 0x40b00000;
  local_110 = 0x3f800000;
  puStack_128 = (undefined4 *)0x0;
  uStack_124 = 0;
  local_108 = 0xc3010000;
  uStack_104 = 0x42460000;
  local_100 = 0xc2700000;
  uVar5 = (**(code **)(*piVar4 + 4))
                    (&puStack_12c,local_f8,&local_108,&puStack_128,&stack0xfffffee8,1);
  FUN_00910ab0(uVar5);
  iVar8 = 2;
  do {
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      if (DAT_01885d68 != 1) {
        iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar4 = (int *)(iVar2 + 4);
        *piVar4 = *piVar4 + 1;
      }
      uVar3 = *(uint *)(iVar1 + 0xc);
      puVar6 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
      *puVar6 = *puVar6 | 0x200;
      puVar6[0xb] = 0xf;
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*piVar7,4);
    FUN_00917bd0(*piVar7,0x20);
    FUN_00911ca0("programmabled");
    FUN_00916360();
    piVar7 = piVar7 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// 00D6D020  P430::vf00  size=54  [class]
undefined4 * __thiscall P430::vf00(undefined4 *param_1,byte param_2)

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

