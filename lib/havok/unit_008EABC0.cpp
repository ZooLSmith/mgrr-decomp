// lib/havok/unit_008EABC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008EABC0..008EB310, 4 functions

#include "mgrr.h"
#include "hkpCdPointCollector.h"

// 008EABC0  hkpCdPointCollector::hkpCdPointCollector_12  size=77  [run]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_12(undefined4 *param_1)

{
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 008EAC10  hkpCdPointCollector::hkpCdPointCollector_13  size=852  [run]
undefined4 __thiscall
hkpCdPointCollector::hkpCdPointCollector_13
          (int param_1,float *param_2,float *param_3,int param_4,undefined ***param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **ppuVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  LPVOID pvVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  float *pfVar17;
  int iVar18;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  undefined **ppuStack_248;
  undefined **ppuStack_244;
  undefined4 uStack_240;
  undefined4 uStack_238;
  undefined1 *puStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_224 [384];
  undefined **appuStack_a4 [23];
  float fStack_48;
  
  FUN_004066f0();
  uVar12 = hkBaseObject::hkBaseObject_240(param_4);
  pvVar13 = TlsGetValue(DAT_01f8fc4c);
  iVar14 = (**(code **)(**(int **)((int)pvVar13 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar14 + 4) = 0x160;
  uVar15 = FUN_008e2620();
  puVar16 = (undefined4 *)hkpSimpleShapePhantom::~hkpSimpleShapePhantom(uVar12,&DAT_01701ca0,uVar15)
  ;
  FUN_01006780("CharacterControl::checkClosestPoints");
  FUN_010060a0();
  if (puVar16 == (undefined4 *)0x0) {
    FUN_00dd5650("CharacterControl::checkSafeSpace pahntom alloc error");
    if (DAT_01885d68 == 1) {
      return 0;
    }
    iVar14 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    hkBaseObject::hkBaseObject_205(&fStack_274,param_2);
    fStack_254 = fStack_274;
    fStack_250 = fStack_270;
    uStack_24c = uStack_26c;
    ppuStack_248 = (undefined **)0x0;
    if (param_4 != 0) {
      if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
        FUN_00860de0();
        hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
        FUN_01269700(appuStack_a4);
        fStack_258 = fStack_48;
        appuStack_a4[0] = hkBaseObject::vftable;
        FUN_00860e40();
        fVar2 = fStack_258;
      }
      else {
        fVar2 = *(float *)(*(int *)(param_1 + 8) + 0x3c);
      }
      fStack_250 = fStack_250 - fVar2;
    }
    puStack_234 = auStack_224;
    uStack_240 = 0x7f7fffee;
    ppuStack_244 = hkpAllCdPointCollector::vftable;
    uStack_22c = 0x80000008;
    uStack_230 = 0;
    if (param_5 == (undefined ***)0x0) {
      param_5 = &ppuStack_244;
    }
    FUN_011a1070(&fStack_254,0);
    FUN_009062b0(puVar16 + 4,*(undefined4 *)(DAT_01885d20 + 0x70),param_5);
    if (0 < (int)param_5[5]) {
      fVar2 = 0.0;
      iVar14 = 0;
      fVar7 = fVar2;
      fVar8 = fVar2;
      fVar9 = fVar2;
      if (0 < (int)param_5[5]) {
        iVar18 = 0;
        do {
          ppuVar6 = param_5[4];
          fVar3 = *(float *)((int)ppuVar6 + iVar18 + 0x1c);
          pfVar17 = (float *)((int)ppuVar6 + iVar18 + 0x10);
          fVar4 = *pfVar17;
          fVar5 = pfVar17[1];
          fVar10 = pfVar17[2];
          fVar11 = pfVar17[3];
          pfVar17 = (float *)((int)ppuVar6 + iVar18);
          *pfVar17 = fVar3 * fVar4 + *pfVar17;
          pfVar17[1] = fVar3 * fVar5 + pfVar17[1];
          pfVar17[2] = fVar3 * fVar10 + pfVar17[2];
          pfVar17[3] = fVar3 * fVar11 + pfVar17[3];
          pfVar17[4] = -fVar4;
          pfVar17[5] = -fVar5;
          pfVar17[6] = -fVar10;
          pfVar17[7] = fVar11;
          fVar3 = pfVar17[7];
          iVar14 = iVar14 + 1;
          fStack_270 = pfVar17[5];
          iVar18 = iVar18 + 0x30;
          fStack_274 = pfVar17[4] * fVar3;
          fStack_268 = fStack_268 * fVar3;
          fVar9 = fStack_274 + fVar9;
          fVar8 = fStack_270 * fVar3 + fVar8;
          fVar7 = pfVar17[6] * fVar3 + fVar7;
          fVar2 = fStack_268 + fVar2;
        } while (iVar14 < (int)param_5[5]);
      }
      if (param_3 != (float *)0x0) {
        fVar3 = param_2[1];
        fVar4 = param_2[2];
        fVar5 = param_2[3];
        *param_3 = *param_2 + fVar9;
        param_3[1] = fVar3 + fVar8;
        param_3[2] = fVar7 + fVar4;
        param_3[3] = fVar5 + fVar2;
      }
      (**(code **)*puVar16)(1);
      ppuStack_248 = hkpAllCdPointCollector::vftable;
      puStack_234 = (undefined1 *)0x0;
      if (-1 < (int)uStack_230) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(uStack_238,(uStack_230 & 0x3fffffff) * 0x30);
      }
      uStack_238 = 0;
      uStack_230 = 0x80000000;
      ppuStack_248 = vftable;
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      return 1;
    }
    (**(code **)*puVar16)(1);
    hkpCdPointCollector_4();
    if (DAT_01885d68 == 1) {
      return 0;
    }
    iVar14 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar1 = (int *)(iVar14 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
  return 0;
}

// 008EAF70  hkpCdPointCollector::hkpCdPointCollector_14  size=928  [run]
undefined4 __thiscall
hkpCdPointCollector::hkpCdPointCollector_14
          (int param_1,float *param_2,float *param_3,undefined4 param_4,undefined ***param_5)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined ***local_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  undefined4 local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  FUN_004066f0();
  local_1a0 = local_190;
  local_1ac = 0x7f7fffee;
  local_1b0 = hkpAllCdPointCollector::vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  if (param_5 == (undefined ***)0x0) {
    local_208 = &local_1b0;
  }
  else {
    local_208 = param_5;
  }
  iVar3 = hkBaseObject::hkBaseObject_240(param_4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_0164b3b4);
    local_1b0 = hkpAllCdPointCollector::vftable;
    local_19c = 0;
    if (-1 < (int)local_198) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
    }
    local_1a0 = (undefined1 *)0x0;
    local_198 = 0x80000000;
    local_1b0 = vftable;
    if (DAT_01885d68 == 1) {
      return 0;
    }
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
  }
  else {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x160);
    *(undefined2 *)(iVar5 + 4) = 0x160;
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      iVar5 = FUN_012696c0();
      iVar5 = iVar5 + 0xa0;
    }
    else {
      iVar5 = FUN_0126f3e0();
      iVar5 = iVar5 + 0xf0;
    }
    uVar6 = FUN_008e2620();
    puVar7 = (undefined4 *)hkpSimpleShapePhantom::~hkpSimpleShapePhantom(iVar3,iVar5,uVar6);
    FUN_01006780("CharacterControl::checkLinearCast");
    FUN_010060a0();
    if (puVar7 != (undefined4 *)0x0) {
      uStack_1d0 = 0x34000000;
      uStack_1cc = 0x34000000;
      fStack_1d4 = (float)puVar7[0x37];
      fStack_1e0 = *param_2 + (float)puVar7[0x34];
      fStack_1dc = param_2[1] + (float)puVar7[0x35];
      fStack_1d8 = (float)puVar7[0x36] + param_2[2];
      fStack_200 = *param_2 + (float)puVar7[0x34];
      fStack_1fc = param_2[1] + (float)puVar7[0x35];
      fStack_1f8 = (float)puVar7[0x36] + param_2[2];
      fStack_1f4 = param_2[3] + fStack_1b4;
      FUN_009062f0(puVar7 + 4,&fStack_1e0,local_208,0);
      if ((int)local_208[5] < 1) {
        if (param_3 != (float *)0x0) {
          hkBaseObject::hkBaseObject_246(&fStack_1f0,&fStack_200);
          *param_3 = fStack_1f0;
          param_3[1] = fStack_1ec;
          param_3[2] = fStack_1e8;
          param_3[3] = fStack_1e4;
        }
        (**(code **)*puVar7)(1);
        hkpCdPointCollector_4();
        FUN_00406760();
        return 0;
      }
      FUN_0112bcf0();
      puVar2 = local_208[4][7];
      fStack_1f0 = (fStack_1e0 - (float)puVar7[0x34]) * (float)puVar2 + (float)puVar7[0x34];
      fStack_1ec = (fStack_1dc - (float)puVar7[0x35]) * (float)puVar2 + (float)puVar7[0x35];
      fStack_1e8 = (fStack_1d8 - (float)puVar7[0x36]) * (float)puVar2 + (float)puVar7[0x36];
      fStack_1e4 = (fStack_1d4 - (float)puVar7[0x37]) * (float)puVar2 + (float)puVar7[0x37];
      if (param_3 != (float *)0x0) {
        fStack_1c0 = fStack_1f0;
        fStack_1bc = fStack_1ec;
        fStack_1b8 = fStack_1e8;
        hkBaseObject::hkBaseObject_246(&fStack_200,&fStack_1c0);
        *param_3 = fStack_200;
        param_3[1] = fStack_1fc;
        param_3[2] = fStack_1f8;
        param_3[3] = fStack_1f4;
      }
      (**(code **)*puVar7)(1);
      hkpCdPointCollector_4();
      FUN_00406760();
      return 1;
    }
    FUN_00dd5650(&DAT_0164b350);
    hkpCdPointCollector_4();
    if (DAT_01885d68 == 1) {
      return 0;
    }
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
  }
  if (((iVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
    return 0;
  }
  return 0;
}

// 008EB310  hkpCdPointCollector::hkpCdPointCollector_11  size=1348  [run]
undefined4 __thiscall
hkpCdPointCollector::hkpCdPointCollector_11(int param_1,float *param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  float10 fVar10;
  int iStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float fStack_27c;
  uint uStack_278;
  int local_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_254;
  undefined1 auStack_250 [4];
  float fStack_24c;
  float local_244;
  undefined **ppuStack_240;
  undefined4 uStack_23c;
  undefined1 *puStack_230;
  int iStack_22c;
  uint uStack_228;
  undefined1 auStack_220 [384];
  undefined **appuStack_a0 [29];
  float fStack_2c;
  
  local_274 = param_1;
  FUN_004066f0();
  pfVar3 = *(float **)(param_1 + 0xd0);
  iVar7 = 0;
  local_2a0 = *pfVar3 * param_3;
  local_298 = pfVar3[2] * param_3;
  local_29c = *(float *)(param_1 + 0xf4) * param_3 * param_3 + pfVar3[1] * param_3;
  local_294 = local_244 + pfVar3[3] * param_3;
  if (*(int *)(param_1 + 0x108) != 0) {
    iVar5 = *(int *)(param_1 + 0xf0);
    D3DXVec3TransformNormal(&local_2a0,&local_2a0,iVar5 + 0xb0);
    local_2a0 = *(float *)(iVar5 + 0xe0) + local_2a0;
    local_29c = *(float *)(iVar5 + 0xe4) + local_29c;
    local_298 = *(float *)(iVar5 + 0xe8) + local_298;
  }
  local_290 = *param_2 + local_2a0;
  local_28c = param_2[1] + local_29c;
  local_288 = local_298 + param_2[2];
  local_284 = param_2[3] + local_294;
  uStack_278 = FUN_008e4f60();
  uStack_23c = 0x7f7fffee;
  puStack_230 = auStack_220;
  ppuStack_240 = hkpAllCdPointCollector::vftable;
  uStack_228 = 0x80000008;
  iStack_22c = 0;
  iVar5 = hkpCdPointCollector_14(&local_290,0,1,&ppuStack_240,0x3c23d70a);
  puVar9 = puStack_230;
  if (iVar5 != 0) {
    if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
      FUN_00860de0();
      hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2();
      FUN_01269700(appuStack_a0);
      fStack_2a4 = fStack_2c;
      appuStack_a0[0] = hkBaseObject::vftable;
      FUN_00860e40();
    }
    else {
      fVar2 = *(float *)(*(int *)(param_1 + 8) + 0x34);
      local_290 = ABS(fVar2);
      local_28c = 0.0;
      local_288 = 0.0;
      local_284 = 0.0;
      if (NAN(local_290) || 1.0 < local_290 == (local_290 == 1.0)) {
        fVar10 = (float10)FUN_00fdc4e0();
        fStack_2a4 = (float)fVar10;
      }
      else if (fVar2 <= 0.0) {
        fStack_2a4 = 3.1415927;
      }
      else {
        fStack_2a4 = 0.0;
      }
    }
    iStack_2a8 = 0;
    fStack_254 = 1.5707964 - fStack_2a4;
    puVar9 = puStack_230;
    if (0 < iStack_22c) {
      do {
        iVar5 = *(int *)(puVar9 + iVar7 + 0x28);
        if ((((*(char *)(iVar5 + 0x18) == '\x01') &&
             (iVar5 = *(char *)(iVar5 + 0x10) + iVar5, iVar5 != 0)) &&
            ((uVar8 = *(uint *)(iVar5 + 0xc), uVar8 == 0 ||
             ((*(uint *)((-(uint)(uVar8 != 0) & uVar8) + 0x30) & 0x40) == 0)))) &&
           (((uVar6 = *(uint *)(iVar5 + 0x2c) & 0x1f, uVar6 != 7 && (uVar6 != 6)) && (uVar6 != 5))))
        {
          local_28c = *(float *)(puVar9 + iVar7 + 0x14);
          local_288 = *(float *)(puVar9 + iVar7 + 0x18);
          local_290 = *(float *)(puVar9 + iVar7 + 0x10);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)((-(uint)(uVar8 != 0) & uVar8) + 0x10);
          }
          if (*(int *)(local_274 + 0x108) == 0) {
            if ((0.0 < local_28c) &&
               ((((uStack_278 & uVar8) != 0 || (uVar8 == 0)) || (uStack_278 == 0)))) {
              fVar4 = local_290 * local_290;
              fVar2 = local_288 * local_288;
              if ((fVar2 + fVar4 == 0.0) ||
                 (fVar10 = (float10)FUN_00ddbb50((local_28c * 0.0 + fVar4 + fVar2) /
                                                 (SQRT(local_28c * local_28c + fVar4 + fVar2) *
                                                 SQRT(fVar2 + fVar4))), puVar9 = puStack_230,
                 (float10)fStack_254 < fVar10)) {
LAB_008eb78b:
                hkpCdPointCollector_4();
                FUN_00406760();
                return 1;
              }
            }
          }
          else {
            D3DXVec3TransformNormal(auStack_250,&local_290,*(int *)(local_274 + 0xf0) + 0xf0);
            puVar9 = puStack_230;
            if ((0.0 < fStack_24c) &&
               ((((uStack_278 & uVar8) != 0 || (uVar8 == 0)) || (uStack_278 == 0)))) {
              fStack_270 = 0.0;
              iVar5 = *(int *)(local_274 + 0xf0);
              fStack_26c = 1.0;
              fStack_268 = 0.0;
              D3DXVec3TransformNormal(&fStack_270,&fStack_270,iVar5 + 0xb0);
              fStack_270 = *(float *)(iVar5 + 0xe0) + fStack_270;
              fStack_26c = *(float *)(iVar5 + 0xe4) + fStack_26c;
              fStack_268 = *(float *)(iVar5 + 0xe8) + fStack_268;
              fStack_27c = local_288 * local_288 + local_28c * local_28c + local_290 * local_290;
              fVar10 = (float10)FUN_00ddbb50((fStack_26c * local_28c + fStack_270 * local_290 +
                                             fStack_268 * local_288) /
                                             (SQRT(fStack_27c) *
                                             SQRT(fStack_268 * fStack_268 +
                                                  fStack_26c * fStack_26c + fStack_270 * fStack_270)
                                             ));
              puVar9 = puStack_230;
              if (fVar10 < (float10)fStack_2a4) goto LAB_008eb78b;
            }
          }
        }
        iStack_2a8 = iStack_2a8 + 1;
        iVar7 = iVar7 + 0x30;
      } while (iStack_2a8 < iStack_22c);
    }
  }
  ppuStack_240 = hkpAllCdPointCollector::vftable;
  iStack_22c = 0;
  if (-1 < (int)uStack_228) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar9,(uStack_228 & 0x3fffffff) * 0x30);
  }
  puStack_230 = (undefined1 *)0x0;
  uStack_228 = 0x80000000;
  ppuStack_240 = vftable;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 0;
}

