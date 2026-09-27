// src/misc/Wind.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1E4F0..00C32920, 31 functions

#include "types.h"

// 00C1E4F0  Wind::Geometry::Module::vf00  size=31  [class]
undefined4 * __thiscall Wind::Geometry::Module::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C1E580  Wind::Geometry::GlobalModule::vf08  size=1  [class]
void Wind::Geometry::GlobalModule::vf08(void)

{
  return;
}

// 00C1E590  Wind::Geometry::GlobalModule::vf0C  size=3  [class]
void Wind::Geometry::GlobalModule::vf0C(void)

{
  return;
}

// 00C1E5A0  Wind::Geometry::Module::vf10  size=3  [class]
void Wind::Geometry::Module::vf10(void)

{
  return;
}

// 00C1E5B0  Wind::Geometry::Module::vf14  size=3  [class]
void Wind::Geometry::Module::vf14(void)

{
  return;
}

// 00C1E5C0  Wind::Geometry::Module::vf18  size=3  [class]
void Wind::Geometry::Module::vf18(void)

{
  return;
}

// 00C1E5D0  Wind::Geometry::GlobalModule::vf04  size=3  [class]
void Wind::Geometry::GlobalModule::vf04(void)

{
  return;
}

// 00C1E5E0  FUN_00c1e5e0  size=36  [between]
void __thiscall FUN_00c1e5e0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  }
  return;
}

// 00C1E610  Wind::Geometry::SphereModule::SphereModule  size=68  [class]
void __thiscall Wind::Geometry::SphereModule::SphereModule(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  if (*param_2 == 1) {
    param_1[1] = param_2;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0x3f800000;
    param_1[0xd] = *(undefined4 *)(param_1[1] + 4);
    param_1[0xe] = 0;
  }
  return;
}

// 00C1E670  Wind::Geometry::SphereModule::vf00  size=31  [class]
undefined4 * __thiscall Wind::Geometry::SphereModule::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Module::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C1E690  Wind::Geometry::SphereModule::vf04  size=179  [class]
void __thiscall Wind::Geometry::SphereModule::vf04(int *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(*param_1 + 8))();
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    fVar2 = *(float *)(iVar4 + 0xc);
    if (fVar2 <= 0.0) {
      fVar2 = 1.0;
    }
    else {
      fVar3 = (float)param_1[0xe];
      param_1[0xe] = (int)(fVar3 + param_2);
      if (fVar2 < fVar3 + param_2) {
        param_1[0xe] = (int)fVar2;
      }
      fVar2 = 1.0 - (float)param_1[0xe] / fVar2;
    }
    iVar5 = param_1[2];
    param_1[0xd] = (int)(param_2 * (float)param_1[0xc] * *(float *)(iVar4 + 8) * fVar2 +
                        (float)param_1[0xd]);
    if (iVar5 != 0) {
      pfVar1 = (float *)(param_1 + 8);
      D3DXVec3TransformNormal(pfVar1,param_1 + 4,iVar5 + 0x10);
      *pfVar1 = *pfVar1 + *(float *)(iVar5 + 0x40);
      param_1[9] = (int)(*(float *)(iVar5 + 0x44) + (float)param_1[9]);
      param_1[10] = (int)(*(float *)(iVar5 + 0x48) + (float)param_1[10]);
      return;
    }
    param_1[8] = param_1[4];
    param_1[9] = param_1[5];
    param_1[10] = param_1[6];
    param_1[0xb] = param_1[7];
  }
  return;
}

// 00C1E750  Wind::Geometry::SphereModule::vf0C  size=23  [class]
void __thiscall Wind::Geometry::SphereModule::vf0C(int *param_1,int param_2)

{
  param_1[2] = param_2;
  (**(code **)(*param_1 + 4))(0);
  return;
}

// 00C1E770  Wind::Geometry::SphereModule::vf10  size=43  [class]
void __thiscall Wind::Geometry::SphereModule::vf10(int *param_1,int *param_2)

{
  code *pcVar1;
  
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  pcVar1 = *(code **)(*param_1 + 4);
  param_1[7] = param_2[3];
  (*pcVar1)(0);
  return;
}

// 00C1E7A0  Wind::Geometry::SphereModule::vf18  size=34  [class]
void __thiscall Wind::Geometry::SphereModule::vf18(int *param_1,float param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 4);
  param_1[0xd] = (int)((param_2 / (float)param_1[0xc]) * (float)param_1[0xd]);
  param_1[0xc] = (int)param_2;
  (*pcVar1)(0);
  return;
}

