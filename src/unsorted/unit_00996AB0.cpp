// src/unsorted/unit_00996AB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00996AB0..009986B0, 15 functions

#include "mgrr.h"

// 00996AB0  FUN_00996ab0  size=308  [run]
void __fastcall FUN_00996ab0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4cc));
  if (iVar3 != 0) {
    fVar2 = *(float *)(iVar3 + 0xfc) - 0.03;
    *(float *)(iVar3 + 0xfc) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(iVar3 + 0xfc) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4cc),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x514),0);
      *(undefined4 *)(param_1 + 0x544) = 4;
    }
    uVar1 = *(undefined4 *)(iVar3 + 0xfc);
    iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d4));
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
    iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d8));
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
    iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x500));
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
    iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x508));
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
    iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x510));
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xfc) = uVar1;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar3 + 0x74) = uVar1;
    *(undefined4 *)(iVar3 + 0x78) = 1;
    if ((*(char *)(param_1 + 0x53d) != '\0') && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_00cb2740(uVar1);
      return;
    }
  }
  return;
}

// 00996BF0  FUN_00996bf0  size=351  [run]
void __thiscall FUN_00996bf0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_2 != 2) goto switchD_00996c0b_default;
  switch(param_3) {
  case 0:
    pcVar2 = "OPTION_MSG_17";
    goto LAB_00996d32;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_29";
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "";
    break;
  case 3:
    pcVar2 = "OPTION_MSG_03";
    goto LAB_00996d32;
  case 4:
    if (DAT_01dc1418 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4d8);
      pcVar2 = "OPTION_MSG_15";
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x4d8);
      pcVar2 = "OPTION_MSG_33";
    }
    break;
  case 5:
    if (DAT_01dc1418 != 0) {
      pcVar2 = "OPTION_MSG_34";
      goto LAB_00996d32;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_16";
    break;
  case 6:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_13";
    break;
  case 7:
    pcVar2 = "OPTION_MSG_14";
    goto LAB_00996d32;
  case 8:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_04";
    break;
  case 9:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_05";
    break;
  case 10:
    pcVar2 = "OPTION_MSG_06";
    goto LAB_00996d32;
  case 0xb:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_08";
    break;
  case 0xc:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    pcVar2 = "OPTION_MSG_09";
    break;
  case 0xd:
    pcVar2 = "OPTION_MSG_10";
LAB_00996d32:
    uVar1 = *(undefined4 *)(param_1 + 0x4d8);
    break;
  default:
    goto switchD_00996c0b_default;
  }
  FUN_00cf9770(uVar1,pcVar2,0,0xffffffff);
switchD_00996c0b_default:
  *(uint *)(param_1 + 0x588) = (uint)DAT_01dc1418;
  return;
}

// 00996D90  FUN_00996d90  size=102  [run]
void __fastcall FUN_00996d90(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 local_c;
  
  local_c = 0.0;
  uVar2 = 0;
  do {
    FUN_00d131e0(0x14,uVar2,0,local_c + *(float *)(param_1 + 0x55c));
    if ((uVar2 == 7) || (uVar2 == 10)) {
      fVar1 = 50.0;
    }
    else {
      fVar1 = 44.0;
    }
    local_c = fVar1 + local_c;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe);
  return;
}

// 00996E00  FUN_00996e00  size=70  [run]
void FUN_00996e00(void)

{
  undefined4 local_c;
  
  local_c = 0;
  do {
    FUN_00d131e0(0x14,local_c,0,(float)(int)local_c * 44.0);
    local_c = local_c + 1;
  } while (local_c < 0xe);
  return;
}

