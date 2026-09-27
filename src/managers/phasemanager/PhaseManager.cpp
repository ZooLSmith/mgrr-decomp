// src/managers/phasemanager/PhaseManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D44F60..00D5ED60, 30 functions

#include "mgrr.h"

// 00D44F60  FUN_00d44f60  size=67  [callgraph]
void __thiscall
FUN_00d44f60(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[10] = param_4;
  if (param_3 != (char *)0x0) {
    uVar1 = FUN_00e03ea0(param_3);
    param_1[1] = uVar1;
    _strcpy_s((char *)(param_1 + 2),0x20,param_3);
    return;
  }
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

// 00D44FB0  FUN_00d44fb0  size=54  [callgraph]
void __thiscall FUN_00d44fb0(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (char *)0x0) {
    uVar1 = FUN_00e03ea0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar1;
    _strcpy_s((char *)(param_1 + 8),0x20,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

// 00D45010  FUN_00d45010  size=44  [callgraph]
bool __thiscall FUN_00d45010(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 != param_2) {
    return false;
  }
  iVar1 = FUN_00e03ea0(param_3);
  return param_1[1] == iVar1;
}

// 00D450C0  FUN_00d450c0  size=108  [callgraph]
void __fastcall FUN_00d450c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    iVar2 = FUN_009c4bf0();
    if (iVar2 != 2) {
      iVar2 = FUN_009c4bf0();
      if (iVar2 != 3) {
        iVar2 = FUN_009c4bf0();
        if ((iVar2 != 4) && (*(int *)(param_1 + 0x34) == 0x118)) {
          uVar3 = FUN_00a7c8a0(0xffffffff,0);
          FUN_00e5e0c0("R00h1000_121010",uVar3);
        }
      }
    }
  }
  return;
}

// 00D45130  FUN_00d45130  size=96  [callgraph]
uint * FUN_00d45130(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = -(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x10)
  ;
  puVar1 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,param_1);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
    iVar4 = param_2 - 1;
    puVar3 = puVar1;
    if (-1 < iVar4) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3 = puVar3 + 4;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return puVar1;
    }
  }
  return puVar1;
}

// 00D45210  FUN_00d45210  size=83  [callgraph]
void FUN_00d45210(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4) + -1;
    if (-1 < iVar4) {
      puVar3 = (undefined4 *)(iVar2 + 8 + *(int *)(iVar2 + -4) * 0x10);
      do {
        piVar1 = puVar3 + -4;
        puVar3 = puVar3 + -4;
        if (*piVar1 != 0) {
          FUN_00dd4940(*piVar1);
          *puVar3 = 0;
        }
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    FUN_00dd4940(iVar2 + -4);
    *param_1 = 0;
  }
  return;
}

// 00D45270  FUN_00d45270  size=485  [callgraph]
void __fastcall FUN_00d45270(int param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_retaddr;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x30))(1);
  piVar1 = (int *)FUN_00e678d0(2,0x40,0xffffffff);
  if ((((*piVar1 == *unaff_retaddr) && (piVar1[1] == unaff_retaddr[1])) &&
      (piVar1[2] == unaff_retaddr[2])) && (*(int *)(param_1 + 0x34) == 0x430)) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      *(undefined4 *)(iVar2 + 0xe8) = 0;
      *(undefined4 *)(iVar2 + 0xe4) = 0;
      *(undefined4 *)(iVar2 + 0xe0) = 0;
      *(undefined4 *)(iVar2 + 0xdc) = 0;
      *(undefined4 *)(iVar2 + 0xd4) = 0;
      *(undefined4 *)(iVar2 + 0xd0) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      *(undefined4 *)(iVar2 + 0xb8) = 0;
      *(undefined4 *)(iVar2 + 0xb4) = 0;
      *(undefined4 *)(iVar2 + 0xec) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xd8) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xc4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
      iVar2 = FUN_00a7c8a0();
      *(undefined4 *)(iVar2 + 0x128) = 0;
      *(undefined4 *)(iVar2 + 0x124) = 0;
      *(undefined4 *)(iVar2 + 0x120) = 0;
      *(undefined4 *)(iVar2 + 0x11c) = 0;
      *(undefined4 *)(iVar2 + 0x114) = 0;
      *(undefined4 *)(iVar2 + 0x110) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
      *(undefined4 *)(iVar2 + 0x108) = 0;
      *(undefined4 *)(iVar2 + 0x100) = 0;
      *(undefined4 *)(iVar2 + 0xfc) = 0;
      *(undefined4 *)(iVar2 + 0xf8) = 0;
      *(undefined4 *)(iVar2 + 0xf4) = 0;
      *(undefined4 *)(iVar2 + 300) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x118) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0x104) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xf0) = 0x3f800000;
    }
  }
  piVar1 = (int *)FUN_00e678d0(2,0x40,0xffffffff);
  if (((((*piVar1 == *unaff_retaddr) && (piVar1[1] == unaff_retaddr[1])) &&
       (piVar1[2] == unaff_retaddr[2])) ||
      (((piVar1 = (int *)FUN_00e678d0(2,0x41,0xffffffff), *piVar1 == *unaff_retaddr &&
        (piVar1[1] == unaff_retaddr[1])) && (piVar1[2] == unaff_retaddr[2])))) &&
     (*(int *)(param_1 + 0x34) == 0x430)) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      iVar2 = *(int *)(iVar2 + 0x764);
      if (*(int *)(iVar2 + 0x104) != 1) {
        *(undefined4 *)(iVar2 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
      }
    }
  }
  return;
}

