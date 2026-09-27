// src/unsorted/unit_00CE1550.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE1550..00CE30B0, 18 functions

#include "mgrr.h"

// 00CE1550  FUN_00ce1550  size=275  [run]
void __fastcall FUN_00ce1550(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x48);
  iVar1 = 6;
  do {
    FUN_00f972f0();
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[9] = 0;
    *(undefined2 *)((int)puVar2 + 0x29) = 0;
    FUN_00f972f0();
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x1f] = 0;
    *(undefined2 *)((int)puVar2 + 0x81) = 0;
    FUN_00e9d6a0(puVar2[-9]);
    FUN_00e9d6a0(puVar2[-7]);
    FUN_00e9d6a0(puVar2[-5]);
    FUN_00e9d6a0(puVar2[-3]);
    puVar2[-0xe] = 0;
    puVar2[-0xd] = 0xfff;
    puVar2[-0xc] = 0xffffffff;
    puVar2[-9] = 0;
    puVar2[-7] = 0;
    puVar2[-5] = 0;
    puVar2[-3] = 0;
    puVar2[-8] = 0;
    puVar2[-6] = 0;
    puVar2[-4] = 0;
    puVar2[-2] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2 = puVar2 + 0x35;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00e9ef20((int *)(param_1 + 0x520));
  FUN_00e9ef20((int *)(param_1 + 0x990));
  (**(code **)(*(int *)(param_1 + 0x520) + 8))();
  (**(code **)(*(int *)(param_1 + 0x990) + 8))();
  *(undefined4 *)(param_1 + 0xe00) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0xfff;
  *(undefined4 *)(param_1 + 0x504) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x514) = 1;
  *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
  return;
}

// 00CE1670  FUN_00ce1670  size=493  [run]
void FUN_00ce1670(int param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  char local_184 [64];
  char local_144 [64];
  undefined1 local_104 [260];
  
  if ((param_1 == 0x3000) && (DAT_01dc2cd8 == 5)) {
    _sprintf_s(local_184,0x40,"ui\\dlc2\\ev%04x_dlc2.dat",0x3000);
    uVar1 = FUN_00cad030(DAT_01dc2cd8);
    FUN_00cca700(param_2,0x40,local_184,uVar1);
    _sprintf_s(local_184,0x40,"ui\\dlc2\\ev%04x_dlc2.dtt",0x3000);
    uVar1 = FUN_00cad030(DAT_01dc2cd8);
    FUN_00cca700(param_3,0x40,local_184,uVar1);
    return;
  }
  _sprintf_s(local_184,0x40,"ui\\ev%04x.dat",param_1);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_104,0x104,local_184);
  FUN_00cada50(local_144,0x40,local_104,uVar1);
  _strcpy_s(param_2,0x40,local_144);
  _sprintf_s(local_184,0x40,"ui\\ev%04x.dtt",param_1);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_104,0x104,local_184);
  FUN_00cada50(local_144,0x40,local_104,uVar1);
  _strcpy_s(param_3,0x40,local_144);
  return;
}

// 00CE18A0  FUN_00ce18a0  size=132  [run]
void __thiscall FUN_00ce18a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_00ce1670(param_2,local_80,local_40);
  iVar1 = FUN_00dec390(local_80);
  if (iVar1 != 0) {
    FUN_00e9dbc0(local_80);
  }
  iVar1 = FUN_00dec390(local_40);
  if (iVar1 != 0) {
    FUN_00e9dbc0(local_40);
  }
  if (*(int *)(param_1 + 0x518) != -1) {
    *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x518);
    *(undefined4 *)(param_1 + 0x518) = 0xffffffff;
  }
  return;
}

// 00CE1930  FUN_00ce1930  size=124  [run]
undefined4 FUN_00ce1930(undefined4 param_1)

