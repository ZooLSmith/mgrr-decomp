// src/misc/cChapterResult.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D07B70..00D41360, 7 functions

#include "mgrr.h"
#include "cChapterResult.h"

// 00D07B70  cChapterResult::vf00  size=30  [class]
undefined4 __thiscall cChapterResult::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_11();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D07B90  FUN_00d07b90  size=1043  [callgraph]
void __fastcall FUN_00d07b90(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_14 [4];
  char *local_4;
  
  uVar2 = DAT_018b9148 & 0xf00;
  if (uVar2 < 0x501) {
    if (uVar2 == 0x500) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_05",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_05",0,0xffffffff);
      pcVar6 = "RESULT_AREA_05";
      goto LAB_00d07e43;
    }
    if (uVar2 < 0x301) {
      if (uVar2 == 0x300) {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_03",0,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_03",0,0xffffffff);
        pcVar6 = "RESULT_AREA_03";
        goto LAB_00d07e43;
      }
      if (uVar2 == 0x100) {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_01",0,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_01",0,0xffffffff);
        pcVar6 = "RESULT_AREA_01";
        goto LAB_00d07e43;
      }
      if (uVar2 == 0x200) {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_02",0,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_02",0,0xffffffff);
        pcVar6 = "RESULT_AREA_02";
        goto LAB_00d07e43;
      }
    }
    else if (uVar2 == 0x400) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_04",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_04",0,0xffffffff);
      pcVar6 = "RESULT_AREA_04";
      goto LAB_00d07e43;
    }
  }
  else if (uVar2 < 0xc01) {
    if (uVar2 == 0xc00) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_08",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_08",0,0xffffffff);
      pcVar6 = "RESULT_AREA_08";
      goto LAB_00d07e43;
    }
    if (uVar2 == 0x600) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_06",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_06",0,0xffffffff);
      pcVar6 = "RESULT_AREA_06";
      goto LAB_00d07e43;
    }
    if (uVar2 == 0xa00) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_00",0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_00",0,0xffffffff);
      pcVar6 = "RESULT_AREA_00";
      goto LAB_00d07e43;
    }
  }
  else if (uVar2 == 0xd00) {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_09",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_09",0,0xffffffff);
    pcVar6 = "RESULT_AREA_09";
    goto LAB_00d07e43;
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x62c),"RESULT_SEL_07",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x630),"RESULT_SEL_07",0,0xffffffff);
  pcVar6 = "RESULT_AREA_07";
LAB_00d07e43:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x614),pcVar6,0,0xffffffff);
  local_14[0] = "RESULT_SEL_11";
  local_14[1] = "RESULT_SEL_12";
  local_14[2] = "RESULT_SEL_13";
  local_14[3] = "RESULT_SEL_14";
  local_4 = "RESULT_SEL_15";
  iVar3 = FUN_009c4bf0();
  iVar4 = *(int *)(param_1 + 0x18);
  pcVar6 = local_14[iVar3];
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x648) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x648) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 3) {
      uVar5 = FUN_00e03ea0(pcVar6);
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 0;
      if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
        iVar4 = FUN_00cb1cd0(uVar5);
        if (-1 < iVar4) {
          piVar1[0x2a] = iVar4;
          piVar1[0x2b] = 0;
          piVar1[0x2e] = 0;
        }
      }
    }
  }
  iVar4 = FUN_009c4bf0();
  pcVar6 = local_14[iVar4];
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x64c) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x64c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 3) {
      uVar5 = FUN_00e03ea0(pcVar6);
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 0;
      if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
        iVar4 = FUN_00cb1cd0(uVar5);
        if (-1 < iVar4) {
          piVar1[0x2a] = iVar4;
          piVar1[0x2b] = 0;
          piVar1[0x2e] = 0;
        }
      }
    }
  }
  return;
}

