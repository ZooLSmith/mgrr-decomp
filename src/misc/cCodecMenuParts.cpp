// src/misc/cCodecMenuParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098A510..009AD850, 6 functions

#include "mgrr.h"
#include "cCodecMenuParts.h"

// 0098A510  cCodecMenuParts::vf0C  size=100  [class]
void __fastcall cCodecMenuParts::vf0C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x200))) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
    do {
      uVar5 = 1;
      uVar4 = 0x5b;
      uVar1 = FUN_00cb3300(*puVar2);
      FUN_00d389f0(3,iVar3,0,0,uVar1,uVar4,uVar5);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x200));
  }
  return;
}

// 0098A580  FUN_0098a580  size=646  [callgraph]
void __fastcall FUN_0098a580(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_01dc1418 == '\0') {
    uVar1 = FUN_00ca9ea0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x3c),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x3c),0x2eb626d0);
    uVar1 = FUN_00ca9ea0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x40),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x40),0x2eb626d0);
    FUN_00ce4d70(0xe);
    uVar1 = FUN_00ca9ea0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x44),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x44),0x3c5faa66);
    uVar1 = FUN_00ca9ea0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x48),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x48),0x3c5faa66);
    FUN_00ce4d70(0x10);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x200)) {
      do {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),0);
        uVar1 = FUN_00ca9ea0();
        FUN_00d12030(*(undefined4 *)(param_1 + 0x15c),uVar1);
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x15c),0x6b4872f4);
        uVar1 = FUN_00ca9ea0();
        FUN_00d12030(*(undefined4 *)(param_1 + 0x160),uVar1);
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x160),0x6b4872f4);
        FUN_00ce4d70(0xf);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x200));
    }
  }
  else {
    uVar1 = FUN_00cc7240(0x5a);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x3c),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x3c),uVar1);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x40),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x40),uVar1);
    FUN_00ce4d70(0xe);
    uVar1 = FUN_00cc7240(0x91);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x44),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x44),uVar1);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x48),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x48),uVar1);
    FUN_00ce4d70(0x11);
    uVar1 = FUN_00cc7280(10);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x200)) {
      do {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),1);
        uVar2 = FUN_00ca9eb0();
        FUN_00d12030(*(undefined4 *)(param_1 + 0x15c),uVar2);
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x15c),uVar1);
        uVar2 = FUN_00ca9eb0();
        FUN_00d12030(*(undefined4 *)(param_1 + 0x160),uVar2);
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x160),uVar1);
        FUN_00ce4d70(0x10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x200));
      return;
    }
  }
  return;
}