// 00996E70  FUN_00996e70  size=351  [run]
void __fastcall FUN_00996e70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0xf0) = DAT_01b6efc0;
  *(undefined4 *)(param_1 + 0xf4) = DAT_01b6efb0;
  puVar3 = (undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = DAT_01b6efc8;
  *(undefined4 *)(param_1 + 0xfc) = 1;
  *(undefined4 *)(param_1 + 0x100) = DAT_01b6efcc;
  *(undefined4 *)(param_1 + 0x104) = DAT_01b6efb4;
  *(undefined4 *)(param_1 + 0x108) = DAT_01b6efb8;
  *(undefined4 *)(param_1 + 0x10c) = DAT_01b6efbc;
  *(undefined4 *)(param_1 + 0x110) = DAT_01b6efd0;
  iVar1 = DAT_01b6efd4;
  iVar2 = *(int *)(param_1 + 0x100);
  *(int *)(param_1 + 0x114) = DAT_01b6efd4;
  if (((((iVar2 == 0) && (*(int *)(param_1 + 0x104) == 1)) && (*(int *)(param_1 + 0x108) == 1)) &&
      ((*(int *)(param_1 + 0x10c) == 1 && (*(int *)(param_1 + 0x110) == 1)))) && (iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    puVar4 = (undefined4 *)(param_1 + 0x118);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  if (((iVar2 == 1) && (*(int *)(param_1 + 0x104) == 2)) &&
     ((*(int *)(param_1 + 0x108) == 0 &&
      (((*(int *)(param_1 + 0x10c) == 1 && (*(int *)(param_1 + 0x110) == 1)) && (iVar1 == 1)))))) {
    *(undefined4 *)(param_1 + 0xfc) = 1;
    puVar4 = (undefined4 *)(param_1 + 0x118);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  if (((iVar2 == 3) && (*(int *)(param_1 + 0x104) == 4)) &&
     ((*(int *)(param_1 + 0x108) == 0 &&
      (((*(int *)(param_1 + 0x10c) == 2 && (*(int *)(param_1 + 0x110) == 2)) && (iVar1 == 2)))))) {
    *(undefined4 *)(param_1 + 0xfc) = 2;
    puVar4 = (undefined4 *)(param_1 + 0x118);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0xfc) = 3;
  puVar4 = (undefined4 *)(param_1 + 0x118);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

// 00996FD0  FUN_00996fd0  size=640  [run]
void __thiscall FUN_00996fd0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
    uVar3 = *(undefined4 *)(param_1 + 0xf8);
    uVar4 = *(undefined4 *)(param_1 + 0x100);
    uVar5 = *(undefined4 *)(param_1 + 0x104);
    iVar6 = *(int *)(param_1 + 0x108);
    uVar7 = *(undefined4 *)(param_1 + 0x10c);
    uVar8 = *(undefined4 *)(param_1 + 0x110);
    uVar9 = *(undefined4 *)(param_1 + 0x114);
    goto LAB_009971da;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x118);
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  uVar3 = *(undefined4 *)(param_1 + 0x120);
  uVar4 = *(undefined4 *)(param_1 + 0x128);
  uVar5 = *(undefined4 *)(param_1 + 300);
  iVar6 = *(int *)(param_1 + 0x130);
  uVar7 = *(undefined4 *)(param_1 + 0x134);
  uVar8 = *(undefined4 *)(param_1 + 0x138);
  uVar9 = *(undefined4 *)(param_1 + 0x13c);
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_1 + 0x11c)) {
    switch(*(int *)(param_1 + 0x11c)) {
    case 0:
      DAT_01bea088 = DAT_01bea088 | 0x8000;
      break;
    case 1:
      DAT_01bea088 = DAT_01bea088 | 0x4000;
      break;
    case 2:
      DAT_01bea088 = DAT_01bea088 | 0x2000;
      break;
    case 3:
      DAT_01bea088 = DAT_01bea088 | 0x1000;
      break;
    case 4:
      DAT_01bea088 = DAT_01bea088 | 0x800;
      break;
    case 5:
      DAT_01bea088 = DAT_01bea088 | 0x400;
    }
  }
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x120)) {
    DAT_01bea084 = DAT_01bea084 | 2;
  }
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 0x128)) {
    switch(*(int *)(param_1 + 0x128)) {
    case 0:
      DAT_01bea084 = DAT_01bea084 | 0x20;
      break;
    case 1:
      DAT_01bea084 = DAT_01bea084 | 0x10;
      break;
    case 2:
      DAT_01bea084 = DAT_01bea084 | 8;
      break;
    case 3:
      DAT_01bea084 = DAT_01bea084 | 4;
    }
  }
  if (*(int *)(param_1 + 0x104) != *(int *)(param_1 + 300)) {
    switch(*(int *)(param_1 + 300)) {
    case 0:
      uVar11 = 1;
      break;
    case 1:
      uVar11 = 2;
      break;
    case 2:
      uVar11 = 4;
      break;
    case 3:
      uVar11 = 8;
      break;
    case 4:
      uVar11 = 0x10;
      break;
    default:
      goto switchD_00997167_default;
    }
    FUN_00a28a50(uVar11);
  }
