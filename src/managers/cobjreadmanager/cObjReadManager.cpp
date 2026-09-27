// src/managers/cobjreadmanager/cObjReadManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A01170..00A06EC0, 50 functions

#include "types.h"

// 00A01170  cObjReadManager::getDataAtSet  size=267  [class]
undefined4 __thiscall
cObjReadManager::getDataAtSet(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_10 [16];
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar3 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_3) goto LAB_00a011ad;
      uVar1 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_3 & 0xffff0000) != 0x90000) {
    iVar2 = FUN_009fe6b0(param_2,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00a00a60(param_3,param_4);
    if (iVar2 != 0) {
      *param_1 = param_3;
      param_1[1] = param_4;
      param_1[2] = 0;
      FUN_00e9c100(1);
      FUN_00a4a6b0();
      iVar2 = FUN_009fe6b0(param_2,param_3);
      if (iVar2 != 0) {
        FUN_00a00bd0(param_3,param_4);
        return 1;
      }
      FUN_009f8ea0(local_10,0x10,param_3,0);
      FUN_00dd5650(&DAT_0165c3bc,local_10);
      FUN_00a00bd0(param_3,param_4);
    }
    FUN_00de3540(0,0);
    return 0;
  }
LAB_00a011ad:
  FUN_00de3540(0,0);
  return 1;
}

// 00A01300  FUN_00a01300  size=65  [between]
void __fastcall FUN_00a01300(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}

// 00A01350  FUN_00a01350  size=9853  [between]
/* WARNING: Removing unreachable block (ram,0x00a020bb) */
/* WARNING: Removing unreachable block (ram,0x00a020bd) */
/* WARNING: Removing unreachable block (ram,0x00a020bf) */
/* WARNING: Removing unreachable block (ram,0x00a01fe6) */
/* WARNING: Removing unreachable block (ram,0x00a01fe8) */
/* WARNING: Removing unreachable block (ram,0x00a01fea) */
/* WARNING: Removing unreachable block (ram,0x00a0354b) */
/* WARNING: Removing unreachable block (ram,0x00a0354d) */
/* WARNING: Removing unreachable block (ram,0x00a0354f) */
/* WARNING: Removing unreachable block (ram,0x00a0360a) */
/* WARNING: Removing unreachable block (ram,0x00a0360c) */
/* WARNING: Removing unreachable block (ram,0x00a0360e) */