// 0099B1C0  cCodecMenuParts::vf08  size=1549  [class]
void __fastcall cCodecMenuParts::vf08(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_28;
  int local_24;
  int local_20 [8];
  
  puVar4 = (undefined4 *)(param_1 + 0x1c);
  uVar1 = FUN_00cb25d0(1);
  *puVar4 = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00cb25d0(0x22);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  local_28 = (int *)0x8;
  do {
    uVar1 = FUN_00cb3300(*puVar4);
    FUN_00cb2240(uVar1);
    puVar4 = puVar4 + 1;
    local_28 = (int *)((int)local_28 + -1);
  } while (local_28 != (int *)0x0);
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  uVar1 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  uVar1 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar1 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  uVar1 = FUN_00cb25d0(0x36);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  uVar1 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  uVar1 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  uVar1 = FUN_00cb25d0(0x40);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  uVar1 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  if (*(int *)(param_1 + 0x194) != 0) {
    *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 0;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 1;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  if (*(int *)(param_1 + 0x19c) != 0) {
    *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 2;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 3;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  if (*(int *)(param_1 + 0x1a4) != 0) {
    *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 4;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  if (*(int *)(param_1 + 0x1a8) != 0) {
    *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 5;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  }
  *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 6;
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x200) * 4) = 7;
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x200)) {
    local_28 = (int *)(param_1 + 0x1c0);
    do {
      iVar3 = *local_28;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
      if ((*local_28 == 6) || (*local_28 == 7)) {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x148),(&PTR_s_HUD_CHARA_NAME_S_0029_0188e004)[iVar3]
                     ,0,0xe);
        puVar6 = (&PTR_s_HUD_CHARA_NAME_S_0029_0188e004)[iVar3];
        uVar1 = *(undefined4 *)(param_1 + 0x14c);
        uVar8 = 0xe;
        uVar7 = 0;
      }
      else {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x148),(&PTR_s_HUD_CHARA_NAME_S_0029_0188e004)[iVar3]
                     ,1,1);
        puVar6 = (&PTR_s_HUD_CHARA_NAME_S_0029_0188e004)[iVar3];
        uVar1 = *(undefined4 *)(param_1 + 0x14c);
        uVar8 = 1;
        uVar7 = 1;
      }
      FUN_00cf9770(uVar1,puVar6,uVar7,uVar8);
      if (*(&PTR_s_HUD_SQUAD_NAME_S_00_0188e024)[iVar3] == '\0') {
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x144),0x40a00000);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x154),0);
      }
      else {
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x144),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x154),1);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x150),(&PTR_s_HUD_SQUAD_NAME_S_00_0188e024)[iVar3],0
                     ,1);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x154),(&PTR_s_HUD_SQUAD_NAME_S_00_0188e024)[iVar3],0
                     ,1);
      }
      FUN_00ce4dc0(1,1);
      if (local_28[-0x13] != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x158),0);
      }
      if (iVar3 == 2) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x158),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),0);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x168),"CODEC_SEL_01",0,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x16c),"CODEC_SEL_01",0,0xffffffff);
      }
      else if (iVar3 == 3) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x158),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),0);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x168),"CODEC_SEL_03",0,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x16c),"CODEC_SEL_03",0,0xffffffff);
      }
      else {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x158),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),0);
        if (iVar3 == 6) {
          FUN_00ce4d70(8);
        }
      }
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_1 + 0x200));
  }
  iVar3 = *(int *)(param_1 + 0x200);
  if (iVar3 < 8) {
    puVar4 = (undefined4 *)(param_1 + 0x1c + iVar3 * 4);
    iVar3 = 8 - iVar3;
    do {
      FUN_00cb2310(*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
  FUN_00ce4dc0(0,1);
  iVar3 = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  puVar5 = (uint *)(param_1 + 0x1e0);
  do {
    uVar2 = FUN_00dde2d0(0,*(short *)(param_1 + 0x200) + -1);
    uVar2 = uVar2 & 0xffff;
    if (local_20[uVar2] == 0) {
      *puVar5 = uVar2;
      iVar3 = iVar3 + 1;
      local_20[uVar2] = 1;
      puVar5 = puVar5 + 1;
    }
  } while (iVar3 < *(int *)(param_1 + 0x200));
  FUN_0098a580();
  *(uint *)(param_1 + 0x250) = (uint)DAT_01dc1418;
  FUN_00ce4d70(0);
  FUN_00ce4d70(0xb);
  FUN_00cb2600(1);
  return;
}

// 0099B7D0  FUN_0099b7d0  size=3585  [callgraph]
void __fastcall FUN_0099b7d0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  switch(*(undefined4 *)(param_1 + 0x1b4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1b4) = 1;
    break;
  case 1:
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x200)) {
      do {
        if ((*(int *)(param_1 + 0x210) != 0) || (*(int *)(param_1 + 0x214) != 0)) break;
        cVar2 = FUN_00d0d3e0(3,iVar4);
        if (cVar2 != '\0') {
          *(int *)(param_1 + 0x24c) = iVar4;
          FUN_00e5e050("core_se_sys_cursor",0);
          *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x204);
          *(int *)(param_1 + 0x204) = iVar4;
          *(undefined4 *)(param_1 + 0x210) = 1;
          if (iVar4 < 0) {
            *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x200) + -1;
            *(undefined4 *)(param_1 + 0x218) = 1;
            FUN_00ce4d70(5);
            *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x208);
            uVar9 = 1;
          }
          else {
            FUN_00ce4d70(1);
            uVar9 = 2;
          }
          FUN_00ce4d70(uVar9);
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x200));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x200)) {
      puVar6 = (undefined4 *)(param_1 + 0x1c);
      do {
        uVar9 = FUN_00cb3300(*puVar6);
        FUN_00d38a30(3,iVar4,uVar9);
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x200));
    }
    if (*(int *)(param_1 + 0x210) == 0) {
      if (*(int *)(param_1 + 0x214) == 0) {
        cVar2 = FUN_00cac7e0(0x40008,0);
        if (((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(0), cVar2 == '\0')) ||
           ((*(int *)(param_1 + 0x200) < 2 || (*(int *)(param_1 + 0x24c) != -1)))) {
          cVar2 = FUN_00cac7e0(0x80004,0);
          if ((((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(1), cVar2 == '\0')) ||
              (*(int *)(param_1 + 0x200) < 2)) || (*(int *)(param_1 + 0x24c) != -1)) {
            cVar2 = FUN_00ce12f0(0);
            if (((cVar2 != '\0') || (*(int *)(param_1 + 0x24c) != -1)) &&
               ((*(undefined4 *)(param_1 + 0x24c) = 0xffffffff, 0 < *(int *)(param_1 + 0x200) &&
                (*(int *)(param_1 + 0x174 + *(int *)(param_1 + 0x204) * 4) == 0)))) {
              iVar4 = *(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x204) * 4);
              if (iVar4 == 6) {
                FUN_00e5e050("core_se_sys_decide_s",0);
                (**(code **)(*(int *)(param_1 + 0x238) + 4))(0x2b,2,1);
                *(undefined4 *)(param_1 + 0x1b4) = 0xe;
              }
              else if (iVar4 == 7) {
                FUN_00e5e050("core_se_sys_decide_s",0);
                (**(code **)(*(int *)(param_1 + 0x238) + 4))(0x2a,2,1);
                *(undefined4 *)(param_1 + 0x1b4) = 0xc;
              }
              else {
                FUN_00e5e050("core_se_sys_radio_call_on",0);
                FUN_00ce4d70(1);
                uVar9 = FUN_00c32c20((&PTR_s_borris_0188dfe4)
                                     [*(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x204) * 4)]);
                *(undefined4 *)(param_1 + 0x230) = uVar9;
                FUN_00c32ee0(uVar9);
                _memset(&DAT_01b389c8,0,0x800);
                DAT_01b391d0 = 0;
                *(undefined4 *)(param_1 + 0x234) = 0;
                *(undefined4 *)(param_1 + 0x1b4) = 2;
              }
            }
            break;
          }
          FUN_00e5e050("core_se_sys_cursor",0);
          *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x204);
          iVar4 = *(int *)(param_1 + 0x204) + 1;
          *(int *)(param_1 + 0x204) = iVar4;
          *(undefined4 *)(param_1 + 0x214) = 1;
          if (*(int *)(param_1 + 0x200) <= iVar4) {
            *(undefined4 *)(param_1 + 0x204) = 0;
            *(undefined4 *)(param_1 + 0x21c) = 1;
            FUN_00ce4d70(6);
            *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x208);
            FUN_00ce4d70(1);
            break;
          }
          FUN_00ce4d70(3);
          FUN_00ce4d70(1);
          uVar9 = 2;
        }
        else {
          FUN_00e5e050("core_se_sys_cursor",0);
          *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x204);
          iVar4 = *(int *)(param_1 + 0x204) + -1;
          *(int *)(param_1 + 0x204) = iVar4;
          *(undefined4 *)(param_1 + 0x210) = 1;
          if (-1 < iVar4) {
            FUN_00ce4d70(4);
            FUN_00ce4d70(1);
            FUN_00ce4d70(2);
            break;
          }
          *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x200) + -1;
          *(undefined4 *)(param_1 + 0x218) = 1;
          FUN_00ce4d70(5);
          *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x208);
          uVar9 = 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x21c) == 0) {
          iVar4 = FUN_00ce4dd0(3);
          if (iVar4 != 0) {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
            FUN_00ce4d70(0);
            if (*(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x204) * 4) == 6) {
              FUN_00ce4d70(8);
            }
            *(undefined4 *)(param_1 + 0x214) = 0;
          }
          break;
        }
        iVar4 = FUN_00ce4dd0(6);
        if (iVar4 == 0) break;
        iVar4 = *(int *)(param_1 + 0x20c) + -1;
        *(int *)(param_1 + 0x20c) = iVar4;
        if (iVar4 < 1) {
          *(undefined4 *)(param_1 + 0x20c) = 0;
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
          FUN_00ce4d70(0);
          if (*(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x20c) * 4) == 6) {
            FUN_00ce4d70(8);
          }
          FUN_00ce4d70(2);
          *(undefined4 *)(param_1 + 0x21c) = 0;
          *(undefined4 *)(param_1 + 0x214) = 0;
          break;
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
        uVar9 = 6;
      }
    }
    else {
      if (*(int *)(param_1 + 0x218) == 0) {
        iVar4 = FUN_00ce4dd0(4);
        if (iVar4 != 0) {
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
          FUN_00ce4d70(0);
          if (*(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x204) * 4) == 6) {
            FUN_00ce4d70(8);
          }
          *(undefined4 *)(param_1 + 0x210) = 0;
        }
        break;
      }
      iVar4 = FUN_00ce4dd0(5);
      if (iVar4 == 0) break;
      iVar4 = *(int *)(param_1 + 0x20c) + 1;
      iVar5 = *(int *)(param_1 + 0x200) + -1;
      *(int *)(param_1 + 0x20c) = iVar4;
      if (iVar5 <= iVar4) {
        *(int *)(param_1 + 0x20c) = iVar5;
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
        FUN_00ce4d70(0);
        if (*(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x20c) * 4) == 6) {
          FUN_00ce4d70(8);
        }
        FUN_00ce4d70(2);
        *(undefined4 *)(param_1 + 0x218) = 0;
        *(undefined4 *)(param_1 + 0x210) = 0;
        break;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
      uVar9 = 5;
    }
    FUN_00ce4d70(uVar9);
    break;
  case 2:
    iVar4 = FUN_00ce4dd0(1);
    if (((iVar4 != 0) && (iVar4 = FUN_00c33100(*(undefined4 *)(param_1 + 0x230)), iVar4 != 0)) &&
       (iVar4 = FUN_00c330a0(*(undefined4 *)(param_1 + 0x230)), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined4 *)(param_1 + 0x1b4) = 3;
    }
    break;
  case 3:
    iVar4 = FUN_009c5690();
    if ((iVar4 == 0) || (iVar4 = FUN_009c56a0(), iVar4 == 0)) {
      *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
      if (DAT_01b391cc == 0) {
        if (0x78 < *(int *)(param_1 + 0x248)) {
          *(undefined4 *)(param_1 + 0x248) = 0;
          FUN_00984a00();
          *(undefined4 *)(param_1 + 0x1b4) = 10;
        }
      }
      else {
        FUN_00ce4d70(0xc);
        *(undefined4 *)(param_1 + 0x248) = 0;
        *(undefined4 *)(param_1 + 0x1b4) = 4;
      }
    }
    break;
  case 4:
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
    iVar4 = __stricmp(&DAT_01b389c8 + *(int *)(param_1 + 0x234) * 0x40,"SAVE");
    if (iVar4 == 0) {
      iVar4 = FUN_009c7300();
      pcVar1 = *(code **)(*(int *)(param_1 + 0x238) + 4);
      if (iVar4 == 0) {
        (*pcVar1)(0x3b,1,1);
        *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
        *(undefined4 *)(param_1 + 0x1b4) = 7;
      }
      else {
        (*pcVar1)(6,0,1);
        *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
        *(undefined4 *)(param_1 + 0x1b4) = 6;
      }
      break;
    }
    iVar4 = *(int *)(param_1 + 0x234) * 0x40;
    if ((&DAT_01b389c8)[iVar4] != '\0') {
      FUN_0093b4a0(&DAT_01b389c8 + iVar4,0,0);
      *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
      *(undefined4 *)(param_1 + 0x1b4) = 5;
      break;
    }
    if (*(int *)(param_1 + 0x248) < 0x79) break;
    goto LAB_0099c1d5;
  case 5:
    cVar2 = FUN_00936770();
    if (cVar2 != '\0') break;
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
    iVar4 = __stricmp(&DAT_01b389c8 + *(int *)(param_1 + 0x234) * 0x40,"END");
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x248) < 0x79)) {
      cVar2 = (&DAT_01b389c8)[*(int *)(param_1 + 0x234) * 0x40];
      goto LAB_0099c24a;
    }
    goto LAB_0099c1d5;
  case 6:
    iVar4 = FUN_00999fa0();
    if (iVar4 == 2) {
      FUN_009c8c00(1,0xffffffff);
      *(undefined4 *)(param_1 + 0x1b4) = 8;
      break;
    }
    bVar7 = iVar4 == 1;
    goto LAB_0099c297;
  case 7:
    iVar4 = FUN_00999fa0();
    bVar7 = iVar4 == -1;
