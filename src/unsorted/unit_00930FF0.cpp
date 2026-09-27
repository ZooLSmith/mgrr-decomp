// src/unsorted/unit_00930FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930FF0..009312C0, 5 functions

#include "mgrr.h"

// 00930FF0  FUN_00930ff0  size=35  [run]
undefined4 FUN_00930ff0(void)

{
  int *piVar1;
  
  FUN_00930dd0();
  FUN_0092e100();
  piVar1 = (int *)FUN_01010f60();
  (**(code **)(*piVar1 + 0x3c))();
  return 1;
}

// 00931020  FUN_00931020  size=336  [run]
void __fastcall FUN_00931020(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  iVar2 = *param_1;
  iVar7 = *(int *)(iVar2 + 0x14);
  iVar8 = *(int *)(iVar2 + 0x18);
  iVar9 = *(int *)(iVar2 + 0x1c);
  param_1[8] = *(int *)(iVar2 + 0x10);
  param_1[9] = iVar7;
  param_1[10] = iVar8;
  param_1[0xb] = iVar9;
  fVar4 = (float)param_1[8];
  fVar5 = (float)param_1[9];
  fVar6 = (float)param_1[10];
  fVar10 = fVar4 * fVar4;
  fVar11 = fVar5 * fVar5;
  fVar12 = fVar6 * fVar6;
  fVar13 = fVar11 + fVar10 + fVar12;
  fVar14 = fVar11 + fVar10 + fVar12;
  fVar15 = fVar11 + fVar10 + fVar12;
  fVar12 = fVar11 + fVar10 + fVar12;
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  auVar17._4_4_ = fVar14;
  auVar17._0_4_ = fVar13;
  auVar17._8_4_ = fVar15;
  auVar17._12_4_ = fVar12;
  auVar17 = rsqrtps(auVar16,auVar17);
  fVar10 = auVar17._0_4_;
  fVar11 = auVar17._4_4_;
  fVar18 = auVar17._8_4_;
  fVar19 = auVar17._12_4_;
  param_1[8] = (int)((float)(~-(uint)(fVar13 <= 0.0) &
                            (uint)((3.0 - fVar10 * fVar13 * fVar10) * fVar10 * 0.5)) * fVar4);
  param_1[9] = (int)((float)(~-(uint)(fVar14 <= 0.0) &
                            (uint)((3.0 - fVar11 * fVar14 * fVar11) * fVar11 * 0.5)) * fVar5);
  param_1[10] = (int)((float)(~-(uint)(fVar15 <= 0.0) &
                             (uint)((3.0 - fVar18 * fVar15 * fVar18) * fVar18 * 0.5)) * fVar6);
  param_1[0xb] = (int)((float)(~-(uint)(fVar12 <= 0.0) &
                              (uint)((3.0 - fVar19 * fVar12 * fVar19) * fVar19 * 0.5)) *
                      (float)param_1[0xb]);
  iVar2 = *param_1;
  param_1[0xc] = param_1[8] ^ 0x80000000;
  param_1[0xd] = param_1[9] ^ 0x80000000;
  param_1[0xe] = param_1[10] ^ 0x80000000;
  param_1[0xf] = param_1[0xb];
  fVar4 = SQRT(*(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
               *(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
               *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18)) * 0.10204081;
  param_1[8] = (int)(fVar4 * (float)param_1[8]);
  param_1[9] = (int)(fVar4 * (float)param_1[9]);
  param_1[10] = (int)(fVar4 * (float)param_1[10]);
  param_1[0xb] = (int)(fVar4 * (float)param_1[0xb]);
  if ((DAT_01885d68 != 1) &&
     (iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4), *(int *)(iVar3 + 4) == 0)) {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
      return;
    }
  }
  return;
}

// 00931170  FUN_00931170  size=117  [run]
void __thiscall FUN_00931170(int param_1,float param_2)

{
  param_2 = param_2 * 0.016666668;
  FUN_00931020();
  *(float *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(float *)(param_1 + 8) = 1.0 / param_2;
  if (DAT_01b35fa8 != 0) {
    FUN_01193cb0(DAT_01b35fb4,param_2);
    FUN_0092c1e0();
    FUN_0100d100();
    return;
  }
  FUN_011931c0(param_2);
  FUN_01193200();
  FUN_01193230();
  return;
}

// 009311F0  FUN_009311f0  size=195  [run]
undefined4 __fastcall FUN_009311f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = 0;
  iVar1 = hkpWorldCinfo::hkpWorldCinfo_2();
  if (iVar1 != 0) {
    FUN_01192690();
    FUN_0114f710(*(undefined4 *)(*param_1 + 0x78));
    if (DAT_01b35fa8 != 0) {
      FUN_011c0580(DAT_01b35fb4);
    }
    iVar1 = GroupFilterImplement::GroupFilterImplement();
    if (iVar1 != 0) {
      FUN_008e0880(&DAT_01b7c218);
      FUN_009284f0();
      PhantomManagerImplement::~PhantomManagerImplement();
      piVar2 = (int *)FUN_0092c170();
      (**(code **)(*piVar2 + 4))(&DAT_01b7c218);
      FUN_008eb980();
      EffectCollisionMaterialImplement::~EffectCollisionMaterialImplement();
      FUN_011926a0();
      FUN_00904d90();
      UserData::EntityUserDataListener::EntityUserDataListener();
      param_1[1] = 0x3c888889;
      param_1[2] = 0x426fffff;
      FUN_00931170(0x3f800000);
      FUN_00930420();
      return 1;
    }
  }
  return 0;
}

// 009312C0  FUN_009312c0  size=22  [run]
bool FUN_009312c0(void)

{
  int iVar1;
  
  FUN_0092f180();
  iVar1 = FUN_009311f0();
  return iVar1 != 0;
}