// 00D07FB0  FUN_00d07fb0  size=419  [callgraph]
void __thiscall FUN_00d07fb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *local_30 [4];
  char *local_20;
  char *local_1c;
  undefined4 local_18 [6];
  
  local_18[0] = 3;
  local_18[4] = 3;
  local_18[5] = 3;
  iVar4 = *(int *)(param_1 + 900 + param_2 * 0x1c);
  iVar1 = param_1 + 0x36c + param_2 * 0x1c;
  local_30[0] = "RESULT_SEL_21";
  local_30[1] = "RESULT_SEL_16";
  local_30[2] = "RESULT_SEL_17";
  local_30[3] = "RESULT_SEL_18";
  local_20 = "RESULT_SEL_19";
  local_1c = "RESULT_SEL_20";
  local_18[1] = 6;
  local_18[2] = 5;
  local_18[3] = 4;
  if (iVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar4 + 0x88);
  }
  pcVar2 = local_30[param_3];
  if ((((iVar4 != 0) && (uVar6 < *(uint *)(iVar4 + 0x80))) &&
      (piVar3 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + uVar6 * 0x400), piVar3 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 == 3)) {
    uVar5 = FUN_00e03ea0(pcVar2);
    piVar3[0x2a] = -1;
    piVar3[0x2b] = 0;
    if (((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
      piVar3[0x2a] = iVar4;
      piVar3[0x2b] = 0;
      piVar3[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(iVar1 + 0x18);
  if (((iVar4 != 0) && ((uint)*(ushort *)(iVar4 + 0x8a) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar3 = *(int **)((uint)*(ushort *)(iVar4 + 0x8a) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar3 != (int *)0x0 && (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 == 3)))) {
    uVar5 = FUN_00e03ea0(pcVar2);
    piVar3[0x2a] = -1;
    piVar3[0x2b] = 0;
    if (((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
      piVar3[0x2a] = iVar4;
      piVar3[0x2b] = 0;
      piVar3[0x2e] = 0;
    }
  }
  if (*(int *)(iVar1 + 0x18) != 0) {
    FUN_00cdeec0(local_18[param_3]);
  }
  return;
}

// 00D08160  FUN_00d08160  size=785  [callgraph]
undefined4 __thiscall FUN_00d08160(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  undefined1 local_74 [32];
  float local_54 [17];
  float local_10;
  
  uVar5 = 0;
  if (param_2 / 0x14 < 1) {
    *(undefined2 *)(param_1 + 0x6d4) = 0x14;
  }
  iVar3 = (int)*(short *)(param_1 + 0x6d4) * (param_2 / 0x14);
  if (*(short *)(param_1 + 0x6d4) == 0x14) {
    iVar3 = param_2;
  }
  FUN_00ca84a0(iVar3,local_74,0x20);
  fVar1 = 0.0;
  iVar3 = *(int *)(param_1 + 0x18);
  local_54[0] = 0.0;
  local_10 = 0.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  if (iVar3 != 0) {
    if (((*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0x658)) ||
        (piVar6 = *(int **)(*(uint *)(param_1 + 0x658) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
        piVar6 == (int *)0x0)) || (iVar3 = (**(code **)(*piVar6 + 8))(), iVar3 != 4)) {
      piVar6 = (int *)0x0;
    }
    iVar3 = FUN_00ce5150(piVar6,local_74,local_54);
    if (iVar3 == 0) {
      fVar1 = 0.0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0x658))) {
        fVar1 = (local_10 + local_54[0]) * fRam00000010;
      }
      else {
        fVar1 = (local_10 + local_54[0]) *
                *(float *)(*(uint *)(param_1 + 0x658) * 0x400 + 0x60 + *(int *)(iVar3 + 0x7c));
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x660);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar3 + 0x80)) {
      iVar3 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar3 = 0;
    }
    fVar7 = (float10)FUN_00ddb510(-fVar1,0);
    *(float *)(iVar3 + 0xc0) = (float)fVar7;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x660);
  if (iVar3 != 0) {
    if (((uVar2 < *(uint *)(iVar3 + 0x80)) &&
        (iVar4 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar4 != 0)) &&
       (*(int *)(iVar4 + 0x3b0) != 0)) goto LAB_00d0833c;
    if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
  }
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x660),1,3);
LAB_00d0833c:
  if (*(short *)(param_1 + 0x6d4) < 0x14) {
    *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0x660))) ||
       ((piVar6 = *(int **)(*(int *)(iVar3 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x660) * 0x400),
        piVar6 == (int *)0x0 ||
        ((iVar3 = (**(code **)(*piVar6 + 8))(), iVar3 != 3 || (piVar6[0x5c] == 0)))))) {
      uVar5 = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if ((((iVar3 != 0) && (*(uint *)(param_1 + 0x658) < *(uint *)(iVar3 + 0x80))) &&
      (piVar6 = *(int **)(*(uint *)(param_1 + 0x658) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar6 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar6 + 8))(), iVar3 == 4)) {
    FUN_00cb3cc0(piVar6,local_74);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x65c) < *(uint *)(iVar3 + 0x80))) &&
     ((piVar6 = *(int **)(*(uint *)(param_1 + 0x65c) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
      piVar6 != (int *)0x0 && (iVar3 = (**(code **)(*piVar6 + 8))(), iVar3 == 4)))) {
    FUN_00cb3cc0(piVar6,local_74);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x658) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x658) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x65c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x65c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 1;
  }
  return uVar5;
}

