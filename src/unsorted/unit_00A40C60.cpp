// src/unsorted/unit_00A40C60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A40C60..00A43E40, 14 functions

#include "types.h"

// 00A40C60  FUN_00a40c60  size=280  [run]
float * __thiscall FUN_00a40c60(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_24;
  float local_20 [7];
  
  pfVar2 = (float *)FUN_00a36510();
  if (pfVar2 != (float *)0x0) {
    FUN_00a380b0(param_2);
    pfVar2[0x1c] = param_3;
    if (param_3 == -NAN) {
      fVar3 = (float)FUN_00a497e0(DAT_01be8e40);
      pfVar2[0x1c] = fVar3;
      pfVar2[0x1c] = DAT_01be8e40;
    }
    pfVar2[0x1d] = param_4;
    if ((param_4 == *(float *)(param_1 + 0x18)) || (param_4 == 0.0)) {
      pfVar2[0x1e] = (float)((uint)pfVar2[0x1e] & 0xffffffdf);
    }
    else {
      pfVar2[0x1e] = (float)((uint)pfVar2[0x1e] | 0x20);
    }
    iVar4 = *(int *)(param_2 + 0x4c);
    if ((iVar4 != -1) && (iVar4 != 0)) {
      iVar4 = FUN_00e77510(iVar4,*(undefined4 *)(param_2 + 0x50),&DAT_01be5540);
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_01661794);
        return pfVar2;
      }
      iVar4 = FUN_00a12210(*(undefined4 *)(param_2 + 0x54));
      if (iVar4 == 0) {
        FUN_00dd5650(&DAT_01661764,*(undefined4 *)(param_2 + 0x54));
        return pfVar2;
      }
      D3DXVec3TransformNormal(local_20,param_2 + 0x10,iVar4 + 0x10);
      fVar3 = *(float *)(iVar4 + 0x44);
      fVar1 = *(float *)(iVar4 + 0x48);
      *pfVar2 = unaff_ESI + *(float *)(iVar4 + 0x40);
      pfVar2[1] = fVar3 + unaff_EBX;
      pfVar2[2] = fVar1 + fStack_24;
      pfVar2[3] = local_20[0];
    }
  }
  return pfVar2;
}

// 00A40D80  FUN_00a40d80  size=130  [run]
void __thiscall FUN_00a40d80(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5a198) != 0) && (*(int *)(*(int *)(param_1 + 0x5a198) + 4) == param_2))
  {
    *(undefined4 *)(param_1 + 0x5bfa0) = 0;
    FUN_00a36590(*(undefined4 *)(param_1 + 0x5a19c));
    *(undefined4 *)(param_1 + 0x5a198) = *(undefined4 *)(param_1 + 0x5a19c);
  }
  iVar1 = *(int *)(param_1 + 0x5a19c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == param_2)) {
    *(undefined4 *)(param_1 + 0x5bfa0) = 0;
    FUN_00a36590(iVar1);
    *(undefined4 *)(param_1 + 0x5a19c) = 0;
    *(undefined4 *)(param_1 + 0x5a198) = 0;
  }
  FUN_00a2d740();
  return;
}