{
  int iVar1;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_00ce1670(param_1,local_80,local_40);
  iVar1 = FUN_00dec390(local_80);
  if ((iVar1 != 0) && (iVar1 = FUN_00e9d4d0(local_80), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00dec390(local_40);
  if ((iVar1 != 0) && (iVar1 = FUN_00e9d4d0(local_40), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// 00CE19B0  FUN_00ce19b0  size=486  [run]
void __thiscall FUN_00ce19b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *_Format;
  undefined1 local_38c [64];
  undefined1 local_34c [64];
  char local_30c [260];
  char local_208 [260];
  char local_104 [260];
  
  FUN_00cca030();
  uVar5 = DAT_01dc3e0c;
  if (*(int *)(param_1 + 0x518) != -1) {
    iVar1 = *(int *)(param_1 + 0x518) * 0xd4 + 0xc + param_1;
    FUN_00936580();
    FUN_00936580();
    FUN_00ce1670(param_2,local_38c,local_34c);
    iVar2 = FUN_00dec390(local_38c);
    if ((iVar2 != 0) && (iVar2 = FUN_00dec390(local_34c), iVar2 != 0)) {
      uVar3 = FUN_00e9d5d0(local_38c);
      *(undefined4 *)(iVar1 + 0x1c) = uVar3;
      uVar3 = FUN_00e9d5d0(local_34c);
      *(undefined4 *)(iVar1 + 0x24) = uVar3;
      FUN_00de3530();
      FUN_00de3540(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x24));
      if (((DAT_01bea064 & 0x8000) == 0) && (DAT_01dc2cd8 == 0)) {
        _sprintf_s(local_30c,0x104,"ev%04x_jp.mcd",param_2);
        _sprintf_s(local_208,0x104,"ev%04x_jp.wtb",param_2);
        _Format = "ev%04x_jp_seq.bxm";
      }
      else {
        _sprintf_s(local_30c,0x104,"ev%04x.mcd",param_2);
        _sprintf_s(local_208,0x104,"ev%04x.wtb",param_2);
        _Format = "ev%04x_seq.bxm";
      }
      _sprintf_s(local_104,0x104,_Format,param_2);
      iVar2 = FUN_00de4550(local_30c,0);
      iVar4 = FUN_00de4550(local_208,0);
      *(int *)(iVar1 + 0x78) = iVar4;
      if ((iVar2 == 0) || ((iVar4 != 0 && (iVar4 = FUN_00fa25d0(iVar4), iVar4 == 0)))) {
        FUN_00f972f0();
        *(undefined4 *)(iVar1 + 0x3c) = 0;
        *(undefined4 *)(iVar1 + 0x40) = 0;
        *(undefined2 *)(iVar1 + 0x65) = 0;
      }
      else {
        *(int *)(iVar1 + 0x3c) = iVar2;
        *(undefined4 *)(iVar1 + 0x40) = uVar5;
      }
      *(undefined4 *)(iVar1 + 0x60) = 0;
      uVar5 = FUN_00de4550(local_104,0);
      *(undefined4 *)(param_1 + 0xe00) = uVar5;
    }
  }
  return;
}

// 00CE1BA0  FUN_00ce1ba0  size=122  [run]
void __fastcall FUN_00ce1ba0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)(param_1 + 0xe0c);
  iVar2 = FUN_00dec390(pvVar1);
  if (iVar2 != 0) {
    FUN_00e9dbc0(pvVar1);
  }
  _memset(pvVar1,0,0x80);
  pvVar1 = (void *)(param_1 + 0xe8c);
  *(undefined4 *)(param_1 + 0xf0c) = 0;
  iVar2 = FUN_00dec390(pvVar1);
  if (iVar2 != 0) {
    FUN_00e9dbc0(pvVar1);
  }
  _memset(pvVar1,0,0x80);
  *(undefined4 *)(param_1 + 0xf10) = 0;
  FUN_00cca110();
  return;
}

// 00CE1C20  FUN_00ce1c20  size=527  [run]
void __fastcall FUN_00ce1c20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_40c [128];
  char local_38c [128];
  char local_30c [260];
  char local_208 [520];
  
  FUN_00cca110();
  uVar1 = DAT_01dc3e0c;
  FUN_00936580();
  FUN_00936580();
  _sprintf_s(local_40c,0x80,"%s",param_1 + 0xe0c);
  _sprintf_s(local_38c,0x80,"%s",param_1 + 0xe8c);
  iVar2 = FUN_00dec390(local_40c);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00dec390(local_38c);
  if (iVar2 != 0) {
    uVar3 = FUN_00e9d5d0(local_40c);
    *(undefined4 *)(param_1 + 0x2a4) = uVar3;
    uVar3 = FUN_00e9d5d0(local_38c);
    *(undefined4 *)(param_1 + 0x2ac) = uVar3;
    FUN_00de3530();
    FUN_00de3540(*(undefined4 *)(param_1 + 0x2a4),*(undefined4 *)(param_1 + 0x2ac));
    if (*(int *)(param_1 + 0xf0c) == 0) {
      _sprintf_s(local_30c,0x104,"ckmsg_weapon_mess.mcd");
    }
    else {
      _sprintf_s(local_30c,0x104,"ckmsg_weapon_mess_dlc%d.mcd",*(int *)(param_1 + 0xf0c) + -1);
    }
    if (*(int *)(param_1 + 0xf10) == 0) {
      _sprintf_s(local_208,0x104,"ckmsg_weapon_mess.wtb");
    }
    else {
      _sprintf_s(local_208,0x104,"ckmsg_weapon_mess_dlc%d.wtb",*(int *)(param_1 + 0xf10) + -1);
    }
    iVar2 = FUN_00de4550(local_30c,0);
    iVar4 = FUN_00de4550(local_208,0);
    *(int *)(param_1 + 0x300) = iVar4;
    if ((iVar2 == 0) || ((iVar4 != 0 && (iVar4 = FUN_00fa25d0(iVar4), iVar4 == 0)))) {
      FUN_00f972f0();
      *(undefined4 *)(param_1 + 0x2c4) = 0;
      *(undefined4 *)(param_1 + 0x2c8) = 0;
      *(undefined2 *)(param_1 + 0x2ed) = 0;
    }
    else {
      *(int *)(param_1 + 0x2c4) = iVar2;
      *(undefined4 *)(param_1 + 0x2c8) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x358) = 0;
    FUN_00f972f0();
    *(undefined4 *)(param_1 + 0x31c) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0;
    *(undefined2 *)(param_1 + 0x345) = 0;
    return;
  }
  return;
}

