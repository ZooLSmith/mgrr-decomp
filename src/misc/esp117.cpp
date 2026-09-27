// src/misc/esp117.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0520..009E9370, 8 functions

#include "types.h"

// 009D0520  FUN_009d0520  size=101  [callgraph]
void __thiscall FUN_009d0520(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[4] = *(int *)(param_2 + 400);
  param_1[5] = *(int *)(param_2 + 0x194);
  param_1[6] = *(int *)(param_2 + 0x198);
  param_1[7] = *(int *)(param_2 + 0x19c);
  param_1[8] = *(int *)(param_2 + 0x1b0);
  param_1[9] = *(int *)(param_2 + 0x1b4);
  param_1[10] = *(int *)(param_2 + 0x1b8);
  param_1[0xb] = *(int *)(param_2 + 0x1bc);
  param_1[0xc] = *(int *)(param_2 + 0x25c);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x428);
  return;
}

// 009D0590  FUN_009d0590  size=101  [callgraph]
void __fastcall FUN_009d0590(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)(iVar1 + 400) = param_1[4];
  *(int *)(iVar1 + 0x194) = param_1[5];
  *(int *)(iVar1 + 0x198) = param_1[6];
  *(int *)(iVar1 + 0x19c) = param_1[7];
  iVar1 = *param_1;
  *(int *)(iVar1 + 0x1b0) = param_1[8];
  *(int *)(iVar1 + 0x1b4) = param_1[9];
  *(int *)(iVar1 + 0x1b8) = param_1[10];
  *(int *)(iVar1 + 0x1bc) = param_1[0xb];
  *(int *)(*param_1 + 0x25c) = param_1[0xc];
  *(short *)(*param_1 + 0x428) = (short)param_1[0xd];
  return;
}

// 009D0600  esp117::vf14  size=82  [class]
void __fastcall esp117::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x48c) != -1) {
    FUN_00ec9eb0(*(int *)(param_1 + 0x48c));
    *(undefined4 *)(param_1 + 0x48c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x498));
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  return;
}

// 009D43B0  esp117::esp117  size=18  [class]
undefined4 * __fastcall esp117::esp117(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009D9B00  esp117::vf18  size=104  [class]
undefined4 __thiscall esp117::vf18(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = esp39::vf18(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x49c)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x498) + 0x10);
    do {
      if ((((int *)piVar2[-1] != (int *)0x0) && (*(int *)piVar2[-1] == *(int *)(param_2 + 8))) ||
         (((int *)*piVar2 != (int *)0x0 && (*(int *)*piVar2 == *(int *)(param_2 + 8))))) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x49c));
  }
  return 0;
}