void __thiscall FUN_00a01350(int *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  float fVar8;
  int iVar9;
  ushort *puVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float unaff_EBX;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  float unaff_EDI;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fStack_42c;
  float *pfStack_428;
  float fStack_424;
  float fVar25;
  float fStack_414;
  float fStack_410;
  uint uStack_40c;
  undefined4 uStack_408;
  float local_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float *pfStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 auStack_368 [8];
  int iStack_360;
  uint local_344;
  uint uStack_33c;
  float fStack_338;
  float local_330;
  float local_32c;
  float local_328;
  float fStack_324;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  undefined4 uStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  undefined4 uStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined4 uStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined4 uStack_230;
  float fStack_22c;
  float *pfStack_228;
  float fStack_224;
  float afStack_220 [9];
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [12];
  undefined1 auStack_16c [24];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_138 [12];
  undefined1 auStack_12c [40];
  undefined1 auStack_104 [12];
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [56];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [104];
  
  if ((((*param_1 != 0) && (param_1[6] != 0)) && (param_1[700] != 0)) && (param_1[7] != 0)) {
    if ((*(byte *)(param_1[700] + 0x4c8) & 3) != 0) {
      param_1[700] = 0;
      return;
    }
    local_344 = 0;
    iVar9 = param_1[0x2f5];
    if (iVar9 != 0) {
      fStack_424 = 1.4700752e-38;
      FUN_009fb990();
    }
    local_344 = (uint)(iVar9 != 0);
    if ((param_1[0x2f6] & 0x80000000U) == 0) {
      if (param_1[0x2f2] == 0) {
        local_330 = 1.0;
        local_328 = 0.0;
        local_32c = 0.0;
      }
      else {
        local_328 = 0.0;
        local_330 = 0.0;
        if (param_1[0x2f2] == 2) {
          local_32c = 0.0;
          local_328 = 1.0;
        }
        else {
          local_32c = 1.0;
        }
      }
      fStack_424 = (float)param_1[0x2e6];
      param_1[0x2c5] = *(int *)(param_1[700] + 0x74);
      pfStack_428 = (float *)0xa01434;
      iVar9 = FUN_00a12210();
      if (iVar9 != 0) {
        fStack_424 = (float)(iVar9 + 0x10);
        pfStack_428 = &local_330;
        D3DXVec3TransformNormal();
        param_1[0x2c5] =
             (int)SQRT(fStack_1b8 * fStack_1b8 + local_1c0 * local_1c0 + fStack_1bc * fStack_1bc);
      }
      local_404 = (float)param_1[0x2c5];
      if (param_1[0x2bf] != 0) {
        fStack_424 = (float)param_1[0x2e7];
        pfStack_428 = (float *)0xa01498;
        iVar9 = FUN_00a12210();
        if (iVar9 != 0) {
          fStack_424 = (float)(iVar9 + 0x10);
          pfStack_428 = &local_330;
          D3DXVec3TransformNormal();
          if (0.2 < ABS(local_404 -
                        SQRT(fStack_1e8 * fStack_1e8 +
                             fStack_1f0 * fStack_1f0 + fStack_1ec * fStack_1ec))) {
            fStack_424 = 1.470119e-38;
            FUN_009fb990();
            return;
          }
        }
      }
      iVar9 = 0;
      if (param_1[0x2ed] == 0) {
        param_1[4] = 0;
      }
      else {
        fStack_424 = 1.4701227e-38;
        iVar9 = FUN_009ffdf0();
      }
      fStack_424 = 1.4701246e-38;
      FUN_009fbc50();
      fStack_424 = param_2;
      if (iVar9 == 0) {
        pfStack_428 = (float *)0xa01531;
        FUN_009ff5b0();
      }
      else {
        pfStack_428 = (float *)0xa0152a;
        FUN_009ff680();
      }
      fStack_424 = param_2;
      pfStack_428 = (float *)0xa0153f;
      FUN_009ff660();
      fStack_424 = (float)param_1[700];
      pfStack_428 = (float *)0xa0155d;
      FUN_00a07820();
      uStack_40c = 0;
      if (param_1[6] != 0) {
        fStack_410 = 0.0;
        do {
          iVar16 = param_1[7] + (int)fStack_410;
          iVar9 = *(int *)(iVar16 + 0xf0);
          fStack_424 = (float)(iVar9 + 0x10);
          *(undefined4 *)(iVar16 + 0x90) = *(undefined4 *)(iVar9 + 0x40);
          pfStack_428 = (float *)(iVar16 + 0x20);
          *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(iVar9 + 0x44);
          pfStack_3d4 = (float *)(iVar16 + 0x70);
          *(undefined4 *)(iVar16 + 0x98) = *(undefined4 *)(iVar9 + 0x48);
          *(undefined4 *)(iVar16 + 0x9c) = *(undefined4 *)(iVar9 + 0x4c);
          D3DXVec3TransformNormal();
          *pfStack_3d4 = *(float *)(iVar9 + 0x40) + *pfStack_3d4;
          pfStack_3d4[1] = *(float *)(iVar9 + 0x44) + pfStack_3d4[1];
          pfStack_3d4[2] = *(float *)(iVar9 + 0x48) + pfStack_3d4[2];
          if (((param_1[0x2be] != 0) && (*(ushort *)(iVar16 + 10) != 0xfff)) &&
             ((*(ushort *)(iVar16 + 10) & 0x2000) == 0)) {
            iVar9 = *(int *)(iVar16 + 0xf4);
            *(undefined4 *)(iVar16 + 0x80) = *(undefined4 *)(iVar9 + 0x40);
            *(undefined4 *)(iVar16 + 0x84) = *(undefined4 *)(iVar9 + 0x44);
            *(undefined4 *)(iVar16 + 0x88) = *(undefined4 *)(iVar9 + 0x48);
            *(undefined4 *)(iVar16 + 0x8c) = *(undefined4 *)(iVar9 + 0x4c);
          }
          fStack_410 = (float)((int)fStack_410 + 0x100);
          uStack_40c = uStack_40c + 1;
          *(float *)(iVar16 + 0x14) = *(float *)(iVar16 + 0xc) * local_404;
          *(float *)(iVar16 + 0x18) = local_404 * *(float *)(iVar16 + 0x10);
        } while (uStack_40c < (uint)param_1[6]);
      }
      pfStack_428 = (float *)param_1[0x2c5];
      fStack_424 = (float)param_1[0x2c5];
      D3DXMatrixScaling();
      if (-2 < param_1[0x2d0]) {
        FID_conflict__memcpy(auStack_1a0,(void *)(param_1[700] + 0x10),0x40);
        if (param_1[0x2bd] != 0) {
          FID_conflict__memcpy(auStack_1a0,(void *)(param_1[0x2bd] + 0x10),0x40);
        }
        if ((-1 < param_1[0x2d0]) && (iVar9 = FUN_00a12210(), iVar9 != 0)) {
          FID_conflict__memcpy(auStack_1a0,(void *)(iVar9 + 0x10),0x40);
        }
      }
      D3DXVec3TransformNormal(afStack_220,param_1 + 0x2cc);
      if ((0.0 < param_2) && (pfStack_428 = (float *)0x0, param_1[6] != 0)) {
        iVar9 = 0;
        do {
          iVar16 = param_1[7] + iVar9;
          *(undefined4 *)(iVar16 + 0x60) = *(undefined4 *)(param_1[7] + 0x50 + iVar9);
          *(undefined4 *)(iVar16 + 100) = *(undefined4 *)(iVar16 + 0x54);
          *(undefined4 *)(iVar16 + 0x68) = *(undefined4 *)(iVar16 + 0x58);
          *(undefined4 *)(iVar16 + 0x6c) = *(undefined4 *)(iVar16 + 0x5c);
          *(float *)(iVar16 + 0x50) = fStack_22c * param_2 + *(float *)(iVar16 + 0x50);
          *(float *)(iVar16 + 0x54) = *(float *)(iVar16 + 0x54) + (float)pfStack_228 * param_2;
          *(float *)(iVar16 + 0x58) = fStack_224 * param_2 + *(float *)(iVar16 + 0x58);
          *(float *)(iVar16 + 0x5c) = *(float *)(iVar16 + 0x5c) + afStack_220[0] * param_2;
          *(float *)(iVar16 + 0x50) =
               *(float *)(iVar16 + 0x40) * param_2 + *(float *)(iVar16 + 0x50);
          *(float *)(iVar16 + 0x54) =
               *(float *)(iVar16 + 0x54) + *(float *)(iVar16 + 0x44) * param_2;
          *(float *)(iVar16 + 0x58) =
               *(float *)(iVar16 + 0x48) * param_2 + *(float *)(iVar16 + 0x58);
          *(float *)(iVar16 + 0x5c) =
               *(float *)(iVar16 + 0x4c) * param_2 + *(float *)(iVar16 + 0x5c);
          FUN_009ff550(iVar16,param_2);
          FUN_009fb780(iVar16,param_2);
          if ((*(ushort *)(iVar16 + 10) != 0xfff) && ((*(ushort *)(iVar16 + 10) & 0x2000) == 0)) {
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
            *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
            *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
          }
          if (*(int *)(iVar16 + 0xd4) != 0) {
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
            *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
            *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
          }
          pfStack_428 = (float *)((int)pfStack_428 + 1);
          *(undefined4 *)(iVar16 + 0xf8) = 0x3f800000;
          iVar9 = iVar9 + 0x100;
        } while (pfStack_428 < (float *)param_1[6]);
      }
      if ((param_1[0x2f3] - 1U < 3) && (pfStack_428 = (float *)0x0, param_1[6] != 0)) {
        fStack_42c = 0.0;
        do {
          iVar16 = param_1[7] + (int)fStack_42c;
          D3DXMatrixInverse(auStack_16c,0,*(int *)(iVar16 + 0xf0) + 0x10);
          pfVar11 = (float *)(iVar16 + 0x50);
          D3DXVec3TransformNormal(auStack_368,pfVar11,auStack_178);
          fStack_374 = fStack_154 + fStack_374;
          iVar9 = param_1[0x2f3];
          fStack_370 = fStack_150 + fStack_370;
          fStack_36c = fStack_14c + fStack_36c;
          if (iVar9 == 1) {
            fStack_374 = 0.0;
          }
          else if (iVar9 == 2) {
            fStack_370 = 0.0;
          }
          else if (iVar9 == 3) {
            fStack_36c = 0.0;
          }
          iVar9 = *(int *)(iVar16 + 0xf0);
          D3DXVec3TransformNormal(pfVar11,&fStack_374,iVar9 + 0x10);
          fStack_42c = (float)((int)fStack_42c + 0x100);
          pfStack_428 = (float *)((int)pfStack_428 + 1);
          *pfVar11 = *pfVar11 + *(float *)(iVar9 + 0x40);
          *(float *)(iVar16 + 0x54) = *(float *)(iVar9 + 0x44) + *(float *)(iVar16 + 0x54);
          *(float *)(iVar16 + 0x58) = *(float *)(iVar9 + 0x48) + *(float *)(iVar16 + 0x58);
        } while (pfStack_428 < (float *)param_1[6]);
      }
      param_1[0x2f1] = 0;
      if (param_1[0x2eb] != 0) {
        iVar9 = param_1[0x2bf];
        if (iVar9 == 0) {
          iVar9 = param_1[700];
          if (iVar9 != 0) {
            D3DXVec3TransformNormal(&fStack_2fc,iVar9 + 0x50,iVar9 + 0xf0);
            fStack_2fc = fStack_2fc + *(float *)(iVar9 + 0x120);
            fStack_2f8 = *(float *)(iVar9 + 0x124) + fStack_2f8;
            fStack_2f4 = *(float *)(iVar9 + 0x128) + fStack_2f4;
            fStack_42c = (float)param_1[0x2f0] + fStack_2f8;
            uStack_250 = uStack_2f0;
            uStack_2e0 = uStack_2f0;
            fStack_2e8 = fStack_2f8 + 1.0;
            fStack_258 = fStack_2f8 - 5.0;
            fStack_2ec = fStack_2fc;
            fStack_2e4 = fStack_2f4;
            fStack_25c = fStack_2fc;
            fStack_254 = fStack_2f4;
            iVar9 = RayCastSingleHitWork::RayCastSingleHitWork_4
                              (&fStack_2ec,0,0,0,&fStack_2ec,&fStack_25c,0x1e,"et0502_fall");
            if (iVar9 != 0) {
              fStack_42c = fStack_2e8;
            }
            fStack_424 = 0.0;
            if (param_1[6] != 0) {
              pfStack_428 = (float *)0x0;
              do {
                pfVar11 = pfStack_428;
                iVar9 = param_1[7];
                uVar5 = *(ushort *)((int)pfStack_428 + iVar9 + 10);
                if ((uVar5 == 0xfff) || ((uVar5 & 0x2000) != 0)) {
                  iVar16 = param_1[700];
                  pfVar17 = (float *)((int)pfStack_428 + iVar9 + 0x50);
                  D3DXVec3TransformNormal(&fStack_31c,pfVar17,iVar16 + 0xf0);
                  fStack_31c = fStack_31c + *(float *)(iVar16 + 0x120);
                  fStack_318 = *(float *)(iVar16 + 0x124) + fStack_318;
                  fStack_314 = *(float *)(iVar16 + 0x128) + fStack_314;
                  if (fStack_318 < fStack_42c) {
                    iVar16 = param_1[700];
                    fStack_318 = fStack_42c;
                    D3DXVec3TransformNormal(pfVar17,&fStack_31c,iVar16 + 0xb0);
                    *pfVar17 = *(float *)(iVar16 + 0xe0) + *pfVar17;
                    *(float *)((int)pfVar11 + iVar9 + 0x54) =
                         *(float *)(iVar16 + 0xe4) + *(float *)((int)pfVar11 + iVar9 + 0x54);
                    *(float *)((int)pfVar11 + iVar9 + 0x58) =
                         *(float *)(iVar16 + 0xe8) + *(float *)((int)pfVar11 + iVar9 + 0x58);
                    param_1[0x2f1] = 1;
                  }
                }
                pfStack_428 = pfStack_428 + 0x40;
                fStack_424 = (float)((int)fStack_424 + 1);
              } while ((uint)fStack_424 < (uint)param_1[6]);
            }
          }
        }
        else {
          D3DXVec3TransformNormal(&fStack_30c,iVar9 + 0x50,iVar9 + 0xf0);
          fStack_30c = *(float *)(iVar9 + 0x120) + fStack_30c;
          fStack_308 = *(float *)(iVar9 + 0x124) + fStack_308;
          fStack_304 = *(float *)(iVar9 + 0x128) + fStack_304;
          fStack_42c = (float)param_1[0x2f0] + fStack_308;
          uStack_230 = uStack_300;
          uStack_2d0 = uStack_300;
          fStack_2d8 = fStack_308 + 1.0;
          fStack_238 = fStack_308 - 5.0;
          fStack_2dc = fStack_30c;
          fStack_2d4 = fStack_304;
          fStack_23c = fStack_30c;
          fStack_234 = fStack_304;
          iVar9 = RayCastSingleHitWork::RayCastSingleHitWork_4
                            (&fStack_2dc,0,0,0,&fStack_2dc,&fStack_23c,0x1e,"et0502_fall");
          if (iVar9 != 0) {
            fStack_42c = fStack_2d8;
          }
          fStack_424 = 0.0;
          if (param_1[6] != 0) {
            pfStack_428 = (float *)0x0;
            do {
              pfVar11 = pfStack_428;
              iVar9 = param_1[7];
              uVar5 = *(ushort *)((int)pfStack_428 + iVar9 + 10);
              if ((uVar5 == 0xfff) || ((uVar5 & 0x2000) != 0)) {
                iVar16 = param_1[0x2bf];
                pfVar17 = (float *)((int)pfStack_428 + iVar9 + 0x50);
                D3DXVec3TransformNormal(&local_32c,pfVar17,iVar16 + 0xf0);
                local_32c = *(float *)(iVar16 + 0x120) + local_32c;
                local_328 = *(float *)(iVar16 + 0x124) + local_328;
                fStack_324 = *(float *)(iVar16 + 0x128) + fStack_324;
                if (local_328 < fStack_42c) {
                  iVar16 = param_1[0x2bf];
                  local_328 = fStack_42c;
                  D3DXVec3TransformNormal(pfVar17,&local_32c,iVar16 + 0xb0);
                  *pfVar17 = *(float *)(iVar16 + 0xe0) + *pfVar17;
                  *(float *)((int)pfVar11 + iVar9 + 0x54) =
                       *(float *)(iVar16 + 0xe4) + *(float *)((int)pfVar11 + iVar9 + 0x54);
                  *(float *)((int)pfVar11 + iVar9 + 0x58) =
                       *(float *)(iVar16 + 0xe8) + *(float *)((int)pfVar11 + iVar9 + 0x58);
                }
              }
              pfStack_428 = pfStack_428 + 0x40;
              fStack_424 = (float)((int)fStack_424 + 1);
            } while ((uint)fStack_424 < (uint)param_1[6]);
          }
        }
      }
      if (1.0 < (float)param_1[0x2e5]) {
        param_1[0x2e5] = 0x3f800000;
      }
      uVar13 = 0;
      if (param_1[6] != 0) {
        iVar9 = 0;
        do {
          fVar24 = (float)param_1[0x2e5];
          iVar16 = param_1[7] + iVar9;
          if (0.0 < *(float *)(iVar16 + 0xfc)) {
            fVar24 = *(float *)(iVar16 + 0xfc);
          }
          if (0.0 < fVar24) {
            *(float *)(iVar16 + 0x50) =
                 (*(float *)(iVar16 + 0x70) - *(float *)(iVar16 + 0x50)) * fVar24 +
                 *(float *)(iVar16 + 0x50);
            *(float *)(iVar16 + 0x54) =
                 (*(float *)(iVar16 + 0x74) - *(float *)(iVar16 + 0x54)) * fVar24 +
                 *(float *)(iVar16 + 0x54);
            *(float *)(iVar16 + 0x58) =
                 (*(float *)(iVar16 + 0x78) - *(float *)(iVar16 + 0x58)) * fVar24 +
                 *(float *)(iVar16 + 0x58);
            *(float *)(iVar16 + 0x5c) =
                 (*(float *)(iVar16 + 0x7c) - *(float *)(iVar16 + 0x5c)) * fVar24 +
                 *(float *)(iVar16 + 0x5c);
          }
          uVar13 = uVar13 + 1;
          iVar9 = iVar9 + 0x100;
        } while (uVar13 < (uint)param_1[6]);
      }
      if ((0.0 < (float)param_1[0x2d1]) && (uVar13 = 0, param_1[6] != 0)) {
        iVar9 = 0;
        do {
          uVar5 = *(ushort *)(param_1[7] + 10 + iVar9);
          iVar16 = param_1[7] + iVar9;
          if ((uVar5 != 0xfff) && ((uVar5 & 0x2000) == 0)) {
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
            *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
            *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
          }
          if (*(int *)(iVar16 + 0xd4) != 0) {
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
            *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
            *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
          }
          pfVar11 = *(float **)(iVar16 + 0xb0);
          fVar1 = *pfVar11 - *(float *)(iVar16 + 0x50);
          fVar2 = pfVar11[1] - *(float *)(iVar16 + 0x54);
          fVar3 = pfVar11[2] - *(float *)(iVar16 + 0x58);
          fVar24 = pfVar11[3];
          fVar25 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
          if (*(float *)(iVar16 + 0x14) * *(float *)(iVar16 + 0x14) < fVar25) {
            fVar25 = SQRT(fVar25);
            fVar25 = ((fVar25 - *(float *)(iVar16 + 0x14)) * (float)param_1[0x2d1]) / fVar25;
            *(float *)(iVar16 + 0x50) = fVar1 * fVar25 + *(float *)(iVar16 + 0x50);
            *(float *)(iVar16 + 0x54) = *(float *)(iVar16 + 0x54) + fVar2 * fVar25;
            *(float *)(iVar16 + 0x58) = fVar3 * fVar25 + *(float *)(iVar16 + 0x58);
            *(float *)(iVar16 + 0x5c) =
                 fVar25 * (fVar24 - *(float *)(iVar16 + 0x5c)) + *(float *)(iVar16 + 0x5c);
          }
          uVar13 = uVar13 + 1;
          iVar9 = iVar9 + 0x100;
        } while (uVar13 < (uint)param_1[6]);
      }
      pfStack_428 = (float *)0x0;
      if (param_1[6] != 0) {
        fStack_3f0 = 1.0 / unaff_EDI;
        iVar9 = 0;
        do {
          iVar9 = param_1[7] + iVar9;
          iVar16 = *(int *)(iVar9 + 0xf0);
          if ((*(ushort *)(iVar16 + 0xa2) & 0x8004) == 0) {
            FUN_00a15310();
          }
          iVar14 = iVar16 + 0x10;
          D3DXVec3TransformNormal(&uStack_40c,iVar9 + 0x30,iVar14);
          if (fStack_410 * fStack_410 + unaff_EBX * unaff_EBX + fStack_414 * fStack_414 <= 0.0) {
            unaff_EBX = 0.0;
            fStack_414 = 1.0;
            fStack_410 = 0.0;
            uStack_40c = uStack_33c;
          }
          else {
            FUN_00ddf460(&stack0xfffffbe8,&stack0xfffffbe8);
          }
          pfVar11 = *(float **)(iVar9 + 0xb0);
          pfStack_428 = (float *)(*(float *)(iVar9 + 0x50) - *pfVar11);
          fStack_424 = *(float *)(iVar9 + 0x54) - pfVar11[1];
          fVar25 = *(float *)(iVar9 + 0x58) - pfVar11[2];
          fVar1 = fVar25 * fVar25 +
                  (float)pfStack_428 * (float)pfStack_428 + fStack_424 * fStack_424;
          fVar24 = SQRT(fVar1);
          if (fVar1 <= 0.0) {
            pfStack_428 = (float *)0x0;
            fStack_424 = 1.0;
            fVar25 = 0.0;
          }
          else {
            FUN_00ddf460(&pfStack_428,&pfStack_428);
          }
          if (fVar24 < *(float *)(iVar9 + 0x14) * 0.001) {
            if (fVar24 == 0.0) {
              pfVar11 = (float *)(iVar9 + 0x20);
              if (*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                  *pfVar11 * *pfVar11 + *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) <= 0.0)
              {
                pfStack_428 = (float *)0x0;
                fStack_424 = 1.0;
                fVar25 = 0.0;
                fVar24 = *(float *)(iVar9 + 0x14) * 0.1;
              }
              else {
                fVar24 = *(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                         *pfVar11 * *pfVar11 + *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24);
                if (fVar24 < 0.0 == (fVar24 == 0.0)) {
                  FUN_00ddf460(&pfStack_428,pfVar11);
                  fVar24 = *(float *)(iVar9 + 0x14) * 0.1;
                }
                else {
                  FUN_00dd5650(&DAT_0163d0ac);
                  pfStack_428 = (float *)0x0;
                  fStack_424 = 1.0;
                  fVar25 = 0.0;
                  fVar24 = *(float *)(iVar9 + 0x14) * 0.1;
                }
              }
            }
            else {
              fVar24 = *(float *)(iVar9 + 0x14) * 0.1;
            }
          }
          fVar1 = *(float *)(iVar9 + 0x14) * (float)param_1[0x2e8];
          if (fVar1 < fVar24) {
            fVar24 = fVar1;
          }
          fVar18 = (float10)FUN_00ddbb50(fVar25 * fStack_410 +
                                         unaff_EBX * (float)pfStack_428 + fStack_424 * fStack_414);
          if (((float10)0.0001 < fVar18) && (fVar18 < (float10)3.1414928)) {
            pfStack_3d4 = (float *)(fVar25 * fStack_414 - fStack_424 * fStack_410);
            fStack_3d0 = (float)pfStack_428 * fStack_410 - unaff_EBX * fVar25;
            fStack_3cc = unaff_EBX * fStack_424 - (float)pfStack_428 * fStack_414;
            fVar19 = (float10)*(float *)(iVar9 + 0xd0);
            if (fVar19 < (float10)(float)param_1[0x2e3]) {
              fVar19 = (float10)(float)param_1[0x2e4] * (float10)(float)param_1[0x2e3] +
                       ((float10)1 - (float10)(float)param_1[0x2e4]) * fVar19;
            }
            if (fVar19 < fVar18) {
              if ((float10)1.25 * fVar19 < fVar18) {
                *(undefined4 *)(iVar9 + 0xf8) = 0x3e800000;
              }
              fVar18 = fVar18 * (float10)(float)param_1[0x2c1] +
                       ((float10)1 - (float10)(float)param_1[0x2c1]) * fVar19;
            }
            pfStack_228 = pfStack_3d4;
            fStack_224 = fStack_3d0;
            afStack_220[0] = fStack_3cc;
            if ((((float)pfStack_3d4 != 0.0) || (fStack_3d0 != 0.0)) || (fStack_3cc != 0.0)) {
              D3DXMatrixRotationAxis(&fStack_f8,&pfStack_228,(float)fVar18);
              D3DXMatrixMultiply(iVar14,iVar14,auStack_104);
            }
          }
          puVar6 = *(undefined4 **)(iVar9 + 0xb0);
          *(undefined4 *)(iVar16 + 0x40) = *puVar6;
          *(undefined4 *)(iVar16 + 0x44) = puVar6[1];
          *(undefined4 *)(iVar16 + 0x48) = puVar6[2];
          fVar24 = fVar24 * fStack_3fc;
          pfStack_428 = (float *)(fVar24 * *(float *)(iVar9 + 0x30));
          fStack_424 = *(float *)(iVar9 + 0x34) * fVar24;
          fVar1 = *(float *)(iVar9 + 0x38);
          fVar25 = *(float *)(iVar9 + 0x3c);
          D3DXVec3TransformNormal(&stack0xfffffbe8,&pfStack_428,iVar14);
          fStack_424 = fStack_424 + *(float *)(iVar16 + 0x40);
          fVar2 = *(float *)(iVar16 + 0x44);
          fVar3 = *(float *)(iVar16 + 0x48);
          D3DXVec3TransformNormal(&stack0xfffffbcc,&stack0xfffffbcc,iVar14);
          pfVar11 = *(float **)(iVar9 + 0xb0);
          unaff_EBX = pfVar11[1] + unaff_EBX;
          fStack_414 = pfVar11[2] + fStack_414;
          fStack_410 = pfVar11[3] + fStack_410;
          if (DAT_01b7b374 == 0) {
            *(float *)(iVar9 + 0x50) = fVar3 + fVar24 * fVar25 + *pfVar11;
            *(float *)(iVar9 + 0x54) = unaff_EBX;
            *(float *)(iVar9 + 0x58) = fStack_414;
            fVar25 = fStack_410;
          }
          else {
            *(uint *)(iVar9 + 0x50) = uStack_40c;
            *(undefined4 *)(iVar9 + 0x54) = uStack_408;
            *(float *)(iVar9 + 0x58) = local_404;
            fVar25 = fStack_400;
          }
          *(float *)(iVar9 + 0x5c) = fVar25;
          iVar9 = (int)(fVar2 + fVar1 * fVar24) + 0x100;
          pfStack_428 = (float *)((int)pfStack_428 + 1);
        } while (pfStack_428 < (float *)param_1[6]);
      }
      pfStack_428 = (float *)0x0;
      if ((short)param_1[0x2c4] != 0) {
        do {
          uVar13 = 0;
          if (param_1[6] != 0) {
            iVar9 = 0;
            do {
              iVar16 = param_1[7];
              *(undefined4 *)(iVar9 + 0xa0 + iVar16) = 0;
              iVar16 = iVar9 + 0xa0 + iVar16;
              *(undefined4 *)(iVar16 + 4) = 0;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(iVar16 + 8) = 0;
              iVar9 = iVar9 + 0x100;
              *(float *)(iVar16 + 0xc) = local_330;
            } while (uVar13 < (uint)param_1[6]);
          }
          if (param_1[1] != 0) {
            if ((param_1[0x2ee] == 0) && (fStack_424 = 0.0, param_1[6] != 0)) {
              iVar9 = 0;
              do {
                iVar14 = param_1[7] + iVar9;
                iVar16 = *(int *)(iVar14 + 0xc0);
                if ((iVar16 != 0) && (*(int *)(iVar14 + 0xc4) != 0)) {
                  iVar15 = iVar14 + 0x50;
                  if ((*(ushort *)(iVar14 + 8) & 0x4000) == 0) {
                    FUN_009fb210(*(undefined4 *)(iVar14 + 0xb0),iVar15,iVar16,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    fVar24 = (float)param_1[0x2e1];
                    iVar23 = *(int *)(iVar14 + 0xc4);
                    iVar16 = param_1[0x2c6];
                    iVar22 = iVar15;
                  }
                  else {
                    FUN_009fb210(*(undefined4 *)(iVar14 + 0xb0),iVar16,iVar15,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    fVar24 = (float)param_1[0x2e1];
                    iVar16 = param_1[0x2c6];
                    iVar22 = *(int *)(iVar14 + 0xc4);
                    iVar23 = iVar15;
                  }
                  FUN_009fb210(*(undefined4 *)(iVar14 + 0xc0),iVar22,iVar23,iVar16,fVar24 * param_2)
                  ;
                }
                iVar9 = iVar9 + 0x100;
                fStack_424 = (float)((int)fStack_424 + 1);
              } while ((uint)fStack_424 < (uint)param_1[6]);
            }
            fStack_424 = 0.0;
            if (param_1[6] != 0) {
              iVar9 = 0;
              do {
                iVar16 = param_1[7] + iVar9;
                FUN_009fadb0(iVar16,param_1[0x2c6],(float)param_1[0x2e1] * param_2);
                if (param_1[0x2ee] != 0) {
                  pfVar11 = *(float **)(iVar16 + 0xb0);
                  if (pfVar11 != (float *)0x0) {
                    fStack_3ac = (*pfVar11 + *(float *)(iVar16 + 0x50)) * 0.5;
                    fStack_3a8 = (pfVar11[1] + *(float *)(iVar16 + 0x54)) * 0.5;
                    fStack_3a4 = (pfVar11[2] + *(float *)(iVar16 + 0x58)) * 0.5;
                    fStack_3a0 = (pfVar11[3] + *(float *)(iVar16 + 0x5c)) * 0.5;
                    FUN_009fafb0(&fStack_27c,&fStack_3ac,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    *(float *)(iVar16 + 0x50) = fStack_27c + *(float *)(iVar16 + 0x50);
                    *(float *)(iVar16 + 0x54) = fStack_278 + *(float *)(iVar16 + 0x54);
                    *(float *)(iVar16 + 0x58) = fStack_274 + *(float *)(iVar16 + 0x58);
                    *(float *)(iVar16 + 0x5c) = fStack_270 + *(float *)(iVar16 + 0x5c);
                    if (*(float *)(iVar16 + 200) < 1.0) {
                      pfVar11 = *(float **)(iVar16 + 0xb0);
                      *pfVar11 = fStack_27c + *pfVar11;
                      pfVar11[1] = pfVar11[1] + fStack_278;
                      pfVar11[2] = pfVar11[2] + fStack_274;
                      pfVar11[3] = pfVar11[3] + fStack_270;
                    }
                    if (param_3 != 0) {
                      fStack_3ac = fStack_27c + fStack_3ac;
                      fStack_3a8 = fStack_278 + fStack_3a8;
                      fStack_3a4 = fStack_274 + fStack_3a4;
                      fStack_3a0 = fStack_270 + fStack_3a0;
                      FUN_00f96100(&fStack_3ac,0x3c23d70a,0xffff00ff,0,0);
                    }
                  }
                  pfVar11 = *(float **)(iVar16 + 0xb4);
                  if (pfVar11 != (float *)0x0) {
                    fStack_3bc = (*(float *)(iVar16 + 0x50) + *pfVar11) * 0.5;
                    fStack_3b8 = (*(float *)(iVar16 + 0x54) + pfVar11[1]) * 0.5;
                    fStack_3b4 = (*(float *)(iVar16 + 0x58) + pfVar11[2]) * 0.5;
                    fStack_3b0 = (*(float *)(iVar16 + 0x5c) + pfVar11[3]) * 0.5;
                    FUN_009fafb0(&fStack_2ac,&fStack_3bc,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    *(float *)(iVar16 + 0x50) = *(float *)(iVar16 + 0x50) + fStack_2ac;
                    *(float *)(iVar16 + 0x54) = fStack_2a8 + *(float *)(iVar16 + 0x54);
                    *(float *)(iVar16 + 0x58) = fStack_2a4 + *(float *)(iVar16 + 0x58);
                    *(float *)(iVar16 + 0x5c) = fStack_2a0 + *(float *)(iVar16 + 0x5c);
                    pfVar11 = *(float **)(iVar16 + 0xb4);
                    *pfVar11 = *pfVar11 + fStack_2ac;
                    pfVar11[1] = fStack_2a8 + pfVar11[1];
                    pfVar11[2] = fStack_2a4 + pfVar11[2];
                    pfVar11[3] = fStack_2a0 + pfVar11[3];
                    if (param_3 != 0) {
                      fStack_3bc = fStack_2ac + fStack_3bc;
                      fStack_3b8 = fStack_2a8 + fStack_3b8;
                      fStack_3b4 = fStack_2a4 + fStack_3b4;
                      fStack_3b0 = fStack_2a0 + fStack_3b0;
                      FUN_00f96100(&fStack_3bc,0x3c23d70a,0xffff00ff,0,0);
                    }
                  }
                  if (((*(int *)(iVar16 + 0xb0) != 0) &&
                      (pfVar11 = *(float **)(iVar16 + 0xc0), pfVar11 != (float *)0x0)) &&
                     (*(int *)(iVar16 + 0xc4) != 0)) {
                    fStack_39c = (*pfVar11 + *(float *)(iVar16 + 0x50)) * 0.5;
                    fStack_398 = (pfVar11[1] + *(float *)(iVar16 + 0x54)) * 0.5;
                    fStack_394 = (pfVar11[2] + *(float *)(iVar16 + 0x58)) * 0.5;
                    fStack_390 = (pfVar11[3] + *(float *)(iVar16 + 0x5c)) * 0.5;
                    FUN_009fafb0(&fStack_29c,&fStack_39c,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    *(float *)(iVar16 + 0x50) = *(float *)(iVar16 + 0x50) + fStack_29c;
                    *(float *)(iVar16 + 0x54) = fStack_298 + *(float *)(iVar16 + 0x54);
                    *(float *)(iVar16 + 0x58) = fStack_294 + *(float *)(iVar16 + 0x58);
                    *(float *)(iVar16 + 0x5c) = fStack_290 + *(float *)(iVar16 + 0x5c);
                    pfVar11 = *(float **)(iVar16 + 0xc0);
                    *pfVar11 = *pfVar11 + fStack_29c;
                    pfVar11[1] = fStack_298 + pfVar11[1];
                    pfVar11[2] = fStack_294 + pfVar11[2];
                    pfVar11[3] = fStack_290 + pfVar11[3];
                    if (param_3 != 0) {
                      fStack_39c = fStack_29c + fStack_39c;
                      fStack_398 = fStack_298 + fStack_398;
                      fStack_394 = fStack_294 + fStack_394;
                      fStack_390 = fStack_290 + fStack_390;
                      FUN_00f96100(&fStack_39c,0x3c23d70a,0xffff00ff,0,0);
                    }
                  }
                  pfVar11 = *(float **)(iVar16 + 0xb0);
                  if (((pfVar11 != (float *)0x0) &&
                      (pfVar17 = *(float **)(iVar16 + 0xc0), pfVar17 != (float *)0x0)) &&
                     (*(int *)(iVar16 + 0xc4) != 0)) {
                    fStack_38c = (*(float *)(iVar16 + 0x50) + *pfVar17 + *pfVar11) * 0.33333334;
                    fStack_388 = (*(float *)(iVar16 + 0x54) + pfVar11[1] + pfVar17[1]) * 0.33333334;
                    fStack_384 = (*(float *)(iVar16 + 0x58) + pfVar11[2] + pfVar17[2]) * 0.33333334;
                    fStack_380 = (pfVar11[3] + pfVar17[3] + *(float *)(iVar16 + 0x5c)) * 0.33333334;
                    FUN_009fafb0(&fStack_28c,&fStack_38c,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    *(float *)(iVar16 + 0x50) = fStack_28c + *(float *)(iVar16 + 0x50);
                    *(float *)(iVar16 + 0x54) = fStack_288 + *(float *)(iVar16 + 0x54);
                    *(float *)(iVar16 + 0x58) = fStack_284 + *(float *)(iVar16 + 0x58);
                    *(float *)(iVar16 + 0x5c) = fStack_280 + *(float *)(iVar16 + 0x5c);
                    pfVar11 = *(float **)(iVar16 + 0xb0);
                    *pfVar11 = *pfVar11 + fStack_28c;
                    pfVar11[1] = pfVar11[1] + fStack_288;
                    pfVar11[2] = pfVar11[2] + fStack_284;
                    pfVar11[3] = pfVar11[3] + fStack_280;
                    pfVar11 = *(float **)(iVar16 + 0xc0);
                    *pfVar11 = fStack_28c + *pfVar11;
                    pfVar11[1] = fStack_288 + pfVar11[1];
                    pfVar11[2] = fStack_284 + pfVar11[2];
                    pfVar11[3] = fStack_280 + pfVar11[3];
                    if (param_3 != 0) {
                      fStack_38c = fStack_28c + fStack_38c;
                      fStack_388 = fStack_288 + fStack_388;
                      fStack_384 = fStack_284 + fStack_384;
                      fStack_380 = fStack_280 + fStack_380;
                      FUN_00f96100(&fStack_38c,0x3c23d70a,0xffff00ff,0,0);
                    }
                  }
                  if (((*(int *)(iVar16 + 0xb0) != 0) &&
                      (pfVar11 = *(float **)(iVar16 + 0xc0), pfVar11 != (float *)0x0)) &&
                     (pfVar17 = *(float **)(iVar16 + 0xc4), pfVar17 != (float *)0x0)) {
                    fStack_37c = (*pfVar17 + *pfVar11 + *(float *)(iVar16 + 0x50)) * 0.33333334;
                    fStack_378 = (*(float *)(iVar16 + 0x54) + pfVar17[1] + pfVar11[1]) * 0.33333334;
                    fStack_374 = (*(float *)(iVar16 + 0x58) + pfVar17[2] + pfVar11[2]) * 0.33333334;
                    fStack_370 = (*(float *)(iVar16 + 0x5c) + pfVar17[3] + pfVar11[3]) * 0.33333334;
                    FUN_009fafb0(&fStack_26c,&fStack_37c,param_1[0x2c6],
                                 (float)param_1[0x2e1] * param_2);
                    *(float *)(iVar16 + 0x50) = fStack_26c + *(float *)(iVar16 + 0x50);
                    *(float *)(iVar16 + 0x54) = fStack_268 + *(float *)(iVar16 + 0x54);
                    *(float *)(iVar16 + 0x58) = fStack_264 + *(float *)(iVar16 + 0x58);
                    *(float *)(iVar16 + 0x5c) = fStack_260 + *(float *)(iVar16 + 0x5c);
                    pfVar11 = *(float **)(iVar16 + 0xc0);
                    *pfVar11 = fStack_26c + *pfVar11;
                    pfVar11[1] = fStack_268 + pfVar11[1];
                    pfVar11[2] = fStack_264 + pfVar11[2];
                    pfVar11[3] = fStack_260 + pfVar11[3];
                    pfVar11 = *(float **)(iVar16 + 0xc4);
                    *pfVar11 = fStack_26c + *pfVar11;
                    pfVar11[1] = fStack_268 + pfVar11[1];
                    pfVar11[2] = fStack_264 + pfVar11[2];
                    pfVar11[3] = fStack_260 + pfVar11[3];
                    if (param_3 != 0) {
                      fStack_37c = fStack_26c + fStack_37c;
                      fStack_378 = fStack_268 + fStack_378;
                      fStack_374 = fStack_264 + fStack_374;
                      fStack_370 = fStack_260 + fStack_370;
                      FUN_00f96100(&fStack_37c,0x3c23d70a,0xffff00ff,0,0);
                    }
                  }
                }
                iVar9 = iVar9 + 0x100;
                fStack_424 = (float)((int)fStack_424 + 1);
              } while ((uint)fStack_424 < (uint)param_1[6]);
            }
          }
          fStack_424 = 0.0;
          if (*(short *)((int)param_1 + 0xb12) != 0) {
            do {
              uVar13 = 0;
              if (param_1[6] != 0) {
                iVar9 = 0;
                do {
                  pfVar11 = *(float **)(param_1[7] + 0xb4 + iVar9);
                  iVar16 = param_1[7] + iVar9;
                  if (pfVar11 != (float *)0x0) {
                    fVar25 = *pfVar11 - *(float *)(iVar16 + 0x50);
                    fVar1 = pfVar11[1] - *(float *)(iVar16 + 0x54);
                    fVar2 = pfVar11[2] - *(float *)(iVar16 + 0x58);
                    fVar24 = pfVar11[3] - *(float *)(iVar16 + 0x5c);
                    fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar25 * fVar25;
                    if ((0.0 < fVar3) &&
                       ((*(float *)(iVar16 + 0x18) * *(float *)(iVar16 + 0x18) < fVar3 ||
                        (param_1[0x2ec] != 0)))) {
                      fVar3 = ((SQRT(fVar3) - *(float *)(iVar16 + 0x18)) * (float)param_1[0x2c3]) /
                              SQRT(fVar3);
                      fVar4 = fVar3 * *(float *)(iVar16 + 200);
                      fVar8 = fVar4 * fVar1;
                      if (param_1[0x2ef] == 0) {
                        *(float *)(iVar16 + 0x50) = fVar4 * fVar25 + *(float *)(iVar16 + 0x50);
                        *(float *)(iVar16 + 0x54) = *(float *)(iVar16 + 0x54) + fVar8;
                        *(float *)(iVar16 + 0x58) = *(float *)(iVar16 + 0x58) + fVar4 * fVar2;
                        *(float *)(iVar16 + 0x5c) = fVar4 * fVar24 + *(float *)(iVar16 + 0x5c);
                        pfVar11 = *(float **)(iVar16 + 0xb4);
                        fVar3 = -((1.0 - *(float *)(iVar16 + 200)) * fVar3);
                        *pfVar11 = fVar3 * fVar25 + *pfVar11;
                        pfVar11[1] = fVar3 * fVar1 + pfVar11[1];
                        pfVar11[2] = fVar3 * fVar2 + pfVar11[2];
                        pfVar11[3] = fVar3 * fVar24 + pfVar11[3];
                        fStack_338 = fVar8;
                      }
                      else {
                        *(float *)(iVar16 + 0xa0) = fVar4 * fVar25 + *(float *)(iVar16 + 0xa0);
                        *(float *)(iVar16 + 0xa4) = *(float *)(iVar16 + 0xa4) + fVar8;
                        *(float *)(iVar16 + 0xa8) = *(float *)(iVar16 + 0xa8) + fVar4 * fVar2;
                        *(float *)(iVar16 + 0xac) = fVar4 * fVar24 + *(float *)(iVar16 + 0xac);
                        fStack_1b8 = fVar8;
                        if (*(int *)(iVar16 + 0xbc) != 0) {
                          pfVar11 = *(float **)(iVar16 + 0xbc);
                          fVar3 = -((1.0 - *(float *)(iVar16 + 200)) * fVar3);
                          *pfVar11 = fVar3 * fVar25 + *pfVar11;
                          pfVar11[1] = fVar3 * fVar1 + pfVar11[1];
                          pfVar11[2] = fVar3 * fVar2 + pfVar11[2];
                          pfVar11[3] = fVar3 * fVar24 + pfVar11[3];
                        }
                      }
                    }
                  }
                  pfVar11 = *(float **)(iVar16 + 0xb0);
                  if (pfVar11 != (float *)0x0) {
                    fVar24 = *pfVar11 - *(float *)(iVar16 + 0x50);
                    fVar3 = pfVar11[1] - *(float *)(iVar16 + 0x54);
                    fVar2 = pfVar11[2] - *(float *)(iVar16 + 0x58);
                    fVar1 = pfVar11[3] - *(float *)(iVar16 + 0x5c);
                    fVar25 = fVar2 * fVar2 + fVar24 * fVar24 + fVar3 * fVar3;
                    if ((0.0 < fVar25) &&
                       ((*(float *)(iVar16 + 0x14) * *(float *)(iVar16 + 0x14) < fVar25 ||
                        (param_1[0x2ec] != 0)))) {
                      fVar8 = (SQRT(fVar25) - *(float *)(iVar16 + 0x14)) / SQRT(fVar25);
                      fVar4 = fVar8 * *(float *)(iVar16 + 200);
                      fVar25 = fVar3 * fVar4;
                      if (param_1[0x2ef] == 0) {
                        fStack_1c4 = fVar2 * fVar4;
                        *(float *)(iVar16 + 0x50) = fVar4 * fVar24 + *(float *)(iVar16 + 0x50);
                        *(float *)(iVar16 + 0x54) = *(float *)(iVar16 + 0x54) + fVar25;
                        *(float *)(iVar16 + 0x58) = *(float *)(iVar16 + 0x58) + fStack_1c4;
                        *(float *)(iVar16 + 0x5c) = fVar1 * fVar4 + *(float *)(iVar16 + 0x5c);
                        fVar4 = *(float *)(iVar16 + 200);
                        pfVar11 = *(float **)(iVar16 + 0xb0);
                        fStack_1c8 = fVar25;
                      }
                      else {
                        fStack_1e4 = fVar2 * fVar4;
                        *(float *)(iVar16 + 0xa0) = fVar4 * fVar24 + *(float *)(iVar16 + 0xa0);
                        *(float *)(iVar16 + 0xa4) = *(float *)(iVar16 + 0xa4) + fVar25;
                        *(float *)(iVar16 + 0xa8) = *(float *)(iVar16 + 0xa8) + fStack_1e4;
                        *(float *)(iVar16 + 0xac) = fVar1 * fVar4 + *(float *)(iVar16 + 0xac);
                        fStack_1e8 = fVar25;
                        if (*(int *)(iVar16 + 0xb8) == 0) goto LAB_00a031a7;
                        fVar4 = *(float *)(iVar16 + 200);
                        pfVar11 = *(float **)(iVar16 + 0xb8);
                      }
                      fVar25 = -((1.0 - fVar4) * fVar8);
                      *pfVar11 = fVar25 * fVar24 + *pfVar11;
                      pfVar11[1] = pfVar11[1] + fVar3 * fVar25;
                      pfVar11[2] = fVar2 * fVar25 + pfVar11[2];
                      pfVar11[3] = fVar25 * fVar1 + pfVar11[3];
                    }
                  }
LAB_00a031a7:
                  uVar13 = uVar13 + 1;
                  iVar9 = iVar9 + 0x100;
                } while (uVar13 < (uint)param_1[6]);
              }
              uVar13 = 0;
              if (param_1[6] != 0) {
                iVar9 = 0;
                do {
                  iVar16 = param_1[7] + iVar9;
                  if (param_1[0x2ef] != 0) {
                    *(float *)(iVar16 + 0x50) =
                         *(float *)(iVar16 + 0xa0) + *(float *)(iVar16 + 0x50);
                    *(float *)(iVar16 + 0x54) =
                         *(float *)(iVar16 + 0xa4) + *(float *)(iVar16 + 0x54);
                    *(float *)(iVar16 + 0x58) =
                         *(float *)(iVar16 + 0xa8) + *(float *)(iVar16 + 0x58);
                    *(float *)(iVar16 + 0x5c) =
                         *(float *)(iVar16 + 0xac) + *(float *)(iVar16 + 0x5c);
                  }
                  *(undefined4 *)(iVar16 + 0xa0) = 0;
                  *(undefined4 *)(iVar16 + 0xa4) = 0;
                  *(undefined4 *)(iVar16 + 0xa8) = 0;
                  *(float *)(iVar16 + 0xac) = local_330;
                  if ((*(ushort *)(iVar16 + 10) != 0xfff) &&
                     ((*(ushort *)(iVar16 + 10) & 0x2000) == 0)) {
                    *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
                    *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
                    *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
                    *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
                  }
                  if (*(int *)(iVar16 + 0xd4) != 0) {
                    *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
                    *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
                    *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
                    *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
                  }
                  uVar13 = uVar13 + 1;
                  iVar9 = iVar9 + 0x100;
                } while (uVar13 < (uint)param_1[6]);
              }
              fStack_424 = (float)((int)fStack_424 + 1);
            } while ((uint)fStack_424 < (uint)*(ushort *)((int)param_1 + 0xb12));
          }
          pfStack_428 = (float *)((int)pfStack_428 + 1);
        } while (pfStack_428 < (float *)(uint)*(ushort *)(param_1 + 0x2c4));
      }
      fStack_424 = 1.0 / param_2;
      fStack_3f0 = 0.0;
      if (param_1[6] != 0) {
        iVar9 = 0;
        do {
          iVar16 = param_1[7] + iVar9;
          if (10.0 < fStack_424) {
            fStack_424 = 10.0;
          }
          if (0.0 < param_2) {
            fVar24 = (float)param_1[0x2c2];
            fVar1 = *(float *)(iVar16 + 0xf8);
            *(float *)(iVar16 + 0x40) =
                 (*(float *)(iVar16 + 0x50) - *(float *)(iVar16 + 0x60)) * fVar24 * fStack_424 *
                 fVar1;
            *(float *)(iVar16 + 0x44) =
                 fVar1 * fVar24 * (*(float *)(iVar16 + 0x54) - *(float *)(iVar16 + 100)) *
                         fStack_424;
            *(float *)(iVar16 + 0x48) =
                 fVar1 * fVar24 * (*(float *)(iVar16 + 0x58) - *(float *)(iVar16 + 0x68)) *
                         fStack_424;
            *(float *)(iVar16 + 0x4c) =
                 fVar1 * fVar24 * (*(float *)(iVar16 + 0x5c) - *(float *)(iVar16 + 0x6c)) *
                         fStack_424;
            if (iStack_360 != 0) {
              *(undefined4 *)(iVar16 + 0x40) = 0;
              *(undefined4 *)(iVar16 + 0x44) = 0;
              *(undefined4 *)(iVar16 + 0x48) = 0;
              *(float *)(iVar16 + 0x4c) = local_330;
            }
          }
          iVar14 = *(int *)(iVar16 + 0xf0);
          if (*(short *)(iVar16 + 2) == 0xfff) {
            puVar6 = *(undefined4 **)(iVar16 + 0xb0);
            *puVar6 = *(undefined4 *)(iVar14 + 0x40);
            puVar6[1] = *(undefined4 *)(iVar14 + 0x44);
            puVar6[2] = *(undefined4 *)(iVar14 + 0x48);
            puVar6[3] = *(undefined4 *)(iVar14 + 0x4c);
          }
          if ((*(ushort *)(iVar14 + 0xa2) & 0x8004) == 0) {
            FUN_00a15310();
          }
          if ((*(ushort *)(iVar16 + 10) != 0xfff) && ((*(ushort *)(iVar16 + 10) & 0x2000) == 0)) {
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
            *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
            *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
          }
          if (*(int *)(iVar16 + 0xd4) != 0) {
            *(undefined4 *)(iVar16 + 0x50) = *(undefined4 *)(iVar16 + 0x80);
            *(undefined4 *)(iVar16 + 0x54) = *(undefined4 *)(iVar16 + 0x84);
            *(undefined4 *)(iVar16 + 0x58) = *(undefined4 *)(iVar16 + 0x88);
            *(undefined4 *)(iVar16 + 0x5c) = *(undefined4 *)(iVar16 + 0x8c);
          }
          if ((((*(ushort *)(iVar16 + 10) == 0xfff) || ((*(ushort *)(iVar16 + 10) & 0x2000) == 0))
              || (param_1[0x2be] == 0)) || (*(int *)(iVar16 + 0xf4) == 0)) {
            iVar15 = iVar14 + 0x10;
            D3DXVec3TransformNormal(&fStack_3dc,iVar16 + 0x30,iVar15);
            if ((float)pfStack_3d4 * (float)pfStack_3d4 +
                fStack_3dc * fStack_3dc + fStack_3d8 * fStack_3d8 <= 0.0) {
              fStack_3dc = 0.0;
              fStack_3d8 = 1.0;
              pfStack_3d4 = (float *)0x0;
              fStack_3d0 = local_330;
            }
            else {
              FUN_00ddf460(&fStack_3dc,&fStack_3dc);
            }
            pfVar11 = *(float **)(iVar16 + 0xb0);
            fStack_3ec = *(float *)(iVar16 + 0x50) - *pfVar11;
            fStack_3e8 = *(float *)(iVar16 + 0x54) - pfVar11[1];
            fStack_3e4 = *(float *)(iVar16 + 0x58) - pfVar11[2];
            fStack_3e0 = *(float *)(iVar16 + 0x5c) - pfVar11[3];
            if (fStack_3e4 * fStack_3e4 + fStack_3ec * fStack_3ec + fStack_3e8 * fStack_3e8 <= 0.0)
            {
              fStack_3ec = 0.0;
              fStack_3e8 = 1.0;
              fStack_3e4 = 0.0;
              fStack_3e0 = local_330;
            }
            else {
              FUN_00ddf460(&fStack_3ec,&fStack_3ec);
            }
            fVar18 = (float10)FUN_00ddbb50(fStack_3e4 * (float)pfStack_3d4 +
                                           fStack_3dc * fStack_3ec + fStack_3e8 * fStack_3d8);
            pfStack_428 = (float *)(float)fVar18;
            if (((float10)0.0001 < fVar18) && (fVar18 < (float10)3.1414928)) {
              fStack_3c8 = fStack_3e4 * fStack_3d8 - fStack_3e8 * (float)pfStack_3d4;
              fStack_3c4 = fStack_3ec * (float)pfStack_3d4 - fStack_3dc * fStack_3e4;
              fStack_3c0 = fStack_3dc * fStack_3e8 - fStack_3ec * fStack_3d8;
              fStack_1fc = fStack_3c8;
              fStack_1f8 = fStack_3c4;
              fStack_1f4 = fStack_3c0;
              if ((fStack_3c8 != 0.0) || ((fStack_3c4 != 0.0 || (fStack_3c0 != 0.0)))) {
                D3DXMatrixRotationAxis(auStack_ac,&fStack_1fc,pfStack_428);
                D3DXMatrixMultiply(iVar15,iVar15,auStack_b8);
              }
            }
            puVar6 = *(undefined4 **)(iVar16 + 0xb0);
            *(undefined4 *)(iVar14 + 0x40) = *puVar6;
            *(undefined4 *)(iVar14 + 0x44) = puVar6[1];
            *(undefined4 *)(iVar14 + 0x48) = puVar6[2];
          }
          else {
            pfStack_428 = (float *)(*(int *)(iVar16 + 0xf4) + 0x10);
            FID_conflict__memcpy((void *)(iVar14 + 0x10),pfStack_428,0x40);
            pfVar11 = (float *)(iVar16 + 0x50);
            D3DXVec3TransformNormal(pfVar11,iVar16 + 0x20,pfStack_428);
            *pfVar11 = *pfVar11 + pfStack_428[0xc];
            *(float *)(iVar16 + 0x54) = pfStack_428[0xd] + *(float *)(iVar16 + 0x54);
            *(float *)(iVar16 + 0x58) = pfStack_428[0xe] + *(float *)(iVar16 + 0x58);
          }
          *(ushort *)(iVar14 + 0xa2) = *(ushort *)(iVar14 + 0xa2) | 0x20;
          iVar9 = iVar9 + 0x100;
          fStack_3f0 = (float)((int)fStack_3f0 + 1);
        } while ((uint)fStack_3f0 < (uint)param_1[6]);
      }
      uVar13 = 0;
      if (param_1[6] != 0) {
        fStack_42c = 0.0;
        do {
          puVar7 = (ushort *)param_1[7];
          uVar5 = *(ushort *)((int)fStack_42c + 6 + (int)puVar7);
          if (((uVar5 != 0xfff) && (*(int *)((int)fStack_42c + 0xd8 + (int)puVar7) != 0)) &&
             (uVar12 = 0, puVar10 = puVar7, param_1[6] != 0)) {
            do {
              if ((uVar13 != uVar12) && ((uVar5 & 0xfff) == *puVar10)) {
                iVar16 = *(int *)((int)fStack_42c + 0xf0 + (int)puVar7);
                uStack_2bc = *(undefined4 *)(iVar16 + 0x40);
                iVar14 = *(int *)(puVar10 + 0x78);
                iVar9 = iVar16 + 0x10;
                uStack_2b8 = *(undefined4 *)(iVar16 + 0x44);
                uStack_2b4 = *(undefined4 *)(iVar16 + 0x48);
                uStack_24c = *(undefined4 *)(iVar14 + 0x40);
                uStack_248 = *(undefined4 *)(iVar14 + 0x44);
                uStack_244 = *(undefined4 *)(iVar14 + 0x48);
                uStack_240 = *(undefined4 *)(iVar14 + 0x4c);
                D3DXMatrixInverse(auStack_12c,0,iVar9);
                D3DXVec3TransformNormal(&fStack_2d8,&fStack_258,auStack_138);
                fVar19 = (float10)fStack_2c8 + (float10)fStack_f8;
                fStack_2c8 = (float)fVar19;
                fVar20 = (float10)fStack_2c4 + (float10)fStack_f4;
                fStack_2c4 = (float)fVar20;
                fVar18 = (float10)0;
                fStack_2cc = (float)fVar18;
                fVar21 = fVar19 * fVar19 + fVar20 * fVar20;
                if (fVar21 < fVar18 == (fVar21 == fVar18)) {
                  fVar21 = (float10)1.5707964;
                  if ((float10)*(float *)((int)fStack_42c + 0xe8 + (int)puVar7) < fVar18) {
                    fVar21 = (float10)-1.5707964;
                  }
                  fVar18 = (float10)fpatan(fVar20,fVar19);
                  fVar18 = (float10)FUN_00ddba30((float)(fVar18 - fVar21));
                  D3DXMatrixRotationX(auStack_6c,(float)fVar18);
                  D3DXMatrixMultiply(iVar9,auStack_74,iVar9);
                  *(undefined4 *)(iVar16 + 0x40) = uStack_2bc;
                  *(undefined4 *)(iVar16 + 0x44) = uStack_2b8;
                  *(undefined4 *)(iVar16 + 0x48) = uStack_2b4;
                }
                break;
              }
              uVar12 = uVar12 + 1;
              puVar10 = puVar10 + 0x80;
            } while (uVar12 < (uint)param_1[6]);
          }
          uVar13 = uVar13 + 1;
          fStack_42c = (float)((int)fStack_42c + 0x100);
        } while (uVar13 < (uint)param_1[6]);
      }
      FUN_00a17b00();
      if (param_3 != 0) {
        FUN_009f7a90();
        if (((param_1[1] != 0) && (param_1[9] != 0)) &&
           ((param_1[0x2bf] != 0 && (uVar13 = 0, param_1[9] != 0)))) {
          iVar9 = 0;
          do {
            FUN_00f96100(param_1[10] + iVar9 + 0x30,*(undefined4 *)(param_1[10] + 0xc + iVar9),
                         0xffffffff,0,0);
            uVar13 = uVar13 + 1;
            iVar9 = iVar9 + 0x40;
          } while (uVar13 < (uint)param_1[9]);
        }
        FUN_009fc170(0xffffffff,1);
      }
    }
  }
  return;
}

// 00A039E0  FUN_00a039e0  size=1778  [between]
undefined4 __thiscall
FUN_00a039e0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  undefined2 *puVar15;
  float10 fVar16;
  int local_88;
  uint local_84;
  float local_80;
  uint local_78;
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
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 local_14;
  
  if (param_4 != 0) {
    iVar7 = FUN_009ffa00(param_5,&DAT_01b7bd48);
    if (iVar7 != 0) {
      local_80 = 0.0;
      local_78 = 0;
      if (param_5 != 0) {
        local_88 = 0;
        puVar8 = (undefined4 *)(param_4 + 0x18);
        do {
          puVar15 = (undefined2 *)(param_1[7] + local_88);
          *puVar15 = *(undefined2 *)(puVar8 + -6);
          puVar15[1] = *(undefined2 *)((int)puVar8 + -0x16);
          puVar15[2] = *(undefined2 *)(puVar8 + -5);
          puVar15[3] = *(undefined2 *)((int)puVar8 + -0x12);
          puVar15[4] = *(undefined2 *)(puVar8 + -4);
          puVar15[5] = *(undefined2 *)((int)puVar8 + -0xe);
          pfVar1 = (float *)(puVar15 + 0x10);
          *(undefined4 *)(puVar15 + 0x68) = puVar8[-3];
          *pfVar1 = (float)puVar8[-2];
          *(undefined4 *)(puVar15 + 0x12) = puVar8[-1];
          *(undefined4 *)(puVar15 + 0x14) = *puVar8;
          *(undefined4 *)(puVar15 + 0x16) = 0x3f800000;
          *(undefined4 *)(puVar15 + 0x78) = 0;
          *(undefined4 *)(puVar15 + 0x7a) = 0;
          *(undefined4 *)(puVar15 + 0x6a) = 0;
          *(undefined4 *)(puVar15 + 0x6c) = 0;
          *(undefined4 *)(puVar15 + 0x70) = 0x3f800000;
          *(undefined4 *)(puVar15 + 0x72) = 0;
          *(undefined4 *)(puVar15 + 0x74) = 0;
          *(undefined4 *)(puVar15 + 0x76) = local_14;
          *(undefined4 *)(puVar15 + 0x7e) = puVar8[1];
          iVar7 = FUN_00a12210(*puVar15);
          if (iVar7 == 0) {
            return 0;
          }
          *(int *)(puVar15 + 0x78) = iVar7;
          if (puVar15[2] == 0xfff) {
            if (puVar15[1] != 0xfff) {
              iVar9 = FUN_00a12210(puVar15[1]);
              if (iVar9 == 0) {
                return 0;
              }
              if (*(int *)(param_2 + 0x330) != 0) {
                uVar10 = FUN_00a06de0(puVar15[1]);
                FUN_00a06ec0(&local_60,uVar10);
              }
              if (*(int *)(param_2 + 0x330) != 0) {
                uVar10 = FUN_00a06de0(*puVar15);
                FUN_00a06ec0(&local_70,uVar10);
              }
              fVar3 = local_70 - local_60;
              fVar4 = local_6c - local_5c;
              fVar5 = local_68 - local_58;
              fVar6 = local_64 - local_54;
              goto LAB_00a03c19;
            }
          }
          else {
            iVar9 = FUN_00a12210(puVar15[2]);
            if (iVar9 == 0) {
              return 0;
            }
            if (*(int *)(param_2 + 0x330) != 0) {
              uVar10 = FUN_00a06de0(*puVar15);
              FUN_00a06ec0(&local_40,uVar10);
            }
            if (*(int *)(param_2 + 0x330) != 0) {
              uVar10 = FUN_00a06de0(puVar15[2]);
              FUN_00a06ec0(&local_50,uVar10);
            }
            fVar3 = local_50 - local_40;
            fVar4 = local_4c - local_3c;
            fVar5 = local_48 - local_38;
            fVar6 = local_44 - local_34;
LAB_00a03c19:
            *pfVar1 = fVar3;
            *(float *)(puVar15 + 0x12) = fVar4;
            *(float *)(puVar15 + 0x14) = fVar5;
            *(float *)(puVar15 + 0x16) = fVar6;
          }
          *(float *)(puVar15 + 0xe) = local_80;
          fVar16 = (float10)FUN_00ddba30(local_80 + 0.08726646);
          local_80 = (float)fVar16;
          fVar3 = *pfVar1 * *pfVar1;
          if (*(float *)(puVar15 + 0x12) * *(float *)(puVar15 + 0x12) + fVar3 +
              *(float *)(puVar15 + 0x14) * *(float *)(puVar15 + 0x14) <= 0.0) {
            *(undefined4 *)(puVar15 + 0x18) = 0;
            *(undefined4 *)(puVar15 + 0x1a) = 0x3f800000;
            *(undefined4 *)(puVar15 + 0x1c) = 0;
            *(undefined4 *)(puVar15 + 0x1e) = local_14;
          }
          else {
            fVar3 = *(float *)(puVar15 + 0x14) * *(float *)(puVar15 + 0x14) +
                    *(float *)(puVar15 + 0x12) * *(float *)(puVar15 + 0x12) + fVar3;
            if (fVar3 < 0.0 == (fVar3 == 0.0)) {
              FUN_00ddf460(puVar15 + 0x18,pfVar1);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              *(undefined4 *)(puVar15 + 0x18) = 0;
              *(undefined4 *)(puVar15 + 0x1a) = 0x3f800000;
              *(undefined4 *)(puVar15 + 0x1c) = 0;
            }
          }
          pfVar2 = (float *)(puVar15 + 0x28);
          *(undefined2 **)(puVar15 + 0x58) = puVar15 + 0x48;
          *(undefined4 *)(puVar15 + 0x5a) = 0;
          *(undefined4 *)(puVar15 + 0x60) = 0;
          *(undefined4 *)(puVar15 + 0x62) = 0;
          *(float *)(puVar15 + 6) =
               SQRT(*(float *)(puVar15 + 0x12) * *(float *)(puVar15 + 0x12) + *pfVar1 * *pfVar1 +
                    *(float *)(puVar15 + 0x14) * *(float *)(puVar15 + 0x14));
          D3DXVec3TransformNormal(pfVar2,pfVar1,iVar7 + 0x10);
          *pfVar2 = *pfVar2 + *(float *)(iVar7 + 0x40);
          *(float *)(puVar15 + 0x2a) = *(float *)(iVar7 + 0x44) + *(float *)(puVar15 + 0x2a);
          *(float *)(puVar15 + 0x2c) = *(float *)(iVar7 + 0x48) + *(float *)(puVar15 + 0x2c);
          *(float *)(puVar15 + 0x30) = *pfVar2;
          *(undefined4 *)(puVar15 + 0x32) = *(undefined4 *)(puVar15 + 0x2a);
          *(undefined4 *)(puVar15 + 0x34) = *(undefined4 *)(puVar15 + 0x2c);
          *(undefined4 *)(puVar15 + 0x36) = *(undefined4 *)(puVar15 + 0x2e);
          *(undefined4 *)(puVar15 + 0x20) = 0;
          *(undefined4 *)(puVar15 + 0x22) = 0;
          *(undefined4 *)(puVar15 + 0x24) = 0;
          *(undefined4 *)(puVar15 + 0x26) = local_14;
          if (puVar15[5] != 0xfff) {
            uVar10 = FUN_00a12210(puVar15[5] & 0xfff);
            *(undefined4 *)(puVar15 + 0x7a) = uVar10;
          }
          local_88 = local_88 + 0x100;
          puVar8 = puVar8 + 8;
          local_78 = local_78 + 1;
        } while (local_78 < param_5);
      }
      local_84 = 0;
      if (param_5 != 0) {
        local_88 = 0;
        do {
          iVar7 = param_1[7] + local_88;
          *(undefined4 *)(iVar7 + 200) = 0x3f800000;
          if (*(short *)(iVar7 + 2) != 0xfff) {
            uVar13 = 0;
            iVar9 = 0;
            do {
              if ((local_84 != uVar13) &&
                 (psVar11 = (short *)(param_1[7] + iVar9), *(short *)(iVar7 + 2) == *psVar11)) {
                *(undefined4 *)(iVar7 + 200) = param_6;
                *(short **)(iVar7 + 0xb0) = psVar11 + 0x28;
                *(short **)(iVar7 + 0xb8) = psVar11 + 0x50;
                break;
              }
              uVar13 = uVar13 + 1;
              iVar9 = iVar9 + 0x100;
            } while (uVar13 < param_5);
          }
          local_88 = local_88 + 0x100;
          local_84 = local_84 + 1;
        } while (local_84 < param_5);
      }
      local_84 = 0;
      if (param_5 != 0) {
        local_88 = 0;
        do {
          puVar15 = (undefined2 *)(param_1[7] + local_88);
          *(undefined4 *)(puVar15 + 0x66) = 0x3f800000;
          if ((puVar15[3] & 0xfff) != 0xfff) {
            iVar7 = FUN_00a12210(*puVar15);
            if (iVar7 == 0) {
              return 0;
            }
            uVar13 = 0;
            iVar7 = 0;
            do {
              if ((local_84 != uVar13) &&
                 (puVar12 = (ushort *)(param_1[7] + iVar7), (puVar15[3] & 0xfff) == *puVar12)) {
                if ((puVar15[3] & 0x8000) == 0) {
                  *(ushort **)(puVar15 + 0x5a) = puVar12 + 0x28;
                  puVar14 = puVar12 + 0x50;
                }
                else {
                  *(undefined4 *)(puVar15 + 0x5a) = *(undefined4 *)(puVar12 + 0x58);
                  puVar14 = *(ushort **)(puVar12 + 0x5c);
                }
                *(ushort **)(puVar15 + 0x5e) = puVar14;
                iVar7 = FUN_00a12210(*puVar12);
                if (iVar7 == 0) {
                  return 0;
                }
                if (*(int *)(param_2 + 0x330) != 0) {
                  uVar10 = FUN_00a06de0(*puVar15);
                  FUN_00a06ec0(&fStack_20,uVar10);
                }
                if (*(int *)(param_2 + 0x330) != 0) {
                  uVar10 = FUN_00a06de0(puVar15[3]);
                  FUN_00a06ec0(&fStack_30,uVar10);
                }
                *(float *)(puVar15 + 8) =
                     SQRT((fStack_30 - fStack_20) * (fStack_30 - fStack_20) +
                          (fStack_2c - fStack_1c) * (fStack_2c - fStack_1c) +
                          (fStack_28 - fStack_18) * (fStack_28 - fStack_18));
                *(undefined4 *)(puVar15 + 0x66) = 0x3f000000;
                break;
              }
              uVar13 = uVar13 + 1;
              iVar7 = iVar7 + 0x100;
            } while (uVar13 < param_5);
          }
          local_88 = local_88 + 0x100;
          local_84 = local_84 + 1;
        } while (local_84 < param_5);
      }
      local_84 = 0;
      if (param_5 != 0) {
        local_88 = 0;
        do {
          puVar15 = (undefined2 *)(param_1[7] + local_88);
          if ((puVar15[4] & 0xfff) != 0xfff) {
            iVar7 = FUN_00a12210(*puVar15);
            if (iVar7 == 0) {
              return 0;
            }
            uVar13 = 0;
            iVar7 = 0;
            do {
              if ((local_84 != uVar13) &&
                 (puVar12 = (ushort *)(param_1[7] + iVar7), (puVar15[4] & 0xfff) == *puVar12)) {
                *(undefined4 *)(puVar15 + 0x60) = *(undefined4 *)(puVar12 + 0x58);
                *(ushort **)(puVar15 + 0x62) = puVar12 + 0x28;
                break;
              }
              uVar13 = uVar13 + 1;
              iVar7 = iVar7 + 0x100;
            } while (uVar13 < param_5);
          }
          local_88 = local_88 + 0x100;
          local_84 = local_84 + 1;
        } while (local_84 < param_5);
      }
      param_1[0x2bd] = param_3;
      param_1[0x2be] = param_3;
      param_1[8] = param_4;
      param_1[700] = param_2;
      *param_1 = 1;
      return 1;
    }
    FUN_00dd5650(&DAT_0165c40c);
  }
  return 0;
}

// 00A040E0  FUN_00a040e0  size=321  [between]
undefined4 __thiscall FUN_00a040e0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  uint local_24;
  undefined4 local_14;
  
  iVar1 = FUN_009ffa70(param_4,&DAT_01b7bd48);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0165c430);
    return 0;
  }
  iVar1 = 0;
  if (param_3 == 0) {
LAB_00a041fc:
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    return 0;
  }
  local_24 = 0;
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 0x14);
    do {
      iVar2 = *(int *)(param_1 + 0x28);
      *(undefined2 *)(iVar2 + iVar1) = *(undefined2 *)(puVar4 + -5);
      puVar3 = (undefined2 *)(iVar2 + iVar1);
      puVar3[1] = *(undefined2 *)((int)puVar4 + -0x12);
      *(undefined4 *)(puVar3 + 2) = puVar4[-4];
      *(undefined4 *)(puVar3 + 4) = puVar4[-3];
      *(undefined4 *)(puVar3 + 8) = puVar4[-2];
      *(undefined4 *)(puVar3 + 10) = puVar4[-1];
      *(undefined4 *)(puVar3 + 0xc) = *puVar4;
      *(undefined4 *)(puVar3 + 0xe) = 0x3f800000;
      *(undefined4 *)(puVar3 + 0x10) = puVar4[1];
      *(undefined4 *)(puVar3 + 0x12) = puVar4[2];
      *(undefined4 *)(puVar3 + 0x14) = puVar4[3];
      *(undefined4 *)(puVar3 + 0x16) = 0x3f800000;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      *(undefined4 *)(puVar3 + 0x1a) = 0;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x1e) = local_14;
      iVar2 = FUN_00a12210(*puVar3);
      if ((iVar2 == 0) || (iVar2 = FUN_00a12210(puVar3[1]), iVar2 == 0)) goto LAB_00a041fc;
      local_24 = local_24 + 1;
      iVar1 = iVar1 + 0x40;
      puVar4 = puVar4 + 9;
    } while (local_24 < param_4);
  }
  *(undefined4 *)(param_1 + 0xafc) = param_2;
  return 1;
}

