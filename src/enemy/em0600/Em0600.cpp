// src/enemy/em0600/Em0600.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0059DA40..00AB6AA0, 157 functions

#include "types.h"

// 0059DA40  FUN_0059da40  size=823  [callgraph]
void __fastcall FUN_0059da40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  local_120 = 0x3000200;
  local_11c = 0x3010201;
  local_118 = 0x3020202;
  local_114 = 0x3030203;
  local_110 = 0x3040204;
  local_10c = 0x3050205;
  local_108 = 0x3060206;
  local_104 = 0x3070207;
  local_100 = 0x3080208;
  local_fc = 0x3090209;
  local_f8 = 0x6000400;
  local_f4 = 0x6010401;
  local_f0 = 0x6020402;
  local_ec = 0x6030403;
  local_e8 = 0x6040404;
  local_e4 = 0x6050405;
  local_e0 = 0x6060406;
  local_dc = 0x6070407;
  local_d8 = 0x6080408;
  local_d4 = 0x6090409;
  local_d0 = 0x60a040a;
  local_cc = 0x60b040b;
  local_c8 = 0x60c040c;
  local_c4 = 0x60d040d;
  local_c0 = 0x60e040e;
  local_bc = 0x6300430;
  local_b8 = 0x6310431;
  local_b4 = 0x6320432;
  local_b0 = 0x6330433;
  local_ac = 0x6340434;
  local_a8 = 0x6350435;
  local_a4 = 0x6360436;
  local_a0 = 0x6370437;
  local_9c = 0x6380438;
  local_98 = 0x6510451;
  local_94 = 0x6520452;
  local_90 = 0x6530453;
  local_8c = 0x6540454;
  local_88 = 0x7000500;
  local_84 = 0x7010501;
  local_80 = 0x7020502;
  local_7c = 0x7030503;
  local_78 = 0x7040504;
  local_74 = 0x7050505;
  local_70 = 0x7060506;
  local_6c = 0x7070507;
  local_68 = 0x7080508;
  local_64 = 0x7090509;
  local_60 = 0x70a050a;
  local_5c = 0x70b050b;
  local_58 = 0x70c050c;
  local_54 = 0x70d050d;
  local_50 = 0x70e050e;
  local_4c = 0x7300530;
  local_48 = 0x7310531;
  local_44 = 0x7320532;
  local_40 = 0x7330533;
  local_3c = 0x7340534;
  local_38 = 0x7350535;
  local_34 = 0x7360536;
  local_30 = 0x7370537;
  local_2c = 0x7380538;
  local_28 = 0x7510551;
  local_24 = 0x7520552;
  local_20 = 0x7530553;
  local_1c = 0x7540554;
  local_18 = 0x8200810;
  local_14 = 0x8210811;
  local_10 = 0x8220812;
  local_c = 0x8230813;
  local_8 = 0x8240814;
  local_4 = 0x8250815;
  uVar1 = FUN_00dd3580(0x120,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x788) = uVar1;
  do {
    FUN_00a8c720(*(undefined2 *)(&local_120 + iVar2),
                 *(undefined2 *)((int)&local_120 + iVar2 * 4 + 2));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x48);
  FUN_00a95e20(*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
  return;
}

// 0059DDD0  Em0600::vf264  size=8  [class]
undefined4 Em0600::vf264(void)

{
  return 1;
}

// 0059DDE0  Em0600::vf50  size=39  [class]
void __fastcall Em0600::vf50(int param_1)

{
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf128();
  return;
}

// 0059DE10  Em0600::vf54  size=5  [class]
void __fastcall Em0600::vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 0059DE20  Em0600::vf248  size=41  [class]
void Em0600::vf248(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00e00900();
  uVar2 = 0;
  uVar1 = FUN_00a81330(0);
  FUN_00e03080(uVar1,uVar2);
  return;
}

// 0059DE50  Em0600::vf14C  size=18  [class]
undefined4 Em0600::vf14C(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00a7c8a0();
  }
  return 0;
}

// 0059DE70  Em0600::vf17C  size=3  [class]
undefined4 Em0600::vf17C(void)

{
  return 0;
}

// 0059DE80  Em0600::vf184  size=23  [class]
undefined4 __thiscall Em0600::vf184(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x17c))();
  }
  return 0xffffffff;
}

// 0059DEA0  Em0600::vf188  size=50  [class]
void Em0600::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    FUN_00a7c8a0();
  }
  return;
}

// 0059DEE0  FUN_0059dee0  size=154  [between]
void FUN_0059dee0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar1 = FUN_00a8c760(0x2e);
  iVar2 = FUN_00a8c760(0x2f);
  iVar3 = FUN_00ac4780();
  bVar4 = iVar3 != 0 && iVar2 != 0;
  bVar5 = param_2 != 0 && (iVar3 != 0 && (iVar2 != 0 || iVar1 != 0));
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  FUN_00a84780(param_1,0,bVar5,bVar4,bVar4,0x3f800000);
  FUN_00a84780(param_1,0,bVar5,bVar4,bVar4,0x3f800000);
  return;
}

// 0059DF80  FUN_0059df80  size=363  [between]
void __thiscall FUN_0059df80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_24;
  
  iVar5 = FUN_00a8cab0();
  if (iVar5 == 0x30000) {
    iVar6 = 1;
    local_24 = 0;
  }
  else {
    iVar5 = FUN_00a8cab0();
    iVar6 = 0;
    local_24 = 1;
    if (iVar5 != 0x30001) {
      local_24 = 0;
    }
  }
  iVar5 = FUN_00a8c760(0);
  if (iVar5 == 0) {
    iVar6 = 0;
    local_24 = 0;
  }
  FUN_00a84720();
  FUN_00a84720();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  if (iVar6 != 0) {
    iVar5 = FUN_00a8c760(0x30);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x1560) = uVar1;
      *(undefined4 *)(param_1 + 0x1564) = uVar2;
      *(undefined4 *)(param_1 + 0x1568) = uVar3;
      *(undefined4 *)(param_1 + 0x156c) = uVar4;
    }
  }
  FUN_00a84780(param_1 + 0x1560,0,iVar6,0,0,0x3f800000);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  if (local_24 != 0) {
    iVar5 = FUN_00a8c760(0x30);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x1560) = uVar1;
      *(undefined4 *)(param_1 + 0x1564) = uVar2;
      *(undefined4 *)(param_1 + 0x1568) = uVar3;
      *(undefined4 *)(param_1 + 0x156c) = uVar4;
    }
  }
  FUN_00a84780(param_1 + 0x1560,0,local_24,0,0,0x3f800000);
  switchD_0080dbae::default();
  return;
}

// 0059E0F0  FUN_0059e0f0  size=276  [between]
void __thiscall FUN_0059e0f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00a8cab0();
  iVar1 = FUN_00a8c760(0x3a);
  iVar2 = FUN_00a8c760(0x3b);
  iVar3 = FUN_00a8c760(0x3c);
  iVar4 = FUN_00a8c760(0x3d);
  iVar5 = FUN_00a8c760(0x3e);
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  FUN_00a84780(param_2,0,iVar2 != 0 || iVar1 != 0,0,iVar2 != 0,0x3f800000);
  if (iVar5 == 0) {
    FUN_00a84780(param_2,0,iVar4 != 0 || iVar3 != 0,0,iVar4 != 0,0x3f800000);
    switchD_0080dbae::default();
    return;
  }
  FUN_00a84be0(param_1 + 0x1400);
  switchD_0080dbae::default();
  return;
}

// 0059E210  FUN_0059e210  size=198  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e210(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x30002) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x30003) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x30004) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x30005) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 != 0x30006) goto LAB_0059e261;
        }
      }
    }
  }
  _DAT_01beaa88 = _DAT_01beaa88 | 0x2000000;
LAB_0059e261:
  iVar1 = FUN_00a8c760(0x33);
  if (iVar1 != 0) {
    _DAT_01beaa88 = _DAT_01beaa88 | 0x1000000;
  }
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 != 0) {
    _DAT_01beaa88 = _DAT_01beaa88 | 0x800000;
  }
  iVar1 = FUN_00a8c760(0x35);
  if (iVar1 != 0) {
    _DAT_01beaa88 = _DAT_01beaa88 | 0x400000;
  }
  iVar1 = FUN_00a8c760(0x36);
  if (iVar1 != 0) {
    _DAT_01beaa88 = _DAT_01beaa88 | 0x200000;
  }
  iVar1 = FUN_00a8c760(0x37);
  if (iVar1 != 0) {
    _DAT_01beaa88 = _DAT_01beaa88 | 0x100000;
  }
  return;
}

// 0059E2F0  Em0600::vf1A0  size=5  [class]
undefined4 Em0600::vf1A0(void)

{
  return 0;
}

// 0059E300  FUN_0059e300  size=279  [callgraph]
void __fastcall FUN_0059e300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
    goto LAB_0059e3fb;
  }
  iVar1 = *(int *)(param_1 + 0xdc8);
  if (iVar1 == 1) {
    uVar4 = 0;
LAB_0059e3d5:
    uVar3 = *(undefined4 *)(param_1 + 0x1998);
    uVar2 = 0x12;
  }
  else {
    if (iVar1 == 2) {
      FUN_00a962d0(1,0);
      uVar4 = 0x8000040;
      goto LAB_0059e3d5;
    }
    if (iVar1 == 3) {
      uVar4 = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x1998);
      uVar2 = 0x13;
    }
    else {
      iVar1 = FUN_00a8cab0();
      uVar4 = 0;
      if (iVar1 == 0x10008) {
        uVar3 = 0;
        uVar2 = 5;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x1998);
        uVar2 = 5;
      }
    }
  }
  FUN_00aa4080(uVar2,0,uVar3,0x3f800000,uVar4,0xbf800000,0x3f800000);
  FUN_00a8ccb0(1);
LAB_0059e3fb:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  return;
}

// 0059E450  FUN_0059e450  size=458  [callgraph]
void __fastcall FUN_0059e450(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0xd,0,param_1[0x666],0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(3);
    }
    break;
  case 2:
    FUN_00aa4080(0xe,0,param_1[0x666],0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8ccb0(1);
    }
    break;
  case 4:
    FUN_00aa4080(0xf,0,param_1[0x666],0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3d4ccccd,0x393702d3,0x3eb2b8c2,0);
  }
  return;
}

// 0059E8C0  FUN_0059e8c0  size=125  [callgraph]
void __fastcall FUN_0059e8c0(int param_1)

{
  byte bVar1;
  float fVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((*(int *)(param_1 + 0x1988) == 5) &&
     (fVar2 = *(float *)(param_1 + 0x198c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x198c) = fVar2, fVar2 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x1988) = 6;
    pcVar5 = "P720_EVENT";
    pbVar3 = DAT_018b925c;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_0059e920:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0059e925;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_0059e920;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0059e925:
    if (iVar4 != 0) {
      FUN_00d5ea40("P720_EVENT",1,0);
    }
  }
  return;
}

// 0059E960  FUN_0059e960  size=246  [callgraph]
void __thiscall FUN_0059e960(int *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00ac9210("EYE_GLOW");
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x590);
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      FUN_00ac9300("EYE_GLOW");
      (**(code **)(param_1[0x590] + 8))(0,0,0);
      (**(code **)(param_1[0x5e8] + 8))(0,0,0);
      (**(code **)(*param_1 + 0x358))(2,param_1 + 0x5e8);
    }
    return;
  }
  FUN_00ac9300("EYE_GLOW");
  (**(code **)(param_1[0x590] + 8))(0,0,0);
  (**(code **)(param_1[0x5bc] + 8))(0,0,0);
  (**(code **)(*param_1 + 0x358))(1,param_1 + 0x5bc);
  return;
}

// 0059EA60  FUN_0059ea60  size=38  [callgraph]
float10 __fastcall FUN_0059ea60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x870);
  iVar2 = FUN_00a8eeb0();
  return ((float10)iVar1 / (float10)iVar2) * (float10)100.0;
}

// 0059EA90  FUN_0059ea90  size=42  [callgraph]
void __fastcall FUN_0059ea90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  if (iVar1 <= *(int *)(param_1 + 0x870)) {
    *(int *)(param_1 + 0x870) = iVar1;
  }
  return;
}

// 0059EAC0  FUN_0059eac0  size=62  [callgraph]
undefined4 __fastcall FUN_0059eac0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x870);
  iVar3 = FUN_00a8eeb0();
  fVar2 = ((float)iVar1 / (float)iVar3) * 100.0;
  if (fVar2 < 50.0 != (fVar2 == 50.0)) {
    return 1;
  }
  return 0;
}

// 0059EB00  FUN_0059eb00  size=7  [callgraph]
float10 __fastcall FUN_0059eb00(int param_1)

{
  return (float10)*(float *)(param_1 + 0x1994);
}

// 0059EB10  FUN_0059eb10  size=289  [callgraph]
void __fastcall FUN_0059eb10(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  FUN_00a929d0();
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_00ac8660(0,0x17);
    *(undefined4 *)(param_1 + 0x874) = uVar1;
    uVar1 = FUN_00ac8660(0,0x17);
    *(undefined4 *)(param_1 + 0x870) = uVar1;
    uVar1 = FUN_00ac8660(0,0x18);
    *(undefined4 *)(param_1 + 0xde4) = uVar1;
    uVar1 = FUN_00ac8660(0,0x1a);
    *(undefined4 *)(param_1 + 0xde8) = uVar1;
    uVar1 = FUN_00ac8660(0,0x19);
    *(undefined4 *)(param_1 + 0xdec) = uVar1;
    uVar1 = FUN_00ac8660(0,0x1b);
    *(undefined4 *)(param_1 + 0xdf0) = uVar1;
    uVar1 = FUN_00ac8660(0,0x22);
    *(undefined4 *)(param_1 + 0x1610) = uVar1;
    fVar2 = (float10)FUN_00ac8570(0x23);
    *(float *)(param_1 + 0x1608) = (float)fVar2;
    fVar2 = (float10)FUN_00ac8570(0x24);
    *(float *)(param_1 + 0x160c) = (float)fVar2;
    fVar2 = (float10)FUN_00ac8570(0x27);
    *(float *)(param_1 + 0x1994) = (float)fVar2;
    fVar2 = (float10)FUN_00ac8570(0x26);
    *(float *)(param_1 + 0x19a4) = (float)fVar2;
    fVar2 = (float10)FUN_00ac8570(0x20);
    *(float *)(param_1 + 0x19a0) = (float)fVar2;
    *(undefined4 *)(param_1 + 0x1614) = *(undefined4 *)(param_1 + 0x1608);
    *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(param_1 + 0xde4);
    *(undefined4 *)(param_1 + 0x1618) = *(undefined4 *)(param_1 + 0x160c);
    *(undefined4 *)(param_1 + 0xdf8) = *(undefined4 *)(param_1 + 0xde8);
    *(undefined4 *)(param_1 + 0xdfc) = *(undefined4 *)(param_1 + 0xdec);
    *(undefined4 *)(param_1 + 0xe00) = *(undefined4 *)(param_1 + 0xdf0);
  }
  return;
}

// 0059EC40  FUN_0059ec40  size=435  [callgraph]
void __fastcall FUN_0059ec40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1574) = 0x5500450;
  *(undefined4 *)(param_1 + 0x1578) = 0x7500650;
  *(undefined4 *)(param_1 + 0x1580) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x1584) = 0x40000000;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x1588) = 0;
  *(undefined4 *)(param_1 + 0x158c) = local_14;
  *(undefined4 *)(param_1 + 0x1590) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x1594) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1598) = 0;
  *(undefined4 *)(param_1 + 0x159c) = local_14;
  *(undefined4 *)(param_1 + 0x15a0) = 0xbfa66666;
  *(undefined4 *)(param_1 + 0x15a4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x15a8) = 0;
  *(undefined4 *)(param_1 + 0x15ac) = local_14;
  *(undefined4 *)(param_1 + 0x15b0) = 0xbfa66666;
  *(undefined4 *)(param_1 + 0x15b4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x15b8) = 0;
  *(undefined4 *)(param_1 + 0x15bc) = local_14;
  do {
    iVar1 = FUN_00a82090("ATTACHMENT_GUN",0x20601,0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x15c4 + iVar3 * 4) = iVar1;
      switch(iVar3) {
      case 0:
        *(undefined4 *)(param_1 + 0x15e4) = 0x452;
        break;
      case 1:
        *(undefined4 *)(param_1 + 0x15e8) = 0x454;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x15ec) = 0x552;
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x15f0) = 0x554;
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x15f4) = 0x652;
        break;
      case 5:
        *(undefined4 *)(param_1 + 0x15f8) = 0x654;
        break;
      case 6:
        *(undefined4 *)(param_1 + 0x15fc) = 0x752;
        break;
      case 7:
        *(undefined4 *)(param_1 + 0x1600) = 0x754;
      }
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xfffffffd;
        piVar2 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  *(undefined4 *)(param_1 + 0x1614) = 0x41200000;
  *(undefined4 *)(param_1 + 0x1624) = 0;
  *(undefined4 *)(param_1 + 0x1618) = 0x43480000;
  *(undefined4 *)(param_1 + 0x1620) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c0) = 0;
  *(undefined4 *)(param_1 + 0x1604) = 0;
  return;
}

// 0059EE20  FUN_0059ee20  size=82  [callgraph]
undefined4 FUN_0059ee20(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x30000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x30001) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x30007) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x30008) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 != 0x3000b) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

// 0059EEF0  FUN_0059eef0  size=166  [callgraph]
void __fastcall FUN_0059eef0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x5a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0059ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0059F010  FUN_0059f010  size=80  [callgraph]
void __fastcall FUN_0059f010(int param_1)

{
  if (*(int *)(param_1 + 0x1624) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x1624) = 0;
  }
  if (*(int *)(param_1 + 0x1628) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x1628) = 0;
  }
  if (*(int *)(param_1 + 0x162c) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x162c) = 0;
  }
  return;
}

// 0059F060  FUN_0059f060  size=252  [callgraph]
float10 __thiscall FUN_0059f060(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar2 = 0.0;
  iVar1 = *(int *)(param_1 + 0xa84);
  if (iVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x40) - *(float *)(iVar1 + 0x40);
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(iVar1 + 0x44);
    fVar3 = *(float *)(param_1 + 0x48) - *(float *)(iVar1 + 0x48);
    fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) + param_4;
  }
  fVar3 = 1.0;
  if ((fVar2 <= param_3) && (fVar3 = (fVar2 - param_2) / (param_3 - param_2), fVar2 < param_2)) {
    fVar3 = 0.0;
  }
  uVar5 = 0x3f800000;
  fVar4 = fVar3 - *(float *)(param_1 + 0x93c);
  fVar2 = *(float *)(param_1 + 0x910) * 0.005;
  if (fVar4 <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x910) * -0.005;
    if (fVar4 < fVar2) {
      fVar3 = fVar2 + *(float *)(param_1 + 0x93c);
    }
  }
  else {
    fVar3 = fVar2 + *(float *)(param_1 + 0x93c);
  }
  *(float *)(param_1 + 0x93c) = fVar3;
  if ((*(float *)(param_1 + 0x93c) <= 1.0) && (uVar5 = 0, 0.0 <= *(float *)(param_1 + 0x93c))) {
    return (float10)*(float *)(param_1 + 0x93c);
  }
  *(undefined4 *)(param_1 + 0x93c) = uVar5;
  return (float10)*(float *)(param_1 + 0x93c);
}

// 0059F180  FUN_0059f180  size=49  [callgraph]
void __fastcall FUN_0059f180(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x15c4);
  iVar3 = 8;
  do {
    if (*piVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))();
      }
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 0059F2B0  FUN_0059f2b0  size=13  [callgraph]
void FUN_0059f2b0(void)

{
  FUN_00ac8dd0(&DAT_01642cb4,1);
  return;
}

// 0059F2C0  FUN_0059f2c0  size=13  [callgraph]
void FUN_0059f2c0(void)

{
  FUN_00ac8dd0(&DAT_01642cbc,1);
  return;
}