LAB_0099c297:
    if (bVar7) {
      DAT_0188e044 = 0;
      *(undefined4 *)(param_1 + 0x1b4) = 9;
    }
    break;
  case 8:
    iVar4 = FUN_009c5690();
    if ((iVar4 == 0) && (DAT_018b5758 == 0)) {
      DAT_0188e044 = 1;
      *(undefined4 *)(param_1 + 0x1b4) = 9;
    }
    break;
  case 9:
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
    iVar4 = __stricmp(&DAT_01b389c8 + *(int *)(param_1 + 0x234) * 0x40,"END");
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x248) < 0x79)) {
      cVar2 = (&DAT_01b389c8)[*(int *)(param_1 + 0x234) * 0x40];
LAB_0099c24a:
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x248) = 0;
        *(undefined4 *)(param_1 + 0x1b4) = 4;
      }
      break;
    }
LAB_0099c1d5:
    *(undefined4 *)(param_1 + 0x248) = 0;
    FUN_00984a00();
    *(undefined4 *)(param_1 + 0x1b4) = 10;
    break;
  case 10:
    iVar4 = FUN_00984a10();
    if (iVar4 == 0) {
      FUN_00ce4d70(2);
      *(undefined4 *)(param_1 + 0x1b4) = 0xb;
    }
    break;
  case 0xb:
    DAT_01b391cc = 0;
    iVar4 = FUN_00ce4dd0(2);
    if (iVar4 != 0) {
      FUN_00ce4d70(0xb);
      FUN_00c32e70(*(undefined4 *)(param_1 + 0x230));
      *(undefined4 *)(param_1 + 0x1b4) = 1;
    }
    break;
  case 0xc:
    iVar4 = FUN_00999fa0();
    if (iVar4 == 2) {
      FUN_00e5e050("core_se_sys_radio_exit",0);
      DAT_01bea094 = DAT_01bea094 | 0x10;
      piVar3 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar3 + 0x18))();
      FUN_009c8c00(1,0xffffffff);
      *(undefined4 *)(param_1 + 0x1b4) = 0xd;
      break;
    }
    goto LAB_0099c421;
  case 0xd:
    iVar4 = FUN_009c5690();
    if ((iVar4 != 0) || (DAT_018b5758 != 0)) break;
    iVar4 = FUN_009c73f0(5);
    if (iVar4 == 1) {
      uVar9 = 0xf30;
    }
    else {
      uVar9 = 0xf06;
    }
    goto LAB_0099c4fb;
  case 0xe:
    iVar4 = FUN_00999fa0();
    if (iVar4 == 2) {
      piVar3 = (int *)FUN_00c13920();
      (**(code **)(*piVar3 + 0x80))();
      FUN_00e5e050("core_se_sys_radio_exit",0);
      piVar3 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar3 + 0x18))();
      FUN_009c8c00(1,0xffffffff);
      *(undefined4 *)(param_1 + 0x1b4) = 0xf;
      break;
    }
