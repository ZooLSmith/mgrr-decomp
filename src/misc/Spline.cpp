// src/misc/Spline.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D2B00..00ED07B0, 16 functions

#include "mgrr.h"

// 009D2B00  Spline<float>::vf00  size=31  [class]
undefined4 * __thiscall Spline<float>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009D3240  Spline<float>::vf08  size=159  [class]
void __thiscall Spline<float>::vf08(int param_1,float *param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  int local_8;
  
  fVar2 = (float10)FUN_00fddce0((double)param_3);
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  if (fVar2 <= (float10)0) {
    fVar2 = (float10)0;
  }
  if (fVar3 < fVar2) {
    fVar2 = fVar3;
  }
  local_8 = (int)(longlong)ROUND(fVar2);
  fVar2 = (float10)param_3 - fVar2;
  *param_2 = (float)((((float10)*(float *)(*(int *)(param_1 + 0x10) + local_8 * 4) * fVar2 +
                      (float10)*(float *)(*(int *)(param_1 + 0xc) + local_8 * 4)) * fVar2 +
                     (float10)*(float *)(*(int *)(param_1 + 8) + local_8 * 4)) * fVar2 +
                    (float10)*(float *)(*(int *)(param_1 + 4) + local_8 * 4));
  return;
}

// 009E7880  Spline<float>::Spline<float>_8  size=65  [class]
void __fastcall Spline<float>::Spline<float>_8(undefined4 *param_1)

{
  *param_1 = FixedSplineLoop<float>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_1[10] != 0) {
    FUN_00dd3d90(param_1[8],0);
    param_1[10] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = vftable;
  return;
}

// 009EC410  Spline<float>::Spline<float>_6  size=67  [class]
void __fastcall Spline<float>::Spline<float>_6(int param_1)

{
  *(undefined ***)(param_1 + 0x10) = FixedSplineLoop<float>::vftable;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined ***)(param_1 + 0x10) = vftable;
  return;
}

// 009EC460  Spline<float>::Spline<float>_7  size=67  [class]
void __fastcall Spline<float>::Spline<float>_7(int param_1)

{
  *(undefined ***)(param_1 + 0x14) = FixedSplineLoop<float>::vftable;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x34),0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined ***)(param_1 + 0x14) = vftable;
  return;
}

// 009F09F0  Spline<float>::Spline<float>_4  size=87  [class]
int __thiscall Spline<float>::Spline<float>_4(int param_1,byte param_2)

{
  *(undefined ***)(param_1 + 0x10) = FixedSplineLoop<float>::vftable;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined ***)(param_1 + 0x10) = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F0A50  Spline<float>::Spline<float>_5  size=87  [class]
int __thiscall Spline<float>::Spline<float>_5(int param_1,byte param_2)

{
  *(undefined ***)(param_1 + 0x14) = FixedSplineLoop<float>::vftable;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x34),0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined ***)(param_1 + 0x14) = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F1C40  Spline<float>::Spline<float>_3  size=299  [class]
void __fastcall Spline<float>::Spline<float>_3(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x458) != 0) {
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if (*(int *)(param_1 + 0x450) != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  if (*(int *)(param_1 + 0x454) != 0) {
    *(undefined4 *)(param_1 + 0x454) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x468);
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x10) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if (*(int *)(iVar1 + 0x38) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x30),0);
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined ***)(iVar1 + 0x10) = vftable;
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x46c);
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x14) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(int *)(iVar1 + 0x3c) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x34),0);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined ***)(iVar1 + 0x14) = vftable;
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  if (*(int *)(param_1 + 0x45c) != 0) {
    *(undefined4 *)(param_1 + 0x45c) = 0;
  }
  if (*(int *)(param_1 + 0x460) != 0) {
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  if (*(int *)(param_1 + 0x464) != 0) {
    *(undefined4 *)(param_1 + 0x464) = 0;
  }
  if (*(int *)(param_1 + 0x478) != 0) {
    FUN_00dd3d90(*(int *)(param_1 + 0x478),0);
    *(undefined4 *)(param_1 + 0x478) = 0;
  }
  if (*(int *)(param_1 + 0x480) != 0) {
    FUN_00dd3d90(*(int *)(param_1 + 0x480),0);
    *(undefined4 *)(param_1 + 0x480) = 0;
  }
  return;
}

