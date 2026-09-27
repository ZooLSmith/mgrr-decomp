// lib/havok/unit_00AE4E70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AE4E70..00AE4E70, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00AE4E70  hkpAllCdPointCollector::hkpAllCdPointCollector_44  size=3137  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_44(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  code *pcVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
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
  
  if (((param_1[0x139] == 0) && (param_1[0x3c4] == 0)) &&
     (iVar9 = (**(code **)(*param_1 + 0x308))(1,0), iVar9 != 0)) {
    param_1[0x186] = 2;
  }
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    FUN_00a7c8a0();
  }
  D3DXMatrixInverse(auStack_330,0,param_1 + 4);
  D3DXVec3TransformNormal(auStack_3cc,param_1 + 0x2d4,auStack_33c);
  fStack_3d8 = fStack_3d8 + fStack_318;
  fStack_3d4 = fStack_3d4 + fStack_314;
  fStack_3d0 = fStack_3d0 + fStack_310;
  fVar15 = (float10)(**(code **)(*param_1 + 0x24))();
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x2fc] = 0x42f00000;
    param_1[0x186] = 1;
    FUN_00ad7700();
    if (param_1[0x24c] == 0x29) {
      FUN_00acccc0(1);
    }
    else {
      (**(code **)(*param_1 + 0xd8))();
    }
    FUN_004066f0();
    fVar5 = (float)param_1[0x248];
    fVar1 = (float)param_1[0x249];
    iStack_440 = param_1[0x24a];
    iStack_43c = param_1[0x24b];
    FUN_0091a620(&stack0xfffffbb8);
    fVar16 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    fVar22 = (float)fVar16;
    fVar16 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    uStack_3f8 = 0xc1200000;
    fStack_3f0 = (float)fVar16;
    fStack_3f4 = fVar22;
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
    goto switchD_00ae4f50_caseD_2;
  case 3:
    goto switchD_00ae4f50_caseD_3;
  default:
    goto switchD_00ae4f50_default;
  }
  param_1[0x360] = (int)((float)param_1[0x360] + (float)fVar15);
  FUN_0091a5e0(&fStack_3e8);
  if ((short)param_1[0x365] == 0) {
    if (param_1[0x237] != 0) {
      FUN_004066f0();
      iVar9 = FUN_009165d0();
      if ((iVar9 != 0) && (0 < *(int *)(iVar9 + 0x14))) {
        iVar11 = 0;
        iVar25 = 0;
        do {
          fVar5 = *(float *)(iVar25 + 0x14 + *(int *)(iVar9 + 0x10));
          if (0.0 <= *(float *)(iVar25 + *(int *)(iVar9 + 0x10) + 0x1c)) {
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
          iVar14 = *(int *)(iVar25 + 0x28 + *(int *)(iVar9 + 0x10));
          if (*(char *)(iVar14 + 0x18) == '\x02') {
            iVar12 = *(char *)(iVar14 + 0x10) + iVar14;
          }
          else {
            iVar12 = 0;
          }
          if (((*(char *)(iVar14 + 0x18) == '\x01') &&
              (iVar14 = *(char *)(iVar14 + 0x10) + iVar14, iVar14 != 0)) &&
             ((iVar14 = FUN_008f7780(iVar14), iVar14 != 0 &&
              ((*(byte *)(iVar14 + 0x4c0) & 0x20) != 0)))) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          if (((iVar12 != 0) && (iVar14 = FUN_008f7780(iVar12), iVar14 != 0)) &&
             ((*(byte *)(iVar14 + 0x4c0) & 0x20) != 0)) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          iVar25 = iVar25 + 0x30;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(iVar9 + 0x14));
      }
      FUN_00406760();
      goto LAB_00ae527f;
    }
  }
  else {
LAB_00ae527f:
    if (param_1[0x237] != 0) {
      FUN_0091df60(&uStack_388);
      FUN_01005140(aiStack_68);
      piVar13 = aiStack_68;
      piVar10 = param_1 + 4;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar10 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar10 = piVar10 + 1;
      }
      if (param_1[0x238] != 0) {
        D3DXMatrixTranslation(&fStack_3c8,param_1[0x10],param_1[0x11],param_1[0x12]);
        uStack_3f8 = uStack_398;
        fStack_3f4 = fStack_394;
        fStack_3f0 = fStack_390;
        fVar16 = (float10)fStack_3c4;
        fVar17 = (float10)fStack_3c8;
        fVar18 = (float10)fStack_3c0;
        fVar19 = (float10)fStack_3b0;
        fVar20 = (float10)fStack_3a0;
        fVar21 = SQRT(fVar20 * fVar20 +
                      (float10)fStack_3a8 * (float10)fStack_3a8 +
                      (float10)fStack_3a4 * (float10)fStack_3a4);
        fVar20 = (float10)fpatan(fVar19 / fVar21,fVar20 / fVar21);
        fStack_3e8 = (float)fVar20;
        fVar20 = (float10)FUN_00ddbaa0((float)-(fVar18 / fVar21));
        fStack_3e4 = (float)fVar20;
        fVar17 = (float10)fpatan((float10)fStack_3c4 /
                                 (float10)(float)SQRT(fVar19 * fVar19 +
                                                      (float10)fStack_3b8 * (float10)fStack_3b8 +
                                                      (float10)fStack_3b4 * (float10)fStack_3b4),
                                 (float10)fStack_3c8 /
                                 (float10)(float)SQRT(fVar18 * fVar18 +
                                                      fVar17 * fVar17 + fVar16 * fVar16));
        fVar16 = (float10)0;
        fStack_400 = (float)fVar16;
        fStack_404 = (float)fVar16;
        fStack_408 = (float)fVar16;
        fStack_40c = (float)fVar16;
        fStack_414 = (float)fVar16;
        fStack_418 = (float)fVar16;
        fStack_41c = (float)fVar16;
        fStack_420 = (float)fVar16;
        fStack_428 = (float)fVar16;
        fStack_42c = (float)fVar16;
        fStack_430 = (float)fVar16;
        fStack_434 = (float)fVar16;
        uStack_3fc = 0x3f800000;
        uStack_410 = 0x3f800000;
        uStack_424 = 0x3f800000;
        iStack_438 = 0x3f800000;
        if (fVar16 != fVar17) {
          D3DXMatrixRotationZ(auStack_128,(float)fVar17);
          D3DXMatrixMultiply(&iStack_440,auStack_130,&iStack_440);
          fVar20 = (float10)fStack_3e4;
        }
        if ((float10)0 != fVar20) {
          D3DXMatrixRotationY(auStack_a8,(float)fVar20);
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
  fVar22 = (float)param_1[6];
  fVar2 = (float)param_1[8];
  fVar3 = (float)param_1[9];
  fVar4 = (float)param_1[10];
  fVar8 = SQRT((float)param_1[0xe] * (float)param_1[0xe] +
               (float)param_1[0xd] * (float)param_1[0xd] + (float)param_1[0xc] * (float)param_1[0xc]
              );
  fVar23 = (float)param_1[10] / fVar8;
  fVar24 = (float)param_1[0xe] / fVar8;
  fVar16 = (float10)FUN_00ddbaa0(-((float)param_1[6] / fVar8));
  fVar17 = (float10)fpatan((float10)fVar23,(float10)fVar24);
  param_1[0x24] = (int)(float)fVar17;
  param_1[0x25] = (int)(float)fVar16;
  fVar16 = (float10)fpatan((float10)(float)param_1[5] /
                           (float10)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4),
                           (float10)(float)param_1[4] /
                           (float10)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar22 * fVar22));
  param_1[0x26] = (int)(float)fVar16;
  fVar5 = (float)param_1[0x2fc] - (float)fVar15;
  param_1[0x2fc] = (int)fVar5;
  if (((fVar5 < 0.0) && ((short)param_1[0x365] != 0)) ||
     (fVar5 = (float)param_1[0x360], !NAN(fVar5) && 360.0 < fVar5 != (fVar5 == 360.0))) {
    param_1[0x186] = 2;
  }
  if (param_1[0x186] == 2) {
switchD_00ae4f50_caseD_2:
    FUN_00c76f00();
    iStack_438 = param_1[0x14];
    fStack_40c = (float)param_1[0x239];
    fStack_434 = (float)param_1[0x15];
    piVar13 = param_1 + 0x14;
    fStack_430 = (float)param_1[0x16];
    fStack_42c = (float)param_1[0x17];
    fStack_428 = 0.0;
    uStack_424 = 0xbf800000;
    fStack_420 = 0.0;
    fStack_41c = fStack_3dc;
    iVar9 = FUN_00c76fa0(param_1 + 0x237);
    if (iVar9 != 0) {
      uVar6 = *(uint *)(iVar9 + 0xc);
      if (uVar6 == 0) {
        uStack_410 = 0;
      }
      else {
        uStack_410 = *(undefined4 *)((-(uint)(uVar6 != 0) & uVar6) + 0x2c);
      }
      iVar9 = FUN_008f7780(iVar9);
      if (iVar9 != 0) {
        fStack_418 = *(float *)(iVar9 + 0x4f0);
      }
    }
    if (*(short *)((int)param_1 + 0xd96) != 0) {
      uStack_410 = 1000;
    }
    (**(code **)(*param_1 + 0x318))(&iStack_438);
    param_1[0x414] = *piVar13;
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
    piVar10 = (int *)FUN_00c206d0();
    (**(code **)(*piVar10 + 4))(4,param_1[0x13c],param_1 + 0x10);
    if (param_1[0x24c] == 0x29) {
      pcVar7 = *(code **)(*param_1 + 0x20);
      param_1[0x2fc] = 0x44160000;
      (*pcVar7)();
      piVar10 = (int *)FUN_00c13920();
      iVar9 = (**(code **)(*piVar10 + 0x28))(0);
      if (iVar9 != 0) {
        FUN_00a7c8a0();
      }
      if (param_1[0x239] == 0x53) {
        param_1[0x2fc] = 0x44160000;
        FUN_00bc3b00(param_1[0x13c],piVar13,0x43fa0000,0x44160000);
      }
      else {
        FUN_00bc39f0(param_1[0x13c],piVar13,0x41200000,param_1[0x2fc]);
        FUN_008f18c0(0x40000);
      }
    }
    else {
      FUN_00acc2f0(param_1[0x2fc],0);
    }
    goto switchD_00ae4f50_caseD_3;
  }
switchD_00ae4f50_default:
  switchD_0080dbae::default();
  if (param_1[0x186] == 1) {
    FUN_004066f0();
    if (param_1[0x421] != 0) {
      Phantom::setTransform(param_1 + 4);
    }
    iVar9 = 0;
    if (param_1[0x421] != 0) {
      puStack_2b8 = auStack_2a8;
      uStack_2c4 = 0x7f7fffee;
      ppuStack_2c8 = vftable;
      uStack_2b0 = 0x80000008;
      iStack_2b4 = 0;
      FUN_00900350(&ppuStack_2c8);
      if (0 < iStack_2b4) {
        iVar25 = 0;
        do {
          iVar11 = *(int *)(puStack_2b8 + iVar9 + 0x28);
          if (*(char *)(iVar11 + 0x18) == '\x02') {
            iVar14 = *(char *)(iVar11 + 0x10) + iVar11;
          }
          else {
            iVar14 = 0;
          }
          if (((*(char *)(iVar11 + 0x18) == '\x01') &&
              (iVar11 = *(char *)(iVar11 + 0x10) + iVar11, iVar11 != 0)) &&
             ((iVar11 = FUN_008f7780(iVar11), iVar11 != 0 &&
              ((*(byte *)(iVar11 + 0x4c0) & 0x20) != 0)))) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          if (((iVar14 != 0) && (iVar11 = FUN_008f7780(iVar14), iVar11 != 0)) &&
             ((*(byte *)(iVar11 + 0x4c0) & 0x20) != 0)) {
            param_1[0x186] = 2;
            *(undefined2 *)((int)param_1 + 0xd96) = 1;
          }
          iVar25 = iVar25 + 1;
          iVar9 = iVar9 + 0x30;
        } while (iVar25 < iStack_2b4);
      }
      ppuStack_2c8 = vftable;
      iStack_2b4 = 0;
      if (-1 < (int)uStack_2b0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_2b8,(uStack_2b0 & 0x3fffffff) * 0x30);
      }
    }
    if (DAT_01885d68 != 1) {
      piVar13 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar13 = *piVar13 + -1;
      if (((*piVar13 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if (param_1[0x237] != 0) {
    FUN_004066f0();
    FUN_00916660();
    if (DAT_01885d68 != 1) {
      piVar13 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar13 = *piVar13 + -1;
      if (((*piVar13 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
switchD_00ae4f50_caseD_3:
  fVar5 = (float)param_1[0x2fc];
  param_1[0x2fc] = (int)(fVar5 - (float)param_1[0x3c8]);
  if (fVar5 - (float)param_1[0x3c8] < 0.0) {
    FUN_00acc2f0(0x40400000,0);
  }
  goto switchD_00ae4f50_default;
}