// 00A04230  FUN_00a04230  size=486  [between]
undefined4 __thiscall
FUN_00a04230(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 != 0) {
    FUN_009fac50();
    iVar1 = cXmlBinary::cXmlBinary_19(param_2,&local_70);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb04) = local_6c;
      *(undefined4 *)(param_1 + 0xb08) = local_68;
      *(undefined2 *)(param_1 + 0xb10) = local_60;
      *(undefined2 *)(param_1 + 0xb12) = local_5e;
      *(undefined4 *)(param_1 + 0xb0c) = local_64;
      *(undefined4 *)(param_1 + 0xb18) = local_5c;
      *(undefined4 *)(param_1 + 0xb30) = local_58;
      *(undefined4 *)(param_1 + 0xb34) = local_54;
      *(undefined4 *)(param_1 + 0xb38) = local_50;
      *(undefined4 *)(param_1 + 0xb3c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xb40) = local_4c;
      *(undefined4 *)(param_1 + 0xb44) = local_48;
      *(undefined4 *)(param_1 + 0xb50) = local_44;
      *(undefined4 *)(param_1 + 0xb54) = local_40;
      *(undefined4 *)(param_1 + 0xb58) = local_3c;
      *(undefined4 *)(param_1 + 0xb5c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xb60) = local_38;
      *(undefined4 *)(param_1 + 0xb70) = local_34;
      *(undefined4 *)(param_1 + 0xb74) = local_30;
      *(undefined4 *)(param_1 + 0xb78) = local_2c;
      *(undefined4 *)(param_1 + 0xb7c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xbd0) = local_1c;
      *(undefined4 *)(param_1 + 0xb80) = local_28;
      *(undefined4 *)(param_1 + 0xbb4) = local_10;
      *(undefined4 *)(param_1 + 0xb84) = local_24;
      *(undefined4 *)(param_1 + 0xbb0) = local_14;
      *(undefined4 *)(param_1 + 0xb94) = local_20;
      *(undefined4 *)(param_1 + 0xbcc) = local_18;
      *(undefined4 *)(param_1 + 0xba0) = local_4;
      *(undefined4 *)(param_1 + 0xbbc) = local_8;
      *(undefined4 *)(param_1 + 3000) = local_c;
      iVar1 = FUN_00dd29b0(local_70 << 5,0x10,0,0);
      if (iVar1 != 0) {
        iVar2 = cXmlBinary::cXmlBinary_21(param_2,iVar1,local_70);
        if (iVar2 != 0) {
          iVar2 = FUN_00a039e0(param_3,param_4,iVar1,local_70,param_5);
          if (iVar2 == 0) {
            FUN_009fc5e0();
          }
        }
        FUN_00dd48d0(iVar1,0);
      }
      return 1;
    }
  }
  return 0;
}

