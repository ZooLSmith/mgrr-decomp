// src/unsorted/unit_005FCA90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005FCA90..005FCB40, 2 functions

#include "mgrr.h"

// 005FCA90  FUN_005fca90  size=164  [run]
void __thiscall FUN_005fca90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  FUN_004117d0(param_2,param_1,param_3);
  if (param_4 != 0) {
    thunk_FUN_00e00b80(*(undefined4 *)(param_1 + 0xda0),param_2,param_1 + 0x10,local_160);
    return;
  }
  local_168 = 0;
  local_16c = 0;
  local_170 = 0;
  local_174 = 0;
  local_17c = 0;
  local_180 = 0;
  local_184 = 0;
  local_188 = 0;
  local_190 = 0;
  local_194 = 0;
  local_198 = 0;
  local_19c = 0;
  local_164 = 0x3f800000;
  local_178 = 0x3f800000;
  local_18c = 0x3f800000;
  local_1a0 = 0x3f800000;
  thunk_FUN_00e00b80(*(undefined4 *)(param_1 + 0xda0),param_2,&local_1a0,local_160);
  return;
}

// 005FCB40  FUN_005fcb40  size=1314  [run]
undefined4 __fastcall FUN_005fcb40(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  float10 fVar15;
  
  param_1[0x1a1] = 0;
  if ((param_1[0x139] != 0) || (iVar8 = FUN_00a8ef10(), iVar8 != 0)) {
    return 0;
  }
  FUN_00ac2080(0);
  piVar14 = (int *)param_1[0x19f];
  piVar10 = piVar14 + param_1[0x1a1] * 0x54;
  if (piVar14 == piVar10) {
    return 0;
  }
  while (((((iVar8 = *piVar14, iVar8 == 0 || (iVar8 == 1)) || (iVar8 == 2)) ||
          ((iVar8 == 0x1b0 || (iVar8 == 0x147)))) ||
         (((param_1[0x449] == 2 || (param_1[0x128] == 2)) &&
          (((iVar8 = FUN_00a81330(), iVar8 != 0 && (iVar8 = FUN_00a7c7e0(), iVar8 == 0)) &&
           (*piVar14 == 0xe2))))))) {
    piVar14 = piVar14 + 0x54;
    if (piVar14 == piVar10) {
      return 0;
    }
  }
  iVar8 = piVar14[1];
  iVar9 = FUN_00a8eea0();
  piVar10 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar10 + 0x2c))();
  (**(code **)(*param_1 + 0x30c))(iVar8,0);
  piVar10 = (int *)0x0;
  iVar11 = FUN_00a81330();
  if (iVar11 != 0) {
    piVar10 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x40000000);
  fVar15 = (float10)FUN_00ddba30((float)piVar14[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar15;
  (**(code **)(*param_1 + 0x198))(piVar10,piVar14,1);
  iVar11 = FUN_00dda320(0);
  if (iVar11 != 0) {
    fVar1 = (float)iVar8;
    if (fVar1 <= 10.0) {
      if (fVar1 <= 1.0) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 10.0;
    }
    FUN_00dda360(0,10.0 / fVar1,10.0 / fVar1,10);
  }
  bVar7 = true;
  bVar6 = true;
  if ((param_1[0x449] == 2) || (param_1[0x128] == 2)) {
    if ((*piVar14 == 0xe2) || (*piVar14 == 0x1d9)) {
      FUN_00a8ee20(0);
      bVar7 = false;
    }
    if ((0x27 < iVar9) && (param_1[0x21c] < 1)) {
      bVar6 = false;
    }
    if (!bVar7) goto LAB_005fcda1;
  }
  if (((char)param_1[0x370] == '\0') && (iVar9 = FUN_00a8eea0(), iVar9 < 0x46)) {
    *(undefined1 *)(param_1 + 0x370) = 1;
    FUN_005fca90(0x19a,param_1 + 0x310,0);
  }
  if ((*(char *)((int)param_1 + 0xdc1) == '\0') && (iVar9 = FUN_00a8eea0(), iVar9 < 0x28)) {
    *(undefined1 *)((int)param_1 + 0xdc1) = 1;
    FUN_005fca90(0x19b,param_1 + 0x33c,0);
    if (bVar6) {
      FUN_00e5e0c0("pl2040_se_dmg_spark",param_1,0xffffffff,0);
    }
  }
LAB_005fcda1:
  if (param_1[0x21c] < 1) {
    if (((param_1[0x449] == 2) || (param_1[0x128] == 2)) &&
       ((*piVar14 == 0xe2 || ((*piVar14 == 0x1d9 || (*(char *)((int)param_1 + 0xdb3) != '\0')))))) {
      param_1[0x4f8] = 1;
    }
    param_1[0x21c] = 0;
    param_1[0x139] = 1;
    _memset(param_1 + 0x3cd,0,0x30);
    return 1;
  }
  if (*piVar14 == 0xa4) {
    pcVar5 = *(code **)(*param_1 + 0x68);
    param_1[0x36a] = 6;
    pfVar12 = (float *)(*pcVar5)();
    pfVar13 = (float *)(**(code **)(*piVar10 + 0x68))();
    pcVar5 = *(code **)(*param_1 + 0x68);
    fVar15 = (float10)fpatan((float10)*pfVar13 - (float10)*pfVar12,
                             (float10)pfVar13[2] - (float10)pfVar12[2]);
    param_1[0x25] = (int)(float)fVar15;
    pfVar12 = (float *)(*pcVar5)();
    pfVar13 = (float *)(**(code **)(*piVar10 + 0x68))();
    fVar15 = (float10)fpatan((float10)*pfVar13 - (float10)*pfVar12,
                             (float10)pfVar13[2] - (float10)pfVar12[2]);
    param_1[0x23d] = (int)(float)fVar15;
    return 1;
  }
  if (0x1e < iVar8) {
    pcVar5 = *(code **)(*param_1 + 0x68);
    param_1[0x36a] = 5;
    pfVar12 = (float *)(*pcVar5)();
    pfVar13 = (float *)(**(code **)(*piVar10 + 0x68))();
    pcVar5 = *(code **)(*param_1 + 0x68);
    fVar15 = (float10)fpatan((float10)*pfVar13 - (float10)*pfVar12,
                             (float10)pfVar13[2] - (float10)pfVar12[2]);
    param_1[0x25] = (int)(float)fVar15;
    pfVar12 = (float *)(*pcVar5)();
    pfVar13 = (float *)(**(code **)(*piVar10 + 0x68))();
    fVar1 = *pfVar13;
    fVar2 = *pfVar12;
    fVar3 = pfVar13[2];
    fVar4 = pfVar12[2];
    param_1[0x3ae] = 0;
    fVar15 = (float10)fpatan((float10)fVar1 - (float10)fVar2,(float10)fVar3 - (float10)fVar4);
    param_1[0x23d] = (int)(float)fVar15;
    param_1[0x3ad] = 0;
    return 1;
  }
  if (iVar8 < 5) {
    param_1[0x3ae] = param_1[0x3ae] + 1;
    param_1[0x3ad] = 0x41200000;
    param_1[0x36a] = 4;
    if (10 < (uint)param_1[0x3ae]) {
      pcVar5 = *(code **)(*param_1 + 0x84);
      param_1[0x3ad] = 0;
      param_1[0x3ae] = 0;
      iVar8 = (*pcVar5)();
      fVar1 = *(float *)(iVar8 + 4) * 57.29578;
      if ((NAN(fVar1) || 90.0 < fVar1 == (fVar1 == 90.0)) && (-90.0 < fVar1)) {
        if (fVar1 <= 0.0) {
          param_1[0x36a] = 1;
          return 0;
        }
        param_1[0x36a] = 2;
        return 0;
      }
      param_1[0x36a] = 3;
    }
    return 0;
  }
  iVar8 = (**(code **)(*param_1 + 0x84))();
  fVar1 = *(float *)(iVar8 + 4) * 57.29578;
  if ((!NAN(fVar1) && 90.0 < fVar1 != (fVar1 == 90.0)) || (fVar1 <= -90.0)) {
    param_1[0x36a] = 3;
  }
  else if (0.0 < fVar1) {
    param_1[0x36a] = 2;
  }
  else {
    param_1[0x36a] = 1;
  }
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  return 1;
}

