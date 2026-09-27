// src/misc/cCodecRealTimeDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6700..00D2B2D0, 15 functions

#include "mgrr.h"
#include "cCodecRealTimeDispParts.h"

// 00CB6700  cCodecRealTimeDispParts::vf08  size=199  [class]
void __fastcall cCodecRealTimeDispParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0x94) = uVar1;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x9c);
  }
  *(uint *)(param_1 + 0x98) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x9c) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0xea);
  }
  *(uint *)(param_1 + 0xa0) = uVar3;
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CB67D0  FUN_00cb67d0  size=13  [callgraph]
void __thiscall FUN_00cb67d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}

// 00CB6810  FUN_00cb6810  size=60  [callgraph]
void __thiscall FUN_00cb6810(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xc4 + param_2 * 4) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  piVar1 = (int *)(param_1 + 0xc4);
  iVar2 = 0x14;
  do {
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00CB6850  FUN_00cb6850  size=46  [callgraph]
undefined4 __thiscall FUN_00cb6850(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xa8) == param_2) &&
     ((iVar1 = *(int *)(param_1 + 0xa4), iVar1 == 10 || ((0 < iVar1 && (iVar1 < 0xb)))))) {
    return 1;
  }
  return 0;
}

// 00CB6880  FUN_00cb6880  size=36  [callgraph]
undefined4 __thiscall FUN_00cb6880(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xc4 + param_2 * 4) != 0) && (*(int *)(param_1 + 0xa4) == 0)) {
    return 1;
  }
  return 0;
}

// 00CB68B0  FUN_00cb68b0  size=132  [callgraph]
void __fastcall FUN_00cb68b0(int param_1)

{
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
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0xec) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined4 *)(param_1 + 0xf8) = 1;
  *(undefined4 *)(param_1 + 0xfc) = 1;
  *(undefined4 *)(param_1 + 0x100) = 1;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  *(undefined4 *)(param_1 + 0x110) = 1;
  return;
}

// 00CB6940  FUN_00cb6940  size=26  [callgraph]
undefined4 __fastcall FUN_00cb6940(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(int *)(param_1 + 0xa4) != 0) || (*(int *)(param_1 + 0xc0) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00CB6960  FUN_00cb6960  size=393  [callgraph]
void __thiscall FUN_00cb6960(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [16];
  
  if (*(int *)(param_1 + 0xa8) != param_2) {
    return;
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  *(int *)(param_1 + 300) = param_3;
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00a7c890();
  if (iVar1 == 0) {
    return;
  }
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_10[8] = '\0';
  local_10[9] = '\0';
  local_10[10] = '\0';
  local_10[0xb] = '\0';
  local_10[0xc] = '\0';
  local_10[0xd] = '\0';
  local_10[0xe] = '\0';
  local_10[0xf] = 0;
  local_10[0] = '\0';
  _sprintf_s(local_10,0x10,"%04x",param_3);
  if ((((param_3 == 0x100) || (param_3 == 0x200)) || (param_3 == 0x300)) ||
     ((param_3 == 0x400 || (param_3 == 0x500)))) {
    if (param_2 != 5) {
      *(undefined4 *)(param_1 + 0x134) = 2;
    }
    iVar1 = FUN_00e355e0(local_10);
    if (iVar1 == 0) goto LAB_00cb6ad5;
    iVar1 = FUN_00e33e50(3);
    if (iVar1 != 0) {
      FUN_00808650(3,0x3e4ccccd);
    }
    uVar2 = 4;
  }
  else {
    if (param_2 != 5) {
      *(undefined4 *)(param_1 + 0x134) = 1;
    }
    iVar1 = FUN_00e355e0(local_10);
    if (iVar1 == 0) goto LAB_00cb6ad5;
    uVar2 = 3;
  }
  FUN_00e3ff90(local_10,uVar2,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
LAB_00cb6ad5:
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  return;
}

// 00CB6AF0  FUN_00cb6af0  size=90  [callgraph]
void __thiscall FUN_00cb6af0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x9c) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00CD0DD0  cCodecRealTimeDispParts::cCodecRealTimeDispParts  size=321  [class]
undefined4 * __fastcall cCodecRealTimeDispParts::cCodecRealTimeDispParts(undefined4 *param_1)

{
  short sVar1;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  *param_1 = vftable;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_00a7c930();
  param_1[0x29] = 0;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x30] = 1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  sVar1 = FUN_00dde2d0(0x4b0,0xe10);
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 3;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 1;
  param_1[0x45] = 0;
  param_1[0x4a] = (int)sVar1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 1;
  param_1[0x32] = 1;
  param_1[0x33] = 1;
  param_1[0x34] = 1;
  param_1[0x35] = 1;
  param_1[0x36] = 1;
  param_1[0x37] = 1;
  param_1[0x38] = 1;
  param_1[0x39] = 1;
  param_1[0x3a] = 1;
  param_1[0x3b] = 1;
  param_1[0x3c] = 1;
  param_1[0x3d] = 1;
  param_1[0x3e] = 1;
  param_1[0x3f] = 1;
  param_1[0x40] = 1;
  param_1[0x41] = 1;
  param_1[0x42] = 1;
  param_1[0x43] = 1;
  param_1[0x44] = 1;
  DAT_01dc1508 = param_1;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 0x1f8) = 1;
  }
  return param_1;
}