// 00A40E10  FUN_00a40e10  size=5761  [run]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a40e10(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  uint *puVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  uint local_118;
  uint local_114 [2];
  float afStack_10c [7];
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [12];
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [2];
  undefined1 auStack_50 [76];
  
  cLightApplyScale::cLightApplyScale();
  if (*(int *)(param_1 + 0x5a194) != 0) {
    uVar4 = FUN_00e77370(&DAT_01be5540);
    FUN_00a2d740(0x10);
    iVar14 = *(int *)(param_1 + 0x5a194);
    if ((uVar4 < *(uint *)(iVar14 + 8)) &&
       (puVar8 = (uint *)(iVar14 + 0x40 + uVar4 * 0x30), puVar8 != (uint *)0x0)) {
      local_118 = 0;
      if (*puVar8 != 0) {
        do {
          if (uVar4 < *(uint *)(iVar14 + 8)) {
            if (local_118 < *puVar8) {
              iVar11 = (puVar8[1] + local_118) * 0x90 + *(int *)(iVar14 + 0x14) + iVar14;
            }
            else {
              iVar11 = 0;
            }
          }
          else {
            iVar11 = 0;
          }
          if (((*(uint *)(iVar11 + 4) & 1) != 0) && ((*(uint *)(iVar11 + 4) & 2) == 0)) {
            FUN_00a40c60(iVar11,0xffffffff,0);
          }
          local_118 = local_118 + 1;
        } while (local_118 < *puVar8);
      }
    }
    else {
      FUN_00dd5650(&DAT_016617c8);
    }
    local_118 = 0;
    iVar11 = iVar14 + 0x40;
    do {
      if (((local_118 < *(uint *)(iVar14 + 8)) && (iVar11 != 0)) &&
         (local_114[1] = 0, *(int *)(iVar11 + 8) != 0)) {
        do {
          if (((local_118 < *(uint *)(iVar14 + 8)) && (local_114[1] < *(uint *)(iVar11 + 8))) &&
             ((puVar13 = (undefined4 *)
                         ((*(int *)(iVar11 + 0xc) + local_114[1]) * 0x94 + *(int *)(iVar14 + 0x1c) +
                         iVar14), puVar13 != (undefined4 *)0x0 &&
              ((iVar5 = FUN_00e77510(*puVar13,puVar13[1],&DAT_01be5540), iVar5 != 0 &&
               ((puVar13[4] & 0x40000000) != 0)))))) {
            *(undefined1 *)(iVar5 + 0x44d) = *(undefined1 *)(puVar13 + 2);
          }
          local_114[1] = local_114[1] + 1;
        } while (local_114[1] < *(uint *)(iVar11 + 8));
      }
      local_118 = local_118 + 1;
      iVar11 = iVar11 + 0x30;
    } while (local_118 <= uVar4);
  }
  *(undefined4 *)(param_1 + 0x1e10) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x1e14) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x1e18) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x1e1c) = *(undefined4 *)(param_1 + 0xbc);
  *(float *)(param_1 + 0x1e10) = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0x1e10);
  *(float *)(param_1 + 0x1e14) = *(float *)(param_1 + 0x1e14) * *(float *)(param_1 + 0xbc);
  *(float *)(param_1 + 0x1e18) = *(float *)(param_1 + 0x1e18) * *(float *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x1e20) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x1e24) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x1e28) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x1e2c) = *(undefined4 *)(param_1 + 0xcc);
  *(float *)(param_1 + 0x1e20) = *(float *)(param_1 + 0x1e20) * *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 0x1e24) = *(float *)(param_1 + 0x1e24) * *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 0x1e28) = *(float *)(param_1 + 0x1e28) * *(float *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x1e30) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x1e34) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x1e38) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1e3c) = *(undefined4 *)(param_1 + 0xdc);
  *(float *)(param_1 + 0x1e30) = *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0x1e30);
  *(float *)(param_1 + 0x1e34) = *(float *)(param_1 + 0x1e34) * *(float *)(param_1 + 0xdc);
  *(float *)(param_1 + 0x1e38) = *(float *)(param_1 + 0x1e38) * *(float *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x1e40) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x1e44) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x1e48) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0x1e4c) = *(undefined4 *)(param_1 + 0xec);
  *(float *)(param_1 + 0x1e40) = *(float *)(param_1 + 0x1e40) * *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x1e44) = *(float *)(param_1 + 0x1e44) * *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x1e48) = *(float *)(param_1 + 0x1e48) * *(float *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0x1e50) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x1e54) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x1e58) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x1e5c) = *(undefined4 *)(param_1 + 0xfc);
  *(float *)(param_1 + 0x1e50) = *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0x1e50);
  *(float *)(param_1 + 0x1e54) = *(float *)(param_1 + 0x1e54) * *(float *)(param_1 + 0xfc);
  *(float *)(param_1 + 0x1e58) = *(float *)(param_1 + 0x1e58) * *(float *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x1e60) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x1e64) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x1e68) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x1e6c) = *(undefined4 *)(param_1 + 0x10c);
  *(float *)(param_1 + 0x1e60) = *(float *)(param_1 + 0x1e60) * *(float *)(param_1 + 0x10c);
  *(float *)(param_1 + 0x1e64) = *(float *)(param_1 + 0x1e64) * *(float *)(param_1 + 0x10c);
  *(float *)(param_1 + 0x1e68) = *(float *)(param_1 + 0x1e68) * *(float *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x1e70) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x1e74) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x1e78) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x1e7c) = *(undefined4 *)(param_1 + 0x11c);
  *(float *)(param_1 + 0x1e70) = *(float *)(param_1 + 0x11c) * *(float *)(param_1 + 0x1e70);
  *(float *)(param_1 + 0x1e74) = *(float *)(param_1 + 0x1e74) * *(float *)(param_1 + 0x11c);
  *(float *)(param_1 + 0x1e78) = *(float *)(param_1 + 0x1e78) * *(float *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x1e80) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x1e84) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x1e88) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x1e8c) = *(undefined4 *)(param_1 + 300);
  *(float *)(param_1 + 0x1e80) = *(float *)(param_1 + 0x1e80) * *(float *)(param_1 + 300);
  *(float *)(param_1 + 0x1e84) = *(float *)(param_1 + 0x1e84) * *(float *)(param_1 + 300);
  *(float *)(param_1 + 0x1e88) = *(float *)(param_1 + 0x1e88) * *(float *)(param_1 + 300);
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    fVar16 = (float10)FUN_00e03a90(0);
    _DAT_01be7518 = (float)(fVar16 * (float10)*(float *)(param_1 + 0x238) + (float10)_DAT_01be7518);
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x80) != 0) {
    fVar16 = (float10)FUN_00e03a90(0);
    _DAT_01be7514 = (float)(fVar16 * (float10)*(float *)(param_1 + 0x23c) + (float10)_DAT_01be7514);
  }
  if (360.0 < _DAT_01be7518) {
    _DAT_01be7518 = 0.0;
  }
  if (360.0 < _DAT_01be7514) {
    _DAT_01be7514 = 0.0;
  }
  iVar14 = 0;
  do {
    fVar16 = (float10)0.017453292;
    fVar17 = (float10)*(float *)(param_1 + 0x238 + iVar14 * 8) * fVar16;
    fVar7 = *(float *)(param_1 + 0x23c + iVar14 * 8);
    if (*(float *)(param_1 + 0x238 + iVar14 * 8) == 0.0) {
      fVar17 = (float10)0.00017453292;
    }
    if (*(float *)(param_1 + 0x238 + iVar14 * 8) == 180.0) {
      fVar17 = (float10)3.1398473;
    }
    if (iVar14 == 0) {
      if ((*(uint *)(param_1 + 0x1c) & 1) != 0) {
        fVar17 = (float10)_DAT_01be7518 * fVar16;
      }
      if ((char)*(uint *)(param_1 + 0x1c) < '\0') {
        fVar7 = _DAT_01be7514;
      }
    }
    fVar18 = (float10)fsin(fVar17);
    pfVar10 = (float *)(param_1 + (iVar14 * 3 + 0x7a4) * 4);
    iVar11 = param_1 + iVar14 * 0xc;
    fVar19 = (float10)fsin(fVar16 * (float10)fVar7);
    *pfVar10 = (float)(fVar19 * fVar18);
    fVar16 = (float10)fcos(fVar16 * (float10)fVar7);
    *(float *)(iVar11 + 0x1e98) = (float)(fVar16 * fVar18);
    fVar16 = (float10)fcos(fVar17);
    *(float *)(iVar11 + 0x1e94) = (float)fVar16;
    iVar11 = FUN_00c12740(0);
    D3DXVec3TransformNormal(param_1 + (iVar14 * 3 + 0x7bc) * 4,pfVar10,iVar11 + 0xb0);
    iVar11 = (iVar14 + 0x28) * 0x10;
    iVar5 = iVar11 + param_1;
    iVar9 = (iVar14 + 0x1f5) * 0x10;
    *(undefined4 *)(iVar9 + param_1) = *(undefined4 *)(iVar11 + param_1);
    pfVar10 = (float *)(iVar9 + param_1);
    pfVar10[1] = *(float *)(iVar5 + 4);
    pfVar10[2] = *(float *)(iVar5 + 8);
    pfVar10[3] = *(float *)(iVar5 + 0xc);
    iVar11 = iVar14 * 0x10 + param_1;
    iVar14 = iVar14 + 1;
    *pfVar10 = *pfVar10 * *(float *)(iVar11 + 0x1f5c);
    *(float *)(iVar11 + 0x1f54) = *(float *)(iVar11 + 0x1f5c) * *(float *)(iVar11 + 0x1f54);
    *(float *)(iVar11 + 0x1f58) = *(float *)(iVar11 + 0x1f5c) * *(float *)(iVar11 + 0x1f58);
  } while (iVar14 < 8);
  *(undefined4 *)(param_1 + 0x2060) = *(undefined4 *)(param_1 + 0xb70);
  *(undefined4 *)(param_1 + 0x2064) = *(undefined4 *)(param_1 + 0xb74);
  *(undefined4 *)(param_1 + 0x2068) = *(undefined4 *)(param_1 + 0xb78);
  *(undefined4 *)(param_1 + 0x206c) = *(undefined4 *)(param_1 + 0xb7c);
  *(float *)(param_1 + 0x2060) = *(float *)(param_1 + 0xb7c) * *(float *)(param_1 + 0x2060);
  *(float *)(param_1 + 0x2064) = *(float *)(param_1 + 0x2064) * *(float *)(param_1 + 0xb7c);
  *(float *)(param_1 + 0x2068) = *(float *)(param_1 + 0x2068) * *(float *)(param_1 + 0xb7c);
  *(undefined4 *)(param_1 + 0x1fe0) = *(undefined4 *)(param_1 + 0xaf0);
  *(undefined4 *)(param_1 + 0x1fe4) = *(undefined4 *)(param_1 + 0xaf4);
  *(undefined4 *)(param_1 + 0x1fe8) = *(undefined4 *)(param_1 + 0xaf8);
  *(undefined4 *)(param_1 + 0x1fec) = *(undefined4 *)(param_1 + 0xafc);
  *(float *)(param_1 + 0x1fe0) = *(float *)(param_1 + 0xafc) * *(float *)(param_1 + 0x1fe0);
  *(float *)(param_1 + 0x1fe4) = *(float *)(param_1 + 0x1fe4) * *(float *)(param_1 + 0xafc);
  *(float *)(param_1 + 0x1fe8) = *(float *)(param_1 + 0x1fe8) * *(float *)(param_1 + 0xafc);
  *(undefined4 *)(param_1 + 0x2070) = *(undefined4 *)(param_1 + 0xb80);
  *(undefined4 *)(param_1 + 0x2074) = *(undefined4 *)(param_1 + 0xb84);
  *(undefined4 *)(param_1 + 0x2078) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0x207c) = *(undefined4 *)(param_1 + 0xb8c);
  *(float *)(param_1 + 0x2070) = *(float *)(param_1 + 0x2070) * *(float *)(param_1 + 0xb8c);
  *(float *)(param_1 + 0x2074) = *(float *)(param_1 + 0x2074) * *(float *)(param_1 + 0xb8c);
  *(float *)(param_1 + 0x2078) = *(float *)(param_1 + 0x2078) * *(float *)(param_1 + 0xb8c);
  *(undefined4 *)(param_1 + 0x1ff0) = *(undefined4 *)(param_1 + 0xb00);
  *(undefined4 *)(param_1 + 0x1ff4) = *(undefined4 *)(param_1 + 0xb04);
  *(undefined4 *)(param_1 + 0x1ff8) = *(undefined4 *)(param_1 + 0xb08);
  *(undefined4 *)(param_1 + 0x1ffc) = *(undefined4 *)(param_1 + 0xb0c);
  *(float *)(param_1 + 0x1ff0) = *(float *)(param_1 + 0xb0c) * *(float *)(param_1 + 0x1ff0);
  *(float *)(param_1 + 0x1ff4) = *(float *)(param_1 + 0x1ff4) * *(float *)(param_1 + 0xb0c);
  *(float *)(param_1 + 0x1ff8) = *(float *)(param_1 + 0x1ff8) * *(float *)(param_1 + 0xb0c);
  *(undefined4 *)(param_1 + 0x2080) = *(undefined4 *)(param_1 + 0xb90);
  *(undefined4 *)(param_1 + 0x2084) = *(undefined4 *)(param_1 + 0xb94);
  *(undefined4 *)(param_1 + 0x2088) = *(undefined4 *)(param_1 + 0xb98);
  *(undefined4 *)(param_1 + 0x208c) = *(undefined4 *)(param_1 + 0xb9c);
  *(float *)(param_1 + 0x2080) = *(float *)(param_1 + 0x2080) * *(float *)(param_1 + 0xb9c);
  *(float *)(param_1 + 0x2084) = *(float *)(param_1 + 0x2084) * *(float *)(param_1 + 0xb9c);
  *(float *)(param_1 + 0x2088) = *(float *)(param_1 + 0x2088) * *(float *)(param_1 + 0xb9c);
  *(undefined4 *)(param_1 + 0x2000) = *(undefined4 *)(param_1 + 0xb10);
  *(undefined4 *)(param_1 + 0x2004) = *(undefined4 *)(param_1 + 0xb14);
  *(undefined4 *)(param_1 + 0x2008) = *(undefined4 *)(param_1 + 0xb18);
  *(undefined4 *)(param_1 + 0x200c) = *(undefined4 *)(param_1 + 0xb1c);
  *(float *)(param_1 + 0x2000) = *(float *)(param_1 + 0xb1c) * *(float *)(param_1 + 0x2000);
  *(float *)(param_1 + 0x2004) = *(float *)(param_1 + 0x2004) * *(float *)(param_1 + 0xb1c);
  *(float *)(param_1 + 0x2008) = *(float *)(param_1 + 0x2008) * *(float *)(param_1 + 0xb1c);
  *(undefined4 *)(param_1 + 0x2090) = *(undefined4 *)(param_1 + 0xba0);
  *(undefined4 *)(param_1 + 0x2094) = *(undefined4 *)(param_1 + 0xba4);
  *(undefined4 *)(param_1 + 0x2098) = *(undefined4 *)(param_1 + 0xba8);
  *(undefined4 *)(param_1 + 0x209c) = *(undefined4 *)(param_1 + 0xbac);
  *(float *)(param_1 + 0x2090) = *(float *)(param_1 + 0x2090) * *(float *)(param_1 + 0xbac);
  *(float *)(param_1 + 0x2094) = *(float *)(param_1 + 0x2094) * *(float *)(param_1 + 0xbac);
  *(float *)(param_1 + 0x2098) = *(float *)(param_1 + 0x2098) * *(float *)(param_1 + 0xbac);
  *(undefined4 *)(param_1 + 0x2010) = *(undefined4 *)(param_1 + 0xb20);
  *(undefined4 *)(param_1 + 0x2014) = *(undefined4 *)(param_1 + 0xb24);
  *(undefined4 *)(param_1 + 0x2018) = *(undefined4 *)(param_1 + 0xb28);
  *(undefined4 *)(param_1 + 0x201c) = *(undefined4 *)(param_1 + 0xb2c);
  *(float *)(param_1 + 0x2010) = *(float *)(param_1 + 0xb2c) * *(float *)(param_1 + 0x2010);
  *(float *)(param_1 + 0x2014) = *(float *)(param_1 + 0x2014) * *(float *)(param_1 + 0xb2c);
  *(float *)(param_1 + 0x2018) = *(float *)(param_1 + 0x2018) * *(float *)(param_1 + 0xb2c);
  *(undefined4 *)(param_1 + 0x20a0) = *(undefined4 *)(param_1 + 0xbb0);
  *(undefined4 *)(param_1 + 0x20a4) = *(undefined4 *)(param_1 + 0xbb4);
  *(undefined4 *)(param_1 + 0x20a8) = *(undefined4 *)(param_1 + 3000);
  *(undefined4 *)(param_1 + 0x20ac) = *(undefined4 *)(param_1 + 0xbbc);
  *(float *)(param_1 + 0x20a0) = *(float *)(param_1 + 0x20a0) * *(float *)(param_1 + 0xbbc);
  *(float *)(param_1 + 0x20a4) = *(float *)(param_1 + 0x20a4) * *(float *)(param_1 + 0xbbc);
  *(float *)(param_1 + 0x20a8) = *(float *)(param_1 + 0x20a8) * *(float *)(param_1 + 0xbbc);
  *(undefined4 *)(param_1 + 0x2020) = *(undefined4 *)(param_1 + 0xb30);
  *(undefined4 *)(param_1 + 0x2024) = *(undefined4 *)(param_1 + 0xb34);
  *(undefined4 *)(param_1 + 0x2028) = *(undefined4 *)(param_1 + 0xb38);
  *(undefined4 *)(param_1 + 0x202c) = *(undefined4 *)(param_1 + 0xb3c);
  *(float *)(param_1 + 0x2020) = *(float *)(param_1 + 0xb3c) * *(float *)(param_1 + 0x2020);
  *(float *)(param_1 + 0x2024) = *(float *)(param_1 + 0x2024) * *(float *)(param_1 + 0xb3c);
  *(float *)(param_1 + 0x2028) = *(float *)(param_1 + 0x2028) * *(float *)(param_1 + 0xb3c);
  *(undefined4 *)(param_1 + 0x20b0) = *(undefined4 *)(param_1 + 0xbc0);
  *(undefined4 *)(param_1 + 0x20b4) = *(undefined4 *)(param_1 + 0xbc4);
  *(undefined4 *)(param_1 + 0x20b8) = *(undefined4 *)(param_1 + 0xbc8);
  *(undefined4 *)(param_1 + 0x20bc) = *(undefined4 *)(param_1 + 0xbcc);
  *(float *)(param_1 + 0x20b0) = *(float *)(param_1 + 0x20b0) * *(float *)(param_1 + 0xbcc);
  *(float *)(param_1 + 0x20b4) = *(float *)(param_1 + 0x20b4) * *(float *)(param_1 + 0xbcc);
  *(float *)(param_1 + 0x20b8) = *(float *)(param_1 + 0x20b8) * *(float *)(param_1 + 0xbcc);
  *(undefined4 *)(param_1 + 0x2030) = *(undefined4 *)(param_1 + 0xb40);
  *(undefined4 *)(param_1 + 0x2034) = *(undefined4 *)(param_1 + 0xb44);
  *(undefined4 *)(param_1 + 0x2038) = *(undefined4 *)(param_1 + 0xb48);
  *(undefined4 *)(param_1 + 0x203c) = *(undefined4 *)(param_1 + 0xb4c);
  *(float *)(param_1 + 0x2030) = *(float *)(param_1 + 0xb4c) * *(float *)(param_1 + 0x2030);
  *(float *)(param_1 + 0x2034) = *(float *)(param_1 + 0x2034) * *(float *)(param_1 + 0xb4c);
  *(float *)(param_1 + 0x2038) = *(float *)(param_1 + 0x2038) * *(float *)(param_1 + 0xb4c);
  *(undefined4 *)(param_1 + 0x20c0) = *(undefined4 *)(param_1 + 0xbd0);
  *(undefined4 *)(param_1 + 0x20c4) = *(undefined4 *)(param_1 + 0xbd4);
  *(undefined4 *)(param_1 + 0x20c8) = *(undefined4 *)(param_1 + 0xbd8);
  *(undefined4 *)(param_1 + 0x20cc) = *(undefined4 *)(param_1 + 0xbdc);
  *(float *)(param_1 + 0x20c0) = *(float *)(param_1 + 0x20c0) * *(float *)(param_1 + 0xbdc);
  *(float *)(param_1 + 0x20c4) = *(float *)(param_1 + 0x20c4) * *(float *)(param_1 + 0xbdc);
  *(float *)(param_1 + 0x20c8) = *(float *)(param_1 + 0x20c8) * *(float *)(param_1 + 0xbdc);
  *(undefined4 *)(param_1 + 0x2040) = *(undefined4 *)(param_1 + 0xb50);
  *(undefined4 *)(param_1 + 0x2044) = *(undefined4 *)(param_1 + 0xb54);
  *(undefined4 *)(param_1 + 0x2048) = *(undefined4 *)(param_1 + 0xb58);
  *(undefined4 *)(param_1 + 0x204c) = *(undefined4 *)(param_1 + 0xb5c);
  *(float *)(param_1 + 0x2040) = *(float *)(param_1 + 0xb5c) * *(float *)(param_1 + 0x2040);
  *(float *)(param_1 + 0x2044) = *(float *)(param_1 + 0x2044) * *(float *)(param_1 + 0xb5c);
  *(float *)(param_1 + 0x2048) = *(float *)(param_1 + 0x2048) * *(float *)(param_1 + 0xb5c);
  *(undefined4 *)(param_1 + 0x20d0) = *(undefined4 *)(param_1 + 0xbe0);
  *(undefined4 *)(param_1 + 0x20d4) = *(undefined4 *)(param_1 + 0xbe4);
  *(undefined4 *)(param_1 + 0x20d8) = *(undefined4 *)(param_1 + 0xbe8);
  *(undefined4 *)(param_1 + 0x20dc) = *(undefined4 *)(param_1 + 0xbec);
  *(float *)(param_1 + 0x20d0) = *(float *)(param_1 + 0x20d0) * *(float *)(param_1 + 0xbec);
  *(float *)(param_1 + 0x20d4) = *(float *)(param_1 + 0x20d4) * *(float *)(param_1 + 0xbec);
  *(float *)(param_1 + 0x20d8) = *(float *)(param_1 + 0x20d8) * *(float *)(param_1 + 0xbec);
  *(undefined4 *)(param_1 + 0x2050) = *(undefined4 *)(param_1 + 0xb60);
  *(undefined4 *)(param_1 + 0x2054) = *(undefined4 *)(param_1 + 0xb64);
  *(undefined4 *)(param_1 + 0x2058) = *(undefined4 *)(param_1 + 0xb68);
  *(undefined4 *)(param_1 + 0x205c) = *(undefined4 *)(param_1 + 0xb6c);
  *(float *)(param_1 + 0x2050) = *(float *)(param_1 + 0xb6c) * *(float *)(param_1 + 0x2050);
  *(float *)(param_1 + 0x2054) = *(float *)(param_1 + 0x2054) * *(float *)(param_1 + 0xb6c);
  *(float *)(param_1 + 0x2058) = *(float *)(param_1 + 0x2058) * *(float *)(param_1 + 0xb6c);
  afStack_10c[0] = 10000.0;
  afStack_10c[1] = 10000.0;
  afStack_10c[2] = 10000.0;
  if (DAT_01be5550 == 0) {
    DAT_01be1f33 = '\0';
    DAT_01be1f37 = '\0';
  }
  *(undefined1 *)(param_1 + 0x5a190) = 0;
  iVar14 = FUN_00c12740(0);
  afStack_10c[3] = *(float *)(iVar14 + 0x1b0);
  local_118 = 0;
  afStack_10c[4] = *(float *)(iVar14 + 0x1b4);
  pfVar10 = (float *)(param_1 + 0x20e8);
  afStack_10c[5] = *(float *)(iVar14 + 0x1b8);
  do {
    if ((((uint)pfVar10[0x1c] & 1) != 0) && (((uint)pfVar10[0x1c] & 0x20) == 0)) {
      fVar7 = SQRT((pfVar10[-2] - afStack_10c[3]) * (pfVar10[-2] - afStack_10c[3]) +
                   (pfVar10[-1] - afStack_10c[4]) * (pfVar10[-1] - afStack_10c[4]) +
                   (*pfVar10 - afStack_10c[5]) * (*pfVar10 - afStack_10c[5]));
      if ((pfVar10[0x19] < 1.0) || (fVar7 <= pfVar10[0x19])) {
        FUN_00a2d9a0(pfVar10 + -2);
        iVar14 = FUN_00fb2080();
        iVar11 = (uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + param_1;
        pfVar6 = (float *)(iVar11 + 0x2e0f0);
        D3DXVec3TransformNormal(pfVar6,iVar11 + 0x2e0e0,iVar14);
        *pfVar6 = *pfVar6 + *(float *)(iVar14 + 0x30);
        *(float *)(iVar11 + 0x2e0f4) = *(float *)(iVar14 + 0x34) + *(float *)(iVar11 + 0x2e0f4);
        *(float *)(iVar11 + 0x2e0f8) = *(float *)(iVar14 + 0x38) + *(float *)(iVar11 + 0x2e0f8);
        *(byte *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e144 + param_1) =
             *(byte *)(param_1 + 0x5a190);
        iVar14 = 0;
        if (0 < DAT_01be1f33) {
          do {
            if (local_118 == (byte)(&DAT_01be1f30)[iVar14]) {
              (&DAT_01be1f34)[iVar14] = *(undefined1 *)(param_1 + 0x5a190);
              break;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < DAT_01be1f33);
        }
        if ((pfVar10[0x25] != 0.0) && (pfVar10[0x26] != 0.0)) {
          if (pfVar10[0x28] <= 0.0) {
            fVar1 = pfVar10[0x27];
            fVar16 = (float10)FUN_00e03a90(0);
            pfVar10[0x27] = (float)((float10)fVar1 - fVar16);
            if ((float10)fVar1 - fVar16 <= -(float10)pfVar10[0x25]) {
              pfVar10[0x27] = (float)-(float10)pfVar10[0x25];
              pfVar10[0x28] = 1.0;
            }
          }
          else {
            fVar16 = (float10)FUN_00e03a90(0);
            fVar1 = pfVar10[0x27];
            pfVar10[0x27] = (float)(fVar16 + (float10)fVar1);
            if ((float10)pfVar10[0x25] <= fVar16 + (float10)fVar1) {
              pfVar10[0x27] = pfVar10[0x25];
              pfVar10[0x28] = -1.0;
            }
          }
        }
        if ((0.0 < pfVar10[0x25]) && (0.0 < pfVar10[0x27])) {
          pfVar6 = (float *)((*(byte *)(param_1 + 0x5a190) + 0x430) * 0xb0 + param_1);
          fVar1 = ((pfVar10[0x26] * pfVar10[9]) / pfVar10[0x25]) * pfVar10[0x27];
          *pfVar6 = *pfVar6 + *pfVar6 * fVar1;
          pfVar6[1] = pfVar6[1] * fVar1 + pfVar6[1];
          pfVar6[2] = pfVar6[2] * fVar1 + pfVar6[2];
          pfVar6[3] = pfVar6[3] * fVar1 + pfVar6[3];
        }
        if (*(char *)((int)pfVar10 + 0x5f) == '\x01') {
          if (DAT_01be5550 == 0) {
            DAT_01be1f33 = '\x01';
            iVar14 = 0;
LAB_00a41d64:
            if (*(float *)((int)afStack_10c + iVar14 * 4) < fVar7) break;
            iVar11 = 2;
            if (iVar14 < 2) {
              if (3 < 2 - iVar14) {
                puVar13 = afStack_10c;
                do {
                  uVar3 = (&DAT_01be1f33)[iVar11];
                  uVar2 = puVar13[1];
                  (&DAT_01be1f34)[iVar11] = uVar3;
                  puVar13[2] = uVar2;
                  uVar2 = *puVar13;
                  (&DAT_01be1f30)[iVar11] = uVar3;
                  uVar3 = (&DAT_01be1f32)[iVar11];
                  puVar13[1] = uVar2;
                  uVar2 = puVar13[-1];
                  (&DAT_01be1f33)[iVar11] = uVar3;
                  (&DAT_01be1f2f)[iVar11] = uVar3;
                  *puVar13 = uVar2;
                  uVar3 = (&DAT_01be1f31)[iVar11];
                  uVar2 = puVar13[-2];
                  (&DAT_01be1f32)[iVar11] = uVar3;
                  puVar13[-1] = uVar2;
                  (&DAT_01be1f2e)[iVar11] = uVar3;
                  (&DAT_01be1f31)[iVar11] = (&DAT_01be1f30)[iVar11];
                  (&DAT_01be1f2d)[iVar11] = (&DAT_01be1f30)[iVar11];
                  iVar11 = iVar11 + -4;
                  puVar13 = puVar13 + -4;
                } while (iVar14 + 3 < iVar11);
              }
              for (; iVar14 < iVar11; iVar11 = iVar11 + -1) {
                uVar3 = (&DAT_01be1f33)[iVar11];
                uVar2 = *(undefined4 *)((int)afStack_10c + (iVar11 + -1) * 4);
                (&DAT_01be1f34)[iVar11] = uVar3;
                *(undefined4 *)((int)afStack_10c + iVar11 * 4) = uVar2;
                (&DAT_01be1f30)[iVar11] = uVar3;
              }
            }
            *(float *)((int)afStack_10c + iVar14 * 4) = fVar7;
            (&DAT_01be1f34)[iVar14] = (undefined1)local_118;
            (&DAT_01be1f30)[iVar14] = (undefined1)local_118;
            DAT_01be1f37 = DAT_01be1f37 + '\x01';
          }
LAB_00a41e8f:
          fVar16 = (float10)0;
          fVar17 = (float10)0.017453292;
          fVar18 = (float10)pfVar10[0xe] * fVar17;
          if (((uint)pfVar10[0x1c] & 4) == 0) {
            fVar1 = pfVar10[0xf];
            fVar16 = (float10)fsin(fVar18);
            fVar19 = (float10)fsin((float10)fVar1 * fVar17);
            *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e120 + param_1) =
                 (float)(fVar19 * fVar16);
            fVar17 = (float10)fcos((float10)fVar1 * fVar17);
            *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e128 + param_1) =
                 (float)(fVar17 * fVar16);
            fVar16 = (float10)fcos(fVar18);
            *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e124 + param_1) =
                 (float)fVar16;
          }
          else {
            fStack_a8 = (float)fVar18;
            fVar18 = (float10)pfVar10[0xf] * fVar17;
            fStack_a4 = (float)fVar18;
            afStack_58[0] = (float)fVar16;
            fStack_5c = (float)fVar16;
            fStack_60 = (float)fVar16;
            fStack_64 = (float)fVar16;
            fStack_6c = (float)fVar16;
            fStack_70 = (float)fVar16;
            fStack_74 = (float)fVar16;
            fStack_78 = (float)fVar16;
            fStack_80 = (float)fVar16;
            fStack_84 = (float)fVar16;
            fStack_88 = (float)fVar16;
            fStack_8c = (float)fVar16;
            afStack_58[1] = 1.0;
            uStack_68 = 0x3f800000;
            uStack_7c = 0x3f800000;
            uStack_90 = 0x3f800000;
            fStack_b8 = (float)fVar16;
            fStack_bc = (float)fVar16;
            fStack_c0 = (float)fVar16;
            fStack_c4 = (float)fVar16;
            fStack_cc = (float)fVar16;
            fStack_d0 = (float)fVar16;
            fStack_d4 = (float)fVar16;
            fStack_d8 = (float)fVar16;
            fStack_e0 = (float)fVar16;
            fStack_e4 = (float)fVar16;
            fStack_e8 = (float)fVar16;
            fStack_ec = (float)fVar16;
            uStack_b4 = 0x3f800000;
            uStack_c8 = 0x3f800000;
            uStack_dc = 0x3f800000;
            uStack_f0 = 0x3f800000;
            if (fVar16 != (float10)pfVar10[0x10] * fVar17) {
              D3DXMatrixRotationZ(auStack_50,(float)((float10)pfVar10[0x10] * fVar17));
              D3DXMatrixMultiply(afStack_10c + 5,afStack_58,afStack_10c + 5);
              fVar18 = (float10)fStack_a4;
            }
            if ((float10)0 != fVar18) {
              D3DXMatrixRotationY(auStack_50,(float)fVar18);
              D3DXMatrixMultiply(afStack_10c + 5,afStack_58,afStack_10c + 5);
            }
            if (fStack_a8 != 0.0) {
              D3DXMatrixRotationX(auStack_50,fStack_a8);
              D3DXMatrixMultiply(afStack_10c + 5,afStack_58,afStack_10c + 5);
            }
            D3DXMatrixMultiply(&uStack_90,&uStack_f0,&uStack_90);
            fStack_a8 = 0.0;
            fStack_a4 = 1.0;
            uStack_a0 = 0;
            D3DXVec3TransformNormal
                      ((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e120 + param_1,&fStack_a8,
                       auStack_9c);
          }
          *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e12c + param_1) = pfVar10[10];
          *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e130 + param_1) = pfVar10[0xb];
          iVar14 = (uint)*(byte *)(param_1 + 0x5a190) * 0xb0;
          *(float *)(iVar14 + 0x2e134 + param_1) = pfVar10[0xe];
          *(float *)(iVar14 + 0x2e138 + param_1) = pfVar10[0xf];
          *(float *)(iVar14 + 0x2e13c + param_1) = pfVar10[0x10];
          fVar16 = (float10)fcos((float10)pfVar10[10] * (float10)90.0 * (float10)0.5 *
                                 (float10)0.017453292);
          *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e110 + param_1) = (float)fVar16;
          fVar16 = (float10)fcos((float10)90.0 * (float10)pfVar10[0xb] * (float10)0.017453292);
          *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e114 + param_1) = (float)fVar16;
          fVar1 = pfVar10[10];
          if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
            *(undefined4 *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e110 + param_1) = 0;
          }
          if (1.0 < pfVar10[0xb] != (pfVar10[0xb] == 1.0)) {
            *(undefined4 *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e114 + param_1) = 0;
          }
          *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e118 + param_1) = pfVar10[0xc];
          *(float *)((uint)*(byte *)(param_1 + 0x5a190) * 0xb0 + 0x2e11c + param_1) = pfVar10[0xd];
        }
        fVar1 = 1.0;
        if (1.0 < pfVar10[0x19] != (pfVar10[0x19] == 1.0)) {
          if (0.8 < fVar7 / pfVar10[0x19]) {
            fVar1 = (1.0 - fVar7 / pfVar10[0x19]) * 5.0;
          }
          iVar14 = (*(byte *)(param_1 + 0x5a190) + 0x430) * 0xb0;
          *(float *)(iVar14 + param_1) = fVar1 * *(float *)(iVar14 + param_1);
          iVar11 = iVar14 + param_1;
          *(float *)(iVar11 + 4) = *(float *)(iVar14 + 4 + param_1) * fVar1;
          *(float *)(iVar11 + 8) = *(float *)(iVar11 + 8) * fVar1;
          *(float *)(iVar11 + 0xc) = fVar1 * *(float *)(iVar11 + 0xc);
        }
        *(char *)(param_1 + 0x5a190) = *(char *)(param_1 + 0x5a190) + '\x01';
      }
      if ((0 < (int)pfVar10[0x16]) &&
         (fVar7 = (float)((int)pfVar10[0x16] + -1), pfVar10[0x16] = fVar7, fVar7 == 0.0)) {
        pfVar10[0x1c] = (float)((uint)pfVar10[0x1c] & 0xfffffffe);
      }
    }
    local_118 = local_118 + 1;
    pfVar10 = pfVar10 + 0x2c;
    if (0x3ff < local_118) {
      uVar4 = (uint)*(byte *)(param_1 + 0x5a190);
      if (uVar4 < 0x400) {
        puVar8 = (uint *)(uVar4 * 0xb0 + 0x2e158 + param_1);
        iVar14 = 0x400 - uVar4;
        do {
          *puVar8 = *puVar8 & 0xfffffffe;
          puVar8 = puVar8 + 0x2c;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(param_1 + 0x5bfc8) = 100;
      iVar14 = FUN_00e6b900();
      if (iVar14 != 3) {
        iVar14 = 0;
        do {
          iVar11 = (iVar14 + 0x5c02) * 0x10;
          iVar5 = iVar11 + param_1;
          iVar9 = (-iVar14 + 0x1e8) * 0x10;
          *(undefined4 *)(iVar9 + param_1) = *(undefined4 *)(iVar11 + param_1);
          iVar9 = iVar9 + param_1;
          *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 8);
          *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
          iVar5 = iVar14 * 3 + 0x17010;
          iVar11 = param_1 + iVar5 * 4;
          puVar13 = (undefined4 *)(param_1 + (iVar14 * -3 + 0x7b9) * 4);
          *puVar13 = *(undefined4 *)(param_1 + iVar5 * 4);
          puVar13[1] = *(undefined4 *)(iVar11 + 4);
          puVar13[2] = *(undefined4 *)(iVar11 + 8);
          if (iVar14 == 0) {
            iVar5 = FUN_00c12740(2);
            puVar13 = (undefined4 *)(param_1 + 0x1ee4);
            iVar11 = param_1 + 0x1f44;
          }
          else {
            iVar5 = FUN_00c12740(3);
            iVar11 = param_1 + (iVar14 * -3 + 0x7d1) * 4;
          }
          D3DXVec3TransformNormal(iVar11,puVar13,iVar5 + 0xb0);
          iVar11 = (iVar14 + 0x5c06) * 0x10;
          iVar5 = iVar11 + param_1;
          iVar9 = (-iVar14 + 0x1fc) * 0x10;
          *(undefined4 *)(iVar9 + param_1) = *(undefined4 *)(iVar11 + param_1);
          iVar9 = iVar9 + param_1;
          iVar11 = iVar14 + 1;
          *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 8);
          *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined4 *)(param_1 + 0x464 + iVar14 * -4) =
               *(undefined4 *)(param_1 + 0x5c07c + iVar11 * 4);
          *(undefined4 *)(param_1 + 0x484 + iVar14 * -4) =
               *(undefined4 *)(param_1 + 0x5c084 + iVar11 * 4);
          iVar14 = iVar11;
        } while (iVar11 < 2);
        puVar13 = (undefined4 *)(param_1 + 0x5c0b8);
        puVar15 = (undefined4 *)(param_1 + 0x5c098);
        pfVar10 = (float *)&DAT_01f6bc58;
        puVar12 = (undefined4 *)(param_1 + 0x59fa8);
        do {
          puVar12[-10] = puVar15[-2];
          puVar12[-9] = puVar15[-1];
          puVar12[-8] = *puVar15;
          puVar12[-7] = puVar15[1];
          puVar12[2] = puVar13[-2];
          puVar12[3] = *puVar13;
          puVar12[-2] = puVar15[10];
          puVar12[-1] = puVar15[0xb];
          *puVar12 = puVar15[0xc];
          puVar12[1] = puVar15[0xd];
          D3DXVec3TransformNormal(puVar12 + -6,puVar12 + -10,pfVar10 + -0xe);
          puVar13 = puVar13 + 1;
          pfVar6 = pfVar10 + 0x10;
          puVar15 = puVar15 + 4;
          puVar12[-6] = pfVar10[-2] + (float)puVar12[-6];
          puVar12[-5] = pfVar10[-1] + (float)puVar12[-5];
          puVar12[-4] = (float)puVar12[-4] + *pfVar10;
          pfVar10 = pfVar6;
          puVar12 = puVar12 + 0x2c;
        } while ((int)pfVar6 < 0x1f6bcd8);
      }
      return;
    }
  } while( true );
  iVar14 = iVar14 + 1;
  if (2 < iVar14) goto LAB_00a41e8f;
  goto LAB_00a41d64;
}

