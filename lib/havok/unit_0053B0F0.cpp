// lib/havok/unit_0053B0F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0053B0F0..0053B0F0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 0053B0F0  hkpAllCdPointCollector::hkpAllCdPointCollector_2  size=5305  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_2(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float10 fVar16;
  float10 fVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined *puVar24;
  undefined4 uVar25;
  float fStack_480;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined4 uStack_428;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  undefined1 auStack_410 [16];
  undefined4 uStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  undefined1 auStack_3f0 [16];
  undefined4 uStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  undefined1 auStack_3d0 [16];
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined1 auStack_3a0 [4];
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined1 auStack_390 [16];
  undefined4 uStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  undefined1 auStack_370 [16];
  float afStack_360 [4];
  float afStack_350 [4];
  undefined1 auStack_340 [64];
  undefined **ppuStack_300;
  undefined4 uStack_2fc;
  undefined1 *puStack_2f0;
  int iStack_2ec;
  uint uStack_2e8;
  undefined1 auStack_2e0 [384];
  undefined1 auStack_160 [288];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  _DAT_01beaa88 = _DAT_01beaa88 | 0x4000000;
  iVar10 = FUN_00c13920();
  if (iVar10 == 0) {
LAB_0053b158:
    uVar15 = 0;
  }
  else {
    piVar11 = (int *)FUN_00c13920();
    iVar10 = (**(code **)(*piVar11 + 0x28))(0);
    if (iVar10 == 0) goto LAB_0053b158;
    piVar11 = (int *)FUN_00a7c8a0();
    if (piVar11 == (int *)0x0) {
      uVar15 = 0;
    }
    else {
      puVar24 = &DAT_01be9db8;
      (**(code **)(*piVar11 + 4))(&DAT_01be9db8);
      iVar10 = FUN_00dd6d80(puVar24);
      uVar15 = -(uint)(iVar10 != 0) & (uint)piVar11;
    }
  }
  iVar10 = FUN_00a12210(0);
  if (iVar10 != 0) {
    fVar2 = *(float *)(iVar10 + 0x90);
    fVar16 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1850) * 0.2);
    fVar16 = (float10)FUN_00ddba30((float)((fVar16 + (float10)*(float *)(param_1 + 0x1850)) *
                                           (float10)0.017453292 *
                                           (float10)*(float *)(param_1 + 0x910) + (float10)fVar2));
    *(float *)(iVar10 + 0x90) = (float)fVar16;
  }
  fVar16 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1850) =
       (float)(((float10)*(float *)(param_1 + 0x1854) - (float10)*(float *)(param_1 + 0x1850)) *
               fVar16 + (float10)*(float *)(param_1 + 0x1850));
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x940) = 5;
    *(undefined4 *)(param_1 + 0x1820) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1824) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x1828) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x182c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x1840) = 0;
    *(undefined4 *)(param_1 + 0x1844) = 0;
    *(undefined4 *)(param_1 + 0x1848) = 0;
    *(undefined4 *)(param_1 + 0x1854) = 0x41800000;
    FUN_005353a0(1,param_1 + 0x1750);
    *(undefined4 *)(param_1 + 0x18a4) = 0;
    *(undefined4 *)(param_1 + 0x18b8) = 0;
    goto LAB_0053b279;
  case 1:
LAB_0053b279:
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43f00000;
    *(undefined4 *)(param_1 + 0x924) = 0;
    FUN_00a8d280();
    uVar25 = 0x3f800000;
    uVar23 = 0xbf800000;
    uVar22 = 0;
    uVar21 = 0x3f800000;
    uVar20 = 0;
    uVar19 = 0;
    puVar18 = &DAT_0163b5f4;
    FUN_00a92f90(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar25);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x185c) = 0;
    if (*(int *)(param_1 + 0x18b8) == 0) {
      *(undefined4 *)(param_1 + 0x1854) = 0x41800000;
    }
    *(undefined4 *)(param_1 + 0x928) = 0;