// 0059F2D0  FUN_0059f2d0  size=354  [callgraph]
void __thiscall FUN_0059f2d0(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xdc8) = 0;
    return;
  }
  iVar3 = FUN_00ac89d0();
  if (iVar3 != 0) {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0xdc8) == 0) {
        *(undefined4 *)(param_1 + 0xdc8) = 1;
      }
      else if (*(int *)(param_1 + 0xdc8) == 2) {
        *(undefined4 *)(param_1 + 0xdc8) = 3;
      }
      iVar3 = FUN_00ac89d0();
      iVar7 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar8 = *(int *)(iVar3 + 800);
        piVar9 = (int *)(iVar8 + 0x60);
        do {
          pbVar6 = *(byte **)(*piVar9 + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pbVar4 = &DAT_01642cb4;
            do {
              bVar2 = *pbVar4;
              bVar10 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_0059f370:
                iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_0059f375;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar10 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_0059f370;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_0059f375:
            if (iVar5 == 0) {
LAB_0059f419:
              if (iVar7 == -1) {
                return;
              }
              iVar8 = iVar7 * 0x70 + iVar8;
              if (iVar8 == 0) {
                return;
              }
              puVar1 = (uint *)(iVar8 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
              return;
            }
          }
          iVar7 = iVar7 + 1;
          piVar9 = piVar9 + 0x1c;
          if (*(short *)(iVar3 + 0x324) <= iVar7) {
            return;
          }
        } while( true );
      }
    }
    else if (param_2 == 2) {
      if (*(int *)(param_1 + 0xdc8) == 0) {
        *(undefined4 *)(param_1 + 0xdc8) = 2;
      }
      else if (*(int *)(param_1 + 0xdc8) == 1) {
        *(undefined4 *)(param_1 + 0xdc8) = 3;
      }
      iVar3 = FUN_00ac89d0();
      iVar7 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar8 = *(int *)(iVar3 + 800);
        piVar9 = (int *)(iVar8 + 0x60);
        do {
          pbVar6 = *(byte **)(*piVar9 + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pbVar4 = &DAT_01642cbc;
            do {
              bVar2 = *pbVar4;
              bVar10 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_0059f401:
                iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_0059f406;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar10 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_0059f401;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
LAB_0059f406:
            if (iVar5 == 0) goto LAB_0059f419;
          }
          iVar7 = iVar7 + 1;
          piVar9 = piVar9 + 0x1c;
          if (*(short *)(iVar3 + 0x324) <= iVar7) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

// 0059F440  FUN_0059f440  size=111  [callgraph]
void __thiscall FUN_0059f440(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x15c4) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x15c4) = 0;
    }
    if (*(int *)(param_1 + 0x15c8) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x15c8) = 0;
    }
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x15d4) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x15d4) = 0;
    }
    if (*(int *)(param_1 + 0x15d8) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x15d8) = 0;
      return;
    }
  }
  return;
}

// 0059F4B0  FUN_0059f4b0  size=7  [callgraph]
undefined4 __fastcall FUN_0059f4b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc8);
}

// 0059F4C0  FUN_0059f4c0  size=257  [callgraph]
void __fastcall FUN_0059f4c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1970) = 0;
  *(undefined4 *)(param_1 + 0x1930) = 0;
  *(undefined4 *)(param_1 + 0x1938) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1940) = 0;
  *(undefined4 *)(param_1 + 0x1968) = 0;
  *(undefined4 *)(param_1 + 0x1944) = 0;
  *(undefined4 *)(param_1 + 0x1948) = 0;
  *(undefined4 *)(param_1 + 0x1934) = 1;
  *(undefined4 *)(param_1 + 0x1974) = 0;
  *(undefined4 *)(param_1 + 0x1978) = 0;
  *(undefined4 *)(param_1 + 0x197c) = 0;
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  *(undefined2 *)(param_1 + 0x1990) = 1;
  *(undefined2 *)(param_1 + 0x193c) = 0;
  *(undefined4 *)(param_1 + 0x1940) = 0;
  FUN_00a33520(1,0x720,1);
  FUN_00a33520(0,0x720,2);
  FUN_00a33520(0,0x720,3);
  FUN_00a33520(0,0x720,4);
  return;
}

// 0059F5E0  FUN_0059f5e0  size=77  [callgraph]
void FUN_0059f5e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_retaddr;
  
  piVar1 = (int *)FUN_00c14bb0();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0("_COL_PL_in");
  iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
  if (iVar3 != 0) {
    FUN_00910a40(iVar3);
    if (unaff_retaddr != 0) {
      FUN_0091a8a0();
      return;
    }
    FUN_00916360();
  }
  return;
}

// 0059F630  FUN_0059f630  size=217  [callgraph]
void __thiscall FUN_0059f630(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00ac9300("INNER-R");
    FUN_00ac9300("OUTER-R");
    FUN_00ac9210("CUT-R-LEG-1");
    return;
  case 1:
    FUN_00ac9300("INNER-L");
    FUN_00ac9300("OUTER-L");
    FUN_00ac9210("CUT-L-LEG-1");
    return;
  case 4:
    if (*(int *)(param_1 + 0x1938) != 4) {
      FUN_00ac9300("OUTER-L");
      FUN_00ac9300("L-LEG-1");
      FUN_00ac9300("OUTER-R");
      FUN_00ac9300("R-LEG-1");
      FUN_00ac9300("INNER-L");
      FUN_00ac9300("INNER-R");
      return;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x1938) != 5) {
      FUN_00ac9300(&DAT_01642cd4);
      FUN_00ac9210("CUT-NECK");
    }
  }
  return;
}

// 0059F730  FUN_0059f730  size=52  [callgraph]
undefined4 FUN_0059f730(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x50001) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x50002)) {
    return 0;
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 < 3) {
    return 0;
  }
  return 1;
}

// 0059F7C0  FUN_0059f7c0  size=1  [callgraph]
void FUN_0059f7c0(void)

{
  return;
}

// 0059F7D0  FUN_0059f7d0  size=1  [callgraph]
void FUN_0059f7d0(void)

{
  return;
}

// 0059F7E0  FUN_0059f7e0  size=1  [callgraph]
void FUN_0059f7e0(void)

{
  return;
}

// 0059F7F0  FUN_0059f7f0  size=1  [callgraph]
void FUN_0059f7f0(void)

{
  return;
}

// 0059F800  FUN_0059f800  size=1  [callgraph]
void FUN_0059f800(void)

{
  return;
}

// 0059F820  FUN_0059f820  size=117  [callgraph]
void __thiscall FUN_0059f820(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x1940) != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar7 = 0x3f800000;
      uVar6 = 0xbf800000;
      uVar5 = 0;
      uVar4 = 0x3f800000;
      uVar3 = 0;
      uVar2 = 0;
      FUN_00a7c8a0(param_2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4080(param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
      if (param_3 == 0) {
        uVar4 = 1;
        uVar3 = 0x8000000;
        uVar2 = 0;
        FUN_00a7c8a0(0,0x8000000,1);
        FUN_00a96070(uVar2,uVar3,uVar4);
      }
    }
  }
  return;
}

// 0059F8D0  FUN_0059f8d0  size=7  [callgraph]
undefined4 __fastcall FUN_0059f8d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1968);
}

// 0059F8E0  FUN_0059f8e0  size=105  [callgraph]
void FUN_0059f8e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      if (param_3 == 0) {
        FUN_00a9e290(param_2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        return;
      }
      FUN_00a9e290(param_2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 0059F9E0  FUN_0059f9e0  size=52  [callgraph]
void __fastcall FUN_0059f9e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x32), iVar1 != 0)) {
    return;
  }
  FUN_00a8cb60(0x1d);
  *(undefined4 *)(param_1 + 0x61c) = 0x1d;
  return;
}

// 0059FA20  FUN_0059fa20  size=104  [callgraph]
void __fastcall FUN_0059fa20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a8eeb0();
  iVar2 = *param_1;
  uVar1 = FUN_00fdbc60(0);
  (**(code **)(iVar2 + 0x30c))(uVar1);
  iVar2 = FUN_00fdbc60();
  param_1[0x37d] = param_1[0x37d] - iVar2;
  param_1[0x37f] = param_1[0x37f] - iVar2;
  if (param_1[0x21c] < 1) {
    param_1[0x21c] = 1;
  }
  return;
}

// 0059FA90  FUN_0059fa90  size=3  [callgraph]
float10 FUN_0059fa90(void)

{
  return (float10)1;
}

// 0059FAA0  FUN_0059faa0  size=110  [callgraph]
void __fastcall FUN_0059faa0(int param_1)

{
  switch(*(undefined2 *)(param_1 + 0x193c)) {
  case 0:
    FUN_00e5e1b0("bgm_Cortex_Leg1_enter");
    *(short *)(param_1 + 0x193c) = *(short *)(param_1 + 0x193c) + 1;
    return;
  case 1:
    FUN_00e5e1b0("bgm_Cortex_Leg1_exit");
    *(short *)(param_1 + 0x193c) = *(short *)(param_1 + 0x193c) + 1;
    return;
  case 2:
    FUN_00e5e1b0("bgm_Cortex_Leg2_enter");
    *(short *)(param_1 + 0x193c) = *(short *)(param_1 + 0x193c) + 1;
    return;
  case 3:
    FUN_00e5e1b0("bgm_Cortex_End");
    *(short *)(param_1 + 0x193c) = *(short *)(param_1 + 0x193c) + 1;
  }
  return;
}

// 0059FB20  FUN_0059fb20  size=60  [callgraph]
void __thiscall FUN_0059fb20(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a33520(param_3,0x720,1);
  FUN_00a33520(1,0x720,param_2);
  *(short *)(param_1 + 0x1990) = (short)param_2;
  return;
}

// 0059FB60  FUN_0059fb60  size=49  [callgraph]
void __fastcall FUN_0059fb60(int param_1)

{
  FUN_00a33520(1,0x720,1);
  FUN_00a33520(0,0x720,*(undefined2 *)(param_1 + 0x1990));
  return;
}

// 0059FBA0  FUN_0059fba0  size=199  [callgraph]
void FUN_0059fba0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    iVar1 = FUN_00a12210(0x451);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
    }
    iVar1 = FUN_00a12210(0x452);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
    }
    iVar1 = FUN_00a12210(0x453);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
    }
    uVar2 = 0x454;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    iVar1 = FUN_00a12210(0x651);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
    }
    iVar1 = FUN_00a12210(0x652);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
    }
    iVar1 = FUN_00a12210(0x653);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
    }
    uVar2 = 0x654;
  }
  iVar1 = FUN_00a12210(uVar2);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 8;
  }
  return;
}

// 0059FE50  FUN_0059fe50  size=42  [callgraph]
uint FUN_0059fe50(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b351a0;
  (**(code **)(*param_1 + 4))(&DAT_01b351a0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0059FEE0  FUN_0059fee0  size=475  [callgraph]
void __fastcall FUN_0059fee0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x7b0) = uVar3;
  uVar3 = FUN_00de46d0("_col.hkx",0);
  uVar4 = FUN_00de4550("_col.hkx",0);
  iVar2 = FUN_008f6410(uVar1,uVar4,uVar3);
  if (iVar2 != 0) {
    FUN_008f2cd0(0);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(8);
    puVar5 = (undefined4 *)FUN_009f8b60();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar5);
    FUN_008f1600(0x80000000);
    FUN_008f1600(0x20);
    FUN_008f18c0(0x100);
    FUN_008f18c0(0x10000);
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar2 != 0) {
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_01642dbc);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_01642db4);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_01642dac);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_01642da4);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_01642d9c);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,&DAT_01642d94);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,&DAT_01642d8c);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,&DAT_01642d84);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,&DAT_01642d7c);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,&DAT_01642d74);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,&DAT_01642d6c);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,&DAT_01642d64);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,&DAT_0163ebbc);
      FUN_00a93730(1);
    }
  }
  return;
}

// 005A00C0  FUN_005a00c0  size=577  [callgraph]
void __fastcall FUN_005a00c0(int param_1)

{
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x110,0);
  FUN_00a82870(0x3fc90fdb,0xbfc90fdb,0x3dcccccd,0x393702d3,0x3c0efa35);
  *(uint *)(param_1 + 0xfb0) = *(uint *)(param_1 + 0xfb0) | 0x40;
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x120,0);
  FUN_00a82870(0x3fc90fdb,0xbfc90fdb,0x3dcccccd,0x393702d3,0x3c0efa35);
  *(uint *)(param_1 + 0x1150) = *(uint *)(param_1 + 0x1150) | 0x40;
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x400,0);
  *(uint *)(param_1 + 0x1220) = *(uint *)(param_1 + 0x1220) | 0x20;
  FUN_00a82870(0x3e32b8c2,0xbf5f66f3,0x3dcccccd,0x3ae4c388,0x3c0efa35);
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x600,0);
  *(uint *)(param_1 + 0x12f0) = *(uint *)(param_1 + 0x12f0) | 0x20;
  FUN_00a82870(0x3f5f66f3,0xbe32b8c2,0x3dcccccd,0x3ae4c388,0x3c0efa35);
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x201,0);
  FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3da3d70a,0x393702d3,0x3be4c388);
  *(uint *)(param_1 + 0x13c0) = *(uint *)(param_1 + 0x13c0) | 0x40;
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x301,0);
  FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3da3d70a,0x393702d3,0x3be4c388);
  *(uint *)(param_1 + 0x1490) = *(uint *)(param_1 + 0x1490) | 0x40;
  return;
}

// 005A0310  FUN_005a0310  size=584  [callgraph]
void __fastcall FUN_005a0310(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  uVar1 = FUN_00c5def0(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  *(undefined4 *)(param_1 + 0x6c4) = 0x103;
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  uVar6 = 2;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  puVar5 = &local_8c;
  *(undefined4 *)(param_1 + 0x6dc) = local_94;
  *(undefined4 *)(param_1 + 0x6e8) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  *(undefined4 *)(param_1 + 0x6e4) = 0x103;
  local_8c = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 0x103;
  local_88 = 0;
  local_84 = 0;
  uVar4 = 0;
  uVar3 = 0x3fc00000;
  uVar2 = 0x42c80000;
  uVar1 = FUN_00a12210(0x103);
  FUN_00a889e0(uVar1,uVar2,uVar3,uVar4,puVar5,uVar6);
  uVar6 = 1;
  puVar5 = &local_8c;
  uVar4 = 0xbf000000;
  uVar3 = 0x3f000000;
  uVar2 = 0x41a00000;
  uVar1 = FUN_00a12210(0x406);
  FUN_00a889e0(uVar1,uVar2,uVar3,uVar4,puVar5,uVar6);
  uVar6 = 1;
  puVar5 = &local_8c;
  uVar4 = 0xbf000000;
  uVar3 = 0x3f000000;
  uVar2 = 0x41a00000;
  uVar1 = FUN_00a12210(0x606);
  FUN_00a889e0(uVar1,uVar2,uVar3,uVar4,puVar5,uVar6);
  FUN_00405230();
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0x103,&local_a0,0,0x42c80000,0x3f000000,1,0);
  FUN_00c57830(local_80);
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0x406,&local_a0,1,0x41f00000,0x3f000000,1,0);
  FUN_00c57830(local_80);
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0x606,&local_a0,2,0x41f00000,0x3f000000,1,0);
  FUN_00c57830(local_80);
  return;
}

// 005A0560  Em0600::vf48  size=80  [class]
void __fastcall Em0600::vf48(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_00cd4720(*(undefined4 *)(param_1 + 0x4f0));
  BehaviorEmBase::vf48();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  if (*(int *)(param_1 + 0xa18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  return;
}

// 005A05B0  FUN_005a05b0  size=176  [between]
void __fastcall FUN_005a05b0(int param_1)

{
  FUN_00a962d0(0,0);
  DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  *(uint *)(param_1 + 0x1924) = *(uint *)(param_1 + 0x1924) & 0x87ffffff;
  *(uint *)(param_1 + 0x1924) = *(uint *)(param_1 + 0x1924) & 0xfdffffff;
  *(uint *)(param_1 + 0x1924) = *(uint *)(param_1 + 0x1924) & 0xfe7fffff;
  if (*(int *)(param_1 + 0x1624) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x1624) = 0;
  }
  if (*(int *)(param_1 + 0x1628) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x1628) = 0;
  }
  if (*(int *)(param_1 + 0x162c) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x162c) = 0;
  }
  FUN_00a930c0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6d00();
  }
  *(undefined4 *)(param_1 + 0x1974) = 0;
  *(undefined4 *)(param_1 + 0x192c) = 0;
  *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19a8) = 0;
  *(undefined4 *)(param_1 + 0x1928) = 0xffffffff;
  return;
}

// 005A0660  FUN_005a0660  size=179  [between]
void __fastcall FUN_005a0660(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0.0;
  iVar1 = *(int *)(param_1 + 0xa84);
  local_18 = 0;
  if (iVar1 != 0) {
    local_20 = *(undefined4 *)(iVar1 + 0x40);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
    local_1c = *(float *)(iVar1 + 0x44) - 3.0;
  }
  uVar2 = *(uint *)(param_1 + 0x1924);
  bVar3 = (DAT_01bea060 & 0x42000000) == 0 &&
          ((uVar2 & 0x10000000) == 0 &&
          ((uVar2 & 0x8000000) == 0 && ((uVar2 & 0x20000000) == 0 && (uVar2 & 0x2000000) == 0)));
  FUN_0059dee0(&local_20,bVar3);
  FUN_0059df80(&local_20,bVar3);
  FUN_0059e0f0(&local_20,bVar3);
  return;
}

// 005A0720  Em0600::vf1A4  size=118  [class]
void Em0600::vf1A4(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00a81330();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
  }
  if (((((*(byte *)(iVar2 + 0x4c0) & 0x10) != 0) && (*param_1 == 0x186)) && ((param_2 & 0xe) != 0))
     && ((piVar3 = (int *)FUN_00412580(iVar2), piVar3 != (int *)0x0 &&
         (iVar1 = FUN_00ac4780(), iVar1 != 0)))) {
    iVar1 = *piVar3;
    uVar4 = FUN_00fdbc60(1);
    (**(code **)(iVar1 + 0x30c))(uVar4);
  }
  return;
}

// 005A07A0  FUN_005a07a0  size=269  [between]
void __fastcall FUN_005a07a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_4;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x1930) != 0) && (*(int **)(param_1 + 0xa84) != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar4);
      if ((iVar1 != 0) && (iVar1 = FUN_00b8bfb0(), iVar1 == 0)) {
        return;
      }
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_005a088f;
  }
  local_4 = *(undefined4 *)(param_1 + 0x1998);
  if (*(int *)(param_1 + 0x1938) != -1) {
    local_4 = 0;
  }
  if (*(int *)(param_1 + 0xdc8) == 0) {
    uVar3 = 0;
    uVar2 = 7;
  }
  else {
    FUN_00a962d0(1,0);
    uVar3 = 0x40;
    uVar2 = 8;
  }
  FUN_00aa4080(uVar2,0,local_4,0x3f800000,uVar3,0xbf800000,0x3f800000);
  FUN_00a8ccb0(1);
LAB_005a088f:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  return;
}

// 005A08B0  FUN_005a08b0  size=269  [between]
void __fastcall FUN_005a08b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_4;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x1930) != 0) && (*(int **)(param_1 + 0xa84) != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar4);
      if ((iVar1 != 0) && (iVar1 = FUN_00b8bfb0(), iVar1 == 0)) {
        return;
      }
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_005a099f;
  }
  local_4 = *(undefined4 *)(param_1 + 0x1998);
  if (*(int *)(param_1 + 0x1938) != -1) {
    local_4 = 0;
  }
  if (*(int *)(param_1 + 0xdc8) == 0) {
    FUN_00a962d0(1,0);
    uVar3 = 0x40;
    uVar2 = 7;
  }
  else {
    uVar3 = 0;
    uVar2 = 8;
  }
  FUN_00aa4080(uVar2,0,local_4,0x3f800000,uVar3,0xbf800000,0x3f800000);
  FUN_00a8ccb0(1);