// 00A424B0  FUN_00a424b0  size=532  [run]
void __thiscall FUN_00a424b0(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  fVar2 = 0.0;
  *(undefined4 *)(param_1 + 0x5bfa4) = 0;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x5a19c), iVar1 != param_2)) {
    if ((iVar1 != 0) && (fVar2 = param_3, param_4 != 0)) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x228) = *(undefined4 *)(iVar1 + 0x228);
      *(undefined4 *)(param_2 + 0x22c) = *(undefined4 *)(iVar1 + 0x22c);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x230) = *(undefined4 *)(iVar1 + 0x230);
      *(undefined4 *)(param_2 + 0x234) = *(undefined4 *)(iVar1 + 0x234);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x238) = *(undefined4 *)(iVar1 + 0x238);
      *(undefined4 *)(param_2 + 0x23c) = *(undefined4 *)(iVar1 + 0x23c);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x240) = *(undefined4 *)(iVar1 + 0x240);
      *(undefined4 *)(param_2 + 0x244) = *(undefined4 *)(iVar1 + 0x244);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x248) = *(undefined4 *)(iVar1 + 0x248);
      *(undefined4 *)(param_2 + 0x24c) = *(undefined4 *)(iVar1 + 0x24c);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(iVar1 + 0x250);
      *(undefined4 *)(param_2 + 0x254) = *(undefined4 *)(iVar1 + 0x254);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 600) = *(undefined4 *)(iVar1 + 600);
      *(undefined4 *)(param_2 + 0x25c) = *(undefined4 *)(iVar1 + 0x25c);
      iVar1 = *(int *)(param_1 + 0x5a19c);
      *(undefined4 *)(param_2 + 0x260) = *(undefined4 *)(iVar1 + 0x260);
      *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(iVar1 + 0x264);
    }
    if ((*(int *)(param_1 + 0x5a198) == 0) || (fVar2 == 0.0)) {
      *(undefined4 *)(param_1 + 0x5bfa0) = 0x3f800000;
      FUN_00a36590(param_2);
      *(int *)(param_1 + 0x5a198) = param_2;
      *(int *)(param_1 + 0x5a19c) = param_2;
    }
    else {
      fVar3 = fVar2 - *(float *)(param_1 + 0x5bfa0);
      *(float *)(param_1 + 0x5bfa0) = fVar3;
      if (fVar3 < 0.0) {
        *(float *)(param_1 + 0x5bfa0) = fVar2;
      }
      *(undefined4 *)(param_1 + 0x5a198) = *(undefined4 *)(param_1 + 0x5a19c);
      *(int *)(param_1 + 0x5a19c) = param_2;
      cLightApplyScale::cLightApplyScale_2();
      if ((*(byte *)(param_1 + 0xbf0) != *(byte *)(param_2 + 0xbe0)) &&
         ((uVar4 = (uint)*(byte *)(param_1 + 0xbf0),
          *(float *)(param_2 + 0x228 + uVar4 * 8) != *(float *)(param_1 + 0x238 + uVar4 * 8) ||
          (*(float *)(param_2 + 0x22c + uVar4 * 8) != *(float *)(param_1 + 0x23c + uVar4 * 8))))) {
        *(byte *)(param_1 + 0xbf0) = *(byte *)(param_2 + 0xbe0);
      }
    }
    if (param_4 == 0) {
      FUN_00a1fcc0();
      return;
    }
  }
  return;
}

