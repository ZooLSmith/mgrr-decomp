// src/player/pl1500/state/ZangekiReadyStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4A70..008D3270, 27 functions

#include "mgrr.h"
#include "ZangekiReadyStatePl1500.h"

// 008A4A70  ZangekiReadyStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiReadyStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4A80  ZangekiReadyStatePl1500::vf24  size=19  [class]
bool ZangekiReadyStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4AC0  ZangekiReadyStatePl1500::vf00  size=6  [class]
undefined * ZangekiReadyStatePl1500::vf00(void)

{
  return &DAT_01b35bd4;
}

// 008AA2B0  ZangekiReadyStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiReadyStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B5030  ZangekiReadyStatePl1500::vf14  size=129  [class]
void __thiscall ZangekiReadyStatePl1500::vf14(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar3);
  }
  if ((*(int *)(param_1 + 0x3c) == -1) ||
     (iVar2 = FUN_00a94ce0(*(int *)(param_1 + 0x3c)), iVar2 != 0)) {
    FUN_00d82510(9,0x19);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 008BFE30  ZangekiReadyStatePl1500::vf20  size=266  [class]
undefined4 __thiscall ZangekiReadyStatePl1500::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b90;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b90);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x40000000);
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    }
    *(undefined4 *)(uVar3 + 0x2f8) = 0;
    *(undefined4 *)(uVar3 + 0x300) = 0;
    if ((*(float *)(param_1 + 0x88) != 0.0) && (*(int *)(uVar3 + 0x528) != 0)) {
      FUN_008b8470(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    }
    return 1;
  }
  return 0;
}

// 008BFF40  FUN_008bff40  size=1374  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void FUN_008bff40(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float unaff_EBX;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
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
    uVar8 = 0;
  }
  else {
    local_164 = (float *)&DAT_01b35bdc;
    pfStack_168 = (float *)0x8bff6b;
    (**(code **)*param_1)();
    pfStack_168 = (float *)0x8bff72;
    iVar7 = FUN_00dd6d80();
    uVar8 = -(uint)(iVar7 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar8 + 0x5e0) != (int *)0x0) {
    local_164 = (float *)&DAT_01b35b90;
    pfStack_168 = (float *)0x8bff96;
    (**(code **)(**(int **)(uVar8 + 0x5e0) + 4))();
    pfStack_168 = (float *)0x8bff9d;
    FUN_00dd6d80();
  }
  local_164 = (float *)param_1;
  pfStack_168 = (float *)0x8bffae;
  iVar7 = FUN_008b8c60();
  if (iVar7 != 0) {
    local_164 = (float *)0xffffffff;
    pfStack_168 = (float *)0x8bffc2;
    iVar7 = FUN_00a12210();
    fVar1 = *(float *)(iVar7 + 0x10);
    fVar2 = *(float *)(iVar7 + 0x14);
    fVar3 = *(float *)(iVar7 + 0x18);
    local_13c = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                     *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                     *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar6 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                 *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                 *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
    fVar4 = *(float *)(iVar7 + 0x28);
    fVar5 = *(float *)(iVar7 + 0x38);
    local_164 = (float *)-(*(float *)(iVar7 + 0x18) / fVar6);
    pfStack_168 = (float *)0x8c004f;
    fVar9 = (float10)FUN_00ddbaa0();
    fVar10 = (float10)fpatan((float10)(fVar4 / fVar6),(float10)(fVar5 / fVar6));
    local_110 = (float)fVar10;
    local_10c = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)local_13c,
                            (float10)*(float *)(iVar7 + 0x10) /
                            (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    local_108 = (float)fVar9;
    local_13c = *(float *)(iVar7 + 0x44);
    local_138 = *(float *)(iVar7 + 0x48);
    local_130[0] = 0.0;
    local_130[1] = 0.0;
    pfStack_168 = (float *)0x5;
    local_130[2] = 1.0;
    pfStack_16c = &local_110;
    pfStack_170 = afStack_e0 + 8;
    pfStack_174 = (float *)0x8c00b2;
    FUN_00ddc1d0();
    local_164 = afStack_e0 + 8;
    pfStack_168 = local_130;
    pfStack_16c = (float *)local_80;
    pfStack_170 = (float *)0x8c00cf;
    D3DXVec3TransformNormal();
    local_13c = 0.0;
    pfStack_170 = (float *)0x5;
    pfStack_174 = (float *)auStack_11c;
    local_138 = 1.0;
    pfStack_178 = afStack_e0 + 5;
    fStack_134 = 0.0;
    pfStack_17c = (float *)0x8c00f3;
    FUN_00ddc1d0();
    pfStack_170 = afStack_e0 + 5;
    pfStack_174 = &local_13c;
    pfStack_178 = (float *)auStack_6c;
    pfStack_17c = (float *)0x8c0110;
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
      pfStack_184 = (float *)0x8c0237;
      D3DXMatrixRotationZ();
      pfStack_184 = afStack_e0;
      D3DXMatrixMultiply(pfStack_184,&fStack_70);
    }
    if (local_130[3] != 0.0) {
      pfStack_180 = (float *)auStack_68;
      pfStack_17c = (float *)local_130[3];
      pfStack_184 = (float *)0x8c0279;
      D3DXMatrixRotationY();
      pfStack_184 = afStack_e0;
      D3DXMatrixMultiply(pfStack_184,&fStack_70);
    }
    if (local_130[2] != 0.0) {
      pfStack_180 = (float *)auStack_68;
      pfStack_17c = (float *)local_130[2];
      pfStack_184 = (float *)0x8c02b9;
      D3DXMatrixRotationX();
      pfStack_184 = afStack_e0;
      D3DXMatrixMultiply(pfStack_184,&fStack_70);
    }
    pfStack_184 = &fStack_118;
    pfStack_180 = afStack_e0 + 2;
    pfStack_17c = pfStack_184;
    D3DXMatrixMultiply();
    D3DXMatrixRotationX(&fStack_74,*(float *)(uVar8 + 0x374) * 0.5);
    D3DXMatrixMultiply(local_130 + 1,auStack_7c,local_130 + 1);
    pfStack_178 = (float *)SQRT(local_130[0] * local_130[0] +
                                local_138 * local_138 + fStack_134 * fStack_134);
    pfStack_174 = (float *)SQRT(fStack_120 * fStack_120 +
                                local_130[2] * local_130[2] + local_130[3] * local_130[3]);
    fVar1 = SQRT(local_110 * local_110 + local_114 * local_114 + fStack_118 * fStack_118);
    pfStack_17c = (float *)(fStack_120 / fVar1);
    pfStack_180 = (float *)(local_110 / fVar1);
    fVar9 = (float10)FUN_00ddbaa0(-(local_130[0] / fVar1));
    fVar10 = (float10)fpatan((float10)(float)pfStack_17c,(float10)(float)pfStack_180);
    afStack_e0[0xe] = (float)fVar10;
    afStack_e0[0xf] = (float)fVar9;
    fVar9 = (float10)fpatan((float10)fStack_134 / (float10)(float)pfStack_174,
                            (float10)local_138 / (float10)(float)pfStack_178);
    afStack_e0[0x10] = (float)fVar9;
    pfStack_168 = (float *)0x0;
    local_164 = (float *)0x0;
    FUN_00ddc1d0(auStack_88,afStack_e0 + 0xe,5);
    D3DXVec3TransformNormal(afStack_e0 + 10,&pfStack_168,auStack_88);
    FUN_00a82640();
    iVar7 = FUN_00a12210(*(undefined4 *)((int)unaff_EBX + 0x50));
    pfStack_16c = (float *)(afStack_e0[9] * 2.6);
    pfStack_184 = (float *)(afStack_e0[7] * 2.6 + *(float *)(iVar7 + 0x40));
    pfStack_180 = (float *)(afStack_e0[8] * 2.6 + *(float *)(iVar7 + 0x44));
    pfStack_17c = (float *)(*(float *)(iVar7 + 0x48) + (float)pfStack_16c);
    pfStack_178 = (float *)(afStack_e0[10] * 2.6 + *(float *)(iVar7 + 0x4c));
    FUN_00a83330(&pfStack_184,1);
  }
  return;
}