LAB_005a099f:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  return;
}

// 005A09C0  FUN_005a09c0  size=399  [between]
void __fastcall FUN_005a09c0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (param_1[899] == 0) {
      if (param_1[0x372] == 1) {
        FUN_00aa4080(0x15,0,param_1[0x666],0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
      else {
        FUN_00a962d0(1,0);
        FUN_00aa4080(0xb,0,param_1[0x666],0x3f800000,0x8000040,0xbf800000,0x3f800000);
      }
    }
    else {
      if (param_1[0x372] == 2) {
        FUN_00a962d0(1,0);
        uVar3 = 0x8000040;
        iVar1 = param_1[0x666];
        uVar2 = 0x15;
      }
      else {
        uVar3 = 0;
        iVar1 = param_1[0x666];
        uVar2 = 10;
      }
      FUN_00aa4080(uVar2,0,iVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[899] = (uint)(param_1[899] == 0);
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[899] = (uint)(param_1[899] == 0);
                    /* WARNING: Could not recover jumptable at 0x005a0b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 005A0B50  FUN_005a0b50  size=398  [between]
void __fastcall FUN_005a0b50(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (param_1[899] == 0) {
      if (param_1[0x372] == 2) {
        FUN_00a962d0(1,0);
        uVar3 = 0x8000040;
        iVar1 = param_1[0x666];
        uVar2 = 0x15;
      }
      else {
        uVar3 = 0;
        iVar1 = param_1[0x666];
        uVar2 = 0xb;
      }
      FUN_00aa4080(uVar2,0,iVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
    }
    else {
      if (param_1[0x372] == 1) {
        uVar3 = 0;
        iVar1 = param_1[0x666];
        uVar2 = 0x17;
      }
      else {
        FUN_00a962d0(1,0);
        uVar3 = 0x8000040;
        iVar1 = param_1[0x666];
        uVar2 = 10;
      }
      FUN_00aa4080(uVar2,0,iVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
    }
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[899] = (-(uint)(param_1[899] != 0) & 0xfffffffe) + 2;
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[899] = (-(uint)(param_1[899] != 0) & 0xfffffffe) + 2;
                    /* WARNING: Could not recover jumptable at 0x005a0cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 005A0CE0  FUN_005a0ce0  size=59  [between]
void __fastcall FUN_005a0ce0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  if (iVar1 <= *(int *)(param_1 + 0x870)) {
    *(int *)(param_1 + 0x870) = iVar1;
  }
  return;
}

// 005A0D60  FUN_005a0d60  size=67  [between]
void FUN_005a0d60(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
    FID_conflict__memcpy((void *)(iVar1 + 0x10),(void *)(param_1 + 0x10),0x40);
    switchD_0080dbae::default();
  }
  return;
}

// 005A0DB0  FUN_005a0db0  size=223  [between]
void __fastcall FUN_005a0db0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x870);
  iVar3 = FUN_00a8eeb0();
  fVar2 = ((float)iVar1 / (float)iVar3) * 100.0;
  if (fVar2 < 30.0 != (fVar2 == 30.0)) {
    *(undefined4 *)(param_1 + 0x1920) = 3;
    *(undefined4 *)(param_1 + 0x19a8) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x870);
  iVar3 = FUN_00a8eeb0();
  fVar2 = ((float)iVar1 / (float)iVar3) * 100.0;
  if (fVar2 < 50.0 != (fVar2 == 50.0)) {
    *(undefined4 *)(param_1 + 0x1920) = 2;
    *(undefined4 *)(param_1 + 0x19a8) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x870);
  iVar3 = FUN_00a8eeb0();
  fVar2 = ((float)iVar1 / (float)iVar3) * 100.0;
  if (fVar2 < 70.0 != (fVar2 == 70.0)) {
    *(undefined4 *)(param_1 + 0x1920) = 1;
    *(undefined4 *)(param_1 + 0x19a8) = 0;
  }
  return;
}

// 005A0E90  FUN_005a0e90  size=418  [between]
void __fastcall FUN_005a0e90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puStack_150;
  undefined4 *puStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 auStack_104 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  undefined4 local_e0 [28];
  undefined4 uStack_70;
  undefined4 local_50;
  undefined1 uStack_4c;
  undefined1 local_2c;
  
  uStack_144 = 0x5a0ea9;
  FUN_0118f7b0();
  local_50 = 0;
  local_e0[0] = 0x1b;
  local_100 = 0;
  local_2c = 4;
  local_fc = 0;
  local_f8 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_130 = 0;
  local_12c = 0xc1000000;
  local_10c = 0xc1000000;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0x41900000;
  uStack_144 = 0x5a0f03;
  piVar1 = (int *)FUN_00910da0();
  uStack_144 = 1;
  local_148 = 0x3f800000;
  puStack_14c = &local_110;
  puStack_150 = &local_130;
  uVar2 = (**(code **)(*piVar1 + 0x10))(local_e4,local_e0,&local_100,&local_120);
  FUN_00910ab0(uVar2);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x1900),0x40000);
  *(undefined4 *)(param_1 + 0x1904) = 0x215;
  *(undefined4 *)(param_1 + 0x1908) = 0;
  FUN_0118f7b0();
  uStack_70 = 0;
  local_100 = 0x1b;
  local_130 = 0;
  uStack_4c = 4;
  local_12c = 0;
  local_128 = 0;
  puStack_150 = (undefined4 *)0x0;
  puStack_14c = (undefined4 *)0x0;
  local_148 = 0;
  local_11c = 0xc1000000;
  local_120 = 0;
  local_118 = 0x41900000;
  piVar1 = (int *)FUN_00910da0();
  uVar2 = (**(code **)(*piVar1 + 0x10))
                    (auStack_104,&local_100,&local_130,&puStack_150,&stack0xfffffec0,&local_120,
                     0x3f800000,1);
  FUN_00910ab0(uVar2);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x190c),0x40000);
  *(undefined4 *)(param_1 + 0x1910) = 0x315;
  *(undefined4 *)(param_1 + 0x1914) = 0;
  return;
}

// 005A10A0  Em0600::getAttackInfo  size=338  [class]
int __thiscall Em0600::getAttackInfo(int param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 extraout_var;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_9;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar2 + 8);
      puVar1[5] = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar3 = 10;
      local_9 = 10;
      uVar5 = 10;
      FUN_00a8d280();
      if (*(int *)(param_1 + 0x754) != 0) {
        uVar3 = FUN_00ac8520(*param_2);
        (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
        (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
        uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
        local_9 = extraout_var;
      }
      *(undefined1 *)(puVar1 + 4) = local_9;
      puVar1[1] = uVar3;
      puVar1[3] = 1;
      puVar1[2] = uVar5;
      *(undefined2 *)(puVar1 + 0x21) = 0x5601;
      *puVar1 = 0x186;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      puVar1[0x23] = puVar1[0x23] | 0x1000000;
      iVar4 = FUN_0059ee20();
      if (iVar4 != 0) {
        puVar1[0x24] = puVar1[0x24] | 0x4000;
      }
      puVar1[1] = uVar3;
      puVar1[3] = 1;
      puVar1[2] = uVar5;
      *(undefined1 *)((int)puVar1 + 0x11) = 10;
      *(undefined1 *)(puVar1 + 4) = local_9;
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_01642dc4);
  return 0;
}

// 005A1200  FUN_005a1200  size=277  [between]
void __fastcall FUN_005a1200(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  if (((DAT_01bea060 & 0x42000000) == 0) && (*(int *)(param_1 + 0x1930) == 0)) {
    uVar3 = FUN_00a8cab0();
    uVar3 = uVar3 & 0xffff0000;
    if ((uVar3 != 0x6000000) && ((uVar3 != 0x50000 && (uVar3 != 0x60000)))) {
      iVar1 = *(int *)(param_1 + 0x1920);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x870);
        iVar4 = FUN_00a8eeb0();
        fVar2 = ((float)iVar1 / (float)iVar4) * 100.0;
        if (fVar2 < 85.0 != (fVar2 == 85.0)) {
          *(undefined4 *)(param_1 + 0x19a8) = 1;
        }
      }
      else {
        if (iVar1 == 1) {
          iVar1 = *(int *)(param_1 + 0x870);
          iVar4 = FUN_00a8eeb0();
          fVar2 = ((float)iVar1 / (float)iVar4) * 100.0;
          bVar5 = fVar2 < 70.0 | (byte)((ushort)((ushort)(fVar2 == 70.0) << 0xe) >> 8);
        }
        else {
          if (iVar1 != 2) {
            return;
          }
          iVar1 = *(int *)(param_1 + 0x870);
          iVar4 = FUN_00a8eeb0();
          fVar2 = ((float)iVar1 / (float)iVar4) * 100.0;
          bVar5 = fVar2 < 30.0 | (byte)((ushort)((ushort)(fVar2 == 30.0) << 0xe) >> 8);
        }
        if (((POPCOUNT(bVar5) & 1U) != 0) && (*(int *)(param_1 + 0x19b8) != 0)) {
          *(undefined4 *)(param_1 + 0x19a8) = 1;
          return;
        }
      }
    }
  }
  return;
}

// 005A1320  FUN_005a1320  size=391  [between]
void __fastcall FUN_005a1320(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    goto LAB_005a145f;
  }
  if (param_1[0x372] == 1) {
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      uVar4 = 0x8000000;
LAB_005a1436:
      uVar3 = 0x87;
    }
    else {
      if (sVar1 != 1) goto LAB_005a1454;
      uVar4 = 0x8000000;
LAB_005a13b9:
      uVar3 = 0x88;
    }
LAB_005a144f:
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,uVar4,0xbf800000,0x3f800000);
  }
  else {
    if (param_1[0x372] != 2) {
      uVar4 = 0x8000000;
      uVar3 = 0x5b;
      goto LAB_005a144f;
    }
    FUN_00a962d0(1,0);
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      uVar4 = 0x8000040;
      goto LAB_005a1436;
    }
    if (sVar1 == 1) {
      uVar4 = 0x8000040;
      goto LAB_005a13b9;
    }
  }
LAB_005a1454:
  FUN_00a8ccb0(1);
LAB_005a145f:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a14a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005A14B0  FUN_005a14b0  size=216  [between]
void __thiscall FUN_005a14b0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x5a;
  uVar2 = 0x8000000;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xdc8) == 1) {
LAB_005a1500:
      uVar3 = 0x82;
      goto LAB_005a1555;
    }
    if (*(int *)(param_1 + 0xdc8) != 2) {
LAB_005a151b:
      uVar3 = 0x5b;
      goto LAB_005a1555;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_005a1555;
      uVar3 = 0x5c;
      if (*(int *)(param_1 + 0xdc8) != 1) {
        if (*(int *)(param_1 + 0xdc8) != 2) goto LAB_005a151b;
        uVar2 = 0x8000040;
        FUN_00a962d0(1,0);
      }
      sVar1 = FUN_00dde2a0(0,1);
      if (sVar1 == 0) {
        uVar3 = 0x87;
      }
      else if (sVar1 == 1) {
        uVar3 = 0x88;
      }
      goto LAB_005a1555;
    }
    if (*(int *)(param_1 + 0xdc8) == 1) goto LAB_005a1500;
    if (*(int *)(param_1 + 0xdc8) != 2) {
      uVar3 = 0x5b;
      goto LAB_005a1555;
    }
  }
  FUN_00a962d0(1,0);
  uVar3 = 0x82;
  uVar2 = 0x8000040;
LAB_005a1555:
  FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,uVar2,0xbf800000,0x3f800000);
  return;
}

// 005A1590  FUN_005a1590  size=260  [between]
void __fastcall FUN_005a1590(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    goto LAB_005a1647;
  }
  fVar1 = (float)param_1[0x2a7] * 57.29578;
  uVar4 = 0x8000000;
  if (param_1[0x372] == 1) {
    bVar5 = 0.0 < fVar1 | (byte)((ushort)((ushort)(fVar1 == 0.0) << 0xe) >> 8);
LAB_005a1600:
    uVar3 = 0x51;
    if ((POPCOUNT(bVar5) & 1U) == 0) {
      uVar3 = 0x50;
    }
  }
  else {
    if (param_1[0x372] == 2) {
      FUN_00a962d0(1,0);
      bVar5 = 0.0 < fVar1 | (byte)((ushort)((ushort)(fVar1 == 0.0) << 0xe) >> 8);
      uVar4 = 0x8000040;
      goto LAB_005a1600;
    }
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      uVar3 = 0x4d;
    }
    else {
      uVar3 = 0x4e;
    }
  }
  FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,uVar4,0xbf800000,0x3f800000);
  FUN_00a8ccb0(1);
LAB_005a1647:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a1692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005A16A0  FUN_005a16a0  size=499  [between]
void __fastcall FUN_005a16a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    uVar3 = 0x8000000;
    uVar1 = 0x48;
    if (param_1[0x372] == 1) {
LAB_005a16e3:
      uVar1 = 0x7d;
    }
    else if (param_1[0x372] == 2) {
      FUN_00a962d0(1,0);
      uVar3 = 0x8000040;
      goto LAB_005a16e3;
    }
    FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    uVar3 = 0x8000000;
    uVar1 = 0x49;
    if (param_1[0x372] != 1) {
      if (param_1[0x372] != 2) goto LAB_005a1779;
      FUN_00a962d0(1,0);
      uVar3 = 0x8000040;
    }
    uVar1 = 0x7e;
LAB_005a1779:
    FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    uVar3 = 0x8000000;
    uVar1 = 0x4a;
    if (param_1[0x372] != 1) {
      if (param_1[0x372] != 2) goto LAB_005a1810;
      FUN_00a962d0(1,0);
      uVar3 = 0x8000040;
    }
    uVar1 = 0x7f;
LAB_005a1810:
    FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = 5;
    return;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a188f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005A18B0  FUN_005a18b0  size=543  [between]
void __fastcall FUN_005a18b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
    goto LAB_005a19fc;
  }
  iVar1 = param_1[0x372];
  if (iVar1 == 0) {
    uVar3 = 0x8000000;
    uVar2 = 0x46;
LAB_005a196c:
    FUN_00aa4080(uVar2,0,0x3e4ccccd,0x3f800000,uVar3,0xbf800000,0x3f800000);
  }
  else {
    if (iVar1 == 1) {
      uVar3 = 0x8000000;
      uVar2 = 0x7a;
      goto LAB_005a196c;
    }
    if (iVar1 == 2) {
      FUN_00a962d0(1,0);
      uVar3 = 0x8000040;
      uVar2 = 0x7a;
      goto LAB_005a196c;
    }
  }
  FUN_00a8ccb0(1);
  FUN_00a82870(0x3edf66f3,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3f32b8c2,0xbedf66f3,0x3dcccccd,0x393702d3,0x3c0efa35);
LAB_005a19fc:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0x3e);
  if (iVar1 != 0) {
    FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
    FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a1acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005A1AD0  FUN_005a1ad0  size=173  [between]
float10 __fastcall FUN_005a1ad0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x3000c) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x3000d) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x30000) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x30001) {
          return (float10)0.0;
        }
      }
      iVar1 = FUN_00a8c760(0x30);
      if (iVar1 != 0) {
        return (float10)*(float *)(param_1 + 0x93c);
      }
      fVar2 = (float10)FUN_0059f060(0x42253333,0x42786666,0xc0a00000);
      return fVar2;
    }
  }
  fVar2 = (float10)FUN_0059f060(0x42313333,0x426d3333,0);
  return fVar2;
}

// 005A1B80  FUN_005a1b80  size=405  [between]
void __fastcall FUN_005a1b80(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if (param_1[0x571] != 0) {
      FUN_00a805f0();
      param_1[0x571] = 0;
    }
    if (param_1[0x572] != 0) {
      FUN_00a805f0();
      param_1[0x572] = 0;
    }
    FUN_00a938c0(3);
    FUN_00ac9300("INNER-R");
    FUN_00ac9300("OUTER-R");
    FUN_00ac9210("CUT-R-LEG-1");
    FUN_00ac9300("R-LEG-1");
    param_1[0x64c] = 0;
    FUN_00aa4080(0xaf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    FUN_0059f2d0(1);
    param_1[0x66b] = 0;
  }
  else if (iVar3 != 1) {
    return;
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 != 0) {
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[899] = 0;
    (*pcVar1)();
    sVar2 = FUN_00dde2a0(2,3);
    if (sVar2 == 2) {
      param_1[0x64a] = 0x30005;
    }
    else if (sVar2 == 3) {
      param_1[0x64a] = 0x30006;
    }
    if (param_1[0x651] != 0) {
      FUN_00a805f0();
      param_1[0x651] = 0;
    }
    FUN_00ac9210("EYE_GLOW");
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x590);
  }
  return;
}

// 005A1D20  FUN_005a1d20  size=199  [between]
void __fastcall FUN_005a1d20(int param_1)

{
  float fVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int **)(param_1 + 0xa84) == (int *)0x0) {
    return;
  }
  puVar3 = &DAT_01be9db8;
  (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d80(puVar3);
  if (iVar2 == 0) {
    return;
  }
  uStack_20 = 0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  if (*(int *)(param_1 + 0x1938) == 0) {
    uVar4 = 0x405;
  }
  else {
    fVar1 = fStack_14;
    if (*(int *)(param_1 + 0x1938) != 1) goto LAB_005a1da9;
    uVar4 = 0x605;
  }
  iVar2 = FUN_00a12210(uVar4);
  fVar1 = fStack_14;
  if (iVar2 != 0) {
    uStack_20 = *(undefined4 *)(iVar2 + 0x40);
    fStack_1c = *(float *)(iVar2 + 0x44);
    fStack_18 = *(float *)(iVar2 + 0x48);
    fVar1 = *(float *)(iVar2 + 0x4c);
  }
LAB_005a1da9:
  fStack_1c = fStack_1c + 1.5;
  fStack_18 = fStack_18 - 1.0;
  fStack_14 = fVar1 + fStack_14;
  FUN_00b8a320(&uStack_20);
  return;
}

// 005A1DF0  FUN_005a1df0  size=126  [between]
undefined4 __fastcall FUN_005a1df0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xdc8) == 0) &&
     (iVar1 = *(int *)(param_1 + 0x870), iVar3 = FUN_00a8eeb0(),
     fVar2 = ((float)iVar1 / (float)iVar3) * 100.0, fVar2 < 70.0 != (fVar2 == 70.0))) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x870);
  iVar3 = FUN_00a8eeb0();
  fVar2 = ((float)iVar1 / (float)iVar3) * 100.0;
  if (fVar2 < 20.0 != (fVar2 == 20.0)) {
    return 1;
  }
  return 0;
}

// 005A1E70  FUN_005a1e70  size=102  [between]
void __fastcall FUN_005a1e70(int param_1)

{
  FUN_009fd240();
  FUN_00ac8e10(0);
  FUN_00ac8eb0(1,1);
  FUN_00ac8d40(0);
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  FUN_00ac8dd0(&DAT_01642cb4,1);
  FUN_00ac8dd0(&DAT_01642cbc,1);
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  *(undefined4 *)(param_1 + 0xe08) = 0;
  return;
}

// 005A1EE0  FUN_005a1ee0  size=110  [between]
void __fastcall FUN_005a1ee0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_00b8a040(0,0,0);
      (**(code **)(*piVar1 + 0x150))(0x70,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x70,piVar1[0x13c]);
      FUN_00bee830();
      return;
    }
  }
  return;
}

// 005A1F50  FUN_005a1f50  size=110  [between]
void __fastcall FUN_005a1f50(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_00b8a040(0,0,0);
      (**(code **)(*piVar1 + 0x150))(0x71,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x71,piVar1[0x13c]);
      FUN_00bee830();
      return;
    }
  }
  return;
}

// 005A1FC0  FUN_005a1fc0  size=84  [between]
void __fastcall FUN_005a1fc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x150))(0x72,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x72,piVar1[0x13c]);
    }
  }
  return;
}

// 005A2020  FUN_005a2020  size=443  [between]
/* WARNING: Removing unreachable block (ram,0x005a2175) */
/* WARNING: Removing unreachable block (ram,0x005a211f) */
/* WARNING: Removing unreachable block (ram,0x005a214a) */
/* WARNING: Removing unreachable block (ram,0x005a21a0) */
/* WARNING: Removing unreachable block (ram,0x005a20df) */
/* WARNING: Removing unreachable block (ram,0x005a2089) */
/* WARNING: Removing unreachable block (ram,0x005a205e) */
/* WARNING: Removing unreachable block (ram,0x005a20b4) */
/* WARNING: Removing unreachable block (ram,0x005a21cb) */

void FUN_005a2020(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (param_1 == 0) {
    uVar1 = FUN_00a8c570(local_14,0x401);
    FUN_00910ab0(uVar1);
    uVar1 = FUN_00a8c570(local_10,0x402);
    FUN_00910ab0(uVar1);
    uVar1 = FUN_00a8c570(local_c,0x403);
    FUN_00910ab0(uVar1);
    uVar1 = FUN_00a8c570(local_8,0x404);
    FUN_00910ab0(uVar1);
    uVar1 = 0x407;
    puVar2 = local_4;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    uVar1 = FUN_00a8c570(local_28,0x601);
    FUN_00910ab0(uVar1);
    uVar1 = FUN_00a8c570(local_24,0x602);
    FUN_00910ab0(uVar1);
    uVar1 = FUN_00a8c570(local_20,0x603);
    FUN_00910ab0(uVar1);
    uVar1 = FUN_00a8c570(local_1c,0x604);
    FUN_00910ab0(uVar1);
    uVar1 = 0x607;
    puVar2 = local_18;
  }
  uVar1 = FUN_00a8c570(puVar2,uVar1);
  FUN_00910ab0(uVar1);
  return;
}

// 005A21E0  FUN_005a21e0  size=55  [between]
void __fastcall FUN_005a21e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a7c8a0();
  if (iVar1 != 0) {
    FUN_00acf8b0(*(undefined4 *)(param_1 + 0x4f0),0);
    uVar2 = FUN_009f8b40();
    FUN_00ac55a0(uVar2);
  }
  return;
}

// 005A2220  FUN_005a2220  size=1225  [between]
void __fastcall FUN_005a2220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_30 [4];
  float local_2c;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    FUN_00a8ce90(local_20,local_30);
    fVar4 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x94) + local_2c);
    *(float *)(param_1 + 0x94) = (float)fVar4;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = local_14;
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4520(0xfb,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0xfc,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00aa4520(0x114,iVar1,1,0,0x3f800000,0x10,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 3;
    goto LAB_005a23ce;
  case 3:
LAB_005a23ce:
    iVar1 = FUN_0059fe50(iVar3);
    if (iVar1 == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x196c);
    }
    FUN_00a96030(0,uVar2);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a94bc0(1,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    break;
  case 4:
    FUN_00a94bc0(1,0x3f800000);
    FUN_00aa4520(0xfd,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00b7d7a0(iVar1,0x11e,0x8000000);
    *(undefined4 *)(param_1 + 0x61c) = 5;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4520(0xff,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 7;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 8;
      return;
    }
    break;
  case 8:
    FUN_00aa4520(0x100,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 9;
    goto LAB_005a25a6;
  case 9:
LAB_005a25a6:
    iVar1 = FUN_0059fe50(iVar3);
    if (iVar1 == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x196c);
    }
    FUN_00a96030(0,uVar2);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a94bc0(1,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 10;
      return;
    }
    break;
  case 10:
    FUN_00aa4520(0x101,iVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00aa4520(0x115,iVar1,1,0,0x3f800000,0x10,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 0xb;
    goto LAB_005a2688;
  case 0xb:
LAB_005a2688:
    iVar1 = FUN_0059fe50(iVar3);
    if (iVar1 == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x196c);
    }
    FUN_00a96030(0,uVar2);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a94bc0(1,0);
      return;
    }
  }
  return;
}

// 005A2720  FUN_005a2720  size=2426  [between]
void __fastcall FUN_005a2720(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_30 [4];
  float local_2c;
  undefined1 local_20 [12];
  int local_14;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar5 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    FUN_00a8ce90(local_20,local_30);
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar5 + 0x94) + local_2c);
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = local_14;
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00a94bc0(1,0);
    param_1[0x250] = 0;
    FUN_00a96030(0,0x3f800000);
    FUN_00aa4520(0x103,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 2;
    return;
  case 2:
    FUN_00aa4520(0x104,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 4;
    return;
  case 4:
    FUN_00aa4520(0x105,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00b7d7a0(iVar2,0x11f,0x8000000);
    param_1[0x187] = 5;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 8;
    return;
  case 6:
    FUN_00aa4520(0x106,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 7;
    break;
  case 7:
  case 0x11:
    break;
  case 8:
    FUN_00aa4520(0x10a,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00b7d7a0(iVar2,0x123,0x8000000);
    param_1[0x187] = 9;
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 10;
    return;
  case 10:
    FUN_00aa4520(0x10b,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0xb;
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 0xc;
    return;
  case 0xc:
    FUN_00aa4520(0x10c,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00b7d7a0(iVar2,0x124,0x8000000);
    param_1[0x187] = 0xd;
  case 0xd:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 0xe;
    return;
  case 0xe:
    FUN_00aa4520(0x10d,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0xf;
  case 0xf:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 0x10;
    return;
  case 0x10:
    FUN_00aa4520(0x10e,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0x11;
    break;
  case 0x12:
    FUN_00aa4520(0x107,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00aa4520(0x116,iVar2,1,0,0x3f800000,0x10,0xbf800000,0x3f800000);
    FUN_00b7d7a0(iVar2,0x122,0);
    param_1[0x187] = 0x13;
    goto LAB_005a2cfc;
  case 0x13:
LAB_005a2cfc:
    iVar5 = FUN_0059fe50(iVar5);
    if (iVar5 == 0) {
      uVar3 = 0x3f800000;
    }
    else {
      uVar3 = *(undefined4 *)(iVar5 + 0x196c);
    }
    FUN_00a96030(0,uVar3);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_004b5380();
    if (iVar5 != 0) {
      uVar3 = 0;
      FUN_004b5380(0);
      iVar5 = FUN_00a94ce0(uVar3);
      if (iVar5 != 0) {
        FUN_00b7d7a0(iVar2,0x122,0);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00a94bc0(1,0x3f800000);
    param_1[0x187] = 0x14;
    return;
  case 0x14:
    FUN_00aa4520(0x108,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0x15;
    param_1[0xee7] = 1;
    goto LAB_005a2df0;
  case 0x15:
LAB_005a2df0:
    iVar5 = FUN_00a8c760(0x20);
    if ((iVar5 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar3 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar3 = 0x40a00000;
    }
    FUN_00b7ab30(uVar3);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        param_1[0x250] = 0;
        FUN_00b7dbe0(0x1d);
        uVar3 = 0;
        FUN_00a92f90(0);
        fVar6 = (float10)FUN_00407b40(uVar3);
        param_1[0x24f] = (int)(float)fVar6;
        FUN_00b89c20(0x10a,0x1c,0x1d,iVar2,0x43340000,0x41f00000,0x41f00000,0x447a0000);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
      }
    }
switchD_005a27ba_caseD_20:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    return;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    return;
  case 0x1d:
    FUN_00aa4520(0x118,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    (**(code **)(*param_1 + 0x30c))(3000,0);
    param_1[0x187] = 0x1e;
  case 0x1e:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 0x1f;
    return;
  case 0x1f:
    FUN_00aa4520(0x119,iVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    if (((DAT_01bea004 == 0) && (DAT_01bea000 == DAT_01be9ffc)) && (*DAT_01be9ff4 == 0x13007)) {
      piVar4 = (int *)FUN_00c209f0();
      (**(code **)(*piVar4 + 0x14))(0x11);
    }
    FUN_00c420c0(0x43480000);
    param_1[0x187] = 0x20;
  case 0x20:
    goto switchD_005a27ba_caseD_20;
  default:
    goto switchD_005a27ba_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = 0x12;
    return;
  }
switchD_005a27ba_default:
  return;
}

// 005A3190  FUN_005a3190  size=130  [between]
void __thiscall FUN_005a3190(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00a96030(0,param_2);
  if (*(int *)(param_1 + 0x1940) != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar4 = &DAT_01b351a4;
      (**(code **)(*piVar2 + 4))(&DAT_01b351a4);
      iVar3 = FUN_00dd6d80(puVar4);
      if (iVar3 != 0) {
        fVar1 = 1.0;
        if ((param_2 <= 1.0) && (fVar1 = param_2, param_2 < 0.0)) {
          FUN_00a96030(0,0);
          return;
        }
        FUN_00a96030(0,fVar1);
      }
    }
  }
  return;
}

// 005A3220  FUN_005a3220  size=279  [between]
void FUN_005a3220(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar8 = &DAT_01be9c8c;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c8c);
      iVar3 = FUN_00dd6d80(puVar8);
      if (iVar3 != 0) {
        FUN_00a7c950();
        pcVar1 = *(code **)(*piVar2 + 0x318);
        piVar2[0x281] = 0;
        piVar2[0x282] = 0;
        piVar2[0x293] = 0;
        (*pcVar1)();
        *(ushort *)((int)piVar2 + 0xa2) = *(ushort *)((int)piVar2 + 0xa2) & 0xfffb;
        piVar4 = (int *)piVar2[0xd8];
        if ((int *)piVar2[0xd8] == (int *)0x0) {
          piVar4 = piVar2;
        }
        iVar3 = piVar4[0xd6];
        iVar6 = 0;
        if (0 < (short)iVar3) {
          iVar7 = 0;
          do {
            piVar4 = (int *)piVar2[0xd8];
            if ((int *)piVar2[0xd8] == (int *)0x0) {
              piVar4 = piVar2;
            }
            if ((iVar6 < 0) || ((short)piVar4[0xd6] <= iVar6)) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar4[0xd4] + iVar7;
            }
            *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) & 0xfff9;
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 0xb0;
          } while (iVar6 < (short)iVar3);
        }
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        (**(code **)(*piVar2 + 0x6c))(&uStack_20);
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        (**(code **)(*piVar2 + 0x88))(&uStack_24);
      }
    }
  }
  return;
}

// 005A3340  FUN_005a3340  size=103  [between]
void __thiscall FUN_005a3340(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      piVar1[0x2ee] = 0x40400000;
      piVar1[0x2ef] = param_2;
      FUN_00b85350(0x40400000,0x3d4ccccd,0x3d4ccccd,0,0,0x3e99999a);
    }
  }
  return;
}

// 005A33B0  FUN_005a33b0  size=208  [between]
int __thiscall FUN_005a33b0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      if ((((piVar1[0x397] & piVar1[0x33e]) != 0) && ((piVar1[0x398] & piVar1[0x33e]) != 0)) ||
         (iVar3 = FUN_00a1d280(0x14), iVar3 != 0)) {
        return 1;
      }
      uVar2 = piVar1[0x33f];
      if ((uVar2 & 0xf0) == 0) {
        return 0;
      }
      if (((param_2 & 0x80) != 0) && ((param_2 & 0x20) != 0)) {
        if ((char)piVar1[0x33e] < '\0') {
          if ((uVar2 & 0x20) == 0) {
            return 0;
          }
          return 1;
        }
        if ((piVar1[0x33e] & 0x20U) == 0) {
          return 2;
        }
        if (-1 < (char)uVar2) {
          return 0;
        }
        return 1;
      }
      if ((param_2 & 0x80) != 0) {
        return 2 - (uint)((uVar2 & 0x80) != 0);
      }
      if ((param_2 & 0x20) == 0) {
        return 0;
      }
      return 2 - (uint)((uVar2 & 0x20) != 0);
    }
  }
  return 0;
}

// 005A3480  FUN_005a3480  size=96  [between]
void __fastcall FUN_005a3480(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      FUN_00a8c5f0(100,iVar2,*(undefined4 *)(param_1 + 0x4f0),0x700,0x306);
    }
  }
  return;
}

