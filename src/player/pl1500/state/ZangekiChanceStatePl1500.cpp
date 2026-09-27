// src/player/pl1500/state/ZangekiChanceStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4240..008CF460, 10 functions

#include "types.h"

// 008A4240  ZangekiChanceStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiChanceStatePl1500::vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 008A4250  ZangekiChanceStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiChanceStatePl1500::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 008A4260  ZangekiChanceStatePl1500::vf24  size=19  [class]
bool ZangekiChanceStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A42A0  ZangekiChanceStatePl1500::vf00  size=6  [class]
undefined * ZangekiChanceStatePl1500::vf00(void)

{
  return &DAT_01b35ba4;
}

// 008A9F50  ZangekiChanceStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiChanceStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008BC290  ZangekiChanceStatePl1500::vf08  size=453  [class]
undefined4 __thiscall ZangekiChanceStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined *puVar6;
  int iStack_2c;
  int *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  local_24 = *(int **)(uVar3 + 0x5e0);
  if (local_24 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*local_24 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar1 != 0) & (uint)local_24;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(uVar4 + 0x40c8) = 2;
  *(undefined4 *)(uVar4 + 0x4058) = 0;
  if ((*(int *)(uVar3 + 0x52c) == 0) && (*(int *)(uVar3 + 0x530) == 0)) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar6 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar3 + 0x4c4) == 0) goto LAB_008bc3c6;
    FUN_008aa950(param_2);
    *(undefined4 *)(uVar3 + 0x4c4) = 0;
    pcVar5 = "bgm_Zangeki_Enter";
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar6 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    if (*(int *)(uVar3 + 0x4c4) == 1) goto LAB_008bc3c6;
    FUN_008aa950(param_2);
    *(undefined4 *)(uVar3 + 0x4c4) = 1;
    pcVar5 = "bgm_Zangeki_SP_Enter";
  }
  FUN_00e5e1b0(pcVar5);
LAB_008bc3c6:
  iVar1 = FUN_00606950();
  iVar1 = (-(uint)(iVar1 != 0) & 0xfffffffa) + 0xf;
  uVar2 = (*(code *)**(undefined4 **)param_2[1])(iVar1,param_2);
  FUN_00d82bf0(uVar2,iVar1);
  *(undefined4 *)(iStack_2c + 0x34) = 0;
  FUN_00a82610(*(undefined4 *)(uVar4 + 0x4f0),0,0xffffffff);
  local_24 = (int *)0x0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_00a832d0(&local_24,0,0x3fc90fdb,0,0xbfc90fdb);
  return 1;
}

// 008BC460  ZangekiChanceStatePl1500::vf0C  size=74  [class]
void __thiscall ZangekiChanceStatePl1500::vf0C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_008b8470(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    FUN_008b8630(param_2);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 008BC4B0  ZangekiChanceStatePl1500::vf20  size=239  [class]
undefined4 __thiscall ZangekiChanceStatePl1500::vf20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_14;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x341c) = 0;
  *(undefined4 *)(uVar3 + 0x40c8) = 0;
  *(undefined4 *)(uVar3 + 0x4058) = 0;
  if (*(int *)(uVar4 + 0x188) == 0) {
    if (*(int *)(uVar4 + 0x6bc) == 0) {
      *(undefined4 *)(uVar4 + 0x3ec) = 0xe0001;
    }
  }
  else {
    *(undefined4 *)(uVar3 + 0x890) = 0;
    *(undefined4 *)(uVar3 + 0x894) = 0;
    *(undefined4 *)(uVar3 + 0x898) = 0;
    *(undefined4 *)(uVar3 + 0x89c) = local_14;
  }
  FUN_008b8b40(param_2,param_1);
  FUN_00a83990();
  return 1;
}