// 008C04A0  FUN_008c04a0  size=137  [callgraph]
undefined4 FUN_008c04a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  iVar1 = FUN_008b7810(param_1);
  if (((iVar1 != 0) && (iVar1 = FUN_00d821d0(0xb), iVar1 == 0)) && (*(int *)(uVar2 + 0x3c4) == 0)) {
    iVar1 = FUN_00d821d0(9);
    if (((iVar1 == 0) && (iVar1 = FUN_00d821d0(8), iVar1 == 0)) &&
       (iVar1 = FUN_00d821d0(0xc), iVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 008C0530  FUN_008c0530  size=196  [callgraph]
undefined4 FUN_008c0530(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  float local_8 [2];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  FUN_008b8f00(local_8,param_1);
  iVar1 = FUN_008b7810(param_1);
  if ((iVar1 != 0) && (*(int *)(uVar2 + 0x2f4) == 0)) {
    iVar1 = FUN_00d821d0(0xf);
    if (iVar1 == 0) {
      iVar1 = FUN_00d821d0(2);
      if (iVar1 == 0) {
        iVar1 = FUN_00d821d0(4);
        if (iVar1 == 0) {
          iVar1 = FUN_00d821d0(0xb);
          if (iVar1 == 0) {
            iVar1 = FUN_00d45a70("PD10_NMANI");
            if ((iVar1 == 0) && (10.0 < ABS(local_8[0]))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 008C0600  FUN_008c0600  size=1174  [callgraph]
void FUN_008c0600(undefined4 *param_1,float *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  undefined *puVar9;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar7 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar7 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar6 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar7 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar7 != 0) & (uint)piVar1;
  }
  FUN_00f98a90();
  FUN_00f98aa0();
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = 0.0;
  local_60 = param_2[2];
  local_5c = param_2[3];
  local_58 = 0.0;
  local_14 = local_64 + local_54;
  local_80 = (local_60 + local_70) * 0.5;
  local_7c = (local_6c + local_5c) * 0.5;
  local_74 = local_14 * 0.5;
  local_50 = (local_70 - local_80) * 100.0 + local_70;
  local_4c = (local_6c - local_7c) * 100.0 + local_6c;
  local_48 = 0;
  local_44 = (local_64 - local_74) * 100.0 + local_64;
  local_30 = local_60 - local_80;
  local_2c = local_5c - local_7c;
  local_24 = local_54 - local_74;
  local_20 = local_30 * 100.0;
  local_1c = local_2c * 100.0;
  local_40 = local_20 + local_60;
  local_3c = local_1c + local_5c;
  local_38 = 0;
  local_34 = local_24 * 100.0 + local_54;
  local_90 = local_80 - local_50;
  local_8c = local_7c - local_4c;
  local_84 = local_74 - local_44;
  local_88 = 0;
  if ((local_90 != 0.0) || (local_8c != 0.0)) {
    fVar3 = local_90 * local_90 + local_8c * local_8c;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_90,&local_90);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_90 = 0.0;
      local_8c = 1.0;
      local_88 = 0;
    }
  }
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_008a4ca0(&local_70,&local_50,&local_90,&local_20,0x447a0000);
  local_90 = local_80 - local_40;
  local_8c = local_7c - local_3c;
  local_84 = local_74 - local_34;
  local_88 = 0;
  if ((local_90 != 0.0) || (local_8c != 0.0)) {
    fVar3 = local_90 * local_90 + local_8c * local_8c;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_90,&local_90);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_90 = 0.0;
      local_8c = 1.0;
      local_88 = 0;
    }
  }
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_008a4ca0(&local_60,&local_40,&local_90,&local_20,0x447a0000);
  fVar3 = local_60 - (local_70 + local_60) * 0.5;
  fVar4 = local_5c - (local_6c + local_5c) * 0.5;
  fVar5 = local_58 - (local_68 + local_58) * 0.5;
  fVar8 = (float10)FUN_00ddbb50((fVar5 * 0.0 + fVar3 * 300.0 + fVar4 * 0.0) /
                                (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) * 300.0));
  if (local_5c < local_6c) {
    fVar8 = fVar8 * (float10)-1.0;
  }
  FUN_008b5dc0(param_1,*param_3,(float)fVar8,param_5);
  if (*(int *)(uVar6 + 0x40c8) == 0x13) {
    FUN_00a96030(*param_3,0x3f000000);
  }
  FUN_00a95fb0(0);
  uVar2 = *param_3;
  FUN_00a92f90();
  iVar7 = FUN_00e26e90();
  if (iVar7 != 0) {
    FUN_00e36ac0(uVar2,0x3f7d70a4);
  }
  FUN_00e25500(0x3d088889);
  return;
}

// 008C0AB0  FUN_008c0ab0  size=3494  [callgraph]
void FUN_008c0ab0(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 *puVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float *pfVar19;
  float fVar20;
  float *local_334;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined4 local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float fStack_290;
  undefined1 auStack_28c [4];
  float fStack_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264 [13];
  float fStack_230;
  float afStack_22c [19];
  float fStack_1e0;
  float afStack_1dc [2];
  undefined1 auStack_1d4 [8];
  undefined1 auStack_1cc [20];
  undefined1 auStack_1b8 [4];
  float local_1b4;
  undefined1 local_170 [216];
  float fStack_98;
  float *pfStack_94;
  float *pfStack_90;
  float *pfStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float *pfStack_7c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    local_334 = (float *)&DAT_01b35bdc;
    (**(code **)*param_1)();
    iVar3 = FUN_00dd6d80();
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    local_334 = (float *)&DAT_01b35b90;
    (**(code **)(*piVar1 + 4))();
    iVar3 = FUN_00dd6d80();
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  local_334 = (float *)0x8c0b16;
  local_2d8 = (float)FUN_00f98a90();
  local_2d4 = (float)(int)local_2d8 * 0.5;
  local_334 = (float *)0x8c0b2d;
  local_2d8 = (float)FUN_00f98aa0();
  local_27c = (float)(int)local_2d8 * 0.5;
  local_280 = local_2d4;
  local_278 = 0.0;
  local_2a0 = *param_2;
  local_29c = param_2[1];
  local_298 = 0.0;
  local_2c0 = param_2[2];
  local_2bc = param_2[3];
  local_2b8 = 0.0;
  local_2d0 = (local_2c0 + local_2a0) * 0.5;
  local_2cc = (local_29c + local_2bc) * 0.5;
  local_2c4 = (local_2b4 + local_294) * 0.5;
  local_300 = (local_2a0 - local_2d0) * 100.0 + local_2a0;
  local_2fc = (local_29c - local_2cc) * 100.0 + local_29c;
  local_2f8 = 0.0;
  local_2f4 = (local_294 - local_2c4) * 100.0 + local_294;
  local_310 = (local_2c0 - local_2d0) * 100.0;
  local_30c = (local_2bc - local_2cc) * 100.0;
  local_320 = local_310 + local_2c0;
  local_31c = local_2bc + local_30c;
  local_318 = 0.0;
  local_314 = (local_2b4 - local_2c4) * 100.0 + local_2b4;
  local_2f0 = local_2d0 - local_300;
  local_2ec = local_2cc - local_2fc;
  local_2e4 = local_2c4 - local_2f4;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar18 = local_2f0 * local_2f0 + local_2ec * local_2ec;
    if (fVar18 < 0.0 == (fVar18 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0;
  local_334 = (float *)0x461c4000;
  FUN_008a4ca0(&local_2a0,&local_300,&local_2f0,&local_310);
  local_2f0 = local_2d0 - local_320;
  local_2ec = local_2cc - local_31c;
  local_2e4 = local_2c4 - local_314;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar18 = local_2ec * local_2ec + local_2f0 * local_2f0;
    if (fVar18 < 0.0 == (fVar18 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0;
  local_334 = (float *)0x461c4000;
  FUN_008a4ca0(&local_2c0,&local_320,&local_2f0,&local_310);
  local_300 = (local_2a0 + local_2c0) * 0.5;
  local_2fc = (local_29c + local_2bc) * 0.5;
  local_2f8 = (local_298 + local_2b8) * 0.5;
  local_2f4 = (local_294 + local_2b4) * 0.5;
  fVar18 = local_2c0 - local_300;
  fVar15 = local_2bc - local_2fc;
  fVar20 = local_2b8 - local_2f8;
  local_334 = (float *)((fVar20 * 0.0 + fVar18 * 300.0 + fVar15 * 0.0) /
                       (SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar20 * fVar20) * 300.0));
  fVar7 = (float10)FUN_00ddbb50();
  if (local_2bc < local_29c) {
    fVar7 = fVar7 * (float10)-1.0;
  }
  local_2d8 = (float)fVar7;
  local_2f0 = (local_2c0 * 0.4 + local_280) - (local_2a0 * 0.4 + local_280);
  local_2ec = (local_2bc * 0.4 + local_27c) - (local_29c * 0.4 + local_27c);
  local_2e4 = local_1b4 - local_1b4;
  local_2e8 = 0.0;
  if ((local_2f0 != 0.0) || (local_2ec != 0.0)) {
    fVar18 = local_2ec * local_2ec + local_2f0 * local_2f0;
    if (fVar18 < 0.0 == (fVar18 == 0.0)) {
      local_334 = &local_2f0;
      FUN_00ddf460(local_334);
    }
    else {
      local_334 = (float *)&DAT_0163d0ac;
      FUN_00dd5650();
      local_2f0 = 0.0;
      local_2ec = 1.0;
      local_2e8 = 0.0;
    }
  }
  local_334 = &local_280;
  FUN_00d9fab0(&local_2b0);
  local_334 = &local_320;
  local_320 = local_300 * 0.0 + local_280;
  local_31c = local_2fc * 0.0 + local_27c;
  local_318 = local_2f8 * 0.0 + local_278;
  local_314 = local_2f4 * 0.0 + local_274;
  FUN_00d9fab0(&local_270);
  local_334 = &local_310;
  pfVar2 = (float *)FUN_00a925a0();
  local_334 = &local_310;
  local_2b0 = local_2b0 - *pfVar2;
  local_2ac = local_2ac - pfVar2[1];
  local_2a8 = local_2a8 - pfVar2[2];
  local_2a4 = local_2a4 - pfVar2[3];
  pfVar2 = (float *)FUN_00a925a0();
  local_270 = (local_270 - *pfVar2) - local_2b0;
  local_26c = (local_26c - pfVar2[1]) - local_2ac;
  local_268 = (local_268 - pfVar2[2]) - local_2a8;
  local_264[0] = (local_264[0] - pfVar2[3]) - local_2a4;
  local_334 = (float *)0xffffffff;
  local_2b0 = local_270 + local_2b0;
  local_2ac = local_2ac + local_26c;
  local_2a8 = local_268 + local_2a8;
  local_2a4 = local_264[0] + local_2a4;
  iVar3 = FUN_00a12210();
  local_2d0 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                   *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                   *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
  local_2cc = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                   *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                   *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
  fVar18 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
  local_284 = *(float *)(iVar3 + 0x28) / fVar18;
  local_2d4 = *(float *)(iVar3 + 0x38) / fVar18;
  local_334 = (float *)-(*(float *)(iVar3 + 0x18) / fVar18);
  fVar7 = (float10)FUN_00ddbaa0();
  fVar13 = (float10)fpatan((float10)local_284,(float10)local_2d4);
  local_264[5] = (float)fVar13;
  local_264[6] = (float)fVar7;
  fVar7 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_2cc,
                          (float10)*(float *)(iVar3 + 0x10) / (float10)local_2d0);
  local_264[7] = (float)fVar7;
  local_320 = *(float *)(iVar3 + 0x40);
  local_31c = *(float *)(iVar3 + 0x44);
  local_318 = *(float *)(iVar3 + 0x48);
  local_314 = *(float *)(iVar3 + 0x4c);
  local_310 = 0.0;
  local_30c = 0.0;
  local_308 = 0x3f800000;
  FUN_00ddc1d0(afStack_22c + 0xb,local_264 + 5,5);
  local_334 = afStack_22c + 0xb;
  pfVar2 = &local_310;
  puVar14 = local_170;
  D3DXVec3TransformNormal(puVar14,pfVar2);
  local_31c = 1.0;
  local_318 = 0.0;
  local_314 = 0.0;
  FUN_00ddc1d0(afStack_22c + 8,local_264 + 2,5);
  pfVar17 = afStack_22c + 8;
  pfVar16 = &local_31c;
  D3DXVec3TransformNormal(auStack_1cc,pfVar16,pfVar17);
  local_320 = 0.0;
  FUN_00ddc1d0(afStack_22c + 5,&local_268,5);
  pfVar19 = afStack_22c + 5;
  D3DXVec3TransformNormal(&local_278,&stack0xfffffcd8,pfVar19);
  fVar18 = (float)pfVar16 + local_284 * 1.35;
  fVar20 = local_280 * 1.35 + (float)pfVar17;
  fVar15 = local_27c * 1.35 + (float)puVar14;
  local_2e8 = local_278 * 1.35 + (float)pfVar2;
  local_334 = (float *)(local_2e4 - local_2c4);
  local_2f4 = fVar18;
  local_2f0 = fVar20;
  local_2ec = fVar15;
  iVar3 = FUN_008a4d70(&local_2c4,&local_334,&local_2a4,0x43480000);
  if (iVar3 != 0) {
    fVar15 = local_320 * 0.0011111111;
    fVar18 = (local_2f4 - fVar15 * local_284) - afStack_22c[0x12] * 0.0011111111;
    fVar20 = (local_2f0 - fVar15 * local_280) - fStack_1e0 * 0.0011111111;
    fVar15 = (local_2ec - fVar15 * local_27c) - afStack_1dc[0] * 0.0011111111;
  }
  local_264[0xb] = 0.0;
  local_264[9] = 0.0;
  local_264[8] = 0.0;
  local_264[7] = 0.0;
  local_264[6] = 0.0;
  local_264[4] = 0.0;
  local_264[3] = 0.0;
  local_264[2] = 0.0;
  local_264[1] = 0.0;
  afStack_22c[1] = 1.0;
  local_264[10] = 1.0;
  local_264[5] = 1.0;
  local_264[0] = 1.0;
  afStack_22c[0x10] = 0.0;
  afStack_22c[0xf] = 0.0;
  afStack_22c[0xe] = 0.0;
  afStack_22c[0xd] = 0.0;
  afStack_22c[0xb] = 0.0;
  afStack_22c[10] = 0.0;
  afStack_22c[9] = 0.0;
  afStack_22c[8] = 0.0;
  afStack_22c[6] = 0.0;
  afStack_22c[5] = 0.0;
  afStack_22c[4] = 0.0;
  afStack_22c[3] = 0.0;
  afStack_22c[0x11] = 1.0;
  afStack_22c[0xc] = 1.0;
  afStack_22c[7] = 1.0;
  afStack_22c[2] = 1.0;
  local_264[0xc] = fVar18;
  fStack_230 = fVar20;
  afStack_22c[0] = fVar15;
  if (local_26c != 0.0) {
    D3DXMatrixRotationZ(auStack_1d4,local_26c);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  if (local_270 != 0.0) {
    D3DXMatrixRotationY(auStack_1d4,local_270);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  if (local_274 != 0.0) {
    D3DXMatrixRotationX(auStack_1d4,local_274);
    D3DXMatrixMultiply(afStack_22c,afStack_1dc,afStack_22c);
  }
  D3DXMatrixMultiply(local_264,afStack_22c + 2,local_264);
  D3DXMatrixRotationX(&fStack_1e0,*(undefined4 *)(uVar5 + 0x374));
  pfVar2 = &local_278;
  pfVar16 = afStack_22c + 0x11;
  pfVar17 = pfVar2;
  D3DXMatrixMultiply(pfVar2,pfVar16,pfVar2);
  fVar15 = local_31c + 3.1415927;
  D3DXMatrixRotationZ(afStack_22c + 0xe,fVar15);
  D3DXMatrixMultiply(auStack_28c,afStack_22c + 0xc,auStack_28c);
  fVar7 = (float10)local_294;
  fVar13 = (float10)local_298;
  fVar8 = (float10)fStack_290;
  fVar9 = (float10)local_284;
  fVar10 = (float10)local_280;
  fVar11 = (float10)local_270;
  fVar12 = SQRT(fVar11 * fVar11 +
                (float10)local_274 * (float10)local_274 + (float10)local_278 * (float10)local_278);
  fVar11 = (float10)fpatan(fVar10 / fVar12,fVar11 / fVar12);
  fVar18 = (float)fVar11;
  fVar11 = (float10)FUN_00ddbaa0((float)-(fVar8 / fVar12));
  fStack_84 = (float)fVar11;
  fVar7 = (float10)fpatan((float10)local_294 /
                          (float10)(float)SQRT(fVar10 * fVar10 +
                                               (float10)fStack_288 * (float10)fStack_288 +
                                               fVar9 * fVar9),
                          (float10)local_298 /
                          (float10)(float)SQRT(fVar8 * fVar8 + fVar13 * fVar13 + fVar7 * fVar7));
  fStack_80 = (float)fVar7;
  if (((param_3 & 1) != 0) && (*(int *)(uVar5 + 0x528) == 0)) {
    FUN_004039a0(3,uVar6,0);
    fStack_98 = fVar15;
    pfStack_94 = pfVar2;
    pfStack_90 = pfVar16;
    pfStack_8c = pfVar17;
    fStack_88 = fVar18;
    pfStack_7c = pfVar19;
    FUN_00dffb90(0x40000000);
    puVar14 = auStack_1b8;
    uVar4 = FUN_00e00b40(*(undefined4 *)(uVar6 + 0x4b0),puVar14);
    FUN_00a8c930(uVar4,puVar14);
  }
  return;
}

// 008C1860  FUN_008c1860  size=1387  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c1860(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  undefined4 local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined4 local_258;
  float local_254;
  undefined1 auStack_24c [8];
  float local_244;
  undefined1 auStack_240 [4];
  float local_23c;
  undefined4 uStack_238;
  float local_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float afStack_1fc [2];
  float fStack_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e4;
  undefined1 local_1e0 [48];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [288];
  float *pfStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 *puStack_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar15 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar15 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar15);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  iVar4 = FUN_00f98a90();
  local_244 = (float)iVar4 * 0.5;
  iVar4 = FUN_00f98aa0();
  local_25c = (float)iVar4 * 0.5;
  local_260 = local_244;
  local_258 = 0;
  local_23c = param_2[1];
  local_1ec = param_2[3];
  local_280 = (param_2[2] + *param_2) * 0.5;
  local_27c = (local_23c + local_1ec) * 0.5;
  local_274 = (local_234 + local_1e4) * 0.5;
  fVar2 = param_2[2] - local_280;
  fVar13 = local_1ec - local_27c;
  fVar6 = (float10)FUN_00ddbb50((fVar2 * 300.0 + fVar13 * 0.0) /
                                (SQRT(fVar13 * fVar13 + fVar2 * fVar2) * 300.0));
  if (local_1ec < local_23c) {
    fVar6 = fVar6 * (float10)-1.0;
  }
  local_294 = (float)fVar6;
  FUN_00d9fab0(&local_290,&local_260);
  local_280 = local_280 * 12.0 + local_260;
  local_27c = local_27c * 12.0 + local_25c;
  local_278 = local_258;
  local_274 = local_274 * 12.0 + local_254;
  FUN_00d9fab0(&local_270,&local_280);
  pfVar5 = (float *)FUN_00da0690(&local_1f0,0x3f800000);
  local_290 = local_290 - *pfVar5 * 3.0;
  local_28c = local_28c - pfVar5[1] * 3.0;
  local_288 = local_288 - pfVar5[2] * 3.0;
  local_284 = local_284 - pfVar5[3] * 3.0;
  pfVar5 = (float *)FUN_00da0690(&local_1f0,0x3f800000);
  local_270 = (local_270 - *pfVar5 * 3.0) - local_290;
  puVar14 = local_1e0;
  local_26c = (local_26c - pfVar5[1] * 3.0) - local_28c;
  local_268 = (local_268 - pfVar5[2] * 3.0) - local_288;
  local_264 = (local_264 - pfVar5[3] * 3.0) - local_284;
  local_290 = local_270 + local_290;
  local_28c = local_28c + local_26c;
  local_288 = local_268 + local_288;
  local_284 = local_264 + local_284;
  D3DXMatrixRotationZ(puVar14,local_294 + 3.1415927);
  local_234 = 0.0;
  afStack_1fc[0] = 1.0;
  fStack_210 = 1.0;
  uStack_224 = 0x3f800000;
  uStack_238 = 0x3f800000;
  fStack_230 = local_234;
  fStack_22c = local_234;
  fStack_228 = local_234;
  fStack_220 = local_234;
  fStack_21c = local_234;
  fStack_218 = local_234;
  fStack_214 = local_234;
  fStack_20c = local_234;
  fStack_208 = local_234;
  fStack_204 = local_234;
  fStack_200 = local_234;
  if (_DAT_01bea3b8 != 0.0) {
    D3DXMatrixRotationZ(auStack_1a8,_DAT_01bea3b8);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  if (_DAT_01bea3b4 != 0.0) {
    D3DXMatrixRotationY(auStack_1a8,_DAT_01bea3b4);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  if (_DAT_01bea3b0 != 0.0) {
    D3DXMatrixRotationX(auStack_1a8,_DAT_01bea3b0);
    D3DXMatrixMultiply(auStack_240,auStack_1b0,auStack_240);
  }
  D3DXMatrixRotationY(auStack_1a8,0x40490fdb);
  puVar11 = auStack_240;
  puVar12 = auStack_1b0;
  D3DXMatrixMultiply(puVar11,puVar12,puVar11);
  puVar10 = auStack_24c;
  pfVar5 = afStack_1fc;
  D3DXMatrixMultiply(pfVar5,pfVar5,puVar10);
  D3DXMatrixMultiply(&fStack_208,&fStack_208,uVar3 + 0xb0);
  fVar6 = (float10)fStack_20c;
  local_274 = (float)SQRT(fVar6 * fVar6 +
                          (float10)fStack_214 * (float10)fStack_214 +
                          (float10)fStack_210 * (float10)fStack_210);
  fVar7 = (float10)afStack_1fc[0];
  local_270 = (float)SQRT(fVar7 * fVar7 +
                          (float10)fStack_204 * (float10)fStack_204 +
                          (float10)fStack_200 * (float10)fStack_200);
  fVar8 = (float10)local_1ec;
  fVar9 = SQRT(fVar8 * fVar8 +
               (float10)fStack_1f4 * (float10)fStack_1f4 + (float10)local_1f0 * (float10)local_1f0);
  fVar7 = (float10)fpatan(fVar7 / fVar9,fVar8 / fVar9);
  fVar13 = (float)fVar7;
  fVar6 = (float10)FUN_00ddbaa0((float)-(fVar6 / fVar9));
  fStack_60 = (float)fVar6;
  fVar6 = (float10)fpatan((float10)fStack_210 / (float10)local_270,
                          (float10)fStack_214 / (float10)local_274);
  fStack_5c = (float)fVar6;
  if ((param_3 & 2) != 0) {
    FUN_004039a0(0x60,uVar3,0);
    pfStack_74 = pfVar5;
    puStack_70 = puVar10;
    puStack_6c = puVar11;
    puStack_68 = puVar12;
    fStack_64 = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  return;
}

// 008C1DD0  FUN_008c1dd0  size=1243  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c1dd0(undefined4 *param_1,float *param_2,byte param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined1 auStack_230 [8];
  undefined4 uStack_228;
  float local_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e0 [48];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [288];
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 *puStack_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar19 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar19 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar19);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  FUN_00f98a90();
  FUN_00f98aa0();
  local_25c = param_2[1];
  local_24c = param_2[3];
  fVar13 = param_2[2] - (param_2[2] + *param_2) * 0.5;
  fVar11 = local_24c - (local_25c + local_24c) * 0.5;
  fVar5 = (float10)FUN_00ddbb50((fVar13 * 300.0 + fVar11 * 0.0) /
                                (SQRT(fVar13 * fVar13 + fVar11 * fVar11) * 300.0));
  if (local_24c < local_25c) {
    fVar5 = fVar5 * (float10)-1.0;
  }
  local_224 = (float)fVar5;
  local_260 = *(float *)(uVar2 + 0x40);
  local_25c = *(float *)(uVar2 + 0x44);
  local_258 = *(float *)(uVar2 + 0x48);
  local_254 = *(float *)(uVar2 + 0x4c);
  pfVar4 = (float *)FUN_00a926e0(&local_250);
  local_240 = *pfVar4 * 1.35 + local_260;
  local_23c = pfVar4[1] * 1.35 + local_25c;
  local_238 = pfVar4[2] * 1.35 + local_258;
  local_234 = pfVar4[3] * 1.35 + local_254;
  pfVar4 = (float *)FUN_00a925a0(&local_260);
  puVar18 = local_1e0;
  local_250 = *pfVar4 * 3.0 + local_240;
  local_24c = pfVar4[1] * 3.0 + local_23c;
  local_248 = pfVar4[2] * 3.0 + local_238;
  local_244 = pfVar4[3] * 3.0 + local_234;
  D3DXMatrixRotationZ(puVar18,local_224 + 3.1415927);
  local_224 = 0.0;
  fStack_1ec = 1.0;
  fStack_200 = 1.0;
  fStack_214 = 1.0;
  uStack_228 = 0x3f800000;
  fStack_220 = local_224;
  fStack_21c = local_224;
  fStack_218 = local_224;
  fStack_210 = local_224;
  fStack_20c = local_224;
  fStack_208 = local_224;
  fStack_204 = local_224;
  fStack_1fc = local_224;
  fStack_1f8 = local_224;
  fStack_1f4 = local_224;
  fStack_1f0 = local_224;
  if (_DAT_01bea3b8 != 0.0) {
    D3DXMatrixRotationZ(auStack_1a8,_DAT_01bea3b8);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  if (_DAT_01bea3b4 != 0.0) {
    D3DXMatrixRotationY(auStack_1a8,_DAT_01bea3b4);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  if (_DAT_01bea3b0 != 0.0) {
    D3DXMatrixRotationX(auStack_1a8,_DAT_01bea3b0);
    D3DXMatrixMultiply(auStack_230,auStack_1b0,auStack_230);
  }
  puVar16 = auStack_1a8;
  uVar17 = 0x40490fdb;
  D3DXMatrixRotationY(puVar16,0x40490fdb);
  puVar15 = auStack_230;
  puVar14 = auStack_1b0;
  D3DXMatrixMultiply(puVar15,puVar14,puVar15);
  D3DXMatrixMultiply(&fStack_1fc,&fStack_1fc,&local_23c);
  D3DXMatrixMultiply(&fStack_208,&fStack_208,uVar2 + 0xb0);
  fVar5 = (float10)fStack_20c;
  fVar13 = (float)SQRT(fVar5 * fVar5 +
                       (float10)fStack_214 * (float10)fStack_214 +
                       (float10)fStack_210 * (float10)fStack_210);
  fVar6 = (float10)fStack_200;
  fVar7 = (float10)fStack_204;
  fVar8 = (float10)fStack_1fc;
  fVar9 = (float10)fStack_1ec;
  fVar10 = SQRT(fVar9 * fVar9 +
                (float10)fStack_1f4 * (float10)fStack_1f4 +
                (float10)fStack_1f0 * (float10)fStack_1f0);
  fVar9 = (float10)fpatan(fVar8 / fVar10,fVar9 / fVar10);
  fVar11 = (float)fVar9;
  fVar5 = (float10)FUN_00ddbaa0((float)-(fVar5 / fVar10));
  fVar12 = (float)fVar5;
  fVar5 = (float10)fpatan((float10)fStack_210 /
                          (float10)(float)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6),
                          (float10)fStack_214 / (float10)fVar13);
  fVar13 = (float)fVar5;
  if ((param_3 & 1) != 0) {
    FUN_004039a0(0x5f,uVar2,0);
    puStack_74 = puVar15;
    puStack_70 = puVar16;
    uStack_6c = uVar17;
    puStack_68 = puVar18;
    fStack_64 = fVar11;
    fStack_60 = fVar12;
    fStack_5c = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  if ((param_3 & 2) != 0) {
    FUN_004039a0(0x60,uVar2,0);
    puStack_74 = puVar15;
    puStack_70 = puVar16;
    uStack_6c = uVar17;
    puStack_68 = puVar18;
    fStack_64 = fVar11;
    fStack_60 = fVar12;
    fStack_5c = fVar13;
    puStack_58 = puVar14;
    FUN_00a8c930(0,auStack_194);
  }
  return;
}

// 008C22B0  FUN_008c22b0  size=303  [callgraph]
int FUN_008c22b0(undefined4 param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  int local_2c;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_2c = 0;
  iVar5 = FUN_00a7c800();
  if (iVar5 == 0) {
    return 0;
  }
  iVar6 = FUN_00c1c880();
  iVar6 = *(int *)(iVar6 + 4);
  iVar7 = FUN_00c1c880();
  iVar1 = *(int *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 4);
  for (; iVar6 != iVar7 + iVar1 * 4; iVar6 = iVar6 + 4) {
    iVar8 = FUN_00a81330();
    if ((((iVar8 != 0) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
        (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) &&
       (((piVar9[0x1a4] == 0 && (iVar10 = FUN_00a7c800(), iVar10 != 0)) &&
        ((**(code **)(*piVar9 + 0x204))(&local_20), fVar2 = local_20 - *(float *)(iVar5 + 0x50),
        fVar4 = fStack_1c - *(float *)(iVar5 + 0x54), fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
        fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_4 * param_4)))) {
      fVar11 = (float10)FUN_009f8c60(iVar10 + 0x50);
      FUN_00ddba30((float)(fVar11 - (float10)param_2));
      local_2c = iVar8;
    }
  }
  return local_2c;
}

// 008C23E0  FUN_008c23e0  size=556  [callgraph]
int FUN_008c23e0(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                int param_6,int param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  undefined *puVar13;
  uint local_3c;
  undefined1 auStack_24 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar13 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar5 = FUN_00dd6d80(puVar13);
    uVar10 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar9 = *(int **)(uVar10 + 0x5e0);
  if (piVar9 == (int *)0x0) {
    local_3c = 0;
  }
  else {
    puVar13 = &DAT_01b35b90;
    (**(code **)(*piVar9 + 4))(&DAT_01b35b90);
    iVar5 = FUN_00dd6d80(puVar13);
    local_3c = -(uint)(iVar5 != 0) & (uint)piVar9;
  }
  *(undefined4 *)(uVar10 + 0x350) = 0;
  iVar5 = FUN_00a7c800();
  if (iVar5 != 0) {
    iVar6 = FUN_00c1c880();
    iVar6 = *(int *)(iVar6 + 4);
    iVar7 = FUN_00c1c880();
    iVar1 = *(int *)(iVar7 + 0xc);
    iVar7 = *(int *)(iVar7 + 4);
    for (; iVar6 != iVar7 + iVar1 * 4; iVar6 = iVar6 + 4) {
      iVar8 = FUN_00a81330();
      if ((((iVar8 != 0) && ((*(byte *)(iVar8 + 0x28) & 2) == 0)) &&
          ((param_6 == 0 || (iVar8 != param_6)))) &&
         (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
        puVar13 = &DAT_01be9ca8;
        (**(code **)(*piVar9 + 4))(&DAT_01be9ca8);
        iVar8 = FUN_00dd6d80(puVar13);
        uVar11 = -(uint)(iVar8 != 0) & (uint)piVar9;
        FUN_00a7c940(uVar11 + 0x968);
        iVar8 = FUN_00a81330();
        if (iVar8 != 0) {
          FUN_00a7c8a0();
        }
        iVar8 = FUN_00a7c800();
        if (((iVar8 != 0) &&
            (((param_7 != 0 || (*(float *)(local_3c + 0x44) <= *(float *)(uVar11 + 0x44))) ||
             (ABS(*(float *)(local_3c + 0x44) - *(float *)(uVar11 + 0x44)) <= 3.0)))) &&
           ((*(int *)(uVar11 + 0x910) != 0 &&
            ((**(code **)(*piVar9 + 0x204))(&fStack_20),
            fVar2 = fStack_20 - *(float *)(iVar5 + 0x50),
            fVar4 = fStack_1c - *(float *)(iVar5 + 0x54),
            fVar3 = fStack_18 - *(float *)(iVar5 + 0x58),
            fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= param_5 * param_5)))) {
          fVar12 = (float10)FUN_009f8c60(iVar8 + 0x50);
          fVar12 = (float10)FUN_00ddba30((float)(fVar12 - (float10)param_3));
          if (ABS(fVar12) <= (float10)param_4) {
            FUN_00878130(auStack_24,iVar6);
          }
        }
      }
    }
  }
  return uVar10 + 0x344;
}

// 008C2610  FUN_008c2610  size=2101  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c2610(undefined4 *param_1,float param_2,float param_3,int param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float *pfStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  float *pfStack_184;
  undefined4 *puStack_180;
  float *pfStack_17c;
  float *pfStack_178;
  undefined *puStack_174;
  float fStack_160;
  float fStack_158;
  float local_154;
  float fStack_150;
  undefined1 auStack_148 [8];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [4];
  float fStack_10c;
  float local_108;
  float local_104;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [116];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puStack_174 = &DAT_01b35bdc;
    pfStack_178 = (float *)0x8c2637;
    (**(code **)*param_1)();
    pfStack_178 = (float *)0x8c263e;
    iVar4 = FUN_00dd6d80();
    uVar7 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar5 = *(int **)(uVar7 + 0x5e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puStack_174 = &DAT_01b35b90;
    pfStack_178 = (float *)0x8c2662;
    (**(code **)(*piVar5 + 4))();
    pfStack_178 = (float *)0x8c2669;
    iVar4 = FUN_00dd6d80();
    uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
  }
  local_154 = 1.0;
  if (((*(int *)(uVar7 + 0x504) != 0) && (0.0 < *(float *)(uVar7 + 0x508))) &&
     (local_154 = 1.0 / *(float *)(uVar7 + 0x508), 1.0 < local_154)) {
    local_154 = 1.0;
  }
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    puStack_174 = (undefined *)0x8c26f5;
    iVar4 = FUN_00da97e0();
    if (iVar4 == 0) {
      return;
    }
    if ((*(uint *)(uVar6 + 0xcf8) & 0x8000) != 0) {
      return;
    }
  }
  else {
    puStack_174 = (undefined *)0x8c26c5;
    iVar4 = FUN_00da97c0();
    if (iVar4 == 0) {
      return;
    }
    if ((*(uint *)(uVar6 + 0xcf8) & 0x1000) != 0) {
      puStack_174 = (undefined *)0x8c26e0;
      iVar4 = FUN_00606950();
      if (iVar4 == 0) {
        return;
      }
    }
  }
  if ((*(int *)(uVar7 + 0x2f4) == 0) && (*(int *)(uVar7 + 0x6b0) == 0)) {
    if (0.0 < *(float *)(uVar7 + 0x6b4)) {
      local_154 = 1.0 / *(float *)(uVar7 + 0x6b4);
      if (1.0 < local_154) {
        local_154 = 1.0;
      }
      fVar10 = *(float *)(uVar7 + 0x6b4) - 1.0;
      *(float *)(uVar7 + 0x6b4) = fVar10;
      if (fVar10 < 0.0) {
        *(undefined4 *)(uVar7 + 0x6b4) = 0;
      }
    }
    local_154 = local_154 * 2.3999999e-05;
    puStack_174 = (undefined *)0x8c2789;
    FUN_00da7500();
    puStack_174 = (undefined *)0x8c2792;
    fVar8 = (float10)FUN_00da7570();
    local_124 = (float)fVar8;
    local_104 = param_2;
    local_108 = param_3;
    if (*(float *)(uVar7 + 0x37c) != 0.0) {
      local_104 = *(float *)(uVar7 + 0x37c) * 57.29578;
      local_108 = -*(float *)(uVar7 + 0x37c) * 57.29578;
    }
    puStack_174 = (undefined *)0x8c27de;
    piVar5 = (int *)FUN_00c13920();
    puStack_174 = (undefined *)0x0;
    pfStack_178 = (float *)0x8c27e9;
    (**(code **)(*piVar5 + 0x28))();
    pfStack_178 = (float *)0x8c27f0;
    piVar5 = (int *)FUN_00a7c8a0();
    pfStack_178 = (float *)0x8c27fc;
    (**(code **)(*piVar5 + 0x84))();
    fStack_120 = *(float *)(uVar7 + 0x378);
    fVar10 = *(float *)(uVar7 + 0x374);
    pfStack_178 = (float *)param_1;
    pfStack_17c = &local_154;
    puStack_180 = (undefined4 *)0x8c281e;
    FUN_008b8f00();
    pfStack_178 = (float *)(fStack_120 - local_154 * fStack_158 * fStack_128);
    pfStack_17c = (float *)0x8c2839;
    fVar8 = (float10)FUN_00ddba30();
    fStack_120 = (float)fVar8;
    pfStack_178 = (float *)0x1649aa8;
    pfStack_17c = (float *)0x8c284f;
    iVar4 = FUN_00d45a70();
    pfStack_178 = (float *)fStack_120;
    if (((iVar4 != 0) && (pfStack_178 = (float *)0x0, fStack_120 < 0.0)) &&
       (pfStack_178 = (float *)fStack_120, fStack_120 < -1.0)) {
      pfStack_178 = (float *)-1.0;
    }
    if (param_4 == 0) {
      pfStack_17c = (float *)0x8c287d;
      FUN_00b8bbb0();
    }
    pfStack_178 = (float *)(fStack_150 * fStack_158 * fStack_160 + fVar10);
    pfStack_17c = (float *)0x8c28b1;
    fVar8 = (float10)FUN_00ddba30();
    if ((float10)local_108 < (float10)57.29578 * fVar8) {
      pfStack_178 = (float *)(float)((float10)local_108 * (float10)0.017453292);
      pfStack_17c = (float *)0x8c28dc;
      fVar8 = (float10)FUN_00ddba30();
    }
    if ((float10)57.29578 * fVar8 < (float10)fStack_10c) {
      pfStack_178 = (float *)(float)((float10)fStack_10c * (float10)0.017453292);
      pfStack_17c = (float *)0x8c290b;
      fVar8 = (float10)FUN_00ddba30();
    }
    if (param_5 == 0) {
      pfStack_178 = (float *)(float)fVar8;
      pfStack_17c = (float *)0x8c2923;
      FUN_00b8bb40();
    }
    pfStack_178 = (float *)0x8c292e;
    iVar4 = FUN_00606950();
    if (iVar4 != 0) {
      pfStack_178 = (float *)0x8c2941;
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        pfStack_178 = (float *)0x8c2950;
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 != (int *)0x0) {
          uStack_d4 = *(undefined4 *)(uVar6 + 0x40);
          pfVar1 = (float *)(uVar6 + 0x10);
          fStack_d0 = *(float *)(uVar6 + 0x44);
          fStack_cc = *(float *)(uVar6 + 0x48);
          fStack_c8 = *(float *)(uVar6 + 0x4c);
          local_154 = SQRT(*pfVar1 * *pfVar1 + *(float *)(uVar6 + 0x14) * *(float *)(uVar6 + 0x14) +
                           *(float *)(uVar6 + 0x18) * *(float *)(uVar6 + 0x18));
          fStack_150 = SQRT(*(float *)(uVar6 + 0x20) * *(float *)(uVar6 + 0x20) +
                            *(float *)(uVar6 + 0x24) * *(float *)(uVar6 + 0x24) +
                            *(float *)(uVar6 + 0x28) * *(float *)(uVar6 + 0x28));
          fVar11 = SQRT(*(float *)(uVar6 + 0x38) * *(float *)(uVar6 + 0x38) +
                        *(float *)(uVar6 + 0x34) * *(float *)(uVar6 + 0x34) +
                        *(float *)(uVar6 + 0x30) * *(float *)(uVar6 + 0x30));
          fVar10 = *(float *)(uVar6 + 0x28);
          fVar2 = *(float *)(uVar6 + 0x38);
          pfStack_178 = (float *)-(*(float *)(uVar6 + 0x18) / fVar11);
          pfStack_17c = (float *)0x8c2a0d;
          fVar8 = (float10)FUN_00ddbaa0();
          fStack_128 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)(fVar10 / fVar11),(float10)(fVar2 / fVar11));
          puStack_180 = &uStack_c4;
          fStack_e4 = (float)fVar8;
          fVar8 = (float10)fpatan((float10)*(float *)(uVar6 + 0x14) / (float10)fStack_150,
                                  (float10)*pfVar1 / (float10)local_154);
          fStack_dc = (float)fVar8;
          uStack_c4 = 0;
          fStack_c0 = 1.0;
          fStack_bc = 0.0;
          pfStack_184 = (float *)0x8c2a65;
          pfStack_17c = (float *)puStack_180;
          pfStack_178 = pfVar1;
          D3DXVec3TransformNormal();
          fStack_b0 = 0.0;
          pfStack_18c = &fStack_b0;
          fStack_ac = 0.0;
          fStack_a8 = 1.0;
          pfStack_190 = (float *)0x8c2a8f;
          pfStack_188 = pfStack_18c;
          pfStack_184 = pfVar1;
          D3DXVec3TransformNormal();
          fStack_13c = 1.0;
          fStack_138 = 0.0;
          fStack_134 = 0.0;
          pfStack_190 = pfVar1;
          D3DXVec3TransformNormal(&fStack_13c,&fStack_13c);
          pfStack_178 = (float *)(fStack_e8 * _DAT_018842b4 + fStack_f8);
          puStack_174 = (undefined *)(fStack_e4 * _DAT_018842b4 + fStack_f4);
          fVar3 = fStack_e0 * _DAT_018842b4 + fStack_f0;
          fVar11 = fStack_dc * _DAT_018842b4 + fStack_ec;
          fVar2 = fStack_f8 - (float)pfStack_178;
          fVar8 = (float10)FUN_00b8bbf0();
          FUN_00ddcfe0(auStack_78,auStack_148,(float)fVar8);
          D3DXVec3TransformNormal(&stack0xfffffe98,&stack0xfffffe98,auStack_78);
          fStack_e4 = fStack_114;
          fStack_dc = fStack_10c;
          fStack_d8 = local_108;
          local_124 = (float)puStack_174 * -1.0;
          fStack_120 = fVar3 * -1.0;
          fStack_11c = fVar11 * -1.0;
          fStack_118 = fVar2 * -1.0;
          fVar10 = fStack_11c * fStack_11c + fStack_120 * fStack_120 + local_124 * local_124;
          if (fVar10 < 0.0 == (fVar10 == 0.0)) {
            FUN_00ddf460(&local_124,&local_124);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_124 = 0.0;
            fStack_120 = 1.0;
            fStack_11c = 0.0;
          }
          fStack_134 = (float)puStack_174;
          fStack_130 = fVar3;
          fStack_12c = fVar11;
          fStack_128 = fVar2;
          FUN_00ddcfe0(auStack_84,&local_154,0xbfc90fdb);
          D3DXVec3TransformNormal(&fStack_134,&fStack_134,auStack_84);
          pfStack_190 = (float *)((float)puStack_180 + (float)pfStack_190);
          pfStack_18c = (float *)((float)pfStack_17c + (float)pfStack_18c);
          pfStack_188 = (float *)((float)pfStack_178 + (float)pfStack_188);
          pfStack_184 = (float *)((float)puStack_174 + (float)pfStack_184);
          fStack_120 = (float)pfStack_190 + fStack_140;
          fStack_11c = (float)pfStack_18c + fStack_13c;
          fStack_118 = (float)pfStack_188 + fStack_138;
          fStack_114 = (float)pfStack_184 + fStack_134;
          FUN_00db6410(&fStack_d0,&pfStack_190,&fStack_120,&fStack_130);
          pfStack_190 = (float *)SQRT(fStack_c8 * fStack_c8 +
                                      fStack_d0 * fStack_d0 + fStack_cc * fStack_cc);
          pfStack_18c = (float *)SQRT(fStack_b8 * fStack_b8 +
                                      fStack_c0 * fStack_c0 + fStack_bc * fStack_bc);
          fVar2 = SQRT(fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac);
          fVar11 = fStack_b8 / fVar2;
          fVar10 = fStack_a8 / fVar2;
          fVar8 = (float10)FUN_00ddbaa0(-(fStack_c8 / fVar2));
          fVar9 = (float10)fpatan((float10)fVar11,(float10)fVar10);
          fStack_f0 = (float)fVar9;
          fStack_ec = (float)fVar8;
          fVar8 = (float10)fpatan((float10)fStack_cc / (float10)(float)pfStack_18c,
                                  (float10)fStack_d0 / (float10)(float)pfStack_190);
          fStack_e8 = (float)fVar8;
          (**(code **)(*piVar5 + 0x6c))(auStack_110);
          (**(code **)(*piVar5 + 0x88))(&fStack_f4);
        }
      }
    }
  }
  return;
}

// 008C2E50  FUN_008c2e50  size=427  [callgraph]
void FUN_008c2e50(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  float local_8;
  float local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar7 + 0x500) == 0) {
    FUN_008b8d50(&local_8,param_1);
    if (*(int *)(uVar7 + 0x330) == 0xf) {
      local_8 = local_8 * -1.0;
      local_4 = local_4 * -1.0;
    }
    uVar5 = *(uint *)(*(int *)(uVar7 + 0x170) + 8);
    if (*(uint *)(*(int *)(uVar7 + 0x170) + 0xc) <= uVar5) {
      uVar4 = 0;
      if (uVar5 != 1) {
        do {
          iVar6 = *(int *)(*(int *)(uVar7 + 0x170) + 4);
          puVar3 = (undefined4 *)(iVar6 + uVar4 * 8);
          *puVar3 = *(undefined4 *)(iVar6 + 8 + uVar4 * 8);
          puVar3[1] = puVar3[3];
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(int *)(*(int *)(uVar7 + 0x170) + 8) - 1U);
      }
      iVar6 = *(int *)(uVar7 + 0x170);
      if ((*(int *)(iVar6 + 4) != 0) && (*(int *)(iVar6 + 8) != 0)) {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
      }
    }
    (**(code **)(**(int **)(uVar7 + 0x170) + 8))(&local_8);
    if (*(int *)(*(int *)(uVar7 + 0x17c) + 8) == 0) {
      *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(uVar7 + 0x184);
      return;
    }
    if (0.0 < *(float *)(uVar7 + 0x180)) {
      fVar2 = *(float *)(uVar7 + 0x180) - 1.0;
      *(float *)(uVar7 + 0x180) = fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        uVar5 = 0;
        *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(uVar7 + 0x184);
        if (*(int *)(*(int *)(uVar7 + 0x17c) + 8) != 1) {
          iVar6 = 0;
          do {
            iVar1 = *(int *)(*(int *)(uVar7 + 0x17c) + 4);
            puVar3 = (undefined4 *)(iVar1 + iVar6);
            *puVar3 = *(undefined4 *)(iVar1 + 0x10 + iVar6);
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x10;
            puVar3[1] = puVar3[5];
            puVar3[2] = puVar3[6];
            puVar3[3] = puVar3[7];
          } while (uVar5 < *(int *)(*(int *)(uVar7 + 0x17c) + 8) - 1U);
        }
        iVar6 = *(int *)(uVar7 + 0x17c);
        if ((*(int *)(iVar6 + 4) != 0) && (*(int *)(iVar6 + 8) != 0)) {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
          return;
        }
      }
    }
  }
  return;
}

// 008C3010  FUN_008c3010  size=447  [callgraph]
void FUN_008c3010(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar3 + 0xe4) == 0) {
    iVar4 = FUN_008b8bb0(param_1);
    if (iVar4 != 0) {
      uVar6 = 0x153;
      goto LAB_008c30c6;
    }
    iVar4 = FUN_008b7810(param_1);
    if ((iVar4 == 0) && (uVar6 = 0x153, *(int *)(uVar5 + 0x188) != 0)) goto LAB_008c30c6;
  }
  uVar6 = 0x134;
LAB_008c30c6:
  if (*(int *)(uVar7 + 0x40c8) != 8) {
    FUN_00aa4080(uVar6,param_4,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  if (*(int *)(uVar5 + 0x330) != 1) {
    iVar4 = FUN_008b8bb0(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_008aac90(param_1), iVar4 == 0)) {
      return;
    }
    uVar2 = 0;
    if (*(int *)(param_2 + 0x2c) == 8) {
      uVar2 = 0x3e4ccccd;
    }
    FUN_00aa4080(uVar6,param_4,uVar2,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  FUN_00a92f90();
  iVar4 = FUN_00e26e90();
  if (iVar4 != 0) {
    FUN_00e36ac0(0,0x3f800000);
  }
  FUN_00aa4080(uVar6,param_4,0x3dcccccd,0x3c23d70a,0,0xbf800000,0x3f800000);
  return;
}

// 008C31D0  FUN_008c31d0  size=323  [callgraph]
void FUN_008c31d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar6 != 0) & (uint)piVar2;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar4 + 0xe4) == 0) {
    iVar6 = FUN_008b8bb0(param_1);
    iVar6 = (-(uint)(iVar6 != 0) & 2) + 0x136;
  }
  else {
    iVar6 = 0x136;
  }
  iVar5 = FUN_00a8c760(0x16);
  if ((iVar5 != 0) && (iVar6 == 0x138)) {
    iVar6 = 0x139;
  }
  if (*(int *)(uVar3 + 0x40c8) == 8) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3dcccccd;
  }
  FUN_00aa4080(iVar6,param_3,uVar1,0x3f800000,0x8000080,0xbf800000,0x3f800000);
  iVar6 = FUN_008b7810(param_1);
  if (iVar6 == 0) {
    FUN_00a95fb0(0);
  }
  iVar6 = FUN_00a92f90();
  FUN_00e26e90();
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  return;
}