// 00A42730  FUN_00a42730  size=345  [run]
void FUN_00a42730(void)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int local_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  piVar5 = &DAT_01b8497c;
  local_28 = 0x20;
  do {
    fVar1 = DAT_01b83d38;
    fVar3 = DAT_01b83d34;
    if (((piVar5[-0x12] & 1U) != 0) && ((piVar5[-0x12] & 2U) == 0)) {
      pfVar2 = (float *)FUN_00a36510();
      if (pfVar2 != (float *)0x0) {
        FUN_00a380b0(piVar5 + -0x13);
        pfVar2[0x1c] = fVar3;
        if (fVar3 == -NAN) {
          fVar3 = (float)FUN_00a497e0(DAT_01be8e40);
          pfVar2[0x1c] = fVar3;
          pfVar2[0x1c] = DAT_01be8e40;
        }
        pfVar2[0x1d] = fVar1;
        if ((fVar1 == DAT_01b83d38) || (fVar1 == 0.0)) {
          pfVar2[0x1e] = (float)((uint)pfVar2[0x1e] & 0xffffffdf);
        }
        else {
          pfVar2[0x1e] = (float)((uint)pfVar2[0x1e] | 0x20);
        }
        iVar4 = *piVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          iVar4 = FUN_00e77510(iVar4,piVar5[1],&DAT_01be5540);
          if (iVar4 == 0) {
            FUN_00dd5650(&DAT_01661794);
          }
          else {
            iVar4 = FUN_00a12210(piVar5[2]);
            if (iVar4 == 0) {
              FUN_00dd5650(&DAT_01661764,piVar5[2]);
            }
            else {
              D3DXVec3TransformNormal(&local_20,piVar5 + -0xf,iVar4 + 0x10);
              local_20 = *(float *)(iVar4 + 0x40) + local_20;
              fStack_1c = *(float *)(iVar4 + 0x44) + fStack_1c;
              fStack_18 = *(float *)(iVar4 + 0x48) + fStack_18;
              pfVar2[2] = fStack_18;
              *pfVar2 = local_20;
              pfVar2[1] = fStack_1c;
              pfVar2[3] = fStack_14;
            }
          }
        }
      }
    }
    piVar5 = piVar5 + 0x24;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  return;
}