// 00CD0FE0  cCodecRealTimeDispParts::vf04  size=93  [class]
void __fastcall cCodecRealTimeDispParts::vf04(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    FUN_00c1cf50();
    iVar1 = FUN_00c1cfd0();
    if ((iVar1 != 0) && (DAT_01dc1b74 == 5)) {
      iVar1 = FUN_00ccdda0(param_1[2]);
      if (iVar1 == 0) {
        param_1[1] = -1;
        return;
      }
      (**(code **)(*param_1 + 8))();
      param_1[1] = 2;
      goto LAB_00cd1033;
    }
  }
  else if (param_1[1] == 2) {
LAB_00cd1033:
                    /* WARNING: Could not recover jumptable at 0x00cd103b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  return;
}

// 00CD1040  FUN_00cd1040  size=375  [callgraph]
undefined4 __thiscall FUN_00cd1040(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_00986a80(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00985e00(param_2);
  uVar2 = FUN_00a82090("BodyModel",uVar2,0);
  FUN_00a7c970(uVar2);
  FUN_00a81330();
  FUN_00a7c800();
  FUN_00a0bba0(0);
  FUN_00a81330();
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 != (int *)0x0) {
    puVar8 = &DAT_01b35430;
    (**(code **)(*piVar3 + 4))(&DAT_01b35430);
    FUN_00dd6d80(puVar8);
  }
  FUN_005ff350(param_2);
  FUN_00a81330();
  iVar1 = FUN_00a7c890();
  if (iVar1 != 0) {
    uVar9 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0x40;
    uVar5 = 0x3f800000;
    uVar4 = 0;
    uVar2 = 0;
    puVar8 = &DAT_016b7cb4;
    FUN_00a81330(&DAT_016b7cb4,0,0,0x3f800000,0x40,0xbf800000,0x3f800000);
    FUN_00a7c890();
    FUN_00e3ff90(puVar8,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
    uVar9 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0x40200;
    uVar5 = 0x3f800000;
    uVar4 = 0x3e4ccccd;
    uVar2 = 1;
    puVar8 = &DAT_016b7cac;
    FUN_00a81330(&DAT_016b7cac,1,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
    FUN_00a7c890();
    FUN_00e3ff90(puVar8,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9);
    FUN_00a81330();
    iVar1 = FUN_00a7c890();
    *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
    *(undefined4 *)(param_1 + 0x130) = 3;
    *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  }
  return 1;
}

// 00CEB0F0  cCodecRealTimeDispParts::vf00  size=30  [class]
undefined4 __thiscall cCodecRealTimeDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D2B270  FUN_00d2b270  size=72  [callgraph]
int FUN_00d2b270(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x140,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCodecRealTimeDispParts::cCodecRealTimeDispParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCodecRealTimeDispParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0xb);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2B2D0  cCodecRealTimeDispParts::create  size=4198  [class]
void __fastcall cCodecRealTimeDispParts::create(int param_1)

{
  uint *puVar1;
  float fVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *apcStack_80 [4];
  char *pcStack_70;
  char *pcStack_6c;
  char *pcStack_68;
  char *pcStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  char *pcStack_58;
  char *pcStack_54;
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_20 [28];
  
  if (((2 < *(int *)(param_1 + 0xa4)) && (*(int *)(param_1 + 0xa4) < 10)) &&
     (*(int *)(param_1 + 0xc0) != 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 0xe;
  }
  bVar3 = false;
  if ((DAT_01dc14c8 == (int *)0x0) || (iVar5 = (**(code **)(*DAT_01dc14c8 + 0x32c))(), iVar5 == 0))
  {
    iVar5 = *(int *)(param_1 + 0x18);
    if ((iVar5 != 0) &&
       ((*(uint *)(param_1 + 0xa0) < *(uint *)(iVar5 + 0x80) &&
        (iVar5 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)))) {
      *(undefined4 *)(iVar5 + 0x3b0) = 1;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 0;
    }
    bVar3 = true;
  }
  switch(*(undefined4 *)(param_1 + 0xa4)) {
  case 0:
    iVar5 = *(int *)(param_1 + 0xac);
    if (iVar5 != -1) {
      if (iVar5 != *(int *)(param_1 + 0xa8)) {
        FUN_00984ce0(iVar5);
        iVar5 = *(int *)(param_1 + 0xac);
        *(int *)(param_1 + 0xa8) = iVar5;
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xc4 + iVar5 * 4) = 0;
      }
      pcStack_60 = "HUD_CHARA_NAME_S_0019";
      pcStack_34 = "HUD_CHARA_NAME_S_0019";
      pcStack_5c = "HUD_CHARA_NAME_S_0021";
      pcStack_40 = "HUD_CHARA_NAME_S_0021";
      pcStack_48 = "HUD_CHARA_NAME_S_0000";
      pcStack_44 = "HUD_CHARA_NAME_S_0000";
      apcStack_80[0] = "HUD_CHARA_NAME_S_0028";
      apcStack_80[1] = "HUD_CHARA_NAME_S_0029";
      apcStack_80[2] = "HUD_CHARA_NAME_S_0030";
      apcStack_80[3] = "HUD_CHARA_NAME_S_0031";
      pcStack_70 = "HUD_CHARA_NAME_S_0032";
      pcStack_6c = "HUD_CHARA_NAME_S_0033";
      pcStack_68 = "HUD_CHARA_NAME_S_0035";
      pcStack_64 = "HUD_CHARA_NAME_S_0037";
      pcStack_58 = "HUD_CHARA_NAME_S_0023";
      pcStack_54 = "HUD_CHARA_NAME_S_0027";
      pcStack_50 = "HUD_CHARA_NAME_S_0034";
      pcStack_4c = "HUD_CHARA_NAME_S_0025";
      pcStack_3c = "HUD_CHARA_NAME_S_0038";
      pcStack_38 = "HUD_CHARA_NAME_S_0037";
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x90),apcStack_80[*(int *)(param_1 + 0xa8)],1,
                   0xffffffff);
      iVar5 = FUN_00d29960(4);
      *(int *)(param_1 + 0xb4) = iVar5;
      *(undefined4 *)(iVar5 + 0x214) = 0;
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4) + 0x28);
      *puVar1 = *puVar1 | 0x40000000;
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4) + 0x28);
      *puVar1 = *puVar1 | 0x1000000;
      puVar1 = (uint *)(*(int *)(param_1 + 0xb4) + 0x28);
      *puVar1 = *puVar1 | 0x20000;
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = 0;
      piVar7 = (int *)(param_1 + 0xb8);
      iVar5 = 2;
      do {
        iVar6 = FUN_00d29960(5);
        *piVar7 = iVar6;
        *(undefined4 *)(iVar6 + 0x1e8) = 0;
        *(uint *)(*piVar7 + 0x28) = *(uint *)(*piVar7 + 0x28) | 0x40000000;
        *(uint *)(*piVar7 + 0x28) = *(uint *)(*piVar7 + 0x28) | 0x1000000;
        *(uint *)(*piVar7 + 0x28) = *(uint *)(*piVar7 + 0x28) | 0x20000;
        iVar6 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar5 = iVar5 + -1;
        *(undefined4 *)(iVar6 + 4) = 0;
      } while (iVar5 != 0);
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x11c) = 1;
    *(undefined4 *)(param_1 + 0xa4) = 3;
    if ((((byte)DAT_01bea090 & 0x40) != 0) && (*(int *)(param_1 + 0x114) == 0)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(3,1);
      }
      *(undefined4 *)(param_1 + 0x114) = 1;
    }
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0xa0));
    if (DAT_01dc0740 == 0) {
      iVar6 = FUN_00c1c550();
      if ((iVar6 == 1) && (iVar6 = FUN_00c1c560(), 0 < iVar6)) {
        iVar6 = FUN_00c1c560();
        fVar21 = (float)(iVar6 + -1) * 36.0 + 25.0;
        if (DAT_01dc1350 != 0) {
          fVar21 = fVar21 - 80.0;
        }
        if (fVar21 != *(float *)(iVar5 + 0xc4)) {
          *(float *)(iVar5 + 0xc4) = fVar21;
        }
      }
    }
    else if ((*(float *)(iVar5 + 0xc4) < 60.0) &&
            (*(undefined4 *)(iVar5 + 0xc4) = 0x42700000, 1 < DAT_018b3934)) {
      *(float *)(iVar5 + 0xc4) = (float)(DAT_018b3934 + -1) * 44.0 + 60.0;
    }
    break;
  case 2:
    iVar5 = FUN_00ce4dd0(0);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(undefined4 *)(param_1 + 0xa4) = 9;
    }
    break;
  case 3:
    uVar9 = *(uint *)(param_1 + 0xb0) & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    if ((1 < (int)uVar9) || (bVar3)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4) = uVar15;
    iVar5 = FUN_00ca8620(param_1 + 0xb0,0xc);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(undefined4 *)(param_1 + 0xa4) = 4;
    }
    break;
  case 4:
    uVar9 = *(uint *)(param_1 + 0xb0) & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    if ((1 < (int)uVar9) || (bVar3)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = uVar15;
    uVar9 = *(uint *)(param_1 + 0xb0) & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    if ((1 < (int)uVar9) || (bVar3)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = uVar15;
    iVar5 = FUN_00ca8620((uint *)(param_1 + 0xb0),0xc);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      FUN_00e5e050("core_se_sys_radio_face_on",0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),0);
      *(undefined4 *)(param_1 + 0xa4) = 6;
    }
    break;
  case 6:
    iVar5 = FUN_00ce4dd0(0);
    if (iVar5 != 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
    }
  case 7:
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    if (0x1e < *(int *)(param_1 + 0xb0)) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 8;
    }
    break;
  case 8:
    uVar9 = *(uint *)(param_1 + 0xb0) & 0x80000003;
    puVar1 = (uint *)(param_1 + 0xb0);
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb4) + 4) = (uint)(2 < (int)uVar9);
    uVar9 = *puVar1 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb8) + 4) = (uint)(2 < (int)uVar9);
    uVar9 = *puVar1 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)(2 < (int)uVar9);
    iVar5 = FUN_00ca8620(puVar1,0xc);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0xa4) = 2;
    }
    break;
  case 9:
    if ((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0x14) != 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 10;
    break;
  case 10:
    if ((((byte)DAT_01bea090 & 0x40) == 0) && (iVar5 = FUN_00416d50(0x1d), iVar5 == 0)) {
      if ((*(int *)(param_1 + 0x114) != 0) &&
         (*(undefined4 *)(param_1 + 0x114) = 0, *(int *)(param_1 + 0x18) != 0)) {
        uVar15 = 4;
LAB_00d2b8ed:
        FUN_00cdeec0(uVar15);
      }
    }
    else if ((*(int *)(param_1 + 0x114) == 0) &&
            (*(undefined4 *)(param_1 + 0x114) = 1, *(int *)(param_1 + 0x18) != 0)) {
      uVar15 = 3;
      goto LAB_00d2b8ed;
    }
    if (!bVar3) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa0),1);
    }
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0xa0));
    if (DAT_01dc0740 == 0) {
      iVar6 = FUN_00c1c550();
      if ((iVar6 == 1) && (iVar6 = FUN_00c1c560(), 0 < iVar6)) {
        iVar6 = FUN_00c1c560();
        fVar21 = (float)(iVar6 + -1) * 36.0 + 25.0;
        if (DAT_01dc1350 != 0) {
          fVar21 = fVar21 - 80.0;
        }
        if (NAN(fVar21) || 0.0 < fVar21 == (fVar21 == 0.0)) {
          if (fVar21 < *(float *)(iVar5 + 0xc4)) {
            *(float *)(iVar5 + 0xc4) = fVar21 * 0.1 + *(float *)(iVar5 + 0xc4);
          }
          if (*(float *)(iVar5 + 0xc4) < fVar21) {
            *(float *)(iVar5 + 0xc4) = fVar21;
          }
        }
        else {
          if (*(float *)(iVar5 + 0xc4) < fVar21) {
            *(float *)(iVar5 + 0xc4) = fVar21 * 0.1 + *(float *)(iVar5 + 0xc4);
          }
          bVar10 = fVar21 < *(float *)(iVar5 + 0xc4) |
                   (byte)((ushort)((ushort)(NAN(fVar21) || NAN(*(float *)(iVar5 + 0xc4))) << 10) >>
                         8);
LAB_00d2ba22:
          if ((POPCOUNT(bVar10) & 1U) != 0) {
            *(float *)(iVar5 + 0xc4) = fVar21;
          }
        }
      }
      else {
        fVar21 = 0.0;
        if (0.0 < *(float *)(iVar5 + 0xc4)) {
          fVar2 = *(float *)(iVar5 + 0xc4) - 10.0;
          *(float *)(iVar5 + 0xc4) = fVar2;
          bVar10 = fVar2 < 0.0 | (byte)((ushort)((ushort)NAN(fVar2) << 10) >> 8);
          goto LAB_00d2ba22;
        }
      }
    }
    else {
      fVar21 = (float)(DAT_018b3934 + -1) * 44.0 + 60.0;
      iVar6 = FUN_00c1c550();
      if ((iVar6 == 1) && (iVar6 = FUN_00c1c560(), iVar6 == 1)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xa0),0);
      }
      else if (*(float *)(iVar5 + 0xc4) < fVar21) {
        *(float *)(iVar5 + 0xc4) = fVar21 * 0.1 + *(float *)(iVar5 + 0xc4);
      }
    }
    if ((*(int *)(param_1 + 0xc0) != 0) || (*(int *)(param_1 + 0xac) != -1)) {
      *(undefined4 *)(param_1 + 0xa4) = 0xc;
    }
    break;
  case 0xc:
    if (*(int *)(param_1 + 0x11c) == 0) {
      FUN_00e5e050("core_se_sys_radio_face_off",0);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(undefined4 *)(param_1 + 0xa4) = 0xd;
      break;
    }
    goto LAB_00d2bba9;
  case 0xd:
    if ((*(int *)(param_1 + 0xa8) == 0) || (iVar5 = FUN_00ce4dd0(1), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0xa4) = 0xe;
    }
    break;
  case 0xe:
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_00cae160();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    iVar5 = *(int *)(param_1 + 0xb8);
    if (iVar5 != 0) {
      if ((*(uint *)(iVar5 + 0x24) & 1) == 0) {
        *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 1;
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    if (iVar5 != 0) {
      if ((*(uint *)(iVar5 + 0x24) & 1) == 0) {
        *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 1;
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a805f0();
      FUN_00a7c950();
    }
    FUN_00984660(0);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
LAB_00d2bba9:
    iVar5 = FUN_00cd1040(*(undefined4 *)(param_1 + 0xa8));
    if (iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      if (((iVar5 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar5 + 0x80))) &&
         (iVar5 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
        *(undefined4 *)(iVar5 + 0x3b0) = 1;
      }
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  iVar5 = FUN_00a81330();
  if (iVar5 == 0) goto LAB_00d2c1ed;
  iVar5 = *(int *)(param_1 + 0xa8);
  if ((iVar5 != -1) && (iVar5 != 0)) {
    if (*(int *)(param_1 + 300) != -1) {
      FUN_00cb6960(iVar5,*(int *)(param_1 + 300));
    }
    FUN_009860d0(0,*(undefined4 *)(param_1 + 0xa8));
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
    if (*(int *)(param_1 + 0x120) < 1) {
      uVar20 = 0x3f800000;
      uVar19 = 0xbf800000;
      uVar18 = 0x40200;
      uVar17 = 0x3f800000;
      uVar16 = 0x3e4ccccd;
      uVar15 = 2;
      puVar13 = &DAT_016b8e88;
      FUN_00a81330(&DAT_016b8e88,2,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
      FUN_00a7c890();
      FUN_00e3ff90(puVar13,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
      sVar4 = FUN_00dde2d0(0x13,300);
      *(int *)(param_1 + 0x120) = (int)sVar4;
    }
    FUN_00a81330();
    iVar5 = FUN_00a7c890();
    if ((*(int *)(iVar5 + 0xd0) + *(int *)(iVar5 + 0xc4) + *(int *)(iVar5 + 0xb8) == 0) ||
       (iVar5 = FUN_00e36060(3), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    else {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
      if (*(int *)(param_1 + 0x124) < 1) {
        fVar11 = (float10)FUN_00dde300(0x3f4ccccd,0x3f800000);
        fVar21 = (float)fVar11;
        uVar15 = 3;
        FUN_00a81330(3,fVar21);
        FUN_00a7c890();
        FUN_00546e40(uVar15,fVar21);
        sVar4 = FUN_00dde2d0(0x1e,0x28);
        *(int *)(param_1 + 0x124) = (int)sVar4;
      }
    }
    if ((*(int *)(param_1 + 0xa8) == 4) &&
       (*(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1, *(int *)(param_1 + 0x128) < 1))
    {
      FUN_00a81330();
      FUN_00a7c890();
      iVar5 = FUN_00e355e0(&DAT_016457ec);
      if (iVar5 != 0) {
        uVar20 = 0x3f800000;
        uVar19 = 0xbf800000;
        uVar18 = 0x40;
        uVar17 = 0x3f800000;
        uVar16 = 0x3e4ccccd;
        uVar15 = 0;
        puVar14 = &DAT_016457ec;
        FUN_00a81330(&DAT_016457ec,0,0x3e4ccccd,0x3f800000,0x40,0xbf800000,0x3f800000);
        FUN_00a7c890();
        FUN_00e3ff90(puVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
      }
      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x130);
      *(undefined4 *)(param_1 + 0x130) = 4;
      *(undefined4 *)(param_1 + 0x138) = 1;
      sVar4 = FUN_00dde2d0(0xe10,0x1c20);
      *(int *)(param_1 + 0x128) = (int)sVar4;
    }
    if ((6 < *(int *)(param_1 + 0xa4)) && (iVar5 = *(int *)(param_1 + 0x134), iVar5 != -1)) {
      iVar6 = *(int *)(param_1 + 0x130);
      if (iVar6 == 0) {
        FUN_00a81330(0);
        FUN_00a7c890();
        fVar11 = (float10)FUN_00407b40(iVar6);
        if ((float10)(float)(undefined *)0x0 < fVar11) {
          *(undefined4 *)(param_1 + 0x130) = 3;
        }
      }
      else if (iVar6 == 4) {
        uVar15 = 0;
        FUN_00a81330(0);
        FUN_00a7c890();
        iVar5 = FUN_0085be10(uVar15);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x138) = 1;
        }
      }
      else {
        if (iVar6 == iVar5) {
          *(undefined4 *)(param_1 + 0x138) = 1;
        }
        else {
          if (iVar5 != 1) {
            if (iVar5 == 2) {
              if (*(int *)(param_1 + 0x138) < 1) {
                FUN_00a81330();
                FUN_00a7c890();
                iVar5 = FUN_00e355e0(&DAT_01641bd4);
                if (iVar5 != 0) {
                  uVar20 = 0x3f800000;
                  uVar19 = 0x4d000004;
                  uVar18 = 0x8000000;
                  uVar17 = 0x3f800000;
                  uVar16 = 0x3f4ccccd;
                  uVar15 = 0;
                  puVar14 = &DAT_01641bd4;
                  FUN_00a81330(&DAT_01641bd4,0,0x3f4ccccd,0x3f800000,0x8000000,0x4d000004,0x3f800000
                              );
                  FUN_00a7c890();
                  FUN_00e3ff90(puVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
                }
                *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
                *(undefined4 *)(param_1 + 0x134) = 3;
              }
              else {
                *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
              }
            }
            else if (iVar5 == 3) {
              FUN_00a81330();
              FUN_00a7c890();
              iVar5 = FUN_00e355e0(&DAT_016b7cb4);
              if (iVar5 == 0) goto LAB_00d2bf40;
              uVar15 = 0;
              FUN_00a81330(0);
              FUN_00a7c890();
              iVar5 = FUN_0085be10(uVar15);
              if (iVar5 != 0) {
                uVar20 = 0x3f800000;
                uVar19 = 0xbf800000;
                uVar18 = 0x40;
                uVar17 = 0x3f800000;
                uVar16 = 0x3f4ccccd;
                uVar15 = 0;
                puVar13 = &DAT_016b7cb4;
                FUN_00a81330(&DAT_016b7cb4,0,0x3f4ccccd,0x3f800000,0x40,0xbf800000,0x3f800000);
                FUN_00a7c890();
                FUN_00e3ff90(puVar13,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
                *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
                goto LAB_00d2bf4c;
              }
            }
            goto LAB_00d2bf56;
          }
          FUN_00a81330();
          FUN_00a7c890();
          iVar5 = FUN_00e355e0(&DAT_01641bdc);
          if (iVar5 != 0) {
            uVar20 = 0x3f800000;
            uVar19 = 0xbf800000;
            uVar18 = 0x40;
            uVar17 = 0x3f800000;
            uVar16 = 0x3f4ccccd;
            uVar15 = 0;
            puVar14 = &DAT_01641bdc;
            FUN_00a81330(&DAT_01641bdc,0,0x3f4ccccd,0x3f800000,0x40,0xbf800000,0x3f800000);
            FUN_00a7c890();
            FUN_00e3ff90(puVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
          }
          *(undefined4 *)(param_1 + 0x138) = 1;
LAB_00d2bf40:
          *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
        }
LAB_00d2bf4c:
        *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
      }
    }
  }
LAB_00d2bf56:
  FUN_00a81330();
  iVar5 = FUN_00a7c8a0();
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    if ((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x98))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(uint *)(param_1 + 0x98) * 0x400 + 0x2a0 + *(int *)(iVar5 + 0x7c);
    }
    fStack_c0 = 0.0;
    uStack_b8 = 0;
    fStack_b4 = 0.0;
    fStack_bc = *(float *)(iVar5 + 0xe4);
    FUN_00a81330();
    piVar7 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar7 + 0x88))(&fStack_c0);
    fVar21 = fStack_c0;
    fStack_98 = fStack_c0;
    FUN_00a81330();
    piVar7 = (int *)FUN_00a7c8a0();
    fVar11 = (float10)fsin((float10)fVar21);
    fVar12 = (float10)0.3;
    fStack_b4 = (float)(fVar11 * fVar12);
    fStack_b0 = -10000.0;
    fVar11 = (float10)fcos((float10)fStack_98);
    fStack_ac = (float)(fVar12 - fVar11 * fVar12);
    (**(code **)(*piVar7 + 0x6c))(&fStack_b4);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
    if (*(int *)(param_1 + 0x120) < 1) {
      uVar20 = 0x3f800000;
      uVar19 = 0xbf800000;
      uVar18 = 0x8040200;
      uVar17 = 0x3f800000;
      uVar16 = 0x3e4ccccd;
      uVar15 = 2;
      puVar13 = &DAT_016b8e88;
      FUN_00a81330(&DAT_016b8e88,2,0x3e4ccccd,0x3f800000,0x8040200,0xbf800000,0x3f800000);
      FUN_00a7c890();
      FUN_00e3ff90(puVar13,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
      sVar4 = FUN_00dde2d0(0x13,300);
      *(int *)(param_1 + 0x120) = (int)sVar4;
    }
  }
LAB_00d2c1ed:
  if ((2 < *(int *)(param_1 + 0xa4)) && (*(int *)(param_1 + 0xa4) < 9)) {
    puVar8 = (undefined4 *)FUN_00caac30(2);
    uStack_90 = *puVar8;
    uStack_8c = puVar8[1];
    uStack_88 = puVar8[2];
    uStack_84 = puVar8[3];
    FUN_00d9fa80(&uStack_30,&uStack_90);
    iVar5 = *(int *)(param_1 + 0xb8);
    if (*(int *)(iVar5 + 0x18) != 0) {
      *(undefined4 *)(iVar5 + 0x80) = uStack_30;
      *(undefined4 *)(iVar5 + 0x84) = uStack_2c;
    }
    FUN_00cb6af0(&fStack_c0);
    fStack_b0 = fStack_c0;
    fStack_ac = fStack_bc;
    uStack_a8 = uStack_b8;
    uStack_a4 = 0x3f800000;
    FUN_00caccc0(auStack_20,&fStack_b0);
    FUN_00cb5540(&uStack_30,auStack_20,0x3f800000);
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar15 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x204);
    if (*(int *)(iVar5 + 0x18) != 0) {
      *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x200);
      *(undefined4 *)(iVar5 + 0x84) = uVar15;
    }
  }
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0x98),0x40000000,0x40000000,0x43960000,0x43480000);
  return;
}