// 009F2920  Spline<float>::Spline<float>_2  size=250  [class]
void __fastcall Spline<float>::Spline<float>_2(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009dd5b0();
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x10) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if (*(int *)(iVar1 + 0x38) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x30),0);
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined ***)(iVar1 + 0x10) = vftable;
    param_1[3] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x14) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(int *)(iVar1 + 0x3c) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x34),0);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined ***)(iVar1 + 0x14) = vftable;
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_00dd3d90(param_1[0x12],0);
    param_1[0x12] = 0;
  }
  return;
}

// 009F31E0  Spline<float>::Spline<float>  size=258  [class]
void __fastcall Spline<float>::Spline<float>(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009de150();
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    param_1[3] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x10) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if (*(int *)(iVar1 + 0x38) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x30),0);
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined ***)(iVar1 + 0x10) = vftable;
    param_1[4] = 0;
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x14) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(int *)(iVar1 + 0x3c) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x34),0);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined ***)(iVar1 + 0x14) = vftable;
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
  }
  if (param_1[0xc] != 0) {
    param_1[0xc] = 0;
  }
  if (param_1[0xd] != 0) {
    param_1[0xd] = 0;
  }
  if (param_1[0x16] != 0) {
    FUN_00dd3d90(param_1[0x16],0);
    param_1[0x16] = 0;
  }
  return;
}

// 009F6250  Spline<float>::Spline<float>_2  size=5  [class]
void __fastcall Spline<float>::Spline<float>_2(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009dd5b0();
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x10) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    if (*(int *)(iVar1 + 0x38) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x30),0);
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined ***)(iVar1 + 0x10) = vftable;
    param_1[3] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    *(undefined ***)(iVar1 + 0x14) = FixedSplineLoop<float>::vftable;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(int *)(iVar1 + 0x3c) != 0) {
      FUN_00dd3d90(*(undefined4 *)(iVar1 + 0x34),0);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined ***)(iVar1 + 0x14) = vftable;
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_00dd3d90(param_1[0x12],0);
    param_1[0x12] = 0;
  }
  return;
}

// 00ECC750  Spline<Hw::cVec4>::vf00  size=31  [class]
undefined4 * __thiscall Spline<Hw::cVec4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ECC770  Spline<Hw::cVec4>::vf08  size=444  [class]
void __thiscall Spline<Hw::cVec4>::vf08(int param_1,float *param_2,float param_3)

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
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float10 fVar15;
  int local_30;
  
  fVar15 = (float10)FUN_00fddce0((double)param_3);
  fVar1 = (float)fVar15;
  iVar10 = *(int *)(param_1 + 0x14) + -1;
  fVar2 = (float)iVar10;
  if (iVar10 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar2 < fVar1) {
    fVar1 = fVar2;
  }
  local_30 = (int)(longlong)ROUND(fVar1);
  local_30 = local_30 * 0x10;
  pfVar11 = (float *)(*(int *)(param_1 + 8) + local_30);
  pfVar13 = (float *)(*(int *)(param_1 + 0xc) + local_30);
  pfVar12 = (float *)(*(int *)(param_1 + 4) + local_30);
  pfVar14 = (float *)(*(int *)(param_1 + 0x10) + local_30);
  param_3 = param_3 - fVar1;
  fVar1 = pfVar14[1];
  fVar2 = pfVar14[2];
  fVar3 = pfVar14[3];
  fVar4 = pfVar13[1];
  fVar5 = pfVar13[2];
  fVar6 = pfVar13[3];
  fVar7 = pfVar11[1];
  fVar8 = pfVar11[2];
  fVar9 = pfVar11[3];
  *param_2 = *pfVar12 + ((*pfVar13 + param_3 * *pfVar14) * param_3 + *pfVar11) * param_3;
  param_2[1] = pfVar12[1] + (fVar7 + (fVar4 + fVar1 * param_3) * param_3) * param_3;
  param_2[2] = pfVar12[2] + (fVar8 + (fVar5 + fVar2 * param_3) * param_3) * param_3;
  param_2[3] = pfVar12[3] + param_3 * (fVar9 + (fVar6 + fVar3 * param_3) * param_3);
  return;
}