// 005A34E0  FUN_005a34e0  size=70  [between]
void FUN_005a34e0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_00a9e060(100);
    }
  }
  return;
}

// 005A3540  Em0600::vf44  size=514  [class]
void __fastcall Em0600::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a934c0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
  DAT_01dc08dc = 0;
  DAT_01dc08e0 = 0;
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  if (*(int *)(param_1 + 0x1940) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1940) = 0;
  }
  if (*(int *)(param_1 + 0x1944) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1944) = 0;
  }
  if (*(int *)(param_1 + 0x1948) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1948) = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c950();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c950();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c950();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c950();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  if (*(int *)(param_1 + 0x1900) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1900);
  }
  if (*(int *)(param_1 + 0x190c) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x190c);
  }
  piVar2 = (int *)(param_1 + 0x15c4);
  iVar1 = 8;
  do {
    if (*piVar2 != 0) {
      FUN_00a805f0();
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  BehaviorEmBase::vf44();
  return;
}

// 005A3750  FUN_005a3750  size=285  [between]
void __thiscall
FUN_005a3750(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  FUN_005a05b0(param_2);
  uVar3 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x628) = uVar3;
  uVar4 = param_2 & 0xffff0000;
  if (uVar4 == 0x30000) {
    *(uint *)(param_1 + 0x191c) = param_2;
    FUN_00a8d280();
  }
  else if (uVar4 == 0x50000) {
    iVar9 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar8 = 0;
      do {
        pbVar5 = *(byte **)(*(int *)(iVar8 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
        if (pbVar5 != (byte *)0x0) {
          pcVar7 = "EYE_GLOW";
          do {
            bVar2 = *pbVar5;
            bVar10 = bVar2 < (byte)*pcVar7;
            if (bVar2 != *pcVar7) {
LAB_005a3800:
              iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_005a3805;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar10 = bVar2 < (byte)pcVar7[1];
            if (bVar2 != pcVar7[1]) goto LAB_005a3800;
            pbVar5 = pbVar5 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_005a3805:
          if (iVar6 == 0) {
            puVar1 = (uint *)(iVar8 + *(int *)(param_1 + 800) + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar9 < *(short *)(param_1 + 0x324));
    }
    *(undefined4 *)(param_1 + 0x1618) = *(undefined4 *)(param_1 + 0x160c);
    *(undefined4 *)(param_1 + 0x1620) = 4;
    if (*(int *)(param_1 + 0xdc8) == 0) {
      FUN_0059f180();
    }
  }
  else if (uVar4 == 0x6000000) {
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    FUN_00a93090(2);
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  return;
}

// 005A3880  Em0600::vf19C  size=179  [class]
void __thiscall Em0600::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 005A3940  FUN_005a3940  size=109  [callgraph]
undefined4 __fastcall FUN_005a3940(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_01bea060 & 0x42000000) == 0) && (*(int *)(param_1 + 0x1930) == 0)) {
    uVar1 = FUN_00a8cab0();
    uVar1 = uVar1 & 0xffff0000;
    if ((uVar1 != 0x6000000) && ((uVar1 != 0x50000 && (uVar1 != 0x60000)))) {
      iVar2 = FUN_00a8cab0();
      if (0x30001 < iVar2) {
        iVar2 = FUN_00a8cab0();
        if (((iVar2 < 0x30007) && (*(int *)(param_1 + 0x61c) != 0)) &&
           (*(int *)(param_1 + 0x61c) < 5)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 005A39F0  FUN_005a39f0  size=276  [callgraph]
void __fastcall FUN_005a39f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x1944) != 0)) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a12210(0x451);
      if (iVar1 != 0) {
        uVar2 = FUN_00a81330();
        uVar3 = FUN_00a12210(0x451);
        FUN_005a0d60(uVar3,uVar2);
      }
    }
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x1948) != 0)) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a12210(0x651);
      if (iVar1 != 0) {
        uVar2 = FUN_00a81330();
        uVar3 = FUN_00a12210(0x651);
        FUN_005a0d60(uVar3,uVar2);
      }
    }
  }
  puVar5 = (undefined4 *)(param_1 + 0x15e4);
  local_4 = 8;
  do {
    iVar1 = puVar5[-8];
    iVar4 = FUN_00a12210(*puVar5);
    if ((iVar4 != 0) && (iVar1 != 0)) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
        FID_conflict__memcpy((void *)(iVar1 + 0x10),(void *)(iVar4 + 0x10),0x40);
        switchD_0080dbae::default();
      }
    }
    puVar5 = puVar5 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 005A3B10  FUN_005a3b10  size=236  [callgraph]
void __fastcall FUN_005a3b10(int param_1)

{
  short sVar1;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1560) = 0;
  *(undefined4 *)(param_1 + 0x1564) = 0;
  *(undefined4 *)(param_1 + 0x1568) = 0;
  *(undefined4 *)(param_1 + 0x156c) = local_14;
  *(undefined4 *)(param_1 + 0x1634) = 0;
  *(undefined4 *)(param_1 + 0x1638) = 0;
  *(undefined4 *)(param_1 + 0x199c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1630) = 0;
  sVar1 = FUN_00dde2a0(0,1);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1928) = 0x30008;
  }
  else if (sVar1 == 1) {
    *(undefined4 *)(param_1 + 0x1928) = 0x3000b;
  }
  *(undefined4 *)(param_1 + 0x191c) = 0;
  FUN_005a3750(0x10008,0,0,0,0);
  DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(param_1 + 0x920) = 0x43700000;
  *(undefined4 *)(param_1 + 0x19a8) = 0;
  *(undefined4 *)(param_1 + 0x161c) = 0;
  DAT_01dc08dc = 0;
  DAT_01dc08e0 = 0;
  DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
  DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
  DAT_01dc08ec = 1;
  FUN_00cad2a0();
  return;
}

// 005A3C00  FUN_005a3c00  size=68  [callgraph]
void FUN_005a3c00(void)

{
  short sVar1;
  
  sVar1 = FUN_00dde2a0(0,2);
  if (sVar1 == 0) {
    FUN_005a3750(0x30005,0,0,0,0);
  }
  else if (sVar1 == 1) {
    FUN_005a3750(0x30006,0,0,0,0);
    return;
  }
  return;
}

// 005A3C50  FUN_005a3c50  size=78  [callgraph]
void __fastcall FUN_005a3c50(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x19ac) & 1;
  *(undefined4 *)(param_1 + 0xe0c) = 0;
  if (uVar1 == 0) {
    FUN_005a3750(0x30008,0,0,0,0);
  }
  else if (uVar1 == 1) {
    FUN_005a3750(0x3000b,0,0,0,0);
    *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
    return;
  }
  *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
  return;
}

// 005A3CA0  FUN_005a3ca0  size=145  [callgraph]
void __fastcall FUN_005a3ca0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xe0c) == 1) {
    uVar1 = *(uint *)(param_1 + 0x19ac) & 1;
    if (uVar1 == 0) {
      FUN_005a3750(0x30001,0,0,0,0);
    }
    else if (uVar1 == 1) {
      FUN_005a3750(0x3000d,0,0,0,0);
      *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0xe0c) == 2) {
    uVar1 = *(uint *)(param_1 + 0x19ac) & 1;
    if (uVar1 == 0) {
      FUN_005a3750(0x30000,0,0,0,0);
      *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
      return;
    }
    if (uVar1 == 1) {
      FUN_005a3750(0x3000c,0,0,0,0);
      *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
      return;
    }
  }
  *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
  return;
}

