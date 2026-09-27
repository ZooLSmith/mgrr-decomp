// src/unsorted/unit_00C1EBD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1EBD0..00C207D0, 26 functions

#include "types.h"

// 00C1EBD0  FUN_00c1ebd0  size=129  [run]
void __thiscall FUN_00c1ebd0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float fStack_28;
  float fStack_24;
  float local_20 [7];
  
  iVar4 = *(int *)(param_1 + 8);
  D3DXVec3TransformNormal(local_20,*(int *)(param_1 + 4) + 0x50,iVar4 + 0x10);
  fVar1 = *(float *)(iVar4 + 0x44);
  fVar2 = *(float *)(iVar4 + 0x48);
  fVar3 = *(float *)(param_1 + 0x68);
  *param_2 = ((*(float *)(iVar4 + 0x40) + unaff_ESI) - *param_2) * fVar3 + *param_2;
  param_2[1] = ((fVar1 + fStack_28) - param_2[1]) * fVar3 + param_2[1];
  param_2[2] = ((fVar2 + fStack_24) - param_2[2]) * fVar3 + param_2[2];
  param_2[3] = (local_20[0] - param_2[3]) * fVar3 + param_2[3];
  return;
}

// 00C1EC60  FUN_00c1ec60  size=75  [run]
void __thiscall FUN_00c1ec60(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined1 local_50 [76];
  
  fVar1 = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x50);
  if (0.0 < fVar1) {
    FUN_00ddcfe0(local_50,param_1 + 0x40,fVar1);
    D3DXVec3TransformNormal(param_2,param_2,local_50);
    return;
  }
  return;
}

// 00C1ECB0  FUN_00c1ecb0  size=286  [run]
void __thiscall FUN_00c1ecb0(int param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  fVar1 = (float10)FUN_00ddbb50((param_2[2] * param_3[2] +
                                param_2[1] * param_3[1] + *param_2 * *param_3) /
                                (SQRT(param_3[2] * param_3[2] +
                                      *param_3 * *param_3 + param_3[1] * param_3[1]) *
                                SQRT(param_2[2] * param_2[2] +
                                     *param_2 * *param_2 + param_2[1] * param_2[1])));
  if ((float10)0.0017453292 < ABS(fVar1)) {
    local_60 = param_2[2] * param_3[1] - param_2[1] * param_3[2];
    local_5c = *param_2 * param_3[2] - param_2[2] * *param_3;
    local_58 = param_2[1] * *param_3 - *param_2 * param_3[1];
    FUN_00ddcfe0(local_50,&local_60,
                 (float)(((float10)1 - (float10)*(float *)(param_1 + 100)) * fVar1));
    D3DXVec3TransformNormal(param_2,param_3,local_50);
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  return;
}

// 00C1EDD0  FUN_00c1edd0  size=390  [run]
void __thiscall FUN_00c1edd0(int param_1,float *param_2,float *param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if ((param_4 != 0.0) && (((*param_3 != 0.0 || (param_3[1] != 0.0)) || (param_3[2] != 0.0)))) {
    fVar1 = (float10)FUN_00ddbb50((param_2[2] * param_3[2] +
                                  *param_2 * *param_3 + param_2[1] * param_3[1]) /
                                  (SQRT(param_2[2] * param_2[2] +
                                        *param_2 * *param_2 + param_2[1] * param_2[1]) *
                                  SQRT(param_3[1] * param_3[1] + *param_3 * *param_3 +
                                       param_3[2] * param_3[2])));
    if (ABS(fVar1) <= (float10)0.0017453292) {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
      return;
    }
    local_60 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
    local_5c = *param_3 * param_2[2] - *param_2 * param_3[2];
    local_58 = *param_2 * param_3[1] - *param_3 * param_2[1];
    fVar2 = (float10)*(float *)(param_1 + 0x5c) * (float10)param_4;
    if ((float10)1 < fVar2) {
      fVar2 = (float10)1;
    }
    FUN_00ddcfe0(local_50,&local_60,(float)(fVar2 * fVar1));
    D3DXVec3TransformNormal(param_2,param_2,local_50);
    return;
  }
  return;
}

// 00C1EF60  FUN_00c1ef60  size=101  [run]
void __thiscall
FUN_00c1ef60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  undefined4 uStack_78;
  float local_74;
  undefined1 auStack_68 [100];
  
  local_74 = param_5;
  uStack_78 = param_4;
  D3DXQuaternionRotationAxis(param_3);
  D3DXQuaternionRotationAxis(&stack0xffffff94,param_4,param_5 * 0.5);
  FUN_00ddb9f0(auStack_68,&uStack_78);
  D3DXVec3TransformNormal(param_2,param_1 + 0x10,auStack_68);
  return;
}