// 00ECD970  Spline<Hw::cVec4>::vf04  size=3190  [class]
void __thiscall Spline<Hw::cVec4>::vf04(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
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
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  float *pfVar26;
  
  if (param_3 < 3) {
    FUN_00dd5650(&DAT_016d9904,param_3);
    return;
  }
  if (param_3 <= *(uint *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 4) = param_2;
    puVar16 = *(undefined4 **)(param_1 + 0xc);
    *puVar16 = 0;
    uVar25 = param_3 - 1;
    puVar16[1] = 0;
    puVar16[2] = 0;
    iVar23 = uVar25 * 0x10;
    puVar16[3] = 0;
    puVar16 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar23);
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    uVar17 = 1;
    if (1 < uVar25) {
      if (3 < (int)(param_3 - 2)) {
        iVar24 = (param_3 - 6 >> 2) + 1;
        iVar21 = 0x10;
        uVar17 = iVar24 * 4 + 1;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar21);
          fVar3 = pfVar18[-3];
          fVar4 = pfVar18[5];
          fVar5 = pfVar18[-2];
          fVar6 = pfVar18[6];
          fVar7 = pfVar18[-1];
          fVar8 = pfVar18[7];
          fVar9 = pfVar18[1];
          fVar10 = pfVar18[2];
          fVar11 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
          *pfVar19 = ((*(float *)(*(int *)(param_1 + 4) + 0x10 + iVar21) + pfVar18[-4]) -
                     *pfVar18 * 2.0) * 3.0;
          pfVar19[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar19[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar19[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          iVar1 = iVar21 + 0x20;
          fVar3 = *(float *)(iVar21 + 4 + iVar15);
          fVar4 = *(float *)(iVar15 + 4 + iVar1);
          fVar5 = *(float *)(iVar21 + 8 + iVar15);
          fVar6 = *(float *)(iVar15 + 8 + iVar1);
          fVar7 = *(float *)(iVar21 + 0xc + iVar15);
          fVar8 = *(float *)(iVar15 + 0xc + iVar1);
          fVar9 = *(float *)(iVar21 + 0x14 + iVar15);
          fVar10 = *(float *)(iVar21 + 0x18 + iVar15);
          fVar11 = *(float *)(iVar21 + 0x1c + iVar15);
          pfVar18 = (float *)(iVar21 + 0x10 + *(int *)(param_1 + 0xc));
          iVar2 = iVar21 + 0x30;
          *pfVar18 = ((*(float *)(iVar15 + 0x20 + iVar21) + *(float *)(iVar21 + iVar15)) -
                     *(float *)(iVar21 + 0x10 + iVar15) * 2.0) * 3.0;
          pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          fVar3 = *(float *)(iVar21 + 0x14 + iVar15);
          fVar4 = *(float *)(iVar15 + 4 + iVar2);
          fVar5 = *(float *)(iVar21 + 0x18 + iVar15);
          fVar6 = *(float *)(iVar15 + 8 + iVar2);
          fVar7 = *(float *)(iVar21 + 0x1c + iVar15);
          fVar8 = *(float *)(iVar15 + 0xc + iVar2);
          fVar9 = *(float *)(iVar15 + 4 + iVar1);
          fVar10 = *(float *)(iVar15 + 8 + iVar1);
          fVar11 = *(float *)(iVar15 + 0xc + iVar1);
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
          *pfVar18 = ((*(float *)(iVar15 + iVar2) + *(float *)(iVar21 + 0x10 + iVar15)) -
                     *(float *)(iVar15 + iVar1) * 2.0) * 3.0;
          pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          iVar15 = *(int *)(param_1 + 4);
          fVar3 = *(float *)(iVar15 + 4 + iVar1);
          fVar4 = *(float *)(iVar15 + 0x24 + iVar1);
          iVar21 = iVar21 + 0x40;
          fVar5 = *(float *)(iVar15 + 8 + iVar1);
          fVar6 = *(float *)(iVar15 + 0x28 + iVar1);
          fVar7 = *(float *)(iVar15 + 0xc + iVar1);
          fVar8 = *(float *)(iVar15 + 0x2c + iVar1);
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar2);
          iVar24 = iVar24 + -1;
          fVar9 = *(float *)(iVar15 + 4 + iVar2);
          fVar10 = *(float *)(iVar15 + 8 + iVar2);
          fVar11 = *(float *)(iVar15 + 0xc + iVar2);
          *pfVar18 = ((*(float *)(iVar15 + 0x20 + iVar1) + *(float *)(iVar15 + iVar1)) -
                     *(float *)(iVar15 + iVar2) * 2.0) * 3.0;
          pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
        } while (iVar24 != 0);
      }
      if (uVar17 < uVar25) {
        iVar21 = uVar17 << 4;
        iVar24 = uVar25 - uVar17;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 4) + 0x10 + iVar21);
          pfVar19 = (float *)(*(int *)(param_1 + 4) + iVar21);
          fVar3 = pfVar19[-3];
          fVar4 = pfVar19[5];
          fVar5 = pfVar19[-2];
          fVar6 = pfVar19[6];
          fVar7 = pfVar19[-1];
          fVar8 = pfVar19[7];
          fVar9 = pfVar19[1];
          fVar10 = pfVar19[2];
          fVar11 = pfVar19[3];
          pfVar20 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
          iVar21 = iVar21 + 0x10;
          iVar24 = iVar24 + -1;
          *pfVar20 = ((*pfVar18 + pfVar19[-4]) - *pfVar19 * 2.0) * 3.0;
          pfVar20[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
          pfVar20[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
          pfVar20[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
        } while (iVar24 != 0);
      }
    }
    uVar17 = 1;
    if (1 < uVar25) {
      if (3 < (int)(param_3 - 2)) {
        iVar21 = 0x10;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
          fVar3 = (float)(&DAT_01dd8f60)[uVar17];
          *pfVar18 = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + iVar21) - pfVar18[-4]);
          pfVar18[1] = (pfVar18[1] - pfVar18[-3]) * fVar3;
          pfVar18[2] = (pfVar18[2] - pfVar18[-2]) * fVar3;
          pfVar18[3] = fVar3 * (pfVar18[3] - pfVar18[-1]);
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
          fVar3 = (float)(&DAT_01dd8f64)[uVar17];
          pfVar18[4] = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar21) - *pfVar18);
          pfVar18[5] = (pfVar18[5] - pfVar18[1]) * fVar3;
          pfVar18[6] = (pfVar18[6] - pfVar18[2]) * fVar3;
          pfVar18[7] = fVar3 * (pfVar18[7] - pfVar18[3]);
          iVar24 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(iVar24 + 0x14 + iVar21);
          fVar4 = *(float *)(iVar24 + 0x18 + iVar21);
          fVar5 = *(float *)(iVar24 + 0x1c + iVar21);
          fVar6 = (float)(&DAT_01dd8f68)[uVar17];
          *(float *)(iVar21 + 0x20 + iVar24) =
               fVar6 * (*(float *)(iVar21 + 0x20 + iVar24) - *(float *)(iVar24 + 0x10 + iVar21));
          *(float *)(iVar21 + 0x24 + iVar24) = (*(float *)(iVar21 + 0x24 + iVar24) - fVar3) * fVar6;
          *(float *)(iVar21 + 0x28 + iVar24) = (*(float *)(iVar21 + 0x28 + iVar24) - fVar4) * fVar6;
          uVar17 = uVar17 + 4;
          *(float *)(iVar21 + 0x2c + iVar24) = fVar6 * (*(float *)(iVar21 + 0x2c + iVar24) - fVar5);
          iVar24 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(uVar17 * 4 + 0x1dd8f5c);
          *(float *)(iVar21 + 0x30 + iVar24) =
               fVar3 * (*(float *)(iVar21 + 0x30 + iVar24) - *(float *)(iVar21 + 0x20 + iVar24));
          *(float *)(iVar21 + 0x34 + iVar24) =
               (*(float *)(iVar21 + 0x34 + iVar24) - *(float *)(iVar21 + 0x24 + iVar24)) * fVar3;
          *(float *)(iVar21 + 0x38 + iVar24) =
               (*(float *)(iVar21 + 0x38 + iVar24) - *(float *)(iVar21 + 0x28 + iVar24)) * fVar3;
          *(float *)(iVar21 + 0x3c + iVar24) =
               fVar3 * (*(float *)(iVar21 + 0x3c + iVar24) - *(float *)(iVar21 + 0x2c + iVar24));
          iVar21 = iVar21 + 0x40;
        } while (uVar17 < param_3 - 4);
      }
      if (uVar17 < uVar25) {
        iVar21 = uVar17 << 4;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
          pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
          uVar17 = uVar17 + 1;
          iVar21 = iVar21 + 0x10;
          fVar3 = *(float *)(uVar17 * 4 + 0x1dd8f5c);
          *pfVar19 = fVar3 * (*pfVar18 - pfVar19[-4]);
          pfVar19[1] = (pfVar19[1] - pfVar19[-3]) * fVar3;
          pfVar19[2] = (pfVar19[2] - pfVar19[-2]) * fVar3;
          pfVar19[3] = fVar3 * (pfVar19[3] - pfVar19[-1]);
        } while (uVar17 < uVar25);
      }
    }
    iVar21 = param_3 - 2;
    if (iVar21 != 0) {
      iVar24 = iVar21 * 0x10;
      do {
        fVar3 = (float)(&DAT_01dd8f60)[iVar21] * -1.0;
        pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
        iVar24 = iVar24 + -0x10;
        iVar21 = iVar21 + -1;
        *pfVar18 = fVar3 * pfVar18[4] + *pfVar18;
        pfVar18[1] = pfVar18[1] + pfVar18[5] * fVar3;
        pfVar18[2] = pfVar18[2] + pfVar18[6] * fVar3;
        pfVar18[3] = pfVar18[3] + fVar3 * pfVar18[7];
      } while (iVar21 != 0);
    }
    iVar21 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar21 + iVar23) = 0;
    iVar21 = iVar21 + iVar23;
    *(undefined4 *)(iVar21 + 4) = 0;
    *(undefined4 *)(iVar21 + 8) = 0;
    *(undefined4 *)(iVar21 + 0xc) = 0;
    uVar17 = 0;
    if (3 < (int)uVar25) {
      iVar24 = (param_3 - 5 >> 2) + 1;
      uVar17 = iVar24 * 4;
      iVar21 = 0x20;
      do {
        iVar1 = iVar21 + -0x20;
        pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
        fVar3 = pfVar18[5];
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[7];
        fVar8 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar1);
        *pfVar19 = (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar1) - *pfVar18) * 0.33333334;
        pfVar19[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar19[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar19[3] = (fVar7 - fVar8) * 0.33333334;
        iVar1 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar21 + 4 + iVar1);
        fVar4 = *(float *)(iVar21 + -0xc + iVar1);
        fVar5 = *(float *)(iVar21 + 8 + iVar1);
        fVar6 = *(float *)(iVar21 + -8 + iVar1);
        fVar7 = *(float *)(iVar21 + 0xc + iVar1);
        fVar8 = *(float *)(iVar21 + -4 + iVar1);
        pfVar18 = (float *)(iVar21 + -0x10 + *(int *)(param_1 + 0x10));
        *pfVar18 = (*(float *)(iVar21 + iVar1) - *(float *)(iVar21 + -0x10 + iVar1)) * 0.33333334;
        pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
        iVar1 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar21 + 0x14 + iVar1);
        fVar4 = *(float *)(iVar21 + 4 + iVar1);
        fVar5 = *(float *)(iVar21 + 0x18 + iVar1);
        fVar6 = *(float *)(iVar21 + 8 + iVar1);
        fVar7 = *(float *)(iVar21 + 0x1c + iVar1);
        fVar8 = *(float *)(iVar21 + 0xc + iVar1);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar21);
        *pfVar18 = (*(float *)(iVar21 + 0x10 + iVar1) - *(float *)(iVar21 + iVar1)) * 0.33333334;
        pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
        iVar1 = *(int *)(param_1 + 0xc);
        fVar3 = *(float *)(iVar21 + 0x24 + iVar1);
        fVar4 = *(float *)(iVar21 + 0x14 + iVar1);
        fVar5 = *(float *)(iVar21 + 0x28 + iVar1);
        fVar6 = *(float *)(iVar21 + 0x18 + iVar1);
        fVar7 = *(float *)(iVar21 + 0x2c + iVar1);
        fVar8 = *(float *)(iVar21 + 0x1c + iVar1);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar21 + 0x10);
        iVar24 = iVar24 + -1;
        *pfVar18 = (*(float *)(iVar21 + 0x20 + iVar1) - *(float *)(iVar21 + 0x10 + iVar1)) *
                   0.33333334;
        pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
        iVar21 = iVar21 + 0x40;
      } while (iVar24 != 0);
    }
    if (uVar17 < uVar25) {
      iVar21 = uVar17 << 4;
      iVar24 = uVar25 - uVar17;
      do {
        pfVar18 = (float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar21);
        pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar21);
        fVar3 = pfVar19[5];
        fVar4 = pfVar19[1];
        fVar5 = pfVar19[6];
        fVar6 = pfVar19[2];
        fVar7 = pfVar19[7];
        fVar8 = pfVar19[3];
        pfVar20 = (float *)(*(int *)(param_1 + 0x10) + iVar21);
        iVar21 = iVar21 + 0x10;
        iVar24 = iVar24 + -1;
        *pfVar20 = (*pfVar18 - *pfVar19) * 0.33333334;
        pfVar20[1] = (fVar3 - fVar4) * 0.33333334;
        pfVar20[2] = (fVar5 - fVar6) * 0.33333334;
        pfVar20[3] = (fVar7 - fVar8) * 0.33333334;
      } while (iVar24 != 0);
    }
    puVar16 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar23);
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    uVar17 = 0;
    if (3 < (int)uVar25) {
      iVar21 = (param_3 - 5 >> 2) + 1;
      uVar17 = iVar21 * 4;
      iVar23 = 0x20;
      do {
        iVar24 = iVar23 + -0x20;
        pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar24);
        pfVar26 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
        fVar3 = pfVar18[5];
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[7];
        fVar8 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
        fVar9 = pfVar26[1];
        fVar10 = pfVar19[1];
        fVar11 = pfVar26[2];
        fVar12 = pfVar19[2];
        fVar13 = pfVar26[3];
        fVar14 = pfVar19[3];
        pfVar20 = (float *)(*(int *)(param_1 + 8) + iVar24);
        *pfVar20 = (*(float *)(*(int *)(param_1 + 4) + 0x10 + iVar24) - *pfVar18) -
                   (*pfVar26 + *pfVar19);
        pfVar20[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar20[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar20[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar24 = *(int *)(param_1 + 4);
        pfVar18 = (float *)(iVar23 + -0x10 + *(int *)(param_1 + 0xc));
        fVar3 = *(float *)(iVar23 + 4 + iVar24);
        fVar4 = *(float *)(iVar23 + -0xc + iVar24);
        fVar5 = *(float *)(iVar23 + 8 + iVar24);
        fVar6 = *(float *)(iVar23 + -8 + iVar24);
        fVar7 = *(float *)(iVar23 + 0xc + iVar24);
        fVar8 = *(float *)(iVar23 + -4 + iVar24);
        pfVar19 = (float *)(iVar23 + -0x10 + *(int *)(param_1 + 0x10));
        fVar9 = pfVar18[1];
        fVar10 = pfVar19[1];
        fVar11 = pfVar18[2];
        fVar12 = pfVar19[2];
        fVar13 = pfVar18[3];
        fVar14 = pfVar19[3];
        pfVar20 = (float *)(iVar23 + -0x10 + *(int *)(param_1 + 8));
        *pfVar20 = (*(float *)(iVar23 + iVar24) - *(float *)(iVar23 + -0x10 + iVar24)) -
                   (*pfVar18 + *pfVar19);
        pfVar20[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar20[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar20[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar1 = *(int *)(param_1 + 4);
        iVar24 = iVar23 + 0x10;
        pfVar20 = (float *)(*(int *)(param_1 + 0xc) + iVar23);
        fVar3 = *(float *)(iVar23 + 0x14 + iVar1);
        fVar4 = *(float *)(iVar23 + 4 + iVar1);
        fVar5 = *(float *)(iVar23 + 0x18 + iVar1);
        fVar6 = *(float *)(iVar23 + 8 + iVar1);
        fVar7 = *(float *)(iVar23 + 0x1c + iVar1);
        fVar8 = *(float *)(iVar23 + 0xc + iVar1);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar23);
        fVar9 = pfVar20[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar20[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar20[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar23);
        *pfVar19 = (*(float *)(iVar23 + 0x10 + iVar1) - *(float *)(iVar23 + iVar1)) -
                   (*pfVar20 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        iVar2 = *(int *)(param_1 + 4);
        iVar1 = iVar23 + 0x20;
        fVar3 = *(float *)(iVar23 + 0x24 + iVar2);
        fVar4 = *(float *)(iVar23 + 0x14 + iVar2);
        fVar5 = *(float *)(iVar23 + 0x28 + iVar2);
        fVar6 = *(float *)(iVar23 + 0x18 + iVar2);
        fVar7 = *(float *)(iVar23 + 0x2c + iVar2);
        fVar8 = *(float *)(iVar23 + 0x1c + iVar2);
        pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
        pfVar20 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
        fVar9 = pfVar20[1];
        fVar10 = pfVar18[1];
        fVar11 = pfVar20[2];
        fVar12 = pfVar18[2];
        fVar13 = pfVar20[3];
        fVar14 = pfVar18[3];
        pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar24);
        iVar23 = iVar23 + 0x40;
        iVar21 = iVar21 + -1;
        *pfVar19 = (*(float *)(iVar1 + iVar2) - *(float *)(iVar24 + iVar2)) - (*pfVar20 + *pfVar18);
        pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
      } while (iVar21 != 0);
    }
    if (uVar17 < uVar25) {
      iVar23 = uVar17 << 4;
      iVar21 = uVar25 - uVar17;
      do {
        pfVar18 = (float *)(*(int *)(param_1 + 4) + 0x10 + iVar23);
        pfVar19 = (float *)(*(int *)(param_1 + 4) + iVar23);
        pfVar22 = (float *)(*(int *)(param_1 + 0xc) + iVar23);
        fVar3 = pfVar19[5];
        fVar4 = pfVar19[1];
        fVar5 = pfVar19[6];
        fVar6 = pfVar19[2];
        fVar7 = pfVar19[7];
        fVar8 = pfVar19[3];
        pfVar20 = (float *)(*(int *)(param_1 + 0x10) + iVar23);
        fVar9 = pfVar22[1];
        fVar10 = pfVar20[1];
        fVar11 = pfVar22[2];
        fVar12 = pfVar20[2];
        fVar13 = pfVar22[3];
        fVar14 = pfVar20[3];
        pfVar26 = (float *)(*(int *)(param_1 + 8) + iVar23);
        iVar23 = iVar23 + 0x10;
        iVar21 = iVar21 + -1;
        *pfVar26 = (*pfVar18 - *pfVar19) - (*pfVar22 + *pfVar20);
        pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
        pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
        pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
      } while (iVar21 != 0);
    }
    *(uint *)(param_1 + 0x14) = param_3;
    return;
  }
  FUN_00dd5650(&DAT_016d98c0,param_3,*(uint *)(param_1 + 0x18));
  return;
}

// 00ECFA20  Spline<Hw::cVec4>::Spline<Hw::cVec4>_2  size=65  [class]
void __fastcall Spline<Hw::cVec4>::Spline<Hw::cVec4>_2(undefined4 *param_1)

{
  *param_1 = FixedSplineLerp<Hw::cVec4>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_1[10] != 0) {
    FUN_00dd3d90(param_1[8],0);
    param_1[10] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = vftable;
  return;
}

// 00ED07B0  Spline<Hw::cVec4>::Spline<Hw::cVec4>  size=112  [class]
void __fastcall Spline<Hw::cVec4>::Spline<Hw::cVec4>(int param_1)

{
  *(undefined ***)(param_1 + 0x544) = FixedSplineLerp<Hw::cVec4>::vftable;
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  if (*(int *)(param_1 + 0x56c) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x564),0);
    *(undefined4 *)(param_1 + 0x56c) = 0;
  }
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(undefined ***)(param_1 + 0x544) = vftable;
  cEspBase::cEspBase_5();
  return;
}