// 00A04420  FUN_00a04420  size=102  [between]
void FUN_00a04420(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 != 0) && (iVar1 = cXmlBinary::cXmlBinary_32(param_1), iVar1 != 0)) &&
     (iVar2 = FUN_00dd29b0(iVar1 * 0x24,0x10,0,0), iVar2 != 0)) {
    iVar3 = cXmlBinary::cXmlBinary_31(param_1,iVar2,iVar1);
    if (iVar3 != 0) {
      FUN_00a040e0(param_2,iVar2,iVar1);
    }
    FUN_00dd48d0(iVar2,0);
  }
  return;
}

// 00A04490  FUN_00a04490  size=104  [between]
void FUN_00a04490(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 != 0) && (iVar1 = cXmlBinary::cXmlBinary_33(param_1), iVar1 != 0)) &&
     (iVar2 = FUN_00dd29b0(iVar1 * 0x44,0x10,0,0), iVar2 != 0)) {
    iVar3 = cXmlBinary::cXmlBinary_22(param_1,iVar2,iVar1);
    if (iVar3 != 0) {
      FUN_009fbb20(param_2,iVar2,iVar1);
    }
    FUN_00dd48d0(iVar2,0);
  }
  return;
}

// 00A04500  FUN_00a04500  size=364  [between]
undefined4 __fastcall FUN_00a04500(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_131;
  undefined1 local_130 [16];
  undefined1 local_120 [284];
  
  uVar4 = *(uint *)(param_1 + 0x4b0);
  if (uVar4 == 0x7c0000) {
    uVar4 = 0;
  }
  else if ((uVar4 < 0x10000) || (uVar4 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar4);
  }
  cVar1 = '\0';
  if (*(int *)(param_1 + 0x490) != 0) {
    local_131 = '\0';
    FUN_009f9f80(0xc4,&local_131);
    if (local_131 != '\0') {
      return 0;
    }
    iVar2 = FUN_009fa070(0xa0,&local_131);
    if ((iVar2 != 0) && (cVar1 = local_131, local_131 != '\0')) {
      cVar1 = local_131 + '1';
    }
  }
  iVar2 = thunk_FUN_00e00f00(uVar4,cVar1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4dc) == 0) {
      iVar2 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = cEspControler::cEspControler();
      }
      *(int *)(param_1 + 0x4dc) = iVar2;
      if ((iVar2 == 0) &&
         (iVar2 = FUN_009f8ea0(local_130,0x10,*(undefined4 *)(param_1 + 0x4b0),0), iVar2 != 0)) {
        FUN_00dd5650(&DAT_0165c458,local_130);
      }
      FUN_00e01ca0();
      FUN_00dffb20(*(undefined4 *)(param_1 + 0x4dc));
      uVar3 = FUN_00e028c0(*(undefined4 *)(param_1 + 0x4f0),cVar1,local_120);
      return uVar3;
    }
    iVar2 = FUN_009f8ea0(local_130,0x10,*(undefined4 *)(param_1 + 0x4b0),0);
    if (iVar2 != 0) {
      FUN_00dd5650(&DAT_0165c49c,local_130);
    }
  }
  return 0;
}

