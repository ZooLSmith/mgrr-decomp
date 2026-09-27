// src/unsorted/unit_00F11190.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F11190..00F119C0, 2 functions

#include "mgrr.h"

// 00F11190  FUN_00f11190  size=2090  [run]
void __thiscall FUN_00f11190(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  uint *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  float fStack_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  double dStack_108;
  float local_100;
  undefined1 *local_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [36];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_148;
  local_140 = 0.0;
  local_13c = 0.0;
  local_124 = param_2;
  local_138 = 0.0;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  if (*(float *)(uVar5 + 8) != 0.0) {
    pfVar3 = (float *)FUN_00e9fe70();
    local_140 = *pfVar3 - *(float *)(param_1 + 400);
    local_13c = pfVar3[1] - *(float *)(param_1 + 0x194);
    local_138 = pfVar3[2] - *(float *)(param_1 + 0x198);
    local_134 = pfVar3[3] - *(float *)(param_1 + 0x19c);
    local_144 = local_140 * local_140 + local_13c * local_13c + local_138 * local_138;
    if (local_144 < 0.0 == (local_144 == 0.0)) {
      FUN_00ddf460(&local_140,&local_140);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_140 = 0.0;
      local_13c = 1.0;
      local_138 = 0.0;
    }
    if ((*(int *)(param_1 + 0x50) != 0) &&
       ((((*(uint *)(param_1 + 0x38) & 0x100000) != 0 || ((*(uint *)(param_1 + 0x38) & 0x20) != 0))
        || ((*(byte *)(param_1 + 0x3c) & 1) != 0)))) {
      D3DXMatrixInverse(local_60,0,*(int *)(param_1 + 0x50) + 0x10);
      D3DXVec3TransformNormal(&stack0xfffffeb4,&stack0xfffffeb4,&uStack_6c);
    }
    if (*(float *)(uVar5 + 8) != 0.0) {
      local_144 = *(float *)(uVar5 + 8);
      local_140 = local_144 * local_140;
      local_13c = local_13c * local_144;
      local_138 = local_138 * local_144;
      local_134 = local_144 * local_134;
      fStack_120 = *(float *)(param_1 + 400) + local_140;
      fStack_11c = local_13c + *(float *)(param_1 + 0x194);
      fStack_118 = local_138 + *(float *)(param_1 + 0x198);
      fStack_d4 = local_134 + *(float *)(param_1 + 0x19c);
      local_c0 = (double)CONCAT44(fStack_11c,fStack_120);
      fStack_114 = fStack_d4;
      local_b8 = fStack_118;
      goto LAB_00f113e5;
    }
  }
  local_c0 = *(double *)(param_1 + 400);
  local_b8 = *(float *)(param_1 + 0x198);
  fStack_d4 = *(float *)(param_1 + 0x19c);
LAB_00f113e5:
  local_e0 = (float)local_c0;
  local_fc = local_a0;
  local_100 = local_124;
  local_dc = local_c0._4_4_;
  fStack_d8 = local_b8;
  uStack_d0 = param_3;
  fStack_f0 = local_140;
  fStack_ec = local_13c;
  fStack_e8 = local_138;
  fStack_e4 = local_134;
  local_b4 = fStack_d4;
  if ((*(short *)(param_1 + 0x4e) == -3) || ((*(uint *)(param_1 + 0x30) & 0x100) != 0)) {
    FUN_00f072d0(&local_100);
  }
  else if ((*(uint *)(param_1 + 0x38) & 0x20) == 0) {
    if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x38) & 0x100000) == 0) {
        FUN_00f08740(&local_100);
      }
      else {
        FUN_00f08b70(&local_100);
      }
    }
    else {
      FUN_00f07da0(&local_100);
    }
  }
  else {
    FUN_00f078a0(&local_100);
  }
  esp107::vf10();
  if ((*(uint *)(param_1 + 0x3c) & 0x100000) != 0) {
    uVar5 = 0;
    if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
       (uVar5 = **(uint **)(param_1 + 0x58), (uVar5 + 0xf & 0xfffffff0) != uVar5)) {
      uVar4 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if ((*(byte *)(uVar5 + 0x1c) == 0) && (*(char *)(uVar5 + 0x1d) == '\0')) {
      local_c0 = (double)CONCAT44(uStack_6c,uStack_70);
      local_b8 = fStack_68;
      pfVar3 = (float *)FUN_00e9fe70();
      local_140 = *pfVar3 - (float)local_c0;
      local_13c = pfVar3[1] - local_c0._4_4_;
      uStack_b0 = (double)CONCAT44(local_13c,local_140);
      local_138 = pfVar3[2] - local_b8;
      local_134 = fStack_a4;
      local_144 = local_138 * local_138 + local_140 * local_140 + local_13c * local_13c;
      fStack_a8 = local_138;
      if (local_144 < 0.0 == (local_144 == 0.0)) {
        FUN_00ddf460(&local_140,&local_140);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_140 = 0.0;
        local_13c = 1.0;
        local_138 = 0.0;
      }
      fStack_120 = 0.0;
      fStack_11c = 0.0;
      fStack_118 = 1.0;
      fStack_114 = 0.0;
      D3DXVec3TransformNormal(&fStack_120,&fStack_120,local_a0);
      local_144 = ABS(fStack_118 * local_138 + fStack_11c * local_13c + fStack_120 * local_140);
      local_144 = local_144 * local_144;
      fVar1 = local_144;
    }
    else {
      local_144 = (float)(uint)*(byte *)(uVar5 + 0x1d);
      fStack_110 = (float)*(byte *)(uVar5 + 0x1c);
      fStack_10c = (float)(int)local_144;
      local_c0._0_4_ = *(float *)(param_1 + 0x100) * -0.5;
      local_c0._4_4_ = *(float *)(param_1 + 0x104) * -0.5;
      local_b8 = 0.0;
      D3DXVec3TransformNormal(&uStack_b0,&local_c0,local_a0);
      fStack_cc = local_c0._4_4_ + fStack_7c;
      fStack_c8 = local_b8 + fStack_78;
      fStack_c4 = local_b4 + fStack_74;
      fStack_7c = fStack_cc;
      fStack_78 = fStack_c8;
      fStack_74 = fStack_c4;
      pfVar3 = (float *)FUN_00e9fe70();
      fVar1 = *pfVar3 - fStack_cc;
      local_c0 = (double)CONCAT44(fVar1,(float)local_c0);
      fStack_148 = pfVar3[1] - fStack_c8;
      local_144 = pfVar3[2] - fStack_c4;
      local_140 = (float)uStack_b0;
      fVar1 = local_144 * local_144 + fVar1 * fVar1 + fStack_148 * fStack_148;
      local_b8 = fStack_148;
      local_b4 = local_144;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&stack0xfffffeb4,&stack0xfffffeb4);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_148 = 1.0;
        local_144 = 0.0;
      }
      uStack_12c = 0;
      fStack_128 = 0.0;
      local_124 = 1.0;
      fStack_120 = 0.0;
      D3DXVec3TransformNormal(&uStack_12c,&uStack_12c,uStack_130);
      uStack_b0 = (double)local_13c;
      dStack_108 = (double)local_140;
      local_c0 = (double)local_138;
      fStack_128 = ABS(fStack_120 * local_140 + fStack_11c * local_13c + fStack_118 * local_138);
      local_144 = fStack_118 * fStack_118 + fStack_11c * fStack_11c + fStack_120 * fStack_120;
      fVar6 = (float10)FUN_00fdef70();
      local_124 = (float)fVar6;
      local_144 = (float)((float10)local_c0 * (float10)local_c0 +
                         (float10)uStack_b0 * (float10)uStack_b0 +
                         (float10)dStack_108 * (float10)dStack_108);
      fVar6 = (float10)FUN_00fdef70();
      local_144 = (float)fVar6;
      fStack_128 = fStack_128 / (local_144 * local_124);
      fVar6 = (float10)FUN_00fdc4e0();
      fStack_128 = 90.0 - (float)fVar6 * 57.295776;
      local_124 = 1.0;
      fVar1 = local_124;
      if ((fStack_128 < fStack_10c) &&
         (local_124 = (fStack_128 - fStack_110) / (fStack_10c - fStack_110), fVar1 = local_124,
         1.0 < local_124)) {
        local_124 = 1.0;
        fVar1 = local_124;
      }
    }
    *(float *)(param_1 + 0x124) = fVar1 * *(float *)(param_1 + 0x124);
  }
  __security_check_cookie(local_14 ^ (uint)&fStack_148);
  return;
}