// 00C1EFD0  FUN_00c1efd0  size=258  [run]
void __thiscall FUN_00c1efd0(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  D3DXVec3TransformNormal(local_20,param_1 + 0x20,*(int *)(param_1 + 4) + 0x10);
  fVar5 = (float10)FUN_00ddbb50((*param_4 * fStack_2c + param_4[1] * fStack_28 +
                                param_4[2] * fStack_24) /
                                (SQRT(param_4[2] * param_4[2] +
                                      *param_4 * *param_4 + param_4[1] * param_4[1]) *
                                SQRT(fStack_24 * fStack_24 +
                                     fStack_28 * fStack_28 + fStack_2c * fStack_2c)));
  if ((float10)0.0017453292 < ABS(fVar5)) {
    fVar1 = param_4[2];
    fVar2 = *param_4;
    fVar3 = *param_4;
    fVar4 = param_4[1];
    *param_2 = param_4[1] * fStack_24 - param_4[2] * fStack_28;
    param_2[1] = fVar1 * fStack_2c - fVar2 * fStack_24;
    param_2[2] = fVar3 * fStack_28 - fStack_2c * fVar4;
    *param_3 = (float)fVar5;
    return;
  }
  *param_3 = 0.0;
  return;
}

// 00C1F560  FUN_00c1f560  size=123  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1f560(void)

{
  DAT_01b76238 = 0;
  DAT_01b7623c = 0;
  DAT_01b76240 = 0;
  DAT_01b76244 = 0;
  DAT_01b76248 = 0;
  _DAT_01b7624c = 0;
  DAT_01b76250 = 0;
  _DAT_01b76254 = 0;
  DAT_01b76258 = 0;
  DAT_01b7625c = 0;
  DAT_01b76260 = 0;
  DAT_01b76264 = 0;
  DAT_01b76268 = 0;
  DAT_01b7626c = 0;
  DAT_01b76270 = 0;
  _DAT_01b76274 = 0;
  DAT_01b76278 = 0;
  DAT_01b7627c = 0;
  _DAT_01b76280 = 0;
  _DAT_01b76284 = 0;
  DAT_01b76288 = 0;
  DAT_01b7628c = 0;
  DAT_01b76290 = 0;
  _DAT_01b76294 = 0;
  return;
}