// 00D19E00  cChapterResult::vf08  size=2720  [class]
void __fastcall cChapterResult::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  char *pcVar7;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x8c);
  }
  *(uint *)(param_1 + 0x614) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0x618) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9c);
  }
  *(uint *)(param_1 + 0x61c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9e);
  }
  *(uint *)(param_1 + 0x620) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0x624) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0x628) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa4);
  }
  *(uint *)(param_1 + 0x62c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa6);
  }
  *(uint *)(param_1 + 0x630) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xae);
  }
  *(uint *)(param_1 + 0x634) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb0);
  }
  *(uint *)(param_1 + 0x638) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb2);
  }
  *(uint *)(param_1 + 0x63c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb4);
  }
  *(uint *)(param_1 + 0x640) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  }
  *(uint *)(param_1 + 0x644) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb8);
  }
  *(uint *)(param_1 + 0x648) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xba);
  }
  *(uint *)(param_1 + 0x64c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xc4);
  }
  *(uint *)(param_1 + 0x650) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xc6);
  }
  *(uint *)(param_1 + 0x654) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xd8);
  }
  *(uint *)(param_1 + 0x658) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xda);
  }
  *(uint *)(param_1 + 0x65c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xdc);
  }
  *(uint *)(param_1 + 0x660) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xea);
  }
  *(uint *)(param_1 + 0x664) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xec);
  }
  *(uint *)(param_1 + 0x694) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xee);
  }
  *(uint *)(param_1 + 0x690) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xf0);
  }
  *(uint *)(param_1 + 0x68c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xf2);
  }
  *(uint *)(param_1 + 0x688) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xf4);
  }
  *(uint *)(param_1 + 0x684) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xf6);
  }
  *(uint *)(param_1 + 0x680) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xf8);
  }
  *(uint *)(param_1 + 0x67c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xfa);
  }
  *(uint *)(param_1 + 0x678) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xfc);
  }
  *(uint *)(param_1 + 0x674) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xfe);
  }
  *(uint *)(param_1 + 0x670) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x100);
  }
  *(uint *)(param_1 + 0x66c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x102);
  }
  puVar5 = (uint *)(param_1 + 0x668);
  *puVar5 = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x104);
  }
  *(uint *)(param_1 + 0x6c4) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x106);
  }
  *(uint *)(param_1 + 0x6c0) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x108);
  }
  *(uint *)(param_1 + 0x6bc) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x10a);
  }
  *(uint *)(param_1 + 0x6b8) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x10c);
  }
  *(uint *)(param_1 + 0x6b4) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x10e);
  }
  *(uint *)(param_1 + 0x6b0) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x110);
  }
  *(uint *)(param_1 + 0x6ac) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x112);
  }
  *(uint *)(param_1 + 0x6a8) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x114);
  }
  *(uint *)(param_1 + 0x6a4) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x116);
  }
  *(uint *)(param_1 + 0x6a0) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x118);
  }
  *(uint *)(param_1 + 0x69c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x11a);
  }
  *(uint *)(param_1 + 0x698) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x13c);
  }
  *(uint *)(param_1 + 0x6c8) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x6cc) = uVar4;
  piVar6 = (int *)(param_1 + 900);
  local_4 = 0x18;
  do {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((((iVar2 != 0) && (*puVar5 < *(uint *)(iVar2 + 0x80))) &&
        (piVar1 = *(int **)(*puVar5 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)
        ) && ((iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 0 && (piVar1 + 4 != (int *)0x0)))) {
      *piVar6 = (int)(piVar1 + 4);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*puVar5 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *puVar5 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    puVar5 = puVar5 + 1;
    piVar6 = piVar6 + 7;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x6c8) < *(uint *)(iVar2 + 0x80))) &&
      (piVar6 = *(int **)(*(uint *)(param_1 + 0x6c8) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar6 != (int *)0x0)) &&
     ((iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 == 0 && (piVar6 + 4 != (int *)0x0)))) {
    *(int **)(param_1 + 0x34) = piVar6 + 4;
    FUN_00cc1f80();
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x614) < *(uint *)(iVar2 + 0x80))) &&
     ((piVar6 = *(int **)(*(uint *)(param_1 + 0x614) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar6 != (int *)0x0 && (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 == 3)))) {
    uVar3 = FUN_00e03ea0("RESULT_AREA_00");
    piVar6[0x2a] = -1;
    piVar6[0x2b] = 0;
    if (((piVar6[5] != 0) && (*(int *)(piVar6[5] + 4) != 0)) &&
       (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
      piVar6[0x2a] = iVar2;
      piVar6[0x2b] = 0;
      piVar6[0x2e] = 0;
    }
  }
  if (((DAT_018b9148 & 0xf00) == 0xc00) || ((DAT_018b9148 & 0xf00) == 0xd00)) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) &&
        ((*(uint *)(param_1 + 0x620) < *(uint *)(iVar2 + 0x80) &&
         (piVar6 = *(int **)(*(uint *)(param_1 + 0x620) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar6 != (int *)0x0)))) && (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 == 3)) {
      uVar3 = FUN_00e03ea0("RESULT_TITLE_12");
      piVar6[0x2a] = -1;
      piVar6[0x2b] = 0;
      if (((piVar6[5] != 0) && (*(int *)(piVar6[5] + 4) != 0)) &&
         (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
        piVar6[0x2a] = iVar2;
        piVar6[0x2b] = 0;
        piVar6[0x2e] = 0;
      }
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= *(uint *)(param_1 + 0x624))) ||
       ((piVar6 = *(int **)(*(uint *)(param_1 + 0x624) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar6 == (int *)0x0 || (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 != 3))))
    goto LAB_00d1a525;
    pcVar7 = "RESULT_TITLE_12";
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x620) < *(uint *)(iVar2 + 0x80))) &&
       ((piVar6 = *(int **)(*(uint *)(param_1 + 0x620) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar6 != (int *)0x0 && (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 == 3)))) {
      uVar3 = FUN_00e03ea0("RESULT_TITLE_10");
      piVar6[0x2a] = -1;
      piVar6[0x2b] = 0;
      if (((piVar6[5] != 0) && (*(int *)(piVar6[5] + 4) != 0)) &&
         (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
        piVar6[0x2a] = iVar2;
        piVar6[0x2b] = 0;
        piVar6[0x2e] = 0;
      }
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= *(uint *)(param_1 + 0x624))) ||
       ((piVar6 = *(int **)(*(uint *)(param_1 + 0x624) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
        piVar6 == (int *)0x0 || (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 != 3))))
    goto LAB_00d1a525;
    pcVar7 = "RESULT_TITLE_10";
  }
  uVar3 = FUN_00e03ea0(pcVar7);
  piVar6[0x2b] = 0;
  piVar6[0x2a] = -1;
  if (((piVar6[5] != 0) && (*(int *)(piVar6[5] + 4) != 0)) &&
     (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
    piVar6[0x2e] = 0;
    piVar6[0x2b] = 0;
    piVar6[0x2a] = iVar2;
  }
LAB_00d1a525:
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x614) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x614) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x61c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x61c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x620) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x620) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x624) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x624) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x628) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x628) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x62c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x62c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x630) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x630) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x63c) < *(uint *)(iVar2 + 0x80))) &&
     ((piVar6 = *(int **)(*(uint *)(param_1 + 0x63c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar6 != (int *)0x0 && (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 == 3)))) {
    uVar3 = FUN_00e03ea0("RESULT_TITLE_11");
    piVar6[0x2a] = -1;
    piVar6[0x2b] = 0;
    if (((piVar6[5] != 0) && (*(int *)(piVar6[5] + 4) != 0)) &&
       (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
      piVar6[0x2a] = iVar2;
      piVar6[0x2b] = 0;
      piVar6[0x2e] = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x640) < *(uint *)(iVar2 + 0x80))) &&
      (piVar6 = *(int **)(*(uint *)(param_1 + 0x640) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar6 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar6 + 8))(), iVar2 == 3)) {
    uVar3 = FUN_00e03ea0("RESULT_TITLE_11");
    piVar6[0x2a] = -1;
    piVar6[0x2b] = 0;
    if (((piVar6[5] != 0) && (*(int *)(piVar6[5] + 4) != 0)) &&
       (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
      piVar6[0x2a] = iVar2;
      piVar6[0x2b] = 0;
      piVar6[0x2e] = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x638) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x638) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x63c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x63c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x640) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x640) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x644) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x644) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x648) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x648) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x64c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x64c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x658) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x658) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x65c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x65c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x660) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x660) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x664) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x664) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  FUN_00d07b90();
  uVar3 = FUN_009a29d0();
  *(undefined4 *)(param_1 + 0x610) = uVar3;
  return;
}