// 00A42890  FUN_00a42890  size=337  [run]
void __thiscall FUN_00a42890(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int local_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  piVar5 = (int *)(param_2 + 0xc4c);
  local_28 = 0x20;
  do {
    if ((*(byte *)(piVar5 + -0x12) & 1) != 0) {
      fVar1 = *(float *)(param_2 + 8);
      fVar3 = *(float *)(param_2 + 4);
      pfVar2 = (float *)FUN_00a36510();
      if (pfVar2 != (float *)0x0) {
        FUN_00a380b0(piVar5 + -0x13);
        pfVar2[0x1c] = fVar3;
        if (fVar3 == -NAN) {
          fVar3 = (float)FUN_00a497e0(DAT_01be8e40);
          pfVar2[0x1c] = fVar3;
          pfVar2[0x1c] = DAT_01be8e40;
        }
        pfVar2[0x1d] = fVar1;
        if ((fVar1 == *(float *)(param_1 + 0x18)) || (fVar1 == 0.0)) {
          pfVar2[0x1e] = (float)((uint)pfVar2[0x1e] & 0xffffffdf);
        }
        else {
          pfVar2[0x1e] = (float)((uint)pfVar2[0x1e] | 0x20);
        }
        iVar4 = *piVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          iVar4 = FUN_00e77510(iVar4,piVar5[1],&DAT_01be5540);
          if (iVar4 == 0) {
            FUN_00dd5650(&DAT_01661794);
          }
          else {
            iVar4 = FUN_00a12210(piVar5[2]);
            if (iVar4 == 0) {
              FUN_00dd5650(&DAT_01661764,piVar5[2]);
            }
            else {
              D3DXVec3TransformNormal(&local_20,piVar5 + -0xf,iVar4 + 0x10);
              local_20 = *(float *)(iVar4 + 0x40) + local_20;
              fStack_1c = *(float *)(iVar4 + 0x44) + fStack_1c;
              fStack_18 = *(float *)(iVar4 + 0x48) + fStack_18;
              pfVar2[2] = fStack_18;
              *pfVar2 = local_20;
              pfVar2[1] = fStack_1c;
              pfVar2[3] = fStack_14;
            }
          }
        }
      }
    }
    piVar5 = piVar5 + 0x24;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  return;
}