// 00CE1E40  FUN_00ce1e40  size=677  [run]
void __fastcall FUN_00ce1e40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_3c4 [64];
  char local_384 [128];
  char local_304 [128];
  char local_284 [128];
  undefined1 local_204 [128];
  char local_184 [128];
  undefined1 local_104 [260];
  
  uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
  _sprintf_s(local_384,0x80,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar1,&DAT_01655794);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_104,0x104,local_384);
  FUN_00cad960(local_3c4,0x40,local_104,uVar1);
  _strcpy_s(local_184,0x80,local_3c4);
  iVar2 = FUN_00dec390(local_184);
  if (iVar2 != 0) {
    FUN_00e9dbc0(local_184);
  }
  uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
  _sprintf_s(local_384,0x80,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar1,&DAT_01655790);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_104,0x104,local_384);
  FUN_00cad960(local_3c4,0x40,local_104,uVar1);
  _strcpy_s(local_304,0x80,local_3c4);
  iVar2 = FUN_00dec390(local_304);
  if (iVar2 != 0) {
    FUN_00e9dbc0(local_304);
  }
  uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
  _sprintf_s(local_284,0x80,"%swaveinfo_%dst.bxm","ckmsg\\",uVar1);
  iVar2 = FUN_00dec390(local_284);
  if (iVar2 != 0) {
    FUN_00e9dbc0(local_284);
  }
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00cadd10(local_204,0x80,"ckmsg\\",uVar1,*(undefined4 *)(param_1 + 0x508),1);
  iVar2 = FUN_00dec390(local_204);
  if (iVar2 != 0) {
    FUN_00e9dbc0(local_204);
  }
  FUN_00cca280();
  return;
}

