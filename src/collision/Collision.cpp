// src/collision/Collision.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77290..00D7D970, 13 functions

#include "mgrr.h"
#include "Collision.h"
#include "hkpCdPointCollector.h"

// 00D77290  Collision::vf14  size=1  [class]
void Collision::vf14(void)

{
  return;
}

// 00D77D20  Collision::vf18  size=279  [class]
float * __thiscall Collision::vf18(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x368);
  fVar1 = *(float *)(iVar4 + 0x84);
  fVar2 = *(float *)(iVar4 + 0x88);
  fVar3 = *(float *)(iVar4 + 0x8c);
  *param_2 = *param_3 - *(float *)(iVar4 + 0x80);
  param_2[1] = param_3[1] - fVar1;
  param_2[2] = param_3[2] - fVar2;
  param_2[3] = param_3[3] - fVar3;
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar1 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
    return param_2;
  }
  FUN_00ddf460(param_2,param_2);
  return param_2;
}

// 00D77E40  Collision::addObjDatReference  size=127  [class]
void __thiscall Collision::addObjDatReference(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x428) != -1) {
    FUN_00dd5650(&DAT_016c1078);
    if (*(int *)(param_1 + 0x428) != -1) {
      FUN_009fe7d0(*(int *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x42c));
    }
    *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x42c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  FUN_009fe710(param_2,param_3);
  *(undefined4 *)(param_1 + 0x42c) = param_3;
  *(undefined4 *)(param_1 + 0x428) = param_2;
  *(undefined4 *)(param_1 + 0x430) = 1;
  return;
}

// 00D7AD10  Collision::vf20  size=76  [class]
void __thiscall
Collision::vf20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x37c) == 0) {
    iVar1 = FUN_00dd3500(0x50,&DAT_01b7c0b8);
    if (iVar1 != 0) {
      uVar2 = FUN_00d7a3a0(param_1,param_2,param_3,param_4);
      *(undefined4 *)(param_1 + 0x37c) = uVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0x37c) = 0;
  }
  return;
}

// 00D7AD60  Collision::vf0C  size=786  [class]
undefined4 __thiscall Collision::vf0C(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar6 = *(undefined4 **)(param_1 + 0x20);
  if (puVar6 != puVar6 + *(int *)(param_1 + 0x24) * 0xc) {
    do {
      iVar8 = (int)*(char *)(puVar6[10] + 0x10) + puVar6[10];
      if (iVar8 != 0) {
        iVar2 = FUN_008f7780(iVar8);
        iVar3 = FUN_00a7c8a0();
        if (iVar2 == iVar3) {
          pbVar5 = (byte *)(param_2 + 0x394);
          pbVar4 = (byte *)(*(uint *)(iVar8 + 0x78) & 0xfffffffe);
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d7ade4:
              iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00d7ade9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d7ade4;
            pbVar4 = pbVar4 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_00d7ade9:
          if (iVar8 == 0) {
            puVar7 = *(undefined4 **)(param_1 + 0x1c0);
            if (puVar7 == puVar7 + *(int *)(param_1 + 0x1c4) * 0xc) goto LAB_00d7af36;
            goto LAB_00d7aeb7;
          }
        }
      }
      puVar6 = puVar6 + 0xc;
    } while (puVar6 != (undefined4 *)(*(int *)(param_1 + 0x24) * 0x30 + *(int *)(param_1 + 0x20)));
  }
  puVar6 = *(undefined4 **)(param_1 + 0x1c0);
  if (puVar6 != puVar6 + *(int *)(param_1 + 0x1c4) * 0xc) {
    do {
      iVar8 = (int)*(char *)(puVar6[10] + 0x10) + puVar6[10];
      if (iVar8 != 0) {
        iVar2 = FUN_008f7780(iVar8);
        iVar3 = FUN_00a7c8a0();
        if (iVar2 == iVar3) {
          pbVar5 = (byte *)(param_2 + 0x394);
          pbVar4 = (byte *)(*(uint *)(iVar8 + 0x78) & 0xfffffffe);
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d7afd9:
              iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00d7afde;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d7afd9;
            pbVar4 = pbVar4 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_00d7afde:
          if (iVar8 == 0) {
            local_20 = *puVar6;
            local_1c = puVar6[1];
            local_18 = puVar6[2];
            local_14 = puVar6[3];
            local_30 = puVar6[4];
            local_2c = puVar6[5];
            local_28 = puVar6[6];
            local_24 = puVar6[7];
            FUN_00d79f30(param_1,&local_20,&local_30);
            return *(undefined4 *)(param_2 + 0x41c);
          }
        }
      }
      puVar6 = puVar6 + 0xc;
    } while (puVar6 != (undefined4 *)(*(int *)(param_1 + 0x1c4) * 0x30 + *(int *)(param_1 + 0x1c0)))
    ;
  }
  return 0;
LAB_00d7aeb7:
  iVar8 = (int)*(char *)(puVar7[10] + 0x10) + puVar7[10];
  if (iVar8 != 0) {
    iVar2 = FUN_008f7780(iVar8);
    iVar3 = FUN_00a7c8a0();
    if (iVar2 == iVar3) {
      pbVar4 = (byte *)(param_2 + 0x394);
      pbVar5 = (byte *)(*(uint *)(iVar8 + 0x78) & 0xfffffffe);
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00d7af10:
          iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00d7af15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00d7af10;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_00d7af15:
      if (iVar8 == 0) {
        local_20 = *puVar7;
        local_1c = puVar7[1];
        local_18 = puVar7[2];
        local_14 = puVar7[3];
        local_30 = puVar7[4];
        local_2c = puVar7[5];
        local_28 = puVar7[6];
        local_24 = puVar7[7];
        goto LAB_00d7afac;
      }
    }
  }
  puVar7 = puVar7 + 0xc;
  if (puVar7 == (undefined4 *)(*(int *)(param_1 + 0x1c4) * 0x30 + *(int *)(param_1 + 0x1c0))) {
LAB_00d7af36:
    local_20 = *puVar6;
    local_1c = puVar6[1];
    local_18 = puVar6[2];
    local_14 = puVar6[3];
    local_30 = puVar6[4];
    local_2c = puVar6[5];
    local_28 = puVar6[6];
    local_24 = puVar6[7];
LAB_00d7afac:
    FUN_00d79f30(param_1,&local_20,&local_30);
    return *(undefined4 *)(param_2 + 0x41c);
  }
  goto LAB_00d7aeb7;
}

