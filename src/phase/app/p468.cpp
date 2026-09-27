// src/phase/app/p468.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4A6D0..00D704D0, 7 functions

#include "mgrr.h"
#include "P468.h"

// 00D4A6D0  P468::vf1C  size=50  [class]
void __thiscall P468::vf1C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00fdbbd0(param_3,"P468_RESTART");
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x130);
  }
  return;
}

// 00D4A710  P468::vf08  size=70  [class]
void __fastcall P468::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0("P468_BTL");
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  uVar1 = FUN_00e03ea0("P468_RESTART");
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_00e03ea0("P468_EV_END");
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

// 00D4A760  P468::vf0C  size=1  [class]
void P468::vf0C(void)

{
  return;
}

// 00D54C20  P468::vf10  size=11  [class]
void P468::vf10(void)

{
  DAT_01bea090 = DAT_01bea090 & 0xfeffffff;
  return;
}

// 00D63910  P468::vf14  size=561  [class]
void __thiscall P468::vf14(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_104 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  pbVar8 = (byte *)0x16bded0;
  pbVar4 = param_3;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_00d63960:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00d63965;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_00d63960;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00d63965:
  if (iVar5 == 0) {
    DAT_01bea090 = DAT_01bea090 | 0x1000000;
  }
  iVar5 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
  if (iVar5 == 0) {
    uVar10 = 0x36;
  }
  else {
    uVar10 = 0x32;
  }
  EffectAreaScrSystem::SetEffectAreaEnable(0x400,uVar10,0);
  iVar5 = FUN_00fdbbd0(param_3,"P468_RESTART");
  if (iVar5 != 0) {
    FUN_0118f7b0();
    local_50 = 0;
    local_2c = 5;
    local_e0[0] = 0x14;
    piVar6 = (int *)FUN_00910da0();
    local_f0 = 0x42340000;
    local_ec = 0x40000000;
    local_e8 = 0x42a00000;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_100 = 0x41960000;
    local_fc = 0x43a84000;
    local_f8 = 0xc1f5999a;
    uVar10 = (**(code **)(*piVar6 + 4))(local_104,local_e0,&local_100,&local_120,&local_f0,1);
    FUN_00910ab0(uVar10);
    iVar5 = *(int *)(param_1 + 0x130);
    if (iVar5 != 0) {
      if (DAT_01885d68 != 1) {
        iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar6 = (int *)(iVar2 + 4);
        *piVar6 = *piVar6 + 1;
      }
      uVar3 = *(uint *)(iVar5 + 0xc);
      puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0xf;
      if (DAT_01885d68 != 1) {
        piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar6 = *piVar6 + -1;
        if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),4);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x130),0x20);
    FUN_00911ca0("programmabled");
  }
  return;
}

// 00D63B50  P468::vf18  size=398  [class]
void __fastcall P468::vf18(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined **local_110;
  undefined1 *local_10c;
  int local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x11c),0);
  if ((iVar1 != 0) && (iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1), iVar1 == 0)) {
    FUN_00cad2a0();
  }
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
  local_10c = local_100;
  local_108 = 0;
  local_104 = 0x40;
  local_110 = lib::StaticArray<Entity*,64>::vftable;
  if (*(int *)(param_1 + 0x128) == 0) {
    local_108 = 0;
    iVar2 = FUN_00a7f440(0xd5041,&local_110);
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x128) = 1;
    }
    puVar5 = local_10c;
    if (local_10c != local_10c + local_108 * 4) {
      do {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          if (iVar1 == 0) {
            pcVar4 = *(code **)(*piVar3 + 0x1c);
          }
          else {
            pcVar4 = *(code **)(*piVar3 + 0x20);
          }
          (*pcVar4)();
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != local_10c + local_108 * 4);
    }
  }
  if (*(int *)(param_1 + 300) == 0) {
    if (local_10c != (undefined1 *)0x0) {
      local_108 = 0;
    }
    iVar2 = FUN_00a7f440(0xd5042,&local_110);
    if (iVar2 == 0x3e) {
      *(undefined4 *)(param_1 + 300) = 1;
    }
    puVar5 = local_10c;
    if (local_10c != local_10c + local_108 * 4) {
      do {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          if (iVar1 == 0) {
            pcVar4 = *(code **)(*piVar3 + 0x20);
          }
          else {
            pcVar4 = *(code **)(*piVar3 + 0x1c);
          }
          (*pcVar4)();
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != local_10c + local_108 * 4);
    }
  }
  iVar1 = FUN_00e03ea0("P468_EVENT");
  if (DAT_018b9178 == iVar1) {
    DAT_01bea090 = DAT_01bea090 | 0x1000000;
  }
  return;
}

// 00D704D0  P468::vf00  size=54  [class]
undefined4 * __thiscall P468::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