// 00C1E920  FUN_00c1e920  size=328  [callgraph]
void __thiscall FUN_00c1e920(int *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*param_1 != 0) {
    param_1[2] = (int)(*(float *)(*param_1 + 4) * param_2 + (float)param_1[2]);
    param_1[6] = (int)(*(float *)(*param_1 + 0xc) * param_2 + (float)param_1[6]);
    fVar1 = (float)param_1[2];
    if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
      param_1[2] = (int)((float)param_1[2] - 6.2831855);
    }
    if (6.2831855 < (float)param_1[6] != ((float)param_1[6] == 6.2831855)) {
      param_1[6] = (int)((float)param_1[6] - 6.2831855);
    }
    param_1[3] = (int)(*(float *)(*param_1 + 0x14) * param_2 + (float)param_1[3]);
    param_1[7] = (int)(*(float *)(*param_1 + 0x1c) * param_2 + (float)param_1[7]);
    fVar1 = (float)param_1[3];
    if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
      param_1[3] = (int)((float)param_1[3] - 6.2831855);
    }
    if (6.2831855 < (float)param_1[7] != ((float)param_1[7] == 6.2831855)) {
      param_1[7] = (int)((float)param_1[7] - 6.2831855);
    }
    param_1[4] = (int)(*(float *)(*param_1 + 0x24) * param_2 + (float)param_1[4]);
    param_1[8] = (int)(*(float *)(*param_1 + 0x2c) * param_2 + (float)param_1[8]);
    fVar1 = (float)param_1[4];
    if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
      param_1[4] = (int)((float)param_1[4] - 6.2831855);
    }
    if (6.2831855 < (float)param_1[8] != ((float)param_1[8] == 6.2831855)) {
      param_1[8] = (int)((float)param_1[8] - 6.2831855);
    }
    param_1[5] = (int)(*(float *)(*param_1 + 0x34) * param_2 + (float)param_1[5]);
    param_1[9] = (int)(*(float *)(*param_1 + 0x3c) * param_2 + (float)param_1[9]);
    fVar1 = (float)param_1[5];
    if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
      param_1[5] = (int)((float)param_1[5] - 6.2831855);
    }
    if (6.2831855 < (float)param_1[9] != ((float)param_1[9] == 6.2831855)) {
      param_1[9] = (int)((float)param_1[9] - 6.2831855);
    }
    iVar4 = 4;
    pfVar2 = (float *)(param_1 + 6);
    pfVar3 = (float *)*param_1;
    fVar7 = (float10)1;
    do {
      fVar5 = (float10)fcos((float10)pfVar2[-4]);
      iVar4 = iVar4 + -1;
      fVar6 = (float10)fcos((float10)*pfVar2);
      fVar7 = (fVar6 * (float10)pfVar3[2] + (float10)1) * (fVar5 * (float10)*pfVar3 + fVar7);
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 4;
    } while (iVar4 != 0);
    param_1[10] = (int)(float)fVar7;
  }
  return;
}

// 00C1EA90  FUN_00c1ea90  size=142  [callgraph]
void __thiscall FUN_00c1ea90(int *param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  unkbyte10 Var4;
  
  if (*param_1 != 0) {
    iVar2 = 0;
    pfVar1 = (float *)(param_1 + 6);
    do {
      fVar3 = (float10)FUN_00ddba30(pfVar1[-4] + param_3);
      Var4 = FUN_00ddba30(param_3 + *pfVar1);
      fcos(Var4);
      iVar2 = iVar2 + 0x10;
      pfVar1 = pfVar1 + 1;
      fcos((float10)(float)fVar3);
    } while (iVar2 < 0x40);
  }
  return;
}

// 00C31A00  Wind::Geometry::GlobalModule::vf00  size=31  [class]
undefined4 * __thiscall Wind::Geometry::GlobalModule::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Module::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C31A20  FUN_00c31a20  size=149  [between]
void __thiscall
FUN_00c31a20(int param_1,undefined4 *param_2,float *param_3,float *param_4,float param_5)