// 009DF5D0  esp117::vf00  size=30  [class]
undefined4 __thiscall esp117::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E8CC0  esp117::vf04  size=1712  [class]
undefined4 __thiscall
esp117::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined3 local_1c;
  undefined1 uStack_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar5 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x484) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar6;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
    if (psVar1 != (short *)0x0) {
      *(int *)(param_1 + 0x45c) = (int)*psVar1;
      *(int *)(param_1 + 0x458) = (int)psVar1[1];
      *(int *)(param_1 + 0x460) = (int)psVar1[2];
      *(int *)(param_1 + 0x464) = (int)psVar1[3];
      *(int *)(param_1 + 0x468) = (int)psVar1[4];
      *(float *)(param_1 + 0x474) = (float)(int)psVar1[5] * -2.0;
      *(float *)(param_1 + 0x47c) = (float)(int)psVar1[6];
      *(float *)(param_1 + 0x480) = (float)(int)psVar1[7];
      *(int *)(param_1 + 0x484) = (int)(char)psVar1[8];
      if (psVar1[5] < 0) {
        iVar5 = FUN_00f98a90();
        *(float *)(param_1 + 0x46c) =
             (float)-(int)psVar1[5] * 0.01 * (float)(iVar5 / 2) + *(float *)(param_1 + 0x46c);
        iVar5 = FUN_00f98aa0();
        *(float *)(param_1 + 0x470) =
             (float)-(int)psVar1[5] * 0.01 * (float)(iVar5 / 2) + *(float *)(param_1 + 0x470);
        *(undefined4 *)(param_1 + 0x474) = 0xc0000000;
      }
      *(int *)(param_1 + 0x494) = (int)*(char *)((int)psVar1 + 0x13);
    }
  }
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar6 != (undefined4 *)0x0)) {
    puVar6 = (undefined4 *)*puVar6;
    if ((undefined4 *)((int)puVar6 + 0xfU & 0xfffffff0) != puVar6) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x490) = *puVar6;
      *(undefined4 *)(param_1 + 0x4b0) = puVar6[0xb];
      *(undefined4 *)(param_1 + 0x4a4) = puVar6[0xc];
      *(undefined4 *)(param_1 + 0x4a8) = puVar6[0xd];
      *(undefined4 *)(param_1 + 0x4ac) = puVar6[0xe];
    }
  }
  if (*(float *)(param_1 + 0x490) == 0.0) {
    *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x46c);
  iVar5 = FUN_00f98a90();
  *(float *)(param_1 + 0x46c) = (float)(iVar5 / 2) + *(float *)(param_1 + 0x46c);
  iVar5 = FUN_00f98aa0();
  fVar4 = (float)(iVar5 / 2) + *(float *)(param_1 + 0x470);
  *(float *)(param_1 + 0x470) = fVar4;
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x474);
  *(float *)(param_1 + 0x474) =
       (*(float *)(param_1 + 0x474) + 90.0) * 0.01 * *(float *)(param_1 + 0x46c);
  *(float *)(param_1 + 0x478) = (*(float *)(param_1 + 0x478) + 90.0) * 0.01 * fVar4;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
  iVar5 = *(int *)(param_1 + 0x45c);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
LAB_009e8fc9:
      FUN_009cca90(param_1,&DAT_0165b468);
      return 0;
    }
    uVar2 = **(uint **)(param_1 + 0x58);
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
    if (uVar2 == 0) goto LAB_009e8fc9;
    if (*(uint *)(param_1 + 0x460) == (uint)*(byte *)(uVar2 + 0x14)) goto LAB_009e935b;
  }
  else if (iVar5 == 1) {
    *(undefined4 *)(param_1 + 0x450) = 0;
    FUN_009df6d0();
    iVar5 = FUN_00f4b0b0();
    FUN_009df740();
    *(int *)(param_1 + 0x454) = iVar5;
    *(undefined4 *)(param_1 + 0x460) = 0xff;
    if (iVar5 == 0) {
      FUN_009cca90(param_1,&DAT_0165b40c);
      return 0;
    }
  }
  else {
    if (iVar5 == 2) {
      FUN_009cca90(param_1,&DAT_0165b3e0);
      *(undefined4 *)(param_1 + 0x454) = 0;
      return 0;
    }
    if (iVar5 != 3) goto LAB_009e935b;
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x60);
  }
  uVar2 = *(uint *)(param_1 + 0x464);
  if ((uVar2 < 0x169) && (uVar9 = *(uint *)(param_1 + 0x468), uVar9 < 0x169)) {
    if (uVar2 < uVar9) {
      FUN_009cca90(param_1,&DAT_0165b300,uVar2,uVar9);
      return 0;
    }
    if (*(float *)(param_1 + 0x47c) < 0.0) {
      FUN_009cca90(param_1,&DAT_0165b2cc,(double)*(float *)(param_1 + 0x47c));
      return 0;
    }
    if (*(float *)(param_1 + 0x480) < 0.0) {
      FUN_009cca90(param_1,&DAT_0165b294,(double)*(float *)(param_1 + 0x480));
      return 0;
    }
    if (*(float *)(param_1 + 0x47c) < *(float *)(param_1 + 0x480)) {
      FUN_009cca90(param_1,&DAT_0165b260,(double)*(float *)(param_1 + 0x480),
                   (double)*(float *)(param_1 + 0x47c));
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x24) + 0x84) != 0.0) {
      uVar7 = FUN_00ec9d50();
      *(undefined4 *)(param_1 + 0x48c) = uVar7;
    }
    *(undefined2 *)(param_1 + 0x428) = 1;
    iVar5 = FUN_00f20580();
    if (iVar5 != 0) {
      iVar5 = FUN_009d4a40();
      if (iVar5 == 0) {
        return 0;
      }
      uVar10 = FUN_00fddccc(*(undefined4 *)(param_1 + 0x458),1000);
      local_18 = *(undefined4 *)(&DAT_016d4768 + (int)uVar10 * 4);
      _local_1c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar10 >> 0x20)]);
      iVar5 = FUN_00de3d80(0,&local_1c);
      if (iVar5 == 0) {
        FUN_009cca90(param_1,&DAT_0165b23c);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x49c) = 0;
      uVar2 = *(uint *)(iVar5 + 4);
      lVar3 = (ulonglong)uVar2 * 0x20;
      iVar8 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,&DAT_01b7bdf8
                          );
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        FUN_00401040(iVar8,0x20,uVar2,FUN_009d6470);
      }
      *(int *)(param_1 + 0x498) = iVar8;
      if (iVar8 != 0) {
        uVar2 = *(uint *)(iVar5 + 4);
        uVar9 = 0;
        if (uVar2 != 0) {
          do {
            local_14 = FUN_00f5a050();
            local_10 = FUN_00f5a080();
            local_c = *(undefined4 *)(iVar5 + 0x18);
            local_4 = *(undefined4 *)(param_1 + 0x460);
            local_8 = param_1;
            iVar8 = esp18::preTrans();
            if (iVar8 != 0) {
              *(int *)(param_1 + 0x49c) = *(int *)(param_1 + 0x49c) + 1;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar2);
        }
        if (*(int *)(param_1 + 0x49c) < 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x488) = 0;
        iVar5 = FUN_009d4a80();
        if ((iVar5 != 0) && (*(char *)(iVar5 + 0x12) == '\x01')) {
          *(undefined4 *)(param_1 + 0x488) = 1;
        }
        return 1;
      }
    }
  }