// 00A42A80  FUN_00a42a80  size=279  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a42a80(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00f9d720(0);
  local_24 = 0x1333101;
  uVar1 = FUN_00fa0740(0);
  FUN_00fa01f0(0xb,&local_24,uVar1);
  local_18 = 0;
  local_14 = 0;
  local_20 = _DAT_0189f714;
  if (DAT_0189f78c != 0) {
    local_20 = _DAT_0189f714 + 0.000390625;
  }
  local_20 = local_20 * 0.1;
  local_1c = 1.0 / _DAT_0189f77c;
  iVar2 = FUN_00f99540(0xb6,&local_20,4);
  if (iVar2 == 0) {
    _DAT_01f13230 = local_20;
    _DAT_01f13234 = local_1c;
    _DAT_01f13238 = local_18;
    _DAT_01f1323c = local_14;
    FUN_00f99620(0xb6,&DAT_01f13230,4);
  }
  if ((DAT_018a0570 == 0) && (DAT_0189f6fc == 0)) {
    local_24 = 0x1333101;
    uVar1 = FUN_00fa0740(1);
    FUN_00fa01f0(10,&local_24,uVar1);
    FUN_00fbaee0(DAT_01b83c18,0,0,0);
  }
  FUN_009cf080();
  return;
}

// 00A42BA0  FUN_00a42ba0  size=224  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a42ba0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 local_30 [48];
  
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  if (DAT_018a0570 == 0) {
    FUN_00f97580(0,DAT_01b83c1c,1);
    if (((byte)DAT_01bea084 & 0x40) == 0) {
      puVar4 = &DAT_01be0530;
    }
    else {
      puVar4 = &DAT_01be0548;
    }
    FUN_00f975c0(puVar4);
    FUN_00fbaee0(DAT_01b83c18,0,0,0);
  }
  FUN_00fa5730(local_30,1);
  FUN_00f98b60(0xff000000,0x3f800000,0,3);
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  puVar2 = param_2;
  uVar1 = *param_2;
  iVar3 = FUN_00e6b900();
  DAT_018a0570 = (uint)(iVar3 == 3);
  _DAT_0189f780 = uVar1;
  FUN_00a3c4f0(*puVar2);
  iVar3 = 0;
  do {
    param_2 = (undefined4 *)0x1111101;
    FUN_00fa01f0(iVar3,&param_2,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}

// 00A42C80  FUN_00a42c80  size=565  [run]
void FUN_00a42c80(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0x3f800000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar1 = FUN_00f99540(0xb8,&local_30,4);
  if (iVar1 == 0) {
    DAT_01f13250 = local_30;
    DAT_01f13254 = local_2c;
    DAT_01f13258 = local_28;
    DAT_01f1325c = local_24;
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  iVar1 = DAT_01b83c1c + 0xa0;
  if ((DAT_01bea084 & 0x100) == 0) {
LAB_00a42d26:
    Hw::cRenderTargetInfo::cRenderTargetInfo_4(iVar1,0,0,1);
  }
  else {
    iVar2 = FUN_00f99190();
    if ((iVar2 != 0) || (iVar1 != 0)) goto LAB_00a42d26;
    FUN_00a28210(&DAT_01be1e70,0,0,1);
  }
  FUN_00f9d760(0);
  FUN_00f9d7a0(0);
  FUN_00f990e0(&DAT_01f68104);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00fb1010(DAT_01b83c1c);
  FUN_00f9dfb0(5);
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_00f99540(0xb8,&local_20,4);
  if (iVar1 == 0) {
    DAT_01f13250 = local_20;
    DAT_01f13254 = local_1c;
    DAT_01f13258 = local_18;
    DAT_01f1325c = local_14;
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  iVar1 = DAT_01b83c1c + 0xf0;
  if ((DAT_01bea084 & 0x100) != 0) {
    iVar2 = FUN_00f99190();
    if ((iVar2 == 0) && (iVar1 == 0)) {
      FUN_00a28210(&DAT_01be1e70,0,0,1);
      goto LAB_00a42e32;
    }
  }
  Hw::cRenderTargetInfo::cRenderTargetInfo_4(iVar1,0,0,1);
LAB_00a42e32:
  FUN_00f990e0(&DAT_01f68104);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00fb1010(DAT_01b83c1c + 0xa0);
  FUN_00f9dfb0(5);
  local_34 = 0x1333101;
  uVar3 = FUN_00fa0740(0);
  FUN_00fa01f0(3,&local_34,uVar3);
  return;
}

// 00A42ED0  FUN_00a42ed0  size=1387  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a42ed0(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100 [21];
  int local_ac;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  puVar8 = &DAT_01f20668;
  puVar9 = local_100;
  for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00fba300();
  FUN_00f9d6e0(3);
  if (DAT_018a0570 == 0) {
    uVar3 = FUN_00932720();
    if (((((uVar3 & 0xf00) == 0xe00) || (uVar3 = FUN_00932720(), (uVar3 & 0xff0) == 0xc70)) ||
        (uVar3 = FUN_00932720(), (uVar3 & 0xff0) == 0xd70)) ||
       (uVar3 = FUN_00932720(), (uVar3 & 0xff0) == 0xd20)) {
      if ((_DAT_01be7540 & 1) == 0) {
        _DAT_01be7540 = _DAT_01be7540 | 1;
        _DAT_01be7530 = 0.15;
        _DAT_01be7534 = 0.45;
        _DAT_01be7538 = 0x40a00000;
        _DAT_01be753c = 0x40a00000;
      }
      iVar7 = FUN_00eaf7d0();
      if (iVar7 != 0) {
        local_114 = 0x1111222;
        if (*(uint *)(iVar7 + 0xc) < 0xc) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 8) + 0x210;
        }
        FUN_00fa01f0(0,&local_114,iVar7);
      }
      if ((_DAT_01be7540 & 2) == 0) {
        _DAT_01be7540 = _DAT_01be7540 | 2;
        DAT_01be7528 = 0.0;
        DAT_01be752c = 0.0;
      }
      DAT_01be7520 = _DAT_01be7538;
      DAT_01be7524 = _DAT_01be753c;
      if ((_DAT_01bea080 & 0x100000) == 0) {
        DAT_01be752c = DAT_01be752c + _DAT_01be7534;
        for (DAT_01be7528 = DAT_01be7528 + _DAT_01be7530; 1.0 < DAT_01be7528;
            DAT_01be7528 = DAT_01be7528 - 1.0) {
        }
        for (; DAT_01be7528 < -1.0; DAT_01be7528 = DAT_01be7528 + 1.0) {
        }
        for (; 1.0 < DAT_01be752c; DAT_01be752c = DAT_01be752c - 1.0) {
        }
        for (; DAT_01be752c < -1.0; DAT_01be752c = DAT_01be752c + 1.0) {
        }
      }
      iVar7 = FUN_00f99540(0xbb,&DAT_01be7520,4);
      if (iVar7 == 0) {
        _DAT_01f13280 = DAT_01be7520;
        _DAT_01f13284 = DAT_01be7524;
        _DAT_01f13288 = DAT_01be7528;
        _DAT_01f1328c = DAT_01be752c;
        FUN_00f99620(0xbb,&DAT_01f13280,4);
      }
      puVar10 = &DAT_01f72438;
    }
    else {
      iVar7 = FUN_009cd310(0x39);
      if ((iVar7 == 0) || (local_ac == 0)) {
        puVar10 = &DAT_01f723b8;
      }
      else {
        puVar10 = &DAT_01f723f8;
      }
    }
    FUN_00f990e0(puVar10);
    if (local_ac == 0) {
      FUN_00fbaee0(DAT_01b83c1c,0,0,0);
    }
    else {
      FUN_00fbaee0(DAT_01b83c1c,1,0,0);
      if (((byte)DAT_01bea084 & 0x40) == 0) {
        FUN_00f9c6f0(0xb,&DAT_01be0530);
      }
      else {
        FUN_00f9c6f0(0xb,&DAT_01be0548);
      }
    }
  }
  else {
    FUN_00f990e0(&DAT_01f72478);
  }
  iVar7 = DAT_0189f580;
  iVar4 = DAT_0189f580;
  if (DAT_01b83c30 != 0) {
    iVar7 = FUN_00fa0740(0);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 8);
    }
    iVar4 = DAT_0189f580;
    if (DAT_01b83c30 != 0) {
      iVar4 = FUN_00fa0740(0);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
  }
  iVar5 = FUN_00fa0740(0);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 8);
  }
  iVar6 = DAT_0189f580;
  if (DAT_01b83c30 != 0) {
    iVar6 = FUN_00fa0740(0);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 8);
    }
  }
  local_110 = (float)iVar6;
  if (iVar6 < 0) {
    local_110 = local_110 + 4.2949673e+09;
  }
  local_110 = 0.5 / local_110;
  local_10c = (float)iVar5;
  if (iVar5 < 0) {
    local_10c = local_10c + 4.2949673e+09;
  }
  local_10c = local_10c * 0.0006510417;
  local_108 = (float)iVar4;
  if (iVar4 < 0) {
    local_108 = local_108 + 4.2949673e+09;
  }
  local_104 = (float)iVar7;
  if (iVar7 < 0) {
    local_104 = local_104 + 4.2949673e+09;
  }
  local_114 = iVar7;
  iVar7 = FUN_00f99540(0xbd,&local_110,4);
  if (iVar7 == 0) {
    _DAT_01f132a0 = local_110;
    _DAT_01f132a4 = local_10c;
    _DAT_01f132a8 = local_108;
    _DAT_01f132ac = local_104;
    FUN_00f99620(0xbd,&DAT_01f132a0,4);
  }
  FUN_00f9d760(0);
  FUN_00f9d7a0(0);
  FUN_00f9dcf0(1);
  FUN_00f9df20(0xff);
  FUN_00f9de50(6,1,0xff);
  FUN_00f9dd70(1,1,7);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00fb0f70(DAT_01b83c2c,0);
  iVar4 = DAT_0189f580;
  iVar7 = DAT_0189f584;
  if (DAT_01b83c30 != 0) {
    iVar7 = FUN_00fa0740(0);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 0xc);
    }
    iVar4 = DAT_0189f580;
    if (DAT_01b83c30 != 0) {
      iVar4 = FUN_00fa0740(0);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
  }
  fVar1 = (float)iVar7;
  if (iVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_114 = iVar4;
  FUN_00eadf00(local_90,local_50,0,0,fVar2,fVar1,1);
  D3DXMatrixMultiply(local_100,local_50,local_90);
  FUN_00ead8e0(&local_10c);
  FUN_00f9dfb0(5);
  return;
}