// 00D45460  FUN_00d45460  size=3  [callgraph]
void FUN_00d45460(void)

{
  return;
}

// 00D45470  FUN_00d45470  size=3  [callgraph]
void FUN_00d45470(void)

{
  return;
}

// 00D45480  FUN_00d45480  size=3  [callgraph]
void FUN_00d45480(void)

{
  return;
}

// 00D45490  FUN_00d45490  size=10  [callgraph]
bool __fastcall FUN_00d45490(int param_1)

{
  return *(int *)(param_1 + 4) < 6;
}

// 00D454A0  FUN_00d454a0  size=24  [callgraph]
bool __fastcall FUN_00d454a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return true;
  }
  return *(int *)(param_1 + 4) == 8;
}

// 00D454C0  FUN_00d454c0  size=9  [callgraph]
bool __fastcall FUN_00d454c0(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}

// 00D454D0  FUN_00d454d0  size=11  [callgraph]
void __fastcall FUN_00d454d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  return;
}

// 00D454E0  FUN_00d454e0  size=36  [callgraph]
bool __fastcall FUN_00d454e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((iVar1 != 0) && (iVar1 != 6)) && (iVar1 != 7)) && (iVar1 != 8)) {
    return iVar1 != 9;
  }
  return false;
}

// 00D45560  PhaseManager::createReadRoomList  size=367  [class]
void __thiscall PhaseManager::createReadRoomList(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_2 == 0) {
    *param_4 = 0;
    return;
  }
  bVar2 = false;
  uVar3 = 0;
  *param_4 = 0;
  puVar5 = (uint *)(param_1 + 0x160);
  do {
    if ((int)*puVar5 < 0) break;
    *(uint *)(param_2 + uVar6 * 4) = *puVar5;
    *param_4 = *param_4 + 1;
    uVar1 = *puVar5;
    uVar4 = uVar1 & 0xff;
    if (((((uVar4 != 0) && (uVar4 != 0x20)) && (uVar4 != 0x40)) &&
        ((uVar4 != 0x60 && (uVar4 != 0x80)))) && ((uVar4 != 0xa0 && (uVar4 != 0xc0)))) {
      if (uVar4 < 0x20) {
        uVar3 = uVar1 & 0xf00;
      }
      else if (uVar4 < 0x40) {
        uVar3 = uVar1 & 0xf00 | 0x20;
      }
      else if (uVar4 < 0x60) {
        uVar3 = uVar1 & 0xf00 | 0x40;
      }
      else if (uVar4 < 0x80) {
        uVar3 = uVar1 & 0xf00 | 0x60;
      }
      else if (uVar4 < 0xa0) {
        uVar3 = uVar1 & 0xf00 | 0x80;
      }
      else if (uVar4 < 0xc0) {
        uVar3 = uVar1 & 0xf00 | 0xa0;
      }
      else if (uVar4 < 0xe0) {
        uVar3 = uVar1 & 0xf00 | 0xc0;
      }
    }
    if ((uVar4 == 0) || ((uVar1 & 0xf00) == 0)) {
      bVar2 = true;
    }
    if (param_3 <= *param_4) {
      FUN_00dd5650("PhaseManager::createReadRoomList listSize over.");
      return;
    }
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 < 10);
  if ((!bVar2) && (*param_4 != 0)) {
    *(uint *)(param_2 + *param_4 * 4) = uVar3;
    *param_4 = *param_4 + 1;
  }
  return;
}

