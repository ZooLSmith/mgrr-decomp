// src/unsorted/unit_00CEFC90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEFC90..00CF04D0, 7 functions

#include "mgrr.h"

// 00CEFC90  FUN_00cefc90  size=57  [run]
void __fastcall FUN_00cefc90(int param_1)

{
  if (((*(uint *)(param_1 + 0xa4) & 0x3c00) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    FUN_00cdeec0(4);
  }
  if (((*(uint *)(param_1 + 0xa4) & 0xc000) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    FUN_00cdeec0(6);
  }
  return;
}

// 00CEFCD0  FUN_00cefcd0  size=394  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00cefcd0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  bVar2 = false;
  if (((uVar1 & 0x400) != 0) && (((byte)DAT_01b7b914 & 0x10) != 0)) {
    bVar2 = true;
  }
  if (((uVar1 & 0x800) != 0) && (((byte)DAT_01b7b914 & 0x20) != 0)) {
    bVar2 = true;
  }
  if (((uVar1 & 0x1000) != 0) && (((byte)DAT_01b7b914 & 0x40) != 0)) {
    bVar2 = true;
  }
  if (((uVar1 & 0x2000) != 0) && ((char)(byte)DAT_01b7b914 < '\0')) {
    bVar2 = true;
  }
  if ((uVar1 & 0x4000) != 0) {
    if (((_DAT_01b7b910 & 0x40000) != 0) && (*(int *)(param_1 + 0xb8) != 0x40000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x40000;
      bVar2 = true;
    }
    if (((_DAT_01b7b910 & 0x80000) != 0) && (*(int *)(param_1 + 0xb8) != 0x80000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x80000;
      bVar2 = true;
    }
    if (((_DAT_01b7b910 & 0x10000) != 0) && (*(int *)(param_1 + 0xb8) != 0x10000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x10000;
      bVar2 = true;
    }
    if (((_DAT_01b7b910 & 0x20000) != 0) && (*(int *)(param_1 + 0xb8) != 0x20000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x20000;
      bVar2 = true;
    }
  }
  if ((uVar1 & 0x8000) != 0) {
    if (((_DAT_01b7b910 & 0x400000) != 0) && (*(int *)(param_1 + 0xb8) != 0x400000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x400000;
      bVar2 = true;
    }
    if (((_DAT_01b7b910 & 0x800000) != 0) && (*(int *)(param_1 + 0xb8) != 0x800000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x800000;
      bVar2 = true;
    }
    if (((_DAT_01b7b910 & 0x100000) != 0) && (*(int *)(param_1 + 0xb8) != 0x100000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x100000;
      bVar2 = true;
    }
    if (((_DAT_01b7b910 & 0x200000) != 0) && (*(int *)(param_1 + 0xb8) != 0x200000)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x200000;
      goto LAB_00cefe3b;
    }
  }
  if (!bVar2) {
    return;
  }
LAB_00cefe3b:
  if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(7), iVar3 != 0)) {
    FUN_00cdeec0(7);
  }
  return;
}

// 00CEFE60  FUN_00cefe60  size=457  [run]
void __thiscall FUN_00cefe60(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if (1 < *(int *)(param_1 + 0xa0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 1;
  }
  if (param_2 < 0x401) {
    if (param_2 != 0x400) {
      if (param_2 < 0x21) {
        if (param_2 == 0x20) goto LAB_00ceffce;
        switch(param_2) {
        case 1:
          goto switchD_00cefec8_caseD_1;
        case 2:
          goto switchD_00cefec8_caseD_2;
        default:
          goto LAB_00cf0025;
        case 4:
switchD_00cefec8_caseD_4:
          FUN_00ce4ce0(uVar1,0xe);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          return;
        case 8:
switchD_00cefec8_caseD_8:
          FUN_00ce4ce0(uVar1,0xd);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          return;
        case 0x10:
switchD_00cefec8_caseD_10:
          FUN_00ce4ce0(uVar1,0x11);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          return;
        }
      }
      if (param_2 < 0x101) {
        if (param_2 == 0x100) goto LAB_00ceffa2;
        if (param_2 == 0x40) goto LAB_00cefff8;
        bVar3 = param_2 == 0x80;
        goto LAB_00cf0012;
      }
      if (param_2 != 0x200) {
        return;
      }
      goto LAB_00cefef8;
    }
switchD_00cefec8_caseD_1:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cded00(uVar1,0xc);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return;
    }
  }
  else if (param_2 < 0x8001) {
    if (param_2 != 0x8000) {
      if (param_2 < 0x2001) {
        if (param_2 == 0x2000) goto switchD_00cefec8_caseD_8;
        if (param_2 != 0x800) {
          if (param_2 != 0x1000) {
            return;
          }
          goto switchD_00cefec8_caseD_4;
        }
switchD_00cefec8_caseD_2:
        FUN_00ce4ce0(uVar1,0xb);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        return;
      }
      if (param_2 != 0x4000) {
        return;
      }
LAB_00ceffa2:
      FUN_00ce4ce0(uVar1,0x13);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return;
    }
LAB_00cefef8:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cded00(uVar1,0x14);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return;
    }
  }
  else {
    if (param_2 < 0x1000001) {
      if (param_2 == 0x1000000) {
LAB_00cefff8:
        FUN_00ce4ce0(uVar1,0xf);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        return;
      }
      if (param_2 == 0x400000) goto switchD_00cefec8_caseD_10;
      if (param_2 != 0x800000) {
        return;
      }
LAB_00ceffce:
      FUN_00ce4ce0(uVar1,0x12);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return;
    }
    bVar3 = param_2 == 0x2000000;
LAB_00cf0012:
    if (!bVar3) {
      return;
    }
    FUN_00ce4ce0(uVar1,0x10);
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_00cf0025:
  return;
}

// 00CF0060  FUN_00cf0060  size=126  [run]
void __fastcall FUN_00cf0060(int param_1)

{
  if ((*(int *)(param_1 + 0x174) == 5) || (*(int *)(param_1 + 0x174) == 6)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(4);
    }
    if (*(int *)(param_1 + 0xcc) != 0) {
      FUN_00cdeec0(4);
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      FUN_00cdeec0(4);
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      FUN_00cdeec0(4);
    }
  }
  if (*(int *)(param_1 + 0x174) == 4) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(6);
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      FUN_00cdeec0(6);
    }
  }
  return;
}

// 00CF00E0  FUN_00cf00e0  size=338  [run]
void __fastcall FUN_00cf00e0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x174) == 5) {
    if ((int)DAT_01b77e78 < 0) {
      uVar2 = DAT_01b7b79c & DAT_01b77e78 & 0x7fffffff;
    }
    else {
      uVar2 = FUN_00dd9400(DAT_01b77e78);
    }
    if (uVar2 != 0) {
      bVar1 = true;
    }
  }
  if (*(int *)(param_1 + 0x174) == 6) {
    if ((int)DAT_01b77e7c < 0) {
      uVar2 = DAT_01b7b79c & DAT_01b77e7c & 0x7fffffff;
    }
    else {
      uVar2 = FUN_00dd9400(DAT_01b77e7c);
    }
    if (uVar2 != 0) {
      bVar1 = true;
    }
  }
  if (*(int *)(param_1 + 0x174) == 4) {
    if ((int)DAT_01b77e60 < 0) {
      uVar2 = DAT_01b7b79c & DAT_01b77e60 & 0x7fffffff;
    }
    else {
      uVar2 = FUN_00dd9400(DAT_01b77e60);
    }
    if (uVar2 != 0) {
      bVar1 = true;
    }
    if ((int)DAT_01b77e64 < 0) {
      uVar2 = DAT_01b7b79c & DAT_01b77e64 & 0x7fffffff;
    }
    else {
      uVar2 = FUN_00dd9400(DAT_01b77e64);
    }
    if (uVar2 != 0) {
      bVar1 = true;
    }
    if ((int)DAT_01b77e68 < 0) {
      uVar2 = DAT_01b7b79c & DAT_01b77e68 & 0x7fffffff;
    }
    else {
      uVar2 = FUN_00dd9400(DAT_01b77e68);
    }
    if (uVar2 != 0) {
      bVar1 = true;
    }
    if ((int)DAT_01b77e6c < 0) {
      uVar2 = DAT_01b7b79c & DAT_01b77e6c & 0x7fffffff;
    }
    else {
      uVar2 = FUN_00dd9400(DAT_01b77e6c);
    }
    if (uVar2 != 0) goto LAB_00cf0212;
  }
  if (!bVar1) {
    return;
  }
LAB_00cf0212:
  if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(7), iVar3 != 0)) {
    FUN_00cdeec0(7);
  }
  return;
}