// 00A43440  FUN_00a43440  size=337  [run]
void FUN_00a43440(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < DAT_01b83ce4) {
    puVar4 = &DAT_01b83cc4;
    do {
      cVar1 = (char)iVar3 * '\x06';
      cVar2 = ((char)iVar3 + '\x06') * '\x06';
      FUN_00f9aea0(1,cVar1 + '\x1f',0,0,FUN_00a42ba0,puVar4);
      if (DAT_0189f774 != 0) {
        FUN_00f9aea0(1,cVar1 + ' ',0,0,FUN_00a20920,puVar4);
        FUN_00f9aea0(1,cVar1 + ' ',2,0,&LAB_00a20a40,puVar4);
      }
      FUN_00f9aea0(1,cVar1 + '!',0,0,&LAB_00a20a70,puVar4);
      FUN_00f9aea0(1,cVar1 + '#',2,0,&LAB_00a20aa0,puVar4);
      FUN_00f9aea0(1,cVar2,0,0,FUN_00a2fd70,puVar4);
      FUN_00f9aea0(1,cVar2,0,0,FUN_00a3a4c0,puVar4);
      FUN_00f9aea0(1,cVar2,0,0,FUN_00a42ed0,puVar4);
      FUN_00f9aea0(1,cVar2,2,0,&LAB_00a20ab0,puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar3 < DAT_01b83ce4);
  }
  return;
}