// 00D1A8A0  FUN_00d1a8a0  size=753  [callgraph]
bool __thiscall FUN_00d1a8a0(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  float10 fVar7;
  int iVar8;
  undefined1 local_74 [32];
  float local_54 [17];
  float local_10;
  
  if (param_2 / 0x14 < 1) {
    *(undefined2 *)(param_1 + 0x6d4) = 0x14;
  }
  iVar4 = (int)*(short *)(param_1 + 0x6d4) * (param_2 / 0x14);
  if (*(short *)(param_1 + 0x6d4) == 0x14) {
    iVar8 = 0;
    iVar4 = param_2;
  }
  else {
    iVar8 = param_2 - iVar4;
  }
  puVar5 = (undefined *)(DAT_01b7614c + iVar4);
  FUN_00d199b0(iVar8);
  if (9999999 < (int)puVar5) {
    puVar5 = &DAT_0098967f;
  }
  FUN_00ca84a0(puVar5,local_74,0x20);
  fVar1 = 0.0;
  iVar4 = *(int *)(param_1 + 0x18);
  local_54[0] = 0.0;
  local_10 = 0.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  if (iVar4 != 0) {
    if (((*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x658)) ||
        (piVar6 = *(int **)(*(uint *)(param_1 + 0x658) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar6 == (int *)0x0)) || (iVar4 = (**(code **)(*piVar6 + 8))(), iVar4 != 4)) {
      piVar6 = (int *)0x0;
    }
    iVar4 = FUN_00ce5150(piVar6,local_74,local_54);
    if (iVar4 == 0) {
      fVar1 = 0.0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x18);
      if ((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x658))) {
        fVar1 = (local_10 + local_54[0]) * fRam00000010;
      }
      else {
        fVar1 = (local_10 + local_54[0]) *
                *(float *)(*(uint *)(param_1 + 0x658) * 0x400 + 0x60 + *(int *)(iVar4 + 0x7c));
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x660);
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    fVar7 = (float10)FUN_00ddb510(-fVar1,0);
    *(float *)(iVar4 + 0xc0) = (float)fVar7;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x660);
  if (iVar4 != 0) {
    if (((uVar3 < *(uint *)(iVar4 + 0x80)) &&
        (iVar8 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar8 != 0)) &&
       (*(int *)(iVar8 + 0x3b0) != 0)) goto LAB_00d1aaa2;
    if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x660),1,3);