// 00D7C050  Collision::Collision  size=579  [class]
undefined4 * __thiscall
Collision::Collision
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = vftable;
  param_1[5] = 0x7f7fffee;
  param_1[4] = hkpAllCdPointCollector::vftable;
  param_1[8] = param_1 + 0xc;
  param_1[10] = 0x80000008;
  param_1[9] = 0;
  param_1[5] = 0x7f7fffee;
  param_1[0x6c] = hkpAllCdPointCollector::vftable;
  param_1[0x6d] = 0x7f7fffee;
  param_1[0x72] = 0x80000008;
  param_1[0x70] = param_1 + 0x74;
  param_1[0x71] = 0;
  param_1[0x6d] = 0x7f7fffee;
  param_1[0xd4] = 1;
  uVar2 = (**(code **)*DAT_01dc52e8)();
  param_1[0x105] = 0;
  param_1[0xd5] = uVar2;
  param_1[0xda] = param_2;
  param_1[0xdc] = param_4;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdb] = param_3;
  param_1[0xdd] = 0;
  param_1[0xde] = param_5;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 1;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0xffffffff;
  param_1[0x104] = 0xffffffff;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x10a] = 0xffffffff;
  param_1[0x10b] = 0xffffffff;
  param_1[0x10c] = 0;
  param_1[0xe0] = param_1;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  puVar3 = (undefined4 *)FUN_00dd3500(0x6f0,&DAT_01b7c0b8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = puVar3 + 4;
    puVar3[2] = 0;
    puVar3[3] = 5;
    *puVar3 = lib::StaticArray<Collision::History,5>::vftable;
  }
  param_1[0x10d] = puVar3;
  puVar3 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7c0b8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = puVar3 + 4;
    puVar3[2] = 0;
    puVar3[3] = 5;
    *puVar3 = lib::StaticArray<Collision::WithinOneFrame,5>::vftable;
  }
  puVar1 = (undefined4 *)param_1[0x10d];
  param_1[0x10e] = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar3 != (undefined4 *)0x0) goto LAB_00d7c242;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      param_1[0x10d] = 0;
    }
  }
  if ((undefined4 *)param_1[0x10e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10e])(1);
    param_1[0x10e] = 0;
  }
  FUN_00dd5650(&DAT_016c13c0);
LAB_00d7c242:
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  return param_1;
}

// 00D7C2A0  Collision::vf00  size=6  [class]
undefined * Collision::vf00(void)

{
  return &DAT_01dc52f0;
}

