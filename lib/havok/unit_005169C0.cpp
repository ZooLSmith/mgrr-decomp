// lib/havok/unit_005169C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005169C0..00516AA0, 2 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 005169C0  hkpAllCdPointCollector::hkpAllCdPointCollector_14  size=219  [run]
undefined4 __thiscall hkpAllCdPointCollector::hkpAllCdPointCollector_14(int param_1,float *param_2)

{
  int iVar1;
  undefined4 local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_190 [396];
  
  local_1ac = 0x7f7fffee;
  local_1c0 = 0;
  local_1a0 = local_190;
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  local_1bc = ((*param_2 + *(float *)(param_1 + 0xef4)) - *(float *)(param_1 + 0x44)) - 3.0;
  local_1b8 = 0;
  if (local_1bc != 0.0) {
    iVar1 = hkpCdPointCollector::hkpCdPointCollector_14
                      (&local_1c0,&local_1c0,1,&local_1b0,0x3c23d70a);
    if ((iVar1 != 0) && (1.0 <= ABS(*(float *)(param_1 + 0xef4) - local_1bc))) {
      *param_2 = local_1bc - *(float *)(param_1 + 0xef4);
      hkpCdPointCollector::hkpCdPointCollector_4();
      return 1;
    }
    hkpCdPointCollector::hkpCdPointCollector_4();
  }
  return 0;
}