LAB_009e935b:
  FUN_009cca90();
  return 0;
}

// 009E9370  esp117::vf10  size=4555  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp117::vf10(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  uint local_198;
  uint local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_158;
  float local_154;
  float fStack_150;
  int iStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8 [32];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  if ((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) {
    return;
  }
  FUN_009d0520(param_1);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
    local_198 = 0;
  }
  else {
    local_198 = *puVar5;
    if ((local_198 + 0xf & 0xfffffff0) != local_198) {
      uVar8 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar8);
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar5 == (uint *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *puVar5;
    if ((uVar10 + 0xf & 0xfffffff0) != uVar10) {
      uVar8 = FUN_00f59ed0(1);
      FUN_00dd5650(&DAT_016597b4,uVar8);
    }
  }
  local_194 = uVar10;
  if (*(int *)(param_1 + 0x488) == 1) {
    FUN_009cdeb0(&local_190);
    local_190 = *(float *)(uVar10 + 4) + local_190;
    local_18c = *(float *)(uVar10 + 8) + local_18c;
    local_188 = *(float *)(uVar10 + 0xc) + local_188;
  }
  else {
    local_190 = *(float *)(param_1 + 400);
    local_18c = *(float *)(param_1 + 0x194);
    local_188 = *(float *)(param_1 + 0x198);
    local_184 = *(float *)(param_1 + 0x19c);
  }
  FUN_00ea0000(&local_140,&local_190);
  if (local_138 == 0.0) {
    local_140 = 0.0;
    local_13c = 0.0;
    local_138 = 0.0;
    local_134 = 1.0;
  }
  else {
    iVar7 = FUN_00f98a90();
    local_1c4 = (float)(iVar7 / 2);
    local_140 = local_140 - (float)(int)local_1c4;
    iVar7 = FUN_00f98aa0();
    local_1c4 = (float)(iVar7 / 2);
    local_13c = local_13c - (float)(int)local_1c4;
  }
  if (*(int *)(param_1 + 0x48c) != -1) {
    local_158 = *(float *)(param_1 + 0x25c);
    uVar10 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined2 *)(param_1 + 0x4e);
    *(float *)(param_1 + 400) = local_190;
    local_154 = (float)(uVar10 >> 9 & 1);
    *(float *)(param_1 + 0x194) = local_18c;
    *(float *)(param_1 + 0x198) = local_188;
    *(float *)(param_1 + 0x19c) = local_184;
    if (*(float *)(param_1 + 0x4b0) != 0.0) {
      local_1b0 = *(float *)(param_1 + 400);
      local_1ac = *(float *)(param_1 + 0x194);
      local_1a8 = *(float *)(param_1 + 0x198);
      local_1a4 = *(float *)(param_1 + 0x19c);
      pfVar6 = (float *)FUN_00e9fe70();
      local_1c0 = *pfVar6;
      local_1bc = pfVar6[1];
      local_1b8 = pfVar6[2];
      local_1b4 = pfVar6[3];
      local_120 = *(float *)(param_1 + 0x4a4);
      local_11c = *(float *)(param_1 + 0x4a8);
      local_118 = *(float *)(param_1 + 0x4ac);
      local_1c4 = *(float *)(param_1 + 0x4b0) * *(float *)(param_1 + 0x4b0);
      if ((local_120 - local_1c0) * (local_120 - local_1c0) +
          (local_11c - local_1bc) * (local_11c - local_1bc) +
          (local_118 - local_1b8) * (local_118 - local_1b8) < local_1c4) {
        local_130 = local_120 - local_1b0;
        local_12c = local_11c - local_1ac;
        local_128 = local_118 - local_1a8;
        if (local_1c4 < local_128 * local_128 + local_12c * local_12c + local_130 * local_130) {
          local_170 = local_1c0 - local_1b0;
          local_16c = local_1bc - local_1ac;
          local_168 = local_1b8 - local_1a8;
          local_164 = local_1b4 - local_1a4;
          if (((local_170 != 0.0) || (local_16c != 0.0)) || (local_168 != 0.0)) {
            FUN_00ddf460(&local_1c0,&local_170);
            fVar3 = local_128 * local_1b8 + local_130 * local_1c0 + local_12c * local_1bc;
            fVar4 = local_1c0 * fVar3 + local_1b0;
            fVar1 = local_1bc * fVar3 + local_1ac;
            local_128 = local_1b8 * fVar3 + local_1a8;
            local_124 = local_1b4 * fVar3 + local_1a4;
            fVar3 = local_120 - fVar4;
            local_16c = local_11c - fVar1;
            local_168 = local_118 - local_128;
            fVar3 = -SQRT(local_1c4 -
                          (local_168 * local_168 + local_16c * local_16c + fVar3 * fVar3));
            *(float *)(param_1 + 400) = local_1c0 * fVar3 + fVar4;
            *(float *)(param_1 + 0x194) = local_1bc * fVar3 + fVar1;
            *(float *)(param_1 + 0x198) = local_1b8 * fVar3 + local_128;
            *(float *)(param_1 + 0x19c) = fVar3 * local_1b4 + local_124;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x4a0);
    *(undefined2 *)(param_1 + 0x432) = 1;
    *(undefined1 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(local_194 + 0x84);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(local_194 + 0x84);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
    if (*(float *)(param_1 + 0x10c) != 1.0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x108);
    }
    *(undefined2 *)(param_1 + 0x4e) = 0xfffe;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
    iVar7 = cEspDrawWork::cEspDrawWork_4(*(undefined4 *)(param_1 + 0x48c),0);
    *(undefined2 *)(param_1 + 0x4e) = uVar2;
    if ((uVar10 >> 8 & 1) == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
    }
    else {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
    }
    if (local_154 == 0.0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
    }
    *(float *)(param_1 + 0x25c) = local_158;
    if (iVar7 == 0) goto LAB_009ea531;
  }
  if (ABS(local_138) < 0.0 != (ABS(local_138) == 0.0)) goto LAB_009e99be;
  *(float *)(param_1 + 400) = local_140;
  *(float *)(param_1 + 0x194) = local_13c;
  *(undefined4 *)(param_1 + 0x198) = 0xc59c4000;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
  local_1c8 = *(float *)(param_1 + 0x25c);
  fVar11 = (float10)local_1c8;
  if (*(int *)(param_1 + 0x48c) != -1) {
    fVar11 = (float10)FUN_00eca1e0(*(int *)(param_1 + 0x48c));
    if (fVar11 <= (float10)0) goto LAB_009e99be;
    fVar11 = fVar11 * (float10)1.6666666;
    if ((float10)1 < fVar11) {
      fVar11 = (float10)1;
    }
    fVar11 = fVar11 * (float10)local_1c8;
    local_1c8 = (float)fVar11;
    if (fVar11 <= (float10)0.01) goto LAB_009e99be;
  }
  fVar13 = (float10)0.01;
  fVar12 = ABS((float10)*(float *)(param_1 + 400));
  if (fVar12 <= (float10)*(float *)(param_1 + 0x46c)) {
    if ((float10)*(float *)(param_1 + 0x474) <= fVar12) {
      fVar11 = ((float10)1 -
               (fVar12 - (float10)*(float *)(param_1 + 0x474)) /
               ((float10)*(float *)(param_1 + 0x46c) - (float10)*(float *)(param_1 + 0x474))) *
               fVar11;
      local_1c8 = (float)fVar11;
      if (fVar11 < fVar13 != (fVar11 == fVar13)) {
        FUN_009d0590();
        return;
      }
    }
    fVar12 = ABS((float10)*(float *)(param_1 + 0x194));
    if (fVar12 <= (float10)*(float *)(param_1 + 0x470)) {
      if ((float10)*(float *)(param_1 + 0x478) <= fVar12) {
        fVar11 = ((float10)1 -
                 (fVar12 - (float10)*(float *)(param_1 + 0x478)) /
                 ((float10)*(float *)(param_1 + 0x470) - (float10)*(float *)(param_1 + 0x478))) *
                 fVar11;
        local_1c8 = (float)fVar11;
        if (fVar11 < fVar13 != (fVar11 == fVar13)) {
          FUN_009d0590();
          return;
        }
      }
      uVar8 = FUN_00e9fe70();
      uVar10 = local_198;
      if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
        fVar11 = (float10)FUN_00edbf30(uVar8,&local_190,*(undefined4 *)(local_198 + 0xc),
                                       *(undefined4 *)(local_198 + 0x10));
      }
      else {
        fVar11 = (float10)1;
      }
      fVar11 = fVar11 * (float10)local_1c8;
      local_1c8 = (float)fVar11;
      if (fVar11 < (float10)0.01 == (fVar11 == (float10)0.01)) {
        uVar8 = FUN_00e9fe70();
        if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
          fVar11 = (float10)FUN_00edc040(uVar8,&local_190,*(undefined4 *)(uVar10 + 0x60),
                                         *(undefined4 *)(uVar10 + 100));
        }
        else {
          fVar11 = (float10)1;
        }
        fVar11 = fVar11 * (float10)local_1c8;
        local_1c8 = (float)fVar11;
        if (fVar11 < (float10)0.01 != (fVar11 == (float10)0.01)) goto LAB_009e99be;
        fVar1 = (float)*(int *)(param_1 + 0x464);
        if (*(int *)(param_1 + 0x464) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        if (fVar1 != 0.0) {
          local_1b0 = 0.0;
          local_1ac = 0.0;
          local_1a8 = 0.0;
          local_d8[0] = 0.0;
          local_dc = 0.0;
          local_e0 = 0.0;
          local_e4 = 0;
          local_ec = 0;
          local_f0 = 0.0;
          local_f4 = 0.0;
          local_f8 = 0.0;
          local_100 = 0;
          local_104 = 0;
          local_108 = 0;
          local_10c = 0;
          local_d8[1] = 1.0;
          local_e8 = 0x3f800000;
          local_fc = 0x3f800000;
          local_110 = 0x3f800000;
          if (*(int *)(param_1 + 0x50) != 0) {
            FID_conflict__memcpy(local_d8 + 2,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
            local_d8[0xe] = 0.0;
            local_d8[0xf] = 0.0;
            local_d8[0x10] = 0.0;
            D3DXMatrixMultiply(&local_110,&local_110,local_d8 + 2);
          }
          local_d8[0x10] = 0.0;
          local_d8[0xf] = 0.0;
          local_d8[0xe] = 0.0;
          local_d8[0xd] = 0.0;
          local_d8[0xb] = 0.0;
          local_d8[10] = 0.0;
          local_d8[9] = 0.0;
          local_d8[8] = 0.0;
          local_d8[6] = 0.0;
          local_d8[5] = 0.0;
          local_d8[4] = 0.0;
          local_d8[3] = 0.0;
          local_d8[0x11] = 1.0;
          local_d8[0xc] = 1.0;
          local_d8[7] = 1.0;
          local_d8[2] = 1.0;
          if (*(float *)(param_1 + 0x1b8) != 0.0) {
            D3DXMatrixRotationZ(auStack_50,*(undefined4 *)(param_1 + 0x1b8));
            D3DXMatrixMultiply(local_d8,auStack_58,local_d8);
          }
          if (*(float *)(param_1 + 0x1b4) != 0.0) {
            D3DXMatrixRotationY(auStack_50,*(undefined4 *)(param_1 + 0x1b4));
            D3DXMatrixMultiply(local_d8,auStack_58,local_d8);
          }
          if (*(float *)(param_1 + 0x1b0) != 0.0) {
            D3DXMatrixRotationX(auStack_50,*(undefined4 *)(param_1 + 0x1b0));
            D3DXMatrixMultiply(local_d8,auStack_58,local_d8);
          }
          D3DXMatrixMultiply(&local_110,local_d8 + 2,&local_110);
          uStack_17c = 0;
          uStack_178 = 0;
          iStack_174 = 0x40e00000;
          local_170 = 0.0;
          D3DXVec3TransformNormal(&local_12c,&uStack_17c,&local_11c);
          local_f8 = local_f8 + local_138;
          local_f4 = local_134 + local_f4;
          local_f0 = local_130 + local_f0;
          local_188 = 0.0;
          local_184 = 0.0;
          uStack_180 = 0;
          uStack_17c = 0;
          D3DXVec3TransformNormal(&local_1c8,&local_188,&local_128);
          local_1b0 = local_e0 + local_1b0;
          local_1ac = local_dc + local_1ac;
          local_1a8 = local_d8[0] + local_1a8;
          fVar1 = local_1a8 * local_1a8 + local_1ac * local_1ac + local_1b0 * local_1b0;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_1b0,&local_1b0);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_1b0 = 0.0;
            local_1ac = 1.0;
            local_1a8 = 0.0;
          }
          pfVar6 = (float *)FUN_00e9fe70();
          local_1c0 = *pfVar6 - local_190;
          local_1bc = pfVar6[1] - local_18c;
          local_1b8 = pfVar6[2] - local_188;
          local_1b4 = pfVar6[3] - local_184;
          fVar1 = local_1b8 * local_1b8 + local_1bc * local_1bc + local_1c0 * local_1c0;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_1c0,&local_1c0);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_1c0 = 0.0;
            local_1bc = 1.0;
            local_1b8 = 0.0;
          }
          fVar11 = (float10)FUN_00fdc4e0();
          iVar7 = *(int *)(param_1 + 0x464);
          fVar11 = (fVar11 + fVar11) * (float10)360.0 * (float10)0.15915494;
          fVar13 = (float10)iVar7;
          if (iVar7 < 0) {
            fVar13 = fVar13 + (float10)4.2949673e+09;
          }
          iStack_174 = iVar7;
          if (fVar13 < fVar11) goto LAB_009e99be;
          iStack_174 = *(int *)(param_1 + 0x468);
          fVar13 = (float10)iStack_174;
          if (iStack_174 < 0) {
            fVar13 = fVar13 + (float10)4.2949673e+09;
          }
          if (fVar13 < fVar11 != (fVar13 == fVar11)) {
            iStack_174 = iVar7 - iStack_174;
            fVar12 = (float10)iStack_174;
            if (iStack_174 < 0) {
              fVar12 = fVar12 + (float10)4.2949673e+09;
            }
            fVar11 = ((float10)1 - (fVar11 - fVar13) / fVar12) * (float10)local_1c8;
            local_1c8 = (float)fVar11;
            if (fVar11 < (float10)0.01 != (fVar11 == (float10)0.01)) {
              FUN_009d0590();
              return;
            }
          }
        }
        if (0.0 < *(float *)(param_1 + 0x47c)) {
          pfVar6 = (float *)FUN_00e9fe70();
          fVar1 = (local_188 - pfVar6[2]) * (local_188 - pfVar6[2]) +
                  (local_18c - pfVar6[1]) * (local_18c - pfVar6[1]) +
                  (local_190 - *pfVar6) * (local_190 - *pfVar6);
          if (*(float *)(param_1 + 0x47c) * *(float *)(param_1 + 0x47c) < fVar1) goto LAB_009e99be;
          if ((*(float *)(param_1 + 0x480) * *(float *)(param_1 + 0x480) < fVar1) &&
             (local_1c8 = (1.0 - (SQRT(fVar1) - *(float *)(param_1 + 0x480)) /
                                 (*(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x480))) *
                          local_1c8, local_1c8 < 0.01 != (local_1c8 == 0.01))) {
            FUN_009d0590();
            return;
          }
        }
        iStack_14c = -1;
        iVar7 = FUN_009d4a80();
        if (iVar7 != 0) {
          iStack_14c = *(char *)(iVar7 + 0x11) + -1;
        }
        if (*(int *)(param_1 + 0x494) != 0) {
          if (_DAT_018d4824 < _DAT_018d5df8 == (_DAT_018d4824 == _DAT_018d5df8)) {
            FUN_009d0590();
            return;
          }
          fVar11 = (float10)FUN_00e04780(_DAT_018d4824,_DAT_018d5df8,_DAT_018d4830);
          fVar11 = fVar11 * (float10)local_1c8;
          local_1c8 = (float)fVar11;
          if (fVar11 < (float10)0.01 != (fVar11 == (float10)0.01)) goto LAB_009ea531;
        }
        local_158 = 0.0;
        if (*(int *)(param_1 + 0x484) != 0) {
          iVar7 = FUN_00e9fef0();
          local_158 = -*(float *)(iVar7 + 8);
        }
        fVar1 = *(float *)(param_1 + 400);
        if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
          fVar11 = (float10)FUN_0043f4b0(*(undefined4 *)(param_1 + 400),0xb727c5ac);
        }
        else {
          fVar11 = (float10)FUN_0043f490(*(undefined4 *)(param_1 + 400),0x3727c5ac);
        }
        *(float *)(param_1 + 400) = (float)fVar11;
        if (*(float *)(param_1 + 400) == 0.0) {
          local_154 = 0.0;
        }
        else {
          local_154 = *(float *)(param_1 + 0x194) / *(float *)(param_1 + 400);
        }
        local_1c0 = *(float *)(param_1 + 400);
        local_198 = 0;
        local_1bc = *(float *)(param_1 + 0x194);
        local_1b8 = *(float *)(param_1 + 0x198);
        local_1b4 = *(float *)(param_1 + 0x19c);
        fStack_144 = 0.0;
        fStack_150 = 0.0;
        fStack_148 = 1.0;
        local_170 = 0.0;
        if (0 < (int)*(float *)(param_1 + 0x49c)) {
          local_194 = 0;
          local_1c4 = *(float *)(param_1 + 0x49c);
          do {
            iVar9 = *(int *)(param_1 + 0x498) + local_194;
            iStack_174 = FUN_009d49d0();
            puVar5 = (uint *)FUN_009d4a00();
            iVar7 = FUN_009d4a40();
            *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(iVar9 + 0xc);
            *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(iVar9 + 0x10);
            *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(iVar7 + 0x25);
            *(ushort *)(param_1 + 0x432) = (ushort)*(byte *)(iVar7 + 0x1e);
            *(float *)(param_1 + 0x1c0) = (float)puVar5[0x11] * 0.017453292;
            *(float *)(param_1 + 0x1c4) = (float)puVar5[0x12] * 0.017453292;
            *(float *)(param_1 + 0x1c8) = (float)puVar5[0x13] * 0.017453292 + local_158;
            *(uint *)(param_1 + 0x250) = puVar5[0x32];
            *(uint *)(param_1 + 0x254) = puVar5[0x33];
            *(uint *)(param_1 + 600) = puVar5[0x34];
            *(float *)(param_1 + 0x25c) = (float)puVar5[0x35] * local_1c8;
            if ((*puVar5 & 0x100000) == 0) {
              *(uint *)(param_1 + 0x100) = puVar5[0x21];
              fVar1 = (float)puVar5[0x21];
            }
            else {
              *(float *)(param_1 + 0x100) = (float)puVar5[0x21] * (float)puVar5[0x58];
              fVar1 = (float)puVar5[0x20] * (float)puVar5[0x58];
            }
            *(float *)(param_1 + 0x104) = fVar1;
            if (local_198 == 0) {
              local_170 = (float)puVar5[1];
              if (local_170 == 0.0) {
                fStack_144 = 0.0;
              }
              else {
                fStack_144 = *(float *)(param_1 + 400) / local_170;
              }
              fStack_150 = 0.0;
              if ((float)puVar5[2] != 0.0) {
                fStack_150 = *(float *)(param_1 + 0x194) / (float)puVar5[2];
              }
              fStack_148 = 1.0;
              if ((-1 < iStack_14c) &&
                 (fVar1 = fStack_150 * fStack_150 + fStack_144 * fStack_144, fVar1 < 0.20249999)) {
                fStack_148 = SQRT(fVar1) * 2.2222223;
              }
            }
            else {
              if ((*(byte *)(iStack_174 + 4) & 0x20) == 0) {
                if (fStack_144 != 0.0) {
                  *(float *)(param_1 + 400) =
                       (((float)puVar5[1] - local_170) * *(float *)(param_1 + 0x490) + local_170) *
                       fStack_144;
                }
                if (fStack_150 != 0.0) {
                  fVar1 = *(float *)(param_1 + 400) * local_154;
                  goto LAB_009ea46b;
                }
              }
              else {
                *(uint *)(param_1 + 400) = puVar5[1];
                fVar1 = (float)puVar5[2];
LAB_009ea46b:
                *(float *)(param_1 + 0x194) = fVar1;
              }
              if (iStack_14c < (int)local_198) {
                *(float *)(param_1 + 0x25c) = fStack_148 * *(float *)(param_1 + 0x25c);
              }
              if (((*(uint *)(iStack_174 + 4) & 0x100000) != 0) &&
                 ((((float10)*(float *)(param_1 + 400) != (float10)local_1c0 ||
                   (*(float *)(param_1 + 0x194) != local_1bc)) ||
                  ((*(float *)(param_1 + 0x198) != local_1b8 ||
                   (*(float *)(param_1 + 0x19c) != local_1b4)))))) {
                fVar11 = (float10)fpatan((float10)local_1bc - (float10)*(float *)(param_1 + 0x194),
                                         (float10)local_1c0 - (float10)*(float *)(param_1 + 400));
                *(float *)(param_1 + 0x1c8) =
                     (float)((float10)*(float *)(param_1 + 0x1c8) - (fVar11 - (float10)1.5707964));
              }
            }
            iVar7 = cEspDrawWork::cEspDrawWork_4(0xffffffff,iVar9);
            if (iVar7 != 0) {
              local_198 = local_198 + 1;
            }
            local_194 = local_194 + 0x20;
            local_1c4 = (float)((int)local_1c4 + -1);
          } while (local_1c4 != 0.0);
        }
      }
LAB_009ea531:
      FUN_009d0590();
      return;
    }
  }
LAB_009e99be:
  FUN_009d0590();
  return;
}

