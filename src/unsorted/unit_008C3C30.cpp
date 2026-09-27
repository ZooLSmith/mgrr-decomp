// src/unsorted/unit_008C3C30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008C3C30..008C6070, 5 functions

#include "mgrr.h"

// 008C3C30  FUN_008c3c30  size=59  [run]
void FUN_008c3c30(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int *)(uVar1 + 0x2f4) == 0) {
    FUN_008b7300(param_1);
  }
  return;
}

// 008C3C70  FUN_008c3c70  size=8656  [run]
/* WARNING: Removing unreachable block (ram,0x008c417f) */
/* WARNING: Removing unreachable block (ram,0x008c4181) */
/* WARNING: Removing unreachable block (ram,0x008c4183) */
/* WARNING: Removing unreachable block (ram,0x008c58d7) */
/* WARNING: Removing unreachable block (ram,0x008c5dc4) */
/* WARNING: Removing unreachable block (ram,0x008c4a18) */
/* WARNING: Removing unreachable block (ram,0x008c4a1a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c3c70(undefined4 *param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  undefined4 *puVar10;
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_324 [8];
  float fStack_31c;
  float local_318;
  undefined4 *puStack_314;
  float fStack_310;
  float fStack_30c;
  int *piStack_308;
  undefined4 *puStack_304;
  int *piStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  undefined4 *puStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  undefined4 *puStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  int *piStack_2a8;
  float fStack_2a4;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  int *piStack_278;
  undefined4 *puStack_274;
  int iStack_270;
  uint local_268;
  int iStack_264;
  undefined1 auStack_260 [4];
  float fStack_25c;
  int *piStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined4 *puStack_244;
  float afStack_240 [2];
  int *piStack_238;
  undefined4 *puStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 auStack_204 [32];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float afStack_1b8 [2];
  float fStack_1b0;
  float fStack_1ac;
  int *piStack_1a8;
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [4];
  undefined1 auStack_19c [8];
  float fStack_194;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [144];
  undefined1 auStack_a0 [156];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar19 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar19);
    uVar8 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  piVar11 = *(int **)(uVar8 + 0x5e0);
  local_268 = uVar8;
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar19 = &DAT_01b35b90;
    (**(code **)(*piVar11 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar19);
    piVar11 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar11);
  }
  pfVar1 = (float *)(uVar8 + 0x550);
  *pfVar1 = 0.0;
  local_2f8 = (float)(uVar8 + 0x590);
  *(undefined4 *)(uVar8 + 0x554) = 0;
  *(undefined4 *)(uVar8 + 0x558) = 0;
  *(undefined4 *)(uVar8 + 0x55c) = 0x3f800000;
  *(undefined4 *)(uVar8 + 0x59c) = 0;
  fVar9 = *(float *)(uVar8 + 0x574) * 1.2;
  local_318 = (float)piVar11[0x13c];
  uVar17 = 0x3f490fdb;
  iVar4 = (**(code **)(*piVar11 + 0x84))(0x3f490fdb,fVar9);
  FUN_00c4d770(local_2f8,local_318,*(undefined4 *)(iVar4 + 4),uVar17,fVar9);
  local_318 = (float)(uVar8 + 0x5a4);
  *(undefined4 *)(uVar8 + 0x5b0) = 0;
  fVar9 = *(float *)(uVar8 + 0x574) * 1.2;
  fStack_2f4 = (float)piVar11[0x13c];
  uVar17 = 0x3f490fdb;
  iVar4 = (**(code **)(*piVar11 + 0x84))(0x3f490fdb,fVar9);
  FUN_00c58b60(local_318,fStack_2f4,*(undefined4 *)(iVar4 + 4),uVar17,fVar9);
  fStack_2f4 = (float)(uVar8 + 0x5b8);
  *(undefined4 *)(uVar8 + 0x5c4) = 0;
  iStack_264 = piVar11[0x13c];
  fVar9 = *(float *)(uVar8 + 0x574) * 1.2 * 30.0;
  uVar17 = 0x3f490fdb;
  iVar4 = (**(code **)(*piVar11 + 0x84))(0x3f490fdb,fVar9);
  FUN_00c58e90(fStack_2f4,iStack_264,*(undefined4 *)(iVar4 + 4),uVar17,fVar9);
  iStack_264 = 0;
  iVar4 = FUN_00a7f600(0x2070a);
  if ((iVar4 != 0) && (piStack_2fc = (int *)FUN_00a7c8a0(), piStack_2fc != (int *)0x0)) {
    puVar19 = &DAT_01b351c0;
    (**(code **)(*piStack_2fc + 4))(&DAT_01b351c0);
    iVar4 = FUN_00dd6d80(puVar19);
    if ((iVar4 != 0) && (iVar4 = FUN_00a8cbe0(0x20016), iVar4 != 0)) {
      iStack_264 = 1;
    }
  }
  fVar12 = -(float10)_DAT_01bea3b0;
  fStack_294 = (float)fVar12;
  fStack_2c4 = (_DAT_01bea3b4 + 3.1415927) - 0.17453292;
  if ((float10)35.0 < (float10)57.29578 * fVar12) {
    fVar12 = (float10)FUN_00ddba30(0x3f1c61aa);
    fStack_294 = (float)fVar12;
  }
  if ((float10)57.29578 * fVar12 < (float10)-40.0) {
    fVar12 = (float10)FUN_00ddba30(0xbf32b8c2);
    fStack_294 = (float)fVar12;
  }
  fStack_1e4 = (float)fVar12;
  if ((DAT_01bea094 & 0x200000) != 0) goto LAB_008c5e1e;
  piStack_2fc = (int *)FUN_00a7f600(0x20200);
  iVar4 = FUN_00a7f600(0x2020a);
  if ((piStack_2fc == (int *)0x0) && (iVar4 == 0)) {
    iVar4 = (**(code **)(*piVar11 + 0x84))();
    fStack_2c4 = *(float *)(iVar4 + 4);
  }
  iVar4 = FUN_00a12290(0xffffffff);
  if (iVar4 == 0) {
    fStack_2e0 = (float)piVar11[0x10];
    fStack_2dc = (float)piVar11[0x11];
    fStack_2d8 = (float)piVar11[0x12];
    puStack_2d4 = (undefined4 *)piVar11[0x13];
  }
  else {
    fStack_2e0 = *(float *)(iVar4 + 0x40);
    fStack_2dc = *(float *)(iVar4 + 0x44);
    fStack_2d8 = *(float *)(iVar4 + 0x48);
    puStack_2d4 = *(undefined4 **)(iVar4 + 0x4c);
  }
  puStack_314 = (undefined4 *)FUN_00c4ec80();
  iVar4 = FUN_00b7b200();
  if ((iVar4 == 0) ||
     (iVar4 = FUN_00b7b200(), fVar9 = *(float *)(iVar4 + 0x40) - fStack_2e0,
     fVar2 = *(float *)(iVar4 + 0x44) - fStack_2dc, fVar6 = *(float *)(iVar4 + 0x48) - fStack_2d8,
     *(float *)(uVar8 + 0x574) * 1.2 <= SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar9 * fVar9))) {
    if ((puStack_314 != (undefined4 *)0x0) &&
       ((puStack_314[0x14] != 0 && (iVar4 = FUN_00a81330(), iVar4 != 0)))) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        FUN_00a81330();
        piStack_2fc = (int *)FUN_00a7c8a0();
        if ((piStack_2fc != (int *)0x0) &&
           ((piStack_2fc[0xcc] == 0 || (*(int *)(piStack_2fc[0xcc] + 0xcc) < 1)))) {
          FUN_004fc8e0(&fStack_2c0,piStack_2fc,0xffffffff);
          FUN_00c15010(&fStack_2c0);
          fVar12 = (float10)fStack_2c0 - (float10)fStack_2e0;
          fVar13 = (float10)fStack_2b8 - (float10)fStack_2d8;
          fVar14 = (float10)fpatan(fVar12,fVar13);
          fStack_2c4 = (float)fVar14;
          if (SQRT(((float10)fStack_2bc - (float10)fStack_2dc) *
                   ((float10)fStack_2bc - (float10)fStack_2dc) + fVar12 * fVar12 + fVar13 * fVar13)
              < (float10)*(float *)(uVar8 + 0x574) * (float10)1.2 + (float10)(float)puStack_314[6])
          {
            *pfVar1 = fStack_2c0;
            *(float *)(uVar8 + 0x554) = fStack_2bc;
            *(float *)(uVar8 + 0x558) = fStack_2b8;
            *(float *)(uVar8 + 0x55c) = fStack_2b4;
            if (piStack_2fc[0x1bf] < 1) {
              iVar4 = FUN_00a12210(piStack_2fc[0x1b1]);
              fStack_310 = (float)piStack_2fc[0x1b4];
              fStack_30c = (float)piStack_2fc[0x1b5];
              piStack_308 = (int *)piStack_2fc[0x1b6];
              puStack_304 = (undefined4 *)piStack_2fc[0x1b7];
              D3DXVec3TransformNormal(&fStack_310,&fStack_310,iVar4 + 0x10);
              fVar9 = *(float *)(iVar4 + 0x44);
              fVar6 = *(float *)(iVar4 + 0x48);
              fVar2 = *(float *)(iVar4 + 0x4c);
              *pfVar1 = *(float *)(iVar4 + 0x40) + fStack_310;
              *(float *)(uVar8 + 0x554) = fVar9 + fStack_30c;
              *(float *)(uVar8 + 0x558) = fVar6 + (float)piStack_308;
              *(float *)(uVar8 + 0x55c) = fVar2 + (float)puStack_304;
            }
            else {
              fStack_2f4 = (float)FUN_00a12210(0xffffffff);
              local_318 = (float)piVar11[0x13c];
              fStack_2f0 = 0.0;
              fStack_2ec = 1.35;
              fStack_2e8 = 0.0;
              uVar20 = 0x3f490fdb;
              iVar4 = (**(code **)(*piVar11 + 0x84))(0x3f490fdb);
              uVar17 = *(undefined4 *)(iVar4 + 4);
              iVar5 = FUN_00f98aa0(local_318,uVar17);
              fVar9 = (float)iVar5 * 0.5;
              iVar4 = (int)local_318;
              local_318 = (float)iVar5;
              fVar6 = (float)FUN_00f98a90(fVar9);
              iVar4 = (int)local_318;
              local_318 = fVar6;
              iVar4 = FUN_00a866a0(piVar11 + 0x10,&fStack_2f4,&fStack_2f0,&fStack_310,
                                   (float)(int)fVar6 * 0.5,fVar9,iVar4,uVar17,uVar20);
              if (iVar4 < 0) {
                *pfVar1 = 0.0;
                *(undefined4 *)(uVar8 + 0x554) = 0;
                *(undefined4 *)(uVar8 + 0x558) = 0;
                *(undefined4 *)(uVar8 + 0x55c) = 0x3f800000;
              }
              else {
                *pfVar1 = fStack_310;
                *(float *)(uVar8 + 0x554) = fStack_30c;
                *(int **)(uVar8 + 0x558) = piStack_308;
                *(undefined4 **)(uVar8 + 0x55c) = puStack_304;
              }
            }
          }
        }
        goto LAB_008c5319;
      }
    }
    if (*(int *)(uVar8 + 0x59c) < 1) {
      iVar4 = FUN_00a81330();
      if (iVar4 == 0) {
        if (*(int *)(uVar8 + 0x5c4) < 1) {
          if (*(int *)(uVar8 + 0x5b0) < 1) {
            local_318 = (float)piVar11[0x13c];
            fVar9 = *(float *)(uVar8 + 0x574) * 1.2;
            uVar21 = 1;
            uVar18 = 0;
            uVar16 = 0;
            uVar15 = 1;
            uVar20 = 0;
            uVar17 = 0x3f860a92;
            iVar4 = (**(code **)(*piVar11 + 0x84))(0x3f860a92,fVar9,0,1,0,0,1);
            iVar4 = FUN_00c25110(local_318,*(undefined4 *)(iVar4 + 4),uVar17,fVar9,uVar20,uVar15,
                                 uVar16,uVar18,uVar21);
            if (((((iVar4 != 0) &&
                  (puStack_314 = (undefined4 *)FUN_00a7c8a0(), puStack_314 != (undefined4 *)0x0)) &&
                 (iVar4 = puStack_314[0xcc], iVar4 != 0)) &&
                ((*(int *)(iVar4 + 0xcc) < 1 && (iVar4 != 0)))) && (*(int *)(iVar4 + 0xcc) == 0)) {
              FUN_004fc8e0(&fStack_310,puStack_314,0xffffffff);
              if ((int)puStack_314[0x1bf] < 1) {
                iVar4 = puStack_314[0x1b1];
                if (iVar4 < 1) {
                  if (SQRT(((float)piStack_308 - fStack_2d8) * ((float)piStack_308 - fStack_2d8) +
                           (fStack_30c - fStack_2dc) * (fStack_30c - fStack_2dc) +
                           (fStack_310 - fStack_2e0) * (fStack_310 - fStack_2e0)) <
                      *(float *)(uVar8 + 0x574) * 1.2) {
                    pfVar7 = (float *)FUN_00a926e0(auStack_260);
                    fVar2 = *pfVar7 * 1.35 + fStack_310;
                    fVar6 = pfVar7[1] * 1.35 + fStack_30c;
                    fVar9 = pfVar7[2] * 1.35 + (float)piStack_308;
                    puVar10 = (undefined4 *)(pfVar7[3] * 1.35 + (float)puStack_304);
                    goto LAB_008c4c97;
                  }
                  goto LAB_008c4ca6;
                }
                goto LAB_008c4b9f;
              }
              fStack_2f4 = (float)FUN_00a12210(0xffffffff);
              iVar4 = piVar11[0x13c];
              fStack_280 = 0.0;
              fStack_27c = 1.35;
              piStack_278 = (int *)0x0;
              uVar20 = 0x3f490fdb;
              iVar5 = (**(code **)(*piVar11 + 0x84))(0x3f490fdb);
              uVar17 = *(undefined4 *)(iVar5 + 4);
              local_318 = (float)FUN_00f98aa0(iVar4,uVar17);
              fVar9 = (float)(int)local_318 * 0.5;
              local_318 = (float)FUN_00f98a90(fVar9);
              iVar4 = FUN_00a866a0(piVar11 + 0x10,&fStack_2f4,&fStack_280,&fStack_2f0,
                                   (float)(int)local_318 * 0.5,fVar9,iVar4,uVar17,uVar20);
              if (iVar4 < 0) {
                *pfVar1 = 0.0;
                *(undefined4 *)(uVar8 + 0x554) = 0;
                *(undefined4 *)(uVar8 + 0x558) = 0;
                puVar10 = (undefined4 *)0x3f800000;
              }
              else {
                *pfVar1 = fStack_2f0;
                *(float *)(uVar8 + 0x554) = fStack_2ec;
                *(float *)(uVar8 + 0x558) = fStack_2e8;
                puVar10 = puStack_2e4;
              }
              goto LAB_008c4ca3;
            }
            local_318 = 100.0;
            fStack_310 = 0.0;
            fStack_30c = 0.0;
            piStack_308 = (int *)0x0;
            iVar4 = FUN_00c51830();
            puVar10 = *(undefined4 **)(iVar4 + 4);
            puStack_314 = puVar10 + *(int *)(iVar4 + 0xc);
            if (puVar10 != puStack_314) {
              do {
                uVar17 = FUN_00c518c0(auStack_130,*puVar10);
                FUN_00a7c940(uVar17);
                iVar4 = FUN_00a81330();
                if ((iVar4 != 0) && (local_2f8 = (float)FUN_00a7c8a0(), local_2f8 != 0.0)) {
                  iVar4 = FUN_00c518c0(auStack_130,*puVar10);
                  local_2f8 = (float)FUN_00a12210(*(undefined4 *)(iVar4 + 8));
                  if (local_2f8 != 0.0) {
                    FUN_00c518c0(auStack_a0,*puVar10);
                    iVar4 = FUN_00c518c0(auStack_a0,*puVar10);
                    fStack_290 = *(float *)(iVar4 + 0x20);
                    fStack_28c = *(float *)(iVar4 + 0x24);
                    fStack_288 = *(float *)(iVar4 + 0x28);
                    FID_conflict__memcpy(&fStack_1e0,(void *)((int)local_2f8 + 0x10),0x40);
                    fStack_280 = fStack_1b0;
                    fStack_27c = fStack_1ac;
                    piStack_278 = piStack_1a8;
                    fStack_2b0 = SQRT(fStack_1d8 * fStack_1d8 +
                                      fStack_1e0 * fStack_1e0 + fStack_1dc * fStack_1dc);
                    fStack_2ac = SQRT(fStack_1c8 * fStack_1c8 +
                                      fStack_1d0 * fStack_1d0 + fStack_1cc * fStack_1cc);
                    fVar9 = SQRT(afStack_1b8[0] * afStack_1b8[0] +
                                 fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
                    local_2f8 = fStack_1c8 / fVar9;
                    piStack_2fc = (int *)(afStack_1b8[0] / fVar9);
                    fVar12 = (float10)FUN_00ddbaa0(-(fStack_1d8 / fVar9));
                    fVar13 = (float10)fpatan((float10)local_2f8,(float10)(float)piStack_2fc);
                    fStack_2f0 = (float)fVar13;
                    fStack_2ec = (float)fVar12;
                    fVar12 = (float10)fpatan((float10)fStack_1dc / (float10)fStack_2ac,
                                             (float10)fStack_1e0 / (float10)fStack_2b0);
                    fStack_2e8 = (float)fVar12;
                    afStack_240[0] = 0.0;
                    afStack_240[1] = 0.0;
                    piStack_238 = (int *)0x3f800000;
                    FUN_00ddc1d0(&uStack_230,&fStack_2f0,5);
                    D3DXVec3TransformNormal(auStack_140,afStack_240,&uStack_230);
                    fStack_25c = 1.0;
                    piStack_258 = (int *)0x0;
                    fStack_254 = 0.0;
                    FUN_00ddc1d0(afStack_240 + 1,&piStack_2fc,5);
                    D3DXVec3TransformNormal(auStack_19c,&fStack_25c,afStack_240 + 1);
                    piStack_278 = (int *)0x0;
                    puStack_274 = (undefined4 *)0x3f800000;
                    iStack_270 = 0;
                    FUN_00ddc1d0(&fStack_248,&piStack_308,5);
                    D3DXVec3TransformNormal(afStack_1b8,&piStack_278,&fStack_248);
                    uStack_21c = 0;
                    uStack_220 = 0;
                    uStack_224 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    puStack_234 = (undefined4 *)0x0;
                    piStack_238 = (int *)0x0;
                    afStack_240[1] = 0.0;
                    puStack_244 = (undefined4 *)0x0;
                    fStack_248 = 0.0;
                    fStack_24c = 0.0;
                    fStack_250 = 0.0;
                    uStack_218 = 0x3f800000;
                    uStack_22c = 0x3f800000;
                    afStack_240[0] = 1.0;
                    fStack_254 = 1.0;
                    if (fStack_2ac != 0.0) {
                      D3DXMatrixRotationZ(auStack_1a4,fStack_2ac);
                      D3DXMatrixMultiply(&fStack_25c,&fStack_1ac,&fStack_25c);
                    }
                    if (fStack_2b0 != 0.0) {
                      D3DXMatrixRotationY(auStack_1a4,fStack_2b0);
                      D3DXMatrixMultiply(&fStack_25c,&fStack_1ac,&fStack_25c);
                    }
                    if (fStack_2b4 != 0.0) {
                      D3DXMatrixRotationX(auStack_1a4,fStack_2b4);
                      D3DXMatrixMultiply(&fStack_25c,&fStack_1ac,&fStack_25c);
                    }
                    D3DXMatrixMultiply(auStack_204,&fStack_254,auStack_204);
                    fStack_2e0 = SQRT(fStack_1d8 * fStack_1d8 +
                                      fStack_1e0 * fStack_1e0 + fStack_1dc * fStack_1dc);
                    fStack_2dc = SQRT(fStack_1c8 * fStack_1c8 +
                                      fStack_1d0 * fStack_1d0 + fStack_1cc * fStack_1cc);
                    fVar9 = SQRT(afStack_1b8[0] * afStack_1b8[0] +
                                 fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
                    local_2f8 = fStack_1c8 / fVar9;
                    piStack_2fc = (int *)(afStack_1b8[0] / fVar9);
                    fVar12 = (float10)FUN_00ddbaa0(-(fStack_1d8 / fVar9));
                    fVar13 = (float10)fpatan((float10)local_2f8,(float10)(float)piStack_2fc);
                    fStack_2f0 = (float)fVar13;
                    fStack_2ec = (float)fVar12;
                    fVar12 = (float10)fpatan((float10)fStack_1dc / (float10)fStack_2dc,
                                             (float10)fStack_1e0 / (float10)fStack_2e0);
                    fStack_2e8 = (float)fVar12;
                    if (SQRT((fStack_280 - (float)piVar11[0x10]) *
                             (fStack_280 - (float)piVar11[0x10]) +
                             (fStack_27c - (float)piVar11[0x11]) *
                             (fStack_27c - (float)piVar11[0x11]) +
                             ((float)piStack_278 - (float)piVar11[0x12]) *
                             ((float)piStack_278 - (float)piVar11[0x12])) < local_318) {
                      local_318 = SQRT((fStack_280 - (float)piVar11[0x10]) *
                                       (fStack_280 - (float)piVar11[0x10]) +
                                       (fStack_27c - (float)piVar11[0x11]) *
                                       (fStack_27c - (float)piVar11[0x11]) +
                                       ((float)piStack_278 - (float)piVar11[0x12]) *
                                       ((float)piStack_278 - (float)piVar11[0x12]));
                      fStack_310 = fStack_280;
                      fStack_30c = fStack_27c;
                      piStack_308 = piStack_278;
                    }
                  }
                }
                puVar10 = puVar10 + 1;
              } while (puVar10 != puStack_314);
              if (((fStack_310 != 0.0) || (fStack_30c != 0.0)) || ((float)piStack_308 != 0.0)) {
                if (_DAT_01d61920 <= 0.0) {
                  iVar4 = FUN_00a12210(0);
                  puVar19 = (undefined *)(iVar4 + 0x10);
                }
                else {
                  puVar19 = &DAT_01d618e0;
                }
                fVar12 = (float10)fpatan((float10)fStack_30c - (float10)*(float *)(puVar19 + 0x34),
                                         SQRT(((float10)(float)piStack_308 -
                                              (float10)*(float *)(puVar19 + 0x38)) *
                                              ((float10)(float)piStack_308 -
                                              (float10)*(float *)(puVar19 + 0x38)) +
                                              ((float10)fStack_310 -
                                              (float10)*(float *)(puVar19 + 0x30)) *
                                              ((float10)fStack_310 -
                                              (float10)*(float *)(puVar19 + 0x30))));
                fStack_294 = (float)(fVar12 * (float10)-1.0);
              }
            }
          }
          else {
            fVar9 = *(float *)(uVar8 + 0x5a8);
            local_318 = (float)(*(int *)((int)local_318 + 0xc) * 0x70 + *(int *)((int)local_318 + 4)
                               );
            if (fVar9 != local_318) {
              do {
                FUN_00c15010(&fStack_2c0);
                fVar12 = (float10)fpatan((float10)fStack_2c0 - (float10)fStack_2e0,
                                         (float10)fStack_2b8 - (float10)fStack_2d8);
                fStack_2c4 = (float)fVar12;
                *pfVar1 = fStack_2c0;
                *(float *)(uVar8 + 0x554) = fStack_2bc;
                *(float *)(uVar8 + 0x558) = fStack_2b8;
                *(float *)(uVar8 + 0x55c) = fStack_2b4;
                iVar4 = FUN_00c152b0();
                if (iVar4 != 0) {
                  *pfVar1 = fStack_2e0;
                  *(float *)(uVar8 + 0x554) = fStack_2dc;
                  *(float *)(uVar8 + 0x558) = fStack_2d8;
                  *(undefined4 **)(uVar8 + 0x55c) = puStack_2d4;
                }
                fVar9 = (float)((int)fVar9 + 0x70);
              } while (fVar9 != local_318);
            }
          }
        }
        else {
          fVar9 = *(float *)(uVar8 + 0x5bc);
          local_318 = (float)(*(int *)((int)fStack_2f4 + 0xc) * 0x70 + *(int *)((int)fStack_2f4 + 4)
                             );
          if (fVar9 != local_318) {
            do {
              FUN_00c15010(&fStack_2c0);
              fStack_2bc = (float)piVar11[0x11];
              fVar12 = (float10)fpatan((float10)fStack_2c0 - (float10)fStack_2e0,
                                       (float10)fStack_2b8 - (float10)fStack_2d8);
              fStack_2c4 = (float)fVar12;
              FUN_00c15010(&fStack_2c0);
              *pfVar1 = fStack_2c0;
              fVar9 = (float)((int)fVar9 + 0x70);
              *(float *)(uVar8 + 0x554) = fStack_2bc;
              *(float *)(uVar8 + 0x558) = fStack_2b8;
              *(float *)(uVar8 + 0x55c) = fStack_2b4;
            } while (fVar9 != local_318);
          }
        }
      }
      else {
        FUN_00a81330();
        pfVar7 = (float *)FUN_00a7c8b0();
        fStack_2c0 = *pfVar7;
        fStack_2b8 = pfVar7[2];
        fStack_2b4 = pfVar7[3];
        fStack_2bc = (float)piVar11[0x11];
        fVar12 = (float10)fpatan((float10)fStack_2c0 - (float10)fStack_2e0,
                                 (float10)fStack_2b8 - (float10)fStack_2d8);
        fStack_2c4 = (float)fVar12;
        *pfVar1 = fStack_2e0;
        *(float *)(uVar8 + 0x554) = fStack_2dc;
        *(float *)(uVar8 + 0x558) = fStack_2d8;
        *(undefined4 **)(uVar8 + 0x55c) = puStack_2d4;
      }
    }
    else {
      fVar9 = *(float *)(uVar8 + 0x594);
      local_318 = (float)(*(int *)((int)local_2f8 + 0xc) * 0x70 + *(int *)((int)local_2f8 + 4));
      if (fVar9 != local_318) {
        do {
          FUN_00c15010(&fStack_2c0);
          fVar9 = (float)((int)fVar9 + 0x70);
          fVar12 = (float10)fpatan((float10)fStack_2c0 - (float10)fStack_2e0,
                                   (float10)fStack_2b8 - (float10)fStack_2d8);
          fStack_2c4 = (float)fVar12;
          *pfVar1 = fStack_2c0;
          *(float *)(uVar8 + 0x554) = fStack_2bc;
          *(float *)(uVar8 + 0x558) = fStack_2b8;
          *(float *)(uVar8 + 0x55c) = fStack_2b4;
        } while (fVar9 != local_318);
      }
    }
  }
  else {
    puStack_314 = (undefined4 *)FUN_00b7b200();
    if (((puStack_314 != (undefined4 *)0x0) && (iVar4 = puStack_314[0xcc], iVar4 != 0)) &&
       ((*(int *)(iVar4 + 0xcc) < 1 &&
        (((iVar4 != 0 && (*(int *)(iVar4 + 0xcc) == 0)) &&
         (iVar4 = FUN_0093e3a0(puStack_314[0x147]), iVar4 == 0)))))) {
      FUN_004fc8e0(&fStack_2c0,puStack_314,0xffffffff);
      if ((int)puStack_314[0x1bf] < 1) {
        iVar4 = puStack_314[0x1b1];
        if (0 < iVar4) {
LAB_008c4b9f:
          iVar4 = FUN_00a12210(iVar4);
          fStack_310 = (float)puStack_314[0x1b4];
          fStack_30c = (float)puStack_314[0x1b5];
          piStack_308 = (int *)puStack_314[0x1b6];
          puStack_304 = (undefined4 *)puStack_314[0x1b7];
          D3DXVec3TransformNormal(&fStack_310,&fStack_310,iVar4 + 0x10);
          fVar6 = *(float *)(iVar4 + 0x44);
          fVar9 = *(float *)(iVar4 + 0x48) + (float)piStack_308;
          puVar10 = (undefined4 *)(*(float *)(iVar4 + 0x4c) + (float)puStack_304);
          *pfVar1 = *(float *)(iVar4 + 0x40) + fStack_310;
          *(float *)(uVar8 + 0x554) = fVar6 + fStack_30c;
LAB_008c4ca0:
          *(float *)(uVar8 + 0x558) = fVar9;
          goto LAB_008c4ca3;
        }
        if (SQRT((fStack_2b8 - fStack_2d8) * (fStack_2b8 - fStack_2d8) +
                 (fStack_2bc - fStack_2dc) * (fStack_2bc - fStack_2dc) +
                 (fStack_2c0 - fStack_2e0) * (fStack_2c0 - fStack_2e0)) <
            *(float *)(uVar8 + 0x574) * 1.2) {
          if (puStack_314[0x12d] == 0x28120) {
            iVar4 = FUN_00a12210(0);
            *pfVar1 = *(float *)(iVar4 + 0x40);
            *(undefined4 *)(uVar8 + 0x554) = *(undefined4 *)(iVar4 + 0x44);
            *(undefined4 *)(uVar8 + 0x558) = *(undefined4 *)(iVar4 + 0x48);
            puVar10 = *(undefined4 **)(iVar4 + 0x4c);
            goto LAB_008c4ca3;
          }
          pfVar7 = (float *)FUN_00a926e0(auStack_260);
          fVar2 = *pfVar7 * 1.35 + fStack_2c0;
          fVar6 = pfVar7[1] * 1.35 + fStack_2bc;
          fVar9 = pfVar7[2] * 1.35 + fStack_2b8;
          puVar10 = (undefined4 *)(pfVar7[3] * 1.35 + fStack_2b4);
LAB_008c4c97:
          *pfVar1 = fVar2;
          *(float *)(uVar8 + 0x554) = fVar6;
          goto LAB_008c4ca0;
        }
      }
      else {
        fStack_2f4 = (float)FUN_00a12210(0xffffffff);
        fStack_290 = 0.0;
        iVar4 = piVar11[0x13c];
        fStack_28c = 1.35;
        fStack_288 = 0.0;
        uVar20 = 0x3f490fdb;
        iVar5 = (**(code **)(*piVar11 + 0x84))(0x3f490fdb);
        uVar17 = *(undefined4 *)(iVar5 + 4);
        local_318 = (float)FUN_00f98aa0(iVar4,uVar17);
        fVar9 = (float)(int)local_318 * 0.5;
        local_318 = (float)FUN_00f98a90(fVar9);
        iVar4 = FUN_00a866a0(piVar11 + 0x10,&fStack_2f4,&fStack_290,&fStack_310,
                             (float)(int)local_318 * 0.5,fVar9,iVar4,uVar17,uVar20);
        if (iVar4 < 0) {
          *pfVar1 = 0.0;
          *(undefined4 *)(uVar8 + 0x554) = 0;
          *(undefined4 *)(uVar8 + 0x558) = 0;
          puVar10 = (undefined4 *)0x3f800000;
        }
        else {
          *pfVar1 = fStack_310;
          *(float *)(uVar8 + 0x554) = fStack_30c;
          *(int **)(uVar8 + 0x558) = piStack_308;
          puVar10 = puStack_304;
        }
LAB_008c4ca3:
        *(undefined4 **)(uVar8 + 0x55c) = puVar10;
      }
LAB_008c4ca6:
      if (((*pfVar1 != 0.0) || (*(float *)(uVar8 + 0x554) != 0.0)) ||
         (*(float *)(uVar8 + 0x558) != 0.0)) {
        fVar12 = (float10)fpatan((float10)*pfVar1 - (float10)fStack_2e0,
                                 (float10)*(float *)(uVar8 + 0x558) - (float10)fStack_2d8);
        fStack_2c4 = (float)fVar12;
      }
    }
  }
LAB_008c5319:
  iVar4 = FUN_00606950();
  if (iVar4 != 0) {
    *pfVar1 = 0.0;
    *(undefined4 *)(uVar8 + 0x554) = 0;
    *(undefined4 *)(uVar8 + 0x558) = 0;
    *(undefined4 *)(uVar8 + 0x55c) = 0x3f800000;
    iVar4 = (**(code **)(*piVar11 + 0x84))();
    fStack_2c4 = *(float *)(iVar4 + 4);
    pfVar7 = (float *)(**(code **)(*piVar11 + 0x84))();
    fStack_294 = *pfVar7;
    iVar4 = FUN_00a12210(0xffffffff);
    if (iVar4 != 0) {
      fVar9 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                   *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                   *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
      local_318 = *(float *)(iVar4 + 0x28) / fVar9;
      fStack_2f4 = *(float *)(iVar4 + 0x38) / fVar9;
      FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar9));
      fVar12 = (float10)fpatan((float10)local_318,(float10)fStack_2f4);
      fStack_294 = (float)fVar12;
    }
    iVar4 = FUN_00a12210(0);
    if (iVar4 != 0) {
      fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) /
                                      SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                                           *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                                           *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30))));
      fStack_2c4 = (float)fVar12;
    }
  }
  uVar3 = local_268;
  if ((((*pfVar1 != 0.0) || (*(float *)(uVar8 + 0x554) != 0.0)) ||
      (*(float *)(uVar8 + 0x558) != 0.0)) &&
     (((fVar6 = *(float *)(uVar8 + 0x554) - (float)piVar11[0x11],
       fVar9 = *(float *)(uVar8 + 0x558) - (float)piVar11[0x12],
       SQRT(fVar9 * fVar9 +
            fVar6 * fVar6 + (*pfVar1 - (float)piVar11[0x10]) * (*pfVar1 - (float)piVar11[0x10])) <
       4.0 && (*(int *)(local_268 + 0x188) == 0)) && (iVar4 = FUN_008b7810(param_1), iVar4 != 0))))
  {
    fStack_2e0 = (float)piVar11[0x10];
    fStack_2dc = (float)piVar11[0x11];
    fStack_2d8 = (float)piVar11[0x12];
    puStack_2d4 = (undefined4 *)piVar11[0x13];
    puStack_244 = *(undefined4 **)(uVar8 + 0x55c);
    fStack_2f4 = *pfVar1 - fStack_2e0;
    local_2f8 = 0.0;
    piStack_2fc = (int *)(*(float *)(uVar8 + 0x558) - fStack_2d8);
    puStack_314 = (undefined4 *)
                  SQRT((float)piStack_2fc * (float)piStack_2fc + fStack_2f4 * fStack_2f4 + 0.0);
    fStack_2ac = 0.0;
    fStack_2a4 = (float)puStack_244 - (float)puStack_2d4;
    local_318 = fStack_2dc;
    fStack_2b0 = fStack_2f4;
    piStack_2a8 = piStack_2fc;
    if ((fStack_2f4 != 0.0) || ((float)piStack_2fc != 0.0)) {
      fVar9 = (float)piStack_2fc * (float)piStack_2fc + fStack_2f4 * fStack_2f4 + 0.0;
      piStack_258 = piStack_2fc;
      if (fVar9 < 0.0 == (fVar9 == 0.0)) {
        FUN_00ddf460(&fStack_2b0,&fStack_2b0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_2b0 = 0.0;
        fStack_2ac = 1.0;
        piStack_2a8 = (int *)0x0;
      }
    }
    fVar9 = (float)puStack_314 - *(float *)(uVar3 + 0x574) * 0.8;
    fStack_25c = fStack_2ac * fVar9;
    piStack_258 = (int *)((float)piStack_2a8 * fVar9);
    fStack_24c = fStack_25c + fStack_2dc;
    puStack_244 = (undefined4 *)(fVar9 * fStack_2a4 + (float)puStack_2d4);
    fStack_2ec = fStack_2dc + 1.5;
    puStack_2e4 = (undefined4 *)(fStack_194 + (float)puStack_2d4);
    fStack_2f4 = (fStack_2b0 * fVar9 + fStack_2e0) - fStack_2e0;
    local_2f8 = fStack_24c - fStack_2ec;
    piStack_2fc = (int *)(((float)piStack_258 + fStack_2d8) - fStack_2d8);
    puStack_314 = (undefined4 *)((float)puStack_244 - (float)puStack_2e4);
    fStack_2f0 = fStack_2e0;
    fStack_2e8 = fStack_2d8;
    fStack_2dc = fStack_2ec;
    puStack_2d4 = puStack_2e4;
    fStack_280 = fStack_2f4;
    fStack_27c = local_2f8;
    piStack_278 = piStack_2fc;
    puStack_274 = puStack_314;
    if (((fStack_2f4 != 0.0) || (local_2f8 != 0.0)) || ((float)piStack_2fc != 0.0)) {
      fVar9 = (float)piStack_2fc * (float)piStack_2fc +
              fStack_2f4 * fStack_2f4 + local_2f8 * local_2f8;
      if (fVar9 < 0.0 == (fVar9 == 0.0)) {
        FUN_00ddf460(&fStack_280,&fStack_280);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_280 = 0.0;
        fStack_27c = 1.0;
        piStack_278 = (int *)0x0;
      }
    }
    fVar9 = *(float *)(local_268 + 0x574);
    piStack_258 = (int *)((float)piStack_278 * fVar9);
    fStack_310 = fStack_280 * fVar9 + fStack_2f0;
    fStack_30c = fStack_27c * fVar9 + fStack_2ec;
    piStack_308 = (int *)((float)piStack_258 + fStack_2e8);
    puStack_304 = (undefined4 *)((float)puStack_2e4 + (float)puStack_274 * fVar9);
    uVar17 = FUN_00410130(6,0xffffffff,0,0,0);
    FUN_00445d40(&fStack_2e0,&fStack_310,uVar17,0,0x60,0,"zangekiReadyPosCheck1",0);
    iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(afStack_240,auStack_1a0,0,0,auStack_180);
    if (iVar4 == 0) {
      fVar9 = SQRT(local_2f8 * local_2f8 + fStack_2f4 * fStack_2f4 +
                   (float)piStack_2fc * (float)piStack_2fc);
      fStack_310 = fStack_2f4;
      fStack_30c = local_2f8;
      piStack_308 = piStack_2fc;
      puStack_304 = puStack_314;
      if (((fStack_2f4 != 0.0) || (local_2f8 != 0.0)) || ((float)piStack_2fc != 0.0)) {
        fVar6 = (float)piStack_2fc * (float)piStack_2fc +
                fStack_2f4 * fStack_2f4 + local_2f8 * local_2f8;
        fStack_2f4 = fVar9;
        if (fVar6 < 0.0 == (fVar6 == 0.0)) {
          FUN_00ddf460(&fStack_310,&fStack_310);
          fVar9 = fStack_2f4;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_310 = 0.0;
          fStack_30c = 1.0;
          piStack_308 = (int *)0x0;
          fVar9 = fStack_2f4;
        }
      }
      fStack_2f4 = fVar9;
      fVar9 = fStack_2f4 - *(float *)(local_268 + 0x574) * 0.6;
      fStack_28c = fStack_30c * fVar9 + fStack_2ec;
      piStack_258 = (int *)((float)piStack_308 * fVar9 + fStack_2e8);
      fStack_254 = fVar9 * (float)puStack_304 + (float)puStack_2e4;
      fStack_2ec = fStack_2ec + 1.5;
      puStack_2e4 = (undefined4 *)(fStack_194 + (float)puStack_2e4);
      fStack_2e0 = fStack_2f0;
      fStack_2d8 = fStack_2e8;
      fStack_290 = (fStack_310 * fVar9 + fStack_2f0) - fStack_2f0;
      fStack_28c = fStack_28c - fStack_2ec;
      fStack_288 = (float)piStack_258 - fStack_2e8;
      fStack_284 = fStack_254 - (float)puStack_2e4;
      fStack_2dc = fStack_2ec;
      puStack_2d4 = puStack_2e4;
      if (((fStack_290 != 0.0) || (fStack_28c != 0.0)) || (fStack_288 != 0.0)) {
        fVar9 = fStack_288 * fStack_288 + fStack_290 * fStack_290 + fStack_28c * fStack_28c;
        if (fVar9 < 0.0 == (fVar9 == 0.0)) {
          FUN_00ddf460(&fStack_290,&fStack_290);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_290 = 0.0;
          fStack_28c = 1.0;
          fStack_288 = 0.0;
        }
      }
      fVar9 = *(float *)(local_268 + 0x574);
      piStack_258 = (int *)(fStack_288 * fVar9);
      fStack_2f0 = fStack_2f0 + fVar9 * fStack_290;
      fStack_2ec = fStack_2ec + fStack_28c * fVar9;
      fStack_2e8 = (float)piStack_258 + fStack_2e8;
      puStack_2e4 = (undefined4 *)(fStack_284 * fVar9 + (float)puStack_2e4);
      FUN_00445d40(&fStack_2e0,&fStack_2f0,uVar17,0,0x60,0,"zangekiReadyPosCheck2",0);
      iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_250,auStack_190,0,0,&uStack_230);
      if (iVar4 == 0) goto LAB_008c5c81;
      pfVar7 = &fStack_2f0;
      fStack_2f0 = fStack_250;
      fStack_2e8 = fStack_248;
      puStack_2e4 = puStack_244;
      fStack_2ec = local_318;
    }
    else {
      pfVar7 = &fStack_310;
      fStack_310 = afStack_240[0];
      piStack_308 = piStack_238;
      puStack_304 = puStack_234;
      fStack_30c = local_318;
    }
    (**(code **)(*piVar11 + 0x6c))(pfVar7);
  }
LAB_008c5c81:
  if (((*pfVar1 != 0.0) || (*(float *)(uVar8 + 0x554) != 0.0)) || (*(float *)(uVar8 + 0x558) != 0.0)
     ) {
    piStack_2fc = (int *)0x0;
    local_318 = 0.0;
    fStack_310 = (float)piVar11[0x10];
    fStack_30c = (float)piVar11[0x11];
    piStack_308 = (int *)piVar11[0x12];
    puStack_304 = (undefined4 *)piVar11[0x13];
    fStack_2f0 = 0.0;
    fStack_2ec = 1.0;
    fStack_2e8 = 0.0;
    D3DXVec3TransformNormal(&fStack_2f0,&fStack_2f0,piVar11 + 4);
    fStack_31c = (float)piStack_2fc * 1.35 + fStack_31c;
    local_318 = local_2f8 * 1.35 + local_318;
    puStack_314 = (undefined4 *)(fStack_2f4 * 1.35 + (float)puStack_314);
    fStack_310 = fStack_2f0 * 1.35 + fStack_310;
    thunk_FUN_00dde510(&piStack_308,auStack_324,pfVar1,&fStack_31c);
    FUN_00b8bbb0(uStack_2d0);
    if (iStack_270 != 0) {
      piStack_308 = (int *)((float)piStack_308 + 0.17453292);
    }
    FUN_00b8bb40(-(float)piStack_308);
    return;
  }
  if (iStack_264 != 0) {
    fStack_294 = fStack_1e4 - 0.34906584;
  }
LAB_008c5e1e:
  FUN_00b8bbb0(fStack_2c4);
  FUN_00b8bb40(fStack_294);
  return;
}

// 008C5E50  FUN_008c5e50  size=322  [run]
void FUN_008c5e50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  if ((*(int *)(uVar4 + 0x528) != 0) &&
     ((*(int *)(uVar4 + 0x530) != 0 || (*(int *)(uVar4 + 0x52c) != 0)))) {
    FUN_004039a0(0,uVar3,0);
    FUN_00dffb30(uVar4 + 400);
    FUN_00e03080(*(undefined4 *)(uVar3 + 0x4f0),0);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00e03080(iVar2,1);
    }
    FUN_00a8c8b0(0x11500,local_160);
    return;
  }
  FUN_004039a0(2,uVar3,0);
  FUN_00dffb30(uVar4 + 400);
  FUN_00e03080(*(undefined4 *)(uVar3 + 0x4f0),0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  FUN_00a8c8b0(0x11500,local_160);
  return;
}

// 008C5FA0  FUN_008c5fa0  size=203  [run]
void FUN_008c5fa0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  iVar2 = FUN_00b8c220();
  if (iVar2 != 0) {
    FUN_004039a0(0,uVar3,0);
    FUN_00dffb30(uVar4 + 0x240);
    FUN_00a8c930(0,local_160);
    return;
  }
  FUN_004039a0(2,uVar3,0);
  FUN_00dffb30(uVar4 + 0x240);
  FUN_00a8c930(0,local_160);
  return;
}

// 008C6070  FUN_008c6070  size=153  [run]
void FUN_008c6070(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_160 [348];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
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
  FUN_004039a0(10,uVar3,0);
  FUN_00dffb30(uVar4 + 0x600);
  FUN_00a8c8b0(*(undefined4 *)(uVar3 + 0x4b0),local_160);
  return;
}