// 00A04670  cObjReadManager::updateHookLoading  size=86  [class]
void __fastcall cObjReadManager::updateHookLoading(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -1) {
    param_1[2] = param_1[2] + 1;
    iVar1 = FUN_00a00ca0(*param_1,param_1[1]);
    if ((iVar1 != 0) || (300 < (uint)param_1[2])) {
      if (300 < (uint)param_1[2]) {
        FUN_00dd5650("cObjReadManager::updateHookLoading ID:%08X DATA IS TIMEOUT",*param_1);
      }
      *param_1 = -1;
      FUN_00e9c110(1);
      FUN_00a4a6d0();
      return;
    }
  }
  return;
}

// 00A04770  FUN_00a04770  size=35  [callgraph]
void FUN_00a04770(void)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  return;
}

// 00A047A0  FUN_00a047a0  size=36  [callgraph]
undefined4 __fastcall FUN_00a047a0(undefined4 param_1)

{
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c7b0();
  return param_1;
}

// 00A04840  FUN_00a04840  size=148  [callgraph]
undefined4 __thiscall FUN_00a04840(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  if (((param_1[2] == 0) || (param_3 < 0)) || (param_1[3] <= param_3)) {
    return 0;
  }
  piVar1 = (int *)(param_1[2] + param_3 * 0x14);
  param_4 = piVar1[1] + param_4;
  piVar1 = (int *)(*piVar1 * 0xb0 + 0x98 + *param_1);
  if (piVar1[2] < param_5 + param_4) {
    return 0;
  }
  if (*piVar1 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = (uint)*(byte *)(param_1 + 4) * param_4 + *piVar1;
  }
  if (piVar1[1] == 0) {
    param_2[1] = 0;
    return 1;
  }
  param_2[1] = (uint)*(byte *)((int)param_1 + 0x11) * param_4 + piVar1[1];
  return 1;
}