// 00D4E890  PhaseManager::setDefaultData  size=1784  [class]
void __fastcall PhaseManager::setDefaultData(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *_Str;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  char *pcVar12;
  undefined4 uStack_258;
  uint uStack_240;
  char *pcStack_23c;
  undefined4 uStack_238;
  char *pcStack_234;
  undefined4 uStack_230;
  char *pcStack_22c;
  undefined4 uStack_228;
  char *pcStack_224;
  undefined4 uStack_220;
  undefined *puStack_21c;
  undefined4 uVar13;
  char acStack_1d4 [48];
  undefined1 auStack_1a4 [24];
  undefined1 auStack_18c [140];
  char local_100 [256];
  
  _memset(local_100,0,0x100);
  puStack_21c = (undefined *)0xd4e8d6;
  _sprintf_s(local_100,0x100,"p%x%02x_sub.bxm");
  iVar3 = FUN_00de4550();
  if (iVar3 == 0) {
    FUN_00dd5650();
    return;
  }
  FUN_00e062b0();
  (**(code **)(*(int *)(param_1 + 0x1d8) + 4))();
  uVar4 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x10))();
  if (*(int *)(*(int *)(param_1 + 0x118) + 4) != iVar3) {
    FUN_00dd5650();
  }
  iVar8 = 0;
  uVar13 = uVar4;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x10))();
  if (0 < iVar3) {
    do {
      puStack_21c = (undefined *)0xd4e9a3;
      uStack_220 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x14))();
      puStack_21c = &DAT_0164d4cc;
      pcStack_224 = (char *)0xd4e9c1;
      iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x9c))();
      if (iVar3 != -1) {
        pcStack_224 = (char *)0x20;
        uStack_228 = auStack_1a4;
        uStack_230 = (undefined1 *)0xd4e9e5;
        pcStack_22c = (char *)iVar3;
        (**(code **)(*(int *)(param_1 + 0x1d8) + 0xa4))();
      }
      pcStack_224 = auStack_1a4;
      uStack_228 = (undefined1 *)0xd4e9ef;
      iVar3 = FUN_00e03ea0();
      if (*(int *)(param_1 + 100) == iVar3) {
        *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x28) = uVar13;
        uVar10 = *(uint *)(*(int *)(param_1 + 0x11c) + 0x28);
        pcStack_224 = "RoomNo";
        pcStack_22c = (char *)0xd4ea5b;
        uStack_228 = (undefined1 *)uVar10;
        pcStack_234 = (char *)(**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
        if (pcStack_234 != (char *)0xffffffff) {
          pcStack_22c = (char *)0x64;
          uStack_230 = auStack_18c;
          uStack_238 = 0xd4ea7c;
          (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))();
        }
        pcStack_22c = "PlayerPos";
        pcStack_234 = (char *)0xd4ea93;
        uStack_230 = (undefined1 *)uVar10;
        uStack_238 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
        if (uStack_238 != -1) {
          pcStack_234 = (char *)(param_1 + 0x130);
          pcStack_23c = (char *)0xd4eab1;
          (**(code **)(*(int *)(param_1 + 0x1d8) + 0x44))();
          *(undefined4 *)(param_1 + 0x140) = 0;
          *(undefined4 *)(param_1 + 0x148) = 0;
          *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x13c);
          *(undefined4 *)(param_1 + 0x13c) = 0;
        }
        pcStack_234 = "PlayerRot";
        pcStack_23c = (char *)0xd4eaea;
        uStack_238 = uVar10;
        uStack_240 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
        if (uStack_240 != 0xffffffff) {
          pcStack_23c = (char *)(param_1 + 0x140);
          (**(code **)(*(int *)(param_1 + 0x1d8) + 0x44))();
        }
        pcStack_23c = "GraPos";
        uStack_240 = uVar10;
        iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
        if (iVar3 != -1) {
          (**(code **)(*(int *)(param_1 + 0x1d8) + 0x44))();
        }
        uStack_228 = (undefined1 *)((uint)uStack_228 & 0xffffff00);
        _memset((void *)((int)&uStack_228 + 1),0,99);
        iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
        if (iVar3 != -1) {
          uStack_258 = (undefined4 *)0xd4eb88;
          (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))();
        }
        pbVar7 = &DAT_016bcae4;
        pbVar5 = (byte *)&uStack_230;
        goto LAB_00d4eb91;
      }
      iVar8 = iVar8 + 1;
      uStack_228 = (undefined1 *)0xd4ea0a;
      pcStack_224 = (char *)uVar4;
      iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x10))();
    } while (iVar8 < iVar3);
  }
  puStack_21c = (undefined *)0xd4ea1c;
  FUN_00dd5650();
  return;
  while( true ) {
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d4ebb1;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
    if (bVar1 == 0) break;
LAB_00d4eb91:
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d4ebb1:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00d4ebb6;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_00d4ebb6:
  *(uint *)(param_1 + 0x188) = (uint)(iVar3 == 0);
  uStack_258 = (undefined4 *)0xd4ebd4;
  _strcpy_s((char *)&uStack_230,100,"");
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
  if (iVar3 != -1) {
    uStack_258 = &uStack_238;
    (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))();
  }
  pbVar7 = &DAT_016bcae4;
  pbVar5 = (byte *)&uStack_238;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d4ec35:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00d4ec3a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d4ec35;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d4ec3a:
  pcVar2 = *(code **)(*(int *)(param_1 + 0x1d8) + 0x18);
  *(uint *)(param_1 + 0x18c) = (uint)(iVar3 == 0);
  uStack_258 = (undefined4 *)uVar10;
  iVar3 = (*pcVar2)();
  if (iVar3 == -1) {
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x1d8) + 0x44))();
  }
  _strcpy_s((char *)&uStack_240,100,"");
  pcVar12 = "CameraEnable";
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
  if (iVar3 != -1) {
    (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  pbVar7 = &DAT_0164ced4;
  pbVar5 = &stack0xfffffdb8;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d4ed14:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00d4ed19;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d4ed14;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d4ed19:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 1;
  }
  _strcpy_s(&stack0xfffffdb8,100,"");
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))();
  if (iVar3 != -1) {
    (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))(iVar3,&stack0xfffffdb0);
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  pbVar7 = &DAT_0164ced4;
  pbVar5 = &stack0xfffffdb0;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d4eda4:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00d4eda9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d4eda4;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d4eda9:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = 1;
  }
  _strcpy_s(&stack0xfffffdb0,100,"");
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))(uVar10);
  if (iVar3 != -1) {
    (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))(iVar3,&uStack_258,100);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  pbVar7 = &DAT_0164ced4;
  pbVar5 = (byte *)&uStack_258;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d4ee30:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00d4ee35;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d4ee30;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d4ee35:
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1a8) = 1;
  }
  _Str = acStack_1d4;
  piVar9 = (int *)(param_1 + 0x160);
  *piVar9 = -1;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  uVar10 = 0;
  do {
    iVar3 = FUN_00fdc7b0(_Str,0x72);
    if (iVar3 == 0) break;
    _Str = (char *)(iVar3 + 1);
    lVar6 = _strtol(_Str,(char **)&stack0xfffffda0,0x10);
    *piVar9 = (int)(short)lVar6;
    uVar10 = uVar10 + 1;
    piVar9 = piVar9 + 1;
  } while (uVar10 < 10);
  _strcpy_s((char *)&uStack_258,100,"");
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1d8) + 0x18))(pcVar12,"isPlWaitPayment");
  if (iVar3 == -1) {
    *(undefined4 *)(param_1 + 0x1ac) = 1;
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x1d8) + 0x74))(iVar3,&stack0xfffffda0,100);
  pbVar7 = &DAT_016bcae4;
  pbVar5 = &stack0xfffffd94;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d4ef56:
      *(uint *)(param_1 + 0x1ac) = (uint)(1 - bVar11 != (uint)(bVar11 != 0));
      return;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d4ef56;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  return;
}

