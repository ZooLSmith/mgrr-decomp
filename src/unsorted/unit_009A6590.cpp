// src/unsorted/unit_009A6590.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A6590..009A6EE0, 3 functions

#include "types.h"

// 009A6590  FUN_009a6590  size=1537  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009a6590(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  byte local_25;
  char local_10 [16];
  
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  iVar5 = FUN_009c51b0(7,0xffffffff);
  iVar6 = FUN_009c51b0(7,0xffffffff);
  if (((iVar6 != 0) && (iVar6 = FUN_009c51b0(8,0xffffffff), iVar6 != 0)) &&
     (iVar6 = FUN_009c51b0(9,0xffffffff), iVar6 != 0)) {
    bVar4 = true;
  }
  bVar10 = DAT_01b39208 != 0;
  if (bVar10) {
    bVar4 = true;
  }
  *(undefined1 *)(param_1 + 0x107) = 0;
  iVar6 = FUN_009c45b0();
  bVar11 = iVar6 != 0;
  iVar6 = FUN_009c45b0();
  if ((iVar6 == 0) &&
     (((iVar6 = FUN_009c51b0(7,0xffffffff), iVar6 != 0 ||
       (iVar6 = FUN_009c51b0(8,0xffffffff), iVar6 != 0)) ||
      (iVar6 = FUN_009c51b0(9,0xffffffff), iVar6 != 0)))) {
    bVar11 = true;
    *(undefined1 *)(param_1 + 0x107) = 1;
    iVar6 = FUN_009c5530(&DAT_01b6efe0);
    if (iVar6 == 8) {
      *(undefined4 *)(param_1 + 0xf4) = 1;
    }
    else {
      iVar6 = FUN_009c5530(&DAT_01b6efe0);
      *(uint *)(param_1 + 0xf4) = (-(uint)(iVar6 != 9) & 0xfffffffe) + 2;
    }
  }
  iVar6 = FUN_009c45f0();
  if (iVar6 == 8) {
    iVar6 = FUN_009c73f0(6);
    if (iVar6 != 0) goto LAB_009a66ff;
    puVar12 = &DAT_01657860;
  }
  else {
    if ((iVar6 != 9) || (iVar6 = FUN_009c73f0(7), iVar6 != 0)) goto LAB_009a66ff;
    puVar12 = &DAT_01657820;
  }
  FUN_00dd5650(puVar12);
  bVar11 = false;
LAB_009a66ff:
  if (((((DAT_01b6f434 != 0) || (iVar6 = FUN_009c73f0(5), iVar6 != 0)) || (DAT_01b6f4f4 != 0)) ||
      ((DAT_01b6f5b4 != 0 || (DAT_01b6f674 != 0)))) ||
     ((DAT_01b6f734 != 0 || (iVar6 = FUN_009c45b0(), iVar6 != 0)))) {
    bVar2 = true;
  }
  if ((((DAT_01b6f3b0 != 0) || (DAT_01b6f3b8 != 0)) ||
      ((DAT_01b6f3b4 != 0 || (((DAT_01b73818 != 0 || (_DAT_01b7381c != 0)) || (DAT_01b73830 != 0))))
      )) || ((_DAT_01b73834 != 0 || (DAT_01b6f3bc != 0)))) {
    bVar3 = true;
  }
  *(undefined1 *)(param_1 + 0xfb) = 9;
  if (!bVar11) {
    *(undefined1 *)(param_1 + 0xfb) = 8;
  }
  if (!bVar2) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  if (!bVar3) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  if (!bVar4) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  if (!bVar10 && iVar5 == 0) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  cVar1 = *(char *)(param_1 + 0xfb);
  bVar7 = -cVar1 + 9;
  local_25 = 0;
  uVar9 = (uint)bVar7;
  do {
    iVar6 = (int)(char)local_25;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),1);
    if (iVar6 < (int)uVar9) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),0);
    }
    local_25 = local_25 + 1;
    *(undefined4 *)(param_1 + 0xa0 + iVar6 * 4) = 0x13;
  } while (local_25 < 9);
  if (bVar11) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_03");
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 1;
    bVar7 = -cVar1 + 10;
  }
  _strcpy_s(local_10,0x10,"TITEL_SEL_08");
  uVar9 = (uint)bVar7;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  bVar8 = bVar7 + 1;
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(&DAT_016555f4 + uVar9 * 4);
  if (bVar2) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_07");
    uVar9 = (uint)bVar8;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 2;
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(&DAT_016555f4 + uVar9 * 4);
    bVar8 = bVar7 + 2;
  }
  if (bVar3) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_06");
    uVar9 = (uint)bVar8;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 3;
    bVar8 = bVar8 + 1;
  }
  _strcpy_s(local_10,0x10,"TITEL_SEL_05");
  uVar9 = (uint)bVar8;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,0,
               0xffffffff);
  bVar7 = bVar8 + 1;
  *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 4;
  if (bVar4) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_22");
    uVar9 = (uint)bVar7;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 0xf;
    bVar7 = bVar8 + 2;
  }
  if (bVar10 || iVar5 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_23");
    uVar9 = (uint)bVar7;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 0x10;
    bVar7 = bVar7 + 1;
  }
  _strcpy_s(local_10,0x10,"TITEL_SEL_25");
  uVar9 = (uint)bVar7;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar9 * 4) * 4),local_10,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0xa0 + uVar9 * 4) = 0x12;
  FUN_009c73d0();
  return;
}

