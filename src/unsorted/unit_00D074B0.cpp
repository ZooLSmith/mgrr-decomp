// src/unsorted/unit_00D074B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D074B0..00D07A60, 4 functions

#include "types.h"

// 00D074B0  FUN_00d074b0  size=640  [run]
void __thiscall FUN_00d074b0(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *local_30 [7];
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  
  local_30[6] = "RESULT_SEL_21";
  local_14 = "RESULT_SEL_16";
  local_10 = "RESULT_SEL_17";
  local_c = "RESULT_SEL_18";
  local_8 = "RESULT_SEL_19";
  local_4 = "RESULT_SEL_20";
  local_30[0] = (char *)0x3;
  local_30[1] = (char *)0x6;
  local_30[2] = (char *)0x5;
  local_30[3] = (char *)0x4;
  local_30[4] = (char *)0x3;
  local_30[5] = (char *)0x3;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(local_30[param_2]);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  pcVar1 = local_30[param_2 + 6];
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1d8) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x1d8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1dc) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x1dc) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 500) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 500) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1f8) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x1f8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  return;
}

// 00D07730  FUN_00d07730  size=441  [run]
void __thiscall FUN_00d07730(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Format;
  char local_20 [32];
  
  switch(param_2) {
  case 0:
    _Format = "RESULT_AREA_00";
    break;
  case 1:
    _Format = "RESULT_AREA_01";
    break;
  case 2:
    _Format = "RESULT_AREA_02";
    break;
  case 3:
    _Format = "RESULT_AREA_03";
    break;
  case 4:
    _Format = "RESULT_AREA_04";
    break;
  case 5:
    _Format = "RESULT_AREA_05";
    break;
  case 6:
    _Format = "RESULT_AREA_06";
    break;
  case 7:
    _Format = "RESULT_AREA_07";
    break;
  case 8:
    _Format = "RESULT_AREA_08";
    break;
  case 9:
    _Format = "RESULT_AREA_09";
    break;
  case 10:
    _Format = "RESULT_BOSS_01";
    break;
  case 0xb:
    _Format = "RESULT_BOSS_02";
    break;
  case 0xc:
    _Format = "RESULT_BOSS_03";
    break;
  case 0xd:
    _Format = "RESULT_BOSS_04";
    break;
  case 0xe:
    _Format = "RESULT_BOSS_08";
    break;
  case 0xf:
    _Format = "RESULT_BOSS_05";
    break;
  case 0x10:
    _Format = "RESULT_BOSS_06";
    break;
  case 0x11:
    _Format = "RESULT_BOSS_07";
    break;
  default:
    goto switchD_00d07743_default;
  }
  _sprintf_s(local_20,0x20,_Format);
switchD_00d07743_default:
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (*(uint *)(param_1 + 0x228) < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x228) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    uVar3 = FUN_00e03ea0(local_20);
    piVar1[0x2a] = -1;
    piVar1[0x2b] = 0;
    if (((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) &&
       (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
      piVar1[0x2a] = iVar2;
      piVar1[0x2b] = 0;
      piVar1[0x2e] = 0;
    }
  }
  if (*(char *)(param_1 + 0x246) != '\0') {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x228),1,3);
  }
  return;
}

// 00D07940  FUN_00d07940  size=273  [run]
float10 __thiscall FUN_00d07940(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float local_54 [18];
  float local_c;
  undefined4 local_8;
  
  fVar4 = (float10)0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[0x11] = (float)fVar4;
  local_54[4] = 0.0;
  local_c = (float)fVar4;
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
  local_54[0x10] = 0.0;
  iVar2 = *(int *)(param_1 + 0x18 + (param_2 + 1) * 0x1c);
  uVar1 = *(uint *)(param_1 + 0x238 + param_3 * 4);
  local_8 = 0xffffffff;
  if (iVar2 == 0) goto LAB_00d07a21;
  if ((uVar1 < *(uint *)(iVar2 + 0x80)) &&
     (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar3 + 8))();
    if (iVar2 != 4) goto LAB_00d079f6;
  }
  else {
LAB_00d079f6:
    piVar3 = (int *)0x0;
  }
  iVar2 = FUN_00ce5150(piVar3,param_4,local_54);
  if (iVar2 == 0) {
    fVar4 = (float10)(float)fVar4;
  }
  else {
    fVar4 = (float10)local_54[param_5] + (float10)local_54[0x11];
  }
LAB_00d07a21:
  iVar2 = *(int *)(param_1 + (param_2 + 1) * 0x1c + 0x18);
  uVar1 = *(uint *)(param_1 + 0x238 + param_3 * 4);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    fVar4 = fVar4 * (float10)*(float *)(iVar2 + 0x10);
  }
  return fVar4;
}

// 00D07A60  FUN_00d07a60  size=263  [run]
int __thiscall FUN_00d07a60(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
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
  
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  local_c = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = *(uint *)(param_1 + 0x118 + param_2 * 4);
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 4)) {
      piVar3 = (int *)0x0;
    }
    FUN_00ce5150(piVar3,param_3,&local_54);
  }
  uVar1 = *(uint *)(param_1 + 0x118 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}