LAB_0053b30c:
    if (*(int *)(param_1 + 0x18a4) == 5) {
      FUN_00e5e0c0("em01a0_se_atk_cars_hit_ground",param_1,0xffffffff,0);
    }
    uStack_400 = 0;
    fStack_3fc = 0.0;
    fStack_3f8 = 1.0;
    D3DXVec3TransformNormal(&uStack_400,&uStack_400,param_1 + 0x10);
    FUN_00521670(uVar15 + 0x40,&uStack_400,0x3e99999a,*(float *)(param_1 + 0x910) * 0.17453292,0);
    fVar16 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1844) =
         (float)(((float10)*(float *)(param_1 + 0x1844) -
                 (float10)*(float *)(param_1 + 0x910) * (float10)0.02) * fVar16);
    fVar16 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1840) = (float)(fVar16 * (float10)*(float *)(param_1 + 0x1840));
    *(float *)(param_1 + 0x1848) = (float)(fVar16 * (float10)*(float *)(param_1 + 0x1848));
    fVar2 = *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x40) = fVar2 * *(float *)(param_1 + 0x1840) + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x1844) * fVar2 + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x1848) * fVar2 + *(float *)(param_1 + 0x48);
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if ((*(float *)(param_1 + 0x1844) < 0.0) &&
       ((fVar2 < 0.0 || (0x1e < *(int *)(param_1 + 0x18a4))))) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    fVar2 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x928) = 0x41a00000;
      fStack_474 = 1.0;
      sVar8 = FUN_00dde2d0(0,1);
      if (sVar8 != 0) {
        fStack_474 = -1.0;
      }
      sVar8 = FUN_00dde2d0(0xfffffffb,0);
      fStack_43c = (float)(int)sVar8;
      fStack_440 = fStack_474 + fStack_474;
      fStack_438 = 0.0;
      iVar10 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&fStack_440,&fStack_440,iVar10 + 0x10);
      fStack_44c = *(float *)(iVar10 + 0x40) + fStack_44c;
      fStack_448 = *(float *)(iVar10 + 0x44) + fStack_448;
      fStack_444 = *(float *)(iVar10 + 0x48) + fStack_444;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_39c = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_398 = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_394 = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xfffffffb,5);
      sVar9 = FUN_00dde2d0(0xfffffffd,3);
      fStack_3f4 = (float)(int)sVar9;
      fStack_3fc = fStack_480 * 5.0;
      fStack_3f8 = (float)(int)sVar8;
      iVar10 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&fStack_3fc,&fStack_3fc,iVar10 + 0x10);
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      sVar9 = FUN_00dde2d0(0xffffffe2,0x1e);
      afStack_360[2] = (float)(int)sVar9;
      afStack_360[1] = 0.0;
      afStack_360[0] = (float)(int)sVar8;
      FUN_0052fba0(&fStack_440,auStack_390,auStack_3f0,afStack_360);
    }
    break;
  case 2:
    goto LAB_0053b30c;
  case 3:
    *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x61c) = 4;
    *(undefined4 *)(param_1 + 0x924) = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x928) = 0;
    goto LAB_0053b6a6;
  case 4:
LAB_0053b6a6:
    fVar2 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x928) = 0x41200000;
      fStack_474 = 1.0;
      sVar8 = FUN_00dde2d0(0,1);
      if (sVar8 != 0) {
        fStack_474 = -1.0;
      }
      sVar8 = FUN_00dde2d0(0xfffffffb,0);
      fStack_42c = (float)(int)sVar8;
      fStack_430 = fStack_474 + fStack_474;
      uStack_428 = 0;
      iVar10 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&fStack_430,&fStack_430,iVar10 + 0x10);
      fStack_43c = *(float *)(iVar10 + 0x40) + fStack_43c;
      fStack_438 = *(float *)(iVar10 + 0x44) + fStack_438;
      fStack_434 = *(float *)(iVar10 + 0x48) + fStack_434;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_37c = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_378 = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_374 = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xfffffffb,5);
      sVar9 = FUN_00dde2d0(0xfffffffd,3);
      fStack_3d4 = (float)(int)sVar9;
      fStack_3dc = fStack_480 * 5.0;
      fStack_3d8 = (float)(int)sVar8;
      iVar10 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&fStack_3dc,&fStack_3dc,iVar10 + 0x10);
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      sVar9 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_3a8 = (float)(int)sVar9;
      fStack_3ac = 0.0;
      fStack_3b0 = (float)(int)sVar8;
      FUN_0052fba0(&fStack_430,auStack_370,auStack_3d0,&fStack_3b0);
    }
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if (fVar2 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    if (*(int *)(param_1 + 0x185c) == 0) {
      if (*(int *)(param_1 + 0x1858) == 0) {
        fVar16 = (float10)FUN_00fdc1f0();
        fVar16 = ((float10)*(float *)(param_1 + 0x910) * (float10)0.018 +
                 (float10)*(float *)(param_1 + 0x924)) * fVar16;
        *(float *)(param_1 + 0x924) = (float)fVar16;
        fStack_450 = 0.0;
        fStack_44c = 0.0;
        fStack_448 = (float)(fVar16 * (float10)*(float *)(param_1 + 0x910));
        D3DXVec3TransformNormal(&fStack_450,&fStack_450,param_1 + 0x10);
        *(float *)(param_1 + 0x1840) =
             *(float *)(param_1 + 0x1840) + (fStack_450 - *(float *)(param_1 + 0x1840)) * 0.5;
        *(float *)(param_1 + 0x1844) =
             *(float *)(param_1 + 0x1844) + -*(float *)(param_1 + 0x1844) * 0.5;
        *(float *)(param_1 + 0x1848) =
             (fStack_448 - *(float *)(param_1 + 0x1848)) * 0.5 + *(float *)(param_1 + 0x1848);
        *(float *)(param_1 + 0x184c) =
             (fStack_444 - *(float *)(param_1 + 0x184c)) * 0.5 + *(float *)(param_1 + 0x184c);
        fVar2 = *(float *)(param_1 + 0x910);
        *(float *)(param_1 + 0x40) =
             *(float *)(param_1 + 0x1840) * fVar2 + *(float *)(param_1 + 0x40);
        *(float *)(param_1 + 0x44) =
             *(float *)(param_1 + 0x1844) * fVar2 + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x48) =
             *(float *)(param_1 + 0x1848) * fVar2 + *(float *)(param_1 + 0x48);
      }
      else {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x920) = 0x43f00000;
      *(undefined4 *)(param_1 + 0x924) = 0;
      FUN_00a8d280();
      uVar25 = 0x3f800000;
      uVar23 = 0xbf800000;
      uVar22 = 0;
      uVar21 = 0x3f800000;
      uVar20 = 0;
      uVar19 = 0;
      puVar18 = &DAT_0163b604;
      FUN_00a92f90(&DAT_0163b604,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00e3ff90(puVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar25);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
      *(int *)(param_1 + 0x18b8) = *(int *)(param_1 + 0x18b8) + 1;
      *(undefined4 *)(param_1 + 0x1858) = 0;
      *(float *)(param_1 + 0x1840) = *(float *)(param_1 + 0x1840) * -1.0;
      *(undefined4 *)(param_1 + 0x185c) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 9;
      *(float *)(param_1 + 0x1848) = *(float *)(param_1 + 0x1848) * -1.0;
      *(undefined4 *)(param_1 + 0x1844) = 0x3f800000;
      *(float *)(param_1 + 0x1854) = *(float *)(param_1 + 0x1854) * 0.3;
      if (1 < *(int *)(param_1 + 0x18b8)) {
        *(undefined4 *)(param_1 + 0x18ac) = 1;
        *(undefined4 *)(param_1 + 0x18a8) = 0x42f00000;
        *(undefined4 *)(param_1 + 0x18b0) = 0;
      }
      if (*(int *)(param_1 + 0x940) < 1) {
        *(undefined4 *)(param_1 + 0x61c) = 7;
      }
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0x61c) = 6;
    *(undefined4 *)(param_1 + 0x924) = 0;
    FUN_00a8d280();
    uVar25 = 0x3f800000;
    uVar23 = 0xbf800000;
    uVar22 = 0;
    uVar21 = 0x3f800000;
    uVar20 = 0;
    uVar19 = 0;
    puVar18 = &DAT_0163b604;
    FUN_00a92f90(&DAT_0163b604,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar25);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1840) = 0;
    *(undefined4 *)(param_1 + 0x1844) = 0;
    *(undefined4 *)(param_1 + 0x1848) = 0;
    goto LAB_0053bb7e;
  case 6:
LAB_0053bb7e:
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if (fVar2 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    fVar2 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x928) = 0x41a00000;
      fStack_474 = 1.0;
      sVar8 = FUN_00dde2d0(0,1);
      if (sVar8 != 0) {
        fStack_474 = -1.0;
      }
      sVar8 = FUN_00dde2d0(0xfffffffb,0);
      fStack_46c = (float)(int)sVar8;
      fStack_470 = fStack_474 + fStack_474;
      fStack_468 = 0.0;
      iVar10 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&fStack_470,&fStack_470,iVar10 + 0x10);
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_3ac = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_3a8 = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      fStack_3a4 = (float)(int)sVar8 * 0.017453292;
      sVar8 = FUN_00dde2d0(0xfffffffb,5);
      sVar9 = FUN_00dde2d0(0xfffffffd,3);
      fStack_414 = (float)(int)sVar9;
      fStack_41c = fStack_480 * 5.0;
      fStack_418 = (float)(int)sVar8;
      iVar10 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&fStack_41c,&fStack_41c,iVar10 + 0x10);
      sVar8 = FUN_00dde2d0(0xffffffe2,0x1e);
      sVar9 = FUN_00dde2d0(0xffffffe2,0x1e);
      afStack_350[2] = (float)(int)sVar9;
      afStack_350[1] = 0.0;
      afStack_350[0] = (float)(int)sVar8;
      FUN_0052fba0(&fStack_470,auStack_3a0,auStack_410,afStack_350);
    }
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x61c) = 8;
    *(undefined4 *)(param_1 + 0x924) = 0;
    pfVar1 = (float *)(param_1 + 0x1830);
    *pfVar1 = *(float *)(param_1 + 0x1820) - *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x1834) = *(float *)(param_1 + 0x1824) - *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x1838) = *(float *)(param_1 + 0x1828) - *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x183c) = *(float *)(param_1 + 0x182c) - *(float *)(param_1 + 0x4c);
    fVar2 = *(float *)(param_1 + 0x1838) * *(float *)(param_1 + 0x1838) +
            *pfVar1 * *pfVar1 + *(float *)(param_1 + 0x1834) * *(float *)(param_1 + 0x1834);
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0x1834) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1838) = 0;
    }
    FUN_00a8d280();
    uVar25 = 0x3f800000;
    uVar23 = 0xbf800000;
    uVar22 = 0;
    uVar21 = 0x3f800000;
    uVar20 = 0;
    uVar19 = 0;
    puVar24 = &DAT_0163bbb8;
    FUN_00a92f90(&DAT_0163bbb8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar24,uVar19,uVar20,uVar21,uVar22,uVar23,uVar25);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1854) = 0x41800000;
    FUN_00e5e0c0("em01a0_se_atk_cars_hit_ground_stop",param_1,0xffffffff,0);
  case 8:
    fVar16 = (float10)FUN_00fdc1f0();
    fVar16 = ((float10)*(float *)(param_1 + 0x910) * (float10)0.02 +
             (float10)*(float *)(param_1 + 0x924)) * fVar16;
    *(float *)(param_1 + 0x924) = (float)fVar16;
    fVar17 = (float10)2.0;
    if (fVar17 < fVar16 != (fVar17 == fVar16)) {
      *(float *)(param_1 + 0x924) = (float)fVar17;
    }
    fVar2 = *(float *)(param_1 + 0x924);
    fVar3 = *(float *)(param_1 + 0x910);
    fVar4 = *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x40) =
         *(float *)(param_1 + 0x1830) * fVar2 * fVar3 * fVar4 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) =
         *(float *)(param_1 + 0x44) + fVar4 * fVar3 * *(float *)(param_1 + 0x1834) * fVar2;
    *(float *)(param_1 + 0x48) =
         fVar4 * fVar3 * *(float *)(param_1 + 0x1838) * fVar2 + *(float *)(param_1 + 0x48);
    fVar2 = *(float *)(param_1 + 0x1820) - *(float *)(param_1 + 0x40);
    fVar4 = *(float *)(param_1 + 0x1824) - *(float *)(param_1 + 0x44);
    fVar3 = *(float *)(param_1 + 0x1828) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
      if (*(int *)(param_1 + 0x940) < 1) {
        FUN_00a8caf0(4,0,0,0);
      }
      else {
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
    }
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x920) = 0x43f00000;
    *(undefined4 *)(param_1 + 0x61c) = 10;
    *(undefined4 *)(param_1 + 0x924) = 0;
    FUN_00a8d280();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x185c) = 0;
    FUN_00e5e0c0("em01a0_se_atk_cars_hit_ground_stop",param_1,0xffffffff,0);
  case 10:
    if (*(int *)(param_1 + 0x18a4) == 5) {
      FUN_00e5e0c0("em01a0_se_atk_cars_hit_ground",param_1,0xffffffff,0);
    }
    uStack_3e0 = 0;
    fStack_3dc = 0.0;
    fStack_3d8 = 1.0;
    D3DXVec3TransformNormal(&uStack_3e0,&uStack_3e0,param_1 + 0x10);
    FUN_00521670(uVar15 + 0x40,&uStack_3e0,0x3e99999a,*(float *)(param_1 + 0x910) * 0.17453292,0);
    if (*(float *)(param_1 + 0x1844) < 0.0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    fVar16 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1844) =
         (float)(((float10)*(float *)(param_1 + 0x1844) -
                 (float10)*(float *)(param_1 + 0x910) * (float10)0.02) * fVar16);
    fVar16 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1840) = (float)(fVar16 * (float10)*(float *)(param_1 + 0x1840));
    *(float *)(param_1 + 0x1848) = (float)(fVar16 * (float10)*(float *)(param_1 + 0x1848));
    fVar2 = *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x1840) * fVar2 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x1844) * fVar2 + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x1848) * fVar2 + *(float *)(param_1 + 0x48);
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if ((*(float *)(param_1 + 0x1844) < 0.0) &&
       ((fVar2 < 0.0 || (0x1e < *(int *)(param_1 + 0x18a4))))) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  fStack_470 = 0.0;
  iVar10 = 0;
  fStack_46c = 0.0;
  fStack_468 = 0.0;
  bVar7 = false;
  FUN_004066f0();
  if (*(int *)(param_1 + 0x1864) != 0) {
    D3DXMatrixRotationZ(auStack_340,0x3fc90fdb);
    D3DXMatrixMultiply(afStack_350 + 2,afStack_350 + 2,param_1 + 0x10);
    Phantom::setTransform(auStack_340);
    if (*(int *)(param_1 + 0x1864) != 0) {
      puStack_2f0 = auStack_2e0;
      uStack_2fc = 0x7f7fffee;
      ppuStack_300 = vftable;
      uStack_2e8 = 0x80000008;
      iStack_2ec = 0;
      FUN_00900350(&ppuStack_300);
      if (0 < iStack_2ec) {
        fStack_474 = 0.0;
        do {
          iVar14 = *(int *)(puStack_2f0 + iVar10 + 0x28);
          if (*(char *)(iVar14 + 0x18) == '\x02') {
            iVar13 = *(char *)(iVar14 + 0x10) + iVar14;
          }
          else {
            iVar13 = 0;
          }
          if (*(char *)(iVar14 + 0x18) == '\x01') {
            iVar14 = *(char *)(iVar14 + 0x10) + iVar14;
          }
          else {
            iVar14 = 0;
          }
          iVar12 = 0;
          if (iVar13 != 0) {
            iVar12 = FUN_008f7780(iVar13);
          }
          if (iVar14 != 0) {
            iVar12 = FUN_008f7780(iVar14);
          }
          if ((iVar12 == 0) || ((*(uint *)(iVar12 + 0x4b0) & 0xf0000) != 0x30000)) {
            fVar2 = *(float *)(puStack_2f0 + iVar10 + 0x1c);
            pfVar1 = (float *)(puStack_2f0 + iVar10 + 0x10);
            fVar3 = *pfVar1;
            fVar4 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar1 = (float *)(puStack_2f0 + iVar10);
            *pfVar1 = fVar2 * fVar3 + *pfVar1;
            pfVar1[1] = fVar2 * fVar4 + pfVar1[1];
            pfVar1[2] = fVar2 * fVar5 + pfVar1[2];
            pfVar1[3] = fVar2 * fVar6 + pfVar1[3];
            pfVar1[4] = -fVar3;
            pfVar1[5] = -fVar4;
            pfVar1[6] = -fVar5;
            pfVar1[7] = fVar6;
            fVar2 = pfVar1[7];
            if (fVar2 < 0.01) {
              fStack_3c0 = fVar2 * pfVar1[4];
              fStack_3bc = fVar2 * pfVar1[5];
              fStack_3b8 = fVar2 * pfVar1[6];
              fStack_3b4 = fVar2 * fStack_3b4;
              if (pfVar1[5] < -0.8) {
                bVar7 = true;
              }
              fStack_470 = fStack_3c0 + fStack_470;
              uVar15 = *(uint *)(param_1 + 0x4b0);
              fStack_46c = fStack_3bc + fStack_46c;
              fStack_468 = fStack_3b8 + fStack_468;
              fStack_450 = *pfVar1;
              fStack_44c = pfVar1[1];
              fStack_448 = pfVar1[2];
              if (uVar15 == 0x7c0000) {
                uVar15 = 0;
              }
              else if ((uVar15 < 0x10000) || (uVar15 + 0xe0000000 < 0x100000)) {
                FUN_00dd5650(&DAT_0163e20c,uVar15);
              }
              FUN_004039a0(2,param_1,0);
              fStack_420 = 0.0;
              fStack_41c = 0.0;
              fStack_418 = 0.0;
              uStack_380 = 0;
              fStack_37c = 0.0;
              fStack_378 = 0.0;
              thunk_FUN_00dde510(&fStack_420,&fStack_41c,&fStack_3c0,&uStack_380);
              fStack_420 = fStack_420 * -1.0;
              fStack_40 = fStack_450;
              fStack_3c = fStack_44c;
              fStack_38 = fStack_448;
              fStack_34 = fStack_444;
              fStack_2c = fStack_41c;
              fStack_28 = fStack_418;
              fStack_24 = fStack_414;
              fStack_30 = fStack_420;
              FUN_00a8c930(uVar15,auStack_160);
            }
          }
          fStack_474 = (float)((int)fStack_474 + 1);
          iVar10 = iVar10 + 0x30;
        } while ((int)fStack_474 < iStack_2ec);
      }
      ppuStack_300 = vftable;
      iStack_2ec = 0;
      if (-1 < (int)uStack_2e8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_2f0,(uStack_2e8 & 0x3fffffff) * 0x30);
      }
    }
  }
  *(float *)(param_1 + 0x40) = fStack_470 + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + fStack_46c;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fStack_468;
  if (DAT_01885d68 != 1) {
    piVar11 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar11 = *piVar11 + -1;
    if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  if (bVar7) {
    *(int *)(param_1 + 0x18a4) = *(int *)(param_1 + 0x18a4) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x18a4) = 0;
  return;
}