// 005A3D40  FUN_005a3d40  size=238  [callgraph]
void __fastcall FUN_005a3d40(int param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x19ac) % 3 & 0xffff;
  if (uVar2 == 0) {
    if (*(int *)(param_1 + 0x191c) == 0x30008) {
      sVar1 = FUN_00dde2a0(0,1);
      if (sVar1 == 0) goto LAB_005a3dc2;
      if (sVar1 != 1) goto LAB_005a3e26;
LAB_005a3e03:
      FUN_005a3c50();
      *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
      return;
    }
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        if ((*(int *)(param_1 + 0x191c) < 0x30002) || (0x30006 < *(int *)(param_1 + 0x191c))) {
          FUN_005a3c00();
          *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
          return;
        }
        goto LAB_005a3e03;
      }
      goto LAB_005a3e26;
    }
    if (*(int *)(param_1 + 0x191c) != 0x3000b) {
LAB_005a3dc2:
      FUN_005a3750(0x3000b,0,0,0,0);
      *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
      return;
    }
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 != 0) {
      if (sVar1 == 1) {
        FUN_005a3c50();
        *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
        return;
      }
      goto LAB_005a3e26;
    }
  }
  FUN_005a3750(0x30008,0,0,0,0);
LAB_005a3e26:
  *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + 1;
  return;
}

// 005A3E40  FUN_005a3e40  size=824  [callgraph]
void __fastcall FUN_005a3e40(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_14;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    param_1[0x24f] = 0;
    FUN_00a9f4c0("Em0600TrumpDownRight_Start",0x3eaaaaab,0,0);
    if (param_1[0x372] == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x68,0x3eaaaaab,0x8000000);
      uVar2 = 0x70;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x2b,0x3eaaaaab,0x8000000);
      uVar2 = 0x33;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0x3eaaaaab,0x8000000);
    param_1[0x187] = 1;
    param_1[0x558] = 0;
    param_1[0x559] = 0;
    param_1[0x55a] = 0;
    param_1[0x55b] = local_14;
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x250] = sVar1 + 4;
  case 1:
    uVar2 = 0;
    fVar4 = (float10)FUN_005a1ad0(0);
    FUN_00a947e0(0,0,(float)fVar4,uVar2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00a9f4c0("Em0600TrumpDownRight_Loop",0,0,0);
    if (param_1[0x372] == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x69,0,0x8000000);
      uVar2 = 0x71;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x2c,0,0x8000000);
      uVar2 = 0x34;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0,0x8000000);
    param_1[0x187] = 3;
  case 3:
    uVar2 = 0;
    fVar4 = (float10)FUN_005a1ad0(0);
    FUN_00a947e0(0,0,(float)fVar4,uVar2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      iVar3 = param_1[0x250];
      param_1[0x187] = 4;
      param_1[0x250] = iVar3 + -1;
      if (0 < iVar3) {
        param_1[0x187] = 2;
      }
      FUN_00a8d280();
      return;
    }
    break;
  case 4:
    FUN_00a9f4c0("Em0600TrumpDownRight_End",0,0,0);
    if (param_1[0x372] == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x6a,0,0x8000000);
      uVar2 = 0x72;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x2d,0,0x8000000);
      uVar2 = 0x35;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0,0x8000000);
    param_1[0x187] = 5;
  case 5:
    uVar2 = 0;
    fVar4 = (float10)FUN_005a1ad0(0);
    FUN_00a947e0(0,0,(float)fVar4,uVar2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 005A4190  FUN_005a4190  size=852  [callgraph]
void __fastcall FUN_005a4190(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_14;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    param_1[0x24f] = 0;
    FUN_00a9f4c0("Em0600TrumpDownLeft_Start",0x3eaaaaab,0,0);
    if (param_1[0x372] == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,100,0x3eaaaaab,0x8000000);
      uVar2 = 0x6c;
    }
    else {
      FUN_00a962d0(1,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x2f,0x3eaaaaab,0x8000000);
      uVar2 = 0x37;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0x3eaaaaab,0x8000000);
    param_1[0x187] = 1;
    param_1[0x558] = 0;
    param_1[0x559] = 0;
    param_1[0x55a] = 0;
    param_1[0x55b] = local_14;
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x250] = sVar1 + 4;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar2 = 0;
    fVar4 = (float10)FUN_005a1ad0(0);
    FUN_00a947e0(0,0,(float)fVar4,uVar2);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00a9f4c0("Em0600TrumpDownLeft_Loop",0,0,0);
    if (param_1[0x372] == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x65,0,0x8000000);
      uVar2 = 0x6d;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x30,0,0x8000000);
      uVar2 = 0x38;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0,0x8000000);
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar2 = 0;
    fVar4 = (float10)FUN_005a1ad0(0);
    FUN_00a947e0(0,0,(float)fVar4,uVar2);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      iVar3 = param_1[0x250];
      param_1[0x187] = 4;
      param_1[0x250] = iVar3 + -1;
      if (0 < iVar3) {
        param_1[0x187] = 2;
      }
      FUN_00a8d280();
      return;
    }
    break;
  case 4:
    FUN_00a9f4c0("Em0600TrumpDownLeft_End",0,0,0);
    if (param_1[0x372] == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x66,0,0x8000000);
      uVar2 = 0x6e;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x31,0,0x8000000);
      uVar2 = 0x39;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0,0x8000000);
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar2 = 0;
    fVar4 = (float10)FUN_005a1ad0(0);
    FUN_00a947e0(0,0,(float)fVar4,uVar2);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 005A4500  FUN_005a4500  size=268  [callgraph]
void __fastcall FUN_005a4500(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9f4c0("Em0600BrushRight",0,0,0);
    iVar1 = param_1[0x372];
    if (iVar1 == 2) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x77,0,0x8080000);
      uVar3 = 0x78;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,1,0,0x3d,0,0x8080000);
      uVar3 = 0x3e;
    }
    FUN_00a9f600(0xffffffff,0,0,iVar1 == 2,0,uVar3,0,0x8080000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  uVar3 = 0;
  fVar2 = (float10)FUN_005a1ad0(0);
  FUN_00a947e0(0,0,(float)fVar2,uVar3);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a460a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005A4610  FUN_005a4610  size=266  [callgraph]
void __fastcall FUN_005a4610(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a9f4c0("Em0600BrushLeft",0,0,0);
    iVar1 = param_1[0x372];
    if (iVar1 == 1) {
      FUN_00a9f600(0xffffffff,0,0,0,0,0x75,0,0x8080000);
      uVar3 = 0x74;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,1,0,0x3f,0,0x8080000);
      uVar3 = 0x40;
    }
    FUN_00a9f600(0xffffffff,0,0,iVar1 == 1,0,uVar3,0,0x8080000);
    FUN_00a8ccb0(1);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  uVar3 = 0;
  fVar2 = (float10)FUN_005a1ad0(0);
  FUN_00a947e0(0,0,(float)fVar2,uVar3);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a4718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005A4720  FUN_005a4720  size=293  [callgraph]
void FUN_005a4720(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x3b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
    FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_005a3750(0x10000,0,0,0,0);
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 != 0) {
    FUN_005a3750(0x10000,0,0,0,0);
  }
  return;
}

// 005A4850  FUN_005a4850  size=470  [callgraph]
void __fastcall FUN_005a4850(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xdc8) == 1) {
      uVar4 = 0x8000000;
LAB_005a48dc:
      uVar3 = 0x4f;
    }
    else {
      if (*(int *)(param_1 + 0xdc8) == 2) {
        FUN_00a962d0(1,0);
        uVar4 = 0x8000040;
        goto LAB_005a48dc;
      }
      uVar4 = 0x8000000;
      uVar3 = 0x4c;
    }
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,uVar4,0xbf800000,0x3f800000);
    FUN_00a8ccb0(1);
    FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
    FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) goto LAB_005a49d4;
  uVar2 = *(uint *)(param_1 + 0x19b0) & 1;
  if (uVar2 == 0) {
    uVar4 = 0x30009;
LAB_005a49c7:
    FUN_005a3750(uVar4,0,0,0,0);
  }
  else if (uVar2 == 1) {
    uVar4 = 0x3000a;
    goto LAB_005a49c7;
  }
  *(int *)(param_1 + 0x19b0) = *(int *)(param_1 + 0x19b0) + 1;
LAB_005a49d4:
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x19b0) & 1;
    if (uVar2 == 0) {
      FUN_005a3750(0x30009,0,0,0,0);
    }
    else if (uVar2 == 1) {
      FUN_005a3750(0x3000a,0,0,0,0);
      *(int *)(param_1 + 0x19b0) = *(int *)(param_1 + 0x19b0) + 1;
      return;
    }
    *(int *)(param_1 + 0x19b0) = *(int *)(param_1 + 0x19b0) + 1;
  }
  return;
}

// 005A4A30  FUN_005a4a30  size=416  [callgraph]
void __thiscall FUN_005a4a30(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float *unaff_retaddr;
  float fVar13;
  
  iVar10 = FUN_00a12210((int)*(short *)(param_1 + 0x1574 + param_2 * 2));
  if (iVar10 != 0) {
    pfVar1 = (float *)(iVar10 + 0x10);
    D3DXVec3TransformNormal(param_3,(param_2 + 0x158) * 0x10 + param_1,pfVar1);
    *param_3 = *(float *)(iVar10 + 0x40) + *param_3;
    param_3[1] = *(float *)(iVar10 + 0x44) + param_3[1];
    param_3[2] = *(float *)(iVar10 + 0x48) + param_3[2];
    fVar2 = *(float *)(iVar10 + 0x20);
    fVar3 = *(float *)(iVar10 + 0x24);
    fVar4 = *(float *)(iVar10 + 0x28);
    fVar13 = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) + *pfVar1 * *pfVar1 +
                  *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
    fVar9 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                 *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                 *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
    fVar5 = *(float *)(iVar10 + 0x28);
    fVar6 = *(float *)(iVar10 + 0x38);
    fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar9));
    fVar7 = *(float *)(iVar10 + 0x14);
    fVar8 = *pfVar1;
    fVar12 = (float10)fpatan((float10)(fVar5 / fVar9),(float10)(fVar6 / fVar9));
    *unaff_retaddr = (float)fVar12;
    unaff_retaddr[1] = (float)fVar11;
    fVar11 = (float10)fpatan((float10)fVar7 /
                             (float10)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4),
                             (float10)fVar8 / (float10)fVar13);
    unaff_retaddr[2] = (float)fVar11;
    iVar10 = FUN_00a8cab0();
    if (iVar10 == 0x50001) {
      if (param_2 == 0) {
        fVar11 = (float10)fpatan((float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x40) -
                                 (float10)*param_3,
                                 (float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x48) -
                                 (float10)param_3[2]);
        unaff_retaddr[1] = (float)fVar11;
        return;
      }
    }
    else {
      iVar10 = FUN_00a8cab0();
      if ((iVar10 == 0x50002) && (param_2 == 2)) {
        fVar11 = (float10)fpatan((float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x40) -
                                 (float10)*param_3,
                                 (float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x48) -
                                 (float10)param_3[2]);
        unaff_retaddr[1] = (float)fVar11;
        return;
      }
    }
    if (param_2 < 2) {
      fVar2 = unaff_retaddr[1] - 1.5707964;
    }
    else {
      fVar2 = unaff_retaddr[1] + 1.5707964;
    }
    fVar11 = (float10)FUN_00ddba30(fVar2);
    unaff_retaddr[1] = (float)fVar11;
  }
  return;
}

// 005A4C40  FUN_005a4c40  size=616  [callgraph]
void __fastcall FUN_005a4c40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auStack_348 [16];
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  uint uStack_2ac;
  undefined4 uStack_22c;
  undefined4 uStack_1cc;
  
  if (*(int *)(param_1 + 0x1624) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x1624) = 0;
  }
  if (*(int *)(param_1 + 0x1628) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x1628) = 0;
  }
  if (*(int *)(param_1 + 0x162c) != 0) {
    FUN_00ad0a90();
    *(undefined4 *)(param_1 + 0x162c) = 0;
  }
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  FUN_009f8b40();
  FUN_00ac8520(0x14);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(0x14);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(0x14);
  uVar3 = 0;
  (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(0x14);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uVar1 = FUN_00ad09e0(*(undefined4 *)(param_1 + 0x4f0),6,&stack0xfffff9a4);
  *(undefined4 *)(param_1 + 0x1628) = uVar1;
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  uStack_22c = 0x77;
  uStack_1cc = FUN_009f8b40();
  uStack_328 = 0x1e;
  uStack_320 = 0x1e;
  uStack_31c = 0;
  uStack_324 = 0x96;
  uVar1 = FUN_00ac8520(0x14);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(0x14);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(0x14);
  uStack_330 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(0x14);
  uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
  uStack_328._0_2_ = CONCAT11(10,uVar3);
  uStack_334 = uVar1;
  uStack_32c = uVar2;
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uStack_2ac = uStack_2ac | 0x8000000;
  uStack_338 = 0x185;
  uVar1 = FUN_00ad09e0(*(undefined4 *)(param_1 + 0x4f0),6,auStack_348);
  *(undefined4 *)(param_1 + 0x162c) = uVar1;
  return;
}

// 005A4EB0  FUN_005a4eb0  size=87  [callgraph]
void FUN_005a4eb0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x50001) {
      FUN_005a3750(0x50001,0,0,0,0);
    }
  }
  else if (param_1 == 1) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x50002) {
      FUN_005a3750(0x50002,0,0,0,0);
      return;
    }
  }
  return;
}

// 005A4F10  FUN_005a4f10  size=477  [callgraph]
void __thiscall FUN_005a4f10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  switch(param_2) {
  case 0:
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00a82090("EM0600_FRONT_RIGHT_LEG_LOW",0x20603,local_90), iVar1 != 0)) {
      FUN_005a21e0(iVar1);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      return;
    }
    break;
  case 1:
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00a82090("EM0600_FRONT_LEFT_LEG_LOW",0x20604,local_90), iVar1 != 0)) {
      FUN_005a21e0(iVar1);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      return;
    }
    break;
  case 2:
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00a82090("EM0600_FRONT_RIGHT_LEG_HIGHT",0x20607,local_90), iVar1 != 0)) {
      FUN_005a21e0(iVar1);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      return;
    }
    break;
  case 3:
    iVar1 = FUN_00a81330();
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00a82090("EM0600_FRONT_LEFT_LEG_HIGHT",0x20608,local_90), iVar1 != 0)) {
      FUN_005a21e0(iVar1);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      return;
    }
    break;
  case 5:
    if ((*(int *)(param_1 + 0x1938) != 5) &&
       (iVar1 = FUN_00a82090("EM0600_CUT_HEAD",0x20609,local_90), iVar1 != 0)) {
      FUN_005a21e0(iVar1);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
  }
  return;
}

// 005A5110  FUN_005a5110  size=357  [callgraph]
void __thiscall FUN_005a5110(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x1934) != 0) {
    if ((param_2 == 0x1f) || (param_2 == 0x20)) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar5 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x43fa0000,
                           0x42c80000,param_2,4);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x48) = 0;
        *(undefined4 *)(iVar5 + 0x40) = 0x3f99999a;
        *(undefined4 *)(iVar5 + 0x44) = 0x3e99999a;
        if (*(int *)(param_1 + 0x4f0) != 0) {
          uVar6 = FUN_00a7c7f0();
          FUN_00a7c960(uVar6);
        }
      }
    }
    else {
      iVar5 = FUN_00a12210(0x402);
      if (((iVar5 != 0) && (iVar1 = *(int *)(param_1 + 0xa84), iVar1 != 0)) &&
         (fVar2 = *(float *)(iVar5 + 0x40) - *(float *)(iVar1 + 0x40),
         fVar4 = *(float *)(iVar5 + 0x44) - *(float *)(iVar1 + 0x44),
         fVar3 = *(float *)(iVar5 + 0x48) - *(float *)(iVar1 + 0x48),
         fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2), fVar2 < 6.0 != (fVar2 == 6.0))
         ) {
        FUN_005a1ee0();
      }
      iVar5 = FUN_00a12210(0x602);
      if (((iVar5 != 0) && (iVar1 = *(int *)(param_1 + 0xa84), iVar1 != 0)) &&
         (fVar2 = *(float *)(iVar5 + 0x40) - *(float *)(iVar1 + 0x40),
         fVar4 = *(float *)(iVar5 + 0x44) - *(float *)(iVar1 + 0x44),
         fVar3 = *(float *)(iVar5 + 0x48) - *(float *)(iVar1 + 0x48),
         fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2), fVar2 < 6.0 != (fVar2 == 6.0))
         ) {
        FUN_005a1f50();
        return;
      }
    }
  }
  return;
}

// 005A5280  FUN_005a5280  size=609  [callgraph]
void __thiscall FUN_005a5280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  FUN_005a2020(param_2);
  if (param_2 == 0) {
    FUN_00ac9300("R-LEG-1");
    FUN_00ac9300("INNER-R");
    if (*(int *)(param_1 + 0x1944) == 0) {
      iVar1 = FUN_00a82090("EM0600_FRONT_RIGHT_LEG_HIGHT",0x20605,local_90);
      if (iVar1 != 0) {
        FUN_00a8c5f0(5,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x400,0x400);
        FUN_005a21e0(iVar1);
        *(int *)(param_1 + 0x1944) = iVar1;
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          if (*(int **)(iVar2 + 0x7b0) != (int *)0x0) {
            (**(code **)(**(int **)(iVar2 + 0x7b0) + 0x108))(8);
            FUN_008f1760(0x40);
          }
          *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
          iVar2 = FUN_00a82090("EM0600_FROcNT_RIGHT_LEG_HATCH",0x2060a,local_90);
          if (iVar2 != 0) {
            iVar3 = FUN_00a7c8a0();
            if (iVar3 != 0) {
              uVar6 = 0;
              uVar5 = 0x451;
              uVar4 = 0;
              FUN_00a7c8a0(0,iVar1,iVar2,0x451,0);
              FUN_00a8c5f0(uVar4,iVar1,iVar2,uVar5,uVar6);
            }
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
          }
        }
      }
    }
  }
  else if (param_2 == 1) {
    FUN_00ac9300("L-LEG-1");
    FUN_00ac9300("INNER-L");
    if (*(int *)(param_1 + 0x1948) == 0) {
      iVar1 = FUN_00a82090("EM0600_FRONT_LEFT_LEG_HIGHT",0x20606,local_90);
      if (iVar1 != 0) {
        FUN_00a8c5f0(7,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x600,0x600);
        FUN_005a21e0(iVar1);
        *(int *)(param_1 + 0x1948) = iVar1;
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          if (*(int **)(iVar2 + 0x7b0) != (int *)0x0) {
            (**(code **)(**(int **)(iVar2 + 0x7b0) + 0x108))(8);
            FUN_008f1760(0x40);
          }
          *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
          iVar2 = FUN_00a82090("EM0600_FROcNT_LEFT_LEG_HATCH",0x2060b,local_90);
          if (iVar2 != 0) {
            iVar3 = FUN_00a7c8a0();
            if (iVar3 != 0) {
              uVar6 = 0;
              uVar5 = 0x651;
              uVar4 = 0;
              FUN_00a7c8a0(0,iVar1,iVar2,0x651,0);
              FUN_00a8c5f0(uVar4,iVar1,iVar2,uVar5,uVar6);
            }
            uVar4 = FUN_00a7c7f0();
            FUN_00a7c960(uVar4);
            return;
          }
        }
      }
    }
  }
  return;
}

// 005A54F0  FUN_005a54f0  size=151  [callgraph]
void __fastcall FUN_005a54f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x1940) == 0) {
    iVar1 = FUN_00a82090("Em0600_ARM",0x2060c,0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1940) = iVar1;
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b351a4;
        (**(code **)(*piVar2 + 4))(&DAT_01b351a4);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          if (piVar2[0x1d9] != 0) {
            FUN_008e3c10();
          }
          if ((int *)piVar2[0x1ec] != (int *)0x0) {
            (**(code **)(*(int *)piVar2[0x1ec] + 0xdc))(0);
          }
        }
      }
    }
    FUN_00ac9300("L-ARM-BLADE");
    FUN_00ac9210("L-ARM-CUT");
  }
  return;
}

// 005A5590  FUN_005a5590  size=57  [callgraph]
void __fastcall FUN_005a5590(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0x1940) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b351a4;
    (**(code **)(*piVar1 + 4))(&DAT_01b351a4);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005a3480();
      return;
    }
  }
  return;
}

