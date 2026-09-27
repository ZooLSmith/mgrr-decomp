// src/unsorted/unit_0088D080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0088D080..0088D080, 1 functions

#include "types.h"

// 0088D080  FUN_0088d080  size=1419  [run]
/* WARNING: Type propagation algorithm not settling */

void FUN_0088d080(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float unaff_EBX;
  undefined4 *puVar9;
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
    uVar10 = 0;
  }
  else {
    local_164 = (float *)&DAT_01b35b78;
    pfStack_168 = (float *)0x88d0ab;
    (**(code **)*param_1)();
    pfStack_168 = (float *)0x88d0b2;
    iVar7 = FUN_00dd6d80();
    uVar10 = -(uint)(iVar7 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar10 + 0x5e0) != (int *)0x0) {
    local_164 = (float *)&DAT_01b35b20;
    pfStack_168 = (float *)0x88d0d6;
    (**(code **)(**(int **)(uVar10 + 0x5e0) + 4))();
    pfStack_168 = (float *)0x88d0dd;
    FUN_00dd6d80();
  }
  local_164 = (float *)param_1;
  pfStack_168 = (float *)0x88d0ee;
  iVar7 = FUN_00877a60();
  if (iVar7 != 0) {
    local_164 = (float *)0xffffffff;
    pfStack_168 = (float *)0x88d102;
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
    pfStack_168 = (float *)0x88d18f;
    fVar11 = (float10)FUN_00ddbaa0();
    fVar12 = (float10)fpatan((float10)(fVar4 / fVar6),(float10)(fVar5 / fVar6));
    local_110 = (float)fVar12;
    local_10c = (float)fVar11;
    fVar11 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)local_13c,
                             (float10)*(float *)(iVar7 + 0x10) /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    local_108 = (float)fVar11;
    local_13c = *(float *)(iVar7 + 0x44);
    local_138 = *(float *)(iVar7 + 0x48);
    local_130[0] = 0.0;
    local_130[1] = 0.0;
    pfStack_168 = (float *)0x5;
    local_130[2] = 1.0;
    pfStack_16c = &local_110;
    pfStack_170 = afStack_e0 + 8;
    pfStack_174 = (float *)0x88d1f2;
    FUN_00ddc1d0();
    local_164 = afStack_e0 + 8;
    pfStack_168 = local_130;
    pfStack_16c = (float *)local_80;
    pfStack_170 = (float *)0x88d20f;
    D3DXVec3TransformNormal();
    local_13c = 0.0;
    pfStack_170 = (float *)0x5;
    pfStack_174 = (float *)auStack_11c;
    local_138 = 1.0;
    pfStack_178 = afStack_e0 + 5;
    fStack_134 = 0.0;
    pfStack_17c = (float *)0x88d233;
    FUN_00ddc1d0();
    pfStack_170 = afStack_e0 + 5;
    pfStack_174 = &local_13c;
    pfStack_178 = (float *)auStack_6c;
    pfStack_17c = (float *)0x88d250;
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
      pfStack_184 = (float *)0x88d377;
      D3DXMatrixRotationZ();
      pfStack_184 = afStack_e0;
      D3DXMatrixMultiply(pfStack_184,&fStack_70);
    }
    if (local_130[3] != 0.0) {
      pfStack_180 = (float *)auStack_68;
      pfStack_17c = (float *)local_130[3];
      pfStack_184 = (float *)0x88d3b9;
      D3DXMatrixRotationY();
      pfStack_184 = afStack_e0;
      D3DXMatrixMultiply(pfStack_184,&fStack_70);
    }
    if (local_130[2] != 0.0) {
      pfStack_180 = (float *)auStack_68;
      pfStack_17c = (float *)local_130[2];
      pfStack_184 = (float *)0x88d3f9;
      D3DXMatrixRotationX();
      pfStack_184 = afStack_e0;
      D3DXMatrixMultiply(pfStack_184,&fStack_70);
    }
    pfStack_184 = &fStack_118;
    pfStack_180 = afStack_e0 + 2;
    pfStack_17c = pfStack_184;
    D3DXMatrixMultiply();
    D3DXMatrixRotationX(&fStack_74,*(float *)(uVar10 + 0x374) * 0.5);
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
    iVar7 = 3;
    do {
      FUN_00a82640();
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar9 = (undefined4 *)((int)unaff_EBX + 0x50);
    iVar7 = 3;
    do {
      iVar8 = FUN_00a12210(*puVar9);
      pfStack_16c = (float *)(afStack_e0[9] * 2.6);
      pfStack_184 = (float *)(afStack_e0[7] * 2.6 + *(float *)(iVar8 + 0x40));
      pfStack_180 = (float *)(afStack_e0[8] * 2.6 + *(float *)(iVar8 + 0x44));
      pfStack_17c = (float *)(*(float *)(iVar8 + 0x48) + (float)pfStack_16c);
      pfStack_178 = (float *)(afStack_e0[10] * 2.6 + *(float *)(iVar8 + 0x4c));
      FUN_00a83330(&pfStack_184,1);
      puVar9 = puVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

