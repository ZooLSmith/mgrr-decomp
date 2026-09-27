// src/unsorted/unit_00989850.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00989850..0098A4C0, 9 functions

#include "types.h"

// 00989850  FUN_00989850  size=173  [run]
float10 __thiscall FUN_00989850(int param_1,int param_2,int param_3)

{
  int iVar1;
  float local_58;
  float local_54 [21];
  
  local_58 = 0.0;
  local_54[0x11] = 0.0;
  local_54[0x12] = 0.0;
  local_54[0] = 0.0;
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
  local_54[0x10] = 0.0;
  local_54[0x13] = -NAN;
  iVar1 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x370 + param_2 * 4),local_54);
  if (iVar1 != 0) {
    local_58 = local_54[param_3] + local_54[0x11];
  }
  iVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x370 + param_2 * 4));
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 00989900  FUN_00989900  size=38  [run]
float10 __thiscall FUN_00989900(int param_1,int param_2,float param_3)

{
  float local_8 [2];
  
  FUN_00cb3240(local_8,*(undefined4 *)(param_1 + 0x370 + param_2 * 4));
  return (float10)param_3 / (float10)local_8[0];
}

// 00989930  FUN_00989930  size=415  [run]
void __thiscall FUN_00989930(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x37c),4);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3a0),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c4),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3ac),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d0),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x3b8);
  }
  else {
    if (param_2 != 1) goto LAB_00989a63;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x37c),5);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x394),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3a0),2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c4),2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3ac),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d0),3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3a0),0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x3c4);
  }
  FUN_00ce4ce0(uVar1,0xc);
LAB_00989a63:
  puVar3 = (undefined4 *)(param_1 + 0x3e0);
  iVar2 = 10;
  do {
    FUN_00ce4ce0(*puVar3,0xc);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x43c);
  iVar2 = 8;
  do {
    FUN_00ce4ce0(*puVar3,0xc);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 900),
               *(float *)(param_1 + 0x508 + param_2 * 8) + *(float *)(param_1 + 0x504 + param_2 * 8)
              );
  *(int *)(param_1 + 0x4f4) = param_2;
  return;
}

// 00989AD0  FUN_00989ad0  size=428  [run]
void __thiscall FUN_00989ad0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 8:
  case 9:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_TITLE_04",0,0xffffffff);
    pcVar1 = "CHAPTER_TITLE_04";
    goto LAB_00989c5a;
  case 10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_01",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_01";
    break;
  case 0xb:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_02",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_02";
    break;
  case 0xc:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_03",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_03";
    break;
  case 0xd:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_04",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_04";
    break;
  case 0xe:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_08",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_08";
    break;
  case 0xf:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_05",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_05";
    break;
  case 0x10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_06",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_06";
    break;
  case 0x11:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_BOSS_07",0,0xffffffff);
    pcVar1 = "CHAPTER_BOSS_07";
    break;
  default:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x398),"CHAPTER_TITLE_01",0,0xffffffff);
    pcVar1 = "CHAPTER_TITLE_01";
LAB_00989c5a:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x39c),pcVar1,0,0xffffffff);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x47c),1);
    return;
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x39c),pcVar1,0,0xffffffff);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x47c),0);
  return;
}

// 00989CF0  FUN_00989cf0  size=919  [run]
void __thiscall FUN_00989cf0(int param_1,int param_2,undefined1 param_3)