{
  float10 fVar1;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (param_5 != 0.0)) {
    fVar1 = (float10)FUN_00c1ea90(param_5,((param_4[2] * *(float *)(param_1 + 0x18) +
                                           *param_4 * *(float *)(param_1 + 0x10) +
                                           param_4[1] * *(float *)(param_1 + 0x14)) * -1.0471976) /
                                          param_5);
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    param_2[1] = *(undefined4 *)(param_1 + 0x14);
    param_2[2] = *(undefined4 *)(param_1 + 0x18);
    param_2[3] = *(undefined4 *)(param_1 + 0x1c);
    *param_3 = (float)fVar1;
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  *param_3 = param_5;
  return;
}

// 00C31AC0  Wind::Geometry::SphereModule::vf08  size=24  [class]
void __fastcall Wind::Geometry::SphereModule::vf08(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && ((*(byte *)(*(int *)(param_1 + 8) + 0x4c8) & 3) != 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C31AE0  Wind::Geometry::SphereModule::vf1C  size=429  [class]
void __thiscall
Wind::Geometry::SphereModule::vf1C
          (int param_1,undefined4 *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 4) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0x3f800000;
    *param_3 = param_5;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar4 = *(float *)(iVar2 + 0x18) * *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(iVar2 + 0x14) * *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(iVar2 + 0x10) * *(float *)(param_1 + 0x30);
  local_20 = *param_4 - *(float *)(param_1 + 0x20);
  local_1c = param_4[1] - *(float *)(param_1 + 0x24);
  local_18 = param_4[2] - *(float *)(param_1 + 0x28);
  local_14 = param_4[3] - *(float *)(param_1 + 0x2c);
  fVar6 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
  fVar5 = SQRT(fVar6);
  fVar3 = fVar7 + fVar1;
  if (((fVar5 <= fVar3 + fVar4) && (fVar1 - (fVar8 + fVar7) <= fVar5)) && (fVar5 != 0.0)) {
    if (fVar5 <= fVar3) {
      if (fVar1 - fVar7 <= fVar5) {
        *param_3 = param_5;
      }
      else {
        *param_3 = (1.0 - ((fVar1 - fVar7) - fVar5) / fVar8) * param_5;
      }
    }
    else {
      *param_3 = (1.0 - (fVar5 - fVar3) / fVar4) * param_5;
    }
    if (0.0 < fVar6) {
      FUN_00ddf460(param_2,&local_20);
      return;
    }
    FUN_00dd5650(&DAT_0163d0ac);
    *param_2 = 0;
    param_2[1] = 0x3f800000;
    param_2[2] = 0;
    return;
  }
  *param_3 = 0.0;
  return;
}

// 00C31C90  FUN_00c31c90  size=139  [between]
void __thiscall FUN_00c31c90(float *param_1,float param_2)

{
  if (*param_1 != -1.0) {
    if (*param_1 < param_2) {
      return;
    }
    if (*param_1 != -1.0) {
      param_1[1] = (param_1[1] / *param_1) * param_2;
      goto LAB_00c31cd4;
    }
  }
  param_1[1] = 0.0;
LAB_00c31cd4:
  *param_1 = param_2;
  if (param_2 == -1.0) {
    return;
  }
  if (param_2 < param_1[1]) {
    param_1[1] = param_2;
  }
  if (0.0 < param_2) {
    param_1[2] = 1.0 - param_1[1] / param_2;
    return;
  }
  param_1[2] = 0.0;
  return;
}

// 00C31D20  FUN_00c31d20  size=79  [between]
void __thiscall FUN_00c31d20(undefined4 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  pfVar3 = (float *)*param_1;
  if (pfVar3 != (float *)0x0) {
    fVar1 = *pfVar3;
    fVar2 = (float)param_1[1];
    param_1[1] = fVar2 + param_2;
    if (fVar1 < fVar2 + param_2) {
      param_1[1] = fVar1;
    }
    fVar2 = pfVar3[1] * (float)param_1[2];
    param_1[2] = fVar2;
    if (0.0 < fVar1) {
      param_1[3] = fVar2 * (1.0 - ((float)param_1[1] / fVar1) * ((float)param_1[1] / fVar1));
      return;
    }
    param_1[3] = fVar2;
  }
  return;
}

// 00C31D70  FUN_00c31d70  size=360  [between]
void __thiscall FUN_00c31d70(int *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  if (*param_1 == 0) {
    return;
  }
  param_1[2] = (int)(*(float *)(*param_1 + 4) * 0.0 + (float)param_1[2]);
  param_1[6] = (int)(*(float *)(*param_1 + 0xc) * 0.0 + (float)param_1[6]);
  fVar1 = (float)param_1[2];
  if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
    param_1[2] = (int)((float)param_1[2] - 6.2831855);
  }
  if (6.2831855 < (float)param_1[6] != ((float)param_1[6] == 6.2831855)) {
    param_1[6] = (int)((float)param_1[6] - 6.2831855);
  }
  param_1[3] = (int)(*(float *)(*param_1 + 0x14) * 0.0 + (float)param_1[3]);
  param_1[7] = (int)(*(float *)(*param_1 + 0x1c) * 0.0 + (float)param_1[7]);
  fVar1 = (float)param_1[3];
  if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
    param_1[3] = (int)((float)param_1[3] - 6.2831855);
  }
  if (6.2831855 < (float)param_1[7] != ((float)param_1[7] == 6.2831855)) {
    param_1[7] = (int)((float)param_1[7] - 6.2831855);
  }
  param_1[4] = (int)(*(float *)(*param_1 + 0x24) * 0.0 + (float)param_1[4]);
  param_1[8] = (int)(*(float *)(*param_1 + 0x2c) * 0.0 + (float)param_1[8]);
  fVar1 = (float)param_1[4];
  if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
    param_1[4] = (int)((float)param_1[4] - 6.2831855);
  }
  if (6.2831855 < (float)param_1[8] != ((float)param_1[8] == 6.2831855)) {
    param_1[8] = (int)((float)param_1[8] - 6.2831855);
  }
  param_1[5] = (int)(*(float *)(*param_1 + 0x34) * 0.0 + (float)param_1[5]);
  param_1[9] = (int)(*(float *)(*param_1 + 0x3c) * 0.0 + (float)param_1[9]);
  fVar1 = (float)param_1[5];
  if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
    param_1[5] = (int)((float)param_1[5] - 6.2831855);
  }
  if (6.2831855 < (float)param_1[9] != ((float)param_1[9] == 6.2831855)) {
    param_1[9] = (int)((float)param_1[9] - 6.2831855);
  }
  iVar4 = 4;
  pfVar2 = (float *)(param_1 + 6);
  pfVar3 = (float *)*param_1;
  fVar7 = (float10)1;
  do {
    fVar5 = (float10)fcos((float10)pfVar2[-4]);
    iVar4 = iVar4 + -1;
    fVar6 = (float10)fcos((float10)*pfVar2);
    fVar7 = (fVar6 * (float10)pfVar3[2] + (float10)1) * (fVar5 * (float10)*pfVar3 + fVar7);
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 4;
  } while (iVar4 != 0);
  param_1[10] = (int)(float)fVar7;
  return;
}