// 00D4EF90  FUN_00d4ef90  size=73  [callgraph]
int __thiscall FUN_00d4ef90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    iVar2 = FUN_00e03ea0(param_2);
    iVar1 = *(int *)(param_1 + 0x118);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 4))) {
      piVar4 = (int *)(*(int *)(iVar1 + 8) + 0x20);
      iVar3 = 0;
      do {
        if (*piVar4 == iVar2) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xb;
      } while (iVar3 < *(int *)(iVar1 + 4));
    }
  }
  return -1;
}

// 00D4EFE0  FUN_00d4efe0  size=81  [callgraph]
undefined4 __fastcall FUN_00d4efe0(byte *param_1)

{
  int local_24;
  undefined1 local_20 [32];
  
  if ((*param_1 & 1) != 0) {
    local_24 = 0;
    PhaseManager::createReadRoomList(local_20,8,&local_24);
    if (local_24 != 0) {
      FUN_00a4e900(local_20,local_24);
      return *(undefined4 *)(param_1 + 0x160);
    }
  }
  return 0xffffffff;
}

// 00D589D0  FUN_00d589d0  size=362  [callgraph]
void __fastcall FUN_00d589d0(int param_1)

{
  if (*(int *)(param_1 + 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    if (*(int *)(param_1 + 0x20c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x200),0);
      *(undefined4 *)(param_1 + 0x20c) = 0;
    }
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  FUN_00d45210(param_1 + 0x110);
  FUN_00e04180();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (DAT_01dc51c0 != (int *)0x0) {
    (**(code **)(*DAT_01dc51c0 + 0x28))(1);
    DAT_01dc51c0 = (int *)0x0;
  }
  return;
}

// 00D58B40  FUN_00d58b40  size=318  [callgraph]
undefined4 __fastcall FUN_00d58b40(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  undefined1 local_20 [32];
  
  if (param_1[0x2e] == 0xffffffff) {
    FUN_00ce1270(0);
    FUN_00cc9890(0,0);
    FUN_00a66470(0xffffffff,0);
    local_28 = DAT_01be921c;
    local_24 = 0;
    local_24 = FUN_00a497e0(DAT_01be921c);
    if (local_24 == -1) {
      if (local_28 == -1) goto LAB_00d58c5f;
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    FUN_00a4e900(&local_28,uVar3);
  }
  else {
    if ((*param_1 & 1) != 0) {
      local_28 = 0;
      PhaseManager::createReadRoomList(local_20,8,&local_28);
      if (local_28 != 0) {
        FUN_00a4e900(local_20,local_28);
        uVar1 = param_1[0x58];
        if (uVar1 != 0xffffffff) {
          FUN_00a4aa80(uVar1);
          piVar2 = (int *)FUN_00c13920();
          (**(code **)(*piVar2 + 0x14))(uVar1);
        }
      }
    }
    FUN_00ce1270(param_1[0x2e]);
    FUN_00cc9890(param_1[0x2e],0);
    FUN_00a66470(param_1[0x2e],*param_1 >> 1 & 1);
  }
LAB_00d58c5f:
  FUN_00a00a60(0x40001,0);
  param_1[1] = 5;
  return 0;
}

// 00D58C80  FUN_00d58c80  size=91  [callgraph]
undefined4 __fastcall FUN_00d58c80(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x208) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x200);
    if (puVar1[0xb] != 0) {
      FUN_00d4e1f0(puVar1 + 2,puVar1[0xc]);
      FUN_00d572e0(0);
      return 0;
    }
    FUN_00d4e140(*puVar1,puVar1 + 2,puVar1[0xc]);
    FUN_00d572e0(0);
  }
  return 0;
}