{
  char *pcVar1;
  char local_40 [32];
  char local_20 [32];
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      return;
    }
    switch(param_3) {
    case 0:
      pcVar1 = "CHAPTER_SEL_10";
      break;
    case 1:
    case 10:
      pcVar1 = "CHAPTER_SEL_11";
      break;
    case 2:
      pcVar1 = "CHAPTER_SEL_12";
      break;
    case 3:
      pcVar1 = "CHAPTER_SEL_13";
      break;
    case 4:
      pcVar1 = "CHAPTER_SEL_14";
      break;
    case 5:
      pcVar1 = "CHAPTER_SEL_15";
      break;
    case 6:
      pcVar1 = "CHAPTER_SEL_16";
      break;
    case 7:
      pcVar1 = "CHAPTER_SEL_17";
      break;
    case 8:
      pcVar1 = "CHAPTER_SEL_18";
      break;
    case 9:
      pcVar1 = "CHAPTER_SEL_19";
      break;
    case 0xb:
      pcVar1 = "CHAPTER_SEL_13";
      break;
    case 0xc:
      pcVar1 = "CHAPTER_SEL_14";
      break;
    case 0xd:
      pcVar1 = "CHAPTER_SEL_16";
      break;
    case 0xe:
      pcVar1 = "CHAPTER_SEL_17";
      break;
    case 0xf:
      pcVar1 = "CHAPTER_SEL_17";
      break;
    case 0x10:
      pcVar1 = "CHAPTER_SEL_18";
      break;
    case 0x11:
      pcVar1 = "CHAPTER_SEL_19";
      break;
    default:
      goto switchD_00989f6b_default;
    }
    _sprintf_s(local_40,0x20,pcVar1);
switchD_00989f6b_default:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x3c8),local_40,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x3cc),local_40,0,0xffffffff);
    return;
  }
  switch(param_3) {
  case 0:
    pcVar1 = "CHAPTER_SEL_00";
    break;
  case 1:
  case 10:
    pcVar1 = "CHAPTER_SEL_01";
    break;
  case 2:
    pcVar1 = "CHAPTER_SEL_02";
    break;
  case 3:
    pcVar1 = "CHAPTER_SEL_03";
    break;
  case 4:
    pcVar1 = "CHAPTER_SEL_04";
    break;
  case 5:
    pcVar1 = "CHAPTER_SEL_05";
    break;
  case 6:
    pcVar1 = "CHAPTER_SEL_06";
    break;
  case 7:
    pcVar1 = "CHAPTER_SEL_07";
    break;
  case 8:
    pcVar1 = "CHAPTER_SEL_08";
    break;
  case 9:
    pcVar1 = "CHAPTER_SEL_09";
    break;
  case 0xb:
    pcVar1 = "CHAPTER_SEL_03";
    break;
  case 0xc:
    pcVar1 = "CHAPTER_SEL_04";
    break;
  case 0xd:
    pcVar1 = "CHAPTER_SEL_06";
    break;
  case 0xe:
    pcVar1 = "CHAPTER_SEL_07";
    break;
  case 0xf:
    pcVar1 = "CHAPTER_SEL_07";
    break;
  case 0x10:
    pcVar1 = "CHAPTER_SEL_08";
    break;
  case 0x11:
    pcVar1 = "CHAPTER_SEL_09";
    break;
  default:
    goto switchD_00989d11_default;
  }
  _sprintf_s(local_40,0x20,pcVar1);
switchD_00989d11_default:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3bc),local_40,0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x3c0),local_40,0,0xffffffff);
  switch(param_3) {
  case 0:
    pcVar1 = "HUD_PLACE_00";
    break;
  case 1:
  case 10:
    pcVar1 = "HUD_PLACE_01";
    break;
  case 2:
    pcVar1 = "HUD_PLACE_02";
    break;
  case 3:
    pcVar1 = "HUD_PLACE_03";
    break;
  case 4:
    pcVar1 = "HUD_PLACE_04";
    break;
  case 5:
    pcVar1 = "HUD_PLACE_05";
    break;
  case 6:
    pcVar1 = "HUD_PLACE_06";
    break;
  case 7:
    pcVar1 = "HUD_PLACE_07";
    break;
  case 8:
    pcVar1 = "HUD_PLACE_08";
    break;
  case 9:
    pcVar1 = "HUD_PLACE_09";
    break;
  case 0xb:
    pcVar1 = "HUD_PLACE_03";
    break;
  case 0xc:
    pcVar1 = "HUD_PLACE_04";
    break;
  case 0xd:
    pcVar1 = "HUD_PLACE_06";
    break;
  case 0xe:
    pcVar1 = "HUD_PLACE_07";
    break;
  case 0xf:
    pcVar1 = "HUD_PLACE_07";
    break;
  case 0x10:
    pcVar1 = "HUD_PLACE_08";
    break;
  case 0x11:
    pcVar1 = "HUD_PLACE_09";
    break;
  default:
    goto switchD_00989e2f_default;
  }
  _sprintf_s(local_20,0x20,pcVar1);