switchD_00997167_default:
  iVar10 = *(int *)(param_1 + 0x134);
  if (*(int *)(param_1 + 0x10c) != iVar10) {
    if (iVar10 == 1) {
      DAT_01bea084 = DAT_01bea084 & 0xffffffbf | 0x80;
    }
    else if (iVar10 == 2) {
      DAT_01bea084 = DAT_01bea084 & 0xffffff7f | 0x40;
    }
    else {
      DAT_01bea084 = DAT_01bea084 & 0xffffff3f;
    }
  }
LAB_009971da:
  if (iVar6 == 0) {
    DAT_01bea084 = DAT_01bea084 | 0x40000000;
  }
  else if (iVar6 == 1) {
    DAT_01bea084 = DAT_01bea084 & 0xbfffffff;
  }
  DAT_01b6efd4 = uVar9;
  DAT_01b6efc0 = uVar1;
  DAT_01b6efb0 = uVar2;
  DAT_01b6efc8 = uVar3;
  DAT_01b6efb8 = iVar6;
  DAT_01b6efd0 = uVar8;
  DAT_01b6efcc = uVar4;
  DAT_01b6efb4 = uVar5;
  DAT_01b6efbc = uVar7;
  return;
}

// 00997290  FUN_00997290  size=424  [run]
void __thiscall FUN_00997290(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x140 + param_2 * 4) == param_3) && (param_4 == 0)) {
    return;
  }
  bVar2 = param_3 == 0;
  switch(param_2) {
  case 0:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0xc4);
    break;
  case 1:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    break;
  case 2:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x48),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    break;
  case 3:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x58),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x5c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    break;
  case 4:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x68),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x6c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    break;
  case 5:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x78),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x7c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    break;
  case 6:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x88),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x8c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    break;
  case 7:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x98),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x9c),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    break;
  case 8:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xa8),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xac),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
    break;
  case 9:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb8),bVar2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xbc),bVar2);
    uVar1 = *(undefined4 *)(param_1 + 0xc0);
    break;
  default:
    goto switchD_009972c4_default;
  }
  FUN_00ce4ce0(uVar1,bVar2);
switchD_009972c4_default:
  *(int *)(param_1 + 0x140 + param_2 * 4) = param_3;
  return;
}