// 00C31EE0  FUN_00c31ee0  size=266  [between]
void __fastcall FUN_00c31ee0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float local_4;
  
  fVar1 = (float)param_1[2];
  fVar6 = 0.0;
  iVar7 = *(int *)(*param_1 + 0x10);
  local_4 = 0.0;
  iVar11 = 0;
  iVar10 = 0;
  if (3 < iVar7) {
    pfVar8 = (float *)(*(int *)(*param_1 + 4) + 0xc0);
    iVar9 = (iVar7 - 4U >> 2) + 1;
    iVar10 = iVar9 * 4;
    do {
      fVar2 = pfVar8[-0x1c];
      if (fVar1 < fVar2) {
        iVar11 = iVar11 + 1;
      }
      fVar3 = *pfVar8;
      if (fVar1 < fVar3) {
        iVar11 = iVar11 + 1;
      }
      fVar4 = pfVar8[0x1c];
      if (fVar1 < fVar4) {
        iVar11 = iVar11 + 1;
      }
      fVar5 = pfVar8[0x38];
      if (fVar1 < fVar5) {
        iVar11 = iVar11 + 1;
      }
      pfVar8 = pfVar8 + 0x70;
      iVar9 = iVar9 + -1;
      fVar6 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar6;
      local_4 = fVar6;
    } while (iVar9 != 0);
  }
  if (iVar10 < iVar7) {
    pfVar8 = (float *)(*(int *)(*param_1 + 4) + 0x50 + iVar10 * 0x70);
    iVar10 = iVar7 - iVar10;
    do {
      fVar6 = *pfVar8;
      if (fVar1 < fVar6) {
        iVar11 = iVar11 + 1;
      }
      pfVar8 = pfVar8 + 0x1c;
      iVar10 = iVar10 + -1;
      local_4 = fVar6 * fVar6 + local_4;
    } while (iVar10 != 0);
  }
  if ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2 < iVar11) {
    iVar10 = FUN_00e5e170(param_1[4],*(undefined4 *)*param_1,param_1[3],0);
    param_1[5] = iVar10;
    FUN_00e5cac0(iVar10,"bending",local_4 * 57.29578);
  }
  return;
}