// 00D58CE0  FUN_00d58ce0  size=129  [callgraph]
undefined4 __fastcall FUN_00d58ce0(byte *param_1)

{
  int local_24;
  undefined1 local_20 [32];
  
  if ((*param_1 & 1) != 0) {
    local_24 = 0;
    PhaseManager::createReadRoomList(local_20,8,&local_24);
    if (local_24 != 0) {
      FUN_00a4e900(local_20,local_24);
      if (*(int *)(param_1 + 0x160) != -1) {
        FUN_00a4aa80(*(int *)(param_1 + 0x160));
        FUN_00a50260(0xfffffffe,1);
        param_1[4] = 0x14;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        return 0;
      }
    }
  }
  param_1[4] = 0x16;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return 1;
}

// 00D58D70  PhaseManager::setSubPhaseData  size=484  [class]
undefined4 __thiscall PhaseManager::setSubPhaseData(int param_1,int param_2)

{
  char *_Dst;
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  _Dst = (char *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  *_Dst = '\0';
  if (param_2 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x118) + 4) < 1) goto LAB_00d58f18;
    pcVar4 = *(char **)(*(int *)(param_1 + 0x118) + 8);
    if (pcVar4 == (char *)0x0) {
      *(undefined4 *)(param_1 + 100) = 0;
      *_Dst = '\0';
    }
    else {
      uVar3 = FUN_00e03ea0(pcVar4);
      *(undefined4 *)(param_1 + 100) = uVar3;
      _strcpy_s(_Dst,0x20,pcVar4);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8);