// 008C3320  FUN_008c3320  size=352  [callgraph]
void FUN_008c3320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar6 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar2 + 0xe4) == 0) {
    iVar3 = FUN_008b8bb0(param_1);
    if (iVar3 != 0) {
      iVar3 = 0x153;
      goto LAB_008c33d7;
    }
    iVar3 = FUN_008b7810(param_1);
    if ((iVar3 == 0) && (iVar3 = 0x153, *(int *)(uVar6 + 0x188) != 0)) goto LAB_008c33d7;
  }
  iVar3 = 0x134;
LAB_008c33d7:
  if (*(int *)(uVar7 + 0x40c8) != 8) {
    FUN_00aa4080(iVar3,param_4,0,0x3dcccccd,0,0,0);
    FUN_00a96030(param_4,0);
  }
  iVar4 = FUN_00a92f90();
  FUN_00e26e90();
  *(undefined4 *)(iVar4 + 0xe4) = 0;
  uVar5 = 0x13e;
  *(undefined4 *)(iVar4 + 0xe8) = 0;
  *(undefined4 *)(iVar4 + 0xec) = 0;
  if (iVar3 == 0x153) {
    uVar5 = 0x155;
  }
  FUN_00aa4080(uVar5,param_5,0,0x3f800000,0x10,0xbf800000,0x3f800000);
  return;
}