// 00C31FF0  FUN_00c31ff0  size=208  [between]
void __fastcall FUN_00c31ff0(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float local_8;
  
  fVar1 = 0.0;
  local_8 = 0.0;
  iVar2 = *(int *)(*param_1 + 0x10);
  iVar5 = 0;
  if (3 < iVar2) {
    iVar4 = (iVar2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    pfVar3 = (float *)(*(int *)(*param_1 + 4) + 0xc0);
    do {
      iVar4 = iVar4 + -1;
      fVar1 = pfVar3[0x38] * pfVar3[0x38] +
              pfVar3[0x1c] * pfVar3[0x1c] +
              *pfVar3 * *pfVar3 + pfVar3[-0x1c] * pfVar3[-0x1c] + fVar1;
      pfVar3 = pfVar3 + 0x70;
      local_8 = fVar1;
    } while (iVar4 != 0);
  }
  if (iVar5 < iVar2) {
    pfVar3 = (float *)(*(int *)(*param_1 + 4) + 0x50 + iVar5 * 0x70);
    iVar5 = iVar2 - iVar5;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 0x1c;
      iVar5 = iVar5 + -1;
      local_8 = fVar1 * fVar1 + local_8;
    } while (iVar5 != 0);
  }
  iVar5 = thunk_FUN_00e58ed0(param_1[5]);
  if (iVar5 != 0) {
    FUN_00e5cac0(param_1[5],"bending",SQRT(local_8 / (float)iVar2) * 57.29578);
    return;
  }
  param_1[5] = 0;
  return;
}

// 00C320C0  FUN_00c320c0  size=720  [between]
/* WARNING: Removing unreachable block (ram,0x00c3213c) */

undefined4 __thiscall
FUN_00c320c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  if (param_1[1] != 0) {
    return 0;
  }
  iVar2 = FUN_00a12210(param_3);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xa8) != 0)) {
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 6;
    *param_1 = param_3;
    param_1[1] = iVar2;
    param_1[2] = *(undefined4 *)(iVar2 + 0xa8);
    param_1[0xc] = *(undefined4 *)(iVar2 + 0x40);
    param_1[0xd] = *(undefined4 *)(iVar2 + 0x44);
    param_1[0xe] = *(undefined4 *)(iVar2 + 0x48);
    param_1[0xf] = *(undefined4 *)(iVar2 + 0x4c);
    pfVar3 = (float *)(iVar2 + 0x50);
    fVar1 = *(float *)(iVar2 + 0x58) * *(float *)(iVar2 + 0x58) +
            *pfVar3 * *pfVar3 + *(float *)(iVar2 + 0x54) * *(float *)(iVar2 + 0x54);
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(param_1 + 8,pfVar3);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      param_1[8] = 0;
      param_1[9] = 0x3f800000;
      param_1[10] = 0;
    }
    param_1[4] = *pfVar3;
    param_1[5] = *(undefined4 *)(iVar2 + 0x54);
    param_1[6] = *(undefined4 *)(iVar2 + 0x58);
    param_1[7] = *(undefined4 *)(iVar2 + 0x5c);
    param_1[0x16] = *param_4;
    param_1[0x17] = param_4[1];
    param_1[0x18] = param_4[2];
    param_1[0x19] = param_4[3];
    param_1[0x1a] = param_4[4];
    param_1[0x1b] = param_4[5];
    fVar4 = (float10)FUN_00dde300(-(float)param_1[0x16],param_1[0x16]);
    param_1[0x17] = (float)((fVar4 + (float10)1.0) * (float10)(float)param_1[0x17]);
    fVar4 = (float10)FUN_00dde300(-(float)param_1[0x16],param_1[0x16]);
    param_1[0x18] = (float)((fVar4 + (float10)1.0) * (float10)(float)param_1[0x18]);
    fVar4 = (float10)FUN_00dde300(-(float)param_1[0x16],param_1[0x16]);
    param_1[0x19] = (float)((fVar4 + (float10)1.0) * (float10)(float)param_1[0x19]);
    fVar4 = (float10)FUN_00dde300(-(float)param_1[0x16],param_1[0x16]);
    param_1[0x1a] = (float)((fVar4 + (float10)1.0) * (float10)(float)param_1[0x1a]);
    fVar4 = (float10)FUN_00dde300(-(float)param_1[0x16],param_1[0x16]);
    fVar5 = (fVar4 + (float10)1.0) * (float10)(float)param_1[0x1b];
    param_1[0x1b] = (float)fVar5;
    fVar6 = (float10)(float)param_1[0x19];
    fVar4 = (float10)0;
    fVar7 = (float10)0.999;
    fVar8 = fVar4;
    if ((fVar4 <= fVar6) && (fVar8 = fVar6, fVar7 < fVar6)) {
      fVar8 = fVar7;
    }
    param_1[0x19] = (float)fVar8;
    fVar6 = (float10)(float)param_1[0x1a];
    fVar8 = fVar4;
    if ((fVar4 <= fVar6) && (fVar8 = fVar6, fVar7 < fVar6)) {
      fVar8 = fVar7;
    }
    param_1[0x1a] = (float)fVar8;
    if (fVar5 < fVar4) {
      param_1[0x1b] = (float)fVar4;
      param_1[0x14] = (float)fVar4;
      param_1[0x15] = (float)fVar4;
      return 1;
    }
    if (fVar7 < fVar5) {
      param_1[0x1b] = (float)fVar7;
      param_1[0x14] = (float)fVar4;
      param_1[0x15] = (float)fVar4;
      return 1;
    }
    param_1[0x1b] = (float)fVar5;
    param_1[0x14] = (float)fVar4;
    param_1[0x15] = (float)fVar4;
    return 1;
  }
  return 0;
}