LAB_00d58f12:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00d4ef90(param_2);
    if (iVar2 < 0) {
      FUN_00dd5650("PhaseManager::setSubPhaseData SUB PHASE is Nothing:%s",param_2);
      puVar1 = *(uint **)(param_1 + 0x118);
      if ((int)puVar1[1] < 1) goto LAB_00d58f18;
      if ((*puVar1 & 0xf00) == 0xc00) {
        FUN_00d44f60(*puVar1,puVar1[2],1);
        FUN_00d44f60(**(undefined4 **)(param_1 + 0x118),(*(undefined4 **)(param_1 + 0x118))[2],1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8);
      }
      else if ((*puVar1 & 0xf00) == 0xd00) {
        FUN_00d44f60(*puVar1,puVar1[2],1);
        FUN_00d44f60(**(undefined4 **)(param_1 + 0x118),(*(undefined4 **)(param_1 + 0x118))[2],1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8);
      }
      else {
        FUN_00d44fb0(puVar1[2]);
        iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8);
      }
      goto LAB_00d58f12;
    }
    iVar5 = iVar2 * 0x2c;
    pcVar4 = (char *)(*(int *)(*(int *)(param_1 + 0x118) + 8) + iVar5);
    if (pcVar4 == (char *)0x0) {
      *(undefined4 *)(param_1 + 100) = 0;
      *_Dst = '\0';
      iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8) + iVar5;
    }
    else {
      uVar3 = FUN_00e03ea0(pcVar4);
      *(undefined4 *)(param_1 + 100) = uVar3;
      _strcpy_s(_Dst,0x20,pcVar4);
      iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8) + iVar5;
    }
  }
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x120) = iVar2;
    *(int *)(param_1 + 0x11c) = iVar5;
    setDefaultData();
    return 1;
  }
LAB_00d58f18:
  FUN_00dd5650(&DAT_016bd408,param_2);
  return 0;
}

// 00D5E590  FUN_00d5e590  size=79  [callgraph]
undefined4 __fastcall FUN_00d5e590(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  piVar2 = (int *)FUN_00c18350();
  (**(code **)(*piVar2 + 0x30))(uVar1,param_1 + 0x3c);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x20))(uVar1,param_1 + 0x3c);
  iVar3 = PhaseManager::setSubPhaseData(param_1 + 0xc0);
  *(uint *)(param_1 + 4) = (-(uint)(iVar3 != 0) & 0xfffffffd) + 0x16;
  return 1;
}

// 00D5E5E0  FUN_00d5e5e0  size=623  [callgraph]
undefined4 __fastcall FUN_00d5e5e0(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  
  param_1[2] = param_1[0xd];
  puVar7 = param_1 + 0xf;
  param_1[3] = param_1[0xe];
  param_1[0xc] = param_1[0x17];
  FID_conflict__memcpy(param_1 + 4,puVar7,0x20);
  param_1[0xd] = param_1[0x2e];
  param_1[0xe] = param_1[0x2f];
  param_1[0x17] = param_1[0x38];
  FID_conflict__memcpy(puVar7,param_1 + 0x30,0x20);
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *param_1 = *param_1 & 0xfffffefb;
  if (param_1[0x62] != 0) {
    param_1[0x39] = param_1[0xd];
    param_1[0x3a] = param_1[0xe];
    param_1[0x43] = param_1[0x17];
    FID_conflict__memcpy(param_1 + 0x3b,puVar7,0x20);
  }
  uVar2 = param_1[0xd];
  puVar7 = param_1 + 0xf;
  piVar3 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar3 + 0x1c))(uVar2);
  piVar3 = (int *)FUN_00c18350();
  (**(code **)(*piVar3 + 0x2c))(uVar2,puVar7);
  FUN_00c95d40(uVar2,puVar7);
  FUN_00c184a0(uVar2,puVar7);
  FUN_009470a0(puVar7);
  FUN_00db8410();
  if (param_1[0x17] != 0) {
    FUN_00d4f4f0();
  }
  uVar4 = FUN_00959930(&stack0xfffffbec,"%sp%03x_%s","bgm_psub_",param_1[0xd],puVar7);
  FUN_00e5e1b0(uVar4);
  param_1[1] = 9;
  if ((param_1[0x62] != 0) || (iVar5 = FUN_009c57d0(), iVar5 != 0)) {
    FUN_00d4f310();
  }
  if (param_1[0xd] == 0xd30) {
    pcVar8 = "PD30_MISSION1";
    puVar6 = puVar7;
    do {
      bVar1 = (byte)*puVar6;
      bVar10 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_00d5e788:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00d5e78d;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)puVar6 + 1);
      bVar10 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_00d5e788;
      puVar6 = (uint *)((int)puVar6 + 2);
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00d5e78d:
    if (iVar5 != 0) {
      pbVar9 = (byte *)0x1649998;
      puVar6 = puVar7;
      do {
        bVar1 = (byte)*puVar6;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00d5e7b8:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00d5e7bd;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)puVar6 + 1);
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00d5e7b8;
        puVar6 = (uint *)((int)puVar6 + 2);
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00d5e7bd:
      if (iVar5 != 0) {
        pcVar8 = "PD30_MISSION3";
        do {
          bVar1 = (byte)*puVar7;
          bVar10 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_00d5e7e8:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00d5e7ed;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar7 + 1);
          bVar10 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_00d5e7e8;
          puVar7 = (uint *)((int)puVar7 + 2);
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00d5e7ed:
        if (iVar5 != 0) {
          return 0;
        }
      }
    }
    iVar5 = FUN_00c82370(1);
    if (iVar5 == 0) {
      FUN_00c82240(1);
      DAT_01bea090 = DAT_01bea090 | 4;
      DAT_018b56fc = 1;
      FUN_00ebddd0();
      cFade::set(0,0xff000000,0,0x78,0,0,0x68);
    }
  }
  return 0;
}