LAB_00d1aaa2:
  sVar2 = *(short *)(param_1 + 0x6d4);
  if (0x13 >= sVar2) {
    *(short *)(param_1 + 0x6d4) = sVar2 + 1;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x658) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar6 = *(int **)(*(uint *)(param_1 + 0x658) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar6 != (int *)0x0 && (iVar4 = (**(code **)(*piVar6 + 8))(), iVar4 == 4)))) {
    FUN_00cb3cc0(piVar6,local_74);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x65c) < *(uint *)(iVar4 + 0x80))) &&
      (piVar6 = *(int **)(*(uint *)(param_1 + 0x65c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar6 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar6 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar6,local_74);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x658) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x658) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x65c) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x65c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 1;
  }
  return 0x13 < sVar2;
}

// 00D41360  cChapterResult::vf14  size=3460  [class]
void __fastcall cChapterResult::vf14(int param_1)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float10 extraout_ST0;
  float10 fVar14;
  undefined8 uVar15;
  longlong lVar16;
  char *_Src;
  byte local_35;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = FUN_00c20a50();
  if (iVar6 != 0) {
    return;
  }
  switch(*(char *)(param_1 + 0x6d0)) {
  case '\0':
    iVar6 = FUN_00eb4340(DAT_01be8e4c);
    if (iVar6 != 0) {
      switch(*(undefined2 *)(param_1 + 0x6d4)) {
      case 0:
        FUN_00e5e050("core_se_sys_chapter_window_open",0);
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        }
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x650),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x654),1,3);
        fVar14 = (float10)FUN_00d369e0(3,0);
        fVar2 = (float)fVar14;
        FUN_00cb32a0(&local_20,*(undefined4 *)(param_1 + 0x61c));
        fVar3 = local_20 + local_20 + fVar2;
        fVar14 = (float10)FUN_00cc3170(2,fVar3);
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x61c),0);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x620),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x624),1,3);
        FUN_00cc31e0(0,2,(float)fVar14,0xffffffff);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x61c),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x620),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x624),1);
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x628));
        FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),*(float *)((int)uVar15 + 0xc0) + fVar2);
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x62c));
        FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),*(float *)((int)uVar15 + 0xc0) + fVar2);
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x630));
        FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),*(float *)((int)uVar15 + 0xc0) + fVar2);
        *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
        *(float *)(param_1 + 0x72c) = fVar3;
        break;
      case 0xf:
        fVar14 = (float10)FUN_00d369e0(10,0);
        fVar2 = (float)fVar14;
        FUN_00cb32a0(&local_20,*(undefined4 *)(param_1 + 0x638));
        fVar3 = local_20 + local_20 + fVar2;
        fVar14 = (float10)FUN_00cc3170(9,fVar3);
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x638),0);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x63c),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x640),1,3);
        FUN_00cc31e0(2,9,(float)fVar14,0xffffffff);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x638),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x63c),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x640),1);
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x644));
        FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),*(float *)((int)uVar15 + 0xc0) + fVar2);
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x648));
        FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),*(float *)((int)uVar15 + 0xc0) + fVar2);
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x64c));
        if ((int)uVar15 != 0) {
          FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),*(float *)((int)uVar15 + 0xc0) + fVar2);
        }
        *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
        *(float *)(param_1 + 0x734) = fVar3;
        break;
      case 0x14:
        fVar14 = (float10)FUN_00d369e0(6,0);
        FUN_00cb32a0(&local_20,*(undefined4 *)(param_1 + 0x628));
        fVar2 = local_20 + local_20 + (float)fVar14;
        fVar14 = (float10)FUN_00cc3170(5,fVar2);
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x628),0);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x62c),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x630),1,3);
        FUN_00cc31e0(1,5,(float)fVar14,0xffffffff);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x628),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x62c),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x630),1);
        *(float *)(param_1 + 0x730) = fVar2;
        uVar15 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x614));
        FUN_00cb28a0((int)((ulonglong)uVar15 >> 0x20),
                     (float)((float10)*(float *)((int)uVar15 + 0xc0) +
                             (float10)*(float *)(param_1 + 0x72c) + extraout_ST0));
        *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
        break;
      case 0x23:
        fVar14 = (float10)FUN_00d369e0(0xd,0);
        FUN_00cb32a0(&local_20,*(undefined4 *)(param_1 + 0x644));
        fVar2 = local_20 + local_20 + (float)fVar14;
        fVar14 = (float10)FUN_00cc3170(0xc,fVar2);
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x644),0);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x648),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x64c),1,3);
        FUN_00cc31e0(3,0xc,(float)fVar14,0xffffffff);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x644),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x648),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x64c),1);
        *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
        *(float *)(param_1 + 0x738) = fVar2;
        break;
      case 0x28:
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x614),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x614),1,3);
        *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
        break;
      case 0x3c:
        *(char *)(param_1 + 0x6d0) = *(char *)(param_1 + 0x6d0) + '\x01';
        *(undefined1 *)(param_1 + 0x261) = 1;
      default:
        *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
      }
    }
    break;
  case '\x01':
    if (*(int *)(param_1 + 0x264) == 0) break;
    iVar6 = *(int *)(param_1 + 800);
    iVar10 = 0;
    *(int *)(param_1 + 0x6d8) = iVar6;
    if (iVar6 < 0xc) {
      iVar10 = 0xc - iVar6;
    }
    if (0xc < iVar6) {
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x664),0xc2040000);
    }
    lVar16 = FUN_00cb2480(*(undefined4 *)
                           (param_1 + 0x664 + (*(int *)(param_1 + 0x6d8) + iVar10) * 4));
    if ((int)lVar16 == 0) {
      *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + 1;
      if (5 < *(short *)(param_1 + 0x6d4)) {
        cVar4 = '\0';
        *(undefined2 *)(param_1 + 0x6d4) = 0;
        iVar6 = 0;
        if (0xffffffff < lVar16) {
          do {
            iVar6 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x668 + (iVar6 + iVar10) * 4));
            if (iVar6 == 0) {
              iVar10 = iVar10 + cVar4;
              FUN_00d07fb0(iVar10,(&DAT_01b76198)[cVar4]);
              FUN_00cb2310(*(undefined4 *)(param_1 + 0x668 + iVar10 * 4),1);
              if (cVar4 == '\0') {
                FUN_00cb2310(*(undefined4 *)(param_1 + 0x664),1);
                FUN_00ccdf90(*(undefined4 *)(param_1 + 0x664),1,3);
              }
              break;
            }
            cVar4 = cVar4 + '\x01';
            iVar6 = (int)cVar4;
          } while (iVar6 < *(int *)(param_1 + 0x6d8));
        }
      }
      break;
    }
    goto LAB_00d41aa9;
  case '\x02':
    if ((*(char *)(param_1 + 0x260) == '\t') && (iVar6 = FUN_00d08160(DAT_01b7614c), iVar6 != 0)) {
      *(char *)(param_1 + 0x6d0) = *(char *)(param_1 + 0x6d0) + '\x01';
      *(undefined2 *)(param_1 + 0x6d4) = 0;
      if (*(int *)(param_1 + 0x610) != 0) {
        pfVar7 = (float *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x6cc));
        local_20 = *pfVar7;
        local_1c = pfVar7[1];
        local_18 = pfVar7[2];
        local_14 = pfVar7[3];
        FUN_009ab030("chapter_result",&local_20,0x41700000,0);
        FUN_00991210(0);
      }
    }
    break;
  case '\x03':
    if (*(int *)(param_1 + 0x610) != 0) {
      FUN_00991210((float)(int)*(short *)(param_1 + 0x6d4) * 0.1);
    }
    sVar5 = *(short *)(param_1 + 0x6d4);
    if (sVar5 < 10) {
LAB_00d41abd:
      *(short *)(param_1 + 0x6d4) = sVar5 + 1;
      break;
    }
    cVar4 = FUN_00ce12f0(0);
    if ((cVar4 == '\0') && (DAT_01b7b79c != 1)) break;
    FUN_00e5e050("core_se_sys_mission_bp_count",0);