// 00CE2140  FUN_00ce2140  size=696  [run]
undefined4 __fastcall FUN_00ce2140(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_284 [64];
  char local_244 [64];
  char local_204 [64];
  undefined1 local_1c4 [64];
  char local_184 [64];
  char local_144 [64];
  undefined1 local_104 [260];
  
  uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
  _sprintf_s(local_244,0x40,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar1,&DAT_01655794);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_104,0x104,local_244);
  FUN_00cad960(local_284,0x40,local_104,uVar1);
  _strcpy_s(local_144,0x40,local_284);
  iVar2 = FUN_00dec390(local_144);
  if ((iVar2 == 0) || (iVar2 = FUN_00e9d4d0(local_144), iVar2 != 0)) {
    uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
    _sprintf_s(local_244,0x40,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar1,&DAT_01655790);
    switch(DAT_01dc2cd8) {
    case 0:
      uVar1 = 0;
      break;
    default:
      uVar1 = 1;
      break;
    case 2:
      uVar1 = 3;
      break;
    case 3:
      uVar1 = 4;
      break;
    case 4:
      uVar1 = 5;
      break;
    case 5:
      uVar1 = 6;
      break;
    case 6:
      uVar1 = 7;
    }
    FUN_00df8090(local_104,0x104,local_244);
    FUN_00cad960(local_284,0x40,local_104,uVar1);
    _strcpy_s(local_184,0x40,local_284);
    iVar2 = FUN_00dec390(local_184);
    if ((iVar2 == 0) || (iVar2 = FUN_00e9d4d0(local_184), iVar2 != 0)) {
      uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
      _sprintf_s(local_204,0x40,"%swaveinfo_%dst.bxm","ckmsg\\",uVar1);
      iVar2 = FUN_00dec390(local_204);
      if ((iVar2 == 0) || (iVar2 = FUN_00e9d4d0(local_204), iVar2 != 0)) {
        switch(DAT_01dc2cd8) {
        case 0:
          uVar1 = 0;
          break;
        default:
          uVar1 = 1;
          break;
        case 2:
          uVar1 = 3;
          break;
        case 3:
          uVar1 = 4;
          break;
        case 4:
          uVar1 = 5;
          break;
        case 5:
          uVar1 = 6;
          break;
        case 6:
          uVar1 = 7;
        }
        FUN_00cadd10(local_1c4,0x40,"ckmsg\\",uVar1,*(undefined4 *)(param_1 + 0x508),1);
        iVar2 = FUN_00dec390(local_1c4);
        if ((iVar2 == 0) || (iVar2 = FUN_00e9d4d0(local_1c4), iVar2 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00CE2450  FUN_00ce2450  size=1111  [run]
void __fastcall FUN_00ce2450(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char local_7d4 [64];
  char local_794 [128];
  char local_714 [128];
  undefined1 local_694 [128];
  char local_614 [128];
  char local_594 [128];
  undefined1 local_514 [260];
  char local_410;
  undefined1 local_40f [259];
  char local_30c [260];
  char local_208 [260];
  char local_104 [260];
  
  FUN_00cca280();
  uVar5 = DAT_01dc3e0c;
  FUN_00936580();
  FUN_00936580();
  uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
  _sprintf_s(local_794,0x80,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar1,&DAT_01655794);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_514,0x104,local_794);
  FUN_00cad960(local_7d4,0x40,local_514,uVar1);
  _strcpy_s(local_614,0x80,local_7d4);
  uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
  _sprintf_s(local_794,0x80,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar1,&DAT_01655790);
  switch(DAT_01dc2cd8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 7;
  }
  FUN_00df8090(local_514,0x104,local_794);
  FUN_00cad960(local_7d4,0x40,local_514,uVar1);
  _strcpy_s(local_714,0x80,local_7d4);
  iVar2 = FUN_00dec390(local_614);
  if ((iVar2 != 0) && (iVar2 = FUN_00dec390(local_714), iVar2 != 0)) {
    uVar1 = FUN_00e9d5d0(local_614);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar1 = FUN_00e9d5d0(local_714);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
    _sprintf_s(local_594,0x80,"%swaveinfo_%dst.bxm","ckmsg\\",uVar1);
    iVar2 = FUN_00dec390(local_594);
    if (iVar2 != 0) {
      uVar1 = FUN_00e9d5d0(local_594);
      *(undefined4 *)(param_1 + 0x38) = uVar1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x508);
    uVar6 = 1;
    uVar3 = FUN_00cad030(DAT_01dc2cd8);
    FUN_00cadd10(local_694,0x80,"ckmsg\\",uVar3,uVar1,uVar6);
    iVar2 = FUN_00dec390(local_694);
    if (iVar2 != 0) {
      uVar1 = FUN_00e9d5d0(local_694);
      *(undefined4 *)(param_1 + 0x40) = uVar1;
    }
    FUN_00de3530();
    FUN_00de3540(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
    local_410 = '\0';
    _memset(local_40f,0,0x40f);
    uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
    _sprintf_s(&local_410,0x104,"%sckmsg_codec_%dst.%s",&DAT_016416fa,uVar1,&DAT_016b8d30);
    uVar1 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
    _sprintf_s(local_30c,0x104,"%sckmsg_codec_%dst.%s",&DAT_016416fa,uVar1,&DAT_0164518c);
    iVar2 = FUN_00de4550(&local_410,0);
    iVar4 = FUN_00de4550(local_30c,0);
    *(int *)(param_1 + 0x84) = iVar4;
    if ((iVar2 == 0) || ((iVar4 != 0 && (iVar4 = FUN_00fa25d0(iVar4), iVar4 == 0)))) {
      FUN_00f972f0();
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined2 *)(param_1 + 0x71) = 0;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar2;
      *(undefined4 *)(param_1 + 0x4c) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    FUN_00f972f0();
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined2 *)(param_1 + 0xc9) = 0;
    uVar5 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
    _sprintf_s(local_208,0x104,"pageno_list_%dst.bxm",uVar5);
    uVar5 = FUN_00de4550(local_208,0);
    *(undefined4 *)(param_1 + 0x88) = uVar5;
    uVar5 = FUN_00cadb50(*(undefined4 *)(param_1 + 0x508));
    _sprintf_s(local_104,0x104,"Codec_%dst.rad",uVar5);
    uVar5 = FUN_00de4550(local_104,0);
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
  }
  return;
}

// 00CE28E0  FUN_00ce28e0  size=499  [run]
int __thiscall
FUN_00ce28e0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (param_1[0x78] == -1) {
    return -1;
  }
  if ((param_1[0x78] == 0) && (DAT_01dc3294 == 2)) {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    param_1[0x78] = (-(uint)(iVar2 != 0) & 2) - 1;
  }
  if ((param_1[0x7a] == 0) || (param_1[0x7a] == 3)) {
    param_1[1] = 1;
    param_1[0x7a] = 1;
    if (param_7 == 0) {
      FUN_00cdef90(0,1);
    }
    else {
      FUN_00cdeec0(0);
    }
  }
  if (((uint)param_1[0x79] < (uint)param_1[0x30]) &&
     (piVar1 = *(int **)(param_1[0x2f] + 0x3f0 + param_1[0x79] * 0x400), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      piVar1[3] = param_8;
      iVar2 = 0;
      do {
        iVar5 = iVar2;
        if ((iVar2 == 1) || (iVar2 == 2)) {
          iVar3 = FUN_00932720();
          if (DAT_01dc2e78 == iVar3) {
            iVar5 = (iVar2 != 1) + 1;
          }
          else {
            iVar3 = FUN_00932720();
            if (DAT_01dc2f4c == iVar3) {
              iVar5 = 2 - (uint)(iVar2 != 1);
            }
          }
        }
        if (((iVar5 * 0xd4 == -0x1dc2d9c) || ((&DAT_01dc2db8)[iVar5 * 0x35] == 0)) ||
           ((&DAT_01dc2dc0)[iVar5 * 0x35] == 0)) {
          puVar4 = (undefined *)0x0;
        }
        else {
          puVar4 = &DAT_01dc2dd4 + iVar5 * 0xd4;
        }
        piVar1[5] = (int)puVar4;
        uVar6 = (uint)DAT_01dc1418;
        iVar5 = param_2;
        if (DAT_01dc1418 != 0) {
          uVar7 = FUN_00cade40(param_2);
          uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
          iVar5 = (int)uVar7;
          if ((int)uVar7 == 0) {
            iVar5 = param_2;
          }
        }
        param_1[0x82] = uVar6 & 0xff;
        piVar1[0x2a] = -1;
        piVar1[0x2b] = 0;
        if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
          iVar5 = FUN_00cb1cd0(iVar5);
          if (-1 < iVar5) {
            piVar1[0x2a] = iVar5;
            piVar1[0x2e] = 0;
            piVar1[0x2b] = 0;
            piVar1[0x2e] = 0;
            piVar1[0x2d] = -(uint)(param_3 != 0) & 3;
            param_1[0x7c] = param_6;
            param_1[0x81] = param_2;
            param_1[0x7f] = param_7;
            param_1[0x7b] = 1;
            param_1[0x7d] = param_4;
            param_1[0x7e] = param_5;
            return iVar2;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 5);
      return -1;
    }
  }
  return -1;
}

// 00CE2AE0  FUN_00ce2ae0  size=187  [run]
void __thiscall FUN_00ce2ae0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && (*(uint *)(param_1 + 0x208) != (uint)DAT_01dc1418)) {
    *(uint *)(param_1 + 0x208) = (uint)DAT_01dc1418;
    uVar5 = FUN_00cade40(param_2);
    if ((int)uVar5 != 0) {
      iVar3 = (int)uVar5;
      if (DAT_01dc1418 == 0) {
        iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      }
      iVar1 = FUN_00cab6b0(*(undefined4 *)(extraout_ECX + 0x1e4));
      if (iVar1 != 0) {
        iVar4 = 0;
        while( true ) {
          iVar2 = FUN_00cca5a0(iVar4);
          *(int *)(iVar1 + 0x14) = iVar2;
          *(undefined4 *)(iVar1 + 0xa8) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0xac) = 0;
          if (((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) &&
             (iVar2 = FUN_00cb1cd0(iVar3), -1 < iVar2)) break;
          iVar4 = iVar4 + 1;
          if (4 < iVar4) {
            return;
          }
        }
        *(int *)(iVar1 + 0xa8) = iVar2;
        *(undefined4 *)(iVar1 + 0xac) = 0;
        *(undefined4 *)(iVar1 + 0xb8) = 0;
      }
    }
  }
  return;
}

// 00CE2BA0  FUN_00ce2ba0  size=205  [run]
void __fastcall FUN_00ce2ba0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xb0),0);
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x98),0);
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  return;
}

