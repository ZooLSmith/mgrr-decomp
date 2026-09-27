// src/managers/cckmsgdatamanager/cCkMsgDataManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCA390..00CF7E60, 6 functions

#include "mgrr.h"
#include "cCkMsgDataManager.h"

// 00CCA390  cCkMsgDataManager::setupReadInfoDLC  size=87  [class]
void cCkMsgDataManager::setupReadInfoDLC(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (((iVar1 != 1) && (iVar1 != 3)) && (iVar1 != 2)) {
    FUN_00f972f0();
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xbd) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_00dd5650(&DAT_016b7960);
  }
  return;
}

// 00CCA3F0  FUN_00cca3f0  size=422  [callgraph]
void FUN_00cca3f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_200 [128];
  char local_180 [128];
  char local_100 [128];
  char local_80 [128];
  
  iVar1 = param_1[0x22];
  if (((iVar1 != 1) && (iVar1 != 3)) && (iVar1 != 2)) {
    FUN_00de3530();
    if (param_2 == 0) {
      uVar2 = FUN_00e9d0b0(param_1[6]);
      param_1[7] = uVar2;
      uVar2 = FUN_00e9d0b0(param_1[8]);
      param_1[9] = uVar2;
      uVar2 = FUN_00e9d0b0(param_1[10]);
      param_1[0xb] = uVar2;
      uVar2 = FUN_00e9d0b0(param_1[0xc]);
      param_1[0xd] = uVar2;
    }
    FUN_00de3540(param_1[7],param_1[9]);
    uVar2 = DAT_01dc3e0c;
    _sprintf_s(local_200,0x80,"ckmsg_p%03x.mcd",param_1[2]);
    _sprintf_s(local_180,0x80,"ckmsg_p%03x.wtb",param_1[2]);
    uVar3 = FUN_00de4550(local_200,0);
    uVar4 = FUN_00de4550(local_180,0);
    param_1[0x1e] = uVar4;
    FUN_00cb18b0(uVar3,uVar4,uVar2,param_2);
    _sprintf_s(local_100,0x80,"pageno_list_p%03x.bxm",param_1[2]);
    uVar2 = FUN_00de4550(local_100,0);
    param_1[0x1f] = uVar2;
    cCkMsgDataManager::setupReadInfoDLC(param_1,param_2);
    _sprintf_s(local_80,0x80,"Codec_p%03x.rad",param_1[2]);
    uVar2 = FUN_00de4550(local_80,0);
    param_1[0x20] = uVar2;
  }
  param_1[4] = 0xfff;
  param_1[5] = 0xffffffff;
  *param_1 = 0xffffffff;
  return;
}

// 00CE14C0  cCkMsgDataManager::~cCkMsgDataManager  size=133  [class]
void __fastcall cCkMsgDataManager::~cCkMsgDataManager(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  Hw::cHeap::cHeap_4();
  Hw::cHeap::cHeap_4();
  iVar1 = 5;
  puVar2 = param_1 + 0x167;
  do {
    puVar2[-0x37] = cMsgCtrl::vftable;
    FUN_00f972f0();
    puVar2[-0x36] = 0;
    puVar2[-0x35] = 0;
    puVar2[-0x2d] = 0;
    *(undefined2 *)((int)puVar2 + -0xaf) = 0;
    Hw::cTexture::~cTexture();
    puVar2[-0x4d] = cMsgCtrl::vftable;
    FUN_00f972f0();
    puVar2[-0x4c] = 0;
    puVar2[-0x4b] = 0;
    puVar2[-0x43] = 0;
    *(undefined2 *)((int)puVar2 + -0x107) = 0;
    Hw::cTexture::~cTexture();
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -0x35;
  } while (-1 < iVar1);
  return;
}

// 00CF7580  cCkMsgDataManager::vf00  size=30  [class]
undefined4 __thiscall cCkMsgDataManager::vf00(undefined4 param_1,byte param_2)