// 008C3480  FUN_008c3480  size=1286  [callgraph]
void FUN_008c3480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined *puVar9;
  float fStack_8;
  float local_4;
  
  puVar3 = param_1;
  uVar7 = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar9);
    param_1 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_1);
  }
  piVar1 = *(int **)((int)param_1 + 0x5e0);
  if (piVar1 != (int *)0x0) {
    puVar9 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar9);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  local_4 = 4.4281e-43;
  uVar6 = 0x134;
  if ((0.1 < ABS(param_6)) && (0.1 < ABS(param_6 - 180.0))) {
    param_6 = (180.0 - param_6) + (180.0 - param_6) + param_6;
  }
  if (param_5 <= 1.0) {
    if (param_5 < 0.0) {
      param_5 = 0.0;
    }
  }
  else {
    param_5 = 1.0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*puVar3)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar4 != 0) & (uint)puVar3;
  }
  if (*(int *)(uVar5 + 0xe4) == 0) {
    iVar4 = FUN_008b8bb0(puVar3);
    if ((iVar4 != 0) ||
       ((iVar4 = FUN_008b7810(puVar3), iVar4 == 0 && (*(int *)((int)param_1 + 0x188) != 0)))) {
      local_4 = 4.76441e-43;
      uVar6 = 0x153;
    }
  }
  else {
    local_4 = 4.4281e-43;
    uVar6 = 0x134;
  }
  if (*(int *)(uVar7 + 0x40c8) != 8) {
    FUN_00a95e60(param_2,0);
    FUN_00a96030(param_2,0);
  }
  if (param_5 <= 0.5) {
    fStack_8 = param_5 + param_5;
    if (fStack_8 <= 1.0) {
      if (fStack_8 < 0.0) {
        fStack_8 = 0.0;
      }
    }
    else {
      fStack_8 = 1.0;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) goto LAB_008c3681;
    fStack_8 = 1.0 - fStack_8;
  }
  else {
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) goto LAB_008c3681;
    fStack_8 = 0.0;
  }
  FUN_00e36ac0(param_2,fStack_8);