// 00C1F680  FUN_00c1f680  size=229  [run]
void __thiscall FUN_00c1f680(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_2 + 0x1e);
  iVar2 = 2;
  do {
    puVar1[-2] = *(undefined1 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-1] = (char)((uint)*(undefined4 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4) >> 8);
    *puVar1 = *(undefined1 *)(param_1 + 0x76 + *(int *)(param_1 + 0x70) * 4);
    puVar1[1] = *(undefined1 *)(param_1 + 0x77 + *(int *)(param_1 + 0x70) * 4);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    puVar1[-6] = *(undefined1 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-5] = (char)((uint)*(undefined4 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4) >> 8);
    puVar1[-4] = *(undefined1 *)(param_1 + 0x76 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-3] = *(undefined1 *)(param_1 + 0x77 + *(int *)(param_1 + 0x70) * 4);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    puVar1[-10] = *(undefined1 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-9] = (char)((uint)*(undefined4 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4) >> 8);
    puVar1[-8] = *(undefined1 *)(param_1 + 0x76 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-7] = *(undefined1 *)(param_1 + 0x77 + *(int *)(param_1 + 0x70) * 4);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    puVar1[-0xe] = *(undefined1 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-0xd] = (char)((uint)*(undefined4 *)(param_1 + 0x74 + *(int *)(param_1 + 0x70) * 4) >> 8)
    ;
    puVar1[-0xc] = *(undefined1 *)(param_1 + 0x76 + *(int *)(param_1 + 0x70) * 4);
    puVar1[-0xb] = *(undefined1 *)(param_1 + 0x77 + *(int *)(param_1 + 0x70) * 4);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    puVar1 = puVar1 + -0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C1F860  FUN_00c1f860  size=218  [run]
void __thiscall FUN_00c1f860(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  char local_18 [24];
  
  iVar1 = *param_4;
  while ((iVar1 < 0x10000 && (param_5 != 0))) {
    iVar1 = *param_4 * 8;
    _sprintf_s(local_18,0x16,"%04x-%02x%02x%02x%02x%02x%02x%02x%02x",iVar1,
               (uint)*(byte *)(param_1 + 0x208 + *param_4 * 8),
               (uint)*(byte *)(iVar1 + 0x209 + param_1),(uint)*(byte *)(iVar1 + 0x20a + param_1),
               (uint)*(byte *)(iVar1 + 0x20b + param_1),(uint)*(byte *)(iVar1 + 0x20c + param_1),
               (uint)*(byte *)(iVar1 + 0x20d + param_1),(uint)*(byte *)(iVar1 + 0x20e + param_1),
               (uint)*(byte *)(iVar1 + 0x20f + param_1));
    FUN_00f96580((float)param_2,(float)param_3,0x41200000,0xffffffff,1,local_18);
    param_3 = param_3 + 10;
    *param_4 = *param_4 + 1;
    iVar1 = *param_4;
    param_5 = param_5 + -1;
  }
  return;
}

// 00C1FFCA  FUN_00c1ffca  size=31  [run]
undefined4 FUN_00c1ffca(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = FUN_00a5f880(unaff_EDI,unaff_ESI,unaff_EBX);
  if (iVar1 != 0) {
    unaff_EBP = 3;
  }
  return unaff_EBP;
}

// 00C20050  FUN_00c20050  size=62  [run]
int FUN_00c20050(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a5f640(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00a5f6d0(param_1,param_2,1);
    return 3 - (uint)(iVar1 != 0);
  }
  return 1;
}

// 00C20100  FUN_00c20100  size=31  [run]
void FUN_00c20100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*(code *)(&PTR_LAB_018a9e68)[param_1])(param_2,param_3,param_4);
  return;
}

// 00C20120  FUN_00c20120  size=36  [run]
void FUN_00c20120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (*(code *)(&PTR_LAB_018a9e6c)[param_1])(param_2,param_3,param_4,param_5);
  return;
}

// 00C20150  FUN_00c20150  size=25  [run]
int __fastcall FUN_00c20150(int param_1)

{
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}

// 00C20180  FUN_00c20180  size=259  [run]
void __thiscall FUN_00c20180(int param_1,int *param_2)

{
  float10 fVar1;
  
  if (param_2 != (int *)0x0) {
    fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x10a);
    *(float *)(param_1 + 0x34) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x10a);
    *(float *)(param_1 + 0x38) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x10a);
    *(float *)(param_1 + 0x3c) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x109);
    *(float *)(param_1 + 0x24) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x10b);
    *(float *)(param_1 + 0x28) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x106);
    *(float *)(param_1 + 0x40) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x106);
    *(float *)(param_1 + 0x44) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x106);
    *(float *)(param_1 + 0x48) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x107);
    *(float *)(param_1 + 0x4c) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x107);
    *(float *)(param_1 + 0x50) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x107);
    *(float *)(param_1 + 0x54) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x108);
    *(float *)(param_1 + 0x58) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x108);
    *(float *)(param_1 + 0x5c) = (float)fVar1;
    fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x108);
    *(float *)(param_1 + 0x60) = (float)fVar1;
  }
  return;
}

// 00C20290  FUN_00c20290  size=459  [run]
void __thiscall FUN_00c20290(int param_1,int *param_2,int param_3)