// 00D5E850  FUN_00d5e850  size=381  [callgraph]
undefined4 __thiscall FUN_00d5e850(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_34 [2];
  char local_2c [32];
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  if ((DAT_01bea060 & 0x20000000) != 0) {
    return 0;
  }
  iVar5 = 0;
  if (param_3 == (char *)0x0) {
    param_3 = (char *)FUN_00d45a20(param_2);
    *(undefined4 *)(param_1 + 0x1f8) = 1;
  }
  if ((*(int *)(param_1 + 0x34) == param_2) &&
     (iVar1 = FUN_00e03ea0(param_3), *(int *)(param_1 + 0x38) == iVar1)) {
    FUN_00dd5650(&DAT_016bd87c);
    return 0;
  }
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 8)) {
    FUN_00d4e140(param_2,param_3,1);
    return 1;
  }
  if (*(int *)(param_1 + 0x204) <= *(int *)(param_1 + 0x208)) {
    FUN_00dd5650(&DAT_016bd850);
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x208)) {
    iVar1 = 0;
    do {
      if ((*(int *)(*(int *)(param_1 + 0x200) + iVar1 + 0x2c) == 0) &&
         (iVar2 = FUN_00d45010(param_2,param_3), iVar2 != 0)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar5 < *(int *)(param_1 + 0x208));
  }
  local_8 = 0;
  local_4 = (uint)(*(int *)(param_1 + 4) != 9);
  local_34[0] = param_2;
  local_c = local_4;
  if (param_3 == (char *)0x0) {
    local_34[1] = 0;
    local_2c[0] = '\0';
  }
  else {
    local_34[1] = FUN_00e03ea0(param_3);
    _strcpy_s(local_2c,0x20,param_3);
  }
  local_8 = 0;
  if (*(int *)(param_1 + 0x208) < *(int *)(param_1 + 0x204)) {
    piVar3 = (int *)(*(int *)(param_1 + 0x208) * 0x34 + *(int *)(param_1 + 0x200));
    if (piVar3 != (int *)0x0) {
      piVar4 = local_34;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar3 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      }
    }
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
  }
  return 1;
}

