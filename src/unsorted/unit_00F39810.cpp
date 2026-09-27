// src/unsorted/unit_00F39810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F39810..00F3AC60, 16 functions

#include "mgrr.h"

// 00F39810  FUN_00f39810  size=52  [run]
undefined4 __thiscall FUN_00f39810(float *param_1,int param_2)

{
  if ((param_1[1] < (float)param_2) && ((float)param_2 <= *param_1)) {
    return 1;
  }
  return 0;
}

// 00F39850  FUN_00f39850  size=33  [run]
bool FUN_00f39850(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00fdbc60();
  iVar2 = FUN_00fdbc60();
  return iVar1 != iVar2;
}

// 00F39880  FUN_00f39880  size=53  [run]
undefined4 FUN_00f39880(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00fdbc60();
  iVar2 = FUN_00fdbc60();
  if ((iVar2 != iVar1) && (iVar1 % param_1 == 0)) {
    return 1;
  }
  return 0;
}

// 00F398C0  FUN_00f398c0  size=97  [run]
void __thiscall FUN_00f398c0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = *param_3 + param_4 * *param_1;
  param_2[1] = param_3[1] + fVar1 * param_4;
  param_2[2] = param_3[2] + fVar2 * param_4;
  param_2[3] = param_3[3] + param_4 * fVar3;
  return;
}

// 00F39A80  FUN_00f39a80  size=239  [run]
/* WARNING: Removing unreachable block (ram,0x00f39b40) */

void FUN_00f39a80(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *param_2;
  puVar4 = (uint *)param_2[3];
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  FUN_00dde300(0,0x3f800000);
  FUN_00dde300(0,0x3f800000);
  fVar6 = (float10)FUN_00fdef70();
  fVar7 = (float10)FUN_00fdee60();
  *param_1 = (float)fVar7 * fVar1 * (float)fVar6;
  fVar7 = (float10)FUN_00fded30();
  param_1[2] = (float)fVar7 * fVar3 * (float)fVar6;
  uVar5 = *puVar4 * 0x19660d + 0x3c6ef35f;
  *puVar4 = uVar5;
  fVar1 = (float)(uVar5 >> 8) * 5.960465e-08;
  param_1[1] = (1.0 - (fVar1 + fVar1)) * fVar2;
  return;
}

// 00F39D60  FUN_00f39d60  size=273  [run]
void FUN_00f39d60(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  FUN_00dde300(0,0x3f800000);
  FUN_00dde300(0,0x3f800000);
  fVar4 = (float10)FUN_00fdef70();
  fVar5 = (float10)FUN_00dde300(0,0x3f800000);
  param_2 = (float *)(float)fVar5;
  if (fVar2 != 0.0) {
    param_2 = (float *)(1.0 - ((fVar3 / fVar2) * (float)param_2 + (fVar2 - fVar3) / fVar2));
  }
  fVar2 = ((float)param_2 - 0.5) * fVar2;
  param_1[1] = fVar2 + fVar2;
  fVar5 = (float10)FUN_00fdee60();
  *param_1 = (float)fVar5 * fVar1 * (float)fVar4 * (1.0 - (float)param_2);
  fVar5 = (float10)FUN_00fded30();
  param_1[2] = (float)fVar5 * fVar1 * (float)fVar4 * (1.0 - (float)param_2);
  return;
}

// 00F39E80  FUN_00f39e80  size=206  [run]
void FUN_00f39e80(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  FUN_00dde300(0,0x3f800000);
  FUN_00dde300(0,0x3f800000);
  fVar4 = (float10)FUN_00fded30();
  fVar5 = (float10)FUN_00fdee60();
  *param_1 = (float)fVar5 * fVar1 * (float)fVar4;
  fVar5 = (float10)FUN_00fded30();
  param_1[2] = (float)fVar5 * fVar3 * (float)fVar4;
  fVar4 = (float10)FUN_00fdee60();
  param_1[1] = (float)fVar4 * fVar2;
  return;
}

// 00F39F50  FUN_00f39f50  size=258  [run]
void FUN_00f39f50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  FUN_00dde300(0,0x3f800000);
  FUN_00dde300(0,0x3f800000);
  fVar6 = (float10)FUN_00fdef70();
  fVar7 = (float10)FUN_00dde300(0,0x3f800000);
  fVar4 = (float)fVar7 * (float)fVar7;
  fVar5 = 1.0 - fVar4;
  fVar4 = fVar2 * (fVar4 - 0.5);
  param_1[1] = -fVar2 + fVar4 + fVar4;
  fVar7 = (float10)FUN_00fdee60();
  *param_1 = (float)fVar7 * fVar1 * (float)fVar6 * fVar5;
  fVar7 = (float10)FUN_00fded30();
  param_1[2] = (float)fVar7 * fVar3 * (float)fVar6 * fVar5;
  return;
}