{
  float10 fVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_3 == 0x11400) {
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x81);
      *(float *)(param_1 + 0x34) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x81);
      *(float *)(param_1 + 0x38) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x81);
      *(float *)(param_1 + 0x3c) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x80);
      *(float *)(param_1 + 0x24) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x82);
      *(float *)(param_1 + 0x28) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x7d);
      *(float *)(param_1 + 0x40) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x7d);
      *(float *)(param_1 + 0x44) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x7d);
      *(float *)(param_1 + 0x48) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x7e);
      *(float *)(param_1 + 0x4c) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x7e);
      *(float *)(param_1 + 0x50) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x7e);
      *(float *)(param_1 + 0x54) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x7f);
      *(float *)(param_1 + 0x58) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x7f);
      *(float *)(param_1 + 0x5c) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x7f);
      *(float *)(param_1 + 0x60) = (float)fVar1;
      return;
    }
    if (param_3 == 0x11500) {
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x5c);
      *(float *)(param_1 + 0x34) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x5c);
      *(float *)(param_1 + 0x38) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x5c);
      *(float *)(param_1 + 0x3c) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x5b);
      *(float *)(param_1 + 0x24) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x5d);
      *(float *)(param_1 + 0x28) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x58);
      *(float *)(param_1 + 0x40) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x58);
      *(float *)(param_1 + 0x44) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x58);
      *(float *)(param_1 + 0x48) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x59);
      *(float *)(param_1 + 0x4c) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x59);
      *(float *)(param_1 + 0x50) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x59);
      *(float *)(param_1 + 0x54) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x34))(0x5a);
      *(float *)(param_1 + 0x58) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x3c))(0x5a);
      *(float *)(param_1 + 0x5c) = (float)fVar1;
      fVar1 = (float10)(**(code **)(*param_2 + 0x44))(0x5a);
      *(float *)(param_1 + 0x60) = (float)fVar1;
    }
  }
  return;
}

// 00C20460  FUN_00c20460  size=33  [run]
void __fastcall FUN_00c20460(int *param_1)

{
  FUN_00dd7270();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

// 00C20490  FUN_00c20490  size=171  [run]
void __fastcall FUN_00c20490(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 5)) &&
     ((iVar1 = FUN_00d467a0(), iVar1 == 0 ||
      ((((DAT_018b9174 != 0xd30 || (iVar1 = FUN_00d45a70("PD30_M2_BTL"), iVar1 == 0)) &&
        ((DAT_018b9174 != 0xd20 && ((DAT_018b9174 != 0xd21 && (DAT_018b9174 != 0xd60)))))) &&
       ((DAT_018b9174 != 0xd71 &&
        ((((DAT_018b9174 != 0xd72 && (DAT_018b9174 != 0xd73)) && (DAT_018b9174 != 0xd74)) &&
         (DAT_018b9174 != 0xd75)))))))))) {
    (**(code **)(*DAT_01bea184 + 0x50))();
  }
  *(undefined4 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 8) = 0x42c7fae1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_009c94e0();
  return;
}

// 00C20560  FUN_00c20560  size=25  [run]
bool __fastcall FUN_00c20560(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    return true;
  }
  return *(int *)(param_1 + 4) == 4;
}

// 00C205B0  FUN_00c205b0  size=33  [run]
void __fastcall FUN_00c205b0(int *param_1)

{
  FUN_00dd7270();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

// 00C206D0  FUN_00c206d0  size=6  [run]
undefined4 FUN_00c206d0(void)

{
  return DAT_01bea1a4;
}

// 00C206E0  FUN_00c206e0  size=30  [run]
void FUN_00c206e0(void)

{
  if (DAT_01bea1a4 != (int *)0x0) {
    (**(code **)(*DAT_01bea1a4 + 0xc))(1);
    DAT_01bea1a4 = (int *)0x0;
  }
  return;
}

// 00C20770  FUN_00c20770  size=32  [run]
void __fastcall FUN_00c20770(int param_1)

{
  FUN_00dd7270();
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00C20790  FUN_00c20790  size=19  [run]
void __thiscall FUN_00c20790(uint *param_1,char param_2)

{
  *param_1 = *param_1 | 1 << (param_2 - 1U & 0x1f);
  return;
}

// 00C207B0  FUN_00c207b0  size=21  [run]
void __thiscall FUN_00c207b0(uint *param_1,char param_2)

{
  *param_1 = *param_1 & ~(1 << (param_2 - 1U & 0x1f));
  return;
}

// 00C207D0  FUN_00c207d0  size=27  [run]
bool __thiscall FUN_00c207d0(uint *param_1,char param_2)

{
  return (1 << (param_2 - 1U & 0x1f) & *param_1) != 0;
}