// 00D7C2B0  Collision::~Collision  size=260  [class]
void __fastcall Collision::~Collision(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xde];
  *param_1 = vftable;
  if ((piVar1 != (int *)0x0) && (piVar1[1] != 0)) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if ((undefined4 *)param_1[0x10e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10e])(1);
    param_1[0x10e] = 0;
  }
  if ((undefined4 *)param_1[0x10d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10d])(1);
    param_1[0x10d] = 0;
  }
  if (param_1[0x10c] != 0) {
    FUN_00dd5650(&DAT_016c1418);
  }
  param_1[0x6c] = hkpAllCdPointCollector::vftable;
  param_1[0x71] = 0;
  if (-1 < (int)param_1[0x72]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x70],(param_1[0x72] & 0x3fffffff) * 0x30);
  }
  param_1[0x70] = 0;
  param_1[0x72] = 0x80000000;
  param_1[0x6c] = hkpCdPointCollector::vftable;
  param_1[4] = hkpAllCdPointCollector::vftable;
  param_1[9] = 0;
  if (-1 < (int)param_1[10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],(param_1[10] & 0x3fffffff) * 0x30);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[4] = hkpCdPointCollector::vftable;
  return;
}

// 00D7C3C0  hkpCdPointCollector::hkpCdPointCollector_6  size=3070  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall hkpCdPointCollector::hkpCdPointCollector_6(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  undefined *puVar18;
  int local_330;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  undefined4 local_2f4;
  int *local_2e4;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  uint local_2d0;
  float local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  undefined1 auStack_260 [32];
  undefined4 uStack_240;
  undefined2 uStack_23c;
  undefined4 uStack_238;
  int iStack_234;
  undefined1 *puStack_228;
  undefined1 auStack_210 [48];
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined4 *local_1a0;
  int local_19c;
  uint local_198;
  undefined4 local_190 [99];
  
  local_2e4 = param_1;
  FUN_004066f0();
  if (param_1[0x10] != 0) {
    FUN_00d7a140();
    param_1[0x10] = 0;
  }
  Phantom::setTransform(*(int *)(*param_1 + 0x368) + 0x50);
  iVar9 = FUN_00900bb0();
  if (((*(char *)(iVar9 + 8) == '\x04') &&
      (iVar10 = *(int *)(*param_1 + 0x368), *(int *)(iVar10 + 0x14) == 3)) &&
     (*(int *)(iVar10 + 0xd0) != 0)) {
    local_298 = 0;
    local_29c = 0;
    local_2a0 = 0;
    local_2a4 = 0;
    local_2ac = 0;
    local_2b0 = 0;
    local_2b4 = 0;
    local_2b8 = 0;
    local_2c0 = 0;
    local_2c4 = 0;
    local_2c8 = 0;
    local_2cc = 0.0;
    local_294 = 0x3f800000;
    local_2a8 = 0x3f800000;
    local_2bc = 0x3f800000;
    local_2d0 = 0x3f800000;
    Phantom::setTransform(&local_2d0);
    uVar11 = *(undefined4 *)(iVar10 + 0x104);
    uVar7 = *(undefined4 *)(iVar10 + 0x108);
    uVar8 = *(undefined4 *)(iVar10 + 0x10c);
    *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar10 + 0x100);
    *(undefined4 *)(iVar9 + 0x24) = uVar11;
    *(undefined4 *)(iVar9 + 0x28) = uVar7;
    *(undefined4 *)(iVar9 + 0x2c) = uVar8;
    *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar9 + 0x10);
    uVar11 = *(undefined4 *)(iVar10 + 0x114);
    uVar7 = *(undefined4 *)(iVar10 + 0x118);
    uVar8 = *(undefined4 *)(iVar10 + 0x11c);
    *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar10 + 0x110);
    *(undefined4 *)(iVar9 + 0x34) = uVar11;
    *(undefined4 *)(iVar9 + 0x38) = uVar7;
    *(undefined4 *)(iVar9 + 0x3c) = uVar8;
    *(undefined4 *)(iVar9 + 0x3c) = *(undefined4 *)(iVar9 + 0x10);
  }
  local_1a0 = local_190;
  param_1[8] = param_1[0xc];
  param_1[9] = param_1[0xd];
  param_1[10] = param_1[0xe];
  param_1[0xb] = param_1[0xf];
  iVar9 = *(int *)(*param_1 + 0x368);
  param_1[0xc] = *(int *)(iVar9 + 0x80);
  param_1[0xd] = *(int *)(iVar9 + 0x84);
  param_1[0xe] = *(int *)(iVar9 + 0x88);
  param_1[0xf] = *(int *)(iVar9 + 0x8c);
  local_1b0 = hkpAllCdPointCollector::vftable;
  local_1ac = 0x7f7fffee;
  local_198 = 0x80000008;
  local_19c = 0;
  FUN_00900350(&local_1b0);
  puVar15 = local_1a0;
  if (local_1a0 != local_1a0 + local_19c * 0xc) {
    do {
      iVar9 = (int)*(char *)(puVar15[10] + 0x10) + puVar15[10];
      piVar12 = param_1;
      if (((iVar9 != 0) &&
          (iVar10 = FUN_008f7780((int)*(char *)(puVar15[8] + 0x10) + puVar15[8]),
          piVar12 = local_2e4, iVar10 != 0)) && ((*(byte *)(iVar10 + 0x4c8) & 2) == 0)) {
        uVar14 = *(uint *)(iVar9 + 0xc);
        if (uVar14 != 0) {
          local_330 = *(int *)((-(uint)(uVar14 != 0) & uVar14) + 0x1c);
        }
        else {
          local_330 = 0;
        }
        if ((uVar14 != 0) && (*(int *)((-(uint)(uVar14 != 0) & uVar14) + 0x18) != 0)) {
          iVar10 = puVar15[10];
          if (*(char *)(iVar10 + 0x18) == '\x01') {
            iVar10 = *(char *)(iVar10 + 0x10) + iVar10;
          }
          else {
            iVar10 = 0;
          }
          local_300 = *(uint *)(iVar10 + 0x120);
          local_2fc = *(uint *)(iVar10 + 0x124);
          local_2f8 = *(uint *)(iVar10 + 0x128);
          local_2f4 = *(undefined4 *)(iVar10 + 300);
        }
        else if (local_330 != 0) {
          iVar10 = puVar15[10];
          if (*(char *)(iVar10 + 0x18) == '\x02') {
            iVar10 = *(char *)(iVar10 + 0x10) + iVar10;
          }
          else {
            iVar10 = 0;
          }
          local_300 = *(uint *)(iVar10 + 0xd0);
          local_2fc = *(uint *)(iVar10 + 0xd4);
          local_2f8 = *(uint *)(iVar10 + 0xd8);
          local_2f4 = *(undefined4 *)(iVar10 + 0xdc);
        }
        (**(code **)(*(int *)*param_1 + 0x18))(&local_2e0,&local_300);
        local_2cc = 0.0;
        local_2b0 = local_300;
        puVar13 = &uStack_270;
        local_2ac = local_2fc;
        local_2a8 = local_2f8;
        FUN_00a7c8a0(puVar13);
        FUN_00a925a0(puVar13);
        puVar1 = *(undefined4 **)(*param_1 + 0x378);
        if (puVar1 != (undefined4 *)0x0) {
          puVar18 = &DAT_01dc526c;
          (**(code **)*puVar1)(&DAT_01dc526c);
          iVar10 = FUN_00dd6d80(puVar18);
          if (iVar10 != 0) {
            iVar10 = puVar1[2];
            uVar14 = *(uint *)(iVar9 + 0xc);
            bVar16 = *(int *)(iVar10 + 0x94) == 0;
            if ((uVar14 == 0) || (*(int *)((-(uint)(uVar14 != 0) & uVar14) + 0x80) == 0)) {
LAB_00d7c7bc:
              puVar13 = (uint *)puVar1[2];
              if (puVar13[0x25] == 0) {
                local_2c0 = (uint)*(byte *)((int)puVar13 + 0x11);
                local_2cc = (float)(int)puVar13[1];
                local_2c8 = puVar13[0x23];
                local_2c4 = puVar13[0x24];
                local_2d0 = *puVar13;
                uVar14 = *(uint *)(iVar9 + 0xc);
                if (uVar14 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(uint *)((-(uint)(uVar14 != 0) & uVar14) + 0x30);
                }
                bVar17 = (uVar14 & 0x800000) != 0;
                bVar16 = bVar17 || bVar16;
                if (*puVar13 == 0x1b0) {
                  bVar16 = false;
                }
                else if (((bVar17) && (iVar10 = FUN_008f7780(iVar9), iVar10 != 0)) &&
                        ((*(byte *)(iVar10 + 0x4c8) & 2) == 0)) {
                  uStack_280 = *puVar15;
                  uStack_27c = puVar15[1];
                  uStack_278 = puVar15[2];
                  FUN_009dbcf0();
                  uStack_238 = FUN_008ff560(puVar15);
                  FID_conflict__memcpy(auStack_210,(void *)(puVar1[2] + 0x40),0x40);
                  uStack_1e0 = uStack_280;
                  puStack_228 = auStack_210;
                  uStack_1dc = uStack_27c;
                  uStack_1d8 = uStack_278;
                  FUN_009dbd80(iVar10);
                  uStack_23c = 0xffff;
                  if ((*(uint *)(puVar1[2] + 0x8c) & 0x20000000) == 0) {
                    iStack_234 = ((*(uint *)(puVar1[2] + 0x8c) & 0x800000) != 0) + 1;
                    EffectAttrSystem::RequestCall(auStack_260);
                  }
                  else {
                    iStack_234 = 3;
                    EffectAttrSystem::RequestCall(auStack_260);
                  }
                }
              }
            }
            else if (*(int *)(iVar10 + 0x94) == 0) {
              iVar10 = FUN_008f8410(*(undefined4 *)(iVar10 + 0xf4));
              if (iVar10 == 0) {
                uVar11 = *(undefined4 *)(puVar1[2] + 0xf4);
LAB_00d7c7b5:
                FUN_008f8fb0(uVar11);
                goto LAB_00d7c7bc;
              }
            }
            else {
              if ((*(uint *)((-(uint)(uVar14 != 0) & uVar14) + 0x30) & 0x800000) == 0)
              goto LAB_00d7c7bc;
              iVar10 = FUN_008f8410(*(undefined4 *)(iVar10 + 0xf4));
              if (iVar10 == 0) {
                uVar11 = *(undefined4 *)(puVar1[2] + 0xf4);
                goto LAB_00d7c7b5;
              }
            }
            uVar14 = *(uint *)(iVar9 + 0xc);
            if (((uVar14 != 0) && (*(int *)((-(uint)(uVar14 != 0) & uVar14) + 0x18) != 0)) &&
               (iVar10 = FUN_008f8cf0(iVar9,0x2000), iVar10 == 0)) {
              iVar10 = puVar15[10];
              if (*(char *)(iVar10 + 0x18) == '\x01') {
                iVar10 = *(char *)(iVar10 + 0x10) + iVar10;
              }
              else {
                iVar10 = 0;
              }
              iVar2 = *(int *)(puVar1[2] + 8);
              if (iVar2 != 0) {
                fVar5 = (float)iVar2;
                fVar4 = (float)*(int *)(puVar1[2] + 0xc);
                fVar3 = fVar5 * local_2e0 * fVar4;
                fVar6 = fVar4 * fVar5 * fStack_2dc;
                fVar4 = fVar4 * fVar5 * fStack_2d8;
                fStack_304 = 0.0;
                fVar5 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3);
                if (!NAN(fVar5) && 1.8446726e+19 < fVar5 != (fVar5 == 1.8446726e+19)) {
                  fVar3 = local_2e0 * 1.8446726e+19;
                  fVar6 = fStack_2dc * 1.8446726e+19;
                  fVar4 = fStack_2d8 * 1.8446726e+19;
                  fStack_304 = fStack_2d4 * 1.8446726e+19;
                }
                if (((fVar3 != 0.0) || (fVar6 != 0.0)) || (fVar4 != 0.0)) {
                  fStack_1c4 = fStack_304;
                  fStack_1d0 = fVar3;
                  fStack_1cc = fVar6;
                  fStack_1c8 = fVar4;
                  FUN_00911770(&fStack_1d0);
                }
              }
              if (((((int *)puVar1[2])[0x23] & 0x20000000U) != 0) || (*(int *)puVar1[2] == 0x147)) {
                uVar14 = *(uint *)(iVar9 + 0xc);
                if (uVar14 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(uint *)((-(uint)(uVar14 != 0) & uVar14) + 8);
                }
                if ((uVar14 & 0x80000) != 0) {
                  uVar11 = FUN_008f7780(iVar9);
                  piVar12 = (int *)FUN_0065f570(uVar11);
                  if (piVar12 != (int *)0x0) {
                    (**(code **)(*piVar12 + 0x254))(iVar10,puVar1[2]);
                  }
                }
              }
            }
            iVar10 = FUN_008f7780(iVar9);
            if (((iVar10 != 0) && (iVar2 = puVar1[2], *(int *)(iVar2 + 0x94) != 0)) &&
               ((*(byte *)(iVar10 + 0x4c8) & 2) == 0)) {
              piVar12 = (int *)FUN_00a7c8a0();
              (**(code **)(*piVar12 + 0x1d0))(iVar2);
            }
            piVar12 = local_2e4;
            if (((bVar16) && (local_2cc != 0.0)) &&
               ((local_330 == 0 && (uVar14 = *(uint *)(iVar9 + 0xc), uVar14 != 0)))) {
              puVar13 = (uint *)(-(uint)(uVar14 != 0) & uVar14);
              *puVar13 = *puVar13 | 0x80000;
              puVar13[0x15] = local_2d0;
              *puVar13 = *puVar13 | 0x100000;
              puVar13[0x16] = (uint)local_2cc;
              *puVar13 = *puVar13 | 0x800000;
              puVar13[0x19] = local_2c0;
              *puVar13 = *puVar13 | 0x200000;
              puVar13[0x17] = local_2c8;
              *puVar13 = *puVar13 | 0x400000;
              puVar13[0x18] = local_2c4;
              *puVar13 = *puVar13 | 0x1000000;
              puVar13[0x1a] = local_2b0;
              *puVar13 = *puVar13 | 0x2000000;
              puVar13[0x1b] = local_2ac;
              *puVar13 = *puVar13 | 0x4000000;
              puVar13[0x1c] = local_2a8;
              *puVar13 = *puVar13 | 0x8000000;
              puVar13[0x1d] = uStack_270;
              *puVar13 = *puVar13 | 0x10000000;
              puVar13[0x1e] = uStack_26c;
              *puVar13 = *puVar13 | 0x20000000;
              puVar13[0x1f] = uStack_268;
            }
            goto LAB_00d7cefe;
          }
        }
        uVar14 = *(uint *)(iVar9 + 0xc);
        if (((uVar14 != 0) && (*(int *)((-(uint)(uVar14 != 0) & uVar14) + 0x18) != 0)) &&
           (iVar10 = FUN_008f8cf0(iVar9,0x2000), iVar10 == 0)) {
          iVar10 = puVar15[10];
          if (*(char *)(iVar10 + 0x18) == '\x01') {
            iVar10 = *(char *)(iVar10 + 0x10) + iVar10;
          }
          else {
            iVar10 = 0;
          }
          fStack_320 = local_2e0 * 100.0;
          fStack_31c = fStack_2dc * 100.0;
          fStack_318 = fStack_2d8 * 100.0;
          fStack_314 = 0.0;
          if (1.8446726e+19 <=
              SQRT(fStack_318 * fStack_318 + fStack_31c * fStack_31c + fStack_320 * fStack_320)) {
            fStack_320 = local_2e0;
            fStack_31c = fStack_2dc;
            fStack_318 = fStack_2d8;
            fStack_314 = fStack_2d4;
          }
          fStack_1c0 = fStack_320;
          fStack_1bc = fStack_31c;
          fStack_1b8 = fStack_318;
          fStack_1b4 = fStack_314;
          FUN_0118fe70();
          (**(code **)(*(int *)(iVar10 + 0xe0) + 0x50))(&fStack_1c0);
        }
        piVar12 = local_2e4;
        if ((((*(byte *)(param_1 + 0x12) & 1) != 0) &&
            (iVar10 = FUN_008f7780(iVar9), piVar12 = local_2e4, iVar10 != 0)) &&
           ((*(byte *)(iVar10 + 0x4c8) & 2) == 0)) {
          uVar11 = *(undefined4 *)(iVar10 + 0x4f0);
          iVar9 = FUN_008f8cf0(iVar9,4);
          piVar12 = local_2e4;
          if ((iVar9 == 0) &&
             (iVar9 = FUN_00a7c800(), piVar12 = local_2e4, *(int *)(iVar9 + 0x4bc) == 0x700000)) {
            uStack_290 = *puVar15;
            uStack_28c = puVar15[1];
            uStack_288 = puVar15[2];
            FUN_009dbcf0();
            uStack_238 = FUN_008ff560(puVar15);
            FID_conflict__memcpy(auStack_210,(void *)(_DAT_00000008 + 0x40),0x40);
            uStack_1e0 = uStack_290;
            puStack_228 = auStack_210;
            uStack_1dc = uStack_28c;
            uStack_1d8 = uStack_288;
            FUN_009d18a0(0x700000);
            uStack_240 = uVar11;
            if ((*(uint *)(_DAT_00000008 + 0x8c) & 0x20000000) == 0) {
              iStack_234 = ((*(uint *)(_DAT_00000008 + 0x8c) & 0x800000) != 0) + 1;
              EffectAttrSystem::RequestCall(auStack_260);
              piVar12 = param_1;
            }
            else {
              iStack_234 = 3;
              EffectAttrSystem::RequestCall(auStack_260);
              piVar12 = param_1;
            }
          }
        }
      }
LAB_00d7cefe:
      puVar15 = puVar15 + 0xc;
      param_1 = piVar12;
    } while (puVar15 != local_1a0 + local_19c * 0xc);
  }
  local_1b0 = hkpAllCdPointCollector::vftable;
  local_19c = 0;
  if (-1 < (int)local_198) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
  }
  local_1a0 = (undefined4 *)0x0;
  local_198 = 0x80000000;
  local_1b0 = vftable;
  if (DAT_01885d68 != 1) {
    piVar12 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar12 = *piVar12 + -1;
    if (((*piVar12 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00D7CFC0  Collision::vf04  size=52  [class]
undefined4 * Collision::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("Collision",9);
  uVar1 = FUN_008d93a0(uVar1,"Collision",9);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D6B0  FUN_00d7d6b0  size=662  [callgraph]
void __fastcall FUN_00d7d6b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined4 *puVar4;
  undefined1 *apuStack_104 [4];
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  undefined1 local_d0 [60];
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [92];
  
  if (param_1[0xd8] == 0) {
    puStack_f0 = (undefined1 *)0xd7d6e4;
    FID_conflict__memcpy(&local_90,(void *)(param_1[0xda] + 0x50),0x40);
    puStack_f0 = local_d0;
    puStack_f4 = (undefined1 *)0xd7d70b;
    D3DXMatrixTranslation();
    if (param_1[0xfd] == 0) {
      puStack_f4 = (undefined1 *)0xd7d7dd;
      (**(code **)(*(int *)param_1[0xda] + 0xc))();
    }
    else {
      puStack_f4 = (undefined1 *)(param_1[0xda] + 0x40);
      apuStack_104[3] = auStack_60;
      apuStack_104[2] = (undefined1 *)0xd7d72f;
      FUN_00ddd140();
      puStack_f4 = auStack_60;
      apuStack_104[2] = &stack0xffffff20;
      apuStack_104[1] = (undefined1 *)0xd7d747;
      apuStack_104[3] = apuStack_104[2];
      D3DXMatrixMultiply();
      apuStack_104[1] = (undefined1 *)0x5;
      apuStack_104[0] = (undefined1 *)(param_1[0xda] + 0x30);
      thunk_FUN_00ddc1d0(auStack_6c);
      apuStack_104[1] = auStack_6c;
      apuStack_104[0] = &stack0xffffff14;
      D3DXMatrixMultiply(apuStack_104[0]);
      iVar2 = param_1[0xfe];
      if (iVar2 == -1) {
        iVar2 = FUN_00a7c800();
      }
      else {
        FUN_00a7c800(iVar2);
        iVar2 = FUN_00a12210(iVar2);
      }
      D3DXMatrixMultiply(apuStack_104 + 3,apuStack_104 + 3,iVar2 + 0x10);
      ppuVar3 = apuStack_104;
      puVar4 = (undefined4 *)(param_1[0xda] + 0x50);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *ppuVar3;
        ppuVar3 = ppuVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_1[0xd9] == 0) {
      iVar2 = param_1[0xda];
      param_1[0xf4] = *(int *)(iVar2 + 0x80);
      param_1[0xf5] = *(int *)(iVar2 + 0x84);
      param_1[0xf6] = *(int *)(iVar2 + 0x88);
      param_1[0xf7] = *(int *)(iVar2 + 0x8c);
      param_1[0xf8] = param_1[0xf4];
      param_1[0xf9] = param_1[0xf5];
      param_1[0xfa] = param_1[0xf6];
      param_1[0xfb] = param_1[0xf7];
    }
    else {
      param_1[0xf4] = iStack_94;
      param_1[0xf5] = local_90;
      param_1[0xf6] = iStack_8c;
      param_1[0xf7] = iStack_88;
      iVar2 = param_1[0xda];
      param_1[0xf8] = *(int *)(iVar2 + 0x80);
      param_1[0xf9] = *(int *)(iVar2 + 0x84);
      param_1[0xfa] = *(int *)(iVar2 + 0x88);
      param_1[0xfb] = *(int *)(iVar2 + 0x8c);
      param_1[0xf0] = (int)((float)param_1[0xf8] - (float)param_1[0xf4]);
      param_1[0xf1] = (int)((float)param_1[0xf9] - (float)param_1[0xf5]);
      param_1[0xf2] = (int)((float)param_1[0xfa] - (float)param_1[0xf6]);
      param_1[0xf3] = (int)((float)param_1[0xfb] - (float)param_1[0xf7]);
    }
    (**(code **)(*(int *)param_1[0xda] + 0x10))();
    pcVar1 = *(code **)(*param_1 + 0x24);
    param_1[0x107] = 0;
    param_1[0xd9] = 1;
    (*pcVar1)();
    if (param_1[0xdf] != 0) {
      hkpCdPointCollector::hkpCdPointCollector_6();
    }
  }
  return;
}

// 00D7D950  Collision::vf08  size=30  [class]
undefined4 __thiscall Collision::vf08(undefined4 param_1,byte param_2)

{
  ~Collision();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7D970  FUN_00d7d970  size=769  [callgraph]
void __fastcall FUN_00d7d970(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *apiStack_104 [2];
  int aiStack_e0 [2];
  int *local_d8;
  int *local_d4;
  undefined1 local_d0 [60];
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined1 auStack_6c [12];
  int aiStack_60 [23];
  
  piVar5 = *(int **)(param_1[2] + 4);
  local_d8 = piVar5;
  local_d4 = param_1;
  if (piVar5 != piVar5 + *(int *)(param_1[2] + 8)) {
    do {
      piVar1 = (int *)*piVar5;
      if (piVar1[0xd8] == 0) {
        apiStack_104[1] = (int *)0xd7d9c5;
        local_d8 = piVar5;
        FID_conflict__memcpy(&local_90,(void *)(piVar1[0xda] + 0x50),0x40);
        apiStack_104[1] = (int *)local_d0;
        apiStack_104[0] = (int *)0xd7d9ec;
        D3DXMatrixTranslation();
        if (piVar1[0xfd] == 0) {
          apiStack_104[0] = (int *)0xd7dac0;
          (**(code **)(*(int *)piVar1[0xda] + 0xc))();
        }
        else {
          apiStack_104[0] = (int *)piVar1[0xda] + 0x10;
          FUN_00ddd140(aiStack_60);
          apiStack_104[0] = aiStack_60;
          piVar5 = aiStack_e0;
          param_1 = piVar5;
          D3DXMatrixMultiply();
          thunk_FUN_00ddc1d0(auStack_6c,piVar1[0xda] + 0x30,5);
          D3DXMatrixMultiply(&stack0xffffff14,&stack0xffffff14,auStack_6c);
          iVar3 = piVar1[0xfe];
          if (iVar3 == -1) {
            iVar3 = FUN_00a7c800();
          }
          else {
            FUN_00a7c800(iVar3);
            iVar3 = FUN_00a12210(iVar3);
          }
          D3DXMatrixMultiply(&stack0xffffff08,&stack0xffffff08,iVar3 + 0x10);
          ppiVar4 = apiStack_104;
          puVar6 = (undefined4 *)(piVar1[0xda] + 0x50);
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *ppiVar4;
            ppiVar4 = ppiVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        if (piVar1[0xd9] == 0) {
          iVar3 = piVar1[0xda];
          piVar1[0xf4] = *(int *)(iVar3 + 0x80);
          piVar1[0xf5] = *(int *)(iVar3 + 0x84);
          piVar1[0xf6] = *(int *)(iVar3 + 0x88);
          piVar1[0xf7] = *(int *)(iVar3 + 0x8c);
          piVar1[0xf8] = piVar1[0xf4];
          piVar1[0xf9] = piVar1[0xf5];
          piVar1[0xfa] = piVar1[0xf6];
          piVar1[0xfb] = piVar1[0xf7];
        }
        else {
          piVar1[0xf4] = iStack_94;
          piVar1[0xf5] = local_90;
          piVar1[0xf6] = iStack_8c;
          piVar1[0xf7] = iStack_88;
          iVar3 = piVar1[0xda];
          piVar1[0xf8] = *(int *)(iVar3 + 0x80);
          piVar1[0xf9] = *(int *)(iVar3 + 0x84);
          piVar1[0xfa] = *(int *)(iVar3 + 0x88);
          piVar1[0xfb] = *(int *)(iVar3 + 0x8c);
          piVar1[0xf0] = (int)((float)piVar1[0xf8] - (float)piVar1[0xf4]);
          piVar1[0xf1] = (int)((float)piVar1[0xf9] - (float)piVar1[0xf5]);
          piVar1[0xf2] = (int)((float)piVar1[0xfa] - (float)piVar1[0xf6]);
          piVar1[0xf3] = (int)((float)piVar1[0xfb] - (float)piVar1[0xf7]);
        }
        (**(code **)(*(int *)piVar1[0xda] + 0x10))();
        pcVar2 = *(code **)(*piVar1 + 0x24);
        piVar1[0x107] = 0;
        piVar1[0xd9] = 1;
        (*pcVar2)();
        if (piVar1[0xdf] != 0) {
          hkpCdPointCollector::hkpCdPointCollector_6();
        }
      }
      piVar5 = piVar5 + 1;
      local_d8 = piVar5;
    } while (piVar5 != (int *)(*(int *)(param_1[2] + 4) + *(int *)(param_1[2] + 8) * 4));
  }
  iVar3 = *(int *)(param_1[4] + 4);
  if (iVar3 != iVar3 + *(int *)(param_1[4] + 8) * 4) {
    do {
      FUN_00d7d6b0();
      iVar3 = iVar3 + 4;
    } while (iVar3 != *(int *)(param_1[4] + 4) + *(int *)(param_1[4] + 8) * 4);
  }
  return;
}

