// lib/havok/unit_00AE78B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AE78B0..00AE78B0, 1 functions

#include "types.h"

// 00AE78B0  hkpAllCdPointCollector::hkpAllCdPointCollector_35  size=1496  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_35(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  float10 fVar17;
  undefined4 uVar18;
  float fStack_1d8;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1b4;
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  uint uStack_198;
  undefined1 auStack_190 [396];
  
  fVar17 = (float10)(**(code **)(*param_1 + 0x24))();
  fStack_1d8 = 100.0;
  fStack_1cc = 0.0;
  fStack_1c8 = 12.0;
  if (param_1[0x24c] == 0x30) {
    fStack_1d8 = 80.0;
    fStack_1cc = 0.0015;
    fStack_1c8 = 8.0;
  }
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_00ae4b80();
    param_1[0x2fc] = 0x42700000;
    param_1[0x42c] = param_1[0x248];
    param_1[0x42d] = param_1[0x249];
    param_1[0x42e] = param_1[0x24a];
    param_1[0x42f] = param_1[0x24b];
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
  case 1:
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar5 = (float)param_1[0x2fc] - (float)fVar17;
    param_1[0x2fc] = (int)fVar5;
    if (fVar5 < 0.0) {
      param_1[0x186] = 2;
      FUN_00a9d8a0();
      (**(code **)(*param_1 + 0x20))();
    }
    break;
  case 2:
    param_1[0x186] = 3;
    param_1[0x414] = param_1[0x14];
    param_1[0x415] = param_1[0x15];
    param_1[0x416] = param_1[0x16];
    param_1[0x417] = param_1[0x17];
    FUN_0043e160(param_1 + 0x250);
    param_1[0x3d0] = 1;
    param_1[0x414] = param_1[0x14];
    param_1[0x415] = param_1[0x15];
    param_1[0x416] = param_1[0x16];
    param_1[0x417] = param_1[0x17];
    param_1[0x41b] = 1;
    param_1[0x418] = (int)fStack_1c8;
    param_1[0x41f] = 0;
    param_1[0x3d9] = param_1[0x255];
    param_1[0x419] = 0x3f000000;
    param_1[0x41a] = (int)((fStack_1c8 - 0.5) / fStack_1d8);
    param_1[0x41c] = (int)(fStack_1d8 - 2.0);
    uVar13 = FUN_00a7c7f0();
    FUN_00a7c960(uVar13);
    param_1[0x41e] = param_1[0x2e7];
    param_1[0x41d] = 2;
    iVar16 = Behavior::createAttackImpactWave(param_1 + 0x3d0);
    param_1[0x2fc] = (int)(fStack_1d8 - 2.0);
    param_1[0x3c6] = iVar16;
    uVar13 = 5;
    if (param_1[0x24c] == 0x30) {
      uVar13 = 9;
    }
    uVar18 = 0;
    uVar14 = FUN_00a7c8a0(0);
    FUN_004039a0(uVar13,uVar14,uVar18);
    FUN_00dffb20(param_1 + 0x36c);
    FUN_00a8c8b0(param_1[300],&ppuStack_1b0);
  case 3:
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar5 = (float)param_1[0x2fc] - (float)fVar17;
    param_1[0x2fc] = (int)fVar5;
    if (fVar5 < 0.0) {
      param_1[0x186] = 4;
    }
    break;
  case 4:
    param_1[0x186] = 5;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00602dc0(param_1[0x3c6]);
    param_1[0x3c6] = 0;
    goto LAB_00ae7bcf;
  case 5:
LAB_00ae7bcf:
    if (param_1[0x392] == 0) {
      param_1[0x2fc] = 0x42f00000;
      param_1[0x186] = 6;
      param_1[0x3c4] = 1;
      param_1[0x139] = 1;
      FUN_00acc2f0(0x42f00000,0);
    }
  }
  FUN_004066f0();
  if (param_1[0x421] != 0) {
    Phantom::setTransform(param_1 + 4);
  }
  if (param_1[0x425] != 0) {
    Phantom::setTransform(param_1 + 4);
  }
  if ((param_1[0x186] < 2) && (param_1[0x425] != 0)) {
    puStack_1a0 = auStack_190;
    uStack_1ac = 0x7f7fffee;
    ppuStack_1b0 = vftable;
    uStack_198 = 0x80000008;
    iStack_19c = 0;
    FUN_00900350(&ppuStack_1b0);
    if ((0 < iStack_19c) && (iVar16 = 0, 0 < iStack_19c)) {
      iVar15 = 0;
      do {
        fVar5 = *(float *)(puStack_1a0 + iVar15 + 0x1c);
        pfVar3 = (float *)(puStack_1a0 + iVar15 + 0x10);
        fVar6 = *pfVar3;
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        pfVar4 = (float *)(puStack_1a0 + iVar15 + 0x10);
        pfVar3 = (float *)(puStack_1a0 + iVar15);
        fVar10 = pfVar3[1];
        fVar11 = pfVar3[2];
        fVar12 = pfVar3[3];
        pfVar2 = (float *)(puStack_1a0 + iVar15);
        *pfVar2 = fVar5 * fVar6 + *pfVar3;
        pfVar2[1] = fVar5 * fVar7 + fVar10;
        pfVar2[2] = fVar5 * fVar8 + fVar11;
        pfVar2[3] = fVar5 * fVar9 + fVar12;
        *pfVar4 = -fVar6;
        pfVar4[1] = -fVar7;
        pfVar4[2] = -fVar8;
        pfVar4[3] = fVar9;
        fVar5 = pfVar4[3];
        iVar16 = iVar16 + 1;
        fVar6 = pfVar4[1];
        iVar15 = iVar15 + 0x30;
        fVar7 = pfVar4[2];
        fStack_1b4 = fStack_1b4 * fVar5;
        fVar8 = (float)param_1[0x3c8] * 0.01;
        param_1[0x42c] = (int)(fVar8 * *pfVar4 * fVar5 + (float)param_1[0x42c]);
        param_1[0x42d] = (int)(fVar8 * fVar6 * fVar5 + (float)param_1[0x42d]);
        param_1[0x42e] = (int)((float)param_1[0x42e] + fVar8 * fVar7 * fVar5);
        param_1[0x42f] = (int)((float)param_1[0x42f] + fStack_1b4);
      } while (iVar16 < iStack_19c);
    }
    ppuStack_1b0 = vftable;
    iStack_19c = 0;
    if (-1 < (int)uStack_198) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_1a0,(uStack_198 & 0x3fffffff) * 0x30);
    }
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  if (param_1[0x186] < 2) {
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x42c]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x42d]);
    param_1[0x16] = (int)((float)param_1[0x42e] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x42f] + (float)param_1[0x17]);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar17 = (float10)FUN_00fdc1f0();
    param_1[0x42c] = (int)(float)((float10)(float)param_1[0x42c] * fVar17);
    param_1[0x42d] = (int)(float)(fVar17 * (float10)(float)param_1[0x42d]);
    param_1[0x42e] = (int)(float)((float10)(float)param_1[0x42e] * fVar17);
    param_1[0x42f] = (int)(float)(fVar17 * (float10)(float)param_1[0x42f]);
    param_1[0x42d] = (int)((float)param_1[0x42d] - fStack_1cc * (float)param_1[0x3c8]);
  }
  return;
}