LAB_008c3681:
  if (*(int *)(uVar7 + 0x40c8) == 8) {
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_2,1.0 - param_5);
    }
  }
  if (param_5 <= 0.5) {
    fVar2 = 1.0 - param_5;
    FUN_00aa4080(uVar6,param_4,0x3f800000,fVar2,0,param_6 * 0.016666668,0);
    FUN_00a96030(param_4,0);
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_4,param_5);
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_3,param_5);
    }
    if (*(int *)((int)param_1 + 0x330) != 1) {
      return;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    FUN_00a9f560("ZangekiHold",0x3e2aaaab,0,param_4);
    FUN_00a9f600(0xffffffff,param_4,0,1,0,local_4,0x3e2aaaab,0);
    FUN_00a9f600(0xffffffff,param_4,0,0,0,uVar6,0x3e2aaaab,0);
    iVar4 = FUN_008b7810(puVar3);
    if (iVar4 != 0) {
      FUN_00a9f600(0xffffffff,param_4,0,1,1,0x13d,0x3e2aaaab,0);
      FUN_00a9f600(0xffffffff,param_4,0,0,1,uVar6,0x3e2aaaab,0);
    }
    param_5 = (param_5 + param_5) - 1.0;
    if (param_5 < 1.0) {
      if (param_5 < 0.0) {
        param_5 = 0.0;
      }
    }
    else {
      param_5 = 0.99;
    }
    local_4 = 0.0;
    iVar4 = FUN_008b7810(puVar3);
    if ((iVar4 != 0) && (fVar8 = (float10)FUN_00b8bbf0(), (float10)(float)(undefined *)0x0 < fVar8))
    {
      fVar8 = (float10)FUN_00b8bbf0();
      local_4 = (float)(fVar8 * (float10)1.6370223);
    }
    FUN_00a947e0(param_4,0,param_5,local_4);
    FUN_00a95e60(param_4,param_6 * 0.016666668);
    FUN_00a96030(param_4,0);
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_4,0x3f800000);
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(param_3,0x3f800000);
    }
    if (*(int *)((int)param_1 + 0x330) != 1) {
      return;
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      return;
    }
    fVar2 = 0.0;
  }
  FUN_00e36ac0(0,fVar2);
  return;
}