// 00516AA0  hkpAllCdPointCollector::hkpAllCdPointCollector_15  size=1253  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_15(int param_1)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  int iStack_1f8;
  int iStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_190 [396];
  
  if (*(int *)(param_1 + 0x1420) != 0) {
    local_208 = 0.0;
    local_20c = 0.0;
    local_210 = 0.0;
    local_214 = 0;
    local_21c = 0;
    local_220 = 0;
    local_224 = 0;
    local_228 = 0;
    local_230 = 0;
    local_234 = 0;
    local_238 = 0;
    local_23c = 0;
    local_204 = 0x3f800000;
    local_218 = 0x3f800000;
    local_22c = 0x3f800000;
    local_240 = 0x3f800000;
    iVar5 = FUN_00a12210(0);
    local_210 = *(float *)(param_1 + 0x1410);
    local_20c = *(float *)(param_1 + 0x1414);
    local_208 = *(float *)(param_1 + 0x1418);
    D3DXMatrixMultiply(&local_240,&local_240,iVar5 + 0x10);
    FUN_00920c60(&local_240,0,0);
  }
  if (*(int *)(param_1 + 0x1440) != 0) {
    local_208 = 0.0;
    local_20c = 0.0;
    local_210 = 0.0;
    local_214 = 0;
    local_21c = 0;
    local_220 = 0;
    local_224 = 0;
    local_228 = 0;
    local_230 = 0;
    local_234 = 0;
    local_238 = 0;
    local_23c = 0;
    local_204 = 0x3f800000;
    local_218 = 0x3f800000;
    local_22c = 0x3f800000;
    local_240 = 0x3f800000;
    iVar5 = FUN_00a12210(1);
    iVar6 = FUN_00a12210(0);
    local_240 = *(undefined4 *)(iVar6 + 0x10);
    local_23c = *(undefined4 *)(iVar6 + 0x14);
    local_238 = *(undefined4 *)(iVar6 + 0x18);
    local_230 = *(undefined4 *)(iVar6 + 0x20);
    local_22c = *(undefined4 *)(iVar6 + 0x24);
    local_228 = *(undefined4 *)(iVar6 + 0x28);
    local_220 = *(undefined4 *)(iVar6 + 0x30);
    local_21c = *(undefined4 *)(iVar6 + 0x34);
    local_218 = *(undefined4 *)(iVar6 + 0x38);
    local_210 = *(float *)(iVar5 + 0x40) + *(float *)(param_1 + 0x1430);
    local_20c = *(float *)(iVar5 + 0x44) + *(float *)(param_1 + 0x1434);
    local_208 = *(float *)(iVar5 + 0x48) + *(float *)(param_1 + 0x1438);
    FUN_00920c60(&local_240,0,0);
  }
  iVar5 = 0;
  if (((*(int *)(param_1 + 0x1444) != 0) && (*(int *)(param_1 + 0x145c) != 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    FUN_004066f0();
    iVar6 = FUN_00a12210(1);
    Phantom::setTransform(iVar6 + 0x10);
    puStack_1a0 = auStack_190;
    uStack_1ac = 0x7f7fffee;
    ppuStack_1b0 = vftable;
    uStack_198 = 0x80000008;
    iStack_19c = 0;
    FUN_00900350(&ppuStack_1b0);
    if (0 < iStack_19c) {
      iStack_1f8 = 0;
      puVar8 = puStack_1a0;
      do {
        iVar6 = (int)*(char *)(*(int *)(puVar8 + iVar5 + 0x28) + 0x10) +
                *(int *)(puVar8 + iVar5 + 0x28);
        iStack_1f4 = iVar6;
        if (iVar6 != 0) {
          fStack_1f0 = *(float *)(puVar8 + iVar5);
          uStack_1ec = *(undefined4 *)(puVar8 + iVar5 + 4);
          fStack_1e8 = *(float *)(puVar8 + iVar5 + 8);
          iVar7 = FUN_00a12210(1);
          fStack_260 = fStack_1f0 - *(float *)(iVar7 + 0x40);
          fStack_258 = fStack_1e8 - *(float *)(iVar7 + 0x48);
          fStack_254 = fStack_1e4 - *(float *)(iVar7 + 0x4c);
          fStack_25c = 0.0;
          fVar4 = fStack_260 * fStack_260 + fStack_258 * fStack_258;
          if (fVar4 < 0.0 == (fVar4 == 0.0)) {
            FUN_00ddf460(&uStack_1d0,&fStack_260);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            uStack_1d0 = 0;
            uStack_1cc = 0x3f800000;
            uStack_1c8 = 0;
          }
          fVar4 = *(float *)(param_1 + 0x910) * 0.08;
          fStack_260 = fStack_260 * fVar4;
          fStack_25c = fVar4 * fStack_25c;
          fStack_258 = fStack_258 * fVar4;
          fStack_254 = fStack_254 * fVar4;
          iVar7 = *(int *)(puStack_1a0 + iVar5 + 0x28);
          if ((*(char *)(iVar7 + 0x18) == '\x01') &&
             (iVar7 = *(char *)(iVar7 + 0x10) + iVar7, iVar6 = iStack_1f4, iVar7 != 0)) {
            iVar6 = FUN_008f7780(iVar7);
            if ((iVar6 == 0) || (puVar8 = puStack_1a0, *(int *)(iVar6 + 0x4b0) != 0xe0187)) {
              FUN_00918630(iVar7,&fStack_1e0,auStack_1c0);
              fStack_260 = fStack_1e0 + fStack_260;
              fStack_25c = fStack_1dc + fStack_25c;
              fStack_258 = fStack_1d8 + fStack_258;
              fStack_254 = fStack_1d4 + fStack_254;
              FUN_009186d0(iVar7,&fStack_260,auStack_1c0);
              puVar8 = puStack_1a0;
            }
          }
          else {
            uVar2 = *(uint *)(iVar6 + 0xc);
            puVar8 = puStack_1a0;
            if ((uVar2 != 0) && (iVar6 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x28), iVar6 != 0)
               ) {
              pfVar3 = *(float **)(iVar6 + 0xd0);
              fStack_260 = *pfVar3 + fStack_260;
              fStack_25c = fStack_25c + pfVar3[1];
              fStack_258 = pfVar3[2] + fStack_258;
              fStack_254 = fStack_254 + pfVar3[3];
              FUN_008e0c00(&fStack_260);
              puVar8 = puStack_1a0;
            }
          }
        }
        iStack_1f8 = iStack_1f8 + 1;
        iVar5 = iVar5 + 0x30;
      } while (iStack_1f8 < iStack_19c);
    }
    hkpCdPointCollector::hkpCdPointCollector_4();
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