// 00CF0240  FUN_00cf0240  size=602  [run]
void __thiscall FUN_00cf0240(int param_1,undefined4 param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 1:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    if (-1 < DAT_01b77e80) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),0xb);
      return;
    }
    iVar1 = FUN_00cbd150(DAT_01b77e80);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),iVar1 + 0x10);
    return;
  case 2:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),0xb);
    if (-1 < DAT_01b77e84) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),0xc);
      return;
    }
    iVar1 = FUN_00cbd150(DAT_01b77e84);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),iVar1 + 0xd);
    return;
  case 3:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    if (-1 < DAT_01b77eb0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),10);
      return;
    }
    iVar1 = FUN_00cbd150(DAT_01b77eb0);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),iVar1 + 0x14);
    return;
  case 4:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),0xb);
    return;
  case 5:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    iVar1 = DAT_01b77e78;
    break;
  case 6:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    iVar1 = DAT_01b77e7c;
    break;
  case 7:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    iVar1 = DAT_01b77e74;
    break;
  case 8:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    iVar1 = DAT_01b77e88;
    break;
  case 9:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),0xb);
    if (-1 < DAT_01b77e88) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),0xc);
      return;
    }
    iVar1 = FUN_00cbd150(DAT_01b77e88);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),iVar1 + 0xd);
    return;
  case 10:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    if (-1 < DAT_01b77e78) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),10);
      return;
    }
    iVar1 = FUN_00cbd150(DAT_01b77e78);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),iVar1 + 0x14);
    return;
  case 0xb:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
    if (DAT_01b77e7c < 0) {
      iVar1 = FUN_00cbd150(DAT_01b77e7c);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),iVar1 + 0x14);
      return;
    }
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),10);
  default:
    return;
  }
  if (-1 < iVar1) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),10);
    return;
  }
  iVar1 = FUN_00cbd150(iVar1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),iVar1 + 0x14);
  return;
}