// 009A6BA0  FUN_009a6ba0  size=827  [run]
void __fastcall FUN_009a6ba0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte local_21;
  char local_10 [16];
  
  iVar2 = FUN_009c4fc0();
  iVar3 = FUN_009c5010();
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  iVar4 = FUN_009c73f0(6);
  iVar5 = FUN_009c73f0(7);
  *(undefined1 *)(param_1 + 0xfb) = 5;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xfb) = 4;
  }
  if (iVar3 == 0) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  if (iVar4 == 0) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  if (iVar5 == 0) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  cVar1 = *(char *)(param_1 + 0xfb);
  bVar6 = -cVar1 + 9;
  local_21 = 0;
  uVar8 = (uint)bVar6;
  do {
    iVar9 = (int)(char)local_21;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + iVar9 * 4) * 4),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + iVar9 * 4) * 4),1);
    if (iVar9 < (int)uVar8) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + iVar9 * 4) * 4),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + iVar9 * 4) * 4),0);
    }
    local_21 = local_21 + 1;
    *(undefined4 *)(param_1 + 0xa0 + iVar9 * 4) = 0x13;
  } while (local_21 < 9);
  if (iVar2 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_04");
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar8 * 4) = 5;
    bVar6 = -cVar1 + 10;
  }
  _strcpy_s(local_10,0x10,"TITEL_SEL_02");
  uVar8 = (uint)bVar6;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,0,
               0xffffffff);
  bVar7 = bVar6 + 1;
  *(undefined4 *)(param_1 + 0xa0 + uVar8 * 4) = 6;
  if (iVar4 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_11");
    uVar8 = (uint)bVar7;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(&DAT_016555f4 + uVar8 * 4);
    *(undefined4 *)(param_1 + 0xa0 + uVar8 * 4) = 8;
    bVar7 = bVar6 + 2;
  }
  if (iVar5 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_12");
    uVar8 = (uint)bVar7;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(&DAT_016555f4 + uVar8 * 4);
    *(undefined4 *)(param_1 + 0xa0 + uVar8 * 4) = 9;
    bVar7 = bVar7 + 1;
  }
  if (iVar3 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_09");
    uVar8 = (uint)bVar7;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar8 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar8 * 4) = 7;
  }
  return;
}

// 009A6EE0  FUN_009a6ee0  size=714  [run]
void __fastcall FUN_009a6ee0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte local_19;
  char local_10 [16];
  
  iVar2 = FUN_009c7d30();
  iVar3 = FUN_009c7da0();
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xfb) = 5;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xfb) = 4;
  }
  if (iVar3 == 0) {
    *(char *)(param_1 + 0xfb) = *(char *)(param_1 + 0xfb) + -1;
  }
  cVar1 = -*(char *)(param_1 + 0xfb);
  local_19 = 0;
  uVar5 = (uint)(byte)(cVar1 + 9);
  do {
    iVar6 = (int)(char)local_19;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),1);
    if (iVar6 < (int)uVar5) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + iVar6 * 4) * 4),0);
    }
    local_19 = local_19 + 1;
    *(undefined4 *)(param_1 + 0xa0 + iVar6 * 4) = 0x13;
  } while (local_19 < 9);
  *(undefined1 *)(param_1 + 0x104) = 1;
  _strcpy_s(local_10,0x10,"TITEL_SEL_13");
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0xa0 + uVar5 * 4) = 10;
  _strcpy_s(local_10,0x10,"TITEL_SEL_14");
  uVar5 = (uint)(byte)(cVar1 + 10);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0xa0 + uVar5 * 4) = 0xb;
  _strcpy_s(local_10,0x10,"TITEL_SEL_15");
  uVar5 = (uint)(byte)(cVar1 + 0xb);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,0,
               0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,0,
               0xffffffff);
  *(undefined4 *)(param_1 + 0xa0 + uVar5 * 4) = 0xc;
  bVar4 = cVar1 + 0xc;
  if (iVar2 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_16");
    uVar5 = (uint)bVar4;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar5 * 4) = 0xd;
    bVar4 = cVar1 + 0xd;
  }
  if (iVar3 != 0) {
    _strcpy_s(local_10,0x10,"TITEL_SEL_17");
    uVar5 = (uint)bVar4;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,
                 0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30 + *(int *)(&DAT_016555f4 + uVar5 * 4) * 4),local_10,
                 0,0xffffffff);
    *(undefined4 *)(param_1 + 0xa0 + uVar5 * 4) = 0xe;
  }
  return;
}

