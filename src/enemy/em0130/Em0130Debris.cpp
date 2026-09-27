// src/enemy/em0130/Em0130Debris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006066B0..00ABA620, 7 functions

#include "mgrr.h"
#include "Em0130Debris.h"

// 006066B0  Em0130Debris::vf40  size=31  [class]
undefined4 __fastcall Em0130Debris::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = RayArmorDebris::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  return 1;
}

// 00608990  Em0130Debris::vf1B8  size=34  [class]
void __thiscall Em0130Debris::vf1B8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (0 < param_4) {
    do {
      *param_2 = *(undefined4 *)(param_1 + 0x4b0);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 006089C0  Em0130Debris::vf1BC  size=110  [class]
void __thiscall Em0130Debris::vf1BC(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  ContainerDebris::vf1BC(param_2);
  if (param_2 != (int *)0x0) {
    puVar3 = &DAT_01be9c20;
    (**(code **)(*param_2 + 4))(&DAT_01be9c20);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7b4) != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_0091c760(uVar2);
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      uVar2 = cXmlBinary::cXmlBinary_41();
      FUN_0091b870(uVar2);
    }
  }
  return;
}

// 0060C6B0  Em0130Debris::vf300  size=1582  [class]
/* WARNING: Removing unreachable block (ram,0x0060cb01) */
/* WARNING: Removing unreachable block (ram,0x0060cb03) */
/* WARNING: Removing unreachable block (ram,0x0060cb05) */
/* WARNING: Removing unreachable block (ram,0x0060cb07) */
/* WARNING: Removing unreachable block (ram,0x0060cb09) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0130Debris::vf300(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 **ppuVar6;
  float fVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 *puStack_148;
  float *pfStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  float *pfStack_138;
  float *local_134;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c4 [4];
  undefined1 local_c0 [4];
  undefined1 auStack_bc [8];
  float local_b4 [4];
  float local_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 auStack_88 [36];
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined1 local_20 [28];
  
  iVar3 = *(int *)(param_1 + 0x618);
  if (iVar3 == 0) {
    if (((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) &&
       (*(int *)(param_1 + 0x970) != 0)) {
      local_134 = (float *)0x60cc70;
      fVar4 = (float10)FUN_00916de0();
      fVar5 = (float10)2.0;
      fVar4 = fVar4 * fVar5;
      local_120 = (float)(fVar4 * fVar5 * (float10)0);
      local_11c = (float)(fVar4 * fVar5);
      local_118 = (float)((float10)0 * fVar4 * fVar5);
      local_114 = (float)((float10)local_a4 * fVar5 * (float10)local_114);
      local_134 = (float *)0x60ccb8;
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        local_134 = &local_120;
        pfStack_138 = (float *)0x60ccd3;
        FUN_0091ab40();
      }
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    }
  }
  else if (iVar3 == 1) {
    local_134 = (float *)0x20130;
    pfStack_138 = (float *)0x60cba8;
    iVar3 = FUN_00a7f600();
    if (iVar3 != 0) {
      local_134 = (float *)0x60cbb7;
      local_134 = (float *)FUN_00a7c8a0();
      if (local_134 != (float *)0x0) {
        pfStack_138 = (float *)0x60cbc5;
        iVar3 = FUN_00606cf0();
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xe90) & 0x1000) != 0)) {
          *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(iVar3 + 0x13e0);
          *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(iVar3 + 0x13e4);
          *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(iVar3 + 0x13e8);
          *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(iVar3 + 0x13ec);
          *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(iVar3 + 0x13f0);
          *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(iVar3 + 0x13f4);
          *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(iVar3 + 0x13f8);
          *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(iVar3 + 0x13fc);
          *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
          return;
        }
      }
    }
  }
  else if (((iVar3 == 2) && (*(int *)(param_1 + 0x7b4) != 0)) &&
          ((*(int *)(param_1 + 0x880) != 0 && (*(int *)(param_1 + 0x970) != 0)))) {
    local_134 = &local_f0;
    pfStack_138 = (float *)0x60c70a;
    FUN_005d9b40();
    local_110 = 0.0;
    local_10c = 0.0;
    local_108 = 0.0;
    local_134 = (float *)0x60c723;
    fVar4 = (float10)FUN_00916de0();
    fVar4 = fVar4 * (float10)-2.0;
    local_134 = (float *)local_c0;
    fVar5 = (float10)10.0;
    local_120 = (float)(fVar4 * fVar5);
    local_11c = (float)(fVar4 * fVar5);
    local_118 = (float)(fVar4 * fVar5);
    local_114 = (float)(fVar5 * (float10)local_114);
    pfStack_138 = (float *)0x60c75d;
    pfVar1 = (float *)FUN_005d95e0();
    local_110 = local_120 * *pfVar1;
    local_10c = pfVar1[1] * local_11c;
    local_108 = pfVar1[2] * local_118;
    local_104 = pfVar1[3] * local_114;
    local_134 = (float *)0x60c78f;
    fVar4 = (float10)FUN_00a93060();
    if ((float10)0 != fVar4) {
      local_134 = &local_110;
      pfStack_138 = (float *)0x60c7b0;
      FUN_0091ab40();
    }
    local_120 = 0.0;
    local_11c = -1.0;
    local_118 = 0.0;
    local_134 = (float *)0x60c7cf;
    fVar4 = (float10)FUN_00916de0();
    fVar4 = fVar4 * (float10)-2.0;
    fVar5 = (float10)20.0;
    local_120 = (float)(fVar4 * fVar5 * (float10)local_120);
    local_11c = (float)(fVar4 * fVar5 * (float10)local_11c);
    local_118 = (float)(fVar4 * fVar5 * (float10)local_118);
    local_114 = (float)(fVar5 * (float10)local_b4[0] * (float10)local_114);
    local_134 = (float *)0x60c814;
    fVar4 = (float10)FUN_00a93060();
    if ((float10)0 != fVar4) {
      local_134 = &local_120;
      pfStack_138 = (float *)0x60c82f;
      FUN_0091ab40();
    }
    local_120 = local_f0 - *(float *)(param_1 + 0x980);
    local_11c = local_ec - *(float *)(param_1 + 0x984);
    local_118 = local_e8 - *(float *)(param_1 + 0x988);
    local_114 = local_e4 - *(float *)(param_1 + 0x98c);
    local_134 = (float *)0x60c872;
    fVar4 = (float10)FUN_00916de0();
    fVar4 = fVar4 + fVar4;
    fVar5 = (float10)20.0;
    local_120 = (float)(fVar4 * fVar5 * (float10)local_120);
    local_11c = (float)(fVar4 * fVar5 * (float10)local_11c);
    local_118 = (float)(fVar4 * fVar5 * (float10)local_118);
    local_114 = (float)(fVar5 * (float10)local_b4[0] * (float10)local_114);
    local_134 = (float *)0x60c8b3;
    fVar4 = (float10)FUN_00a93060();
    if ((float10)0 != fVar4) {
      local_134 = &local_120;
      pfStack_138 = (float *)0x60c8ce;
      FUN_0091ab40();
    }
    if (DAT_01d61850 != 0) {
      local_134 = (float *)local_20;
      pfStack_138 = (float *)0x60c8ee;
      FUN_00916d50();
      local_110 = SQRT(_DAT_01d61868 * _DAT_01d61868 +
                       DAT_01d61860 * DAT_01d61860 + DAT_01d61864 * DAT_01d61864);
      local_10c = SQRT(_DAT_01d61878 * _DAT_01d61878 +
                       _DAT_01d61870 * _DAT_01d61870 + _DAT_01d61874 * _DAT_01d61874);
      local_134 = (float *)-(_DAT_01d61868 /
                            SQRT(_DAT_01d61888 * _DAT_01d61888 +
                                 _DAT_01d61880 * _DAT_01d61880 + _DAT_01d61884 * _DAT_01d61884));
      pfStack_138 = (float *)0x60c961;
      FUN_00ddbaa0();
      pfStack_138 = &local_60;
      fVar4 = (float10)fpatan((float10)DAT_01d61864 / (float10)local_10c,
                              (float10)DAT_01d61860 / (float10)local_110);
      local_134 = (float *)(float)fVar4;
      puStack_13c = (undefined4 *)0x60c989;
      D3DXMatrixRotationZ();
      uStack_d8 = 0;
      puStack_13c = &DAT_01d61860;
      puStack_140 = &uStack_d8;
      uStack_d4 = 0x3f800000;
      pfStack_144 = &local_108;
      uStack_d0 = 0;
      puStack_148 = (undefined1 *)0x60c9ad;
      D3DXVec3TransformNormal();
      puStack_148 = auStack_c4;
      local_114 = local_114 + _DAT_01d61890;
      local_110 = local_110 + _DAT_01d61894;
      local_10c = local_10c + _DAT_01d61898;
      local_134 = (float *)0xbf060a92;
      pfVar2 = (float *)FUN_005d9b40();
      pfVar1 = local_b4;
      fVar4 = (float10)fpatan((float10)*(float *)(param_1 + 0x980) - (float10)*pfVar2,
                              (float10)*(float *)(param_1 + 0x988) - (float10)pfVar2[2]);
      puStack_148 = (undefined1 *)(float)fVar4;
      D3DXMatrixRotationY(pfVar1);
      puVar8 = auStack_bc;
      ppuVar6 = &puStack_13c;
      D3DXVec3TransformNormal(ppuVar6,ppuVar6,puVar8);
      puStack_148 = (undefined1 *)(fStack_98 + (float)puStack_148);
      pfStack_144 = (float *)(fStack_94 + (float)pfStack_144);
      puStack_140 = (undefined4 *)(fStack_90 + (float)puStack_140);
      D3DXVec3TransformNormal(&puStack_148,&puStack_148,auStack_88);
      fVar7 = fStack_64 + (float)ppuVar6;
      fVar9 = local_60 + (float)puVar8;
      fVar10 = fStack_5c + (float)pfVar1;
      fVar4 = (float10)FUN_00a93060();
      if ((float10)0 != fVar4) {
        fVar4 = (float10)FUN_00916de0();
        fVar5 = (float10)10.0;
        local_114 = (float)((float10)fVar7 * fVar4 * fVar5);
        local_110 = (float)((float10)fVar9 * fVar4 * fVar5);
        local_10c = (float)((float10)fVar10 * fVar4 * fVar5);
        local_108 = (float)(fVar5 * (float10)(float)puStack_148 * fVar4);
        FUN_0091ac60(&local_114);
      }
    }
    *(undefined4 *)(param_1 + 0x970) = 0;
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    return;
  }
  return;
}

// 00AB5A70  Em0130Debris::Em0130Debris  size=18  [class]
undefined4 * __fastcall Em0130Debris::Em0130Debris(undefined4 *param_1)

{
  RayArmorDebris::RayArmorDebris();
  *param_1 = vftable;
  return param_1;
}

// 00AB5A90  Em0130Debris::vf04  size=6  [class]
undefined * Em0130Debris::vf04(void)

{
  return &DAT_01b35518;
}

// 00ABA620  Em0130Debris::vf00  size=105  [class]
undefined4 * __thiscall Em0130Debris::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