// 00CE2C70  FUN_00ce2c70  size=314  [run]
void __fastcall FUN_00ce2c70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_c;
  int local_8;
  
  iVar3 = 0;
  local_c = (int *)(param_1 + 0x14);
  local_8 = 0;
  piVar5 = (int *)(param_1 + 0x44);
  piVar4 = (int *)(param_1 + 8);
  do {
    if (*piVar4 == 0) {
      return;
    }
    if (*piVar5 != 0) {
      iVar1 = thunk_FUN_00e58ed0(*piVar5);
      if (iVar1 == 0) {
        *piVar5 = 0;
      }
      else if (1 < *local_c) {
        iVar2 = FUN_00e59860(*piVar5);
        iVar1 = piVar5[1];
        if ((*(float *)(param_1 + 0x4c + (iVar1 + iVar3) * 4) <= (float)iVar2 * 0.001 * 60.0) &&
           (iVar1 < *local_c + -1)) {
          piVar5[1] = iVar1 + 1;
          FUN_00ce28e0(*(undefined4 *)(param_1 + 0x18 + (iVar1 + 1 + local_8) * 4),0,piVar4[0x1d],
                       piVar4[0x1f],0,1,3);
        }
      }
    }
    local_c = local_c + 6;
    local_8 = local_8 + 6;
    iVar3 = iVar3 + 7;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 7;
  } while (iVar3 < 0xe);
  iVar3 = FUN_00c1d6f0();
  if (iVar3 != 0) {
    iVar3 = FUN_00932720();
    if (iVar3 == 0xf0a) {
      iVar3 = *(int *)(param_1 + 0x10);
      if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x1e8) == 2 || (*(int *)(iVar3 + 0x1e8) == 1)))) {
        *(undefined4 *)(iVar3 + 0x1e8) = 3;
        *(undefined4 *)(iVar3 + 0x1f8) = 0;
        *(undefined4 *)(iVar3 + 0x204) = 0;
        return;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 != 0) {
        if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
          *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}