// 008BC5A0  FUN_008bc5a0  size=1394  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void FUN_008bc5a0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  float unaff_EBX;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float *pfStack_184;
  float *pfStack_180;
  float *pfStack_17c;
  float *pfStack_178;
  float *pfStack_174;
  float *pfStack_170;
  float *pfStack_16c;
  float *pfStack_168;
  float *local_164;
  float fStack_154;
  float fStack_150;
  float local_13c;
  float local_138;
  float fStack_134;
  float local_130 [4];
  float fStack_120;
  undefined1 auStack_11c [4];
  float fStack_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [22];
  undefined1 auStack_88 [8];
  undefined1 local_80 [4];
  undefined1 auStack_7c [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [100];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    local_164 = (float *)&DAT_01b35bdc;
    pfStack_168 = (float *)0x8bc5cb;
    (**(code **)*param_1)();
    pfStack_168 = (float *)0x8bc5d2;
    iVar8 = FUN_00dd6d80();
    uVar9 = -(uint)(iVar8 != 0) & (uint)param_1;
  }
  piVar6 = *(int **)(uVar9 + 0x5e0);
  if (piVar6 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    local_164 = (float *)&DAT_01b35b90;
    pfStack_168 = (float *)0x8bc5f6;
    (**(code **)(*piVar6 + 4))();
    pfStack_168 = (float *)0x8bc5fd;
    iVar8 = FUN_00dd6d80();
    uVar10 = -(uint)(iVar8 != 0) & (uint)piVar6;
  }
  if ((*(int *)(uVar10 + 0x40c8) == 2) && (*(int *)(uVar9 + 0x188) != 0)) {
    local_164 = (float *)param_1;
    pfStack_168 = (float *)0x8bc628;
    iVar8 = FUN_008b7810();
    if (iVar8 == 0) {
      local_164 = (float *)0xffffffff;
      pfStack_168 = (float *)0x8bc63c;
      iVar8 = FUN_00a12210();
      fVar1 = *(float *)(iVar8 + 0x10);
      fVar2 = *(float *)(iVar8 + 0x14);
      fVar3 = *(float *)(iVar8 + 0x18);
      local_13c = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                       *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                       *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
      fVar7 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                   *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                   *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
      fVar4 = *(float *)(iVar8 + 0x28);
      fVar5 = *(float *)(iVar8 + 0x38);
      local_164 = (float *)-(*(float *)(iVar8 + 0x18) / fVar7);
      pfStack_168 = (float *)0x8bc6c9;
      fVar11 = (float10)FUN_00ddbaa0();
      fVar12 = (float10)fpatan((float10)(fVar4 / fVar7),(float10)(fVar5 / fVar7));
      local_110 = (float)fVar12;
      local_10c = (float)fVar11;
      fVar11 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_13c,
                               (float10)*(float *)(iVar8 + 0x10) /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_108 = (float)fVar11;
      local_13c = *(float *)(iVar8 + 0x44);
      local_138 = *(float *)(iVar8 + 0x48);
      local_130[0] = 0.0;
      local_130[1] = 0.0;
      pfStack_168 = (float *)0x5;
      local_130[2] = 1.0;
      pfStack_16c = &local_110;
      pfStack_170 = afStack_e0 + 8;
      pfStack_174 = (float *)0x8bc72c;
      FUN_00ddc1d0();
      local_164 = afStack_e0 + 8;
      pfStack_168 = local_130;
      pfStack_16c = (float *)local_80;
      pfStack_170 = (float *)0x8bc749;
      D3DXVec3TransformNormal();
      local_13c = 0.0;
      pfStack_170 = (float *)0x5;
      pfStack_174 = (float *)auStack_11c;
      local_138 = 1.0;
      pfStack_178 = afStack_e0 + 5;
      fStack_134 = 0.0;
      pfStack_17c = (float *)0x8bc76d;
      FUN_00ddc1d0();
      pfStack_170 = afStack_e0 + 5;
      pfStack_174 = &local_13c;
      pfStack_178 = (float *)auStack_6c;
      pfStack_17c = (float *)0x8bc78a;
      D3DXVec3TransformNormal();
      fStack_e8 = fStack_78 * 1.35 + unaff_EBX;
      fStack_e4 = fStack_74 * 1.35 + fStack_154;
      afStack_e0[0] = fStack_70 * 1.35 + fStack_150;
      uStack_ec = 0;
      uStack_f4 = 0;
      uStack_f8 = 0;
      uStack_fc = 0;
      uStack_100 = 0;
      local_108 = 0.0;
      local_10c = 0.0;
      local_110 = 0.0;
      local_114 = 0.0;
      afStack_e0[1] = 1.0;
      uStack_f0 = 0x3f800000;
      uStack_104 = 0x3f800000;
      fStack_118 = 1.0;
      afStack_e0[0x11] = 1.0;
      afStack_e0[0xc] = 1.0;
      afStack_e0[7] = 1.0;
      afStack_e0[2] = 1.0;
      afStack_e0[0x10] = 0.0;
      afStack_e0[0xf] = 0.0;
      afStack_e0[0xe] = 0.0;
      afStack_e0[0xd] = 0.0;
      afStack_e0[0xb] = 0.0;
      afStack_e0[10] = 0.0;
      afStack_e0[9] = 0.0;
      afStack_e0[8] = 0.0;
      afStack_e0[6] = 0.0;
      afStack_e0[5] = 0.0;
      afStack_e0[4] = 0.0;
      afStack_e0[3] = 0.0;
      if (fStack_120 != 0.0) {
        pfStack_180 = (float *)auStack_68;
        pfStack_17c = (float *)fStack_120;
        pfStack_184 = (float *)0x8bc8b1;
        D3DXMatrixRotationZ();
        pfStack_184 = afStack_e0;
        D3DXMatrixMultiply(pfStack_184,&fStack_70);
      }
      if (local_130[3] != 0.0) {
        pfStack_180 = (float *)auStack_68;
        pfStack_17c = (float *)local_130[3];
        pfStack_184 = (float *)0x8bc8f3;
        D3DXMatrixRotationY();
        pfStack_184 = afStack_e0;
        D3DXMatrixMultiply(pfStack_184,&fStack_70);
      }
      if (local_130[2] != 0.0) {
        pfStack_180 = (float *)auStack_68;
        pfStack_17c = (float *)local_130[2];
        pfStack_184 = (float *)0x8bc933;
        D3DXMatrixRotationX();
        pfStack_184 = afStack_e0;
        D3DXMatrixMultiply(pfStack_184,&fStack_70);
      }
      pfStack_184 = &fStack_118;
      pfStack_180 = afStack_e0 + 2;
      pfStack_17c = pfStack_184;
      D3DXMatrixMultiply();
      D3DXMatrixRotationX(&fStack_74,*(undefined4 *)(uVar9 + 0x374));
      D3DXMatrixMultiply(local_130 + 1,auStack_7c,local_130 + 1);
      pfStack_178 = (float *)SQRT(local_130[0] * local_130[0] +
                                  local_138 * local_138 + fStack_134 * fStack_134);
      pfStack_174 = (float *)SQRT(fStack_120 * fStack_120 +
                                  local_130[2] * local_130[2] + local_130[3] * local_130[3]);
      fVar1 = SQRT(local_110 * local_110 + local_114 * local_114 + fStack_118 * fStack_118);
      pfStack_17c = (float *)(fStack_120 / fVar1);
      pfStack_180 = (float *)(local_110 / fVar1);
      fVar11 = (float10)FUN_00ddbaa0(-(local_130[0] / fVar1));
      fVar12 = (float10)fpatan((float10)(float)pfStack_17c,(float10)(float)pfStack_180);
      afStack_e0[0xe] = (float)fVar12;
      afStack_e0[0xf] = (float)fVar11;
      fVar11 = (float10)fpatan((float10)fStack_134 / (float10)(float)pfStack_174,
                               (float10)local_138 / (float10)(float)pfStack_178);
      afStack_e0[0x10] = (float)fVar11;
      pfStack_168 = (float *)0x0;
      local_164 = (float *)0x0;
      FUN_00ddc1d0(auStack_88,afStack_e0 + 0xe,5);
      D3DXVec3TransformNormal(afStack_e0 + 10,&pfStack_168,auStack_88);
      FUN_00a82640();
      iVar8 = FUN_00a12210(*(undefined4 *)((int)unaff_EBX + 0x34));
      pfStack_16c = (float *)(afStack_e0[9] * 2.6);
      pfStack_184 = (float *)(afStack_e0[7] * 2.6 + *(float *)(iVar8 + 0x40));
      pfStack_180 = (float *)(afStack_e0[8] * 2.6 + *(float *)(iVar8 + 0x44));
      pfStack_17c = (float *)(*(float *)(iVar8 + 0x48) + (float)pfStack_16c);
      pfStack_178 = (float *)(afStack_e0[10] * 2.6 + *(float *)(iVar8 + 0x4c));
      FUN_00a83330(&pfStack_184,1);
    }
  }
  return;
}