// 00CF04D0  FUN_00cf04d0  size=1479  [run]
void __fastcall FUN_00cf04d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (DAT_01b77e60 < 0) {
    iVar3 = FUN_00caa190();
  }
  else {
    iVar3 = FUN_00cc70f0(DAT_01b77e60);
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x108) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x108) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x10c) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x10c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x110) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x110) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x114) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x114) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x118) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x118) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  uVar2 = DAT_01b77e64;
  uVar5 = DAT_01b77e64 & 0x80000000;
  if (uVar5 == 0) {
    iVar3 = FUN_00cc70f0(DAT_01b77e64);
  }
  else {
    iVar3 = FUN_00caa190();
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x130) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x134) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x138) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x13c) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x13c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x140) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  if (uVar5 == 0) {
    iVar3 = FUN_00ca9f50(uVar2);
  }
  else {
    iVar3 = FUN_00caa1d0();
  }
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar6 = 0xe;
LAB_00cf078b:
      FUN_00cdeec0(uVar6);
    }
  }
  else if (*(int *)(param_1 + 0xb0) != 0) {
    uVar6 = 0xf;
    goto LAB_00cf078b;
  }
  uVar2 = DAT_01b77e68;
  uVar5 = DAT_01b77e68 & 0x80000000;
  if (uVar5 == 0) {
    iVar3 = FUN_00cc70f0(DAT_01b77e68);
  }
  else {
    iVar3 = FUN_00caa190();
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x11c) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x11c) * 0x400),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x120) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x120) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x124) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x124) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x128) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x128) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 300) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 300) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  if (uVar5 == 0) {
    iVar3 = FUN_00ca9f50(uVar2);
  }
  else {
    iVar3 = FUN_00caa1d0();
  }
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0xb0) == 0) goto LAB_00cf090c;
    uVar6 = 10;
  }
  else {
    if (*(int *)(param_1 + 0xb0) == 0) goto LAB_00cf090c;
    uVar6 = 0xb;
  }
  FUN_00cdeec0(uVar6);
LAB_00cf090c:
  uVar2 = DAT_01b77e6c;
  uVar5 = DAT_01b77e6c & 0x80000000;
  if (uVar5 == 0) {
    iVar3 = FUN_00cc70f0(DAT_01b77e6c);
  }
  else {
    iVar3 = FUN_00caa190();
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x144) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x144) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x148) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x148) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x14c) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x14c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x150) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x150) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x154) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x154) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar3;
    }
  }
  if (uVar5 == 0) {
    iVar3 = FUN_00ca9f50(uVar2);
  }
  else {
    iVar3 = FUN_00caa1d0();
  }
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0xb0) != 0) {
      FUN_00cdeec0(0xc);
      return;
    }
  }
  else if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00cdeec0(0xd);
  }
  return;
}