// 00C32390  FUN_00c32390  size=173  [between]
void __thiscall FUN_00c32390(int param_1,float *param_2)

{
  float fVar1;
  
  D3DXVec3TransformNormal(param_2,param_1 + 0x20,*(int *)(param_1 + 8) + 0x10);
  fVar1 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
    return;
  }
  FUN_00ddf460(param_2,param_2);
  return;
}

// 00C32440  FUN_00c32440  size=484  [between]
void __thiscall FUN_00c32440(int param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 8);
  local_70 = *param_3 - *(float *)(iVar1 + 0x40);
  local_6c = param_3[1] - *(float *)(iVar1 + 0x44);
  local_68 = param_3[2] - *(float *)(iVar1 + 0x48);
  local_64 = param_3[3] - *(float *)(iVar1 + 0x4c);
  fVar2 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_70,&local_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_70 = 0.0;
    local_6c = 1.0;
    local_68 = 0.0;
  }
  fVar3 = (float10)FUN_00ddbb50((param_4[1] * local_6c + *param_4 * local_70 + param_4[2] * local_68
                                ) / (SQRT(param_4[2] * param_4[2] +
                                          *param_4 * *param_4 + param_4[1] * param_4[1]) *
                                    SQRT(local_68 * local_68 +
                                         local_70 * local_70 + local_6c * local_6c)));
  if (ABS(fVar3) <= (float10)0.0017453292) {
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    param_2[2] = param_4[2];
    param_2[3] = param_4[3];
    return;
  }
  local_60 = param_4[1] * local_68 - param_4[2] * local_6c;
  local_5c = param_4[2] * local_70 - *param_4 * local_68;
  local_58 = *param_4 * local_6c - local_70 * param_4[1];
  FUN_00ddcfe0(local_50,&local_60,(float)(fVar3 + fVar3));
  D3DXVec3TransformNormal(param_2,param_4,local_50);
  return;
}

