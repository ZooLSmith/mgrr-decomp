// lib/havok/unit_00ABBB30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ABBB30..00ABBB30, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00ABBB30  hkpAllCdPointCollector::hkpAllCdPointCollector  size=2963  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  int iStack_440;
  int iStack_43c;
  int iStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  undefined4 uStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  undefined4 uStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3e8;
  float fStack_3e4;
  int iStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  undefined1 auStack_3cc [4];
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  undefined4 uStack_398;
  float fStack_394;
  float fStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 auStack_33c [12];
  undefined1 auStack_330 [24];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined **ppuStack_2c8;
  undefined4 uStack_2c4;
  undefined1 *puStack_2b8;
  int iStack_2b4;
  uint uStack_2b0;
  undefined1 auStack_2a8 [376];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [64];
  int aiStack_68 [25];
  
  iVar8 = FUN_00acae60();
  if ((iVar8 == 0) && (iVar8 = (**(code **)(*param_1 + 0x308))(1,0), iVar8 != 0)) {
    param_1[0x186] = 2;
  }
  iVar8 = FUN_00a81330();
  if (iVar8 != 0) {
    FUN_00a7c8a0();
  }
  D3DXMatrixInverse(auStack_330,0,param_1 + 4);
  D3DXVec3TransformNormal(auStack_3cc,param_1 + 0x2d4,auStack_33c);
  fStack_3d8 = fStack_3d8 + fStack_318;
  fStack_3d4 = fStack_314 + fStack_3d4;
  fStack_3d0 = fStack_310 + fStack_3d0;
  fVar14 = (float10)(**(code **)(*param_1 + 0x24))();
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x2fc] = 0x42f00000;
    param_1[0x186] = 1;
    FUN_00aa5700();
    if (param_1[0x24c] == 0x29) {
      FUN_00acccc0(1);
    }
    else {
      (**(code **)(*param_1 + 0xd8))();
    }
    FUN_008f12d0(4);
    FUN_004066f0();
    fVar5 = (float)param_1[0x248];
    fVar1 = (float)param_1[0x249];
    iStack_440 = param_1[0x24a];
    iStack_43c = param_1[0x24b];
    FUN_0091a620(&stack0xfffffbb8);
    fVar15 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar21 = (float)fVar15;
    fVar15 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    uStack_3f8 = 0xc1200000;
    fStack_3f0 = (float)fVar15;
    fStack_3f4 = fVar21;
    FUN_0091a6d0(&uStack_3f8);
    FUN_00915ef0(0);
    FUN_00915e60(0x43480000);
    iStack_3e0 = iStack_440;
    fStack_3e8 = fVar5;
    fStack_3e4 = fVar1;
    FUN_0091a620(&fStack_3e8);
    param_1[0x360] = 0;
    FUN_00406760();
    param_1[0x365] = 0;
    break;
  case 1:
    break;
  case 2:
    goto switchD_00abbc0c_caseD_2;
  case 3:
    goto switchD_00abbc0c_caseD_3;
  default:
    goto switchD_00abbc0c_default;
  }
  param_1[0x360] = (int)((float)param_1[0x360] + (float)fVar14);
  FUN_0091a5e0(&fStack_3e8);
  if ((short)param_1[0x365] == 0) {
    if (param_1[0x237] != 0) {
      FUN_004066f0();
      iVar8 = FUN_009165d0();
      if ((iVar8 != 0) && (0 < *(int *)(iVar8 + 0x14))) {
        iVar10 = 0;
        iVar24 = 0;
        do {
          fVar5 = *(float *)(iVar24 + 0x14 + *(int *)(iVar8 + 0x10));
          if (0.0 <= *(float *)(iVar24 + *(int *)(iVar8 + 0x10) + 0x1c)) {
            if (0.4 <= fVar5) {
              FUN_00915ef0(0x3f19999a);
              FUN_00915e60(0x41200000);
              *(undefined2 *)(param_1 + 0x365) = 1;
            }
          }
          else if (fVar5 < -0.4 != (fVar5 == -0.4)) {
            FUN_00915ef0(0x3f19999a);
            FUN_00915e60(0x41200000);
            *(undefined2 *)(param_1 + 0x365) = 1;
          }
          iVar13 = *(int *)(iVar24 + 0x28 + *(int *)(iVar8 + 0x10));
          if (*(char *)(iVar13 + 0x18) == '\x02') {
            iVar11 = *(char *)(iVar13 + 0x10) + iVar13;
          }
          else {
            iVar11 = 0;
          }
          if ((((*(char *)(iVar13 + 0x18) == '\x01') &&
               (iVar13 = *(char *)(iVar13 + 0x10) + iVar13, iVar13 != 0)) &&
              (iVar13 = FUN_008f7780(iVar13), iVar13 != 0)) &&
             ((*(byte *)(iVar13 + 0x4c0) & 0x20) != 0)) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          if (((iVar11 != 0) && (iVar13 = FUN_008f7780(iVar11), iVar13 != 0)) &&
             ((*(byte *)(iVar13 + 0x4c0) & 0x20) != 0)) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          iVar24 = iVar24 + 0x30;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar8 + 0x14));
      }
      FUN_00406760();
      goto LAB_00abbf42;
    }
  }
  else {
LAB_00abbf42:
    if (param_1[0x237] != 0) {
      FUN_0091df60(&uStack_388);
      FUN_01005140(aiStack_68);
      piVar9 = aiStack_68;
      piVar12 = param_1 + 4;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar12 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar12 = piVar12 + 1;
      }
      if (param_1[0x238] != 0) {
        D3DXMatrixTranslation(&fStack_3c8,param_1[0x10],param_1[0x11],param_1[0x12]);
        uStack_3f8 = uStack_398;
        fStack_3f4 = fStack_394;
        fStack_3f0 = fStack_390;
        fVar15 = (float10)fStack_3c4;
        fVar16 = (float10)fStack_3c8;
        fVar17 = (float10)fStack_3c0;
        fVar18 = (float10)fStack_3b0;
        fVar19 = (float10)fStack_3a0;
        fVar20 = SQRT(fVar19 * fVar19 +
                      (float10)fStack_3a8 * (float10)fStack_3a8 +
                      (float10)fStack_3a4 * (float10)fStack_3a4);
        fVar19 = (float10)fpatan(fVar18 / fVar20,fVar19 / fVar20);
        fStack_3e8 = (float)fVar19;
        fVar19 = (float10)FUN_00ddbaa0((float)-(fVar17 / fVar20));
        fStack_3e4 = (float)fVar19;
        fVar16 = (float10)fpatan((float10)fStack_3c4 /
                                 (float10)(float)SQRT(fVar18 * fVar18 +
                                                      (float10)fStack_3b8 * (float10)fStack_3b8 +
                                                      (float10)fStack_3b4 * (float10)fStack_3b4),
                                 (float10)fStack_3c8 /
                                 (float10)(float)SQRT(fVar17 * fVar17 +
                                                      fVar16 * fVar16 + fVar15 * fVar15));
        fVar15 = (float10)0;
        fStack_400 = (float)fVar15;
        fStack_404 = (float)fVar15;
        fStack_408 = (float)fVar15;
        fStack_40c = (float)fVar15;
        fStack_414 = (float)fVar15;
        fStack_418 = (float)fVar15;
        fStack_41c = (float)fVar15;
        fStack_420 = (float)fVar15;
        fStack_428 = (float)fVar15;
        fStack_42c = (float)fVar15;
        fStack_430 = (float)fVar15;
        fStack_434 = (float)fVar15;
        uStack_3fc = 0x3f800000;
        uStack_410 = 0x3f800000;
        uStack_424 = 0x3f800000;
        iStack_438 = 0x3f800000;
        if (fVar15 != fVar16) {
          D3DXMatrixRotationZ(auStack_128,(float)fVar16);
          D3DXMatrixMultiply(&iStack_440,auStack_130,&iStack_440);
          fVar19 = (float10)fStack_3e4;
        }
        if ((float10)0 != fVar19) {
          D3DXMatrixRotationY(auStack_a8,(float)fVar19);
          D3DXMatrixMultiply(&iStack_440,auStack_b0,&iStack_440);
        }
        if (fStack_3e8 != 0.0) {
          D3DXMatrixRotationX(auStack_e8,fStack_3e8);
          D3DXMatrixMultiply(&iStack_440,auStack_f0,&iStack_440);
        }
        fStack_408 = (float)uStack_3f8;
        fStack_404 = fStack_3f4;
        fStack_400 = fStack_3f0;
        FUN_01005190(&iStack_438);
        uStack_388 = uStack_308;
        uStack_384 = uStack_304;
        uStack_380 = uStack_300;
        uStack_37c = uStack_2fc;
        uStack_378 = uStack_2f8;
        uStack_374 = uStack_2f4;
        uStack_370 = uStack_2f0;
        uStack_36c = uStack_2ec;
        uStack_368 = uStack_2e8;
        uStack_364 = uStack_2e4;
        uStack_360 = uStack_2e0;
        uStack_35c = uStack_2dc;
        uStack_358 = uStack_2d8;
        uStack_354 = uStack_2d4;
        uStack_350 = uStack_2d0;
        uStack_34c = uStack_2cc;
        FUN_00915780(&uStack_388);
      }
    }
  }
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[0x17] = param_1[0x13];
  fVar5 = (float)param_1[4];
  fVar1 = (float)param_1[5];
  fVar21 = (float)param_1[6];
  fVar2 = (float)param_1[8];
  fVar3 = (float)param_1[9];
  fVar4 = (float)param_1[10];
  fVar7 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
               (float)param_1[0xd] * (float)param_1[0xd] + (float)param_1[0xc] * (float)param_1[0xc]
              );
  fVar22 = (float)param_1[10] / fVar7;
  fVar23 = (float)param_1[0xe] / fVar7;
  fVar15 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar7));
  fVar16 = (float10)fpatan((float10)fVar22,(float10)fVar23);
  param_1[0x24] = (int)(float)fVar16;
  param_1[0x25] = (int)(float)fVar15;
  fVar15 = (float10)fpatan((float10)(float)param_1[5] /
                           (float10)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4),
                           (float10)(float)param_1[4] /
                           (float10)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar21 * fVar21));
  param_1[0x26] = (int)(float)fVar15;
  fVar5 = (float)param_1[0x2fc] - (float)fVar14;
  param_1[0x2fc] = (int)fVar5;
  if (((fVar5 < 0.0) && ((short)param_1[0x365] != 0)) ||
     (fVar5 = (float)param_1[0x360], !NAN(fVar5) && 360.0 < fVar5 != (fVar5 == 360.0))) {
    param_1[0x186] = 2;
  }
  if (param_1[0x186] == 2) {
switchD_00abbc0c_caseD_2:
    FUN_00c76f00();
    iStack_438 = param_1[0x14];
    fStack_40c = (float)param_1[0x239];
    fStack_434 = (float)param_1[0x15];
    fStack_430 = (float)param_1[0x16];
    fStack_42c = (float)param_1[0x17];
    fStack_428 = 0.0;
    uStack_424 = 0xbf800000;
    fStack_420 = 0.0;
    fStack_41c = fStack_3dc;
    iVar8 = FUN_00c76fa0(param_1 + 0x237);
    if (iVar8 != 0) {
      uVar6 = *(uint *)(iVar8 + 0xc);
      if (uVar6 == 0) {
        uStack_410 = 0;
      }
      else {
        uStack_410 = *(undefined4 *)((-(uint)(uVar6 != 0) & uVar6) + 0x2c);
      }
      iVar8 = FUN_008f7780(iVar8);
      if (iVar8 != 0) {
        fStack_418 = *(float *)(iVar8 + 0x4f0);
      }
    }
    if (*(short *)((int)param_1 + 0xd96) != 0) {
      uStack_410 = 1000;
    }
    (**(code **)(*param_1 + 0x318))(&iStack_438);
    param_1[0x414] = param_1[0x14];
    param_1[0x415] = param_1[0x15];
    param_1[0x416] = param_1[0x16];
    param_1[0x417] = param_1[0x17];
    if (param_1[0x24c] == 0x29) {
      param_1[0x3f7] = param_1[0x3f7] | 0x20;
    }
    Behavior::createAttackImpactWave(param_1 + 0x3d0);
    param_1[0x2fc] = 0x42f00000;
    param_1[0x186] = 3;
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    piVar9 = (int *)FUN_00c206d0();
    (**(code **)(*piVar9 + 4))(4,param_1[0x13c],param_1 + 0x10);
    FUN_00acc2f0(param_1[0x2fc],0);
    goto switchD_00abbc0c_caseD_3;
  }