// 00A048E0  FUN_00a048e0  size=86  [callgraph]
undefined4 __thiscall FUN_00a048e0(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1[2] != 0) && (-1 < param_3)) && (param_3 < param_1[3])) {
    piVar1 = (int *)(param_1[2] + param_3 * 0x14);
    param_4 = piVar1[2] + param_4;
    iVar2 = *piVar1 * 0xb0 + 0x98 + *param_1;
    if (param_5 + param_4 <= *(int *)(iVar2 + 0x10)) {
      *param_2 = *(int *)(iVar2 + 0xc) + param_4 * 2;
      return 1;
    }
  }
  return 0;
}

// 00A04940  FUN_00a04940  size=71  [callgraph]
undefined4 __thiscall FUN_00a04940(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (((*(int *)(param_1 + 8) != 0) && (-1 < param_3)) && (param_3 < *(int *)(param_1 + 0xc))) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x14);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[4] = puVar1[4];
    return 1;
  }
  return 0;
}

// 00A04990  FUN_00a04990  size=19  [callgraph]
undefined4 __thiscall FUN_00a04990(int param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)(param_1 + 0x10);
  return 1;
}

// 00A049F0  FUN_00a049f0  size=4  [callgraph]
undefined4 __fastcall FUN_00a049f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00A04A00  FUN_00a04a00  size=4  [callgraph]
undefined4 __fastcall FUN_00a04a00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00A04A40  FUN_00a04a40  size=196  [callgraph]
undefined4 FUN_00a04a40(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 & param_2) == 0) {
    return 0;
  }
  if (param_3 < 0x31) {
    if (param_3 == 0x30) {
      iVar2 = 8;
      iVar3 = 3;
    }
    else if (param_3 == 1) {
      iVar2 = 0;
      iVar3 = 0;
    }
    else if (param_3 == 2) {
      iVar2 = 1;
      iVar3 = iVar2;
    }
    else {
      if (param_3 != 4) {
        return 0;
      }
      iVar2 = 2;
      iVar3 = iVar2;
    }
  }
  else if (param_3 == 0x100) {
    iVar2 = 3;
    iVar3 = 4;
  }
  else {
    if (param_3 == 0x200) {
      iVar3 = 5;
      iVar2 = ((param_2 & 0x30) != 0) + 4;
    }
    else {
      if (param_3 != 0x10000) {
        return 0;
      }
      iVar3 = 6;
      iVar2 = ((param_2 & 0x30) != 0) + 6;
    }
    if (iVar2 == -1) {
      return 0;
    }
  }
  param_1[1] = (&DAT_0165c500)[iVar2 * 2];
  param_1[2] = (&DAT_0165c504)[iVar2 * 2];
  uVar1 = (&DAT_0189eeb8)[iVar3];
  *param_1 = param_3;
  param_1[3] = uVar1;
  return 1;
}

// 00A04B10  FUN_00a04b10  size=238  [callgraph]
void FUN_00a04b10(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  iVar2 = param_1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1 = 0;
  do {
    uVar1 = *(uint *)((int)&DAT_0165c548 + param_1);
    puVar5 = (uint *)(*(int *)(iVar2 + 0x70) * 0x10 + iVar2);
    if ((param_2 & uVar1) != 0) {
      if (uVar1 < 0x31) {
        if (uVar1 == 0x30) {
          iVar3 = 8;
          iVar4 = 3;
        }
        else if (uVar1 == 1) {
          iVar3 = 0;
          iVar4 = 0;
        }
        else if (uVar1 == 2) {
          iVar3 = 1;
          iVar4 = 1;
        }
        else {
          if (uVar1 != 4) goto LAB_00a04bd3;
          iVar3 = 2;
          iVar4 = 2;
        }
      }
      else if (uVar1 == 0x100) {
        iVar3 = 3;
        iVar4 = 4;
      }
      else {
        if (uVar1 == 0x200) {
          iVar4 = 5;
          iVar3 = ((param_2 & 0x30) != 0) + 4;
        }
        else {
          if (uVar1 != 0x10000) goto LAB_00a04bd3;
          iVar4 = 6;
          iVar3 = ((param_2 & 0x30) != 0) + 6;
        }
        if (iVar3 == -1) goto LAB_00a04bd3;
      }
      puVar5[1] = (&DAT_0165c500)[iVar3 * 2];
      puVar5[2] = (&DAT_0165c504)[iVar3 * 2];
      puVar5[3] = (&DAT_0189eeb8)[iVar4];
      *puVar5 = uVar1;
      *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
    }
LAB_00a04bd3:
    param_1 = param_1 + 4;
    if (0x1b < param_1) {
      return;
    }
  } while( true );
}

// 00A04E50  FUN_00a04e50  size=23  [callgraph]
void __fastcall FUN_00a04e50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00A04E70  FUN_00a04e70  size=1  [callgraph]
void FUN_00a04e70(void)

{
  return;
}

// 00A04EE0  FUN_00a04ee0  size=11  [callgraph]
void FUN_00a04ee0(void)

{
  DAT_01b7b39c = 0;
  return;
}

// 00A04EF0  FUN_00a04ef0  size=11  [callgraph]
void FUN_00a04ef0(void)

{
  DAT_01b7b39c = 0;
  return;
}