// 009975B0  FUN_009975b0  size=1400  [run]
void __thiscall FUN_009975b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  char local_75;
  undefined4 local_70 [5];
  int local_5c [7];
  int local_40;
  int local_3c;
  
  iVar4 = param_3;
  switch(param_2) {
  case 0:
    if (param_3 < 1) {
      param_3 = 10;
    }
    else if (10 < param_3) {
      param_3 = 1;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x28),(&PTR_s_OPTION_SEL_24_0188eac4)[param_3],0,
                 0xffffffff);
    DAT_01b6efc0 = param_3;
    if (*(int *)(param_1 + 0xf0) != param_3) {
      FUN_00e5e050("core_se_sys_cursor",0);
    }
    local_75 = '\0';
    do {
      iVar4 = *(int *)(param_1 + 0xf0);
      if (iVar4 < param_3) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 200 + iVar4 * 4),0xe);
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
      }
      else if (param_3 < iVar4) {
        *(int *)(param_1 + 0xf0) = iVar4 + -1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 200 + (iVar4 + -1) * 4),0xd);
      }
      local_75 = local_75 + '\x01';
    } while (local_75 < '\n');
    goto switchD_009975ce_default;
  case 1:
    puVar5 = &DAT_01f20668;
    puVar6 = local_70;
    for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(param_1 + 0xf4) < param_3) {
      if (5 < param_3) {
        param_3 = 0;
      }
      iVar4 = param_3;
      if (local_5c[-param_3] == 0) {
        iVar3 = param_3 + 1;
        iVar2 = 0;
        do {
          iVar4 = iVar3;
          if (local_5c[-iVar3] != 0) break;
          iVar3 = iVar3 + 1;
          if (5 < iVar3) {
            iVar3 = 0;
          }
          iVar2 = iVar2 + 1;
          iVar4 = param_3;
        } while (iVar2 < 6);
      }
    }
    else if (param_3 < *(int *)(param_1 + 0xf4)) {
      if (param_3 < 0) {
        param_3 = 5;
      }
      iVar4 = param_3;
      if (local_5c[-param_3] == 0) {
        iVar3 = param_3 + -1;
        iVar2 = 0;
        do {
          iVar4 = iVar3;
          if (local_5c[-iVar3] != 0) break;
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) {
            iVar3 = 5;
          }
          iVar2 = iVar2 + 1;
          iVar4 = param_3;
        } while (iVar2 < 6);
      }
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x3c),(&PTR_s_OPTION_SEL_40_0188eb60)[iVar4],0,0xffffffff
                );
    param_3 = iVar4;
    if (*(int *)(param_1 + 0xf4) == iVar4) goto switchD_009975ce_default;
    switch(iVar4) {
    case 0:
      DAT_01bea088 = DAT_01bea088 | 0x8000;
      break;
    case 1:
      DAT_01bea088 = DAT_01bea088 | 0x4000;
      break;
    case 2:
      DAT_01bea088 = DAT_01bea088 | 0x2000;
      break;
    case 3:
      DAT_01bea088 = DAT_01bea088 | 0x1000;
      break;
    case 4:
      DAT_01bea088 = DAT_01bea088 | 0x800;
      break;
    case 5:
      DAT_01bea088 = DAT_01bea088 | 0x400;
    }
    bVar7 = *(int *)(param_1 + 0xf4) == iVar4;
    DAT_01b6efb0 = iVar4;
    break;
  case 2:
    if (param_3 < 0) {
      param_3 = 1;
    }
    else if (1 < param_3) {
      param_3 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4c),(&PTR_s_OPTION_SEL_41_0188eb78)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0xf8) != param_3) {
      DAT_01bea084 = DAT_01bea084 | 2;
      FUN_00e5e050("core_se_sys_cursor",0);
    }
    goto switchD_009975ce_default;
  case 3:
    iVar3 = *(int *)(param_1 + 0x198);
    if (param_3 < 0) {
      param_3 = iVar3;
    }
    if (iVar3 < param_3) {
      param_3 = 0;
    }
    iVar4 = param_3;
    if (iVar3 == 3) {
      iVar4 = iVar3;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x5c),(&PTR_s_OPTION_SEL_43_0188eb80)[iVar4],0,0xffffffff
                );
    bVar7 = *(int *)(param_1 + 0xfc) == iVar4;
    break;
  case 4:
    puVar5 = &DAT_01f20668;
    puVar6 = local_70;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = 3;
    if (local_3c == 0) {
      iVar4 = 0;
    }
    else if (local_3c == 2) {
      iVar4 = 1;
    }
    else if (local_3c == 4) {
      iVar4 = 2;
    }
    if ((-1 < param_3) && (bVar7 = iVar4 < param_3, iVar4 = param_3, bVar7)) {
      iVar4 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x6c),(&PTR_s_OPTION_SEL_21_0188eb90)[iVar4],0,0xffffffff
                );
    param_3 = iVar4;
    if (*(int *)(param_1 + 0x100) == iVar4) goto switchD_009975ce_default;
    switch(iVar4) {
    case 0:
      DAT_01bea084 = DAT_01bea084 | 0x20;
      bVar7 = *(int *)(param_1 + 0x100) == iVar4;
      break;
    case 1:
      DAT_01bea084 = DAT_01bea084 | 0x10;
      bVar7 = *(int *)(param_1 + 0x100) == iVar4;
      break;
    case 2:
      DAT_01bea084 = DAT_01bea084 | 8;
      bVar7 = *(int *)(param_1 + 0x100) == iVar4;
      break;
    case 3:
      DAT_01bea084 = DAT_01bea084 | 4;
    default:
      bVar7 = *(int *)(param_1 + 0x100) == iVar4;
    }
    break;
  case 5:
    iVar4 = 4;
    uVar1 = FUN_00f99170();
    switch(uVar1) {
    case 1:
      iVar4 = 0;
      break;
    case 2:
      iVar4 = 1;
      break;
    case 4:
    case 6:
      iVar4 = 2;
      break;
    case 8:
    case 10:
    case 0xc:
      iVar4 = 3;
    }
    if ((-1 < param_3) && (bVar7 = iVar4 < param_3, iVar4 = param_3, bVar7)) {
      iVar4 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),(&PTR_s_OPTION_SEL_21_0188eba0)[iVar4],0,0xffffffff
                );
    param_3 = iVar4;
    if (*(int *)(param_1 + 0x104) == iVar4) goto switchD_009975ce_default;
    switch(iVar4) {
    case 0:
      uVar1 = 1;
      break;
    case 1:
      uVar1 = 2;
      break;
    case 2:
      uVar1 = 4;
      break;
    case 3:
      uVar1 = 8;
      break;
    case 4:
      uVar1 = 0x10;
      break;
    default:
      goto switchD_00997989_default;
    }
    FUN_00a28a50(uVar1);