LAB_0099c421:
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x1b4) = 1;
    }
    break;
  case 0xf:
    iVar4 = FUN_009c5690();
    if ((iVar4 != 0) || (DAT_018b5758 != 0)) break;
    uVar9 = 0xf05;
LAB_0099c4fb:
    FUN_00a4ac40(uVar9,"START",0xffffffff);
    *(undefined4 *)(param_1 + 0x1b4) = 0x10;
  }
  iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x50));
  local_1c = *(float *)(iVar4 + 0x94);
  local_18 = *(undefined4 *)(iVar4 + 0x98);
  local_20 = *(float *)(iVar4 + 0x90);
  fVar8 = (float10)FUN_00cad4b0();
  local_20 = (float)((float10)local_20 / fVar8);
  fVar8 = (float10)FUN_00cad4d0();
  local_1c = (float)((float10)local_1c / fVar8);
  FUN_00984be0(&local_20,0);
  iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x54));
  local_1c = *(float *)(iVar4 + 0x94);
  local_18 = *(undefined4 *)(iVar4 + 0x98);
  local_20 = *(float *)(iVar4 + 0x90);
  fVar8 = (float10)FUN_00cad4b0();
  local_20 = (float)((float10)local_20 / fVar8);
  fVar8 = (float10)FUN_00cad4d0();
  local_1c = (float)((float10)local_1c / fVar8);
  FUN_00984be0(&local_20,1);
  return;
}