// 00A436C0  FUN_00a436c0  size=413  [run]
void __fastcall FUN_00a436c0(int param_1)

{
  if (*(int *)(param_1 + 0x118) != 0) {
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x118),0);
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x114);
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xfc),0);
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xf8);
  }
  FUN_00a3dfe0();
  FUN_00a3def0();
  FUN_00a3e2f0();
  FUN_00a3e430();
  FUN_00a3e430();
  FUN_00a3e2f0();
  if (*(int *)(param_1 + 0x1a4) != 0) {
    if (*(int *)(param_1 + 0x1a4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1a4),0);
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x188),0);
      *(undefined4 *)(param_1 + 0x188) = 0;
    }
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x184);
  }
  FUN_00a3dfe0();
  return;
}

// 00A43860  FUN_00a43860  size=368  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a43860(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x360c) = 0;
  if (*(int *)(param_1 + 0x1c0) != 0) {
    piVar1 = *(int **)(param_1 + 0x1d4);
    for (piVar2 = *(int **)(param_1 + 0x1d0); piVar2 != piVar1; piVar2 = (int *)piVar2[0x13]) {
      (**(code **)(*piVar2 + 4))(0);
    }
    FUN_00a345f0();
  }
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_00a34500();
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    FUN_00a34410();
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    piVar1 = *(int **)(param_1 + 0x180);
    for (piVar2 = *(int **)(param_1 + 0x17c); piVar2 != piVar1; piVar2 = (int *)piVar2[0x781]) {
      (**(code **)(*piVar2 + 4))(0);
    }
    FUN_00a34310();
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1f0);
    for (piVar2 = *(int **)(param_1 + 0x1ec); piVar2 != piVar1; piVar2 = (int *)piVar2[0x35]) {
      (**(code **)(*piVar2 + 4))(0);
    }
    FUN_00a346d0();
  }
  _DAT_01edc694 = 0xbf800000;
  _DAT_018d5440 = 0;
  _DAT_01bddebc = 0;
  _DAT_01bddeb8 = 0;
  _DAT_01edc564 = 0;
  FUN_00a2d740(8);
  iVar3 = *(int *)(param_1 + 0xf0);
  if (iVar3 != *(int *)(param_1 + 0xf4)) {
    do {
      FUN_00a42890(iVar3);
      iVar3 = *(int *)(iVar3 + 0x1e04);
    } while (iVar3 != *(int *)(param_1 + 0xf4));
  }
  iVar3 = FUN_00e6b900();
  if (iVar3 == 3) {
    _DAT_01bea268 = 0x3dcccccd;
    _DAT_01bea26c = 0x461c4000;
  }
  return;
}

// 00A43E40  FUN_00a43e40  size=44  [run]
void __fastcall FUN_00a43e40(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x1c0) != 0) {
      cDrawStencilWork::cDrawStencilWork();
    }
    param_1 = param_1 + 0x1d0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