{
  ~cCkMsgDataManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF75A0  FUN_00cf75a0  size=2043  [callgraph]
undefined4 __thiscall FUN_00cf75a0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char local_344 [64];
  char local_304 [128];
  undefined1 local_284 [64];
  char local_244 [128];
  char local_1c4 [128];
  char local_144 [64];
  undefined1 local_104 [260];
  
  iVar6 = param_2[0x21];
  uVar8 = *(undefined4 *)(param_1 + 0xf14 + iVar6 * 0xc);
  uVar7 = *(undefined4 *)(param_1 + (iVar6 * 3 + 0x3c6) * 4);
  uVar1 = *(undefined4 *)(param_1 + iVar6 * 0xc + 0xf1c);
  iVar6 = param_2[0x22];
  if (iVar6 == 3) {
    uVar3 = FUN_00cadb50(param_2[4]);
    _sprintf_s(local_304,0x80,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar3,&DAT_01655794);
    switch(DAT_01dc2cd8) {
    case 0:
      uVar3 = 0;
      break;
    default:
      uVar3 = 1;
      break;
    case 2:
      uVar3 = 3;
      break;
    case 3:
      uVar3 = 4;
      break;
    case 4:
      uVar3 = 5;
      break;
    case 5:
      uVar3 = 6;
      break;
    case 6:
      uVar3 = 7;
    }
    FUN_00df8090(local_104,0x104,local_304);
    FUN_00cad960(local_344,0x40,local_104,uVar3);
    _strcpy_s(local_244,0x80,local_344);
    uVar3 = FUN_00cadb50(param_2[4]);
    _sprintf_s(local_304,0x80,"%sckmsg_codec_%dst.%s","ckmsg\\",uVar3,&DAT_01655790);
    switch(DAT_01dc2cd8) {
    case 0:
      uVar3 = 0;
      break;
    default:
      uVar3 = 1;
      break;
    case 2:
      uVar3 = 3;
      break;
    case 3:
      uVar3 = 4;
      break;
    case 4:
      uVar3 = 5;
      break;
    case 5:
      uVar3 = 6;
      break;
    case 6:
      uVar3 = 7;
    }
    FUN_00df8090(local_104,0x104,local_304);
    FUN_00cad960(local_344,0x40,local_104,uVar3);
    _strcpy_s(local_1c4,0x80,local_344);
    uVar3 = FUN_00cadb50(param_2[4]);
    _sprintf_s(local_144,0x40,"%swaveinfo_%dst.bxm","ckmsg\\",uVar3);
    switch(DAT_01dc2cd8) {
    case 0:
      uVar3 = param_2[4];
      uVar9 = 1;
      uVar4 = 0;
      break;
    default:
      uVar3 = param_2[4];
      uVar4 = 1;
      uVar9 = 1;
      break;
    case 2:
      uVar3 = param_2[4];
      uVar9 = 1;
      uVar4 = 3;
      break;
    case 3:
      uVar3 = param_2[4];
      uVar9 = 1;
      uVar4 = 4;
      break;
    case 4:
      uVar3 = param_2[4];
      uVar9 = 1;
      uVar4 = 5;
      break;
    case 5:
      uVar3 = param_2[4];
      uVar9 = 1;
      uVar4 = 6;
      break;
    case 6:
      uVar3 = param_2[4];
      uVar9 = 1;
      uVar4 = 7;
    }
  }
  else {
    if (iVar6 == 1) {
      FUN_00ce1670(param_2[0x23],local_244,local_1c4);
      goto LAB_00cf7c4b;
    }
    iVar2 = DAT_01dc2cdc;
    if (iVar6 == 2) {
      do {
        iVar6 = iVar2;
        if (iVar6 < 1) {
          _sprintf_s(local_304,0x80,"ckmsg\\ckmsg_weapon_mess.dat");
          switch(param_2[5]) {
          case 0:
            uVar3 = 0;
            break;
          default:
            uVar3 = 1;
            break;
          case 2:
            uVar3 = 3;
            break;
          case 3:
            uVar3 = 4;
            break;
          case 4:
            uVar3 = 5;
            break;
          case 5:
            uVar3 = 6;
            break;
          case 6:
            uVar3 = 7;
          }
          FUN_00df8090(local_104,0x104,local_304);
          FUN_00cad960(local_344,0x40,local_104,uVar3);
          _strcpy_s(local_244,0x80,local_344);
          *(undefined4 *)(param_1 + 0xf0c) = 0;
          goto LAB_00cf79b2;
        }
        _sprintf_s(local_304,0x80,"ckmsg\\ckmsg_weapon_dlc%d.dat",iVar6 + -1);
        switch(param_2[5]) {
        case 0:
          uVar3 = 0;
          break;
        default:
          uVar3 = 1;
          break;
        case 2:
          uVar3 = 3;
          break;
        case 3:
          uVar3 = 4;
          break;
        case 4:
          uVar3 = 5;
          break;
        case 5:
          uVar3 = 6;
          break;
        case 6:
          uVar3 = 7;
        }
        FUN_00df8090(local_104,0x104,local_304);
        FUN_00cad960(local_344,0x40,local_104,uVar3);
        _strcpy_s(local_244,0x80,local_344);
        iVar5 = FUN_00dec390(local_304);
        iVar2 = iVar6 + -1;
      } while (iVar5 == 0);
      *(int *)(param_1 + 0xf0c) = iVar6;
LAB_00cf79b2:
      _sprintf_s((char *)(param_1 + 0xe0c),0x80,"%s",local_244);
      iVar6 = DAT_01dc2cdc;
      do {
        iVar2 = iVar6;
        if (iVar2 < 1) {
          _sprintf_s(local_304,0x80,"ckmsg\\ckmsg_weapon_mess.dtt");
          switch(param_2[5]) {
          case 0:
            uVar3 = 0;
            break;
          default:
            uVar3 = 1;
            break;
          case 2:
            uVar3 = 3;
            break;
          case 3:
            uVar3 = 4;
            break;
          case 4:
            uVar3 = 5;
            break;
          case 5:
            uVar3 = 6;
            break;
          case 6:
            uVar3 = 7;
          }
          FUN_00df8090(local_104,0x104,local_304);
          FUN_00cad960(local_344,0x40,local_104,uVar3);
          _strcpy_s(local_1c4,0x80,local_344);
          *(undefined4 *)(param_1 + 0xf10) = 0;
          goto LAB_00cf7b54;
        }
        _sprintf_s(local_304,0x80,"ckmsg\\ckmsg_weapon_dlc%d.dtt",iVar2 + -1);
        switch(param_2[5]) {
        case 0:
          uVar3 = 0;
          break;
        default:
          uVar3 = 1;
          break;
        case 2:
          uVar3 = 3;
          break;
        case 3:
          uVar3 = 4;
          break;
        case 4:
          uVar3 = 5;
          break;
        case 5:
          uVar3 = 6;
          break;
        case 6:
          uVar3 = 7;
        }
        FUN_00df8090(local_104,0x104,local_304);
        FUN_00cad960(local_344,0x40,local_104,uVar3);
        _strcpy_s(local_1c4,0x80,local_344);
        iVar5 = FUN_00dec390(local_304);
        iVar6 = iVar2 + -1;
      } while (iVar5 == 0);
      *(int *)(param_1 + 0xf10) = iVar2;
LAB_00cf7b54:
      _sprintf_s((char *)(param_1 + 0xe8c),0x80,"%s",local_1c4);
      goto LAB_00cf7c4b;
    }
    _sprintf_s(local_304,0x80,"ckmsg\\ckmsg_p%03x.dat",param_2[4]);
    uVar3 = FUN_00cad030(param_2[5]);
    FUN_00cca690(local_244,0x80,local_304,uVar3);
    _sprintf_s(local_304,0x80,"ckmsg\\ckmsg_p%03x.dtt",param_2[4]);
    uVar3 = FUN_00cad030(param_2[5]);
    FUN_00cca690(local_1c4,0x80,local_304,uVar3);
    _sprintf_s(local_144,0x40,"%swaveinfo_p%03x.bxm","ckmsg\\",param_2[4]);
    uVar3 = param_2[4];
    uVar9 = 0;
    uVar4 = FUN_00cad030(param_2[5]);
  }
  FUN_00cadd10(local_284,0x40,"ckmsg\\",uVar4,uVar3,uVar9);
LAB_00cf7c4b:
  param_2[7] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  param_2[0xd] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[2] = param_2[4];
  param_2[3] = param_2[5];
  param_2[4] = 0xfff;
  param_2[5] = 0xffffffff;
  param_2[0x34] = 0;
  iVar6 = FUN_00dec390(local_244);
  if ((iVar6 != 0) && (iVar6 = FUN_00dec390(local_1c4), iVar6 != 0)) {
    if (param_3 == 0) {
      uVar3 = FUN_00e9e570(5,local_244,uVar8,uVar1,0);
      param_2[6] = uVar3;
      uVar7 = FUN_00e9e570(5,local_1c4,uVar7,uVar1,0);
      param_2[8] = uVar7;
      iVar6 = FUN_00dec390(local_144);
      if (iVar6 != 0) {
        uVar7 = FUN_00e9e570(5,local_144,uVar8,uVar1,0);
        param_2[10] = uVar7;
      }
      iVar6 = FUN_00dec390(local_284);
      if (iVar6 != 0) {
        uVar8 = FUN_00e9e570(5,local_284,uVar8,uVar1,0);
        param_2[0xc] = uVar8;
      }
      if ((param_2[6] == 0) || (param_2[8] == 0)) {
        param_2[2] = 0xfff;
        param_2[3] = 0xffffffff;
        *param_2 = 0xffffffff;
      }
    }
    return 1;
  }
  *param_2 = 0xffffffff;
  return 0;
}

