// src/unsorted/unit_00BCF3E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BCF3E0..00BCF3E0, 1 functions

#include "mgrr.h"

// 00BCF3E0  FUN_00bcf3e0  size=1926  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FUN_00bcf3e0(int param_1,float *param_2,int param_3,int param_4,float param_5,float param_6)

{
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  undefined1 *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfStack_188;
  float *local_184;
  float local_168;
  float local_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_14c [4];
  float fStack_148;
  int *local_144;
  float *local_140;
  float *pfStack_13c;
  float *local_138;
  float *pfStack_134;
  undefined1 auStack_12c [4];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 auStack_10c [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [4];
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [112];
  
  if (param_2 == (float *)0x0) {
    uVar5 = 0;
  }
  else {
    local_184 = (float *)&DAT_01be9ef4;
    pfStack_188 = (float *)0xbcf409;
    (**(code **)*param_2)();
    pfStack_188 = (float *)0xbcf410;
    iVar4 = FUN_00dd6d80();
    uVar5 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  local_144 = *(int **)(uVar5 + 0xc);
  if (local_144 == (int *)0x0) {
    local_144 = (int *)0x0;
  }
  else {
    local_184 = (float *)&DAT_01be9db8;
    pfStack_188 = (float *)0xbcf435;
    (**(code **)(*local_144 + 4))();
    pfStack_188 = (float *)0xbcf43c;
    iVar4 = FUN_00dd6d80();
    local_144 = (int *)(-(uint)(iVar4 != 0) & (uint)local_144);
  }
  if (param_2 != (float *)0x0) {
    local_184 = (float *)&DAT_01be9ef4;
    pfStack_188 = (float *)0xbcf45d;
    (**(code **)*param_2)();
    pfStack_188 = (float *)0xbcf464;
    FUN_00dd6d80();
  }
  local_184 = (float *)0xbcf475;
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    pfStack_188 = &local_128;
    local_184 = param_2;
    FUN_00bbcb90();
    local_168 = local_128;
    local_164 = local_124;
    if (*(int *)(uVar5 + 0x330) == 0xf) {
      local_168 = local_128 * -1.0;
      local_164 = local_124 * -1.0;
    }
    local_184 = (float *)0xbcf4cf;
    fVar6 = (float10)FUN_00da7570();
    local_168 = (float)(fVar6 * (float10)local_168);
    local_184 = (float *)0xbcf4dc;
    fVar6 = (float10)FUN_00da7500();
    fVar9 = (float10)*(float *)(param_1 + 0x60) - (float10)local_168 * (float10)2e-05;
    *(float *)(param_1 + 0x60) = (float)fVar9;
    fVar6 = (float10)*(float *)(param_1 + 100) - fVar6 * (float10)local_164 * (float10)2e-05;
    *(float *)(param_1 + 100) = (float)fVar6;
    fVar7 = (float10)param_5;
    if ((float10)30.0 == fVar7) {
      fVar7 = (float10)*(float *)(uVar5 + 0x108);
    }
    fVar8 = (float10)param_6;
    if (fVar8 == (float10)30.0) {
      fVar8 = (float10)*(float *)(uVar5 + 0x104);
    }
    fVar2 = (float10)0;
    if (fVar2 < fVar7) {
      fVar7 = fVar7 * (float10)0.017453292;
      if (fVar7 < fVar6) {
        *(float *)(param_1 + 100) = (float)fVar7;
      }
      if ((float10)*(float *)(param_1 + 100) < -fVar7) {
        *(float *)(param_1 + 100) = (float)-fVar7;
      }
    }
    if (fVar2 < fVar8) {
      fVar8 = fVar8 * (float10)0.017453292;
      if (fVar8 < fVar9) {
        *(float *)(param_1 + 0x60) = (float)fVar8;
      }
      if ((float10)*(float *)(param_1 + 0x60) < -fVar8) {
        *(float *)(param_1 + 0x60) = (float)-fVar8;
      }
    }
    if (param_3 == 0) {
      *(float *)(param_1 + 0x60) = (float)fVar2;
    }
    if (param_4 == 0) {
      *(float *)(param_1 + 100) = (float)fVar2;
    }
    if (fVar2 == (float10)*(float *)(param_1 + 0x60)) {
      *(undefined4 *)(param_1 + 0x60) = 0x38d1b717;
    }
    if ((float10)*(float *)(param_1 + 100) == fVar2) {
      *(undefined4 *)(param_1 + 100) = 0x38d1b717;
    }
    local_184 = (float *)0x0;
    pfStack_188 = (float *)0xbcf5fc;
    iVar4 = FUN_00a12210();
    local_120 = *(float *)(iVar4 + 0x40);
    pfVar1 = (float *)(iVar4 + 0x10);
    local_11c = *(float *)(iVar4 + 0x44);
    local_118 = *(float *)(iVar4 + 0x48);
    local_114 = *(float *)(iVar4 + 0x4c);
    local_dc = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) + *pfVar1 * *pfVar1 +
                    *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_d8 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                    *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                    *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar10 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                  *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                  *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    local_164 = *(float *)(iVar4 + 0x28) / fVar10;
    local_168 = *(float *)(iVar4 + 0x38) / fVar10;
    local_184 = (float *)-(*(float *)(iVar4 + 0x18) / fVar10);
    pfStack_188 = (float *)0xbcf6ab;
    fVar6 = (float10)FUN_00ddbaa0();
    local_128 = (float)fVar6;
    fVar6 = (float10)fpatan((float10)local_164,(float10)local_168);
    local_140 = (float *)(float)fVar6;
    fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_d8,
                            (float10)*pfVar1 / (float10)local_dc);
    local_138 = (float *)(float)fVar6;
    local_d0[0] = 0.0;
    local_d0[1] = 1.0;
    local_d0[2] = 0.0;
    pfStack_188 = local_d0;
    local_184 = pfVar1;
    D3DXVec3TransformNormal();
    uStack_bc = 0x3f800000;
    fStack_b8 = 0.0;
    fStack_b4 = 0.0;
    D3DXVec3TransformNormal(&uStack_bc,&uStack_bc);
    fStack_b8 = 0.0;
    pfVar12 = &fStack_b8;
    fStack_b4 = 0.0;
    fStack_b0 = 1.0;
    pfVar13 = pfVar12;
    pfVar14 = pfVar1;
    D3DXVec3TransformNormal(pfVar12,pfVar12,pfVar1);
    local_124 = fStack_f4 * _DAT_018a9668 + (float)local_144;
    local_120 = fStack_f0 * _DAT_018a9668 + (float)local_140;
    local_11c = fStack_ec * _DAT_018a9668 + (float)pfStack_13c;
    local_118 = fStack_e8 * _DAT_018a9668 + (float)local_138;
    local_184 = (float *)((float)local_144 - local_124);
    FUN_00ddcfe0(auStack_74,&fStack_d4,-*(float *)(param_1 + 100));
    puVar11 = auStack_74;
    D3DXVec3TransformNormal(&local_184,&local_184,puVar11);
    fStack_ec = fStack_158;
    fStack_e8 = local_168;
    fStack_e4 = local_164;
    local_120 = (float)pfVar1 * -1.0;
    local_11c = (float)local_d0 * -1.0;
    local_118 = (float)pfStack_188 * -1.0;
    local_114 = (float)local_184 * -1.0;
    fVar10 = local_118 * local_118 + local_11c * local_11c + local_120 * local_120;
    if (fVar10 < 0.0 == (fVar10 == 0.0)) {
      FUN_00ddf460(&local_120,&local_120);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_120 = 0.0;
      local_11c = 1.0;
      local_118 = 0.0;
    }
    local_138 = pfStack_188;
    pfStack_134 = local_184;
    local_140 = pfVar1;
    pfStack_13c = local_d0;
    FUN_00ddcfe0(auStack_80,auStack_e0,0xbfc90fdb);
    D3DXVec3TransformNormal(&local_140,&local_140,auStack_80);
    FUN_00ddcfe0(auStack_8c,auStack_12c,*(undefined4 *)(param_1 + 0x60));
    D3DXVec3TransformNormal(auStack_14c,auStack_14c,auStack_8c);
    local_168 = (float)puVar11 + fStack_148;
    local_164 = (float)pfVar12 + (float)local_144;
    fStack_160 = (float)pfVar13 + (float)local_140;
    fStack_15c = (float)pfVar14 + (float)pfStack_13c;
    pfStack_188 = (float *)(local_168 + fStack_158);
    local_184 = (float *)(local_164 + fStack_154);
    FUN_00db6410(&local_d8,&local_168,&pfStack_188,&local_138);
    local_124 = SQRT(local_d0[0] * local_d0[0] + local_d8 * local_d8 + fStack_d4 * fStack_d4);
    local_120 = SQRT(fStack_c0 * fStack_c0 + local_d0[2] * local_d0[2] + local_d0[3] * local_d0[3]);
    fVar3 = SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
    fVar10 = fStack_b0 / fVar3;
    fVar6 = (float10)FUN_00ddbaa0(-(local_d0[0] / fVar3));
    fVar7 = (float10)fpatan((float10)(fStack_c0 / fVar3),(float10)fVar10);
    fStack_108 = (float)fVar7;
    fStack_104 = (float)fVar6;
    fVar6 = (float10)fpatan((float10)fStack_d4 / (float10)local_120,
                            (float10)local_d8 / (float10)local_124);
    fStack_100 = (float)fVar6;
    pfStack_188 = (float *)((float)puVar11 + fStack_148);
    local_184 = (float *)((float)pfVar12 + (float)local_144);
    (**(code **)((int)local_d0[0] + 0x6c))(&pfStack_188);
    (**(code **)((int)local_d0[0] + 0x88))(auStack_10c);
  }
  return;
}