// 005A55D0  FUN_005a55d0  size=57  [callgraph]
void __fastcall FUN_005a55d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0x1940) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b351a4;
    (**(code **)(*piVar1 + 4))(&DAT_01b351a4);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005a34e0();
      return;
    }
  }
  return;
}

// 005A5610  FUN_005a5610  size=81  [callgraph]
void __fastcall FUN_005a5610(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x1940) != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01b351a4;
      (**(code **)(*piVar1 + 4))(&DAT_01b351a4);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_005a34e0();
      }
    }
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0x1940) = 0;
  }
  return;
}

// 005A5670  FUN_005a5670  size=349  [callgraph]
void __thiscall FUN_005a5670(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = FUN_00a959f0(0);
  if ((iVar5 < 6) && (*(int *)(param_1 + 0xde0) == 0)) {
    FUN_005a3190(*(undefined4 *)(param_1 + 0x196c));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0xde0) = 1;
    return;
  }
  piVar2 = *(int **)(param_1 + 0xa84);
  if (piVar2 != (int *)0x0) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar6);
    if (iVar5 != 0) {
      FUN_00cbc8f0(param_2,1);
      if (param_2 == 0x1000) {
        bVar3 = *(byte *)(piVar2 + 0x33f) & 0x40;
      }
      else {
        if (param_2 != 0x2000) goto LAB_005a576c;
        bVar3 = *(byte *)(piVar2 + 0x33f) & 0x80;
      }
      if (bVar3 == 0) {
        fVar1 = *(float *)(param_1 + 0x196c) - 0.1;
        *(float *)(param_1 + 0x196c) = fVar1;
        if (fVar1 < -0.8) {
          *(undefined4 *)(param_1 + 0x196c) = 0xbf4ccccd;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
        FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
      }
    }
  }
LAB_005a576c:
  if (0.0 <= *(float *)(param_1 + 0x196c)) {
    uVar4 = 0x3f800000;
    fVar1 = *(float *)(param_1 + 0x196c);
    if (NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0)) goto LAB_005a57a5;
  }
  else {
    iVar5 = FUN_00a959f0(0);
    if (5 < iVar5) goto LAB_005a57a5;
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x196c) = uVar4;
LAB_005a57a5:
  FUN_005a3190(*(undefined4 *)(param_1 + 0x196c));
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005A57D0  FUN_005a57d0  size=233  [callgraph]
void __fastcall FUN_005a57d0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0xdd4) == 0) {
    *(undefined4 *)(param_1 + 0x1988) = 1;
    pbVar6 = &DAT_01642c78;
    pbVar2 = DAT_018b925c;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005a5815:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005a581a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005a5815;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005a581a:
    if (iVar3 != 0) {
      FUN_00d5ea40(&DAT_01642c78,1,0);
    }
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = *piVar4;
    uVar5 = FUN_00e03ea0("_COL_PL_in");
    iVar3 = (**(code **)(iVar3 + 0x2c))(uVar5);
    if (iVar3 != 0) {
      FUN_00910a40(iVar3);
      FUN_00916360();
    }
    FUN_0059f440(0);
    FUN_00c19400(1,0);
    FUN_00a938c0(3);
    iVar3 = FUN_00a8cab0();
    if (iVar3 != 0x50001) {
      FUN_005a3750(0x50001,0,0,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0xdd4) = 1;
  return;
}

// 005A58C0  FUN_005a58c0  size=334  [callgraph]
void __fastcall FUN_005a58c0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0xdd8) == 0) {
    *(undefined4 *)(param_1 + 0x1938) = 0;
    FUN_00ac9300("INNER-R");
    FUN_00ac9300("OUTER-R");
    FUN_00ac9210("CUT-R-LEG-1");
    if (*(int *)(param_1 + 0x15c4) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x15c4) = 0;
    }
    if (*(int *)(param_1 + 0x15c8) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 0x15c8) = 0;
    }
    FUN_00a938c0(3);
    *(undefined4 *)(param_1 + 0x1988) = 3;
    pbVar6 = &DAT_01642c5c;
    pbVar2 = DAT_018b925c;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005a5962:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005a5967;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005a5962;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005a5967:
    if (iVar3 != 0) {
      FUN_00d5ea40(&DAT_01642c5c,1,0);
    }
    FUN_0059f630(1);
    piVar4 = (int *)FUN_00c14bb0();
    iVar3 = *piVar4;
    uVar5 = FUN_00e03ea0("_COL_PL_in");
    iVar3 = (**(code **)(iVar3 + 0x2c))(uVar5);
    if (iVar3 != 0) {
      FUN_00910a40(iVar3);
      FUN_00916360();
    }
    FUN_0059f440(1);
    FUN_00c19400(1,0);
    FUN_00a938c0(5);
    iVar3 = FUN_00a8cab0();
    if (iVar3 != 0x50002) {
      FUN_005a3750(0x50002,0,0,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0xdd8) = 1;
  return;
}

// 005A5E90  Em0600::vf40  size=803  [class]
undefined4 __fastcall Em0600::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x130] = param_1[0x130] | 0x20;
  FUN_00acf600(0x2060f,"Em0600Body");
  FUN_005a1e70();
  FUN_0059da40();
  FUN_0059fee0();
  FUN_005a00c0();
  FUN_0059eb10();
  FUN_005a3b10();
  FUN_005a0e90();
  FUN_0059ec40();
  FUN_00ac9300("CUT-NECK");
  FUN_00ac9300("L-ARM-CUT");
  FUN_00ac9300("CUT-R-LEG-1");
  FUN_00ac9300("CUT-L-LEG-1");
  FUN_0059f4c0();
  param_1[0x663] = 0x43f00000;
  uVar2 = 0;
  param_1[0x666] = 0x3f800000;
  param_1[0x374] = 0;
  param_1[0x662] = 0;
  param_1[0x660] = 0;
  param_1[0x661] = 0;
  param_1[0x58f] = 1;
  param_1[899] = 0;
  FUN_00a92fb0(0);
  FUN_00e08640(uVar2);
  piVar3 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar3);
  param_1[0x64b] = 1;
  param_1[0x65a] = 0;
  FUN_00eaa010();
  FUN_00eaa010();
  FUN_00eaa010();
  FUN_00ac9210("EYE_GLOW");
  (**(code **)(*param_1 + 0x358))(0,param_1 + 0x590);
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ac89d0();
    *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xffefffff;
  }
  param_1[0x20b] = 0x103;
  param_1[0x375] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x66b] = 0;
  param_1[0x66c] = 0;
  iVar1 = FUN_00fdbc60();
  param_1[0x66d] = iVar1;
  param_1[0x66e] = 0;
  param_1[0x648] = 0;
  FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  switch(param_1[0x128]) {
  case 1:
    param_1[0x648] = 2;
    iVar1 = FUN_00fdbc60();
    break;
  case 2:
    param_1[0x66e] = 1;
    iVar1 = FUN_00fdbc60();
    param_1[0x66d] = iVar1;
    FUN_0059e960(1);
    param_1[0x648] = 2;
    iVar1 = FUN_00fdbc60();
    param_1[0x21c] = iVar1;
    FUN_005a3750(0x50003,0,0,0,0);
    param_1[0x64c] = 0;
    FUN_00aa4080(0xaf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined2 *)(param_1 + 0x64f) = 2;
    goto switchD_005a6079_default;
  case 3:
    param_1[0x648] = 3;
    iVar1 = FUN_00fdbc60();
    break;
  case 4:
    iVar1 = FUN_00fdbc60();
    param_1[0x66d] = iVar1;
    param_1[0x648] = 3;
    *(undefined2 *)(param_1 + 0x64f) = 3;
    break;
  default:
    goto switchD_005a6079_default;
  }
  param_1[0x21c] = iVar1;
switchD_005a6079_default:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a92f90();
  FUN_00e3f050();
  switchD_0080dbae::default();
  return 1;
}

// 005A6290  FUN_005a6290  size=256  [callgraph]
void __fastcall FUN_005a6290(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a8c760(0x38);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1908) != 0) {
      FUN_004066f0();
      *(undefined4 *)(param_1 + 0x1908) = 0;
      FUN_00916370();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  else {
    iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0x1904));
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1908) == 0) {
        FUN_004066f0();
        *(undefined4 *)(param_1 + 0x1908) = 1;
        FUN_0091a8b0();
        FUN_00406760();
      }
      if (*(int *)(param_1 + 0x1900) != 0) {
        FUN_01005190(iVar2 + 0x10);
        FUN_00915780(local_50);
      }
    }
  }
  return;
}

// 005A6390  FUN_005a6390  size=256  [callgraph]
void __fastcall FUN_005a6390(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a8c760(0x39);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1914) != 0) {
      FUN_004066f0();
      *(undefined4 *)(param_1 + 0x1914) = 0;
      FUN_00916370();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  else {
    iVar2 = FUN_00a12210(*(undefined4 *)(param_1 + 0x1910));
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1914) == 0) {
        FUN_004066f0();
        *(undefined4 *)(param_1 + 0x1914) = 1;
        FUN_0091a8b0();
        FUN_00406760();
      }
      if (*(int *)(param_1 + 0x190c) != 0) {
        FUN_01005190(iVar2 + 0x10);
        FUN_00915780(local_50);
      }
    }
  }
  return;
}

// 005A64E0  FUN_005a64e0  size=610  [callgraph]
void __fastcall FUN_005a64e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    uVar3 = 0x56;
    uVar1 = 0x8000000;
    if (param_1[0x372] == 1) {
      uVar3 = 0x81;
    }
    else if (param_1[0x372] == 2) {
      uVar3 = 0x81;
      uVar1 = 0x8000040;
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
    param_1[0x66b] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      FUN_00a962d0(0,0);
      param_1[0x250] = 0;
      return;
    }
    break;
  case 2:
    FUN_005a14b0(param_1[0x250] % 3);
    param_1[0x187] = 3;
    goto LAB_005a65dd;
  case 3:
LAB_005a65dd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x31);
    if (iVar2 != 0) {
      FUN_005a4c40();
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x31);
    if (iVar2 == 0) {
      FUN_0059f010();
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0059f010();
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = 2;
      if (5 < param_1[0x250]) {
        param_1[0x187] = 5;
        return;
      }
    }
    break;
  case 5:
    uVar3 = 0x58;
    uVar1 = 0x8000000;
    if (param_1[0x372] == 1) {
      uVar3 = 0x83;
    }
    else if (param_1[0x372] == 2) {
      uVar3 = 0x83;
      uVar1 = 0x8000040;
      FUN_00a962d0(1,0);
    }
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = 6;
    param_1[0x66b] = 0;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005A6760  FUN_005a6760  size=469  [callgraph]
void __thiscall FUN_005a6760(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  param_2[0x45] = 6;
  param_2[1] = 0x3b004;
  param_2[9] = *(uint *)(param_1 + 0x4f0);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uVar2 = FUN_009f8b40();
  param_2[0x5c] = uVar2;
  param_2[0x44] = 0x78;
  param_2[6] = 0x96;
  *(undefined2 *)(param_2 + 8) = 0xa00;
  param_2[5] = 0x1e;
  param_2[7] = 0x1e;
  *param_2 = *param_2 | 4;
  *(undefined2 *)((int)param_2 + 0x17a) =
       *(undefined2 *)(param_1 + 0x1574 + *(int *)(param_1 + 0x15c0) * 2);
  param_2[0x5d] = *(uint *)(*(int *)(param_1 + 0xa84) + 0x4f0);
  *(undefined2 *)(param_2 + 0x5e) = 0xffff;
  iVar3 = *(int *)(param_1 + 0xa84);
  local_20 = *(undefined4 *)(iVar3 + 0x40);
  local_1c = *(undefined4 *)(iVar3 + 0x44);
  local_18 = *(undefined4 *)(iVar3 + 0x48);
  local_14 = *(uint *)(iVar3 + 0x4c);
  param_2[0x5d] = 0;
  *(undefined2 *)(param_2 + 0x5e) = 0xffff;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = local_14;
  local_30 = *(undefined4 *)(param_1 + 0x40);
  local_2c = *(undefined4 *)(param_1 + 0x44);
  local_28 = *(undefined4 *)(param_1 + 0x48);
  local_24 = *(undefined4 *)(param_1 + 0x4c);
  local_40 = *(undefined4 *)(param_1 + 0x90);
  local_3c = *(undefined4 *)(param_1 + 0x94);
  local_38 = *(undefined4 *)(param_1 + 0x98);
  local_34 = *(undefined4 *)(param_1 + 0x9c);
  FUN_005a4a30(*(undefined4 *)(param_1 + 0x15c0),&local_30,&local_40);
  iVar3 = FUN_00a8cab0();
  if ((iVar3 == 0x50001) && (*(int *)(param_1 + 0x15c0) == 0)) {
    *(undefined2 *)((int)param_2 + 0x17a) = *(undefined2 *)(param_1 + 0x1574);
  }
  else {
    iVar3 = FUN_00a8cab0();
    if ((iVar3 == 0x50002) && (*(int *)(param_1 + 0x15c0) == 2)) {
      *(undefined2 *)((int)param_2 + 0x17a) = *(undefined2 *)(param_1 + 0x1578);
    }
    else {
      *(undefined2 *)((int)param_2 + 0x17a) = 0;
    }
  }
  FUN_00416e30(&local_30,&local_20,&local_40,0x3f000000,0x44480000);
  return;
}

// 005A6940  FUN_005a6940  size=140  [callgraph]
void FUN_005a6940(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0059f630(param_1);
  FUN_005a4f10(param_1);
  piVar1 = (int *)FUN_00c14bb0();
  iVar3 = *piVar1;
  uVar2 = FUN_00e03ea0("_COL_PL_in");
  iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
  if (iVar3 != 0) {
    FUN_00910a40(iVar3);
    FUN_00916360();
  }
  FUN_0059f440(param_1);
  FUN_00c19400(1,0);
  if (param_1 == 0) {
    FUN_00a938c0(3);
  }
  else if (param_1 == 1) {
    FUN_00a938c0(5);
    return;
  }
  return;
}

// 005A69D0  FUN_005a69d0  size=837  [callgraph]
void __fastcall FUN_005a69d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0xbc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xbd,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 3;
    *(undefined4 *)(param_1 + 0xde0) = 0;
    goto LAB_005a6abc;
  case 3:
LAB_005a6abc:
    FUN_005a5670(0x2000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x196c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x61c) = 4;
      FUN_005a3190(0x3f800000);
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xbe,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0xc0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0059fb20(3,0);
    *(undefined4 *)(param_1 + 0x61c) = 7;
    goto LAB_005a6bcb;
  case 7:
LAB_005a6bcb:
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1968) = 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 8;
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0xc1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 9;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 10;
      return;
    }
    break;
  case 10:
    FUN_00aa4080(0xc2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(undefined4 *)(param_1 + 0x61c) = 0xb;
    *(undefined4 *)(param_1 + 0xde0) = 0;
    goto LAB_005a6ce4;
  case 0xb:
LAB_005a6ce4:
    FUN_005a5670(0x1000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_005a3750(0x6000003,0,0,0,0);
      return;
    }
  }
  return;
}

// 005A6D50  FUN_005a6d50  size=1049  [callgraph]
void __fastcall FUN_005a6d50(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  int *piVar8;
  bool bVar9;
  undefined *puVar10;
  
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  piVar8 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (piVar8 = (int *)FUN_00a7c8a0(), piVar8 != (int *)0x0)) &&
     (param_1[0x187] < 4)) {
    pcVar2 = *(code **)(*piVar8 + 0x84);
    param_1[0x14] = piVar8[0x10];
    param_1[0x15] = piVar8[0x11];
    param_1[0x16] = piVar8[0x12];
    param_1[0x17] = piVar8[0x13];
    iVar4 = (*pcVar2)();
    param_1[0x25] = *(int *)(iVar4 + 4);
  }
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    FUN_00aa4520(0x110,iVar3,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00b7d7a0(iVar3,0x120,0x8000000);
    param_1[0x187] = 1;
    param_1[0xee7] = 0;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0x111,iVar3,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    iVar3 = FUN_0059fe50(piVar8);
    if (iVar3 != 0) {
      FUN_0059f820(0x10,0);
      FUN_005a55d0();
    }
    param_1[0x187] = 3;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4520(0x112,iVar3,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 5;
    iVar3 = FUN_0059fe50(piVar8);
    if (iVar3 != 0) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_005a5610();
      }
      FUN_0059faa0();
    }
  case 5:
    if (piVar8 != (int *)0x0) {
      puVar10 = &DAT_01b351a0;
      (**(code **)(*piVar8 + 4))(&DAT_01b351a0);
      iVar3 = FUN_00dd6d80(puVar10);
      if ((iVar3 != 0) && (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) {
        FUN_005a5610();
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      iVar3 = FUN_0059fe50(piVar8);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x1988) = 5;
        pcVar7 = "P720_RESULT";
        pbVar6 = DAT_018b925c;
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_005a7070:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005a7075;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_005a7070;
          pbVar6 = pbVar6 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_005a7075:
        if (iVar3 != 0) {
          FUN_00d5ea40("P720_RESULT",1,0);
        }
      }
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4520(0x11c,iVar3,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 7;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_0059fe50(piVar8), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x1988) = 6;
      pcVar7 = "P720_EVENT";
      pbVar6 = DAT_018b925c;
      do {
        bVar1 = *pbVar6;
        bVar9 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_005a7145:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005a714a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar9 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_005a7145;
        pbVar6 = pbVar6 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005a714a:
      if (iVar3 != 0) {
        FUN_00d5ea40("P720_EVENT",1,0);
        return;
      }
    }
  }
  return;
}

// 005A7190  FUN_005a7190  size=83  [callgraph]
void __fastcall FUN_005a7190(int param_1)

{
  if (((*(int *)(param_1 + 0x1930) == 0) || (*(int *)(param_1 + 0x1938) < 0)) ||
     (3 < *(int *)(param_1 + 0x1938))) {
    if (*(int *)(param_1 + 0x1928) == -1) {
      switch(*(undefined4 *)(param_1 + 0x1920)) {
      case 0:
        FUN_005a3c50();
        return;
      case 1:
      case 3:
        FUN_005a3ca0();
        return;
      case 2:
        FUN_005a3d40();
        return;
      }
    }
    else {
      FUN_005a3750(*(int *)(param_1 + 0x1928),0,0,0,0);
    }
  }
  return;
}

// 005A7200  FUN_005a7200  size=83  [callgraph]
void __fastcall FUN_005a7200(int param_1)

{
  if (((*(int *)(param_1 + 0x1930) == 0) || (*(int *)(param_1 + 0x1938) < 0)) ||
     (3 < *(int *)(param_1 + 0x1938))) {
    if (*(int *)(param_1 + 0x1928) == -1) {
      switch(*(undefined4 *)(param_1 + 0x1920)) {
      case 0:
        FUN_005a3c50();
        return;
      case 1:
      case 3:
        FUN_005a3ca0();
        return;
      case 2:
        FUN_005a3d40();
        return;
      }
    }
    else {
      FUN_005a3750(*(int *)(param_1 + 0x1928),0,0,0,0);
    }
  }
  return;
}

// 005A7270  FUN_005a7270  size=83  [callgraph]
void __fastcall FUN_005a7270(int param_1)

{
  if (((*(int *)(param_1 + 0x1930) == 0) || (*(int *)(param_1 + 0x1938) < 0)) ||
     (3 < *(int *)(param_1 + 0x1938))) {
    if (*(int *)(param_1 + 0x1928) == -1) {
      switch(*(undefined4 *)(param_1 + 0x1920)) {
      case 0:
        FUN_005a3c50();
        return;
      case 1:
      case 3:
        FUN_005a3ca0();
        return;
      case 2:
        FUN_005a3d40();
        return;
      }
    }
    else {
      FUN_005a3750(*(int *)(param_1 + 0x1928),0,0,0,0);
    }
  }
  return;
}