// 008CF460  ZangekiChanceStatePl1500::vf10  size=511  [class]
void __thiscall ZangekiChanceStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar4 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar9 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar4 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  fVar7 = (float10)FUN_00bda020();
  if ((float10)0 == fVar7) {
    if (param_2 != (undefined4 *)0x0) {
      puVar9 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      FUN_00dd6d80(puVar9);
    }
    FUN_00b83e50();
    FUN_00d82510(1,100);
  }
  if (*(float *)(uVar4 + 0x341c) <= 0.0) {
    if (param_2 != (undefined4 *)0x0) {
      puVar9 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      FUN_00dd6d80(puVar9);
    }
    FUN_00b83e50();
    FUN_00d82510(1,100);
  }
  FUN_00c5bbb0(2);
  FUN_00c5bbb0(0x10);
  FUN_008ce550(param_2,param_1,100,0.0 < *(float *)(param_1 + 0x30),0);
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar5 + 0x2f4) == 0) {
    FUN_008b7300(param_2);
  }
  FUN_008b86a0(param_2);
  FUN_008b82e0(param_2);
  FUN_008b83c0(param_2,0x3f800000);
  iVar6 = FUN_008b7810(param_2);
  if (iVar6 == 0) {
    uVar8 = 0xc2700000;
    uVar2 = 0x42520000;
  }
  else {
    uVar8 = 0xc2200000;
    uVar2 = 0x420c0000;
  }
  FUN_008c2610(param_2,uVar2,uVar8,0,0);
  if ((*(float *)(param_1 + 0x30) == 0.0) && ((*(byte *)(uVar4 + 0xcfc) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0x41a00000;
  }
  fVar3 = *(float *)(param_1 + 0x30) - *(float *)(uVar4 + 0x910);
  *(float *)(param_1 + 0x30) = fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_008bc5a0(param_2);
  StateMachineNode::vf10(param_2);
  return;
}