switchD_00997989_default:
    bVar7 = *(int *)(param_1 + 0x104) == iVar4;
    break;
  case 6:
    if (param_3 < 0) {
      iVar4 = 1;
    }
    else if (1 < param_3) {
      iVar4 = 0;
    }
    puVar5 = &DAT_01f20668;
    puVar6 = local_70;
    for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (local_40 == 0) {
      iVar4 = 1;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(iVar4 * 4 + 0x188ebb4),0,0xffffffff
                );
    bVar7 = *(int *)(param_1 + 0x108) == iVar4;
    break;
  case 7:
    if (param_3 < 0) {
      iVar4 = 2;
    }
    else if (2 < param_3) {
      iVar4 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x9c),(&PTR_s_OPTION_SEL_43_0188ebbc)[iVar4],0,0xffffffff
                );
    param_3 = iVar4;
    if (*(int *)(param_1 + 0x10c) == iVar4) goto switchD_009975ce_default;
    if (iVar4 == 1) {
      DAT_01bea084 = DAT_01bea084 | 0x80;
      FUN_0098b0d0(0x39);
      bVar7 = *(int *)(param_1 + 0x10c) == 1;
    }
    else {
      FUN_0098b0d0(0x38);
      if (iVar4 == 2) {
        DAT_01bea084 = DAT_01bea084 | 0x40;
        bVar7 = *(int *)(param_1 + 0x10c) == 2;
      }
      else {
        FUN_0098b0d0(0x39);
        bVar7 = *(int *)(param_1 + 0x10c) == iVar4;
      }
    }
    break;
  case 8:
    if (param_3 < 0) {
      iVar4 = 2;
    }
    else if (2 < param_3) {
      iVar4 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0xac),(&PTR_s_OPTION_SEL_43_0188ebc8)[iVar4],0,0xffffffff
                );
    bVar7 = *(int *)(param_1 + 0x110) == iVar4;
    break;
  case 9:
    if (param_3 < 0) {
      iVar4 = 2;
    }
    else if (2 < param_3) {
      iVar4 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0xbc),(&PTR_s_OPTION_SEL_43_0188ebd4)[iVar4],0,0xffffffff
                );
    bVar7 = *(int *)(param_1 + 0x114) == iVar4;
    break;
  default:
    goto switchD_009975ce_default;
  }
  param_3 = iVar4;
  if (!bVar7) {
    FUN_00e5e050("core_se_sys_cursor",0);
  }
switchD_009975ce_default:
  *(int *)(param_1 + 0xf0 + param_2 * 4) = param_3;
  return;
}

// 00997BD0  FUN_00997bd0  size=36  [run]
void __fastcall FUN_00997bd0(int param_1)

{
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x5c),PTR_s_OPTION_SEL_53_0188eb8c,0,0xffffffff);
  *(undefined4 *)(param_1 + 0xfc) = 3;
  return;
}

// 00997C50  FUN_00997c50  size=285  [run]
void __thiscall FUN_00997c50(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "OPTION_MSG_18";
    break;
  case 1:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"OPTION_MSG_19",0,0xffffffff);
    FUN_00ce4d70(0xb);
    return;
  case 2:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"OPTION_MSG_21",0,0xffffffff);
    FUN_00ce4d70(0xb);
    return;
  case 3:
    pcVar1 = "OPTION_MSG_22";
    break;
  case 4:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"OPTION_MSG_23",0,0xffffffff);
    FUN_00ce4d70(0xb);
    return;
  case 5:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"OPTION_MSG_24",0,0xffffffff);
    FUN_00ce4d70(0xb);
    return;
  case 6:
    pcVar1 = "OPTION_MSG_25";
    break;
  case 7:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"OPTION_MSG_26",0,0xffffffff);
    FUN_00ce4d70(0xb);
    return;
  case 8:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"OPTION_MSG_27",0,0xffffffff);
    FUN_00ce4d70(0xb);
    return;
  case 9:
    pcVar1 = "OPTION_MSG_28";
    break;
  default:
    goto switchD_00997c60_default;
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),pcVar1,0,0xffffffff);
switchD_00997c60_default:
  FUN_00ce4d70(0xb);
  return;
}