// 00D5EA40  FUN_00d5ea40  size=684  [callgraph]
undefined4 __thiscall FUN_00d5ea40(int param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_34 [44];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0x34) == 0xd30) && (param_2 != (byte *)0x0)) {
    pcVar8 = "PD30_MISSION3";
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar10 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_00d5ea80:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00d5ea85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar10 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_00d5ea80;
      pbVar2 = pbVar2 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d5ea85:
    if (iVar3 == 0) {
      piVar4 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar4 + 0x28))(0xffffffff);
      if (iVar3 != 0) {
        uVar5 = FUN_00a7c8a0();
        iVar3 = FUN_00606cc0(uVar5);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x4e4) != 0)) {
          FUN_00ebddd0();
          return 0;
        }
      }
    }
  }
  if ((DAT_01bea060 & 0x20000000) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0x34)) &&
     (iVar3 = FUN_00e03ea0(param_2), *(int *)(param_1 + 0xbc) == iVar3)) {
    FUN_00dd5650(&DAT_016bd9a4,param_2);
    return 0;
  }
  if (param_3 != 0) {
    iVar3 = FUN_00e03ea0(param_2);
    if (*(int *)(param_1 + 0x38) == iVar3) {
      FUN_00dd5650(&DAT_016bd960);
      return 0;
    }
    uVar11 = 0;
    pbVar2 = param_2;
    uVar5 = FUN_00e03ea0(param_2,0,param_2);
    iVar3 = FUN_00d4f0b0(uVar5,uVar11,pbVar2);
    if (iVar3 != 0) {
      FUN_00dd5650(&DAT_016bd92c);
      return 0;
    }
  }
  iVar3 = FUN_00d4ef90(param_2);
  if (iVar3 < 0) {
    FUN_00dd5650(&DAT_016bd8fc,param_2);
    return 0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  iVar3 = FUN_00d454a0();
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x204) <= *(int *)(param_1 + 0x208)) {
      FUN_00dd5650(&DAT_016bd850);
      return 0;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x208)) {
      iVar9 = 0;
      do {
        if ((*(int *)(*(int *)(param_1 + 0x200) + iVar9 + 0x2c) != 0) &&
           (iVar6 = FUN_00d45010(uVar5,param_2), iVar6 != 0)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + 0x34;
      } while (iVar3 < *(int *)(param_1 + 0x208));
    }
    uVar7 = *(uint *)(param_1 + 0x60) & 0xf00;
    if ((((uVar7 == 0xc00) || (uVar7 == 0xd00)) && (*(uint **)(param_1 + 0x118) != (uint *)0x0)) &&
       (**(uint **)(param_1 + 0x118) != *(uint *)(param_1 + 0x60))) {
      iVar9 = FUN_00e03ea0(param_2);
      iVar3 = *(int *)(*(int *)(param_1 + 0x118) + 4);
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x118) + 8) + 0x20);
        do {
          if (*piVar4 == iVar9) {
            FUN_00dd5650(&DAT_016bd8b8,param_2);
            return 0;
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0xb;
        } while (iVar6 < iVar3);
      }
    }
    uVar11 = param_4;
    uStack_8 = 0;
    uStack_4 = 1;
    FUN_00d44f60(uVar5,param_2,param_4);
    uStack_8 = 1;
    uStack_4 = uVar11;
    FUN_00d5dc10(&param_4,auStack_34);
    return 1;
  }
  FUN_00d4e1f0(param_2,param_4);
  return 1;
}

// 00D5ECF0  FUN_00d5ecf0  size=106  [callgraph]
undefined4 __thiscall FUN_00d5ecf0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (param_2 < 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x114)) {
    piVar3 = *(int **)(param_1 + 0x110);
    while (*piVar3 != *(int *)(param_1 + 0x34)) {
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 4;
      if (*(int *)(param_1 + 0x114) <= iVar1) {
        return 0;
      }
    }
    piVar3 = *(int **)(param_1 + 0x110) + iVar1 * 4;
    if ((piVar3 != (int *)0x0) && (param_2 <= piVar3[1])) {
      uVar2 = FUN_00d5ea40(param_2 * 0x2c + piVar3[2],param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

// 00D5ED60  PhaseManager::setPhaseData  size=140  [class]
undefined4 __thiscall PhaseManager::setPhaseData(uint *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  FUN_00de3540(param_2,0);
  iVar2 = 0;
  param_1[0x46] = 0;
  if (0 < (int)param_1[0x45]) {
    puVar1 = (uint *)param_1[0x44];
    do {
      if (*puVar1 == param_1[0x2e]) {
        param_1[0x46] = (uint)puVar1;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (iVar2 < (int)param_1[0x45]);
  }
  if (param_1[0x46] == 0) {
    FUN_00dd5650(&DAT_016bd9d8,param_1[0x2e]);
  }
  else {
    iVar2 = setSubPhaseData(param_1 + 0x30);
    if (iVar2 != 0) {
      *param_1 = *param_1 | 1;
      return 1;
    }
  }
  return 0;
}