switchD_00abbc0c_default:
  switchD_0080dbae::default();
  if (param_1[0x186] == 1) {
    FUN_004066f0();
    if (param_1[0x421] != 0) {
      Phantom::setTransform(param_1 + 4);
    }
    iVar8 = 0;
    if (param_1[0x421] != 0) {
      puStack_2b8 = auStack_2a8;
      uStack_2c4 = 0x7f7fffee;
      ppuStack_2c8 = vftable;
      uStack_2b0 = 0x80000008;
      iStack_2b4 = 0;
      FUN_00900350(&ppuStack_2c8);
      if (0 < iStack_2b4) {
        iVar24 = 0;
        do {
          iVar10 = *(int *)(puStack_2b8 + iVar8 + 0x28);
          if (*(char *)(iVar10 + 0x18) == '\x02') {
            iVar13 = *(char *)(iVar10 + 0x10) + iVar10;
          }
          else {
            iVar13 = 0;
          }
          if ((((*(char *)(iVar10 + 0x18) == '\x01') &&
               (iVar10 = *(char *)(iVar10 + 0x10) + iVar10, iVar10 != 0)) &&
              (iVar10 = FUN_008f7780(iVar10), iVar10 != 0)) &&
             ((*(byte *)(iVar10 + 0x4c0) & 0x20) != 0)) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          if (((iVar13 != 0) && (iVar10 = FUN_008f7780(iVar13), iVar10 != 0)) &&
             ((*(byte *)(iVar10 + 0x4c0) & 0x20) != 0)) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          iVar24 = iVar24 + 1;
          iVar8 = iVar8 + 0x30;
        } while (iVar24 < iStack_2b4);
      }
      ppuStack_2c8 = vftable;
      iStack_2b4 = 0;
      if (-1 < (int)uStack_2b0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_2b8,(uStack_2b0 & 0x3fffffff) * 0x30);
      }
    }
    if (DAT_01885d68 != 1) {
      piVar9 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar9 = *piVar9 + -1;
      if (((*piVar9 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if (param_1[0x237] != 0) {
    FUN_004066f0();
    FUN_00916660();
    if (DAT_01885d68 != 1) {
      piVar9 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar9 = *piVar9 + -1;
      if (((*piVar9 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
switchD_00abbc0c_caseD_3:
  fVar5 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar5 - (float)param_1[0x3c8]);
  if (fVar5 - (float)param_1[0x3c8] < 0.0) {
    FUN_00acc2f0(0x40400000,0);
  }
  goto switchD_00abbc0c_default;
}