// 005A72E0  FUN_005a72e0  size=29  [callgraph]
void FUN_005a72e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c240();
  if (iVar1 == 0) {
    FUN_005a6290();
    FUN_005a6390();
    return;
  }
  return;
}

// 005A7300  FUN_005a7300  size=979  [callgraph]
void __fastcall FUN_005a7300(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_004039a0(5,param_1,0);
    FUN_00e02040(*(undefined4 *)(param_1 + 0x4f0),0x115);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    return;
  case 1:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    break;
  case 2:
    FUN_0059f010();
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    FUN_009f8b40();
    FUN_00ac8520(0x14);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(0x14);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(0x14);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(0x14);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00ad09e0(*(undefined4 *)(param_1 + 0x4f0),6,&stack0xfffffb74);
    *(undefined4 *)(param_1 + 0x61c) = 3;
    *(undefined4 *)(param_1 + 0x1624) = uVar2;
    return;
  case 3:
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    break;
  case 4:
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_004039a0(7,param_1,0);
    FUN_00e02040(*(undefined4 *)(param_1 + 0x4f0),0x115);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0x61c) = 5;
    return;
  case 5:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x61c) = 6;
      return;
    }
    break;
  case 6:
    FUN_0059f010();
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    FUN_009f8b40();
    FUN_00ac8520(0x14);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(0x14);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(0x14);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(0x14);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00ad09e0(*(undefined4 *)(param_1 + 0x4f0),6,&stack0xfffffb74);
    *(undefined4 *)(param_1 + 0x61c) = 7;
    *(undefined4 *)(param_1 + 0x1624) = uVar2;
    return;
  }
  return;
}

// 005A79A0  FUN_005a79a0  size=134  [callgraph]
void __thiscall FUN_005a79a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x1930) = 0;
    piVar1 = (int *)FUN_00c14bb0();
    iVar3 = *piVar1;
    uVar2 = FUN_00e03ea0("_COL_PL_in");
    iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
    if (iVar3 != 0) {
      FUN_00910a40(iVar3);
      FUN_0091a8a0();
      *(undefined4 *)(param_1 + 0x1938) = 0xffffffff;
      return;
    }
  }
  else {
    if ((param_2 != 0) && (param_2 != 1)) {
      FUN_005a6940(param_2);
    }
    *(undefined4 *)(param_1 + 0x1930) = 1;
    *(undefined4 *)(param_1 + 0x1974) = 1;
  }
  *(int *)(param_1 + 0x1938) = param_2;
  return;
}

// 005A7A30  FUN_005a7a30  size=2333  [callgraph]
void __fastcall FUN_005a7a30(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    if ((int *)param_1[0x2a1] == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a7b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x74,param_1[0x13c]);
    FUN_00aa4080(0xc4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
  case 1:
    if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0xb), iVar3 != 0)) {
      FUN_0059fa20(0x40a00000);
      FUN_005a54f0();
      FUN_0059f820(10,0);
      FUN_005a3190(0x3f800000);
      if ((param_1[0x650] != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        fVar4 = (float10)FUN_00a958c0(0);
        fVar5 = (float)fVar4;
        uVar1 = 0;
        FUN_00a7c8a0(0,fVar5);
        FUN_00a95e60(uVar1,fVar5);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_005a5590();
    FUN_00aa4080(0xc5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0059f820(0xb,0);
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xc6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0059f820(0xc,0);
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 8;
      return;
    }
    break;
  case 6:
  case 7:
    break;
  case 8:
    FUN_00aa4080(0xd4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 9;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x32);
    if (iVar3 != 0) {
      param_1[0x187] = 10;
      return;
    }
    break;
  case 10:
    FUN_005a3340(8);
    iVar3 = FUN_005a33b0(0x80);
    if (iVar3 == 1) {
      param_1[0x187] = 0xb;
    }
    else if ((iVar3 == 2) && (param_1[0x2a1] != 0)) {
      FUN_00a8cb60(0x1d);
      param_1[0x187] = 0x1d;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0059f9e0();
    return;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0xc;
      return;
    }
    break;
  case 0xc:
    FUN_00aa4080(0xd5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0xd;
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0xe;
      return;
    }
    break;
  case 0xe:
    FUN_00aa4080(0xd6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0xf;
  case 0xf:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0x10;
      return;
    }
    break;
  case 0x10:
    FUN_00aa4080(0xd7,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0x11;
  case 0x11:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x32);
    if (iVar3 != 0) {
      param_1[0x187] = 0x12;
      return;
    }
    break;
  case 0x12:
    FUN_005a3340(8);
    iVar3 = FUN_005a33b0(0x80);
    if (iVar3 == 1) {
      param_1[0x187] = 0x13;
    }
    else if ((iVar3 == 2) && (param_1[0x2a1] != 0)) {
      FUN_00a8cb60(0x1d);
      param_1[0x187] = 0x1d;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0059f9e0();
    return;
  case 0x13:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0x14;
      return;
    }
    break;
  case 0x14:
    FUN_00aa4080(0xd8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0x15;
  case 0x15:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x32);
    if (iVar3 != 0) {
      param_1[0x187] = 0x16;
      return;
    }
    break;
  case 0x16:
    FUN_005a3340(10);
    iVar3 = FUN_005a33b0(0xa0);
    if (iVar3 == 1) {
      param_1[0x187] = 0x17;
    }
    else if ((iVar3 == 2) && (param_1[0x2a1] != 0)) {
      FUN_00a8cb60(0x1d);
      param_1[0x187] = 0x1d;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0059f9e0();
    return;
  case 0x17:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0x18;
      return;
    }
    break;
  case 0x18:
    FUN_00aa4080(200,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4080(0xd2,1,0,0x3f800000,0x10,0xbf800000,0x3f800000);
    param_1[0x187] = 0x19;
    param_1[0x378] = 0;
    goto LAB_005a8112;
  case 0x19:
LAB_005a8112:
    FUN_005a5670(0x1000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x65b] = 0x3f800000;
      param_1[0x187] = 0x1a;
      FUN_005a3190(0x3f800000);
      FUN_00a94bc0(1,0);
      return;
    }
    break;
  case 0x1a:
    FUN_00aa4080(0xc9,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_005a6940(5);
    param_1[0x64c] = 1;
    param_1[0x65d] = 1;
    param_1[0x64e] = 5;
    param_1[0x187] = 0x1b;
  case 0x1b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar2 = (int *)FUN_0041c960(param_1[0x2a1]);
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x32c))(), iVar3 != 0)) {
      param_1[0x187] = 0x1c;
      return;
    }
    goto LAB_005a8210;
  case 0x1c:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar2 = (int *)FUN_0041c960(param_1[0x2a1]);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x32c))();
      if (iVar3 != 0) {
        return;
      }
      FUN_005a1fc0();
      return;
    }
LAB_005a8210:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_005a1fc0();
      return;
    }
    break;
  case 0x1d:
    FUN_00aa4080(0xcf,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 0x1e;
  case 0x1e:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0x1f;
      return;
    }
    break;
  case 0x1f:
    FUN_00aa4080(0xd0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_0059f820(0xe,0);
    param_1[0x187] = 0x20;
  case 0x20:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 005A83E0  FUN_005a83e0  size=1521  [callgraph]
void __fastcall FUN_005a83e0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  
  piVar5 = (int *)0x0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  iVar3 = FUN_00a8c760(0xb);
  if ((iVar3 == 0) && (iVar3 = FUN_00a8cac0(), 3 < iVar3)) {
    iVar3 = *param_1;
    uVar4 = (**(code **)(*piVar5 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar5 + 0x10,uVar4);
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    iVar3 = *param_1;
    param_1[0x250] = 0;
    uVar4 = (**(code **)(*piVar5 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar5 + 0x10,uVar4);
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    iVar3 = FUN_0059fe50(piVar5);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x1934) = 0;
      FUN_005a3220(*(undefined4 *)(iVar3 + 0x1944));
      FUN_0059f8e0(*(undefined4 *)(iVar3 + 0x1944),&DAT_01643020,1);
      FUN_0059fb20(2,0);
      FUN_005a3750(0x6000000,0,0,0,0);
    }
    FUN_00aa4520(0xe1,iVar2,0,0,0x3f800000,0x9038000,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
    FUN_00b7dbe0(0x1b);
    iVar3 = FUN_0059fe50(piVar5);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1944) != 0)) {
      FUN_005a3220(*(int *)(iVar3 + 0x1944));
    }
    goto LAB_005a85bd;
  case 1:
LAB_005a85bd:
    iVar3 = FUN_00a8c760(0x20);
    if ((iVar3 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar4 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar4 = 0x40a00000;
    }
    FUN_00b7ab30(uVar4);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar4 = 0;
        param_1[0x250] = 0;
        FUN_00a92f90(0);
        fVar6 = (float10)FUN_00407b40(uVar4);
        param_1[0x24f] = (int)(float)fVar6;
        FUN_00b89c20(0x106,4,0x1b,iVar2,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 2:
    iVar3 = FUN_0059fe50(piVar5);
    if (iVar3 != 0) {
      FUN_0059fb60();
      *(int *)(iVar3 + 0x61c) = *(int *)(iVar3 + 0x61c) + 1;
    }
    FUN_00aa4520(0xe2,iVar2,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_0059fe50(piVar5);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x1934) = 1;
        FUN_0059f5e0(1);
        if ((*(int *)(iVar2 + 0xdc8) == 1) || (*(int *)(iVar2 + 0xdc8) == 2)) {
          FUN_0059faa0();
        }
      }
      (**(code **)(*param_1 + 0x314))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
      param_1[0xf86] = 0;
      return;
    }
    break;
  case 4:
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00aa4520(0xe3,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_0059fe50(piVar5);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1944), iVar2 != 0)) {
      FUN_0059f8e0(iVar2,&DAT_01643018,0);
      FUN_005a3220(iVar2);
    }
    param_1[0x187] = 5;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      puVar7 = &DAT_01b351a0;
      (**(code **)(*piVar5 + 4))(&DAT_01b351a0);
      iVar2 = FUN_00dd6d80(puVar7);
      if ((iVar2 != 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
        FUN_0059fa20(0x40a00000);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    iVar3 = FUN_0059fe50(piVar5);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x1944) != 0) {
        FUN_0059f8e0(*(int *)(iVar3 + 0x1944),&DAT_01643010,0);
      }
      iVar3 = FUN_00b88550();
      if (iVar3 != 0) {
        FUN_005a7780();
      }
    }
    FUN_00aa4520(0xe4,iVar2,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = 7;
    return;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
    }
  }
  return;
}

// 005A8A00  FUN_005a8a00  size=1513  [callgraph]
void __fastcall FUN_005a8a00(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  
  piVar5 = (int *)0x0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00da8810(0);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  iVar3 = FUN_00a8c760(0xb);
  if ((iVar3 == 0) && (iVar3 = FUN_00a8cac0(), 3 < iVar3)) {
    iVar3 = *param_1;
    uVar4 = (**(code **)(*piVar5 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar5 + 0x10,uVar4);
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    iVar3 = *param_1;
    param_1[0x250] = 0;
    uVar4 = (**(code **)(*piVar5 + 0x84))();
    (**(code **)(iVar3 + 0x7c))(piVar5 + 0x10,uVar4);
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    iVar3 = FUN_0059fe50(piVar5);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x1934) = 0;
      FUN_005a3220(*(undefined4 *)(iVar3 + 0x1948));
      FUN_0059f8e0(*(undefined4 *)(iVar3 + 0x1948),&DAT_01643038,1);
      FUN_0059fb20(2,0);
      FUN_005a3750(0x6000001,0,0,0,0);
    }
    FUN_00aa4520(0xe6,iVar2,0,0,0x3f800000,0x9038000,0xbf800000,0x3f800000);
    FUN_00b7dbe0(0x1c);
    param_1[0x187] = 1;
    goto LAB_005a8bc4;
  case 1:
LAB_005a8bc4:
    iVar3 = FUN_00a8c760(0x20);
    if ((iVar3 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar4 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar4 = 0x40a00000;
    }
    FUN_00b7ab30(uVar4);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        param_1[0x250] = 0;
        iVar3 = FUN_0059fe50(piVar5);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x1930) = 0;
        }
        uVar4 = 0;
        FUN_00a92f90(0);
        fVar6 = (float10)FUN_00407b40(uVar4);
        param_1[0x24f] = (int)(float)fVar6;
        FUN_00b89c20(0x107,4,0x1c,iVar2,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
      }
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 2:
    uVar4 = 0xe7;
    iVar3 = FUN_0059fe50(piVar5);
    if (iVar3 != 0) {
      uVar4 = 0xec;
      FUN_0059fb60();
      *(int *)(iVar3 + 0x61c) = *(int *)(iVar3 + 0x61c) + 1;
    }
    FUN_00aa4520(uVar4,iVar2,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_0059fe50(piVar5);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x1934) = 1;
        FUN_0059f5e0(1);
        if ((*(int *)(iVar2 + 0xdc8) == 1) || (*(int *)(iVar2 + 0xdc8) == 2)) {
          FUN_0059faa0();
        }
      }
      (**(code **)(*param_1 + 0x314))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
      param_1[0xf86] = 0;
      return;
    }
    break;
  case 4:
    FUN_00aa4520(0xe8,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_0059fe50(piVar5);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x1948), iVar2 != 0)) {
      FUN_0059f8e0(iVar2,&DAT_01643030,0);
      FUN_005a3220(iVar2);
    }
    param_1[0x187] = 5;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      puVar7 = &DAT_01b351a0;
      (**(code **)(*piVar5 + 4))(&DAT_01b351a0);
      iVar2 = FUN_00dd6d80(puVar7);
      if ((iVar2 != 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
        FUN_0059fa20(0x40a00000);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    iVar3 = FUN_0059fe50(piVar5);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 0x1948);
      if (iVar3 != 0) {
        FUN_0059f8e0(iVar3,&DAT_01643028,0);
        FUN_005a3220(iVar3);
      }
      iVar3 = FUN_00b88550();
      if (iVar3 != 0) {
        FUN_005a7890();
      }
    }
    FUN_00aa4520(0xe9,iVar2,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = 7;
    return;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      return;
    }
  }
  return;
}

// 005A9010  Em0600::vf150  size=251  [class]
void __thiscall Em0600::vf150(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 0) {
    if (param_2 == 0x73) {
      FUN_005a3750(0x6000002,0,0,0,0);
      if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xa84) + 0x150))(0x73,*(undefined4 *)(param_1 + 0x4f0));
      }
      FUN_005a6940(4);
      *(undefined4 *)(param_1 + 0x1930) = 1;
      *(undefined4 *)(param_1 + 0x1974) = 1;
      *(undefined4 *)(param_1 + 0x1938) = 4;
      if (*(int *)(param_1 + 0x1900) != 0) {
        piVar1 = (int *)FUN_00910da0();
        (**(code **)(*piVar1 + 0x2c))(param_1 + 0x1900);
      }
      if (*(int *)(param_1 + 0x190c) != 0) {
        piVar1 = (int *)FUN_00910da0();
        (**(code **)(*piVar1 + 0x2c))((int *)(param_1 + 0x190c));
        return;
      }
    }
    else {
      if (param_2 == 0x72) {
        FUN_005a3750(0x6000004,0,0,0,0);
        return;
      }
      if (param_2 == 0x6e) {
        *(undefined4 *)(param_1 + 0x1980) = 1;
        *(undefined4 *)(param_1 + 0xdd0) = 1;
        return;
      }
      if (param_2 == 0x6f) {
        *(undefined4 *)(param_1 + 0x1984) = 1;
        *(undefined4 *)(param_1 + 0xdd0) = 1;
      }
    }
  }
  return;
}

// 005A9110  FUN_005a9110  size=60  [between]
void FUN_005a9110(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 < 0x30001) && (iVar1 != 0x30000)) {
    switch(iVar1) {
    case 0x10000:
    case 0x10008:
      FUN_005a7190();
      return;
    case 0x10003:
      FUN_005a7200();
      return;
    case 0x10004:
      FUN_005a7270();
      return;
    }
  }
  return;
}

// 005A9170  Em0600::vf34C  size=324  [class]
void __fastcall Em0600::vf34C(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0xdd0) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x19a8) == 0) {
    if (*(int *)(param_1 + 0xe0c) == 2) {
      uVar4 = 0x10003;
    }
    else if (*(int *)(param_1 + 0xe0c) == 1) {
      uVar4 = 0x10004;
    }
    else {
      uVar4 = 0x10000;
    }
    FUN_005a3750(uVar4,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1930) = 0;
    piVar1 = (int *)FUN_00c14bb0();
    iVar2 = *piVar1;
    uVar4 = FUN_00e03ea0("_COL_PL_in");
    iVar2 = (**(code **)(iVar2 + 0x2c))(uVar4);
    if (iVar2 != 0) {
      FUN_00910a40(iVar2);
      FUN_0091a8a0();
    }
    *(undefined4 *)(param_1 + 0x1938) = 0xffffffff;
    FUN_005a5610();
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    fVar3 = (float10)FUN_00dde300(0x3f800000,0x40400000);
    *(float *)(param_1 + 0x920) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x920));
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1920);
  if (iVar2 == 0) {
    FUN_005a3750(0x10006,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1920) = 1;
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x1920) = 2;
  }
  else {
    if (iVar2 != 2) goto LAB_005a91ec;
    FUN_005a3750(0x10005,0,0,0,0);
    *(undefined4 *)(param_1 + 0x1920) = 3;
  }
  *(undefined4 *)(param_1 + 0x19a8) = 1;
LAB_005a91ec:
  *(undefined4 *)(param_1 + 0x19a8) = 0;
  return;
}

// 005A92C0  FUN_005a92c0  size=482  [between]
void __thiscall FUN_005a92c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 3) {
    if ((*(int *)(param_1 + 0xdc8) != 1) && (*(int *)(param_1 + 0x1920) == 1)) {
      FUN_00aa4080(0x97,3,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0xdf4) = *(int *)(param_1 + 0xdf4) - param_3;
      iVar1 = FUN_005a1df0();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1970) = 0x41a00000;
        *(undefined4 *)(param_1 + 0x1930) = 1;
        *(undefined4 *)(param_1 + 0x1974) = 1;
        *(undefined4 *)(param_1 + 0x1938) = 0;
        *(undefined4 *)(param_1 + 0x1978) = 1;
        FUN_005a0ce0();
        if (*(int *)(param_1 + 0x1620) == -1) {
          *(undefined4 *)(param_1 + 0x1620) = 0;
          *(undefined4 *)(param_1 + 0x1614) = 0;
          *(undefined4 *)(param_1 + 0x15c0) = 0;
        }
      }
    }
  }
  else {
    if (param_2 != 5) {
      if (param_2 == 7) {
        FUN_00aa4080(0x9c,3,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
      }
      *(int *)(param_1 + 0xdf4) = *(int *)(param_1 + 0xdf4) - param_3 / 2;
      *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) - param_3 / 2;
      return;
    }
    if ((*(int *)(param_1 + 0xdc8) != 2) && (*(int *)(param_1 + 0x1920) == 3)) {
      FUN_00aa4080(0x97,3,0x3d088889,0x3f800000,0x8000050,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) - param_3;
      iVar1 = FUN_005a1df0();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1970) = 0x41a00000;
        *(undefined4 *)(param_1 + 0x1930) = 1;
        *(undefined4 *)(param_1 + 0x1974) = 1;
        *(undefined4 *)(param_1 + 0x1938) = 1;
        *(undefined4 *)(param_1 + 0x197c) = 1;
        FUN_005a0ce0();
        if (*(int *)(param_1 + 0x1620) == -1) {
          *(undefined4 *)(param_1 + 0x15c0) = 2;
          *(undefined4 *)(param_1 + 0x1614) = 0;
          *(undefined4 *)(param_1 + 0x1620) = 0;
          return;
        }
      }
    }
  }
  return;
}