// 00CF7E60  FUN_00cf7e60  size=381  [callgraph]
void __fastcall FUN_00cf7e60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_10 [4];
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x504) == 0) {
    iVar2 = *(int *)(param_1 + 0x50c) * 0xd4 + 0xc + param_1;
    if ((((*(int *)(iVar2 + 0x10) != 0xfff) && (*(int *)(iVar2 + 8) != *(int *)(iVar2 + 0x10))) ||
        ((*(int *)(iVar2 + 0x14) != -1 && (*(int *)(iVar2 + 0xc) != *(int *)(iVar2 + 0x14))))) ||
       (*(int *)(iVar2 + 4) != 0)) {
      FUN_00cca2e0(iVar2);
    }
    piVar1 = (int *)(param_1 + 0x50c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x50c) = 0;
      *(undefined4 *)(param_1 + 0x504) = 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x504) == 1) {
    iVar2 = *(int *)(param_1 + 0x50c) * 0xd4;
    piVar1 = (int *)(iVar2 + 0xc + param_1);
    if (((*(int *)(iVar2 + 0x14 + param_1) == *(int *)(iVar2 + 0x1c + param_1)) &&
        (piVar1[3] == piVar1[5])) && (piVar1[1] == 0)) {
      *piVar1 = -1;
    }
    else {
      iVar2 = *piVar1;
      if (iVar2 != -1) {
        if (iVar2 == 0) {
          iVar2 = FUN_00cf75a0(piVar1,0);
          if (iVar2 == 0) {
            return;
          }
          *piVar1 = *piVar1 + 1;
          return;
        }
        if (iVar2 != 1) {
          return;
        }
        local_10[0] = piVar1[6];
        local_10[1] = piVar1[8];
        local_10[2] = piVar1[10];
        local_10[3] = piVar1[0xc];
        do {
          iVar2 = local_10[uVar4];
          if (iVar2 != 0) {
            iVar3 = FUN_00e9cf60(iVar2);
            if (iVar3 == 0) {
              iVar2 = FUN_00e9d060(iVar2);
              if (iVar2 == 0) break;
              FUN_00dd5650(&DAT_016b91f0);
            }
            else {
              iVar2 = FUN_00e9cfe0(iVar2);
              if (iVar2 != 0) goto LAB_00cf7f26;
            }
            FUN_00cca2e0(piVar1);
            break;
          }
LAB_00cf7f26:
          uVar4 = uVar4 + 1;
        } while (uVar4 < 4);
        if (uVar4 < 3) {
          return;
        }
        FUN_00cca3f0(piVar1,0);
        return;
      }
    }
    *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + 1;
    if (4 < *(int *)(param_1 + 0x50c)) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x504) = 2;
    }
  }
  return;
}