LAB_00d41aa9:
    *(char *)(param_1 + 0x6d0) = *(char *)(param_1 + 0x6d0) + '\x01';
    *(undefined2 *)(param_1 + 0x6d4) = 0;
    break;
  case '\x04':
    if ((*(char *)(param_1 + 0x260) != '\t') ||
       (iVar6 = FUN_00d1a8a0(*(undefined4 *)(param_1 + 0x31c)), iVar6 == 0)) break;
    FUN_00e5e050("core_se_sys_mission_bp_stop",0);
    uVar8 = DAT_018b9148 & 0xf00;
    if (uVar8 < 0x601) {
      if (uVar8 == 0x600) {
        uVar13 = 6;
      }
      else if (uVar8 < 0x301) {
        if (uVar8 == 0x300) {
          uVar13 = 3;
        }
        else if (uVar8 == 0x100) {
          uVar13 = 1;
        }
        else {
          if (uVar8 != 0x200) goto LAB_00d41c3c;
          uVar13 = 2;
        }
      }
      else if (uVar8 == 0x400) {
        uVar13 = 4;
      }
      else {
        if ((uVar8 != 0x500) || (FUN_009c6540(5), 420.0 < DAT_01b76140)) goto LAB_00d41c3c;
        uVar13 = 0xe;
      }
      goto LAB_00d41c34;
    }
    if (uVar8 < 0xc01) {
      if (uVar8 == 0xc00) {
        FUN_009c6540(0x34);
        iVar6 = FUN_009c4bf0();
        if ((iVar6 == 4) && (DAT_01b76140 <= 3600.0)) {
          uVar13 = 0x36;
          goto LAB_00d41c34;
        }
      }
      else if (uVar8 == 0x700) {
        FUN_009c6540(7);
        iVar6 = FUN_00c81dd0(0x3e);
        if ((iVar6 != 0) || (DAT_01b76174 == 0)) {
          uVar13 = 0xf;
          goto LAB_00d41c34;
        }
      }
      else if (uVar8 == 0xa00) {
        uVar13 = 0;
LAB_00d41c34:
        FUN_009c6540(uVar13);
      }
    }
    else if (uVar8 == 0xd00) {
      FUN_009c6540(0x38);
      iVar6 = FUN_009c4bf0();
      if ((iVar6 == 4) && (DAT_01b76140 <= 3600.0)) {
        uVar13 = 0x3a;
        goto LAB_00d41c34;
      }
    }