// 005A95F0  FUN_005a95f0  size=220  [between]
void __fastcall FUN_005a95f0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (((*(int *)(param_1 + 0x1978) != 0) || (*(int *)(param_1 + 0x197c) != 0)) &&
     ((*(int *)(param_1 + 0x1938) == 0 || (*(int *)(param_1 + 0x1938) == 1)))) {
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      if ((iVar2 != 0) && (iVar2 = FUN_00b89e20(), iVar2 != 0)) {
        return;
      }
    }
    fVar1 = *(float *)(param_1 + 0x1970) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1970) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x1930) = 0;
      piVar3 = (int *)FUN_00c14bb0();
      iVar2 = *piVar3;
      uVar4 = FUN_00e03ea0("_COL_PL_in");
      iVar2 = (**(code **)(iVar2 + 0x2c))(uVar4);
      if (iVar2 != 0) {
        FUN_00910a40(iVar2);
        FUN_0091a8a0();
      }
      *(undefined4 *)(param_1 + 0x1938) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1978) = 0;
      *(undefined4 *)(param_1 + 0x197c) = 0;
    }
  }
  return;
}

// 005A96D0  FUN_005a96d0  size=943  [between]
void __fastcall FUN_005a96d0(int *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0xae,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x66e] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    break;
  case 2:
    iVar5 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20607);
    if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
    param_1[0x662] = 2;
    pcVar6 = "P720_EXCELSUS_2";
    pbVar4 = DAT_018b925c;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_005a97e0:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005a97e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_005a97e0;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005a97e5:
    if (iVar5 != 0) {
      FUN_00d5ea40("P720_EXCELSUS_2",1,0);
    }
    param_1[0x64c] = 0;
    FUN_00aa4080(0xaf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
    if ((param_1[0x651] != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00a9e290(&DAT_01643044,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_0059f2d0(1);
    iVar5 = FUN_00fdbc60();
    param_1[0x66d] = iVar5;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_0059eac0();
    if (iVar5 == 0) {
      iVar5 = FUN_00a959f0(0);
      if (0x415 < iVar5) goto LAB_005a990e;
    }
    else {
      FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        Animation::Motion::Unit::setCurrentTime(0,0x418b7777);
      }
      param_1[0x66a] = 1;
LAB_005a990e:
      param_1[0x187] = 4;
      iVar5 = FUN_00fdbc60();
      param_1[0x66d] = iVar5;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      *(undefined2 *)(param_1 + 0x209) = 3;
      param_1[0x20a] = 0x78;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      *(undefined2 *)(param_1 + 0x209) = 3;
      param_1[0x20a] = 0x78;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[899] = 0;
      param_1[0x648] = 2;
      param_1[0x66a] = 0;
      iVar5 = FUN_00fdbc60();
      param_1[0x66d] = iVar5;
      (**(code **)(*param_1 + 0x34c))();
      sVar2 = FUN_00dde2a0(2,3);
      if (sVar2 == 2) {
        param_1[0x64a] = 0x30005;
      }
      else if (sVar2 == 3) {
        param_1[0x64a] = 0x30006;
      }
      if (param_1[0x651] != 0) {
        FUN_00a805f0();
        param_1[0x651] = 0;
      }
      FUN_00ac9210("EYE_GLOW");
      (**(code **)(*param_1 + 0x358))(0,param_1 + 0x590);
    }
  default:
    break;
  }
  if ((((2 < param_1[0x187]) && (param_1[0x651] != 0)) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
     (iVar5 = FUN_00a94ce0(0), iVar5 != 0)) {
    FUN_00a805f0();
    param_1[0x651] = 0;
  }
  return;
}

// 005A9AA0  FUN_005a9aa0  size=784  [between]
void __fastcall FUN_005a9aa0(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  short sVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4080(0xb3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
    FUN_00eaa6e0(0x41200000,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    break;
  case 2:
    iVar6 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20608);
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
    FUN_00aa4080(0xec,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
    if ((param_1[0x652] != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00a9e290(&DAT_0164304c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_0059f2d0(2);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_0059eac0();
    if (iVar6 == 0) {
      iVar6 = FUN_00a959f0(0);
      if (0x415 < iVar6) {
        param_1[0x187] = 4;
      }
    }
    else {
      param_1[0x66a] = 1;
      FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        Animation::Motion::Unit::setCurrentTime(0,0x418b7777);
      }
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a8c760(10);
    if (iVar6 != 0) {
      *(undefined2 *)(param_1 + 0x209) = 3;
      param_1[0x20a] = 0x78;
    }
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[899] = 0;
      param_1[0x648] = 3;
      param_1[0x66a] = 0;
      (*pcVar2)();
      sVar3 = FUN_00dde2a0(2,3);
      if (sVar3 == 2) {
        param_1[0x64a] = 0x30005;
      }
      else if (sVar3 == 3) {
        param_1[0x64a] = 0x30006;
      }
      if (param_1[0x652] != 0) {
        FUN_00a805f0();
        param_1[0x652] = 0;
      }
      param_1[0x662] = 4;
      pbVar7 = &DAT_01642c50;
      pbVar5 = DAT_018b925c;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005a9d55:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005a9d5a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005a9d55;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_005a9d5a:
      if (iVar6 != 0) {
        FUN_00d5ea40(&DAT_01642c50,1,0);
      }
    }
  }
  if ((((2 < param_1[0x187]) && (param_1[0x652] != 0)) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
     (iVar6 = FUN_00a94ce0(0), iVar6 != 0)) {
    FUN_00a805f0();
    param_1[0x652] = 0;
  }
  return;
}

// 005A9DD0  FUN_005a9dd0  size=732  [between]
void __fastcall FUN_005a9dd0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0xcb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 1;
    FUN_00ac9300("EYE-GLOW");
    (**(code **)(param_1[0x590] + 8))(0,0,0);
    (**(code **)(param_1[0x5bc] + 8))(0,0,0);
    (**(code **)(param_1[0x5e8] + 8))(0,0,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xcc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 3;
  case 3:
    if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
      param_1[0x21c] = 0;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xcd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 5;
    FUN_0059fb20(4,0);
    (**(code **)(*param_1 + 0x344))(0xb,0,1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0xda,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = 7;
    iVar2 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20609);
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 005AA0D0  FUN_005aa0d0  size=601  [between]
void __fastcall FUN_005aa0d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    iVar2 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20604);
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
    uVar1 = 0x93;
    uVar3 = 0x8000000;
    if (param_1[0x372] != 0) {
      uVar1 = 0xb1;
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x64c] = 0;
    param_1[0x187] = 1;
    FUN_0059fba0(0);
    param_1[0x587] = 1;
    param_1[0x66b] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = 2;
    return;
  case 2:
    uVar1 = 0x94;
    uVar3 = 0x8000000;
    if (param_1[0x372] != 0) {
      uVar1 = 0xb2;
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,uVar3,0xbf800000,0x3f800000);
    FUN_005a1d20();
    FUN_005a5280(0);
    iVar2 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20603);
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
    param_1[0x187] = 3;
    FUN_00eaa6e0(0x41200000,0);
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x614);
    break;
  case 3:
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_005aa0e5_default;
  }
  FUN_005a1d20();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    iVar2 = FUN_0041c960(param_1[0x2a1]);
    if ((iVar2 != 0) && (param_1[0x64c] == 0)) {
      FUN_005a6940(2);
      param_1[0x64c] = 1;
      param_1[0x65d] = 1;
      param_1[0x64e] = 2;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005aa0e5_default:
  return;
}

// 005AA340  FUN_005aa340  size=687  [between]
void __fastcall FUN_005aa340(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    iVar2 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20604);
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
    uVar3 = 0x93;
    uVar1 = 0x8000040;
    FUN_00a962d0(1,0);
    if (param_1[0x372] != 0) {
      uVar3 = 0xb1;
      uVar1 = 0x8000000;
      FUN_00a962d0(0,0);
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x64c] = 0;
    iVar2 = FUN_00a12210(0x651);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 8;
    }
    iVar2 = FUN_00a12210(0x652);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 8;
    }
    iVar2 = FUN_00a12210(0x653);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 8;
    }
    iVar2 = FUN_00a12210(0x654);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 8;
    }
    param_1[0x587] = 1;
    param_1[0x187] = 1;
    param_1[0x66b] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    uVar3 = 0x94;
    uVar1 = 0x8000040;
    FUN_00a962d0(1,0);
    if (param_1[0x372] != 0) {
      uVar3 = 0xb2;
      uVar1 = 0x8000000;
      FUN_00a962d0(0,0);
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar1,0xbf800000,0x3f800000);
    FUN_005a1d20();
    FUN_005a5280(1);
    iVar2 = FUN_00a81330();
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>_5(0x20604);
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00a7c950();
      FUN_00a805f0();
    }
    param_1[0x187] = 3;
    FUN_00eaa6e0(0x41200000,0);
    (**(code **)(*param_1 + 0x358))(0x196,param_1 + 0x614);
  case 3:
    FUN_005a1d20();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (((iVar2 != 0) && (iVar2 = FUN_0041c960(param_1[0x2a1]), iVar2 != 0)) &&
       (param_1[0x64c] == 0)) {
      FUN_005a6940(3);
      param_1[0x64c] = 1;
      param_1[0x65d] = 1;
      param_1[0x64e] = 3;
    }
  }
  return;
}

// 005AA600  Em0600::vf32C  size=877  [class]
undefined4 __fastcall Em0600::vf32C(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 auStack_274 [2];
  int local_26c;
  LPCRITICAL_SECTION local_268;
  undefined4 local_264;
  undefined1 local_260 [4];
  int local_25c;
  undefined1 local_250;
  uint uStack_1f4;
  uint uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  undefined4 uStack_138;
  
  if ((((DAT_01bea060 & 0x42000000) == 0) && (param_1[0x64c] == 0)) &&
     (iVar4 = param_1[0x2a1], iVar4 != 0)) {
    fVar1 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
    fVar2 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
    if (fVar2 * fVar2 + fVar1 * fVar1 < 100.0) {
      param_1[0x1bb] = 1;
    }
    iVar4 = FUN_00a8cab0();
    if (iVar4 != 0x60000) {
      param_1[0x1a1] = 0;
      FUN_00ac2080(0);
      FUN_00ac2080(3);
      FUN_00ac2080(5);
      FUN_00ac2080(7);
      if (param_1[0x139] == 0) {
        local_268 = (LPCRITICAL_SECTION)(param_1 + 0x280);
        local_264 = 0;
        if (param_1[0x286] != 0) {
          EnterCriticalSection(local_268);
        }
        iVar4 = param_1[0x19f];
        iVar7 = param_1[0x1a1] * 0x150 + iVar4;
        FUN_00445db0();
        FUN_004105d0();
        iVar5 = -1;
        bVar3 = false;
        if (iVar4 != iVar7) {
          do {
            local_26c = *(int *)(iVar4 + 4);
            if (iVar5 <= local_26c) {
              FUN_00448f50(iVar4);
              bVar3 = true;
              iVar5 = local_26c;
            }
            iVar4 = iVar4 + 0x150;
          } while (iVar4 != iVar7);
          if ((bVar3) && (iVar4 = FUN_00a8f040(local_260), iVar4 == 0)) {
            iVar4 = FUN_004025b0();
            if (iVar4 == 0) {
LAB_005aa951:
              if (local_268[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                LeaveCriticalSection(local_268);
              }
              return local_264;
            }
            local_26c = local_25c;
            iVar4 = FUN_00a8ef10();
            if ((iVar4 == 0) && (iVar4 = FUN_00a8c760(9), iVar4 == 0)) {
              local_264 = 1;
              iVar4 = FUN_00a81330();
              if ((iVar4 != 0) &&
                 ((piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0 &&
                  ((*(byte *)(piVar6 + 0x130) & 0x10) != 0)))) {
                (**(code **)(*param_1 + 0x21c))(piVar6,local_250,0x3c23d70a,0);
                (**(code **)(*param_1 + 0x220))(0x40000000);
                iVar4 = (**(code **)(*piVar6 + 0x17c))();
                if (iVar4 != 0) {
                  (**(code **)(*piVar6 + 0x184))(auStack_274[0],param_1[0x13c],auStack_274);
                }
                (**(code **)(*param_1 + 0x198))(piVar6,auStack_274,0x8001);
                uVar8 = uStack_1f4;
                if ((uStack_1f4 & 0x200) != 0) {
                  local_25c = FUN_00fdbc60();
                }
                uVar8 = uVar8 >> 0x1c & 1;
                if ((uVar8 != 0) || ((uStack_1f4 & 0x100000) != 0)) {
                  local_25c = FUN_00fdbc60();
                }
                if ((param_1[0x66a] != 0) &&
                   ((local_25c = FUN_00fdbc60(), uVar8 != 0 || ((uStack_1f4 & 0x100000) != 0)))) {
                  local_25c = FUN_00fdbc60();
                }
                if (param_1[0x21c] <= param_1[0x66d]) {
                  local_25c = 0;
                  param_1[0x21c] = param_1[0x66d];
                }
                (**(code **)(*param_1 + 0x30c))(local_25c,0);
                if (param_1[0x21c] <= param_1[0x66d]) {
                  local_25c = 0;
                  param_1[0x21c] = param_1[0x66d];
                }
                if (((iStack_1cc != 0) || ((uStack_1d4 & 0x40800000) != 0)) ||
                   ((uStack_1d0 & 0x10000) != 0)) {
                  FUN_005a92c0(uStack_138,local_25c);
                }
              }
              iVar4 = FUN_00a8c760(0x10);
              if (iVar4 == 0) goto LAB_005aa951;
            }
          }
        }
        if (local_268[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(local_268);
        }
      }
    }
  }
  return 0;
}

// 005AA970  FUN_005aa970  size=846  [between]
void __fastcall FUN_005aa970(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x65e] == 0) {
    if ((param_1[0x65f] != 0) && ((int *)param_1[0x2a1] != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && ((iVar1 = FUN_00b89e20(), iVar1 != 0 && (param_1[0x661] != 0)))) {
        param_1[0x374] = 0;
        FUN_005a3750(0x10004,0,0,0,0);
        FUN_00ac9300("EYE_GLOW");
        (**(code **)(param_1[0x590] + 8))(0,0,0);
        (**(code **)(param_1[0x5e8] + 8))(0,0,0);
        (**(code **)(*param_1 + 0x358))(2,param_1 + 0x5e8);
        FUN_005a6940(1);
        param_1[0x65f] = 0;
        param_1[0x66a] = 0;
        FUN_0059faa0();
        FUN_00a94bc0(2,0);
        FUN_00ac9210("INNER-L");
        pcVar4 = "OUTER-L";
        goto LAB_005aab2e;
      }
    }
  }
  else if ((int *)param_1[0x2a1] != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (((iVar1 != 0) && (iVar1 = FUN_00b89e20(), iVar1 != 0)) && (param_1[0x660] != 0)) {
      param_1[0x374] = 0;
      FUN_005a3750(0x10003,0,0,0,0);
      FUN_0059e960(1);
      FUN_005a6940(0);
      param_1[0x65e] = 0;
      param_1[0x66a] = 0;
      FUN_0059faa0();
      FUN_00a94bc0(2,0);
      FUN_00ac9210("INNER-R");
      pcVar4 = "OUTER-R";
LAB_005aab2e:
      FUN_00ac9300(pcVar4);
    }
  }
  if (param_1[0x64c] == 0) {
    return;
  }
  FUN_005a95f0();
  switch(param_1[0x64e]) {
  case 0:
    iVar1 = FUN_0041c960(param_1[0x2a1]);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3e18) != 0)) {
      FUN_0059fa20(0x40a00000);
      FUN_005a57d0();
      return;
    }
    if (param_1[0x64d] == 0) {
      return;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    iVar1 = FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x43fa0000,0x42c80000,0x1f,4);
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f99999a;
    *(undefined4 *)(iVar1 + 0x44) = 0x3e99999a;
    if (param_1[0x13c] == 0) {
      return;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    return;
  case 1:
    iVar1 = FUN_0041c960(param_1[0x2a1]);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3e18) != 0)) {
      FUN_0059fa20(0x40a00000);
      FUN_005a4eb0(param_1[0x64e]);
      return;
    }
    FUN_005a5110(0x20);
    return;
  case 2:
    FUN_005a5110(0x21);
    iVar1 = param_1[0x2a1];
    break;
  case 3:
    FUN_005a5110(0x22);
    iVar1 = param_1[0x2a1];
    break;
  default:
    goto switchD_005aab57_default;
  }
  iVar1 = FUN_0041c960(iVar1);
  if ((iVar1 != 0) && (iVar1 = FUN_00b89e20(), iVar1 != 0)) {
    FUN_00a8cab0();
  }
switchD_005aab57_default:
  return;
}

// 005AACD0  FUN_005aacd0  size=306  [between]
void FUN_005aacd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 < 0x30001) {
    if (iVar1 == 0x30000) {
      FUN_005a3e40();
      return;
    }
    switch(iVar1) {
    case 0x10000:
    case 0x10008:
      FUN_0059e300();
      return;
    case 0x10003:
      FUN_005a07a0();
      return;
    case 0x10004:
      FUN_005a08b0();
      return;
    case 0x10005:
      FUN_005a09c0();
      return;
    case 0x10006:
      FUN_005a0b50();
      return;
    case 0x10007:
      FUN_0059e450();
      return;
    }
  }
  else if (iVar1 < 0x50002) {
    if (iVar1 == 0x50001) {
      FUN_005aa0d0();
      return;
    }
    switch(iVar1) {
    case 0x30001:
      FUN_005a4190();
      return;
    case 0x30002:
      FUN_005a7300();
      return;
    case 0x30003:
    case 0x30004:
    case 0x30005:
    case 0x30006:
      FUN_005a64e0();
      return;
    case 0x30007:
      FUN_005a4720();
      return;
    case 0x30008:
      FUN_005a4850();
      return;
    case 0x30009:
      FUN_005a1590();
      return;
    case 0x3000a:
      FUN_005a16a0();
      return;
    case 0x3000b:
      FUN_005a18b0();
      return;
    case 0x3000c:
      FUN_005a4500();
      return;
    case 0x3000d:
      FUN_005a4610();
      return;
    }
  }
  else if (iVar1 < 0x6000001) {
    if (iVar1 == 0x6000000) {
      FUN_005a96d0();
      return;
    }
    if (iVar1 == 0x50002) {
      FUN_005aa340();
      return;
    }
    if (iVar1 == 0x50003) {
      FUN_005a1b80();
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0x6000001:
      FUN_005a9aa0();
      return;
    case 0x6000002:
      FUN_005a69d0();
      return;
    case 0x6000003:
      FUN_005a7a30();
      return;
    case 0x6000004:
      FUN_005a9dd0();
      return;
    }
  }
  return;
}

// 005AAE70  Em0600::vf4C  size=194  [class]
void __fastcall Em0600::vf4C(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  BehaviorEmBase::vf4C();
  DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
  DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
  DAT_01dc08ec = 1;
  FUN_00cad2a0();
  FUN_005a1200();
  iVar1 = FUN_00a8cab0();
  if ((iVar1 < 0x30001) && (iVar1 != 0x30000)) {
    switch(iVar1) {
    case 0x10000:
    case 0x10008:
      FUN_005a7190();
      break;
    case 0x10003:
      FUN_005a7200();
      break;
    case 0x10004:
      FUN_005a7270();
    }
  }
  FUN_005aacd0();
  FUN_005a0660();
  FUN_005aa970();
  FUN_0059e210();
  iVar1 = FUN_00a8c240();
  if (iVar1 == 0) {
    FUN_005a6290();
    FUN_005a6390();
  }
  FUN_0059e8c0();
  FUN_005a39f0();
  return;
}

// 00AAC300  Em0600::Em0600  size=282  [class]
undefined4 * __fastcall Em0600::Em0600(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a826e0();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x640] = 0;
  param_1[0x643] = 0;
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00AAC420  Em0600::vf04  size=6  [class]
undefined * Em0600::vf04(void)

{
  return &DAT_01b351a0;
}

// 00AB6AA0  Em0600::vf00  size=76  [class]
undefined4 __thiscall Em0600::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