// 00F3A0D0  FUN_00f3a0d0  size=124  [run]
void __thiscall FUN_00f3a0d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_64 [4];
  undefined1 local_60 [24];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_64;
  uStack_74 = param_4;
  uStack_78 = 0;
  puStack_7c = local_60;
  D3DXMatrixInverse();
  pfVar1 = (float *)(param_1 + 0x20);
  D3DXVec3TransformNormal(pfVar1,param_3,&stack0xffffff94);
  *pfVar1 = *pfVar1 + fStack_48;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_44;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_40;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  __security_check_cookie(uStack_2c ^ (uint)&puStack_7c);
  return;
}

// 00F3A200  FUN_00f3a200  size=410  [run]
void __thiscall FUN_00f3a200(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  int local_30;
  
  fVar13 = (float10)FUN_00fddce0((double)param_3);
  fVar1 = (float)fVar13;
  iVar12 = *(int *)(param_1 + 0x14) + -1;
  fVar2 = (float)iVar12;
  if (iVar12 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar2 < fVar1) {
    fVar1 = fVar2;
  }
  iVar12 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0xc);
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0x10);
  local_30 = (int)(longlong)ROUND(fVar1);
  param_3 = param_3 - fVar1;
  fVar1 = *(float *)(iVar11 + 4 + local_30 * 0x10);
  fVar2 = *(float *)(iVar11 + 8 + local_30 * 0x10);
  fVar3 = *(float *)(iVar9 + 4 + local_30 * 0x10);
  fVar4 = *(float *)(iVar9 + 8 + local_30 * 0x10);
  fVar5 = *(float *)(iVar12 + 4 + local_30 * 0x10);
  fVar6 = *(float *)(iVar12 + 8 + local_30 * 0x10);
  fVar7 = *(float *)(iVar10 + 4 + local_30 * 0x10);
  fVar8 = *(float *)(iVar10 + 8 + local_30 * 0x10);
  *param_2 = *(float *)(iVar10 + local_30 * 0x10) +
             (*(float *)(iVar12 + local_30 * 0x10) +
             (*(float *)(iVar9 + local_30 * 0x10) + param_3 * *(float *)(iVar11 + local_30 * 0x10))
             * param_3) * param_3;
  param_2[1] = fVar7 + (fVar5 + (fVar3 + fVar1 * param_3) * param_3) * param_3;
  param_2[2] = fVar8 + param_3 * (fVar6 + (fVar4 + fVar2 * param_3) * param_3);
  return;
}

// 00F3A4A0  FUN_00f3a4a0  size=12  [run]
undefined4 __fastcall FUN_00f3a4a0(undefined4 param_1)

{
  FUN_00f59e40();
  return param_1;
}

// 00F3A570  FUN_00f3a570  size=41  [run]
float * FUN_00f3a570(float *param_1)

{
  float10 fVar1;
  
  if (*param_1 < 0.0) {
    fVar1 = (float10)FUN_00fdef70();
    *param_1 = (float)fVar1;
  }
  return param_1;
}

// 00F3A8F0  FUN_00f3a8f0  size=1  [run]
void FUN_00f3a8f0(void)

{
  return;
}

// 00F3AB20  FUN_00f3ab20  size=21  [run]
void FUN_00f3ab20(undefined4 param_1,undefined4 param_2)

{
  FUN_00f51070(param_1,0x10,param_2);
  return;
}

// 00F3AB40  FUN_00f3ab40  size=237  [run]
void FUN_00f3ab40(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_6 * param_6;
  fVar1 = fVar4 * param_6;
  fVar3 = (fVar1 * 2.0 - fVar4 * 3.0) + 0.0 + 1.0;
  param_6 = (fVar1 - fVar4 * 2.0) + param_6;
  fVar2 = fVar4 * 3.0 - fVar1 * 2.0;
  fVar1 = fVar1 - fVar4;
  *param_5 = fVar3 * *param_1 + param_6 * *param_2 + fVar2 * *param_3 + fVar1 * *param_4;
  param_5[1] = param_4[1] * fVar1 + param_3[1] * fVar2 + param_1[1] * fVar3 + param_2[1] * param_6;
  param_5[2] = fVar2 * param_3[2] + param_2[2] * param_6 + param_1[2] * fVar3 + param_4[2] * fVar1;
  return;
}

// 00F3AC60  FUN_00f3ac60  size=21  [run]
void FUN_00f3ac60(undefined4 param_1,undefined4 param_2)

{
  EspPrimitiveSystem::createIndexBuffer(param_1,2,param_2);
  return;
}