// 00997DA0  FUN_00997da0  size=202  [run]
float * __thiscall FUN_00997da0(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float local_5c;
  float local_58;
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
  float local_10;
  float local_c;
  undefined4 local_8;
  
  *param_2 = 0.0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  param_2[1] = 0.0;
  local_54 = 0;
  local_10 = 0.0;
  local_50 = 0;
  local_c = 0.0;
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
  local_8 = 0xffffffff;
  iVar2 = FUN_00d29cc0(uVar1,&local_54);
  if (iVar2 != 0) {
    FUN_00cb2f60(&local_5c,*(undefined4 *)(param_1 + 0x1c));
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *param_2 = local_5c - local_10;
    param_2[1] = local_58 - local_c;
    iVar2 = FUN_00cb2790(uVar1);
    if (iVar2 != 0) {
      *param_2 = *(float *)(iVar2 + 0x10) * *param_2;
      param_2[1] = *(float *)(iVar2 + 0x14) * param_2[1];
    }
  }
  return param_2;
}

// 00997E70  FUN_00997e70  size=368  [run]
void __fastcall FUN_00997e70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  switch(DAT_01b77e30) {
  default:
    *(undefined4 *)(param_1 + 0x224) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x224) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x224) = 2;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x224) = 3;
  }
  *(uint *)(param_1 + 0x228) = (uint)(DAT_01b77e3c == 0);
  *(uint *)(param_1 + 0x22c) = (uint)(DAT_01b77e34 != 0);
  *(uint *)(param_1 + 0x230) = (uint)(DAT_01b77e38 != 0);
  *(undefined4 *)(param_1 + 0x234) = DAT_01b77e58;
  *(undefined4 *)(param_1 + 0x238) = DAT_01b77e5c;
  uVar1 = FUN_00cacfc0(DAT_01b77e40);
  switch(uVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x23c) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x23c) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x23c) = 2;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x23c) = 3;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x23c) = 5;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x23c) = 4;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x23c) = 6;
  }
  *(uint *)(param_1 + 0x240) = (uint)(DAT_01b77e44 != 0);
  if (DAT_01b77e48 == 0) {
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  else if (DAT_01b77e48 == 1) {
    *(undefined4 *)(param_1 + 0x244) = 1;
  }
  *(undefined4 *)(param_1 + 0x248) = DAT_01b77e4c;
  *(undefined4 *)(param_1 + 0x24c) = DAT_01b77e50;
  *(undefined4 *)(param_1 + 0x250) = DAT_01b77e54;
  puVar3 = (undefined4 *)(param_1 + 0x21c);
  puVar4 = (undefined4 *)(param_1 + 0x254);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

// 00998010  FUN_00998010  size=362  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00998010(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int aiStack_38 [14];
  
  _memset(aiStack_38 + 1,0,0x34);
  piVar2 = (int *)(param_1 + 0x254);
  iVar1 = 0;
  do {
    if (param_2 == 0) {
      iVar3 = *piVar2;
    }
    else {
      iVar3 = piVar2[-0xe];
    }
    aiStack_38[iVar1] = iVar3;
    if (param_2 == 0) {
      iVar3 = piVar2[1];
    }
    else {
      iVar3 = piVar2[-0xd];
    }
    aiStack_38[iVar1 + 1] = iVar3;
    iVar1 = iVar1 + 2;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0xe);
  switch(aiStack_38[2]) {
  default:
    DAT_01b77e30 = 0;
    break;
  case 1:
    DAT_01b77e30 = 1;
    break;
  case 2:
    DAT_01b77e30 = 2;
    break;
  case 3:
    DAT_01b77e30 = 3;
  }
  DAT_01b77e3c = (uint)(aiStack_38[3] == 0);
  DAT_01b77e34 = (uint)(aiStack_38[4] == 1);
  DAT_01b77e38 = (uint)(aiStack_38[5] == 1);
  DAT_01b77e58 = aiStack_38[6];
  DAT_01b77e5c = aiStack_38[7];
  switch(aiStack_38[8]) {
  case 0:
    DAT_01b77e40 = 0;
    break;
  case 1:
    DAT_01b77e40 = 1;
    break;
  case 2:
    DAT_01b77e40 = 3;
    break;
  case 3:
    DAT_01b77e40 = 4;
    break;
  case 4:
    DAT_01b77e40 = 6;
    break;
  case 5:
    DAT_01b77e40 = 5;
    break;
  case 6:
    DAT_01b77e40 = 7;
  }
  DAT_01b77e44 = (uint)(aiStack_38[9] == 1);
  if (aiStack_38[10] == 0) {
    DAT_01b77e48 = 0;
  }
  else if (aiStack_38[10] == 1) {
    DAT_01b77e48 = 1;
  }
  DAT_01b77e4c = aiStack_38[0xb];
  DAT_01b77e50 = aiStack_38[0xc];
  DAT_01b77e54 = aiStack_38[0xd];
  return;
}