LAB_00d41c3c:
    iVar6 = FUN_009c4bf0();
    if (iVar6 == 4) {
      cVar4 = '\0';
      do {
        if ((&DAT_01b75a14)[cVar4 * 0x30] != 1) goto LAB_00d41c73;
        cVar4 = cVar4 + '\x01';
      } while (cVar4 < '\b');
      FUN_009c6540(8);
    }
LAB_00d41c73:
    FUN_0094bd10();
    *(char *)(param_1 + 0x6d0) = *(char *)(param_1 + 0x6d0) + '\x01';
    *(undefined2 *)(param_1 + 0x6d4) = 0;
    break;
  case '\x05':
    sVar5 = *(short *)(param_1 + 0x6d4);
    if (sVar5 < 0x14) goto LAB_00d41abd;
    cVar4 = FUN_00ce12f0(0);
    if ((cVar4 == '\0') && (DAT_01b7b79c != 1)) break;
    *(undefined2 *)(param_1 + 0x6d4) = 0;
    iVar6 = cUnLockDisp::cUnLockDisp();
    *(int *)(param_1 + 0x60c) = iVar6;
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0x6d0) = 10;
      *(undefined1 *)(param_1 + 0x6d2) = 1;
      break;
    }
    if (((DAT_018b9148 & 0xf00) != 0xc00) && ((DAT_018b9148 & 0xf00) != 0xd00)) {
      FUN_00cdb920();
    }
    goto LAB_00d41eca;
  case '\x06':
    if (*(char *)(*(int *)(param_1 + 0x60c) + 0x31) == '\0') break;
    *(char *)(param_1 + 0x6d0) = *(char *)(param_1 + 0x6d0) + '\x01';
    uVar8 = DAT_018b9148 & 0xf00;
    uVar13 = 0xffffffff;
    if (uVar8 < 0x401) {
      if (uVar8 == 0x400) {
        uVar13 = 5;
        DAT_01b76470 = 0x510;
        _Src = "P510_IN";
      }
      else if (uVar8 == 0x100) {
        uVar13 = 2;
        DAT_01b76470 = 0x210;
        _Src = "P210_SEWER_MOVIE";
      }
      else if (uVar8 == 0x200) {
        uVar13 = 3;
        DAT_01b76470 = 0x310;
        _Src = "P310_BTL1";
      }
      else {
        if (uVar8 != 0x300) goto LAB_00d41e1f;
        uVar13 = 4;
        DAT_01b76470 = 0x410;
        _Src = "P410_START";
      }
LAB_00d41e10:
      _strcpy_s((char *)&DAT_01b76474,0x20,_Src);
    }
    else {
      if (uVar8 == 0x500) {
        uVar13 = 6;
        DAT_01b76470 = 0x610;
        _Src = "P610_BOSS";
        goto LAB_00d41e10;
      }
      if (uVar8 == 0x600) {
        uVar13 = 7;
        DAT_01b76470 = 0x710;
        _Src = "P710_IN";
        goto LAB_00d41e10;
      }
      if (uVar8 == 0xa00) {
        uVar13 = 1;
        DAT_01b76470 = 0x118;
        _Src = "P118_BEACH";
        goto LAB_00d41e10;
      }
    }