// 00A04F60  FUN_00a04f60  size=521  [callgraph]
void FUN_00a04f60(void)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  uVar5 = 1;
  bVar7 = 0xd;
  pfVar3 = (float *)&DAT_01b7b3a0;
  uVar4 = 2;
  do {
    if (uVar4 - 2 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 + 2 & 0x1f));
    }
    else {
      fVar2 = (float)(int)(uVar5 >> 0xf | uVar5 << 0x11);
    }
    *pfVar3 = fVar2;
    uVar1 = uVar5 << 1;
    uVar6 = uVar1 | (int)uVar5 < 0;
    pfVar3[0x20] = *pfVar3 * -1.0;
    if (uVar4 - 1 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 + 1 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar5 & 0x7fffffff) >> 0xe | uVar6 << 0x11);
    }
    pfVar3[1] = fVar2;
    uVar5 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    pfVar3[0x21] = pfVar3[1] * -1.0;
    if (uVar4 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar1 & 0x7fffffff) >> 0xe | uVar5 << 0x11);
    }
    pfVar3[2] = fVar2;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    pfVar3[0x22] = pfVar3[2] * -1.0;
    if (uVar4 + 1 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 - 1 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar1 & 0x3fffffff) >> 0xd | uVar5 << 0x11);
    }
    pfVar3[3] = fVar2;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    pfVar3[0x23] = pfVar3[3] * -1.0;
    if (uVar4 + 2 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 - 2 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar1 & 0x1fffffff) >> 0xc | uVar5 << 0x11);
    }
    pfVar3[4] = fVar2;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    pfVar3[0x24] = pfVar3[4] * -1.0;
    if (uVar4 + 3 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 - 3 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar1 & 0xfffffff) >> 0xb | uVar5 << 0x11);
    }
    pfVar3[5] = fVar2;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    pfVar3[0x25] = pfVar3[5] * -1.0;
    if (uVar4 + 4 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 - 4 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar1 & 0x7ffffff) >> 10 | uVar5 << 0x11);
    }
    pfVar3[6] = fVar2;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    pfVar3[0x26] = pfVar3[6] * -1.0;
    if (uVar4 + 5 < 0xf) {
      fVar2 = 1.0 / (float)(1 << (bVar7 - 5 & 0x1f));
    }
    else {
      fVar2 = (float)(int)((uVar1 & 0x3ffffff) >> 9 | uVar5 << 0x11);
    }
    pfVar3[7] = fVar2;
    uVar1 = uVar4 + 6;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    bVar7 = bVar7 - 8;
    pfVar3[0x27] = pfVar3[7] * -1.0;
    pfVar3 = pfVar3 + 8;
    uVar4 = uVar4 + 8;
  } while (uVar1 < 0x20);
  return;
}

// 00A05170  FUN_00a05170  size=60  [callgraph]
float10 FUN_00a05170(ushort param_1)

{
  if ((param_1 >> 10 & 0x1f) == 0) {
    return (float10)0;
  }
  return (float10)(ushort)((param_1 & 0x3ff) + 0x400) * (float10)0.0009765625 *
         (float10)(float)(&DAT_01b7b3a0)[(uint)(param_1 >> 0xf) * 0x20 + (param_1 >> 10 & 0x1f)];
}

// 00A05210  FUN_00a05210  size=895  [callgraph]
void FUN_00a05210(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  fVar1 = 0.0;
  iVar20 = 0;
  fVar11 = 0.0;
  if (param_3 < 4) {
    fVar12 = 0.0;
    fVar1 = 0.0;
  }
  else {
    iVar19 = (param_3 - 4U >> 2) + 1;
    iVar20 = iVar19 * 4;
    pfVar18 = (float *)(param_2 + 0x18);
    fVar11 = fVar1;
    fVar12 = fVar1;
    do {
      iVar19 = iVar19 + -1;
      fVar1 = pfVar18[6] + pfVar18[2] + pfVar18[-2] + pfVar18[-6] + fVar1;
      fVar11 = pfVar18[7] + pfVar18[3] + pfVar18[-1] + pfVar18[-5] + fVar11;
      fVar12 = pfVar18[-4] + fVar12 + *pfVar18 + pfVar18[4] + pfVar18[8];
      pfVar18 = pfVar18 + 0x10;
    } while (iVar19 != 0);
  }
  fVar6 = 0.0;
  if (iVar20 < param_3) {
    iVar19 = param_3 - iVar20;
    pfVar18 = (float *)(iVar20 * 0x10 + param_2 + 8);
    do {
      iVar19 = iVar19 + -1;
      fVar1 = pfVar18[-2] + fVar1;
      fVar11 = pfVar18[-1] + fVar11;
      fVar12 = fVar12 + *pfVar18;
      pfVar18 = pfVar18 + 4;
    } while (iVar19 != 0);
  }
  iVar20 = 0;
  fVar17 = 1.0 / (float)param_3;
  fVar1 = fVar17 * fVar1;
  fVar11 = fVar17 * fVar11;
  fVar12 = fVar17 * fVar12;
  local_3c = 0.0;
  local_38 = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_34 = 0.0;
  if (param_3 < 4) {
    local_30 = 0.0;
    local_2c = 0.0;
    fVar6 = 0.0;
  }
  else {
    iVar19 = (param_3 - 4U >> 2) + 1;
    iVar20 = iVar19 * 4;
    pfVar18 = (float *)(param_2 + 0x18);
    do {
      fVar2 = pfVar18[-6] - fVar1;
      fVar7 = pfVar18[-5] - fVar11;
      fVar13 = pfVar18[-4] - fVar12;
      fVar3 = pfVar18[-2] - fVar1;
      fVar8 = pfVar18[-1] - fVar11;
      fVar14 = *pfVar18 - fVar12;
      fVar4 = pfVar18[2] - fVar1;
      fVar9 = pfVar18[3] - fVar11;
      fVar15 = pfVar18[4] - fVar12;
      iVar19 = iVar19 + -1;
      fVar5 = pfVar18[6] - fVar1;
      fVar10 = pfVar18[7] - fVar11;
      fVar16 = pfVar18[8] - fVar12;
      fVar6 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar6;
      local_3c = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 + local_3c;
      local_38 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13 + local_38;
      local_30 = fVar10 * fVar5 + fVar9 * fVar4 + fVar8 * fVar3 + fVar7 * fVar2 + local_30;
      local_2c = fVar16 * fVar5 + fVar15 * fVar4 + fVar14 * fVar3 + fVar13 * fVar2 + local_2c;
      local_34 = fVar16 * fVar10 + fVar9 * fVar15 + fVar8 * fVar14 + fVar7 * fVar13 + local_34;
      pfVar18 = pfVar18 + 0x10;
    } while (iVar19 != 0);
  }
  if (iVar20 < param_3) {
    param_3 = param_3 - iVar20;
    pfVar18 = (float *)(param_2 + 8 + iVar20 * 0x10);
    do {
      param_3 = param_3 + -1;
      fVar2 = pfVar18[-2] - fVar1;
      fVar3 = pfVar18[-1] - fVar11;
      fVar4 = *pfVar18 - fVar12;
      fVar6 = fVar2 * fVar2 + fVar6;
      local_3c = fVar3 * fVar3 + local_3c;
      local_38 = fVar4 * fVar4 + local_38;
      local_30 = fVar3 * fVar2 + local_30;
      local_2c = fVar2 * fVar4 + local_2c;
      local_34 = fVar4 * fVar3 + local_34;
      pfVar18 = pfVar18 + 4;
    } while (param_3 != 0);
  }
  *param_1 = fVar6 * fVar17;
  param_1[1] = local_30 * fVar17;
  param_1[3] = local_30 * fVar17;
  param_1[2] = local_2c * fVar17;
  param_1[4] = local_3c * fVar17;
  param_1[5] = local_34 * fVar17;
  param_1[7] = local_34 * fVar17;
  param_1[6] = local_2c * fVar17;
  param_1[8] = fVar17 * local_38;
  return;
}