// 008C3990  FUN_008c3990  size=317  [callgraph]
void FUN_008c3990(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  float local_4;
  
  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar5 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if (((((DAT_01bea094 & 0x40000000) == 0) && (iVar4 = *(int *)(uVar6 + 0x40c8), iVar4 != 8)) &&
      (iVar4 != 9)) && (iVar4 != 0xf)) {
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      iVar4 = FUN_00606950();
      if (iVar4 == 0) {
        if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
          local_4 = *(float *)(uVar6 + 0x3bdc);
          uVar2 = *(uint *)(uVar6 + 0xcf8) & 0x8000;
          param_1 = *(undefined4 **)(uVar6 + 0x3be0);
        }
        else {
          local_4 = *(float *)(uVar6 + 0x3bd4);
          uVar2 = *(uint *)(uVar6 + 0xcf8) & 0x1000;
          param_1 = *(undefined4 **)(uVar6 + 0x3bd8);
        }
        if (uVar2 != 0) {
          iVar4 = FUN_008b7810(puVar3);
          if (((iVar4 != 0) || (*(int *)(uVar5 + 0x188) == 0)) &&
             (100.0 < ABS((float)param_1 + local_4))) {
            FUN_00d82510(0xc,param_3);
          }
        }
      }
    }
  }
  return;
}