switchD_00989e2f_default:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x390),local_20,0,0xffffffff);
  if (*(char *)(param_1 + 0x4ef) != '\0') {
    return;
  }
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x390),1,3);
  return;
}

// 0098A160  FUN_0098a160  size=68  [run]
void __thiscall FUN_0098a160(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x370 + param_3 * 4));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4bc + param_2 * 8) = 0;
    return;
  }
  *(int *)(param_1 + 0x4b8 + param_2 * 8) = param_3;
  *(undefined4 *)(param_1 + 0x4bc + param_2 * 8) = 1;
  return;
}

// 0098A1C0  FUN_0098a1c0  size=351  [run]
void __fastcall FUN_0098a1c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ('\x06' < *(char *)(param_1 + 0x4e2 + *(int *)(param_1 + 0x4fc))) {
    *(undefined1 *)(param_1 + 0x4e2 + *(int *)(param_1 + 0x4fc)) = 7;
  }
  iVar2 = *(int *)(param_1 + 0x4fc);
  cVar1 = *(char *)(iVar2 + 0x4e2 + param_1);
  *(char *)(param_1 + 0x524) = cVar1;
  if ('\x06' < cVar1) {
    *(undefined1 *)(param_1 + 0x524) = 9;
    if (*(char *)(iVar2 + 0x4e8 + param_1) != '\0') {
      *(undefined1 *)(param_1 + 0x524) = 0x11;
    }
    *(undefined1 *)(iVar2 + 0x4e2 + param_1) = *(undefined1 *)(param_1 + 0x524);
  }
  cVar1 = '\0';
  puVar3 = (undefined4 *)(param_1 + 0x408);
  do {
    if (cVar1 < '\b') {
      if (*(char *)(param_1 + 0x524) < cVar1) {
        FUN_00cb2310(puVar3[-10],0);
        uVar4 = *puVar3;
        uVar5 = 0;
      }
      else {
        FUN_00cb2310(puVar3[-10],0);
        uVar4 = *puVar3;
        uVar5 = 1;
      }
    }
    else {
      FUN_00cb2310(puVar3[-10],0);
      uVar4 = *puVar3;
      uVar5 = 0;
    }
    FUN_00cb2310(uVar4,uVar5);
    cVar1 = cVar1 + '\x01';
    puVar3 = puVar3 + 1;
  } while (cVar1 < '\n');
  puVar3 = (undefined4 *)(param_1 + 0x45c);
  iVar2 = 8;
  if (*(char *)(param_1 + 0x4e8 + *(int *)(param_1 + 0x4fc)) == '\0') {
    do {
      FUN_00cb2310(puVar3[-8],0);
      FUN_00cb2310(*puVar3,0);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    do {
      FUN_00cb2310(puVar3[-8],0);
      FUN_00cb2310(*puVar3,1);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ('\a' < *(char *)(param_1 + 0x524)) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x400),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x428),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x404),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x42c),1);
  }
  return;
}

// 0098A320  FUN_0098a320  size=269  [run]
void __thiscall FUN_0098a320(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = '\0';
  puVar3 = (undefined4 *)(param_1 + 0x408);
  do {
    if (cVar1 <= *(char *)(param_1 + 0x524)) {
      FUN_00cb2310(puVar3[-10],0);
      FUN_00cb2310(*puVar3,1);
    }
    cVar1 = cVar1 + '\x01';
    puVar3 = puVar3 + 1;
  } while (cVar1 < '\n');
  iVar2 = 8;
  if ('\a' < *(char *)(param_1 + 0x524)) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x400),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x428),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x404),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x42c),1);
  }
  if ('\t' < *(char *)(param_1 + 0x524)) {
    puVar3 = (undefined4 *)(param_1 + 0x45c);
    do {
      FUN_00cb2310(puVar3[-8],0);
      FUN_00cb2310(*puVar3,1);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 < 10) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x3e0 + param_2 * 4),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x408 + param_2 * 4),0);
    return;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x414 + param_2 * 4),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x434 + param_2 * 4),0);
  return;
}

// 0098A4C0  FUN_0098a4c0  size=46  [run]
void __thiscall FUN_0098a4c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = local_14;
  return;
}