// 00CE2DB0  FUN_00ce2db0  size=650  [run]
undefined4 __thiscall
FUN_00ce2db0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,float *param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined1 local_18 [24];
  
  if (param_2 == 3) {
    iVar6 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar6 = *(int *)(param_1 + 8 + param_2 * 4);
  }
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = FUN_00ce28e0(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (iVar6 == -1) {
    return 0;
  }
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x7c + param_2 * 4) = param_5;
    *(undefined4 *)(param_1 + 0x84 + param_2 * 4) = param_6;
    piVar7 = (int *)cXmlBinary::cXmlBinary_68(local_18,param_3,iVar6);
    piVar2 = (int *)(param_1 + 0x14 + param_2 * 0x18);
    *piVar2 = *piVar7;
    piVar2[1] = piVar7[1];
    piVar2[2] = piVar7[2];
    piVar2[3] = piVar7[3];
    piVar2[4] = piVar7[4];
    piVar2[5] = piVar7[5];
    iVar3 = param_1 + 0x44 + param_2 * 0x1c;
    if (1 < *piVar2) {
      iVar8 = cXmlBinary::cXmlBinary_70(param_3,iVar6);
      iVar9 = cXmlBinary::cXmlBinary_71(param_3,iVar6);
      pfVar11 = (float *)(iVar3 + 8);
      *pfVar11 = 0.0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      if (iVar9 == -1) {
        iVar9 = *piVar2;
        iVar6 = 0;
        if (0 < iVar9) {
          do {
            iVar6 = iVar6 + 1;
            *pfVar11 = (float)(iVar8 / iVar9) * (float)iVar6;
            iVar9 = *piVar2;
            pfVar11 = pfVar11 + 1;
          } while (iVar6 < iVar9);
        }
      }
      else {
        iVar12 = 1;
        *pfVar11 = (float)iVar9;
        if (1 < *piVar2) {
          piVar7 = piVar2 + 2;
          param_9 = (float *)(iVar3 + 0xc);
          do {
            iVar9 = cXmlBinary::cXmlBinary_71(*piVar7,iVar6);
            if (iVar9 == -1) break;
            iVar12 = iVar12 + 1;
            *param_9 = (float)iVar9;
            piVar7 = piVar7 + 1;
            param_9 = param_9 + 1;
          } while (iVar12 < *piVar2);
        }
        param_2 = *piVar2;
        if (iVar12 < param_2) {
          pfVar11 = (float *)(iVar3 + 4 + iVar12 * 4);
          iVar6 = FUN_00fdbc60();
          param_2 = param_2 - iVar12;
          if (param_2 < 0) {
            param_2 = 1;
          }
          iVar9 = 0;
          fVar5 = (float)(iVar8 - iVar6) / (float)param_2;
          if (3 < param_2) {
            iVar6 = (param_2 - 4U >> 2) + 1;
            param_3 = 2;
            iVar9 = iVar6 * 4;
            pfVar10 = (float *)(iVar3 + 0xc + iVar12 * 4);
            do {
              iVar8 = param_3 + 1;
              pfVar10[-1] = (float)(param_3 + -1) * fVar5 + *pfVar11;
              fVar4 = (float)param_3;
              iVar1 = param_3 + 2;
              param_3 = param_3 + 4;
              iVar6 = iVar6 + -1;
              *pfVar10 = fVar4 * fVar5 + *pfVar11;
              pfVar10[1] = (float)iVar8 * fVar5 + *pfVar11;
              pfVar10[2] = (float)iVar1 * fVar5 + *pfVar11;
              pfVar10 = pfVar10 + 4;
            } while (iVar6 != 0);
          }
          if (iVar9 < param_2) {
            pfVar10 = (float *)(iVar3 + 8 + (iVar9 + iVar12) * 4);
            do {
              iVar9 = iVar9 + 1;
              *pfVar10 = (float)iVar9 * fVar5 + *pfVar11;
              pfVar10 = pfVar10 + 1;
            } while (iVar9 < param_2);
          }
        }
      }
    }
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  return 1;
}

// 00CE3040  FUN_00ce3040  size=36  [run]
void FUN_00ce3040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00ce2db0(0,param_1,param_2,param_3,param_4,0,1,3);
  return;
}

// 00CE3070  FUN_00ce3070  size=51  [run]
void FUN_00ce3070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0(param_1);
  FUN_00ce2db0(0,uVar1,param_2,param_3,param_4,0,1,3);
  return;
}

// 00CE30B0  FUN_00ce30b0  size=36  [run]
void FUN_00ce30b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00ce2db0(1,param_1,param_2,param_3,param_4,0,1,3);
  return;
}