// 008C3AD0  FUN_008c3ad0  size=148  [callgraph]
void FUN_008c3ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  float local_8;
  float local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  FUN_008b8d50(&local_8,param_1);
  if (200.0 < ABS(local_4) + ABS(local_8)) {
    FUN_00d82510(8,param_3);
    return;
  }
  if ((DAT_01d6192c == 0) && (*(int *)(uVar2 + 0xf0) != 0)) {
    FUN_00d82510(8,param_3);
  }
  return;
}

// 008C3B70  FUN_008c3b70  size=190  [callgraph]
void FUN_008c3b70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x500) == 0) && ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar2 + 0x40c8) == 8) && (iVar3 = FUN_008aa840(param_1), iVar3 != 0)) {
      return;
    }
    iVar3 = FUN_008b78c0(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_008b7f00(param_1);
      if (iVar3 == 0) {
        return;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_00d82510(4,param_3);
    *(undefined4 *)(uVar4 + 0x568) = uVar5;
  }
  return;
}

// 008CC950  ZangekiReadyStatePl1500::vf08  size=230  [class]
undefined4 __thiscall ZangekiReadyStatePl1500::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x41400000;
  uVar2 = FUN_008b8ad0(param_2);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0x136;
  FUN_008c31d0(param_2,0x136,uVar2);
  *(undefined4 *)(uVar4 + 0x2f8) = 1;
  *(undefined4 *)(uVar4 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01b35260;
      (**(code **)(*piVar3 + 4))(&DAT_01b35260);
      iVar1 = FUN_00dd6d80(puVar5);
      if (iVar1 != 0) {
        piVar3[0x234] = 0;
      }
    }
  }
  return 1;
}