// 00C32630  FUN_00c32630  size=484  [between]
void __thiscall
FUN_00c32630(int param_1,undefined4 *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float unaff_EBX;
  float10 fVar4;
  float10 fVar5;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  fVar4 = (float10)FUN_00ddbb50((param_4[2] * param_5[2] +
                                param_4[1] * param_5[1] + *param_4 * *param_5) /
                                (SQRT(param_5[2] * param_5[2] +
                                      *param_5 * *param_5 + param_5[1] * param_5[1]) *
                                SQRT(param_4[2] * param_4[2] +
                                     *param_4 * *param_4 + param_4[1] * param_4[1])));
  if (ABS(fVar4) <= (float10)0.0017453292) {
    *param_2 = 0;
    param_2[1] = 0x3f800000;
    param_2[2] = 0;
    *param_3 = 0.0;
    return;
  }
  local_6c = param_4[2] * param_5[1] - param_4[1] * param_5[2];
  local_68 = *param_4 * param_5[2] - param_4[2] * *param_5;
  local_64 = param_4[1] * *param_5 - *param_4 * param_5[1];
  fVar3 = (float10)-1.0471976;
  if ((fVar4 <= (float10)-1.0471976) || (fVar5 = (float10)1.0471976, fVar3 = fVar4, fVar4 <= fVar5))
  {
    fVar5 = fVar3;
  }
  iVar1 = *(int *)(param_1 + 8);
  *param_3 = (float)fVar5;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  D3DXMatrixInverse(local_50,0,iVar1 + 0x10);
  D3DXVec3TransformNormal(&local_6c,&local_6c,&local_5c);
  fVar2 = fStack_70 * fStack_70 + fStack_74 * fStack_74 + unaff_EBX * unaff_EBX;
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_2 = 0;
    param_2[1] = 0x3f800000;
    param_2[2] = 0;
    return;
  }
  FUN_00ddf460(param_2,&stack0xffffff88);
  return;
}

// 00C32850  FUN_00c32850  size=196  [between]
void __fastcall FUN_00c32850(int param_1)

{
  float fVar1;
  int *extraout_ECX;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(0x3d088889);
    }
    if (*(float *)(param_1 + 0xc) != -1.0) {
      fVar1 = *(float *)(param_1 + 0x10) + 0.033333335;
      *(float *)(param_1 + 0x10) = fVar1;
      if (*(float *)(param_1 + 0xc) < fVar1) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
      }
      fVar1 = 0.0;
      if (0.0 < *(float *)(param_1 + 0xc)) {
        fVar1 = 1.0 - *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0xc);
      }
      *(float *)(param_1 + 0x14) = fVar1;
    }
    FUN_00c31d20(0x3d088889);
    FUN_00c1e920(0x3d088889);
    fVar1 = *(float *)(param_1 + 0x54);
    if (*(float *)(param_1 + 0xc) != -1.0) {
      fVar1 = fVar1 * *(float *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      fVar1 = fVar1 * *(float *)(param_1 + 0x24);
    }
    if ((*extraout_ECX != 0) && (extraout_ECX[1] == 0)) {
      fVar1 = fVar1 * (float)extraout_ECX[10];
    }
    *(float *)(param_1 + 0x58) = fVar1;
  }
  return;
}

// 00C32920  Wind::Geometry::GlobalModule::GlobalModule  size=410  [class]
void __thiscall
Wind::Geometry::GlobalModule::GlobalModule
          (int param_1,int param_2,float *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = param_4;
  *(undefined4 *)(param_1 + 0x58) = param_4;
  if (*(int *)*param_6 == 0) {
    puVar5 = (undefined4 *)FUN_00dd34e0(0x30);
    if (puVar5 == (undefined4 *)0x0) {
LAB_00c329ad:
      puVar5 = (undefined4 *)0x0;
    }
    else {
      piVar1 = (int *)*param_6;
      *puVar5 = vftable;
      puVar5[1] = 0;
      if (*piVar1 == 0) {
        puVar5[1] = piVar1;
        puVar5[8] = param_1 + 0x28;
        if (param_1 + 0x28 != 0) {
          *(undefined4 *)(param_1 + 0x2c) = 1;
        }
      }
    }
  }
  else {
    if (*(int *)*param_6 != 1) goto LAB_00c329b2;
    iVar4 = FUN_00dd34e0(0x40);
    if (iVar4 == 0) goto LAB_00c329ad;
    puVar5 = (undefined4 *)SphereModule::SphereModule(*param_6);
  }
  *(undefined4 **)(param_1 + 8) = puVar5;
LAB_00c329b2:
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
    }
    if (param_3 != (float *)0x0) {
      fVar3 = param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1];
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        FUN_00ddf460(&uStack_20,param_3);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        uStack_20 = 0;
        uStack_1c = 0x3f800000;
        uStack_18 = 0;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(&uStack_20);
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_5);
    uVar2 = param_6[1];
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    FUN_00c31d70(param_6[2]);
    *(undefined4 **)(param_1 + 4) = param_6;
  }
  return;
}