// 00F119C0  FUN_00f119c0  size=1472  [run]
/* WARNING: Removing unreachable block (ram,0x00f11cf1) */
/* WARNING: Removing unreachable block (ram,0x00f11d53) */

void __thiscall FUN_00f119c0(int param_1,float *param_2)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  void *_Dst;
  undefined4 *_Dst_00;
  uint local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  float *local_b0;
  void *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  void *local_94;
  int local_90;
  float *local_80;
  float *local_7c;
  int local_78 [3];
  uint *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  int local_50;
  float *local_4c;
  float *local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar6 = *(int *)(param_1 + 0x588);
  uVar8 = 0;
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x580);
    *(undefined4 *)(param_1 + 0x58c) = 1;
  }
  _Dst = (void *)((iVar6 + -1) * 0x120 + *(int *)(param_1 + 0x578));
  *(int *)(param_1 + 0x588) = iVar6 + -1;
  _memset(_Dst,0,0x120);
  if (_Dst != (void *)0x0) {
    FUN_00ddbbb0();
    *(undefined1 *)((int)_Dst + 0x10a) = 0;
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    local_bc = 0;
  }
  else {
    local_bc = **(uint **)(param_1 + 0x58);
    if ((local_bc + 0xf & 0xfffffff0) != local_bc) {
      uVar5 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar7 == (uint *)0x0)) {
    local_c0 = 0;
  }
  else {
    local_c0 = *puVar7;
    if ((local_c0 + 0xf & 0xfffffff0) != local_c0) {
      uVar5 = FUN_00f59ed0(1);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  *(undefined4 *)((int)_Dst + 0xf4) = *(undefined4 *)(local_bc + 4);
  *(undefined4 *)((int)_Dst + 0xf8) = *(undefined4 *)(local_bc + 8);
  *(undefined4 *)((int)_Dst + 0xfc) = 0;
  *(undefined4 *)((int)_Dst + 0x100) = 0;
  local_98 = local_bc;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x20), puVar7 == (uint *)0x0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)*puVar7;
    if ((void *)((int)pvVar2 + 0xfU & 0xfffffff0) != pvVar2) {
      uVar5 = FUN_00f59ed0(2);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  local_90 = param_1 + 0x60;
  local_a0 = (int)_Dst + 0xf4;
  local_b4 = (int)_Dst + 0x104;
  local_b0 = (float *)((int)_Dst + 0x108);
  local_a4 = (int)_Dst + 0x50;
  local_b8 = (int)_Dst + 0xfc;
  local_a8 = param_1 + 0x400;
  local_ac = _Dst;
  local_94 = pvVar2;
  FUN_00efcf40(&local_b8,&local_a0);
  uVar3 = FUN_00dde2a0(0,0xffff);
  *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x558) + (uVar3 & 0xffff);
  puVar7 = (uint *)((int)_Dst + 0xf0);
  FUN_00ddbbd0(*(undefined4 *)(param_1 + 0x558));
  local_b4 = local_c0;
  local_a8 = *(undefined4 *)((int)_Dst + 0x104);
  local_b0 = (float *)(param_1 + 0x54);
  local_ac = (void *)(param_1 + 0x60);
  local_b8 = (int)_Dst + 0xf4;
  local_78[2] = (int)_Dst + 0xe8;
  local_68 = (int)_Dst + 0x50;
  local_64 = (int)_Dst + 0x60;
  local_5c = &local_a0;
  local_58 = (int)_Dst + 0x80;
  local_54 = (int)_Dst + 0x90;
  local_80 = (float *)((int)_Dst + 0xd8);
  local_a4 = CONCAT22(local_a4._2_2_,*(undefined2 *)((int)_Dst + 0x108));
  local_7c = (float *)((int)_Dst + 200);
  local_60 = (int)_Dst + 0x70;
  local_50 = (int)_Dst + 0xa0;
  local_44 = (int)_Dst + 0xb0;
  local_40 = (int)_Dst + 0xc0;
  local_78[1] = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_78[0] = (int)_Dst + 0xfc;
  local_1c = 0;
  local_18 = 0;
  local_6c = puVar7;
  local_4c = local_80;
  local_48 = local_7c;
  local_20 = _Dst;
  FUN_00edcea0(local_78,&local_b8);
  if ((*(uint *)((int)_Dst + 0xf4) & 0x20000) != 0) {
    uVar3 = *puVar7 * 0x19660d + 0x3c6ef35f;
    *puVar7 = uVar3;
    if (0.0 <= 1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) {
      *(uint *)((int)_Dst + 0xf4) = *(uint *)((int)_Dst + 0xf4) & 0xfff7ffff;
    }
    else {
      *(uint *)((int)_Dst + 0xf4) = *(uint *)((int)_Dst + 0xf4) | 0x80000;
    }
  }
  if ((*(byte *)((int)_Dst + 0xf6) & 1) != 0) {
    uVar3 = *puVar7 * 0x19660d + 0x3c6ef35f;
    *puVar7 = uVar3;
    if (0.0 <= 1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0) {
      *(uint *)((int)_Dst + 0xf4) = *(uint *)((int)_Dst + 0xf4) & 0xfffbffff;
    }
    else {
      *(uint *)((int)_Dst + 0xf4) = *(uint *)((int)_Dst + 0xf4) | 0x40000;
    }
  }
  if (((*(short *)(param_1 + 0x4e) != -3) || ((*(uint *)((int)_Dst + 0xf4) & 0x200) != 0)) &&
     ((*(uint *)((int)_Dst + 0xf4) & 0x8000) == 0)) {
    local_b0 = param_2;
    local_b4 = (int)_Dst + 0xfc;
    local_a0 = (int)_Dst + 0x50;
    local_9c = (int)_Dst + 0x80;
    local_98 = (int)_Dst + 0x90;
    local_b8 = param_1 + 0x38;
    local_94 = _Dst;
    FUN_00edc180(&local_a0,&local_b8);
    if (*(short *)(param_1 + 0x4e) == -3) {
      fVar1 = *param_2;
      *(float *)((int)_Dst + 0x60) = fVar1 * *(float *)((int)_Dst + 0x60);
      *(float *)((int)_Dst + 100) = fVar1 * *(float *)((int)_Dst + 100);
    }
  }
  *(uint *)((int)_Dst + 0x100) = *(uint *)((int)_Dst + 0x100) | 0x4000000;
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x1ecc) == 0) {
    *(uint *)((int)_Dst + 0xfc) = *(uint *)((int)_Dst + 0xfc) | 0x40;
  }
  *(uint *)((int)_Dst + 0x100) = *(uint *)((int)_Dst + 0x100) | 0x80000000;
  *(uint *)((int)_Dst + 0x100) = *(uint *)((int)_Dst + 0x100) | 0x40000000;
  if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
    *(float *)((int)_Dst + 0x60) = *(float *)(param_1 + 0x100) * *(float *)((int)_Dst + 0x60);
    *(float *)((int)_Dst + 100) = *(float *)(param_1 + 0x104) * *(float *)((int)_Dst + 100);
  }
  *local_7c = *(float *)(param_1 + 0x250) * *local_7c;
  local_7c[1] = local_7c[1] * *(float *)(param_1 + 0x254);
  local_7c[2] = local_7c[2] * *(float *)(param_1 + 600);
  local_7c[3] = local_7c[3] * *(float *)(param_1 + 0x25c);
  *local_80 = *(float *)(param_1 + 0x250) * *local_80;
  local_80[1] = local_80[1] * *(float *)(param_1 + 0x254);
  local_80[2] = local_80[2] * *(float *)(param_1 + 600);
  local_80[3] = local_80[3] * *(float *)(param_1 + 0x25c);
  if (*(int *)(param_1 + 0x5a8) != 0) {
    _Dst_00 = (undefined4 *)(*(int *)(param_1 + 0x588) * 0x30 + *(int *)(param_1 + 0x5a8));
    _memset(_Dst_00,0,0x30);
    if (_Dst_00 != (undefined4 *)0x0) {
      _Dst_00[6] = 0;
      _Dst_00[1] = 0;
      *_Dst_00 = 0;
      _Dst_00[3] = 0;
      _Dst_00[2] = 0;
      _Dst_00[5] = 0;
      _Dst_00[4] = 0;
      _Dst_00[7] = 0;
      _Dst_00[8] = 0;
      _Dst_00[9] = 0;
      if (((*(int *)(param_1 + 0x58) != 0) &&
          (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (uint *)0x0)) &&
         (uVar8 = *puVar4, (uVar8 + 0xf & 0xfffffff0) != uVar8)) {
        uVar5 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      iVar6 = FUN_00ec94a0(uVar8,puVar7);
      if (iVar6 == 0) {
        FUN_009cca90(param_1,&DAT_016dd9b4);
      }
    }
  }
  *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + 1;
  return;
}