// 00A055D0  FUN_00a055d0  size=1764  [callgraph]
undefined4 FUN_00a055d0(float *param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *local_50;
  int local_48;
  float *local_44;
  int local_40;
  float *local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_18 [6];
  
  iVar17 = 3;
  puVar7 = param_2;
  puVar13 = param_2;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar13 = 0x3f800000;
    puVar7 = puVar7 + 3;
    puVar13 = puVar13 + 4;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_18[3] = *param_1;
  *param_3 = local_18[3];
  local_34 = 0;
  local_18[0] = 0.0;
  local_18[4] = param_1[4];
  param_3[1] = local_18[4];
  local_18[1] = 0.0;
  local_18[5] = param_1[8];
  param_3[2] = local_18[5];
  local_18[2] = 0.0;
  do {
    iVar15 = 2;
    iVar16 = 0;
    iVar17 = 1;
    local_30 = 2;
    fVar4 = 0.0;
    do {
      if (iVar17 < 3) {
        iVar9 = iVar17;
        if (3 < iVar15) {
          iVar8 = (-iVar17 - 1U >> 2) + 1;
          iVar9 = iVar17 + iVar8 * 4;
          pfVar11 = param_1 + iVar17 + iVar16;
          do {
            iVar8 = iVar8 + -1;
            fVar4 = ABS(pfVar11[3]) + ABS(pfVar11[2]) + ABS(pfVar11[1]) + ABS(*pfVar11) + fVar4;
            pfVar11 = pfVar11 + 4;
          } while (iVar8 != 0);
        }
        if (iVar9 < 3) {
          pfVar11 = param_1 + iVar9 + iVar16;
          iVar9 = 3 - iVar9;
          do {
            fVar1 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            iVar9 = iVar9 + -1;
            fVar4 = ABS(fVar1) + fVar4;
          } while (iVar9 != 0);
        }
      }
      iVar15 = iVar15 + -1;
      iVar17 = iVar17 + 1;
      iVar16 = iVar16 + 3;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
    if (fVar4 == 0.0) {
      return 1;
    }
    if (local_34 < 3) {
      local_2c = fVar4 * 0.2 * 0.11111111;
    }
    else {
      local_2c = 0.0;
    }
    local_44 = (float *)(param_2 + 6);
    local_48 = 0;
    local_38 = 2;
    pfVar11 = param_3;
    iVar17 = 1;
    do {
      if (iVar17 < 3) {
        local_50 = param_1 + local_48 + iVar17;
        iVar16 = (int)local_18 - (int)param_3;
        iVar15 = iVar17;
        pfVar18 = pfVar11;
        local_40 = local_48;
        pfVar6 = local_44;
        local_30 = local_38;
        do {
          local_30 = local_30 + -1;
          local_3c = pfVar6 + 1;
          local_40 = local_40 + 3;
          pfVar18 = pfVar18 + 1;
          fVar4 = ABS(*local_50) * 100.0;
          if (((local_34 < 4) || (ABS(*pfVar11) != ABS(*pfVar11) + fVar4)) ||
             (ABS(*pfVar18) != ABS(*pfVar18) + fVar4)) {
            if (local_2c < ABS(*local_50)) {
              fVar1 = *pfVar18 - *pfVar11;
              if (ABS(fVar1) == ABS(fVar1) + fVar4) {
                fVar1 = *local_50 / fVar1;
              }
              else {
                fVar4 = (fVar1 * 0.5) / *local_50;
                fVar1 = 1.0 / (ABS(fVar4) + SQRT(fVar4 * fVar4 + 1.0));
                if (fVar4 < 0.0) {
                  fVar1 = -fVar1;
                }
              }
              fVar4 = 1.0 / SQRT(fVar1 * fVar1 + 1.0);
              fVar5 = fVar4 * fVar1;
              fVar4 = fVar5 / (fVar4 + 1.0);
              fVar1 = *local_50 * fVar1;
              *(float *)((int)pfVar11 + iVar16) = *(float *)((int)pfVar11 + iVar16) - fVar1;
              *(float *)((int)pfVar18 + iVar16) = fVar1 + *(float *)((int)pfVar18 + iVar16);
              iVar9 = iVar17 + -1;
              *pfVar11 = *pfVar11 - fVar1;
              *pfVar18 = *pfVar18 + fVar1;
              iVar8 = 0;
              *local_50 = 0.0;
              if (3 < iVar9) {
                iVar14 = (iVar17 - 5U >> 2) + 1;
                iVar8 = iVar14 * 4;
                pfVar10 = (float *)(((int)param_1 - (int)param_2) + (int)local_44);
                pfVar12 = (float *)((int)local_3c + ((int)param_1 - (int)param_2));
                do {
                  fVar1 = pfVar10[-6];
                  fVar2 = pfVar12[-6];
                  iVar14 = iVar14 + -1;
                  pfVar10[-6] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                  pfVar12[-6] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                  fVar1 = pfVar10[-3];
                  fVar2 = pfVar12[-3];
                  pfVar10[-3] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                  pfVar12[-3] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                  fVar1 = *pfVar10;
                  fVar2 = *pfVar12;
                  *pfVar10 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                  *pfVar12 = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                  fVar1 = pfVar10[3];
                  fVar2 = pfVar12[3];
                  pfVar10[3] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                  pfVar12[3] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                  pfVar10 = pfVar10 + 0xc;
                  pfVar12 = pfVar12 + 0xc;
                } while (iVar14 != 0);
              }
              if (iVar8 < iVar9) {
                iVar14 = (iVar17 - iVar8) + -1;
                pfVar10 = param_1 + iVar9 + iVar8 * 3;
                pfVar12 = param_1 + iVar15 + iVar8 * 3;
                do {
                  fVar1 = *pfVar10;
                  fVar2 = *pfVar12;
                  iVar14 = iVar14 + -1;
                  *pfVar10 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                  *pfVar12 = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                  pfVar10 = pfVar10 + 3;
                  pfVar12 = pfVar12 + 3;
                } while (iVar14 != 0);
              }
              if (iVar17 < iVar15) {
                iVar9 = iVar17;
                if (3 < local_38 + -4 + iVar15 + 1) {
                  iVar8 = (((iVar15 + 1) - iVar17) - 5U >> 2) + 1;
                  iVar9 = iVar17 + iVar8 * 4;
                  pfVar10 = param_1 + local_48 + iVar17 + 2;
                  pfVar12 = param_1 + local_48 + iVar15 + 9;
                  do {
                    fVar1 = pfVar10[-2];
                    fVar2 = pfVar12[-6];
                    iVar8 = iVar8 + -1;
                    pfVar10[-2] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    pfVar12[-6] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    fVar1 = pfVar10[-1];
                    fVar2 = pfVar12[-3];
                    pfVar10[-1] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    pfVar12[-3] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    fVar1 = *pfVar10;
                    fVar2 = *pfVar12;
                    *pfVar10 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    *pfVar12 = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    fVar1 = pfVar10[1];
                    fVar2 = pfVar12[3];
                    pfVar10[1] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    pfVar12[3] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    pfVar10 = pfVar10 + 4;
                    pfVar12 = pfVar12 + 0xc;
                  } while (iVar8 != 0);
                }
                if (iVar9 < iVar15) {
                  iVar8 = iVar15 - iVar9;
                  pfVar10 = param_1 + local_48 + iVar9;
                  pfVar12 = param_1 + iVar15 + iVar9 * 3;
                  do {
                    fVar1 = *pfVar10;
                    fVar2 = *pfVar12;
                    iVar8 = iVar8 + -1;
                    *pfVar10 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    *pfVar12 = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    pfVar10 = pfVar10 + 1;
                    pfVar12 = pfVar12 + 3;
                  } while (iVar8 != 0);
                }
              }
              iVar9 = iVar15 + 1;
              if (iVar9 < 3) {
                if (3 < local_30) {
                  iVar8 = iVar9 + local_40;
                  iVar14 = (-iVar9 - 1U >> 2) + 1;
                  iVar9 = iVar9 + iVar14 * 4;
                  pfVar10 = local_50 + 3;
                  pfVar12 = param_1 + iVar8 + 2;
                  do {
                    fVar1 = pfVar10[-2];
                    fVar2 = pfVar12[-2];
                    iVar14 = iVar14 + -1;
                    pfVar10[-2] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    pfVar12[-2] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    fVar1 = pfVar10[-1];
                    fVar2 = pfVar12[-1];
                    pfVar10[-1] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    pfVar12[-1] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    fVar1 = *pfVar10;
                    fVar2 = *pfVar12;
                    *pfVar10 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    *pfVar12 = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    fVar1 = pfVar10[1];
                    fVar2 = pfVar12[1];
                    pfVar10[1] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    pfVar12[1] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    pfVar10 = pfVar10 + 4;
                    pfVar12 = pfVar12 + 4;
                  } while (iVar14 != 0);
                }
                if (iVar9 < 3) {
                  iVar8 = 3 - iVar9;
                  pfVar10 = param_1 + local_48 + iVar9;
                  pfVar12 = param_1 + local_40 + iVar9;
                  do {
                    fVar1 = *pfVar10;
                    fVar2 = *pfVar12;
                    iVar8 = iVar8 + -1;
                    *pfVar10 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
                    *pfVar12 = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
                    pfVar10 = pfVar10 + 1;
                    pfVar12 = pfVar12 + 1;
                  } while (iVar8 != 0);
                }
              }
              fVar1 = local_44[-6];
              fVar2 = pfVar6[-5];
              local_44[-6] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
              pfVar6[-5] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
              fVar1 = local_44[-3];
              fVar2 = pfVar6[-2];
              local_44[-3] = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
              pfVar6[-2] = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
              fVar1 = *local_44;
              fVar2 = *local_3c;
              *local_44 = fVar1 - (fVar1 * fVar4 + fVar2) * fVar5;
              *local_3c = (fVar1 - fVar2 * fVar4) * fVar5 + fVar2;
            }
          }
          else {
            *local_50 = 0.0;
          }
          local_50 = local_50 + 1;
          iVar15 = iVar15 + 1;
          pfVar6 = local_3c;
        } while (iVar15 < 3);
      }
      local_38 = local_38 + -1;
      local_44 = local_44 + 1;
      local_48 = local_48 + 3;
      pfVar11 = pfVar11 + 1;
      bVar3 = iVar17 < 2;
      iVar17 = iVar17 + 1;
    } while (bVar3);
    iVar17 = 0;
    do {
      pfVar11 = (float *)((int)local_18 + iVar17 + 0xc);
      fVar4 = *(float *)((int)local_18 + iVar17) + *pfVar11;
      iVar15 = iVar17 + 4;
      *pfVar11 = fVar4;
      *(float *)(((int)param_3 - (int)(local_18 + 3)) + (int)pfVar11) = fVar4;
      *(undefined4 *)((int)local_18 + iVar17) = 0;
      iVar17 = iVar15;
    } while (iVar15 < 0xc);
    local_34 = local_34 + 1;
  } while (local_34 < 0x32);
  return 0;
}

// 00A05D20  FUN_00a05d20  size=78  [callgraph]
float10 FUN_00a05d20(float *param_1,float *param_2,float *param_3)

{
  return ABS(((((float10)param_3[1] * (float10)*param_2 * (float10)param_1[2] +
               (float10)*param_1 * (float10)param_2[1] * (float10)param_3[2] +
               (float10)*param_3 * (float10)param_2[2] * (float10)param_1[1]) -
              (float10)param_3[1] * (float10)param_2[2] * (float10)*param_1) -
             (float10)param_3[2] * (float10)*param_2 * (float10)param_1[1]) -
             (float10)param_2[1] * (float10)param_3[2] * (float10)param_1[2]) * (float10)0.16666667;
}

// 00A05D90  FUN_00a05d90  size=75  [callgraph]
void FUN_00a05d90(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00dd4940(iVar1);
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00dd4940(*(int *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 00A05E40  FUN_00a05e40  size=53  [callgraph]
void FUN_00a05e40(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}

// 00A05EB0  FUN_00a05eb0  size=76  [callgraph]
void FUN_00a05eb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 8);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 8) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00A05F30  FUN_00a05f30  size=40  [callgraph]
void FUN_00a05f30(int param_1)

{
  if (*(char *)(param_1 + 0x44) != '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00dd4940(*(int *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return;
}

// 00A05F60  FUN_00a05f60  size=61  [callgraph]
void FUN_00a05f60(int *param_1)

{
  if ((char)param_1[4] != '\0') {
    if (*param_1 != 0) {
      FUN_00dd4940(*param_1);
    }
    if (param_1[2] != 0) {
      FUN_00dd4940(param_1[2]);
    }
    *param_1 = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

// 00A05FA0  FUN_00a05fa0  size=38  [callgraph]
void FUN_00a05fa0(int *param_1)

{
  if ((char)param_1[2] != '\0') {
    if (*param_1 != 0) {
      FUN_00dd4940(*param_1);
      *param_1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

// 00A06470  FUN_00a06470  size=152  [callgraph]
void __fastcall FUN_00a06470(undefined4 *param_1)

{
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return;
}

// 00A06520  FUN_00a06520  size=84  [callgraph]
int __fastcall FUN_00a06520(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *param_1;
  while( true ) {
    if (iVar2 + -1 < 0) {
      iVar2 = FUN_00dd5650(&DAT_0165c5bc);
      return iVar2;
    }
    LOCK();
    iVar1 = *param_1;
    bVar3 = iVar2 == iVar1;
    if (bVar3) {
      *param_1 = iVar2 + -1;
      iVar1 = iVar2;
    }
    UNLOCK();
    if (bVar3) break;
    iVar2 = *param_1;
  }
  return iVar1;
}

// 00A066B0  FUN_00a066b0  size=180  [callgraph]
void __fastcall FUN_00a066b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

// 00A06770  FUN_00a06770  size=389  [callgraph]
void __fastcall FUN_00a06770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x5c) + iVar3;
        if (*(char *)(iVar1 + 0x15) == '\0') {
          FUN_00a05d90(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < *(int *)(param_1 + 0x60));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x80)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x7c) + iVar3;
        if ((*(char *)(iVar1 + 0x45) == '\0') && (*(char *)(iVar1 + 0x44) != '\0')) {
          if (*(int *)(iVar1 + 0x30) != 0) {
            FUN_00dd4940(*(int *)(iVar1 + 0x30));
            *(undefined4 *)(iVar1 + 0x30) = 0;
          }
          *(undefined1 *)(iVar1 + 0x44) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x50;
      } while (iVar2 < *(int *)(param_1 + 0x80));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x7c));
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x90)) {
      iVar3 = 0;
      do {
        piVar4 = (int *)(*(int *)(param_1 + 0x8c) + iVar3);
        if ((*(char *)((int)piVar4 + 0x11) == '\0') && ((char)piVar4[4] != '\0')) {
          if (*piVar4 != 0) {
            FUN_00dd4940(*piVar4);
          }
          if (piVar4[2] != 0) {
            FUN_00dd4940(piVar4[2]);
          }
          *piVar4 = 0;
          piVar4[2] = 0;
          *(undefined1 *)(piVar4 + 4) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *(int *)(param_1 + 0x90));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar3 = 0;
      do {
        piVar4 = (int *)(*(int *)(param_1 + 0xb4) + iVar3);
        if ((*(char *)((int)piVar4 + 9) == '\0') && ((char)piVar4[2] != '\0')) {
          if (*piVar4 != 0) {
            FUN_00dd4940(*piVar4);
            *piVar4 = 0;
          }
          *(undefined1 *)(piVar4 + 2) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 0xb8));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0xb4));
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}

// 00A06900  FUN_00a06900  size=19  [callgraph]
void __thiscall FUN_00a06900(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xf8);
  return;
}

// 00A06920  FUN_00a06920  size=78  [callgraph]
void __thiscall FUN_00a06920(undefined4 *param_1,int param_2)

{
  *param_1 = *(undefined4 *)(param_2 + 0xb0);
  param_1[1] = *(undefined4 *)(param_2 + 0xb4);
  param_1[2] = *(undefined4 *)(param_2 + 0xb8);
  param_1[3] = *(undefined4 *)(param_2 + 0xbc);
  param_1[4] = *(undefined4 *)(param_2 + 0x90);
  param_1[5] = *(undefined4 *)(param_2 + 0x94);
  param_1[6] = *(undefined4 *)(param_2 + 0x98);
  param_1[7] = *(undefined4 *)(param_2 + 0x9c);
  return;
}

// 00A06970  FUN_00a06970  size=225  [callgraph]
void __thiscall FUN_00a06970(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x78);
  fVar3 = -3.4028235e+38;
  fVar1 = 3.4028235e+38;
  fVar6 = 3.4028235e+38;
  fVar2 = 3.4028235e+38;
  fVar4 = -3.4028235e+38;
  fVar5 = -3.4028235e+38;
  if (0 < iVar9) {
    pfVar8 = *(float **)(param_1 + 0x74);
    pfVar7 = pfVar8 + 6;
    do {
      if (pfVar7[-2] < fVar6) {
        fVar6 = pfVar7[-2];
      }
      if (pfVar7[-1] < fVar2) {
        fVar2 = pfVar7[-1];
      }
      if (*pfVar7 < fVar1) {
        fVar1 = *pfVar7;
      }
      if (fVar5 <= *pfVar8) {
        fVar5 = *pfVar8;
      }
      if (fVar3 <= pfVar7[-5]) {
        fVar3 = pfVar7[-5];
      }
      if (fVar4 <= pfVar7[-4]) {
        fVar4 = pfVar7[-4];
      }
      pfVar8 = pfVar8 + 0x14;
      pfVar7 = pfVar7 + 0x14;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  fVar5 = (fVar5 - fVar6) * 0.5;
  *param_3 = fVar5;
  param_3[1] = (fVar3 - fVar2) * 0.5;
  param_3[2] = (fVar4 - fVar1) * 0.5;
  *param_2 = fVar5 + fVar6;
  param_2[1] = fVar2 + param_3[1];
  param_2[2] = fVar1 + param_3[2];
  param_3[3] = 1.0;
  param_2[3] = 1.0;
  return;
}

// 00A06AB0  FUN_00a06ab0  size=81  [callgraph]
undefined4 __thiscall FUN_00a06ab0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x60))) {
    iVar1 = *(int *)(param_1 + 0x5c) + param_3 * 0x18;
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + param_3 * 0x18);
    param_2[1] = *(undefined4 *)(iVar1 + 4);
    param_2[2] = *(undefined4 *)(iVar1 + 8);
    param_2[3] = *(undefined4 *)(iVar1 + 0xc);
    param_2[4] = *(undefined4 *)(iVar1 + 0x10);
    param_2[5] = *(undefined4 *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    return 1;
  }
  return 0;
}

// 00A06B50  FUN_00a06b50  size=81  [callgraph]
undefined4 __thiscall FUN_00a06b50(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x90))) {
    iVar1 = *(int *)(param_1 + 0x8c) + param_3 * 0x14;
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + param_3 * 0x14);
    param_2[1] = *(undefined4 *)(iVar1 + 4);
    param_2[2] = *(undefined4 *)(iVar1 + 8);
    param_2[3] = *(undefined4 *)(iVar1 + 0xc);
    param_2[4] = *(undefined4 *)(iVar1 + 0x10);
    *(undefined1 *)(iVar1 + 0x10) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    return 1;
  }
  return 0;
}

// 00A06C00  FUN_00a06c00  size=182  [callgraph]
void __fastcall FUN_00a06c00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar1 = 0;
    do {
      if (*(char *)(*(int *)(param_1 + 0x5c) + 0x16 + iVar1) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x14 + iVar1) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 0x60));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    iVar1 = 0;
    do {
      if (*(char *)(*(int *)(param_1 + 0xb4) + 10 + iVar1) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0xb4) + 8 + iVar1) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0xb8));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    iVar1 = 0;
    do {
      if (*(char *)(*(int *)(param_1 + 0x7c) + 0x46 + iVar1) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0x44 + iVar1) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x50;
    } while (iVar2 < *(int *)(param_1 + 0x80));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    iVar1 = 0;
    do {
      if (*(char *)(*(int *)(param_1 + 0x8c) + 0x12 + iVar1) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x10 + iVar1) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 0x90));
  }
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
  return;
}

// 00A06CD0  FUN_00a06cd0  size=219  [callgraph]
void __fastcall FUN_00a06cd0(undefined4 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x1b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x37] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 00A06DB0  FUN_00a06db0  size=18  [callgraph]
void __fastcall FUN_00a06db0(int param_1)

{
  if (*(LONG **)(param_1 + 0xf8) != (LONG *)0x0) {
    InterlockedIncrement(*(LONG **)(param_1 + 0xf8));
  }
  return;
}

// 00A06DE0  FUN_00a06de0  size=89  [callgraph]
undefined2 __thiscall FUN_00a06de0(int param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    return 0xfff;
  }
  uVar3 = (uint)param_2;
  uVar1 = *(ushort *)(iVar2 + ((int)uVar3 >> 8 & 0xfU) * 2);
  if ((uVar1 != 0xffff) &&
     (uVar1 = *(ushort *)(iVar2 + (((int)uVar3 >> 4 & 0xfU) + (uint)uVar1) * 2), uVar1 != 0xffff)) {
    return *(undefined2 *)(iVar2 + ((uVar3 & 0xf) + (uint)uVar1) * 2);
  }
  return 0xfff;
}

// 00A06E70  FUN_00a06e70  size=79  [callgraph]
undefined4 __thiscall FUN_00a06e70(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x44))) &&
     (iVar3 = param_3 * 0x20 + *(int *)(param_1 + 0x40), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    *param_2 = *(undefined4 *)(iVar3 + 8);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = 0x3f800000;
    return 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return 0;
}

// 00A06EC0  FUN_00a06ec0  size=79  [callgraph]
undefined4 __thiscall FUN_00a06ec0(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x44))) &&
     (iVar3 = param_3 * 0x20 + *(int *)(param_1 + 0x40), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x18);
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
    *param_2 = *(undefined4 *)(iVar3 + 0x14);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = 0x3f800000;
    return 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return 0;
}