// 009981B0  FUN_009981b0  size=712  [run]
void __thiscall FUN_009981b0(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x28c + param_2 * 4) == param_3) && (param_4 == 0)) {
    return;
  }
  bVar1 = param_3 == 0;
  switch(param_2) {
  case 0:
    uVar2 = *(undefined4 *)(param_1 + 0xe4);
    break;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0xec);
    break;
  case 2:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x34),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    break;
  case 3:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x44),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x48),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    break;
  case 4:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x54),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x58),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    break;
  case 5:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 100),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x68),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    break;
  case 6:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x74),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x78),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    break;
  case 7:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xac),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb0),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0xb4);
    break;
  case 8:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xf4),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xf8),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0xfc);
    break;
  case 9:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x104),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x108),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x10c);
    break;
  case 10:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x114),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x118),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x11c);
    break;
  case 0xb:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x124),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x128),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 300);
    break;
  case 0xc:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x15c),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x160),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x164);
    break;
  case 0xd:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x194),bVar1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x198),bVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x19c);
    break;
  default:
    goto switchD_009981e4_default;
  }
  FUN_00ce4ce0(uVar2,bVar1);
switchD_009981e4_default:
  *(int *)(param_1 + 0x28c + param_2 * 4) = param_3;
  return;
}

// 009986B0  FUN_009986b0  size=1504  [run]
void __thiscall FUN_009986b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  switch(param_2) {
  case 2:
    if (param_3 < 0) {
      param_3 = 3;
    }
    else if (3 < param_3) {
      param_3 = 0;
    }
    puVar5 = (&PTR_s_OPTION_SEL_00_0188ebe0)[param_3];
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    break;
  case 3:
    if (param_3 < 0) {
      param_3 = 1;
    }
    else if (1 < param_3) {
      param_3 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x48),(&PTR_s_OPTION_SEL_06_0188ebf0)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
      if (param_3 == 0) {
        FUN_00dda360(0,0x3f800000,0x3f800000,5);
      }
      FUN_00e5e050("core_se_sys_cursor",0);
      *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
      return;
    }
    goto switchD_009986c6_default;
  case 4:
    if (param_3 < 0) {
      param_3 = 1;
    }
    else if (1 < param_3) {
      param_3 = 0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    puVar5 = (&PTR_s_OPTION_SEL_04_0188ebf8)[param_3];
    break;
  case 5:
    if (param_3 < 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      param_3 = 1;
      puVar5 = PTR_s_OPTION_SEL_05_0188ec04;
    }
    else {
      if (1 < param_3) {
        param_3 = 0;
      }
      puVar5 = (&PTR_s_OPTION_SEL_04_0188ec00)[param_3];
      uVar4 = *(undefined4 *)(param_1 + 0x68);
    }
    break;
  case 6:
    if (param_3 < 1) {
      param_3 = 10;
    }
    else if (10 < param_3) {
      param_3 = 1;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x78),(&PTR_s_OPTION_SEL_24_0188ec34)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
      FUN_00e5e050("core_se_sys_cursor",0);
    }
    cVar3 = '\0';
    do {
      iVar2 = *(int *)(param_1 + 0x21c + param_2 * 4);
      if (iVar2 < param_3) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x80 + iVar2 * 4),4);
        piVar1 = (int *)(param_1 + 0x21c + param_2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      else if (param_3 < iVar2) {
        *(int *)(param_1 + 0x21c + param_2 * 4) = iVar2 + -1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x80 + (iVar2 + -1) * 4),3);
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\n');
    *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
    return;
  case 7:
    if (param_3 < 1) {
      param_3 = 10;
    }
    else if (10 < param_3) {
      param_3 = 1;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0xb0),(&PTR_s_OPTION_SEL_24_0188ec34)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
      FUN_00e5e050("core_se_sys_cursor",0);
    }
    cVar3 = '\0';
    do {
      iVar2 = *(int *)(param_1 + 0x21c + param_2 * 4);
      if (iVar2 < param_3) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb8 + iVar2 * 4),4);
        piVar1 = (int *)(param_1 + 0x21c + param_2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      else if (param_3 < iVar2) {
        *(int *)(param_1 + 0x21c + param_2 * 4) = iVar2 + -1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb8 + (iVar2 + -1) * 4),3);
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\n');
    *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
    return;
  case 8:
    if (param_3 < 0) {
      param_3 = 6;
    }
    else if (6 < param_3) {
      param_3 = 0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0xf8);
    puVar5 = (&PTR_s_OPTION_SEL_08_0188ec08)[param_3];
    break;
  case 9:
    if (param_3 < 0) {
      param_3 = 1;
    }
    else if (1 < param_3) {
      param_3 = 0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x108);
    puVar5 = (&PTR_s_OPTION_SEL_15_0188ec24)[param_3];
    break;
  case 10:
    if (param_3 < 0) {
      param_3 = 1;
    }
    else if (1 < param_3) {
      param_3 = 0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x118);
    puVar5 = (&PTR_s_OPTION_SEL_17_0188ec2c)[param_3];
    break;
  case 0xb:
    if (param_3 < 0) {
      param_3 = 10;
    }
    else if (10 < param_3) {
      param_3 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x128),(&PTR_s_OPTION_SEL_24_0188ec34)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
      FUN_009cb5a0((float)param_3 * 0.1);
      FUN_00e5e050("core_se_sys_cursor_option_bgm",0);
    }
    cVar3 = '\0';
    do {
      iVar2 = *(int *)(param_1 + 0x21c + param_2 * 4);
      if (iVar2 < param_3) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x130 + iVar2 * 4),4);
        piVar1 = (int *)(param_1 + 0x21c + param_2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      else if (param_3 < iVar2) {
        *(int *)(param_1 + 0x21c + param_2 * 4) = iVar2 + -1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x130 + (iVar2 + -1) * 4),3);
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\n');
    *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
    return;
  case 0xc:
    if (param_3 < 0) {
      param_3 = 10;
    }
    else if (10 < param_3) {
      param_3 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x160),(&PTR_s_OPTION_SEL_24_0188ec34)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
      FUN_009cb610((float)param_3 * 0.1);
      FUN_00e5e050("core_se_sys_cursor",0);
    }
    cVar3 = '\0';
    do {
      iVar2 = *(int *)(param_1 + 0x21c + param_2 * 4);
      if (iVar2 < param_3) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x168 + iVar2 * 4),4);
        piVar1 = (int *)(param_1 + 0x21c + param_2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      else if (param_3 < iVar2) {
        *(int *)(param_1 + 0x21c + param_2 * 4) = iVar2 + -1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x168 + (iVar2 + -1) * 4),3);
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\n');
    *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
    return;
  case 0xd:
    if (param_3 < 0) {
      param_3 = 10;
    }
    else if (10 < param_3) {
      param_3 = 0;
    }
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x198),(&PTR_s_OPTION_SEL_24_0188ec34)[param_3],0,
                 0xffffffff);
    if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
      FUN_009cb680((float)param_3 * 0.1);
      FUN_00e5e050("core_se_sys_cursor_option_vo",0);
    }
    cVar3 = '\0';
    do {
      iVar2 = *(int *)(param_1 + 0x21c + param_2 * 4);
      if (iVar2 < param_3) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1a0 + iVar2 * 4),4);
        piVar1 = (int *)(param_1 + 0x21c + param_2 * 4);
        *piVar1 = *piVar1 + 1;
      }
      else if (param_3 < iVar2) {
        *(int *)(param_1 + 0x21c + param_2 * 4) = iVar2 + -1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1a0 + (iVar2 + -1) * 4),3);
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\n');
    *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
    return;
  default:
    goto switchD_009986c6_default;
  }
  FUN_00cf9770(uVar4,puVar5,0,0xffffffff);
  if (*(int *)(param_1 + 0x21c + param_2 * 4) != param_3) {
    FUN_00e5e050("core_se_sys_cursor",0);
    *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
    return;
  }
switchD_009986c6_default:
  *(int *)(param_1 + 0x21c + param_2 * 4) = param_3;
  return;
}