LAB_00d41e1f:
    piVar9 = (int *)FUN_00c13920();
    (**(code **)(*piVar9 + 0xa4))(*(undefined4 *)(param_1 + 0x31c));
    _memset(&DAT_01b76140,0,0xc0);
    uVar8 = DAT_018b9148 & 0xf00;
    if (((uVar8 == 0xc00) || (uVar8 == 0xd00)) || (uVar8 == 0x700)) {
      DAT_01b7589c = DAT_01b7589c + *(int *)(param_1 + 0x31c);
      if (0x98967e < (int)DAT_01b7589c) {
        DAT_01b7589c = &DAT_0098967f;
      }
    }
    else {
      FUN_009c8c00(0,uVar13);
    }
    break;
  case '\a':
    iVar6 = FUN_009c5690();
    if ((iVar6 != 0) || (DAT_018b5758 != 0)) break;
    piVar9 = (int *)FUN_00c13920();
    (**(code **)(*piVar9 + 0x84))();
    *(undefined1 *)(param_1 + 0x6d2) = 1;
LAB_00d41eca:
    *(char *)(param_1 + 0x6d0) = *(char *)(param_1 + 0x6d0) + '\x01';
  }
  local_35 = 0;
  do {
    iVar10 = (int)(char)local_35;
    iVar6 = param_1 + iVar10 * 0x14;
    if (*(int *)(param_1 + 0x6ec + iVar10 * 0x14) != 0) {
      iVar12 = *(int *)(param_1 + 0x18);
      iVar11 = *(int *)(iVar6 + 0x6dc);
      uVar8 = *(uint *)(param_1 + 0x614 + iVar11 * 4);
      if ((iVar12 == 0) || (*(uint *)(iVar12 + 0x80) <= uVar8)) {
        iVar12 = 0;
      }
      else {
        iVar12 = uVar8 * 0x400 + 0x2a0 + *(int *)(iVar12 + 0x7c);
      }
      if (*(float *)(iVar6 + 0x6e4) == 0.0) {
        fVar14 = (float10)FUN_00d369e0(iVar11 + 1,0);
        if ((local_35 == 1) || (local_35 == 3)) {
          fVar14 = fVar14 + (float10)3.0;
        }
        local_30 = (float)fVar14;
        iVar11 = *(int *)(param_1 + 0x18);
        uVar8 = *(uint *)(param_1 + 0x614 + *(int *)(iVar6 + 0x6dc) * 4);
        if ((((iVar11 == 0) || (*(uint *)(iVar11 + 0x80) <= uVar8)) ||
            (piVar9 = *(int **)(uVar8 * 0x400 + 0x3f0 + *(int *)(iVar11 + 0x7c)),
            piVar9 == (int *)0x0)) || (iVar11 = (**(code **)(*piVar9 + 8))(), iVar11 != 8)) {
          fVar2 = 0.0;
        }
        else {
          fVar2 = (float)piVar9[3];
        }
        iVar11 = *(int *)(param_1 + 0x18);
        uVar8 = *(uint *)(param_1 + 0x614 + *(int *)(iVar6 + 0x6dc) * 4);
        if (((iVar11 == 0) || (*(uint *)(iVar11 + 0x80) <= uVar8)) ||
           ((piVar9 = *(int **)(uVar8 * 0x400 + 0x3f0 + *(int *)(iVar11 + 0x7c)),
            piVar9 == (int *)0x0 || (iVar11 = (**(code **)(*piVar9 + 8))(), iVar11 != 8)))) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = (float)piVar9[1];
          local_1c = (float)piVar9[2];
          local_20 = fVar3;
        }
        fVar3 = (fVar2 + fVar2 + local_30) / fVar3;
        if (*(float *)(param_1 + (iVar10 * 5 + 0x1b8) * 4) <= fVar3) {
          *(undefined4 *)(iVar6 + 0x6ec) = 0;
        }
        if (*(float *)(iVar12 + 0xd0) < fVar3) {
          FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x614 + *(int *)(iVar6 + 0x6dc) * 4),fVar3);
        }
      }
      else {
        fVar2 = *(float *)(iVar12 + 0xd0);
        psVar1 = (short *)(iVar6 + 0x6e8);
        *psVar1 = *psVar1 + -1;
        fVar2 = fVar2 + *(float *)(iVar6 + 0x6e4);
        if (*psVar1 == 0) {
          fVar2 = *(float *)(param_1 + (iVar10 * 5 + 0x1b8) * 4);
          *(undefined4 *)(iVar6 + 0x6ec) = 0;
        }
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x614 + iVar11 * 4),fVar2);
      }
    }
    local_35 = local_35 + 1;
  } while (local_35 < 4);
  FUN_00d277c0();
  if (*(int **)(param_1 + 0x60c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60c) + 4))();
  }
  if (*(int *)(param_1 + 0x610) != 0) {
    FUN_009a2a10();
  }
  return;
}