// 009AD830  cCodecMenuParts::vf00  size=30  [class]
undefined4 __thiscall cCodecMenuParts::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AD850  cCodecMenuParts::vf14  size=308  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cCodecMenuParts::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x1b0)) {
  case 0:
    if (1.0 < _DAT_01dc203c != (_DAT_01dc203c == 1.0)) {
      FUN_00ce4d70(1);
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
    }
    break;
  case 1:
    uVar2 = 1;
    goto LAB_009ad890;
  case 2:
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    if (3 < *(int *)(param_1 + 0x1b8)) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      FUN_00ce4ce0(*(undefined4 *)
                    (param_1 + 0x1c + *(int *)(param_1 + 0x1e0 + *(int *)(param_1 + 0x1bc) * 4) * 4)
                   ,2);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x148),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x14c),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x150),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x154),0,3);
      *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
    }
    if (*(int *)(param_1 + 0x200) <= *(int *)(param_1 + 0x1bc)) {
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
    }
    break;
  case 3:
    uVar2 = 2;
LAB_009ad890:
    iVar1 = FUN_00ce4dd0(uVar2);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
    }
    break;
  case 4:
    FUN_0099b7d0();
  }
  if (*(uint *)(param_1 + 0x250) != (uint)DAT_01dc1418) {
    FUN_0098a580();
    *(uint *)(param_1 + 0x250) = (uint)DAT_01dc1418;
  }
  return;
}