// 008CCA40  ZangekiReadyStatePl1500::vf10  size=1836  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiReadyStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 *local_114;
  undefined4 *puStack_110;
  int *local_10c;
  int *local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 auStack_e8 [2];
  undefined1 local_e0 [64];
  undefined1 auStack_a0 [156];
  
  if (param_2 == (undefined4 *)0x0) {
    local_114 = param_2;
  }
  else {
    puVar15 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar15);
    local_114 = (undefined4 *)(-(uint)(iVar4 != 0) & (uint)param_2);
  }
  piVar3 = (int *)local_114[0x178];
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar15 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar15);
    piVar3 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar3);
  }
  fVar11 = *(float *)(param_1 + 0x30) + 1.0;
  *(float *)(param_1 + 0x30) = fVar11;
  if ((piVar3[0x394] & piVar3[0x33f]) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  local_10c = piVar3;
  if (1.0 < fVar11) {
    iVar4 = *(int *)(param_1 + 0x3c);
    if (local_114[0x14a] == 0) {
      if (iVar4 != -1) {
        if ((*(int *)(param_1 + 0x44) == 0) &&
           (iVar4 = FUN_00a952e0(iVar4,*(undefined4 *)(param_1 + 0x40)), iVar4 != 0)) {
          *(undefined4 *)(param_1 + 0x44) = 1;
          local_114[0xbe] = 0;
        }
        iVar4 = FUN_00a8c760(1);
        if ((iVar4 != 0) || (*(int *)(param_1 + 0x44) != 0)) {
          FUN_008c3b70(param_2,param_1,0x32,0);
          FUN_008b6fb0(param_2,param_1,0x32);
          FUN_008c3ad0(param_2,param_1,0x19);
        }
        iVar4 = FUN_00a8c760(0);
        if ((iVar4 != 0) || (*(int *)(param_1 + 0x44) != 0)) {
          FUN_008c3ad0(param_2,param_1,0x19);
        }
      }
    }
    else {
      if (iVar4 != -1) {
        if (*(int *)(param_1 + 0x44) == 0) {
          iVar4 = FUN_00a952e0(iVar4,0x41400000);
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x44) = 1;
            local_114[0xbe] = 0;
            piVar3[0x102f] = 1;
          }
          if (*(int *)(param_1 + 0x44) == 0) goto LAB_008ccb68;
        }
        FUN_008c3b70(param_2,param_1,0x32,0);
        FUN_008b6fb0(param_2,param_1,0x32);
        FUN_008c3ad0(param_2,param_1,0x19);
        if (*(int *)(param_1 + 0x44) != 0) {
          FUN_008c3ad0(param_2,param_1,0x19);
        }
      }
LAB_008ccb68:
      if ((local_114[0x14a] != 0) &&
         (iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),piVar3[0x101f]), iVar4 != 0)) {
        piVar3[0xd07] = 0x3f800000;
        uVar14 = 0x3dcccccd;
        uVar13 = 0;
        uVar12 = 0;
        fVar9 = (float10)FUN_00e049b0(0,0,0x3dcccccd);
        FUN_00b85350((float)piVar3[0x1020] - (float)piVar3[0x101f],piVar3[0x101e],
                     (float)(fVar9 * (float10)(float)piVar3[0x101e]),uVar12,uVar13,uVar14);
        *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
      }
      if ((*(float *)(param_1 + 0x88) != 0.0) &&
         (iVar4 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),piVar3[0x1020]), iVar4 != 0)) {
        piVar3[0xd07] = 0x3f800000;
        FUN_008b8470(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0x41200000;
        *(undefined4 *)(param_1 + 0x90) = 0x3dcccccd;
      }
      if (0.0 < *(float *)(param_1 + 0x8c)) {
        *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) - 1.0;
      }
      if ((((float)piVar3[0xd0f] < 0.0) && (*(int *)(param_1 + 0x50) != 0)) &&
         (fVar11 = (1.0 - *(float *)(param_1 + 0x4c)) * 0.25 + *(float *)(param_1 + 0x4c),
         *(float *)(param_1 + 0x4c) = fVar11, 0.99 < fVar11)) {
        *(undefined4 *)(param_1 + 0x50) = 0;
        FUN_008b8470(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
      }
    }
  }
  FUN_008b7700(param_2,param_1,100);
  if ((piVar3[0x394] & piVar3[0x33e]) == 0) {
    fVar9 = (float10)FUN_00e049b0();
    fVar9 = fVar9 + (float10)*(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x84) = (float)fVar9;
    if ((float10)5.0 < fVar9) {
      *(float *)(param_1 + 0x84) = (float)(float10)5.0;
      local_114[0xc0] = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (((*(int *)(param_1 + 0x44) == 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     (local_108 = (int *)FUN_00a7c8a0(), local_108 != (int *)0x0)) {
    puVar15 = &DAT_01b35260;
    (**(code **)(*local_108 + 4))(&DAT_01b35260);
    iVar4 = FUN_00dd6d80(puVar15);
    if (iVar4 != 0) {
      local_108[0x234] = 0;
    }
  }
  iVar4 = FUN_00a9f760(0x139);
  if (((iVar4 == 0) && (iVar4 = FUN_00a9f760(0xb9), iVar4 == 0)) ||
     ((iVar4 = FUN_00b7b200(), iVar4 == 0 ||
      (iVar4 = FUN_00b7b200(), fVar11 = (float)piVar3[0x10] - *(float *)(iVar4 + 0x40),
      fVar2 = (float)piVar3[0x11] - *(float *)(iVar4 + 0x44),
      fVar1 = (float)piVar3[0x12] - *(float *)(iVar4 + 0x48),
      10.0 <= SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar11 * fVar11))))) goto LAB_008cd15b;
  iVar5 = FUN_00a8c760(5);
  if (((iVar5 != 0) && (*(int *)(iVar4 + 0x4b0) != 0x28080)) && (*(int *)(iVar4 + 0x4b0) != 0x28081)
     ) {
    local_100 = 0.0;
    local_fc = 1.0;
    local_f8 = 2.0;
    fVar9 = (float10)fpatan((float10)(float)piVar3[0x10] - (float10)*(float *)(iVar4 + 0x40),
                            (float10)(float)piVar3[0x12] - (float10)*(float *)(iVar4 + 0x48));
    D3DXMatrixRotationY(local_e0,(float)fVar9);
    D3DXVec3TransformNormal(&local_108,&local_108,auStack_e8);
    local_114 = (undefined4 *)(*(float *)(iVar4 + 0x40) + (float)local_114);
    puStack_110 = (undefined4 *)((float)puStack_110 + *(float *)(iVar4 + 0x44));
    local_10c = (int *)((float)local_10c + *(float *)(iVar4 + 0x48));
    local_108 = (int *)(*(float *)(iVar4 + 0x4c) + (float)local_108);
    fStack_104 = ((float)local_114 - (float)piVar3[0x10]) * 0.1;
    local_100 = ((float)puStack_110 - (float)piVar3[0x11]) * 0.1;
    local_fc = ((float)local_10c - (float)piVar3[0x12]) * 0.1;
    local_f8 = ((float)local_108 - (float)piVar3[0x13]) * 0.1;
    (**(code **)(*piVar3 + 0x70))(&fStack_104);
  }
  local_108 = (int *)0x0;
  local_114 = (undefined4 *)FUN_00a12210(0xffffffff);
  fStack_104 = 0.0;
  do {
    iVar5 = FUN_00c5f290(*(undefined4 *)(iVar4 + 0x4f0),(fStack_104 == 0.0) * '\x02' + '\x02');
    puVar8 = *(undefined4 **)(iVar5 + 4);
    puStack_110 = puVar8 + *(int *)(iVar5 + 0xc);
    if (puVar8 != puStack_110) {
      do {
        iVar5 = FUN_00c518c0(auStack_a0,*puVar8);
        puVar6 = (undefined4 *)FUN_00a12210(*(undefined4 *)(iVar5 + 8));
        if (puVar6 != (undefined4 *)0x0) {
          local_108 = (int *)0x1;
          local_114 = puVar6;
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puStack_110);
    }
    piVar3 = local_10c;
    fStack_104 = (float)((int)fStack_104 + 1);
  } while ((int)fStack_104 < 2);
  if (local_108 == (int *)0x0) {
    if (0 < *(int *)(iVar4 + 0x6fc)) {
      puStack_110 = (undefined4 *)local_10c[0x13c];
      uStack_f0 = 0;
      uStack_ec = 0x3faccccd;
      auStack_e8[0] = 0;
      uVar13 = 0x3f490fdb;
      iVar5 = (**(code **)(*local_10c + 0x84))(0x3f490fdb);
      uVar12 = *(undefined4 *)(iVar5 + 4);
      iVar7 = FUN_00f98aa0(puStack_110,uVar12);
      fVar11 = (float)iVar7 * 0.5;
      iVar5 = (int)puStack_110;
      puStack_110 = (undefined4 *)iVar7;
      puVar8 = (undefined4 *)FUN_00f98a90(fVar11);
      iVar5 = (int)puStack_110;
      puStack_110 = puVar8;
      iVar5 = FUN_00a866a0(piVar3 + 0x10,&local_114,&uStack_f0,&local_100,(float)(int)puVar8 * 0.5,
                           fVar11,iVar5,uVar12,uVar13);
      if (iVar5 < 0) goto LAB_008cd0d9;
    }
    if (0 < *(int *)(iVar4 + 0x6c4)) {
      local_114 = (undefined4 *)FUN_00a12210(*(int *)(iVar4 + 0x6c4));
    }
  }
LAB_008cd0d9:
  if (local_114 != (undefined4 *)0x0) {
    fVar9 = (float10)FUN_00b8bbf0();
    puStack_110 = (undefined4 *)(float)fVar9;
    if (_DAT_01d61920 <= 0.0) {
      iVar4 = FUN_00a12210(0);
      fVar9 = (float10)(float)puStack_110;
      puVar15 = (undefined *)(iVar4 + 0x10);
    }
    else {
      puVar15 = &DAT_01d618e0;
    }
    fVar10 = (float10)fpatan((float10)(float)local_114[0x11] - (float10)*(float *)(puVar15 + 0x34),
                             SQRT(((float10)(float)local_114[0x12] -
                                  (float10)*(float *)(puVar15 + 0x38)) *
                                  ((float10)(float)local_114[0x12] -
                                  (float10)*(float *)(puVar15 + 0x38)) +
                                  ((float10)(float)local_114[0x10] -
                                  (float10)*(float *)(puVar15 + 0x30)) *
                                  ((float10)(float)local_114[0x10] -
                                  (float10)*(float *)(puVar15 + 0x30))));
    FUN_00b8bb40((float)((fVar10 * (float10)-1.0 - fVar9) * (float10)0.05 + fVar9));
  }
LAB_008cd15b:
  StateMachineNode::vf10(param_2);
  return;
}

// 008D3270  ZangekiReadyStatePl1500::vf0C  size=484  [class]
void __thiscall ZangekiReadyStatePl1500::vf0C(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  int local_40;
  float local_3c;
  int local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar3 + 0x5e0);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      puVar4 = &DAT_01b35b90;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
      iVar1 = FUN_00dd6d80(puVar4);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar2);
    }
    if ((piVar2[0x1032] == 4) && (*(int *)(uVar3 + 0x330) != 0x25)) {
      FUN_00d82510(9,100);
    }
    iVar1 = FUN_008b7810(param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(uVar3 + 0x188) = 1;
      *(undefined4 *)(uVar3 + 0x3ec) = 0x10008;
      piVar2[0x225] = 0;
      if (piVar2[0x1032] == 1) {
        FUN_008e6d00();
        if (*(int *)(piVar2[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(piVar2[0x1d9] + 0x104) = 0;
        }
      }
      local_40 = piVar2[0x10];
      local_2c = (float)piVar2[0x11];
      local_38 = piVar2[0x12];
      local_24 = (float)piVar2[0x13];
      local_3c = local_2c + 3.0;
      local_34 = local_24 + local_14;
      local_30 = local_40;
      local_28 = local_38;
      iVar1 = hkpAllRayHitCollector::hkpAllRayHitCollector_3(&local_20,&local_30,&local_40);
      if (iVar1 != 0) {
        local_30 = local_20;
        local_2c = local_1c;
        local_28 = local_18;
        local_24 = local_14;
        local_3c = local_1c - 3.0;
        local_34 = local_14 - local_14;
        local_40 = local_20;
        local_38 = local_18;
        iVar1 = hkpAllRayHitCollector::hkpAllRayHitCollector_3(&local_20,&local_30,&local_40);
        if (iVar1 != 0) {
          local_40 = local_20;
          local_3c = local_1c;
          local_38 = local_18;
          local_34 = local_14;
        }
        (**(code **)(*piVar2 + 0x6c))(&local_40);
      }
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

