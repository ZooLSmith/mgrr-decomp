// src/camera/Camera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D9FF30..015F0BA0, 574 functions

#include "mgrr.h"

// 00D9FF30  FUN_00d9ff30  size=293  [callgraph]
void __fastcall FUN_00d9ff30(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *(undefined4 *)(param_1 + 0x1b0);
  local_2c = *(undefined4 *)(param_1 + 0x1b4);
  local_28 = *(undefined4 *)(param_1 + 0x1b8);
  local_24 = *(undefined4 *)(param_1 + 0x1bc);
  local_20 = *(undefined4 *)(param_1 + 0x1c0);
  local_1c = *(undefined4 *)(param_1 + 0x1c4);
  pfVar1 = (float *)(param_1 + 0x364);
  local_18 = *(undefined4 *)(param_1 + 0x1c8);
  local_14 = *(undefined4 *)(param_1 + 0x1cc);
  thunk_FUN_00dde510(local_34,pfVar1,&local_30,&local_20);
  pfVar2 = (float *)(param_1 + 0x360);
  thunk_FUN_00dde510(pfVar2,local_34,&local_20,&local_30);
  fVar3 = (float10)FUN_00ddba30(*pfVar1 + 3.1415927);
  *pfVar1 = (float)fVar3;
  *pfVar2 = *pfVar2 * -1.0;
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x4ec);
  return;
}

// 00DA0060  FUN_00da0060  size=395  [callgraph]
void __thiscall FUN_00da0060(int param_1,float param_2)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 900);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)(param_1 + 0x410);
  }
  *(float *)(param_1 + 0x460) = (*(float *)(param_1 + 0x4b0) - *pfVar1) * param_2 + *pfVar1;
  *(float *)(param_1 + 0x464) = (*(float *)(param_1 + 0x4b4) - pfVar1[1]) * param_2 + pfVar1[1];
  *(float *)(param_1 + 0x468) = (*(float *)(param_1 + 0x4b8) - pfVar1[2]) * param_2 + pfVar1[2];
  *(float *)(param_1 + 0x46c) = (*(float *)(param_1 + 0x4bc) - pfVar1[3]) * param_2 + pfVar1[3];
  *(float *)(param_1 + 0x470) = (*(float *)(param_1 + 0x4c0) - pfVar1[4]) * param_2 + pfVar1[4];
  *(float *)(param_1 + 0x474) = (*(float *)(param_1 + 0x4c4) - pfVar1[5]) * param_2 + pfVar1[5];
  *(float *)(param_1 + 0x478) = (*(float *)(param_1 + 0x4c8) - pfVar1[6]) * param_2 + pfVar1[6];
  *(float *)(param_1 + 0x47c) = (*(float *)(param_1 + 0x4cc) - pfVar1[7]) * param_2 + pfVar1[7];
  *(float *)(param_1 + 0x480) = (*(float *)(param_1 + 0x4d0) - pfVar1[8]) * param_2 + pfVar1[8];
  *(float *)(param_1 + 0x484) = (*(float *)(param_1 + 0x4d4) - pfVar1[9]) * param_2 + pfVar1[9];
  *(float *)(param_1 + 0x488) = (*(float *)(param_1 + 0x4d8) - pfVar1[10]) * param_2 + pfVar1[10];
  *(float *)(param_1 + 0x48c) = (*(float *)(param_1 + 0x4dc) - pfVar1[0xb]) * param_2 + pfVar1[0xb];
  *(float *)(param_1 + 0x490) = (*(float *)(param_1 + 0x4e0) - pfVar1[0xc]) * param_2 + pfVar1[0xc];
  *(float *)(param_1 + 0x494) = (*(float *)(param_1 + 0x4e4) - pfVar1[0xd]) * param_2 + pfVar1[0xd];
  *(float *)(param_1 + 0x498) = (*(float *)(param_1 + 0x4e8) - pfVar1[0xe]) * param_2 + pfVar1[0xe];
  *(float *)(param_1 + 0x49c) = (*(float *)(param_1 + 0x4ec) - pfVar1[0xf]) * param_2 + pfVar1[0xf];
  *(float *)(param_1 + 0x4a8) =
       (*(float *)(param_1 + 0x4f8) - pfVar1[0x12]) * param_2 + pfVar1[0x12];
  *(float *)(param_1 + 0x4a4) =
       (*(float *)(param_1 + 0x4f4) - pfVar1[0x11]) * param_2 + pfVar1[0x11];
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x4a8);
  return;
}

// 00DA01F0  FUN_00da01f0  size=121  [callgraph]
void __thiscall FUN_00da01f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  return;
}

// 00DA0380  FUN_00da0380  size=444  [callgraph]
void __fastcall FUN_00da0380(int param_1)

{
  undefined1 *puStack_4c;
  undefined4 *puStack_48;
  float fStack_44;
  undefined1 local_20 [28];
  
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x1b0);
  puStack_48 = (undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x4bc);
  *puStack_48 = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x470) = *puStack_48;
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x4c8);
  puStack_4c = local_20;
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x4cc);
  fStack_44 = (float)(param_1 + 0x3d0);
  D3DXVec3TransformNormal();
  D3DXVec3TransformNormal(&stack0xffffffc4,(undefined4 *)(param_1 + 0x4b0),param_1 + 0x3d0);
  puStack_48 = (undefined4 *)(*(float *)(param_1 + 0x400) + (float)puStack_48);
  fStack_44 = *(float *)(param_1 + 0x404) + fStack_44;
  thunk_FUN_00dde510(&puStack_4c,param_1 + 0x364,&puStack_48,&stack0xffffffc8);
  thunk_FUN_00dde510(param_1 + 0x360,&puStack_4c,&stack0xffffffc8,&puStack_48);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 500);
  return;
}

// 00DA0540  FUN_00da0540  size=242  [callgraph]
void __fastcall FUN_00da0540(int param_1)

{
  undefined1 local_30 [4];
  undefined1 auStack_2c [40];
  
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x1cc);
  D3DXVec3TransformNormal(local_30,(undefined4 *)(param_1 + 0x4c0),param_1 + 0x3d0);
  D3DXVec3TransformNormal(auStack_2c,param_1 + 0x4b0,param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x94);
  return;
}

// 00DA0640  FUN_00da0640  size=61  [callgraph]
int __thiscall FUN_00da0640(int param_1,int param_2)

{
  thunk_FUN_00de01a0(param_2,param_1 + 0x1b0,param_1 + 0x1c0,param_1 + 0x1d0);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  D3DXMatrixInverse(param_2,0,param_2);
  return param_2;
}

// 00DA0690  FUN_00da0690  size=152  [callgraph]
float * __thiscall FUN_00da0690(int param_1,float *param_2,float param_3)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  FUN_00ddc1d0(local_50,param_1 + 0x1e0,5);
  D3DXVec3TransformNormal(param_2,&local_60,local_50);
  D3DXVec3TransformNormal(param_2,param_2,param_1 + 0x390);
  *param_2 = *param_2 + *(float *)(param_1 + 0x3c0);
  param_2[1] = *(float *)(param_1 + 0x3c4) + param_2[1];
  param_2[2] = *(float *)(param_1 + 0x3c8) + param_2[2];
  *param_2 = *param_2 * param_3;
  param_2[1] = param_2[1] * param_3;
  param_2[2] = param_3 * param_2[2];
  param_2[3] = param_3 * param_2[3];
  return param_2;
}

// 00DA0730  FUN_00da0730  size=152  [callgraph]
float * __thiscall FUN_00da0730(int param_1,float *param_2,float param_3)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_60 = 0x3f800000;
  local_5c = 0;
  local_58 = 0;
  FUN_00ddc1d0(local_50,param_1 + 0x1e0,5);
  D3DXVec3TransformNormal(param_2,&local_60,local_50);
  D3DXVec3TransformNormal(param_2,param_2,param_1 + 0x390);
  *param_2 = *param_2 + *(float *)(param_1 + 0x3c0);
  param_2[1] = *(float *)(param_1 + 0x3c4) + param_2[1];
  param_2[2] = *(float *)(param_1 + 0x3c8) + param_2[2];
  *param_2 = *param_2 * param_3;
  param_2[1] = param_2[1] * param_3;
  param_2[2] = param_3 * param_2[2];
  param_2[3] = param_3 * param_2[3];
  return param_2;
}

// 00DA07D0  FUN_00da07d0  size=152  [callgraph]
float * __thiscall FUN_00da07d0(int param_1,float *param_2,float param_3)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_60 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  FUN_00ddc1d0(local_50,param_1 + 0x1e0,5);
  D3DXVec3TransformNormal(param_2,&local_60,local_50);
  D3DXVec3TransformNormal(param_2,param_2,param_1 + 0x390);
  *param_2 = *param_2 + *(float *)(param_1 + 0x3c0);
  param_2[1] = *(float *)(param_1 + 0x3c4) + param_2[1];
  param_2[2] = *(float *)(param_1 + 0x3c8) + param_2[2];
  *param_2 = *param_2 * param_3;
  param_2[1] = param_2[1] * param_3;
  param_2[2] = param_3 * param_2[2];
  param_2[3] = param_3 * param_2[3];
  return param_2;
}

// 00DA0880  FUN_00da0880  size=7  [callgraph]
int __fastcall FUN_00da0880(int param_1)

{
  return param_1 + 0x4b0;
}

// 00DA0B10  FUN_00da0b10  size=35  [callgraph]
undefined4 __fastcall FUN_00da0b10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if ((((iVar1 != 0x1f) && (iVar1 != 0x20)) && (iVar1 != 0x21)) && (iVar1 != 0x24)) {
    return 0;
  }
  return 1;
}

// 00DA0B60  Camera::StateNodeTrait::vf00  size=31  [class]
undefined4 * __thiscall Camera::StateNodeTrait::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA0BC0  FUN_00da0bc0  size=77  [callgraph]
undefined4 __thiscall FUN_00da0bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_60 = param_3;
  local_5c = 0;
  local_58 = 0;
  FUN_00ddc1d0(local_50,param_1 + 0xe0,5);
  D3DXVec3TransformNormal(param_2,&local_60,local_50);
  return param_2;
}

// 00DA0D70  FUN_00da0d70  size=195  [callgraph]
void __fastcall FUN_00da0d70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x460);
  fVar3 = *(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x464);
  fVar2 = *(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x774) = 1;
  *(float *)(param_1 + 0x4a4) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x49c);
  return;
}

// 00DA0E40  FUN_00da0e40  size=123  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00da0e40(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)1;
  if (0.0 < *(float *)(param_1 + 0x4a4)) {
    fVar1 = (float10)fpatan((float10)3.0,(float10)*(float *)(param_1 + 0x4a4));
  }
  fVar1 = (float10)FUN_00dde210(*(undefined4 *)(param_1 + 0x794),(float)(fVar1 * (float10)param_2),
                                *(float *)(param_1 + 0x6e0) * _DAT_01be942c,0x3d567750);
  *(float *)(param_1 + 0x794) = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 + (float10)*(float *)(param_1 + 0x364)));
  *(float *)(param_1 + 0x364) = (float)fVar1;
  return;
}

// 00DA0F40  FUN_00da0f40  size=7  [callgraph]
undefined4 __fastcall FUN_00da0f40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8cc);
}

// 00DA0F50  FUN_00da0f50  size=58  [callgraph]
void __thiscall FUN_00da0f50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x8d0) = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x8dc) = param_3;
    *(undefined4 *)(param_1 + 0x8e0) = param_4;
    return;
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  return;
}

// 00DA0F90  FUN_00da0f90  size=7  [callgraph]
undefined4 __fastcall FUN_00da0f90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8d0);
}

// 00DA0FB0  FUN_00da0fb0  size=203  [callgraph]
void __fastcall FUN_00da0fb0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x8c0);
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    *(undefined4 *)(param_1 + 0x380) = 0;
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x1d4);
    *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x4a4);
    return;
  }
  return;
}

// 00DA10B0  FUN_00da10b0  size=13  [callgraph]
void __thiscall FUN_00da10b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x794) = param_2;
  return;
}

// 00DA10C0  FUN_00da10c0  size=7  [callgraph]
undefined4 __fastcall FUN_00da10c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b4);
}

// 00DA1130  FUN_00da1130  size=102  [callgraph]
void __thiscall FUN_00da1130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_14;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  param_1[7] = param_3[3];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = local_14;
  return;
}

// 00DA11A0  FUN_00da11a0  size=179  [callgraph]
void __thiscall FUN_00da11a0(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [4];
  undefined1 local_50 [76];
  
  local_60[0] = 0.0;
  local_60[1] = 0.0;
  local_60[2] = -param_4;
  FUN_00ddc1d0(local_50,param_3,2);
  D3DXVec3TransformNormal(local_60,local_60,local_50);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 - fStack_6c;
  param_1[1] = fVar1 - fStack_68;
  param_1[2] = fVar2 - fStack_64;
  param_1[3] = fVar3 - local_60[0];
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = local_60[0];
  param_1[0xc] = 0.0;
  param_1[0xd] = 1.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = local_60[0];
  return;
}

// 00DA1280  FUN_00da1280  size=41  [callgraph]
void __fastcall FUN_00da1280(float *param_1)

{
  param_1[0x11] =
       SQRT((param_1[4] - *param_1) * (param_1[4] - *param_1) +
            (param_1[5] - param_1[1]) * (param_1[5] - param_1[1]) +
            (param_1[6] - param_1[2]) * (param_1[6] - param_1[2]));
  return;
}

// 00DA12B0  FUN_00da12b0  size=1604  [callgraph]
void __fastcall FUN_00da12b0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar6;
  undefined4 *puVar7;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [80];
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)
     ) {
    iVar5 = FUN_00a81330();
    piVar3 = (int *)0x0;
    if (iVar5 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
    }
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 0;
    *(undefined4 *)(param_1 + 0x7b0) = 0xbfc90fdb;
    uStack_d4 = *(undefined4 *)(param_1 + 0x4b0);
    uStack_d0 = *(undefined4 *)(param_1 + 0x4b4);
    uStack_cc = *(undefined4 *)(param_1 + 0x4b8);
    uStack_c8 = *(undefined4 *)(param_1 + 0x4bc);
    uStack_e4 = *(undefined4 *)(param_1 + 0x4c0);
    uStack_e0 = *(undefined4 *)(param_1 + 0x4c4);
    uStack_dc = *(undefined4 *)(param_1 + 0x4c8);
    uStack_d8 = *(undefined4 *)(param_1 + 0x4cc);
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(iVar4 + 0x48);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(iVar4 + 0x4c);
    fVar1 = *(float *)(param_1 + 0x4b4) + 0.9;
    *(float *)(param_1 + 0x4b4) = fVar1;
    fVar2 = (*(float *)(iVar4 + 0x44) - 20.5) * 0.3;
    *(float *)(param_1 + 0x4b4) = fVar2 + fVar1;
    *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) - (fVar2 + 5.0);
    iVar4 = FUN_00548760();
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) - 1.5;
    }
    uStack_b4 = *(undefined4 *)(param_1 + 0x4b0);
    uStack_b0 = *(undefined4 *)(param_1 + 0x4b4);
    uStack_ac = *(undefined4 *)(param_1 + 0x4b8);
    uStack_a8 = *(undefined4 *)(param_1 + 0x4bc);
    *(undefined4 *)(param_1 + 0x4f4) = 0x40800000;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x208))(auStack_64);
      thunk_FUN_00dde510(&fStack_108,&fStack_10c,auStack_64,&uStack_b4);
      fStack_108 = fStack_108 * -1.0;
      if (fStack_108 < -0.2617994) {
        fStack_108 = -0.2617994;
      }
      if (fStack_10c <= 0.38397244) {
        if (fStack_10c < -0.38397244) {
          fStack_10c = -0.38397244;
        }
      }
      else {
        fStack_10c = 0.38397244;
      }
      if ((DAT_01bea090 & 0x2000000) != 0) {
        fVar6 = (float10)FUN_00ddba30(fStack_10c + 0.13962634);
        fStack_10c = (float)fVar6;
      }
      fVar6 = (float10)FUN_00ddba30(fStack_108 - *(float *)(param_1 + 0x790));
      fStack_e8 = (float)fVar6;
      if (ABS(fVar6) <= (float10)1e-05) {
        fVar6 = (float10)0;
      }
      else {
        fVar6 = (float10)FUN_00fdc1f0();
        fVar6 = fVar6 * (float10)fStack_e8;
      }
      *(float *)(param_1 + 0x788) = (float)fVar6;
      fVar6 = (float10)FUN_00ddba30(fStack_10c - *(float *)(param_1 + 0x794));
      fStack_e8 = (float)fVar6;
      if (ABS(fVar6) <= (float10)1e-05) {
        fVar6 = (float10)0;
      }
      else {
        fVar6 = (float10)FUN_00fdc1f0();
        fVar6 = fVar6 * (float10)fStack_e8;
      }
      *(float *)(param_1 + 0x78c) = (float)fVar6;
    }
    fVar1 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788)
            + *(float *)(param_1 + 0x790);
    *(float *)(param_1 + 0x790) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x7b0)) {
      *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
    }
    fVar6 = (float10)FUN_00ddba30(*(undefined4 *)(param_1 + 0x790));
    *(float *)(param_1 + 0x360) = (float)fVar6;
    fVar1 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c)
            + *(float *)(param_1 + 0x794);
    *(float *)(param_1 + 0x794) = fVar1;
    fVar6 = (float10)FUN_00ddba30(fVar1);
    *(float *)(param_1 + 0x364) = (float)fVar6;
    fStack_104 = 0.0;
    fStack_100 = 0.0;
    fStack_fc = *(float *)(param_1 + 0x4f4);
    uStack_c4 = *(undefined4 *)(param_1 + 0x360);
    uStack_c0 = *(undefined4 *)(param_1 + 0x364);
    uStack_bc = *(undefined4 *)(param_1 + 0x368);
    uStack_b8 = *(undefined4 *)(param_1 + 0x36c);
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    fStack_94 = 0.0;
    fStack_98 = 0.0;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_68 = 0x3f800000;
    uStack_7c = 0x3f800000;
    fStack_90 = 1.0;
    uStack_a4 = 0x3f800000;
    thunk_FUN_00ddc1d0(auStack_54,&uStack_c4,5);
    puVar7 = &uStack_a4;
    D3DXMatrixMultiply(puVar7,auStack_54);
    D3DXMatrixMultiply(&uStack_b0,&uStack_b0,param_1 + 0x390);
    D3DXVec3TransformNormal(&stack0xfffffee4,&stack0xfffffee4,&uStack_bc);
    *(float *)(param_1 + 0x4c0) = fStack_98 + (float)puVar7 + *(float *)(param_1 + 0x4b0);
    *(float *)(param_1 + 0x4c4) = fStack_94 + 0.0 + *(float *)(param_1 + 0x4b4);
    *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4b8) + fStack_90 + unaff_EDI;
    *(float *)(param_1 + 0x4cc) = unaff_ESI + *(float *)(param_1 + 0x4bc);
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b0) =
         (float)((float10)(float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)fStack_f8) *
                                 fVar6) + (float10)fStack_f8);
    *(float *)(param_1 + 0x4b4) =
         (float)((float10)(*(float *)(param_1 + 0x4b4) - fStack_f4) * fVar6) + fStack_f4;
    *(float *)(param_1 + 0x4b8) =
         (float)((float10)fStack_f0 +
                (float10)(float)((float10)*(float *)(param_1 + 0x4b8) - (float10)fStack_f0) * fVar6)
    ;
    *(float *)(param_1 + 0x4bc) =
         (float)(((float10)*(float *)(param_1 + 0x4bc) - (float10)fStack_ec) * fVar6 +
                (float10)fStack_ec);
    *(float *)(param_1 + 0x4c0) =
         (float)((float10)(*(float *)(param_1 + 0x4c0) - fStack_108) * fVar6) + fStack_108;
    *(float *)(param_1 + 0x4c4) =
         (float)((float10)(*(float *)(param_1 + 0x4c4) - fStack_104) * fVar6) + fStack_104;
    *(float *)(param_1 + 0x4c8) =
         (float)((float10)(*(float *)(param_1 + 0x4c8) - fStack_100) * fVar6) + fStack_100;
    *(float *)(param_1 + 0x4cc) =
         (float)((float10)fStack_fc +
                (float10)(float)((float10)*(float *)(param_1 + 0x4cc) - (float10)fStack_fc) * fVar6)
    ;
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  return;
}

// 00DA1900  FUN_00da1900  size=1521  [callgraph]
void __fastcall FUN_00da1900(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined1 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  float fStack_118;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [80];
  
  uStack_124 = 0xda1915;
  piVar2 = (int *)FUN_00c13920();
  uStack_124 = 0;
  puStack_128 = (undefined4 *)0xda1920;
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (iVar3 != 0) {
    puStack_128 = (undefined4 *)0xda192b;
    FUN_00a7c8a0();
  }
  puStack_128 = (undefined4 *)0xda1936;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    puStack_128 = (undefined4 *)0xda1949;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      puStack_128 = (undefined4 *)0xda1958;
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        puStack_128 = (undefined4 *)0xda196c;
        iVar4 = FUN_00a81330();
        piVar2 = (int *)0x0;
        if (iVar4 != 0) {
          puStack_128 = (undefined4 *)0xda1979;
          piVar2 = (int *)FUN_00a7c8a0();
        }
        *(undefined4 *)(param_1 + 0x788) = 0;
        *(undefined4 *)(param_1 + 0x78c) = 0;
        *(undefined4 *)(param_1 + 0x7b0) = 0xbfc90fdb;
        uStack_e4 = *(undefined4 *)(param_1 + 0x4b0);
        uStack_e0 = *(undefined4 *)(param_1 + 0x4b4);
        uStack_dc = *(undefined4 *)(param_1 + 0x4b8);
        uStack_d8 = *(undefined4 *)(param_1 + 0x4bc);
        uStack_f4 = *(undefined4 *)(param_1 + 0x4c0);
        uStack_f0 = *(undefined4 *)(param_1 + 0x4c4);
        uStack_ec = *(undefined4 *)(param_1 + 0x4c8);
        uStack_e8 = *(undefined4 *)(param_1 + 0x4cc);
        *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(iVar3 + 0x40);
        *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(iVar3 + 0x48);
        *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(iVar3 + 0x4c);
        fVar6 = *(float *)(param_1 + 0x4b4) + 0.8;
        *(float *)(param_1 + 0x4b4) = fVar6;
        *(float *)(param_1 + 0x4b4) = fVar6 + (*(float *)(iVar3 + 0x44) - 20.5) * 0.0;
        *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4b0) - 3.5;
        *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + 0.7;
        fVar6 = *(float *)(param_1 + 0x4b4);
        if (!NAN(fVar6) && 23.5 < fVar6 != (fVar6 == 23.5)) {
          *(undefined4 *)(param_1 + 0x4b4) = 0x41bc0000;
        }
        uStack_c4 = *(undefined4 *)(param_1 + 0x4b0);
        uStack_c0 = *(undefined4 *)(param_1 + 0x4b4);
        uStack_bc = *(undefined4 *)(param_1 + 0x4b8);
        uStack_b8 = *(undefined4 *)(param_1 + 0x4bc);
        *(undefined4 *)(param_1 + 0x4f4) = 0x40800000;
        if (piVar2 != (int *)0x0) {
          puStack_128 = (undefined4 *)auStack_64;
          puStack_12c = (undefined1 *)0xda1abd;
          (**(code **)(*piVar2 + 0x208))();
          puStack_128 = &uStack_c4;
          puStack_12c = auStack_64;
          thunk_FUN_00dde510(&fStack_f8,&fStack_fc);
          fStack_f8 = fStack_f8 * -1.0;
          if (fStack_f8 < -0.2617994) {
            fStack_f8 = -0.2617994;
          }
          puStack_128 = (undefined4 *)(fStack_f8 - *(float *)(param_1 + 0x790));
          puStack_12c = (undefined1 *)0xda1b12;
          fVar5 = (float10)FUN_00ddba30();
          fStack_a8 = (float)fVar5;
          if (ABS(fVar5) <= (float10)1e-05) {
            fVar5 = (float10)0;
          }
          else {
            puStack_128 = (undefined4 *)0xda1b3c;
            fVar5 = (float10)FUN_00fdc1f0();
            fVar5 = fVar5 * (float10)fStack_a8;
          }
          *(float *)(param_1 + 0x788) = (float)fVar5;
          puStack_128 = (undefined4 *)(fStack_fc - *(float *)(param_1 + 0x794));
          puStack_12c = (undefined1 *)0xda1b5d;
          fVar5 = (float10)FUN_00ddba30();
          fStack_fc = (float)fVar5;
          if (ABS(fVar5) <= (float10)1e-05) {
            fVar5 = (float10)0;
          }
          else {
            puStack_128 = (undefined4 *)0xda1b84;
            fVar5 = (float10)FUN_00fdc1f0();
            fVar5 = fVar5 * (float10)fStack_fc;
          }
          *(float *)(param_1 + 0x78c) = (float)fVar5;
        }
        fVar6 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) +
                *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x790);
        *(float *)(param_1 + 0x790) = fVar6;
        if (fVar6 < *(float *)(param_1 + 0x7b0)) {
          *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
        }
        puStack_128 = *(undefined4 **)(param_1 + 0x790);
        puStack_12c = (undefined1 *)0xda1bd8;
        fVar5 = (float10)FUN_00ddba30();
        *(float *)(param_1 + 0x360) = (float)fVar5;
        puStack_128 = (undefined4 *)
                      (*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                       *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
        *(undefined4 **)(param_1 + 0x794) = puStack_128;
        puStack_12c = (undefined1 *)0xda1c04;
        fVar5 = (float10)FUN_00ddba30();
        *(float *)(param_1 + 0x364) = (float)fVar5;
        puStack_12c = (undefined1 *)0x5;
        fVar1 = *(float *)(param_1 + 0x4f4);
        uStack_d4 = *(undefined4 *)(param_1 + 0x360);
        uStack_d0 = *(undefined4 *)(param_1 + 0x364);
        uStack_cc = *(undefined4 *)(param_1 + 0x368);
        uStack_c8 = *(undefined4 *)(param_1 + 0x36c);
        uStack_6c = 0;
        uStack_70 = 0;
        uStack_74 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_84 = 0;
        uStack_88 = 0;
        uStack_8c = 0;
        fStack_94 = 0.0;
        fStack_98 = 0.0;
        uStack_9c = 0;
        uStack_a0 = 0;
        uStack_68 = 0x3f800000;
        uStack_7c = 0x3f800000;
        fStack_90 = 1.0;
        uStack_a4 = 0x3f800000;
        thunk_FUN_00ddc1d0(auStack_54,&uStack_d4);
        puVar7 = &uStack_a4;
        puStack_12c = auStack_54;
        puStack_128 = puVar7;
        D3DXMatrixMultiply();
        fVar6 = (float)(param_1 + 0x390);
        D3DXMatrixMultiply(auStack_b0);
        D3DXVec3TransformNormal(&puStack_12c,&puStack_12c,&uStack_bc);
        *(float *)(param_1 + 0x4c0) = fStack_98 + (float)auStack_b0 + *(float *)(param_1 + 0x4b0);
        *(float *)(param_1 + 0x4c4) = *(float *)(param_1 + 0x4b4) + fStack_94 + fVar6;
        *(float *)(param_1 + 0x4c8) = fStack_90 + (float)puVar7 + *(float *)(param_1 + 0x4b8);
        *(float *)(param_1 + 0x4cc) = *(float *)(param_1 + 0x4bc) + (float)puStack_12c;
        fVar5 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b0) =
             (float)((float10)(float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)fStack_108) *
                                     fVar5) + (float10)fStack_108);
        *(float *)(param_1 + 0x4b4) =
             (float)((float10)(*(float *)(param_1 + 0x4b4) - fStack_104) * fVar5) + fStack_104;
        *(float *)(param_1 + 0x4b8) =
             (float)((float10)fStack_100 +
                    (float10)(float)((float10)*(float *)(param_1 + 0x4b8) - (float10)fStack_100) *
                    fVar5);
        *(float *)(param_1 + 0x4bc) =
             (float)(((float10)*(float *)(param_1 + 0x4bc) - (float10)fStack_fc) * fVar5 +
                    (float10)fStack_fc);
        *(float *)(param_1 + 0x4c0) =
             (float)((float10)(*(float *)(param_1 + 0x4c0) - fStack_118) * fVar5) + fStack_118;
        *(float *)(param_1 + 0x4c4) =
             (float)((float10)(*(float *)(param_1 + 0x4c4) - 0.0) * fVar5) + 0.0;
        *(float *)(param_1 + 0x4c8) =
             (float)((float10)(*(float *)(param_1 + 0x4c8) - 0.0) * fVar5) + 0.0;
        *(float *)(param_1 + 0x4cc) =
             (float)((float10)fVar1 +
                    (float10)(float)((float10)*(float *)(param_1 + 0x4cc) - (float10)fVar1) * fVar5)
        ;
        *(undefined4 *)(param_1 + 0x4e0) = 0;
        *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x4e8) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x1d8) = 0;
      }
    }
  }
  return;
}

// 00DA1F00  FUN_00da1f00  size=525  [callgraph]
void __thiscall FUN_00da1f00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fStack_20;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)
     ) {
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a7c8a0();
    }
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 0;
    *(undefined4 *)(param_1 + 0x7b0) = 0xbf5f66f3;
    fVar1 = *(float *)(iVar4 + 0x48);
    if (param_2 == 1) {
      fVar2 = *(float *)(iVar4 + 0x40) + 2.5;
    }
    else {
      fVar2 = *(float *)(iVar4 + 0x40) - 2.5;
    }
    fStack_20 = *(float *)(iVar4 + 0x44) + 2.0;
    if (26.5 < fStack_20) {
      fStack_20 = 26.5;
    }
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b0) =
         (float)(((float10)fVar2 - (float10)*(float *)(param_1 + 0x4b0)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4b0));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b4) =
         (float)(((float10)fStack_20 - (float10)*(float *)(param_1 + 0x4b4)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4b4));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b8) =
         (float)(((float10)(fVar1 - 1.5) - (float10)*(float *)(param_1 + 0x4b8)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4b8));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4c0) =
         (float)(((float10)*(float *)(iVar4 + 0x40) - (float10)*(float *)(param_1 + 0x4c0)) * fVar6
                + (float10)*(float *)(param_1 + 0x4c0));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4c4) =
         (float)((((float10)*(float *)(iVar4 + 0x44) + (float10)1.5) -
                 (float10)*(float *)(param_1 + 0x4c4)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4c4));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4c8) =
         (float)(((float10)*(float *)(iVar4 + 0x48) - (float10)*(float *)(param_1 + 0x4c8)) * fVar6
                + (float10)*(float *)(param_1 + 0x4c8));
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  return;
}

// 00DA2110  FUN_00da2110  size=1673  [callgraph]
void __fastcall FUN_00da2110(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [80];
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  iVar2 = FUN_00a81330();
  if (((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)
     ) {
    iVar3 = FUN_00a81330();
    piVar1 = (int *)0x0;
    if (iVar3 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
    }
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 0;
    *(undefined4 *)(param_1 + 0x7b0) = 0xbf5f66f3;
    uStack_e4 = *(undefined4 *)(param_1 + 0x4b0);
    uStack_e0 = *(undefined4 *)(param_1 + 0x4b4);
    uStack_dc = *(undefined4 *)(param_1 + 0x4b8);
    fStack_d8 = *(float *)(param_1 + 0x4bc);
    uStack_f4 = *(undefined4 *)(param_1 + 0x4c0);
    uStack_f0 = *(undefined4 *)(param_1 + 0x4c4);
    uStack_ec = *(undefined4 *)(param_1 + 0x4c8);
    uStack_e8 = *(undefined4 *)(param_1 + 0x4cc);
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(iVar2 + 0x4c);
    if (27.0 < *(float *)(param_1 + 0x4b4)) {
      *(undefined4 *)(param_1 + 0x4b4) = 0x41d80000;
    }
    if ((DAT_01bea090 & 0x2000000) == 0) {
      if (*(float *)(param_1 + 0x4b4) < 23.5) {
        *(undefined4 *)(param_1 + 0x4b4) = 0x41bc0000;
      }
      fVar5 = *(float *)(param_1 + 0x4b8) - 7.0;
    }
    else if (22.0 <= *(float *)(param_1 + 0x4b4)) {
      fVar5 = *(float *)(param_1 + 0x4b8) - 6.0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4b4) = 0x41b00000;
      fVar5 = *(float *)(param_1 + 0x4b8) - 6.0;
    }
    *(float *)(param_1 + 0x4b8) = fVar5;
    fStack_d4 = *(float *)(param_1 + 0x4b0);
    fStack_d0 = *(float *)(param_1 + 0x4b4);
    fStack_cc = *(float *)(param_1 + 0x4b8);
    uStack_c8 = *(undefined4 *)(param_1 + 0x4bc);
    if (96.5 < *(float *)(iVar2 + 0x48)) {
      *(float *)(param_1 + 0x4b8) =
           *(float *)(param_1 + 0x4b8) - (*(float *)(iVar2 + 0x48) - 96.5) * 0.2;
    }
    *(undefined4 *)(param_1 + 0x4f4) = 0x40e00000;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x208))(auStack_64);
      if (97.5 < *(float *)(iVar2 + 0x48)) {
        fStack_d0 = fStack_d0 - 1.0;
        fStack_cc = fStack_cc + 2.0;
      }
      thunk_FUN_00dde510(&fStack_f8,&stack0xffffff04,auStack_64,&fStack_d4);
      fStack_f8 = fStack_f8 * -1.0;
      if (-0.17453292 <= fStack_f8) {
        if (0.9599311 < fStack_f8) {
          fStack_f8 = 0.9599311;
        }
      }
      else {
        fStack_f8 = -0.17453292;
      }
      if (unaff_ESI <= 0.43633232) {
        if (unaff_ESI < -0.43633232) {
          unaff_ESI = -0.43633232;
        }
      }
      else {
        unaff_ESI = 0.43633232;
      }
      if ((DAT_01bea090 & 0x2000000) != 0) {
        fVar4 = (float10)FUN_00ddba30(unaff_ESI + 0.13962634);
        unaff_ESI = (float)fVar4;
      }
      fVar4 = (float10)FUN_00ddba30(fStack_f8 - *(float *)(param_1 + 0x790));
      if (ABS(fVar4) <= (float10)1e-05) {
        fVar4 = (float10)0;
      }
      else {
        fVar4 = fVar4 * (float10)0.1;
      }
      *(float *)(param_1 + 0x788) = (float)fVar4;
      fVar4 = (float10)FUN_00ddba30(unaff_ESI - *(float *)(param_1 + 0x794));
      if (ABS(fVar4) <= (float10)1e-05) {
        fVar4 = (float10)0;
      }
      else {
        fVar4 = fVar4 * (float10)0.1;
      }
      *(float *)(param_1 + 0x78c) = (float)fVar4;
    }
    fVar5 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788)
            + *(float *)(param_1 + 0x790);
    *(float *)(param_1 + 0x790) = fVar5;
    if (fVar5 < *(float *)(param_1 + 0x7b0)) {
      *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
    }
    fVar4 = (float10)FUN_00ddba30(*(undefined4 *)(param_1 + 0x790));
    *(float *)(param_1 + 0x360) = (float)fVar4;
    fVar5 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c)
            + *(float *)(param_1 + 0x794);
    *(float *)(param_1 + 0x794) = fVar5;
    fVar4 = (float10)FUN_00ddba30(fVar5);
    *(float *)(param_1 + 0x364) = (float)fVar4;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = *(undefined4 *)(param_1 + 0x4f4);
    uStack_c4 = *(undefined4 *)(param_1 + 0x360);
    uStack_c0 = *(undefined4 *)(param_1 + 0x364);
    uStack_bc = *(undefined4 *)(param_1 + 0x368);
    uStack_b8 = *(undefined4 *)(param_1 + 0x36c);
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    fStack_94 = 0.0;
    fStack_98 = 0.0;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_68 = 0x3f800000;
    uStack_7c = 0x3f800000;
    fStack_90 = 1.0;
    uStack_a4 = 0x3f800000;
    thunk_FUN_00ddc1d0(auStack_54,&uStack_c4,5);
    puVar6 = &uStack_a4;
    puVar7 = auStack_54;
    puVar8 = puVar6;
    D3DXMatrixMultiply();
    fVar5 = (float)(param_1 + 0x390);
    D3DXMatrixMultiply(&uStack_b0);
    D3DXVec3TransformNormal(&fStack_cc,&fStack_cc,&uStack_bc);
    *(float *)(param_1 + 0x4c0) = fStack_98 + fStack_d8 + *(float *)(param_1 + 0x4b0);
    *(float *)(param_1 + 0x4c4) = fStack_94 + fStack_d4 + *(float *)(param_1 + 0x4b4);
    *(float *)(param_1 + 0x4c8) = fStack_90 + fStack_d0 + *(float *)(param_1 + 0x4b8);
    *(float *)(param_1 + 0x4cc) = fStack_cc + *(float *)(param_1 + 0x4bc);
    if (*(float *)(param_1 + 0x4c4) < 22.0) {
      *(undefined4 *)(param_1 + 0x4c4) = 0x41b00000;
    }
    fVar4 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b0) =
         (float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)(float)puVar8) * fVar4 +
                (float10)(float)puVar8);
    *(float *)(param_1 + 0x4b4) =
         (float)(((float10)*(float *)(param_1 + 0x4b4) - (float10)0.0) * fVar4 + (float10)0.0);
    *(float *)(param_1 + 0x4b8) =
         (float)(((float10)*(float *)(param_1 + 0x4b8) - (float10)unaff_EDI) * fVar4 +
                (float10)unaff_EDI);
    *(float *)(param_1 + 0x4bc) =
         (float)(((float10)*(float *)(param_1 + 0x4bc) - (float10)unaff_ESI) * fVar4 +
                (float10)unaff_ESI);
    *(float *)(param_1 + 0x4c0) =
         (float)(((float10)*(float *)(param_1 + 0x4c0) - (float10)(float)&uStack_b0) * fVar4 +
                (float10)(float)&uStack_b0);
    *(float *)(param_1 + 0x4c4) =
         (float)((float10)(*(float *)(param_1 + 0x4c4) - fVar5) * fVar4) + fVar5;
    *(float *)(param_1 + 0x4c8) =
         (float)((float10)(*(float *)(param_1 + 0x4c8) - (float)puVar6) * fVar4 +
                (float10)(float)puVar6);
    *(float *)(param_1 + 0x4cc) =
         (float)(((float10)*(float *)(param_1 + 0x4cc) - (float10)(float)puVar7) * fVar4 +
                (float10)(float)puVar7);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  return;
}

// 00DA27C0  FUN_00da27c0  size=94  [callgraph]
unkbyte10 FUN_00da27c0(void)

{
  unkbyte10 Var1;
  float local_30 [4];
  float local_20 [7];
  
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_30[2] = 0.0;
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  FUN_00c78580(2000,local_30);
  FUN_00c78580(0x7d1,local_20);
  Var1 = fpatan((float10)local_30[0] - (float10)local_20[0],
                (float10)local_30[2] - (float10)local_20[2]);
  return Var1;
}

// 00DA2880  FUN_00da2880  size=123  [callgraph]
void FUN_00da2880(undefined4 *param_1,ulong *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  char local_10 [16];
  
  if (param_3 != (char *)0x0) {
    iVar1 = FUN_00fdc7b0(param_3,0x5f);
    if (iVar1 != 0) {
      _strncpy_s(local_10,0x10,param_3,iVar1 - (int)param_3);
      uVar2 = FUN_009fde60(local_10);
      *param_1 = uVar2;
      uVar3 = _strtoul((char *)(iVar1 + 1),(char **)0x0,0x10);
      *param_2 = uVar3;
      return;
    }
    *param_1 = 0x10010;
    uVar3 = _strtoul(param_3,(char **)0x0,0x10);
    *param_2 = uVar3;
  }
  return;
}

// 00DA2980  FUN_00da2980  size=84  [callgraph]
undefined * FUN_00da2980(uint param_1,uint param_2)

{
  if (0x3f < param_1) {
    return PTR_DAT_018bc3a0 + 0x107fc;
  }
  if ((*(uint *)(PTR_DAT_018bc3a0 + ((param_2 >> 5) + param_1 * 0x36) * 4 + 0xd1fc) &
      0x80000000U >> ((byte)param_2 & 0x1f)) == 0) {
    return PTR_DAT_018bc3a0 + 0x107fc;
  }
  return PTR_DAT_018bc3a0 + param_1 * 0xd8 + 0xd1fc;
}

// 00DA42E0  Camera::StateNode::vf00  size=6  [class]
undefined * Camera::StateNode::vf00(void)

{
  return &DAT_01dc558c;
}

// 00DA4300  Camera::StateNode::vf08  size=8  [class]
undefined4 Camera::StateNode::vf08(void)

{
  return 1;
}

// 00DA4320  Camera::StateNode::vf18  size=3  [class]
undefined4 Camera::StateNode::vf18(void)

{
  return 0;
}

// 00DA4380  FUN_00da4380  size=48  [between]
void __fastcall FUN_00da4380(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 100) = 0;
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x13);
  return;
}

// 00DA4410  Camera::StateBattle::vf00  size=6  [class]
undefined * Camera::StateBattle::vf00(void)

{
  return &DAT_01dc63e4;
}

// 00DA4420  Camera::StateBattle::vf20  size=6  [class]
undefined ** Camera::StateBattle::vf20(void)

{
  return &PTR_vftable_018cccb4;
}

// 00DA4430  Camera::StateBattle::vf1C  size=6  [class]
char * Camera::StateBattle::vf1C(void)

{
  return "StateBattle";
}

// 00DA4450  Camera::StateBattle::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateBattle::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA4470  FUN_00da4470  size=177  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00da4470(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)*(float *)(param_2 + 0x4c0) -
                          (float10)*(float *)(param_2 + 0x4b0),
                          (float10)*(float *)(param_2 + 0x4c8) -
                          (float10)*(float *)(param_2 + 0x4b8));
  fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xc) - fVar2));
  if (ABS(fVar2) < (float10)0.05235988) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  *(float *)(param_2 + 0x78c) = (float)(fVar2 * (float10)0.5);
  if (*(float *)(param_2 + 0x784) == 0.0) {
    fVar1 = *(float *)(param_1 + 0x24) - _DAT_01be942c;
  }
  else {
    *(undefined4 *)(param_2 + 0x78c) = 0;
    fVar1 = 30.0;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  if (0.0 < *(float *)(param_1 + 0x24)) {
    *(undefined4 *)(param_2 + 0x78c) = 0;
  }
  if (*(int *)(param_2 + 0x8cc) != 0) {
    *(undefined4 *)(param_2 + 0x78c) = 0;
  }
  *(undefined4 *)(param_2 + 0x7c4) = 0;
  return;
}

// 00DA4530  FUN_00da4530  size=68  [between]
void FUN_00da4530(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)0;
  if (fVar1 == (float10)*(float *)(param_1 + 0x780)) {
    fVar1 = (float10)FUN_00ddba30(0.12217305 - *(float *)(param_1 + 0x360));
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 0x6e0);
  }
  *(float *)(param_1 + 0x788) = (float)fVar1;
  return;
}

// 00DA45A0  FUN_00da45a0  size=254  [between]
void __thiscall FUN_00da45a0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_2 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  puVar1 = (undefined4 *)(param_1 + 0x70);
  *puVar1 = *param_4;
  *(undefined4 *)(param_1 + 0x74) = param_4[1];
  *(undefined4 *)(param_1 + 0x78) = param_4[2];
  *(undefined4 *)(param_1 + 0x7c) = param_4[3];
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar4 = FUN_00a12210(*(undefined4 *)(param_1 + 0x8c));
      if ((iVar4 != 0) && (*(int *)(param_1 + 0x8c) != -1)) {
        pfVar5 = (float *)(param_1 + 0x40);
        D3DXVec3TransformNormal(pfVar5,puVar1,iVar4 + 0x10);
        *pfVar5 = *(float *)(iVar4 + 0x40) + *pfVar5;
        *(float *)(param_1 + 0x44) = *(float *)(iVar4 + 0x44) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x48) = *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x48);
        return;
      }
      pfVar5 = (float *)(param_1 + 0x40);
      D3DXVec3TransformNormal(pfVar5,puVar1,iVar3 + 0x10);
      *pfVar5 = *pfVar5 + *(float *)(iVar3 + 0x40);
      *(float *)(param_1 + 0x44) = *(float *)(iVar3 + 0x44) + *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x48) = *(float *)(iVar3 + 0x48) + *(float *)(param_1 + 0x48);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *puVar1;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}

// 00DA46A0  FUN_00da46a0  size=247  [between]
void __thiscall FUN_00da46a0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  if (param_2 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  *(undefined4 *)(param_1 + 0x88) = param_3;
  puVar1 = (undefined4 *)(param_1 + 0x60);
  *puVar1 = *param_4;
  *(undefined4 *)(param_1 + 100) = param_4[1];
  *(undefined4 *)(param_1 + 0x68) = param_4[2];
  *(undefined4 *)(param_1 + 0x6c) = param_4[3];
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar4 = FUN_00a12210(*(undefined4 *)(param_1 + 0x88));
      if ((iVar4 != 0) && (*(int *)(param_1 + 0x88) != -1)) {
        pfVar5 = (float *)(param_1 + 0x30);
        D3DXVec3TransformNormal(pfVar5,puVar1,iVar4 + 0x10);
        *pfVar5 = *(float *)(iVar4 + 0x40) + *pfVar5;
        *(float *)(param_1 + 0x34) = *(float *)(iVar4 + 0x44) + *(float *)(param_1 + 0x34);
        *(float *)(param_1 + 0x38) = *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x38);
        return;
      }
      pfVar5 = (float *)(param_1 + 0x30);
      D3DXVec3TransformNormal(pfVar5,puVar1,iVar3 + 0x10);
      *pfVar5 = *pfVar5 + *(float *)(iVar3 + 0x40);
      *(float *)(param_1 + 0x34) = *(float *)(iVar3 + 0x44) + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x38) = *(float *)(iVar3 + 0x48) + *(float *)(param_1 + 0x38);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *puVar1;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

// 00DA47A0  FUN_00da47a0  size=103  [between]
void __thiscall FUN_00da47a0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00a7c950();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)(param_1 + 0x14) = param_4[1];
  *(undefined4 *)(param_1 + 0x18) = param_4[2];
  *(undefined4 *)(param_1 + 0x1c) = param_4[3];
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3[1];
  *(undefined4 *)(param_1 + 0x28) = param_3[2];
  *(undefined4 *)(param_1 + 0x2c) = param_3[3];
  return;
}

// 00DA4830  Camera::StateBattleFixed::vf08  size=28  [class]
undefined4 __fastcall Camera::StateBattleFixed::vf08(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x94)) {
    return 1;
  }
  return 0;
}

// 00DA4860  Camera::StateLockOn::vf08  size=19  [class]
bool Camera::StateLockOn::vf08(int param_1)

{
  return *(int *)(param_1 + 0x6f0) == 1;
}

// 00DA4880  FUN_00da4880  size=325  [between]
void __thiscall FUN_00da4880(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  puVar2 = param_2 + 8;
  puVar3 = param_1 + 8;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 0x18;
  puVar3 = param_1 + 0x18;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  return;
}

// 00DA49D0  FUN_00da49d0  size=121  [between]
void __thiscall FUN_00da49d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  return;
}

// 00DA4A60  FUN_00da4a60  size=56  [between]
undefined4 __thiscall FUN_00da4a60(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x364) - *(float *)(param_1 + 0x104));
  if (ABS(fVar1) < (float10)0.7853982) {
    return 1;
  }
  return 0;
}

// 00DA4B20  Camera::StatePerpetrator::vf00  size=6  [class]
undefined * Camera::StatePerpetrator::vf00(void)

{
  return &DAT_01dc63f0;
}

// 00DA4B30  Camera::StatePerpetrator::vf20  size=6  [class]
undefined ** Camera::StatePerpetrator::vf20(void)

{
  return &PTR_vftable_018cccd8;
}

// 00DA4B40  Camera::StatePerpetrator::vf1C  size=6  [class]
char * Camera::StatePerpetrator::vf1C(void)

{
  return "StatePerpetrator";
}

// 00DA4B50  FUN_00da4b50  size=32  [between]
void __thiscall FUN_00da4b50(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 4) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00DA4B70  Camera::StatePerpetrator::vf08  size=11  [class]
bool __fastcall Camera::StatePerpetrator::vf08(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}

// 00DA4B80  Camera::StatePerpetrator::vf14  size=10  [class]
void __fastcall Camera::StatePerpetrator::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00DA4BB0  Camera::StateAnimation::vf08  size=5  [class]
undefined4 Camera::StateAnimation::vf08(void)

{
  return 0;
}

// 00DA4BC0  Camera::StateAnimation::vf0C  size=3  [class]
void Camera::StateAnimation::vf0C(void)

{
  return;
}

// 00DA4BD0  Camera::StateAnimation::vf10  size=3  [class]
void Camera::StateAnimation::vf10(void)

{
  return;
}

// 00DA4BE0  Camera::StateAnimation::vf14  size=3  [class]
void Camera::StateAnimation::vf14(void)

{
  return;
}

// 00DA4C00  Camera::StateFps::vf08  size=39  [class]
bool Camera::StateFps::vf08(int param_1)

{
  if (DAT_018b9174 == 0x370) {
    return true;
  }
  return *(int *)(param_1 + 0x8b4) == 5;
}

// 00DA4C50  Camera::StateGallery::vf08  size=42  [class]
bool Camera::StateGallery::vf08(void)

{
  if ((DAT_018b9174 != 0xf05) && (DAT_018b9174 != 0xf07)) {
    return DAT_018b9174 == 0xf08;
  }
  return true;
}

// 00DA4C80  Camera::StateGallery::vf0C  size=55  [class]
void __fastcall Camera::StateGallery::vf0C(int param_1)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1c) = local_14;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = local_14;
  return;
}

// 00DA4CC0  Camera::StateGallery::vf14  size=3  [class]
void Camera::StateGallery::vf14(void)

{
  return;
}

// 00DA4D60  Camera::StatePartsFollow::vf0C  size=21  [class]
void Camera::StatePartsFollow::vf0C(int param_1)

{
  FUN_00da01f0(param_1 + 0x460);
  return;
}

// 00DA4D90  Camera::StatePlayerDead::vf08  size=32  [class]
undefined4 Camera::StatePlayerDead::vf08(undefined4 param_1,int param_2)

{
  if (*(float *)(param_2 + 0x348) <= 0.0) {
    return 1;
  }
  return 0;
}

// 00DA4DB0  Camera::StatePlayerDead::vf14  size=3  [class]
void Camera::StatePlayerDead::vf14(void)

{
  return;
}

// 00DA4DD0  Camera::StateRadio::vf08  size=14  [class]
uint Camera::StateRadio::vf08(void)

{
  return DAT_01bea094 >> 0x14 & 1;
}

// 00DA4E00  Camera::StateRail::vf14  size=3  [class]
void Camera::StateRail::vf14(void)

{
  return;
}

// 00DA4E20  Camera::StateReady::vf0C  size=3  [class]
void Camera::StateReady::vf0C(void)

{
  return;
}

// 00DA4E30  Camera::StateReady::vf10  size=3  [class]
void Camera::StateReady::vf10(void)

{
  return;
}

// 00DA4E50  Camera::StateUniqueSituation::vf08  size=18  [class]
bool Camera::StateUniqueSituation::vf08(int param_1)

{
  return *(int *)(param_1 + 0x8b4) != 0;
}

// 00DA4E70  Camera::StateUniqueSituation::vf14  size=3  [class]
void Camera::StateUniqueSituation::vf14(void)

{
  return;
}

// 00DA4F10  FUN_00da4f10  size=20  [between]
void __fastcall FUN_00da4f10(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[1] = 1;
  *param_1 = 0;
  param_1[0x15] = 0;
  return;
}

// 00DA4F60  FUN_00da4f60  size=122  [between]
void __thiscall
FUN_00da4f60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *param_1 = 1;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[8] = *param_3;
  param_1[9] = param_3[1];
  param_1[10] = param_3[2];
  param_1[0xb] = param_3[3];
  param_1[0xc] = *param_4;
  param_1[0xd] = param_4[1];
  param_1[0xe] = param_4[2];
  param_1[0xf] = param_4[3];
  param_1[0x12] = param_7;
  param_1[0x13] = param_8;
  param_1[0x10] = param_5;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x11] = param_6;
  return;
}

// 00DA4FE0  FUN_00da4fe0  size=5  [between]
void __fastcall FUN_00da4fe0(int param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}

// 00DA4FF0  FUN_00da4ff0  size=7  [between]
void __fastcall FUN_00da4ff0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00DA5000  FUN_00da5000  size=10  [between]
void __thiscall FUN_00da5000(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00DA5050  FUN_00da5050  size=56  [between]
void __fastcall FUN_00da5050(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

// 00DA50B0  FUN_00da50b0  size=3  [between]
undefined4 __fastcall FUN_00da50b0(undefined4 param_1)

{
  return param_1;
}

// 00DA5100  FUN_00da5100  size=1123  [between]
void __thiscall FUN_00da5100(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  if ((DAT_01b7ba94 & 8) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if ((DAT_01b7ba94 & 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  if (*(int *)(param_1 + 4) < 0) {
    *(undefined4 *)(param_1 + 4) = 9;
  }
  if (9 < *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    uVar4 = (uint)((DAT_01b7ba94 & 2) != 0);
    if ((DAT_01b7ba94 & 1) != 0) {
      uVar4 = uVar4 - 1;
    }
    if ((int)uVar4 < 3) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 2;
    }
    break;
  case 1:
    fVar1 = *(float *)(param_2 + 0x94);
    fVar2 = 0.017453292;
    if ((DAT_01b7ba9c & 2) != 0) {
      if ((DAT_01b7ba90 & 0x2000) != 0) {
        fVar2 = 0.17453292;
      }
      fVar1 = fVar2 + fVar1;
    }
    fVar2 = 0.17453292;
    if ((DAT_01b7ba9c & 1) != 0) {
      if ((DAT_01b7ba90 & 0x2000) == 0) {
        fVar2 = 0.017453292;
      }
      fVar1 = fVar1 - fVar2;
    }
    fVar2 = 1.7453293;
    if ((1.7453293 < fVar1) || (fVar2 = fVar1, 0.017453292 <= fVar1)) {
      *(float *)(param_2 + 0x94) = fVar2;
    }
    else {
      *(undefined4 *)(param_2 + 0x94) = 0x3c8efa35;
    }
    break;
  case 2:
    fVar1 = *(float *)(param_2 + 0x90);
    fVar2 = 0.01;
    if ((DAT_01b7ba9c & 2) != 0) {
      if ((DAT_01b7ba90 & 0x2000) != 0) {
        fVar2 = 0.1;
      }
      fVar1 = fVar2 + fVar1;
    }
    if ((DAT_01b7ba9c & 1) != 0) {
      if ((DAT_01b7ba90 & 0x2000) == 0) {
        fVar1 = fVar1 - 0.01;
      }
      else {
        fVar1 = fVar1 - 0.1;
      }
    }
    fVar2 = 2.0;
    if ((fVar1 <= 2.0) && (fVar2 = fVar1, fVar1 < 0.5)) {
      fVar2 = 0.5;
    }
    *(float *)(param_2 + 0x90) = fVar2;
    *(undefined4 *)(param_2 + 0xa0) = 1;
    break;
  case 4:
    fVar1 = *(float *)(param_2 + 0x4f0);
    fVar2 = 0.017453292;
    if ((DAT_01b7ba9c & 2) != 0) {
      if ((DAT_01b7ba90 & 0x2000) != 0) {
        fVar2 = 0.17453292;
      }
      fVar1 = fVar2 + fVar1;
    }
    if ((DAT_01b7ba9c & 1) != 0) {
      if ((DAT_01b7ba90 & 0x2000) == 0) {
        fVar1 = fVar1 - 0.017453292;
      }
      else {
        fVar1 = fVar1 - 0.17453292;
      }
    }
    *(float *)(param_2 + 0x4f0) = fVar1;
  }
  FUN_00f96580(0x43c80000,0x42c80000,0x41800000,0xff00c000,0xffffffff,&DAT_016c2c68);
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0xffffff00;
  }
  if (uVar4 == 1) {
    puVar5 = &DAT_016c2c10;
  }
  else if (uVar4 == 2) {
    puVar5 = &DAT_016c2c2c;
  }
  else {
    puVar5 = &DAT_016c2c48;
  }
  FUN_00f96580(0x43c80000,0x42e80000,0x41800000,uVar3,0xffffffff,puVar5);
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 1) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43040000,0x41800000,uVar3,0xffffffff,&DAT_016c2bfc,
               (double)(*(float *)(param_2 + 0x94) * 57.29578));
  *(undefined4 *)(param_2 + 0x4f8) = *(undefined4 *)(param_2 + 0x94);
  uVar3 = 0xffffffff;
  *(undefined4 *)(param_2 + 0x4a8) = *(undefined4 *)(param_2 + 0x94);
  if (*(int *)(param_1 + 4) == 2) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43140000,0x41800000,uVar3,0xffffffff,&DAT_016c2be0,
               (double)*(float *)(param_2 + 0x90));
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 3) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43240000,0x41800000,uVar3,0xffffffff,&DAT_016c2bc4);
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 4) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43340000,0x41800000,uVar3,0xffffffff,&DAT_016c2bac,
               (double)(*(float *)(param_2 + 0x4f0) * 57.29578));
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 5) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43440000,0x41800000,uVar3,0xffffffff,&DAT_016c2b90);
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 6) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43540000,0x41800000,uVar3,0xffffffff,&DAT_016c2b7c);
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 7) {
    uVar3 = 0xffffff00;
  }
  FUN_00f96580(0x43c80000,0x43640000,0x41800000,uVar3,0xffffffff,&DAT_016c2b6c);
  return;
}

// 00DA5590  FUN_00da5590  size=6  [between]
void __fastcall FUN_00da5590(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 00DA5600  FUN_00da5600  size=3  [between]
void FUN_00da5600(void)

{
  return;
}

// 00DA5610  FUN_00da5610  size=171  [between]
void __thiscall FUN_00da5610(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (-1 < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    local_20 = *(undefined4 *)(param_2 + 0x1c0);
    local_1c = *(undefined4 *)(param_2 + 0x1c4);
    local_18 = *(undefined4 *)(param_2 + 0x1c8);
    local_14 = *(undefined4 *)(param_2 + 0x1cc);
    local_24 = 0.1;
    fVar1 = *(float *)(param_2 + 500);
    if (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)) {
      local_24 = (*(float *)(param_2 + 500) - 5.0) * 0.0025 + 0.1;
    }
    iVar2 = FUN_00f96420();
    if (((iVar2 != 0) || (param_3 == 2)) || (param_3 == 1)) {
      FUN_00f95fd0(&local_20,local_24,0);
    }
  }
  return;
}

// 00DA56C0  FUN_00da56c0  size=8  [between]
bool __fastcall FUN_00da56c0(char *param_1)

{
  return *param_1 != '\0';
}

// 00DA5730  FUN_00da5730  size=59  [between]
void __fastcall FUN_00da5730(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

// 00DA5770  FUN_00da5770  size=3  [between]
undefined4 __fastcall FUN_00da5770(undefined4 *param_1)

{
  return *param_1;
}

// 00DA5780  FUN_00da5780  size=16  [between]
void __thiscall FUN_00da5780(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 1;
  param_1[0xc] = param_3;
  return;
}

// 00DA5790  FUN_00da5790  size=7  [between]
void __fastcall FUN_00da5790(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00DA57A0  FUN_00da57a0  size=1  [between]
void FUN_00da57a0(void)

{
  return;
}

// 00DA58C0  FUN_00da58c0  size=171  [between]
float10 FUN_00da58c0(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)0.5;
  fVar2 = (float10)param_1;
  if (fVar2 < fVar1) {
    fVar3 = (float10)fcos((float10)1.5707964 * (fVar2 + fVar2) + (float10)3.1415927);
    fVar5 = (float10)1;
    fVar4 = (float10)param_2;
    if (fVar4 < fVar5) {
      return (fVar4 * (fVar3 + fVar5) + (fVar5 - fVar4) * (fVar2 + fVar2)) * fVar1;
    }
    fVar1 = (float10)FUN_00fdc1f0();
    return fVar1 * (float10)0.5;
  }
  if (fVar2 <= fVar1) {
    return fVar1;
  }
  fVar2 = (fVar2 - fVar1) + (fVar2 - fVar1);
  fVar5 = (float10)fsin((float10)1.5707964 * fVar2);
  fVar3 = (float10)param_2;
  if (fVar3 < (float10)1) {
    return (fVar3 * fVar5 + ((float10)1 - fVar3) * fVar2) * fVar1 + fVar1;
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return fVar1 * (float10)0.5 + (float10)0.5;
}

// 00DA5990  FUN_00da5990  size=385  [between]
void __fastcall FUN_00da5990(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  iVar4 = 0;
  uVar6 = 0;
  local_4 = 0;
  pfVar3 = (float *)(param_1 + 0xc);
  do {
    fVar2 = pfVar3[-2];
    if ((~uVar6 & (uint)fVar2 & 1) == 0) {
      fVar1 = *pfVar3;
      *pfVar3 = fVar1 * 0.97;
      if (fVar1 * 0.97 < 0.01) {
        *pfVar3 = 0.0;
      }
    }
    else {
      fVar1 = *(float *)((int)&DAT_018bc3ac + iVar4) + *pfVar3;
      *pfVar3 = fVar1;
      if (*(float *)((int)&DAT_018bc3b0 + iVar4) < fVar1) {
        *pfVar3 = *(float *)((int)&DAT_018bc3b0 + iVar4);
      }
    }
    uVar5 = ~local_4 & (uint)pfVar3[-3];
    if ((uVar5 & 1) == 0) {
      pfVar3[5] = 0.0;
      pfVar3[6] = 0.0;
    }
    else {
      pfVar3[5] = *(float *)((int)&DAT_018bc3d0 + iVar4) + pfVar3[5];
      pfVar3[6] = *(float *)((int)&DAT_018bc3f4 + iVar4) + pfVar3[6];
      if (*(float *)((int)&DAT_018bc3d4 + iVar4) < pfVar3[5]) {
        pfVar3[5] = *(float *)((int)&DAT_018bc3d4 + iVar4);
      }
      if (*(float *)((int)&DAT_018bc3f8 + iVar4) < pfVar3[6]) {
        pfVar3[6] = *(float *)((int)&DAT_018bc3f8 + iVar4);
      }
    }
    if ((uVar5 & 2) == 0) {
      pfVar3[8] = 0.0;
    }
    else {
      fVar1 = *(float *)((int)&DAT_018bc3f4 + iVar4) + pfVar3[8];
      pfVar3[8] = fVar1;
      if (*(float *)((int)&DAT_018bc3f8 + iVar4) < fVar1) {
        pfVar3[8] = *(float *)((int)&DAT_018bc3f8 + iVar4);
      }
    }
    if ((uVar5 & 4) == 0) {
      pfVar3[10] = 0.0;
    }
    else {
      fVar1 = *(float *)((int)&DAT_018bc418 + iVar4) + pfVar3[10];
      pfVar3[10] = fVar1;
      if (*(float *)((int)&DAT_018bc41c + iVar4) < fVar1) {
        pfVar3[10] = *(float *)((int)&DAT_018bc41c + iVar4);
      }
    }
    local_4 = local_4 | (uint)pfVar3[-3];
    pfVar3[-3] = 0.0;
    pfVar3[-2] = 0.0;
    uVar6 = uVar6 | (uint)fVar2;
    pfVar3[-1] = fVar2;
    if (0.0 < pfVar3[0xb]) {
      pfVar3[8] = 0.0;
      pfVar3[6] = 0.0;
      fVar2 = pfVar3[0xb];
      pfVar3[0xb] = fVar2 - 1.0;
      if (fVar2 - 1.0 < 0.0) {
        pfVar3[0xb] = 0.0;
      }
    }
    iVar4 = iVar4 + 0xc;
    pfVar3 = pfVar3 + 0x10;
  } while (iVar4 < 0x24);
  return;
}

// 00DA5BD0  FUN_00da5bd0  size=72  [between]
undefined4 __fastcall FUN_00da5bd0(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = (float *)(param_1 + 0x2c);
  do {
    if (*pfVar1 != 0.0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 0x10;
  } while (iVar2 < 3);
  iVar2 = 0;
  pfVar1 = (float *)(param_1 + 0x24);
  do {
    if (*pfVar1 != 0.0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 0x10;
  } while (iVar2 < 3);
  return 0;
}

// 00DA5C80  FUN_00da5c80  size=77  [between]
void __thiscall FUN_00da5c80(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(float *)(param_1 + 0xc) != 0.0) {
      fVar1 = *(float *)(param_1 + 0xc);
      if (ABS(*param_2) < fVar1) {
        if (0.0 < *param_2 == (*param_2 == 0.0)) {
          fVar1 = -fVar1;
        }
        *param_2 = fVar1;
        return;
      }
      return;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x40;
  } while (iVar2 < 3);
  return;
}

// 00DA5CD0  FUN_00da5cd0  size=128  [between]
void __thiscall FUN_00da5cd0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = 0;
  while (*(float *)(param_1 + 0x34) == 0.0) {
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x40;
    if (2 < iVar3) {
      return;
    }
  }
  iVar3 = iVar3 * 0xc;
  fVar1 = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x34) +
          (1.0 - *(float *)(param_1 + 0x34)) * *param_2;
  if ((*(float *)(iVar3 + 0x18bc420) != 0.0) &&
     (fVar2 = fVar1 - *param_2, *(float *)(iVar3 + 0x18bc420) < ABS(fVar2))) {
    fVar1 = *(float *)(iVar3 + 0x18bc420);
    if (fVar2 <= 0.0) {
      fVar1 = -fVar1;
    }
    *param_2 = fVar1 + *param_2;
    return;
  }
  *param_2 = fVar1;
  return;
}

// 00DA5DD0  FUN_00da5dd0  size=148  [between]
void __thiscall FUN_00da5dd0(int param_1,int param_2)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = *(float *)(param_2 + 0x1c0) + *(float *)(param_1 + 0x10);
  local_2c = *(float *)(param_2 + 0x1c4) + *(float *)(param_1 + 0x14);
  local_28 = *(float *)(param_2 + 0x1c8) + *(float *)(param_1 + 0x18);
  local_24 = *(float *)(param_2 + 0x1cc) + *(float *)(param_1 + 0x1c);
  local_20 = *(float *)(param_2 + 0x1b0) + *(float *)(param_1 + 0x10);
  local_1c = *(float *)(param_2 + 0x1b4) + *(float *)(param_1 + 0x14);
  local_18 = *(float *)(param_2 + 0x1b8) + *(float *)(param_1 + 0x18);
  local_14 = *(float *)(param_2 + 0x1bc) + *(float *)(param_1 + 0x1c);
  FUN_00de5d10(&local_20,&local_30,param_2 + 0x1d0);
  return;
}

// 00DA5F20  FUN_00da5f20  size=45  [between]
void FUN_00da5f20(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_00a81330();
  return;
}

// 00DA5F90  FUN_00da5f90  size=57  [between]
undefined4 FUN_00da5f90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da5fba;
  }
  iVar2 = FUN_00a81330();
LAB_00da5fba:
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    return uVar3;
  }
  return 0;
}

// 00DA60E0  FUN_00da60e0  size=53  [between]
undefined4 __fastcall FUN_00da60e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00da6113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x340))();
  return uVar3;
}

// 00DA6120  FUN_00da6120  size=54  [between]
undefined4 __fastcall FUN_00da6120(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0xb78);
}

// 00DA6160  FUN_00da6160  size=52  [between]
undefined4 __fastcall FUN_00da6160(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar3 = FUN_00b7e3f0();
  return uVar3;
}

// 00DA61E0  FUN_00da61e0  size=54  [between]
undefined4 __fastcall FUN_00da61e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0xe0c);
}

// 00DA6270  FUN_00da6270  size=58  [between]
float10 __fastcall FUN_00da6270(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da6293;
  }
  if (*(int *)(param_1 + 8) != 0) {
    return (float10)*(float *)(*(int *)(param_1 + 8) + 0x341c);
  }
LAB_00da6293:
  return (float10)-1.0;
}

// 00DA62B0  FUN_00da62b0  size=59  [between]
undefined4 __fastcall FUN_00da62b0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00da62e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x32c))();
  return uVar3;
}

// 00DA62F0  FUN_00da62f0  size=52  [between]
undefined4 __fastcall FUN_00da62f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar3 = FUN_00b8bfe0();
  return uVar3;
}

// 00DA6530  FUN_00da6530  size=53  [between]
undefined4 __fastcall FUN_00da6530(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_00b8bf00();
  return uVar3;
}

// 00DA6570  FUN_00da6570  size=53  [between]
undefined4 __fastcall FUN_00da6570(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_00b8bf40();
  return uVar3;
}

// 00DA6690  FUN_00da6690  size=58  [between]
undefined4 __fastcall FUN_00da6690(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar3 = FUN_00a81330();
  return uVar3;
}

// 00DA6720  FUN_00da6720  size=26  [between]
void __fastcall FUN_00da6720(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00a7c950();
  param_1[2] = 0;
  return;
}

// 00DA6740  FUN_00da6740  size=103  [between]
void __thiscall FUN_00da6740(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00c4ec80();
  uVar2 = FUN_00a81330();
  uVar3 = FUN_00a7c8a0();
  *param_1 = param_2;
  FUN_00a7c970(uVar2);
  param_1[2] = uVar3;
  param_1[3] = (int)*(short *)(iVar1 + 4);
  param_1[4] = *(undefined4 *)(iVar1 + 0x20);
  param_1[5] = *(undefined4 *)(iVar1 + 0x24);
  param_1[6] = *(undefined4 *)(iVar1 + 0x28);
  param_1[7] = *(undefined4 *)(iVar1 + 0x2c);
  FUN_00c15010(param_1 + 8);
  return;
}

// 00DA67B0  FUN_00da67b0  size=81  [between]
void __fastcall FUN_00da67b0(undefined4 *param_1)

{
  float *pfVar1;
  int iVar2;
  
  if (param_1[3] != -1) {
    iVar2 = FUN_00a12210(param_1[3]);
    if (iVar2 != 0) goto LAB_00da67cd;
  }
  iVar2 = param_1[2];
LAB_00da67cd:
  pfVar1 = (float *)(param_1 + 8);
  D3DXVec3TransformNormal(pfVar1,param_1 + 4,iVar2 + 0x10);
  *pfVar1 = *pfVar1 + *(float *)(iVar2 + 0x40);
  param_1[9] = *(float *)(iVar2 + 0x44) + (float)param_1[9];
  param_1[10] = *(float *)(iVar2 + 0x48) + (float)param_1[10];
  *param_1 = 3;
  return;
}

// 00DA6810  FUN_00da6810  size=101  [between]
undefined4 FUN_00da6810(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00c4ec80();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c7e0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        if (*(int *)(iVar1 + 0x50) != 0) {
          return 1;
        }
        if (*(int *)(iVar1 + 0x54) != 0) {
          return 2;
        }
        FUN_00dd5650(&DAT_016c2c94);
      }
    }
  }
  return 0;
}

// 00DA6880  FUN_00da6880  size=157  [between]
undefined4 FUN_00da6880(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = ((param_2[2] * param_3[2] + *param_2 * *param_3 + param_2[1] * param_3[1]) -
          (param_4[2] * param_3[2] + param_3[1] * param_4[1] + *param_3 * *param_4)) /
          (param_5[2] * param_3[2] + param_3[1] * param_5[1] + *param_3 * *param_5);
  if (fVar7 < 0.0) {
    return 0;
  }
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  *param_1 = *param_4 + *param_5 * fVar7;
  param_1[1] = fVar4 + fVar1 * fVar7;
  param_1[2] = fVar2 * fVar7 + fVar5;
  param_1[3] = fVar6 + fVar3 * fVar7;
  return 1;
}

// 00DA6920  FUN_00da6920  size=134  [between]
void FUN_00da6920(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = ((param_2[2] * param_3[2] + *param_2 * *param_3 + param_2[1] * param_3[1]) -
          (param_4[2] * param_3[2] + *param_3 * *param_4 + param_3[1] * param_4[1])) /
          (param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  *param_1 = *param_4 + *param_3 * fVar7;
  param_1[1] = fVar4 + fVar1 * fVar7;
  param_1[2] = fVar7 * fVar2 + fVar5;
  param_1[3] = fVar6 + fVar3 * fVar7;
  return;
}

// 00DA69F0  Camera::Math::safeNormalize  size=130  [class]
undefined4 Camera::Math::safeNormalize(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  if (fVar1 <= 1.1920929e-07) {
    FUN_00dd5650(&DAT_016c2cb0);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return 0;
  }
  *param_1 = *param_2 / fVar1;
  param_1[1] = param_2[1] / fVar1;
  param_1[2] = param_2[2] / fVar1;
  param_1[3] = param_2[3] / fVar1;
  return 1;
}

// 00DA6B30  FUN_00da6b30  size=229  [between]
float10 FUN_00da6b30(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)0.5;
  fVar2 = (float10)param_1;
  if (fVar2 < fVar1) {
    fVar3 = (float10)fcos((float10)1.5707964 * (fVar2 + fVar2) + (float10)3.1415927);
    if ((float10)param_2 < (float10)10.0) {
      fVar4 = (float10)param_2 * (float10)0.1;
      return (fVar4 * (fVar3 + (float10)1) + ((float10)1 - fVar4) * (fVar2 + fVar2)) * fVar1;
    }
    fVar1 = (float10)FUN_00fdc1f0();
    return fVar1 * (float10)0.5;
  }
  if (fVar2 <= fVar1) {
    return fVar2;
  }
  fVar2 = (fVar2 - fVar1) + (fVar2 - fVar1);
  fVar3 = (float10)fsin((float10)1.5707964 * fVar2);
  if ((float10)param_2 < (float10)10.0) {
    fVar4 = (float10)param_2 * (float10)0.1;
    return (fVar4 * fVar3 + ((float10)1 - fVar4) * fVar2) * fVar1 + fVar1;
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return fVar1 * (float10)0.5 + (float10)0.5;
}

// 00DA6CA0  FUN_00da6ca0  size=583  [between]
float10 FUN_00da6ca0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float unaff_ESI;
  float10 fVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  local_54 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  local_60 = *param_2 / local_54;
  local_5c = param_2[1] / local_54;
  local_58 = param_2[2] / local_54;
  local_54 = param_2[3] / local_54;
  fVar2 = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
  fVar4 = *param_3 / fVar2;
  fVar3 = param_3[1] / fVar2;
  fVar2 = param_3[2] / fVar2;
  fVar1 = fVar2 * local_58 + fVar3 * local_5c + fVar4 * local_60;
  if (0.995 < fVar1) {
    return (float10)0;
  }
  if (-0.995 <= fVar1) {
    local_70 = fVar2 * local_5c - fVar3 * local_58;
    local_6c = fVar4 * local_58 - fVar2 * local_60;
    local_68 = fVar3 * local_60 - local_5c * fVar4;
    iVar5 = Camera::Math::safeNormalize(&local_70,&local_70);
    if (iVar5 != 0) {
      if (((*param_4 != 0.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) {
        fVar1 = *param_4 * local_70;
        local_70 = *param_4;
        if (0.0 <= param_4[2] * local_68 + param_4[1] * local_6c + fVar1) {
          local_6c = param_4[1];
          local_68 = param_4[2];
          local_64 = param_4[3];
        }
        else {
          local_70 = local_70 * -1.0;
          local_6c = param_4[1] * -1.0;
          local_68 = param_4[2] * -1.0;
          local_64 = param_4[3] * -1.0;
        }
      }
      fVar6 = (float10)FUN_00fdc4e0();
      FUN_00ddcfe0(local_50,&local_70,(float)(fVar6 * (float10)param_5));
      D3DXVec3TransformNormal(param_1,&local_60,local_50);
      *param_1 = *param_1 * unaff_ESI;
      param_1[1] = param_1[1] * unaff_ESI;
      param_1[2] = param_1[2] * unaff_ESI;
      param_1[3] = unaff_ESI * param_1[3];
      return (float10)1;
    }
  }
  return (float10)0;
}

// 00DA6EF0  FUN_00da6ef0  size=102  [between]
void FUN_00da6ef0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_9c [12];
  undefined1 local_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 local_50 [76];
  
  thunk_FUN_00ddc1d0(local_50,param_3,5);
  D3DXMatrixMultiply(local_90,local_50,param_4);
  D3DXVec3TransformNormal(param_1,param_2,auStack_9c);
  *param_1 = *param_1 + fStack_78;
  param_1[1] = param_1[1] + fStack_74;
  param_1[2] = param_1[2] + fStack_70;
  return;
}

// 00DA6F60  FUN_00da6f60  size=396  [between]
void FUN_00da6f60(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_40 = *param_4 - *param_3;
  local_3c = param_4[1] - param_3[1];
  local_38 = param_4[2] - param_3[2];
  local_34 = param_4[3] - param_3[3];
  fVar1 = param_5[2] * local_38 + *param_5 * local_40 + param_5[1] * local_3c;
  if ((ABS(fVar1) < 0.001 == (ABS(fVar1) == 0.001)) &&
     (((*param_5 != 0.0 || (param_5[1] != 0.0)) || (param_5[2] != 0.0)))) {
    *param_1 = *param_5 * fVar1;
    param_1[1] = param_5[1] * fVar1;
    param_1[2] = param_5[2] * fVar1;
    param_1[3] = fVar1 * param_5[3];
    iVar2 = Camera::Math::safeNormalize(&local_20,&local_40);
    if ((iVar2 != 0) && (iVar2 = Camera::Math::safeNormalize(&local_30,param_1), iVar2 != 0)) {
      if (local_28 * local_18 + local_1c * local_2c + local_20 * local_30 < 0.0) {
        *param_1 = *param_1 * -1.0;
        param_1[1] = param_1[1] * -1.0;
        param_1[2] = param_1[2] * -1.0;
        param_1[3] = param_1[3] * -1.0;
      }
      *param_2 = local_40 - *param_1;
      param_2[1] = local_3c - param_1[1];
      param_2[2] = local_38 - param_1[2];
      param_2[3] = local_34 - param_1[3];
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  return;
}

// 00DA70F0  FUN_00da70f0  size=239  [between]
void FUN_00da70f0(float *param_1,float param_2,int *param_3,int param_4,float param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  D3DXVec3TransformNormal();
  fStack_2c = *(float *)((int)param_5 + 0x30) + fStack_2c;
  fStack_28 = *(float *)((int)param_5 + 0x34) + fStack_28;
  fStack_24 = *(float *)((int)param_5 + 0x38) + fStack_24;
  fVar5 = -fStack_24;
  if (ABS(fVar5) < 1e-06) {
    iVar1 = param_3[3];
    iVar2 = param_3[1];
    *param_1 = (float)*param_3 + (float)param_3[2] * 0.5;
    param_1[1] = (float)iVar1 * 0.5 + (float)iVar2;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    return;
  }
  D3DXVec3TransformNormal(&fStack_2c,&fStack_2c,param_4);
  fVar3 = *(float *)(param_4 + 0x34);
  fVar4 = *(float *)(param_4 + 0x38);
  *param_1 = (float)*param_3 +
             (float)param_3[2] * ((*(float *)(param_4 + 0x30) + param_2) / (float)local_20 + 1.0) *
             0.5;
  param_1[1] = (float)param_3[1] +
               (float)param_3[3] * (1.0 - (fVar3 + param_5) / (float)local_20) * 0.5;
  param_1[2] = (fVar4 + fVar5) / (float)local_20;
  return;
}

// 00DA7260  FUN_00da7260  size=263  [between]
float10 __thiscall FUN_00da7260(int param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_2;
  local_18 = param_2[2];
  local_14 = param_2[3];
  local_1c = 0.0;
  iVar1 = Camera::Math::safeNormalize(&local_20,&local_20);
  if (iVar1 != 0) {
    local_30 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0);
    local_28 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
    local_24 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xac);
    local_2c = 0.0;
    iVar1 = Camera::Math::safeNormalize(&local_30,&local_30);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00ddbb50(local_28 * local_18 + local_2c * local_1c + local_30 * local_20)
      ;
      if ((((float10)0 != fVar2) && ((float10)3.1415927 != fVar2)) &&
         ((float10)local_30 * (float10)local_18 - (float10)local_28 * (float10)local_20 < (float10)0
         )) {
        return -fVar2;
      }
      return fVar2;
    }
  }
  return (float10)0;
}

// 00DA73A0  FUN_00da73a0  size=116  [between]
float10 FUN_00da73a0(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_1 - *param_2;
  local_1c = param_1[1] - param_2[1];
  local_18 = param_1[2] - param_2[2];
  local_14 = param_1[3] - param_2[3];
  fVar1 = (float10)FUN_00da7260(&local_20);
  fVar2 = ABS(fVar1) - (float10)param_3;
  if (fVar2 <= (float10)1.1920929e-07) {
    fVar2 = (float10)0;
  }
  else if ((float10)0 <= fVar1) {
    return -fVar2;
  }
  return fVar2;
}

// 00DA7460  FUN_00da7460  size=147  [between]
void __fastcall FUN_00da7460(int param_1)

{
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [4];
  undefined1 local_50 [76];
  
  local_60[0] = 0.0;
  local_60[1] = 0.0;
  local_60[2] = -*(float *)(param_1 + 0xd0);
  FUN_00ddc1d0(local_50,param_1 + 0xf0,5);
  D3DXVec3TransformNormal(local_60,local_60,local_50);
  *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xb0) + fStack_6c;
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xb4) + fStack_68;
  *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xb8) + fStack_64;
  *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xbc) + local_60[0];
  return;
}

// 00DA7500  FUN_00da7500  size=100  [between]
float10 FUN_00da7500(void)

{
  float10 fVar1;
  
  if (DAT_01b77e58 < 6) {
    fVar1 = (float10)1 -
            ((float10)1 - (float10)*(float *)PTR_DAT_018bc3a4) * (float10)(5 - DAT_01b77e58) *
            (float10)0.25;
  }
  else {
    fVar1 = (float10)(DAT_01b77e58 + -5) * ((float10)*(float *)(PTR_DAT_018bc3a4 + 4) - (float10)1)
            * (float10)0.2 + (float10)1;
  }
  if ((DAT_01bea094 & 0x800000) != 0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

// 00DA7570  FUN_00da7570  size=91  [between]
float10 FUN_00da7570(void)

{
  float10 fVar1;
  
  if (DAT_01b77e5c < 6) {
    fVar1 = (float10)1 -
            ((float10)1 - (float10)*(float *)(PTR_DAT_018bc3a4 + 8)) * (float10)(5 - DAT_01b77e5c) *
            (float10)0.25;
  }
  else {
    fVar1 = (float10)(DAT_01b77e5c + -5) *
            ((float10)*(float *)(PTR_DAT_018bc3a4 + 0xc) - (float10)1) * (float10)0.2 + (float10)1;
  }
  if ((DAT_01bea094 & 0x400000) != 0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

// 00DA7650  Camera::StateNodeTraitType<Camera::StatePerpetrator>::vf04  size=43  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StatePerpetrator>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StatePerpetrator::vftable;
    puVar1[1] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DA77C0  Camera::StateNodeTraitType<Camera::StateBattle>::vf04  size=50  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateBattle>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x44,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateBattle::vftable;
    puVar1[9] = 0x42700000;
    puVar1[4] = 0;
    puVar1[7] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DA7B00  Camera::StateNodeTraitType<Camera::StateBattleFixed>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateBattleFixed>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7B20  Camera::StateBattleFixed::StateBattleFixed  size=35  [class]
undefined4 * __fastcall Camera::StateBattleFixed::StateBattleFixed(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 00DA7B50  Camera::StateBattleFixed::vf00  size=6  [class]
undefined * Camera::StateBattleFixed::vf00(void)

{
  return &DAT_01dc63e8;
}

// 00DA7B60  Camera::StateBattleFixed::vf20  size=6  [class]
undefined ** Camera::StateBattleFixed::vf20(void)

{
  return &PTR_vftable_018cccc0;
}

// 00DA7B70  Camera::StateBattleFixed::vf1C  size=6  [class]
char * Camera::StateBattleFixed::vf1C(void)

{
  return "StateBattleFixed";
}

// 00DA7B80  Camera::StateNodeTraitType<Camera::StatePerpetrator>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StatePerpetrator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7BA0  Camera::StateNodeTraitType<Camera::StatePartsFollow>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StatePartsFollow>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7BC0  Camera::StateNodeTraitType<Camera::StateGallery>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateGallery>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7BF0  Camera::StateGallery::vf00  size=6  [class]
undefined * Camera::StateGallery::vf00(void)

{
  return &DAT_01dc6400;
}

// 00DA7C00  Camera::StateGallery::vf20  size=6  [class]
undefined ** Camera::StateGallery::vf20(void)

{
  return &PTR_vftable_018ccd08;
}

// 00DA7C10  Camera::StateGallery::vf1C  size=6  [class]
char * Camera::StateGallery::vf1C(void)

{
  return "StateGallery";
}

// 00DA7C20  Camera::StateNodeTraitType<Camera::StateDiveKill>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateDiveKill>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7C40  Camera::StateDiveKill::StateDiveKill  size=32  [class]
undefined4 * __fastcall Camera::StateDiveKill::StateDiveKill(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00e240c0();
  return param_1;
}

// 00DA7C60  Camera::StateDiveKill::vf00  size=6  [class]
undefined * Camera::StateDiveKill::vf00(void)

{
  return &DAT_01dc641c;
}

// 00DA7C70  Camera::StateDiveKill::vf20  size=6  [class]
undefined ** Camera::StateDiveKill::vf20(void)

{
  return &PTR_vftable_018ccd5c;
}

// 00DA7C80  Camera::StateDiveKill::vf1C  size=6  [class]
char * Camera::StateDiveKill::vf1C(void)

{
  return "StateDiveKill";
}

// 00DA7C90  Camera::StateNodeTraitType<Camera::StateSlashingTarget>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateSlashingTarget>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7CC0  Camera::StateSlashingTarget::vf00  size=6  [class]
undefined * Camera::StateSlashingTarget::vf00(void)

{
  return &DAT_01dc642c;
}

// 00DA7CD0  Camera::StateSlashingTarget::vf20  size=6  [class]
undefined ** Camera::StateSlashingTarget::vf20(void)

{
  return &PTR_vftable_018ccd8c;
}

// 00DA7CE0  Camera::StateSlashingTarget::vf1C  size=6  [class]
char * Camera::StateSlashingTarget::vf1C(void)

{
  return "StateSlashingTarget";
}

// 00DA7CF0  Camera::StateNodeTraitType<Camera::StateBattle>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateBattle>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7D10  Camera::StateNodeTraitType<Camera::StateLockOn>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateLockOn>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7D30  Camera::StateNodeTraitType<Camera::StateSubWeaponAiming>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateSubWeaponAiming>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7D60  Camera::StateSubWeaponAiming::vf00  size=6  [class]
undefined * Camera::StateSubWeaponAiming::vf00(void)

{
  return &DAT_01dc63f4;
}

// 00DA7D70  Camera::StateSubWeaponAiming::vf20  size=6  [class]
undefined ** Camera::StateSubWeaponAiming::vf20(void)

{
  return &PTR_vftable_018ccce4;
}

// 00DA7D80  Camera::StateSubWeaponAiming::vf1C  size=6  [class]
char * Camera::StateSubWeaponAiming::vf1C(void)

{
  return "StateSubWeaponAiming";
}

// 00DA7DA0  Camera::StateSubWeaponAiming::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateSubWeaponAiming::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7DC0  Camera::StateNodeTraitType<Camera::StateAnimation>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateAnimation>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7DF0  Camera::StateAnimation::vf00  size=6  [class]
undefined * Camera::StateAnimation::vf00(void)

{
  return &DAT_01dc63f8;
}

// 00DA7E00  Camera::StateAnimation::vf20  size=6  [class]
undefined ** Camera::StateAnimation::vf20(void)

{
  return &PTR_vftable_018cccf0;
}

// 00DA7E10  Camera::StateAnimation::vf1C  size=6  [class]
char * Camera::StateAnimation::vf1C(void)

{
  return "StateAnimation";
}

// 00DA7E30  Camera::StateAnimation::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateAnimation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7E50  Camera::StateNodeTraitType<Camera::StateFps>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateFps>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7E70  Camera::StateNodeTraitType<Camera::StatePlayerDead>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StatePlayerDead>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7EA0  Camera::StatePlayerDead::vf00  size=6  [class]
undefined * Camera::StatePlayerDead::vf00(void)

{
  return &DAT_01dc6408;
}

// 00DA7EB0  Camera::StatePlayerDead::vf20  size=6  [class]
undefined ** Camera::StatePlayerDead::vf20(void)

{
  return &PTR_vftable_018ccd20;
}

// 00DA7EC0  Camera::StatePlayerDead::vf1C  size=6  [class]
char * Camera::StatePlayerDead::vf1C(void)

{
  return "StatePlayerDead";
}

// 00DA7EE0  Camera::StatePlayerDead::vf04  size=31  [class]
undefined4 * __thiscall Camera::StatePlayerDead::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7F00  Camera::StateNodeTraitType<Camera::StateRadio>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateRadio>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7F20  Camera::StateNodeTraitType<Camera::StateRail>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateRail>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7F50  Camera::StateRail::vf00  size=6  [class]
undefined * Camera::StateRail::vf00(void)

{
  return &DAT_01dc6410;
}

// 00DA7F60  Camera::StateRail::vf20  size=6  [class]
undefined ** Camera::StateRail::vf20(void)

{
  return &PTR_vftable_018ccd38;
}

// 00DA7F70  Camera::StateRail::vf1C  size=6  [class]
char * Camera::StateRail::vf1C(void)

{
  return "StateRail";
}

// 00DA7F90  Camera::StateRail::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateRail::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7FB0  Camera::StateNodeTraitType<Camera::StateReady>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateReady>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA7FE0  Camera::StateReady::vf00  size=6  [class]
undefined * Camera::StateReady::vf00(void)

{
  return &DAT_01dc6414;
}

// 00DA7FF0  Camera::StateReady::vf20  size=6  [class]
undefined ** Camera::StateReady::vf20(void)

{
  return &PTR_vftable_018ccd44;
}

// 00DA8000  Camera::StateReady::vf1C  size=6  [class]
char * Camera::StateReady::vf1C(void)

{
  return "StateReady";
}

// 00DA8020  Camera::StateReady::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateReady::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8040  Camera::StateNodeTraitType<Camera::StateUniqueSituation>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateUniqueSituation>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8070  Camera::StateUniqueSituation::vf00  size=6  [class]
undefined * Camera::StateUniqueSituation::vf00(void)

{
  return &DAT_01dc6418;
}

// 00DA8080  Camera::StateUniqueSituation::vf20  size=6  [class]
undefined ** Camera::StateUniqueSituation::vf20(void)

{
  return &PTR_vftable_018ccd50;
}

// 00DA8090  Camera::StateUniqueSituation::vf1C  size=6  [class]
char * Camera::StateUniqueSituation::vf1C(void)

{
  return "StateUniqueSituation";
}

// 00DA80B0  Camera::StateUniqueSituation::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateUniqueSituation::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA80D0  Camera::StateNodeTraitType<Camera::StateNormal>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateNormal>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8100  Camera::StateNormal::vf00  size=6  [class]
undefined * Camera::StateNormal::vf00(void)

{
  return &DAT_01dc6420;
}

// 00DA8110  Camera::StateNormal::vf20  size=6  [class]
undefined ** Camera::StateNormal::vf20(void)

{
  return &PTR_vftable_018ccd68;
}

// 00DA8120  Camera::StateNormal::vf1C  size=6  [class]
char * Camera::StateNormal::vf1C(void)

{
  return "StateNormal";
}

// 00DA8140  Camera::StateNormal::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateNormal::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8160  Camera::StateNodeTraitType<Camera::StateSlashingBehind>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateSlashingBehind>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8190  Camera::StateSlashingBehind::vf00  size=6  [class]
undefined * Camera::StateSlashingBehind::vf00(void)

{
  return &DAT_01dc6424;
}

// 00DA81A0  Camera::StateSlashingBehind::vf20  size=6  [class]
undefined ** Camera::StateSlashingBehind::vf20(void)

{
  return &PTR_vftable_018ccd74;
}

// 00DA81B0  Camera::StateSlashingBehind::vf1C  size=6  [class]
char * Camera::StateSlashingBehind::vf1C(void)

{
  return "StateSlashingBehind";
}

// 00DA81D0  Camera::StateSlashingBehind::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateSlashingBehind::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA81F0  Camera::StateNodeTraitType<Camera::StateSlashingNormal>::vf00  size=31  [class]
undefined4 * __thiscall
Camera::StateNodeTraitType<Camera::StateSlashingNormal>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNodeTrait::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8390  FUN_00da8390  size=236  [between]
void __fastcall FUN_00da8390(int param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00de4ec0();
  *(undefined4 *)(param_1 + 0x94) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x90) = 0x3fe38e39;
  *(undefined4 *)(param_1 + 0x98) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x9c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xc0000000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00de5d10(&local_20,&local_30,&local_40);
  FUN_00de6410();
  FUN_00de5aa0();
  FUN_00de5170();
  FUN_00de5560(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
               *(undefined4 *)(param_1 + 0x9c),0x10,9);
  return;
}

// 00DA8480  FUN_00da8480  size=230  [between]
void __fastcall FUN_00da8480(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x200);
  puVar3 = (undefined4 *)(param_1 + 0x280);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xb0);
  puVar3 = (undefined4 *)(param_1 + 0x170);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00de6410();
  FUN_00de5aa0();
  FUN_00de5170();
  D3DXMatrixMultiply(param_1 + 0x200,(undefined4 *)(param_1 + 0xb0),param_1 + 0x10);
  D3DXMatrixMultiply(param_1 + 0x240,param_1 + 0x50,param_1 + 0x130);
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  uVar5 = *(undefined4 *)(param_1 + 0x98);
  if ((*(int *)(param_1 + 0x350) != 0) && ((DAT_01bea084 & 0x80000000) == 0)) {
    FUN_00de59f0(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x348) = uVar4;
    *(undefined4 *)(param_1 + 0x344) = uVar5;
    FUN_00de6460(param_1 + 0x1b0,param_1 + 0x1c0,param_1 + 0x1d0);
  }
  return;
}

// 00DA85D0  FUN_00da85d0  size=66  [between]
int FUN_00da85d0(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da85fa;
  }
  iVar2 = FUN_00a81330();
LAB_00da85fa:
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c800();
    return iVar2 + 0x40;
  }
  return 0x40;
}

// 00DA8620  FUN_00da8620  size=66  [between]
int FUN_00da8620(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da864a;
  }
  iVar2 = FUN_00a81330();
LAB_00da864a:
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c800();
    return iVar2 + 0x10;
  }
  return 0x10;
}

// 00DA8670  FUN_00da8670  size=68  [between]
int FUN_00da8670(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da869a;
  }
  iVar2 = FUN_00a81330();
LAB_00da869a:
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c800();
    return iVar2 + 0x90;
  }
  return 0x90;
}

// 00DA87B0  FUN_00da87b0  size=61  [between]
undefined4 FUN_00da87b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da87de;
  }
  iVar2 = FUN_00a81330();
LAB_00da87de:
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    return uVar3;
  }
  return 0;
}

// 00DA8810  FUN_00da8810  size=39  [between]
void __thiscall FUN_00da8810(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x37c) = param_2;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0();
  return;
}

// 00DA8840  FUN_00da8840  size=181  [between]
void __thiscall FUN_00da8840(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x4b0) = *param_2;
  *(undefined4 *)(param_1 + 0x4b4) = param_2[1];
  *(undefined4 *)(param_1 + 0x4b8) = param_2[2];
  *(undefined4 *)(param_1 + 0x4bc) = param_2[3];
  *(undefined4 *)(param_1 + 0x4c0) = *param_3;
  *(undefined4 *)(param_1 + 0x4c4) = param_3[1];
  *(undefined4 *)(param_1 + 0x4c8) = param_3[2];
  *(undefined4 *)(param_1 + 0x4cc) = param_3[3];
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = local_14;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = local_14;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  return;
}

// 00DA8900  FUN_00da8900  size=191  [between]
void __thiscall FUN_00da8900(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x1b0);
  param_2[1] = *(undefined4 *)(param_1 + 0x1b4);
  param_2[2] = *(undefined4 *)(param_1 + 0x1b8);
  param_2[3] = *(undefined4 *)(param_1 + 0x1bc);
  param_2[4] = *(undefined4 *)(param_1 + 0x1c0);
  param_2[5] = *(undefined4 *)(param_1 + 0x1c4);
  param_2[6] = *(undefined4 *)(param_1 + 0x1c8);
  param_2[7] = *(undefined4 *)(param_1 + 0x1cc);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x1d0);
  param_2[0xd] = *(undefined4 *)(param_1 + 0x1d4);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x1d8);
  param_2[0xf] = *(undefined4 *)(param_1 + 0x1dc);
  param_2[0x10] = *(undefined4 *)(param_1 + 0x1e8);
  param_2[0x12] = *(undefined4 *)(param_1 + 0x94);
  fVar1 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1c0);
  fVar3 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1c4);
  fVar2 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1c8);
  param_2[0x11] = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  return;
}

// 00DA89E0  Camera::StateBattleFixed::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateBattleFixed::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8A10  Camera::StatePerpetrator::vf04  size=31  [class]
undefined4 * __thiscall Camera::StatePerpetrator::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8A40  Camera::StateGallery::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateGallery::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8A60  Camera::StateNode::StateNode  size=28  [class]
void __fastcall Camera::StateNode::StateNode(undefined4 *param_1)

{
  *param_1 = StateDiveKill::vftable;
  FUN_00e29e30();
  *param_1 = vftable;
  return;
}

// 00DA8A80  Camera::StateDiveKill::vf04  size=48  [class]
undefined4 * __thiscall Camera::StateDiveKill::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00e29e30();
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8AC0  Camera::StateSlashingTarget::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateSlashingTarget::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DA8AE0  FUN_00da8ae0  size=22  [callgraph]
undefined4 __fastcall FUN_00da8ae0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 100) + 0x20))();
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0xffffffff;
}

// 00DA8B50  FUN_00da8b50  size=599  [callgraph]
void __fastcall FUN_00da8b50(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_64;
  float afStack_60 [4];
  undefined1 auStack_50 [76];
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 != 0) goto LAB_00da8b89;
  }
  iVar3 = FUN_00a81330();
LAB_00da8b89:
  if (iVar3 != 0) {
    afStack_60[0] = 0.0;
    afStack_60[1] = 0.0;
    afStack_60[2] = -3.0;
    uVar4 = FUN_00a7c8d0();
    FUN_00ddc1d0(auStack_50,uVar4,5);
    D3DXVec3TransformNormal(afStack_60,afStack_60,auStack_50);
    puVar5 = (undefined4 *)FUN_00a7c8b0();
    *(undefined4 *)(param_1 + 0x460) = *puVar5;
    pfVar1 = (float *)(param_1 + 0x460);
    *(undefined4 *)(param_1 + 0x464) = puVar5[1];
    *(undefined4 *)(param_1 + 0x468) = puVar5[2];
    *(undefined4 *)(param_1 + 0x46c) = puVar5[3];
    *(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x464) + 1.4;
    *pfVar1 = *pfVar1 + unaff_ESI;
    *(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x464) + unaff_EBX;
    *(float *)(param_1 + 0x468) = *(float *)(param_1 + 0x468) + fStack_64;
    *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + afStack_60[0];
    puVar5 = (undefined4 *)FUN_00a7c8b0();
    *(undefined4 *)(param_1 + 0x4b0) = *puVar5;
    *(undefined4 *)(param_1 + 0x4b4) = puVar5[1];
    *(undefined4 *)(param_1 + 0x4b8) = puVar5[2];
    *(undefined4 *)(param_1 + 0x4bc) = puVar5[3];
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + 1.4;
    *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4b0) + unaff_ESI;
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + unaff_EBX;
    *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fStack_64;
    *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4bc) + afStack_60[0];
    puVar5 = (undefined4 *)FUN_00a7c8b0();
    *(undefined4 *)(param_1 + 0x470) = *puVar5;
    *(undefined4 *)(param_1 + 0x474) = puVar5[1];
    *(undefined4 *)(param_1 + 0x478) = puVar5[2];
    *(undefined4 *)(param_1 + 0x47c) = puVar5[3];
    *(float *)(param_1 + 0x474) = *(float *)(param_1 + 0x474) + 1.4;
    puVar5 = (undefined4 *)FUN_00a7c8b0();
    *(undefined4 *)(param_1 + 0x4c0) = *puVar5;
    *(undefined4 *)(param_1 + 0x4c4) = puVar5[1];
    *(undefined4 *)(param_1 + 0x4c8) = puVar5[2];
    *(undefined4 *)(param_1 + 0x4cc) = puVar5[3];
    *(float *)(param_1 + 0x4c4) = *(float *)(param_1 + 0x4c4) + 1.4;
    iVar3 = FUN_00a7c8d0();
    *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x380) = 0;
    FUN_00da01f0(pfVar1);
    *pfVar1 = *(float *)(param_1 + 0x4b0);
    *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x4b4);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x4b8);
    *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x4bc);
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x4c0);
    *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x4c4);
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x4cc);
  }
  return;
}

// 00DA8DD0  FUN_00da8dd0  size=102  [callgraph]
void __fastcall FUN_00da8dd0(int param_1)

{
  *(float *)(param_1 + 0x7a0) = *(float *)(PTR_DAT_018bc3a8 + 8) * 0.017453292;
  *(undefined4 *)(param_1 + 0x7a4) = 0x43340000;
  *(float *)(param_1 + 0x7b0) = *(float *)(PTR_DAT_018bc3a8 + 4) * 0.017453292;
  *(undefined4 *)(param_1 + 0x7b4) = 0xc3340000;
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x770) = 0x40200000;
  *(undefined4 *)(param_1 + 0x780) = 0;
  *(undefined4 *)(param_1 + 0x784) = 0;
  return;
}

// 00DA8E40  FUN_00da8e40  size=94  [callgraph]
undefined4 * FUN_00da8e40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00da8e6e;
  }
  iVar2 = FUN_00a81330();
LAB_00da8e6e:
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c800();
  }
  *param_1 = *(undefined4 *)(iVar2 + 0x40);
  param_1[1] = *(undefined4 *)(iVar2 + 0x44);
  param_1[2] = *(undefined4 *)(iVar2 + 0x48);
  param_1[3] = *(undefined4 *)(iVar2 + 0x4c);
  return param_1;
}

// 00DA8EA0  FUN_00da8ea0  size=529  [callgraph]
void __fastcall FUN_00da8ea0(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_50 [76];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00da8ed1:
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00da8eeb;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00da8ed1;
  }
  iVar6 = FUN_00a7c8a0();
LAB_00da8eeb:
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x780) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0x3dfa35dd;
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar6 + 0x94);
  }
  *(undefined4 *)(param_1 + 0x364) = uVar2;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
  if (iVar6 == 0) {
    uStack_a0 = 0;
    puVar7 = &uStack_a0;
    uStack_9c = 0;
    uStack_98 = 0;
  }
  else {
    puVar7 = (undefined4 *)FUN_00da8e40(&uStack_a0);
  }
  fVar3 = (float)puVar7[1];
  uVar2 = puVar7[2];
  fVar4 = (float)puVar7[3];
  pfVar1 = (float *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4c0) = *puVar7;
  *(float *)(param_1 + 0x4c4) = fVar3 + 1.4;
  *(undefined4 *)(param_1 + 0x4c8) = uVar2;
  *(float *)(param_1 + 0x4cc) = fVar4 + fStack_a4;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(float *)(param_1 + 0x4ec) = fStack_a4;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  thunk_FUN_00ddc1d0(auStack_50,(undefined4 *)(param_1 + 0x360),5);
  D3DXMatrixMultiply(auStack_90,auStack_50,param_1 + 0x390);
  D3DXVec3TransformNormal(pfVar1,&stack0xffffff44,&uStack_9c);
  *pfVar1 = fStack_78 + *pfVar1;
  *(float *)(param_1 + 0x4b4) = fStack_74 + *(float *)(param_1 + 0x4b4);
  *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fStack_70;
  *pfVar1 = *(float *)(param_1 + 0x4c0) + *pfVar1;
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + *(float *)(param_1 + 0x4b4);
  *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + *(float *)(param_1 + 0x4bc);
  FUN_00da01f0(pfVar1);
  FUN_00da01f0(pfVar1);
  return;
}

// 00DA90C0  FUN_00da90c0  size=246  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00da90c0(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)1;
  if (0.0 < *(float *)(param_1 + 0x4a4)) {
    fVar3 = (float10)fpatan((float10)3.0,(float10)*(float *)(param_1 + 0x4a4));
  }
  fVar3 = fVar3 * (float10)param_2;
  if (*(int *)(param_1 + 0x6f0) == 0) {
    fVar1 = (float10)0.06981317;
  }
  else {
    fVar1 = (float10)0.13962634;
  }
  fVar1 = (float10)_DAT_01be942c * fVar1;
  fVar2 = -fVar1;
  if ((fVar2 <= fVar3) && (fVar2 = fVar3, fVar1 < fVar3)) {
    fVar2 = fVar1;
  }
  fVar3 = (float10)FUN_00dde210(*(undefined4 *)(param_1 + 0x790),(float)fVar2,
                                (float)((float10)_DAT_01be942c *
                                       (float10)*(float *)(param_1 + 0x6e0)),0x3d567750);
  *(float *)(param_1 + 0x790) = (float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)*(float *)(param_1 + 0x360)));
  *(float *)(param_1 + 0x360) = (float)fVar3;
  if (fVar3 < (float10)*(float *)(param_1 + 0x7b0)) {
    *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x7b0);
  }
  if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x360)) {
    *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x7a0);
  }
  return;
}

// 00DA91C0  FUN_00da91c0  size=42  [callgraph]
void __thiscall FUN_00da91c0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x710);
  param_2[1] = *(undefined4 *)(param_1 + 0x714);
  param_2[2] = *(undefined4 *)(param_1 + 0x718);
  param_2[3] = *(undefined4 *)(param_1 + 0x71c);
  return;
}

// 00DA9230  FUN_00da9230  size=35  [callgraph]
void __thiscall FUN_00da9230(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8cc) = param_2;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  return;
}

// 00DA9260  FUN_00da9260  size=276  [callgraph]
undefined4 __fastcall FUN_00da9260(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x8d0) != 0) {
    if (*(float *)(param_1 + 0x8dc) <= 0.0) {
      if (0.0 < *(float *)(param_1 + 0x8dc)) goto LAB_00da92b9;
      if (*(int *)(param_1 + 0x8e0) == 0) goto LAB_00da9318;
      if (*(int *)(param_1 + 0x8cc) == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x8d0) = 0;
    }
    else {
      fVar3 = (float10)FUN_00e049b0();
      *(float *)(param_1 + 0x8dc) = (float)((float10)*(float *)(param_1 + 0x8dc) - fVar3);
      if (*(int *)(param_1 + 0x8cc) == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x8d0) = 0;
    }
    *(undefined4 *)(param_1 + 0x8dc) = 0;
    *(undefined4 *)(param_1 + 0x8e0) = 0;
  }
LAB_00da92b9:
  if (*(int *)(param_1 + 0x8cc) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00da92fb:
    if ((*(int *)(param_1 + 0x378) != 0) && (0.0 < *(float *)(*(int *)(param_1 + 0x378) + 0x341c)))
    {
      return 1;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00da92fb;
  }
  *(undefined4 *)(param_1 + 0x8cc) = 0;
LAB_00da9318:
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  return 0;
}

// 00DA9380  FUN_00da9380  size=110  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00da9380(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x780) == 0.0) {
    if (*(int *)(param_1 + 0x6f0) == 0) {
      fVar1 = 4.0;
    }
    else {
      fVar1 = 8.0;
    }
    fVar2 = _DAT_01be942c * fVar1 * 0.017453292;
    fVar1 = -fVar2;
    if ((fVar1 <= param_2) && (fVar1 = param_2, fVar2 < param_2)) {
      *(float *)(param_1 + 0x788) = fVar2;
      return;
    }
  }
  *(float *)(param_1 + 0x788) = fVar1;
  return;
}

// 00DA93F0  FUN_00da93f0  size=110  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00da93f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 0x784) == 0.0) {
    if (*(int *)(param_1 + 0x6f0) == 0) {
      fVar1 = 4.0;
    }
    else {
      fVar1 = 8.0;
    }
    fVar2 = _DAT_01be942c * fVar1 * 0.017453292;
    fVar1 = -fVar2;
    if ((fVar1 <= param_2) && (fVar1 = param_2, fVar2 < param_2)) {
      *(float *)(param_1 + 0x78c) = fVar2;
      return;
    }
  }
  *(float *)(param_1 + 0x78c) = fVar1;
  return;
}

// 00DA9480  FUN_00da9480  size=51  [callgraph]
void __thiscall FUN_00da9480(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x880) = param_2;
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  FUN_00da8900();
  return;
}

// 00DA94C0  FUN_00da94c0  size=333  [callgraph]
void __fastcall FUN_00da94c0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x940);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x944);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x948);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x94c);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x930);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x934);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x938);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x93c);
  fVar1 = *(float *)(param_1 + 0x1e0);
  uVar2 = *(undefined4 *)(param_1 + 0x1e8);
  uVar3 = *(undefined4 *)(param_1 + 0x1ec);
  fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x1e4) + 3.1415927);
  fVar7 = (float10)FUN_00ddba30(fVar1 * -1.0);
  fVar6 = (float10)FUN_00ddba30((float)fVar6);
  *(float *)(param_1 + 0x360) = (float)fVar7;
  *(float *)(param_1 + 0x364) = (float)fVar6;
  *(undefined4 *)(param_1 + 0x368) = uVar2;
  *(undefined4 *)(param_1 + 0x36c) = uVar3;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = uVar3;
  fVar1 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4b0);
  fVar5 = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b4);
  fVar4 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4b8);
  *(float *)(param_1 + 0x4f4) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar1 * fVar1);
  return;
}

// 00DA9610  FUN_00da9610  size=19  [callgraph]
void __fastcall FUN_00da9610(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6e4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
  }
  return;
}

// 00DA9630  FUN_00da9630  size=34  [callgraph]
int __thiscall FUN_00da9630(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6e8);
  puVar1 = (uint *)(iVar2 + 0x274 + param_2 * 0x40);
  *puVar1 = *puVar1 | param_3;
  return iVar2 + 0x270 + param_2 * 0x40;
}

// 00DA9660  FUN_00da9660  size=250  [callgraph]
void __thiscall FUN_00da9660(int param_1,int param_2,float *param_3,float param_4)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  
  if (0.0 < param_4) {
    fVar3 = *param_3 - *(float *)(param_1 + 0x460);
    fVar4 = param_3[1] - *(float *)(param_1 + 0x464);
    fVar5 = param_3[2] - *(float *)(param_1 + 0x468);
    FUN_00da0690(&local_20,0x3f800000);
    fVar6 = (float10)FUN_00ddbb50((local_20 * fVar3 + local_1c * fVar4 + local_18 * fVar5) /
                                  (SQRT(local_18 * local_18 +
                                        local_20 * local_20 + local_1c * local_1c) *
                                  SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5)));
    if ((float10)param_4 < ABS(fVar6)) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x6e8);
  puVar1 = (uint *)(iVar2 + 0x270 + param_2 * 0x40);
  *puVar1 = *puVar1 | 1;
  iVar2 = iVar2 + 0x270 + param_2 * 0x40;
  *(float *)(iVar2 + 0x10) = *param_3;
  *(float *)(iVar2 + 0x14) = param_3[1];
  *(float *)(iVar2 + 0x18) = param_3[2];
  *(float *)(iVar2 + 0x1c) = param_3[3];
  return;
}

// 00DA9760  FUN_00da9760  size=42  [callgraph]
int __thiscall FUN_00da9760(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6e8);
  param_2 = param_2 * 0x40;
  puVar1 = (uint *)(iVar2 + 0x270 + param_2);
  *puVar1 = *puVar1 | 2;
  *(undefined4 *)(iVar2 + 0x298 + param_2) = param_3;
  return iVar2 + 0x270 + param_2;
}

// 00DA9790  FUN_00da9790  size=42  [callgraph]
int __thiscall FUN_00da9790(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6e8);
  param_2 = param_2 * 0x40;
  puVar1 = (uint *)(iVar2 + 0x270 + param_2);
  *puVar1 = *puVar1 | 4;
  *(undefined4 *)(iVar2 + 0x2a0 + param_2) = param_3;
  return iVar2 + 0x270 + param_2;
}

// 00DA97C0  FUN_00da97c0  size=30  [callgraph]
bool __fastcall FUN_00da97c0(int param_1)

{
  if (*(int *)(param_1 + 0x6e8) != 0) {
    return *(int *)(*(int *)(param_1 + 0x6e8) + 0x340) == 0;
  }
  return true;
}

// 00DA97E0  FUN_00da97e0  size=30  [callgraph]
bool __fastcall FUN_00da97e0(int param_1)

{
  if (*(int *)(param_1 + 0x6e8) != 0) {
    return *(int *)(*(int *)(param_1 + 0x6e8) + 0x344) == 0;
  }
  return true;
}

// 00DA9820  FUN_00da9820  size=243  [callgraph]
float * __thiscall FUN_00da9820(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  local_60 = param_1[0xc];
  local_5c = param_1[0xd];
  local_58 = param_1[0xe];
  local_54 = param_1[0xf];
  fVar1 = (float10)param_1[4] - (float10)*param_1;
  fVar2 = (float10)param_1[6] - (float10)param_1[2];
  fVar3 = (float10)fpatan((float10)param_1[5] - (float10)param_1[1],
                          SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  local_70 = (float)fVar3;
  fVar1 = (float10)fpatan(-fVar1,-fVar2);
  local_6c = (float)fVar1;
  D3DXMatrixRotationY();
  puVar4 = auStack_68;
  D3DXVec3TransformNormal(puVar4,puVar4,&local_58);
  fVar6 = -(float)-fVar1;
  D3DXMatrixRotationX(auStack_64);
  D3DXVec3TransformNormal(auStack_7c,auStack_7c,&local_6c);
  fVar5 = -(float)local_50;
  *param_2 = fVar6;
  fVar1 = (float10)FUN_00ddba30((float)puVar4 + 3.1415927);
  param_2[1] = (float)fVar1;
  fVar1 = (float10)fpatan((float10)fVar5,(float10)fVar6);
  param_2[2] = (float)fVar1;
  return param_2;
}

// 00DA9920  FUN_00da9920  size=245  [callgraph]
float * __thiscall FUN_00da9920(float *param_1,float *param_2,undefined4 *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_60 = *param_3;
  local_5c = param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  fVar1 = (float10)param_1[4] - (float10)*param_1;
  fVar2 = (float10)param_1[6] - (float10)param_1[2];
  fVar3 = (float10)fpatan((float10)param_1[5] - (float10)param_1[1],
                          SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  local_70 = (float)fVar3;
  fVar1 = (float10)fpatan(-fVar1,-fVar2);
  local_6c = (float)fVar1;
  D3DXMatrixRotationY();
  puVar4 = auStack_68;
  D3DXVec3TransformNormal(puVar4,puVar4,&local_58);
  fVar6 = -(float)-fVar1;
  D3DXMatrixRotationX(auStack_64);
  D3DXVec3TransformNormal(auStack_7c,auStack_7c,&local_6c);
  fVar5 = -(float)local_50;
  *param_2 = fVar6;
  fVar1 = (float10)FUN_00ddba30((float)puVar4 + 3.1415927);
  param_2[1] = (float)fVar1;
  fVar1 = (float10)fpatan((float10)fVar5,(float10)fVar6);
  param_2[2] = (float)fVar1;
  return param_2;
}

// 00DA9A40  FUN_00da9a40  size=5217  [callgraph]
void __fastcall FUN_00da9a40(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float unaff_EDI;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 **ppuStack_2f8;
  float *pfStack_2f4;
  float *pfStack_2f0;
  undefined1 *puStack_2ec;
  float **ppfStack_2e8;
  undefined1 *puStack_2e4;
  undefined1 *puStack_2e0;
  float fStack_2dc;
  float *pfStack_2d8;
  undefined4 *puStack_2d4;
  undefined4 *puStack_2d0;
  int iStack_2cc;
  float *pfStack_2c8;
  float *pfStack_2c4;
  float *pfStack_2c0;
  undefined1 *puStack_2bc;
  undefined1 *puStack_2b8;
  float *pfStack_2b4;
  float *pfStack_2b0;
  float *pfStack_2ac;
  float *pfStack_2a8;
  float *pfStack_2a4;
  float *pfStack_2a0;
  float *pfStack_29c;
  float *pfStack_298;
  float *pfStack_294;
  undefined1 auStack_280 [8];
  float local_278;
  float local_274;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int iStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float local_244;
  float fStack_240;
  float *pfStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined4 uStack_228;
  float *local_224;
  undefined4 uStack_220;
  float afStack_21c [5];
  int iStack_208;
  float fStack_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined4 uStack_1f4;
  float local_1f0 [20];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  int iStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float afStack_13c [2];
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [8];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [28];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a0;
  float fStack_98;
  undefined1 auStack_7c [120];
  
  pfStack_294 = (float *)0xda9a5c;
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    return;
  }
  pfStack_294 = (float *)0xda9a6b;
  local_244 = (float)FUN_00a7c8a0();
  if (local_244 == 0.0) {
    return;
  }
  pfStack_294 = (float *)0xda9a82;
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    return;
  }
  pfVar5 = (float *)(param_1 + 0x720);
  pfVar6 = local_1f0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfStack_294 = (float *)0xda9aa8;
  iVar4 = FUN_00a81330();
  iVar7 = 0;
  if (iVar4 != 0) {
    pfStack_294 = (float *)0xda9ab5;
    iVar7 = FUN_00a7c8a0();
  }
  local_190 = *(float *)((int)local_244 + 0x40);
  local_224 = (float *)((int)local_244 + 0x40);
  pfStack_294 = (float *)&DAT_016c3080;
  local_14c = *(float *)((int)local_244 + 0x44);
  pfStack_298 = (float *)0x1e;
  local_188 = *(float *)((int)local_244 + 0x48);
  pfStack_2a0 = &local_160;
  pfStack_2b0 = &local_f0;
  local_184 = *(float *)((int)local_244 + 0x4c);
  pfStack_29c = &local_190;
  pfStack_2a4 = (float *)0x0;
  pfStack_2a8 = (float *)0x0;
  pfStack_2ac = (float *)0x0;
  local_15c = local_14c + 1.5;
  local_18c = local_14c - 2.5;
  pfStack_2b4 = (float *)0xda9b8a;
  local_160 = local_190;
  local_158 = local_188;
  local_154 = local_184;
  local_150 = local_190;
  local_148 = local_188;
  local_144 = local_184;
  local_f0 = local_190;
  local_ec = local_14c;
  local_e8 = local_188;
  local_e4 = local_184;
  RayCastSingleHitWork::RayCastSingleHitWork_4();
  pfStack_294 = (float *)&DAT_016c3080;
  local_18c = local_18c - 20.0;
  pfStack_298 = (float *)0x1e;
  pfStack_29c = &local_190;
  pfStack_2a0 = &local_160;
  pfStack_2a4 = (float *)0x0;
  pfStack_2a8 = (float *)0x0;
  pfStack_2ac = (float *)0x0;
  pfStack_2b0 = &local_150;
  pfStack_2b4 = (float *)0xda9bcd;
  RayCastSingleHitWork::RayCastSingleHitWork_4();
  local_274 = 0.0;
  if (iVar7 != 0) {
    local_200 = 0.0;
    pfStack_294 = (float *)(iVar7 + 0x10);
    local_1fc = 0.0;
    pfStack_298 = &local_200;
    local_1f8 = 10.0;
    pfStack_29c = &local_270;
    pfStack_2a0 = (float *)0xda9c0c;
    D3DXVec3TransformNormal();
    local_270 = local_270 + *(float *)(iVar7 + 0x40);
    fStack_26c = *(float *)(iVar7 + 0x44) + fStack_26c;
    fStack_268 = *(float *)(iVar7 + 0x48) + fStack_268;
  }
  local_278 = 0.0;
  pfStack_294 = (float *)0xda9c42;
  iVar4 = FUN_00b7b180();
  iStack_208 = 0;
  iStack_164 = iVar4;
  if ((iVar4 != 0) && (*(int *)((int)local_244 + 0x266c) != 0)) {
    pfStack_294 = &local_270;
    local_274 = 1.4013e-45;
    pfStack_298 = (float *)0xda9c7b;
    FUN_00c15010();
    if ((*(short *)(iVar4 + 4) == 0x114) || (*(short *)(iVar4 + 4) == 10)) {
      iStack_208 = 1;
    }
  }
  if ((iVar7 != 0) && (*(int *)((int)local_244 + 0x266c) == 0)) {
    pfStack_294 = (float *)0xda9cb6;
    iVar4 = FUN_00da0b10();
    if (iVar4 == 0) {
      pfStack_294 = (float *)0x20;
      pfStack_298 = (float *)0xda9cc7;
      iVar4 = FUN_00a12210();
      pfVar5 = local_224;
      if ((iVar4 != 0) &&
         (fVar9 = *(float *)(iVar4 + 0x40) - *local_224,
         fVar10 = *(float *)(iVar4 + 0x48) - local_224[2],
         SQRT(fVar10 * fVar10 + fVar9 * fVar9) < 10.0)) {
        local_270 = *(float *)(iVar4 + 0x40);
        local_274 = 1.4013e-45;
        local_278 = 4.48416e-44;
        fStack_26c = *(float *)(iVar4 + 0x44);
        fStack_268 = *(float *)(iVar4 + 0x48);
        fStack_264 = *(float *)(iVar4 + 0x4c);
      }
      pfStack_294 = (float *)0x2b;
      pfStack_298 = (float *)0xda9d28;
      iVar4 = FUN_00a12210();
      if ((iVar4 != 0) &&
         (fVar9 = *(float *)(iVar4 + 0x40) - *pfVar5, fVar10 = *(float *)(iVar4 + 0x48) - pfVar5[2],
         SQRT(fVar10 * fVar10 + fVar9 * fVar9) < 10.0)) {
        local_270 = *(float *)(iVar4 + 0x40);
        local_274 = 1.4013e-45;
        local_278 = 6.02558e-44;
        fStack_26c = *(float *)(iVar4 + 0x44);
        fStack_268 = *(float *)(iVar4 + 0x48);
        fStack_264 = *(float *)(iVar4 + 0x4c);
      }
      pfStack_294 = (float *)0x6;
      pfStack_298 = (float *)0xda9d85;
      iVar4 = FUN_00a12210();
      if (iVar4 != 0) {
        pfStack_294 = (float *)(iVar4 + 0x10);
        fStack_260 = 0.0;
        pfStack_29c = &fStack_260;
        iStack_25c = 0;
        fStack_258 = 1.0;
        pfStack_2a0 = (float *)0xda9db0;
        pfStack_298 = pfStack_29c;
        D3DXVec3TransformNormal();
        fVar8 = (float10)fpatan((float10)fStack_26c,(float10)fStack_264);
        pfStack_2a4 = (float *)auStack_dc;
        pfStack_2a0 = (float *)(float)fVar8;
        pfStack_2a8 = (float *)0xda9dcb;
        D3DXMatrixRotationY();
        uStack_b4 = *(undefined4 *)(iVar4 + 0x40);
        pfStack_2b0 = &local_e4;
        uStack_b0 = *(undefined4 *)(iVar4 + 0x44);
        pfStack_2ac = (float *)0x0;
        uStack_ac = *(undefined4 *)(iVar4 + 0x48);
        pfStack_2b4 = (float *)0xda9dfb;
        pfStack_2a8 = pfStack_2b0;
        D3DXMatrixInverse();
        pfStack_2b4 = &local_f0;
        puStack_2b8 = (undefined1 *)local_244;
        puStack_2bc = auStack_280;
        pfStack_2c0 = (float *)0xda9e12;
        D3DXVec3TransformNormal();
        fStack_98 = fStack_98 + fStack_258;
        if ((((!NAN(fStack_98) && 1.0 < fStack_98 != (fStack_98 == 1.0)) &&
             (fStack_98 < 10.0 != (fStack_98 == 10.0))) && (fStack_a0 + fStack_260 < 5.0)) &&
           (-5.0 < fStack_a0 + fStack_260)) {
          local_270 = *(float *)(iVar4 + 0x40);
          local_274 = 1.4013e-45;
          iStack_208 = 1;
          local_278 = 8.40779e-45;
          fStack_268 = *(float *)(iVar4 + 0x48);
          fStack_264 = *(float *)(iVar4 + 0x4c);
          fStack_26c = *(float *)(iVar4 + 0x44) - 2.0;
        }
      }
      pfStack_294 = (float *)0xda9ea7;
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x12) {
        pfStack_294 = (float *)0x2b;
        pfStack_298 = (float *)0xda9eb5;
        iVar4 = FUN_00a12210();
        if (iVar4 != 0) {
          local_270 = *(float *)(iVar4 + 0x40);
          local_274 = 1.4013e-45;
          local_278 = 6.02558e-44;
          fStack_26c = *(float *)(iVar4 + 0x44);
          fStack_268 = *(float *)(iVar4 + 0x48);
          fStack_264 = *(float *)(iVar4 + 0x4c);
        }
      }
      pfStack_294 = (float *)0xda9eec;
      iVar4 = FUN_00a8cab0();
      if (iVar4 == 0x13) {
        pfStack_294 = (float *)0x20;
        pfStack_298 = (float *)0xda9efa;
        iVar4 = FUN_00a12210();
        if (iVar4 != 0) {
          local_270 = *(float *)(iVar4 + 0x40);
          local_274 = 1.4013e-45;
          local_278 = 4.48416e-44;
          fStack_26c = *(float *)(iVar4 + 0x44);
          fStack_268 = *(float *)(iVar4 + 0x48);
          fStack_264 = *(float *)(iVar4 + 0x4c);
        }
      }
    }
  }
  if ((local_278 != *(float *)(param_1 + 0x810)) &&
     (fVar9 = *(float *)(param_1 + 0x80c), !NAN(fVar9) && 0.15 < fVar9 != (fVar9 == 0.15))) {
    *(float *)(param_1 + 0x810) = local_278;
    *(undefined4 *)(param_1 + 0x80c) = 0x3a83126f;
  }
  if (((iVar7 != 0) && (*(int *)((int)local_244 + 0x266c) == 0)) &&
     (pfStack_294 = *(float **)(param_1 + 0x810), pfStack_294 != (float *)0x0)) {
    pfStack_298 = (float *)0xda9f7e;
    iVar4 = FUN_00a12210();
    local_270 = *(float *)(iVar4 + 0x40);
    fStack_26c = *(float *)(iVar4 + 0x44);
    fStack_268 = *(float *)(iVar4 + 0x48);
    fStack_264 = *(float *)(iVar4 + 0x4c);
  }
  if (local_274 == 0.0) {
    if (iVar7 != 0) {
      local_278 = *(float *)(param_1 + 0x360);
      local_274 = *(float *)(param_1 + 0x364);
      pfStack_298 = &local_270;
      pfStack_29c = &local_274;
      pfStack_2a0 = &local_278;
      pfStack_2a4 = (float *)0xdaa18e;
      pfStack_294 = (float *)(param_1 + 0x460);
      thunk_FUN_00dde510();
      local_278 = local_278 * -1.0;
      pfStack_294 = (float *)(local_274 - *(float *)(param_1 + 0x794));
      pfStack_298 = (float *)0xdaa1b1;
      fVar8 = (float10)FUN_00ddba30();
      if (ABS(fVar8) <= (float10)1e-05) {
        fVar8 = (float10)0;
      }
      else {
        fVar8 = fVar8 * (float10)0.06;
      }
      pfStack_294 = (float *)auStack_e0;
      *(float *)(param_1 + 0x78c) = (float)fVar8;
      pfStack_298 = (float *)0xdaa1e6;
      iVar4 = FUN_00aed1d0();
      fStack_26c = *(float *)(iVar4 + 4);
      if (iStack_164 != 0) {
        pfStack_294 = &local_200;
        pfStack_298 = (float *)0xdaa205;
        FUN_00c15010();
        if (SQRT((local_1f8 - local_224[2]) * (local_1f8 - local_224[2]) +
                 (local_200 - *local_224) * (local_200 - *local_224)) < 6.0) {
          fStack_26c = local_1fc;
        }
      }
      fVar9 = *(float *)(iVar7 + 0x40) - *local_224;
      fVar11 = *(float *)(iVar7 + 0x44) - local_224[1];
      fVar10 = *(float *)(iVar7 + 0x48) - local_224[2];
      fVar9 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
      if (50.0 < fVar9) {
        fStack_26c = fStack_26c - (fVar9 - 50.0);
        fVar9 = *(float *)(iVar7 + 0x44) + 1.0;
        if (fStack_26c < fVar9) {
          fStack_26c = fVar9;
        }
      }
      local_278 = *(float *)(param_1 + 0x360);
      pfStack_298 = &local_270;
      fStack_204 = *(float *)(param_1 + 0x364);
      pfStack_29c = &fStack_204;
      pfStack_2a0 = &local_278;
      pfStack_2a4 = (float *)0xdaa2cf;
      pfStack_294 = (float *)(param_1 + 0x460);
      thunk_FUN_00dde510();
      local_278 = local_278 * -1.0;
      pfStack_294 = (float *)(local_278 - *(float *)(param_1 + 0x790));
      pfStack_298 = (float *)0xdaa2ee;
      fVar8 = (float10)FUN_00ddba30();
      local_274 = (float)fVar8;
      if (*(int *)((int)local_244 + 0x2664) != 0) {
        local_274 = 0.0;
      }
      pfStack_294 = (float *)0xdaa30d;
      iVar4 = FUN_00a8d9d0();
      fVar9 = local_274;
      if (iVar4 != 0) {
        fVar9 = 0.0;
      }
      if (100.0 <= local_1f0[7] * local_1f0[7]) {
        fVar9 = 0.0;
      }
      *(float *)(param_1 + 0x790) = fVar9 * 0.05 + *(float *)(param_1 + 0x790);
    }
  }
  else if (iVar7 != 0) {
    local_278 = *(float *)(param_1 + 0x360);
    pfStack_294 = (float *)(param_1 + 0x460);
    local_274 = *(float *)(param_1 + 0x364);
    pfStack_298 = &local_270;
    pfStack_29c = &local_274;
    pfStack_2a0 = &local_278;
    pfStack_2a4 = (float *)0xda9fdc;
    thunk_FUN_00dde510();
    local_278 = local_278 * -1.0;
    pfStack_294 = (float *)(local_278 - *(float *)(param_1 + 0x790));
    pfStack_298 = (float *)0xda9ffb;
    fVar8 = (float10)FUN_00ddba30();
    if (ABS(fVar8) <= (float10)1e-05) {
      fVar8 = (float10)0;
    }
    else {
      fVar8 = fVar8 * (float10)0.1;
    }
    *(float *)(param_1 + 0x788) = (float)fVar8;
    pfStack_294 = (float *)(local_274 - *(float *)(param_1 + 0x794));
    pfStack_298 = (float *)0xdaa034;
    fVar8 = (float10)FUN_00ddba30();
    pfVar5 = local_224;
    if (ABS(fVar8) <= (float10)1e-05) {
      fVar8 = (float10)0;
    }
    else {
      fVar8 = fVar8 * (float10)0.1;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar8;
    pfStack_294 = local_224;
    pfStack_298 = &local_270;
    pfStack_29c = &local_274;
    pfStack_2a0 = &local_278;
    pfStack_2a4 = (float *)0xdaa073;
    thunk_FUN_00dde510();
    local_278 = local_278 * -1.0;
    if (*(int *)(param_1 + 0x804) == 0) {
      pfStack_294 = (float *)(local_274 - 0.17453292);
      pfStack_298 = (float *)0xdaa0c7;
      fVar8 = (float10)FUN_00ddba30();
      local_274 = (float)fVar8;
      if (iStack_208 != 0) {
        fVar8 = fVar8 - (float10)0.6981317;
        goto LAB_00daa0de;
      }
    }
    else {
      pfStack_294 = (float *)(local_274 + 0.17453292);
      pfStack_298 = (float *)0xdaa0a0;
      fVar8 = (float10)FUN_00ddba30();
      local_274 = (float)fVar8;
      if (iStack_208 != 0) {
        fVar8 = fVar8 + (float10)0.6981317;
LAB_00daa0de:
        pfStack_294 = (float *)(float)fVar8;
        pfStack_298 = (float *)0xdaa0e7;
        fVar8 = (float10)FUN_00ddba30();
        local_274 = (float)fVar8;
      }
    }
    fVar9 = local_270 - *pfVar5;
    fVar10 = fStack_268 - pfVar5[2];
    if (fVar10 * fVar10 + fVar9 * fVar9 < 225.0) {
      pfStack_294 = (float *)(float)(fVar8 - (float10)*(float *)(param_1 + 0x794));
      pfStack_298 = (float *)0xdaa123;
      fVar8 = (float10)FUN_00ddba30();
      if (ABS(fVar8) <= (float10)1e-05) {
        *(undefined4 *)(param_1 + 0x78c) = 0;
      }
      else {
        *(float *)(param_1 + 0x78c) = (float)(fVar8 * (float10)0.05);
      }
    }
  }
  fVar9 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788) +
          *(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = fVar9;
  if (fVar9 < *(float *)(param_1 + 0x7b0)) {
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
  }
  fStack_204 = *(float *)(param_1 + 0x790);
  local_278 = -0.61086524;
  pfStack_294 = (float *)0xdaa39e;
  iVar4 = FUN_00a8cab0();
  if (iVar4 == 0x12) {
    local_278 = -0.87266463;
  }
  pfStack_294 = (float *)0xdaa3b4;
  iVar4 = FUN_00a8cab0();
  fVar9 = local_278;
  if (iVar4 == 0x13) {
    fVar9 = -0.87266463;
  }
  if (fVar9 <= *(float *)(param_1 + 0x790)) {
    fVar9 = fStack_204;
  }
  pfStack_294 = (float *)(fVar9 + *(float *)(param_1 + 0x7e0));
  pfVar5 = (float *)(param_1 + 0x360);
  pfStack_298 = (float *)0xdaa3f0;
  fVar8 = (float10)FUN_00ddba30();
  *pfVar5 = (float)fVar8;
  pfStack_294 = (float *)(*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                          *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
  *(float **)(param_1 + 0x794) = pfStack_294;
  pfStack_298 = (float *)0xdaa418;
  fVar8 = (float10)FUN_00ddba30();
  *(float *)(param_1 + 0x364) = (float)fVar8;
  fVar9 = (*pfVar5 - -0.34906584) * -3.8197186;
  local_278 = 1.0 - fVar9;
  if (local_278 <= 1.0) {
    if (local_278 < 0.4) {
      local_278 = 0.4;
    }
  }
  else {
    local_278 = 1.0;
  }
  local_274 = 1.0 - fVar9 * 0.5;
  if (local_274 <= 1.0) {
    if (local_274 < 0.6) {
      local_274 = 0.6;
    }
  }
  else {
    local_274 = 1.0;
  }
  pfStack_294 = *(float **)(param_1 + 0x1f0);
  uStack_1a0 = 0;
  uStack_198 = 0;
  pfStack_29c = (float *)auStack_d0;
  uStack_19c = 0x3f800000;
  pfStack_2a0 = (float *)0xdaa4cb;
  pfStack_298 = pfVar5;
  FUN_00ddc1d0();
  pfStack_294 = (float *)auStack_d0;
  pfStack_29c = (float *)&uStack_1a0;
  pfStack_2a0 = (float *)0xdaa4e6;
  pfStack_298 = pfStack_29c;
  D3DXVec3TransformNormal();
  pfStack_2a0 = *(float **)(param_1 + 0x1f0);
  local_1f0[0xd] = 0.0;
  local_1f0[0xe] = 0.0;
  pfStack_2a8 = (float *)auStack_dc;
  local_1f0[0xf] = 1.0;
  pfStack_2ac = (float *)0xdaa514;
  pfStack_2a4 = pfVar5;
  FUN_00ddc1d0();
  pfStack_2a0 = (float *)auStack_dc;
  pfStack_2a8 = local_1f0 + 0xd;
  pfStack_2ac = (float *)0xdaa52f;
  pfStack_2a4 = pfStack_2a8;
  D3DXVec3TransformNormal();
  fStack_258 = 0.0;
  fStack_254 = 0.0;
  fStack_250 = 0.0;
  local_278 = local_1f0[0xc] * local_1f0[0xf] - local_1f0[0xb] * local_1f0[0x10];
  local_274 = local_1f0[10] * local_1f0[0x10] - local_1f0[0xe] * local_1f0[0xc];
  local_270 = local_1f0[0xe] * local_1f0[0xb] - local_1f0[10] * local_1f0[0xf];
  fVar9 = local_270 * local_270 + local_278 * local_278 + local_274 * local_274;
  fStack_238 = local_278;
  fStack_234 = local_274;
  fStack_230 = local_270;
  if (fVar9 < 0.0 == (fVar9 == 0.0)) {
    pfStack_2b0 = &fStack_238;
    pfStack_2b4 = (float *)0xdaa5fd;
    pfStack_2ac = pfStack_2b0;
    FUN_00ddf460();
  }
  else {
    pfStack_2ac = (float *)&DAT_0163d0ac;
    pfStack_2b0 = (float *)0xdaa623;
    FUN_00dd5650();
    fStack_230 = 0.0;
    fStack_234 = 1.0;
    fStack_238 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  fVar9 = *(float *)(param_1 + 0x800) * -1.3 * unaff_EDI;
  fStack_254 = fStack_254 + 1.0;
  if ((iVar7 != 0) &&
     (fVar10 = *(float *)(iVar7 + 0x40) - *pfStack_23c,
     fVar11 = *(float *)(iVar7 + 0x48) - pfStack_23c[2],
     40.0 <= SQRT(fVar11 * fVar11 + fVar10 * fVar10))) {
    fStack_254 = fStack_254 + 0.6;
  }
  fStack_258 = fStack_258 + fVar9 * fStack_238;
  fStack_254 = fStack_234 * fVar9 + fStack_254;
  fStack_250 = fVar9 * fStack_230 + fStack_250;
  fStack_24c = fStack_24c + fVar9 * fStack_22c;
  fStack_238 = local_1f0[10];
  fStack_230 = local_1f0[0xc];
  fStack_22c = local_1f0[0xd];
  fStack_234 = 0.0;
  fVar9 = local_1f0[0xc] * local_1f0[0xc] + local_1f0[10] * local_1f0[10];
  if (fVar9 < 0.0 == (fVar9 == 0.0)) {
    pfStack_2b0 = &fStack_238;
    pfStack_2b4 = (float *)0xdaa73b;
    pfStack_2ac = pfStack_2b0;
    FUN_00ddf460();
  }
  else {
    pfStack_2ac = (float *)&DAT_0163d0ac;
    pfStack_2b0 = (float *)0xdaa75f;
    FUN_00dd5650();
    fStack_230 = 0.0;
    fStack_234 = 1.0;
    fStack_238 = 0.0;
  }
  fStack_238 = fStack_238 * 0.0;
  piVar1 = (int *)(param_1 + 0x808);
  fStack_234 = fStack_234 * 0.0;
  fStack_230 = fStack_230 * 0.0;
  fStack_22c = fStack_22c * 0.0;
  fStack_258 = fStack_258 + fStack_238;
  fStack_254 = fStack_234 + fStack_254;
  fStack_250 = fStack_230 + fStack_250;
  fStack_24c = fStack_22c + fStack_24c;
  local_278 = 0.0;
  local_274 = 0.0;
  local_270 = unaff_EDI * 1.5;
  pfStack_2ac = (float *)0x3e32b8c2;
  pfStack_2b0 = (float *)0x393702d3;
  pfStack_2b4 = (float *)0x3e99999a;
  puStack_2b8 = *(undefined1 **)(iStack_25c + 0x94);
  puStack_2bc = (undefined1 *)*piVar1;
  pfStack_2c4 = (float *)0xdaa821;
  pfStack_2c0 = (float *)piVar1;
  FUN_00a8db10();
  pfStack_2ac = (float *)*piVar1;
  pfStack_2b0 = &local_e8;
  pfStack_2b4 = (float *)0xdaa834;
  D3DXMatrixRotationY();
  pfStack_2b4 = &local_f0;
  puStack_2bc = auStack_280;
  pfStack_2c0 = (float *)0xdaa849;
  puStack_2b8 = puStack_2bc;
  D3DXVec3TransformNormal();
  local_1f0[3] = 0.0;
  local_1f0[2] = 0.0;
  local_1f0[1] = 0.0;
  local_1f0[0] = 0.0;
  local_1f8 = 0.0;
  local_1fc = 0.0;
  local_200 = 0.0;
  fStack_204 = 0.0;
  afStack_21c[4] = 0.0;
  afStack_21c[3] = 0.0;
  afStack_21c[2] = 0.0;
  afStack_21c[1] = 0.0;
  local_1f0[4] = 1.0;
  uStack_1f4 = 0x3f800000;
  iStack_208 = 0x3f800000;
  afStack_21c[0] = 1.0;
  fStack_22c = *pfVar5;
  uStack_228 = *(undefined4 *)(param_1 + 0x364);
  local_224 = *(float **)(param_1 + 0x368);
  uStack_220 = *(undefined4 *)(param_1 + 0x36c);
  pfStack_2c0 = (float *)0x5;
  pfStack_2c4 = &fStack_22c;
  pfStack_2c8 = (float *)auStack_7c;
  iStack_2cc = 0xdaa8fb;
  thunk_FUN_00ddc1d0();
  pfStack_2c8 = afStack_21c;
  pfStack_2c4 = (float *)auStack_7c;
  iStack_2cc = 0xdaa916;
  pfStack_2c0 = pfStack_2c8;
  D3DXMatrixMultiply();
  iVar4 = param_1 + 0x390;
  puStack_2d4 = &uStack_228;
  pfStack_2d8 = (float *)0xdaa92d;
  puStack_2d0 = puStack_2d4;
  iStack_2cc = iVar4;
  D3DXMatrixMultiply();
  pfStack_2d8 = &fStack_234;
  fStack_2dc = 0.0;
  puStack_2e0 = auStack_d4;
  puStack_2e4 = (undefined1 *)0xdaa944;
  D3DXMatrixInverse();
  puStack_2e4 = auStack_e0;
  ppfStack_2e8 = &pfStack_2b0;
  puStack_2ec = auStack_130;
  pfStack_2f0 = (float *)0xdaa95e;
  D3DXVec3TransformNormal();
  if (0.0 < afStack_13c[0]) {
    afStack_13c[0] = afStack_13c[0] + afStack_13c[0];
  }
  if (fStack_264 == 0.0) {
    if (*(int *)(param_1 + 0x804) != 0) {
      if (1.5 < afStack_13c[0]) {
        *(undefined4 *)(param_1 + 0x804) = 0;
      }
      if (*(int *)(param_1 + 0x804) != 0) goto LAB_00daa9cb;
    }
    if (afStack_13c[0] < -0.9) {
      *(undefined4 *)(param_1 + 0x804) = 1;
    }
  }
LAB_00daa9cb:
  if (*(int *)(param_1 + 0x804) == 0) {
    fVar9 = -1.0;
  }
  else {
    fVar9 = 1.0;
  }
  pfStack_2f0 = &fStack_24c;
  pfStack_2f4 = afStack_13c;
  ppuStack_2f8 = &puStack_2bc;
  *(float *)(param_1 + 0x800) =
       (fVar9 - *(float *)(param_1 + 0x800)) * 0.1 + *(float *)(param_1 + 0x800);
  D3DXVec3TransformNormal();
  pfStack_2a8 = (float *)((float)pfStack_2c8 + (float)pfStack_2a8);
  pfStack_2a4 = (float *)((float)pfStack_2a4 + (float)pfStack_2c4);
  pfStack_2a0 = (float *)((float)pfStack_2c0 + (float)pfStack_2a0);
  pfStack_29c = (float *)((float)puStack_2bc + (float)pfStack_29c);
  uStack_220 = 0;
  local_224 = (float *)0x0;
  uStack_228 = 0;
  fStack_22c = 0.0;
  fStack_234 = 0.0;
  fStack_238 = 0.0;
  pfStack_23c = (float *)0x0;
  fStack_240 = 0.0;
  fStack_248 = 0.0;
  fStack_24c = 0.0;
  fStack_250 = 0.0;
  fStack_254 = 0.0;
  afStack_21c[0] = 1.0;
  fStack_230 = 1.0;
  local_244 = 1.0;
  fStack_258 = 1.0;
  fStack_268 = *pfVar5;
  fStack_264 = *(float *)(param_1 + 0x364);
  fStack_260 = *(float *)(param_1 + 0x368);
  iStack_25c = *(undefined4 *)(param_1 + 0x36c);
  thunk_FUN_00ddc1d0(auStack_f8,&fStack_268,5);
  D3DXMatrixMultiply(&fStack_258,auStack_f8,&fStack_258);
  D3DXMatrixMultiply(&fStack_264,&fStack_264,iVar4);
  fVar9 = 0.0;
  D3DXMatrixInverse(auStack_d0,0,&local_270);
  D3DXVec3TransformNormal(&puStack_2ec,&iStack_2cc,auStack_dc);
  if ((float)ppuStack_2f8 <= 1.5) {
    if ((float)ppuStack_2f8 < -1.0) {
      ppuStack_2f8 = (undefined1 **)0xbf800000;
    }
  }
  else {
    ppuStack_2f8 = (undefined1 **)0x3fc00000;
  }
  D3DXVec3TransformNormal(&pfStack_2d8,&ppuStack_2f8,&stack0xfffffd78);
  fVar10 = (float)ppfStack_2e8[0x10] + (float)puStack_2e4;
  fVar11 = (float)ppfStack_2e8[0x11] + (float)puStack_2e0;
  fVar12 = (float)ppfStack_2e8[0x12] + fStack_2dc;
  pfStack_2a8 = *(float **)(param_1 + 0x80c);
  iVar7 = (*(code *)(*ppfStack_2e8)[0xcc])();
  if (iVar7 == 0) {
    fVar2 = 0.2;
  }
  else {
    fVar2 = 0.4;
  }
  if (fVar2 <= *(float *)(param_1 + 0x80c)) {
    if ((*(float *)(param_1 + 0x80c) <= fVar2) ||
       (fVar3 = *(float *)(param_1 + 0x80c) - 0.005, *(float *)(param_1 + 0x80c) = fVar3,
       fVar3 < fVar2)) {
      *(float *)(param_1 + 0x80c) = fVar2;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x80c) + 0.005;
    *(float *)(param_1 + 0x80c) = fVar3;
    if (fVar2 < fVar3) {
      *(float *)(param_1 + 0x80c) = fVar2;
    }
  }
  *(float *)(param_1 + 0x4c0) =
       (fVar10 - *(float *)(param_1 + 0x4c0)) * (float)pfStack_2a8 + *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4c4) =
       (fVar11 - *(float *)(param_1 + 0x4c4)) * (float)pfStack_2a8 + *(float *)(param_1 + 0x4c4);
  *(float *)(param_1 + 0x4c8) =
       (fVar12 - *(float *)(param_1 + 0x4c8)) * (float)pfStack_2a8 + *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4f4) = fVar9 * 5.0;
  if (pfStack_2ac != (float *)0x0) {
    *(undefined4 *)(param_1 + 0x4f4) = 0x40c00000;
  }
  local_224 = (float *)0x0;
  uStack_220 = 0;
  afStack_21c[0] = -*(float *)(param_1 + 0x4f4);
  local_1f0[0x13] = *pfVar5;
  uStack_1a0 = *(undefined4 *)(param_1 + 0x364);
  uStack_19c = *(undefined4 *)(param_1 + 0x368);
  uStack_198 = *(undefined4 *)(param_1 + 0x36c);
  local_1f0[0x11] = 0.0;
  local_1f0[0x10] = 0.0;
  local_1f0[0xf] = 0.0;
  local_1f0[0xe] = 0.0;
  local_1f0[0xc] = 0.0;
  local_1f0[0xb] = 0.0;
  local_1f0[10] = 0.0;
  local_1f0[9] = 0.0;
  local_1f0[7] = 0.0;
  local_1f0[6] = 0.0;
  local_1f0[5] = 0.0;
  local_1f0[4] = 0.0;
  local_1f0[0x12] = 1.0;
  local_1f0[0xd] = 1.0;
  local_1f0[8] = 1.0;
  local_1f0[3] = 1.0;
  thunk_FUN_00ddc1d0(auStack_134,local_1f0 + 0x13,5);
  D3DXMatrixMultiply(local_1f0 + 3,auStack_134,local_1f0 + 3);
  D3DXMatrixMultiply(local_1f0,local_1f0,iVar4);
  D3DXVec3TransformNormal(&pfStack_23c,&pfStack_23c,&local_1fc);
  *(float *)(param_1 + 0x4b0) =
       ((*(float *)(param_1 + 0x4c0) + fStack_248 + local_1f0[6]) - *(float *)(param_1 + 0x4b0)) *
       0.3 + *(float *)(param_1 + 0x4b0);
  fVar9 = ((*(float *)(param_1 + 0x4c4) + local_244 + local_1f0[7]) - *(float *)(param_1 + 0x4b4)) *
          0.3 + *(float *)(param_1 + 0x4b4);
  *(float *)(param_1 + 0x4b4) = fVar9;
  *(float *)(param_1 + 0x4b8) =
       ((fStack_240 + local_1f0[8] + *(float *)(param_1 + 0x4c8)) - *(float *)(param_1 + 0x4b8)) *
       0.3 + *(float *)(param_1 + 0x4b8);
  fVar10 = (afStack_21c[2] + 0.5) - fVar9;
  if (fVar10 <= 0.0) {
    return;
  }
  *(float *)(param_1 + 0x4b4) = fVar9 + fVar10;
  *(float *)(param_1 + 0x4c4) = fVar10 + *(float *)(param_1 + 0x4c4);
  return;
}

// 00DAAEB0  FUN_00daaeb0  size=3834  [callgraph]
void __fastcall FUN_00daaeb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int unaff_ESI;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  float10 fVar13;
  float fStack_19c;
  float fStack_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  int local_184;
  int iStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [2];
  float local_168;
  float local_164;
  float local_160;
  float local_15c [5];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [64];
  float local_40 [7];
  float fStack_24;
  
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  local_194 = (float)FUN_00a7c8a0();
  if (local_194 == 0.0) {
    return;
  }
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  pfVar12 = (float *)(param_1 + 0x720);
  pfVar11 = local_40;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar11 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    pfVar11 = pfVar11 + 1;
  }
  iVar7 = FUN_00a81330();
  piVar10 = (int *)0x0;
  if (iVar7 != 0) {
    piVar10 = (int *)FUN_00a7c8a0();
  }
  local_168 = 0.0;
  iVar7 = FUN_00a8cab0();
  if (iVar7 == 0x12) {
    local_168 = 1.4013e-45;
  }
  iVar7 = FUN_00a8cab0();
  fVar5 = local_194;
  if (iVar7 == 0x13) {
    local_168 = 1.4013e-45;
  }
  local_110 = *(undefined4 *)((int)local_194 + 0x40);
  pfVar12 = (float *)((int)local_194 + 0x40);
  local_ec = *(float *)((int)local_194 + 0x44);
  local_108 = *(undefined4 *)((int)local_194 + 0x48);
  local_104 = *(float *)((int)local_194 + 0x4c);
  local_fc = local_ec + 1.5;
  local_10c = local_ec - 2.5;
  local_100 = local_110;
  local_f8 = local_108;
  local_f4 = local_104;
  local_f0 = local_110;
  local_e8 = local_108;
  local_e4 = local_104;
  local_e0 = local_110;
  local_dc = local_ec;
  local_d8 = (float)local_108;
  local_d4 = local_104;
  local_164 = (float)RayCastSingleHitWork::RayCastSingleHitWork_4
                               (&local_e0,0,0,0,&local_100,&local_110,0x1e,&DAT_016c3080);
  local_10c = local_10c - 20.0;
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (&local_f0,0,0,0,&local_100,&local_110,0x1e,&DAT_016c3080);
  if (*(int *)((int)local_194 + 0x266c) == 0) {
    if (piVar10 == (int *)0x0) goto LAB_00dab472;
    local_190 = (float)piVar10[0x10];
    local_18c = (float)piVar10[0x11];
    local_188 = (float)piVar10[0x12];
    local_184 = piVar10[0x13];
    local_160 = 0.0;
    local_15c[0] = 0.0;
    local_15c[1] = 10.0;
    D3DXVec3TransformNormal(&local_190,&local_160,piVar10 + 4);
    local_190 = local_190 + (float)piVar10[0x10];
    local_18c = (float)piVar10[0x11] + local_18c;
    local_188 = (float)piVar10[0x12] + local_188;
    fStack_19c = *(float *)(param_1 + 0x360);
    fStack_198 = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&fStack_19c,&fStack_198,&local_190,param_1 + 0x460);
    fStack_19c = fStack_19c * -1.0;
    fVar13 = (float10)FUN_00ddba30(fStack_198 - *(float *)(param_1 + 0x794));
    if (ABS(fVar13) <= (float10)1e-05) {
LAB_00dab217:
      *(undefined4 *)(param_1 + 0x78c) = 0;
    }
    else {
      *(float *)(param_1 + 0x78c) = (float)(fVar13 * (float10)0.06);
    }
  }
  else {
    if (piVar10 == (int *)0x0) goto LAB_00dab472;
    (**(code **)(*piVar10 + 0x208))(&local_190);
    fStack_198 = *(float *)(param_1 + 0x360);
    fStack_19c = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&fStack_198,&fStack_19c,&local_190,param_1 + 0x460);
    fStack_198 = fStack_198 * -1.0;
    fVar13 = (float10)FUN_00ddba30(fStack_198 - *(float *)(param_1 + 0x790));
    if (((*(int *)((int)local_194 + 0x2664) == 0) &&
        (fVar9 = *(float *)((int)local_194 + 0x44) + 3.0, local_18c < fVar9 != (local_18c == fVar9))
        ) && (*(float *)((int)local_194 + 0x44) <= local_18c)) {
      fVar13 = (float10)0;
    }
    if (ABS(fVar13) <= (float10)1e-05) {
      fVar13 = (float10)0;
    }
    else {
      fVar13 = fVar13 * (float10)0.1;
    }
    *(float *)(param_1 + 0x788) = (float)fVar13;
    fVar13 = (float10)FUN_00ddba30(fStack_19c - *(float *)(param_1 + 0x794));
    if (ABS(fVar13) <= (float10)1e-05) {
      fVar13 = (float10)0;
    }
    else {
      fVar13 = fVar13 * (float10)0.1;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar13;
    thunk_FUN_00dde510(&fStack_198,&fStack_19c,&local_190,pfVar12);
    fStack_198 = fStack_198 * -1.0;
    fVar13 = (float10)FUN_00ddba30(fStack_19c + 0.17453292);
    fStack_19c = (float)fVar13;
    fVar9 = local_188 - *(float *)((int)fVar5 + 0x48);
    if (fVar9 * fVar9 + (local_190 - *pfVar12) * (local_190 - *pfVar12) < 36.0) {
      fVar13 = (float10)FUN_00ddba30((float)(fVar13 - (float10)*(float *)(param_1 + 0x794)));
      if (ABS(fVar13) <= (float10)1e-05) goto LAB_00dab217;
      *(float *)(param_1 + 0x78c) = (float)(fVar13 * (float10)0.1);
    }
  }
  if (*(int *)((int)local_194 + 0x266c) == 0) {
    FUN_00aed1d0(&local_160);
    fStack_198 = 0.0;
    fVar1 = (float)piVar10[0x11] - *(float *)((int)fVar5 + 0x44);
    fVar9 = (float)piVar10[0x12] - *(float *)((int)fVar5 + 0x48);
    fStack_118 = SQRT(((float)piVar10[0x10] - *pfVar12) * ((float)piVar10[0x10] - *pfVar12) +
                      fVar1 * fVar1 + fVar9 * fVar9);
    if (50.0 < fStack_118) {
      local_15c[0] = local_15c[0] - (fStack_118 - 50.0);
      if (local_15c[0] < (float)piVar10[0x11] + 1.0) {
        local_15c[0] = (float)piVar10[0x11] + 1.0;
      }
    }
    fStack_19c = *(float *)(param_1 + 0x360);
    uStack_114 = *(undefined4 *)(param_1 + 0x364);
    thunk_FUN_00dde510(&fStack_19c,&uStack_114,&local_160,param_1 + 0x460);
    fStack_19c = fStack_19c * -1.0;
    fVar9 = 1.4013e-45;
    if (*(float *)(param_1 + 0x360) <= fStack_19c) {
      fVar9 = fStack_198;
    }
    if ((50.0 < fStack_118) || (fVar9 != 0.0)) {
      fVar13 = (float10)FUN_00ddba30(fStack_19c - *(float *)(param_1 + 0x790));
      fStack_198 = (float)fVar13;
      if (*(int *)((int)local_194 + 0x2664) != 0) {
        fStack_198 = 0.0;
      }
      iVar7 = FUN_00a8d9d0();
      fVar9 = fStack_198;
      if (iVar7 != 0) {
        fVar9 = 0.0;
      }
      if (100.0 <= fStack_24 * fStack_24) {
        fVar9 = 0.0;
      }
      *(float *)(param_1 + 0x790) = fVar9 * 0.01 + *(float *)(param_1 + 0x790);
    }
  }
LAB_00dab472:
  fVar9 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788) +
          *(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = fVar9;
  if (fVar9 < *(float *)(param_1 + 0x7b0)) {
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
  }
  fVar9 = *(float *)(param_1 + 0x790);
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    fVar9 = -0.34906584;
  }
  if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
    fVar9 = *(float *)(param_1 + 0x7a0);
    *(float *)(param_1 + 0x790) = fVar9;
  }
  fVar13 = (float10)FUN_00ddba30(fVar9 + *(float *)(param_1 + 0x7e0));
  *(float *)(param_1 + 0x360) = (float)fVar13;
  fVar9 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c) +
          *(float *)(param_1 + 0x794);
  *(float *)(param_1 + 0x794) = fVar9;
  fVar13 = (float10)FUN_00ddba30(fVar9);
  *(float *)(param_1 + 0x364) = (float)fVar13;
  uStack_130 = 0;
  uStack_12c = 0x3f800000;
  fStack_128 = 0.0;
  FUN_00ddc1d0(auStack_80,param_1 + 0x360,*(undefined4 *)(param_1 + 0x1f0));
  D3DXVec3TransformNormal(&uStack_130,&uStack_130,auStack_80);
  local_15c[0] = 0.0;
  local_15c[1] = 0.0;
  local_15c[2] = 1.0;
  FUN_00ddc1d0(auStack_8c,param_1 + 0x360,*(undefined4 *)(param_1 + 0x1f0));
  D3DXVec3TransformNormal(local_15c,local_15c,auStack_8c);
  fStack_198 = local_160 * fStack_144 - local_164 * fStack_140;
  local_194 = local_168 * fStack_140 - fStack_148 * local_160;
  local_190 = fStack_148 * local_164 - local_168 * fStack_144;
  fVar9 = local_190 * local_190 + fStack_198 * fStack_198 + local_194 * local_194;
  if (fVar9 < 0.0 == (fVar9 == 0.0)) {
    FUN_00ddf460(&fStack_198,&fStack_198);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_190 = 0.0;
    local_194 = 1.0;
    fStack_198 = 0.0;
  }
  fVar9 = *(float *)(param_1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  fVar3 = fVar9 * fStack_198;
  fVar2 = fVar9 * local_194;
  fVar9 = fVar9 * local_190;
  fVar1 = *(float *)(param_1 + 0x7e8);
  if ((piVar10 != (int *)0x0) &&
     (fVar4 = (float)piVar10[0x12] - *(float *)((int)fVar5 + 0x48),
     30.0 <= SQRT(fVar4 * fVar4 +
                  ((float)piVar10[0x10] - *pfVar12) * ((float)piVar10[0x10] - *pfVar12)))) {
    fVar1 = fVar1 + 0.6;
  }
  fStack_198 = local_168;
  local_190 = local_160;
  local_18c = local_15c[0];
  local_194 = 0.0;
  fVar4 = local_168 * local_168 + local_160 * local_160;
  if (fVar4 < 0.0 == (fVar4 == 0.0)) {
    FUN_00ddf460(&fStack_198,&fStack_198);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_190 = 0.0;
    local_194 = 1.0;
    fStack_198 = 0.0;
  }
  fStack_198 = fStack_198 * 0.0;
  local_194 = local_194 * 0.0;
  local_190 = local_190 * 0.0;
  local_18c = local_18c * 0.0;
  fVar3 = fVar3 + fStack_198;
  fVar1 = local_194 + fVar2 + fVar1;
  fVar9 = local_190 + fVar9;
  fStack_178 = *pfVar12;
  fStack_174 = *(float *)((int)fVar5 + 0x44);
  afStack_170[0] = *(float *)((int)fVar5 + 0x48);
  if (*(int *)(unaff_ESI + 0x2664) == 0) {
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7dc) =
         (float)(-(float10)*(float *)(param_1 + 0x7dc) * fVar13 +
                (float10)*(float *)(param_1 + 0x7dc));
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7e0) =
         (float)(-(float10)*(float *)(param_1 + 0x7e0) * fVar13 +
                (float10)*(float *)(param_1 + 0x7e0));
  }
  else if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x764) + 0xd0) + 4) +
           *(float *)(unaff_ESI + 0x894) <= 0.0) {
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7e0) =
         (float)(-(float10)*(float *)(param_1 + 0x7e0) * fVar13 +
                (float10)*(float *)(param_1 + 0x7e0));
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7dc) =
         (float)(-(float10)*(float *)(param_1 + 0x7dc) * fVar13 +
                (float10)*(float *)(param_1 + 0x7dc));
  }
  else {
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7e0) =
         (float)(((float10)*(float *)(param_1 + 0x7dc) * (float10)0.17453292 -
                 (float10)*(float *)(param_1 + 0x7e0)) * fVar13 +
                (float10)*(float *)(param_1 + 0x7e0));
    if (fStack_17c != 0.0) {
      FUN_00e049b0();
      fVar13 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x7dc) =
           (float)((((float10)local_f4 - (float10)*(float *)(unaff_ESI + 0x44)) -
                   (float10)*(float *)(param_1 + 0x7dc)) * fVar13 +
                  (float10)*(float *)(param_1 + 0x7dc));
    }
  }
  *(float *)(param_1 + 0x4c0) =
       ((fVar3 + fStack_178) - *(float *)(param_1 + 0x4c0)) * 0.96 + *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4c4) =
       ((*(float *)(param_1 + 0x7dc) + fStack_174 + fVar1) - *(float *)(param_1 + 0x4c4)) * 0.14 +
       *(float *)(param_1 + 0x4c4);
  *(float *)(param_1 + 0x4c8) =
       ((fVar9 + afStack_170[0]) - *(float *)(param_1 + 0x4c8)) * 0.96 + *(float *)(param_1 + 0x4c8)
  ;
  *(undefined4 *)(param_1 + 0x4f4) = 0x40a00000;
  if (piVar10 != (int *)0x0) {
    fVar9 = (float)piVar10[0x12] - *(float *)((int)fVar5 + 0x48);
    if (40.0 <= SQRT(fVar9 * fVar9 +
                     ((float)piVar10[0x10] - *pfVar12) * ((float)piVar10[0x10] - *pfVar12))) {
      *(undefined4 *)(param_1 + 0x4f4) = 0x40800000;
    }
    fVar9 = (float)piVar10[0x11] - *(float *)((int)fVar5 + 0x44);
    fVar5 = (float)piVar10[0x12] - *(float *)((int)fVar5 + 0x48);
    bVar6 = true;
    iVar7 = 1;
    fStack_17c = SQRT(((float)piVar10[0x10] - *pfVar12) * ((float)piVar10[0x10] - *pfVar12) +
                      fVar9 * fVar9 + fVar5 * fVar5);
    if ((*(int *)(unaff_ESI + 0x2664) != 0) && (bVar6 = false, *(int *)(unaff_ESI + 0x266c) != 0)) {
      iVar7 = 0;
    }
    iVar8 = FUN_00a8d9d0();
    if (iVar8 != 0) {
      bVar6 = false;
    }
    if (*(int *)(unaff_ESI + 0x266c) != 0) {
      bVar6 = false;
    }
    if (100.0 <= local_40[1] * local_40[1]) {
      bVar6 = false;
    }
    iVar8 = FUN_00da0b10();
    if (iVar8 != 0) {
      bVar6 = false;
    }
    if ((25.0 <= fStack_17c) || (iVar7 == 0)) {
      *(float *)(param_1 + 0x7f4) =
           (2.7 - *(float *)(param_1 + 0x7f4)) * 0.1 + *(float *)(param_1 + 0x7f4);
    }
    else {
      fVar5 = (((25.0 - fStack_17c) * 0.5 + 2.7) - *(float *)(param_1 + 0x7f4)) * 0.06 +
              *(float *)(param_1 + 0x7f4);
      *(float *)(param_1 + 0x7f4) = fVar5;
      if (bVar6) {
        *(float *)(param_1 + 0x790) =
             (-0.87266463 - *(float *)(param_1 + 0x790)) * 0.04 + *(float *)(param_1 + 0x790);
      }
      if (iStack_180 == 0) {
        fVar9 = 5.0;
      }
      else {
        fVar9 = 8.0;
      }
      if (fVar9 < fVar5 != (fVar9 == fVar5)) {
        *(float *)(param_1 + 0x7f4) = fVar9;
      }
    }
  }
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    fVar13 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x790) - -0.34906584);
    *(float *)(param_1 + 0x4f4) =
         (float)(fVar13 * (float10)57.29578 * (float10)-0.084 + (float10)*(float *)(param_1 + 0x4f4)
                );
  }
  if (iStack_180 == 0) {
    fVar5 = 5.5;
  }
  else {
    fVar5 = 8.0;
  }
  if (fVar5 < *(float *)(param_1 + 0x4f4)) {
    *(float *)(param_1 + 0x4f4) = fVar5;
  }
  local_15c[1] = 0.0;
  local_15c[2] = 0.0;
  local_15c[3] = -*(float *)(param_1 + 0x4f4);
  uStack_a8 = *(undefined4 *)(param_1 + 0x360);
  uStack_a4 = *(undefined4 *)(param_1 + 0x364);
  uStack_a0 = *(undefined4 *)(param_1 + 0x368);
  uStack_9c = *(undefined4 *)(param_1 + 0x36c);
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  local_d8 = 0.0;
  local_dc = 0.0;
  local_e0 = 0;
  local_e4 = 0.0;
  uStack_ac = 0x3f800000;
  uStack_c0 = 0x3f800000;
  local_d4 = 1.0;
  local_e8 = 0x3f800000;
  thunk_FUN_00ddc1d0(auStack_98,&uStack_a8,5);
  D3DXMatrixMultiply(&local_e8,auStack_98,&local_e8);
  D3DXMatrixMultiply(&local_f4,&local_f4,param_1 + 0x390);
  D3DXVec3TransformNormal(afStack_170,afStack_170,&local_100);
  *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4c0) + local_dc + fStack_17c;
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + local_d8 + fStack_178;
  *(float *)(param_1 + 0x4b8) = local_d4 + fStack_174 + *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + afStack_170[0];
  fVar5 = (fStack_128 + 0.5) - *(float *)(param_1 + 0x4b4);
  if (fVar5 <= 0.0) {
    return;
  }
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar5;
  *(float *)(param_1 + 0x4c4) = fVar5 + *(float *)(param_1 + 0x4c4);
  return;
}

// 00DABDB0  FUN_00dabdb0  size=2283  [callgraph]
void __thiscall FUN_00dabdb0(int param_1,int param_2)

{
  float *pfVar1;
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
  float10 fVar12;
  float *pfStack_158;
  undefined *local_154;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float *local_128;
  float local_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0 [3];
  undefined1 auStack_d4 [4];
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  local_154 = (undefined *)0xdabdcc;
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    local_154 = (undefined *)0xdabddb;
    iVar9 = FUN_00a7c8a0();
    if (iVar9 != 0) {
      local_154 = (undefined *)0xdabdf0;
      iVar10 = FUN_00a81330();
      if (iVar10 != 0) {
        local_154 = (undefined *)0xdabe02;
        iVar10 = FUN_00a81330();
        iVar11 = 0;
        if (iVar10 != 0) {
          local_154 = (undefined *)0xdabe0f;
          iVar11 = FUN_00a7c8a0();
        }
        local_f0 = *(float *)(iVar9 + 0x40);
        local_154 = &DAT_016c3080;
        pfStack_158 = (float *)0x1e;
        local_bc = *(float *)(iVar9 + 0x44);
        local_e8 = *(undefined4 *)(iVar9 + 0x48);
        local_e4 = *(undefined4 *)(iVar9 + 0x4c);
        local_cc = local_bc + 1.5;
        local_ec = local_bc - 2.5;
        local_d0 = local_f0;
        local_c8 = local_e8;
        local_c4 = local_e4;
        local_c0 = local_f0;
        local_b8 = (float)local_e8;
        local_b4 = (float)local_e4;
        local_70 = local_f0;
        local_6c = local_bc;
        local_68 = local_e8;
        local_64 = local_e4;
        RayCastSingleHitWork::RayCastSingleHitWork_4(&local_70,0,0,0,&local_d0,&local_f0);
        local_154 = &DAT_016c3080;
        local_ec = local_ec - 20.0;
        pfStack_158 = (float *)0x1e;
        RayCastSingleHitWork::RayCastSingleHitWork_4(&local_c0,0,0,0,&local_d0,&local_f0);
        *(undefined4 *)(param_1 + 0x7b0) = 0xbfb2b8c2;
        if (0.0 < *(float *)(param_1 + 0x7f8)) {
          *(float *)(param_1 + 0x7f8) = *(float *)(param_1 + 0x7f8) - 1.0;
        }
        if (param_2 != 0) {
          local_154 = (undefined *)(param_1 + 0x460);
          *(undefined4 *)(param_1 + 0x7f8) = 0x41a00000;
          *(undefined4 *)(param_1 + 0x37c) = 0x41a00000;
          *(undefined4 *)(param_1 + 0x380) = 0;
          pfStack_158 = (float *)0xdabf6a;
          FUN_00da01f0();
        }
        if (iVar11 != 0) {
          local_130 = *(float *)(iVar11 + 0x40);
          local_154 = (undefined *)(param_1 + 0x460);
          pfStack_158 = &local_130;
          local_128 = *(float **)(iVar11 + 0x48);
          local_124 = *(float *)(iVar11 + 0x4c);
          local_12c = *(float *)(iVar11 + 0x44) + 15.0;
          local_118 = *(float *)(param_1 + 0x360);
          local_114 = *(float *)(param_1 + 0x364);
          thunk_FUN_00dde510(&local_118,&local_114);
          local_118 = local_118 * -1.0;
          local_154 = (undefined *)(local_118 - *(float *)(param_1 + 0x790));
          pfStack_158 = (float *)0xdabfe6;
          fVar12 = (float10)FUN_00ddba30();
          if (ABS(fVar12) <= (float10)1e-05) {
            fVar12 = (float10)0;
          }
          else {
            fVar12 = fVar12 * (float10)0.1;
          }
          *(float *)(param_1 + 0x788) = (float)fVar12;
          local_154 = (undefined *)(local_114 - *(float *)(param_1 + 0x794));
          pfStack_158 = (float *)0xdac01f;
          fVar12 = (float10)FUN_00ddba30();
          if (ABS(fVar12) <= (float10)1e-05) {
            fVar12 = (float10)0;
          }
          else {
            fVar12 = fVar12 * (float10)0.1;
          }
          *(float *)(param_1 + 0x78c) = (float)fVar12;
        }
        fVar2 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) +
                *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x790);
        *(float *)(param_1 + 0x790) = fVar2;
        if (fVar2 < *(float *)(param_1 + 0x7b0)) {
          *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
        }
        fVar2 = *(float *)(param_1 + 0x790);
        if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
          fVar2 = *(float *)(param_1 + 0x7a0);
          *(float *)(param_1 + 0x790) = fVar2;
        }
        local_154 = (undefined *)(fVar2 + *(float *)(param_1 + 0x7e0));
        pfVar1 = (float *)(param_1 + 0x360);
        pfStack_158 = (float *)0xdac0b8;
        fVar12 = (float10)FUN_00ddba30();
        *pfVar1 = (float)fVar12;
        local_154 = (undefined *)
                    (*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                     *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
        *(undefined **)(param_1 + 0x794) = local_154;
        pfStack_158 = (float *)0xdac0e0;
        fVar12 = (float10)FUN_00ddba30();
        pfStack_158 = *(float **)(param_1 + 0x1f0);
        *(float *)(param_1 + 0x364) = (float)fVar12;
        local_e0[0] = 0.0;
        local_e0[1] = 1.0;
        local_e0[2] = 0.0;
        FUN_00ddc1d0(local_50,pfVar1);
        local_154 = local_50;
        pfStack_158 = local_e0;
        D3DXVec3TransformNormal(pfStack_158);
        uStack_11c = 0;
        local_118 = 0.0;
        local_114 = 1.0;
        FUN_00ddc1d0(auStack_5c,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
        D3DXVec3TransformNormal(&uStack_11c,&uStack_11c,auStack_5c);
        pfStack_158 = (float *)(fStack_120 * fStack_f4 - local_124 * local_f0);
        local_154 = (undefined *)(local_f0 * (float)local_128 - fStack_120 * fStack_f8);
        fVar5 = local_124 * fStack_f8 - fStack_f4 * (float)local_128;
        fVar2 = fVar5 * fVar5 +
                (float)pfStack_158 * (float)pfStack_158 + (float)local_154 * (float)local_154;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&pfStack_158,&pfStack_158);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar5 = 0.0;
          local_154 = (undefined *)0x3f800000;
          pfStack_158 = (float *)0x0;
        }
        *(undefined4 *)(param_1 + 0x7f0) = 0;
        fVar2 = (float)pfStack_158 * -0.8;
        fVar6 = (float)local_154 * -0.8;
        pfStack_158 = local_128;
        local_154 = (undefined *)0x0;
        fVar3 = fStack_120 * fStack_120 + (float)local_128 * (float)local_128;
        if (fVar3 < 0.0 == (fVar3 == 0.0)) {
          FUN_00ddf460(&pfStack_158,&pfStack_158);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_120 = 0.0;
          local_154 = (undefined *)0x3f800000;
          pfStack_158 = (float *)0x0;
        }
        fVar7 = 1.0;
        pfStack_158 = (float *)((float)pfStack_158 * 0.0);
        local_154 = (undefined *)((float)local_154 * 0.0);
        fVar3 = *(float *)(iVar9 + 0x44);
        fVar4 = *(float *)(iVar9 + 0x48);
        fVar8 = 1.0 - *(float *)(param_1 + 0x7f8) * 0.05;
        if ((fVar8 <= 1.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
          fVar7 = 0.0;
        }
        fVar7 = fVar7 * 0.99;
        *(float *)(param_1 + 0x4c0) =
             ((fVar2 + (float)pfStack_158 + *(float *)(iVar9 + 0x40)) - *(float *)(param_1 + 0x4c0))
             * fVar7 + *(float *)(param_1 + 0x4c0);
        *(float *)(param_1 + 0x4c4) =
             ((fVar3 + (float)local_154 + fVar6 + 1.0) - *(float *)(param_1 + 0x4c4)) * fVar7 +
             *(float *)(param_1 + 0x4c4);
        *(float *)(param_1 + 0x4c8) =
             ((fVar5 * -0.8 + fStack_120 * 0.0 + fVar4) - *(float *)(param_1 + 0x4c8)) * fVar7 +
             *(float *)(param_1 + 0x4c8);
        *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x7f4);
        *(float *)(param_1 + 0x7f4) =
             (2.0 - *(float *)(param_1 + 0x7f4)) * 0.06 + *(float *)(param_1 + 0x7f4);
        local_118 = 0.0;
        local_114 = 0.0;
        fStack_110 = -*(float *)(param_1 + 0x4f4);
        fStack_78 = *pfVar1;
        uStack_74 = *(undefined4 *)(param_1 + 0x364);
        local_70 = *(float *)(param_1 + 0x368);
        local_6c = *(float *)(param_1 + 0x36c);
        uStack_90 = 0;
        uStack_94 = 0;
        uStack_98 = 0;
        uStack_9c = 0;
        uStack_a4 = 0;
        uStack_a8 = 0;
        uStack_ac = 0;
        uStack_b0 = 0;
        local_b8 = 0.0;
        local_bc = 0.0;
        local_c0 = 0.0;
        local_c4 = 0;
        uStack_8c = 0x3f800000;
        uStack_a0 = 0x3f800000;
        local_b4 = 1.0;
        local_c8 = 0x3f800000;
        thunk_FUN_00ddc1d0(&local_68,&fStack_78,5);
        D3DXMatrixMultiply(&local_c8,&local_68,&local_c8);
        D3DXMatrixMultiply(auStack_d4,auStack_d4,param_1 + 0x390);
        D3DXVec3TransformNormal(&local_130,&local_130,local_e0);
        *(float *)(param_1 + 0x4b0) = fStack_13c + local_bc + *(float *)(param_1 + 0x4c0);
        *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + local_b8 + fStack_138;
        *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + local_b4 + fStack_134;
        *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + local_130;
        fVar2 = (fStack_f8 + 0.5) - *(float *)(param_1 + 0x4b4);
        if (0.0 < fVar2) {
          *(float *)(param_1 + 0x4b4) = fVar2 + *(float *)(param_1 + 0x4b4);
          *(float *)(param_1 + 0x4c4) = fVar2 + *(float *)(param_1 + 0x4c4);
        }
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b0) =
             (float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)*(float *)(param_1 + 0x460)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x460));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b4) =
             (float)(((float10)*(float *)(param_1 + 0x4b4) - (float10)*(float *)(param_1 + 0x464)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x464));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b8) =
             (float)(((float10)*(float *)(param_1 + 0x4b8) - (float10)*(float *)(param_1 + 0x468)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x468));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c0) =
             (float)(((float10)*(float *)(param_1 + 0x4c0) - (float10)*(float *)(param_1 + 0x470)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x470));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c4) =
             (float)(((float10)*(float *)(param_1 + 0x4c4) - (float10)*(float *)(param_1 + 0x474)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x474));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c8) =
             (float)(((float10)*(float *)(param_1 + 0x4c8) - (float10)*(float *)(param_1 + 0x478)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x478));
      }
    }
  }
  return;
}

// 00DAC6A0  FUN_00dac6a0  size=2422  [callgraph]
void __fastcall FUN_00dac6a0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float10 fVar13;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float afStack_140 [2];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float afStack_12c [2];
  int local_124;
  undefined4 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4 [3];
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined4 local_50 [7];
  float fStack_34;
  
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  local_124 = FUN_00a7c8a0();
  if (local_124 == 0) {
    return;
  }
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  puVar9 = (undefined4 *)(param_1 + 0x720);
  puVar11 = local_50;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar7 = FUN_00a81330();
  piVar10 = (int *)0x0;
  if (iVar7 != 0) {
    piVar10 = (int *)FUN_00a7c8a0();
  }
  iVar7 = local_124;
  local_f0 = *(undefined4 *)(local_124 + 0x40);
  pfVar12 = (float *)(local_124 + 0x40);
  local_7c = *(float *)(local_124 + 0x44);
  local_e8 = *(float *)(local_124 + 0x48);
  local_e4[0] = *(undefined4 *)(local_124 + 0x4c);
  local_cc = local_7c + 1.5;
  local_ec = local_7c - 2.5;
  local_d0 = local_f0;
  local_c8 = local_e8;
  local_c4 = (float)local_e4[0];
  local_80 = local_f0;
  local_78 = local_e8;
  local_74 = local_e4[0];
  local_70 = local_f0;
  local_6c = local_7c;
  local_68 = local_e8;
  local_64 = local_e4[0];
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (&local_80,0,0,0,&local_d0,&local_f0,0x1e,&DAT_016c3080);
  local_ec = local_ec - 20.0;
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (&local_70,0,0,0,&local_d0,&local_f0,0x1e,&DAT_016c3080);
  if (*(int *)(local_124 + 0x266c) == 0) {
    if (piVar10 == (int *)0x0) goto LAB_00dacb2a;
    local_150 = (float)piVar10[0x10];
    local_14c = (float)piVar10[0x11];
    local_148 = (float)piVar10[0x12];
    local_144 = (float)piVar10[0x13];
    local_158 = *(float *)(param_1 + 0x360);
    local_154 = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&local_158,&local_154,&local_150,param_1 + 0x460);
    local_158 = local_158 * -1.0;
    fVar13 = (float10)FUN_00ddba30(local_154 - *(float *)(param_1 + 0x794));
    if (ABS(fVar13) <= (float10)1e-05) {
LAB_00dac9d0:
      *(undefined4 *)(param_1 + 0x78c) = 0;
    }
    else {
      *(float *)(param_1 + 0x78c) = (float)(fVar13 * (float10)0.06);
    }
  }
  else {
    if (piVar10 == (int *)0x0) goto LAB_00dacb2a;
    (**(code **)(*piVar10 + 0x208))(&local_150);
    local_154 = *(float *)(param_1 + 0x360);
    local_158 = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&local_154,&local_158,&local_150,param_1 + 0x460);
    local_154 = local_154 * -1.0;
    fVar13 = (float10)FUN_00ddba30(local_154 - *(float *)(param_1 + 0x790));
    if (((*(int *)(local_124 + 0x2664) == 0) &&
        (fVar2 = *(float *)(local_124 + 0x44) + 3.0, local_14c < fVar2 != (local_14c == fVar2))) &&
       (*(float *)(local_124 + 0x44) <= local_14c)) {
      fVar13 = (float10)0;
    }
    if (ABS(fVar13) <= (float10)1e-05) {
      fVar13 = (float10)0;
    }
    else {
      fVar13 = fVar13 * (float10)0.1;
    }
    *(float *)(param_1 + 0x788) = (float)fVar13;
    fVar13 = (float10)FUN_00ddba30(local_158 - *(float *)(param_1 + 0x794));
    if (ABS(fVar13) <= (float10)1e-05) {
      fVar13 = (float10)0;
    }
    else {
      fVar13 = fVar13 * (float10)0.1;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar13;
    thunk_FUN_00dde510(&local_154,&local_158,&local_150,pfVar12);
    local_154 = local_154 * -1.0;
    fVar13 = (float10)FUN_00ddba30(local_158 + 0.17453292);
    local_158 = (float)fVar13;
    fVar2 = local_148 - *(float *)(iVar7 + 0x48);
    if (fVar2 * fVar2 + (local_150 - *pfVar12) * (local_150 - *pfVar12) < 36.0) {
      fVar13 = (float10)FUN_00ddba30((float)(fVar13 - (float10)*(float *)(param_1 + 0x794)));
      if (ABS(fVar13) <= (float10)1e-05) goto LAB_00dac9d0;
      *(float *)(param_1 + 0x78c) = (float)(fVar13 * (float10)0.1);
    }
  }
  (**(code **)(*piVar10 + 0x208))(&local_150);
  local_158 = *(float *)(param_1 + 0x360);
  local_154 = *(float *)(param_1 + 0x364);
  thunk_FUN_00dde510(&local_158,&local_154,&local_150,param_1 + 0x460);
  local_158 = local_158 * -1.0;
  fVar13 = (float10)FUN_00ddba30(local_158 - *(float *)(param_1 + 0x790));
  fStack_d4 = (float)fVar13;
  iVar8 = FUN_00a8d9d0();
  fVar2 = fStack_d4;
  if (iVar8 != 0) {
    fVar2 = 0.0;
  }
  if (100.0 <= fStack_34 * fStack_34) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x790) = fVar2 * 0.06 + *(float *)(param_1 + 0x790);
LAB_00dacb2a:
  fVar2 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788) +
          *(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = fVar2;
  if (fVar2 < *(float *)(param_1 + 0x7b0)) {
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
  }
  fVar2 = *(float *)(param_1 + 0x790);
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    fVar2 = -0.34906584;
  }
  if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
    fVar2 = *(float *)(param_1 + 0x7a0);
    *(float *)(param_1 + 0x790) = fVar2;
  }
  pfVar1 = (float *)(param_1 + 0x360);
  fVar13 = (float10)FUN_00ddba30(fVar2 + *(float *)(param_1 + 0x7e0));
  *pfVar1 = (float)fVar13;
  fVar2 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c) +
          *(float *)(param_1 + 0x794);
  *(float *)(param_1 + 0x794) = fVar2;
  fVar13 = (float10)FUN_00ddba30(fVar2);
  *(float *)(param_1 + 0x364) = (float)fVar13;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0;
  FUN_00ddc1d0(local_50,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
  D3DXVec3TransformNormal(&uStack_100,&uStack_100,local_50);
  afStack_12c[0] = 0.0;
  afStack_12c[1] = 0.0;
  local_124 = 0x3f800000;
  FUN_00ddc1d0(auStack_5c,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
  D3DXVec3TransformNormal(afStack_12c,afStack_12c,auStack_5c);
  local_158 = fStack_130 * fStack_114 - fStack_134 * fStack_110;
  local_154 = fStack_138 * fStack_110 - fStack_118 * fStack_130;
  local_150 = fStack_118 * fStack_134 - fStack_138 * fStack_114;
  fVar2 = local_150 * local_150 + local_158 * local_158 + local_154 * local_154;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_158,&local_158);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_150 = 0.0;
    local_154 = 1.0;
    local_158 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  fVar5 = local_158 * -1.5;
  fVar6 = local_154 * -1.5;
  fVar2 = local_150 * -1.5;
  local_158 = fStack_138;
  local_150 = fStack_130;
  local_14c = afStack_12c[0];
  local_154 = 0.0;
  fVar3 = fStack_130 * fStack_130 + fStack_138 * fStack_138;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(&local_158,&local_158);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_150 = 0.0;
    local_154 = 1.0;
    local_158 = 0.0;
  }
  local_158 = local_158 * 0.0;
  local_154 = local_154 * 0.0;
  local_150 = local_150 * 0.0;
  local_14c = local_14c * 0.0;
  fVar3 = *(float *)(iVar7 + 0x44);
  fVar4 = *(float *)(iVar7 + 0x48);
  *(float *)(param_1 + 0x4c0) =
       ((fVar5 + local_158 + *pfVar12) - *(float *)(param_1 + 0x4c0)) * 0.96 +
       *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4c4) =
       ((fVar3 + local_154 + fVar6 + 2.0) - *(float *)(param_1 + 0x4c4)) * 0.14 +
       *(float *)(param_1 + 0x4c4);
  *(float *)(param_1 + 0x4c8) =
       ((local_150 + fVar2 + fVar4) - *(float *)(param_1 + 0x4c8)) * 0.96 +
       *(float *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x4f4) = 0x40a00000;
  afStack_12c[1] = 0.0;
  local_124 = 0;
  uStack_120 = 0xc0a00000;
  local_78 = *pfVar1;
  local_74 = *(undefined4 *)(param_1 + 0x364);
  local_70 = *(undefined4 *)(param_1 + 0x368);
  local_6c = *(float *)(param_1 + 0x36c);
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_c0 = 0;
  local_c8 = 0.0;
  local_cc = 0.0;
  local_d0 = 0;
  fStack_d4 = 0.0;
  uStack_9c = 0x3f800000;
  uStack_b0 = 0x3f800000;
  local_c4 = 1.0;
  uStack_d8 = 0x3f800000;
  thunk_FUN_00ddc1d0(&local_68,&local_78,5);
  D3DXMatrixMultiply(&uStack_d8,&local_68,&uStack_d8);
  D3DXMatrixMultiply(local_e4,local_e4,param_1 + 0x390);
  D3DXVec3TransformNormal(afStack_140,afStack_140,&local_f0);
  *(float *)(param_1 + 0x4b0) = local_14c + local_cc + *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + local_c8 + local_148;
  *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + local_c4 + local_144;
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + afStack_140[0];
  return;
}

// 00DAD020  FUN_00dad020  size=2067  [callgraph]
void __fastcall FUN_00dad020(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  float local_138;
  float local_134;
  float afStack_130 [2];
  float fStack_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float fStack_110;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  iVar9 = FUN_00a81330();
  if (((iVar9 != 0) && (iVar9 = FUN_00a7c8a0(), iVar9 != 0)) &&
     (iVar10 = FUN_00a81330(), iVar10 != 0)) {
    local_f0 = *(float *)(iVar9 + 0x40);
    pfVar11 = (float *)(iVar9 + 0x40);
    local_7c = *(float *)(iVar9 + 0x44);
    local_e8 = *(float *)(iVar9 + 0x48);
    local_e4 = *(undefined4 *)(iVar9 + 0x4c);
    local_cc = local_7c + 1.5;
    local_ec = local_7c - 2.5;
    local_d0 = local_f0;
    local_c8 = local_e8;
    local_c4 = (float)local_e4;
    local_80 = local_f0;
    local_78 = local_e8;
    local_74 = local_e4;
    local_70 = local_f0;
    local_6c = local_7c;
    local_68 = local_e8;
    local_64 = local_e4;
    RayCastSingleHitWork::RayCastSingleHitWork_4
              (&local_70,0,0,0,&local_d0,&local_f0,0x1e,&DAT_016c3080);
    local_ec = local_ec - 20.0;
    RayCastSingleHitWork::RayCastSingleHitWork_4
              (&local_80,0,0,0,&local_d0,&local_f0,0x1e,&DAT_016c3080);
    local_120 = *(float *)(param_1 + 0x8a0);
    local_11c = *(float *)(param_1 + 0x8a4);
    local_118 = *(float *)(param_1 + 0x8a8);
    pfVar1 = (float *)(param_1 + 0x360);
    local_114 = *(undefined4 *)(param_1 + 0x8ac);
    local_134 = *pfVar1;
    local_138 = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&local_134,&local_138,&local_120,param_1 + 0x460);
    local_134 = local_134 * -1.0;
    fVar12 = (float10)FUN_00ddba30(local_134 - *(float *)(param_1 + 0x790));
    if (ABS(fVar12) <= (float10)1e-05) {
      fVar12 = (float10)0;
    }
    else {
      fVar12 = fVar12 * (float10)0.1;
    }
    *(float *)(param_1 + 0x788) = (float)fVar12;
    fVar12 = (float10)FUN_00ddba30(local_138 - *(float *)(param_1 + 0x794));
    if (ABS(fVar12) <= (float10)1e-05) {
      fVar12 = (float10)0;
    }
    else {
      fVar12 = fVar12 * (float10)0.1;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar12;
    thunk_FUN_00dde510(&local_134,&local_138,&local_120,pfVar11);
    local_134 = local_134 * -1.0;
    fVar12 = (float10)FUN_00ddba30(local_138 + 0.17453292);
    local_138 = (float)fVar12;
    fVar2 = local_118 - *(float *)(iVar9 + 0x48);
    if (fVar2 * fVar2 + (local_120 - *pfVar11) * (local_120 - *pfVar11) < 36.0) {
      fVar12 = (float10)FUN_00ddba30((float)(fVar12 - (float10)*(float *)(param_1 + 0x794)));
      if (ABS(fVar12) <= (float10)1e-05) {
        *(undefined4 *)(param_1 + 0x78c) = 0;
      }
      else {
        *(float *)(param_1 + 0x78c) = (float)(fVar12 * (float10)0.1);
      }
    }
    fVar2 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788)
            + *(float *)(param_1 + 0x790);
    *(float *)(param_1 + 0x790) = fVar2;
    if (fVar2 < *(float *)(param_1 + 0x7b0)) {
      *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
    }
    fVar2 = *(float *)(param_1 + 0x790);
    if (*(float *)(param_1 + 0x790) < -0.34906584) {
      fVar2 = -0.34906584;
    }
    if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
      fVar2 = *(float *)(param_1 + 0x7a0);
      *(float *)(param_1 + 0x790) = fVar2;
    }
    fVar12 = (float10)FUN_00ddba30(fVar2 + *(float *)(param_1 + 0x7e0));
    *pfVar1 = (float)fVar12;
    fVar2 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c)
            + *(float *)(param_1 + 0x794);
    *(float *)(param_1 + 0x794) = fVar2;
    fVar12 = (float10)FUN_00ddba30(fVar2);
    *(float *)(param_1 + 0x364) = (float)fVar12;
    local_e0 = 0;
    local_dc = 0x3f800000;
    local_d8 = 0;
    FUN_00ddc1d0(local_50,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
    D3DXVec3TransformNormal(&local_e0,&local_e0,local_50);
    local_11c = 0.0;
    local_118 = 0.0;
    local_114 = 0x3f800000;
    FUN_00ddc1d0(auStack_5c,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
    D3DXVec3TransformNormal(&local_11c,&local_11c,auStack_5c);
    fVar4 = local_120 * fStack_f4 - fStack_124 * local_f0;
    fVar2 = local_f0 * fStack_128 - local_120 * fStack_f8;
    fVar3 = fStack_124 * fStack_f8 - fStack_f4 * fStack_128;
    fVar5 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
    local_138 = fVar4;
    local_134 = fVar2;
    afStack_130[0] = fVar3;
    if (fVar5 < 0.0 == (fVar5 == 0.0)) {
      FUN_00ddf460(&stack0xfffffeb8,&stack0xfffffeb8);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = 0.0;
      fVar2 = 1.0;
      fVar4 = 0.0;
    }
    fVar8 = local_11c;
    fVar7 = local_120;
    fVar5 = *(float *)(param_1 + 0x8a0) - *pfVar11;
    fVar6 = *(float *)(param_1 + 0x8a8) - *(float *)(iVar9 + 0x48);
    *(undefined4 *)(param_1 + 0x7f0) = 0;
    fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar5 < 64.0) {
      local_138 = fVar4 * -1.0;
      afStack_130[0] = fVar3 * -1.0;
      local_134 = fVar2 * -1.0 + 1.0;
    }
    else {
      local_138 = fVar4 * -1.5;
      afStack_130[0] = fVar3 * -1.5;
      local_134 = fVar2 * -1.5 + 2.0;
    }
    fVar2 = local_120 * local_120 + fStack_128 * fStack_128;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&stack0xfffffeb8,&stack0xfffffeb8);
      fVar2 = 0.0;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar7 = 0.0;
      fVar2 = 1.0;
      fStack_128 = 0.0;
    }
    fVar3 = *(float *)(iVar9 + 0x44);
    fVar4 = *(float *)(iVar9 + 0x48);
    *(float *)(param_1 + 0x4c0) =
         ((local_138 + fStack_128 * 0.0 + *pfVar11) - *(float *)(param_1 + 0x4c0)) * 0.96 +
         *(float *)(param_1 + 0x4c0);
    *(float *)(param_1 + 0x4c4) =
         ((fVar3 + fVar2 * 0.0 + local_134) - *(float *)(param_1 + 0x4c4)) * 0.14 +
         *(float *)(param_1 + 0x4c4);
    *(float *)(param_1 + 0x4c8) =
         ((fVar7 * 0.0 + afStack_130[0] + fVar4) - *(float *)(param_1 + 0x4c8)) * 0.96 +
         *(float *)(param_1 + 0x4c8);
    *(undefined4 *)(param_1 + 0x4f4) = 0x40a00000;
    if (fVar5 < 64.0) {
      *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
    }
    local_118 = 0.0;
    local_114 = 0;
    fStack_110 = -*(float *)(param_1 + 0x4f4);
    local_78 = *pfVar1;
    local_74 = *(undefined4 *)(param_1 + 0x364);
    local_70 = *(float *)(param_1 + 0x368);
    local_6c = *(float *)(param_1 + 0x36c);
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    local_c8 = 0.0;
    local_cc = 0.0;
    local_d0 = 0.0;
    uStack_d4 = 0;
    uStack_9c = 0x3f800000;
    uStack_b0 = 0x3f800000;
    local_c4 = 1.0;
    local_d8 = 0x3f800000;
    thunk_FUN_00ddc1d0(&local_68,&local_78,5);
    D3DXMatrixMultiply(&local_d8,&local_68,&local_d8);
    D3DXMatrixMultiply(&local_e4,&local_e4,param_1 + 0x390);
    D3DXVec3TransformNormal(afStack_130,afStack_130,&local_f0);
    *(float *)(param_1 + 0x4b0) = fVar8 * 0.0 + local_cc + *(float *)(param_1 + 0x4c0);
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + local_138 + local_c8;
    *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + local_c4 + local_134;
    *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + afStack_130[0];
  }
  return;
}

// 00DAD840  FUN_00dad840  size=2126  [callgraph]
void __fastcall FUN_00dad840(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined1 auStack_114 [4];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_104 [2];
  undefined1 auStack_fc [12];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [88];
  
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (iVar4 = FUN_00a81330(), iVar4 != 0)
     ) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a7c8a0();
    }
    local_d0 = *(undefined4 *)(iVar3 + 0x40);
    local_7c = *(float *)(iVar3 + 0x44);
    local_c8 = *(undefined4 *)(iVar3 + 0x48);
    local_c4 = *(undefined4 *)(iVar3 + 0x4c);
    local_cc = local_7c + 1.5;
    local_6c = (local_7c - 2.5) - 20.0;
    local_80 = local_d0;
    local_78 = local_c8;
    local_74 = local_c4;
    local_70 = local_d0;
    local_68 = local_c8;
    local_64 = local_c4;
    RayCastSingleHitWork::RayCastSingleHitWork_4
              (&local_80,0,0,0,&local_d0,&local_70,0x1e,&DAT_016c3080);
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x90) + 0.034906585);
    local_134 = (float)fVar6;
    fVar6 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x3efc) + 0.13962634);
    if (*(int *)(iVar3 + 0x3f04) != 0) {
      local_130 = *(undefined4 *)(iVar3 + 0x3f10);
      local_12c = *(undefined4 *)(iVar3 + 0x3f14);
      local_128 = *(undefined4 *)(iVar3 + 0x3f18);
      local_124 = *(undefined4 *)(iVar3 + 0x3f1c);
      local_104[0] = *(float *)(param_1 + 0x360);
      local_138 = *(float *)(param_1 + 0x364);
      thunk_FUN_00dde510(local_104,&local_138,&local_130,(float *)(iVar3 + 0x40));
      local_104[0] = local_104[0] * -1.0;
      fVar6 = (float10)FUN_00ddba30(local_104[0] + 0.034906585);
      local_134 = (float)fVar6;
      fVar6 = (float10)FUN_00ddba30(local_138 + 0.13962634);
    }
    local_138 = (float)fVar6;
    uVar10 = 0xf0017;
    uVar5 = FUN_00e03ea0(&DAT_016bc508,0xf0017);
    iVar4 = FUN_00a18d70(uVar5,uVar10);
    if (iVar4 != 0) {
      FUN_00a7c8a0();
    }
    *(undefined4 *)(param_1 + 0x4a8) = 0x3f32b8c2;
    fVar6 = (float10)FUN_00ddba30(local_134 - *(float *)(param_1 + 0x790));
    local_134 = (float)fVar6;
    fVar6 = (float10)FUN_00ddba30(local_138 - *(float *)(param_1 + 0x794));
    local_138 = (float)fVar6;
    if (ABS(local_134) <= 1e-05) {
      fVar6 = (float10)0;
    }
    else {
      fVar6 = (float10)FUN_00fdc1f0();
      fVar6 = fVar6 * (float10)local_134;
    }
    *(float *)(param_1 + 0x788) = (float)fVar6;
    if (ABS(local_138) <= 1e-05) {
      fVar6 = (float10)0;
    }
    else {
      fVar6 = (float10)FUN_00fdc1f0();
      fVar6 = fVar6 * (float10)local_138;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar6;
    fVar11 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788)
             + *(float *)(param_1 + 0x790);
    *(float *)(param_1 + 0x790) = fVar11;
    if (fVar11 < *(float *)(param_1 + 0x7b0)) {
      *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
    }
    fVar11 = *(float *)(param_1 + 0x790);
    if (*(float *)(param_1 + 0x790) < -0.61086524) {
      fVar11 = -0.61086524;
    }
    if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
      fVar11 = *(float *)(param_1 + 0x7a0);
      *(float *)(param_1 + 0x790) = fVar11;
    }
    pfVar1 = (float *)(param_1 + 0x360);
    fVar6 = (float10)FUN_00ddba30(fVar11 + *(float *)(param_1 + 0x7e0));
    *pfVar1 = (float)fVar6;
    fVar11 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c)
             + *(float *)(param_1 + 0x794);
    *(float *)(param_1 + 0x794) = fVar11;
    fVar6 = (float10)FUN_00ddba30(fVar11);
    *(float *)(param_1 + 0x364) = (float)fVar6;
    fVar11 = (float)(param_1 + 0x390);
    local_e0 = 0.0;
    local_dc = 1.0;
    local_d8 = 0;
    D3DXVec3TransformNormal(&local_e0,&local_e0);
    FUN_00ddc1d0(auStack_5c,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
    D3DXVec3TransformNormal(&uStack_ec,&uStack_ec,auStack_5c);
    fStack_108 = 0.0;
    local_104[0] = 0.0;
    local_104[1] = 1.0;
    D3DXVec3TransformNormal(&fStack_108,&fStack_108,param_1 + 0x390);
    FUN_00ddc1d0(&local_74,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
    D3DXVec3TransformNormal(auStack_114,auStack_114,&local_74);
    fVar7 = fStack_10c * fStack_118 - fStack_11c * fStack_108;
    fVar2 = fStack_120 * fStack_108 - fStack_110 * fStack_118;
    fVar9 = fStack_110 * fStack_11c - fStack_10c * fStack_120;
    fVar8 = fVar9 * fVar9 + fVar7 * fVar7 + fVar2 * fVar2;
    if (fVar8 < 0.0 == (fVar8 == 0.0)) {
      FUN_00ddf460(&stack0xfffffeb0,&stack0xfffffeb0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar9 = 0.0;
      fVar2 = 1.0;
      fVar7 = 0.0;
    }
    *(undefined4 *)(param_1 + 0x7f0) = 0;
    fVar7 = fVar7 * -0.8;
    fVar9 = fVar9 * -0.8;
    fVar8 = fVar2 * -0.8 + 0.5;
    fVar2 = fStack_118 * fStack_118 + fStack_120 * fStack_120;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&stack0xfffffeb0,&stack0xfffffeb0);
      fVar2 = 0.0;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_118 = 0.0;
      fVar2 = 1.0;
      fStack_120 = 0.0;
    }
    fVar7 = fVar7 + fStack_120 * 0.0 + *(float *)(iVar3 + 0x40);
    fVar8 = *(float *)(iVar3 + 0x44) + fVar2 * 0.0 + fVar8;
    fVar9 = fStack_118 * 0.0 + fVar9 + *(float *)(iVar3 + 0x48);
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4c0) =
         (float)(((float10)fVar7 - (float10)*(float *)(param_1 + 0x4c0)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4c0));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4c4) =
         (float)(((float10)fVar8 - (float10)*(float *)(param_1 + 0x4c4)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4c4));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4c8) =
         (float)(((float10)fVar9 - (float10)*(float *)(param_1 + 0x4c8)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4c8));
    *(undefined4 *)(param_1 + 0x4f4) = 0x40600000;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0xc0600000;
    fStack_90 = *pfVar1;
    uStack_8c = *(undefined4 *)(param_1 + 0x364);
    uStack_88 = *(undefined4 *)(param_1 + 0x368);
    uStack_84 = *(undefined4 *)(param_1 + 0x36c);
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    local_c4 = 0;
    local_cc = 0.0;
    local_d0 = 0;
    uStack_d4 = 0;
    local_d8 = 0;
    local_e0 = 0.0;
    fStack_e4 = 0.0;
    uStack_e8 = 0;
    uStack_ec = 0;
    uStack_b4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_dc = 1.0;
    uStack_f0 = 0x3f800000;
    thunk_FUN_00ddc1d0(&local_80,&fStack_90,5);
    D3DXMatrixMultiply(&uStack_f0,&local_80,&uStack_f0);
    D3DXMatrixMultiply(auStack_fc,auStack_fc,param_1 + 0x390);
    D3DXVec3TransformNormal(&stack0xfffffeb8,&stack0xfffffeb8,&fStack_108);
    fVar7 = fStack_120 * 0.0 + local_e0;
    fVar2 = fVar2 * 0.0 + local_dc;
    fVar8 = *(float *)(param_1 + 0x4c0) + fVar11 + fStack_e4;
    fVar11 = *(float *)(param_1 + 0x4c4);
    fVar9 = *(float *)(param_1 + 0x4c8);
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b0) =
         (float)(((float10)fVar8 - (float10)*(float *)(param_1 + 0x4b0)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4b0));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b4) =
         (float)(((float10)(fVar7 + fVar11) - (float10)*(float *)(param_1 + 0x4b4)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4b4));
    fVar6 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x4b8) =
         (float)(((float10)(fVar2 + fVar9) - (float10)*(float *)(param_1 + 0x4b8)) * fVar6 +
                (float10)*(float *)(param_1 + 0x4b8));
  }
  return;
}

// 00DAE090  FUN_00dae090  size=2283  [callgraph]
void __thiscall FUN_00dae090(int param_1,int param_2)

{
  float *pfVar1;
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
  float10 fVar12;
  float *pfStack_158;
  undefined *local_154;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float *local_128;
  float local_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0 [3];
  undefined1 auStack_d4 [4];
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  local_154 = (undefined *)0xdae0ac;
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    local_154 = (undefined *)0xdae0bb;
    iVar9 = FUN_00a7c8a0();
    if (iVar9 != 0) {
      local_154 = (undefined *)0xdae0d0;
      iVar10 = FUN_00a81330();
      if (iVar10 != 0) {
        local_154 = (undefined *)0xdae0e2;
        iVar10 = FUN_00a81330();
        iVar11 = 0;
        if (iVar10 != 0) {
          local_154 = (undefined *)0xdae0ef;
          iVar11 = FUN_00a7c8a0();
        }
        local_f0 = *(float *)(iVar9 + 0x40);
        local_154 = &DAT_016c3080;
        pfStack_158 = (float *)0x1e;
        local_bc = *(float *)(iVar9 + 0x44);
        local_e8 = *(undefined4 *)(iVar9 + 0x48);
        local_e4 = *(undefined4 *)(iVar9 + 0x4c);
        local_cc = local_bc + 1.5;
        local_ec = local_bc - 2.5;
        local_d0 = local_f0;
        local_c8 = local_e8;
        local_c4 = local_e4;
        local_c0 = local_f0;
        local_b8 = (float)local_e8;
        local_b4 = (float)local_e4;
        local_70 = local_f0;
        local_6c = local_bc;
        local_68 = local_e8;
        local_64 = local_e4;
        RayCastSingleHitWork::RayCastSingleHitWork_4(&local_70,0,0,0,&local_d0,&local_f0);
        local_154 = &DAT_016c3080;
        local_ec = local_ec - 20.0;
        pfStack_158 = (float *)0x1e;
        RayCastSingleHitWork::RayCastSingleHitWork_4(&local_c0,0,0,0,&local_d0,&local_f0);
        *(undefined4 *)(param_1 + 0x7b0) = 0xbfb2b8c2;
        if (0.0 < *(float *)(param_1 + 0x7f8)) {
          *(float *)(param_1 + 0x7f8) = *(float *)(param_1 + 0x7f8) - 1.0;
        }
        if (param_2 != 0) {
          local_154 = (undefined *)(param_1 + 0x460);
          *(undefined4 *)(param_1 + 0x7f8) = 0x41a00000;
          *(undefined4 *)(param_1 + 0x37c) = 0x41a00000;
          *(undefined4 *)(param_1 + 0x380) = 0;
          pfStack_158 = (float *)0xdae24a;
          FUN_00da01f0();
        }
        if (iVar11 != 0) {
          local_130 = *(float *)(iVar11 + 0x40);
          local_154 = (undefined *)(param_1 + 0x460);
          pfStack_158 = &local_130;
          local_128 = *(float **)(iVar11 + 0x48);
          local_124 = *(float *)(iVar11 + 0x4c);
          local_12c = *(float *)(iVar11 + 0x44) + 15.0;
          local_118 = *(float *)(param_1 + 0x360);
          local_114 = *(float *)(param_1 + 0x364);
          thunk_FUN_00dde510(&local_118,&local_114);
          local_118 = local_118 * -1.0;
          local_154 = (undefined *)(local_118 - *(float *)(param_1 + 0x790));
          pfStack_158 = (float *)0xdae2c6;
          fVar12 = (float10)FUN_00ddba30();
          if (ABS(fVar12) <= (float10)1e-05) {
            fVar12 = (float10)0;
          }
          else {
            fVar12 = fVar12 * (float10)0.1;
          }
          *(float *)(param_1 + 0x788) = (float)fVar12;
          local_154 = (undefined *)(local_114 - *(float *)(param_1 + 0x794));
          pfStack_158 = (float *)0xdae2ff;
          fVar12 = (float10)FUN_00ddba30();
          if (ABS(fVar12) <= (float10)1e-05) {
            fVar12 = (float10)0;
          }
          else {
            fVar12 = fVar12 * (float10)0.1;
          }
          *(float *)(param_1 + 0x78c) = (float)fVar12;
        }
        fVar2 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) +
                *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x790);
        *(float *)(param_1 + 0x790) = fVar2;
        if (fVar2 < *(float *)(param_1 + 0x7b0)) {
          *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
        }
        fVar2 = *(float *)(param_1 + 0x790);
        if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
          fVar2 = *(float *)(param_1 + 0x7a0);
          *(float *)(param_1 + 0x790) = fVar2;
        }
        local_154 = (undefined *)(fVar2 + *(float *)(param_1 + 0x7e0));
        pfVar1 = (float *)(param_1 + 0x360);
        pfStack_158 = (float *)0xdae398;
        fVar12 = (float10)FUN_00ddba30();
        *pfVar1 = (float)fVar12;
        local_154 = (undefined *)
                    (*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                     *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
        *(undefined **)(param_1 + 0x794) = local_154;
        pfStack_158 = (float *)0xdae3c0;
        fVar12 = (float10)FUN_00ddba30();
        pfStack_158 = *(float **)(param_1 + 0x1f0);
        *(float *)(param_1 + 0x364) = (float)fVar12;
        local_e0[0] = 0.0;
        local_e0[1] = 1.0;
        local_e0[2] = 0.0;
        FUN_00ddc1d0(local_50,pfVar1);
        local_154 = local_50;
        pfStack_158 = local_e0;
        D3DXVec3TransformNormal(pfStack_158);
        uStack_11c = 0;
        local_118 = 0.0;
        local_114 = 1.0;
        FUN_00ddc1d0(auStack_5c,pfVar1,*(undefined4 *)(param_1 + 0x1f0));
        D3DXVec3TransformNormal(&uStack_11c,&uStack_11c,auStack_5c);
        pfStack_158 = (float *)(fStack_120 * fStack_f4 - local_124 * local_f0);
        local_154 = (undefined *)(local_f0 * (float)local_128 - fStack_120 * fStack_f8);
        fVar5 = local_124 * fStack_f8 - fStack_f4 * (float)local_128;
        fVar2 = fVar5 * fVar5 +
                (float)pfStack_158 * (float)pfStack_158 + (float)local_154 * (float)local_154;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&pfStack_158,&pfStack_158);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar5 = 0.0;
          local_154 = (undefined *)0x3f800000;
          pfStack_158 = (float *)0x0;
        }
        *(undefined4 *)(param_1 + 0x7f0) = 0;
        fVar2 = (float)pfStack_158 * -0.8;
        fVar6 = (float)local_154 * -0.8;
        pfStack_158 = local_128;
        local_154 = (undefined *)0x0;
        fVar3 = fStack_120 * fStack_120 + (float)local_128 * (float)local_128;
        if (fVar3 < 0.0 == (fVar3 == 0.0)) {
          FUN_00ddf460(&pfStack_158,&pfStack_158);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_120 = 0.0;
          local_154 = (undefined *)0x3f800000;
          pfStack_158 = (float *)0x0;
        }
        fVar7 = 1.0;
        pfStack_158 = (float *)((float)pfStack_158 * 0.0);
        local_154 = (undefined *)((float)local_154 * 0.0);
        fVar3 = *(float *)(iVar9 + 0x44);
        fVar4 = *(float *)(iVar9 + 0x48);
        fVar8 = 1.0 - *(float *)(param_1 + 0x7f8) * 0.05;
        if ((fVar8 <= 1.0) && (fVar7 = fVar8, fVar8 < 0.0)) {
          fVar7 = 0.0;
        }
        fVar7 = fVar7 * 0.99;
        *(float *)(param_1 + 0x4c0) =
             ((fVar2 + (float)pfStack_158 + *(float *)(iVar9 + 0x40)) - *(float *)(param_1 + 0x4c0))
             * fVar7 + *(float *)(param_1 + 0x4c0);
        *(float *)(param_1 + 0x4c4) =
             ((fVar3 + (float)local_154 + fVar6 + 1.0) - *(float *)(param_1 + 0x4c4)) * fVar7 +
             *(float *)(param_1 + 0x4c4);
        *(float *)(param_1 + 0x4c8) =
             ((fVar5 * -0.8 + fStack_120 * 0.0 + fVar4) - *(float *)(param_1 + 0x4c8)) * fVar7 +
             *(float *)(param_1 + 0x4c8);
        *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x7f4);
        *(float *)(param_1 + 0x7f4) =
             (2.0 - *(float *)(param_1 + 0x7f4)) * 0.06 + *(float *)(param_1 + 0x7f4);
        local_118 = 0.0;
        local_114 = 0.0;
        fStack_110 = -*(float *)(param_1 + 0x4f4);
        fStack_78 = *pfVar1;
        uStack_74 = *(undefined4 *)(param_1 + 0x364);
        local_70 = *(float *)(param_1 + 0x368);
        local_6c = *(float *)(param_1 + 0x36c);
        uStack_90 = 0;
        uStack_94 = 0;
        uStack_98 = 0;
        uStack_9c = 0;
        uStack_a4 = 0;
        uStack_a8 = 0;
        uStack_ac = 0;
        uStack_b0 = 0;
        local_b8 = 0.0;
        local_bc = 0.0;
        local_c0 = 0.0;
        local_c4 = 0;
        uStack_8c = 0x3f800000;
        uStack_a0 = 0x3f800000;
        local_b4 = 1.0;
        local_c8 = 0x3f800000;
        thunk_FUN_00ddc1d0(&local_68,&fStack_78,5);
        D3DXMatrixMultiply(&local_c8,&local_68,&local_c8);
        D3DXMatrixMultiply(auStack_d4,auStack_d4,param_1 + 0x390);
        D3DXVec3TransformNormal(&local_130,&local_130,local_e0);
        *(float *)(param_1 + 0x4b0) = fStack_13c + local_bc + *(float *)(param_1 + 0x4c0);
        *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + local_b8 + fStack_138;
        *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + local_b4 + fStack_134;
        *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + local_130;
        fVar2 = (fStack_f8 + 0.5) - *(float *)(param_1 + 0x4b4);
        if (0.0 < fVar2) {
          *(float *)(param_1 + 0x4b4) = fVar2 + *(float *)(param_1 + 0x4b4);
          *(float *)(param_1 + 0x4c4) = fVar2 + *(float *)(param_1 + 0x4c4);
        }
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b0) =
             (float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)*(float *)(param_1 + 0x460)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x460));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b4) =
             (float)(((float10)*(float *)(param_1 + 0x4b4) - (float10)*(float *)(param_1 + 0x464)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x464));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b8) =
             (float)(((float10)*(float *)(param_1 + 0x4b8) - (float10)*(float *)(param_1 + 0x468)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x468));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c0) =
             (float)(((float10)*(float *)(param_1 + 0x4c0) - (float10)*(float *)(param_1 + 0x470)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x470));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c4) =
             (float)(((float10)*(float *)(param_1 + 0x4c4) - (float10)*(float *)(param_1 + 0x474)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x474));
        fVar12 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c8) =
             (float)(((float10)*(float *)(param_1 + 0x4c8) - (float10)*(float *)(param_1 + 0x478)) *
                     fVar12 + (float10)*(float *)(param_1 + 0x478));
      }
    }
  }
  return;
}

// 00DAE980  FUN_00dae980  size=501  [callgraph]
void FUN_00dae980(undefined4 param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 *extraout_ECX;
  
  FUN_00da3530();
  if ((param_2 < 0x80) &&
     (puVar1 = PTR_DAT_018bc3a0 + param_2 * 0x1a0 + 0x18c, puVar1 != (undefined *)0x0)) {
    *extraout_ECX = *(undefined4 *)(puVar1 + 0x124);
    extraout_ECX[1] = *(undefined4 *)(puVar1 + 0x128);
    extraout_ECX[3] = *(undefined4 *)(puVar1 + 0x130);
    if ((*(uint *)(puVar1 + 0x124) & 0x80000000) != 0) {
      extraout_ECX[4] = *(undefined4 *)(puVar1 + 0x134);
    }
    if ((*(uint *)(puVar1 + 0x124) & 0x40000000) != 0) {
      extraout_ECX[5] = *(undefined4 *)(puVar1 + 0x138);
    }
    if ((*(uint *)(puVar1 + 0x124) & 0x4000000) != 0) {
      extraout_ECX[6] = *(undefined4 *)(puVar1 + 0x13c);
      extraout_ECX[7] = *(undefined4 *)(puVar1 + 0x140);
    }
    if ((*(uint *)(puVar1 + 0x124) & 0x20000000) != 0) {
      extraout_ECX[8] = *(undefined4 *)(puVar1 + 0x144);
      extraout_ECX[9] = *(undefined4 *)(puVar1 + 0x148);
      extraout_ECX[10] = *(undefined4 *)(puVar1 + 0x14c);
    }
    if ((*(uint *)(puVar1 + 0x124) & 0x10000000) != 0) {
      *(undefined *)(extraout_ECX + 0x16) = puVar1[0x17c];
      extraout_ECX[0xb] = *(undefined4 *)(puVar1 + 0x150);
      extraout_ECX[0xc] = *(undefined4 *)(puVar1 + 0x154);
      extraout_ECX[0xd] = *(undefined4 *)(puVar1 + 0x158);
      extraout_ECX[0xe] = *(undefined4 *)(puVar1 + 0x15c);
      extraout_ECX[0xf] = *(undefined4 *)(puVar1 + 0x160);
    }
    if ((*(uint *)(puVar1 + 0x124) & 0x2000000) != 0) {
      *(undefined2 *)(extraout_ECX + 0x10) = *(undefined2 *)(puVar1 + 0x164);
    }
    if ((*(uint *)(puVar1 + 0x124) & 0x8000000) != 0) {
      *(undefined *)((int)extraout_ECX + 0x59) = puVar1[0x17d];
      extraout_ECX[0x11] = *(undefined4 *)(puVar1 + 0x168);
      extraout_ECX[0x12] = *(undefined4 *)(puVar1 + 0x16c);
      extraout_ECX[0x13] = *(undefined4 *)(puVar1 + 0x170);
      extraout_ECX[0x14] = *(undefined4 *)(puVar1 + 0x174);
      extraout_ECX[0x15] = *(undefined4 *)(puVar1 + 0x178);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x80000000) != 0) {
      *(undefined2 *)((int)extraout_ECX + 0x5a) = *(undefined2 *)(puVar1 + 0x17e);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x40000000) != 0) {
      *(undefined2 *)(extraout_ECX + 0x17) = *(undefined2 *)(puVar1 + 0x180);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x20000000) != 0) {
      *(undefined2 *)((int)extraout_ECX + 0x5e) = *(undefined2 *)(puVar1 + 0x182);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x10000000) != 0) {
      *(undefined2 *)(extraout_ECX + 0x18) = *(undefined2 *)(puVar1 + 0x184);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x8000000) != 0) {
      *(undefined2 *)((int)extraout_ECX + 0x62) = *(undefined2 *)(puVar1 + 0x186);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x4000000) != 0) {
      *(undefined2 *)(extraout_ECX + 0x19) = *(undefined2 *)(puVar1 + 0x188);
    }
    if ((*(uint *)(puVar1 + 0x128) & 0x2000000) != 0) {
      *(undefined2 *)((int)extraout_ECX + 0x66) = *(undefined2 *)(puVar1 + 0x18a);
    }
  }
  return;
}

// 00DAEB80  FUN_00daeb80  size=310  [callgraph]
int FUN_00daeb80(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar6 = 0;
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 != 0) goto LAB_00daebb9;
  }
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    return -1;
  }
LAB_00daebb9:
  iVar3 = FUN_00a7c8a0();
  if (iVar3 == 0) {
    return -1;
  }
  iVar3 = FUN_00a92f90();
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00e2fe20();
  }
  uStack_14 = 0xffffffff;
  uStack_10 = 0;
  FUN_00da2880(&uStack_14,&uStack_10,uVar4);
  uStack_4 = (uint)(ushort)DAT_018b9174;
  uStack_8 = FUN_00d45980();
  uVar1 = uStack_10;
  uVar4 = uStack_14;
  iStack_c = -1;
  puVar5 = PTR_DAT_018bc3a0 + 0x1a4;
  while (((((*(uint *)(puVar5 + -4) & 0x80000000) == 0 ||
           (iVar3 = FUN_00da32d0(uVar4,uVar1), iVar3 == 0)) ||
          (iVar3 = FUN_00da3330(uVar4,uVar1), iVar3 != 0)) ||
         (((iVar3 = FUN_00da3390(uStack_4,uStack_8), iVar3 == 0 ||
           (iVar3 = FUN_00da3440(), iVar3 == 0)) || (iVar3 = FUN_00da34c0(param_1), iVar3 == 0)))))
  {
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 0x1a0;
    if (0x7f < iVar6) {
      return iStack_c;
    }
  }
  return iVar6;
}

// 00DAECC0  FUN_00daecc0  size=741  [callgraph]
void FUN_00daecc0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined1 *puVar9;
  float *pfVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  float *pfVar13;
  undefined1 *puStack_ac;
  float *pfStack_a8;
  float *pfStack_a4;
  float fStack_a0;
  float *pfStack_9c;
  undefined4 *puStack_98;
  undefined1 *puStack_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [4];
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [76];
  
  puStack_94 = (undefined1 *)0xdaecd6;
  FUN_00da3530();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x4a8);
  fVar1 = *(float *)(param_2 + 0x470) - *(float *)(param_2 + 0x460);
  fVar3 = *(float *)(param_2 + 0x474) - *(float *)(param_2 + 0x464);
  fVar2 = *(float *)(param_2 + 0x478) - *(float *)(param_2 + 0x468);
  *(float *)(param_1 + 0x14) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00daed3b:
    puStack_94 = (undefined1 *)0xdaed46;
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) goto LAB_00daed4a;
    iVar5 = 0;
  }
  else {
    puStack_94 = (undefined1 *)0xdaed2c;
    piVar4 = (int *)FUN_00c13920();
    puStack_94 = (undefined1 *)0x1;
    puStack_98 = (undefined4 *)0xdaed37;
    iVar5 = (**(code **)(*piVar4 + 0x28))();
    if (iVar5 == 0) goto LAB_00daed3b;
LAB_00daed4a:
    puStack_94 = (undefined1 *)0xdaed51;
    iVar5 = FUN_00a7c800();
  }
  puStack_94 = (undefined1 *)0x5;
  pfStack_9c = (float *)auStack_50;
  puStack_98 = (undefined4 *)(param_2 + 0x1e0);
  fStack_80 = *(float *)(param_2 + 0x470) - *(float *)(iVar5 + 0x40);
  fStack_7c = *(float *)(param_2 + 0x474) - (*(float *)(iVar5 + 0x44) + 1.4);
  afStack_78[0] = *(float *)(param_2 + 0x478) - *(float *)(iVar5 + 0x48);
  uStack_60 = 0x3f800000;
  uStack_5c = 0;
  uStack_58 = 0;
  fStack_a0 = 2.0105395e-38;
  FUN_00ddc1d0();
  puStack_94 = auStack_50;
  puStack_98 = &uStack_60;
  pfStack_9c = afStack_78 + 2;
  fStack_a0 = 2.0105427e-38;
  D3DXVec3TransformNormal();
  fVar1 = (float)(param_2 + 0x390);
  pfStack_a8 = &fStack_7c;
  puStack_ac = (undefined1 *)0xdaedd4;
  pfStack_a4 = pfStack_a8;
  fStack_a0 = fVar1;
  D3DXVec3TransformNormal();
  puStack_ac = (undefined1 *)0x5;
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_2 + 0x3c8) + fStack_80) * unaff_EDI +
       (*(float *)(param_2 + 0x3c0) + unaff_EBX) * (float)puStack_98 +
       (*(float *)(param_2 + 0x3c4) + fStack_84) * (float)puStack_94;
  afStack_78[0] = 0.0;
  afStack_78[1] = 1.0;
  afStack_78[2] = 0.0;
  FUN_00ddc1d0(auStack_68,param_2 + 0x1e0);
  puStack_ac = auStack_68;
  pfVar13 = afStack_78;
  puVar12 = &stack0xffffff78;
  D3DXVec3TransformNormal();
  ppuVar11 = &puStack_94;
  D3DXVec3TransformNormal(ppuVar11,ppuVar11);
  *(float *)(param_1 + 0x24) =
       (*(float *)(param_2 + 0x3c8) + (float)puStack_98) * (float)pfStack_a8 +
       (*(float *)(param_2 + 0x3c0) + fStack_a0) * (float)pfVar13 +
       (*(float *)(param_2 + 0x3c4) + (float)pfStack_9c) * (float)puStack_ac;
  FUN_00ddc1d0(&fStack_80,param_2 + 0x1e0,5);
  pfVar10 = &fStack_80;
  puVar9 = &stack0xffffff70;
  D3DXVec3TransformNormal(&fStack_a0);
  D3DXVec3TransformNormal(&puStack_ac,&puStack_ac,fVar1);
  *(float *)(param_1 + 0x28) =
       (*(float *)(param_2 + 0x3c8) + (float)pfVar13) * (float)ppuVar11 +
       (*(float *)(param_2 + 0x3c0) + fVar1) * (float)puVar9 +
       (*(float *)(param_2 + 0x3c4) + (float)puVar12) * (float)pfVar10;
  fVar6 = (float10)*(float *)(param_2 + 0x470) - (float10)*(float *)(param_2 + 0x460);
  fVar7 = (float10)*(float *)(param_2 + 0x478) - (float10)*(float *)(param_2 + 0x468);
  fVar8 = (float10)fpatan((float10)*(float *)(param_2 + 0x474) -
                          (float10)*(float *)(param_2 + 0x464),SQRT(fVar6 * fVar6 + fVar7 * fVar7));
  *(float *)(param_1 + 0x2c) = (float)-fVar8;
  fVar6 = (float10)fpatan(-fVar6,-fVar7);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)3.1415927));
  *(float *)(param_1 + 0x44) = (float)fVar6;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00daef64:
    iVar5 = FUN_00a81330();
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_00daef7e;
    }
  }
  else {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar5 == 0) goto LAB_00daef64;
  }
  iVar5 = FUN_00a7c800();
LAB_00daef7e:
  fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x44) - *(float *)(iVar5 + 0x94));
  *(float *)(param_1 + 0x44) = (float)fVar6;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 00DAEFB0  FUN_00daefb0  size=102  [callgraph]
int FUN_00daefb0(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar1 = (undefined2)DAT_018b9174;
  uVar2 = FUN_00d45980();
  iVar5 = 0;
  puVar4 = PTR_DAT_018bc3a0 + 0xd1a4;
  do {
    if ((*(uint *)(puVar4 + -4) & 0x80000000) != 0) {
      iVar3 = FUN_00da2b80(param_1);
      if (iVar3 != 0) {
        iVar3 = FUN_00da2be0(uVar1,uVar2);
        if (iVar3 != 0) {
          return iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0xd8;
  } while (iVar5 < 0x40);
  return -1;
}

// 00DAF120  FUN_00daf120  size=181  [callgraph]
undefined4 __thiscall FUN_00daf120(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PhaseMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PhaseMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SubPhaseMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SubPhaseMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 8);
  }
  return 1;
}

// 00DAF220  FUN_00daf220  size=349  [callgraph]
undefined4 __thiscall FUN_00daf220(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBP;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = "IncObjFlag";
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"IncObjFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1);
  }
  pcVar6 = "IncObj";
  uVar2 = (**(code **)(*param_2 + 0x18))(param_3,"IncObj");
  iVar5 = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(uVar2);
  if (0 < iVar1) {
    pcVar7 = pcVar7 + 4;
    uVar3 = uVar2;
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(uVar3,iVar5);
      iVar4 = (**(code **)(*param_2 + 0x9c))(uVar3,"ObjIdMin");
      if (iVar4 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar4,pcVar7);
      }
      iVar4 = (**(code **)(*param_2 + 0x9c))(uVar3,"ObjIdMax");
      if (iVar4 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar4,pcVar7 + 4);
      }
      iVar5 = iVar5 + 1;
      pcVar7 = pcVar7 + 8;
      param_3 = uVar2;
      uVar3 = unaff_EBP;
    } while (iVar5 < iVar1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"IncPhaseFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,pcVar6 + 0x24);
  }
  uVar2 = (**(code **)(*param_2 + 0x18))(param_3,"IncPhase");
  iVar5 = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(uVar2);
  if (0 < iVar1) {
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(uVar2,iVar5);
      FUN_00daf120(param_2,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return 1;
}

// 00DAF390  FUN_00daf390  size=1065  [callgraph]
undefined4 __thiscall FUN_00daf390(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ValueFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ControlFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1 + 4,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BoundRateY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EscapeOverlapRange");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EscapeOverlapYAng");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BattleOffsetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BattlePullBackLineY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BattlePullBackDistOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnHeightBase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnDistMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnDistMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnAngXBase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnAngXMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnIntoTurnYAng");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnIntoTurnYMargin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnDirYMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x3c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnDirYMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnUpperLookUpBegin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x44);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnUpperLookUpEnd");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x48);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnUpperLookDown");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x4c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnLowerLookDownBegin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnLowerLookDownEnd");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x54);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnLowerLookUp");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnMovePredictiveRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x5c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnPullBackLineY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LockOnPullBackDistOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 100);
  }
  return 1;
}

// 00DAF840  FUN_00daf840  size=146  [callgraph]
undefined4 __thiscall FUN_00daf840(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != -1) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DelayAngXByControlFrame");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xec))(iVar1,param_1);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DefaultAngXMin");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 4);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DefaultAngXMax");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 8);
    }
  }
  return 1;
}

// 00DAF8E0  FUN_00daf8e0  size=396  [callgraph]
undefined4 __thiscall FUN_00daf8e0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != -1) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SearchRange");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c33e8);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 4,6);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FramePlayer");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 0x1c,4);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FrameEnemy");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 0x2c,4);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AutoLockOnViewNear");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x3c);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AutoLockOnViewFar");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x40);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AutoLockOnViewRate");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x44);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AutoLockOnViewLimit");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x48);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AutoLockOnViewFollowRate");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x4c);
    }
  }
  return 1;
}

// 00DAFB00  FUN_00dafb00  size=3193  [callgraph]
undefined4 __thiscall FUN_00dafb00(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SeneitiveVerticalMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SeneitiveVerticalMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SeneitiveHorizontalMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SeneitiveHorizontalMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterTime");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterAccRate0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterAccRate1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterTimeThresholdAngle");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterTimeOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPoleThresholdAngle");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPoleOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimPosX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimPosY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimPosZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimTargetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimTargetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x3c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimTargetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimPivotX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x44);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimPivotY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x48);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimPivotZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x4c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimNotMaxFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x54);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashAimNotMaxDistRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolPosX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x5c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolPosY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolPosZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 100);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolTargetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x68);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolTargetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x6c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolTargetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x70);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolPivotX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x74);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolPivotY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x78);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashPoolPivotZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x7c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirPosX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x80);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirPosY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x84);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirPosZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x88);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirTargetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x8c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirTargetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x90);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirTargetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x94);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirPivotX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x98);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirPivotY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x9c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirPivotZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xa0);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xa4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirNotMaxFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xa8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashWolfAirNotMaxDistRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xac);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPosX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xb0);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPosY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xb4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPosZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xb8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterTargetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xbc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterTargetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xc0);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterTargetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xc4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPivotX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 200);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPivotY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xcc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterPivotZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xd0);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xd4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterNotMaxFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xd8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SlashInterNotMaxDistRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xdc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DiveKillPosX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xe0);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DiveKillPosY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xe4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DiveKillPosZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xe8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DiveKillFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xec);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioPosX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xf0);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioPosY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xf4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioPosZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xf8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioTargetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0xfc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioTargetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x100);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioTargetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x104);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioPivotX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x108);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioPivotY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x10c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioPivotZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x110);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RadioFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x114);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FpsAngXMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x118);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FpsAngXMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x11c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FpsAngYRangeL");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x120);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FpsAngYRangeR");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x124);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FpsAngSpeed");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x128);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FpsAngFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 300);
  }
  return 1;
}

// 00DB0780  FUN_00db0780  size=381  [callgraph]
undefined4 __thiscall FUN_00db0780(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DirBaseObj");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosBaseObj");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016a3dd0);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Target");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c39ac);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c39a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseTime");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseAccRate0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseAccRate1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x2c);
  }
  return 1;
}

// 00DB0900  FUN_00db0900  size=1485  [callgraph]
undefined4 __thiscall FUN_00db0900(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iStack_28;
  char *pcStack_24;
  int local_20 [4];
  char *pcStack_10;
  
  uVar8 = 0;
  iVar6 = param_1 + 8;
  do {
    _sprintf_s((char *)local_20,0x20,"IncMotionId%02d",uVar8);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,local_20);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,iVar6 + -4);
    }
    _sprintf_s((char *)&iStack_28,0x20,"IncMotionNo%02d_Min",uVar8);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&iStack_28);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,iVar6);
    }
    _sprintf_s(&stack0xffffffd0,0x20,"IncMotionNo%02d_Max",uVar8);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&stack0xffffffd0);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,iVar6 + 4);
    }
    uVar8 = uVar8 + 1;
    iVar6 = iVar6 + 0xc;
  } while (uVar8 < 8);
  uVar8 = 0;
  iVar6 = param_1 + 0x6c;
  do {
    _sprintf_s((char *)local_20,0x20,"ExcMotionId%02d",uVar8);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,local_20);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,iVar6 + -4);
    }
    _sprintf_s((char *)&iStack_28,0x20,"ExcMotionNo%02d_Min",uVar8);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&iStack_28);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,iVar6);
    }
    _sprintf_s(&stack0xffffffd0,0x20,"ExcMotionNo%02d_Max",uVar8);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&stack0xffffffd0);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,iVar6 + 4);
    }
    uVar8 = uVar8 + 1;
    iVar6 = iVar6 + 0xc;
  } while (uVar8 < 8);
  uVar8 = 0;
  param_1 = param_1 + 0xce;
  do {
    _sprintf_s((char *)local_20,0x20,"IncPhaseNo%02d_Min",uVar8);
    iVar6 = (**(code **)(*param_2 + 0x9c))(param_3,local_20);
    if (iVar6 != -1) {
      (**(code **)(*param_2 + 0xdc))(iVar6,param_1 + -2);
    }
    _sprintf_s((char *)&iStack_28,0x20,"IncPhaseNo%02d_Max",uVar8);
    iVar6 = (**(code **)(*param_2 + 0x9c))(param_3,&iStack_28);
    if (iVar6 != -1) {
      (**(code **)(*param_2 + 0xdc))(iVar6,param_1);
    }
    uVar8 = uVar8 + 1;
    param_1 = param_1 + 0xc;
  } while (uVar8 < 4);
  pcVar10 = "IncMotionFlag";
  iVar6 = (**(code **)(*param_2 + 0x9c))(param_3,"IncMotionFlag");
  if (iVar6 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar6,unaff_EBP);
  }
  pcVar9 = "IncMotion";
  iVar1 = param_3;
  iVar6 = (**(code **)(*param_2 + 0x18))(param_3,"IncMotion");
  iVar7 = 0;
  iVar2 = (**(code **)(*param_2 + 0x10))(iVar6);
  if (0 < iVar2) {
    pcStack_10 = pcVar10 + 0xc;
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(iVar6,iVar7);
      iVar6 = (**(code **)(*param_2 + 0x9c))(uVar3,"ObjId");
      if (iVar6 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar6,local_20[0] + -8);
      }
      iVar6 = (**(code **)(*param_2 + 0x9c))(uVar3,"MotNoMin");
      if (iVar6 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar6,iStack_28 + -4);
      }
      iVar6 = (**(code **)(*param_2 + 0x9c))(uVar3,"MotNoMax");
      if (iVar6 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar6,pcStack_10);
      }
      pcStack_10 = pcStack_10 + 0xc;
      iVar7 = iVar7 + 1;
      iVar6 = unaff_EDI;
    } while (iVar7 < iVar2);
  }
  pcVar10 = "ExcMotionFlag";
  iVar6 = (**(code **)(*param_2 + 0x9c))(param_3,"ExcMotionFlag");
  if (iVar6 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar6,pcVar9 + 100);
  }
  pcVar9 = "ExcMotion";
  iVar6 = (**(code **)(*param_2 + 0x18))(param_3,"ExcMotion");
  iVar7 = 0;
  iVar2 = (**(code **)(*param_2 + 0x10))(iVar6);
  if (0 < iVar2) {
    pcStack_24 = pcVar10 + 0x70;
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(iVar6,iVar7);
      iVar4 = (**(code **)(*param_2 + 0x9c))(uVar3,"ObjId");
      iVar6 = iVar1;
      if (iVar4 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar4,unaff_EBP + -8);
        iVar6 = iVar1;
      }
      iVar1 = (**(code **)(*param_2 + 0x9c))(uVar3,"MotNoMin");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar1,unaff_EDI + -4);
      }
      iVar1 = (**(code **)(*param_2 + 0x9c))(uVar3,"MotNoMax");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar1,pcStack_24);
      }
      pcStack_24 = pcStack_24 + 0xc;
      iVar7 = iVar7 + 1;
      iVar1 = iVar6;
    } while (iVar7 < iVar2);
  }
  iVar6 = (**(code **)(*param_2 + 0x9c))(param_3,"IncPhaseFlag");
  if (iVar6 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar6,pcVar9 + 200);
  }
  pcVar10 = "IncPhase";
  uVar3 = (**(code **)(*param_2 + 0x18))(param_3,"IncPhase");
  iVar1 = 0;
  iVar6 = (**(code **)(*param_2 + 0x10))(uVar3);
  if (0 < iVar6) {
    do {
      uVar5 = (**(code **)(*param_2 + 0x14))(uVar3,iVar1);
      FUN_00daf120(param_2,uVar5);
      iVar1 = iVar1 + 1;
      param_3 = unaff_EBP;
    } while (iVar1 < iVar6);
  }
  pcVar9 = "IncAreaFlag";
  iVar6 = (**(code **)(*param_2 + 0x9c))(param_3,"IncAreaFlag");
  if (iVar6 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar6,pcVar10 + 0xfc);
  }
  pcVar10 = "IncArea";
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"IncArea");
  iVar7 = 0;
  iVar6 = iVar1;
  iVar2 = (**(code **)(*param_2 + 0x10))(iVar1);
  if (0 < iVar2) {
    pcVar9 = pcVar9 + 0x100;
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(iVar1,iVar7);
      iVar4 = (**(code **)(*param_2 + 0x9c))(uVar3,"AreaId");
      if (iVar4 != -1) {
        (**(code **)(*param_2 + 0xdc))(iVar4,pcVar9);
      }
      pcVar9 = pcVar9 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"IncSituationFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,pcVar10 + 0x104);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"IncSituation");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x114))(iVar1,iVar6 + 0x108,4);
  }
  return 1;
}

// 00DB0EE0  FUN_00db0ee0  size=2192  [callgraph]
undefined4 __thiscall FUN_00db0ee0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamFovy");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamDist");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseInFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x76);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseOutFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x78);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosOffsetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosOffsetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosOffsetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosOffsetEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x5e);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ViewOffsetEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x5e);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c3cc4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RotXFollow");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016b1e20);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x44);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RotYFollow");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x4c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RotYApplyMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RotYApplyMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x54);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RotXEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RotYEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x62);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ViewOffsetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ViewOffsetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ViewOffsetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FovyEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x5a);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DistEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x5c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PivotOffsetEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x5e);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngYEase");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x62);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ValueFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1 + 4,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DelayFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1 + 8,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ControlFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1 + 0xc,1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c39a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c33e8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ViewFollowH");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ViewFollowV");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PivotOffsetX");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PivotOffsetY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PivotOffsetZ");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c3ba8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXRange");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXFollow");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x3c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXDelayByControl");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c3b64);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x44);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngYRange");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x48);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngYFollow");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x4c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngYApplyMin");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngYApplyMax");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x54);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngXType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AngYType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 0x59);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EaseFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x10c))(iVar1,param_1 + 0x5a,7);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DelayFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x10c))(iVar1,param_1 + 0x68,7);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DefaultEaseIn");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x76);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DefaultEaseOut");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x78);
  }
  return 1;
}

// 00DB1770  FUN_00db1770  size=128  [callgraph]
undefined4 __thiscall FUN_00db1770(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016511c4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,param_1,0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1 + 0x14,1);
  }
  FUN_00db0900(param_2,param_3);
  FUN_00db0ee0(param_2,param_3);
  return 1;
}

// 00DB17F0  FUN_00db17f0  size=492  [callgraph]
void __fastcall FUN_00db17f0(undefined4 *param_1)

{
  float fVar1;
  
  *param_1 = 0xffffffff;
  FUN_00da3530();
  FUN_00da3530();
  FUN_00da3530();
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x3e4ccccd;
  param_1[0x61] = 0x3f800000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0x3e4ccccd;
  param_1[0x65] = 0x3f800000;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0x3e4ccccd;
  param_1[0x69] = 0x3f800000;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0x3e4ccccd;
  param_1[0x6d] = 0x3f800000;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0x3e4ccccd;
  param_1[0x71] = 0x3f800000;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0x3e4ccccd;
  param_1[0x75] = 0x3f800000;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0x3e4ccccd;
  param_1[0x79] = 0x3f800000;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0x42700000;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0x3fb33333;
  param_1[0x8d] = 0;
  param_1[0x8e] = 1;
  fVar1 = *(float *)(PTR_DAT_018bc3a8 + 4) * 0.017453292;
  param_1[0x91] = fVar1;
  param_1[0x93] = fVar1;
  param_1[0x8f] = fVar1;
  fVar1 = *(float *)(PTR_DAT_018bc3a8 + 8) * 0.017453292;
  param_1[0x92] = fVar1;
  param_1[0x94] = fVar1;
  param_1[0x90] = fVar1;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0x3fb33333;
  return;
}

// 00DB1A60  FUN_00db1a60  size=68  [callgraph]
undefined4 __fastcall FUN_00db1a60(int param_1)

{
  if (((*(float *)(param_1 + 0x220) < *(float *)(param_1 + 0x224) !=
        (*(float *)(param_1 + 0x220) == *(float *)(param_1 + 0x224))) &&
      ((*(uint *)(param_1 + 0xfc) & 0x10000000) == 0)) &&
     (((*(uint *)(param_1 + 0x80) & 0x10000000) == 0 ||
      (*(float *)(param_1 + 0x1a8) < *(float *)(param_1 + 0x1ac) !=
       (*(float *)(param_1 + 0x1a8) == *(float *)(param_1 + 0x1ac)))))) {
    return 0;
  }
  return 1;
}

// 00DB1AB0  FUN_00db1ab0  size=373  [callgraph]
float10 FUN_00db1ab0(int param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*param_2 & 0x10000000) == 0) goto switchD_00db1adb_default;
  switch((char)param_2[0x16]) {
  case '\0':
  case '\x04':
    fVar6 = (float10)(float)param_2[0xb] * (float10)-1.0 - (float10)*(float *)(param_1 + 0x360);
    goto LAB_00db1bb4;
  case '\x01':
    if (*(int *)(param_1 + 0x6f0) != 0) {
      fVar1 = *(float *)(param_1 + 0x470);
      fVar2 = *(float *)(param_1 + 0x474);
      fVar3 = *(float *)(param_1 + 0x478);
      FUN_00da91c0(&local_20);
      fVar6 = (float10)local_20 - (float10)fVar1;
      fVar7 = (float10)local_18 - (float10)fVar3;
      fVar6 = (float10)fpatan((float10)local_1c - (float10)fVar2,SQRT(fVar7 * fVar7 + fVar6 * fVar6)
                             );
      fVar6 = (fVar6 + (float10)(float)param_2[0xb]) * (float10)-1.0 -
              (float10)*(float *)(param_1 + 0x360);
      goto LAB_00db1bb4;
    }
    break;
  case '\x02':
    if (*(int *)(param_1 + 0x6f0) != 0) {
      iVar4 = *(int *)(param_1 + 0x6f8);
      pfVar5 = (float *)FUN_00da85d0();
      fVar7 = (float10)*(float *)(iVar4 + 0x50) - (float10)*pfVar5;
      fVar6 = (float10)*(float *)(iVar4 + 0x58) - (float10)pfVar5[2];
      fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x54) - (float10)pfVar5[1],
                              SQRT(fVar6 * fVar6 + fVar7 * fVar7));
      fVar6 = ((float10)(float)param_2[0xb] - fVar6) - (float10)*(float *)(param_1 + 0x360);
      goto LAB_00db1bb4;
    }
    break;
  case '\x03':
    fVar6 = (float10)0;
LAB_00db1bb4:
    if (fVar6 <= (float10)(float)param_2[0xc]) {
      if (-(float10)(float)param_2[0xc] <= fVar6) {
        fVar6 = (float10)0;
      }
      else {
        fVar6 = fVar6 + (float10)(float)param_2[0xc];
      }
    }
    else {
      fVar6 = fVar6 - (float10)(float)param_2[0xc];
    }
    fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x360);
    fVar7 = (float10)(float)param_2[0xe];
    if ((fVar7 <= fVar6) && (fVar7 = fVar6, (float10)(float)param_2[0xf] < fVar6)) {
      return (float10)(float)param_2[0xf] - (float10)*(float *)(param_1 + 0x360);
    }
    return fVar7 - (float10)*(float *)(param_1 + 0x360);
  }
switchD_00db1adb_default:
  return (float10)0;
}

// 00DB1C80  FUN_00db1c80  size=255  [callgraph]
undefined4 FUN_00db1c80(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_30;
  float local_20 [2];
  float local_18;
  
  switch(*(undefined1 *)(param_3 + 0x59)) {
  case 0:
    iVar3 = FUN_00da8670();
    *param_1 = *(float *)(iVar3 + 4);
    return 1;
  case 1:
    if (*(int *)(param_2 + 0x6f0) != 0) {
      local_30 = *(float *)(param_2 + 0x460);
      fVar1 = *(float *)(param_2 + 0x468);
LAB_00db1ce6:
      FUN_00da91c0(local_20);
      fVar4 = (float10)fpatan((float10)local_20[0] - (float10)local_30,
                              (float10)local_18 - (float10)fVar1);
      *param_1 = (float)fVar4;
      return 1;
    }
    break;
  case 2:
    if (*(int *)(param_2 + 0x6f0) != 0) {
      pfVar2 = (float *)FUN_00da85d0();
      local_30 = *pfVar2;
      fVar1 = pfVar2[2];
      goto LAB_00db1ce6;
    }
    break;
  case 3:
    iVar3 = FUN_00da6690();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c800();
      *param_1 = *(float *)(iVar3 + 0x94);
      return 1;
    }
    break;
  case 4:
    *param_1 = 0.0;
    return 1;
  }
  return 0;
}

// 00DB1DB0  FUN_00db1db0  size=20  [callgraph]
void __fastcall FUN_00db1db0(int param_1)

{
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00DB1E20  FUN_00db1e20  size=246  [callgraph]
int * FUN_00db1e20(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fVar1;
  int *piVar2;
  float local_3c;
  int local_38;
  int *local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_3c = 0.0;
  local_34 = (int *)0x0;
  piVar2 = &DAT_01dc5f60;
  local_38 = 0x10;
  do {
    if ((*(byte *)(piVar2 + 1) & 1) != 0) {
      (**(code **)(*piVar2 + 0xc))(&local_30,&local_20,param_3,param_4,param_5);
      fVar1 = fStack_18 * fStack_18 + local_20 * local_20 + fStack_1c * fStack_1c +
              fStack_28 * fStack_28 + fStack_2c * fStack_2c + local_30 * local_30;
      if (local_3c < fVar1) {
        *param_1 = local_30;
        param_1[1] = fStack_2c;
        param_1[2] = fStack_28;
        param_1[3] = fStack_24;
        *param_2 = local_20;
        param_2[1] = fStack_1c;
        param_2[2] = fStack_18;
        param_2[3] = fStack_14;
        local_3c = fVar1;
        local_34 = piVar2;
      }
    }
    piVar2 = piVar2 + 0x11;
    local_38 = local_38 + -1;
  } while (local_38 != 0);
  return local_34;
}

// 00DB1F20  FUN_00db1f20  size=71  [callgraph]
int FUN_00db1f20(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if ((*(byte *)((int)&DAT_01dc5f64 + uVar2) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    if ((*(byte *)((int)&DAT_01dc5fa8 + uVar2) & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    if (((&DAT_01dc5fec)[uVar2] & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    if (((&DAT_01dc6030)[uVar2] & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 0x110;
  } while (uVar2 < 0x440);
  return iVar1;
}

// 00DB22D0  Camera::StateNode::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateNode::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DB22F0  FUN_00db22f0  size=128  [between]
void __fastcall FUN_00db22f0(int param_1)

{
  FUN_00db17f0();
  _memset((void *)(param_1 + 0x270),0,0xc0);
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x42f00000;
  return;
}

// 00DB2370  FUN_00db2370  size=152  [between]
undefined4 FUN_00db2370(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_018b9174 != 0xc75) && (DAT_018b9174 != 0xd75)) {
    if (DAT_018b9174 == 0xd60) {
      return 1;
    }
    if ((DAT_01bea094 & 0x20000) == 0) {
      if (*(int *)(param_1 + 0x6f0) == 1) {
        return 1;
      }
      uVar3 = 0x41700000;
      uVar1 = FUN_00da5f20(0x41700000);
      iVar2 = FUN_00c4d9a0(uVar1,uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x6f0) == 0) && (iVar2 = FUN_00da6120(), iVar2 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00DB2410  FUN_00db2410  size=87  [between]
bool FUN_00db2410(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(PTR_DAT_018bc3a8 + 0x4c);
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920(uVar3);
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00db244b;
  }
  iVar2 = FUN_00a81330();
LAB_00db244b:
  iVar2 = FUN_00c4d9a0(iVar2,uVar3);
  return iVar2 != 0;
}

// 00DB24D0  FUN_00db24d0  size=358  [between]
void FUN_00db24d0(int param_1)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  undefined1 *puVar3;
  float fVar4;
  float afStack_ac [3];
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined1 local_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 local_50 [76];
  
  local_a0 = 0;
  local_9c = 0;
  local_98 = *(float *)(param_1 + 0x4f4) * -1.0;
  thunk_FUN_00ddc1d0(local_50,param_1 + 0x360,5);
  fVar4 = (float)(param_1 + 0x390);
  puVar3 = local_50;
  D3DXMatrixMultiply(local_90);
  D3DXVec3TransformNormal(afStack_ac,afStack_ac,&local_9c);
  fVar4 = *(float *)(param_1 + 0x4c4) + fStack_74 + fVar4;
  fVar1 = (fVar4 - *(float *)(param_1 + 0x4b4)) * 0.2 + *(float *)(param_1 + 0x4b4);
  if (fVar1 - fVar4 <= 1.7) {
    if (fVar1 - fVar4 < -1.7) {
      fVar1 = fVar4 - 1.7;
    }
  }
  else {
    fVar1 = fVar4 + 1.7;
  }
  fVar2 = 1.0;
  if (0.0 < *(float *)(param_1 + 0x7c0)) {
    fVar2 = (120.0 - *(float *)(param_1 + 0x7c0)) * 0.008333334;
  }
  *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4c0) + fStack_78 + (float)puVar3;
  *(float *)(param_1 + 0x4b4) = (1.0 - fVar2) * fVar4 + fVar2 * fVar1;
  *(float *)(param_1 + 0x4b8) = fStack_70 + unaff_ESI + *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + afStack_ac[0];
  fVar4 = *(float *)(param_1 + 0x7c0) - 1.0;
  *(float *)(param_1 + 0x7c0) = fVar4;
  if (0.0 <= fVar4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  return;
}

// 00DB2640  FUN_00db2640  size=244  [between]
void __fastcall FUN_00db2640(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x50) = 1;
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    iVar5 = FUN_00a7c8a0();
    if (iVar5 != 0) {
      iVar6 = FUN_00a12210(*(undefined4 *)(param_1 + 0x8c));
      if ((iVar6 == 0) || (*(int *)(param_1 + 0x8c) == -1)) {
        fVar1 = *(float *)(iVar5 + 0x40);
        fVar2 = *(float *)(iVar5 + 0x44);
        fVar3 = *(float *)(iVar5 + 0x48);
        fVar4 = *(float *)(iVar5 + 0x4c);
      }
      else {
        fVar1 = *(float *)(iVar6 + 0x40);
        fVar2 = *(float *)(iVar6 + 0x44);
        fVar3 = *(float *)(iVar6 + 0x48);
        fVar4 = *(float *)(iVar6 + 0x4c);
      }
      *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x40) - fVar1;
      *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x44) - fVar2;
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x48) - fVar3;
      *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x4c) - fVar4;
    }
  }
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    iVar5 = FUN_00a7c8a0();
    if (iVar5 != 0) {
      iVar6 = FUN_00a12210(*(undefined4 *)(param_1 + 0x88));
      if ((iVar6 == 0) || (*(int *)(param_1 + 0x88) == -1)) {
        fVar1 = *(float *)(iVar5 + 0x40);
        fVar2 = *(float *)(iVar5 + 0x44);
        fVar3 = *(float *)(iVar5 + 0x48);
        fVar4 = *(float *)(iVar5 + 0x4c);
      }
      else {
        fVar1 = *(float *)(iVar6 + 0x40);
        fVar2 = *(float *)(iVar6 + 0x44);
        fVar3 = *(float *)(iVar6 + 0x48);
        fVar4 = *(float *)(iVar6 + 0x4c);
      }
      *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x30) - fVar1;
      *(float *)(param_1 + 100) = *(float *)(param_1 + 0x34) - fVar2;
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x38) - fVar3;
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x3c) - fVar4;
    }
  }
  return;
}

// 00DB2740  Camera::StateBattleFixed::vf0C  size=57  [class]
void Camera::StateBattleFixed::vf0C(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int extraout_ECX;
  
  if (param_3 != (int *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x20))();
    if (*(int *)(iVar1 + 8) != 2) {
      FUN_00da8dd0();
      *(undefined4 *)(extraout_ECX + 0x4f8) = 0x3f5f66f3;
      *(undefined4 *)(extraout_ECX + 0x770) = 0x40200000;
    }
  }
  return;
}

// 00DB2780  Camera::StateBattleFixed::vf14  size=45  [class]
void Camera::StateBattleFixed::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 0x37c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  return;
}

// 00DB27B0  FUN_00db27b0  size=253  [between]
undefined4 * __thiscall FUN_00db27b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00da4880(param_2 + 4);
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  FUN_00da01f0(param_2 + 0x4c);
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = param_2[0x67];
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = param_2[0x69];
  return param_1;
}

// 00DB28B0  FUN_00db28b0  size=413  [between]
void __fastcall FUN_00db28b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70 [4];
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_60 = *(float *)(param_1 + 0x100);
  local_5c = *(undefined4 *)(param_1 + 0x104);
  local_58 = *(undefined4 *)(param_1 + 0x108);
  local_54 = *(undefined4 *)(param_1 + 0x10c);
  fVar1 = *(float *)(param_1 + 0x11c);
  if ((local_60 < fVar1) ||
     (fVar1 = *(float *)(PTR_DAT_018bc3a8 + 8) * 0.017453292,
     *(float *)(PTR_DAT_018bc3a8 + 8) * 0.017453292 < local_60)) {
    local_60 = fVar1;
  }
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_70[2] = -*(float *)(param_1 + 0xe0);
  FUN_00ddc1d0(local_50,&local_60,5);
  D3DXVec3TransformNormal(local_70,local_70,local_50);
  *(float *)(param_1 + 0x130) = fStack_7c + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0xc4) + fStack_78;
  *(float *)(param_1 + 0x138) = *(float *)(param_1 + 200) + fStack_74;
  *(float *)(param_1 + 0x13c) = local_70[0] + *(float *)(param_1 + 0xcc);
  *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0x148) = *(float *)(param_1 + 200);
  *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(float *)(param_1 + 0x15c) = local_60;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(float *)(param_1 + 0x16c) = local_60;
  fVar1 = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x130);
  fVar3 = *(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x134);
  fVar2 = *(float *)(param_1 + 0x148) - *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x174) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  *(undefined4 *)(param_1 + 0x178) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return;
}

// 00DB2A50  FUN_00db2a50  size=77  [between]
void __fastcall FUN_00db2a50(int param_1)

{
  *(undefined4 *)(param_1 + 0x180) = 0x41700000;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f000000;
  *(undefined4 *)(param_1 + 400) = 0x41200000;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f000000;
  return;
}

// 00DB2AA0  FUN_00db2aa0  size=213  [between]
void __thiscall FUN_00db2aa0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db2ac8:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00db2ae2;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00db2ac8;
  }
  iVar3 = FUN_00a7c8a0();
LAB_00db2ae2:
  iVar1 = *(int *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar3 + 0x48);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = FUN_00daefb0(*(undefined4 *)(iVar1 + 0x4b0));
  *(int *)(param_1 + 0xb0) = iVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  return;
}

// 00DB2B80  FUN_00db2b80  size=542  [between]
void __thiscall FUN_00db2b80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db2bb0:
    iVar10 = FUN_00a81330();
    if (iVar10 == 0) {
      iVar10 = 0;
      goto LAB_00db2bca;
    }
  }
  else {
    piVar9 = (int *)FUN_00c13920();
    iVar10 = (**(code **)(*piVar9 + 0x28))(1);
    if (iVar10 == 0) goto LAB_00db2bb0;
  }
  iVar10 = FUN_00a7c8a0();
LAB_00db2bca:
  iVar8 = *(int *)(param_2 + 0x6f8);
  fVar1 = *(float *)(iVar10 + 0x44);
  fVar2 = *(float *)(iVar10 + 0x48);
  fVar3 = *(float *)(iVar10 + 0x4c);
  fVar4 = *(float *)(iVar8 + 0x40);
  fVar5 = *(float *)(iVar8 + 0x44);
  fVar6 = *(float *)(iVar8 + 0x48);
  fVar7 = *(float *)(iVar8 + 0x4c);
  if (iVar8 == *(int *)(param_1 + 0xb0)) {
    *(float *)(param_1 + 0x90) =
         *(float *)(param_1 + 0x90) * 0.8 +
         (*(float *)(iVar10 + 0x40) - *(float *)(param_1 + 0x70)) * 0.2;
    *(float *)(param_1 + 0x94) =
         *(float *)(param_1 + 0x94) * 0.8 + (fVar1 - *(float *)(param_1 + 0x74)) * 0.2;
    *(float *)(param_1 + 0x98) =
         *(float *)(param_1 + 0x98) * 0.8 + (fVar2 - *(float *)(param_1 + 0x78)) * 0.2;
    *(float *)(param_1 + 0x9c) =
         *(float *)(param_1 + 0x9c) * 0.8 + (fVar3 - *(float *)(param_1 + 0x7c)) * 0.2;
    *(float *)(param_1 + 0xa0) =
         *(float *)(param_1 + 0xa0) * 0.8 + (fVar4 - *(float *)(param_1 + 0x80)) * 0.2;
    *(float *)(param_1 + 0xa4) =
         *(float *)(param_1 + 0xa4) * 0.8 + (fVar5 - *(float *)(param_1 + 0x84)) * 0.2;
    *(float *)(param_1 + 0xa8) =
         (fVar6 - *(float *)(param_1 + 0x88)) * 0.2 + *(float *)(param_1 + 0xa8) * 0.8;
    *(float *)(param_1 + 0xac) =
         *(float *)(param_1 + 0xac) * 0.8 + (fVar7 - *(float *)(param_1 + 0x8c)) * 0.2;
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  *(int *)(param_1 + 0xb0) = iVar8;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar10 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar10 + 0x44);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar10 + 0x48);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar10 + 0x4c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar8 + 0x40);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar8 + 0x44);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar8 + 0x48);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar8 + 0x4c);
  return;
}

// 00DB2DA0  Camera::StateSubWeaponAiming::vf08  size=101  [class]
undefined4 Camera::StateSubWeaponAiming::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x378) == 0) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x378) + 0x378))();
  if ((iVar2 == 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0x378) + 0x374))(), iVar2 == 0)) {
    return 0;
  }
  return 1;
}

// 00DB2E10  Camera::StateSubWeaponAiming::vf0C  size=245  [class]
void __thiscall Camera::StateSubWeaponAiming::vf0C(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_24;
  undefined4 uStack_18;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (*(int *)(iVar4 + 0x4b0) == 0x11500) {
        bVar2 = true;
        uVar1 = 0x3f9c28f6;
        goto LAB_00db2e72;
      }
    }
  }
  bVar2 = false;
  uVar1 = 0x3fc00000;
LAB_00db2e72:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uStack_18;
  if (bVar2) {
    uStack_24 = 0xbf266666;
    uVar1 = 0x3faf5c29;
  }
  else {
    uStack_24 = 0xbf000000;
    uVar1 = 0x3f000000;
  }
  *(undefined4 *)(param_1 + 0x20) = uStack_24;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uStack_18;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * -1.0;
  *(undefined4 *)(param_2 + 0x4f8) = 0x3f060a92;
  return;
}

// 00DB2F10  Camera::StateFps::vf0C  size=116  [class]
void __fastcall Camera::StateFps::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db2f3a:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00db2f58;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00db2f3a;
  }
  iVar2 = FUN_00a7c8a0();
LAB_00db2f58:
  *(undefined4 *)(param_1 + 4) = 0;
  fVar3 = (float10)FUN_00ddba30(*(float *)(iVar2 + 0x94) + 3.1415927);
  *(float *)(param_1 + 8) = (float)fVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00DB2FF0  Camera::StatePartsFollow::vf14  size=80  [class]
void Camera::StatePartsFollow::vf14(int param_1)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = local_14;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49c) = local_14;
  return;
}

// 00DB3040  Camera::StateRadio::vf0C  size=15  [class]
void __fastcall Camera::StateRadio::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00DB3050  Camera::StateReady::vf08  size=75  [class]
undefined4 Camera::StateReady::vf08(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00db3083;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return 1;
  }
LAB_00db3083:
  iVar2 = FUN_00a7c8a0();
  if (iVar2 == 0) {
    return 1;
  }
  return 0;
}

// 00DB30A0  Camera::StateReady::vf14  size=265  [class]
void Camera::StateReady::vf14(int param_1)

{
  float10 fVar1;
  int iVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_14;
  
  FUN_00db17f0();
  local_24 = *(undefined4 *)(param_1 + 0x36c);
  local_30 = *(float *)(param_1 + 0x360) * 57.29578 * -1.0;
  local_2c = *(float *)(param_1 + 0x364) * 57.29578;
  local_28 = *(float *)(param_1 + 0x368) * 57.29578;
  FUN_00da8b50();
  FUN_00da8ea0();
  iVar2 = FUN_00d46200(&local_30);
  if (iVar2 != 0) {
    local_20 = local_30 * -1.0 * 0.017453292;
    fVar3 = (float10)FUN_00ddba30(local_2c * 0.017453292 + 3.1415927);
    fVar1 = (float10)0;
    if (((fVar1 != (float10)local_20) || (fVar1 != fVar3)) ||
       ((float10)local_28 * (float10)0.017453292 != fVar1)) {
      *(float *)(param_1 + 0x360) = local_20;
      *(float *)(param_1 + 0x364) = (float)fVar3;
      *(float *)(param_1 + 0x368) = (float)((float10)local_28 * (float10)0.017453292);
      *(undefined4 *)(param_1 + 0x36c) = local_14;
      return;
    }
  }
  return;
}

// 00DB31B0  Camera::StateUniqueSituation::vf0C  size=92  [class]
void Camera::StateUniqueSituation::vf0C(int param_1)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = local_14;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49c) = local_14;
  return;
}

// 00DB3210  Camera::StateDiveKill::vf08  size=72  [class]
undefined4 Camera::StateDiveKill::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x378) == 0) {
    return 0;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x378) + 0x37c))();
  return uVar3;
}

// 00DB3260  Camera::StateDiveKill::vf0C  size=440  [class]
void __thiscall Camera::StateDiveKill::vf0C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db328a:
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) goto LAB_00db3299;
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00db328a;
LAB_00db3299:
    FUN_00a7c8a0();
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db32d0:
    uVar3 = 0;
    if (*(int *)(param_2 + 0x378) != 0) {
      uVar3 = FUN_00a81330();
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00db32d0;
    uVar3 = 0;
  }
  FUN_00a7c970(uVar3);
  *(undefined4 *)(param_1 + 0x20) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x42700000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0xbfe66666;
  FUN_00a81330();
  iVar2 = FUN_00a7c800();
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0x4c);
  FUN_00a92f90();
  uVar3 = FUN_00e36300(0);
  Animation::MotReader(uVar3);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_00da01f0(param_2 + 0x460);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db33b7:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00db33cd;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00db33b7;
  }
  iVar2 = FUN_00a7c800();
LAB_00db33cd:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}

// 00DB3420  Camera::StateDiveKill::vf14  size=152  [class]
void __thiscall Camera::StateDiveKill::vf14(int param_1,int param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_2 + 0x4e0) = 0;
  *(undefined4 *)(param_2 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x4e8) = 0;
  *(undefined4 *)(param_2 + 0x4ec) = local_14;
  *(undefined4 *)(param_2 + 0x490) = 0;
  *(undefined4 *)(param_2 + 0x498) = 0;
  *(undefined4 *)(param_2 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x49c) = local_14;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0x3f800000;
  FUN_00de6060(&local_20);
  local_24 = 0;
  local_28 = 0;
  thunk_FUN_00dde510(&local_24,&local_28,param_1 + 0x40,param_1 + 0x30);
  return;
}

// 00DB34C0  FUN_00db34c0  size=124  [between]
bool FUN_00db34c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((DAT_018b9174 == 0x470) && (iVar1 = FUN_00d45a70(&DAT_01641f14), iVar1 != 0)) {
    if ((DAT_01bea094 & 0x20000) != 0) {
      piVar2 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar2 + 0x28))(1);
      if (iVar1 != 0) {
        return false;
      }
    }
    if ((*(int *)(param_1 + 0x378) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
      iVar1 = FUN_00a7c800();
      return *(int *)(iVar1 + 0x4b0) == 0x20120;
    }
  }
  return false;
}

// 00DB3540  FUN_00db3540  size=380  [between]
void __thiscall FUN_00db3540(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_14;
  
  fVar2 = *(float *)(param_2 + 0x4c0);
  fVar3 = *(float *)(param_2 + 0x4c4);
  fVar4 = *(float *)(param_2 + 0x4c8);
  uVar5 = *(undefined4 *)(param_2 + 0x4cc);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db3598:
    iVar12 = FUN_00a81330();
    if (iVar12 == 0) {
      iVar12 = 0;
      goto LAB_00db35b2;
    }
  }
  else {
    piVar11 = (int *)FUN_00c13920();
    iVar12 = (**(code **)(*piVar11 + 0x28))(1);
    if (iVar12 == 0) goto LAB_00db3598;
  }
  iVar12 = FUN_00a7c800();
LAB_00db35b2:
  fVar10 = *(float *)(iVar12 + 0x44) + 1.4;
  fVar9 = *(float *)(iVar12 + 0x40) - fVar2;
  fVar6 = fVar10 - fVar3;
  fVar7 = *(float *)(iVar12 + 0x48) - fVar4;
  if (0.01 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar9 * fVar9)) {
    fVar6 = *(float *)(param_3 + 0x1c);
    fVar2 = (1.0 - fVar6) * fVar2 + fVar6 * *(float *)(iVar12 + 0x40);
    fVar3 = fVar10 * *(float *)(param_3 + 0x20) + (1.0 - *(float *)(param_3 + 0x20)) * fVar3;
    fVar4 = (1.0 - fVar6) * fVar4 + *(float *)(iVar12 + 0x48) * fVar6;
    uVar5 = uStack_14;
  }
  fVar6 = *(float *)(param_1 + 0xc);
  pfVar1 = (float *)(param_2 + 0x4d0);
  fVar7 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x4c0) = fVar2;
  *(float *)(param_2 + 0x4c4) = fVar3;
  *(float *)(param_2 + 0x4c8) = fVar4;
  *(undefined4 *)(param_2 + 0x4cc) = uVar5;
  uVar5 = *(undefined4 *)(param_3 + 0x28);
  uVar8 = *(undefined4 *)(param_3 + 0x2c);
  *pfVar1 = *(float *)(param_3 + 0x24);
  *(undefined4 *)(param_2 + 0x4d4) = uVar5;
  *(undefined4 *)(param_2 + 0x4d8) = uVar8;
  *(undefined4 *)(param_2 + 0x4dc) = 0x3f800000;
  *pfVar1 = (1.0 - fVar6) * *pfVar1 + fVar7 * fVar6;
  FUN_00da5c80(pfVar1);
  return;
}

// 00DB36C0  FUN_00db36c0  size=358  [between]
void FUN_00db36c0(int param_1)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  undefined1 *puVar3;
  float fVar4;
  float afStack_ac [3];
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined1 local_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 local_50 [76];
  
  local_a0 = 0;
  local_9c = 0;
  local_98 = *(float *)(param_1 + 0x4f4) * -1.0;
  thunk_FUN_00ddc1d0(local_50,param_1 + 0x360,5);
  fVar4 = (float)(param_1 + 0x390);
  puVar3 = local_50;
  D3DXMatrixMultiply(local_90);
  D3DXVec3TransformNormal(afStack_ac,afStack_ac,&local_9c);
  fVar4 = *(float *)(param_1 + 0x4c4) + fStack_74 + fVar4;
  fVar1 = (fVar4 - *(float *)(param_1 + 0x4b4)) * 0.2 + *(float *)(param_1 + 0x4b4);
  if (fVar1 - fVar4 <= 1.7) {
    if (fVar1 - fVar4 < -1.7) {
      fVar1 = fVar4 - 1.7;
    }
  }
  else {
    fVar1 = fVar4 + 1.7;
  }
  fVar2 = 1.0;
  if (0.0 < *(float *)(param_1 + 0x7c0)) {
    fVar2 = (120.0 - *(float *)(param_1 + 0x7c0)) * 0.008333334;
  }
  *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4c0) + fStack_78 + (float)puVar3;
  *(float *)(param_1 + 0x4b4) = (1.0 - fVar2) * fVar4 + fVar2 * fVar1;
  *(float *)(param_1 + 0x4b8) = fStack_70 + unaff_ESI + *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + afStack_ac[0];
  fVar4 = *(float *)(param_1 + 0x7c0) - 1.0;
  *(float *)(param_1 + 0x7c0) = fVar4;
  if (0.0 <= fVar4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  return;
}

// 00DB3830  FUN_00db3830  size=154  [between]
void __thiscall FUN_00db3830(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00db387e;
  }
  if ((*(int *)(param_2 + 0x378) != 0) && (*(int *)(*(int *)(param_2 + 0x378) + 0x3df0) == 5)) {
    *(undefined4 *)(param_1 + 4) = 3;
    return;
  }
LAB_00db387e:
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return;
    }
  }
  if (((*(int *)(param_2 + 0x378) != 0) && (iVar2 = FUN_00b8c0b0(), iVar2 != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 0x894);
  }
  return;
}

// 00DB3920  FUN_00db3920  size=221  [between]
undefined4 FUN_00db3920(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1) {
  case 0:
    uVar3 = FUN_00da87b0();
    return uVar3;
  case 1:
    break;
  case 2:
    if ((DAT_01bea094 & 0x20000) != 0) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(1);
      if (iVar2 != 0) goto LAB_00db39aa;
    }
    if (*(int *)(param_2 + 0x378) != 0) {
      FUN_00b8c100();
      uVar3 = FUN_00a7c8a0();
      return uVar3;
    }
LAB_00db39aa:
    uVar3 = FUN_00a7c8a0();
    return uVar3;
  case 3:
    FUN_00da6690();
    FUN_00a7c8a0();
    uVar3 = FUN_00a12210(0x720);
    return uVar3;
  default:
    return 0;
  }
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00db3977;
  }
  if (*(int *)(param_2 + 0x378) != 0) {
    FUN_00b8c0b0();
  }
LAB_00db3977:
  FUN_00a7c8a0();
  uVar3 = FUN_00a12210(0);
  return uVar3;
}

// 00DB3A10  Camera::StateSlashingNormal::vf08  size=72  [class]
undefined4 Camera::StateSlashingNormal::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x378) == 0) {
    return 0;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x378) + 0x32c))();
  return uVar3;
}

// 00DB3A60  Camera::StateSlashingTarget::vf08  size=68  [class]
undefined4 Camera::StateSlashingTarget::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  if ((*(int *)(param_1 + 0x378) != 0) && (*(int *)(*(int *)(param_1 + 0x378) + 0x40c8) == 0xc)) {
    return 1;
  }
  return 0;
}

// 00DB3AB0  FUN_00db3ab0  size=210  [between]
bool FUN_00db3ab0(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db3ad0:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) goto LAB_00db3aee;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00db3ad0;
  }
  FUN_00a7c8a0();
LAB_00db3aee:
  FUN_00a92f90();
  pbVar4 = (byte *)FUN_00e366b0(0);
  pbVar6 = &DAT_016c3d74;
  pbVar5 = pbVar4;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00db3b30:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00db3b35;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00db3b30;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00db3b35:
  if (iVar3 == 0) {
    return true;
  }
  pbVar5 = &DAT_016c3d6c;
  while( true ) {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar7 == (uint)(bVar7 != 0);
}

// 00DB3B90  FUN_00db3b90  size=228  [between]
float * FUN_00db3b90(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db3bbb:
    iVar7 = FUN_00a81330();
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_00db3bda;
    }
  }
  else {
    piVar6 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar6 + 0x28))(1);
    if (iVar7 == 0) goto LAB_00db3bbb;
  }
  iVar7 = FUN_00a7c8a0();
LAB_00db3bda:
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  iVar8 = FUN_00a12290(5);
  if (iVar8 == 0) {
    *param_1 = *(float *)(iVar7 + 0x40);
    param_1[1] = *(float *)(iVar7 + 0x44);
    param_1[2] = *(float *)(iVar7 + 0x48);
    fVar5 = *(float *)(iVar7 + 0x4c);
  }
  else {
    *param_1 = *(float *)(iVar8 + 0x40);
    param_1[1] = *(float *)(iVar8 + 0x44);
    param_1[2] = *(float *)(iVar8 + 0x48);
    fVar5 = *(float *)(iVar8 + 0x4c);
  }
  param_1[3] = fVar5;
  *param_1 = *param_1 + fVar1;
  param_1[1] = param_1[1] + fVar2;
  param_1[2] = param_1[2] + fVar3;
  param_1[3] = param_1[3] + fVar4;
  return param_1;
}

// 00DB3C80  FUN_00db3c80  size=229  [between]
float * FUN_00db3c80(float *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db3cab:
    iVar7 = FUN_00a81330();
    if (iVar7 == 0) {
      iVar7 = 0;
      goto LAB_00db3cca;
    }
  }
  else {
    piVar6 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar6 + 0x28))(1);
    if (iVar7 == 0) goto LAB_00db3cab;
  }
  iVar7 = FUN_00a7c8a0();
LAB_00db3cca:
  fVar1 = *(float *)(param_3 + 0x10);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x18);
  fVar4 = *(float *)(param_3 + 0x1c);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  iVar8 = FUN_00a12290(5);
  if (iVar8 == 0) {
    *param_1 = *(float *)(iVar7 + 0x40);
    param_1[1] = *(float *)(iVar7 + 0x44);
    param_1[2] = *(float *)(iVar7 + 0x48);
    fVar5 = *(float *)(iVar7 + 0x4c);
  }
  else {
    *param_1 = *(float *)(iVar8 + 0x40);
    param_1[1] = *(float *)(iVar8 + 0x44);
    param_1[2] = *(float *)(iVar8 + 0x48);
    fVar5 = *(float *)(iVar8 + 0x4c);
  }
  param_1[3] = fVar5;
  *param_1 = *param_1 + fVar1;
  param_1[1] = fVar2 + param_1[1];
  param_1[2] = param_1[2] + fVar3;
  param_1[3] = fVar4 + param_1[3];
  return param_1;
}

// 00DB3D70  FUN_00db3d70  size=270  [between]
void __thiscall FUN_00db3d70(int param_1,float *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  FUN_00da01f0(param_3 + 0x460);
  fVar2 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28);
  fVar5 = param_2[4] - *param_2;
  fVar4 = param_2[6] - param_2[2];
  fVar6 = (float10)FUN_00ddbb50((fVar5 * fVar2 + fVar4 * fVar3) /
                                (SQRT(fVar3 * fVar3 + fVar2 * fVar2) *
                                SQRT(fVar4 * fVar4 + fVar5 * fVar5)));
  fVar7 = (float10)*(float *)(param_4 + 0x24);
  fVar6 = ABS(fVar6);
  if ((float10)*(float *)(param_4 + 0x28) < fVar6) {
    fVar7 = (fVar6 - (float10)*(float *)(param_4 + 0x28)) * (float10)57.29578 *
            (float10)*(float *)(param_4 + 0x2c) + fVar7;
  }
  fVar8 = (float10)0.5;
  if ((float10)*(float *)(param_4 + 0x30) < fVar6) {
    fVar8 = fVar8 + (float10)*(float *)(param_4 + 0x34) * (float10)0.01 *
                    (fVar6 - (float10)*(float *)(param_4 + 0x30)) * (float10)57.29578;
    if ((float10)1 < fVar8) {
      fVar8 = (float10)1;
    }
  }
  uVar1 = *(undefined4 *)(param_4 + 0x3c);
  fVar2 = *(float *)(param_4 + 0x38);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 4) = (float)fVar7;
  *(undefined4 *)(param_1 + 8) = 0;
  *(float *)(param_1 + 0xc) = fVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(float *)(param_1 + 0x14) = (float)fVar8;
  return;
}

// 00DB3E80  FUN_00db3e80  size=68  [between]
void __thiscall FUN_00db3e80(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  if (param_3 != 0) {
    FUN_00da8900(param_1 + 0x60);
  }
  return;
}

// 00DB3ED0  FUN_00db3ed0  size=67  [between]
void __thiscall FUN_00db3ed0(int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x54) = 1;
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(float *)(param_1 + 0xb8) = param_3;
  *(undefined4 *)(param_1 + 0xbc) = param_4;
  return;
}

// 00DB3F20  FUN_00db3f20  size=68  [between]
void __fastcall FUN_00db3f20(int param_1)

{
  int extraout_EDX;
  
  FUN_00da8900(param_1 + 0x60);
  if (*(int *)(extraout_EDX + 0x54) == 0) {
    *(undefined4 *)(extraout_EDX + 0xb0) = 0x42200000;
    *(undefined4 *)(extraout_EDX + 0xb4) = 0;
    *(undefined4 *)(extraout_EDX + 0xb8) = 0x3fb33333;
    *(undefined4 *)(extraout_EDX + 0xbc) = 0x3f800000;
  }
  *(undefined4 *)(extraout_EDX + 0x54) = 0;
  return;
}

// 00DB3F70  FUN_00db3f70  size=112  [between]
void __thiscall FUN_00db3f70(undefined4 *param_1,int param_2)

{
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = *(undefined4 *)(param_2 + 0x14);
  param_1[2] = *(undefined4 *)(param_2 + 0x18);
  param_1[3] = *(undefined4 *)(param_2 + 0x1c);
  param_1[4] = (uint)(62500.0 <
                     *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14) +
                     *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10));
  if (62500.0 < *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
                *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18)) {
    param_1[5] = 1;
    return;
  }
  param_1[5] = 0;
  return;
}

// 00DB3FF0  FUN_00db3ff0  size=123  [between]
undefined4 __thiscall FUN_00db3ff0(float *param_1,int param_2)

{
  float fVar1;
  
  if (((param_1[4] != 0.0) &&
      (fVar1 = *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14) +
               *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10),
      fVar1 < 62500.0 == (fVar1 == 62500.0))) &&
     (0.9 <= (*param_1 * *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0x14) * param_1[1]) /
             (SQRT(*(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14) +
                   *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10)) *
             SQRT(param_1[1] * param_1[1] + *param_1 * *param_1)))) {
    return 1;
  }
  return 0;
}

// 00DB4070  FUN_00db4070  size=125  [between]
undefined4 __thiscall FUN_00db4070(int param_1,int param_2)

{
  float fVar1;
  
  if (((*(int *)(param_1 + 0x14) != 0) &&
      (fVar1 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
               *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18),
      fVar1 < 62500.0 == (fVar1 == 62500.0))) &&
     (0.9 <= (*(float *)(param_1 + 8) * *(float *)(param_2 + 0x18) +
             *(float *)(param_2 + 0x1c) * *(float *)(param_1 + 0xc)) /
             (SQRT(*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
                   *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18)) *
             SQRT(*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
                  *(float *)(param_1 + 8) * *(float *)(param_1 + 8))))) {
    return 1;
  }
  return 0;
}

// 00DB40F0  FUN_00db40f0  size=2454  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00db40f0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_94;
  float fStack_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60 [4];
  undefined1 local_50 [76];
  
  local_b4 = *(float *)(param_1 + 4);
  if ((param_3 == 0) || (*(int *)(param_1 + 0xc) == 1)) {
    if ((DAT_01b7ba90 & 0x2000) != 0) {
      local_b4 = local_b4 * 5.0;
    }
    if ((DAT_01b7ba90 & 0x400) != 0) {
      local_b4 = local_b4 * 0.2;
      if ((DAT_01b7ba9c & 4) != 0) {
        local_b0 = 0.0;
        local_ac = 0.0;
        local_a8 = 0.017453292;
        if ((DAT_01b7ba90 & 0x2000) != 0) {
          local_94 = local_a4 * 10.0;
        }
        FUN_00de6240();
      }
      if ((DAT_01b7ba9c & 8) != 0) {
        if ((DAT_01b7ba90 & 0x2000) != 0) {
          local_b0 = 0.0;
          local_ac = 0.0;
          local_a8 = -0.17453292;
          local_a4 = local_94 * 10.0;
        }
        FUN_00de6240();
      }
      if ((DAT_01b7ba9c & 2) != 0) {
        local_b0 = 0.0;
        local_ac = 0.0;
        local_a8 = 0.7853982;
        FUN_00de6240();
      }
      if ((DAT_01b7ba9c & 1) != 0) {
        local_b0 = 0.0;
        local_ac = 0.0;
        local_a8 = -0.7853982;
        FUN_00de6240();
      }
    }
  }
  if (param_3 == 0) {
    if ((DAT_01b7ba90 & 0x4000) != 0) {
      FUN_00de6390(local_b4 * -0.11764706 * 7.0,0x3dcccccd,0xbf800000);
      *(undefined4 *)(param_1 + 8) = 0x1e;
    }
    if ((DAT_01b7ba90 & 0x800) != 0) {
      FUN_00de6390(local_b4 * 0.11764706 * 7.0,0x3dcccccd,0xbf800000);
      *(undefined4 *)(param_1 + 8) = 0x1e;
    }
  }
  if ((DAT_01b7ba90 & 0x8000) == 0) {
    fVar2 = _DAT_01b7baa8 * 0.003921569 * 0.3;
    if (0.5 < ABS(fVar2)) {
      fVar3 = fVar2 * fVar2;
      if (fVar2 < 0.0) {
        fVar3 = -fVar3;
      }
      local_b0 = fVar3 * 0.25 * local_b4;
      FUN_00de5090();
      *(undefined4 *)(param_1 + 8) = 0x1e;
      local_ac = 0.0;
      local_a8 = 0.0;
    }
    fVar2 = _DAT_01b7baac * 0.003921569 * 0.3;
    if ((DAT_01b7ba90 & 0x1000) == 0) {
      if (ABS(fVar2) <= 0.5) goto LAB_00db4498;
      fVar3 = fVar2 * fVar2;
      if (fVar2 < 0.0) {
        fVar3 = -fVar3;
      }
      local_ac = fVar3 * -0.15 * local_b4;
      local_a8 = 0.0;
    }
    else {
      if (ABS(fVar2) <= 0.5) goto LAB_00db4498;
      fVar3 = fVar2 * fVar2;
      if (fVar2 < 0.0) {
        fVar3 = -fVar3;
      }
      local_ac = 0.0;
      local_a8 = fVar3 * 0.25 * local_b4;
    }
    local_b0 = 0.0;
    FUN_00de5090();
    *(undefined4 *)(param_1 + 8) = 0x1e;
  }
  else {
    fVar2 = _DAT_01b7baa4 * 0.003921569 * 0.1;
    if (0.2 < ABS(fVar2)) {
      fVar3 = fVar2 * fVar2;
      if (fVar2 < 0.0) {
        fVar3 = -fVar3;
      }
      FUN_00de6390(fVar3 * local_b4 * 7.0,0x3dcccccd,0xbf800000);
      *(undefined4 *)(param_1 + 8) = 0x1e;
    }
  }
LAB_00db4498:
  if (((DAT_01b7ba90 & 0x8000) == 0) && (0.2 < ABS(_DAT_01b7baa4 * 0.003921569 * 0.1))) {
    FUN_00de61b0();
    *(undefined4 *)(param_1 + 8) = 0x1e;
  }
  fVar2 = _DAT_01b7baa0 * 0.003921569 * 0.1;
  if (0.2 < ABS(fVar2)) {
    fVar3 = fVar2 * fVar2;
    if (fVar2 < 0.0) {
      fVar3 = -fVar3;
    }
    local_b0 = *(float *)(param_2 + 0x1e0);
    local_a8 = *(float *)(param_2 + 0x1e8);
    local_a4 = *(float *)(param_2 + 0x1ec);
    fVar2 = 1.0;
    if ((DAT_01b7ba90 & 0x2000) != 0) {
      fVar2 = 5.0;
    }
    if ((DAT_01b7ba90 & 0x400) != 0) {
      fVar2 = fVar2 * 0.3;
    }
    local_ac = *(float *)(param_2 + 0x1e4) + fVar3 * 0.15 * fVar2;
    FUN_00de61b0();
    *(undefined4 *)(param_1 + 8) = 0x1e;
  }
  puVar1 = (undefined4 *)(param_2 + 0x1c0);
  local_84 = param_2 + 0xb0;
  FUN_00de5d10(param_2 + 0x1b0,puVar1,param_2 + 0x1d0);
  if ((param_3 == 0) && (*(int *)(param_1 + 0x10) == 1)) {
    if ((DAT_01b7ba94 & 0x10) != 0) {
      local_b0 = *(float *)(param_2 + 0x1e0);
      local_ac = *(float *)(param_2 + 0x1e4);
      local_a8 = 0.0;
      FUN_00de61b0();
    }
    if ((((DAT_01b7ba90 & 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
       (iVar4 = FUN_00a12210(), iVar4 != 0)) {
      local_60[0] = 0.0;
      local_60[1] = 1.0;
      fVar2 = _DAT_01b7baa8 * 0.003921569 * 0.3;
      local_60[2] = local_60[0];
      if (0.5 < ABS(fVar2)) {
        fVar3 = fVar2 * fVar2;
        if (fVar2 < 0.0) {
          fVar3 = -fVar3;
        }
        local_80 = fVar3 * 0.15 * local_b4;
        local_7c = local_60[0];
        local_78 = local_60[0];
        D3DXMatrixRotationY(local_50,*(undefined4 *)(param_2 + 0x1e4));
        D3DXVec3TransformNormal(&stack0xffffff48,&fStack_88,local_60 + 2);
        *(float *)(param_1 + 0x20) = local_b0 + *(float *)(param_1 + 0x20);
        *(float *)(param_1 + 0x24) = local_ac + *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 0x28) = local_a8 + *(float *)(param_1 + 0x28);
        *(float *)(param_1 + 0x2c) = local_a4 + *(float *)(param_1 + 0x2c);
      }
      fVar2 = _DAT_01b7baac * 0.003921569 * 0.3;
      if (0.5 < ABS(fVar2)) {
        fVar3 = fVar2 * fVar2;
        if (fVar2 < 0.0) {
          fVar3 = -fVar3;
        }
        local_80 = 0.0;
        local_7c = fVar3 * -0.15 * local_b4;
        local_78 = 0.0;
        D3DXMatrixRotationY(local_50,*(undefined4 *)(param_2 + 0x1e4));
        D3DXVec3TransformNormal(&stack0xffffff48,&fStack_88,local_60 + 2);
        *(float *)(param_1 + 0x20) = local_b0 + *(float *)(param_1 + 0x20);
        *(float *)(param_1 + 0x24) = local_ac + *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 0x28) = local_a8 + *(float *)(param_1 + 0x28);
        *(float *)(param_1 + 0x2c) = local_a4 + *(float *)(param_1 + 0x2c);
      }
      if ((DAT_01b7ba90 & 0x20) != 0) {
        FUN_00de5f20();
      }
      FUN_00de5fc0();
      FUN_00de5d10(param_2 + 0x1b0,puVar1,local_60);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar4 = FUN_00f98a90();
  fStack_88 = (((float)iVar4 * 0.083333336 - 12.0) - 3.0) * 12.0;
  iVar4 = FUN_00f98aa0();
  fVar2 = (float)iVar4 * 0.083333336 * 12.0 - 12.0;
  FUN_00f96580(fStack_88,fVar2,0x41400000,0xff88ff88,0xffffffff,"CAM_MODE:OBJ");
  fVar2 = fVar2 - 12.0;
  FUN_00f96580(fStack_88,fVar2,0x41400000,0xff88ff88,0xffffffff,"Fovy=%.0f",
               (double)(*(float *)(param_2 + 0x94) * 57.29578));
  FUN_00f96580(fStack_88,fVar2 - 12.0,0x41400000,0xff88ff88,0xffffffff,"ROT =%.0f",
               (double)(*(float *)(param_2 + 0x1e8) * 57.29578));
  *(undefined4 *)(param_2 + 0x460) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_2 + 0x464) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_2 + 0x46c) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_2 + 0x470) = *puVar1;
  *(undefined4 *)(param_2 + 0x474) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_2 + 0x478) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_2 + 0x47c) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_2 + 0x480) = 0;
  *(undefined4 *)(param_2 + 0x484) = 0;
  *(undefined4 *)(param_2 + 0x488) = 0;
  *(undefined4 *)(param_2 + 0x48c) = uStack_64;
  *(undefined4 *)(param_2 + 0x4d0) = 0;
  *(undefined4 *)(param_2 + 0x4d4) = 0;
  *(undefined4 *)(param_2 + 0x4d8) = 0;
  *(undefined4 *)(param_2 + 0x4dc) = uStack_64;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  uStack_68 = 0;
  FUN_00de6060();
  return;
}

// 00DB4A90  FUN_00db4a90  size=1760  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00db4a90(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_58;
  undefined4 local_44;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_58 = *(float *)(param_1 + 4);
  if ((param_3 == 0) || (*(int *)(param_1 + 0xc) == 1)) {
    if ((DAT_01b7ba90 & 0x2000) != 0) {
      local_58 = local_58 * 4.0;
    }
    if ((DAT_01b7ba90 & 0x400) != 0) {
      local_58 = local_58 * 0.5;
    }
    if ((DAT_01b7ba90 & 0x800) != 0) {
      local_58 = local_58 * 0.1;
    }
  }
  if ((DAT_01b7ba90 & 0x1000) == 0) {
    if (0.5 < ABS(_DAT_01b7baa0 * 0.003921569 * 0.3)) {
      FUN_00de5090();
      *(undefined4 *)(param_1 + 8) = 0x1e;
    }
    fVar3 = ABS(_DAT_01b7baa4 * 0.003921569 * 0.3);
    if ((DAT_01b7ba90 & 0x8000) == 0) {
      if (0.5 < fVar3) {
        FUN_00de5090();
        *(undefined4 *)(param_1 + 8) = 0x1e;
      }
    }
    else if (0.5 < fVar3) {
      FUN_00de5090();
      *(undefined4 *)(param_1 + 8) = 0x1e;
    }
  }
  else {
    fVar3 = _DAT_01b7baac * 0.003921569 * 0.1;
    fVar3 = fVar3 + fVar3;
    if (0.2 < ABS(fVar3)) {
      fVar4 = fVar3 * fVar3;
      if (fVar3 < 0.0) {
        fVar4 = -fVar4;
      }
      FUN_00de6390(fVar4 * local_58 * 4.5,0x3dcccccd,0xbf800000);
      *(undefined4 *)(param_1 + 8) = 0x1e;
    }
  }
  if (((DAT_01b7ba90 & 0x1000) == 0) && (0.2 < ABS(_DAT_01b7baac * 0.003921569 * 0.1))) {
    FUN_00de61b0();
    *(undefined4 *)(param_1 + 8) = 0x1e;
  }
  if (0.2 < ABS(_DAT_01b7baa8 * 0.003921569 * 0.1)) {
    FUN_00de61b0();
    *(undefined4 *)(param_1 + 8) = 0x1e;
  }
  puVar1 = (undefined4 *)(param_2 + 0x1c0);
  puVar2 = (undefined4 *)(param_2 + 0x1b0);
  FUN_00de5d10(puVar2,puVar1,param_2 + 0x1d0);
  if (((param_3 == 0) || (param_3 == 2)) && (*(int *)(param_1 + 0x10) == 1)) {
    if ((DAT_01b7ba94 & 0x10) != 0) {
      FUN_00de61b0();
    }
    if ((((DAT_01b7ba90 & 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
       (iVar5 = FUN_00a12210(), iVar5 != 0)) {
      local_20 = 0;
      local_1c = 0x3f800000;
      local_18 = 0;
      if ((DAT_01b7ba90 & 0x20) != 0) {
        FUN_00de5f20();
      }
      FUN_00de5fc0();
      FUN_00de5d10(puVar2,puVar1,&local_20);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar5 = FUN_00f98a90();
  fVar3 = (((float)iVar5 * 0.083333336 - 12.0) - 3.0) * 12.0;
  iVar5 = FUN_00f98aa0();
  fVar4 = (float)iVar5 * 0.083333336 * 12.0 - 12.0;
  FUN_00f96580(fVar3,fVar4,0x41400000,0xffff8888,0xffffffff,"CAM_MODE:DEF");
  fVar4 = fVar4 - 12.0;
  FUN_00f96580(fVar3,fVar4,0x41400000,0xffff8888,0xffffffff,"Fovy=%.0f",
               (double)(*(float *)(param_2 + 0x94) * 57.29578));
  FUN_00f96580(fVar3,fVar4 - 12.0,0x41400000,0xffff8888,0xffffffff,"ROT =%.0f",
               (double)(*(float *)(param_2 + 0x1e8) * 57.29578));
  *(undefined4 *)(param_2 + 0x460) = *puVar2;
  *(undefined4 *)(param_2 + 0x464) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_2 + 0x46c) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_2 + 0x470) = *puVar1;
  *(undefined4 *)(param_2 + 0x474) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_2 + 0x478) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_2 + 0x47c) = *(undefined4 *)(param_2 + 0x1cc);
  FUN_00de6060();
  *(undefined4 *)(param_2 + 0x490) = 0;
  *(undefined4 *)(param_2 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x498) = 0;
  *(undefined4 *)(param_2 + 0x49c) = local_44;
  *(undefined4 *)(param_2 + 0x4ec) = local_44;
  *(undefined4 *)(param_2 + 0x4e0) = 0;
  *(undefined4 *)(param_2 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x4e8) = 0;
  *(undefined4 *)(param_2 + 0x480) = 0;
  *(undefined4 *)(param_2 + 0x484) = 0;
  *(undefined4 *)(param_2 + 0x488) = 0;
  *(undefined4 *)(param_2 + 0x48c) = local_14;
  *(undefined4 *)(param_2 + 0x4d0) = 0;
  *(undefined4 *)(param_2 + 0x4d4) = 0;
  *(undefined4 *)(param_2 + 0x4d8) = 0;
  *(undefined4 *)(param_2 + 0x4dc) = local_14;
  return;
}

// 00DB51C0  FUN_00db51c0  size=168  [between]
float10 __fastcall FUN_00db51c0(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*param_1 == 0.0) {
    return (float10)1;
  }
  fVar1 = (float10)param_1[1] / (float10)*param_1;
  if (0.0 <= param_1[3]) {
    if (param_1[3] <= 0.0) goto LAB_00db5251;
    fVar2 = (float10)param_1[3];
    fVar3 = (float10)fsin(fVar1 * (float10)1.5707964);
    if ((float10)1 <= fVar2) {
      fVar1 = (float10)FUN_00fdc1f0();
      goto LAB_00db5251;
    }
  }
  else {
    fVar2 = ABS((float10)param_1[3]);
    fVar3 = (float10)fcos(fVar1 * (float10)1.5707964 + (float10)3.1415927);
    fVar3 = fVar3 + (float10)1;
    if ((float10)1 <= fVar2) {
      fVar1 = (float10)FUN_00fdc1f0();
      goto LAB_00db5251;
    }
  }
  fVar1 = fVar3 * fVar2 + ((float10)1 - fVar2) * fVar1;
LAB_00db5251:
  fVar1 = (float10)FUN_00da58c0((float)fVar1,param_1[2]);
  return fVar1;
}

// 00DB5270  FUN_00db5270  size=24  [between]
float10 __fastcall FUN_00db5270(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00db51c0();
  fVar1 = (float10)1;
  return fVar1 / ((fVar1 - fVar2) * (float10)*param_1 + fVar1);
}

// 00DB5290  FUN_00db5290  size=291  [between]
void __thiscall FUN_00db5290(int param_1,float *param_2)

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
  
  iVar9 = 0;
  do {
    if (*(float *)(param_1 + 0x20) != 0.0) {
      fVar1 = *(float *)(param_1 + 0x20);
      fVar6 = (*(float *)(param_1 + 0x10) - *param_2) * fVar1 + *param_2;
      fVar8 = (*(float *)(param_1 + 0x14) - param_2[1]) * fVar1 + param_2[1];
      fVar2 = (*(float *)(param_1 + 0x18) - param_2[2]) * fVar1 + param_2[2];
      iVar9 = iVar9 * 0xc;
      fVar1 = (*(float *)(param_1 + 0x1c) - param_2[3]) * fVar1 + param_2[3];
      if (*(float *)(iVar9 + 0x18bc3d8) != 0.0) {
        fVar5 = fVar6 - *param_2;
        fVar7 = fVar8 - param_2[1];
        fVar3 = fVar2 - param_2[2];
        fVar4 = SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5);
        if (*(float *)(iVar9 + 0x18bc3d8) < fVar4) {
          fVar4 = *(float *)(iVar9 + 0x18bc3d8) / fVar4;
          *param_2 = *param_2 + fVar5 * fVar4;
          param_2[1] = param_2[1] + fVar7 * fVar4;
          param_2[2] = fVar3 * fVar4 + param_2[2];
          param_2[3] = param_2[3] + (fVar1 - param_2[3]) * fVar4;
          return;
        }
      }
      *param_2 = fVar6;
      param_2[1] = fVar8;
      param_2[2] = fVar2;
      param_2[3] = fVar1;
      return;
    }
    iVar9 = iVar9 + 1;
    param_1 = param_1 + 0x40;
  } while (iVar9 < 3);
  return;
}

// 00DB53C0  FUN_00db53c0  size=114  [between]
void __thiscall FUN_00db53c0(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    iVar1 = FUN_00db1f20();
    if ((iVar1 != 0) && (DAT_01beb8e0 == 0)) {
      FUN_00db1e20(param_1 + 4,param_1 + 8,param_2,param_2 + 0x10,param_2 + 0x30);
    }
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

// 00DB5440  FUN_00db5440  size=53  [between]
bool FUN_00db5440(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00db546a;
  }
  iVar2 = FUN_00a81330();
LAB_00db546a:
  return iVar2 != 0;
}

// 00DB5480  FUN_00db5480  size=103  [between]
void __thiscall FUN_00db5480(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00a7c970(param_2);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  uVar1 = FUN_00a7c800();
  *(undefined4 *)(param_1 + 4) = uVar1;
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  puVar4 = &DAT_01be9db8;
  (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
  iVar3 = FUN_00dd6d80(puVar4);
  *(uint *)(param_1 + 8) = -(uint)(iVar3 != 0) & (uint)piVar2;
  return;
}

// 00DB5540  FUN_00db5540  size=121  [between]
int __fastcall FUN_00db5540(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(1);
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_00a7c8a0();
        if (piVar1 != (int *)0x0) {
          puVar3 = &DAT_01b35420;
          (**(code **)(*piVar1 + 4))(&DAT_01b35420);
          iVar2 = FUN_00dd6d70(puVar3);
          return (-(uint)(iVar2 != 0) & (uint)piVar1) + 0xa00;
        }
      }
      return 0xa00;
    }
  }
  return *(int *)(param_1 + 8) + 0x900;
}

// 00DB55C0  FUN_00db55c0  size=201  [between]
void __thiscall FUN_00db55c0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined *puVar5;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(1);
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_00a7c8a0();
        if (piVar1 != (int *)0x0) {
          puVar5 = &DAT_01b35420;
          (**(code **)(*piVar1 + 4))(&DAT_01b35420);
          iVar2 = FUN_00dd6d70(puVar5);
          puVar4 = (undefined4 *)((-(uint)(iVar2 != 0) & (uint)piVar1) + 0xf34);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *unaff_retaddr = *puVar4;
            puVar4 = puVar4 + 1;
            unaff_retaddr = unaff_retaddr + 1;
          }
          return;
        }
      }
      puVar4 = (undefined4 *)0xf34;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *unaff_retaddr = *puVar4;
        puVar4 = puVar4 + 1;
        unaff_retaddr = unaff_retaddr + 1;
      }
      return;
    }
  }
  if (*(int *)(param_3 + 0x8b4) == 5) {
    puVar4 = (undefined4 *)&DAT_01b7b910;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + 0xcf8);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// 00DB56A0  FUN_00db56a0  size=152  [between]
undefined4 __fastcall FUN_00db56a0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(1);
      if (iVar2 == 0) {
        return 0;
      }
      piVar1 = (int *)FUN_00a7c8a0();
      uVar3 = 0;
      if (piVar1 != (int *)0x0) {
        puVar5 = &DAT_01b35420;
        (**(code **)(*piVar1 + 4))(&DAT_01b35420);
        iVar2 = FUN_00dd6d70(puVar5);
        uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
      }
      if (*(float *)(uVar3 + 0xf48) * *(float *)(uVar3 + 0xf48) +
          *(float *)(uVar3 + 0xf44) * *(float *)(uVar3 + 0xf44) <= 90000.0) {
        return 0;
      }
      return 1;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar4 = FUN_00b95e30();
  return uVar4;
}

// 00DB5740  FUN_00db5740  size=137  [between]
bool __fastcall FUN_00db5740(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      uVar3 = 1;
      iVar2 = (**(code **)(*piVar1 + 0x28))(1);
      if (iVar2 == 0) {
LAB_00db5784:
        iVar2 = FUN_00a8cab0();
        return iVar2 == 0;
      }
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 == (int *)0x0) goto LAB_00db5784;
      (**(code **)(*piVar1 + 4))(&DAT_01b35420);
      FUN_00dd6d70(uVar3);
      goto LAB_00db57b1;
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return true;
  }
LAB_00db57b1:
  iVar2 = FUN_00a8cab0();
  return iVar2 == 0;
}

// 00DB57D0  FUN_00db57d0  size=144  [between]
uint __fastcall FUN_00db57d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar1 + 0x28))(1);
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_00a7c8a0();
        if (piVar1 != (int *)0x0) {
          puVar3 = &DAT_01b35420;
          (**(code **)(*piVar1 + 4))(&DAT_01b35420);
          FUN_00dd6d70(puVar3);
          iVar2 = FUN_00a8cab0();
          return (uint)(iVar2 == 1);
        }
      }
      iVar2 = FUN_00a8cab0();
      return (uint)(iVar2 == 1);
    }
  }
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(uint *)(*(int *)(param_1 + 8) + 0x265c);
}

// 00DB58A0  FUN_00db58a0  size=26  [between]
void __fastcall FUN_00db58a0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00a7c950();
  param_1[2] = 0;
  return;
}

// 00DB58C0  FUN_00db58c0  size=152  [between]
undefined4 __fastcall FUN_00db58c0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c7e0();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar5 + 0x200))();
        if (iVar4 != 0) {
          iVar4 = FUN_00da87b0();
          if ((iVar4 != 0) &&
             (fVar1 = (float)piVar5[0x10] - *(float *)(iVar4 + 0x40),
             fVar3 = (float)piVar5[0x11] - *(float *)(iVar4 + 0x44),
             fVar2 = (float)piVar5[0x12] - *(float *)(iVar4 + 0x48),
             SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) <=
             *(float *)(PTR_DAT_018bc3a8 + 0x4c))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00DB5960  FUN_00db5960  size=159  [between]
undefined4 * FUN_00db5960(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_1 = *(undefined4 *)(param_2 + 0x160);
  param_1[1] = *(undefined4 *)(param_2 + 0x164);
  param_1[2] = *(undefined4 *)(param_2 + 0x168);
  uVar1 = *(undefined4 *)(param_2 + 0x4b0);
  param_1[3] = *(undefined4 *)(param_2 + 0x16c);
  uVar2 = FUN_00daefb0(uVar1);
  if (0x3f < uVar2) {
    param_1[1] = *(float *)(PTR_DAT_018bc3a0 + 0x10804) * (float)param_1[1];
    return param_1;
  }
  if ((*(uint *)(PTR_DAT_018bc3a0 + uVar2 * 0xd8 + 0xd1fc) & 0x80000000) == 0) {
    param_1[1] = *(float *)(PTR_DAT_018bc3a0 + 0x10804) * (float)param_1[1];
    return param_1;
  }
  param_1[1] = *(float *)(PTR_DAT_018bc3a0 + uVar2 * 0xd8 + 0xd204) * (float)param_1[1];
  return param_1;
}

// 00DB5A00  FUN_00db5a00  size=242  [between]
float * FUN_00db5a00(float *param_1,int param_2)

{
  float unaff_ESI;
  float fStack_48;
  float fStack_44;
  float local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_2 + 0x4b0) == 0x20030) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xbf800000;
    D3DXVec3TransformNormal(param_1,&local_20,param_2 + 0x10);
    *param_1 = *(float *)(param_2 + 0x40) + *param_1;
    param_1[1] = *(float *)(param_2 + 0x44) + param_1[1];
    param_1[2] = *(float *)(param_2 + 0x48) + param_1[2];
    return param_1;
  }
  if (*(int *)(param_2 + 0x4b0) != 0x20080) {
    *param_1 = *(float *)(param_2 + 0x40);
    param_1[1] = *(float *)(param_2 + 0x44);
    param_1[2] = *(float *)(param_2 + 0x48);
    param_1[3] = *(float *)(param_2 + 0x4c);
    return param_1;
  }
  FUN_00c15010(param_1);
  param_1[1] = *(float *)(param_2 + 0x44);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xbf800000;
  D3DXVec3TransformNormal(local_40,&local_30,param_2 + 0x10);
  *param_1 = *param_1 + unaff_ESI;
  param_1[1] = fStack_48 + param_1[1];
  param_1[2] = param_1[2] + fStack_44;
  param_1[3] = param_1[3] + local_40[0];
  return param_1;
}

// 00DB5B00  FUN_00db5b00  size=96  [between]
void FUN_00db5b00(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_24 = param_3[3] - param_2[3];
  FUN_0090eea0(param_1,local_20,param_2,param_4,&local_30,0x1d,"CameraGame");
  return;
}

// 00DB5B60  FUN_00db5b60  size=93  [between]
bool FUN_00db5b60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008f8cf0((int)*(char *)(*(int *)(param_1 + 0x28) + 0x10) + *(int *)(param_1 + 0x28),8)
  ;
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (int)*(char *)(*(int *)(param_1 + 0x28) + 0x10) + *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar1 = FUN_008f7780(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) != 0x20180)) {
      iVar1 = FUN_009f93b0(*(int *)(iVar1 + 0x4b0));
      return iVar1 == 0;
    }
  }
  return true;
}

// 00DB5BC0  FUN_00db5bc0  size=162  [between]
void FUN_00db5bc0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar6 = param_3[6];
  fVar7 = param_3[7];
  if (param_1 != (float *)0x0) {
    *param_1 = fVar4 * param_4 + *param_3;
    param_1[1] = fVar5 * param_4 + fVar1;
    param_1[2] = fVar6 * param_4 + fVar2;
    param_1[3] = fVar7 * param_4 + fVar3;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar4;
    param_2[1] = fVar5;
    param_2[2] = fVar6;
    param_2[3] = fVar7;
    return;
  }
  return;
}

// 00DB5C70  FUN_00db5c70  size=276  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db5c70(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  if (0.001 < fVar1) {
    *param_1 = *param_2 / fVar1;
    param_1[1] = param_2[1] / fVar1;
    param_1[2] = param_2[2] / fVar1;
    param_1[3] = param_2[3] / fVar1;
    return;
  }
  FUN_00dd5650(&DAT_016c3dcc);
  *param_1 = _DAT_01bea920;
  param_1[1] = param_2[1];
  param_1[2] = _DAT_01bea928;
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
    return;
  }
  FUN_00ddf460(param_1,param_1);
  return;
}

// 00DB5D90  FUN_00db5d90  size=245  [between]
void FUN_00db5d90(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_14;
  
  fVar2 = *param_2 * *param_2;
  fVar1 = SQRT(param_2[1] * param_2[1] + fVar2 + param_2[2] * param_2[2]);
  if (fVar1 < 0.001 != (fVar1 == 0.001)) {
    FUN_00dd5650(&DAT_016c3dfc);
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1[2] = 0;
    param_1[3] = local_14;
    return;
  }
  fVar1 = param_2[2] * param_2[2] + param_2[1] * param_2[1] + fVar2;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1[2] = 0;
    return;
  }
  FUN_00ddf460(param_1,param_2);
  return;
}

// 00DB5E90  FUN_00db5e90  size=328  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db5e90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_14;
  
  if (0.999 <= ABS(param_3[2] * param_2[2] + *param_2 * *param_3 + param_3[1] * param_2[1])) {
    FUN_00dd5650(&DAT_016c3e2c);
    if (0.999 <= ABS(param_3[1])) {
      fVar1 = _DAT_01bea924 * -1.0;
      fVar2 = _DAT_01bea928 * -1.0;
      fVar3 = _DAT_01bea92c * -1.0;
      *param_1 = _DAT_01bea920 * -1.0;
      param_1[1] = fVar1;
      param_1[2] = fVar2;
      param_1[3] = fVar3;
      return;
    }
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
    param_1[3] = local_14;
    return;
  }
  fVar1 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
    return;
  }
  FUN_00ddf460(param_1,param_2);
  return;
}

// 00DB5FE0  FUN_00db5fe0  size=489  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db5fe0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (ABS(param_2[2] * param_3[2] + *param_2 * *param_3 + param_3[1] * param_2[1]) < 0.999) {
    fVar1 = param_2[2];
    fVar2 = *param_3;
    fVar3 = *param_2;
    fVar4 = param_3[2];
    fVar5 = param_3[1];
    fVar6 = *param_2;
    fVar7 = *param_3;
    fVar8 = param_2[1];
    *param_1 = param_2[1] * param_3[2] - param_3[1] * param_2[2];
    param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
    param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
    fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
    if (0.001 < fVar1) {
      *param_1 = *param_1 / fVar1;
      param_1[1] = param_1[1] / fVar1;
      param_1[2] = param_1[2] / fVar1;
      param_1[3] = param_1[3] / fVar1;
      return;
    }
  }
  FUN_00dd5650(&DAT_016c3e5c);
  fVar1 = 0.0;
  if (0.999 <= ABS(param_3[1])) {
    fVar1 = _DAT_01bea920 * -1.0;
    fVar2 = _DAT_01bea924 * -1.0;
    fVar3 = _DAT_01bea928 * -1.0;
  }
  else {
    fVar2 = 1.0;
    fVar3 = fVar1;
  }
  fVar4 = *param_3;
  fVar5 = param_3[2];
  fVar6 = param_3[1];
  fVar7 = *param_3;
  *param_1 = fVar2 * param_3[2] - param_3[1] * fVar3;
  param_1[1] = fVar3 * fVar4 - fVar1 * fVar5;
  param_1[2] = fVar6 * fVar1 - fVar2 * fVar7;
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(param_1,param_1);
    return;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_1 = 0.0;
  param_1[1] = 1.0;
  param_1[2] = 0.0;
  return;
}

// 00DB61D0  FUN_00db61d0  size=477  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db61d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (ABS(param_2[2] * param_3[2] + *param_2 * *param_3 + param_3[1] * param_2[1]) < 0.999) {
    fVar1 = param_2[2];
    fVar2 = *param_3;
    fVar3 = *param_2;
    fVar4 = param_3[2];
    fVar5 = param_3[1];
    fVar6 = *param_2;
    fVar7 = *param_3;
    fVar8 = param_2[1];
    *param_1 = param_2[1] * param_3[2] - param_3[1] * param_2[2];
    param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
    param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
    fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
    if (0.001 < fVar1) {
      *param_1 = *param_1 / fVar1;
      param_1[1] = param_1[1] / fVar1;
      param_1[2] = param_1[2] / fVar1;
      param_1[3] = param_1[3] / fVar1;
      return;
    }
  }
  FUN_00dd5650(&DAT_016c3e90);
  fVar1 = 0.0;
  if (0.999 <= ABS(param_2[1])) {
    fVar2 = 1.0;
  }
  else {
    fVar1 = _DAT_01bea920 * -1.0;
    fVar2 = _DAT_01bea928;
  }
  fVar3 = param_2[2];
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  *param_1 = fVar1 * param_2[1] - param_2[2] * 0.0;
  param_1[1] = fVar3 * fVar2 - fVar4 * fVar1;
  param_1[2] = fVar5 * 0.0 - fVar2 * fVar6;
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(param_1,param_1);
    return;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_1 = 0.0;
  param_1[1] = 1.0;
  param_1[2] = 0.0;
  return;
}

// 00DB63B0  Camera::Math::safePositionTargetXz  size=91  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera::Math::safePositionTargetXz(float *param_1,float *param_2)

{
  if (SQRT((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
           (*param_1 - *param_2) * (*param_1 - *param_2)) < 0.05) {
    FUN_00dd5650(&DAT_016c3ec0);
    *param_2 = _DAT_01bea920 * 0.05 + *param_1;
    param_2[2] = _DAT_01bea928 * 0.05 + param_1[2];
  }
  return;
}

// 00DB6410  FUN_00db6410  size=221  [between]
void FUN_00db6410(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_40 = *param_3 - *param_2;
  local_3c = param_3[1] - param_2[1];
  local_38 = param_3[2] - param_2[2];
  local_34 = param_3[3] - param_2[3];
  FUN_00db5c70(&local_40,&local_40);
  FUN_00db5fe0(&local_30,param_4,&local_40);
  FUN_00db61d0(&local_20,&local_40,&local_30);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = 0;
  param_1[4] = local_20;
  param_1[5] = local_1c;
  param_1[6] = local_18;
  param_1[7] = 0;
  param_1[8] = local_40;
  param_1[9] = local_3c;
  param_1[10] = local_38;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  return;
}

// 00DB6590  FUN_00db6590  size=444  [between]
void FUN_00db6590(float *param_1,float *param_2,float *param_3,undefined4 param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float10 fVar9;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar2 = param_2[4];
  pfVar1 = param_2 + 4;
  fVar3 = param_2[5];
  pfVar8 = param_3 + 4;
  fVar4 = param_2[6];
  fVar5 = *pfVar8;
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  FUN_00da6f60(&local_50,local_20,param_2,pfVar1,param_4);
  FUN_00da6f60(&local_60,local_30,param_3,pfVar8,param_4);
  fVar9 = (float10)FUN_00da6ca0(&local_40,local_20,local_30,param_4,param_5);
  if ((float10)0 != fVar9) {
    fVar2 = (fVar5 - fVar2) * param_5 + fVar2;
    fVar3 = (fVar6 - fVar3) * param_5 + fVar3;
    fVar4 = fVar4 + (fVar7 - fVar4) * param_5;
    *param_1 = fVar2 - ((local_60 - local_50) * param_5 + local_50 + local_40);
    param_1[1] = fVar3 - ((local_5c - local_4c) * param_5 + local_4c + local_3c);
    param_1[2] = fVar4 - ((local_58 - local_48) * param_5 + local_48 + local_38);
    param_1[3] = 1.0;
    param_1[7] = 1.0;
    param_1[4] = fVar2;
    param_1[5] = fVar3;
    param_1[6] = fVar4;
    return;
  }
  *param_1 = (*param_3 - *param_2) * param_5 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * param_5 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * param_5 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * param_5 + param_2[3];
  param_1[4] = (*pfVar8 - *pfVar1) * param_5 + *pfVar1;
  param_1[5] = (param_3[5] - param_2[5]) * param_5 + param_2[5];
  param_1[6] = (param_3[6] - param_2[6]) * param_5 + param_2[6];
  param_1[7] = (param_3[7] - param_2[7]) * param_5 + param_2[7];
  return;
}

// 00DB6750  FUN_00db6750  size=538  [between]
void FUN_00db6750(float *param_1,float *param_2,float *param_3,undefined4 param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
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
  float10 fVar15;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  pfVar1 = param_2 + 4;
  pfVar2 = param_3 + 4;
  fVar12 = (param_2[4] - *param_2) * 0.5 + *param_2;
  fVar14 = (param_2[5] - param_2[1]) * 0.5 + param_2[1];
  fVar13 = (param_2[6] - param_2[2]) * 0.5 + param_2[2];
  fVar3 = *pfVar2;
  fVar4 = *param_3;
  fVar5 = *param_3;
  fVar6 = param_3[5];
  fVar7 = param_3[1];
  fVar8 = param_3[1];
  fVar9 = param_3[6];
  fVar10 = param_3[2];
  fVar11 = param_3[2];
  FUN_00da6f60(&local_50,local_20,param_2,pfVar1,param_4);
  FUN_00da6f60(&local_60,local_30,param_3,pfVar2,param_4);
  fVar15 = (float10)FUN_00da6ca0(&local_40,local_20,local_30,param_4,param_5);
  if ((float10)0 != fVar15) {
    fVar12 = (((fVar3 - fVar4) * 0.5 + fVar5) - fVar12) * param_5 + fVar12;
    fVar14 = (((fVar6 - fVar7) * 0.5 + fVar8) - fVar14) * param_5 + fVar14;
    fVar13 = fVar13 + (((fVar9 - fVar10) * 0.5 + fVar11) - fVar13) * param_5;
    fVar3 = ((local_60 - local_50) * param_5 + local_50 + local_40) * 0.5;
    *param_1 = fVar12 - fVar3;
    fVar5 = ((local_5c - local_4c) * param_5 + local_4c + local_3c) * 0.5;
    param_1[1] = fVar14 - fVar5;
    fVar4 = ((local_58 - local_48) * param_5 + local_48 + local_38) * 0.5;
    param_1[2] = fVar13 - fVar4;
    param_1[3] = 1.0;
    param_1[4] = fVar3 + fVar12;
    param_1[5] = fVar5 + fVar14;
    param_1[6] = fVar4 + fVar13;
    param_1[7] = 1.0;
    return;
  }
  *param_1 = (*param_3 - *param_2) * param_5 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * param_5 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * param_5 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * param_5 + param_2[3];
  param_1[4] = (*pfVar2 - *pfVar1) * param_5 + *pfVar1;
  param_1[5] = (param_3[5] - param_2[5]) * param_5 + param_2[5];
  param_1[6] = (param_3[6] - param_2[6]) * param_5 + param_2[6];
  param_1[7] = (param_3[7] - param_2[7]) * param_5 + param_2[7];
  return;
}

// 00DB6970  FUN_00db6970  size=280  [between]
void FUN_00db6970(float *param_1,float *param_2,float *param_3,undefined4 param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  FUN_00db6750(&local_50,param_2,param_3,param_4,param_6);
  fVar1 = (*param_3 - *param_2) * param_6 + *param_2;
  fVar8 = (param_3[1] - param_2[1]) * param_6 + param_2[1];
  fVar7 = (param_3[2] - param_2[2]) * param_6 + param_2[2];
  fVar6 = (param_3[3] - param_2[3]) * param_6 + param_2[3];
  fVar5 = (param_3[4] - param_2[4]) * param_6 + param_2[4];
  fVar2 = (param_3[5] - param_2[5]) * param_6 + param_2[5];
  fVar4 = (param_3[6] - param_2[6]) * param_6 + param_2[6];
  fVar3 = (param_3[7] - param_2[7]) * param_6 + param_2[7];
  *param_1 = (local_50 - fVar1) * param_5 + fVar1;
  param_1[1] = (local_4c - fVar8) * param_5 + fVar8;
  param_1[2] = (local_48 - fVar7) * param_5 + fVar7;
  param_1[3] = (local_44 - fVar6) * param_5 + fVar6;
  param_1[4] = (local_40 - fVar5) * param_5 + fVar5;
  param_1[5] = (local_3c - fVar2) * param_5 + fVar2;
  param_1[6] = (local_38 - fVar4) * param_5 + fVar4;
  param_1[7] = fVar3 + (local_34 - fVar3) * param_5;
  return;
}

// 00DB6A90  FUN_00db6a90  size=482  [between]
void FUN_00db6a90(float *param_1,int param_2,float *param_3)

{
  int iVar1;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [3];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  undefined1 local_50 [76];
  
  local_78 = 0;
  local_74 = 0;
  local_70 = FUN_00f98a90();
  local_6c = (float)FUN_00f98aa0();
  local_68 = 0.0;
  local_64 = 1.0;
  local_90 = *(float *)(param_2 + 0x1c0) - *(float *)(param_2 + 0x1b0);
  local_8c = *(float *)(param_2 + 0x1c4) - *(float *)(param_2 + 0x1b4);
  local_88 = *(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1b8);
  local_84[0] = *(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1bc);
  FUN_00db5c70(&local_90,&local_90);
  local_a0 = *param_3 - *(float *)(param_2 + 0x1b0);
  local_9c = param_3[1] - *(float *)(param_2 + 0x1b4);
  local_98 = param_3[2] - *(float *)(param_2 + 0x1b8);
  local_94 = param_3[3] - *(float *)(param_2 + 0x1bc);
  if (0.0 <= local_98 * local_88 + local_a0 * local_90 + local_9c * local_8c) {
    FUN_00da70f0(&local_b0,param_3,&local_78,param_2 + 0x10,param_2 + 0xb0);
    *param_1 = local_b0;
    param_1[1] = local_ac;
    param_1[2] = local_a8;
    param_1[3] = local_a4;
    return;
  }
  FUN_00ddcfe0(local_50,param_2 + 0x1d0,0x40490fdb);
  D3DXVec3TransformNormal(&local_a0,&local_a0,local_50);
  fStack_bc = local_ac + *(float *)(param_2 + 0x1b0);
  fStack_b8 = *(float *)(param_2 + 0x1b4) + local_a8;
  fStack_b4 = *(float *)(param_2 + 0x1b8) + local_a4;
  local_b0 = *(float *)(param_2 + 0x1bc) + local_a0;
  FUN_00da70f0(&local_6c,&fStack_bc,local_84,param_2 + 0x10,param_2 + 0xb0);
  iVar1 = FUN_00f98a90();
  *param_1 = (float)iVar1 - local_6c;
  param_1[1] = local_68;
  param_1[2] = local_64 * -1.0;
  param_1[3] = fStack_60;
  return;
}

// 00DB6C80  FUN_00db6c80  size=166  [between]
void FUN_00db6c80(float *param_1,float *param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_4[0xe] / (param_2[2] + param_4[10]);
  fVar2 = ((((*param_2 - (float)*param_3) * 2.0) / (float)param_3[2] - 1.0) * fVar1) / *param_4 -
          param_5[0xc];
  fVar3 = -(((((param_2[1] - (float)param_3[1]) * 2.0) / (float)param_3[3] - 1.0) * fVar1) /
           param_4[5]) - param_5[0xd];
  fVar1 = -fVar1 - param_5[0xe];
  *param_1 = param_5[2] * fVar1 + *param_5 * fVar2 + param_5[1] * fVar3;
  param_1[1] = param_5[6] * fVar1 + param_5[4] * fVar2 + param_5[5] * fVar3;
  param_1[2] = fVar1 * param_5[10] + param_5[9] * fVar3 + param_5[8] * fVar2;
  return;
}

// 00DB6DA0  FUN_00db6da0  size=50  [between]
void __thiscall FUN_00db6da0(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf0) + param_2);
  *(float *)(param_1 + 0xf0) = (float)fVar1;
  *(float *)(param_1 + 0xe0) = (float)-fVar1;
  FUN_00da7460();
  return;
}

// 00DB6DE0  FUN_00db6de0  size=62  [between]
void __thiscall FUN_00db6de0(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf4) + param_2);
  *(float *)(param_1 + 0xf4) = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)3.1415927));
  *(float *)(param_1 + 0xe4) = (float)fVar1;
  FUN_00da7460();
  return;
}

// 00DB6E20  FUN_00db6e20  size=431  [between]
void __thiscall FUN_00db6e20(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined1 local_50 [76];
  
  local_80 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0);
  local_7c = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4);
  local_78 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
  local_74 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xac);
  FUN_00db5c70(&local_80,&local_80);
  local_90 = *param_3 - *(float *)(param_1 + 0xa0);
  local_8c = param_3[1] - *(float *)(param_1 + 0xa4);
  local_88 = param_3[2] - *(float *)(param_1 + 0xa8);
  local_84 = param_3[3] - *(float *)(param_1 + 0xac);
  if (0.0 <= local_88 * local_78 + local_90 * local_80 + local_8c * local_7c) {
    FUN_00da70f0(&local_a0,param_3,param_1,param_1 + 0x20,param_1 + 0x60);
    *param_2 = local_a0;
    param_2[1] = local_9c;
    param_2[2] = local_98;
    param_2[3] = local_94;
    return;
  }
  FUN_00ddcfe0(local_50,param_1 + 0xc0,0x40490fdb);
  D3DXVec3TransformNormal(&local_90,&local_90,local_50);
  fStack_ac = local_9c + *(float *)(param_1 + 0xa0);
  fStack_a8 = *(float *)(param_1 + 0xa4) + local_98;
  fStack_a4 = *(float *)(param_1 + 0xa8) + local_94;
  local_a0 = *(float *)(param_1 + 0xac) + local_90;
  FUN_00da70f0(&fStack_6c,&fStack_ac,param_1,param_1 + 0x20,param_1 + 0x60);
  iVar1 = FUN_00f98a90();
  *param_2 = (float)iVar1 - fStack_6c;
  param_2[1] = fStack_68;
  param_2[2] = fStack_64 * -1.0;
  param_2[3] = fStack_60;
  return;
}

// 00DB6FD0  FUN_00db6fd0  size=344  [between]
void __thiscall FUN_00db6fd0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_8c;
  float fStack_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  fVar1 = param_3[2];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    FUN_00db6c80(&local_70,param_3,param_1,param_1 + 0x20,param_1 + 0x60);
    *param_2 = local_70;
    param_2[1] = local_6c;
    param_2[2] = local_68;
    param_2[3] = local_64;
    return;
  }
  local_70 = *param_3;
  local_6c = param_3[1];
  local_68 = param_3[2];
  local_64 = param_3[3];
  fVar4 = (float)FUN_00f98a90();
  local_70 = (float)(int)fVar4 - local_70;
  local_68 = local_68 * -1.0;
  FUN_00db6c80(&local_60,&local_70,param_1,param_1 + 0x20,param_1 + 0x60);
  local_80 = local_60 - *(float *)(param_1 + 0xa0);
  local_7c = local_5c - *(float *)(param_1 + 0xa4);
  local_78 = local_58 - *(float *)(param_1 + 0xa8);
  local_74 = local_54 - *(float *)(param_1 + 0xac);
  FUN_00ddcfe0(local_50,param_1 + 0xc0,0x40490fdb);
  D3DXVec3TransformNormal(&local_80,&local_80,local_50);
  fVar1 = *(float *)(param_1 + 0xa4);
  fVar2 = *(float *)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0xac);
  *param_2 = fStack_8c + *(float *)(param_1 + 0xa0);
  param_2[1] = fVar1 + fStack_88;
  param_2[2] = fVar2 + fVar4;
  param_2[3] = fVar3 + local_80;
  return;
}

// 00DB7130  FUN_00db7130  size=104  [between]
void FUN_00db7130(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_2c = *(undefined4 *)(param_3 + 4);
  local_28 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  local_30 = param_4;
  FUN_00db6fd0(&local_20,&local_30);
  *param_1 = *param_2 - local_20;
  param_1[1] = param_2[1] - local_1c;
  param_1[2] = param_2[2] - local_18;
  param_1[3] = param_2[3] - local_14;
  return;
}

// 00DB71A0  FUN_00db71a0  size=322  [between]
float10 __thiscall FUN_00db71a0(int param_1,float *param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  float10 fVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18;
  float local_14;
  
  local_2c = *(float *)(param_3 + 4);
  local_24 = *(float *)(param_3 + 0xc);
  local_30 = param_4;
  local_28 = ABS(*(float *)(param_3 + 8));
  FUN_00db6fd0(local_20,&local_30);
  local_30 = *param_2 - *(float *)(param_1 + 0xa0);
  local_28 = param_2[2] - *(float *)(param_1 + 0xa8);
  local_24 = param_2[3] - *(float *)(param_1 + 0xac);
  local_2c = 0.0;
  iVar1 = Camera::Math::safeNormalize(&local_30,&local_30);
  if (iVar1 != 0) {
    local_40 = local_20[0] - *(float *)(param_1 + 0xa0);
    local_38 = local_18 - *(float *)(param_1 + 0xa8);
    local_34 = local_14 - *(float *)(param_1 + 0xac);
    local_3c = 0.0;
    iVar1 = Camera::Math::safeNormalize(&local_40,&local_40);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00ddbb50(local_38 * local_28 + local_3c * local_2c + local_40 * local_30)
      ;
      if (param_5 == 0.0) {
        if (0.0 < local_40 * local_28 - local_38 * local_30) {
          fVar2 = -fVar2;
        }
      }
      else if (param_5 <= 0.0) {
        return -fVar2;
      }
      return fVar2;
    }
  }
  return (float10)0;
}

// 00DB72F0  FUN_00db72f0  size=247  [between]
float10 FUN_00db72f0(float *param_1,float *param_2,float param_3,float param_4)

{
  float10 fVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [7];
  
  local_30 = *param_1 - *param_2;
  local_2c = param_1[1] - param_2[1];
  local_28 = param_1[2] - param_2[2];
  local_24 = param_1[3] - param_2[3];
  fVar1 = (float10)FUN_00da7260(&local_30);
  fVar1 = ABS(fVar1);
  if (fVar1 < (float10)param_3) {
    FUN_00db6e20(local_20,param_1);
    FUN_00db6e20(&local_30,param_2);
    fVar1 = (float10)(float)fVar1;
    if (local_20[0] < local_30) {
      return fVar1 - (float10)param_3;
    }
    return (float10)param_3 - fVar1;
  }
  if (fVar1 <= (float10)param_4) {
    return (float10)0;
  }
  FUN_00db6e20(&local_30,param_1);
  FUN_00db6e20(local_20,param_2);
  fVar1 = (float10)(float)fVar1;
  if (local_30 < local_20[0]) {
    return fVar1 - (float10)param_4;
  }
  return (float10)param_4 - fVar1;
}

// 00DB73F0  FUN_00db73f0  size=509  [between]
float10 __thiscall FUN_00db73f0(int param_1,int param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float local_e4;
  int local_e0;
  float *local_dc;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_b8;
  int local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90 [4];
  float afStack_80 [4];
  float afStack_70 [4];
  float local_60 [4];
  undefined1 local_50 [76];
  
  iVar3 = FUN_00f98a90();
  fVar1 = (float)iVar3;
  local_e0 = 0;
  local_e4 = (float)(float10)0;
  if (param_5 < 1) {
    return (float10)0;
  }
  local_b8 = fVar1 * 0.5;
  local_dc = param_3;
  local_b4 = (int)param_3 - param_2;
  pfVar6 = (float *)(param_2 + 8);
  do {
    pfVar4 = pfVar6 + -2;
    FUN_00db6e20(local_60,pfVar4);
    local_90[0] = (ABS(*local_dc) + ABS(*(float *)(local_b4 + (int)pfVar6))) * 0.5;
    local_90[1] = 0.0;
    local_90[2] = 0.0;
    FUN_00ddc1d0(local_50,param_1 + 0xe0,5);
    D3DXVec3TransformNormal(&local_d0,local_90,local_50);
    if (local_b8 < local_60[0]) {
      fVar2 = (1.0 - *(float *)(param_4 + local_e0 * 4)) * fVar1;
      fStack_a0 = local_d0 + *pfVar4;
      fStack_9c = pfVar6[-1] + fStack_cc;
      fStack_98 = *pfVar6 + fStack_c8;
      fStack_94 = pfVar6[1] + fStack_c4;
      FUN_00db6e20(afStack_80,&fStack_a0);
      if (fVar2 < afStack_80[0] == (fVar2 == afStack_80[0])) {
        pfVar5 = afStack_80;
        pfVar4 = &fStack_a0;
        goto LAB_00db759e;
      }
    }
    else {
      fVar2 = *(float *)(param_4 + local_e0 * 4) * fVar1;
      fStack_b0 = *pfVar4 - local_d0;
      fStack_ac = pfVar6[-1] - fStack_cc;
      fStack_a8 = *pfVar6 - fStack_c8;
      fStack_a4 = pfVar6[1] - fStack_c4;
      FUN_00db6e20(afStack_70,&fStack_b0);
      if (fVar2 < afStack_70[0]) {
        pfVar5 = afStack_70;
        pfVar4 = &fStack_b0;
LAB_00db759e:
        fVar7 = (float10)FUN_00db71a0(pfVar4,pfVar5,fVar2,0);
        local_e4 = (float)fVar7;
      }
    }
    local_dc = local_dc + 4;
    local_e0 = local_e0 + 1;
    pfVar6 = pfVar6 + 4;
    if (param_5 <= local_e0) {
      return (float10)local_e4;
    }
  } while( true );
}

// 00DB75F0  FUN_00db75f0  size=345  [between]
float10 __thiscall FUN_00db75f0(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_3;
  local_14 = param_3[3];
  local_1c = (float)param_4;
  local_18 = ABS(param_3[2]);
  FUN_00db6fd0(&local_30,&local_20);
  fVar1 = *param_2 - *(float *)(param_1 + 0xa0);
  local_1c = param_2[1] - *(float *)(param_1 + 0xa4);
  fVar2 = param_2[2] - *(float *)(param_1 + 0xa8);
  fVar3 = local_30 - *(float *)(param_1 + 0xa0);
  local_2c = local_2c - *(float *)(param_1 + 0xa4);
  local_28 = local_28 - *(float *)(param_1 + 0xa8);
  local_20 = 0.0;
  local_18 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  local_30 = 0.0;
  local_28 = SQRT(fVar3 * fVar3 + local_28 * local_28);
  iVar4 = Camera::Math::safeNormalize(&local_20,&local_20);
  if ((iVar4 != 0) && (iVar4 = Camera::Math::safeNormalize(&local_30,&local_30), iVar4 != 0)) {
    fVar5 = (float10)FUN_00ddbb50(local_28 * local_18 + local_30 * local_20 + local_2c * local_1c);
    if (((float10)0.001 <= ABS(fVar5)) && (ABS(fVar5) <= (float10)0.999)) {
      if (local_28 * local_1c - local_2c * local_18 <= 0.0) {
        return fVar5;
      }
      return -fVar5;
    }
  }
  return (float10)0;
}

// 00DB7750  FUN_00db7750  size=283  [between]
void __fastcall FUN_00db7750(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 *puStack_7c;
  undefined1 *puStack_78;
  float local_74;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_60 = *(undefined4 *)(param_1 + 0xc0);
  puStack_78 = local_50;
  local_5c = *(undefined4 *)(param_1 + 0xc4);
  local_58 = *(undefined4 *)(param_1 + 200);
  local_54 = *(undefined4 *)(param_1 + 0xcc);
  fVar2 = (float10)*(float *)(param_1 + 0xb0) - (float10)*(float *)(param_1 + 0xa0);
  fVar3 = (float10)*(float *)(param_1 + 0xb8) - (float10)*(float *)(param_1 + 0xa8);
  fVar4 = (float10)fpatan((float10)*(float *)(param_1 + 0xb4) - (float10)*(float *)(param_1 + 0xa4),
                          SQRT(fVar2 * fVar2 + fVar3 * fVar3));
  *(float *)(param_1 + 0xe0) = (float)fVar4;
  fVar2 = (float10)fpatan(-fVar2,-fVar3);
  *(float *)(param_1 + 0xe4) = (float)fVar2;
  local_74 = (float)-fVar2;
  puStack_7c = (undefined4 *)0xdb77e2;
  D3DXMatrixRotationY();
  puStack_7c = &local_58;
  puVar5 = auStack_68;
  D3DXVec3TransformNormal(puVar5,puVar5);
  fVar1 = *(float *)(param_1 + 0xe0);
  D3DXMatrixRotationX(auStack_64);
  D3DXVec3TransformNormal(&puStack_7c,&puStack_7c,auStack_6c);
  fVar2 = (float10)fpatan(-(float10)-fVar1,(float10)(float)puVar5);
  *(float *)(param_1 + 0xe8) = (float)fVar2;
  *(float *)(param_1 + 0xf0) = -*(float *)(param_1 + 0xe0);
  fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xe4) + 3.1415927);
  *(float *)(param_1 + 0xf4) = (float)fVar2;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xe8);
  return;
}

// 00DB7870  Camera::StateNodeTraitType<Camera::StateBattleFixed>::vf04  size=65  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateBattleFixed>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateBattleFixed::vftable;
    FUN_00a7c930();
    FUN_00a7c930();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB78C0  Camera::StateNodeTraitType<Camera::StateGallery>::vf04  size=33  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateGallery>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x30,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateGallery::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB78F0  Camera::StateNodeTraitType<Camera::StateDiveKill>::vf04  size=62  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateDiveKill>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x100,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateDiveKill::vftable;
    FUN_00a7c930();
    FUN_00e240c0();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7930  Camera::StateNodeTraitType<Camera::StateSlashingTarget>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateSlashingTarget>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateSlashingTarget::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7960  Camera::StateNodeTraitType<Camera::StateSubWeaponAiming>::vf04  size=33  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateSubWeaponAiming>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x30,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateSubWeaponAiming::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7990  Camera::StateNodeTraitType<Camera::StateAnimation>::vf04  size=33  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateAnimation>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateAnimation::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB79C0  Camera::StateNodeTraitType<Camera::StatePlayerDead>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StatePlayerDead>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xc0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StatePlayerDead::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB79F0  Camera::StateNodeTraitType<Camera::StateRail>::vf04  size=33  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateRail>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateRail::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7A20  Camera::StateNodeTraitType<Camera::StateReady>::vf04  size=33  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateReady>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateReady::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7A50  Camera::StateNodeTraitType<Camera::StateUniqueSituation>::vf04  size=33  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateUniqueSituation>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateUniqueSituation::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7A80  Camera::StateNodeTraitType<Camera::StateNormal>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateNormal>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateNormal::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7AB0  Camera::StateNodeTraitType<Camera::StateSlashingBehind>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateSlashingBehind>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xb0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateSlashingBehind::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DB7B10  Camera::StatePartsFollow::vf00  size=6  [class]
undefined * Camera::StatePartsFollow::vf00(void)

{
  return &DAT_01dc6404;
}

// 00DB7B20  Camera::StatePartsFollow::vf20  size=6  [class]
undefined ** Camera::StatePartsFollow::vf20(void)

{
  return &PTR_vftable_018ccd14;
}

// 00DB7B30  Camera::StatePartsFollow::vf1C  size=6  [class]
char * Camera::StatePartsFollow::vf1C(void)

{
  return "StatePartsFollow";
}

// 00DB7B50  Camera::StatePartsFollow::vf04  size=31  [class]
undefined4 * __thiscall Camera::StatePartsFollow::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DB7B80  Camera::StateLockOn::vf00  size=6  [class]
undefined * Camera::StateLockOn::vf00(void)

{
  return &DAT_01dc63ec;
}

// 00DB7B90  Camera::StateLockOn::vf20  size=6  [class]
undefined ** Camera::StateLockOn::vf20(void)

{
  return &PTR_vftable_018ccccc;
}

// 00DB7BA0  Camera::StateLockOn::vf1C  size=6  [class]
char * Camera::StateLockOn::vf1C(void)

{
  return "StateLockOn";
}

// 00DB7BC0  Camera::StateLockOn::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateLockOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DB7BF0  Camera::StateFps::vf00  size=6  [class]
undefined * Camera::StateFps::vf00(void)

{
  return &DAT_01dc63fc;
}

// 00DB7C00  Camera::StateFps::vf20  size=6  [class]
undefined ** Camera::StateFps::vf20(void)

{
  return &PTR_vftable_018cccfc;
}

// 00DB7C10  Camera::StateFps::vf1C  size=6  [class]
char * Camera::StateFps::vf1C(void)

{
  return "StateFps";
}

// 00DB7C30  Camera::StateFps::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateFps::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DB7C60  Camera::StateRadio::vf00  size=6  [class]
undefined * Camera::StateRadio::vf00(void)

{
  return &DAT_01dc640c;
}

// 00DB7C70  Camera::StateRadio::vf20  size=6  [class]
undefined ** Camera::StateRadio::vf20(void)

{
  return &PTR_vftable_018ccd2c;
}

// 00DB7C80  Camera::StateRadio::vf1C  size=6  [class]
char * Camera::StateRadio::vf1C(void)

{
  return "StateRadio";
}

// 00DB7CA0  Camera::StateRadio::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateRadio::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DB7CD0  Camera::StateSlashingNormal::vf00  size=6  [class]
undefined * Camera::StateSlashingNormal::vf00(void)

{
  return &DAT_01dc6428;
}

// 00DB7CE0  Camera::StateSlashingNormal::vf20  size=6  [class]
undefined ** Camera::StateSlashingNormal::vf20(void)

{
  return &PTR_vftable_018ccd80;
}

// 00DB7CF0  Camera::StateSlashingNormal::vf1C  size=6  [class]
char * Camera::StateSlashingNormal::vf1C(void)

{
  return "StateSlashingNormal";
}

// 00DB7D10  Camera::StateSlashingNormal::vf04  size=31  [class]
undefined4 * __thiscall Camera::StateSlashingNormal::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DB7E00  FUN_00db7e00  size=655  [between]
void __fastcall FUN_00db7e00(int param_1)

{
  void *_Dst;
  undefined1 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 *puStack_114;
  undefined1 *puStack_110;
  undefined4 *puStack_10c;
  int iStack_108;
  undefined4 *puStack_104;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [88];
  
  puStack_104 = (undefined4 *)0x0;
  iStack_108 = param_1 + 0x520;
  puStack_10c = &local_e0;
  puStack_110 = (undefined1 *)0xdb7e23;
  FUN_00ddc1d0();
  puStack_104 = &local_e0;
  iStack_108 = param_1 + 0x1d0;
  puStack_10c = &local_f0;
  puStack_110 = (undefined1 *)0xdb7e3c;
  D3DXVec3TransformNormal();
  if (*(float *)(param_1 + 0x4f0) != 0.0) {
    uStack_b4 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    local_e0 = 0;
    uStack_e4 = 0;
    uStack_e8 = 0;
    uStack_b0 = 0x3f800000;
    uStack_c4 = 0x3f800000;
    uStack_d8 = 0x3f800000;
    uStack_ec = 0x3f800000;
    auStack_70[0] = 0x3f800000;
    uStack_84 = 0x3f800000;
    uStack_98 = 0x3f800000;
    uStack_ac = 0x3f800000;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    uStack_a8 = 0;
    if (*(float *)(param_1 + 0x368) != 0.0) {
      puStack_110 = *(undefined1 **)(param_1 + 0x368);
      puStack_114 = (undefined4 *)auStack_5c;
      puStack_118 = (undefined4 *)0xdb7f19;
      D3DXMatrixRotationZ();
      puStack_118 = &uStack_b4;
      puStack_11c = auStack_64;
      D3DXMatrixMultiply(puStack_118);
    }
    if (*(float *)(param_1 + 0x364) != 0.0) {
      puStack_110 = *(undefined1 **)(param_1 + 0x364);
      puStack_114 = (undefined4 *)auStack_5c;
      puStack_118 = (undefined4 *)0xdb7f5a;
      D3DXMatrixRotationY();
      puStack_118 = &uStack_b4;
      puStack_11c = auStack_64;
      D3DXMatrixMultiply(puStack_118);
    }
    if (*(float *)(param_1 + 0x360) != 0.0) {
      puStack_110 = *(undefined1 **)(param_1 + 0x360);
      puStack_114 = (undefined4 *)auStack_5c;
      puStack_118 = (undefined4 *)0xdb7f97;
      D3DXMatrixRotationX();
      puStack_118 = &uStack_b4;
      puStack_11c = auStack_64;
      D3DXMatrixMultiply(puStack_118);
    }
    puStack_110 = (undefined1 *)(param_1 + 0x390);
    puStack_114 = &uStack_ac;
    puStack_118 = &uStack_ec;
    puStack_11c = (undefined1 *)0xdb7fc2;
    D3DXMatrixMultiply();
    puStack_11c = *(undefined1 **)(param_1 + 0x4f0);
    D3DXMatrixRotationZ(auStack_68);
    D3DXMatrixMultiply(&stack0xffffff00,auStack_70,&stack0xffffff00);
    uStack_8c = 0;
    uStack_88 = 0x3f800000;
    uStack_84 = 0;
    D3DXVec3TransformNormal(&puStack_11c,&uStack_8c,&puStack_10c);
  }
  puStack_110 = &stack0xffffff04;
  puStack_114 = (undefined4 *)(param_1 + 0x1c0);
  puStack_118 = (undefined4 *)(param_1 + 0x1b0);
  puStack_11c = (undefined1 *)(param_1 + 0xb0);
  thunk_FUN_00de01a0();
  _Dst = (void *)(param_1 + 0xf0);
  FID_conflict__memcpy(_Dst,(undefined1 *)(param_1 + 0xb0),0x40);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  puStack_118 = (undefined4 *)0xdb8089;
  puStack_114 = _Dst;
  puStack_110 = _Dst;
  D3DXMatrixTranspose();
  return;
}

// 00DB8090  FUN_00db8090  size=190  [between]
void __fastcall FUN_00db8090(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00db7e00();
  FUN_00de5aa0();
  FUN_00de5170();
  D3DXMatrixMultiply(param_1 + 0x200,param_1 + 0xb0,param_1 + 0x10);
  D3DXMatrixMultiply(param_1 + 0x240,param_1 + 0x50,param_1 + 0x130);
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  if ((*(int *)(param_1 + 0x350) != 0) && ((DAT_01bea084 & 0x80000000) == 0)) {
    FUN_00de59f0(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x348) = uVar1;
    *(undefined4 *)(param_1 + 0x344) = uVar2;
    FUN_00de6460(param_1 + 0x1b0,param_1 + 0x1c0,param_1 + 0x1d0);
  }
  return;
}

// 00DB8150  FUN_00db8150  size=11  [between]
void FUN_00db8150(void)

{
  FUN_00db5480();
  return;
}

// 00DB8210  FUN_00db8210  size=46  [between]
void __thiscall FUN_00db8210(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x4c + param_2 * 4);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x20))(), *(int *)(iVar2 + 8) == param_3)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c + param_2 * 4) = *(undefined4 *)(param_1 + param_3 * 4);
  return;
}

// 00DB8250  FUN_00db8250  size=107  [between]
void __fastcall FUN_00db8250(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x6e4);
  *(undefined4 *)(iVar1 + 100) = 0;
  iVar3 = 0;
  do {
    piVar2 = *(int **)(iVar1 + iVar3 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x13);
  if (*(int *)(param_1 + 0x6e4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x6e4));
  }
  FUN_00dd4920(*(undefined4 *)(param_1 + 0x6e8));
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  return;
}

// 00DB82C0  FUN_00db82c0  size=331  [between]
void __fastcall FUN_00db82c0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar2 = FUN_00db5740();
  if (iVar2 == 0) {
    fVar1 = *(float *)(param_1 + 0x8e8);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0x8e8) = *(float *)(param_1 + 0x8e8) - 1.0;
      return;
    }
    *(undefined4 *)(param_1 + 0x8ec) = 0;
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x720);
  puVar4 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (0.5 < ABS(local_1c * 0.003921569 * 0.3) || 0.5 < ABS(local_20 * 0.003921569 * 0.3)) {
    fVar1 = *(float *)(param_1 + 0x8e8);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0x8e8) = *(float *)(param_1 + 0x8e8) - 1.0;
      return;
    }
    *(undefined4 *)(param_1 + 0x8ec) = 0;
    return;
  }
  if (0.2 < ABS(local_14 * 0.003921569 * 0.1) || 0.2 < ABS(local_18 * 0.003921569 * 0.1)) {
    *(undefined4 *)(param_1 + 0x8ec) = 1;
    *(undefined4 *)(param_1 + 0x8e8) = 0x41f00000;
  }
  return;
}

// 00DB8410  FUN_00db8410  size=205  [between]
void __fastcall FUN_00db8410(int param_1)

{
  int iVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_24 = *(undefined4 *)(param_1 + 0x36c);
  local_30 = *(float *)(param_1 + 0x360) * 57.29578 * -1.0;
  local_2c = *(float *)(param_1 + 0x364) * 57.29578;
  local_28 = *(float *)(param_1 + 0x368) * 57.29578;
  iVar1 = FUN_00d46200(&local_30);
  if (iVar1 != 0) {
    local_20 = local_30 * -1.0 * 0.017453292;
    fVar2 = (float10)FUN_00ddba30(local_2c * 0.017453292 + 3.1415927);
    local_1c = (float)fVar2;
    local_18 = local_28 * 0.017453292;
    FUN_00da8ea0();
    *(float *)(param_1 + 0x360) = local_20;
    *(float *)(param_1 + 0x364) = local_1c;
    *(float *)(param_1 + 0x368) = local_18;
    *(undefined4 *)(param_1 + 0x36c) = local_14;
  }
  return;
}

// 00DB84E0  FUN_00db84e0  size=58  [between]
void __fastcall FUN_00db84e0(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00da45a0();
    return;
  }
  puVar2 = &DAT_01dc63e8;
  (**(code **)*puVar1)(&DAT_01dc63e8);
  FUN_00dd6d70(puVar2);
  FUN_00da45a0();
  return;
}

// 00DB8520  FUN_00db8520  size=58  [between]
void __fastcall FUN_00db8520(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00da46a0();
    return;
  }
  puVar2 = &DAT_01dc63e8;
  (**(code **)*puVar1)(&DAT_01dc63e8);
  FUN_00dd6d70(puVar2);
  FUN_00da46a0();
  return;
}

// 00DB85A0  FUN_00db85a0  size=81  [between]
void __thiscall FUN_00db85a0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = &DAT_01dc63e8;
    (**(code **)*puVar1)(&DAT_01dc63e8);
    FUN_00dd6d70(puVar2);
  }
  FUN_00da47a0(param_2,param_1 + 0x1b0,param_1 + 0x1c0);
  return;
}

// 00DB8600  FUN_00db8600  size=75  [between]
void __thiscall FUN_00db8600(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01dc63e8;
    (**(code **)*puVar1)(&DAT_01dc63e8);
    iVar2 = FUN_00dd6d70(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)puVar1;
  }
  if (0.0 < *(float *)(uVar3 + 0x94)) {
    *(undefined4 *)(uVar3 + 0x94) = param_2;
  }
  return;
}

// 00DB8650  FUN_00db8650  size=770  [between]
void __thiscall FUN_00db8650(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float unaff_ESI;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [20];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_5c [88];
  
  local_e0 = *param_2;
  local_dc = param_2[1];
  local_d8 = param_2[2];
  local_d4 = param_2[3];
  local_f0 = 0.0;
  local_ec = 1.3;
  local_e8 = 0.0;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db86b2:
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00db86cc;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00db86b2;
  }
  iVar6 = FUN_00a7c800();
LAB_00db86cc:
  D3DXVec3TransformNormal(&local_f0,&local_f0,iVar6 + 0x10);
  fVar1 = *(float *)(iVar6 + 0x40) + unaff_ESI;
  fStack_f8 = *(float *)(iVar6 + 0x44) + fStack_f8;
  fStack_f4 = *(float *)(iVar6 + 0x48) + fStack_f4;
  fStack_cc = local_ec - fVar1;
  fStack_c8 = local_e8 - fStack_f8;
  fStack_c4 = fStack_e4 - fStack_f4;
  fStack_c0 = local_e0 - local_f0;
  fVar2 = fStack_c4 * fStack_c4 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
  if ((param_4 * param_4 < fVar2) &&
     (((fStack_cc != 0.0 || (fStack_c8 != 0.0)) || (fStack_c4 != 0.0)))) {
    if (fVar2 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar4 = 0.0;
      fVar3 = 1.0;
    }
    else {
      FUN_00ddf460(&fStack_cc,&fStack_cc);
      fVar2 = fStack_c4;
      fVar3 = fStack_c8;
      fVar4 = fStack_cc;
    }
    local_ec = fVar4 * param_4 + fVar1;
    local_e8 = fVar3 * param_4 + fStack_f8;
    fStack_e4 = fVar2 * param_4 + fStack_f4;
    local_e0 = param_4 * fStack_c0 + local_f0;
  }
  FUN_00db6410(auStack_5c,param_1 + 0x1b0,param_1 + 0x1c0,param_1 + 0x1d0);
  D3DXMatrixInverse(auStack_9c,0,auStack_5c);
  D3DXVec3TransformNormal(&fStack_c8,&fStack_f8,auStack_a8);
  fStack_cc = fStack_7c + fStack_cc;
  fVar8 = ABS((float10)fStack_84 + (float10)local_d4) + (float10)param_3;
  local_d4 = (float)fVar8;
  fVar9 = ABS((float10)fStack_80 + (float10)fStack_d0) + (float10)param_3;
  fStack_d0 = (float)fVar9;
  fVar7 = (float10)0.08726646;
  fVar10 = (float10)*(float *)(param_1 + 0x94) - fVar7;
  if (fVar10 < fVar7) {
    fVar10 = fVar7;
  }
  fVar7 = (float10)fsin(fVar10);
  fVar10 = (float10)fcos(fVar10);
  fVar9 = ABS((fVar9 / fVar7) * fVar10 * (float10)*(float *)(param_1 + 0x90));
  fVar10 = ABS((fVar8 / fVar7) * fVar10);
  if (fVar10 < fVar9) {
    fVar10 = fVar9;
  }
  local_e8 = (float)fVar10;
  D3DXVec3TransformNormal(&fStack_c4,param_1 + 0x1c0,auStack_b4);
  if (0.0 <= fStack_f4 - (local_d8 - (fStack_88 + fStack_c8))) {
    return;
  }
  return;
}

// 00DB8960  FUN_00db8960  size=78  [between]
void __thiscall FUN_00db8960(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0x48);
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01dc63f0;
    (**(code **)*puVar1)(&DAT_01dc63f0);
    iVar2 = FUN_00dd6d70(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)puVar1;
  }
  if (param_2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(uVar4 + 4) = uVar3;
    return;
  }
  *(undefined4 *)(uVar4 + 4) = 0;
  return;
}

// 00DB89B0  FUN_00db89b0  size=136  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00db89b0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x6f0) == 1) {
    *(undefined4 *)(param_1 + 0x780) = 0;
    return;
  }
  if (param_2 != 0.0) {
    FUN_00da9380(0);
    *(undefined4 *)(extraout_ECX + 0x8bc) = 0;
    param_1 = extraout_ECX;
  }
  fVar2 = _DAT_01be942c * 8.0 * 0.017453292;
  fVar1 = -fVar2;
  if ((fVar1 <= param_2) && (fVar1 = param_2, fVar2 < param_2)) {
    *(float *)(param_1 + 0x780) = fVar2;
    return;
  }
  *(float *)(param_1 + 0x780) = fVar1;
  return;
}

// 00DB8A40  FUN_00db8a40  size=136  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00db8a40(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x6f0) == 1) {
    *(undefined4 *)(param_1 + 0x784) = 0;
    return;
  }
  if (param_2 != 0.0) {
    FUN_00da93f0(0);
    *(undefined4 *)(extraout_ECX + 0x8bc) = 0;
    param_1 = extraout_ECX;
  }
  fVar2 = _DAT_01be942c * 8.0 * 0.017453292;
  fVar1 = -fVar2;
  if ((fVar1 <= param_2) && (fVar1 = param_2, fVar2 < param_2)) {
    *(float *)(param_1 + 0x784) = fVar2;
    return;
  }
  *(float *)(param_1 + 0x784) = fVar1;
  return;
}

// 00DB8AD0  FUN_00db8ad0  size=469  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00db8ad0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined4 local_14;
  
  fVar2 = _DAT_01be942c + *(float *)(param_1 + 0x380);
  if (fVar2 < *(float *)(param_1 + 0x37c)) {
    if (*(int *)(param_1 + 0x8c8) != 2) {
      fVar2 = _DAT_01be942c + *(float *)(param_1 + 0x380);
      *(float *)(param_1 + 0x380) = fVar2;
      FUN_00da0060(fVar2 / *(float *)(param_1 + 0x37c));
      return;
    }
    *(float *)(param_1 + 0x380) = fVar2;
    fVar2 = fVar2 / *(float *)(param_1 + 0x37c);
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = 1.0, fVar2 <= 1.0)) {
      fVar3 = fVar2;
    }
    fVar4 = (float10)FUN_00da6b30(fVar3,0x3fb33333);
    FUN_00da0060((float)fVar4);
    return;
  }
  FUN_00da01f0(param_1 + 0x4b0);
  pfVar1 = (float *)(param_1 + 0x490);
  if (((*(float *)(param_1 + 0x490) == 0.0) && (*(float *)(param_1 + 0x494) == 0.0)) &&
     (*(float *)(param_1 + 0x498) == 0.0)) {
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x49c) = local_14;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x4a8);
    return;
  }
  fVar2 = *(float *)(param_1 + 0x494) * *(float *)(param_1 + 0x494) + *pfVar1 * *pfVar1 +
          *(float *)(param_1 + 0x498) * *(float *)(param_1 + 0x498);
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(pfVar1,pfVar1);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x4a8);
    return;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *pfVar1 = 0.0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x4a8);
  return;
}

// 00DB8CB0  Camera::Math::safePositionTargetXz_2  size=388  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Camera::Math::safePositionTargetXz_2
          (int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x4b0) = *param_2;
  pfVar1 = (float *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b4) = param_2[1];
  *(undefined4 *)(param_1 + 0x4b8) = param_2[2];
  *(undefined4 *)(param_1 + 0x4bc) = param_2[3];
  *(undefined4 *)(param_1 + 0x4c0) = *param_3;
  *(undefined4 *)(param_1 + 0x4c4) = param_3[1];
  *(undefined4 *)(param_1 + 0x4c8) = param_3[2];
  *(undefined4 *)(param_1 + 0x4cc) = param_3[3];
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = local_14;
  *(undefined4 *)(param_1 + 0x4e0) = *param_4;
  *(undefined4 *)(param_1 + 0x4e4) = param_4[1];
  *(undefined4 *)(param_1 + 0x4e8) = param_4[2];
  *(undefined4 *)(param_1 + 0x4ec) = param_4[3];
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = param_5;
  fVar2 = *pfVar1 - *(float *)(param_1 + 0x4c0);
  fVar3 = *(float *)(param_1 + 0x4b8) - *(float *)(param_1 + 0x4c8);
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 0.05) {
    FUN_00dd5650(&DAT_016c3ec0);
    *(float *)(param_1 + 0x4c0) = _DAT_01bea920 * 0.05 + *pfVar1;
    *(float *)(param_1 + 0x4c8) = _DAT_01bea928 * 0.05 + *(float *)(param_1 + 0x4b8);
  }
  fVar2 = *pfVar1 - *(float *)(param_1 + 0x4c0);
  fVar4 = *(float *)(param_1 + 0x4b4) - *(float *)(param_1 + 0x4c4);
  fVar3 = *(float *)(param_1 + 0x4b8) - *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4f4) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  FUN_00da01f0(pfVar1);
  FUN_00da01f0(pfVar1);
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00de5d10(param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x94) = param_5;
  return;
}

// 00DB8E60  FUN_00db8e60  size=139  [callgraph]
void __thiscall FUN_00db8e60(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0x18);
  *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0x4c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01dc6404;
    (**(code **)*puVar1)(&DAT_01dc6404);
    iVar3 = FUN_00dd6d70(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)puVar1;
  }
  *(undefined4 *)(uVar2 + 0x40) = param_4;
  *(undefined4 *)(uVar2 + 4) = param_2;
  *(undefined4 *)(uVar2 + 0x44) = 0;
  *(undefined4 *)(uVar2 + 0x48) = 0x3f91eb85;
  *(undefined4 *)(uVar2 + 0x4c) = 0;
  *(undefined4 *)(uVar2 + 0x10) = *param_3;
  *(undefined4 *)(uVar2 + 0x14) = param_3[1];
  *(undefined4 *)(uVar2 + 0x18) = param_3[2];
  *(undefined4 *)(uVar2 + 0x1c) = param_3[3];
  *(undefined4 *)(uVar2 + 0x20) = param_3[4];
  *(undefined4 *)(uVar2 + 0x24) = param_3[5];
  *(undefined4 *)(uVar2 + 0x28) = param_3[6];
  *(undefined4 *)(uVar2 + 0x2c) = param_3[7];
  *(undefined4 *)(uVar2 + 0x30) = param_3[8];
  return;
}

// 00DB8EF0  FUN_00db8ef0  size=102  [callgraph]
void __thiscall FUN_00db8ef0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x6e4) + 0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01dc6400;
    (**(code **)*puVar1)(&DAT_01dc6400);
    iVar3 = FUN_00dd6d70(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)puVar1;
  }
  *(undefined4 *)(uVar2 + 0x10) = *param_2;
  *(undefined4 *)(uVar2 + 0x14) = param_2[1];
  *(undefined4 *)(uVar2 + 0x18) = param_2[2];
  *(undefined4 *)(uVar2 + 0x1c) = param_2[3];
  *(undefined4 *)(uVar2 + 0x20) = *param_3;
  *(undefined4 *)(uVar2 + 0x24) = param_3[1];
  *(undefined4 *)(uVar2 + 0x28) = param_3[2];
  *(undefined4 *)(uVar2 + 0x2c) = param_3[3];
  return;
}

// 00DB8F60  FUN_00db8f60  size=294  [callgraph]
void __thiscall FUN_00db8f60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_1[8] = *param_4;
  param_1[9] = param_4[1];
  param_1[10] = param_4[2];
  param_1[0xb] = param_4[3];
  param_1[0xc] = 0.0;
  param_1[0xd] = 1.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = local_14;
  local_30 = *param_3 - *param_2;
  local_28 = param_3[2] - param_2[2];
  local_24 = param_3[3] - param_2[3];
  local_2c = 0.0;
  FUN_00db5c70(&local_30,&local_30);
  FUN_00db5fe0(&local_20,param_1 + 0xc,&local_30);
  fVar1 = param_1[8] * -1.0;
  fVar2 = param_1[10] * -1.0;
  fVar6 = local_30 * fVar2 + local_20 * fVar1;
  fVar5 = fVar2 * local_2c + param_1[9] + local_1c * fVar1;
  fVar7 = local_18 * fVar1 + local_28 * fVar2;
  fVar4 = local_24 * fVar2 + local_14 * fVar1;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 - fVar6;
  param_1[1] = fVar1 - fVar5;
  param_1[2] = fVar2 - fVar7;
  param_1[3] = fVar3 - fVar4;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  param_1[4] = *param_3 - fVar6;
  param_1[5] = fVar1 - fVar5;
  param_1[6] = fVar2 - fVar7;
  param_1[7] = fVar3 - fVar4;
  return;
}

// 00DB9090  FUN_00db9090  size=255  [callgraph]
void __thiscall FUN_00db9090(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_40 = param_1[4] - *param_1;
  local_38 = param_1[6] - param_1[2];
  local_34 = param_1[7] - param_1[3];
  local_3c = 0.0;
  if ((local_40 == 0.0) && (local_38 == 0.0)) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return;
  }
  FUN_00db5c70(&local_40,&local_40);
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  FUN_00db5fe0(&local_30,&local_20,&local_40);
  fVar2 = param_1[8] * -1.0;
  fVar1 = param_1[9];
  fVar3 = param_1[10] * -1.0;
  *param_2 = local_40 * fVar3 + local_30 * fVar2;
  param_2[1] = fVar3 * local_3c + fVar1 + local_2c * fVar2;
  param_2[2] = local_28 * fVar2 + local_38 * fVar3;
  param_2[3] = local_34 * fVar3 + local_24 * fVar2;
  return;
}

// 00DB9190  FUN_00db9190  size=67  [callgraph]
float * __thiscall FUN_00db9190(float *param_1,float *param_2)

{
  float *pfVar1;
  undefined1 local_20 [28];
  
  pfVar1 = (float *)FUN_00db9090(local_20);
  *param_2 = *pfVar1 + *param_1;
  param_2[1] = pfVar1[1] + param_1[1];
  param_2[2] = pfVar1[2] + param_1[2];
  param_2[3] = pfVar1[3] + param_1[3];
  return param_2;
}

// 00DB91E0  FUN_00db91e0  size=68  [callgraph]
float * __thiscall FUN_00db91e0(int param_1,float *param_2)

{
  float *pfVar1;
  undefined1 local_20 [28];
  
  pfVar1 = (float *)FUN_00db9090(local_20);
  *param_2 = *pfVar1 + *(float *)(param_1 + 0x10);
  param_2[1] = pfVar1[1] + *(float *)(param_1 + 0x14);
  param_2[2] = pfVar1[2] + *(float *)(param_1 + 0x18);
  param_2[3] = pfVar1[3] + *(float *)(param_1 + 0x1c);
  return param_2;
}

// 00DB9270  FUN_00db9270  size=124  [callgraph]
void __fastcall FUN_00db9270(float *param_1)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00db9090(&local_20);
  *param_1 = *param_1 + local_20;
  param_1[1] = param_1[1] + local_1c;
  param_1[2] = param_1[2] + local_18;
  param_1[3] = param_1[3] + local_14;
  param_1[4] = param_1[4] + local_20;
  param_1[5] = param_1[5] + local_1c;
  param_1[6] = local_18 + param_1[6];
  param_1[7] = local_14 + param_1[7];
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  return;
}

// 00DB92F0  FUN_00db92f0  size=562  [callgraph]
void __thiscall FUN_00db92f0(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00db9090(&local_70);
  local_60 = local_70 + param_1[4];
  local_5c = param_1[5] + local_6c;
  local_58 = param_1[6] + local_68;
  local_54 = param_1[7] + local_64;
  local_50 = *param_1 + local_70;
  local_4c = param_1[1] + local_6c;
  local_48 = local_68 + param_1[2];
  local_44 = local_64 + param_1[3];
  local_40 = param_1[4] - *param_1;
  local_3c = param_1[5] - param_1[1];
  local_38 = param_1[6] - param_1[2];
  local_34 = param_1[7] - param_1[3];
  param_1[8] = *param_3;
  param_1[9] = param_3[1];
  param_1[10] = param_3[2];
  param_1[0xb] = param_3[3];
  pfVar1 = (float *)FUN_00db9090(&local_20);
  local_70 = *pfVar1;
  local_6c = pfVar1[1];
  local_68 = pfVar1[2];
  local_64 = pfVar1[3];
  local_30 = *param_2 + local_70;
  local_2c = param_2[1] + local_6c;
  local_28 = local_68 + param_2[2];
  local_24 = local_64 + param_2[3];
  local_80 = local_40;
  local_78 = local_38;
  local_74 = local_34;
  local_7c = 0.0;
  FUN_00db5c70(&local_80,&local_80);
  local_80 = local_80 * -1.0;
  local_7c = local_7c * -1.0;
  local_78 = local_78 * -1.0;
  local_74 = local_74 * -1.0;
  iVar2 = FUN_00da6880(&local_20,&local_30,&local_80,&local_50,&local_40);
  if (iVar2 != 0) {
    local_60 = local_20;
    local_5c = local_1c;
    local_58 = local_18;
    local_54 = local_14;
  }
  *param_1 = local_50 - local_70;
  param_1[1] = local_4c - local_6c;
  param_1[2] = local_48 - local_68;
  param_1[3] = local_44 - local_64;
  param_1[4] = local_60 - local_70;
  param_1[5] = local_5c - local_6c;
  param_1[6] = local_58 - local_68;
  param_1[7] = local_54 - local_64;
  param_1[0x11] =
       SQRT((param_1[4] - *param_1) * (param_1[4] - *param_1) +
            (param_1[5] - param_1[1]) * (param_1[5] - param_1[1]) +
            (param_1[6] - param_1[2]) * (param_1[6] - param_1[2]));
  return;
}

// 00DB9530  FUN_00db9530  size=416  [callgraph]
void __thiscall FUN_00db9530(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00db9090(&local_30);
  fVar1 = local_30 + param_1[4];
  fVar3 = param_1[5] + local_2c;
  fVar2 = param_1[6] + local_28;
  local_40 = *param_1 + local_30;
  local_3c = param_1[1] + local_2c;
  local_38 = param_1[2] + local_28;
  local_34 = param_1[3] + local_24;
  local_30 = fVar1 - *param_2;
  local_2c = fVar3 - param_2[1];
  local_28 = fVar2 - param_2[2];
  local_44 = (param_1[7] + local_24) - param_2[3];
  param_1[4] = fVar1 - local_30;
  param_1[5] = fVar3 - local_2c;
  param_1[6] = fVar2 - local_28;
  param_1[7] = (param_1[7] + local_24) - local_44;
  local_44 = local_34 - local_44;
  *param_1 = local_40 - local_30;
  param_1[1] = local_3c - local_2c;
  param_1[2] = local_38 - local_28;
  param_1[3] = local_44;
  local_50 = param_1[4] - (local_40 - local_30);
  local_48 = param_1[6] - (local_38 - local_28);
  local_44 = param_1[7] - local_44;
  local_4c = 0.0;
  if ((local_50 != 0.0) || (local_48 != 0.0)) {
    FUN_00db5c70(&local_50,&local_50);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
    FUN_00db5fe0(&local_20,&local_40,&local_50);
    param_1[8] = local_18 * local_28 * -1.0 - (local_20 * local_30 + local_1c * local_2c);
    param_1[10] = local_48 * local_28 * -1.0 - (local_2c * local_4c + local_50 * local_30);
  }
  return;
}

// 00DB96D0  FUN_00db96d0  size=127  [callgraph]
void __fastcall FUN_00db96d0(float *param_1)

{
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  local_40 = param_1[4] - *param_1;
  local_3c = param_1[5] - param_1[1];
  local_38 = param_1[6] - param_1[2];
  local_34 = param_1[7] - param_1[3];
  FUN_00db5c70(&local_40,&local_40);
  FUN_00db5e90(local_30,param_1 + 0xc,&local_40);
  FUN_00db5fe0(local_20,local_30,&local_40);
  FUN_00db61d0(param_1 + 0xc,&local_40,local_20);
  return;
}

// 00DB9750  FUN_00db9750  size=292  [callgraph]
undefined4 __thiscall FUN_00db9750(float *param_1,undefined4 param_2)

{
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_80 = param_1[4] - *param_1;
  local_7c = param_1[5] - param_1[1];
  local_78 = param_1[6] - param_1[2];
  local_74 = param_1[7] - param_1[3];
  FUN_00db5c70(&local_80,&local_80);
  FUN_00db5e90(&local_70,param_1 + 0xc,&local_80);
  FUN_00db5fe0(&local_60,&local_70,&local_80);
  FUN_00db61d0(&local_70,&local_80,&local_60);
  local_50 = local_60;
  local_4c = local_5c;
  local_48 = local_58;
  local_44 = 0;
  local_40 = local_70;
  local_3c = local_6c;
  local_38 = local_68;
  local_34 = 0;
  local_30 = local_80;
  local_2c = local_7c;
  local_28 = local_78;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_00ddba00(param_2,&local_50);
  return param_2;
}

// 00DB9880  FUN_00db9880  size=974  [callgraph]
void __thiscall FUN_00db9880(int param_1,float param_2)

{
  float fVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  float10 fVar9;
  float fStack_38;
  float fStack_34;
  undefined4 auStack_30 [6];
  float fStack_18;
  float fStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db98a6:
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00db98a6;
  }
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  FUN_00db89b0(0);
  FUN_00db8a40(0);
  iVar4 = *(int *)(param_1 + 0x6e8);
  puVar6 = (undefined4 *)(param_1 + 0x720);
  puVar7 = auStack_30;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  fStack_38 = fStack_18 * 0.003921569 * 0.1;
  fStack_34 = fStack_14 * 0.003921569 * 0.1;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x344) != 0)) {
    fStack_38 = 0.0;
    fStack_34 = 0.0;
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9974:
    if ((*(int *)(param_1 + 0x378) != 0) &&
       (iVar4 = (**(code **)(**(int **)(param_1 + 0x378) + 0x32c))(), iVar4 != 0)) {
      fStack_38 = 0.0;
      fStack_34 = 0.0;
    }
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00db9974;
  }
  if (0.1 < ABS(fStack_38)) {
    FUN_00db8a40(-(ABS(fStack_38) * fStack_38) * 0.4 * param_2);
    iVar4 = *(int *)(param_1 + 0x6e8);
    *(undefined4 *)(param_1 + 0x7c0) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x774) = 0;
    *(undefined4 *)(iVar4 + 0x328) = 0x41200000;
    *(undefined4 *)(iVar4 + 0x31c) = 0;
    *(undefined4 *)(iVar4 + 0x314) = 0;
  }
  if (0.2 < ABS(fStack_34)) {
    FUN_00db89b0(-(ABS(fStack_34) * fStack_34) * -0.4 * param_2);
    iVar4 = *(int *)(param_1 + 0x6e8);
    *(undefined4 *)(param_1 + 0x7c0) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x774) = 0;
    *(undefined4 *)(iVar4 + 0x328) = 0x41200000;
    *(undefined4 *)(iVar4 + 0x31c) = 0;
    *(undefined4 *)(iVar4 + 0x314) = 0;
    iVar4 = *(int *)(param_1 + 0x6e8);
    uVar2 = *(ushort *)PTR_DAT_018bc3a8;
    if ((*(uint *)(iVar4 + 0xfc) & 0x2000000) != 0) {
      uVar2 = *(ushort *)(iVar4 + 0x13c);
    }
    *(float *)(iVar4 + 0x220) = (float)uVar2;
    *(undefined4 *)(iVar4 + 0x224) = 0;
  }
  bVar8 = true;
  if (*(int *)(param_1 + 0x774) == 0) goto LAB_00db9b2a;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9ae3:
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) goto LAB_00db9af2;
    iVar4 = 0;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00db9ae3;
LAB_00db9af2:
    iVar4 = FUN_00a7c800();
  }
  fVar9 = (float10)FUN_00ddba30(*(float *)(iVar4 + 0x94) - *(float *)(param_1 + 0x364));
  bVar8 = *(int *)(param_1 + 0x774) == 0;
  *(float *)(param_1 + 0x77c) = (float)(fVar9 * (float10)0.25);
LAB_00db9b2a:
  if (!bVar8) {
    fVar9 = (float10)FUN_00ddba30(0.12217305 - *(float *)(param_1 + 0x360));
    *(float *)(param_1 + 0x778) = (float)(fVar9 * (float10)0.25);
  }
  if (((((*(float *)(param_1 + 0x77c) <= 0.017453292) &&
        (fVar1 = *(float *)(param_1 + 0x77c),
        !NAN(fVar1) && -0.017453292 < fVar1 != (fVar1 == -0.017453292))) &&
       (*(float *)(param_1 + 0x778) <= 0.017453292)) &&
      (fVar1 = *(float *)(param_1 + 0x778),
      !NAN(fVar1) && -0.017453292 < fVar1 != (fVar1 == -0.017453292))) ||
     ((10.0 < *(float *)(param_1 + 0x798) || (*(int *)(param_1 + 0x8b4) != 0)))) {
    *(undefined4 *)(param_1 + 0x798) = 0;
    *(undefined4 *)(param_1 + 0x774) = 0;
    *(undefined4 *)(param_1 + 0x778) = 0;
    *(undefined4 *)(param_1 + 0x77c) = 0;
  }
  else {
    *(float *)(param_1 + 0x798) = *(float *)(param_1 + 0x798) + 1.0;
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 0;
  }
  fVar9 = (float10)FUN_00da7500();
  *(float *)(param_1 + 0x780) = (float)(fVar9 * (float10)*(float *)(param_1 + 0x780));
  fVar9 = (float10)FUN_00da7570();
  fVar9 = fVar9 * (float10)*(float *)(param_1 + 0x784);
  *(float *)(param_1 + 0x784) = (float)fVar9;
  if ((float10)0 == fVar9) {
    return;
  }
  FUN_00da93f0((float)(float10)0);
  return;
}

// 00DB9C50  FUN_00db9c50  size=445  [callgraph]
void __fastcall FUN_00db9c50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9c7c:
    iVar8 = FUN_00a81330();
    if (iVar8 == 0) {
      return;
    }
  }
  else {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(1);
    if (iVar8 == 0) goto LAB_00db9c7c;
  }
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_20 = 0.0;
  *(undefined4 *)(param_1 + 0x8f4) = 1;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  FUN_00c78580(2000,&fStack_30);
  FUN_00c78580(0x7d1,&fStack_20);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9cfb:
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) goto LAB_00db9d0a;
    iVar8 = 0;
  }
  else {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(1);
    if (iVar8 == 0) goto LAB_00db9cfb;
LAB_00db9d0a:
    iVar8 = FUN_00a7c800();
  }
  fVar1 = *(float *)(iVar8 + 0x40) - fStack_30;
  fVar3 = *(float *)(iVar8 + 0x44) - fStack_2c;
  fVar2 = *(float *)(iVar8 + 0x48) - fStack_28;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9d60:
    iVar8 = FUN_00a81330();
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_00db9d7a;
    }
  }
  else {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(1);
    if (iVar8 == 0) goto LAB_00db9d60;
  }
  iVar8 = FUN_00a7c800();
LAB_00db9d7a:
  fVar4 = *(float *)(iVar8 + 0x40) - fStack_20;
  fVar6 = *(float *)(iVar8 + 0x44) - fStack_1c;
  fVar5 = *(float *)(iVar8 + 0x48) - fStack_18;
  if (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) <
      SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1)) {
    *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(param_1 + 0x4a4);
  }
  *(float *)(param_1 + 0x900) = fStack_30;
  *(float *)(param_1 + 0x904) = fStack_2c;
  *(float *)(param_1 + 0x908) = fStack_28;
  *(undefined4 *)(param_1 + 0x90c) = uStack_24;
  *(float *)(param_1 + 0x910) = fStack_20;
  *(float *)(param_1 + 0x914) = fStack_1c;
  *(float *)(param_1 + 0x918) = fStack_18;
  *(undefined4 *)(param_1 + 0x91c) = uStack_14;
  return;
}

// 00DB9E10  FUN_00db9e10  size=2222  [callgraph]
void __fastcall FUN_00db9e10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  float unaff_ESI;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9e41:
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      return;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00db9e41;
  }
  fStack_b0 = *(float *)(param_1 + 0x910) - *(float *)(param_1 + 0x900);
  fStack_ac = *(float *)(param_1 + 0x914) - *(float *)(param_1 + 0x904);
  fStack_a8 = *(float *)(param_1 + 0x918) - *(float *)(param_1 + 0x908);
  fStack_a4 = *(float *)(param_1 + 0x91c) - *(float *)(param_1 + 0x90c);
  if (((fStack_b0 != 0.0) || (fStack_ac != 0.0)) || (fStack_a8 != 0.0)) {
    fVar1 = fStack_a8 * fStack_a8 + fStack_ac * fStack_ac + fStack_b0 * fStack_b0;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_b0,&fStack_b0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_b0 = 0.0;
      fStack_ac = 1.0;
      fStack_a8 = 0.0;
    }
  }
  fStack_a0 = fStack_b0 * -1.0;
  fStack_9c = fStack_ac * -1.0;
  fStack_98 = fStack_a8 * -1.0;
  fStack_94 = fStack_a4 * -1.0;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00db9f8c:
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) goto LAB_00db9f9b;
    iVar6 = 0;
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00db9f8c;
LAB_00db9f9b:
    iVar6 = FUN_00a7c800();
  }
  fStack_70 = *(float *)(iVar6 + 0x40);
  fStack_68 = *(float *)(iVar6 + 0x48);
  fStack_64 = *(float *)(iVar6 + 0x4c);
  if (*(float *)(param_1 + 0x8f0) == -1.0) {
    fStack_a0 = fStack_70 - *(float *)(param_1 + 0x900);
    fStack_98 = fStack_68 - *(float *)(param_1 + 0x908);
    fStack_94 = fStack_64 - *(float *)(param_1 + 0x90c);
    fStack_9c = 0.0;
    fStack_54 = fStack_98 * fStack_98 + fStack_a0 * fStack_a0;
    fStack_84 = SQRT(fStack_54);
    if ((fStack_a0 != 0.0) || (fStack_98 != 0.0)) {
      if (fStack_54 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_9c = 1.0;
        fStack_a0 = 0.0;
        fStack_98 = 0.0;
      }
      else {
        FUN_00ddf460(&fStack_a0,&fStack_a0);
      }
    }
    *(float *)(param_1 + 0x8f0) =
         (fStack_98 * fStack_a8 + fStack_ac * fStack_9c + fStack_a0 * fStack_b0) * fStack_84;
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x900);
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x904);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x908);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x90c);
    *(float *)(param_1 + 0x4c0) = fStack_70;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(float *)(param_1 + 0x4c8) = fStack_68;
    *(float *)(param_1 + 0x4cc) = fStack_64;
    return;
  }
  fStack_80 = fStack_70 - *(float *)(param_1 + 0x910);
  fStack_78 = fStack_68 - *(float *)(param_1 + 0x918);
  fStack_74 = fStack_64 - *(float *)(param_1 + 0x91c);
  if (((fStack_80 == 0.0) && (-*(float *)(param_1 + 0x914) == 0.0)) && (fStack_78 == 0.0)) {
    return;
  }
  fStack_7c = 0.0;
  fVar1 = fStack_78 * fStack_78 + fStack_80 * fStack_80;
  fStack_84 = SQRT(fVar1);
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_80,&fStack_80);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_80 = 0.0;
    fStack_7c = 1.0;
    fStack_78 = 0.0;
  }
  fVar1 = (fStack_7c * fStack_9c + fStack_80 * fStack_a0 + fStack_78 * fStack_98) * fStack_84 +
          *(float *)(param_1 + 0x8f0);
  *(float *)(param_1 + 0x4b0) = fStack_a0 * fVar1 + *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x4b4) = fStack_9c * fVar1 + *(float *)(param_1 + 0x914);
  *(float *)(param_1 + 0x4b8) = fStack_98 * fVar1 + *(float *)(param_1 + 0x918);
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x91c) + fVar1 * fStack_94;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x90c);
  *(float *)(param_1 + 0x36c) = fStack_64;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  fStack_b8 = 1.0;
  FUN_00ddc1d0(auStack_50,(undefined4 *)(param_1 + 0x360),5);
  D3DXVec3TransformNormal(&fStack_c0,&fStack_c0,auStack_50);
  iVar6 = *(int *)(param_1 + 0x8f4);
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      iVar6 = FUN_00db5440();
      if (iVar6 == 0) goto LAB_00dba65c;
      pfVar7 = (float *)FUN_00da85d0();
      fVar1 = *pfVar7 - *(float *)(param_1 + 0x4b0);
      fVar4 = (pfVar7[1] + 1.4) - *(float *)(param_1 + 0x4b4);
      fVar3 = pfVar7[2] - *(float *)(param_1 + 0x4b8);
      fStack_c0 = pfVar7[3] - *(float *)(param_1 + 0x4bc);
      if (((fVar1 != 0.0) || (fVar4 != 0.0)) || (fVar3 != 0.0)) {
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&stack0xffffff34,&stack0xffffff34);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar3 = 0.0;
          fVar4 = 1.0;
          fVar1 = 0.0;
        }
      }
      fVar4 = fVar4 + *(float *)(param_1 + 0x4b4);
      fVar3 = *(float *)(param_1 + 0x4b8) + fVar3;
      fStack_c0 = fStack_c0 + *(float *)(param_1 + 0x4bc);
      *(float *)(param_1 + 0x4c0) = fVar1 + *(float *)(param_1 + 0x4b0);
    }
    else {
      if (iVar6 != 2) {
        return;
      }
      iVar6 = FUN_00db5440();
      if (iVar6 != 0) {
        pfVar7 = (float *)FUN_00da85d0();
        fVar1 = *pfVar7 - *(float *)(param_1 + 0x4b0);
        fVar4 = (pfVar7[1] + 1.4) - *(float *)(param_1 + 0x4b4);
        fVar3 = pfVar7[2] - *(float *)(param_1 + 0x4b8);
        fStack_c0 = pfVar7[3] - *(float *)(param_1 + 0x4bc);
        if (((fVar1 != 0.0) || (fVar4 != 0.0)) || (fVar3 != 0.0)) {
          fVar2 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4;
          if (fVar2 < 0.0 == (fVar2 == 0.0)) {
            FUN_00ddf460(&stack0xffffff34,&stack0xffffff34);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fVar3 = 0.0;
            fVar4 = 1.0;
            fVar1 = 0.0;
          }
        }
        *(float *)(param_1 + 0x4c0) = fVar1 + *(float *)(param_1 + 0x4b0);
        *(float *)(param_1 + 0x4c4) = fVar4 + *(float *)(param_1 + 0x4b4);
        *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4b8) + fVar3;
        *(float *)(param_1 + 0x4cc) = fStack_c0 + *(float *)(param_1 + 0x4bc);
        *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4c0) + fStack_bc;
        *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + fStack_b8;
        *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + fStack_b4;
        *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + fStack_b0;
        return;
      }
      fVar1 = *(float *)(param_1 + 0x4a4);
      fVar4 = fStack_c8 * fVar1 + *(float *)(param_1 + 0x4b4);
      fVar3 = *(float *)(param_1 + 0x4b8) + fStack_c4 * fVar1;
      fStack_c0 = fStack_c0 * fVar1 + *(float *)(param_1 + 0x4bc);
      *(float *)(param_1 + 0x4c0) = unaff_ESI * fVar1 + *(float *)(param_1 + 0x4b0);
    }
    *(float *)(param_1 + 0x4c4) = fVar4;
    *(float *)(param_1 + 0x4c8) = fVar3;
    *(float *)(param_1 + 0x4cc) = fStack_c0;
    return;
  }
LAB_00dba65c:
  fVar1 = *(float *)(param_1 + 0x4a4);
  *(float *)(param_1 + 0x4c0) = unaff_ESI * fVar1 + *(float *)(param_1 + 0x4b0);
  *(float *)(param_1 + 0x4c4) = fVar1 * fStack_c8 + *(float *)(param_1 + 0x4b4);
  *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4b8) + fVar1 * fStack_c4;
  *(float *)(param_1 + 0x4cc) = fVar1 * fStack_c0 + *(float *)(param_1 + 0x4bc);
  return;
}

// 00DBB8D0  FUN_00dbb8d0  size=1084  [callgraph]
void __thiscall FUN_00dbb8d0(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_9c [12];
  undefined1 local_90 [64];
  undefined1 auStack_50 [76];
  
  FUN_00db6410(local_90,param_2 + 0x1b0,param_2 + 0x1c0,param_2 + 0x1d0);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbb926:
    iVar8 = FUN_00a81330();
    if (iVar8 == 0) {
      return;
    }
  }
  else {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(1);
    if (iVar8 == 0) goto LAB_00dbb926;
  }
  D3DXMatrixInverse(auStack_50,0,local_90);
  uStack_ac = 0;
  uStack_a8 = 0x3f800000;
  uStack_a4 = 0;
  D3DXVec3TransformNormal(&uStack_ac,&uStack_ac,auStack_9c);
  iVar8 = FUN_00a81330();
  if ((iVar8 == 0) || (iVar8 = FUN_00a7c8a0(), iVar8 == 0)) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x68);
    fVar6 = *(float *)(param_1 + 0x6c);
LAB_00dbba6d:
    *(float *)(param_1 + 0x3c) = fVar6;
  }
  else {
    iVar9 = FUN_00a12210(*(undefined4 *)(param_1 + 0x88));
    if (*(int *)(param_1 + 0x50) != 0) {
      if ((iVar9 == 0) || (*(int *)(param_1 + 0x88) == -1)) {
        fVar3 = *(float *)(iVar8 + 0x40);
        fVar4 = *(float *)(iVar8 + 0x44);
        fVar5 = *(float *)(iVar8 + 0x48);
        fVar6 = *(float *)(iVar8 + 0x4c);
      }
      else {
        fVar3 = *(float *)(iVar9 + 0x40);
        fVar4 = *(float *)(iVar9 + 0x44);
        fVar5 = *(float *)(iVar9 + 0x48);
        fVar6 = *(float *)(iVar9 + 0x4c);
      }
      fVar6 = fVar6 + *(float *)(param_1 + 0x6c);
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x60) + fVar3;
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 100) + fVar4;
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x68) + fVar5;
      goto LAB_00dbba6d;
    }
    if ((iVar9 == 0) || (*(int *)(param_1 + 0x88) == -1)) {
      pfVar1 = (float *)(param_1 + 0x30);
      D3DXVec3TransformNormal(pfVar1,param_1 + 0x60,iVar8 + 0x10);
      *pfVar1 = *pfVar1 + *(float *)(iVar8 + 0x40);
      *(float *)(param_1 + 0x34) = *(float *)(iVar8 + 0x44) + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x38) = *(float *)(iVar8 + 0x48) + *(float *)(param_1 + 0x38);
    }
    else {
      pfVar1 = (float *)(param_1 + 0x30);
      D3DXVec3TransformNormal(pfVar1,param_1 + 0x60,iVar9 + 0x10);
      *pfVar1 = *(float *)(iVar9 + 0x40) + *pfVar1;
      *(float *)(param_1 + 0x34) = *(float *)(iVar9 + 0x44) + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x38) = *(float *)(iVar9 + 0x48) + *(float *)(param_1 + 0x38);
    }
  }
  iVar8 = FUN_00a81330();
  if ((iVar8 == 0) || (iVar8 = FUN_00a7c8a0(), iVar8 == 0)) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x78);
    fVar6 = *(float *)(param_1 + 0x7c);
  }
  else {
    iVar9 = FUN_00a12210(*(undefined4 *)(param_1 + 0x8c));
    if (*(int *)(param_1 + 0x50) == 0) {
      if ((iVar9 == 0) || (*(int *)(param_1 + 0x8c) == -1)) {
        iVar8 = iVar8 + 0x10;
        pfVar1 = (float *)(param_1 + 0x40);
        D3DXVec3TransformNormal(pfVar1,param_1 + 0x70,iVar8);
        *pfVar1 = *(float *)(iVar8 + 0x30) + *pfVar1;
        *(float *)(param_1 + 0x44) = *(float *)(iVar8 + 0x34) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x48) = *(float *)(iVar8 + 0x38) + *(float *)(param_1 + 0x48);
      }
      else {
        iVar9 = iVar9 + 0x10;
        pfVar1 = (float *)(param_1 + 0x40);
        D3DXVec3TransformNormal(pfVar1,param_1 + 0x70,iVar9);
        *pfVar1 = *(float *)(iVar9 + 0x30) + *pfVar1;
        *(float *)(param_1 + 0x44) = *(float *)(iVar9 + 0x34) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x48) = *(float *)(iVar9 + 0x38) + *(float *)(param_1 + 0x48);
      }
      goto LAB_00dbbba8;
    }
    if ((iVar9 == 0) || (*(int *)(param_1 + 0x8c) == -1)) {
      fVar3 = *(float *)(iVar8 + 0x44);
      fVar4 = *(float *)(iVar8 + 0x48);
      fVar6 = *(float *)(param_1 + 0x7c) + *(float *)(iVar8 + 0x4c);
      *(float *)(param_1 + 0x40) = *(float *)(iVar8 + 0x40) + *(float *)(param_1 + 0x70);
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x74) + fVar3;
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x78) + fVar4;
    }
    else {
      fVar3 = *(float *)(iVar9 + 0x44);
      fVar4 = *(float *)(iVar9 + 0x48);
      fVar6 = *(float *)(param_1 + 0x7c) + *(float *)(iVar9 + 0x4c);
      *(float *)(param_1 + 0x40) = *(float *)(iVar9 + 0x40) + *(float *)(param_1 + 0x70);
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x74) + fVar3;
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x78) + fVar4;
    }
  }
  *(float *)(param_1 + 0x4c) = fVar6;
LAB_00dbbba8:
  *(float *)(param_1 + 0x10) =
       (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10)) * 0.15 + *(float *)(param_1 + 0x10)
  ;
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x14)) * 0.15
  ;
  *(float *)(param_1 + 0x18) =
       (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x18)) * 0.15 + *(float *)(param_1 + 0x18)
  ;
  *(float *)(param_1 + 0x1c) =
       (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x1c)) * 0.15 + *(float *)(param_1 + 0x1c)
  ;
  pfVar1 = (float *)(param_2 + 0x4c0);
  pfVar2 = (float *)(param_2 + 0x4b0);
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x20)) * 0.15 + *(float *)(param_1 + 0x20)
  ;
  *(float *)(param_1 + 0x24) =
       (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x24)) * 0.15 + *(float *)(param_1 + 0x24)
  ;
  *(float *)(param_1 + 0x28) =
       (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x28)) * 0.15 + *(float *)(param_1 + 0x28)
  ;
  *(float *)(param_1 + 0x2c) =
       (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x2c)) * 0.15 + *(float *)(param_1 + 0x2c)
  ;
  fVar6 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x1c);
  *pfVar1 = (*(float *)(param_1 + 0x10) - *pfVar1) * 0.8 + *pfVar1;
  *(float *)(param_2 + 0x4c4) =
       (fVar6 - *(float *)(param_2 + 0x4c4)) * 0.8 + *(float *)(param_2 + 0x4c4);
  *(float *)(param_2 + 0x4c8) =
       (fVar3 - *(float *)(param_2 + 0x4c8)) * 0.8 + *(float *)(param_2 + 0x4c8);
  *(float *)(param_2 + 0x4cc) =
       (fVar4 - *(float *)(param_2 + 0x4cc)) * 0.8 + *(float *)(param_2 + 0x4cc);
  fVar6 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x2c);
  *pfVar2 = (*(float *)(param_1 + 0x20) - *pfVar2) + *pfVar2;
  *(float *)(param_2 + 0x4b4) = (fVar6 - *(float *)(param_2 + 0x4b4)) + *(float *)(param_2 + 0x4b4);
  *(float *)(param_2 + 0x4b8) = (fVar3 - *(float *)(param_2 + 0x4b8)) + *(float *)(param_2 + 0x4b8);
  *(float *)(param_2 + 0x4bc) = (fVar4 - *(float *)(param_2 + 0x4bc)) + *(float *)(param_2 + 0x4bc);
  fVar3 = *(float *)(param_2 + 0x4c4) - *(float *)(param_2 + 0x4b4);
  fVar6 = *(float *)(param_2 + 0x4c8) - *(float *)(param_2 + 0x4b8);
  *(float *)(param_2 + 0x4f4) =
       SQRT((*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2) + fVar3 * fVar3 + fVar6 * fVar6);
  thunk_FUN_00dde510(&stack0xffffff40,&stack0xffffff44,pfVar2,pfVar1);
  *(float *)(param_2 + 0x364) = unaff_ESI + 3.1415927;
  *(undefined4 *)(param_2 + 0x360) = unaff_EDI;
  return;
}

// 00DBBD10  FUN_00dbbd10  size=281  [callgraph]
void __thiscall FUN_00dbbd10(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  
  pfVar1 = (float *)(param_1 + 0xc0);
  local_30 = *(float *)(param_1 + 0xc0) - *(float *)(param_1 + 0xb0);
  pfVar2 = (float *)(param_1 + 0xb0);
  local_28 = *(float *)(param_1 + 200) - *(float *)(param_1 + 0xb8);
  local_24 = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xbc);
  local_2c = 0.0;
  FUN_00db5c70(&local_30,&local_30);
  local_18 = (*(float *)(param_2 + 0x10) - *(float *)(param_1 + 0xc0)) * local_30 + local_2c * 0.0 +
             (*(float *)(param_2 + 0x18) - *(float *)(param_1 + 200)) * local_28;
  if (0.25 < ABS(local_18)) {
    if (local_18 <= 0.0) {
      local_18 = local_18 + 0.25;
    }
    else {
      local_18 = local_18 - 0.25;
    }
    local_20 = local_30 * local_18;
    local_18 = local_28 * local_18;
    fVar3 = (float10)FUN_00db51c0();
    *pfVar2 = (float)((float10)*pfVar2 + (float10)local_20 * fVar3);
    *(float *)(param_1 + 0xb8) =
         (float)((float10)*(float *)(param_1 + 0xb8) + (float10)local_18 * fVar3);
    *pfVar1 = (float)((float10)local_20 * fVar3 + (float10)*pfVar1);
    *(float *)(param_1 + 200) =
         (float)((float10)local_18 * fVar3 + (float10)*(float *)(param_1 + 200));
    thunk_FUN_00de01a0(param_1 + 0x70,pfVar2,pfVar1,param_1 + 0xd0);
    return;
  }
  return;
}

// 00DBBE30  FUN_00dbbe30  size=283  [callgraph]
void __thiscall FUN_00dbbe30(byte *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_4;
  
  iVar3 = (int)param_2;
  fVar1 = *(float *)((int)param_2 + 0x30) - *(float *)((int)param_2 + 0x10);
  fVar2 = *(float *)((int)param_2 + 0x38) - *(float *)((int)param_2 + 0x18);
  local_4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) -
            SQRT(*(float *)((int)param_2 + 0x48) * *(float *)((int)param_2 + 0x48) +
                 *(float *)((int)param_2 + 0x40) * *(float *)((int)param_2 + 0x40));
  if (local_4 < 1.0) {
    local_4 = 1.0;
  }
  local_4 = ((*(float *)((int)param_2 + 0x34) - *(float *)((int)param_2 + 0x14)) * 0.25) / local_4;
  fVar1 = 0.0;
  if (-1.2 <= local_4) {
    if (0.0 < local_4) {
      local_4 = 0.0;
    }
  }
  else {
    local_4 = -1.2;
  }
  if ((*param_1 & 1) == 0) {
    fVar1 = 0.5;
    param_2 = *(float *)(param_1 + 0x120) * 0.5;
    if (0.0 <= param_2) {
      if (param_2 <= 0.5) goto LAB_00dbbef5;
    }
    else {
      fVar1 = 0.0;
    }
  }
  param_2 = fVar1;
LAB_00dbbef5:
  fVar4 = (float10)FUN_00db51c0();
  fVar4 = (((float10)*(float *)(param_1 + 0x114) + (float10)*(float *)(iVar3 + 0x14) +
            (float10)param_2 + (float10)local_4) - (float10)*(float *)(param_1 + 0xc4)) * fVar4;
  *(float *)(param_1 + 0xb4) = (float)((float10)*(float *)(param_1 + 0xb4) + fVar4);
  *(float *)(param_1 + 0xc4) = (float)(fVar4 + (float10)*(float *)(param_1 + 0xc4));
  thunk_FUN_00de01a0(param_1 + 0x70,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xd0);
  return;
}

// 00DBBF50  FUN_00dbbf50  size=295  [callgraph]
void __thiscall FUN_00dbbf50(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined *puVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(uint *)(param_1 + 0x110) < 0x40) {
    iVar4 = *(uint *)(param_1 + 0x110) * 0xd8;
    puVar5 = PTR_DAT_018bc3a0 + iVar4 + 0xd1fc;
    if ((*(uint *)(PTR_DAT_018bc3a0 + iVar4 + 0xd1fc) & 0x800000) == 0) {
      puVar5 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar5 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  fVar1 = *(float *)(param_3 + 0x10) - *(float *)(param_3 + 0x30);
  fVar3 = *(float *)(param_3 + 0x14) - *(float *)(param_3 + 0x34);
  fVar2 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x38);
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
      *(float *)(puVar5 + 0xc) * *(float *)(puVar5 + 0xc)) {
    fVar7 = (float10)fpatan((float10)*(float *)(param_3 + 0x30) -
                            (float10)*(float *)(param_3 + 0x10),
                            (float10)*(float *)(param_3 + 0x38) -
                            (float10)*(float *)(param_3 + 0x18));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)*(float *)(param_1 + 0x104)));
    fVar6 = (float10)*(float *)(puVar5 + 0x10);
    if (ABS(fVar7) < fVar6) {
      if ((float10)0 <= fVar7) {
        fVar6 = fVar7 - fVar6;
      }
      else {
        fVar6 = fVar6 + fVar7;
      }
      fVar7 = (float10)FUN_00ddba30((float)(fVar6 + (float10)*(float *)(param_1 + 0x104)));
      *(float *)(param_1 + 0x104) = (float)fVar7;
      fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)3.1415927));
      *(float *)(param_1 + 0xf4) = (float)fVar7;
      FUN_00da7460();
      thunk_FUN_00de01a0(param_1 + 0x70,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xd0);
      return;
    }
  }
  return;
}

// 00DBC080  FUN_00dbc080  size=702  [callgraph]
void __thiscall FUN_00dbc080(int param_1,int param_2)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int *piVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined *puVar23;
  undefined4 *puVar24;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [8];
  float fStack_18;
  float fStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbc0b1:
    iVar20 = FUN_00a81330();
    if (iVar20 == 0) {
      iVar20 = 0;
      goto LAB_00dbc0cd;
    }
  }
  else {
    piVar19 = (int *)FUN_00c13920();
    iVar20 = (**(code **)(*piVar19 + 0x28))(1);
    if (iVar20 == 0) goto LAB_00dbc0b1;
  }
  iVar20 = FUN_00a7c8a0();
LAB_00dbc0cd:
  fStack_30 = *(float *)(iVar20 + 0x40);
  iVar15 = *(int *)(param_2 + 0x6f8);
  fStack_2c = *(float *)(iVar20 + 0x44);
  fStack_28 = *(float *)(iVar20 + 0x48);
  fStack_24 = *(float *)(iVar20 + 0x4c);
  fVar1 = *(float *)(iVar15 + 0x40);
  fVar2 = *(float *)(iVar15 + 0x44);
  fVar3 = *(float *)(iVar15 + 0x48);
  fVar4 = *(float *)(iVar15 + 0x4c);
  uVar21 = FUN_00c4ec80();
  FUN_00db5a00(&fStack_40,iVar15,uVar21);
  if (*(uint *)(param_1 + 0x60) < 0x40) {
    iVar22 = *(uint *)(param_1 + 0x60) * 0xd8;
    puVar23 = PTR_DAT_018bc3a0 + iVar22 + 0xd1fc;
    if ((*(uint *)(PTR_DAT_018bc3a0 + iVar22 + 0xd1fc) & 0x400000) == 0) {
      puVar23 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar23 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  fVar16 = *(float *)(param_1 + 0x90) + fStack_30;
  fVar17 = *(float *)(param_1 + 0x94) + fStack_2c;
  fVar18 = *(float *)(param_1 + 0x98) + fStack_28;
  fVar5 = *(float *)(param_1 + 0x90);
  fVar6 = *(float *)(param_1 + 0x94);
  fVar7 = *(float *)(param_1 + 0x98);
  fVar8 = *(float *)(param_1 + 0x9c);
  fVar9 = *(float *)(puVar23 + 0x5c);
  fVar10 = *(float *)(param_1 + 0xa0);
  fVar11 = *(float *)(param_1 + 0xa4);
  fVar12 = *(float *)(param_1 + 0xa8);
  fVar13 = *(float *)(param_1 + 0xac);
  fStack_18 = *(float *)(param_1 + 0x98);
  fStack_14 = *(float *)(param_1 + 0x9c);
  fVar14 = *(float *)(puVar23 + 0x5c);
  fStack_30 = *(float *)(param_1 + 0xa0) * fVar14;
  fStack_2c = *(float *)(param_1 + 0xa4) * fVar14;
  fStack_28 = *(float *)(param_1 + 0xa8) * fVar14;
  fStack_40 = (fStack_30 - *(float *)(param_1 + 0x90)) + fStack_40;
  fStack_3c = fStack_3c + (fStack_2c - *(float *)(param_1 + 0x94));
  fStack_38 = (fStack_28 - fStack_18) + fStack_38;
  fStack_34 = (fVar14 * *(float *)(param_1 + 0xac) - fStack_14) + fStack_34;
  *(float *)(param_1 + 0x10) = fVar16;
  *(float *)(param_1 + 0x14) = fVar17;
  *(float *)(param_1 + 0x18) = fVar18;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x9c) + fStack_24;
  puVar24 = (undefined4 *)FUN_00db5960(auStack_20,iVar20);
  *(undefined4 *)(param_1 + 0x20) = *puVar24;
  *(undefined4 *)(param_1 + 0x24) = puVar24[1];
  *(undefined4 *)(param_1 + 0x28) = puVar24[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar24[3];
  *(float *)(param_1 + 0x30) = (fVar10 * fVar9 - fVar5) + fVar1;
  *(float *)(param_1 + 0x34) = (fVar11 * fVar9 - fVar6) + fVar2;
  *(float *)(param_1 + 0x38) = (fVar12 * fVar9 - fVar7) + fVar3;
  *(float *)(param_1 + 0x3c) = (fVar9 * fVar13 - fVar8) + fVar4;
  puVar24 = (undefined4 *)FUN_00db5960(auStack_20,iVar15);
  *(undefined4 *)(param_1 + 0x40) = *puVar24;
  *(undefined4 *)(param_1 + 0x44) = puVar24[1];
  *(undefined4 *)(param_1 + 0x48) = puVar24[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar24[3];
  *(float *)(param_1 + 0x50) = fStack_40;
  *(float *)(param_1 + 0x54) = fStack_3c;
  *(float *)(param_1 + 0x58) = fStack_38;
  *(float *)(param_1 + 0x5c) = fStack_34;
  return;
}

// 00DBC340  FUN_00dbc340  size=325  [callgraph]
void __thiscall FUN_00dbc340(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbc371:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00dbc38d;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dbc371;
  }
  iVar3 = FUN_00a7c8a0();
LAB_00dbc38d:
  uStack_40 = *(undefined4 *)(iVar3 + 0x40);
  iVar1 = *(int *)(param_2 + 0x6f8);
  uStack_3c = *(undefined4 *)(iVar3 + 0x44);
  uStack_38 = *(undefined4 *)(iVar3 + 0x48);
  uStack_34 = *(undefined4 *)(iVar3 + 0x4c);
  uStack_30 = *(undefined4 *)(iVar1 + 0x40);
  uStack_2c = *(undefined4 *)(iVar1 + 0x44);
  uStack_28 = *(undefined4 *)(iVar1 + 0x48);
  uStack_24 = *(undefined4 *)(iVar1 + 0x4c);
  uVar4 = FUN_00c4ec80();
  FUN_00db5a00(&uStack_20,iVar1,uVar4);
  *(undefined4 *)(param_1 + 0x10) = uStack_40;
  *(undefined4 *)(param_1 + 0x14) = uStack_3c;
  *(undefined4 *)(param_1 + 0x18) = uStack_38;
  *(undefined4 *)(param_1 + 0x1c) = uStack_34;
  puVar5 = (undefined4 *)FUN_00db5960(&uStack_40,iVar3);
  *(undefined4 *)(param_1 + 0x20) = *puVar5;
  *(undefined4 *)(param_1 + 0x24) = puVar5[1];
  *(undefined4 *)(param_1 + 0x28) = puVar5[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar5[3];
  *(undefined4 *)(param_1 + 0x30) = uStack_30;
  *(undefined4 *)(param_1 + 0x34) = uStack_2c;
  *(undefined4 *)(param_1 + 0x38) = uStack_28;
  *(undefined4 *)(param_1 + 0x3c) = uStack_24;
  puVar5 = (undefined4 *)FUN_00db5960(&uStack_30,iVar1);
  *(undefined4 *)(param_1 + 0x40) = *puVar5;
  *(undefined4 *)(param_1 + 0x44) = puVar5[1];
  *(undefined4 *)(param_1 + 0x48) = puVar5[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar5[3];
  *(undefined4 *)(param_1 + 0x50) = uStack_20;
  *(undefined4 *)(param_1 + 0x54) = uStack_1c;
  *(undefined4 *)(param_1 + 0x58) = uStack_18;
  *(undefined4 *)(param_1 + 0x5c) = uStack_14;
  return;
}

// 00DBC490  Camera::StatePerpetrator::vf0C  size=136  [class]
void __thiscall Camera::StatePerpetrator::vf0C(int param_1,int param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00db5960(&local_20,*(undefined4 *)(param_1 + 4));
  *(float *)(param_1 + 0x10) = local_20 * 0.5;
  *(float *)(param_1 + 0x14) = local_1c * 0.5;
  *(float *)(param_1 + 0x18) = local_18 * 0.5;
  *(float *)(param_1 + 0x1c) = local_14 * 0.5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00da01f0(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x70) = 0x42200000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  return;
}

// 00DBC520  FUN_00dbc520  size=324  [between]
void __thiscall FUN_00dbc520(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar8 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar8 + 0x40);
  fVar2 = *(float *)(iVar8 + 0x44);
  fVar3 = *(float *)(iVar8 + 0x48);
  fVar4 = *(float *)(iVar8 + 0x4c);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbc56b:
    iVar8 = FUN_00a81330();
    if (iVar8 != 0) goto LAB_00dbc57d;
    iVar8 = 0;
  }
  else {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(1);
    if (iVar8 == 0) goto LAB_00dbc56b;
LAB_00dbc57d:
    iVar8 = FUN_00a7c8a0();
  }
  fStack_20 = fVar1 - *(float *)(iVar8 + 0x40);
  fStack_18 = fVar3 - *(float *)(iVar8 + 0x48);
  fStack_14 = fVar4 - *(float *)(iVar8 + 0x4c);
  fStack_1c = 0.0;
  FUN_00db5c70(&fStack_20,&fStack_20);
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x4b0);
  if (iVar8 == 0x20035) {
    fVar5 = 1.0;
  }
  else {
    if (iVar8 == 0x20100) {
      fVar5 = 1.4;
      fVar6 = 1.0;
      goto LAB_00dbc605;
    }
    if (iVar8 != 0x21010) {
      fVar6 = 0.0;
      fVar5 = 0.7;
      goto LAB_00dbc605;
    }
    fVar5 = -0.5;
  }
  fVar6 = 2.0;
LAB_00dbc605:
  *param_2 = *(float *)(param_1 + 0x10) + (fVar1 - fStack_20 * fVar6);
  param_2[1] = *(float *)(param_1 + 0x14) + (fVar2 - fVar6 * fStack_1c) + fVar5;
  param_2[2] = *(float *)(param_1 + 0x18) + (fVar3 - fStack_18 * fVar6);
  param_2[3] = (fVar4 - fStack_14 * fVar6) + *(float *)(param_1 + 0x1c);
  return;
}

// 00DBC670  FUN_00dbc670  size=240  [between]
void __thiscall FUN_00dbc670(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar2 = *(int *)(param_1 + 4);
  local_20 = *(float *)(iVar2 + 0x40);
  local_1c = *(float *)(iVar2 + 0x44);
  local_18 = *(float *)(iVar2 + 0x48);
  local_14 = *(float *)(iVar2 + 0x4c);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbc6b8:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dbc6d5;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dbc6b8;
  }
  iVar2 = FUN_00a7c8a0();
LAB_00dbc6d5:
  fStack_30 = local_20 - *(float *)(iVar2 + 0x40);
  fStack_2c = local_1c - *(float *)(iVar2 + 0x44);
  fStack_28 = local_18 - *(float *)(iVar2 + 0x48);
  fStack_24 = local_14 - *(float *)(iVar2 + 0x4c);
  FUN_00db5c70(&fStack_30,&fStack_30);
  *param_2 = *param_3 + fStack_30 * -3.0;
  param_2[1] = param_3[1] + 0.3;
  param_2[2] = param_3[2] + fStack_28 * -3.0;
  param_2[3] = fStack_24 * -3.0 + param_3[3];
  return;
}

// 00DBC760  Camera::StateFps::vf14  size=344  [class]
void Camera::StateFps::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(float *)(param_1 + 0x4ec) = local_14;
  *(float *)(param_1 + 0x49c) = local_14;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  local_20 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4b0);
  local_1c = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b4);
  local_18 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4b8);
  local_14 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4bc);
  FUN_00db5c70(&local_20,&local_20);
  fVar1 = local_20 * 3.0 + *(float *)(param_1 + 0x4b0);
  fVar4 = *(float *)(param_1 + 0x4b4) + local_1c * 3.0;
  fVar3 = *(float *)(param_1 + 0x4b8) + local_18 * 3.0;
  fVar2 = local_14 * 3.0 + *(float *)(param_1 + 0x4bc);
  *(float *)(param_1 + 0x4c0) = fVar1;
  *(float *)(param_1 + 0x4c4) = fVar4;
  *(float *)(param_1 + 0x4c8) = fVar3;
  *(float *)(param_1 + 0x4cc) = fVar2;
  *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
  *(float *)(param_1 + 0x470) = fVar1;
  *(float *)(param_1 + 0x474) = fVar4;
  *(float *)(param_1 + 0x478) = fVar3;
  *(float *)(param_1 + 0x47c) = fVar2;
  *(undefined4 *)(param_1 + 0x4a4) = 0x40400000;
  return;
}

// 00DBC8C0  Camera::StateGallery::vf10  size=62  [class]
void __fastcall Camera::StateGallery::vf10(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  Math::safePositionTargetXz_2(param_1 + 0x10,param_1 + 0x20,&local_20,0x3f5f66f3);
  return;
}

// 00DBC900  FUN_00dbc900  size=1303  [between]
void __thiscall FUN_00dbc900(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_a0 = 1.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_b0 = 0.0;
  local_a8 = 0.0;
  local_80 = 0.0;
  local_7c = 0.0;
  local_ac = 1.0;
  local_78 = 0x3f800000;
  if (*(int *)(param_1 + 4) == 0) {
    puStack_d4 = &local_50;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0.0;
    local_40 = 0.0;
    local_44 = 0.0;
    local_48 = 0;
    local_4c = 0;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 1.0;
    local_50 = 0x3f800000;
    D3DXVec3TransformNormal(&local_a0,&local_a0);
    D3DXVec3TransformNormal(&fStack_bc,&fStack_bc,auStack_5c);
    D3DXVec3TransformNormal(&local_98,&local_98,auStack_68);
    fStack_94 = local_44;
    fStack_90 = local_40;
    fStack_8c = local_3c;
    fStack_88 = local_38;
  }
  else {
    puStack_d4 = (undefined4 *)(*(int *)(param_1 + 4) + 0x10);
    D3DXVec3TransformNormal(&local_a0,&local_a0);
    D3DXVec3TransformNormal(&fStack_bc,&fStack_bc,*(int *)(param_1 + 4) + 0x10);
    D3DXVec3TransformNormal(&local_98,&local_98,*(int *)(param_1 + 4) + 0x10);
    iVar4 = *(int *)(param_1 + 4);
    fStack_94 = *(float *)(iVar4 + 0x40);
    fStack_90 = *(float *)(iVar4 + 0x44);
    fStack_8c = *(float *)(iVar4 + 0x48);
    fStack_88 = *(float *)(iVar4 + 0x4c);
  }
  fVar1 = fStack_bc * fStack_bc + fStack_c4 * fStack_c4 + fStack_c0 * fStack_c0;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_c4,&fStack_c4);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_c4 = 0.0;
    fStack_c0 = 1.0;
    fStack_bc = 0.0;
  }
  fVar1 = fStack_cc * fStack_cc + (float)puStack_d4 * (float)puStack_d4 + unaff_ESI * unaff_ESI;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&puStack_d4,&puStack_d4);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_d4 = (undefined4 *)0x0;
    unaff_ESI = 1.0;
    fStack_cc = 0.0;
  }
  fVar1 = local_9c * local_9c + fStack_a4 * fStack_a4 + local_a0 * local_a0;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_a4,&fStack_a4);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_a4 = 0.0;
    local_a0 = 1.0;
    local_9c = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar5 = fStack_a4 * fVar3 + fVar2 * (float)puStack_d4 + fStack_c4 * fVar1 + fStack_94;
  fVar6 = local_a0 * fVar3 + unaff_ESI * fVar2 + fStack_c0 * fVar1 + fStack_90;
  fVar7 = local_9c * fVar3 + fStack_cc * fVar2 + fStack_bc * fVar1 + fStack_8c;
  fVar8 = local_98 * fVar3 + fStack_c8 * fVar2 + fStack_b8 * fVar1 + 1.0 + fStack_88;
  fVar1 = *(float *)(param_1 + 0x20);
  local_80 = fStack_c0 * fVar1;
  fVar2 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x28);
  local_7c = local_9c * fVar3;
  fStack_b4 = fStack_a4 * fVar3 + fVar2 * (float)puStack_d4 + fStack_c4 * fVar1 + fStack_94;
  local_b0 = local_a0 * fVar3 + unaff_ESI * fVar2 + local_80 + fStack_90;
  local_ac = local_7c + fStack_cc * fVar2 + fStack_bc * fVar1 + fStack_8c;
  local_a8 = local_98 * fVar3 + fVar2 * fStack_c8 + fStack_b8 * fVar1 + 1.0 + fStack_88;
  FUN_00db5290(&fStack_b4);
  *param_2 = fVar5;
  param_2[1] = fVar6;
  param_2[2] = fVar7;
  param_2[3] = fVar8;
  param_2[4] = fStack_b4;
  param_2[5] = local_b0;
  param_2[6] = local_ac;
  param_2[7] = local_a8;
  param_2[0xc] = (float)puStack_d4;
  param_2[0xd] = unaff_ESI;
  param_2[0xe] = fStack_cc;
  param_2[0xf] = fStack_c8;
  param_2[0x12] = *(float *)(param_1 + 0x30);
  return;
}

// 00DBCE20  FUN_00dbce20  size=329  [between]
void FUN_00dbce20(float *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbce4e:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dbce6a;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dbce4e;
  }
  iVar2 = FUN_00a7c8a0();
LAB_00dbce6a:
  iVar3 = FUN_00a12210(0);
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  fStack_20 = *(float *)(iVar2 + 0x40);
  fStack_1c = *(float *)(iVar2 + 0x44);
  fStack_18 = *(float *)(iVar2 + 0x48);
  fStack_14 = *(float *)(iVar2 + 0x4c);
  fStack_30 = *(float *)(param_2 + 0x470) - *(float *)(param_2 + 0x460);
  fStack_28 = *(float *)(param_2 + 0x478) - *(float *)(param_2 + 0x468);
  fStack_24 = *(float *)(param_2 + 0x47c) - *(float *)(param_2 + 0x46c);
  fStack_2c = 0.0;
  FUN_00db5c70(&fStack_30,&fStack_30);
  *param_1 = fStack_30 * -3.0 + fStack_20;
  param_1[1] = fStack_2c * -3.0 + 1.8 + fStack_1c;
  param_1[2] = fStack_18 + fStack_28 * -3.0;
  param_1[3] = fStack_24 * -3.0 + fStack_14;
  param_1[4] = fStack_20;
  param_1[5] = fStack_1c;
  param_1[6] = fStack_18;
  param_1[7] = fStack_14;
  param_1[0xc] = 0.0;
  param_1[0xd] = 1.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = fStack_14;
  param_1[0x12] = 0.87266463;
  return;
}

// 00DBCF70  Camera::StateRadio::vf14  size=344  [class]
void Camera::StateRadio::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(float *)(param_1 + 0x4ec) = local_14;
  *(float *)(param_1 + 0x49c) = local_14;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  local_20 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4b0);
  local_1c = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b4);
  local_18 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4b8);
  local_14 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4bc);
  FUN_00db5c70(&local_20,&local_20);
  fVar1 = local_20 * 3.0 + *(float *)(param_1 + 0x4b0);
  fVar4 = *(float *)(param_1 + 0x4b4) + local_1c * 3.0;
  fVar3 = *(float *)(param_1 + 0x4b8) + local_18 * 3.0;
  fVar2 = local_14 * 3.0 + *(float *)(param_1 + 0x4bc);
  *(float *)(param_1 + 0x4c0) = fVar1;
  *(float *)(param_1 + 0x4c4) = fVar4;
  *(float *)(param_1 + 0x4c8) = fVar3;
  *(float *)(param_1 + 0x4cc) = fVar2;
  *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
  *(float *)(param_1 + 0x470) = fVar1;
  *(float *)(param_1 + 0x474) = fVar4;
  *(float *)(param_1 + 0x478) = fVar3;
  *(float *)(param_1 + 0x47c) = fVar2;
  *(undefined4 *)(param_1 + 0x4a4) = 0x40400000;
  return;
}

// 00DBD0D0  Camera::StateRail::vf0C  size=36  [class]
void Camera::StateRail::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x8f0) = 0xbf800000;
  FUN_00db9c50();
  return;
}

// 00DBD100  Camera::StateRail::vf10  size=50  [class]
void Camera::StateRail::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x37c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  FUN_00db9e10();
  return;
}

// 00DBD140  Camera::Math::safePositionTargetXz_3  size=874  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Camera::Math::safePositionTargetXz_3
          (int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  float fVar10;
  float afStack_104 [6];
  undefined1 auStack_ec [4];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [4];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [3];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [80];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbd171:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00dbd190;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dbd171;
  }
  iVar3 = FUN_00a7c8a0();
LAB_00dbd190:
  fStack_e0 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x10);
  fStack_d8 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x18);
  fStack_d4 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0x1c);
  fStack_dc = 0.0;
  safeNormalize(&fStack_e0,&fStack_e0);
  puVar9 = auStack_90;
  fVar4 = (float10)fStack_e0;
  fVar5 = (float10)fStack_d8;
  fVar6 = (float10)fStack_dc * (float10)(float)(undefined *)0x0 +
          ((float10)*(float *)(iVar3 + 0x40) - (float10)*(float *)(param_1 + 0x10)) * fVar4 +
          ((float10)*(float *)(iVar3 + 0x48) - (float10)*(float *)(param_1 + 0x18)) * fVar5;
  fStack_e0 = (float)(fVar4 * fVar6 + (float10)*(float *)(param_1 + 0x10));
  fStack_d8 = (float)((float10)*(float *)(param_1 + 0x18) + fVar5 * fVar6);
  fStack_dc = *(float *)(iVar3 + 0x54);
  fVar4 = (float10)fpatan(fVar4,fVar5);
  fVar10 = (float)fVar4;
  D3DXMatrixRotationY();
  uStack_68 = uStack_e8;
  uStack_64 = uStack_e4;
  fStack_60 = fStack_e0;
  FUN_00e24230(*(undefined4 *)(param_1 + 0xf0));
  Animation::MotReader::pullCameraParam(auStack_58,0);
  uStack_cc = FUN_00a92f90();
  iVar3 = FUN_00e36300(0);
  if (iVar3 == *(int *)(param_1 + 0xc0)) {
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar4 = (float10)1 + (float10)*(float *)(param_1 + 0xf0);
    }
    else {
      fVar4 = (float10)FUN_00e36840(0);
      fVar4 = fVar4 + (float10)*(float *)(param_1 + 0xf0);
    }
  }
  else {
    fVar4 = (float10)*(float *)(param_1 + 0xf0) + (float10)_DAT_01be942c;
  }
  *(float *)(param_1 + 0xf0) = (float)fVar4;
  puVar8 = auStack_98;
  uStack_b8 = 0x3f800000;
  puVar7 = auStack_58;
  uStack_b4 = 0;
  auStack_b0[0] = 0;
  D3DXVec3TransformNormal();
  fVar10 = fStack_74 + fVar10;
  D3DXVec3TransformNormal(afStack_104);
  fVar1 = fStack_80 + fStack_70 + unaff_EDI;
  fStack_78 = fStack_78 + unaff_EBX;
  if (SQRT(((float)puVar9 - fStack_78) * ((float)puVar9 - fStack_78) +
           ((float)puVar7 - fVar1) * ((float)puVar7 - fVar1)) < 0.05) {
    FUN_00dd5650(&DAT_016c3ec0);
    fVar1 = _DAT_01bea920 * 0.05 + (float)puVar7;
    fStack_78 = _DAT_01bea928 * 0.05 + (float)puVar9;
  }
  fStack_e0 = fVar1 - (float)puVar7;
  fStack_dc = (fStack_7c + fStack_6c + unaff_ESI) - (float)puVar8;
  fStack_d8 = fStack_78 - (float)puVar9;
  fStack_d4 = afStack_104[0] - fVar10;
  FUN_00db5c70(&fStack_e0,&fStack_e0);
  D3DXVec3TransformNormal(auStack_d0,auStack_d0,auStack_b0);
  FUN_00db61d0(&uStack_cc,auStack_ec,&fStack_dc);
  *param_2 = (int)auStack_54;
  param_2[1] = (int)auStack_a4;
  param_2[2] = (int)&stack0xfffffef8;
  param_2[3] = (int)puVar7;
  *param_3 = puVar8;
  param_3[1] = puVar9;
  param_3[2] = fVar10;
  param_3[3] = fVar1;
  *param_4 = uStack_cc;
  param_4[1] = uStack_c8;
  param_4[2] = uStack_c4;
  param_4[3] = uStack_c0;
  return;
}

// 00DBD4B0  FUN_00dbd4b0  size=461  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00dbd4b0(int param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float10 fVar5;
  
  iVar1 = (int)param_2;
  iVar2 = FUN_00da9260();
  if (iVar2 != 0) {
    *(float *)((int)param_2 + 0x4f4) =
         (*(float *)((int)param_2 + 0x8d8) - *(float *)((int)param_2 + 0x4f4)) *
         *(float *)((int)param_2 + 0x8d4) * _DAT_01be942c + *(float *)((int)param_2 + 0x4f4);
    goto LAB_00dbd63e;
  }
  iVar2 = 0;
  pfVar4 = (float *)(param_3 + 0x2a4);
  do {
    if (*pfVar4 != 0.0) goto LAB_00dbd63e;
    iVar2 = iVar2 + 1;
    pfVar4 = pfVar4 + 0x10;
  } while (iVar2 < 3);
  param_2 = 0.0;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbd53c:
    if ((*(int *)(iVar1 + 0x378) != 0) && (1 < *(int *)(*(int *)(iVar1 + 0x378) + 0x11a0))) {
      param_2 = 1.0;
    }
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dbd53c;
  }
  iVar2 = FUN_00db56a0();
  if (iVar2 == 0) {
LAB_00dbd5b5:
    fVar5 = (float10)param_2;
  }
  else {
    iVar2 = FUN_00da8670();
    fVar5 = (float10)FUN_00ddba30(*(float *)(iVar2 + 4) - *(float *)(iVar1 + 0x364));
    if ((fVar5 <= (float10)1.5707964) && ((float10)-1.5707964 <= fVar5)) goto LAB_00dbd5b5;
    fVar5 = (float10)fcos(fVar5);
    fVar5 = (float10)param_2 - fVar5;
  }
  fVar5 = (float10)FUN_00dbb300(*(undefined4 *)(iVar1 + 0x4f4),0x40400000,(float)fVar5);
  if (((*(float *)(param_3 + 0x188) < *(float *)(param_3 + 0x18c) ==
        (*(float *)(param_3 + 0x188) == *(float *)(param_3 + 0x18c))) &&
      (((*(uint *)(param_3 + 0xfc) & 0x40000000) != 0 ||
       ((*(uint *)(param_3 + 0x80) & 0x40000000) != 0)))) ||
     ((*(int *)(param_1 + 0x70) != 0 && (*(int *)(param_1 + 0x74) != 0)))) {
    *(float *)(iVar1 + 0x4f4) =
         (float)((fVar5 - (float10)*(float *)(iVar1 + 0x4f4)) + (float10)*(float *)(iVar1 + 0x4f4));
  }
  else {
    *(float *)(iVar1 + 0x4f4) =
         (float)((fVar5 - (float10)*(float *)(iVar1 + 0x4f4)) * (float10)0.03 +
                (float10)*(float *)(iVar1 + 0x4f4));
  }
LAB_00dbd63e:
  FUN_00da5cd0((float *)(iVar1 + 0x4f4));
  if (*(float *)(iVar1 + 0x4f4) <= 250.0) {
    _DAT_01bea080 = _DAT_01bea080 & 0xffbfffff;
    return;
  }
  _DAT_01bea080 = _DAT_01bea080 | 0x400000;
  return;
}

// 00DBD680  Camera::StateSlashingBehind::vf08  size=71  [class]
bool Camera::StateSlashingBehind::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) goto LAB_00dbd6b8;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return false;
  }
LAB_00dbd6b8:
  return *(int *)(param_1 + 2000) != 0;
}

// 00DBD6D0  Camera::StateSlashingBehind::vf0C  size=123  [class]
void __thiscall Camera::StateSlashingBehind::vf0C(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined2 *puVar3;
  
  FUN_00db3830(param_2);
  if (*(uint *)(param_1 + 4) < 0x34) {
    puVar3 = &DAT_01dc55a0 + *(uint *)(param_1 + 4) * 0x18;
  }
  else {
    puVar3 = (undefined2 *)0x0;
  }
  uVar1 = *(undefined4 *)(puVar3 + 0x16);
  fVar2 = *(float *)(puVar3 + 0x14);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar3 + 0x12);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(float *)(param_1 + 0x10) = fVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_00da01f0(param_2 + 0x460);
  FUN_00db3f70(param_2 + 0x720);
  return;
}

// 00DBD750  Camera::StateSlashingBehind::vf14  size=28  [class]
void Camera::StateSlashingBehind::vf14(int param_1)

{
  FUN_00db3f70(param_1 + 0x720);
  return;
}

// 00DBD770  FUN_00dbd770  size=154  [between]
void __thiscall FUN_00dbd770(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 4) < 0x34) {
    pcVar2 = (char *)(&DAT_01dc55a0 + *(uint *)(param_1 + 4) * 0x18);
  }
  else {
    pcVar2 = (char *)0x0;
  }
  uVar1 = FUN_00db3920((int)*pcVar2,param_2);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = FUN_00db3920((int)pcVar2[1],param_2);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(pcVar2 + 4);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(pcVar2 + 8);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(pcVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(pcVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pcVar2 + 0x14);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(pcVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(pcVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(pcVar2 + 0x20);
  return;
}

// 00DBD810  Camera::StateSlashingNormal::vf0C  size=73  [class]
void __thiscall Camera::StateSlashingNormal::vf0C(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00db3f70(param_2 + 0x720);
  return;
}

// 00DBD860  Camera::StateSlashingNormal::vf14  size=385  [class]
void Camera::StateSlashingNormal::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(float *)(param_1 + 0x4ec) = local_14;
  *(float *)(param_1 + 0x49c) = local_14;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x380) = 0;
  FUN_00da01f0(param_1 + 0x460);
  local_20 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4b0);
  local_1c = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b4);
  local_18 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4b8);
  local_14 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4bc);
  FUN_00db5c70(&local_20,&local_20);
  local_20 = local_20 * 3.0;
  local_1c = local_1c * 3.0;
  local_18 = local_18 * 3.0;
  local_14 = local_14 * 3.0;
  fVar1 = *(float *)(param_1 + 0x4b0) + local_20;
  fVar4 = *(float *)(param_1 + 0x4b4) + local_1c;
  fVar3 = *(float *)(param_1 + 0x4b8) + local_18;
  fVar2 = local_14 + *(float *)(param_1 + 0x4bc);
  *(float *)(param_1 + 0x4c0) = fVar1;
  *(float *)(param_1 + 0x4c4) = fVar4;
  *(float *)(param_1 + 0x4c8) = fVar3;
  *(float *)(param_1 + 0x4cc) = fVar2;
  *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
  *(float *)(param_1 + 0x470) = fVar1;
  *(float *)(param_1 + 0x474) = fVar4;
  *(float *)(param_1 + 0x478) = fVar3;
  *(float *)(param_1 + 0x47c) = fVar2;
  *(undefined4 *)(param_1 + 0x4a4) = 0x40400000;
  FUN_00d9ff30();
  FUN_00da0d70();
  FUN_00db3f70(param_1 + 0x720);
  return;
}

// 00DBD9F0  Camera::StateSlashingTarget::vf0C  size=35  [class]
void __thiscall Camera::StateSlashingTarget::vf0C(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 1;
  FUN_00db3f70(param_2 + 0x720);
  return;
}

// 00DBDA20  Camera::StateSlashingTarget::vf14  size=35  [class]
void __thiscall Camera::StateSlashingTarget::vf14(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_00db3f70(param_2 + 0x720);
  return;
}

// 00DBDA50  FUN_00dbda50  size=1283  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00dbda50(float param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float *pfStack_88;
  float fStack_84;
  float fVar13;
  float fVar14;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [13];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbda80:
    fStack_84 = 2.0190376e-38;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) goto LAB_00dbda92;
    fStack_6c = 0.0;
  }
  else {
    fStack_84 = 2.0190336e-38;
    piVar5 = (int *)FUN_00c13920();
    fStack_84 = 1.4013e-45;
    pfStack_88 = (float *)0xdbda7c;
    iVar6 = (**(code **)(*piVar5 + 0x28))();
    if (iVar6 == 0) goto LAB_00dbda80;
LAB_00dbda92:
    fStack_84 = 2.0190392e-38;
    fStack_6c = (float)FUN_00a7c8a0();
  }
  fVar9 = (float)((int)fStack_6c + 0x10);
  fStack_40 = 0.0;
  fStack_3c = 0.0;
  pfStack_88 = &fStack_40;
  afStack_38[0] = 1.0;
  fStack_84 = fVar9;
  D3DXVec3TransformNormal(&fStack_50);
  fStack_4c = 1.0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  D3DXVec3TransformNormal(&fStack_3c,&fStack_4c);
  fStack_58 = 0.0;
  fStack_54 = 1.0;
  fStack_50 = 0.0;
  D3DXVec3TransformNormal(afStack_38,&fStack_58,fVar9);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbdb3d:
    if (*(int *)(param_3 + 0x378) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_00b8beb0(&pfStack_88);
      iVar6 = FUN_00a81330();
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00dbdb3d;
    iVar6 = 0;
  }
  if (((_DAT_01d61aa0 != 0.0) || (_DAT_01d61aa4 != 0.0)) || (_DAT_01d61aa8 != 0.0)) {
    fStack_84 = _DAT_01d61aa0;
    fVar12 = (float10)_DAT_01d61aac;
    fVar9 = fStack_6c;
    fVar13 = _DAT_01d61aa4;
    fVar14 = _DAT_01d61aa8;
    goto LAB_00dbdd70;
  }
  if (iVar6 == 0) {
    fVar10 = (float10)3.0;
    fVar12 = (float10)param_1 * fVar10;
    fStack_84 = (float)((float10)fStack_74 * fVar10);
    fVar9 = fStack_6c;
    fVar13 = (float)((float10)fStack_70 * fVar10);
    fVar14 = (float)((float10)fStack_6c * fVar10);
    goto LAB_00dbdd70;
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbdc10:
    if ((*(int *)(param_3 + 0x378) == 0) || (iVar6 = FUN_00b8bf80(), iVar6 == 0)) goto LAB_00dbdc20;
    iVar6 = FUN_00a7c8a0();
    if (iVar6 != 0) {
      uVar7 = FUN_00da6530();
      iVar6 = FUN_00a12210(uVar7);
      uVar7 = FUN_00da6570();
      iVar8 = FUN_00a12210(uVar7);
      if ((iVar6 != 0) && (iVar8 != 0)) {
        fStack_84 = *(float *)(iVar6 + 0x40);
        fVar13 = *(float *)(iVar6 + 0x44);
        fVar14 = *(float *)(iVar6 + 0x48);
        fVar2 = *(float *)(iVar6 + 0x4c);
        fVar3 = *(float *)(iVar8 + 0x40);
        fVar4 = *(float *)(iVar8 + 0x44);
        fVar1 = *(float *)(iVar8 + 0x48);
        fStack_58 = *(float *)(iVar8 + 0x4c);
        fVar10 = (float10)0;
        if (fVar10 < (float10)_DAT_01d61ab0) {
          fVar10 = (float10)FUN_00da6270();
          fVar10 = fVar10 / (float10)_DAT_01d61ab0;
        }
        fVar11 = (float10)1 - fVar10;
        fVar12 = (float10)fVar2 * fVar10 + (float10)fStack_58 * fVar11;
        fStack_84 = (float)((float10)fStack_84 * fVar10 + (float10)fVar3 * fVar11);
        fVar13 = (float)((float10)fVar13 * fVar10 + (float10)fVar4 * fVar11);
        fVar14 = (float)((float10)fVar1 * fVar11 + (float10)(float)((float10)fVar14 * fVar10));
        goto LAB_00dbdd70;
      }
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00dbdc10;
LAB_00dbdc20:
    iVar6 = FUN_00a7c8a0();
    fVar9 = fStack_6c;
    if (iVar6 != 0) {
      uVar7 = FUN_00da6530();
      iVar6 = FUN_00a12210(uVar7);
      if (iVar6 != 0) {
        fStack_84 = *(float *)(iVar6 + 0x40);
        fVar12 = (float10)*(float *)(iVar6 + 0x4c);
        fVar13 = *(float *)(iVar6 + 0x44);
        fVar14 = *(float *)(iVar6 + 0x48);
        goto LAB_00dbdd70;
      }
    }
  }
  fStack_84 = 0.0;
  fVar12 = (float10)1;
  fVar13 = 0.0;
  fVar14 = 0.0;
LAB_00dbdd70:
  fVar2 = *(float *)((int)fVar9 + 0x40);
  fVar3 = *(float *)((int)fVar9 + 0x44);
  fVar4 = *(float *)((int)fVar9 + 0x48);
  fStack_58 = *(float *)((int)fVar9 + 0x4c);
  iVar6 = FUN_00db3ab0(param_3);
  if (iVar6 == 0) {
    fVar2 = fStack_74 * -3.05 * 1.5 + fStack_44 * 1.2 * 1.5 + fStack_54 * -1.4 * 1.5 + fVar2;
    fVar1 = fStack_70 * -3.05 * 1.5 +
            fStack_40 * 1.2 * 1.5 + fStack_50 * -1.4 * 1.5 + *(float *)((int)fVar9 + 0x44);
    fVar3 = fStack_6c * -3.05 * 1.5 + fStack_3c * 1.2 * 1.5 + fStack_4c * -1.4 * 1.5 + fVar4;
    fVar9 = afStack_38[0] * 1.2 * 1.5 + fStack_48 * -1.4 * 1.5 + fStack_58 + param_1 * -3.05 * 1.5;
    fVar4 = 0.4886922;
  }
  else {
    fVar2 = fStack_74 * -3.0 + fStack_54 * -0.5 + fVar2;
    fVar1 = fStack_70 * -3.0 + fStack_50 * -0.5 + fVar3;
    fVar3 = fStack_6c * -3.0 + fStack_4c * -0.5 + fVar4;
    fVar9 = param_1 * -3.0 + fStack_48 * -0.5 + fStack_58;
    fVar4 = 1.0471976;
  }
  *param_2 = fVar2;
  param_2[1] = fVar1;
  param_2[2] = fVar3;
  param_2[3] = fVar9;
  param_2[4] = fStack_84;
  param_2[5] = fVar13;
  param_2[6] = fVar14;
  param_2[7] = (float)fVar12;
  param_2[0xc] = fStack_44;
  param_2[0xd] = fStack_40;
  param_2[0xe] = fStack_3c;
  param_2[0xf] = afStack_38[0];
  param_2[0x12] = fVar4;
  return;
}

// 00DBDF60  FUN_00dbdf60  size=137  [between]
void __fastcall FUN_00dbdf60(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dbdf83:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_00dbdfa1;
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dbdf83;
  }
  FUN_00a7c8a0();
LAB_00dbdfa1:
  fVar3 = (float10)FUN_00a92ff0();
  fVar4 = fVar3 * fVar3 * (float10)0.85 + (float10)0.15 + (float10)*(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = (float)fVar4;
  fVar3 = (float10)0;
  if ((fVar3 <= fVar4) && (fVar3 = fVar4, (float10)*(float *)(param_1 + 4) < fVar4)) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 4);
    return;
  }
  *(float *)(param_1 + 8) = (float)fVar3;
  return;
}

// 00DBDFF0  FUN_00dbdff0  size=390  [between]
void __thiscall FUN_00dbdff0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puStack_64;
  float fStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  float fStack_54;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    fStack_54 = *(float *)(param_1 + 0x4c);
    if (fStack_54 != -NAN) {
      if (*(int *)(*(int *)(param_1 + 0x48) + 0x330) == 0) {
        iVar2 = 0xfff;
      }
      else {
        puStack_58 = (undefined4 *)0xdbe027;
        iVar2 = FUN_00a06de0();
      }
      if (iVar2 == 0xfff) {
        fStack_54 = *(float *)(param_1 + 0x4c);
        puStack_58 = (undefined4 *)&DAT_016c42bc;
        puStack_5c = (undefined4 *)0xdbe045;
        FUN_00dd5650();
        return;
      }
    }
    fStack_54 = *(float *)(param_1 + 0x4c);
    puStack_58 = (undefined4 *)0xdbe05c;
    iVar2 = FUN_00a12210();
    local_30 = *(undefined4 *)(param_2 + 0x1b0);
    fVar1 = (float)(iVar2 + 0x10);
    local_2c = *(undefined4 *)(param_2 + 0x1b4);
    puStack_5c = &local_30;
    local_28 = *(undefined4 *)(param_2 + 0x1b8);
    local_24 = *(undefined4 *)(param_2 + 0x1bc);
    local_40 = *(undefined4 *)(param_2 + 0x1c0);
    local_3c = *(float *)(param_2 + 0x1c4);
    local_38 = *(float *)(param_2 + 0x1c8);
    local_34 = *(float *)(param_2 + 0x1cc);
    local_20 = *(undefined4 *)(param_2 + 0x1d0);
    local_1c = *(undefined4 *)(param_2 + 0x1d4);
    local_18 = *(undefined4 *)(param_2 + 0x1d8);
    local_14 = *(undefined4 *)(param_2 + 0x1dc);
    local_44 = *(undefined4 *)(param_2 + 0x94);
    fStack_60 = 2.0192669e-38;
    puStack_58 = puStack_5c;
    fStack_54 = fVar1;
    D3DXVec3TransformNormal();
    local_3c = local_3c + *(float *)(iVar2 + 0x40);
    puVar3 = &stack0xffffffb4;
    local_38 = *(float *)(iVar2 + 0x44) + local_38;
    local_34 = *(float *)(iVar2 + 0x48) + local_34;
    puStack_64 = puVar3;
    fStack_60 = fVar1;
    D3DXVec3TransformNormal(puVar3);
    puStack_58 = (undefined4 *)(*(float *)(iVar2 + 0x40) + (float)puStack_58);
    fStack_54 = *(float *)(iVar2 + 0x44) + fStack_54;
    D3DXVec3TransformNormal(&local_38,&local_38,fVar1);
    Camera::Math::safePositionTargetXz_2(&fStack_54,&puStack_64,&local_44,puVar3);
  }
  return;
}

// 00DBE1B0  FUN_00dbe1b0  size=955  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00dbe1b0(int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float *pfStack_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined4 *puStack_15c;
  float *pfStack_158;
  float *pfStack_154;
  undefined1 *puStack_150;
  float *pfStack_14c;
  float *local_148;
  undefined1 *local_144;
  float local_134;
  undefined1 auStack_124 [8];
  float fStack_11c;
  float fStack_118;
  float local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [40];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [24];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  if (*param_1 == 0) {
    param_1[0xd] = 0;
    return;
  }
  pfVar1 = param_2 + 4;
  local_114 = SQRT((param_2[6] - param_2[2]) * (param_2[6] - param_2[2]) +
                   (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
                   (param_2[4] - *param_2) * (param_2[4] - *param_2));
  local_134 = (float)param_1[0xc];
  local_144 = (undefined1 *)0xdbe216;
  iVar3 = FUN_00db5740();
  if (iVar3 != 0) {
    local_134 = 0.004363323;
  }
  fVar2 = (float)param_1[0xd] - _DAT_01be942c;
  param_1[0xd] = (int)fVar2;
  if (fVar2 <= 0.0) {
    param_1[0xd] = 0x41900000;
    local_144 = (undefined1 *)0x3f800000;
    local_148 = (float *)0xbf800000;
    pfStack_14c = (float *)0xdbe260;
    fVar4 = (float10)FUN_00dde300();
    param_1[8] = (int)(float)(fVar4 * (float10)local_134);
    local_144 = (undefined1 *)0x3f800000;
    local_148 = (float *)0xbf800000;
    pfStack_14c = (float *)0xdbe283;
    fVar4 = (float10)FUN_00dde300();
    param_1[9] = (int)(float)(fVar4 * (float10)local_134);
  }
  local_144 = (undefined1 *)(param_3 + 0x1d0);
  puStack_150 = local_50;
  pfStack_14c = param_2;
  param_1[4] = (int)((float)param_1[8] * 0.05 + (float)param_1[4] * 0.95);
  param_1[5] = (int)((float)param_1[5] * 0.95 + (float)param_1[9] * 0.05);
  param_1[6] = (int)((float)param_1[10] * 0.05 + (float)param_1[6] * 0.95);
  pfStack_154 = (float *)0xdbe2db;
  local_148 = pfVar1;
  FUN_00db6410();
  pfStack_14c = (float *)local_50;
  local_148 = (float *)0x0;
  puStack_150 = (undefined1 *)0xdbe2f0;
  local_144 = (undefined1 *)pfStack_14c;
  D3DXMatrixInverse();
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  local_114 = 0.0;
  fStack_118 = 0.0;
  uStack_e0 = 0x3f800000;
  uStack_f4 = 0x3f800000;
  uStack_108 = 0x3f800000;
  fStack_11c = 1.0;
  if ((float)param_1[6] != 0.0) {
    puStack_150 = (undefined1 *)param_1[6];
    pfStack_154 = (float *)auStack_dc;
    pfStack_158 = (float *)0xdbe355;
    D3DXMatrixRotationZ();
    puStack_160 = auStack_124;
    puStack_15c = &uStack_e4;
    puStack_164 = (undefined1 *)0xdbe367;
    pfStack_158 = (float *)puStack_160;
    D3DXMatrixMultiply();
  }
  if ((float)param_1[5] != 0.0) {
    puStack_150 = (undefined1 *)param_1[5];
    pfStack_154 = (float *)auStack_dc;
    pfStack_158 = (float *)0xdbe38a;
    D3DXMatrixRotationY();
    puStack_160 = auStack_124;
    puStack_15c = &uStack_e4;
    puStack_164 = (undefined1 *)0xdbe39c;
    pfStack_158 = (float *)puStack_160;
    D3DXMatrixMultiply();
  }
  if ((float)param_1[4] != 0.0) {
    puStack_150 = (undefined1 *)param_1[4];
    pfStack_154 = (float *)auStack_dc;
    pfStack_158 = (float *)0xdbe3bb;
    D3DXMatrixRotationX();
    puStack_160 = auStack_124;
    puStack_15c = &uStack_e4;
    puStack_164 = (undefined1 *)0xdbe3cd;
    pfStack_158 = (float *)puStack_160;
    D3DXMatrixMultiply();
  }
  puStack_150 = auStack_5c;
  pfStack_158 = &fStack_11c;
  puStack_15c = (undefined4 *)0xdbe3e2;
  pfStack_154 = pfStack_158;
  D3DXMatrixMultiply();
  puStack_15c = (undefined4 *)auStack_68;
  puStack_160 = (undefined1 *)0x0;
  puStack_164 = auStack_a8;
  puStack_168 = (undefined1 *)0xdbe3f9;
  D3DXMatrixInverse();
  puStack_168 = auStack_b4;
  pfStack_16c = pfVar1;
  D3DXVec3TransformNormal(pfVar1);
  *pfVar1 = fStack_90 + *pfVar1;
  param_2[5] = fStack_8c + param_2[5];
  param_2[6] = fStack_88 + param_2[6];
  D3DXVec3TransformNormal(pfVar1,pfVar1,&stack0xfffffec0);
  *pfVar1 = fStack_11c + *pfVar1;
  param_2[5] = fStack_118 + param_2[5];
  param_2[6] = param_2[6] + local_114;
  pfStack_16c = (float *)(*pfVar1 - *param_2);
  puStack_168 = (undefined1 *)(param_2[5] - param_2[1]);
  puStack_164 = (undefined1 *)(param_2[6] - param_2[2]);
  puStack_160 = (undefined1 *)(param_2[7] - param_2[3]);
  if ((((float)pfStack_16c == 0.0) && ((float)puStack_168 == 0.0)) && ((float)puStack_164 == 0.0)) {
    return;
  }
  fVar2 = (float)puStack_164 * (float)puStack_164 +
          (float)pfStack_16c * (float)pfStack_16c + (float)puStack_168 * (float)puStack_168;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&pfStack_16c,&pfStack_16c);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_164 = (undefined1 *)0x0;
    pfStack_16c = (float *)0x0;
    puStack_168 = (undefined1 *)0x3f800000;
  }
  *pfVar1 = *param_2 + (float)pfStack_16c * (float)puStack_150;
  param_2[5] = (float)puStack_168 * (float)puStack_150 + param_2[1];
  param_2[6] = param_2[2] + (float)puStack_164 * (float)puStack_150;
  param_2[7] = (float)puStack_150 * (float)puStack_160 + param_2[3];
  return;
}

// 00DBE570  FUN_00dbe570  size=766  [between]
void __thiscall FUN_00dbe570(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar4 = 0;
  iVar5 = param_1;
  do {
    if (*(float *)(iVar5 + 0x2c) != 0.0) {
      fVar6 = (float10)FUN_00dde210(*param_2,*(undefined4 *)(iVar5 + 0x28),
                                    *(undefined4 *)(iVar5 + 0x2c),
                                    *(undefined4 *)(iVar4 * 0xc + 0x18bc3fc));
      *param_2 = (float)fVar6;
      break;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x40;
  } while (iVar4 < 3);
  iVar5 = 0;
  while (*(float *)(param_1 + 0x24) == 0.0) {
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0x40;
    if (2 < iVar5) {
      return;
    }
  }
  local_60 = *param_3;
  local_5c = param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_50 = param_3[4];
  local_4c = param_3[5];
  local_48 = param_3[6];
  local_44 = param_3[7];
  local_40 = param_3[8];
  local_3c = param_3[9];
  local_38 = param_3[10];
  local_34 = param_3[0xb];
  local_30 = param_3[0xc];
  local_2c = param_3[0xd];
  local_28 = param_3[0xe];
  local_24 = param_3[0xf];
  local_20 = param_3[0x10];
  local_1c = param_3[0x11];
  local_18 = param_3[0x12];
  pfVar3 = (float *)FUN_00db9090(&local_80);
  local_70 = *pfVar3 + *param_3;
  local_6c = pfVar3[1] + param_3[1];
  local_68 = pfVar3[2] + param_3[2];
  local_64 = pfVar3[3] + param_3[3];
  local_80 = param_3[8];
  local_7c = param_3[9];
  local_78 = param_3[10];
  local_74 = param_3[0xb];
  FUN_00db8f60(&local_70,param_1 + 0x10,&local_80);
  FUN_00da9820(&local_70);
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  FUN_00db8f60(param_3,param_1 + 0x10,&local_80);
  iVar4 = FUN_00da9820(&local_80);
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - local_6c);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.5 + (float10)local_6c));
  iVar4 = iVar5 * 0xc;
  if (*(float *)(iVar5 * 0xc + 0x18bc3fc) == 0.0) {
    fVar1 = param_2[1];
    fVar2 = *(float *)(param_1 + 0x24);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fVar1));
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)fVar2 + (float10)fVar1));
  }
  else {
    fVar6 = (float10)FUN_00dde210(param_2[1],(float)fVar6,*(undefined4 *)(param_1 + 0x24),
                                  *(undefined4 *)(iVar4 + 0x18bc3fc));
  }
  param_2[1] = (float)fVar6;
  if (*(float *)(param_1 + 0x2c) != 0.0) {
    return;
  }
  if (*(float *)(iVar4 + 0x18bc3fc) == 0.0) {
    fVar1 = *param_2;
    fVar2 = *(float *)(param_1 + 0x24);
    fVar6 = (float10)FUN_00ddba30(local_70 - fVar1);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)fVar2 + (float10)fVar1));
  }
  else {
    fVar6 = (float10)FUN_00dde210(*param_2,local_70,*(undefined4 *)(param_1 + 0x24),
                                  *(undefined4 *)(iVar4 + 0x18bc3fc));
  }
  if (fVar6 < (float10)-1.3962634) {
    *param_2 = (float)(float10)-1.3962634;
    return;
  }
  *param_2 = (float)fVar6;
  return;
}

// 00DBE870  FUN_00dbe870  size=74  [between]
void __thiscall FUN_00dbe870(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00da6810();
  if (iVar1 != 0) {
    FUN_00da6740(iVar1);
    return;
  }
  iVar1 = FUN_00db58c0(param_2);
  if (iVar1 != 0) {
    FUN_00da67b0();
    return;
  }
  *param_1 = 0;
  FUN_00a7c950();
  param_1[2] = 0;
  return;
}

// 00DBE8C0  FUN_00dbe8c0  size=459  [between]
undefined4 FUN_00dbe8c0(int param_1)

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
  float fVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int local_3c;
  int local_38;
  int local_34;
  
  local_3c = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_38 = 0;
    do {
      pfVar13 = (float *)(*(int *)(param_1 + 0x10) + local_38);
      iVar11 = FUN_008f8cf0((int)*(char *)((int)pfVar13[10] + 0x10) + (int)pfVar13[10],8);
      if ((iVar11 == 0) &&
         ((((iVar11 = (int)*(char *)((int)pfVar13[10] + 0x10) + (int)pfVar13[10], iVar11 == 0 ||
            (iVar11 = FUN_008f7780(iVar11), iVar11 == 0)) || (*(int *)(iVar11 + 0x4b0) == 0x20180))
          || (iVar11 = FUN_009f93b0(*(int *)(iVar11 + 0x4b0)), iVar11 == 0)))) {
        fVar1 = *pfVar13;
        local_34 = 1;
        fVar2 = pfVar13[1];
        fVar3 = pfVar13[2];
        fVar4 = pfVar13[4];
        fVar5 = pfVar13[5];
        fVar6 = pfVar13[6];
        if (1 < *(int *)(param_1 + 0x14)) {
          iVar11 = 0x30;
          do {
            if (local_34 != local_3c) {
              iVar12 = *(int *)(*(int *)(param_1 + 0x10) + 0x28 + iVar11);
              pfVar13 = (float *)(*(int *)(param_1 + 0x10) + iVar11);
              iVar12 = FUN_008f8cf0(*(char *)(iVar12 + 0x10) + iVar12,8);
              if ((iVar12 == 0) &&
                 (((iVar12 = (int)*(char *)((int)pfVar13[10] + 0x10) + (int)pfVar13[10], iVar12 == 0
                   || (iVar12 = FUN_008f7780(iVar12), iVar12 == 0)) ||
                  ((*(int *)(iVar12 + 0x4b0) == 0x20180 ||
                   (iVar12 = FUN_009f93b0(*(int *)(iVar12 + 0x4b0)), iVar12 == 0)))))) {
                fVar7 = *pfVar13 - fVar1;
                fVar9 = pfVar13[1] - fVar2;
                fVar10 = pfVar13[2] - fVar3;
                fVar8 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
                if ((1.1920929e-07 <= fVar8) &&
                   (0.0 < (fVar10 / fVar8) * fVar6 +
                          (fVar7 / fVar8) * fVar4 + (fVar9 / fVar8) * fVar5)) {
                  return 0;
                }
              }
            }
            local_34 = local_34 + 1;
            iVar11 = iVar11 + 0x30;
          } while (local_34 < *(int *)(param_1 + 0x14));
        }
      }
      local_38 = local_38 + 0x30;
      local_3c = local_3c + 1;
    } while (local_3c < *(int *)(param_1 + 0x14));
  }
  return 1;
}

// 00DBEA90  FUN_00dbea90  size=120  [between]
int FUN_00dbea90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x28 + iVar4);
      iVar3 = *(int *)(param_1 + 0x10) + iVar4;
      iVar1 = FUN_008f8cf0(*(char *)(iVar1 + 0x10) + iVar1,8);
      if (iVar1 == 0) {
        iVar1 = (int)*(char *)(*(int *)(iVar3 + 0x28) + 0x10) + *(int *)(iVar3 + 0x28);
        if (iVar1 == 0) {
          return iVar3;
        }
        iVar1 = FUN_008f7780(iVar1);
        if (iVar1 == 0) {
          return iVar3;
        }
        if (*(int *)(iVar1 + 0x4b0) == 0x20180) {
          return iVar3;
        }
        iVar1 = FUN_009f93b0(*(int *)(iVar1 + 0x4b0));
        if (iVar1 == 0) {
          return iVar3;
        }
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

// 00DBEB10  FUN_00dbeb10  size=410  [between]
void FUN_00dbeb10(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  undefined1 local_80 [16];
  undefined1 local_70 [12];
  float fStack_64;
  undefined1 local_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  pfVar2 = param_2;
  if ((param_4 < 0.0 == (param_4 == 0.0)) &&
     (pfVar2 = param_3, NAN(param_4) || 1.0 < param_4 == (param_4 == 1.0))) {
    FUN_00db9750(local_70);
    FUN_00db9750(local_80);
    D3DXQuaternionSlerp(local_60,local_70,local_80,param_4);
    FUN_00ddb9f0(local_60,local_70);
    fVar1 = SQRT((param_3[1] - param_3[5]) * (param_3[1] - param_3[5]) +
                 (*param_3 - param_3[4]) * (*param_3 - param_3[4]) +
                 (param_3[2] - param_3[6]) * (param_3[2] - param_3[6])) * param_4 +
            SQRT((*param_2 - param_2[4]) * (*param_2 - param_2[4]) +
                 (param_2[1] - param_2[5]) * (param_2[1] - param_2[5]) +
                 (param_2[2] - param_2[6]) * (param_2[2] - param_2[6])) * (1.0 - param_4);
    *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
    param_1[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
    param_1[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
    param_1[3] = (param_3[3] - param_2[3]) * param_4 + param_2[3];
    param_1[4] = *param_1 + fStack_40 * fVar1;
    param_1[5] = fStack_3c * fVar1 + param_1[1];
    param_1[6] = fStack_38 * fVar1 + param_1[2];
    param_1[7] = param_1[3] + fStack_64 * fVar1;
    param_1[0xc] = fStack_50;
    param_1[0xd] = fStack_4c;
    param_1[0xe] = fStack_48;
    param_1[0xf] = fStack_64;
    param_1[0x12] = (1.0 - param_4) * param_2[0x12] + param_3[0x12] * param_4;
    return;
  }
  FUN_00da01f0(pfVar2);
  FUN_00db96d0();
  return;
}

// 00DBECB0  FUN_00dbecb0  size=315  [between]
void FUN_00dbecb0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  undefined1 local_80 [16];
  undefined1 local_70 [12];
  float fStack_64;
  undefined1 local_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  pfVar1 = param_2;
  if ((param_4 < 0.0 == (param_4 == 0.0)) &&
     (pfVar1 = param_3, NAN(param_4) || 1.0 < param_4 == (param_4 == 1.0))) {
    FUN_00db9750(local_70);
    FUN_00db9750(local_80);
    D3DXQuaternionSlerp(local_60,local_70,local_80,param_4);
    FUN_00ddb9f0(local_60,local_70);
    *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
    param_1[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
    param_1[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
    param_1[3] = (param_3[3] - param_2[3]) * param_4 + param_2[3];
    param_1[4] = (param_3[4] - param_2[4]) * param_4 + param_2[4];
    param_1[5] = (param_3[5] - param_2[5]) * param_4 + param_2[5];
    param_1[6] = (param_3[6] - param_2[6]) * param_4 + param_2[6];
    param_1[7] = (param_3[7] - param_2[7]) * param_4 + param_2[7];
    param_1[0xc] = fStack_50;
    param_1[0xd] = fStack_4c;
    param_1[0xe] = fStack_48;
    param_1[0xf] = fStack_64;
    param_1[0x12] = (1.0 - param_4) * param_2[0x12] + param_3[0x12] * param_4;
    return;
  }
  FUN_00da01f0(pfVar1);
  FUN_00db96d0();
  return;
}

// 00DBEDF0  FUN_00dbedf0  size=298  [between]
void FUN_00dbedf0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  
  if (param_4 < 0.0 != (param_4 == 0.0)) {
    FUN_00da01f0(param_2);
    FUN_00db96d0();
    return;
  }
  if (!NAN(param_4) && 1.0 < param_4 != (param_4 == 1.0)) {
    FUN_00da01f0(param_3);
    FUN_00db96d0();
    return;
  }
  pfVar1 = param_1 + 0xc;
  *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * param_4 + param_2[3];
  param_1[4] = (param_3[4] - param_2[4]) * param_4 + param_2[4];
  param_1[5] = (param_3[5] - param_2[5]) * param_4 + param_2[5];
  param_1[6] = (param_3[6] - param_2[6]) * param_4 + param_2[6];
  param_1[7] = (param_3[7] - param_2[7]) * param_4 + param_2[7];
  *pfVar1 = (param_3[0xc] - param_2[0xc]) * param_4 + param_2[0xc];
  param_1[0xd] = (param_3[0xd] - param_2[0xd]) * param_4 + param_2[0xd];
  param_1[0xe] = (param_3[0xe] - param_2[0xe]) * param_4 + param_2[0xe];
  param_1[0xf] = (param_3[0xf] - param_2[0xf]) * param_4 + param_2[0xf];
  FUN_00db5d90(pfVar1,pfVar1);
  param_1[0x12] = (1.0 - param_4) * param_2[0x12] + param_3[0x12] * param_4;
  return;
}

// 00DBEF20  FUN_00dbef20  size=866  [between]
/* WARNING: Type propagation algorithm not settling */

float10 FUN_00dbef20(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_68 [24];
  undefined1 local_50 [76];
  
  local_b0 = (float)FUN_00f98a90();
  local_a8 = (float)(int)local_b0;
  iVar2 = FUN_00f98aa0();
  local_a4 = (float)iVar2;
  local_b0 = (ABS(*param_3) + ABS(param_3[2])) * 0.5;
  local_80 = 0x3f800000;
  local_7c = 0;
  local_78 = 0;
  FUN_00ddc1d0(local_50,param_1 + 0x1e0,5);
  puVar10 = &local_80;
  pfVar9 = &local_a0;
  D3DXVec3TransformNormal(pfVar9,puVar10,local_50);
  fVar1 = (float)(param_1 + 0x390);
  D3DXVec3TransformNormal();
  local_b0 = (*(float *)(param_1 + 0x3c8) + local_b0) * (float)puVar10;
  fStack_ac = (float)puVar10 * fStack_ac;
  afStack_98[0] = 0.0;
  afStack_98[1] = 0.0;
  afStack_98[2] = 1.0;
  FUN_00ddc1d0(auStack_68,param_1 + 0x1e0,5);
  D3DXVec3TransformNormal(&fStack_88,afStack_98,auStack_68);
  D3DXVec3TransformNormal(afStack_98 + 1,afStack_98 + 1,fVar1);
  local_a0 = *(float *)(param_1 + 0x3c0) + local_a0;
  fStack_9c = *(float *)(param_1 + 0x3c4) + fStack_9c;
  iVar2 = 0;
  afStack_98[0] = *(float *)(param_1 + 0x3c8) + afStack_98[0];
  fVar3 = (float10)fptan((float10)0.8726646304130554);
  fStack_88 = (float)fVar3;
  fStack_84 = (float)(fVar3 * (float10)*(float *)(param_1 + 0x90));
  fVar7 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1c0);
  fVar12 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1c4);
  fVar11 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1c8);
  fVar7 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar7 * fVar7) * -1.0;
  do {
    fVar11 = *param_2;
    fVar12 = param_2[1];
    fVar13 = param_2[2];
    if (iVar2 == 1) {
      fVar8 = 1.0 - param_4[1];
      fVar11 = fVar11 + fVar1;
      fVar12 = fVar12 + (float)pfVar9;
      fVar13 = fVar13 + (float)puVar10;
LAB_00dbf17e:
      fVar8 = fVar8 * (float)&fStack_ac;
    }
    else if (iVar2 == 2) {
      fVar8 = param_4[2] * (float)&fStack_ac;
      fVar12 = fVar12 + param_3[1] * 2.0;
    }
    else {
      if (iVar2 != 3) {
        fVar8 = *param_4;
        fVar11 = fVar11 - fVar1;
        fVar12 = fVar12 - (float)pfVar9;
        fVar13 = fVar13 - (float)puVar10;
        goto LAB_00dbf17e;
      }
      fVar8 = (1.0 - param_4[3]) * (float)&fStack_ac;
    }
    FUN_00db6a90(&local_b0,param_1,&stack0xffffff40);
    fVar3 = ((float10)fVar13 - (float10)*(float *)(param_1 + 0x1b8)) * (float10)afStack_98[0] +
            ((float10)fVar11 - (float10)*(float *)(param_1 + 0x1b0)) * (float10)local_a0 +
            ((float10)fVar12 - (float10)*(float *)(param_1 + 0x1b4)) * (float10)fStack_9c;
    if (iVar2 == 1) {
      fVar4 = (float10)fVar8 - (float10)local_b0;
LAB_00dbf20c:
      fVar3 = (fVar4 / (float10)(float)&fStack_ac) * fVar3 * (float10)2.0 * (float10)fStack_84;
    }
    else {
      if (iVar2 == 2) {
        fVar4 = (float10)fStack_ac - (float10)fVar8;
      }
      else {
        if (iVar2 != 3) {
          fVar4 = (float10)local_b0 - (float10)fVar8;
          goto LAB_00dbf20c;
        }
        fVar4 = (float10)fVar8 - (float10)fStack_ac;
      }
      fVar3 = (fVar4 / (float10)(float)&fStack_ac) * fVar3 * (float10)2.0 * (float10)fStack_88;
    }
    fVar4 = (float10)fVar7;
    if (fVar4 < fVar3) {
      fVar7 = (float)fVar3;
      fVar4 = fVar3;
    }
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      fVar3 = (float10)*(float *)(param_1 + 0x1b0) - (float10)*(float *)(param_1 + 0x1c0);
      fVar5 = (float10)*(float *)(param_1 + 0x1b4) - (float10)*(float *)(param_1 + 0x1c4);
      fVar6 = (float10)*(float *)(param_1 + 0x1b8) - (float10)*(float *)(param_1 + 0x1c8);
      return SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) + fVar4;
    }
  } while( true );
}

// 00DBF290  FUN_00dbf290  size=54  [between]
void FUN_00dbf290(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00db5960(local_20,param_2);
  FUN_00dbef20(param_1,param_2 + 0x40,local_20,param_3);
  return;
}

// 00DBF2D0  FUN_00dbf2d0  size=109  [between]
void FUN_00dbf2d0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float local_24;
  undefined1 local_20 [28];
  
  local_24 = 0.0;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)(param_2 + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_00db5960(local_20,iVar1);
        fVar3 = (float10)FUN_00dbef20(param_1,iVar1 + 0x40,local_20,param_4);
        if ((float10)local_24 < fVar3) {
          local_24 = (float)fVar3;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}

// 00DBF340  FUN_00dbf340  size=399  [between]
void FUN_00dbf340(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  local_78 = 0;
  local_74 = 0;
  local_70 = FUN_00f98a90();
  local_6c = FUN_00f98aa0();
  local_68 = 0;
  local_64 = 0x3f800000;
  fVar1 = param_3[2];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    FUN_00db6c80(&local_a0,param_3,&local_78,param_2 + 0x10,param_2 + 0xb0);
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
    return;
  }
  local_a0 = *param_3;
  local_9c = param_3[1];
  local_98 = param_3[2];
  local_94 = param_3[3];
  local_7c = FUN_00f98a90();
  local_a0 = (float)local_7c - local_a0;
  local_98 = local_98 * -1.0;
  FUN_00db6c80(&local_60,&local_a0,&local_78,param_2 + 0x10,param_2 + 0xb0);
  local_90 = local_60 - *(float *)(param_2 + 0x1b0);
  local_8c = local_5c - *(float *)(param_2 + 0x1b4);
  local_88 = local_58 - *(float *)(param_2 + 0x1b8);
  local_84 = local_54 - *(float *)(param_2 + 0x1bc);
  FUN_00ddcfe0(local_50,param_2 + 0x1d0,0x40490fdb);
  D3DXVec3TransformNormal(&local_90,&local_90,local_50);
  fVar1 = *(float *)(param_2 + 0x1b4);
  fVar2 = *(float *)(param_2 + 0x1b8);
  fVar3 = *(float *)(param_2 + 0x1bc);
  *param_1 = local_9c + *(float *)(param_2 + 0x1b0);
  param_1[1] = local_98 + fVar1;
  param_1[2] = local_94 + fVar2;
  param_1[3] = local_90 + fVar3;
  return;
}

// 00DBF4D0  FUN_00dbf4d0  size=316  [between]
void __thiscall FUN_00dbf4d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00f98a90();
  param_1[2] = uVar1;
  uVar1 = FUN_00f98aa0();
  param_1[4] = 0;
  param_1[3] = uVar1;
  param_1[5] = 0x3f800000;
  puVar3 = (undefined4 *)(param_2 + 0x10);
  puVar4 = param_1 + 8;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00da49d0(param_2 + 0x460);
  FUN_00db96d0();
  thunk_FUN_00de01a0(param_1 + 0x18,&local_60,&local_50,&local_30);
  param_1[0x28] = local_60;
  param_1[0x29] = local_5c;
  param_1[0x2a] = local_58;
  param_1[0x2b] = local_54;
  param_1[0x2c] = local_50;
  param_1[0x2d] = local_4c;
  param_1[0x2e] = local_48;
  param_1[0x2f] = local_44;
  param_1[0x30] = local_30;
  param_1[0x31] = local_2c;
  param_1[0x32] = local_28;
  param_1[0x33] = local_24;
  param_1[0x34] =
       SQRT(((float)param_1[0x2a] - (float)param_1[0x2e]) *
            ((float)param_1[0x2a] - (float)param_1[0x2e]) +
            ((float)param_1[0x29] - (float)param_1[0x2d]) *
            ((float)param_1[0x29] - (float)param_1[0x2d]) +
            ((float)param_1[0x28] - (float)param_1[0x2c]) *
            ((float)param_1[0x28] - (float)param_1[0x2c]));
  FUN_00db7750();
  return;
}

// 00DBF640  FUN_00dbf640  size=145  [between]
void __thiscall FUN_00dbf640(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_2[1];
  *(undefined4 *)(param_1 + 0xa8) = param_2[2];
  *(undefined4 *)(param_1 + 0xac) = param_2[3];
  *(undefined4 *)(param_1 + 0xb0) = param_2[4];
  *(undefined4 *)(param_1 + 0xb4) = param_2[5];
  *(undefined4 *)(param_1 + 0xb8) = param_2[6];
  *(undefined4 *)(param_1 + 0xbc) = param_2[7];
  fVar1 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xb0);
  fVar3 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xb4);
  fVar2 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0xd0) = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  FUN_00db7750();
  return;
}

// 00DBF6E0  FUN_00dbf6e0  size=1910  [between]
void __thiscall
FUN_00dbf6e0(int param_1,float *param_2,int param_3,float *param_4,int param_5,int param_6,
            float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float local_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_10c;
  float local_108;
  float *local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_98;
  float local_94;
  float local_90 [4];
  float afStack_80 [4];
  float afStack_70 [6];
  float local_58;
  undefined1 local_50 [76];
  
  iVar4 = FUN_00f98a90();
  local_134 = (float)iVar4;
  local_150 = 0.0;
  local_14c = 0.0;
  local_148 = 0.0;
  local_158 = 0.0;
  local_154 = 0.0;
  local_15c = 0.0;
  local_10c = 0.0;
  local_108 = 0.0;
  local_d0 = 0.0;
  local_cc = 0.0;
  local_c8 = 0.0;
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 0.0;
  local_b0 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0);
  local_ac = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4);
  local_a8 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
  local_a4 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xac);
  FUN_00db5c70(&local_b0,&local_b0);
  iVar4 = 0;
  if (0 < param_6) {
    local_104 = param_4;
    local_98 = (int)param_4 - param_3;
    pfVar5 = (float *)(param_3 + 8);
    do {
      local_120 = pfVar5[-2];
      local_11c = pfVar5[-1];
      local_118 = *pfVar5;
      local_114 = pfVar5[1];
      local_58 = local_118 - *(float *)(param_1 + 0xa8);
      fVar1 = (local_11c - *(float *)(param_1 + 0xa4)) * local_ac +
              (local_120 - *(float *)(param_1 + 0xa0)) * local_b0 + local_58 * local_a8;
      if (fVar1 < 1.5) {
        fVar1 = 1.5 - fVar1;
        local_120 = local_b0 * fVar1 + local_120;
        local_11c = local_ac * fVar1 + local_11c;
        local_118 = local_a8 * fVar1 + local_118;
        local_114 = local_a4 * fVar1 + local_114;
      }
      local_94 = *(float *)(param_5 + iVar4 * 4) * local_134;
      local_d4 = (1.0 - *(float *)(param_5 + iVar4 * 4)) * local_134;
      local_90[0] = (ABS(*local_104) + ABS(*(float *)(local_98 + (int)pfVar5))) * 0.5;
      local_90[1] = 0.0;
      local_90[2] = 0.0;
      FUN_00ddc1d0(local_50,param_1 + 0xe0,5);
      D3DXVec3TransformNormal(&local_130,local_90,local_50);
      fStack_f0 = local_120 - local_130;
      fStack_ec = local_11c - fStack_12c;
      fStack_e8 = local_118 - fStack_128;
      fStack_e4 = local_114 - fStack_124;
      FUN_00db6e20(afStack_80,&fStack_f0);
      fStack_100 = local_130 + local_120;
      fStack_fc = fStack_12c + local_11c;
      fStack_f8 = fStack_128 + local_118;
      fStack_f4 = fStack_124 + local_114;
      FUN_00db6e20(afStack_70,&fStack_100);
      if ((iVar4 == 0) || (afStack_80[0] < local_10c)) {
        local_10c = afStack_80[0];
        local_d0 = fStack_f0;
        local_cc = fStack_ec;
        local_c8 = fStack_e8;
        fStack_c4 = fStack_e4;
      }
      if ((iVar4 == 0) || (local_108 < afStack_70[0])) {
        local_108 = afStack_70[0];
        local_c0 = fStack_100;
        local_bc = fStack_fc;
        local_b8 = fStack_f8;
        fStack_b4 = fStack_f4;
      }
      if (local_94 < afStack_80[0]) {
        if (local_d4 < afStack_70[0] == (local_d4 == afStack_70[0])) {
          fVar1 = afStack_70[0] - local_d4;
          fVar3 = afStack_80[0] - local_94;
          if ((iVar4 != 0) && (fVar1 <= local_154)) {
            fVar1 = local_154;
          }
          local_154 = fVar1;
          if ((iVar4 != 0) && (local_15c <= fVar3)) {
            fVar3 = local_15c;
          }
          goto LAB_00dbfc12;
        }
        local_154 = 0.0;
        fVar1 = afStack_80[0] - local_94;
        if ((iVar4 != 0) && (local_15c <= fVar1)) {
          fVar1 = local_15c;
        }
        local_15c = fVar1;
        if (local_15c == 0.0) {
          local_154 = 0.0;
          break;
        }
        fVar1 = afStack_70[0] - local_d4;
        if (0 < iVar4) {
          if (0.0 <= fVar1) {
            if (local_15c < fVar1) {
              fVar1 = local_15c;
            }
          }
          else {
            fVar1 = 0.0;
          }
        }
        if (local_158 < fVar1) {
          local_150 = fStack_100;
          local_14c = fStack_fc;
          local_148 = fStack_f8;
          fStack_144 = fStack_f4;
          local_158 = fVar1;
        }
LAB_00dbfc2b:
        if (local_15c == 0.0) break;
      }
      else {
        if (local_d4 < afStack_70[0] != (local_d4 == afStack_70[0])) break;
        local_15c = 0.0;
        fVar1 = afStack_70[0] - local_d4;
        if ((iVar4 != 0) && (fVar1 <= local_154)) {
          fVar1 = local_154;
        }
        local_154 = fVar1;
        if (local_154 == 0.0) break;
        fVar1 = afStack_80[0] - local_94;
        fVar2 = local_154;
        if ((local_154 <= fVar1) && (fVar2 = fVar1, 0.0 < fVar1)) {
          fVar2 = 0.0;
        }
        fVar3 = local_15c;
        if (fVar2 < local_158) {
          local_150 = fStack_f0;
          local_14c = fStack_ec;
          local_148 = fStack_e8;
          fStack_144 = fStack_e4;
          local_158 = fVar2;
        }
LAB_00dbfc12:
        local_15c = fVar3;
        if (local_154 == 0.0) goto LAB_00dbfc2b;
      }
      local_104 = local_104 + 4;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (iVar4 < param_6);
  }
  if (0.0 <= param_7) {
    fVar1 = (local_108 + local_10c) * 0.5;
    fVar2 = local_134 * param_7 * 0.5;
    fVar3 = local_134 * 0.5 - fVar2;
    fVar2 = fVar2 + local_134 * 0.5;
    if ((fVar3 <= fVar1) || (local_154 == 0.0)) {
      if ((fVar2 < fVar1) && (local_15c != 0.0)) {
        fVar1 = fVar1 - fVar2;
        if ((fVar1 < local_154) || (local_154 = fVar1, fVar1 <= local_15c)) {
          local_15c = local_154;
        }
        if (local_158 < local_15c) {
          local_150 = local_c0;
          local_14c = local_bc;
          local_148 = local_b8;
          fStack_144 = fStack_b4;
          local_158 = local_15c;
        }
      }
    }
    else {
      fVar1 = fVar1 - fVar3;
      if ((local_154 <= fVar1) && (local_154 = fVar1, local_15c < fVar1)) {
        local_154 = local_15c;
      }
      if (local_154 < local_158) {
        local_150 = local_d0;
        local_14c = local_cc;
        local_148 = local_c8;
        fStack_144 = fStack_c4;
        local_158 = local_154;
      }
    }
  }
  if (local_158 != 0.0) {
    FUN_00db6e20(&local_130,&local_150);
    fStack_fc = fStack_12c;
    fStack_f8 = fStack_128;
    fStack_f4 = fStack_124;
    fStack_100 = local_130 - local_158;
    FUN_00db6fd0(&local_130,&fStack_100);
    *param_2 = local_150 - local_130;
    param_2[1] = local_14c - fStack_12c;
    param_2[2] = local_148 - fStack_128;
    param_2[3] = fStack_144 - fStack_124;
    return;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}

// 00DBFE60  FUN_00dbfe60  size=326  [between]
float10 __thiscall FUN_00dbfe60(int param_1,float *param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar1 = FUN_00f98aa0();
  local_30 = *param_2;
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_2c = *(float *)(param_3 + 4) + *(float *)(param_3 + 4) + param_2[1];
  FUN_00db6e20(local_20,&local_30);
  local_40 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0);
  local_3c = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4);
  local_38 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
  local_34 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xac);
  FUN_00db5c70(&local_40,&local_40);
  fVar2 = (float10)(param_4 * (float)iVar1);
  fVar3 = (float10)local_1c;
  if ((fVar2 <= fVar3) && (fVar2 = (float10)((float)iVar1 * param_5), fVar3 <= fVar2)) {
    return (float10)0;
  }
  fVar2 = ((fVar2 - fVar3) / (float10)iVar1) *
          ABS(((float10)local_28 - (float10)*(float *)(param_1 + 0xa8)) * (float10)local_38 +
              ((float10)local_30 - (float10)*(float *)(param_1 + 0xa0)) * (float10)local_40 +
              ((float10)local_2c - (float10)*(float *)(param_1 + 0xa4)) * (float10)local_3c);
  fVar3 = (float10)fptan((float10)0.8726646304130554);
  return fVar3 * (fVar2 + fVar2);
}

// 00DBFFB0  FUN_00dbffb0  size=648  [between]
/* WARNING: Type propagation algorithm not settling */

float10 __thiscall
FUN_00dbffb0(int param_1,float *param_2,undefined4 param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  float *pfStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  float *pfStack_c8;
  float *pfStack_c4;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [4];
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [4];
  float fStack_84;
  float fStack_80;
  undefined1 auStack_78 [12];
  float fStack_6c;
  undefined1 auStack_68 [8];
  undefined1 local_60 [4];
  undefined1 auStack_5c [12];
  float local_50 [19];
  
  pfStack_c4 = (float *)0xdbffc5;
  iVar4 = FUN_00f98aa0();
  local_b4 = (float)iVar4;
  pfVar1 = (float *)(param_1 + 0xa0);
  pfStack_c8 = &local_b0;
  local_b0 = *(float *)(param_1 + 0xb0) - *pfVar1;
  local_ac = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4);
  local_a8 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
  local_a4 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xac);
  puStack_cc = (undefined1 *)0xdc0017;
  pfStack_c4 = pfStack_c8;
  FUN_00db5c70();
  puStack_cc = (undefined1 *)0x5;
  local_a0[0] = 1.0;
  puStack_d0 = (undefined1 *)(param_1 + 0xe0);
  pfStack_d4 = local_50;
  local_a0[1] = 0.0;
  local_a0[2] = 0.0;
  FUN_00ddc1d0();
  pfStack_c4 = local_50;
  pfStack_c8 = local_a0;
  puStack_cc = local_60;
  puStack_d0 = (undefined1 *)0xdc0051;
  D3DXVec3TransformNormal();
  fVar5 = (float10)fptan((float10)0.4363323152065277);
  pfStack_d4 = &fStack_6c;
  fStack_80 = (float)fVar5;
  fVar6 = (float10)0.5 * (float10)unaff_EDI;
  fStack_84 = (float)fVar6;
  fVar5 = (float10)fpatan(((((float10)1 - (float10)param_4) * (float10)unaff_EDI - fVar6) / fVar6) *
                          fVar5,(float10)1);
  puStack_d0 = (undefined1 *)(float)((float10)1.5707964 - fVar5);
  FUN_00ddcfe0(auStack_5c);
  puStack_d0 = auStack_5c;
  pfStack_d4 = (float *)&stack0xffffff44;
  D3DXVec3TransformNormal(local_a0 + 1);
  fVar5 = (float10)fpatan(((((float10)1 - (float10)param_5) * (float10)(float)puStack_cc -
                           (float10)fStack_90) / (float10)fStack_90) * (float10)fStack_8c,(float10)1
                         );
  FUN_00ddcfe0(auStack_68,auStack_78,(float)((float10)1.5707964 - fVar5));
  D3DXVec3TransformNormal(auStack_88,&pfStack_c8,auStack_68);
  fVar2 = param_2[1] - *(float *)(param_1 + 0xa4);
  fVar3 = param_2[2] - *(float *)(param_1 + 0xa8);
  if (0.0 <= local_ac * fVar3 + local_b4 * (*param_2 - *pfVar1) + local_b0 * fVar2) {
    if (0.0 < fVar3 * fStack_8c + fStack_90 * fVar2 + local_a0[3] * (*param_2 - *pfVar1)) {
      local_b4 = (float)pfStack_d4 * -1.0;
      local_b0 = (float)puStack_d0 * -1.0;
      local_ac = (float)puStack_cc * -1.0;
      local_a8 = (float)pfStack_c8 * -1.0;
      iVar4 = FUN_00da6880(&pfStack_c4,pfVar1,local_a0 + 3,param_2,&local_b4);
      if (iVar4 != 0) {
        return SQRT(((float10)(float)pfStack_c4 - (float10)*param_2) *
                    ((float10)(float)pfStack_c4 - (float10)*param_2) +
                    ((float10)unaff_EDI - (float10)param_2[1]) *
                    ((float10)unaff_EDI - (float10)param_2[1]) +
                    ((float10)unaff_ESI - (float10)param_2[2]) *
                    ((float10)unaff_ESI - (float10)param_2[2])) * (float10)-1.0;
      }
    }
  }
  else {
    iVar4 = FUN_00da6880(&pfStack_c4,pfVar1,&local_b4,param_2,&pfStack_d4);
    if (iVar4 != 0) {
      return SQRT(((float10)unaff_ESI - (float10)param_2[2]) *
                  ((float10)unaff_ESI - (float10)param_2[2]) +
                  ((float10)unaff_EDI - (float10)param_2[1]) *
                  ((float10)unaff_EDI - (float10)param_2[1]) +
                  ((float10)(float)pfStack_c4 - (float10)*param_2) *
                  ((float10)(float)pfStack_c4 - (float10)*param_2));
    }
  }
  return (float10)0;
}

// 00DC0240  FUN_00dc0240  size=628  [between]
void __thiscall FUN_00dc0240(int param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fStack_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float afStack_6c [7];
  undefined1 local_50 [76];
  
  iVar5 = FUN_00f98a90();
  local_ac = (float)iVar5;
  local_a0[0] = (ABS(*param_3) + ABS(param_3[2])) * 0.5;
  local_a0[1] = 0.0;
  local_a0[2] = 0.0;
  FUN_00ddc1d0(local_50,param_1 + 0xe0,5);
  D3DXVec3TransformNormal(&local_70,local_a0,local_50);
  fStack_8c = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0);
  fStack_88 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4);
  fStack_84 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
  fStack_80 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xac);
  FUN_00db5c70(&fStack_8c,&fStack_8c);
  iVar5 = FUN_00f98a90();
  iVar6 = FUN_00f98aa0();
  iVar7 = 0;
  fVar8 = (float10)fptan((float10)0.4363323152065277);
  fVar1 = (float)(fVar8 * ((float10)iVar5 / (float10)iVar6));
  fVar9 = 0.0;
  do {
    if (iVar7 == 1) {
      fStack_b4 = (1.0 - param_4) * unaff_EBX;
      local_ac = fStack_7c + *param_2;
      fStack_a8 = param_2[1] + fStack_78;
      fStack_a4 = param_2[2] + fStack_74;
      local_a0[0] = param_2[3] + local_70;
      fStack_90 = fStack_b4;
    }
    else {
      fStack_90 = unaff_EBX * param_4;
      fStack_b4 = unaff_EBX * param_5;
      local_ac = *param_2 - fStack_7c;
      fStack_a8 = param_2[1] - fStack_78;
      fStack_a4 = param_2[2] - fStack_74;
      local_a0[0] = param_2[3] - local_70;
    }
    FUN_00db6e20(afStack_6c,&local_ac);
    fVar4 = (fStack_a4 - *(float *)(param_1 + 0xa8)) * fStack_84 +
            (local_ac - *(float *)(param_1 + 0xa0)) * fStack_8c +
            (fStack_a8 - *(float *)(param_1 + 0xa4)) * fStack_88;
    fVar2 = 0.0;
    if (iVar7 == 1) {
      fVar3 = afStack_6c[0];
      if (afStack_6c[0] <= fStack_90) {
        fStack_90 = afStack_6c[0];
        fVar3 = fStack_b4;
        if (fStack_b4 <= afStack_6c[0]) goto LAB_00dc043a;
        goto LAB_00dc0481;
      }
LAB_00dc0454:
      fVar2 = ABS(fVar4) * ((fVar3 - fStack_90) / unaff_EBX);
      fVar2 = (fVar2 + fVar2) * fVar1;
    }
    else {
      fVar3 = afStack_6c[0];
      if (afStack_6c[0] < fStack_90) {
LAB_00dc0481:
        fVar2 = ABS(fVar4) * ((fStack_90 - fVar3) / unaff_EBX);
        fVar2 = (fVar2 + fVar2) * fVar1;
      }
      else {
        fStack_90 = afStack_6c[0];
        fVar3 = fStack_b4;
        if (fStack_b4 < afStack_6c[0]) goto LAB_00dc0454;
      }
    }
LAB_00dc043a:
    if (fVar9 < fVar2) {
      fVar9 = fVar2;
    }
    iVar7 = iVar7 + 1;
    if (1 < iVar7) {
      return;
    }
  } while( true );
}

// 00DC04C0  FUN_00dc04c0  size=267  [between]
void FUN_00dc04c0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_20 [2];
  float local_18;
  
  iVar3 = FUN_00f98a90();
  fVar1 = (float)iVar3;
  fVar2 = (1.0 - param_3) * fVar1;
  FUN_00db6e20(local_20,param_1);
  if ((local_20[0] < fVar1 * param_3) || ((local_20[0] <= fVar1 * 0.5 && (local_18 < 0.0)))) {
    FUN_00db71a0(param_1,local_20,fVar1 * param_3,param_4);
    return;
  }
  if (local_20[0] <= fVar2) {
    if (local_20[0] <= fVar1 * 0.5) {
      return;
    }
    if (0.0 <= local_18) {
      return;
    }
  }
  FUN_00db71a0(param_1,local_20,fVar2,param_4);
  return;
}

// 00DC05D0  FUN_00dc05d0  size=341  [between]
float10 FUN_00dc05d0(undefined4 *param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  float local_2c;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar3 = FUN_00f98aa0();
  fVar2 = (float)iVar3;
  fVar1 = (1.0 - param_5) * fVar2;
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_50 = *param_1;
  local_48 = param_1[2];
  local_44 = param_1[3];
  local_4c = *(float *)(param_2 + 4) + *(float *)(param_2 + 4) + (float)param_1[1];
  FUN_00db6e20(local_20,&local_40);
  FUN_00db6e20(local_30,&local_50);
  if ((local_2c < param_3 * fVar2) && (local_1c < fVar1)) {
    fVar4 = (float10)FUN_00db75f0(&local_50,local_30,param_3 * fVar2);
    return fVar4;
  }
  if ((param_4 * fVar2 < local_2c) && (local_1c < fVar1)) {
    fVar4 = (float10)FUN_00db75f0(&local_50,local_30,param_4 * fVar2);
    return fVar4;
  }
  if (local_1c <= fVar1) {
    return (float10)0;
  }
  fVar4 = (float10)FUN_00db75f0(&local_40,local_20,fVar1);
  return fVar4;
}

// 00DC0730  FUN_00dc0730  size=341  [between]
float10 FUN_00dc0730(undefined4 *param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  float local_2c;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar4 = FUN_00f98aa0();
  fVar3 = (float)iVar4;
  fVar1 = (1.0 - param_3) * fVar3;
  fVar2 = (1.0 - param_4) * fVar3;
  fVar3 = fVar3 * param_5;
  local_50 = *param_1;
  local_4c = param_1[1];
  local_48 = param_1[2];
  local_44 = param_1[3];
  local_40 = *param_1;
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_3c = *(float *)(param_2 + 4) + *(float *)(param_2 + 4) + (float)param_1[1];
  FUN_00db6e20(local_30,&local_50);
  FUN_00db6e20(local_20,&local_40);
  if ((fVar1 < local_2c) && (fVar3 < local_1c)) {
    fVar5 = (float10)FUN_00db75f0(&local_50,local_30,fVar1);
    return fVar5;
  }
  if ((local_2c < fVar2) && (fVar3 < local_1c)) {
    fVar5 = (float10)FUN_00db75f0(&local_50,local_30,fVar2);
    return fVar5;
  }
  if (fVar3 <= local_1c) {
    return (float10)0;
  }
  fVar5 = (float10)FUN_00db75f0(&local_40,local_20,fVar3);
  return fVar5;
}

// 00DC0890  Camera::StateNodeTraitType<Camera::StatePartsFollow>::vf04  size=73  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StatePartsFollow>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StatePartsFollow::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0xbf800000;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0x3f800000;
    puVar1[0xc] = 0x3f5f66f3;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DC08E0  Camera::StateNodeTraitType<Camera::StateLockOn>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateLockOn>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x750,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateLockOn::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DC0910  Camera::StateNodeTraitType<Camera::StateFps>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateFps>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x90,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateFps::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DC0940  Camera::StateNodeTraitType<Camera::StateRadio>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateRadio>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateRadio::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DC0970  Camera::StateNodeTraitType<Camera::StateSlashingNormal>::vf04  size=36  [class]
undefined4 * Camera::StateNodeTraitType<Camera::StateSlashingNormal>::vf04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xa0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = StateSlashingNormal::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00DC0F70  FUN_00dc0f70  size=120  [callgraph]
float10 FUN_00dc0f70(int *param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_20 [28];
  
  if (param_1 == (int *)0x0) {
    return (float10)0;
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x208))(local_20);
  uStack_34 = *puVar1;
  uStack_30 = puVar1[1];
  uStack_2c = puVar1[2];
  uStack_28 = puVar1[3];
  uVar3 = 0x41000000;
  fVar2 = (float10)(**(code **)(*param_1 + 0x20c))(0x41000000);
  fVar2 = (float10)FUN_00db8650(&uStack_34,(float)fVar2,uVar3);
  return fVar2;
}

// 00DC0FF0  FUN_00dc0ff0  size=631  [callgraph]
void __fastcall FUN_00dc0ff0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined1 auStack_20 [12];
  float fStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc101f:
    iVar7 = FUN_00a81330();
    if (iVar7 == 0) {
      return;
    }
  }
  else {
    piVar6 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar6 + 0x28))(1);
    if (iVar7 == 0) goto LAB_00dc101f;
  }
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc105c:
    iVar7 = FUN_00a81330();
    if (iVar7 != 0) goto LAB_00dc106b;
    iVar7 = 0;
  }
  else {
    piVar6 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar6 + 0x28))(1);
    if (iVar7 == 0) goto LAB_00dc105c;
LAB_00dc106b:
    iVar7 = FUN_00a7c800();
  }
  if (*(float *)(param_1 + 0x8c0) != 0.0) {
    return;
  }
  fVar9 = (float10)FUN_00ddba30(*(float *)(iVar7 + 0x94) - *(float *)(param_1 + 0x364));
  *(float *)(param_1 + 0x77c) = (float)fVar9;
  pfVar1 = (float *)(param_1 + 0x360);
  fVar9 = (float10)FUN_00ddba30(0.12217305 - *pfVar1);
  *(float *)(param_1 + 0x778) = (float)fVar9;
  *(undefined4 *)(param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0;
  fVar10 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x364));
  fVar10 = (float10)FUN_00ddba30((float)fVar10);
  *(float *)(param_1 + 0x364) = (float)fVar10;
  fVar9 = (float10)FUN_00ddba30(*pfVar1 + (float)fVar9);
  fVar9 = (float10)FUN_00ddba30((float)fVar9);
  *pfVar1 = (float)fVar9;
  pfVar2 = (float *)(param_1 + 0x4b0);
  FUN_00dbe570(pfVar1,pfVar2);
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x780) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0x40400000;
  *(undefined4 *)(param_1 + 0x4a4) = 0x40400000;
  puVar8 = (undefined4 *)FUN_00da8e40(auStack_20);
  fVar3 = (float)puVar8[1];
  uVar4 = puVar8[2];
  fVar5 = (float)puVar8[3];
  *(undefined4 *)(param_1 + 0x4c0) = *puVar8;
  *(float *)(param_1 + 0x4c4) = fVar3 + 1.4;
  *(undefined4 *)(param_1 + 0x4c8) = uVar4;
  *(float *)(param_1 + 0x4cc) = fVar5 + fStack_14;
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar6 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar6 + 0x28))(1);
    if (iVar7 != 0) goto LAB_00dc11f9;
  }
  if ((*(int *)(param_1 + 0x378) != 0) && (1 < *(int *)(*(int *)(param_1 + 0x378) + 0x11a0))) {
    fVar3 = *(float *)(param_1 + 0x4f4) + 1.0;
    *(float *)(param_1 + 0x4f4) = fVar3;
    *(float *)(param_1 + 0x4a4) = fVar3;
  }
LAB_00dc11f9:
  uStack_30 = 0;
  uStack_2c = 0;
  fStack_28 = *(float *)(param_1 + 0x4a4) * -1.0;
  FUN_00da6ef0(pfVar2,&uStack_30,pfVar1,param_1 + 0x390);
  *pfVar2 = *pfVar2 + *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + *(float *)(param_1 + 0x4b4);
  *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + *(float *)(param_1 + 0x4b8);
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + *(float *)(param_1 + 0x4bc);
  return;
}

// 00DC1270  FUN_00dc1270  size=122  [callgraph]
void __thiscall FUN_00dc1270(int param_1,float param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    if (*(int *)(param_1 + 0x8c8) == 1) {
      FUN_00dd5650(&DAT_016c42f8,(double)param_2);
      return;
    }
    *(float *)(param_1 + 0x8c0) = param_2;
    *(float *)(param_1 + 0x8c4) = param_2 * 0.5;
    break;
  case 1:
  case 2:
  case 3:
    *(float *)(param_1 + 0x8c0) = param_2;
    *(undefined4 *)(param_1 + 0x8c4) = 0;
  }
  *(undefined4 *)(param_1 + 0x8c8) = param_3;
  if (param_2 == 0.0) {
    FUN_00dc0ff0();
  }
  return;
}

// 00DC1300  FUN_00dc1300  size=131  [callgraph]
void __thiscall FUN_00dc1300(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8b4) = param_2;
  if (*(int *)(param_1 + 0x8c8) == 1) {
    FUN_00dd5650(&DAT_016c42f8,0x4024000000000000);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    *(undefined4 *)(param_1 + 0x8c0) = 0x41200000;
    *(undefined4 *)(param_1 + 0x8c4) = 0x40a00000;
  }
  *(undefined4 *)(param_1 + 0x790) = 0;
  *(undefined4 *)(param_1 + 0x794) = 0;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  return;
}

// 00DC1390  FUN_00dc1390  size=113  [callgraph]
void __thiscall FUN_00dc1390(int param_1,float param_2)

{
  if (*(int *)(param_1 + 0x8c8) == 1) {
    FUN_00dd5650(&DAT_016c42f8,(double)param_2);
    *(undefined4 *)(param_1 + 0x950) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(float *)(param_1 + 0x8c0) = param_2;
  *(float *)(param_1 + 0x8c4) = param_2 * 0.5;
  if (param_2 == 0.0) {
    FUN_00dc0ff0();
  }
  *(undefined4 *)(param_1 + 0x950) = 0;
  return;
}

// 00DC1410  FUN_00dc1410  size=802  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00dc1410(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x6e4) + 100);
  if (piVar2 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x20))();
    iVar3 = *(int *)(iVar3 + 8);
  }
  if ((iVar3 == 5) || ((0xb < iVar3 && (iVar3 < 0xf)))) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x8c0);
  if (fVar1 == 0.0) {
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x380) = 0;
    FUN_00da01f0();
    if (*(int *)(param_1 + 0x8c8) == 1) {
      FUN_00dd5650(&DAT_016c42f8,0xbff0000000000000);
      *(undefined4 *)(param_1 + 0x8c4) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x8c8) = 0;
    *(undefined4 *)(param_1 + 0x8c0) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x8c4) = 0xbf000000;
    *(undefined4 *)(param_1 + 0x8c4) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x8c8);
  if (iVar3 == 1) {
    if (*(float *)(param_1 + 0x8c0) < *(float *)(param_1 + 0x8c4)) {
      *(undefined4 *)(param_1 + 0x8c8) = 0;
      *(undefined4 *)(param_1 + 0x8c0) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x8c4) = 0xbf000000;
      FUN_00da8810();
      *(undefined4 *)(param_1 + 0x8c4) = 0;
      goto LAB_00dc1546;
    }
  }
  else {
    if ((iVar3 != 2) && (iVar3 != 3)) {
      iVar3 = FUN_00db5440();
      if ((iVar3 != 0) && (iVar3 = FUN_00db56a0(), iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x8c4) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0x8c4)) {
        *(float *)(param_1 + 0x8c4) = *(float *)(param_1 + 0x8c4) - _DAT_01be942c;
        FUN_00da8810();
        return;
      }
      if (fVar1 <= -1.0) {
        return;
      }
      fVar1 = fVar1 - _DAT_01be942c;
      if (*(float *)(param_1 + 0x770) < fVar1) {
        FUN_00da8810();
        if (*(int *)(param_1 + 0x8c8) == 1) {
          FUN_00dd5650(&DAT_016c42f8,(double)fVar1);
          return;
        }
        *(undefined4 *)(param_1 + 0x8c8) = 0;
        *(float *)(param_1 + 0x8c0) = fVar1;
        *(float *)(param_1 + 0x8c4) = fVar1 * 0.5;
        if (fVar1 != 0.0) {
          return;
        }
        FUN_00dc0ff0();
        return;
      }
      if (*(int *)(param_1 + 0x8c8) == 1) {
        FUN_00dd5650(&DAT_016c42f8,0xbff0000000000000);
      }
      else {
        *(undefined4 *)(param_1 + 0x8c0) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x8c8) = 0;
        *(undefined4 *)(param_1 + 0x8c4) = 0xbf000000;
      }
      *(undefined4 *)(param_1 + 0x8c4) = 0;
      FUN_00da8810();
      return;
    }
    if (*(float *)(param_1 + 0x8c0) < *(float *)(param_1 + 0x8c4)) {
      *(undefined4 *)(param_1 + 0x8c0) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x8c8) = 0;
      *(undefined4 *)(param_1 + 0x8c4) = 0xbf000000;
      FUN_00da8810();
      *(undefined4 *)(param_1 + 0x8c4) = 0;
      return;
    }
    if (*(float *)(param_1 + 0x8c4) != 0.0) goto LAB_00dc1546;
  }
  FUN_00da8810();
LAB_00dc1546:
  *(float *)(param_1 + 0x8c4) = *(float *)(param_1 + 0x8c4) + _DAT_01be942c;
  return;
}

// 00DC1740  FUN_00dc1740  size=103  [callgraph]
void __fastcall FUN_00dc1740(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_20 [28];
  
  FUN_00db9270();
  FUN_00db9270();
  FUN_00db9270();
  puVar1 = (undefined4 *)FUN_00da9820(local_20);
  *(undefined4 *)(param_1 + 0x360) = *puVar1;
  *(undefined4 *)(param_1 + 0x364) = puVar1[1];
  *(undefined4 *)(param_1 + 0x368) = puVar1[2];
  *(undefined4 *)(param_1 + 0x36c) = puVar1[3];
  return;
}

// 00DC17B0  FUN_00dc17b0  size=136  [callgraph]
void FUN_00dc17b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc17d5:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_00dc17eb;
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dc17d5;
  }
  FUN_00a7c800();
LAB_00dc17eb:
  FUN_00db92f0(param_1,param_2,param_3);
  FUN_00db92f0(param_1,param_2,param_3);
  FUN_00db92f0(param_1,param_2,param_3);
  return;
}

// 00DC1840  FUN_00dc1840  size=224  [callgraph]
void FUN_00dc1840(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc186c:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dc1886;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dc186c;
  }
  iVar2 = FUN_00a7c800();
LAB_00dc1886:
  uStack_30 = *(undefined4 *)(iVar2 + 0x40);
  uStack_28 = *(undefined4 *)(iVar2 + 0x48);
  fStack_2c = *(float *)(iVar2 + 0x44) + 1.4;
  fStack_24 = *(float *)(iVar2 + 0x4c) + fStack_14;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_00db92f0(&uStack_30,&uStack_20,0xbf800000);
  FUN_00db92f0(&uStack_30,&uStack_20,0xbf800000);
  FUN_00db92f0(&uStack_30,&uStack_20,0xbf800000);
  return;
}

// 00DC1920  FUN_00dc1920  size=105  [callgraph]
undefined4 __thiscall FUN_00dc1920(float *param_1,undefined4 param_2)

{
  float local_30 [3];
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30[0] = param_1[4] - *param_1;
  local_30[2] = param_1[6] - param_1[2];
  local_24 = param_1[7] - param_1[3];
  local_30[1] = 0.0;
  FUN_00db5c70(local_30,local_30);
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  FUN_00db5fe0(param_2,&local_20,local_30);
  return param_2;
}

// 00DC1990  FUN_00dc1990  size=287  [callgraph]
void __fastcall FUN_00dc1990(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  iVar2 = FUN_00548340();
  if (*(int *)(param_1 + 0x814) != iVar2) {
    *(undefined4 *)(param_1 + 0x818) = 0;
  }
  if ((*(float *)(param_1 + 0x818) <= 0.35) &&
     (fVar1 = *(float *)(param_1 + 0x818) + 0.01, *(float *)(param_1 + 0x818) = fVar1, 0.35 <= fVar1
     )) {
    *(undefined4 *)(param_1 + 0x818) = 0x3eb33333;
  }
  iVar2 = FUN_00548340();
  if (iVar2 == 1) {
    FUN_00da1f00(1);
    uVar3 = FUN_00548340();
    *(undefined4 *)(param_1 + 0x814) = uVar3;
    return;
  }
  iVar2 = FUN_00548340();
  if (iVar2 == 2) {
    FUN_00da1f00(0);
    uVar3 = FUN_00548340();
    *(undefined4 *)(param_1 + 0x814) = uVar3;
    return;
  }
  iVar2 = FUN_00548340();
  if (iVar2 != 3) {
    iVar2 = FUN_00548340();
    if (iVar2 != 4) {
      FUN_00db9880(0x3f800000);
      FUN_00da12b0();
      uVar3 = FUN_00548340();
      *(undefined4 *)(param_1 + 0x814) = uVar3;
      return;
    }
    FUN_00da1900();
    uVar3 = FUN_00548340();
    *(undefined4 *)(param_1 + 0x814) = uVar3;
    return;
  }
  FUN_00da2110();
  uVar3 = FUN_00548340();
  *(undefined4 *)(param_1 + 0x814) = uVar3;
  return;
}

// 00DC1AB0  FUN_00dc1ab0  size=2721  [callgraph]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00dc1ab0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  undefined4 *puVar12;
  float *pfStack_22c;
  float *pfStack_228;
  undefined4 **ppuStack_224;
  undefined4 **ppuStack_220;
  undefined4 *puStack_21c;
  undefined4 *puStack_218;
  undefined4 *puStack_214;
  float *pfStack_210;
  undefined4 *puStack_20c;
  float *pfStack_208;
  float *pfStack_204;
  undefined1 **ppuStack_200;
  float *pfStack_1fc;
  float *pfStack_1f8;
  float *pfStack_1f4;
  float *pfStack_1f0;
  float *pfStack_1ec;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e4;
  float fStack_1e0;
  undefined4 *puStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d4;
  undefined4 local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [5];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  float afStack_16c [5];
  undefined1 auStack_158 [12];
  undefined1 auStack_14c [12];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 auStack_90 [3];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [24];
  undefined4 local_60 [6];
  float fStack_48;
  
  puStack_1d4 = (undefined4 *)0xdc1acc;
  iVar7 = FUN_00a81330();
  if (iVar7 != 0) {
    puStack_1d4 = (undefined4 *)0xdc1adb;
    iVar7 = FUN_00a7c8a0();
    if (iVar7 != 0) {
      puStack_1d4 = (undefined4 *)0xdc1af0;
      iVar8 = FUN_00a81330();
      if (iVar8 != 0) {
        local_1bc = *(float *)(iVar7 + 0x94);
        puStack_1d4 = (undefined4 *)0x5;
        puStack_1d8 = &local_1c0;
        local_1b4 = *(float *)(iVar7 + 0x9c);
        puStack_1dc = local_60;
        local_1c0 = 0;
        local_1b8 = 0.0;
        local_108 = 0;
        local_10c = 0;
        local_110 = 0;
        local_114 = 0.0;
        local_11c = 0;
        local_120 = 0;
        local_124 = 0;
        local_128 = 0;
        local_130 = 0;
        local_134 = 0;
        local_138 = 0;
        local_13c = 0;
        local_104 = 0x3f800000;
        local_118 = 0x3f800000;
        local_12c = 0x3f800000;
        local_140 = 0x3f800000;
        fStack_1e0 = 2.0213714e-38;
        thunk_FUN_00ddc1d0();
        puStack_1dc = &local_140;
        puStack_1d8 = local_60;
        fStack_1e0 = 2.0213751e-38;
        puStack_1d4 = puStack_1dc;
        D3DXMatrixMultiply();
        fStack_1e0 = (float)(iVar7 + 0xb0);
        puStack_1e8 = auStack_14c;
        pfStack_1ec = (float *)0xdc1bce;
        puStack_1e4 = puStack_1e8;
        D3DXMatrixMultiply();
        pfStack_1ec = (float *)0xdc1bd8;
        iVar8 = FUN_00a81330();
        if (iVar8 != 0) {
          pfStack_1ec = (float *)0xdc1be3;
          FUN_00a7c8a0();
        }
        local_118 = *(undefined4 *)(iVar7 + 0x40);
        pfStack_1ec = (float *)&DAT_016c3080;
        fStack_c4 = *(float *)(iVar7 + 0x44);
        pfStack_1f0 = (float *)0x1e;
        pfStack_1f4 = (float *)&uStack_b8;
        local_110 = *(undefined4 *)(iVar7 + 0x48);
        pfStack_1f8 = (float *)&local_118;
        local_10c = *(undefined4 *)(iVar7 + 0x4c);
        pfStack_1fc = (float *)0x0;
        ppuStack_200 = (undefined1 **)0x0;
        pfStack_204 = (float *)0x0;
        pfStack_208 = (float *)&uStack_c8;
        local_114 = fStack_c4 + 1.5;
        fStack_b4 = (fStack_c4 - 2.5) - 20.0;
        puStack_20c = (undefined4 *)0xdc1c98;
        uStack_c8 = local_118;
        uStack_c0 = local_110;
        uStack_bc = local_10c;
        uStack_b8 = local_118;
        uStack_b0 = local_110;
        uStack_ac = local_10c;
        RayCastSingleHitWork::RayCastSingleHitWork_4();
        pfStack_1ec = &fStack_1ac;
        pfStack_1f0 = &fStack_1b0;
        pfStack_1f4 = afStack_16c;
        pfStack_1f8 = (float *)0xdc1cb1;
        FUN_00b7fe80();
        pfStack_1ec = (float *)0xdc1cc2;
        fVar9 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x81c) =
             (float)(((float10)afStack_16c[0] - (float10)*(float *)(param_1 + 0x81c)) * fVar9 +
                    (float10)*(float *)(param_1 + 0x81c));
        pfStack_1ec = (float *)0xdc1ceb;
        fVar9 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x820) =
             (float)(((float10)fStack_1b0 - (float10)*(float *)(param_1 + 0x820)) * fVar9 +
                    (float10)*(float *)(param_1 + 0x820));
        pfStack_1ec = (float *)0xdc1d14;
        fVar9 = (float10)FUN_00fdc1f0();
        fVar9 = ((float10)fStack_1ac - (float10)*(float *)(param_1 + 0x824)) * fVar9 +
                (float10)*(float *)(param_1 + 0x824);
        *(float *)(param_1 + 0x824) = (float)fVar9;
        afStack_16c[0] = *(float *)(param_1 + 0x81c);
        fStack_1b0 = *(float *)(param_1 + 0x820);
        fStack_1ac = (float)fVar9;
        pfStack_1ec = (float *)(afStack_16c[0] + *(float *)(iVar7 + 0x90));
        pfStack_1f0 = (float *)0xdc1d58;
        fVar9 = (float10)FUN_00ddba30();
        local_1bc = (float)fVar9;
        pfStack_1ec = (float *)(_DAT_01dc5584 + fStack_1b0);
        pfStack_1f0 = (float *)0xdc1d6e;
        fVar9 = (float10)FUN_00ddba30();
        local_1b4 = (float)fVar9;
        pfStack_1ec = (float *)0xf0015;
        pfStack_1f0 = (float *)0x164129c;
        local_1b8 = 0.0;
        pfStack_1f4 = (float *)0xdc1d8a;
        pfStack_1f0 = (float *)FUN_00e03ea0();
        pfStack_1f4 = (float *)0xdc1d98;
        iVar8 = FUN_00a18d70();
        if (iVar8 != 0) {
          pfStack_1ec = (float *)0xdc1da7;
          FUN_00a7c8a0();
          pfStack_1ec = (float *)0x1;
          pfStack_1f0 = (float *)0xdc1db0;
          iVar8 = FUN_00a12210();
          if (iVar8 != 0) {
            pfStack_1ec = (float *)(iVar8 + 0x10);
            pfStack_1f0 = (float *)0x0;
            pfStack_1f4 = (float *)auStack_78;
            pfStack_1f8 = (float *)0xdc1dc7;
            D3DXMatrixInverse();
            pfStack_1f8 = (float *)auStack_84;
            ppuStack_200 = &puStack_1e4;
            pfStack_204 = (float *)0xdc1dda;
            pfStack_1fc = (float *)(iVar7 + 0x40);
            D3DXVec3TransformNormal();
            local_1b8 = (fStack_48 + (float)puStack_1d8) * 0.08726646 * 0.8 - 0.2617994;
            if (local_1b8 <= 0.05235988) {
              if (local_1b8 < -0.5235988) {
                local_1b8 = -0.5235988;
              }
            }
            else {
              local_1b8 = 0.05235988;
            }
          }
        }
        *(float *)(param_1 + 0x4a8) = fStack_1ac;
        pfStack_1ec = (float *)(local_1bc - *(float *)(param_1 + 0x790));
        pfStack_1f0 = (float *)0xdc1e4a;
        fVar9 = (float10)FUN_00ddba30();
        fStack_170 = (float)fVar9;
        pfStack_1ec = (float *)(local_1b4 - *(float *)(param_1 + 0x794));
        pfStack_1f0 = (float *)0xdc1e60;
        fVar9 = (float10)FUN_00ddba30();
        local_1bc = (float)fVar9;
        if (ABS(fStack_170) <= 1e-05) {
          fVar9 = (float10)0;
        }
        else {
          pfStack_1ec = (float *)0xdc1e8b;
          fVar9 = (float10)FUN_00fdc1f0();
          fVar9 = fVar9 * (float10)fStack_170;
        }
        *(float *)(param_1 + 0x788) = (float)fVar9;
        if (ABS(local_1bc) <= 1e-05) {
          fVar9 = (float10)0;
        }
        else {
          pfStack_1ec = (float *)0xdc1ebd;
          fVar9 = (float10)FUN_00fdc1f0();
          fVar9 = fVar9 * (float10)local_1bc;
        }
        *(float *)(param_1 + 0x78c) = (float)fVar9;
        pfStack_1ec = (float *)(*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) +
                                *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x790));
        *(float **)(param_1 + 0x790) = pfStack_1ec;
        pfStack_1f0 = (float *)0xdc1ef2;
        fVar9 = (float10)FUN_00ddba30();
        *(float *)(param_1 + 0x360) = (float)fVar9;
        pfStack_1ec = (float *)(*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                                *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
        *(float **)(param_1 + 0x794) = pfStack_1ec;
        pfStack_1f0 = (float *)0xdc1f1e;
        fVar9 = (float10)FUN_00ddba30();
        *(float *)(param_1 + 0x364) = (float)fVar9;
        pfStack_1ec = (float *)auStack_158;
        afStack_16c[1] = 0.0;
        pfStack_1f4 = afStack_16c + 1;
        afStack_16c[2] = 1.0;
        afStack_16c[3] = 0.0;
        pfStack_1f8 = (float *)0xdc1f58;
        pfStack_1f0 = pfStack_1f4;
        D3DXVec3TransformNormal();
        pfStack_1f8 = afStack_16c + 2;
        afStack_194[0] = 0.0;
        ppuStack_200 = (undefined1 **)afStack_194;
        afStack_194[1] = 0.0;
        afStack_194[2] = 1.0;
        pfStack_204 = (float *)0xdc1f7d;
        pfStack_1fc = (float *)ppuStack_200;
        D3DXVec3TransformNormal();
        pfStack_1f0 = (float *)(fStack_198 * fStack_17c - fStack_19c * fStack_178);
        pfStack_1ec = (float *)(fStack_1a0 * fStack_178 - fStack_180 * fStack_198);
        puStack_1e8 = (undefined1 *)(fStack_180 * fStack_19c - fStack_1a0 * fStack_17c);
        fVar11 = (float)puStack_1e8 * (float)puStack_1e8 +
                 (float)pfStack_1f0 * (float)pfStack_1f0 + (float)pfStack_1ec * (float)pfStack_1ec;
        fStack_1b0 = (float)pfStack_1f0;
        fStack_1ac = (float)pfStack_1ec;
        fStack_1a8 = (float)puStack_1e8;
        if (fVar11 < 0.0 == (fVar11 == 0.0)) {
          pfStack_208 = &fStack_1b0;
          puStack_20c = (undefined4 *)0xdc2033;
          pfStack_204 = pfStack_208;
          FUN_00ddf460();
        }
        else {
          pfStack_204 = (float *)&DAT_0163d0ac;
          pfStack_208 = (float *)0xdc2056;
          FUN_00dd5650();
          fStack_1a8 = 0.0;
          fStack_1ac = 1.0;
          fStack_1b0 = 0.0;
        }
        *(undefined4 *)(param_1 + 0x7f0) = 0;
        fVar5 = fStack_1b0 * -0.8;
        fVar4 = fStack_1ac * -0.8;
        fVar11 = fStack_1a8 * -0.8;
        fStack_1b0 = fStack_1a0 * 0.0;
        fStack_1ac = fStack_19c * 0.0;
        fStack_1a8 = fStack_198 * 0.0;
        fStack_1a4 = afStack_194[0] * 0.0;
        pfStack_1f0 = (float *)(fStack_180 + fVar5 + fStack_1b0 + *(float *)(iVar7 + 0x40));
        pfStack_1ec = (float *)(*(float *)(iVar7 + 0x44) + fStack_1ac + fStack_17c + fVar4);
        puStack_1e8 = (undefined1 *)(fStack_1a8 + fStack_178 + fVar11 + *(float *)(iVar7 + 0x48));
        pfVar1 = (float *)(param_1 + 0x4c0);
        pfStack_204 = (float *)0xdc2101;
        fVar9 = (float10)FUN_00fdc1f0();
        *pfVar1 = (float)(((float10)(float)pfStack_1f0 - (float10)*pfVar1) * fVar9 +
                         (float10)*pfVar1);
        pfStack_204 = (float *)0xdc211e;
        fVar9 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c4) =
             (float)(((float10)(float)pfStack_1ec - (float10)*(float *)(param_1 + 0x4c4)) * fVar9 +
                    (float10)*(float *)(param_1 + 0x4c4));
        pfStack_204 = (float *)0xdc2147;
        fVar9 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4c8) =
             (float)(((float10)(float)puStack_1e8 - (float10)*(float *)(param_1 + 0x4c8)) * fVar9 +
                    (float10)*(float *)(param_1 + 0x4c8));
        *(undefined4 *)(param_1 + 0x4f4) = 0x3fc00000;
        local_1c0 = 0;
        local_1bc = 0.0;
        local_1b8 = -1.5;
        uStack_b0 = *(undefined4 *)(param_1 + 0x360);
        uStack_ac = *(undefined4 *)(param_1 + 0x364);
        uStack_a8 = *(undefined4 *)(param_1 + 0x368);
        uStack_a4 = *(undefined4 *)(param_1 + 0x36c);
        fStack_e8 = 0.0;
        fStack_ec = 0.0;
        fStack_f0 = 0.0;
        pfStack_204 = (float *)0x5;
        uStack_f4 = 0;
        pfStack_208 = (float *)&uStack_b0;
        uStack_fc = 0;
        uStack_100 = 0;
        puStack_20c = auStack_90;
        local_104 = 0;
        local_108 = 0;
        local_110 = 0;
        local_114 = 0.0;
        local_118 = 0;
        local_11c = 0;
        fStack_e4 = 1.0;
        uStack_f8 = 0x3f800000;
        local_10c = 0x3f800000;
        local_120 = 0x3f800000;
        pfStack_210 = (float *)0xdc223c;
        thunk_FUN_00ddc1d0();
        puStack_20c = &local_120;
        pfStack_208 = (float *)auStack_90;
        pfStack_210 = (float *)0xdc2257;
        pfStack_204 = (float *)puStack_20c;
        D3DXMatrixMultiply();
        pfStack_210 = &fStack_17c;
        puStack_218 = &local_12c;
        puStack_21c = (undefined4 *)0xdc226f;
        puStack_214 = puStack_218;
        D3DXMatrixMultiply();
        puStack_21c = &local_138;
        ppuStack_224 = &puStack_1d8;
        pfStack_228 = (float *)0xdc2284;
        ppuStack_220 = ppuStack_224;
        D3DXVec3TransformNormal();
        puStack_1e4 = (undefined1 *)(*pfVar1 + (float)puStack_1e4);
        pfVar2 = (float *)(param_1 + 0x4b0);
        fStack_1e0 = *(float *)(param_1 + 0x4c4) + fStack_1e0;
        puStack_1dc = (undefined4 *)(*(float *)(param_1 + 0x4c8) + (float)puStack_1dc);
        puStack_1d8 = (undefined4 *)(*(float *)(param_1 + 0x4cc) + (float)puStack_1d8);
        pfStack_228 = (float *)0xdc22c6;
        fVar9 = (float10)FUN_00fdc1f0();
        *pfVar2 = (float)(((float10)(float)puStack_1e4 - (float10)*pfVar2) * fVar9 +
                         (float10)*pfVar2);
        pfStack_228 = (float *)0xdc22e3;
        fVar9 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b4) =
             (float)(((float10)fStack_1e0 - (float10)*(float *)(param_1 + 0x4b4)) * fVar9 +
                    (float10)*(float *)(param_1 + 0x4b4));
        pfStack_228 = (float *)0xdc230c;
        fVar9 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x4b8) =
             (float)(((float10)(float)puStack_1dc - (float10)*(float *)(param_1 + 0x4b8)) * fVar9 +
                    (float10)*(float *)(param_1 + 0x4b8));
        fStack_c4 = 0.0;
        pfStack_228 = afStack_194;
        pfStack_22c = &fStack_c4;
        uStack_c0 = 0x3f800000;
        uStack_bc = 0;
        D3DXVec3TransformNormal();
        fStack_f0 = *pfVar1 - *pfVar2;
        fStack_ec = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b4);
        fStack_e8 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4b8);
        fStack_e4 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4bc);
        FUN_00ddcfe0(&uStack_c0,&fStack_f0,ppuStack_200);
        puVar12 = &uStack_c0;
        fVar11 = (float)(param_1 + 0x4e0);
        D3DXVec3TransformNormal(fVar11);
        fVar5 = *(float *)(param_1 + 0x884) + 1.0;
        *(float *)(param_1 + 0x884) = fVar5;
        fVar4 = *(float *)(param_1 + 0x880);
        fVar6 = 0.0;
        if ((fVar5 < 0.0) || (fVar6 = fVar5, fVar5 <= fVar4)) {
          fVar4 = fVar6;
        }
        *(float *)(param_1 + 0x884) = fVar4;
        fVar10 = (float10)FUN_00db51c0();
        pfStack_208 = (float *)(float)fVar10;
        fVar9 = (float10)1;
        if (fVar9 < fVar10 != (fVar9 == fVar10)) {
          Camera::Math::safePositionTargetXz_2
                    (pfVar2,pfVar1,param_1 + 0x4e0,*(undefined4 *)(param_1 + 0x4a8));
          return;
        }
        *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4a8);
        pfStack_22c = (float *)0x0;
        pfStack_228 = (float *)0x0;
        ppuStack_224 = (undefined4 **)(float)fVar9;
        D3DXVec3TransformNormal(&pfStack_22c,&pfStack_22c,&fStack_1ac);
        pfVar3 = (float *)(param_1 + 0x830);
        fVar11 = (*pfVar1 - *(float *)(param_1 + 0x420)) * ABS(fVar11);
        fVar4 = (*(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x424)) * ABS((float)puVar12);
        fVar5 = (*(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x428)) *
                ABS((float)(param_1 + 0x4e0));
        fVar6 = (*(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x42c)) * (float)pfStack_22c;
        *pfVar3 = fVar11 + *pfVar3;
        *(float *)(param_1 + 0x834) = fVar4 + *(float *)(param_1 + 0x834);
        *(float *)(param_1 + 0x838) = fVar5 + *(float *)(param_1 + 0x838);
        *(float *)(param_1 + 0x83c) = fVar6 + *(float *)(param_1 + 0x83c);
        *(float *)(param_1 + 0x840) = fVar11 + *(float *)(param_1 + 0x840);
        *(float *)(param_1 + 0x844) = fVar4 + *(float *)(param_1 + 0x844);
        *(float *)(param_1 + 0x848) = fVar5 + *(float *)(param_1 + 0x848);
        *(float *)(param_1 + 0x84c) = fVar6 + *(float *)(param_1 + 0x84c);
        FUN_00dbedf0(auStack_d8,pfVar3,pfVar2,puStack_214);
        Camera::Math::safePositionTargetXz_2(auStack_d8,&uStack_c8,&uStack_a8,auStack_90[0]);
      }
    }
  }
  return;
}

// 00DC2560  FUN_00dc2560  size=87  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc2560(void)

{
  _DAT_018ccbdc = 0;
  _DAT_018ccbe0 = 0;
  _DAT_018ccbe4 = 0;
  _DAT_018ccbe8 = 0;
  _DAT_018ccbec = 0;
  _DAT_018ccbf0 = 0;
  FUN_00da2b20();
  FUN_00da2c80();
  _DAT_018ccc4c = 0xffffffff;
  cXmlBinary::cXmlBinary_11();
  cXmlBinary::cXmlBinary_10();
  cXmlBinary::cXmlBinary_2();
  cXmlBinary::cXmlBinary_4();
  cXmlBinary::cXmlBinary_7();
  return;
}

// 00DC25C0  FUN_00dc25c0  size=1629  [callgraph]
void __thiscall FUN_00dc25c0(uint *param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  undefined *puVar11;
  ushort *puVar12;
  int iVar13;
  bool bVar14;
  
  uVar6 = FUN_00daeb80(param_2);
  if (uVar6 == *param_1) goto LAB_00dc2917;
  FUN_00da3620(param_1 + 1);
  FUN_00dae980(param_1 + 0x3f,uVar6);
  bVar14 = uVar6 == 0xffffffff;
  uVar10 = uVar6;
  if (bVar14) {
    uVar10 = *param_1;
  }
  if (uVar10 < 0x80) {
    puVar11 = PTR_DAT_018bc3a0 + uVar10 * 0x1a0 + 0x18c;
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  if (bVar14) {
    uVar5 = *(ushort *)(puVar11 + 0x19c);
  }
  else {
    uVar5 = *(ushort *)(puVar11 + 0x19a);
  }
  uVar10 = 0;
  puVar12 = (ushort *)(puVar11 + 0x17e);
  puVar7 = param_1 + 0x60;
  do {
    fVar3 = 0.0;
    uVar1 = uVar5;
    if ((!bVar14) &&
       ((*(uint *)(puVar11 + (uVar10 >> 5) * 4 + 0x128) & 0x80000000U >> ((byte)uVar10 & 0x1f)) != 0
       )) {
      uVar1 = *puVar12;
    }
    puVar7[-2] = (uint)(float)uVar1;
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 1;
    puVar7[-1] = 0;
    *puVar7 = 0x3e4ccccd;
    puVar7[1] = 0x3f800000;
    puVar7 = puVar7 + 4;
  } while ((int)uVar10 < 7);
  uVar10 = param_1[0x42] >> 0x1a & 1;
  if ((param_1[0x23] >> 0x1a & 1) == 0) {
    if (uVar10 != 0) goto LAB_00dc26fc;
  }
  else if (uVar10 == 0) {
LAB_00dc26fc:
    param_1[0x91] = param_1[0x8f];
    param_1[0x92] = param_1[0x90];
    if (uVar10 == 0) {
      fVar2 = *(float *)(PTR_DAT_018bc3a8 + 4) * 0.017453292;
    }
    else {
      fVar2 = -1.3962634;
    }
    param_1[0x93] = (uint)fVar2;
    if (uVar10 == 0) {
      fVar2 = *(float *)(PTR_DAT_018bc3a8 + 8) * 0.017453292;
    }
    else {
      fVar2 = 1.3962634;
    }
    param_1[0x94] = (uint)fVar2;
    if (uVar10 == 0) {
      param_1[0x95] = 0x42700000;
    }
    else {
      param_1[0x95] = 0;
    }
    param_1[0x96] = 0;
    param_1[0x97] = 0x3fb33333;
    param_1[0x98] = 0;
  }
  fVar2 = fVar3;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x80000000) != 0)) {
    fVar2 = (float)*(ushort *)(puVar11 + 0x18c);
  }
  param_1[0x7a] = (uint)fVar2;
  param_1[0x7b] = 0;
  fVar2 = fVar3;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x40000000) != 0)) {
    fVar2 = (float)*(ushort *)(puVar11 + 0x18e);
  }
  param_1[0x7c] = (uint)fVar2;
  param_1[0x7d] = 0;
  fVar2 = fVar3;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x20000000) != 0)) {
    fVar2 = (float)*(ushort *)(puVar11 + 400);
  }
  param_1[0x7e] = (uint)fVar2;
  param_1[0x7f] = 0;
  fVar2 = fVar3;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x10000000) != 0)) {
    fVar2 = (float)*(ushort *)(puVar11 + 0x192);
  }
  param_1[0x80] = (uint)fVar2;
  param_1[0x81] = 0;
  fVar2 = fVar3;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x8000000) != 0)) {
    fVar2 = (float)*(ushort *)(puVar11 + 0x194);
  }
  param_1[0x82] = (uint)fVar2;
  param_1[0x83] = 0;
  fVar2 = fVar3;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x4000000) != 0)) {
    fVar2 = (float)*(ushort *)(puVar11 + 0x196);
  }
  param_1[0x84] = (uint)fVar2;
  param_1[0x85] = 0;
  if ((!bVar14) && ((*(uint *)(puVar11 + 300) & 0x2000000) != 0)) {
    fVar3 = (float)*(ushort *)(puVar11 + 0x198);
  }
  param_1[0x86] = (uint)fVar3;
  param_1[0x87] = 0;
  if (((param_1[0x3f] & 0x2000000) != 0) &&
     ((float)(ushort)param_1[0x4f] < (float)param_1[0x88] - (float)param_1[0x89])) {
    param_1[0x88] = (uint)(float)(ushort)param_1[0x4f];
    param_1[0x89] = 0;
  }
  *param_1 = uVar6;
LAB_00dc2917:
  fVar3 = 0.0;
  if (param_1[0x8e] != 0) {
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x62] = 0;
    param_1[0x60] = 0x3e4ccccd;
    param_1[0x61] = 0x3f800000;
    param_1[99] = 0;
    param_1[100] = 0x3e4ccccd;
    param_1[0x65] = 0x3f800000;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0x3e4ccccd;
    param_1[0x69] = 0x3f800000;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0x3e4ccccd;
    param_1[0x6d] = 0x3f800000;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0x3e4ccccd;
    param_1[0x71] = 0x3f800000;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0x3e4ccccd;
    param_1[0x75] = 0x3f800000;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0x3e4ccccd;
    param_1[0x79] = 0x3f800000;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x8e] = 0;
  }
  pfVar9 = (float *)(param_1 + 0x7a);
  pfVar8 = (float *)(param_1 + 0x5f);
  iVar13 = 7;
  do {
    if (*pfVar9 < pfVar9[1] != (*pfVar9 == pfVar9[1])) {
      fVar4 = *pfVar8 + 1.0;
      *pfVar8 = fVar4;
      fVar2 = fVar3;
      if ((0.0 <= fVar4) && (fVar2 = fVar4, pfVar8[-1] < fVar4)) {
        fVar2 = pfVar8[-1];
      }
      *pfVar8 = fVar2;
    }
    pfVar9 = pfVar9 + 2;
    pfVar8 = pfVar8 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  if ((float)param_1[0x80] < (float)param_1[0x81] != ((float)param_1[0x80] == (float)param_1[0x81]))
  {
    fVar2 = (float)param_1[0x96] + 1.0;
    param_1[0x96] = (uint)fVar2;
    fVar4 = fVar3;
    if ((0.0 <= fVar2) && (fVar4 = fVar2, (float)param_1[0x95] < fVar2)) {
      fVar4 = (float)param_1[0x95];
    }
    param_1[0x96] = (uint)fVar4;
  }
  pfVar9 = (float *)(param_1 + 0x7b);
  iVar13 = 7;
  do {
    fVar4 = *pfVar9 + 1.0;
    *pfVar9 = fVar4;
    fVar2 = fVar3;
    if ((0.0 <= fVar4) && (fVar2 = fVar4, pfVar9[-1] < fVar4)) {
      fVar2 = pfVar9[-1];
    }
    *pfVar9 = fVar2;
    pfVar9 = pfVar9 + 2;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  fVar2 = (float)param_1[0x89] + 1.0;
  param_1[0x89] = (uint)fVar2;
  fVar4 = fVar3;
  if ((0.0 <= fVar2) && (fVar4 = fVar2, (float)param_1[0x88] < fVar2)) {
    fVar4 = (float)param_1[0x88];
  }
  param_1[0x89] = (uint)fVar4;
  if ((float)param_1[0x88] < (float)param_1[0x89] == ((float)param_1[0x88] == (float)param_1[0x89]))
  {
    param_1[0x6b] = 0;
    param_1[0x81] = 0;
    param_1[0x20] = param_1[0x20] & 0xefffffff;
  }
  if ((*(int *)(param_2 + 0x6f0) == 0) || ((param_1[4] & 0x8000000) != 0)) {
    fVar4 = (float)param_1[0x8b] - 1.0;
    param_1[0x8b] = (uint)fVar4;
    fVar2 = (float)param_1[0x8a];
  }
  else {
    fVar4 = (float)param_1[0x8b] + 1.0;
    param_1[0x8b] = (uint)fVar4;
    fVar2 = (float)param_1[0x8a];
  }
  if ((fVar4 < 0.0) || (fVar3 = fVar4, fVar4 <= fVar2)) {
    fVar2 = fVar3;
  }
  param_1[0x8b] = (uint)fVar2;
  FUN_00dbafd0();
  return;
}

// 00DC2C20  FUN_00dc2c20  size=247  [callgraph]
void __thiscall FUN_00dc2c20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  if (*(int *)(param_2 + 0x6f0) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x228);
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  FUN_00dbafd0();
  return;
}

// 00DC2D20  FUN_00dc2d20  size=91  [callgraph]
void __thiscall FUN_00dc2d20(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 1;
  puVar2 = (undefined4 *)(param_1 + 0x180);
  iVar3 = 7;
  do {
    if ((param_3 & uVar1) != 0) {
      puVar2[-2] = param_2;
      puVar2[-1] = 0;
      *puVar2 = 0x3e4ccccd;
      puVar2[1] = 0x3f800000;
    }
    puVar2 = puVar2 + 4;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00dbafd0();
  return;
}

// 00DC2D90  FUN_00dc2d90  size=222  [callgraph]
float10 __thiscall FUN_00dc2d90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc2db8:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dc2dd2;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dc2db8;
  }
  iVar2 = FUN_00a7c800();
LAB_00dc2dd2:
  fVar3 = (float10)FUN_00ddba30(*(float *)(iVar2 + 0x94) - *(float *)(param_2 + 0x364));
  if (((float10)*(float *)(param_1 + 0x14c) <= ABS(fVar3)) &&
     (ABS(fVar3) <= (float10)*(float *)(param_1 + 0x150))) {
    fVar4 = (float10)FUN_00dbb3d0(param_2,param_1 + 0xfc);
    fVar5 = (float10)FUN_00db51c0();
    fVar3 = (float10)1;
    fVar3 = (float10)FUN_00dde210(0,(float)fVar4,
                                  (float)(fVar3 / ((fVar3 - fVar5) *
                                                   (float10)*(float *)(param_1 + 0x1b8) + fVar3)),
                                  0x40490fdb);
    return fVar3 * (float10)*(float *)(param_1 + 0x50);
  }
  return (float10)0;
}

// 00DC2E70  FUN_00dc2e70  size=154  [callgraph]
float10 __thiscall FUN_00dc2e70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc2e98:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dc2eb2;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dc2e98;
  }
  iVar2 = FUN_00a7c800();
LAB_00dc2eb2:
  fVar3 = (float10)FUN_00ddba30(*(float *)(iVar2 + 0x94) - *(float *)(param_2 + 0x364));
  if (((float10)*(float *)(param_1 + 0x14c) <= ABS(fVar3)) &&
     (ABS(fVar3) <= (float10)*(float *)(param_1 + 0x150))) {
    fVar3 = (float10)FUN_00dbb4a0(param_2,param_1 + 0xfc);
    return fVar3 * (float10)0.05;
  }
  return (float10)0;
}

// 00DC2F50  FUN_00dc2f50  size=534  [callgraph]
void __thiscall FUN_00dc2f50(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1[0xf] + 8))(param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)*param_1 + 8))(param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x12] + 8))(param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = FUN_00dbb880(2,7,param_2,param_3);
        if ((((((iVar1 == 0) && (iVar1 = FUN_00dbb880(2,0x11,param_2,param_3), iVar1 == 0)) &&
              (iVar1 = FUN_00dbb880(2,8,param_2,param_3), iVar1 == 0)) &&
             ((iVar1 = FUN_00dbb880(2,0xb,param_2,param_3), iVar1 == 0 &&
              (iVar1 = FUN_00dbb880(2,5,param_2,param_3), iVar1 == 0)))) &&
            (((DAT_01d61a88 != 0 && (iVar1 = FUN_00da62f0(), iVar1 == 0)) ||
             (((iVar1 = FUN_00dbb880(2,0xe,param_2,param_3), iVar1 == 0 &&
               (iVar1 = FUN_00dbb880(2,0xd,param_2,param_3), iVar1 == 0)) &&
              (iVar1 = FUN_00dbb880(2,0xc,param_2,param_3), iVar1 == 0)))))) &&
           (iVar1 = FUN_00dbb880(2,10,param_2,param_3), iVar1 == 0)) {
          if ((((*(uint *)(param_2 + 0x724) & 0x8000) != 0) && (iVar1 = FUN_00da61e0(), iVar1 == 0))
             && (iVar1 = FUN_00da62b0(), iVar1 == 0)) {
            FUN_00da0d70();
          }
          iVar1 = FUN_00db2370(param_2);
          if (iVar1 == 0) {
            iVar1 = FUN_00da8ae0();
            if ((iVar1 != 2) || (iVar1 = FUN_00db2410(param_2), iVar1 == 0)) {
              FUN_00db8210(2,1,param_2);
            }
          }
          else {
            iVar1 = FUN_00dbb880(2,4,param_2,param_3);
            if ((iVar1 == 0) && (iVar1 = FUN_00dbb880(2,3,param_2,param_3), iVar1 == 0)) {
              FUN_00db8210(2,2,param_2);
              return;
            }
          }
        }
      }
      else if (((int *)param_1[0x15] == (int *)0x0) ||
              (iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x20))(), *(int *)(iVar1 + 8) != 0x12))
      {
        param_1[0x15] = param_1[0x12];
        return;
      }
    }
    else if (((int *)param_1[0x15] == (int *)0x0) ||
            (iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x20))(), *(int *)(iVar1 + 8) != 0)) {
      param_1[0x15] = *param_1;
      return;
    }
  }
  else if (((int *)param_1[0x15] == (int *)0x0) ||
          (iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x20))(), *(int *)(iVar1 + 8) != 0xf)) {
    param_1[0x15] = param_1[0xf];
    return;
  }
  return;
}

// 00DC3170  Camera::StateBattle::vf14  size=136  [class]
void Camera::StateBattle::vf14(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [28];
  
  *(undefined4 *)(param_1 + 0x8bc) = 0;
  if (param_3 != (int *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x20))();
    if (*(int *)(iVar1 + 8) != 1) {
      FUN_00db9270();
      FUN_00db9270();
      FUN_00db9270();
      puVar2 = (undefined4 *)FUN_00da9820(auStack_20);
      *(undefined4 *)(param_1 + 0x360) = *puVar2;
      *(undefined4 *)(param_1 + 0x364) = puVar2[1];
      *(undefined4 *)(param_1 + 0x368) = puVar2[2];
      *(undefined4 *)(param_1 + 0x36c) = puVar2[3];
    }
  }
  return;
}

// 00DC3200  FUN_00dc3200  size=1417  [between]
float * __thiscall
FUN_00dc3200(int param_1,float *param_2,int param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_b0 [64];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc3234:
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) goto LAB_00dc3243;
    iVar6 = 0;
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00dc3234;
LAB_00dc3243:
    iVar6 = FUN_00a7c800();
  }
  *param_2 = *(float *)(iVar6 + 0x40);
  param_2[1] = *(float *)(iVar6 + 0x44) + 1.4;
  param_2[2] = *(float *)(iVar6 + 0x48);
  param_2[3] = *(float *)(iVar6 + 0x4c) + fStack_1a4;
  iVar6 = *(int *)(param_3 + 0x6f8);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fStack_1a0 = *(float *)(PTR_DAT_018bc3a8 + 0x4c);
      iVar6 = FUN_00a7c7e0();
      if (iVar6 == 0) {
LAB_00dc32e5:
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x10);
        pfVar9 = (float *)FUN_00da85d0();
        fVar1 = *(float *)(iVar6 + 0x40) - *pfVar9;
        fVar3 = *(float *)(iVar6 + 0x44) - pfVar9[1];
        fVar2 = *(float *)(iVar6 + 0x48) - pfVar9[2];
        if (fStack_1a0 < SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) goto LAB_00dc32e5;
      }
      iVar6 = *(int *)(param_1 + 0x10);
    }
  }
  else {
    *(int *)(param_1 + 0x10) = iVar6;
  }
  fVar1 = *(float *)(param_1 + 0x14);
  fStack_164 = fVar1;
  if (iVar6 == 0) goto LAB_00dc3685;
  FUN_00dbf4d0(param_3);
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  fStack_44 = fStack_1a4;
  FUN_00db7750();
  if (*(int *)(param_1 + 0x38) != 0) {
    fStack_70 = fStack_70 + (*param_2 - fStack_60);
    fStack_68 = fStack_68 + (param_2[2] - fStack_58);
    fStack_60 = fStack_60 + (*param_2 - fStack_60);
    fStack_58 = fStack_58 + (param_2[2] - fStack_58);
    fStack_6c = fStack_6c + (param_2[1] - fStack_5c);
    fStack_5c = fStack_5c + (param_2[1] - fStack_5c);
    thunk_FUN_00de01a0(auStack_b0,&fStack_70,&fStack_60,&uStack_50);
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc340c:
    iVar7 = FUN_00a81330();
    if (iVar7 != 0) goto LAB_00dc341e;
    iVar7 = 0;
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar7 == 0) goto LAB_00dc340c;
LAB_00dc341e:
    iVar7 = FUN_00a7c800();
  }
  fStack_1a0 = *(float *)(iVar7 + 0x40);
  fStack_19c = *(float *)(iVar7 + 0x44);
  uStack_198 = *(undefined4 *)(iVar7 + 0x48);
  uStack_194 = *(undefined4 *)(iVar7 + 0x4c);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc3465:
    iVar7 = FUN_00a81330();
    if (iVar7 != 0) goto LAB_00dc3477;
    uVar8 = 0;
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar7 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar7 == 0) goto LAB_00dc3465;
LAB_00dc3477:
    uVar8 = FUN_00a7c8a0();
  }
  FUN_00db5960(&uStack_160,uVar8);
  uStack_190 = *(undefined4 *)(iVar6 + 0x40);
  uStack_18c = *(undefined4 *)(iVar6 + 0x44);
  uStack_188 = *(undefined4 *)(iVar6 + 0x48);
  uStack_184 = *(undefined4 *)(iVar6 + 0x4c);
  FUN_00db5960(&fStack_1b0,iVar6);
  fStack_150 = fStack_1a0;
  fStack_14c = fStack_19c;
  uStack_148 = uStack_198;
  uStack_144 = uStack_194;
  uStack_140 = uStack_190;
  uStack_13c = uStack_18c;
  uStack_138 = uStack_188;
  uStack_134 = uStack_184;
  uStack_190 = uStack_160;
  uStack_18c = uStack_15c;
  uStack_188 = uStack_158;
  uStack_184 = uStack_154;
  fStack_180 = fStack_1b0;
  fStack_17c = fStack_1ac;
  fStack_178 = fStack_1a8;
  fStack_174 = fStack_1a4;
  fStack_1a0 = 0.2;
  fStack_19c = 0.1;
  FUN_00dbf6e0(&fStack_1b0,&fStack_150,&uStack_190,&fStack_1a0,2,0x3ccccccd);
  pfVar9 = (float *)FUN_00da0730(&uStack_160,0x3f800000);
  fVar1 = pfVar9[2] * fStack_1a8 + fStack_1b0 * *pfVar9 + pfVar9[1] * fStack_1ac;
  fStack_1a0 = fVar1;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc35e0:
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) goto LAB_00dc35f2;
      iVar7 = 0;
    }
    else {
      piVar5 = (int *)FUN_00c13920();
      iVar7 = (**(code **)(*piVar5 + 0x28))(1);
      if (iVar7 == 0) goto LAB_00dc35e0;
LAB_00dc35f2:
      iVar7 = FUN_00a7c800();
    }
    fVar3 = *(float *)(iVar6 + 0x40) - *(float *)(iVar7 + 0x40);
    fVar4 = *(float *)(iVar6 + 0x44) - *(float *)(iVar7 + 0x44);
    fVar2 = *(float *)(iVar6 + 0x48) - *(float *)(iVar7 + 0x48);
    fVar1 = *(float *)(PTR_DAT_018bc3a8 + 0x48);
    if (*(float *)(PTR_DAT_018bc3a8 + 0x4c) <= fVar1) {
LAB_00dc3671:
      fVar1 = 1.0;
    }
    else {
      fVar2 = 1.0 - (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) - fVar1) /
                    (*(float *)(PTR_DAT_018bc3a8 + 0x4c) - fVar1);
      fVar1 = 0.0;
      if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 < fVar2)) goto LAB_00dc3671;
    }
    fVar1 = fVar1 * fStack_1a0;
  }
  fVar1 = fVar1 + fStack_164;
LAB_00dc3685:
  fVar2 = *(float *)(PTR_DAT_018bc3a8 + 0x54);
  fVar3 = -fVar2;
  if ((fVar1 < fVar3) || (fVar3 = fVar1, fVar1 <= fVar2)) {
    fVar2 = fVar3;
  }
  fVar1 = *(float *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(float *)(param_1 + 0x14) = fVar2 * param_5 + (1.0 - param_5) * *(float *)(param_1 + 0x14);
    fVar1 = (1.0 - param_5) * *(float *)(param_1 + 0x18) + fVar1 * param_5;
  }
  else {
    *(float *)(param_1 + 0x14) = fVar2;
  }
  *(float *)(param_1 + 0x18) = fVar1;
  fStack_1b0 = 1.0;
  fStack_1ac = 0.0;
  fStack_1a8 = 0.0;
  FUN_00ddc1d0(&fStack_150,param_3 + 0x1e0,5);
  D3DXVec3TransformNormal(&uStack_190,&fStack_1b0,&fStack_150);
  D3DXVec3TransformNormal(&fStack_19c,&fStack_19c,param_3 + 0x390);
  fVar1 = *(float *)(param_3 + 0x3c4);
  fVar2 = *(float *)(param_3 + 0x3c8);
  fVar3 = *(float *)(param_1 + 0x14);
  *param_2 = *param_2 + (fStack_1a8 + *(float *)(param_3 + 0x3c0)) * fVar3;
  fVar1 = (fVar1 + fStack_1a4) * fVar3 + param_2[1];
  param_2[1] = fVar1;
  param_2[2] = (fVar2 + fStack_1a0) * fVar3 + param_2[2];
  param_2[3] = fVar3 * fStack_19c + param_2[3];
  param_2[1] = fVar1 + *(float *)(param_1 + 0x18);
  return param_2;
}

// 00DC3790  Camera::StateBattleFixed::vf10  size=35  [class]
void __thiscall Camera::StateBattleFixed::vf10(int param_1,undefined4 param_2)

{
  FUN_00dbb8d0(param_2);
  *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - 1.0;
  return;
}

// 00DC37C0  Camera::StateLockOn::vf14  size=128  [class]
void __thiscall Camera::StateLockOn::vf14(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 local_14;
  
  if (param_4 != param_1) {
    FUN_00dc1840();
    *(undefined4 *)(param_2 + 0x4e0) = 0;
    *(undefined4 *)(param_2 + 0x4e4) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x4e8) = 0;
    *(undefined4 *)(param_2 + 0x4ec) = local_14;
    *(undefined4 *)(param_2 + 0x49c) = local_14;
    *(undefined4 *)(param_2 + 0x490) = 0;
    *(undefined4 *)(param_2 + 0x498) = 0;
    *(undefined4 *)(param_2 + 0x494) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x37c) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x380) = 0;
    FUN_00da01f0(param_2 + 0x460);
  }
  return;
}

// 00DC3840  FUN_00dc3840  size=445  [between]
void __thiscall FUN_00dc3840(undefined4 *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 local_20 [4];
  float local_1c;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_2 + 0x6f8);
  uVar3 = FUN_00daefb0(*(undefined4 *)(iVar1 + 0x4b0));
  param_1[0x45] = 0x3fb33333;
  param_1[0x44] = uVar3;
  if (uVar3 < 0x40) {
    puVar4 = PTR_DAT_018bc3a0 + uVar3 * 0xd8 + 0xd1fc;
    if ((PTR_DAT_018bc3a0[uVar3 * 0xd8 + 0xd1ff] & 1) == 0) {
      puVar4 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar4 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  param_1[0x45] = *(float *)(puVar4 + 0x20) + 1.4;
  param_1[0x46] = 0x3e32b8c2;
  param_1[0x47] = 0xbeb2b8c2;
  if (uVar3 < 0x40) {
    puVar4 = PTR_DAT_018bc3a0 + uVar3 * 0xd8 + 0xd1fc;
    if ((*(uint *)(PTR_DAT_018bc3a0 + uVar3 * 0xd8 + 0xd1fc) & 0x10000000) == 0) {
      puVar4 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar4 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  param_1[0x46] = *(undefined4 *)(puVar4 + 0x2c);
  param_1[0x47] = *(undefined4 *)(puVar4 + 0x30);
  if ((*(uint *)(puVar4 + 4) & 0x80000000) != 0) {
    FUN_00db5960(local_20,iVar1);
    if (3.0 < local_1c + local_1c) {
      fVar2 = ((local_1c + local_1c) - 3.0) * 0.33333334;
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      param_1[0x46] = (float)param_1[0x46] - fVar2 * 0.12217305;
    }
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *param_1 = 0;
  param_1[0x4a] = 0;
  FUN_00dbf4d0(param_2);
  param_1[0x34] = 0;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x37] = local_14;
  FUN_00db7750();
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  return;
}

// 00DC3A00  FUN_00dc3a00  size=272  [between]
void __thiscall FUN_00dc3a00(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  undefined4 local_68;
  undefined4 local_64;
  float local_60 [2];
  float local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *(undefined4 *)(param_2 + 0x10);
  local_2c = *(undefined4 *)(param_2 + 0x14);
  local_28 = *(undefined4 *)(param_2 + 0x18);
  local_24 = *(undefined4 *)(param_2 + 0x1c);
  local_20 = *(undefined4 *)(param_2 + 0x30);
  local_1c = *(undefined4 *)(param_2 + 0x34);
  local_18 = *(undefined4 *)(param_2 + 0x38);
  local_14 = *(undefined4 *)(param_2 + 0x3c);
  local_50 = *(undefined4 *)(param_2 + 0x20);
  local_4c = *(undefined4 *)(param_2 + 0x24);
  local_48 = *(undefined4 *)(param_2 + 0x28);
  local_44 = *(undefined4 *)(param_2 + 0x2c);
  local_40 = *(undefined4 *)(param_2 + 0x40);
  local_3c = *(undefined4 *)(param_2 + 0x44);
  local_38 = *(undefined4 *)(param_2 + 0x48);
  local_34 = *(undefined4 *)(param_2 + 0x4c);
  local_68 = 0x3dcccccd;
  local_64 = 0x3dcccccd;
  FUN_00dbf6e0(local_60,&local_30,&local_50,&local_68,2,0x3ccccccd);
  fVar3 = (float10)FUN_00db51c0();
  pfVar1 = (float *)(param_1 + 0xb0);
  pfVar2 = (float *)(param_1 + 0xc0);
  *pfVar1 = (float)((float10)local_60[0] * fVar3 + (float10)*pfVar1);
  *(float *)(param_1 + 0xb8) =
       (float)((float10)*(float *)(param_1 + 0xb8) + (float10)local_58 * fVar3);
  *pfVar2 = (float)((float10)local_60[0] * fVar3 + (float10)*pfVar2);
  *(float *)(param_1 + 200) =
       (float)((float10)local_58 * fVar3 + (float10)*(float *)(param_1 + 200));
  thunk_FUN_00de01a0(param_1 + 0x70,pfVar1,pfVar2,param_1 + 0xd0);
  return;
}

// 00DC3B10  FUN_00dc3b10  size=907  [between]
void __thiscall FUN_00dc3b10(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  if (*(uint *)(param_1 + 0x110) < 0x40) {
    iVar8 = *(uint *)(param_1 + 0x110) * 0xd8;
    puVar10 = PTR_DAT_018bc3a0 + iVar8 + 0xd1fc;
    if ((*(uint *)(PTR_DAT_018bc3a0 + iVar8 + 0xd1fc) & 0x20000000) == 0) {
      puVar10 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar10 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  fVar5 = *(float *)(puVar10 + 0x24);
  if ((*param_1 & 1) != 0) {
    fVar5 = fVar5 + 2.0;
  }
  *(float *)(param_1 + 0xe0) = fVar5;
  FUN_00da7460();
  pbVar2 = param_1 + 0xd0;
  pbVar3 = param_1 + 0xc0;
  pbVar4 = param_1 + 0xb0;
  pbVar1 = param_1 + 0x70;
  thunk_FUN_00de01a0(pbVar1,pbVar4,pbVar3,pbVar2);
  if ((*param_1 & 1) != 0) {
    fVar11 = (float10)FUN_00dc0240(param_3 + 0x30,param_3 + 0x40,0x3d4ccccd,0x3dcccccd);
    fVar12 = (float10)FUN_00dbffb0(param_3 + 0x30,param_3 + 0x40,0x3d4ccccd,0x3dcccccd);
    if (fVar12 < (float10)(float)fVar11) {
      fVar12 = (float10)(float)fVar11;
    }
    *(float *)(param_1 + 0x128) = (float)fVar12;
    fVar11 = (float10)0;
    if ((fVar11 <= fVar12) && (fVar11 = fVar12, (float10)2.0 < fVar12)) {
      fVar11 = (float10)2.0;
    }
    *(float *)(param_1 + 0x128) = (float)fVar11;
    *(float *)(param_1 + 0xe0) =
         (float)(fVar11 + (float10)fVar5 + (float10)*(float *)(param_1 + 0x120) +
                (float10)*(float *)(param_1 + 0x124));
    FUN_00da7460();
    thunk_FUN_00de01a0(pbVar1,pbVar4,pbVar3,pbVar2);
  }
  if (*(uint *)(param_1 + 0x110) < 0x40) {
    iVar8 = *(uint *)(param_1 + 0x110) * 0xd8;
    puVar10 = PTR_DAT_018bc3a0 + iVar8 + 0xd1fc;
    if ((*(uint *)(PTR_DAT_018bc3a0 + iVar8 + 0xd1fc) & 0x20000000) == 0) {
      puVar10 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar10 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar9 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar9 + 0x28))(1);
    if (iVar8 != 0) goto LAB_00dc3d9f;
  }
  if (((*(float *)(*(int *)(param_2 + 0x378) + 0x894) <= 0.0) &&
      (*(int *)(*(int *)(param_2 + 0x378) + 0x764) != 0)) && (iVar8 = FUN_008e2740(), iVar8 != 0)) {
    fVar6 = *(float *)(puVar10 + 0x28);
    fVar7 = *(float *)(puVar10 + 0x24);
    fVar12 = (float10)FUN_00dbfe60(param_3 + 0x30,param_3 + 0x40,0x3d4ccccd,0x3dcccccd);
    fVar12 = fVar12 + (float10)*(float *)(param_1 + 0x120);
    *(float *)(param_1 + 0x120) = (float)fVar12;
    if ((float10)0 <= fVar12) {
      if (fVar12 <= (float10)(fVar6 - fVar7)) {
        *(float *)(param_1 + 0x120) = (float)fVar12;
      }
      else {
        *(float *)(param_1 + 0x120) = fVar6 - fVar7;
      }
    }
    else {
      *(float *)(param_1 + 0x120) = (float)(float10)0;
    }
  }
LAB_00dc3d9f:
  FUN_00db6e20(auStack_20,param_3 + 0x30);
  if (*(uint *)(param_1 + 0x110) < 0x40) {
    iVar8 = *(uint *)(param_1 + 0x110) * 0xd8;
    puVar10 = PTR_DAT_018bc3a0 + iVar8 + 0xd1fc;
    if ((*(uint *)(PTR_DAT_018bc3a0 + iVar8 + 0xd1fc) & 0x100000) == 0) {
      puVar10 = PTR_DAT_018bc3a0 + 0x107fc;
    }
  }
  else {
    puVar10 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  iVar8 = FUN_00f98aa0();
  if ((float)iVar8 * *(float *)(puVar10 + 0x60) <= fStack_1c) {
    fVar6 = *(float *)(param_1 + 0x124) * 0.0;
  }
  else {
    fVar6 = (*(float *)(puVar10 + 100) - *(float *)(param_1 + 0x124)) + *(float *)(param_1 + 0x124);
  }
  *(float *)(param_1 + 0x124) = fVar6;
  fVar6 = *(float *)(param_1 + 0xe0);
  fVar12 = (float10)FUN_00db51c0();
  *(float *)(param_1 + 0xe0) =
       (float)(fVar12 * (((float10)*(float *)(param_1 + 0x128) + (float10)fVar5 +
                          (float10)*(float *)(param_1 + 0x120) +
                         (float10)*(float *)(param_1 + 0x124)) - (float10)fVar6) + (float10)fVar6);
  FUN_00da7460();
  thunk_FUN_00de01a0(pbVar1,pbVar4,pbVar3,pbVar2);
  return;
}

// 00DC3EA0  FUN_00dc3ea0  size=393  [between]
void __thiscall FUN_00dc3ea0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float10 fVar4;
  
  iVar1 = (int)param_3;
  FUN_00dbbf50(param_2,param_3);
  if ((0x3f < *(uint *)(param_1 + 0x110)) ||
     (iVar2 = *(uint *)(param_1 + 0x110) * 0xd8, puVar3 = PTR_DAT_018bc3a0 + iVar2 + 0xd1fc,
     (*(uint *)(PTR_DAT_018bc3a0 + iVar2 + 0xd1fc) & 0x8000000) == 0)) {
    puVar3 = PTR_DAT_018bc3a0 + 0x107fc;
  }
  param_3 = 0.0;
  fVar4 = (float10)FUN_00da73a0(iVar1 + 0x30,iVar1 + 0x10,*(undefined4 *)(puVar3 + 0x34));
  if (ABS((float10)0) < ABS(fVar4 * (float10)0.3)) {
    param_3 = (float)(fVar4 * (float10)0.3);
  }
  fVar4 = (float10)FUN_00dc04c0(iVar1 + 0x30,iVar1 + 0x40,*(undefined4 *)(puVar3 + 0x38),param_3);
  if ((float10)0 == fVar4) {
    iVar2 = FUN_00db56a0();
    if (iVar2 == 0) {
      fVar4 = (float10)FUN_00db72f0(iVar1 + 0x50,iVar1 + 0x10,*(undefined4 *)(puVar3 + 0x3c),
                                    *(undefined4 *)(puVar3 + 0x40));
      fVar4 = fVar4 * (float10)0.1;
    }
    else {
      fVar4 = (float10)(float)fVar4;
    }
  }
  if (ABS((float10)param_3) < ABS(fVar4)) {
    param_3 = (float)fVar4;
  }
  fVar4 = (float10)FUN_00db51c0();
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)param_3 +
                                       (float10)*(float *)(param_1 + 0x104)));
  *(float *)(param_1 + 0x104) = (float)fVar4;
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)3.1415927));
  *(float *)(param_1 + 0xf4) = (float)fVar4;
  FUN_00da7460();
  thunk_FUN_00de01a0(param_1 + 0x70,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xd0);
  return;
}

// 00DC4030  FUN_00dc4030  size=424  [between]
void __thiscall FUN_00dc4030(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  
  fVar1 = *(float *)(param_1 + 0x100);
  fVar2 = *(float *)(param_1 + 0x118);
  fVar4 = (float10)fVar2;
  fVar6 = (float10)1;
  if ((float10)0 <
      ABS((float10)*(float *)((int)param_2 + 0x34) - (float10)*(float *)((int)param_2 + 0x14)) -
      fVar6) {
    if (*(float *)((int)param_2 + 0x14) < *(float *)((int)param_2 + 0x34) ==
        (*(float *)((int)param_2 + 0x14) == *(float *)((int)param_2 + 0x34))) {
      iVar3 = FUN_00da2980(*(undefined4 *)(param_1 + 0x110),6);
      fVar5 = extraout_ST0_00 * (float10)0.5;
      fVar4 = extraout_ST1_00;
      if ((extraout_ST1_00 <= fVar5) && (fVar4 = fVar5, fVar6 < fVar5)) {
        fVar4 = fVar6;
      }
      fVar6 = (float10)FUN_00dc0730((int)param_2 + 0x30,(int)param_2 + 0x40,
                                    *(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                                    *(undefined4 *)(iVar3 + 0x58));
    }
    else {
      iVar3 = FUN_00da2980(*(undefined4 *)(param_1 + 0x110),5);
      fVar5 = extraout_ST0 * (float10)0.5;
      fVar4 = extraout_ST1;
      if ((extraout_ST1 <= fVar5) && (fVar4 = fVar5, fVar6 < fVar5)) {
        fVar4 = fVar6;
      }
      fVar6 = (float10)FUN_00dc05d0((int)param_2 + 0x30,(int)param_2 + 0x40,
                                    *(undefined4 *)(iVar3 + 0x44),*(undefined4 *)(iVar3 + 0x48),
                                    *(undefined4 *)(iVar3 + 0x4c));
    }
    param_2 = (float)fVar4;
    fVar4 = (float10)fVar2;
    fVar4 = ((fVar6 + (float10)fVar1) - fVar4) * (float10)param_2 + fVar4;
  }
  fVar6 = (float10)FUN_00ddba30((float)((fVar4 - (float10)fVar1) +
                                       (float10)*(float *)(param_1 + 0x100)));
  *(float *)(param_1 + 0x100) = (float)fVar6;
  *(float *)(param_1 + 0xf0) = (float)-fVar6;
  FUN_00da7460();
  thunk_FUN_00de01a0(param_1 + 0x70,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xd0);
  return;
}

// 00DC41E0  FUN_00dc41e0  size=119  [between]
void __thiscall FUN_00dc41e0(uint *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_00db27b0(param_2);
  }
  FUN_00dbf4d0(param_3);
  *param_1 = *param_1 | 1;
  param_1[0x69] = 0x40490fdb;
  param_1[0x60] = 0x41700000;
  param_1[0x61] = 0;
  param_1[0x62] = 0x3fb33333;
  param_1[99] = 0x3f000000;
  param_1[0x67] = 0x3f000000;
  param_1[100] = 0x41700000;
  param_1[0x65] = 0;
  param_1[0x66] = 0x3fb33333;
  return;
}

// 00DC4260  FUN_00dc4260  size=90  [between]
void __thiscall FUN_00dc4260(int param_1,undefined4 param_2)

{
  FUN_00dbf4d0(param_2);
  *(undefined4 *)(param_1 + 0x180) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f000000;
  *(undefined4 *)(param_1 + 400) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0x3fb33333;
  return;
}

// 00DC42C0  Camera::StatePerpetrator::vf10  size=263  [class]
void __thiscall Camera::StatePerpetrator::vf10(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  FUN_00da49d0(param_1 + 0x20);
  puVar4 = (undefined4 *)FUN_00dbc520(local_70,param_2);
  local_50 = *puVar4;
  local_4c = puVar4[1];
  local_48 = puVar4[2];
  local_44 = puVar4[3];
  puVar4 = (undefined4 *)FUN_00dbc670(local_70,&local_50,param_2);
  local_60 = *puVar4;
  local_5c = puVar4[1];
  local_58 = puVar4[2];
  local_54 = puVar4[3];
  fVar2 = 0.0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = local_64;
  local_18 = 0x3f5f66f3;
  fVar3 = *(float *)(param_1 + 0x74) + 1.0;
  *(float *)(param_1 + 0x74) = fVar3;
  fVar1 = *(float *)(param_1 + 0x70);
  if ((fVar3 < 0.0) || (fVar2 = fVar3, fVar3 <= fVar1)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x74) = fVar1;
  fVar5 = (float10)FUN_00db51c0();
  FUN_00dbeb10(&local_60,param_1 + 0x20,&local_60,(float)fVar5);
  Math::safePositionTargetXz_2(&local_60,&local_50,&local_30,local_18);
  return;
}

// 00DC43D0  Camera::StateSubWeaponAiming::vf14  size=90  [class]
void Camera::StateSubWeaponAiming::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f5f66f3;
  if (*(int *)(param_1 + 0x8c8) == 1) {
    FUN_00dd5650(&DAT_016c42f8,0x4024000000000000);
    return;
  }
  *(undefined4 *)(param_1 + 0x8c8) = 0;
  *(undefined4 *)(param_1 + 0x8c0) = 0x41200000;
  *(undefined4 *)(param_1 + 0x8c4) = 0x40a00000;
  return;
}

// 00DC4430  FUN_00dc4430  size=88  [between]
void __thiscall FUN_00dc4430(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(param_1 + 0x44) + 1.0;
  *(float *)(param_1 + 0x44) = fVar2;
  fVar1 = *(float *)(param_1 + 0x40);
  fVar3 = 0.0;
  if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0x44) = fVar1;
  fVar4 = (float10)FUN_00db51c0();
  FUN_00dbeb10(param_2,param_1 + 0x50,param_3,(float)fVar4);
  return;
}

// 00DC4490  Camera::StatePlayerDead::vf0C  size=87  [class]
void __thiscall Camera::StatePlayerDead::vf0C(int param_1,int param_2)

{
  FUN_00da01f0(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0xb0) = 0x425c0000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f91eb85;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_00dbce20(param_1 + 0x60,param_2);
  *(undefined4 *)(param_1 + 4) = 0x41a00000;
  return;
}

// 00DC44F0  FUN_00dc44f0  size=94  [between]
void __thiscall FUN_00dc44f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(param_1 + 0xb4) + 1.0;
  *(float *)(param_1 + 0xb4) = fVar2;
  fVar1 = *(float *)(param_1 + 0xb0);
  fVar3 = 0.0;
  if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0xb4) = fVar1;
  fVar4 = (float10)FUN_00db51c0();
  FUN_00dbeb10(param_2,param_1 + 0x10,param_3,(float)fVar4);
  return;
}

// 00DC4550  FUN_00dc4550  size=326  [between]
void __thiscall FUN_00dc4550(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [12];
  float local_14;
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = 0.0;
  if (!NAN(fVar1) && 15.0 < fVar1 != (fVar1 == 15.0)) {
    fVar1 = *(float *)(param_1 + 0xb4) + 1.0;
    *(float *)(param_1 + 0xb4) = fVar1;
    if ((fVar1 < 0.0) || (fVar2 = fVar1, fVar1 <= *(float *)(param_1 + 0xb0))) {
      *(float *)(param_1 + 0xb4) = fVar2;
    }
    else {
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb0);
    }
  }
  fVar4 = (float10)FUN_00db51c0();
  fVar1 = (float)fVar4;
  Camera::Math::safePositionTargetXz_3(&local_40,&local_30,local_20,param_3);
  fVar2 = (*(float *)(param_1 + 0xa0) - local_30) * 0.5 * fVar1;
  fVar3 = (*(float *)(param_1 + 0xa8) - local_28) * 0.5 * fVar1;
  *param_2 = local_40 + fVar2;
  param_2[1] = local_3c;
  param_2[2] = local_38 + fVar3;
  param_2[3] = local_34;
  param_2[4] = fVar2 + local_30;
  param_2[5] = local_2c;
  param_2[6] = fVar3 + local_28;
  param_2[7] = local_24;
  param_2[0xc] = 0.0;
  param_2[0xd] = 1.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = local_14;
  param_2[0x12] = fVar1 * fVar1 * 0.6981317 + (1.0 - fVar1 * fVar1) * 1.0471976;
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + 1.0;
  return;
}

// 00DC46A0  FUN_00dc46a0  size=88  [between]
void __thiscall FUN_00dc46a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar2 = *(float *)(param_1 + 0x24) + 1.0;
  *(float *)(param_1 + 0x24) = fVar2;
  fVar1 = *(float *)(param_1 + 0x20);
  fVar3 = 0.0;
  if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  fVar4 = (float10)FUN_00db51c0();
  FUN_00dbeb10(param_2,param_1 + 0x30,param_3,(float)fVar4);
  return;
}

// 00DC4700  Camera::StateNormal::vf0C  size=453  [class]
void __thiscall Camera::StateNormal::vf0C(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  
  FUN_00da01f0();
  FUN_00da8dd0();
  *(undefined4 *)(param_2 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_2 + 0x770) = 0x40200000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (param_4 != (int *)0x0) {
    iVar1 = (**(code **)(*param_4 + 0x20))();
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 2) {
      *(undefined4 *)(param_2 + 0x8c8) = 3;
      *(undefined4 *)(param_2 + 0x770) = 0;
      *(undefined4 *)(param_2 + 0x8c0) = 0x41f00000;
      *(undefined4 *)(param_2 + 0x8c4) = 0;
      *(undefined4 *)(param_3 + 0x22c) = 0;
      FUN_00dbafd0();
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    else if (iVar1 == 0xc) {
      if (*(int *)(param_2 + 0x8c8) == 1) {
        FUN_00dd5650(&DAT_016c42f8,0x4034000000000000);
      }
      else {
        *(undefined4 *)(param_2 + 0x8c8) = 0;
        *(undefined4 *)(param_2 + 0x8c0) = 0x41a00000;
        *(undefined4 *)(param_2 + 0x8c4) = 0x41200000;
      }
    }
    else if (iVar1 == 0x10) {
      *(undefined4 *)(param_2 + 0x360) = 0x3dfa35dd;
    }
    iVar1 = (**(code **)(*param_4 + 0x20))();
    if (*(int *)(iVar1 + 8) != 2) {
      FUN_00dc2c20();
      FUN_00dc2d20(0x41f00000,1);
      puVar2 = (undefined4 *)FUN_00da8e40();
      uStack_20 = *puVar2;
      fStack_1c = (float)puVar2[1] + 1.4;
      uStack_18 = puVar2[2];
      fStack_14 = (float)puVar2[3] + fStack_14;
      uStack_30 = *(undefined4 *)(param_3 + 0x24);
      uStack_2c = *(undefined4 *)(param_3 + 0x28);
      uStack_28 = *(undefined4 *)(param_3 + 0x2c);
      uStack_24 = 0x3f800000;
      FUN_00dc17b0(&uStack_20,&uStack_30,0x40400000);
    }
  }
  FUN_00db9530();
  *(undefined4 *)(param_1 + 0x74) = 1;
  return;
}

// 00DC48D0  Camera::StateNormal::vf14  size=126  [class]
void Camera::StateNormal::vf14(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [28];
  
  if (param_3 != (int *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x20))();
    if (*(int *)(iVar1 + 8) != 2) {
      FUN_00db9270();
      FUN_00db9270();
      FUN_00db9270();
      puVar2 = (undefined4 *)FUN_00da9820(auStack_20);
      *(undefined4 *)(param_1 + 0x360) = *puVar2;
      *(undefined4 *)(param_1 + 0x364) = puVar2[1];
      *(undefined4 *)(param_1 + 0x368) = puVar2[2];
      *(undefined4 *)(param_1 + 0x36c) = puVar2[3];
    }
  }
  return;
}

// 00DC4950  FUN_00dc4950  size=579  [between]
void FUN_00dc4950(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float10 fVar7;
  
  iVar3 = (int)param_1;
  if ((*(float *)((int)param_1 + 0x778) != 0.0) || (*(float *)((int)param_1 + 0x77c) != 0.0)) {
    *(undefined4 *)(param_2 + 0x328) = 0x41200000;
    *(undefined4 *)(param_2 + 0x31c) = 0;
    *(undefined4 *)(param_2 + 0x314) = 0;
  }
  iVar4 = FUN_00da5bd0();
  if (iVar4 != 0) {
    *(undefined4 *)((int)param_1 + 0x788) = 0;
  }
  iVar4 = 0;
  pfVar6 = (float *)(param_2 + 0x294);
  do {
    if (*pfVar6 != 0.0) {
      *(undefined4 *)((int)param_1 + 0x78c) = 0;
      break;
    }
    iVar4 = iVar4 + 1;
    pfVar6 = pfVar6 + 0x10;
  } while (iVar4 < 3);
  fVar1 = *(float *)((int)param_1 + 0x780) + *(float *)((int)param_1 + 0x778) +
          *(float *)((int)param_1 + 0x788);
  fVar2 = *(float *)((int)param_1 + 0x77c) + *(float *)((int)param_1 + 0x784) +
          *(float *)((int)param_1 + 0x78c);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc4a28:
    iVar4 = FUN_00a81330();
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_00dc4a42;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00dc4a28;
  }
  iVar4 = FUN_00a7c8a0();
LAB_00dc4a42:
  if ((((*(int *)((int)param_1 + 0x774) == 0) && (iVar4 != 0)) &&
      ((*(uint *)(param_2 + 0xfc) & 0x8000000) == 0)) &&
     ((fVar7 = (float10)FUN_00ddba30(*(float *)((int)param_1 + 0x364) - *(float *)(iVar4 + 0x94)),
      (float10)2.6179938 < fVar7 != ((float10)2.6179938 == fVar7) ||
      (fVar7 < (float10)-2.6179938 != (fVar7 == (float10)-2.6179938))))) {
    fVar2 = *(float *)((int)param_1 + 0x784);
  }
  param_1 = fVar2;
  *(undefined4 *)(iVar3 + 0x7b0) = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(iVar3 + 0x7a0) = *(undefined4 *)(param_2 + 0x240);
  if (0.0 < *(float *)(iVar3 + 0x7c4)) {
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x7c8) - *(float *)(iVar3 + 0x364));
    param_1 = (float)(fVar7 * (float10)0.1);
    fVar2 = *(float *)(iVar3 + 0x7c4) - 1.0;
    *(float *)(iVar3 + 0x7c4) = fVar2;
    *(float *)(iVar3 + 0x37c) = fVar2;
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00da01f0(iVar3 + 0x460);
  }
  if (*(int *)(iVar3 + 0x774) == 0) {
    FUN_00da90c0(fVar1);
    FUN_00da0e40(param_1);
  }
  else {
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x360) + fVar1);
    *(float *)(iVar3 + 0x360) = (float)fVar7;
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x364) + param_1);
    *(float *)(iVar3 + 0x364) = (float)fVar7;
  }
  FUN_00dbe570(iVar3 + 0x360,iVar3 + 0x4b0);
  return;
}

// 00DC4BA0  Camera::StateSlashingTarget::vf10  size=212  [class]
void __thiscall Camera::StateSlashingTarget::vf10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  undefined1 local_30 [24];
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00da01f0(param_2 + 0x460);
    *(undefined4 *)(param_1 + 4) = 0x42200000;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x3fb33333;
    *(undefined4 *)(param_1 + 0x10) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  fVar2 = 0.0;
  fVar3 = *(float *)(param_1 + 8) + 1.0;
  *(float *)(param_1 + 8) = fVar3;
  fVar1 = *(float *)(param_1 + 4);
  if ((fVar3 < 0.0) || (fVar2 = fVar3, fVar3 <= fVar1)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 8) = fVar1;
  FUN_00dbda50(local_60,param_2);
  fVar4 = (float10)FUN_00db51c0();
  FUN_00dbeb10(local_60,param_1 + 0x20,local_60,(float)fVar4);
  Math::safePositionTargetXz_2(local_60,local_50,local_30,local_18);
  return;
}

// 00DC4C80  FUN_00dc4c80  size=550  [between]
void __thiscall FUN_00dc4c80(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  puVar1 = (undefined4 *)FUN_00db3b90(&local_a0,param_2,param_3);
  local_70 = *puVar1;
  local_6c = puVar1[1];
  local_68 = puVar1[2];
  local_64 = puVar1[3];
  puVar1 = (undefined4 *)FUN_00db3c80(&local_a0,param_2,param_3);
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_54 = puVar1[3];
  if (*param_1 == 0) {
    FUN_00db3d70(&local_70,param_2,param_3);
    *param_1 = 1;
  }
  FUN_00dbdf60(param_2);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc4d28:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) goto LAB_00dc4d4c;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dc4d28;
  }
  FUN_00a7c8a0();
LAB_00dc4d4c:
  fVar4 = (float10)FUN_00db51c0();
  fStack_74 = (float)fVar4;
  iStack_50 = param_1[8];
  iStack_4c = param_1[9];
  iStack_48 = param_1[10];
  iStack_44 = param_1[0xb];
  iStack_40 = param_1[0xc];
  iStack_3c = param_1[0xd];
  iStack_38 = param_1[0xe];
  iStack_34 = param_1[0xf];
  local_a0 = 0;
  uStack_9c = 0x3f800000;
  uStack_98 = 0;
  FUN_00db6970(auStack_30,&iStack_50,&local_70,&local_a0,param_1[5],(float)fVar4);
  FUN_00a926e0(&fStack_90);
  fStack_90 = (fStack_90 - (float)param_1[0x14]) * fStack_74 + (float)param_1[0x14];
  fStack_8c = (fStack_8c - (float)param_1[0x15]) * fStack_74 + (float)param_1[0x15];
  fStack_88 = (fStack_88 - (float)param_1[0x16]) * fStack_74 + (float)param_1[0x16];
  fStack_84 = (fStack_84 - (float)param_1[0x17]) * fStack_74 + (float)param_1[0x17];
  Camera::Math::safePositionTargetXz_2
            (auStack_30,auStack_20,&fStack_90,
             (1.0 - fStack_74) * (float)param_1[0x1a] + *(float *)(param_3 + 0x20) * fStack_74);
  local_a0 = 0;
  uStack_9c = 0x3f800000;
  uStack_98 = 0;
  puVar1 = (undefined4 *)FUN_00da9920(&local_70,&local_a0);
  *(undefined4 *)(param_2 + 0x360) = *puVar1;
  *(undefined4 *)(param_2 + 0x364) = puVar1[1];
  *(undefined4 *)(param_2 + 0x368) = puVar1[2];
  *(undefined4 *)(param_2 + 0x36c) = puVar1[3];
  return;
}

// 00DC4EE0  FUN_00dc4ee0  size=216  [between]
void __thiscall FUN_00dc4ee0(int param_1,undefined4 param_2)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10);
  local_1c = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x14);
  local_18 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x18);
  local_14 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x1c);
  fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
  }
  Camera::Math::safePositionTargetXz_2
            (param_1 + 0x10,param_1 + 0x20,&local_20,*(undefined4 *)(param_1 + 0x44));
  FUN_00dbdff0(param_2);
  return;
}

// 00DC4FC0  FUN_00dc4fc0  size=170  [between]
void __fastcall FUN_00dc4fc0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  undefined1 local_30 [24];
  undefined4 local_18;
  
  fVar2 = *(float *)(param_1 + 0xb4) + 1.0;
  *(float *)(param_1 + 0xb4) = fVar2;
  fVar1 = *(float *)(param_1 + 0xb0);
  fVar3 = 0.0;
  if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0xb4) = fVar1;
  fVar1 = *(float *)(param_1 + 0xb0);
  if (fVar1 < *(float *)(param_1 + 0xb4) == (fVar1 == *(float *)(param_1 + 0xb4))) {
    fVar4 = (float10)FUN_00db51c0();
    FUN_00da8900(local_60);
    FUN_00dbecb0(local_60,param_1 + 0x60,local_60,(float)fVar4);
    Camera::Math::safePositionTargetXz_2(local_60,local_50,local_30,local_18);
  }
  return;
}

// 00DC50B0  FUN_00dc50b0  size=109  [between]
void FUN_00dc50b0(float *param_1,undefined4 param_2,float *param_3,int param_4,undefined4 param_5)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_2c = *(undefined4 *)(param_4 + 4);
  local_28 = *(undefined4 *)(param_4 + 8);
  local_24 = *(undefined4 *)(param_4 + 0xc);
  local_30 = param_5;
  FUN_00dbf340(&local_20,param_2,&local_30);
  *param_1 = *param_3 - local_20;
  param_1[1] = param_3[1] - local_1c;
  param_1[2] = param_3[2] - local_18;
  param_1[3] = param_3[3] - local_14;
  return;
}

// 00DC5150  FUN_00dc5150  size=300  [between]
float10 FUN_00dc5150(float param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc5173:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      return (float10)2.0;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dc5173;
  }
  fVar4 = (float10)FUN_00dc0f70(param_1,0x41000000);
  param_1 = (float)fVar4;
  fVar5 = (float10)FUN_00dc0f70(param_2,0x41000000);
  fVar6 = (float10)FUN_00dc0f70(param_3,0x41000000);
  fVar7 = (float10)(float)fVar5;
  fVar4 = (float10)param_1;
  if (fVar4 < fVar7) {
    fVar4 = fVar7;
    param_1 = (float)fVar5;
  }
  if (fVar4 < fVar6) {
    param_1 = (float)fVar6;
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc5222:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_00dc523c;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dc5222;
  }
  uVar3 = FUN_00a7c8a0();
LAB_00dc523c:
  fVar5 = (float10)FUN_00dc0f70(uVar3,0x41000000);
  fVar4 = (float10)param_1;
  if (fVar4 < fVar5) {
    fVar4 = fVar5;
  }
  if ((float10)2.0 <= fVar4) {
    return fVar4;
  }
  return (float10)2.0;
}

// 00DC52A0  FUN_00dc52a0  size=3615  [between]
void __fastcall FUN_00dc52a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int unaff_ESI;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  float10 fVar13;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [2];
  float fStack_168;
  float local_164;
  float local_160;
  float local_15c;
  int local_158;
  int local_154;
  float fStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [64];
  float local_40 [7];
  float fStack_24;
  
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  local_194 = (float)FUN_00a7c8a0();
  if (local_194 == 0.0) {
    return;
  }
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  pfVar10 = (float *)(param_1 + 0x720);
  pfVar11 = local_40;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  iVar7 = FUN_00a81330();
  piVar12 = (int *)0x0;
  if (iVar7 != 0) {
    piVar12 = (int *)FUN_00a7c8a0();
  }
  fVar5 = local_194;
  local_110 = *(undefined4 *)((int)local_194 + 0x40);
  pfVar10 = (float *)((int)local_194 + 0x40);
  local_ec = *(float *)((int)local_194 + 0x44);
  local_108 = *(undefined4 *)((int)local_194 + 0x48);
  local_104 = *(float *)((int)local_194 + 0x4c);
  local_fc = local_ec + 1.5;
  local_10c = local_ec - 2.5;
  local_100 = local_110;
  local_f8 = local_108;
  local_f4 = local_104;
  local_f0 = local_110;
  local_e8 = local_108;
  local_e4 = local_104;
  local_e0 = local_110;
  local_dc = local_ec;
  local_d8 = (float)local_108;
  local_d4 = local_104;
  local_164 = (float)RayCastSingleHitWork::RayCastSingleHitWork_4
                               (&local_e0,0,0,0,&local_100,&local_110,0x1e,&DAT_016c3080);
  local_10c = local_10c - 20.0;
  RayCastSingleHitWork::RayCastSingleHitWork_4
            (&local_f0,0,0,0,&local_100,&local_110,0x1e,&DAT_016c3080);
  if (*(int *)((int)local_194 + 0x266c) == 0) {
    if (piVar12 == (int *)0x0) goto LAB_00dc57e7;
    local_160 = (float)piVar12[0x10];
    local_15c = (float)piVar12[0x11];
    local_158 = piVar12[0x12];
    local_154 = piVar12[0x13];
    local_19c = *(float *)(param_1 + 0x360);
    local_198 = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&local_19c,&local_198,&local_160,param_1 + 0x460);
    local_19c = local_19c * -1.0;
    fVar13 = (float10)FUN_00ddba30(local_198 - *(float *)(param_1 + 0x794));
    if (ABS(fVar13) <= (float10)1e-05) {
LAB_00dc55d4:
      *(undefined4 *)(param_1 + 0x78c) = 0;
    }
    else {
      *(float *)(param_1 + 0x78c) = (float)(fVar13 * (float10)0.06);
    }
  }
  else {
    if (piVar12 == (int *)0x0) goto LAB_00dc57e7;
    (**(code **)(*piVar12 + 0x208))(&local_190);
    local_198 = *(float *)(param_1 + 0x360);
    local_19c = *(float *)(param_1 + 0x364);
    thunk_FUN_00dde510(&local_198,&local_19c,&local_190,param_1 + 0x460);
    local_198 = local_198 * -1.0;
    fVar13 = (float10)FUN_00ddba30(local_198 - *(float *)(param_1 + 0x790));
    if (((*(int *)((int)local_194 + 0x2664) == 0) &&
        (fVar9 = *(float *)((int)local_194 + 0x44) + 3.0,
        fStack_18c < fVar9 != (fStack_18c == fVar9))) &&
       (*(float *)((int)local_194 + 0x44) <= fStack_18c)) {
      fVar13 = (float10)0;
    }
    if (ABS(fVar13) <= (float10)1e-05) {
      fVar13 = (float10)0;
    }
    else {
      fVar13 = fVar13 * (float10)0.1;
    }
    *(float *)(param_1 + 0x788) = (float)fVar13;
    fVar13 = (float10)FUN_00ddba30(local_19c - *(float *)(param_1 + 0x794));
    if (ABS(fVar13) <= (float10)1e-05) {
      fVar13 = (float10)0;
    }
    else {
      fVar13 = fVar13 * (float10)0.1;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar13;
    thunk_FUN_00dde510(&local_198,&local_19c,&local_190,pfVar10);
    local_198 = local_198 * -1.0;
    fVar13 = (float10)FUN_00ddba30(local_19c + 0.17453292);
    local_19c = (float)fVar13;
    fStack_188 = fStack_188 - *(float *)((int)fVar5 + 0x48);
    if (fStack_188 * fStack_188 + (local_190 - *pfVar10) * (local_190 - *pfVar10) < 36.0) {
      fVar13 = (float10)FUN_00ddba30((float)(fVar13 - (float10)*(float *)(param_1 + 0x794)));
      if (ABS(fVar13) <= (float10)1e-05) goto LAB_00dc55d4;
      *(float *)(param_1 + 0x78c) = (float)(fVar13 * (float10)0.1);
    }
  }
  if (*(int *)((int)local_194 + 0x266c) == 0) {
    FUN_00aed1d0(&local_160);
    local_198 = 0.0;
    fVar1 = (float)piVar12[0x11] - *(float *)((int)fVar5 + 0x44);
    fVar9 = (float)piVar12[0x12] - *(float *)((int)fVar5 + 0x48);
    fStack_118 = SQRT(((float)piVar12[0x10] - *pfVar10) * ((float)piVar12[0x10] - *pfVar10) +
                      fVar1 * fVar1 + fVar9 * fVar9);
    if (50.0 < fStack_118) {
      local_15c = local_15c - (fStack_118 - 50.0);
      if (local_15c < (float)piVar12[0x11] + 1.0) {
        local_15c = (float)piVar12[0x11] + 1.0;
      }
    }
    local_19c = *(float *)(param_1 + 0x360);
    uStack_114 = *(undefined4 *)(param_1 + 0x364);
    thunk_FUN_00dde510(&local_19c,&uStack_114,&local_160,param_1 + 0x460);
    local_19c = local_19c * -1.0;
    fVar9 = 1.4013e-45;
    if (*(float *)(param_1 + 0x360) <= local_19c) {
      fVar9 = local_198;
    }
    if ((50.0 < fStack_118) || (fVar9 != 0.0)) {
      fVar13 = (float10)FUN_00ddba30(local_19c - *(float *)(param_1 + 0x790));
      local_198 = (float)fVar13;
      if (*(int *)((int)local_194 + 0x2664) != 0) {
        local_198 = 0.0;
      }
      iVar7 = FUN_00a8d9d0();
      fVar9 = local_198;
      if (iVar7 != 0) {
        fVar9 = 0.0;
      }
      if (100.0 <= fStack_24 * fStack_24) {
        fVar9 = 0.0;
      }
      *(float *)(param_1 + 0x790) = fVar9 * 0.01 + *(float *)(param_1 + 0x790);
    }
  }
LAB_00dc57e7:
  fVar9 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788) +
          *(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = fVar9;
  if (fVar9 < *(float *)(param_1 + 0x7b0)) {
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
  }
  fVar9 = *(float *)(param_1 + 0x790);
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    fVar9 = -0.34906584;
  }
  if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
    fVar9 = *(float *)(param_1 + 0x7a0);
    *(float *)(param_1 + 0x790) = fVar9;
  }
  fVar13 = (float10)FUN_00ddba30(fVar9 + *(float *)(param_1 + 0x7e0));
  *(float *)(param_1 + 0x360) = (float)fVar13;
  fVar9 = *(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) + *(float *)(param_1 + 0x78c) +
          *(float *)(param_1 + 0x794);
  *(float *)(param_1 + 0x794) = fVar9;
  fVar13 = (float10)FUN_00ddba30(fVar9);
  *(float *)(param_1 + 0x364) = (float)fVar13;
  uStack_130 = 0;
  uStack_12c = 0x3f800000;
  fStack_128 = 0.0;
  FUN_00ddc1d0(auStack_80,param_1 + 0x360,*(undefined4 *)(param_1 + 0x1f0));
  D3DXVec3TransformNormal(&uStack_130,&uStack_130,auStack_80);
  local_15c = 0.0;
  local_158 = 0;
  local_154 = 0x3f800000;
  FUN_00ddc1d0(auStack_8c,param_1 + 0x360,*(undefined4 *)(param_1 + 0x1f0));
  D3DXVec3TransformNormal(&local_15c,&local_15c,auStack_8c);
  local_198 = local_160 * fStack_144 - local_164 * fStack_140;
  local_194 = fStack_168 * fStack_140 - fStack_148 * local_160;
  local_190 = fStack_148 * local_164 - fStack_168 * fStack_144;
  fVar9 = local_190 * local_190 + local_198 * local_198 + local_194 * local_194;
  if (fVar9 < 0.0 == (fVar9 == 0.0)) {
    FUN_00ddf460(&local_198,&local_198);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_190 = 0.0;
    local_194 = 1.0;
    local_198 = 0.0;
  }
  fVar9 = *(float *)(param_1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  fVar3 = fVar9 * local_198;
  fVar2 = fVar9 * local_194;
  fVar9 = fVar9 * local_190;
  fVar1 = *(float *)(param_1 + 0x7e8);
  local_198 = fStack_168;
  local_190 = local_160;
  fStack_18c = local_15c;
  local_194 = 0.0;
  fVar4 = local_160 * local_160 + fStack_168 * fStack_168;
  if (fVar4 < 0.0 == (fVar4 == 0.0)) {
    FUN_00ddf460(&local_198,&local_198);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_190 = 0.0;
    local_194 = 1.0;
    local_198 = 0.0;
  }
  local_198 = local_198 * 0.0;
  local_194 = local_194 * 0.0;
  local_190 = local_190 * 0.0;
  fStack_18c = fStack_18c * 0.0;
  fVar3 = fVar3 + local_198;
  fVar1 = local_194 + fVar2 + fVar1;
  fVar9 = local_190 + fVar9;
  fStack_178 = *pfVar10;
  fStack_174 = *(float *)((int)fVar5 + 0x44);
  afStack_170[0] = *(float *)((int)fVar5 + 0x48);
  if (*(int *)(unaff_ESI + 0x2664) == 0) {
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7dc) =
         (float)(-(float10)*(float *)(param_1 + 0x7dc) * fVar13 +
                (float10)*(float *)(param_1 + 0x7dc));
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7e0) =
         (float)(-(float10)*(float *)(param_1 + 0x7e0) * fVar13 +
                (float10)*(float *)(param_1 + 0x7e0));
  }
  else if (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x764) + 0xd0) + 4) +
           *(float *)(unaff_ESI + 0x894) <= 0.0) {
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7e0) =
         (float)(-(float10)*(float *)(param_1 + 0x7e0) * fVar13 +
                (float10)*(float *)(param_1 + 0x7e0));
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7dc) =
         (float)(-(float10)*(float *)(param_1 + 0x7dc) * fVar13 +
                (float10)*(float *)(param_1 + 0x7dc));
  }
  else {
    FUN_00e049b0();
    fVar13 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x7e0) =
         (float)(((float10)*(float *)(param_1 + 0x7dc) * (float10)0.17453292 -
                 (float10)*(float *)(param_1 + 0x7e0)) * fVar13 +
                (float10)*(float *)(param_1 + 0x7e0));
    if (fStack_17c != 0.0) {
      FUN_00e049b0();
      fVar13 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x7dc) =
           (float)((((float10)local_f4 - (float10)*(float *)(unaff_ESI + 0x44)) -
                   (float10)*(float *)(param_1 + 0x7dc)) * fVar13 +
                  (float10)*(float *)(param_1 + 0x7dc));
    }
  }
  *(float *)(param_1 + 0x4c0) =
       ((fVar3 + fStack_178) - *(float *)(param_1 + 0x4c0)) * 0.96 + *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4c4) =
       ((*(float *)(param_1 + 0x7dc) + fStack_174 + fVar1) - *(float *)(param_1 + 0x4c4)) * 0.14 +
       *(float *)(param_1 + 0x4c4);
  *(float *)(param_1 + 0x4c8) =
       ((fVar9 + afStack_170[0]) - *(float *)(param_1 + 0x4c8)) * 0.96 + *(float *)(param_1 + 0x4c8)
  ;
  *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x7f4);
  if (piVar12 != (int *)0x0) {
    fVar9 = (float)piVar12[0x11] - *(float *)((int)fVar5 + 0x44);
    fVar5 = (float)piVar12[0x12] - *(float *)((int)fVar5 + 0x48);
    bVar6 = true;
    iVar7 = 1;
    fStack_17c = SQRT(fVar5 * fVar5 +
                      fVar9 * fVar9 +
                      ((float)piVar12[0x10] - *pfVar10) * ((float)piVar12[0x10] - *pfVar10));
    if ((*(int *)(unaff_ESI + 0x2664) != 0) && (bVar6 = false, *(int *)(unaff_ESI + 0x266c) != 0)) {
      iVar7 = 0;
    }
    iVar8 = FUN_00a8d9d0();
    if (iVar8 != 0) {
      bVar6 = false;
    }
    if (*(int *)(unaff_ESI + 0x266c) != 0) {
      bVar6 = false;
    }
    if (100.0 <= local_40[1] * local_40[1]) {
      bVar6 = false;
    }
    iVar8 = FUN_00da0b10();
    if (iVar8 != 0) {
      bVar6 = false;
    }
    if ((25.0 <= fStack_17c) || (iVar7 == 0)) {
      *(float *)(param_1 + 0x7f4) =
           (2.7 - *(float *)(param_1 + 0x7f4)) * 0.1 + *(float *)(param_1 + 0x7f4);
    }
    else {
      fVar5 = (((25.0 - fStack_17c) * 0.5 + 2.7) - *(float *)(param_1 + 0x7f4)) * 0.06 +
              *(float *)(param_1 + 0x7f4);
      *(float *)(param_1 + 0x7f4) = fVar5;
      if (bVar6) {
        *(float *)(param_1 + 0x790) =
             (-0.87266463 - *(float *)(param_1 + 0x790)) * 0.04 + *(float *)(param_1 + 0x790);
      }
      if (!NAN(fVar5) && 5.0 < fVar5 != (fVar5 == 5.0)) {
        *(undefined4 *)(param_1 + 0x7f4) = 0x40a00000;
      }
    }
  }
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    fVar13 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x790) - -0.34906584);
    *(float *)(param_1 + 0x4f4) =
         (float)(fVar13 * (float10)57.29578 * (float10)-0.084 + (float10)*(float *)(param_1 + 0x4f4)
                );
  }
  if (4.5 < *(float *)(param_1 + 0x4f4)) {
    *(undefined4 *)(param_1 + 0x4f4) = 0x40900000;
  }
  fVar13 = (float10)FUN_00dc5150(unaff_ESI,0,0);
  if ((fVar13 < (float10)7.0) && ((float10)*(float *)(param_1 + 0x4f4) < fVar13)) {
    *(float *)(param_1 + 0x4f4) = (float)fVar13;
  }
  local_158 = 0;
  local_154 = 0;
  fStack_150 = -*(float *)(param_1 + 0x4f4);
  uStack_a8 = *(undefined4 *)(param_1 + 0x360);
  uStack_a4 = *(undefined4 *)(param_1 + 0x364);
  uStack_a0 = *(undefined4 *)(param_1 + 0x368);
  uStack_9c = *(undefined4 *)(param_1 + 0x36c);
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  local_d8 = 0.0;
  local_dc = 0.0;
  local_e0 = 0;
  local_e4 = 0.0;
  uStack_ac = 0x3f800000;
  uStack_c0 = 0x3f800000;
  local_d4 = 1.0;
  local_e8 = 0x3f800000;
  thunk_FUN_00ddc1d0(auStack_98,&uStack_a8,5);
  D3DXMatrixMultiply(&local_e8,auStack_98,&local_e8);
  D3DXMatrixMultiply(&local_f4,&local_f4,param_1 + 0x390);
  D3DXVec3TransformNormal(afStack_170,afStack_170,&local_100);
  *(float *)(param_1 + 0x4b0) = local_dc + fStack_17c + *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4c4) + local_d8 + fStack_178;
  *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4c8) + local_d4 + fStack_174;
  *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4cc) + afStack_170[0];
  fVar5 = (fStack_128 + 0.5) - *(float *)(param_1 + 0x4b4);
  if (fVar5 <= 0.0) {
    return;
  }
  *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar5;
  *(float *)(param_1 + 0x4c4) = fVar5 + *(float *)(param_1 + 0x4c4);
  return;
}

// 00DC60C0  FUN_00dc60c0  size=2790  [between]
void __fastcall FUN_00dc60c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int *unaff_EDI;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float *pfStack_194;
  float *pfStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 *puStack_184;
  float fVar16;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined1 auStack_140 [12];
  undefined4 uStack_134;
  undefined4 uStack_130;
  float *pfStack_12c;
  float fStack_128;
  float fStack_124;
  int iStack_120;
  undefined1 auStack_118 [12];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float *pfStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_8c;
  float fStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  float fStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  int iStack_64;
  int iStack_60;
  
  puStack_184 = (undefined4 *)0xdc60dc;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    puStack_184 = (undefined4 *)0xdc60eb;
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      puStack_184 = (undefined4 *)0xdc6104;
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        puStack_184 = (undefined4 *)(param_1 + 0x390);
        fStack_188 = 0.0;
        fStack_18c = (float)(param_1 + 0x3d0);
        puVar9 = (undefined4 *)(iVar4 + 0xb0);
        puVar10 = puStack_184;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        pfStack_190 = (float *)0xdc6130;
        D3DXMatrixInverse();
        pfStack_190 = (float *)0xdc613a;
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          pfStack_190 = (float *)0xdc6149;
          iVar4 = FUN_00a7c8a0();
          if (iVar4 != 0) {
            iStack_8c = unaff_EDI[0x10];
            pfStack_190 = (float *)&DAT_016c3080;
            pfStack_194 = (float *)0x1e;
            fStack_78 = (float)unaff_EDI[0x11];
            iStack_84 = unaff_EDI[0x12];
            iStack_80 = unaff_EDI[0x13];
            fStack_88 = fStack_78 + 1.5;
            fStack_68 = (fStack_78 - 2.5) - 20.0;
            iStack_7c = iStack_8c;
            iStack_74 = iStack_84;
            iStack_70 = iStack_80;
            iStack_6c = iStack_8c;
            iStack_64 = iStack_84;
            iStack_60 = iStack_80;
            RayCastSingleHitWork::RayCastSingleHitWork_4(&iStack_7c,0,0,0,&iStack_8c,&iStack_6c);
            pfStack_190 = (float *)((float)unaff_EDI[0x24] + 0.034906585);
            pfStack_194 = (float *)0xdc6215;
            fVar11 = (float10)FUN_00ddba30();
            pfStack_190 = (float *)0xf0017;
            pfStack_194 = (float *)&DAT_016bc508;
            pfStack_194 = (float *)FUN_00e03ea0();
            iVar4 = FUN_00a18d70();
            if (iVar4 != 0) {
              pfStack_190 = (float *)0xdc6244;
              FUN_00a7c8a0();
            }
            *(undefined4 *)(param_1 + 0x4a8) = 0x3f32b8c2;
            pfStack_190 = (float *)((float)fVar11 - *(float *)(param_1 + 0x790));
            pfStack_194 = (float *)0xdc6263;
            fVar12 = (float10)FUN_00ddba30();
            pfStack_190 = (float *)(0.13962634 - *(float *)(param_1 + 0x794));
            pfStack_194 = (float *)0xdc627b;
            fVar13 = (float10)FUN_00ddba30();
            fVar11 = (float10)0;
            if (ABS((float10)(float)fVar12) <= (float10)1e-05) {
              *(float *)(param_1 + 0x788) = (float)fVar11;
            }
            else {
              *(float *)(param_1 + 0x788) = (float)((float10)(float)fVar12 * (float10)0.1);
            }
            if ((float10)1e-05 < ABS(fVar13)) {
              fVar11 = (float10)0.1 * fVar13;
            }
            *(float *)(param_1 + 0x78c) = (float)fVar11;
            fVar16 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) +
                     *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x790);
            *(float *)(param_1 + 0x790) = fVar16;
            if (fVar16 < *(float *)(param_1 + 0x7b0)) {
              *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
            }
            fVar16 = *(float *)(param_1 + 0x790);
            if (*(float *)(param_1 + 0x790) < -0.61086524) {
              fVar16 = -0.61086524;
            }
            if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
              fVar16 = *(float *)(param_1 + 0x7a0);
              *(float *)(param_1 + 0x790) = fVar16;
            }
            pfStack_190 = (float *)(fVar16 + *(float *)(param_1 + 0x7e0));
            pfVar8 = (float *)(param_1 + 0x360);
            pfStack_194 = (float *)0xdc635e;
            fVar11 = (float10)FUN_00ddba30();
            *pfVar8 = (float)fVar11;
            pfStack_190 = (float *)(*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                                    *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
            *(float **)(param_1 + 0x794) = pfStack_190;
            pfStack_194 = (float *)0xdc6386;
            fVar11 = (float10)FUN_00ddba30();
            *(float *)(param_1 + 0x364) = (float)fVar11;
            pfStack_190 = (float *)(unaff_EDI + 0x2c);
            fStack_fc = 0.0;
            pfStack_194 = &fStack_fc;
            fStack_f8 = 1.0;
            uStack_f4 = 0;
            D3DXVec3TransformNormal(pfStack_194);
            FUN_00ddc1d0(&fStack_68,pfVar8,*(undefined4 *)(param_1 + 0x1f0));
            pfVar7 = &fStack_108;
            D3DXVec3TransformNormal(pfVar7,pfVar7,&fStack_68);
            uStack_134 = 0;
            uStack_130 = 0;
            pfStack_12c = (float *)0x3f800000;
            D3DXVec3TransformNormal(&uStack_134,&uStack_134,unaff_EDI + 0x2c);
            FUN_00ddc1d0(&iStack_80,pfVar8,*(undefined4 *)(param_1 + 0x1f0));
            D3DXVec3TransformNormal(auStack_140,auStack_140,&iStack_80);
            fStack_18c = fStack_144 * fStack_128 - fStack_148 * fStack_124;
            fStack_188 = fStack_14c * fStack_124 - (float)pfStack_12c * fStack_144;
            puStack_184 = (undefined4 *)((float)pfStack_12c * fStack_148 - fStack_14c * fStack_128);
            fVar16 = (float)puStack_184 * (float)puStack_184 +
                     fStack_18c * fStack_18c + fStack_188 * fStack_188;
            if (fVar16 < 0.0 == (fVar16 == 0.0)) {
              FUN_00ddf460(&fStack_18c,&fStack_18c);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              puStack_184 = (undefined4 *)0x0;
              fStack_188 = 1.0;
              fStack_18c = 0.0;
            }
            *(undefined4 *)(param_1 + 0x7f0) = 0;
            fVar16 = fStack_18c * -0.8;
            pfStack_194 = (float *)((float)puStack_184 * -0.8);
            fVar14 = fStack_188 * -0.8 + 0.5;
            fStack_18c = fStack_14c;
            puStack_184 = (undefined4 *)fStack_144;
            fStack_188 = 0.0;
            fVar15 = fStack_144 * fStack_144 + fStack_14c * fStack_14c;
            if (fVar15 < 0.0 == (fVar15 == 0.0)) {
              FUN_00ddf460(&fStack_18c,&fStack_18c);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              puStack_184 = (undefined4 *)0x0;
              fStack_188 = 1.0;
              fStack_18c = 0.0;
            }
            fStack_18c = fStack_18c * 0.0;
            fStack_188 = fStack_188 * 0.0;
            puStack_184 = (undefined4 *)((float)puStack_184 * 0.0);
            fVar15 = fVar16 + fStack_18c + (float)unaff_EDI[0x10];
            fVar16 = (float)unaff_EDI[0x11] + fStack_188 + fVar14;
            pfStack_194 = (float *)((float)puStack_184 + (float)pfStack_194 + (float)unaff_EDI[0x12]
                                   );
            fVar11 = (float10)FUN_00fdc1f0();
            *(float *)(param_1 + 0x4c0) =
                 (float)(((float10)fVar15 - (float10)*(float *)(param_1 + 0x4c0)) * fVar11 +
                        (float10)*(float *)(param_1 + 0x4c0));
            fVar11 = (float10)FUN_00fdc1f0();
            *(float *)(param_1 + 0x4c4) =
                 (float)(((float10)fVar16 - (float10)*(float *)(param_1 + 0x4c4)) * fVar11 +
                        (float10)*(float *)(param_1 + 0x4c4));
            fVar11 = (float10)FUN_00fdc1f0();
            *(float *)(param_1 + 0x4c8) =
                 (float)(((float10)(float)pfStack_194 - (float10)*(float *)(param_1 + 0x4c8)) *
                         fVar11 + (float10)*(float *)(param_1 + 0x4c8));
            *(undefined4 *)(param_1 + 0x4f4) = 0x40000000;
            fStack_cc = *pfVar8;
            uStack_c8 = *(undefined4 *)(param_1 + 0x364);
            uStack_c4 = *(undefined4 *)(param_1 + 0x368);
            uStack_c0 = *(undefined4 *)(param_1 + 0x36c);
            uStack_d4 = 0;
            uStack_d8 = 0;
            uStack_dc = 0;
            pfStack_e0 = (float *)0x0;
            uStack_e8 = 0;
            uStack_ec = 0;
            uStack_f0 = 0;
            uStack_f4 = 0;
            fStack_fc = 0.0;
            fStack_100 = 0.0;
            fStack_104 = 0.0;
            fStack_108 = 0.0;
            uStack_d0 = 0x3f800000;
            uStack_e4 = 0x3f800000;
            fStack_f8 = 1.0;
            fStack_10c = 1.0;
            thunk_FUN_00ddc1d0(&iStack_8c,&fStack_cc,5);
            D3DXMatrixMultiply(&fStack_10c,&iStack_8c,&fStack_10c);
            D3DXMatrixMultiply(auStack_118,auStack_118,unaff_EDI + 0x2c);
            D3DXVec3TransformNormal(&pfStack_194,&pfStack_194,&fStack_124);
            fVar14 = *(float *)(param_1 + 0x4c0) + fStack_100 + (float)pfVar7;
            fVar15 = fStack_fc + fVar15 + *(float *)(param_1 + 0x4c4);
            fVar16 = fStack_f8 + fVar16 + *(float *)(param_1 + 0x4c8);
            pfStack_194 = (float *)((float)pfStack_194 + *(float *)(param_1 + 0x4cc));
            fVar11 = (float10)FUN_00fdc1f0();
            *(float *)(param_1 + 0x4b0) =
                 (float)(((float10)fVar14 - (float10)*(float *)(param_1 + 0x4b0)) * fVar11 +
                        (float10)*(float *)(param_1 + 0x4b0));
            fVar11 = (float10)FUN_00fdc1f0();
            *(float *)(param_1 + 0x4b4) =
                 (float)(((float10)fVar15 - (float10)*(float *)(param_1 + 0x4b4)) * fVar11 +
                        (float10)*(float *)(param_1 + 0x4b4));
            fVar11 = (float10)FUN_00fdc1f0();
            puStack_184 = (undefined4 *)0x0;
            *(float *)(param_1 + 0x4b8) =
                 (float)(((float10)fVar16 - (float10)*(float *)(param_1 + 0x4b8)) * fVar11 +
                        (float10)*(float *)(param_1 + 0x4b8));
            uVar6 = FUN_00a1d5c0();
            FUN_004b7c50(0x40,uVar6);
            iVar4 = (**(code **)(*unaff_EDI + 0x84))(0x3f060a92,0x42480000);
            FUN_00c58840(&uStack_130,0,*(undefined4 *)(iVar4 + 4));
            if ((int)fStack_124 < 1) {
              pfStack_190 = (float *)0x3;
              FUN_004fc8e0(&stack0xfffffe84);
              pfStack_190 = &fStack_16c;
              pfStack_194 = (float *)0xdc6ab1;
              pfVar8 = (float *)FUN_00a925a0();
              fVar16 = *pfVar8;
              fVar14 = pfVar8[1];
              pfStack_190 = &fStack_16c;
              fVar15 = pfVar8[2];
              fVar1 = pfVar8[3];
              *(float *)(param_1 + 0x4bc) = fStack_170 + fVar1;
              *(float *)(param_1 + 0x4b0) = fVar16 + 0.0;
              *(float *)(param_1 + 0x4b4) = fVar14 + 0.0;
              *(float *)(param_1 + 0x4b8) = fVar15 + 0.0;
              pfStack_194 = (float *)0xdc6b10;
              pfVar8 = (float *)FUN_00a925a0();
              fVar2 = pfVar8[1];
              fVar3 = pfVar8[2];
              fVar1 = pfVar8[3] * 100.0 + fStack_170 + fVar1;
              *(float *)(param_1 + 0x4c0) = *pfVar8 * 100.0 + fVar16 + 0.0;
              *(float *)(param_1 + 0x4c4) = fVar2 * 100.0 + fVar14 + 0.0;
              *(float *)(param_1 + 0x4c8) = fVar3 * 100.0 + fVar15 + 0.0;
            }
            else {
              fVar16 = 100.0;
              fStack_100 = 1.0;
              pfStack_e0 = pfStack_12c + (int)fStack_124 * 0x1c;
              fStack_10c = 0.0;
              fStack_108 = 0.0;
              fStack_104 = 0.0;
              pfVar8 = pfStack_12c;
              if (pfStack_12c != pfStack_e0) {
                do {
                  pfStack_190 = &fStack_16c;
                  pfStack_194 = (float *)0xdc697c;
                  FUN_00c15010();
                  pfStack_190 = (float *)0xdc69b5;
                  pfVar7 = (float *)(**(code **)(*unaff_EDI + 0x68))();
                  fVar14 = SQRT((fStack_168 - pfVar7[1]) * (fStack_168 - pfVar7[1]) +
                                (fStack_16c - *pfVar7) * (fStack_16c - *pfVar7) +
                                (fStack_164 - pfVar7[2]) * (fStack_164 - pfVar7[2]));
                  if (fVar14 < fVar16) {
                    fStack_10c = fStack_16c;
                    fStack_108 = fStack_168;
                    fStack_104 = fStack_164;
                    fStack_100 = fStack_160;
                    fVar16 = fVar14;
                  }
                  pfVar8 = pfVar8 + 0x1c;
                } while (pfVar8 != pfStack_e0);
              }
              if (pfStack_12c != (float *)0x0) {
                fStack_124 = 0.0;
                if (iStack_120 != 0) {
                  pfStack_190 = (float *)0x0;
                  pfStack_194 = pfStack_12c;
                  FUN_00dd48d0();
                  iStack_120 = 0;
                }
                pfStack_12c = (float *)0x0;
                fStack_128 = 0.0;
              }
              *(float *)(param_1 + 0x4c0) = fStack_10c;
              *(float *)(param_1 + 0x4c4) = fStack_108;
              *(float *)(param_1 + 0x4c8) = fStack_104;
              fVar1 = fStack_100;
            }
            *(float *)(param_1 + 0x4cc) = fVar1;
            if ((pfStack_12c != (float *)0x0) && (fStack_124 = 0.0, iStack_120 != 0)) {
              pfStack_190 = (float *)0x0;
              pfStack_194 = pfStack_12c;
              FUN_00dd48d0();
            }
          }
        }
        pfStack_190 = *(float **)(param_1 + 0x4a8);
        pfStack_194 = (float *)(param_1 + 0x4e0);
        Camera::Math::safePositionTargetXz_2(param_1 + 0x4b0,param_1 + 0x4c0);
      }
    }
  }
  return;
}

// 00DC6BB0  thunk_FUN_00dc2560  size=5  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00dc2560(void)

{
  _DAT_018ccbdc = 0;
  _DAT_018ccbe0 = 0;
  _DAT_018ccbe4 = 0;
  _DAT_018ccbe8 = 0;
  _DAT_018ccbec = 0;
  _DAT_018ccbf0 = 0;
  FUN_00da2b20();
  FUN_00da2c80();
  _DAT_018ccc4c = 0xffffffff;
  cXmlBinary::cXmlBinary_11();
  cXmlBinary::cXmlBinary_10();
  cXmlBinary::cXmlBinary_2();
  cXmlBinary::cXmlBinary_4();
  cXmlBinary::cXmlBinary_7();
  return;
}

// 00DC6BC0  FUN_00dc6bc0  size=94  [between]
void FUN_00dc6bc0(void)

{
  int iVar1;
  
  if ((DAT_018b9174 & 0xf00) == 0xc00) {
    iVar1 = 2;
  }
  else if ((DAT_018b9174 & 0xf00) == 0xd00) {
    iVar1 = 3;
  }
  else {
    switch(DAT_018b9174) {
    case 0xe21:
    case 0xe22:
    case 0xe23:
    case 0xe24:
    case 0xe25:
    case 0xe26:
    case 0xe27:
    case 0xe28:
    case 0xe29:
    case 0xe30:
    case 0xe40:
    case 0xe42:
      iVar1 = 1;
      break;
    default:
      iVar1 = 0;
    }
  }
  if (iVar1 != DAT_01dc5588) {
    DAT_01dc5588 = iVar1;
    FUN_00dc2560();
    return;
  }
  return;
}

// 00DC6C60  Camera::StateBattle::vf0C  size=335  [class]
void __thiscall Camera::StateBattle::vf0C(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [28];
  
  FUN_00da8dd0();
  *(undefined4 *)(param_2 + 0x4f8) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_4 != (int *)0x0) {
    iVar1 = (**(code **)(*param_4 + 0x20))();
    if (*(int *)(iVar1 + 8) == 4) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else if (*(int *)(iVar1 + 8) == 0xc) {
      if (*(int *)(param_2 + 0x8c8) == 1) {
        FUN_00dd5650(&DAT_016c42f8,0x4034000000000000);
      }
      else {
        *(undefined4 *)(param_2 + 0x8c8) = 0;
        *(undefined4 *)(param_2 + 0x8c0) = 0x41a00000;
        *(undefined4 *)(param_2 + 0x8c4) = 0x41200000;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x770) = 0x40200000;
    }
    iVar1 = (**(code **)(*param_4 + 0x20))();
    if (*(int *)(iVar1 + 8) != 1) {
      FUN_00dc2c20();
      FUN_00dc2d20(0x41f00000,1);
      FUN_00dc3200(auStack_20,param_2,param_3,0x3f800000);
      uStack_30 = *(undefined4 *)(param_3 + 0x24);
      uStack_2c = *(undefined4 *)(param_3 + 0x28);
      uStack_28 = *(undefined4 *)(param_3 + 0x2c);
      uStack_24 = 0x3f800000;
      FUN_00dc17b0(auStack_20,&uStack_30,0x40400000);
    }
  }
  return;
}

// 00DC6DB0  FUN_00dc6db0  size=278  [between]
void FUN_00dc6db0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  fVar1 = *(float *)(param_1 + 0x4c0);
  fVar2 = *(float *)(param_1 + 0x4c4);
  fVar3 = *(float *)(param_1 + 0x4c8);
  uVar4 = *(undefined4 *)(param_1 + 0x4cc);
  FUN_00dc3200(&local_20,param_1,param_2,*(undefined4 *)(PTR_DAT_018bc3a8 + 0x58));
  if (0.0001 <= (local_18 - fVar3) * (local_18 - fVar3) +
                (local_1c - fVar2) * (local_1c - fVar2) + (local_20 - fVar1) * (local_20 - fVar1)) {
    fVar5 = *(float *)(param_2 + 0x1c);
    fVar1 = local_20 * fVar5 + (1.0 - fVar5) * fVar1;
    fVar2 = (1.0 - *(float *)(param_2 + 0x20)) * fVar2 + local_1c * *(float *)(param_2 + 0x20);
    fVar3 = fVar5 * local_18 + (1.0 - fVar5) * fVar3;
    uVar4 = local_14;
  }
  *(float *)(param_1 + 0x4c0) = fVar1;
  *(float *)(param_1 + 0x4c4) = fVar2;
  *(float *)(param_1 + 0x4c8) = fVar3;
  *(undefined4 *)(param_1 + 0x4cc) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x4d4) = uVar4;
  *(undefined4 *)(param_1 + 0x4d8) = uVar6;
  *(undefined4 *)(param_1 + 0x4dc) = 0x3f800000;
  FUN_00da5c80((undefined4 *)(param_1 + 0x4d0));
  return;
}

// 00DC6ED0  Camera::StateLockOn::vf0C  size=145  [class]
void __thiscall Camera::StateLockOn::vf0C(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x6e0) = 0x41200000;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x6ec) = 0x3f800000;
  FUN_00db2aa0(param_2);
  FUN_00dc3840(param_2);
  FUN_00dc3840(param_2);
  FUN_00dc3840(param_2);
  FUN_00dbf4d0(param_2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  FUN_00da01f0(param_2 + 0x460);
  return;
}

// 00DC6F70  FUN_00dc6f70  size=1083  [between]
void __thiscall FUN_00dc6f70(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float unaff_EBX;
  float10 fVar5;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_a8;
  undefined1 auStack_a4 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_1c;
  
  FUN_00da49d0((float *)(param_1 + 0x700));
  fVar5 = (float10)FUN_00db51c0();
  local_f4 = (float)(fVar5 * (float10)0.08);
  local_80 = local_60;
  local_7c = local_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_a0 = *param_3;
  local_9c = param_3[1];
  local_98 = param_3[2];
  local_94 = (float)param_3[3];
  local_90 = param_3[4];
  local_8c = param_3[5];
  local_88 = param_3[6];
  local_84 = param_3[7];
  local_c0 = 0.0;
  local_bc = 1.0;
  local_b8 = 0.0;
  FUN_00db6590(&local_e0,&local_80,&local_a0,&local_c0,(float)(fVar5 * (float10)0.08));
  local_f0 = -local_30 * local_f4 + local_30;
  local_ec = (1.0 - local_2c) * local_f4 + local_2c;
  local_e8 = -local_28 * local_f4 + local_28;
  local_e4 = local_24 + (local_94 - local_24) * local_f4;
  FUN_00db5d90(&local_f0,&local_f0);
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 == 0) {
LAB_00dc712f:
    fVar1 = 0.87266463;
  }
  else {
    iVar3 = FUN_00a7c8a0();
    if (iVar3 == 0) goto LAB_00dc712f;
    iVar3 = FUN_00a7c8a0();
    if (*(int *)(iVar3 + 0x4b0) != 0x11500) goto LAB_00dc712f;
    fVar1 = 0.7853982;
  }
  fStack_a8 = fVar1 * unaff_EBX + (1.0 - unaff_EBX) * fStack_1c;
  *(float *)(param_1 + 0x700) = local_e4;
  *(float *)(param_1 + 0x704) = local_e0;
  *(float *)(param_1 + 0x708) = fStack_dc;
  *(float *)(param_1 + 0x70c) = fStack_d8;
  *(float *)(param_1 + 0x710) = fStack_d4;
  *(float *)(param_1 + 0x714) = fStack_d0;
  *(float *)(param_1 + 0x718) = fStack_cc;
  *(float *)(param_1 + 0x71c) = fStack_c8;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined4 *)(param_1 + 0x72c) = local_98;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0;
  *(undefined4 *)(param_1 + 0x734) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x73c) = local_98;
  *(float *)(param_1 + 0x730) = local_f4;
  *(float *)(param_1 + 0x734) = local_f0;
  *(float *)(param_1 + 0x738) = local_ec;
  *(float *)(param_1 + 0x73c) = local_e8;
  *(float *)(param_1 + 0x748) = fStack_a8;
  FUN_00dbf640(&local_e4);
  *(float *)(param_1 + 0x6a0) = local_f4;
  *(float *)(param_1 + 0x6a4) = local_f0;
  *(float *)(param_1 + 0x6a8) = local_ec;
  *(float *)(param_1 + 0x6ac) = local_e8;
  FUN_00db7750();
  thunk_FUN_00de01a0(param_1 + 0x640,param_1 + 0x680,param_1 + 0x690,(float *)(param_1 + 0x6a0));
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc7255:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00dc726f;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dc7255;
  }
  iVar3 = FUN_00a7c8a0();
LAB_00dc726f:
  local_84 = *(undefined4 *)(iVar3 + 0x40);
  local_80 = *(undefined4 *)(iVar3 + 0x44);
  local_7c = *(undefined4 *)(iVar3 + 0x48);
  local_78 = *(undefined4 *)(iVar3 + 0x4c);
  FUN_00db5960(auStack_a4,iVar3);
  FUN_00dbf6e0(&fStack_c4,&local_84,auStack_a4,&stack0xffffff08,1,0xbf800000);
  local_e4 = local_e4 + fStack_c4;
  local_e0 = local_e0 + local_c0;
  fStack_dc = fStack_dc + local_bc;
  fStack_d8 = fStack_d8 + local_b8;
  fStack_d4 = fStack_c4 + fStack_d4;
  fStack_d0 = local_c0 + fStack_d0;
  fStack_cc = local_bc + fStack_cc;
  fStack_c8 = local_b8 + fStack_c8;
  Camera::Math::safePositionTargetXz_2(&local_e4,&fStack_d4,&local_f4,fStack_a8);
  fStack_c4 = 0.0;
  local_c0 = 1.0;
  local_bc = 0.0;
  puVar4 = (undefined4 *)FUN_00da9920(auStack_a4,&fStack_c4);
  *(undefined4 *)(param_2 + 0x360) = *puVar4;
  *(undefined4 *)(param_2 + 0x364) = puVar4[1];
  *(undefined4 *)(param_2 + 0x368) = puVar4[2];
  *(undefined4 *)(param_2 + 0x36c) = puVar4[3];
  *(undefined4 *)(param_2 + 0x920) = 1;
  return;
}

// 00DC73B0  Camera::StateFps::vf10  size=858  [class]
void __thiscall Camera::StateFps::vf10(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_80;
  float local_7c [3];
  float local_70;
  float local_6c;
  float *local_68;
  float *pfStack_64;
  undefined4 uStack_60;
  float afStack_5c [3];
  float local_50 [19];
  
  fVar6 = (float10)0;
  local_80 = (float)fVar6;
  local_7c[0] = (float)fVar6;
  local_7c[1] = -0.5;
  local_70 = (float)fVar6;
  local_6c = (float)fVar6;
  pfVar4 = (float *)(param_2 + 0x720);
  pfVar5 = local_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_68 = (float *)0xc0600000;
  fVar1 = local_50[7] * 0.003921569 * 0.1;
  if (0.2 < ABS(fVar1)) {
    fVar6 = (float10)FUN_00da7500();
    fVar7 = (float10)fVar1;
    fVar6 = fVar6 * -(ABS(fVar7) * fVar7) * (float10)0.1 * (float10)2.5 *
            (float10)*(float *)(PTR_DAT_018bc3a4 + 0x128);
  }
  fVar9 = (float10)0;
  fVar7 = fVar6 * (float10)0.19999999 + (float10)*(float *)(param_1 + 0xc) * (float10)0.8;
  *(float *)(param_1 + 0xc) = (float)fVar7;
  fVar7 = fVar7 + (float10)*(float *)(param_1 + 4);
  *(float *)(param_1 + 4) = (float)fVar7;
  fVar6 = (float10)*(float *)(PTR_DAT_018bc3a4 + 0x118) * (float10)0.017453292;
  fVar8 = (float10)0.017453292 * (float10)*(float *)(PTR_DAT_018bc3a4 + 0x11c);
  if ((fVar7 < fVar6) || (fVar6 = fVar7, fVar7 <= fVar8)) {
    fVar8 = fVar6;
  }
  *(float *)(param_1 + 4) = (float)fVar8;
  pfVar4 = (float *)(param_2 + 0x720);
  pfVar5 = local_50;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  fVar1 = local_50[6] * 0.003921569 * 0.1;
  if (0.2 < ABS(fVar1)) {
    fVar6 = (float10)FUN_00da7570();
    fVar7 = (float10)fVar1;
    fVar9 = -(ABS(fVar7) * fVar7) * (float10)-0.1 * fVar6 * (float10)-2.5 *
            (float10)*(float *)(PTR_DAT_018bc3a4 + 0x128);
  }
  fVar6 = fVar9 * (float10)0.19999999 + (float10)*(float *)(param_1 + 0x10) * (float10)0.8;
  *(float *)(param_1 + 0x10) = (float)fVar6;
  fVar6 = fVar6 + (float10)*(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = (float)fVar6;
  fVar6 = (float10)FUN_00ddba30((float)fVar6);
  *(float *)(param_1 + 8) = (float)fVar6;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc7553:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00dc7586;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dc7553;
  }
  iVar3 = FUN_00a7c8a0();
LAB_00dc7586:
  fVar7 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x94) + 3.1415927);
  fVar8 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 8) - fVar7));
  fVar6 = -(float10)*(float *)(PTR_DAT_018bc3a4 + 0x124) * (float10)0.017453292;
  fVar9 = (float10)0.017453292 * (float10)*(float *)(PTR_DAT_018bc3a4 + 0x120);
  if ((fVar8 < fVar6) || (fVar6 = fVar8, fVar8 <= fVar9)) {
    fVar9 = fVar6;
  }
  fVar6 = (float10)FUN_00ddba30((float)(fVar9 + (float10)(float)fVar7));
  *(float *)(param_1 + 8) = (float)fVar6;
  uStack_60 = *(undefined4 *)(param_1 + 4);
  afStack_5c[0] = (float)fVar6;
  afStack_5c[1] = 0.0;
  FUN_00ddc1d0(local_50,&uStack_60,2);
  pfVar4 = local_50;
  pfVar5 = &local_80;
  D3DXVec3TransformNormal(pfVar5,pfVar5,pfVar4);
  FUN_00ddc1d0(afStack_5c,&local_6c,2);
  D3DXVec3TransformNormal(local_7c,local_7c,afStack_5c);
  local_50[0] = local_80;
  local_50[1] = local_7c[0];
  local_50[2] = *(float *)(PTR_DAT_018bc3a4 + 300) * 0.017453292;
  local_50[3] = 0.0;
  local_50[4] = 1.5707964;
  local_50[6] = 1.5707964;
  local_50[5] = 0.0;
  local_50[7] = 0.3;
  local_50[8] = 0.75;
  local_50[9] = 2.0;
  local_68 = pfVar5;
  pfStack_64 = pfVar4;
  afStack_5c[2] = (float)fVar7;
  FUN_00dc4c80(param_2,&local_68);
  return;
}

// 00DC7710  Camera::StatePartsFollow::vf10  size=144  [class]
void __thiscall Camera::StatePartsFollow::vf10(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  undefined1 local_30 [24];
  undefined4 local_18;
  
  FUN_00dbc900(local_60,param_3);
  fVar2 = *(float *)(param_1 + 0x44) + 1.0;
  *(float *)(param_1 + 0x44) = fVar2;
  fVar1 = *(float *)(param_1 + 0x40);
  fVar3 = 0.0;
  if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0x44) = fVar1;
  fVar4 = (float10)FUN_00db51c0();
  FUN_00dbeb10(local_60,param_1 + 0x50,local_60,(float)fVar4);
  Math::safePositionTargetXz_2(local_60,local_50,local_30,local_18);
  return;
}

// 00DC77A0  Camera::StateDiveKill::vf10  size=233  [class]
void __thiscall Camera::StateDiveKill::vf10(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  undefined1 local_30 [24];
  undefined4 local_18;
  
  iVar4 = FUN_00a81330();
  if (((iVar4 == 0) || (iVar4 = FUN_00a7c800(), iVar4 == 0)) || (iVar5 = FUN_00a7c7e0(), iVar5 == 0)
     ) {
    FUN_00a7c970(0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar4 + 0x48);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar4 + 0x4c);
  }
  FUN_00dc4550(local_60,param_2);
  fVar2 = *(float *)(param_1 + 0x24) + 1.0;
  *(float *)(param_1 + 0x24) = fVar2;
  fVar1 = *(float *)(param_1 + 0x20);
  fVar3 = 0.0;
  if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  fVar6 = (float10)FUN_00db51c0();
  FUN_00dbeb10(local_60,param_1 + 0x30,local_60,(float)fVar6);
  Math::safePositionTargetXz_2(local_60,local_50,local_30,local_18);
  return;
}

// 00DC7890  FUN_00dc7890  size=84  [callgraph]
void __thiscall FUN_00dc7890(int *param_1,undefined4 param_2)

{
  if (*param_1 != 0) {
    if ((char)param_1[0x14] != '\0') {
      FUN_00dc4ee0(param_2);
      *param_1 = 0;
      return;
    }
    Camera::Math::safePositionTargetXz_2(param_1 + 4,param_1 + 8,param_1 + 0xc,param_1[0x11]);
    FUN_00dbdff0(param_2);
    *param_1 = 0;
  }
  return;
}

// 00DC78F0  FUN_00dc78f0  size=594  [callgraph]
float * FUN_00dc78f0(float *param_1,int param_2,float *param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar4;
  float fVar5;
  undefined1 *puVar6;
  float fVar7;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  float local_68;
  float local_64;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00f98a90();
  local_68 = (float)iVar2 * param_5;
  local_64 = (1.0 - param_5) * (float)iVar2;
  local_90 = 1.0;
  local_8c = 0.0;
  local_88 = 0;
  FUN_00ddc1d0(local_50,param_2 + 0x1e0,5);
  puVar6 = local_50;
  pfVar3 = &local_90;
  pfVar4 = &local_a0;
  D3DXVec3TransformNormal(pfVar4,pfVar3,puVar6);
  D3DXVec3TransformNormal(&stack0xffffff54,&stack0xffffff54,param_2 + 0x390);
  fVar5 = (*(float *)(param_2 + 0x3c0) + (float)pfVar3) * (float)pfVar4;
  fVar7 = (*(float *)(param_2 + 0x3c4) + (float)puVar6) * (float)pfVar4;
  fVar1 = (*(float *)(param_2 + 0x3c8) + unaff_EDI) * (float)pfVar4;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  fStack_98 = *param_3 - fVar5;
  fStack_94 = param_3[1] - fVar7;
  local_90 = param_3[2] - fVar1;
  local_8c = param_3[3] - unaff_ESI * (float)pfVar4;
  pfVar3 = (float *)FUN_00db6a90(auStack_78,param_2,&fStack_98);
  local_a0 = pfVar3[2];
  fStack_9c = pfVar3[3];
  if (*pfVar3 < fStack_80) {
    pfVar3 = (float *)FUN_00dc50b0(auStack_78,param_2,&fStack_98,&stack0xffffff58,fStack_80);
    *param_1 = *param_1 + *pfVar3;
    param_1[1] = pfVar3[1] + param_1[1];
    param_1[2] = pfVar3[2] + param_1[2];
    param_1[3] = pfVar3[3] + param_1[3];
  }
  fStack_98 = *param_3 + fVar5;
  fStack_94 = fVar7 + param_3[1];
  local_90 = fVar1 + param_3[2];
  local_8c = unaff_ESI * (float)pfVar4 + param_3[3];
  pfVar3 = (float *)FUN_00db6a90(auStack_78,param_2,&fStack_98);
  local_a0 = pfVar3[2];
  fStack_9c = pfVar3[3];
  if (*pfVar3 <= fStack_7c) {
    return param_1;
  }
  pfVar3 = (float *)FUN_00dc50b0(auStack_78,param_2,&fStack_98,&stack0xffffff58,fStack_7c);
  *param_1 = *param_1 + *pfVar3;
  param_1[1] = pfVar3[1] + param_1[1];
  param_1[2] = pfVar3[2] + param_1[2];
  param_1[3] = pfVar3[3] + param_1[3];
  return param_1;
}

// 00DC8060  FUN_00dc8060  size=579  [callgraph]
void __thiscall FUN_00dc8060(int param_1,int param_2)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (DAT_01beb8e4 == 0) {
    piVar8 = &DAT_01dc5f60;
    iVar7 = 0x10;
    do {
      if ((*(byte *)(piVar8 + 1) & 1) != 0) {
        (**(code **)(*piVar8 + 8))();
      }
      piVar8 = piVar8 + 0x11;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    DAT_01beb8e4 = 1;
  }
  pfVar1 = (float *)(param_1 + 0x460);
  FUN_00de5f20(pfVar1);
  FUN_00de5fc0(param_1 + 0x470);
  iVar7 = FUN_00dd93a0(0x9f);
  if (iVar7 != 0) {
    FUN_00dd9400(0x31);
    FUN_00dd9400(0x32);
    FUN_00dd9400(0x33);
  }
  puVar2 = (uint *)(param_1 + 0x6d0);
  if (param_2 == 2) {
    if ((DAT_01b7ba94 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x6d4) = 0;
      *puVar2 = (uint)(*puVar2 == 0);
    }
  }
  else {
    *puVar2 = 0;
  }
  if (*puVar2 == 0) {
    FUN_00db4a90(param_1,param_2);
  }
  else {
    FUN_00da5100(param_1);
  }
  piVar8 = (int *)(param_1 + 0x580);
  if ((*(int *)(param_1 + 0x584) == 0) || (*piVar8 == 0)) {
    FUN_00db53c0(pfVar1,1);
    fVar3 = *(float *)(param_1 + 0x510);
    fVar4 = *(float *)(param_1 + 0x514);
    fVar5 = *(float *)(param_1 + 0x518);
    fVar6 = *(float *)(param_1 + 0x51c);
    fStack_20 = fVar3 + *pfVar1;
    fStack_1c = *(float *)(param_1 + 0x464) + fVar4;
    fStack_18 = fVar5 + *(float *)(param_1 + 0x468);
    fStack_14 = fVar6 + *(float *)(param_1 + 0x46c);
    FUN_00de5f20(&fStack_20);
    fStack_20 = *(float *)(param_1 + 0x470) + fVar3;
    fStack_1c = *(float *)(param_1 + 0x474) + fVar4;
    fStack_18 = *(float *)(param_1 + 0x478) + fVar5;
    fStack_14 = *(float *)(param_1 + 0x47c) + fVar6;
    FUN_00de5fc0(&fStack_20);
    FUN_00de6060(param_1 + 0x490);
  }
  else {
    FUN_00db53c0(pfVar1,0);
    if (*piVar8 != 0) {
      if (*(char *)(param_1 + 0x5d0) == '\0') {
        Camera::Math::safePositionTargetXz_2
                  (param_1 + 0x590,param_1 + 0x5a0,param_1 + 0x5b0,*(undefined4 *)(param_1 + 0x5c4))
        ;
        FUN_00dbdff0(param_1);
      }
      else {
        FUN_00dc4ee0(param_1);
      }
      *piVar8 = 0;
    }
    FUN_00da8900(param_1 + 0x640);
    FUN_00da5dd0(param_1);
  }
  FUN_00db8090();
  FUN_00da5610(param_1,param_2);
  return;
}

// 00DC8410  FUN_00dc8410  size=3717  [callgraph]
void __fastcall FUN_00dc8410(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float *pfStack_1b8;
  float fStack_1b4;
  float **ppfStack_1b0;
  float **ppfStack_1ac;
  float **ppfStack_1a8;
  float *pfStack_1a4;
  float *pfStack_1a0;
  float *pfStack_19c;
  float *pfStack_198;
  float *pfStack_194;
  float *pfStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  undefined *puStack_184;
  float fVar10;
  float *pfStack_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float afStack_160 [2];
  float local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_130;
  undefined1 auStack_12c [8];
  float *pfStack_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int local_104;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float afStack_d0 [3];
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  puStack_184 = (undefined *)0xdc842c;
  iVar6 = FUN_00a81330();
  if (iVar6 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc843b;
  iVar6 = FUN_00a7c8a0();
  if (iVar6 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc8450;
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc8462;
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc8471;
  iVar7 = FUN_00a7c8a0();
  if (iVar7 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc8486;
  local_104 = iVar7;
  FUN_00a8cab0();
  puStack_184 = (undefined *)0xdc848d;
  FUN_00a8cab0();
  local_e0 = *(float *)(iVar6 + 0x40);
  puStack_184 = &DAT_016c3080;
  local_ac = *(float *)(iVar6 + 0x44);
  pfStack_188 = (float *)0x1e;
  pfStack_18c = &local_e0;
  local_d8 = *(undefined4 *)(iVar6 + 0x48);
  pfStack_190 = &local_c0;
  local_d4 = *(undefined4 *)(iVar6 + 0x4c);
  pfStack_194 = (float *)0x0;
  pfStack_198 = (float *)0x0;
  pfStack_19c = (float *)0x0;
  pfStack_1a0 = &local_60;
  local_bc = local_ac + 1.5;
  local_dc = local_ac - 2.5;
  pfStack_1a4 = (float *)0xdc8555;
  local_c0 = local_e0;
  local_b8 = (float)local_d8;
  local_b4 = (float)local_d4;
  local_b0 = local_e0;
  local_a8 = local_d8;
  local_a4 = local_d4;
  local_60 = local_e0;
  local_5c = local_ac;
  local_58 = local_d8;
  local_54 = local_d4;
  RayCastSingleHitWork::RayCastSingleHitWork_4();
  puStack_184 = &DAT_016c3080;
  local_dc = local_dc - 20.0;
  pfStack_188 = (float *)0x1e;
  pfStack_18c = &local_e0;
  pfStack_190 = &local_c0;
  pfStack_194 = (float *)0x0;
  pfStack_198 = (float *)0x0;
  pfStack_19c = (float *)0x0;
  pfStack_1a0 = &local_b0;
  pfStack_1a4 = (float *)0xdc8598;
  RayCastSingleHitWork::RayCastSingleHitWork_4();
  fVar10 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar2 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar10 = SQRT(fVar2 * fVar2 + fVar10 * fVar10);
  local_158 = 0.14;
  if (fVar10 < 50.0) {
    local_158 = 0.3;
  }
  if (fVar10 < 30.0) {
    local_158 = 0.12;
  }
  if (fVar10 < 20.0) {
    local_158 = 0.02;
  }
  if (fVar10 < 14.0) {
    local_158 = 0.0;
  }
  local_158 = local_158 + local_158;
  puStack_184 = (undefined *)0xdc861d;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 4) {
    local_158 = 0.2;
  }
  puStack_184 = (undefined *)0xdc8633;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 5) {
    local_158 = 0.2;
  }
  puStack_184 = (undefined *)0xdc8649;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 6) {
    local_158 = 0.2;
  }
  puStack_184 = (undefined *)0xdc865f;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 0x1d) {
    puStack_184 = (undefined *)0xdc866b;
    iVar8 = FUN_00a8cac0();
    if (iVar8 == 8) {
      local_158 = 0.2;
    }
  }
  local_170 = *(float *)(iVar7 + 0x40);
  puStack_184 = (undefined *)(iVar7 + 0x10);
  local_16c = *(float *)(iVar7 + 0x44);
  pfStack_188 = &local_120;
  local_168 = *(float *)(iVar7 + 0x48);
  pfStack_18c = &local_170;
  local_164 = *(undefined4 *)(iVar7 + 0x4c);
  local_120 = 0.0;
  local_11c = 0.0;
  local_118 = 10.0;
  pfStack_190 = (float *)0xdc86bd;
  D3DXVec3TransformNormal();
  pfStack_190 = (float *)(param_1 + 0x460);
  pfStack_194 = (float *)&stack0xfffffe84;
  pfStack_198 = afStack_160;
  pfStack_19c = (float *)&stack0xfffffe80;
  pfStack_174 = (float *)(*(float *)(iVar7 + 0x48) + (float)pfStack_174);
  afStack_160[0] = *(float *)(param_1 + 0x364);
  pfStack_1a0 = (float *)0xdc870d;
  thunk_FUN_00dde510();
  pfStack_190 = (float *)(afStack_160[0] - *(float *)(param_1 + 0x794));
  pfStack_194 = (float *)0xdc8730;
  fVar9 = (float10)FUN_00ddba30();
  fStack_140 = (float)fVar9;
  if (ABS(fVar9) <= (float10)1e-05) {
    fVar9 = (float10)0;
  }
  else {
    pfStack_190 = (float *)0xdc8755;
    fVar9 = (float10)FUN_00fdc1f0();
    fVar9 = fVar9 * (float10)fStack_140;
  }
  pfStack_190 = (float *)auStack_12c;
  *(float *)(param_1 + 0x78c) = (float)fVar9;
  pfStack_194 = (float *)0xdc876f;
  iVar8 = FUN_0080c820();
  pfStack_198 = afStack_160;
  pfStack_19c = (float *)&stack0xfffffe80;
  pfStack_174 = *(float **)(iVar8 + 8);
  local_170 = *(float *)(iVar8 + 0xc);
  pfStack_190 = (float *)(param_1 + 0x460);
  fVar10 = *(float *)(param_1 + 0x360);
  pfStack_194 = (float *)&stack0xfffffe84;
  afStack_160[0] = *(float *)(param_1 + 0x364);
  pfStack_1a0 = (float *)0xdc87b9;
  thunk_FUN_00dde510();
  local_164 = 0x3dcccccd;
  fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = *(float *)(iVar6 + 0x44) + 5.0;
  if (fVar3 < *(float *)(iVar7 + 0x44) != (fVar3 == *(float *)(iVar7 + 0x44))) {
    local_164 = 0x3e99999a;
  }
  if (fVar2 < 30.0) {
    local_164 = 0x3da3d70a;
  }
  if (fVar2 < 20.0) {
    local_164 = 0x3d75c28f;
  }
  if (fVar2 < 14.0) {
    local_164 = 0x3d23d70a;
  }
  pfStack_190 = (float *)(fVar10 * -1.0 - *(float *)(param_1 + 0x790));
  pfStack_194 = (float *)0xdc885f;
  fVar9 = (float10)FUN_00ddba30();
  fStack_140 = (float)fVar9;
  pfStack_190 = (float *)0xdc8877;
  fVar9 = (float10)FUN_00fdc1f0();
  fVar9 = (float10)*(float *)(param_1 + 0x780) + (float10)*(float *)(param_1 + 0x778) +
          (float10)*(float *)(param_1 + 0x788) +
          fVar9 * (float10)fStack_140 + (float10)*(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = (float)fVar9;
  fVar9 = fVar9 + (float10)*(float *)(param_1 + 0x7e0);
  if (fVar9 < (float10)-1.3962634) {
    fVar9 = (float10)-1.3962634;
  }
  pfStack_190 = (float *)(float)fVar9;
  pfStack_194 = (float *)0xdc88bf;
  fVar9 = (float10)FUN_00ddba30();
  *(float *)(param_1 + 0x360) = (float)fVar9;
  pfStack_190 = (float *)(*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                          *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
  *(float **)(param_1 + 0x794) = pfStack_190;
  pfStack_194 = (float *)0xdc88eb;
  fVar9 = (float10)FUN_00ddba30();
  pfStack_194 = *(float **)(param_1 + 0x1f0);
  *(float *)(param_1 + 0x364) = (float)fVar9;
  local_dc = 0.0;
  pfStack_198 = (float *)(param_1 + 0x360);
  local_d8 = 0x3f800000;
  pfStack_19c = &local_5c;
  local_d4 = 0;
  pfStack_1a0 = (float *)0xdc8925;
  FUN_00ddc1d0();
  pfStack_190 = &local_5c;
  pfStack_198 = &local_dc;
  pfStack_19c = (float *)0xdc8940;
  pfStack_194 = pfStack_198;
  D3DXVec3TransformNormal();
  pfStack_19c = *(float **)(param_1 + 0x1f0);
  local_118 = 0.0;
  uStack_114 = 0;
  pfStack_1a0 = (float *)(param_1 + 0x360);
  uStack_110 = 0x3f800000;
  pfStack_1a4 = (float *)auStack_68;
  ppfStack_1a8 = (float **)0xdc8974;
  FUN_00ddc1d0();
  pfStack_19c = (float *)auStack_68;
  pfStack_1a4 = &local_118;
  ppfStack_1a8 = (float **)0xdc898f;
  pfStack_1a0 = pfStack_1a4;
  D3DXVec3TransformNormal();
  *(undefined4 *)(param_1 + 0x7e4) = 0xbfa66666;
  *(undefined4 *)(param_1 + 0x7e8) = 0x3f800000;
  pfStack_198 = (float *)0x40600000;
  fVar10 = 0.8;
  fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (!NAN(fVar2) && 35.0 < fVar2 != (fVar2 == 35.0)) {
    fVar2 = (fVar2 - 35.0) * 0.1 + 1.0;
    *(float *)(param_1 + 0x7e8) = fVar2;
    if (!NAN(fVar2) && 1.4 < fVar2 != (fVar2 == 1.4)) {
      *(undefined4 *)(param_1 + 0x7e8) = 0x3fb33333;
    }
  }
  fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (14.0 <= fVar2) {
    if (20.0 <= fVar2) goto LAB_00dc8aa8;
    pfStack_198 = (float *)((20.0 - fVar2) * 0.2 + 3.5);
    fVar2 = 4.5;
  }
  else {
    pfStack_198 = (float *)((14.0 - fVar2) * 0.3 + (20.0 - fVar2) * 0.2 + 3.5);
    fVar2 = 5.5;
  }
  if (fVar2 < (float)pfStack_198) {
    pfStack_198 = (float *)fVar2;
  }
LAB_00dc8aa8:
  if (*(float *)(param_1 + 0x360) <= -0.34906584) {
    fVar10 = (*(float *)(param_1 + 0x360) * 57.29578 + 20.0) * 0.1;
    fVar2 = *(float *)(param_1 + 0x7e8) - fVar10;
    *(float *)(param_1 + 0x7e8) = fVar2;
    if (1.8 <= fVar2) {
      *(undefined4 *)(param_1 + 0x7e8) = 0x3fe66666;
    }
    fVar2 = -1.3 - fVar10;
    *(float *)(param_1 + 0x7e4) = fVar2;
    if (!NAN(fVar2) && -0.3 < fVar2 != (fVar2 == -0.3)) {
      *(undefined4 *)(param_1 + 0x7e4) = 0xbe99999a;
    }
    pfStack_198 = (float *)(fVar10 + (float)pfStack_198);
    if ((float)pfStack_198 <= 0.6) {
      pfStack_198 = (float *)0x3f19999a;
    }
    fVar10 = fVar10 + 0.8;
    if (fVar10 <= 0.4) {
      fVar10 = 0.4;
    }
  }
  pfStack_194 = (float *)(local_11c * fStack_f0 - local_120 * fStack_ec);
  pfStack_190 = (float *)(fStack_ec * (float)pfStack_124 - local_11c * fStack_f4);
  pfStack_18c = (float *)(local_120 * fStack_f4 - fStack_f0 * (float)pfStack_124);
  fVar2 = (float)pfStack_18c * (float)pfStack_18c +
          (float)pfStack_194 * (float)pfStack_194 + (float)pfStack_190 * (float)pfStack_190;
  pfStack_174 = pfStack_194;
  local_170 = (float)pfStack_190;
  local_16c = (float)pfStack_18c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    ppfStack_1ac = &pfStack_174;
    ppfStack_1b0 = (float **)0xdc8c2c;
    ppfStack_1a8 = ppfStack_1ac;
    FUN_00ddf460();
  }
  else {
    ppfStack_1a8 = (float **)&DAT_0163d0ac;
    ppfStack_1ac = (float **)0xdc8c4f;
    FUN_00dd5650();
    local_16c = 0.0;
    local_170 = 1.0;
    pfStack_174 = (float *)0x0;
  }
  fVar2 = *(float *)(param_1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  pfStack_194 = (float *)(fVar2 * (float)pfStack_174);
  pfStack_18c = (float *)(fVar2 * local_16c);
  pfStack_190 = (float *)(fVar2 * local_170 + *(float *)(param_1 + 0x7e8));
  pfStack_174 = pfStack_124;
  local_16c = local_11c;
  local_168 = local_118;
  local_170 = 0.0;
  fVar2 = (float)pfStack_124 * (float)pfStack_124 + local_11c * local_11c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    ppfStack_1ac = &pfStack_174;
    ppfStack_1b0 = (float **)0xdc8cf3;
    ppfStack_1a8 = ppfStack_1ac;
    FUN_00ddf460();
  }
  else {
    ppfStack_1a8 = (float **)&DAT_0163d0ac;
    ppfStack_1ac = (float **)0xdc8d14;
    FUN_00dd5650();
    local_16c = 0.0;
    local_170 = 1.0;
    pfStack_174 = (float *)0x0;
  }
  pfStack_174 = (float *)((float)pfStack_174 * 0.0);
  pfVar1 = (float *)(param_1 + 0x4c0);
  local_170 = local_170 * 0.0;
  local_16c = local_16c * 0.0;
  local_168 = local_168 * 0.0;
  fVar2 = *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar6 + 0x44);
  fVar4 = *(float *)(iVar6 + 0x48);
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  pfStack_194 = (float *)((float)pfStack_194 + (float)pfStack_174 + fVar2);
  pfStack_190 = (float *)(fVar3 + local_170 + (float)pfStack_190);
  pfStack_18c = (float *)(local_16c + (float)pfStack_18c + fVar4);
  ppfStack_1a8 = (float **)0xdc8d9d;
  fVar9 = (float10)FUN_00fdc1f0();
  *pfVar1 = (float)(((float10)(float)pfStack_194 - (float10)*pfVar1) * fVar9 + (float10)*pfVar1);
  ppfStack_1a8 = (float **)0xdc8db6;
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c4) =
       (float)(((float10)(float)pfStack_190 - (float10)*(float *)(param_1 + 0x4c4)) * fVar9 +
              (float10)*(float *)(param_1 + 0x4c4));
  ppfStack_1a8 = (float **)0xdc8ddb;
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c8) =
       (float)(((float10)(float)pfStack_18c - (float10)*(float *)(param_1 + 0x4c8)) * fVar9 +
              (float10)*(float *)(param_1 + 0x4c8));
  pfStack_194 = *(float **)(iVar6 + 0x40);
  pfStack_18c = *(float **)(iVar6 + 0x48);
  pfStack_188 = *(float **)(iVar6 + 0x4c);
  pfStack_190 = (float *)(*(float *)(iVar6 + 0x44) + 1.8);
  ppfStack_1a8 = (float **)0xdc8e1e;
  iVar7 = FUN_009f8b40();
  ppfStack_1a8 = (float **)(iVar7 << 0x10 | 0x1d);
  ppfStack_1b0 = &pfStack_194;
  fStack_1b4 = 0.0;
  pfStack_1b8 = &fStack_144;
  ppfStack_1ac = (float **)pfVar1;
  iVar7 = hkpAllRayHitCollector::hkpAllRayHitCollector_6();
  if (iVar7 != 0) {
    pfStack_18c = (float *)(((float)pfStack_18c - fStack_13c) * 0.1);
    *pfVar1 = fStack_144 + ((float)pfStack_194 - fStack_144) * 0.1;
    *(float *)(param_1 + 0x4c4) = fStack_140 + ((float)pfStack_190 - fStack_140) * 0.1;
    *(float *)(param_1 + 0x4c8) = fStack_13c + (float)pfStack_18c;
    *(float *)(param_1 + 0x4cc) = ((float)pfStack_188 - fStack_138) * 0.1 + fStack_138;
    fStack_138 = (float)pfStack_188 - fStack_138;
  }
  ppfStack_1a8 = (float **)0x5;
  *(float **)(param_1 + 0x4f4) = pfStack_198;
  ppfStack_1ac = (float **)&uStack_114;
  uStack_154 = 0;
  ppfStack_1b0 = (float **)auStack_74;
  uStack_150 = 0;
  fStack_14c = -(float)pfStack_198;
  uStack_114 = *(undefined4 *)(param_1 + 0x360);
  uStack_110 = *(undefined4 *)(param_1 + 0x364);
  uStack_10c = *(undefined4 *)(param_1 + 0x368);
  uStack_108 = *(undefined4 *)(param_1 + 0x36c);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0.0;
  local_b4 = 0.0;
  local_b8 = 0.0;
  local_bc = 0.0;
  local_c0 = 0.0;
  uStack_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  local_b0 = 1.0;
  uStack_c4 = 0x3f800000;
  fStack_1b4 = 2.0255283e-38;
  thunk_FUN_00ddc1d0();
  ppfStack_1b0 = (float **)&uStack_c4;
  ppfStack_1ac = (float **)auStack_74;
  fStack_1b4 = 2.0255321e-38;
  ppfStack_1a8 = ppfStack_1b0;
  D3DXMatrixMultiply();
  fStack_1b4 = (float)(param_1 + 0x390);
  pfStack_1b8 = afStack_d0;
  D3DXMatrixMultiply(pfStack_1b8);
  D3DXVec3TransformNormal(&local_16c,&local_16c,&local_dc);
  pfStack_174 = (float *)(*(float *)(param_1 + 0x4c4) + local_b4 + (float)pfStack_174);
  local_170 = *(float *)(param_1 + 0x4c8) + local_b0 + local_170;
  local_16c = *(float *)(param_1 + 0x4cc) + local_16c;
  *(float *)(param_1 + 0x4bc) = local_16c;
  *(float *)(param_1 + 0x4b0) = fVar10 + local_b8 + *pfVar1;
  *(float **)(param_1 + 0x4b4) = pfStack_174;
  *(float *)(param_1 + 0x4b8) = local_170;
  fVar10 = (fStack_f4 + (float)pfStack_19c) - *(float *)(param_1 + 0x4b4);
  if (0.0 < fVar10) {
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar10;
    *(float *)(param_1 + 0x4c4) = fVar10 + *(float *)(param_1 + 0x4c4);
  }
  iVar7 = FUN_009f8b40();
  iVar7 = hkpAllRayHitCollector::hkpAllRayHitCollector_6
                    (&pfStack_1b8,0,pfVar1,param_1 + 0x4b0,iVar7 << 0x10 | 0x1d);
  if (iVar7 != 0) {
    fVar2 = *(float *)(iVar6 + 0x44) + 1.8;
    fVar3 = *(float *)(param_1 + 0x4c4) - fStack_1b4;
    fVar10 = *(float *)(param_1 + 0x4c8) - (float)ppfStack_1b0;
    fVar5 = (SQRT((*pfVar1 - (float)pfStack_1b8) * (*pfVar1 - (float)pfStack_1b8) + fVar3 * fVar3 +
                  fVar10 * fVar10) / *(float *)(param_1 + 0x4f4)) * 0.8;
    fStack_130 = (float)ppfStack_1b0 - *(float *)(iVar6 + 0x48);
    fStack_138 = ((float)pfStack_1b8 - *(float *)(iVar6 + 0x40)) * fVar5;
    fVar10 = (fStack_138 + *(float *)(iVar6 + 0x40)) - *(float *)(param_1 + 0x4b0);
    fVar4 = ((fStack_1b4 - fVar2) * fVar5 + fVar2) - *(float *)(param_1 + 0x4b4);
    fVar3 = (fVar5 * fStack_130 + *(float *)(iVar6 + 0x48)) - *(float *)(param_1 + 0x4b8);
    fVar2 = (fVar5 * ((float)ppfStack_1ac - *(float *)(iVar6 + 0x4c)) + *(float *)(iVar6 + 0x4c)) -
            *(float *)(param_1 + 0x4bc);
    *(float *)(param_1 + 0x4b0) = fVar10 + *(float *)(param_1 + 0x4b0);
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar4;
    *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fVar3;
    *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4bc) + fVar2;
    *pfVar1 = fVar10 + *pfVar1;
    *(float *)(param_1 + 0x4c4) = fVar4 + *(float *)(param_1 + 0x4c4);
    *(float *)(param_1 + 0x4c8) = fVar3 + *(float *)(param_1 + 0x4c8);
    *(float *)(param_1 + 0x4cc) = fVar2 + *(float *)(param_1 + 0x4cc);
  }
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4b0) =
       (float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)*(float *)(param_1 + 0x460)) * fVar9
              + (float10)*(float *)(param_1 + 0x460));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4b4) =
       (float)(((float10)*(float *)(param_1 + 0x4b4) - (float10)*(float *)(param_1 + 0x464)) * fVar9
              + (float10)*(float *)(param_1 + 0x464));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4b8) =
       (float)(((float10)*(float *)(param_1 + 0x4b8) - (float10)*(float *)(param_1 + 0x468)) * fVar9
              + (float10)*(float *)(param_1 + 0x468));
  fVar9 = (float10)FUN_00fdc1f0();
  *pfVar1 = (float)(((float10)*pfVar1 - (float10)*(float *)(param_1 + 0x470)) * fVar9 +
                   (float10)*(float *)(param_1 + 0x470));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c4) =
       (float)(((float10)*(float *)(param_1 + 0x4c4) - (float10)*(float *)(param_1 + 0x474)) * fVar9
              + (float10)*(float *)(param_1 + 0x474));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c8) =
       (float)(((float10)*(float *)(param_1 + 0x4c8) - (float10)*(float *)(param_1 + 0x478)) * fVar9
              + (float10)*(float *)(param_1 + 0x478));
  return;
}

// 00DC92A0  FUN_00dc92a0  size=1228  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00dc92a0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_150;
  int iStack_14c;
  float local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float local_128;
  float fStack_124;
  undefined1 auStack_120 [4];
  float fStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  
  iVar3 = FUN_00da9260();
  if (iVar3 == 0) {
    uVar4 = lib::StaticArray<EntityHandle,10>::StaticArray<EntityHandle,10>_2
                      (&local_140,3,*(undefined4 *)(PTR_DAT_018bc3a8 + 0xc),param_2);
    if (uVar4 == 0) {
      iVar3 = 0;
    }
    else if (uVar4 < 3) {
      iVar3 = uVar4 - 1;
    }
    else {
      iVar3 = 2;
    }
    local_148 = *(float *)(PTR_DAT_018bc3a8 + iVar3 * 8 + 0x10);
    local_128 = *(float *)(PTR_DAT_018bc3a8 + iVar3 * 8 + 0x14);
    if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc9341:
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) goto LAB_00dc9350;
      iStack_14c = 0;
    }
    else {
      piVar5 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar5 + 0x28))(1);
      if (iVar3 == 0) goto LAB_00dc9341;
LAB_00dc9350:
      iStack_14c = FUN_00a7c8a0();
    }
    puVar8 = PTR_DAT_018bc3a8 + 0x28;
    FUN_00db5960(auStack_120,iStack_14c);
    fVar11 = (float10)FUN_00dbef20(param_2,iStack_14c + 0x40,auStack_120,puVar8);
    if (((*(uint *)(param_3 + 0x108) & 0x10000000) == 0) && ((float10)local_148 < fVar11)) {
      local_148 = (float)fVar11;
    }
    fVar11 = (float10)FUN_00dbf2d0(param_2,&local_140,3,PTR_DAT_018bc3a8 + 0x38);
    fStack_124 = (float)fVar11;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * 0.995;
    }
    else {
      FUN_00dbf4d0(param_2);
      uStack_50 = 0;
      uStack_4c = 0x3f800000;
      uStack_48 = 0;
      uStack_44 = uStack_114;
      FUN_00db7750();
      uVar6 = FUN_00daefb0(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4b0));
      iVar3 = FUN_00da2980(uVar6,2);
      if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc945b:
        if (((*(float *)(*(int *)(param_2 + 0x378) + 0x894) <= 0.0) &&
            (*(int *)(*(int *)(param_2 + 0x378) + 0x764) != 0)) &&
           (iVar7 = FUN_008e2740(), iVar7 != 0)) {
          iVar7 = *(int *)(param_1 + 0x10);
          local_140 = *(undefined4 *)(iVar7 + 0x40);
          uStack_13c = *(undefined4 *)(iVar7 + 0x44);
          uStack_138 = *(undefined4 *)(iVar7 + 0x48);
          uStack_134 = *(undefined4 *)(iVar7 + 0x4c);
          FUN_00db5960(auStack_120,iVar7);
          fVar1 = *(float *)(iVar3 + 0x28);
          fVar2 = *(float *)(iVar3 + 0x24);
          fVar10 = (float10)FUN_00dbfe60(&local_140,auStack_120,0x3d4ccccd,0x3dcccccd);
          fVar10 = fVar10 + (float10)*(float *)(param_1 + 0x3c);
          *(float *)(param_1 + 0x3c) = (float)fVar10;
          fVar11 = (float10)0;
          if ((fVar11 <= fVar10) &&
             (fVar12 = (float10)(fVar1 - fVar2), fVar11 = fVar10, fVar12 < fVar10)) {
            fVar11 = fVar12;
          }
          *(float *)(param_1 + 0x3c) = (float)fVar11;
        }
      }
      else {
        piVar5 = (int *)FUN_00c13920();
        iVar7 = (**(code **)(*piVar5 + 0x28))(1);
        if (iVar7 == 0) goto LAB_00dc945b;
      }
      iVar7 = *(int *)(param_1 + 0x10);
      fVar1 = *(float *)(iVar3 + 0x24);
      local_140 = *(undefined4 *)(iVar7 + 0x40);
      uStack_13c = *(undefined4 *)(iVar7 + 0x44);
      uStack_138 = *(undefined4 *)(iVar7 + 0x48);
      uStack_134 = *(undefined4 *)(iVar7 + 0x4c);
      FUN_00db6e20(auStack_120,&local_140);
      iVar3 = FUN_00da2980(uVar6,10);
      iVar7 = FUN_00f98aa0();
      if ((float)iVar7 * *(float *)(iVar3 + 0x18) <= fStack_11c) {
        fVar2 = *(float *)(param_1 + 0x40) * 0.95;
      }
      else {
        fVar2 = (*(float *)(iVar3 + 0x1c) - *(float *)(param_1 + 0x40)) * 0.05 +
                *(float *)(param_1 + 0x40);
      }
      *(float *)(param_1 + 0x40) = fVar2;
      fVar10 = (float10)fStack_40 +
               (((float10)*(float *)(param_1 + 0x3c) + (float10)fVar1 +
                (float10)*(float *)(param_1 + 0x40)) - (float10)fStack_40);
      fVar11 = fVar10;
      if (((*(uint *)(param_3 + 0x108) & 0x2000000) != 0) &&
         (fVar11 = (float10)fStack_124, fVar11 < fVar10)) {
        fVar11 = fVar10;
      }
    }
    fVar10 = (float10)local_148;
    if ((fVar10 <= fVar11) && (fVar10 = fVar11, (float10)local_128 < fVar11)) {
      fVar10 = (float10)local_128;
    }
    fStack_150 = (float)fVar10;
    iVar3 = FUN_00db56a0();
    if ((iVar3 == 0) ||
       ((fVar11 = (float10)FUN_00ddba30(*(float *)(iStack_14c + 0x94) - *(float *)(param_2 + 0x364))
        , fVar11 <= (float10)1.5707964 && ((float10)-1.5707964 <= fVar11)))) {
      fVar11 = (float10)fStack_150;
    }
    else {
      fVar11 = (float10)fcos(fVar11);
      fVar11 = (float10)fStack_150 - fVar11;
      fStack_150 = (float)fVar11;
    }
    if ((float10)local_148 <= fVar11) {
      if ((float10)local_128 < fVar11) {
        fStack_150 = local_128;
        fVar11 = (float10)local_128;
      }
    }
    else {
      fStack_150 = local_148;
      fVar11 = (float10)local_148;
    }
    if ((*(uint *)(param_3 + 0x108) >> 0x1d & 1) != 0) {
      fVar11 = (float10)FUN_00dbb300(*(float *)(param_2 + 0x4f4),(float)fVar11,0);
      fStack_150 = (float)fVar11;
      if ((*(float *)(param_3 + 0x188) < *(float *)(param_3 + 0x18c) ==
           (*(float *)(param_3 + 0x188) == *(float *)(param_3 + 0x18c))) &&
         (((*(uint *)(param_3 + 0xfc) & 0x40000000) != 0 ||
          ((*(uint *)(param_3 + 0x80) & 0x40000000) != 0)))) {
        fVar10 = fVar11 - (float10)*(float *)(param_2 + 0x4f4);
        goto LAB_00dc9753;
      }
    }
    if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dc9715:
      if ((*(int *)(param_2 + 0x378) == 0) || (*(int *)(*(int *)(param_2 + 0x378) + 0xb78) == 0))
      goto LAB_00dc9728;
    }
    else {
      piVar5 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar5 + 0x28))(1);
      fVar11 = (float10)fStack_150;
      if (iVar3 == 0) goto LAB_00dc9715;
LAB_00dc9728:
      if (fVar11 < (float10)*(float *)(param_2 + 0x4f4)) {
        fVar10 = (float10)0.01;
        goto LAB_00dc9745;
      }
    }
    fVar10 = (float10)0.05;
  }
  else {
    fVar10 = (float10)*(float *)(param_2 + 0x8d4) * (float10)_DAT_01be942c;
    fVar11 = (float10)*(float *)(param_2 + 0x8d8);
  }
LAB_00dc9745:
  fVar10 = (fVar11 - (float10)*(float *)(param_2 + 0x4f4)) * fVar10;
LAB_00dc9753:
  pfVar9 = (float *)(param_2 + 0x4f4);
  *pfVar9 = (float)(fVar10 + (float10)*pfVar9);
  FUN_00da5cd0(pfVar9);
  return;
}

// 00DC98B0  FUN_00dc98b0  size=3717  [callgraph]
void __fastcall FUN_00dc98b0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float *pfStack_1b8;
  float fStack_1b4;
  float **ppfStack_1b0;
  float **ppfStack_1ac;
  float **ppfStack_1a8;
  float *pfStack_1a4;
  float *pfStack_1a0;
  float *pfStack_19c;
  float *pfStack_198;
  float *pfStack_194;
  float *pfStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  undefined *puStack_184;
  float fVar10;
  float *pfStack_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float afStack_160 [2];
  float local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_130;
  undefined1 auStack_12c [8];
  float *pfStack_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int local_104;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float afStack_d0 [3];
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  puStack_184 = (undefined *)0xdc98cc;
  iVar6 = FUN_00a81330();
  if (iVar6 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc98db;
  iVar6 = FUN_00a7c8a0();
  if (iVar6 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc98f0;
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc9902;
  iVar7 = FUN_00a81330();
  if (iVar7 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc9911;
  iVar7 = FUN_00a7c8a0();
  if (iVar7 == 0) {
    return;
  }
  puStack_184 = (undefined *)0xdc9926;
  local_104 = iVar7;
  FUN_00a8cab0();
  puStack_184 = (undefined *)0xdc992d;
  FUN_00a8cab0();
  local_e0 = *(float *)(iVar6 + 0x40);
  puStack_184 = &DAT_016c3080;
  local_ac = *(float *)(iVar6 + 0x44);
  pfStack_188 = (float *)0x1e;
  pfStack_18c = &local_e0;
  local_d8 = *(undefined4 *)(iVar6 + 0x48);
  pfStack_190 = &local_c0;
  local_d4 = *(undefined4 *)(iVar6 + 0x4c);
  pfStack_194 = (float *)0x0;
  pfStack_198 = (float *)0x0;
  pfStack_19c = (float *)0x0;
  pfStack_1a0 = &local_60;
  local_bc = local_ac + 1.5;
  local_dc = local_ac - 2.5;
  pfStack_1a4 = (float *)0xdc99f5;
  local_c0 = local_e0;
  local_b8 = (float)local_d8;
  local_b4 = (float)local_d4;
  local_b0 = local_e0;
  local_a8 = local_d8;
  local_a4 = local_d4;
  local_60 = local_e0;
  local_5c = local_ac;
  local_58 = local_d8;
  local_54 = local_d4;
  RayCastSingleHitWork::RayCastSingleHitWork_4();
  puStack_184 = &DAT_016c3080;
  local_dc = local_dc - 20.0;
  pfStack_188 = (float *)0x1e;
  pfStack_18c = &local_e0;
  pfStack_190 = &local_c0;
  pfStack_194 = (float *)0x0;
  pfStack_198 = (float *)0x0;
  pfStack_19c = (float *)0x0;
  pfStack_1a0 = &local_b0;
  pfStack_1a4 = (float *)0xdc9a38;
  RayCastSingleHitWork::RayCastSingleHitWork_4();
  fVar10 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar2 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar10 = SQRT(fVar2 * fVar2 + fVar10 * fVar10);
  local_158 = 0.14;
  if (fVar10 < 50.0) {
    local_158 = 0.3;
  }
  if (fVar10 < 30.0) {
    local_158 = 0.12;
  }
  if (fVar10 < 20.0) {
    local_158 = 0.02;
  }
  if (fVar10 < 14.0) {
    local_158 = 0.0;
  }
  local_158 = local_158 + local_158;
  puStack_184 = (undefined *)0xdc9abd;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 4) {
    local_158 = 0.2;
  }
  puStack_184 = (undefined *)0xdc9ad3;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 5) {
    local_158 = 0.2;
  }
  puStack_184 = (undefined *)0xdc9ae9;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 6) {
    local_158 = 0.2;
  }
  puStack_184 = (undefined *)0xdc9aff;
  iVar8 = FUN_00a8cab0();
  if (iVar8 == 0x1d) {
    puStack_184 = (undefined *)0xdc9b0b;
    iVar8 = FUN_00a8cac0();
    if (iVar8 == 8) {
      local_158 = 0.2;
    }
  }
  local_170 = *(float *)(iVar7 + 0x40);
  puStack_184 = (undefined *)(iVar7 + 0x10);
  local_16c = *(float *)(iVar7 + 0x44);
  pfStack_188 = &local_120;
  local_168 = *(float *)(iVar7 + 0x48);
  pfStack_18c = &local_170;
  local_164 = *(undefined4 *)(iVar7 + 0x4c);
  local_120 = 0.0;
  local_11c = 0.0;
  local_118 = 10.0;
  pfStack_190 = (float *)0xdc9b5d;
  D3DXVec3TransformNormal();
  pfStack_190 = (float *)(param_1 + 0x460);
  pfStack_194 = (float *)&stack0xfffffe84;
  pfStack_198 = afStack_160;
  pfStack_19c = (float *)&stack0xfffffe80;
  pfStack_174 = (float *)(*(float *)(iVar7 + 0x48) + (float)pfStack_174);
  afStack_160[0] = *(float *)(param_1 + 0x364);
  pfStack_1a0 = (float *)0xdc9bad;
  thunk_FUN_00dde510();
  pfStack_190 = (float *)(afStack_160[0] - *(float *)(param_1 + 0x794));
  pfStack_194 = (float *)0xdc9bd0;
  fVar9 = (float10)FUN_00ddba30();
  fStack_140 = (float)fVar9;
  if (ABS(fVar9) <= (float10)1e-05) {
    fVar9 = (float10)0;
  }
  else {
    pfStack_190 = (float *)0xdc9bf5;
    fVar9 = (float10)FUN_00fdc1f0();
    fVar9 = fVar9 * (float10)fStack_140;
  }
  pfStack_190 = (float *)auStack_12c;
  *(float *)(param_1 + 0x78c) = (float)fVar9;
  pfStack_194 = (float *)0xdc9c0f;
  iVar8 = FUN_00aed1d0();
  pfStack_198 = afStack_160;
  pfStack_19c = (float *)&stack0xfffffe80;
  pfStack_174 = *(float **)(iVar8 + 8);
  local_170 = *(float *)(iVar8 + 0xc);
  pfStack_190 = (float *)(param_1 + 0x460);
  fVar10 = *(float *)(param_1 + 0x360);
  pfStack_194 = (float *)&stack0xfffffe84;
  afStack_160[0] = *(float *)(param_1 + 0x364);
  pfStack_1a0 = (float *)0xdc9c59;
  thunk_FUN_00dde510();
  local_164 = 0x3dcccccd;
  fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = *(float *)(iVar6 + 0x44) + 5.0;
  if (fVar3 < *(float *)(iVar7 + 0x44) != (fVar3 == *(float *)(iVar7 + 0x44))) {
    local_164 = 0x3e99999a;
  }
  if (fVar2 < 30.0) {
    local_164 = 0x3da3d70a;
  }
  if (fVar2 < 20.0) {
    local_164 = 0x3d75c28f;
  }
  if (fVar2 < 14.0) {
    local_164 = 0x3d23d70a;
  }
  pfStack_190 = (float *)(fVar10 * -1.0 - *(float *)(param_1 + 0x790));
  pfStack_194 = (float *)0xdc9cff;
  fVar9 = (float10)FUN_00ddba30();
  fStack_140 = (float)fVar9;
  pfStack_190 = (float *)0xdc9d17;
  fVar9 = (float10)FUN_00fdc1f0();
  fVar9 = (float10)*(float *)(param_1 + 0x780) + (float10)*(float *)(param_1 + 0x778) +
          (float10)*(float *)(param_1 + 0x788) +
          fVar9 * (float10)fStack_140 + (float10)*(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = (float)fVar9;
  fVar9 = fVar9 + (float10)*(float *)(param_1 + 0x7e0);
  if (fVar9 < (float10)-1.3962634) {
    fVar9 = (float10)-1.3962634;
  }
  pfStack_190 = (float *)(float)fVar9;
  pfStack_194 = (float *)0xdc9d5f;
  fVar9 = (float10)FUN_00ddba30();
  *(float *)(param_1 + 0x360) = (float)fVar9;
  pfStack_190 = (float *)(*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                          *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
  *(float **)(param_1 + 0x794) = pfStack_190;
  pfStack_194 = (float *)0xdc9d8b;
  fVar9 = (float10)FUN_00ddba30();
  pfStack_194 = *(float **)(param_1 + 0x1f0);
  *(float *)(param_1 + 0x364) = (float)fVar9;
  local_dc = 0.0;
  pfStack_198 = (float *)(param_1 + 0x360);
  local_d8 = 0x3f800000;
  pfStack_19c = &local_5c;
  local_d4 = 0;
  pfStack_1a0 = (float *)0xdc9dc5;
  FUN_00ddc1d0();
  pfStack_190 = &local_5c;
  pfStack_198 = &local_dc;
  pfStack_19c = (float *)0xdc9de0;
  pfStack_194 = pfStack_198;
  D3DXVec3TransformNormal();
  pfStack_19c = *(float **)(param_1 + 0x1f0);
  local_118 = 0.0;
  uStack_114 = 0;
  pfStack_1a0 = (float *)(param_1 + 0x360);
  uStack_110 = 0x3f800000;
  pfStack_1a4 = (float *)auStack_68;
  ppfStack_1a8 = (float **)0xdc9e14;
  FUN_00ddc1d0();
  pfStack_19c = (float *)auStack_68;
  pfStack_1a4 = &local_118;
  ppfStack_1a8 = (float **)0xdc9e2f;
  pfStack_1a0 = pfStack_1a4;
  D3DXVec3TransformNormal();
  *(undefined4 *)(param_1 + 0x7e4) = 0xbfa66666;
  *(undefined4 *)(param_1 + 0x7e8) = 0x3f800000;
  pfStack_198 = (float *)0x40600000;
  fVar10 = 0.8;
  fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (!NAN(fVar2) && 35.0 < fVar2 != (fVar2 == 35.0)) {
    fVar2 = (fVar2 - 35.0) * 0.1 + 1.0;
    *(float *)(param_1 + 0x7e8) = fVar2;
    if (!NAN(fVar2) && 1.4 < fVar2 != (fVar2 == 1.4)) {
      *(undefined4 *)(param_1 + 0x7e8) = 0x3fb33333;
    }
  }
  fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar6 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (14.0 <= fVar2) {
    if (20.0 <= fVar2) goto LAB_00dc9f48;
    pfStack_198 = (float *)((20.0 - fVar2) * 0.2 + 3.5);
    fVar2 = 4.5;
  }
  else {
    pfStack_198 = (float *)((14.0 - fVar2) * 0.3 + (20.0 - fVar2) * 0.2 + 3.5);
    fVar2 = 5.5;
  }
  if (fVar2 < (float)pfStack_198) {
    pfStack_198 = (float *)fVar2;
  }
LAB_00dc9f48:
  if (*(float *)(param_1 + 0x360) <= -0.34906584) {
    fVar10 = (*(float *)(param_1 + 0x360) * 57.29578 + 20.0) * 0.1;
    fVar2 = *(float *)(param_1 + 0x7e8) - fVar10;
    *(float *)(param_1 + 0x7e8) = fVar2;
    if (1.8 <= fVar2) {
      *(undefined4 *)(param_1 + 0x7e8) = 0x3fe66666;
    }
    fVar2 = -1.3 - fVar10;
    *(float *)(param_1 + 0x7e4) = fVar2;
    if (!NAN(fVar2) && -0.3 < fVar2 != (fVar2 == -0.3)) {
      *(undefined4 *)(param_1 + 0x7e4) = 0xbe99999a;
    }
    pfStack_198 = (float *)(fVar10 + (float)pfStack_198);
    if ((float)pfStack_198 <= 0.6) {
      pfStack_198 = (float *)0x3f19999a;
    }
    fVar10 = fVar10 + 0.8;
    if (fVar10 <= 0.4) {
      fVar10 = 0.4;
    }
  }
  pfStack_194 = (float *)(local_11c * fStack_f0 - local_120 * fStack_ec);
  pfStack_190 = (float *)(fStack_ec * (float)pfStack_124 - local_11c * fStack_f4);
  pfStack_18c = (float *)(local_120 * fStack_f4 - fStack_f0 * (float)pfStack_124);
  fVar2 = (float)pfStack_18c * (float)pfStack_18c +
          (float)pfStack_194 * (float)pfStack_194 + (float)pfStack_190 * (float)pfStack_190;
  pfStack_174 = pfStack_194;
  local_170 = (float)pfStack_190;
  local_16c = (float)pfStack_18c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    ppfStack_1ac = &pfStack_174;
    ppfStack_1b0 = (float **)0xdca0cc;
    ppfStack_1a8 = ppfStack_1ac;
    FUN_00ddf460();
  }
  else {
    ppfStack_1a8 = (float **)&DAT_0163d0ac;
    ppfStack_1ac = (float **)0xdca0ef;
    FUN_00dd5650();
    local_16c = 0.0;
    local_170 = 1.0;
    pfStack_174 = (float *)0x0;
  }
  fVar2 = *(float *)(param_1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  pfStack_194 = (float *)(fVar2 * (float)pfStack_174);
  pfStack_18c = (float *)(fVar2 * local_16c);
  pfStack_190 = (float *)(fVar2 * local_170 + *(float *)(param_1 + 0x7e8));
  pfStack_174 = pfStack_124;
  local_16c = local_11c;
  local_168 = local_118;
  local_170 = 0.0;
  fVar2 = (float)pfStack_124 * (float)pfStack_124 + local_11c * local_11c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    ppfStack_1ac = &pfStack_174;
    ppfStack_1b0 = (float **)0xdca193;
    ppfStack_1a8 = ppfStack_1ac;
    FUN_00ddf460();
  }
  else {
    ppfStack_1a8 = (float **)&DAT_0163d0ac;
    ppfStack_1ac = (float **)0xdca1b4;
    FUN_00dd5650();
    local_16c = 0.0;
    local_170 = 1.0;
    pfStack_174 = (float *)0x0;
  }
  pfStack_174 = (float *)((float)pfStack_174 * 0.0);
  pfVar1 = (float *)(param_1 + 0x4c0);
  local_170 = local_170 * 0.0;
  local_16c = local_16c * 0.0;
  local_168 = local_168 * 0.0;
  fVar2 = *(float *)(iVar6 + 0x40);
  fVar3 = *(float *)(iVar6 + 0x44);
  fVar4 = *(float *)(iVar6 + 0x48);
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  pfStack_194 = (float *)((float)pfStack_194 + (float)pfStack_174 + fVar2);
  pfStack_190 = (float *)(fVar3 + local_170 + (float)pfStack_190);
  pfStack_18c = (float *)(local_16c + (float)pfStack_18c + fVar4);
  ppfStack_1a8 = (float **)0xdca23d;
  fVar9 = (float10)FUN_00fdc1f0();
  *pfVar1 = (float)(((float10)(float)pfStack_194 - (float10)*pfVar1) * fVar9 + (float10)*pfVar1);
  ppfStack_1a8 = (float **)0xdca256;
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c4) =
       (float)(((float10)(float)pfStack_190 - (float10)*(float *)(param_1 + 0x4c4)) * fVar9 +
              (float10)*(float *)(param_1 + 0x4c4));
  ppfStack_1a8 = (float **)0xdca27b;
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c8) =
       (float)(((float10)(float)pfStack_18c - (float10)*(float *)(param_1 + 0x4c8)) * fVar9 +
              (float10)*(float *)(param_1 + 0x4c8));
  pfStack_194 = *(float **)(iVar6 + 0x40);
  pfStack_18c = *(float **)(iVar6 + 0x48);
  pfStack_188 = *(float **)(iVar6 + 0x4c);
  pfStack_190 = (float *)(*(float *)(iVar6 + 0x44) + 1.8);
  ppfStack_1a8 = (float **)0xdca2be;
  iVar7 = FUN_009f8b40();
  ppfStack_1a8 = (float **)(iVar7 << 0x10 | 0x1d);
  ppfStack_1b0 = &pfStack_194;
  fStack_1b4 = 0.0;
  pfStack_1b8 = &fStack_144;
  ppfStack_1ac = (float **)pfVar1;
  iVar7 = hkpAllRayHitCollector::hkpAllRayHitCollector_6();
  if (iVar7 != 0) {
    pfStack_18c = (float *)(((float)pfStack_18c - fStack_13c) * 0.1);
    *pfVar1 = fStack_144 + ((float)pfStack_194 - fStack_144) * 0.1;
    *(float *)(param_1 + 0x4c4) = fStack_140 + ((float)pfStack_190 - fStack_140) * 0.1;
    *(float *)(param_1 + 0x4c8) = fStack_13c + (float)pfStack_18c;
    *(float *)(param_1 + 0x4cc) = ((float)pfStack_188 - fStack_138) * 0.1 + fStack_138;
    fStack_138 = (float)pfStack_188 - fStack_138;
  }
  ppfStack_1a8 = (float **)0x5;
  *(float **)(param_1 + 0x4f4) = pfStack_198;
  ppfStack_1ac = (float **)&uStack_114;
  uStack_154 = 0;
  ppfStack_1b0 = (float **)auStack_74;
  uStack_150 = 0;
  fStack_14c = -(float)pfStack_198;
  uStack_114 = *(undefined4 *)(param_1 + 0x360);
  uStack_110 = *(undefined4 *)(param_1 + 0x364);
  uStack_10c = *(undefined4 *)(param_1 + 0x368);
  uStack_108 = *(undefined4 *)(param_1 + 0x36c);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0.0;
  local_b4 = 0.0;
  local_b8 = 0.0;
  local_bc = 0.0;
  local_c0 = 0.0;
  uStack_88 = 0x3f800000;
  uStack_9c = 0x3f800000;
  local_b0 = 1.0;
  uStack_c4 = 0x3f800000;
  fStack_1b4 = 2.0262682e-38;
  thunk_FUN_00ddc1d0();
  ppfStack_1b0 = (float **)&uStack_c4;
  ppfStack_1ac = (float **)auStack_74;
  fStack_1b4 = 2.026272e-38;
  ppfStack_1a8 = ppfStack_1b0;
  D3DXMatrixMultiply();
  fStack_1b4 = (float)(param_1 + 0x390);
  pfStack_1b8 = afStack_d0;
  D3DXMatrixMultiply(pfStack_1b8);
  D3DXVec3TransformNormal(&local_16c,&local_16c,&local_dc);
  pfStack_174 = (float *)(*(float *)(param_1 + 0x4c4) + local_b4 + (float)pfStack_174);
  local_170 = *(float *)(param_1 + 0x4c8) + local_b0 + local_170;
  local_16c = *(float *)(param_1 + 0x4cc) + local_16c;
  *(float *)(param_1 + 0x4bc) = local_16c;
  *(float *)(param_1 + 0x4b0) = fVar10 + local_b8 + *pfVar1;
  *(float **)(param_1 + 0x4b4) = pfStack_174;
  *(float *)(param_1 + 0x4b8) = local_170;
  fVar10 = (fStack_f4 + (float)pfStack_19c) - *(float *)(param_1 + 0x4b4);
  if (0.0 < fVar10) {
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar10;
    *(float *)(param_1 + 0x4c4) = fVar10 + *(float *)(param_1 + 0x4c4);
  }
  iVar7 = FUN_009f8b40();
  iVar7 = hkpAllRayHitCollector::hkpAllRayHitCollector_6
                    (&pfStack_1b8,0,pfVar1,param_1 + 0x4b0,iVar7 << 0x10 | 0x1d);
  if (iVar7 != 0) {
    fVar2 = *(float *)(iVar6 + 0x44) + 1.8;
    fVar3 = *(float *)(param_1 + 0x4c4) - fStack_1b4;
    fVar10 = *(float *)(param_1 + 0x4c8) - (float)ppfStack_1b0;
    fVar5 = (SQRT((*pfVar1 - (float)pfStack_1b8) * (*pfVar1 - (float)pfStack_1b8) + fVar3 * fVar3 +
                  fVar10 * fVar10) / *(float *)(param_1 + 0x4f4)) * 0.8;
    fStack_130 = (float)ppfStack_1b0 - *(float *)(iVar6 + 0x48);
    fStack_138 = ((float)pfStack_1b8 - *(float *)(iVar6 + 0x40)) * fVar5;
    fVar10 = (fStack_138 + *(float *)(iVar6 + 0x40)) - *(float *)(param_1 + 0x4b0);
    fVar4 = ((fStack_1b4 - fVar2) * fVar5 + fVar2) - *(float *)(param_1 + 0x4b4);
    fVar3 = (fVar5 * fStack_130 + *(float *)(iVar6 + 0x48)) - *(float *)(param_1 + 0x4b8);
    fVar2 = (fVar5 * ((float)ppfStack_1ac - *(float *)(iVar6 + 0x4c)) + *(float *)(iVar6 + 0x4c)) -
            *(float *)(param_1 + 0x4bc);
    *(float *)(param_1 + 0x4b0) = fVar10 + *(float *)(param_1 + 0x4b0);
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar4;
    *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fVar3;
    *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4bc) + fVar2;
    *pfVar1 = fVar10 + *pfVar1;
    *(float *)(param_1 + 0x4c4) = fVar4 + *(float *)(param_1 + 0x4c4);
    *(float *)(param_1 + 0x4c8) = fVar3 + *(float *)(param_1 + 0x4c8);
    *(float *)(param_1 + 0x4cc) = fVar2 + *(float *)(param_1 + 0x4cc);
  }
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4b0) =
       (float)(((float10)*(float *)(param_1 + 0x4b0) - (float10)*(float *)(param_1 + 0x460)) * fVar9
              + (float10)*(float *)(param_1 + 0x460));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4b4) =
       (float)(((float10)*(float *)(param_1 + 0x4b4) - (float10)*(float *)(param_1 + 0x464)) * fVar9
              + (float10)*(float *)(param_1 + 0x464));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4b8) =
       (float)(((float10)*(float *)(param_1 + 0x4b8) - (float10)*(float *)(param_1 + 0x468)) * fVar9
              + (float10)*(float *)(param_1 + 0x468));
  fVar9 = (float10)FUN_00fdc1f0();
  *pfVar1 = (float)(((float10)*pfVar1 - (float10)*(float *)(param_1 + 0x470)) * fVar9 +
                   (float10)*(float *)(param_1 + 0x470));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c4) =
       (float)(((float10)*(float *)(param_1 + 0x4c4) - (float10)*(float *)(param_1 + 0x474)) * fVar9
              + (float10)*(float *)(param_1 + 0x474));
  fVar9 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x4c8) =
       (float)(((float10)*(float *)(param_1 + 0x4c8) - (float10)*(float *)(param_1 + 0x478)) * fVar9
              + (float10)*(float *)(param_1 + 0x478));
  return;
}

// 00DCA740  FUN_00dca740  size=115  [callgraph]
bool FUN_00dca740(float *param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if ((DAT_01bea060 & 0x800) != 0) {
    return false;
  }
  local_30 = *param_1 + *param_3;
  local_2c = param_1[1] + param_3[1];
  local_28 = param_1[2] + param_3[2];
  local_24 = param_1[3] + param_3[3];
  iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (param_4,local_20,param_1,&local_30,param_2);
  return iVar1 != 0;
}

// 00DCA7C0  FUN_00dca7c0  size=1372  [callgraph]
undefined4 __fastcall FUN_00dca7c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float fVar5;
  float *pfStack_a4;
  float fStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [64];
  
  if (((*(int *)(param_1 + 0x920) != 0) && (*(int *)(param_1 + 0x924) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x6e8) + 0x155) != '\x04')) {
    local_80 = 0.0;
    local_7c = 1.4;
    local_78 = 0.0;
    local_60 = 0;
    local_5c = 0x3f000000;
    local_58 = 0;
    local_70 = 0.0;
    local_6c = 1.8;
    local_68 = 0.0;
    fStack_94 = 2.0264162e-38;
    fVar3 = (float)FUN_00da8620();
    puStack_9c = &local_60;
    fStack_a0 = 2.0264184e-38;
    puStack_98 = puStack_9c;
    fStack_94 = fVar3;
    D3DXVec3TransformNormal();
    local_6c = *(float *)((int)fVar3 + 0x30) + local_6c;
    pfStack_a4 = &local_7c;
    local_68 = *(float *)((int)fVar3 + 0x34) + local_68;
    fStack_64 = *(float *)((int)fVar3 + 0x38) + fStack_64;
    fStack_a0 = fVar3;
    D3DXVec3TransformNormal(pfStack_a4);
    fVar5 = *(float *)((int)fVar3 + 0x30);
    fStack_84 = fStack_84 + *(float *)((int)fVar3 + 0x34);
    local_80 = local_80 + *(float *)((int)fVar3 + 0x38);
    D3DXVec3TransformNormal(&puStack_98,&puStack_98,fVar3);
    pfStack_a4 = (float *)(*(float *)((int)fVar3 + 0x30) + (float)pfStack_a4);
    fStack_a0 = *(float *)((int)fVar3 + 0x34) + fStack_a0;
    puStack_9c = (undefined4 *)(*(float *)((int)fVar3 + 0x38) + (float)puStack_9c);
    iVar4 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                      (&fStack_74,0,&fStack_84,&fStack_94,0x3e19999a);
    if (iVar4 != 0) {
      pfStack_a4 = (float *)((fStack_74 - fStack_94) + (float)pfStack_a4);
      fStack_a0 = (local_70 - unaff_EDI) + fStack_a0;
      puStack_9c = (undefined4 *)((local_6c - unaff_ESI) + (float)puStack_9c);
      puStack_98 = (undefined4 *)((local_68 - (fVar5 + fStack_88)) + (float)puStack_98);
    }
    FUN_00db9090(&fStack_74);
    fStack_84 = fStack_74 + *(float *)(param_1 + 0x460);
    local_80 = local_70 + *(float *)(param_1 + 0x464);
    local_7c = local_6c + *(float *)(param_1 + 0x468);
    local_78 = *(float *)(param_1 + 0x46c) + local_68;
    fStack_54 = *(float *)(param_1 + 0x470) + fStack_74;
    fStack_50 = *(float *)(param_1 + 0x474) + local_70;
    fStack_4c = local_6c + *(float *)(param_1 + 0x478);
    fStack_48 = *(float *)(param_1 + 0x47c) + local_68;
    fVar5 = *(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x460);
    fVar1 = *(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x464);
    fVar3 = *(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x468);
    *(float *)(param_1 + 0x4a4) = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
    fVar5 = *(float *)(param_1 + 0x928);
    if (NAN(fVar5) || 0.0 < fVar5 == (fVar5 == 0.0)) {
      fVar5 = *(float *)(param_1 + 0x4a4);
    }
    else {
      fVar5 = *(float *)(param_1 + 0x928);
    }
    fStack_94 = fStack_84 - (float)pfStack_a4;
    fVar3 = local_80 - fStack_a0;
    fVar1 = local_7c - (float)puStack_9c;
    fVar2 = local_78 - (float)puStack_98;
    iVar4 = Camera::Math::safeNormalize(&fStack_94,&fStack_94);
    fStack_74 = fStack_94;
    if (iVar4 != 0) {
      fVar3 = fVar3 * fVar5;
      fVar1 = fVar1 * fVar5;
      fVar2 = fVar2 * fVar5;
      fStack_74 = fStack_94 * fVar5;
    }
    fStack_74 = fStack_74 + (float)pfStack_a4;
    local_70 = fVar3 + fStack_a0;
    local_6c = fVar1 + (float)puStack_9c;
    local_68 = fVar2 + (float)puStack_98;
    iVar4 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                      (auStack_44,&fStack_94,&pfStack_a4,&fStack_74,0x3e99999a);
    if ((iVar4 != 0) && (iVar4 = Camera::Math::safeNormalize(&fStack_94,&fStack_94), iVar4 != 0)) {
      FUN_00da6920(&fStack_74,auStack_44,&fStack_94,&pfStack_a4);
      FUN_00da6920(&fStack_64,auStack_44,&fStack_94,&fStack_84);
      fVar5 = (((float)puStack_9c - local_7c) * ((float)puStack_9c - local_7c) +
              (fStack_a0 - local_80) * (fStack_a0 - local_80) +
              ((float)pfStack_a4 - fStack_84) * ((float)pfStack_a4 - fStack_84)) -
              ((fStack_a0 - local_70) * (fStack_a0 - local_70) +
               ((float)pfStack_a4 - fStack_74) * ((float)pfStack_a4 - fStack_74) +
              ((float)puStack_9c - local_6c) * ((float)puStack_9c - local_6c));
      if (0.0 < fVar5) {
        fVar5 = SQRT(fVar5);
        fStack_94 = fStack_64 - fStack_74;
        iVar4 = Camera::Math::safeNormalize(&fStack_94,&fStack_94);
        if (iVar4 != 0) {
          fStack_94 = fStack_94 * fVar5 + fStack_74;
          hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&fStack_94,0,auStack_44,&fStack_94,0x3e99999a);
          fStack_94 = fStack_94 * 0.1 + fStack_84 * 0.9;
          fStack_64 = *(float *)(param_1 + 0x480);
          local_60 = *(undefined4 *)(param_1 + 0x484);
          local_5c = *(undefined4 *)(param_1 + 0x488);
          local_58 = *(undefined4 *)(param_1 + 0x48c);
          FUN_00db8f60(&fStack_94,&fStack_54,&fStack_64);
          FUN_00da9820(&fStack_54);
          *(float *)(param_1 + 0x364) = fStack_50;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00DCAD20  FUN_00dcad20  size=2657  [callgraph]
undefined4 __fastcall FUN_00dcad20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined1 *puStack_f4;
  float fStack_f0;
  float *pfStack_ec;
  float *pfStack_e8;
  float fStack_e4;
  float fVar7;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 *puStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcad50:
    fStack_e4 = 2.0265997e-38;
    iVar5 = FUN_00a81330();
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    fStack_e4 = 2.0265961e-38;
    piVar4 = (int *)FUN_00c13920();
    fStack_e4 = 1.4013e-45;
    pfStack_e8 = (float *)0xdcad4c;
    iVar5 = (**(code **)(*piVar4 + 0x28))();
    if (iVar5 == 0) goto LAB_00dcad50;
  }
  if (((DAT_01bea060 & 0x800) != 0) || (*(int *)(param_1 + 0x920) == 0)) {
    return 0;
  }
  fStack_b0 = 0.0;
  fStack_ac = 1.4;
  fStack_a8 = 0.0;
  fStack_a0 = 0.0;
  fStack_9c = 0.5;
  fStack_98 = 0.0;
  fStack_d0 = 0.0;
  fStack_cc = 1.8;
  fStack_c8 = 0.0;
  fStack_e4 = 2.0266143e-38;
  fVar6 = (float)FUN_00da8620();
  pfStack_ec = &fStack_a0;
  fStack_f0 = 2.0266166e-38;
  pfStack_e8 = pfStack_ec;
  fStack_e4 = fVar6;
  D3DXVec3TransformNormal();
  fStack_ac = *(float *)((int)fVar6 + 0x30) + fStack_ac;
  puStack_f4 = &stack0xffffff24;
  fStack_a8 = *(float *)((int)fVar6 + 0x34) + fStack_a8;
  fStack_a4 = *(float *)((int)fVar6 + 0x38) + fStack_a4;
  fStack_f0 = fVar6;
  D3DXVec3TransformNormal(puStack_f4);
  pfStack_e8 = (float *)(*(float *)((int)fVar6 + 0x30) + (float)pfStack_e8);
  fStack_e4 = *(float *)((int)fVar6 + 0x34) + fStack_e4;
  D3DXVec3TransformNormal(&fStack_c8,&fStack_c8,fVar6);
  fStack_d4 = *(float *)((int)fVar6 + 0x30) + fStack_d4;
  fStack_d0 = *(float *)((int)fVar6 + 0x34) + fStack_d0;
  fStack_cc = *(float *)((int)fVar6 + 0x38) + fStack_cc;
  iVar5 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&fStack_a4,0,&fStack_c4,&puStack_f4,0x3e19999a);
  if (iVar5 != 0) {
    fStack_d4 = (fStack_a4 - (float)puStack_f4) + fStack_d4;
    fStack_d0 = (fStack_a0 - fStack_f0) + fStack_d0;
    fStack_cc = (fStack_9c - (float)pfStack_ec) + fStack_cc;
    fStack_c8 = (fStack_98 - (float)pfStack_e8) + fStack_c8;
  }
  fStack_c4 = *(float *)(param_1 + 0x480);
  fStack_c0 = *(float *)(param_1 + 0x484);
  fStack_bc = *(float *)(param_1 + 0x488);
  uStack_b8 = *(undefined4 *)(param_1 + 0x48c);
  FUN_00db9090(&fStack_a4);
  puStack_84 = (undefined1 *)(*(float *)(param_1 + 0x470) + fStack_a4);
  fStack_80 = *(float *)(param_1 + 0x474) + fStack_a0;
  fStack_7c = *(float *)(param_1 + 0x478) + fStack_9c;
  fStack_78 = *(float *)(param_1 + 0x47c) + fStack_98;
  fStack_b4 = *(float *)(param_1 + 0x460) + fStack_a4;
  fStack_b0 = *(float *)(param_1 + 0x464) + fStack_a0;
  fStack_ac = *(float *)(param_1 + 0x468) + fStack_9c;
  fStack_a8 = *(float *)(param_1 + 0x46c) + fStack_98;
  puStack_f4 = (undefined1 *)(fStack_b4 - fStack_d4);
  fStack_f0 = fStack_b0 - fStack_d0;
  pfStack_ec = (float *)(fStack_ac - fStack_cc);
  pfStack_e8 = (float *)(fStack_a8 - fStack_c8);
  if ((((float)puStack_f4 == 0.0) && (fStack_f0 == 0.0)) && ((float)pfStack_ec == 0.0)) {
    return 0;
  }
  iVar5 = Camera::Math::safeNormalize(&puStack_f4,&puStack_f4);
  if (iVar5 == 0) {
    return 0;
  }
  fStack_a4 = (float)puStack_f4 * 0.5 + fStack_b4;
  fStack_a0 = fStack_f0 * 0.5 + fStack_b0;
  fStack_9c = (float)pfStack_ec * 0.5 + fStack_ac;
  fStack_98 = (float)pfStack_e8 * 0.5 + fStack_a8;
  iVar5 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&fStack_54,0,&fStack_d4,&fStack_a4,0x3e19999a);
  if (iVar5 == 0) {
    return 0;
  }
  fVar7 = SQRT(((float)puStack_84 - fStack_54) * ((float)puStack_84 - fStack_54) +
               (fStack_80 - fStack_50) * (fStack_80 - fStack_50) +
               (fStack_7c - fStack_4c) * (fStack_7c - fStack_4c));
  fStack_3c = (float)puStack_84 - fStack_b4;
  fStack_38 = fStack_80 - fStack_b0;
  fStack_40 = fStack_7c - fStack_ac;
  fVar6 = SQRT(fStack_3c * fStack_3c + fStack_38 * fStack_38 + fStack_40 * fStack_40);
  if ((fVar6 < fVar7 != (fVar6 == fVar7)) && (1.0 <= fVar7 - 0.5)) {
    return 0;
  }
  fStack_74 = fStack_d4 - (float)puStack_84;
  fStack_70 = fStack_d0 - fStack_80;
  fStack_6c = fStack_cc - fStack_7c;
  fStack_68 = fStack_c8 - fStack_78;
  if (((fStack_74 == 0.0) && (fStack_70 == 0.0)) && (fStack_6c == 0.0)) goto LAB_00dcb74b;
  fVar6 = fStack_6c * fStack_6c + fStack_70 * fStack_70 + fStack_74 * fStack_74;
  if (fVar6 < 0.0 == (fVar6 == 0.0)) {
    FUN_00ddf460(&fStack_74,&fStack_74);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_74 = 0.0;
    fStack_70 = 1.0;
    fStack_6c = 0.0;
  }
  fStack_90 = fStack_70 * 0.0 - fStack_6c;
  fStack_8c = fStack_6c * 0.0 - fStack_74 * 0.0;
  fStack_88 = fStack_74 - fStack_70 * 0.0;
  fVar6 = fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c;
  fStack_64 = fStack_90;
  fStack_60 = fStack_8c;
  fStack_5c = fStack_88;
  if (fVar6 < 0.0 == (fVar6 == 0.0)) {
    FUN_00ddf460(&fStack_64,&fStack_64);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_64 = 0.0;
    fStack_60 = 1.0;
    fStack_5c = 0.0;
  }
  fStack_e4 = fStack_3c;
  iVar5 = FUN_00da6880(&puStack_f4,&puStack_84,&fStack_64,&fStack_54,&fStack_e4);
  if (iVar5 == 0) goto LAB_00dcb74b;
  fStack_a4 = (float)puStack_f4 - fStack_d4;
  fStack_a0 = fStack_f0 - fStack_d0;
  fStack_9c = (float)pfStack_ec - fStack_cc;
  fStack_e4 = (float)puStack_f4 - fStack_54;
  fVar6 = (float)pfStack_ec - fStack_4c;
  fVar7 = 0.0;
  if ((fStack_e4 == 0.0) && (fVar6 == 0.0)) {
    fStack_e4 = (float)puStack_f4 - fStack_b4;
    fVar1 = fStack_f0 - fStack_b0;
    fVar6 = (float)pfStack_ec - fStack_ac;
    fVar2 = (float)pfStack_e8 - fStack_a8;
    fVar7 = fVar6 * fVar6 + fStack_e4 * fStack_e4 + fVar1 * fVar1;
    if (fVar7 < 0.0 == (fVar7 == 0.0)) {
      FUN_00ddf460(&fStack_e4,&fStack_e4);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_e4 = 0.0;
      fVar6 = 0.0;
      fVar1 = 1.0;
    }
    puStack_f4 = (undefined1 *)((float)puStack_f4 + fStack_e4 * 0.1);
    fStack_f0 = fVar1 * 0.1 + fStack_f0;
    pfStack_ec = (float *)(fVar6 * 0.1 + (float)pfStack_ec);
    pfStack_e8 = (float *)(fVar2 * 0.1 + (float)pfStack_e8);
    fVar7 = 0.0;
    fVar1 = fVar6 * fVar6 + fStack_e4 * fStack_e4;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_e4,&fStack_e4);
    }
    else {
LAB_00dcb54d:
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_e4 = 0.0;
      fVar7 = 1.0;
      fVar6 = 0.0;
    }
  }
  else {
    fVar1 = fVar6 * fVar6 + fStack_e4 * fStack_e4;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) goto LAB_00dcb54d;
    FUN_00ddf460(&fStack_e4,&fStack_e4);
  }
  fStack_b4 = fVar6 - fVar7 * 0.0;
  fStack_b0 = fStack_e4 * 0.0 - fVar6 * 0.0;
  fStack_ac = fVar7 * 0.0 - fStack_e4;
  fVar1 = fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0;
  fStack_90 = fStack_b4;
  fStack_8c = fStack_b0;
  fStack_88 = fStack_ac;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_b4,&fStack_b4);
    fVar1 = fStack_ac;
    fVar2 = fStack_b0;
    fVar3 = fStack_b4;
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar1 = 0.0;
    fVar2 = 1.0;
    fVar3 = 0.0;
  }
  fVar1 = fVar1 * fStack_9c * -1.0 - (fVar2 * fStack_a0 + fStack_a4 * fVar3);
  fVar6 = fStack_9c * fVar6 * -1.0 - (fStack_a0 * fVar7 + fStack_a4 * fStack_e4);
  if (fStack_c4 * fVar1 < 0.0 == (fStack_c4 * fVar1 == 0.0)) {
    if (ABS(fVar1) < ABS(fStack_c4)) {
      fStack_c4 = fVar1;
    }
  }
  else {
    fStack_c4 = 0.0;
  }
  if (fStack_c0 * fStack_a0 < 0.0 == (fStack_c0 * fStack_a0 == 0.0)) {
    if (ABS(fStack_a0) < ABS(fStack_c0)) {
      fStack_c0 = fStack_a0;
    }
  }
  else {
    fStack_c0 = 0.0;
  }
  fVar7 = 0.0;
  if ((fStack_bc * fVar6 < 0.0 != (fStack_bc * fVar6 == 0.0)) ||
     (fVar7 = fVar6, ABS(fVar6) < ABS(fStack_bc))) {
    fStack_bc = fVar7;
  }
  puStack_84 = puStack_f4;
  fStack_80 = fStack_f0;
  fStack_7c = (float)pfStack_ec;
  fStack_78 = (float)pfStack_e8;
LAB_00dcb74b:
  FUN_00db8f60(&fStack_54,&puStack_84,&fStack_c4);
  FUN_00da1280();
  return 1;
}

// 00DCB790  FUN_00dcb790  size=536  [callgraph]
bool __thiscall FUN_00dcb790(int param_1,undefined1 *param_2)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  undefined1 *puStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined1 *puStack_d4;
  float fStack_cc;
  float afStack_c8 [4];
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [88];
  
  local_b0 = 0;
  local_ac = 0;
  puStack_d4 = (undefined1 *)(param_1 + 0x390);
  local_a8 = -*(float *)(param_1 + 0x4a4);
  puStack_dc = &local_a0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_98 = 0;
  local_9c = 0;
  local_64 = 0x3f800000;
  local_78 = 0x3f800000;
  local_8c = 1.0;
  local_a0 = 0x3f800000;
  puStack_e0 = (undefined4 *)0xdcb80b;
  puStack_d8 = puStack_dc;
  D3DXMatrixMultiply();
  puStack_e0 = (undefined4 *)0x5;
  puStack_e4 = param_2;
  thunk_FUN_00ddc1d0(auStack_5c);
  puStack_e0 = &local_ac;
  puStack_e4 = auStack_5c;
  D3DXMatrixMultiply(puStack_e0);
  D3DXVec3TransformNormal(afStack_c8,afStack_c8,auStack_b8);
  puStack_e4 = (undefined1 *)(local_94 + (float)puStack_d4);
  puStack_e0 = (undefined4 *)(local_90 + unaff_ESI);
  puStack_dc = (undefined4 *)(local_8c + fStack_cc);
  puStack_d8 = (undefined4 *)afStack_c8[0];
  puStack_d4 = puStack_e4;
  if ((((float)puStack_e4 != 0.0) || ((float)puStack_e0 != 0.0)) || ((float)puStack_dc != 0.0)) {
    fVar1 = (float)puStack_dc * (float)puStack_dc +
            (float)puStack_e0 * (float)puStack_e0 + (float)puStack_e4 * (float)puStack_e4;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&puStack_e4,&puStack_e4);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      puStack_dc = (undefined4 *)0x0;
      puStack_e4 = (undefined1 *)0x0;
      puStack_e0 = (undefined4 *)0x3f800000;
    }
  }
  puStack_e4 = (undefined1 *)(*(float *)(param_1 + 0x4c0) + (float)puStack_e4 * 0.02);
  puStack_e0 = (undefined4 *)(*(float *)(param_1 + 0x4c4) + (float)puStack_e0 * 0.02);
  puStack_dc = (undefined4 *)(*(float *)(param_1 + 0x4c8) + (float)puStack_dc * 0.02);
  puStack_d8 = (undefined4 *)((float)puStack_d8 * 0.02 + *(float *)(param_1 + 0x4cc));
  iVar2 = FUN_00dca740(&puStack_e4,*(undefined4 *)(param_1 + 0x76c),&puStack_d4,&local_84);
  return iVar2 == 0;
}

// 00DCB9B0  FUN_00dcb9b0  size=824  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00dcb9b0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  fVar6 = (float10)fpatan((float10)*(float *)(param_2 + 0x4c0) -
                          (float10)*(float *)(param_2 + 0x4b0),
                          (float10)*(float *)(param_2 + 0x4c8) -
                          (float10)*(float *)(param_2 + 0x4b8));
  fVar1 = (float)fVar6;
  fVar7 = (float10)fpatan((float10)*(float *)(param_4 + 0x40) - (float10)*(float *)(param_2 + 0x4b0)
                          ,(float10)*(float *)(param_4 + 0x48) -
                           (float10)*(float *)(param_2 + 0x4b8));
  fVar7 = (float10)FUN_00ddba30((float)(fVar7 - fVar6));
  fVar6 = fVar7;
  if (((float10)0.2617994 < ABS(fVar7)) && (fVar6 = (float10)0.2617994, fVar7 <= (float10)0)) {
    fVar6 = (float10)-0.2617994;
  }
  fVar6 = (float10)FUN_00ddba30((float)((fVar7 - fVar6) + (float10)fVar1));
  fVar7 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fVar1));
  local_34 = (float)(fVar7 * (float10)0.03);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcba82:
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00dcba9c;
    }
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 == 0) goto LAB_00dcba82;
  }
  iVar3 = FUN_00a7c800();
LAB_00dcba9c:
  fVar7 = (float10)fpatan((float10)*(float *)(param_4 + 0x40) - (float10)*(float *)(iVar3 + 0x40),
                          (float10)*(float *)(param_4 + 0x48) - (float10)*(float *)(iVar3 + 0x48));
  fVar4 = (float10)FUN_00ddba30((float)(fVar7 - (float10)(float)fVar6));
  fVar7 = ABS(fVar4);
  if ((fVar7 < (float10)0.6981317) || ((float10)2.0943952 < fVar7)) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else if (((float10)0.87266463 < fVar7) && (fVar7 < (float10)1.9198622)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  fVar5 = (float10)0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    fVar6 = (float10)local_34;
  }
  else {
    if ((float10)1.5707964 <= fVar7) {
      if (fVar5 < fVar4 == (fVar5 == fVar4)) {
        fVar4 = (float10)-1.9198622 - fVar4;
      }
      else {
        fVar4 = (float10)1.9198622 - fVar4;
      }
    }
    else if (fVar5 < fVar4 == (fVar5 == fVar4)) {
      fVar4 = (float10)-0.87266463 - fVar4;
    }
    else {
      fVar4 = (float10)0.87266463 - fVar4;
    }
    fVar6 = (float10)FUN_00ddba30((float)((float10)(float)fVar6 - fVar4));
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fVar1));
    fVar6 = fVar6 * (float10)0.1;
    local_34 = (float)fVar6;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  fStack_2c = (float)fVar6;
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)*(float *)(param_2 + 0x364)));
  uStack_20 = 0;
  uStack_18 = 0;
  fStack_1c = (float)fVar6;
  iVar3 = FUN_00dcb790(&uStack_30);
  if ((iVar3 == 0) || (iVar3 = FUN_00dcb790(&uStack_20), iVar3 == 0)) {
    local_34 = 0.0;
  }
  *(float *)(param_2 + 0x78c) = local_34;
  if (*(float *)(param_2 + 0x784) == 0.0) {
    fVar1 = *(float *)(param_1 + 0x24) - _DAT_01be942c;
  }
  else {
    *(undefined4 *)(param_2 + 0x78c) = 0;
    fVar1 = 30.0;
  }
  *(float *)(param_1 + 0x24) = fVar1;
  if (0.0 < *(float *)(param_1 + 0x24)) {
    *(undefined4 *)(param_2 + 0x78c) = 0;
  }
  if (*(int *)(param_2 + 0x8cc) != 0) {
    *(undefined4 *)(param_2 + 0x78c) = 0;
  }
  if ((*(uint *)(param_3 + 0x108) & 0x2000000) == 0) {
    FUN_00da93f0(0);
    *(undefined4 *)(param_2 + 0x78c) = 0;
  }
  if (0.0 < *(float *)(param_2 + 0x7c4)) {
    fVar7 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x7c8) - *(float *)(param_2 + 0x364));
    fVar7 = fVar7 * (float10)_DAT_01be942c;
    fVar4 = (float10)_DAT_01be942c * (float10)8.0 * (float10)0.017453292;
    fVar6 = -fVar4;
    if ((fVar7 < -fVar4) || (fVar6 = fVar7, fVar7 <= fVar4)) {
      fVar4 = fVar6;
    }
    *(float *)(param_2 + 0x78c) = (float)fVar4;
    *(float *)(param_2 + 0x7c4) = *(float *)(param_2 + 0x7c4) - 1.0;
  }
  return;
}

// 00DCBCF0  FUN_00dcbcf0  size=640  [callgraph]
void __thiscall FUN_00dcbcf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78 [10];
  undefined1 auStack_50 [76];
  
  local_78[0] = 2.3561945;
  local_78[1] = 1.8325957;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  local_78[2] = 1.3089969;
  local_78[3] = 0.7853982;
  local_78[4] = 0.2617994;
  local_78[5] = -0.2617994;
  local_78[6] = -0.7853982;
  local_78[7] = -1.3089969;
  local_78[8] = -1.8325957;
  local_78[9] = -2.3561945;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x364);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcbd95:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dcbdb1;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dcbd95;
  }
  iVar2 = FUN_00a7c8a0();
LAB_00dcbdb1:
  if (*(int *)(param_2 + 0x6f8) == 0) {
    pfVar3 = (float *)(param_2 + 0x1c0);
  }
  else {
    pfVar3 = (float *)(*(int *)(param_2 + 0x6f8) + 0x40);
  }
  fVar6 = (float10)*pfVar3 - (float10)*(float *)(iVar2 + 0x40);
  fVar7 = (float10)pfVar3[2] - (float10)*(float *)(iVar2 + 0x48);
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  if (fVar8 < (float10)1.1920929e-07) {
    return;
  }
  fStack_84 = *(float *)(param_2 + 0x364);
  fVar6 = (float10)fpatan(-(fVar6 / fVar8),-(fVar7 / fVar8));
  fStack_80 = (float)fVar6;
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fStack_84));
  fStack_7c = (float)fVar6;
  fStack_a0 = *(float *)(iVar2 + 0x40);
  fStack_98 = *(float *)(iVar2 + 0x48);
  fStack_94 = *(float *)(iVar2 + 0x4c);
  uVar5 = 0;
  fStack_9c = *(float *)(iVar2 + 0x44) + 1.4;
  fStack_a4 = 3.1415927;
  do {
    uVar4 = uVar5;
    if (0.0 <= fStack_7c) {
      uVar4 = 9 - uVar5;
    }
    fVar6 = (float10)FUN_00ddba30(local_78[uVar4] + fStack_80);
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = -5.0;
    D3DXMatrixRotationY(auStack_50,(float)fVar6);
    D3DXVec3TransformNormal(&stack0xffffff38,&stack0xffffff38,local_78 + 8);
    fStack_c0 = fStack_c0 + fStack_a0;
    fStack_bc = fStack_bc + fStack_9c;
    fStack_b8 = fStack_b8 + fStack_98;
    fStack_b4 = fStack_b4 + fStack_94;
    fVar6 = (float10)FUN_00ddba30((float)fVar6 - fStack_84);
    if ((ABS(fVar6) <= (float10)fStack_a4) &&
       (iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                          (0,0,&fStack_a0,&fStack_c0,0x3f800000), iVar2 == 0)) {
      fVar7 = (float10)fpatan((float10)*(float *)(param_2 + 0x1c0) - (float10)fStack_c0,
                              (float10)*(float *)(param_2 + 0x1c8) - (float10)fStack_b8);
      *(float *)(param_1 + 0xc) = (float)fVar7;
      fStack_a4 = (float)ABS(fVar6);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 10);
  return;
}

// 00DCBF70  FUN_00dcbf70  size=975  [callgraph]
void __thiscall FUN_00dcbf70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float local_80 [12];
  undefined1 auStack_50 [76];
  
  local_80[0] = 0.5235988;
  local_80[1] = -0.5235988;
  local_80[2] = 0.0;
  local_80[3] = 1.0471976;
  local_80[4] = -1.0471976;
  local_80[5] = 1.5707964;
  local_80[6] = -1.5707964;
  local_80[7] = 2.0943952;
  local_80[8] = -2.0943952;
  local_80[9] = 2.6179938;
  local_80[10] = -2.6179938;
  local_80[0xb] = 3.1415927;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcc017:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dcc033;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dcc017;
  }
  iVar2 = FUN_00a7c8a0();
LAB_00dcc033:
  fVar6 = (float10)*(float *)(*(int *)(param_2 + 0x6f8) + 0x40) - (float10)*(float *)(iVar2 + 0x40);
  fVar4 = (float10)*(float *)(*(int *)(param_2 + 0x6f8) + 0x48) - (float10)*(float *)(iVar2 + 0x48);
  fVar5 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
  if (fVar5 < (float10)1.1920929e-07) {
    return;
  }
  fVar4 = (float10)fpatan(fVar6 / fVar5,fVar4 / fVar5);
  fStack_84 = (float)fVar4;
  fStack_a0 = *(float *)(iVar2 + 0x40);
  fStack_9c = *(float *)(iVar2 + 0x44) + 1.4;
  fStack_98 = *(float *)(iVar2 + 0x48);
  fStack_94 = *(float *)(iVar2 + 0x4c) + fStack_94;
  fStack_a4 = (float)fVar4;
  if (3.054326 <= ABS(*(float *)(param_1 + 0x1a4))) {
    fStack_88 = 0.0;
  }
  else {
    fStack_88 = *(float *)(param_1 + 0x1a4);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)*(float *)(param_1 + 0x1a4)));
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = -5.0;
    D3DXMatrixRotationY(auStack_50,(float)fVar4);
    D3DXVec3TransformNormal(auStack_c8,auStack_c8,local_80 + 10);
    fStack_c0 = fStack_c0 + fStack_a0;
    fStack_bc = fStack_bc + fStack_9c;
    fStack_b8 = fStack_b8 + fStack_98;
    fStack_b4 = fStack_b4 + fStack_94;
    iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_22(0,0,&fStack_a0,&fStack_c0,0x3f800000);
    if (iVar2 == 0) {
      fVar4 = (float10)fpatan((float10)*(float *)(param_1 + 0xc0) - (float10)fStack_c0,
                              (float10)*(float *)(param_1 + 200) - (float10)fStack_b8);
      fStack_a4 = (float)fVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x1a4) = 0x40490fdb;
    }
  }
  if (3.054326 <= ABS(*(float *)(param_1 + 0x1a4))) {
    uVar3 = 0;
    do {
      fVar4 = (float10)FUN_00ddba30(local_80[uVar3] + fStack_88);
      fStack_a8 = (float)fVar4;
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)fStack_84));
      fStack_c0 = 0.0;
      fStack_bc = 0.0;
      fStack_b8 = -5.0;
      D3DXMatrixRotationY(auStack_50,(float)fVar4);
      D3DXVec3TransformNormal(auStack_c8,auStack_c8,local_80 + 10);
      fStack_c0 = fStack_c0 + fStack_a0;
      fStack_bc = fStack_bc + fStack_9c;
      fStack_b8 = fStack_b8 + fStack_98;
      fStack_b4 = fStack_b4 + fStack_94;
      iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                        (0,0,&fStack_a0,&fStack_c0,0x3f800000);
      if (iVar2 == 0) {
        fVar4 = (float10)fpatan((float10)*(float *)(param_1 + 0xc0) - (float10)fStack_c0,
                                (float10)*(float *)(param_1 + 200) - (float10)fStack_b8);
        fStack_a4 = (float)fVar4;
        *(float *)(param_1 + 0x1a4) = fStack_a8;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xc);
  }
  fStack_a8 = *(float *)(param_1 + 0x104);
  fVar4 = (float10)FUN_00ddba30(fStack_a4 - fStack_a8);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.1 + (float10)fStack_a8));
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x104)));
  fStack_a8 = (float)fVar4;
  fVar4 = (float10)FUN_00db51c0();
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)fStack_a8 +
                                       (float10)*(float *)(param_1 + 0x104)));
  *(float *)(param_1 + 0x104) = (float)fVar4;
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)3.1415927));
  *(float *)(param_1 + 0xf4) = (float)fVar4;
  FUN_00da7460();
  thunk_FUN_00de01a0(param_1 + 0x70,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xd0);
  return;
}

// 00DCC340  FUN_00dcc340  size=732  [callgraph]
undefined4 __thiscall FUN_00dcc340(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [6];
  undefined1 auStack_b8 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [2];
  float fStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcc374:
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00dcc38e;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00dcc374;
  }
  iVar6 = FUN_00a7c8a0();
LAB_00dcc38e:
  fStack_e0 = *(float *)(iVar6 + 0x40);
  iVar1 = *(int *)(param_2 + 0x6f8);
  fStack_dc = *(float *)(iVar6 + 0x44);
  fStack_d8 = *(float *)(iVar6 + 0x48);
  fStack_d4 = *(float *)(iVar6 + 0x4c);
  afStack_d0[0] = *(float *)(iVar1 + 0x40);
  afStack_d0[1] = *(float *)(iVar1 + 0x44);
  afStack_d0[2] = *(float *)(iVar1 + 0x48);
  uVar7 = FUN_00c4ec80();
  FUN_00db5a00(auStack_60,iVar1,uVar7);
  fStack_b4 = ABS(fStack_dc - afStack_d0[1]);
  fVar2 = *(float *)(param_2 + 0x1b0) - afStack_d0[0];
  afStack_d0[1] = *(float *)(param_2 + 0x1b4) - afStack_d0[1];
  fVar3 = *(float *)(param_2 + 0x1b8) - afStack_d0[2];
  if (*(int *)(param_3 + 0x68) == 0) {
    fVar4 = 15.0;
  }
  else {
    fVar4 = 30.0;
  }
  if ((SQRT((fStack_d8 - afStack_d0[2]) * (fStack_d8 - afStack_d0[2]) +
            (fStack_e0 - afStack_d0[0]) * (fStack_e0 - afStack_d0[0])) <= fVar4) &&
     ((fStack_b4 <= 4.0 ||
      (SQRT(afStack_d0[1] * afStack_d0[1] + fVar2 * fVar2 + fVar3 * fVar3) <= 3.0)))) {
    fStack_dc = fStack_dc + 1.4;
    fVar2 = fStack_e0 - *(float *)(param_1 + 0x130);
    fVar4 = fStack_dc - *(float *)(param_1 + 0x134);
    fVar3 = fStack_d8 - *(float *)(param_1 + 0x138);
    if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) == 0.0) {
      return 0;
    }
    uVar8 = 0;
    fStack_a0 = *(float *)(param_1 + 0x130) - fStack_e0;
    fStack_9c = *(float *)(param_1 + 0x134) - fStack_dc;
    fStack_98 = *(float *)(param_1 + 0x138) - fStack_d8;
    fStack_94 = *(float *)(param_1 + 0x13c) - fStack_d4;
    afStack_d0[0] = 0.17453292;
    afStack_d0[1] = 0.0;
    afStack_d0[2] = -0.17453292;
    while( true ) {
      D3DXMatrixRotationY(auStack_50,afStack_d0[uVar8]);
      D3DXVec3TransformNormal(auStack_b8,&fStack_a8,auStack_58);
      fStack_90 = fStack_b0 + fStack_e0;
      fStack_8c = fStack_ac + fStack_dc;
      fStack_88 = fStack_a8 + fStack_d8;
      fStack_84 = fStack_a4 + fStack_d4;
      iVar6 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                        (auStack_70,afStack_80,&fStack_e0,&fStack_90,0x3dcccccd);
      if ((iVar6 != 0) &&
         (1.1920929e-07 <= SQRT(fStack_78 * fStack_78 + afStack_80[0] * afStack_80[0]))) break;
      uVar8 = uVar8 + 1;
      if (2 < uVar8) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

// 00DCC620  FUN_00dcc620  size=732  [callgraph]
undefined4 __thiscall FUN_00dcc620(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [6];
  undefined1 auStack_b8 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [2];
  float fStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcc654:
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00dcc66e;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00dcc654;
  }
  iVar6 = FUN_00a7c8a0();
LAB_00dcc66e:
  fStack_e0 = *(float *)(iVar6 + 0x40);
  iVar1 = *(int *)(param_2 + 0x6f8);
  fStack_dc = *(float *)(iVar6 + 0x44);
  fStack_d8 = *(float *)(iVar6 + 0x48);
  fStack_d4 = *(float *)(iVar6 + 0x4c);
  afStack_d0[0] = *(float *)(iVar1 + 0x40);
  afStack_d0[1] = *(float *)(iVar1 + 0x44);
  afStack_d0[2] = *(float *)(iVar1 + 0x48);
  uVar7 = FUN_00c4ec80();
  FUN_00db5a00(auStack_60,iVar1,uVar7);
  fStack_b4 = ABS(fStack_dc - afStack_d0[1]);
  fVar2 = *(float *)(param_2 + 0x1b0) - afStack_d0[0];
  afStack_d0[1] = *(float *)(param_2 + 0x1b4) - afStack_d0[1];
  fVar3 = *(float *)(param_2 + 0x1b8) - afStack_d0[2];
  if (*(int *)(param_3 + 0x68) == 0) {
    fVar4 = 15.0;
  }
  else {
    fVar4 = 30.0;
  }
  if ((SQRT((fStack_d8 - afStack_d0[2]) * (fStack_d8 - afStack_d0[2]) +
            (fStack_e0 - afStack_d0[0]) * (fStack_e0 - afStack_d0[0])) <= fVar4) &&
     ((fStack_b4 <= 4.0 ||
      (SQRT(afStack_d0[1] * afStack_d0[1] + fVar2 * fVar2 + fVar3 * fVar3) <= 3.0)))) {
    fStack_dc = fStack_dc + 1.4;
    fVar2 = fStack_e0 - *(float *)(param_1 + 0x130);
    fVar4 = fStack_dc - *(float *)(param_1 + 0x134);
    fVar3 = fStack_d8 - *(float *)(param_1 + 0x138);
    if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) == 0.0) {
      return 0;
    }
    uVar8 = 0;
    fStack_a0 = *(float *)(param_1 + 0x130) - fStack_e0;
    fStack_9c = *(float *)(param_1 + 0x134) - fStack_dc;
    fStack_98 = *(float *)(param_1 + 0x138) - fStack_d8;
    fStack_94 = *(float *)(param_1 + 0x13c) - fStack_d4;
    afStack_d0[0] = 0.5235988;
    afStack_d0[1] = 0.0;
    afStack_d0[2] = -0.5235988;
    while( true ) {
      D3DXMatrixRotationY(auStack_50,afStack_d0[uVar8]);
      D3DXVec3TransformNormal(auStack_b8,&fStack_a8,auStack_58);
      fStack_90 = fStack_b0 + fStack_e0;
      fStack_8c = fStack_ac + fStack_dc;
      fStack_88 = fStack_a8 + fStack_d8;
      fStack_84 = fStack_a4 + fStack_d4;
      iVar6 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                        (auStack_70,afStack_80,&fStack_e0,&fStack_90,0x3f000000);
      if ((iVar6 != 0) &&
         (1.1920929e-07 <= SQRT(fStack_78 * fStack_78 + afStack_80[0] * afStack_80[0]))) break;
      uVar8 = uVar8 + 1;
      if (2 < uVar8) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

// 00DCC900  FUN_00dcc900  size=2144  [callgraph]
undefined4 FUN_00dcc900(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar11;
  float10 fVar12;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float *pfStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_28;
  
  if (*(char *)(param_3 + 0x155) == '\x04') {
    return 0;
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcc943:
    iVar8 = FUN_00a81330();
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_00dcc962;
    }
  }
  else {
    piVar7 = (int *)FUN_00c13920();
    iVar8 = (**(code **)(*piVar7 + 0x28))(1);
    if (iVar8 == 0) goto LAB_00dcc943;
  }
  iVar8 = FUN_00a7c8a0();
LAB_00dcc962:
  fStack_120 = 0.0;
  fStack_11c = 1.4;
  fStack_118 = 0.0;
  D3DXVec3TransformNormal(&fStack_120,&fStack_120,iVar8 + 0x10);
  fVar1 = *(float *)(iVar8 + 0x40);
  fVar3 = *(float *)(iVar8 + 0x44) + unaff_EBX;
  fVar2 = *(float *)(iVar8 + 0x48);
  pfVar9 = (float *)FUN_00db5540();
  fStack_8c = *(float *)(iVar8 + 0x50) - *pfVar9;
  fStack_84 = *(float *)(iVar8 + 0x58) - pfVar9[2];
  fVar1 = fStack_8c * 20.0 + fVar1 + unaff_ESI;
  fVar2 = fStack_84 * 20.0 + fVar2 + fStack_124;
  fStack_120 = (*(float *)(iVar8 + 0x5c) - pfVar9[3]) * 20.0 + fStack_120;
  FUN_00da49d0(param_2 + 0x4b0);
  fStack_4c = *(float *)(param_3 + 0x24);
  uStack_48 = *(undefined4 *)(param_3 + 0x28);
  uStack_44 = *(undefined4 *)(param_3 + 0x2c);
  uStack_40 = 0x3f800000;
  FUN_00db9090(&fStack_11c);
  fStack_fc = fStack_11c + fStack_6c;
  local_f8 = fStack_118 + fStack_68;
  fStack_f4 = fStack_114 + fStack_64;
  fStack_f0 = fStack_110 + fStack_60;
  fStack_dc = fStack_5c + fStack_11c;
  fStack_d8 = fStack_118 + fStack_58;
  fStack_d4 = fStack_114 + fStack_54;
  fStack_d0 = fStack_110 + fStack_50;
  fStack_28 = SQRT((fStack_58 - fStack_68) * (fStack_58 - fStack_68) +
                   (fStack_5c - fStack_6c) * (fStack_5c - fStack_6c) +
                   (fStack_54 - fStack_64) * (fStack_54 - fStack_64));
  fStack_11c = fStack_fc;
  fStack_118 = local_f8;
  fStack_114 = fStack_f4;
  fStack_110 = fStack_f0;
  iVar10 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                     (&fStack_cc,&fStack_bc,&stack0xfffffed4,&fStack_11c,0x3e99999a);
  if (iVar10 != 0) {
    fStack_7c = fStack_cc - fStack_bc * 0.3;
    fStack_78 = fStack_c8 - fStack_b8 * 0.3;
    fStack_74 = fStack_c4 - fStack_b4 * 0.3;
    fStack_70 = fStack_c0 - fStack_b0 * 0.3;
    fStack_b8 = 0.0;
    if ((fStack_bc != 0.0) || (fStack_b4 != 0.0)) {
      fVar4 = fStack_b4 * fStack_b4 + fStack_bc * fStack_bc;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_bc,&fStack_bc);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_bc = 0.0;
        fStack_b8 = 1.0;
        fStack_b4 = 0.0;
      }
      FUN_00da6920(&fStack_11c,&fStack_cc,&fStack_bc,&stack0xfffffed4);
      FUN_00da6920(&fStack_ac,&fStack_cc,&fStack_bc,&fStack_fc);
      fVar4 = fVar1 - fStack_11c;
      fVar6 = fVar3 - fStack_118;
      fVar5 = fVar2 - fStack_114;
      fVar1 = fVar1 - fStack_fc;
      fVar3 = fVar3 - local_f8;
      fVar2 = fVar2 - fStack_f4;
      fStack_100 = (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) -
                   (fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
      if (0.0 < fStack_100) {
        fStack_100 = SQRT(fStack_100);
        fVar11 = (float10)thunk_FUN_00de19d0(&fStack_7c,&stack0xfffffed4,&fStack_fc,0);
        fStack_108 = (float)fVar11;
        iVar10 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                           (0,0,&stack0xfffffed4,&fStack_fc,0x3c23d70a);
        pfVar9 = pfStack_104;
        fVar1 = fStack_108;
        if (iVar10 != 0) {
          fVar1 = 0.0;
        }
        fVar1 = 1.0 - (fVar1 - 0.15) * 6.6666665;
        if (0.0 <= fVar1) {
          if (1.0 < fVar1) {
            fVar1 = 1.0;
          }
        }
        else {
          fVar1 = 0.0;
        }
        fVar2 = SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c);
        if (0.1 < fVar2) {
          fVar2 = 0.1;
        }
        fVar3 = *pfStack_104;
        *pfStack_104 = fVar3 + 0.1;
        if (1.0 < fVar3 + 0.1) {
          *pfStack_104 = 1.0;
        }
        pfStack_104 = (float *)(fVar2 * 10.0 * fVar1 * *pfStack_104);
        fStack_ec = fStack_ac - fStack_11c;
        fStack_e8 = fStack_a8 - fStack_118;
        fStack_e4 = fStack_a4 - fStack_114;
        fStack_e0 = fStack_a0 - fStack_110;
        if (((fStack_ec == 0.0) && (fStack_e8 == 0.0)) && (fStack_e4 == 0.0)) {
          return 0;
        }
        fVar1 = fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8 + fStack_ec * fStack_ec;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_ec,&fStack_ec);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_e4 = 0.0;
          fStack_ec = 0.0;
          fStack_e8 = 1.0;
        }
        fStack_ec = fStack_ec * fStack_100;
        fStack_e8 = fStack_e8 * fStack_100;
        fStack_e4 = fStack_e4 * fStack_100;
        fStack_e0 = fStack_e0 * fStack_100;
        fStack_ac = fStack_ec + fStack_11c;
        fStack_a8 = fStack_e8 + fStack_118;
        fStack_a4 = fStack_e4 + fStack_114;
        fStack_a0 = fStack_e0 + fStack_110;
        fStack_cc = fStack_ac - fStack_fc;
        fStack_c8 = fStack_a8 - local_f8;
        fStack_c4 = fStack_a4 - fStack_f4;
        FUN_00dc1920(&fStack_9c);
        fVar1 = fStack_c4 * fStack_94 + fStack_c8 * fStack_98 + fStack_cc * fStack_9c;
        if (0.0 < fStack_4c * fVar1) {
          if (ABS(fStack_4c) < ABS(fVar1)) {
            fVar1 = fStack_4c;
          }
          pfVar9[2] = (1.0 - pfVar9[2]) * 0.1 + pfVar9[2];
          fVar1 = fVar1 * 0.1;
          fStack_4c = fStack_4c - fVar1;
          fStack_9c = fStack_9c * fVar1;
          fStack_98 = fVar1 * fStack_98;
          fStack_94 = fVar1 * fStack_94;
          fStack_90 = fVar1 * fStack_90;
          fStack_dc = fStack_dc - fStack_9c;
          fStack_d8 = fStack_d8 - fStack_98;
          fStack_d4 = fStack_d4 - fStack_94;
          fStack_d0 = fStack_d0 - fStack_90;
          pfVar9[1] = fStack_4c;
        }
        FUN_00db8f60(&fStack_ac,&fStack_dc,&fStack_4c);
        FUN_00da9820(&fStack_8c);
        fVar11 = (float10)FUN_00ddba30(fStack_88 - *(float *)(param_2 + 0x364));
        fStack_108 = (float)fVar11;
        fVar11 = (float10)FUN_004fbd50((float)fVar11,(float)pfStack_104 * -0.06981317,
                                       (float)pfStack_104 * 0.06981317);
        fStack_100 = (float)fVar11;
        iVar10 = FUN_00da6160();
        if (iVar10 == 0) {
          fVar1 = (float)pfStack_104 * (float)pfStack_104 * 0.9;
        }
        else {
          fVar1 = (float)pfStack_104 * (float)pfStack_104 * 0.2;
        }
        fVar11 = (float10)FUN_004fbd50((1.0 - fVar1) * fStack_100 + fStack_108 * fVar1,0xbdd67750,
                                       0x3dd67750);
        fStack_108 = (float)fVar11;
        fVar12 = (float10)FUN_00ddba30(*(float *)(iVar8 + 0x94) - *(float *)(param_2 + 0x364));
        fVar11 = (float10)0;
        if (fVar11 < fVar12 * (float10)fStack_108 == (fVar11 == fVar12 * (float10)fStack_108)) {
          *param_1 = (float)fVar11;
          return 1;
        }
        *param_1 = fStack_108;
        return 1;
      }
    }
  }
  return 0;
}

// 00DCD160  FUN_00dcd160  size=140  [callgraph]
void FUN_00dcd160(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  FUN_00a12290(0);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&local_30,local_20,param_2 + 4,param_2,0x3e19999a);
  if (iVar1 != 0) {
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    param_1[3] = local_24;
  }
  return;
}

// 00DCD1F0  FUN_00dcd1f0  size=988  [callgraph]
void FUN_00dcd1f0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float unaff_ESI;
  float unaff_EDI;
  float *pfStack_98;
  float *pfStack_94;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78 [2];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  pfStack_94 = (float *)0xffffffff;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  pfStack_98 = (float *)0xdcd23b;
  iVar8 = FUN_00a12290();
  if (iVar8 == 0) {
    local_80 = *(float *)(param_3 + 0x40);
    local_78[0] = *(float *)(param_3 + 0x48);
  }
  else {
    local_80 = *(float *)(iVar8 + 0x40);
    local_78[0] = *(float *)(iVar8 + 0x48);
  }
  pfStack_94 = &local_40;
  local_40 = param_1[4] - *param_1;
  pfStack_98 = &local_30;
  local_3c = param_1[5] - param_1[1];
  local_38 = param_1[6] - param_1[2];
  local_34 = param_1[7] - param_1[3];
  FUN_00db5c70();
  local_60 = local_30;
  local_5c = 0.0;
  local_58 = local_28;
  FUN_00db5c70(&local_60,&local_60);
  fVar1 = local_60 * (local_80 - *param_1) + local_5c * 0.0 + local_58 * (local_78[0] - param_1[2]);
  if (fVar1 < 0.01) {
    fVar1 = 0.01;
  }
  fVar1 = fVar1 - 0.2;
  if (fVar1 <= 0.001) {
    return;
  }
  pfStack_98 = &local_60;
  local_70 = *param_1 + local_30 * fVar1;
  local_6c = local_2c * fVar1 + param_1[1];
  local_68 = fVar1 * local_28 + param_1[2];
  local_64 = param_1[3] + local_24 * fVar1;
  local_50 = local_80;
  local_48 = local_78[0];
  local_60 = 0.0;
  local_5c = 0.5;
  local_58 = 0.0;
  local_80 = 0.0;
  local_7c = 1.8;
  local_78[0] = 0.0;
  pfStack_94 = (float *)(param_3 + 0x10);
  local_4c = local_6c;
  D3DXVec3TransformNormal(pfStack_98);
  local_6c = *(float *)(param_3 + 0x40) + local_6c;
  local_68 = *(float *)(param_3 + 0x44) + local_68;
  local_64 = *(float *)(param_3 + 0x48) + local_64;
  D3DXVec3TransformNormal(&stack0xffffff74,&stack0xffffff74,param_3 + 0x10);
  pfStack_98 = (float *)(*(float *)(param_3 + 0x40) + (float)pfStack_98);
  pfStack_94 = (float *)(*(float *)(param_3 + 0x44) + (float)pfStack_94);
  fVar1 = *(float *)(param_3 + 0x48);
  iVar8 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&local_38,0,local_78,&pfStack_98,0x3e19999a);
  if (iVar8 != 0) {
    local_68 = (local_38 - (float)pfStack_98) + local_68;
    local_64 = (local_34 - (float)pfStack_94) + local_64;
    local_60 = (local_30 - (fVar1 + unaff_EDI)) + local_60;
    local_5c = (local_2c - unaff_ESI) + local_5c;
  }
  iVar8 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&local_38,0,&local_68,&fStack_88,0x3e19999a);
  if (iVar8 != 0) {
    fVar1 = local_38 - fStack_88;
    fVar2 = local_34 - fStack_84;
    fVar3 = local_30 - local_80;
    fVar4 = local_2c - local_7c;
    *param_1 = fVar1 + *param_1;
    param_1[1] = fVar2 + param_1[1];
    param_1[2] = fVar3 + param_1[2];
    param_1[3] = fVar4 + param_1[3];
    param_1[4] = param_1[4] + fVar1;
    param_1[5] = fVar2 + param_1[5];
    param_1[6] = fVar3 + param_1[6];
    param_1[7] = fVar4 + param_1[7];
    fStack_88 = fVar1 + fStack_88;
    fStack_84 = fVar2 + fStack_84;
    local_80 = fVar3 + local_80;
    local_7c = fVar4 + local_7c;
  }
  iVar8 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&local_38,0,&fStack_88,param_1,0x3e19999a);
  if (iVar8 != 0) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    fVar4 = param_1[3];
    fVar5 = (local_38 - fVar1) + *param_1;
    *param_1 = fVar5;
    fVar7 = (local_34 - fVar2) + param_1[1];
    param_1[1] = fVar7;
    fVar6 = (local_30 - fVar3) + param_1[2];
    param_1[2] = fVar6;
    param_1[3] = (local_2c - fVar4) + param_1[3];
    if ((param_1[6] - fVar6) * local_50 +
        (param_1[5] - fVar7) * fStack_54 + (param_1[4] - fVar5) * local_58 < 0.0) {
      param_1[4] = param_1[4] + (local_38 - fVar1);
      param_1[5] = (local_34 - fVar2) + param_1[5];
      param_1[6] = (local_30 - fVar3) + param_1[6];
      param_1[7] = (local_2c - fVar4) + param_1[7];
      return;
    }
  }
  return;
}

// 00DCD5D0  FUN_00dcd5d0  size=460  [callgraph]
void FUN_00dcd5d0(float *param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *param_1 = *param_2;
  pfVar1 = param_1 + 4;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *pfVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  iVar3 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                    (&local_50,&local_40,pfVar1,param_1,0x3e19999a);
  if (iVar3 != 0) {
    local_30 = *param_1 - *pfVar1;
    local_2c = param_1[1] - param_1[5];
    local_28 = param_1[2] - param_1[6];
    local_24 = param_1[3] - param_1[7];
    iVar3 = Camera::Math::safeNormalize(&local_20,&local_30);
    if ((iVar3 != 0) && (iVar3 = Camera::Math::safeNormalize(&local_40,&local_40), iVar3 != 0)) {
      fVar2 = local_40 * local_20 + local_1c * local_3c + local_18 * local_38;
      local_20 = local_20 - local_40 * fVar2;
      local_1c = local_1c - local_3c * fVar2;
      local_18 = local_18 - local_38 * fVar2;
      local_14 = local_14 - fVar2 * local_34;
      fVar2 = SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c);
      if (fVar2 != 0.0) {
        local_20 = local_20 / fVar2;
        local_1c = local_1c / fVar2;
        local_18 = local_18 / fVar2;
        local_14 = local_14 / fVar2;
      }
      fVar2 = param_3;
      if ((param_3 < 0.0 != (param_3 == 0.0)) &&
         (fVar2 = SQRT((local_48 - param_1[2]) * (local_48 - param_1[2]) +
                       (local_4c - param_1[1]) * (local_4c - param_1[1]) +
                       (local_50 - *param_1) * (local_50 - *param_1)), param_3 != 0.0)) {
        fVar2 = ABS(param_3) * fVar2;
      }
      *param_1 = local_50 + local_20 * fVar2;
      param_1[1] = local_4c + local_1c * fVar2;
      param_1[2] = local_18 * fVar2 + local_48;
      param_1[3] = local_44 + fVar2 * local_14;
    }
  }
  return;
}

// 00DCD7A0  FUN_00dcd7a0  size=164  [callgraph]
void FUN_00dcd7a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00da01f0(param_2);
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = param_2[4];
  local_1c = param_2[5];
  local_18 = param_2[6];
  local_14 = param_2[7];
  FUN_00dcd5d0(&local_30,&local_30,param_3);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  param_1[4] = local_20;
  param_1[5] = local_1c;
  param_1[6] = local_18;
  param_1[7] = local_14;
  return;
}

// 00DCD850  FUN_00dcd850  size=1208  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00dcd850(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar7 = *(int *)(param_1 + 0x6e4);
  iVar9 = 0;
  piVar6 = (int *)(iVar7 + 0x58);
  while( true ) {
    if (piVar6[-3] != 0) {
      return 0;
    }
    if (*piVar6 != 0) break;
    iVar9 = iVar9 + 1;
    piVar6 = piVar6 + 1;
    if (0 < iVar9) {
      piVar6 = (int *)(param_1 + 0x580);
      if ((*(int *)(param_1 + 0x584) != 0) && (*piVar6 != 0)) {
        uVar8 = *(undefined4 *)(param_1 + 0x6e8);
        if ((*(int **)(iVar7 + 0x54) == (int *)0x0) ||
           (iVar9 = (**(code **)(**(int **)(iVar7 + 0x54) + 0x20))(), *(int *)(iVar9 + 8) != 0x10))
        {
          *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar7 + 0x40);
        }
        FUN_00da41a0(param_1,uVar8);
        if (*(int *)(param_1 + 0x570) == 0) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x6e4) + 100);
          if ((piVar2 != (int *)0x0) &&
             (iVar7 = (**(code **)(*piVar2 + 0x20))(), *(int *)(iVar7 + 8) == 0xe)) {
            FUN_00db3ed0(0x42200000,0x3fb33333,0);
          }
          FUN_00db3f20();
        }
        *(undefined4 *)(param_1 + 0x570) = 1;
        FUN_00db53c0(param_1 + 0x460,0);
        uVar8 = _DAT_01be942c;
        if (*piVar6 != 0) {
          if (*(char *)(param_1 + 0x5d0) == '\0') {
            Camera::Math::safePositionTargetXz_2
                      (param_1 + 0x590,param_1 + 0x5a0,param_1 + 0x5b0,
                       *(undefined4 *)(param_1 + 0x5c4));
            FUN_00dbdff0();
          }
          else {
            FUN_00dc4ee0();
          }
          *piVar6 = 0;
        }
        FUN_00dc4fc0(param_1,uVar8);
        FUN_00da8900();
        FUN_00da5dd0();
        if (((*(int *)(param_1 + 0x690) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
           (iVar7 = FUN_00db5440(), iVar7 != 0)) {
          uStack_30 = *(undefined4 *)(param_1 + 0x1b0);
          puVar1 = (undefined4 *)(param_1 + 0x1c0);
          uStack_2c = *(undefined4 *)(param_1 + 0x1b4);
          uStack_28 = *(undefined4 *)(param_1 + 0x1b8);
          uStack_24 = *(undefined4 *)(param_1 + 0x1bc);
          uStack_20 = *puVar1;
          uStack_1c = *(undefined4 *)(param_1 + 0x1c4);
          uStack_18 = *(undefined4 *)(param_1 + 0x1c8);
          uStack_14 = *(undefined4 *)(param_1 + 0x1cc);
          uVar8 = FUN_00da5f90();
          FUN_00dcd160(&uStack_30,&uStack_30,uVar8);
          *(undefined4 *)(param_1 + 0x1b0) = uStack_30;
          *(undefined4 *)(param_1 + 0x1b4) = uStack_2c;
          *(undefined4 *)(param_1 + 0x1b8) = uStack_28;
          *(undefined4 *)(param_1 + 0x1bc) = uStack_24;
          *puVar1 = uStack_20;
          *(undefined4 *)(param_1 + 0x1c4) = uStack_1c;
          *(undefined4 *)(param_1 + 0x1c8) = uStack_18;
          *(undefined4 *)(param_1 + 0x1cc) = uStack_14;
          Camera::Math::safePositionTargetXz((undefined4 *)(param_1 + 0x1b0),puVar1);
        }
        FUN_00f96420();
        FUN_00db8090();
        FUN_00d9ff30();
        *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x1b0);
        *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x1b4);
        *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x1bc);
        *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x1c0);
        *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x1c4);
        *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x1c8);
        *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x1cc);
        *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x1d0);
        *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x1d4);
        *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x1d8);
        *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x1dc);
        fVar3 = *(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x460);
        fVar5 = *(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x464);
        fVar4 = *(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x468);
        *(float *)(param_1 + 0x4a4) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
        *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x1b0);
        *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x1b4);
        *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x1bc);
        *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x1c0);
        *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x1c4);
        *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x1c8);
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x1cc);
        *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x1d0);
        *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x1d4);
        *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x1d8);
        *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x1dc);
        fVar3 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4b0);
        fVar5 = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b4);
        fVar4 = *(float *)(param_1 + 0x4c8) - *(float *)(param_1 + 0x4b8);
        *(float *)(param_1 + 0x4f4) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
        FUN_00da8900();
        *(undefined4 *)(param_1 + 0x794) = 0;
        *(undefined4 *)(param_1 + 0x77c) = 0;
        FUN_00da93f0();
        FUN_00db89b0();
        *(undefined4 *)(param_1 + 0x790) = 0;
        *(undefined4 *)(param_1 + 0x778) = 0;
        FUN_00da93f0();
        FUN_00db89b0();
        if (*(float *)(param_1 + 0x8c0) == -1.0) {
          if (*(int *)(param_1 + 0x8c8) == 1) {
            FUN_00dd5650(&DAT_016c42f8,0x4030000000000000);
          }
          else {
            *(undefined4 *)(param_1 + 0x8c8) = 0;
            *(undefined4 *)(param_1 + 0x8c0) = 0x41800000;
            *(undefined4 *)(param_1 + 0x8c4) = 0x41000000;
          }
        }
        *(undefined4 *)(param_1 + 0x360) = 0x3e32b8c2;
        *(undefined4 *)(param_1 + 0x774) = 0;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

// 00DCDD10  FUN_00dcdd10  size=550  [callgraph]
void __fastcall FUN_00dcdd10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  iVar2 = FUN_00a81330();
  if (((iVar2 != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)
     ) {
    uStack_54 = *(undefined4 *)(iVar2 + 0x40);
    fStack_30 = *(float *)(iVar2 + 0x44);
    uStack_4c = *(undefined4 *)(iVar2 + 0x48);
    uStack_48 = *(undefined4 *)(iVar2 + 0x4c);
    fStack_40 = fStack_30 + 1.5;
    fStack_50 = fStack_30 - 2.5;
    uStack_44 = uStack_54;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_54;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_54;
    fStack_20 = fStack_30;
    uStack_1c = uStack_4c;
    uStack_18 = uStack_48;
    RayCastSingleHitWork::RayCastSingleHitWork_4
              (&uStack_34,0,0,0,&uStack_44,&uStack_54,0x1e,&DAT_016c3080);
    fStack_50 = fStack_50 - 20.0;
    RayCastSingleHitWork::RayCastSingleHitWork_4
              (&uStack_24,0,0,0,&uStack_44,&uStack_54,0x1e,&DAT_016c3080);
    iVar3 = FUN_00a81330();
    piVar1 = (int *)0x0;
    if (iVar3 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
    }
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x78c) = 0;
    if (piVar1 != (int *)0x0) {
      uVar5 = (uint)(*(float *)(iVar2 + 0x44) + 10.0 < (float)piVar1[0x11]);
      iVar2 = (**(code **)(*piVar1 + 0x1d8))();
      if (iVar2 != 0) {
        uVar5 = 1;
      }
    }
    iVar2 = *(int *)(param_1 + 0x7fc);
    *(undefined4 *)(param_1 + 0x7b0) = 0xbf5f66f3;
    *(uint *)(param_1 + 0x7fc) = uVar5;
    iVar4 = FUN_00d466f0();
    iVar3 = *(int *)(param_1 + 0x7fc);
    if (iVar4 != 0) {
      if (iVar3 == 0) {
        if (iVar2 != 0) {
          FUN_00da8810(0x41a00000);
        }
        FUN_00dc8410();
        return;
      }
      FUN_00dae090(iVar2 != iVar3);
      return;
    }
    if (iVar3 == 0) {
      if (iVar2 != 0) {
        FUN_00da8810(0x41a00000);
      }
      FUN_00dc98b0();
      return;
    }
    FUN_00dabdb0(iVar2 != iVar3);
  }
  return;
}

// 00DCDF40  FUN_00dcdf40  size=3741  [callgraph]
void __fastcall FUN_00dcdf40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int unaff_EDI;
  float *pfVar14;
  float10 fVar15;
  float *pfStack_1e0;
  float *pfStack_1dc;
  float *pfStack_1d8;
  float *pfStack_1d4;
  float *pfStack_1d0;
  float *pfStack_1cc;
  float *pfStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1b0;
  float fStack_1ac;
  int *piStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  float fStack_184;
  undefined4 uStack_178;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [7];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_114 [12];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_a8;
  undefined1 auStack_9c [12];
  float afStack_90 [3];
  undefined1 auStack_84 [64];
  float afStack_44 [7];
  float fStack_28;
  
  uStack_1c4 = 0xdcdf56;
  piVar10 = (int *)FUN_00c13920();
  uStack_1c4 = 0;
  pfStack_1c8 = (float *)0xdcdf61;
  iVar11 = (**(code **)(*piVar10 + 0x28))();
  if (iVar11 != 0) {
    pfStack_1c8 = (float *)0xdcdf6c;
    FUN_00a7c8a0();
  }
  pfStack_1c8 = (float *)0xdcdf77;
  iVar11 = FUN_00a81330();
  if (iVar11 == 0) {
    return;
  }
  pfVar13 = (float *)(param_1 + 0x720);
  pfVar14 = afStack_44;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar14 + 1;
  }
  pfStack_1c8 = (float *)0xdcdf9e;
  iVar11 = FUN_00a81330();
  if (iVar11 == 0) {
    return;
  }
  pfStack_1c8 = (float *)0xdcdfad;
  iVar11 = FUN_00a7c8a0();
  if (iVar11 == 0) {
    return;
  }
  fStack_124 = *(float *)(iVar11 + 0x40);
  pfVar13 = (float *)(iVar11 + 0x40);
  pfStack_1c8 = (float *)&DAT_016c3080;
  fStack_f0 = *(float *)(iVar11 + 0x44);
  pfStack_1cc = (float *)0x1e;
  pfStack_1d0 = &fStack_124;
  fStack_11c = *(float *)(iVar11 + 0x48);
  pfStack_1d4 = &fStack_104;
  uStack_118 = *(undefined4 *)(iVar11 + 0x4c);
  pfStack_1d8 = (float *)0x0;
  pfStack_1dc = (float *)0x0;
  pfStack_1e0 = (float *)0x0;
  fStack_100 = fStack_f0 + 1.5;
  fStack_120 = fStack_f0 - 2.5;
  fStack_104 = fStack_124;
  fStack_fc = fStack_11c;
  uStack_f8 = uStack_118;
  fStack_f4 = fStack_124;
  fStack_ec = fStack_11c;
  fStack_e8 = (float)uStack_118;
  afStack_90[0] = fStack_f0;
  uStack_178 = RayCastSingleHitWork::RayCastSingleHitWork_4(&fStack_f4);
  fStack_120 = fStack_120 - 20.0;
  pfStack_1c8 = (float *)0xdce093;
  iVar12 = FUN_00a81330();
  piStack_1a8 = (int *)0x0;
  if (iVar12 != 0) {
    pfStack_1c8 = (float *)0xdce0a6;
    piStack_1a8 = (int *)FUN_00a7c8a0();
  }
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0xbf5f66f3;
  if (*(int *)(iVar11 + 0x266c) != 0) {
    if (piStack_1a8 == (int *)0x0) goto LAB_00dce350;
    pfStack_1c8 = &fStack_1a4;
    pfStack_1cc = (float *)0xdce0ef;
    (**(code **)(*piStack_1a8 + 0x208))();
    fStack_1ac = *(float *)(param_1 + 0x360);
    pfStack_1c8 = (float *)(param_1 + 0x460);
    fStack_1b0 = *(float *)(param_1 + 0x364);
    pfStack_1cc = &fStack_1a4;
    pfStack_1d0 = &fStack_1b0;
    pfStack_1d4 = &fStack_1ac;
    pfStack_1d8 = (float *)0xdce11e;
    thunk_FUN_00dde510();
    fStack_1ac = fStack_1ac * -1.0;
    pfStack_1c8 = (float *)(fStack_1ac - *(float *)(param_1 + 0x790));
    pfStack_1cc = (float *)0xdce13d;
    fVar15 = (float10)FUN_00ddba30();
    if (((*(int *)(iVar11 + 0x2664) == 0) &&
        (fVar1 = *(float *)(iVar11 + 0x44) + 3.0, fStack_1a0 < fVar1 != (fStack_1a0 == fVar1))) &&
       (*(float *)(iVar11 + 0x44) <= fStack_1a0)) {
      fVar15 = (float10)0;
    }
    if (ABS(fVar15) <= (float10)1e-05) {
      fVar15 = (float10)0;
    }
    else {
      fVar15 = fVar15 * (float10)0.1;
    }
    *(float *)(param_1 + 0x788) = (float)fVar15;
    pfStack_1c8 = (float *)(fStack_1b0 - *(float *)(param_1 + 0x794));
    pfStack_1cc = (float *)0xdce1a9;
    fVar15 = (float10)FUN_00ddba30();
    if (ABS(fVar15) <= (float10)1e-05) {
      fVar15 = (float10)0;
    }
    else {
      fVar15 = fVar15 * (float10)0.1;
    }
    *(float *)(param_1 + 0x78c) = (float)fVar15;
    pfStack_1cc = &fStack_1a4;
    pfStack_1d0 = &fStack_1b0;
    pfStack_1d4 = &fStack_1ac;
    pfStack_1d8 = (float *)0xdce1e4;
    pfStack_1c8 = pfVar13;
    thunk_FUN_00dde510();
    fStack_1ac = fStack_1ac * -1.0;
    pfStack_1c8 = (float *)(fStack_1b0 + 0.17453292);
    pfStack_1cc = (float *)0xdce207;
    fVar15 = (float10)FUN_00ddba30();
    fStack_1b0 = (float)fVar15;
    fVar1 = fStack_19c - *(float *)(iVar11 + 0x48);
    if (fVar1 * fVar1 + (fStack_1a4 - *pfVar13) * (fStack_1a4 - *pfVar13) < 36.0) {
      pfStack_1c8 = (float *)(float)(fVar15 - (float10)*(float *)(param_1 + 0x794));
      pfStack_1cc = (float *)0xdce23f;
      fVar15 = (float10)FUN_00ddba30();
      if (ABS(fVar15) <= (float10)1e-05) {
        *(undefined4 *)(param_1 + 0x78c) = 0;
      }
      else {
        *(float *)(param_1 + 0x78c) = (float)(fVar15 * (float10)0.1);
      }
    }
  }
  if ((piStack_1a8 != (int *)0x0) && (*(int *)(iVar11 + 0x266c) == 0)) {
    pfStack_1c8 = &fStack_1a4;
    pfStack_1cc = (float *)0xdce295;
    FUN_00aed1d0();
    fStack_1b0 = *(float *)(param_1 + 0x360);
    pfStack_1c8 = (float *)(param_1 + 0x460);
    fStack_128 = *(float *)(param_1 + 0x364);
    pfStack_1cc = &fStack_1a4;
    pfStack_1d0 = &fStack_128;
    pfStack_1d4 = &fStack_1b0;
    pfStack_1d8 = (float *)0xdce2ca;
    thunk_FUN_00dde510();
    fStack_1b0 = fStack_1b0 * -1.0;
    if (fStack_1b0 < *(float *)(param_1 + 0x360)) {
      pfStack_1c8 = (float *)(fStack_1b0 - *(float *)(param_1 + 0x790));
      pfStack_1cc = (float *)0xdce2f7;
      fVar15 = (float10)FUN_00ddba30();
      fStack_1ac = (float)fVar15;
      if (*(int *)(iVar11 + 0x2664) != 0) {
        fStack_1ac = 0.0;
      }
      pfStack_1c8 = (float *)0xdce314;
      iVar12 = FUN_00a8d9d0();
      fVar1 = fStack_1ac;
      if (iVar12 != 0) {
        fVar1 = 0.0;
      }
      if (100.0 <= fStack_28 * fStack_28) {
        fVar1 = 0.0;
      }
      *(float *)(param_1 + 0x790) = fVar1 * 0.01 + *(float *)(param_1 + 0x790);
    }
  }
LAB_00dce350:
  fVar1 = *(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x778) + *(float *)(param_1 + 0x788) +
          *(float *)(param_1 + 0x790);
  *(float *)(param_1 + 0x790) = fVar1;
  if (fVar1 < *(float *)(param_1 + 0x7b0)) {
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x7b0);
  }
  fVar1 = *(float *)(param_1 + 0x790);
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    fVar1 = -0.34906584;
  }
  if (*(float *)(param_1 + 0x7a0) < *(float *)(param_1 + 0x790)) {
    fVar1 = *(float *)(param_1 + 0x7a0);
    *(float *)(param_1 + 0x790) = fVar1;
  }
  pfStack_1c8 = (float *)(fVar1 + *(float *)(param_1 + 0x7e0));
  pfStack_1cc = (float *)0xdce3d6;
  fVar15 = (float10)FUN_00ddba30();
  *(float *)(param_1 + 0x360) = (float)fVar15;
  pfStack_1c8 = (float *)(*(float *)(param_1 + 0x784) + *(float *)(param_1 + 0x77c) +
                          *(float *)(param_1 + 0x78c) + *(float *)(param_1 + 0x794));
  *(float **)(param_1 + 0x794) = pfStack_1c8;
  pfStack_1cc = (float *)0xdce402;
  fVar15 = (float10)FUN_00ddba30();
  pfStack_1cc = *(float **)(param_1 + 0x1f0);
  *(float *)(param_1 + 0x364) = (float)fVar15;
  afStack_144[0] = 0.0;
  pfStack_1d0 = (float *)(param_1 + 0x360);
  afStack_144[1] = 1.0;
  pfStack_1d4 = (float *)auStack_84;
  afStack_144[2] = 0.0;
  pfStack_1d8 = (float *)0xdce43c;
  FUN_00ddc1d0();
  pfStack_1c8 = (float *)auStack_84;
  pfStack_1d0 = afStack_144;
  pfStack_1d4 = (float *)0xdce457;
  pfStack_1cc = pfStack_1d0;
  D3DXVec3TransformNormal();
  pfStack_1d4 = *(float **)(param_1 + 0x1f0);
  fStack_160 = 0.0;
  fStack_15c = 0.0;
  pfStack_1d8 = (float *)(param_1 + 0x360);
  fStack_158 = 1.0;
  pfStack_1dc = afStack_90;
  pfStack_1e0 = (float *)0xdce485;
  FUN_00ddc1d0();
  pfStack_1d4 = afStack_90;
  pfStack_1dc = &fStack_160;
  pfStack_1e0 = (float *)0xdce49d;
  pfStack_1d8 = pfStack_1dc;
  D3DXVec3TransformNormal();
  fStack_1ac = fStack_164 * fStack_158 - fStack_168 * fStack_154;
  piStack_1a8 = (int *)(fStack_16c * fStack_154 - fStack_15c * fStack_164);
  fStack_1a4 = fStack_15c * fStack_168 - fStack_16c * fStack_158;
  fVar1 = fStack_1a4 * fStack_1a4 +
          fStack_1ac * fStack_1ac + (float)piStack_1a8 * (float)piStack_1a8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    pfStack_1e0 = &fStack_1ac;
    FUN_00ddf460(pfStack_1e0);
  }
  else {
    pfStack_1e0 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    fStack_1a4 = 0.0;
    piStack_1a8 = (int *)0x3f800000;
    fStack_1ac = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  fVar7 = fVar1 * fStack_1ac;
  fVar6 = fVar1 * (float)piStack_1a8;
  fVar1 = fVar1 * fStack_1a4;
  fVar2 = *(float *)(param_1 + 0x7e8);
  fStack_1ac = fStack_16c;
  fStack_1a4 = fStack_164;
  fStack_1a0 = fStack_160;
  piStack_1a8 = (int *)0x0;
  fVar3 = fStack_164 * fStack_164 + fStack_16c * fStack_16c;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    pfStack_1e0 = &fStack_1ac;
    FUN_00ddf460(pfStack_1e0);
  }
  else {
    pfStack_1e0 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    fStack_1a4 = 0.0;
    piStack_1a8 = (int *)0x3f800000;
    fStack_1ac = 0.0;
  }
  fStack_1ac = fStack_1ac * 0.0;
  piStack_1a8 = (int *)((float)piStack_1a8 * 0.0);
  fStack_1a4 = fStack_1a4 * 0.0;
  fStack_1a0 = fStack_1a0 * 0.0;
  fVar3 = *pfVar13;
  fVar4 = *(float *)(iVar11 + 0x44);
  fVar5 = *(float *)(iVar11 + 0x48);
  if (*(int *)(iVar11 + 0x2664) == 0) {
    *(float *)(param_1 + 0x7dc) = -*(float *)(param_1 + 0x7dc) * 0.2 + *(float *)(param_1 + 0x7dc);
    *(float *)(param_1 + 0x7e0) = -*(float *)(param_1 + 0x7e0) * 0.2 + *(float *)(param_1 + 0x7e0);
  }
  else {
    fVar8 = (*(float *)(iVar11 + 0x44) - fStack_a8) * 0.5;
    if (0.9 < fVar8) {
      fVar8 = 0.9;
    }
    if (*(float *)(*(int *)(*(int *)(iVar11 + 0x764) + 0xd0) + 4) + *(float *)(iVar11 + 0x894) <=
        0.0) {
      *(float *)(param_1 + 0x7e0) =
           -*(float *)(param_1 + 0x7e0) * (1.0 - fVar8) + *(float *)(param_1 + 0x7e0);
      *(float *)(param_1 + 0x7dc) =
           -*(float *)(param_1 + 0x7dc) * (1.0 - fVar8) + *(float *)(param_1 + 0x7dc);
    }
    else {
      *(float *)(param_1 + 0x7e0) =
           (*(float *)(param_1 + 0x7dc) * 0.17453292 - *(float *)(param_1 + 0x7e0)) * 0.1 +
           *(float *)(param_1 + 0x7e0);
      if (fStack_190 != 0.0) {
        *(float *)(param_1 + 0x7dc) =
             ((fStack_108 - *(float *)(iVar11 + 0x44)) - *(float *)(param_1 + 0x7dc)) * 0.1 +
             *(float *)(param_1 + 0x7dc);
      }
    }
  }
  *(float *)(param_1 + 0x4c0) =
       ((fVar7 + fStack_1ac + fVar3) - *(float *)(param_1 + 0x4c0)) * 0.96 +
       *(float *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4c4) =
       ((fVar4 + *(float *)(param_1 + 0x7dc) + (float)piStack_1a8 + fVar6 + fVar2) -
       *(float *)(param_1 + 0x4c4)) * 0.14 + *(float *)(param_1 + 0x4c4);
  *(float *)(param_1 + 0x4c8) =
       ((fStack_1a4 + fVar1 + fVar5) - *(float *)(param_1 + 0x4c8)) * 0.96 +
       *(float *)(param_1 + 0x4c8);
  *(float *)(param_1 + 0x4f4) = *(float *)(param_1 + 0x7f4) + *(float *)(param_1 + 0x7f4);
  if (unaff_EDI != 0) {
    fVar1 = *(float *)(unaff_EDI + 0x40) - *pfVar13;
    fVar6 = *(float *)(unaff_EDI + 0x44) - *(float *)(iVar11 + 0x44);
    fVar2 = *(float *)(unaff_EDI + 0x48) - *(float *)(iVar11 + 0x48);
    bVar9 = true;
    pfStack_1c8 = (float *)0x1;
    fStack_190 = SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1);
    if ((*(int *)(iVar11 + 0x2664) != 0) && (bVar9 = false, *(int *)(iVar11 + 0x266c) != 0)) {
      pfStack_1c8 = (float *)0x0;
    }
    pfStack_1e0 = (float *)0xdce862;
    iVar12 = FUN_00a8d9d0();
    if (iVar12 != 0) {
      bVar9 = false;
    }
    if (*(int *)(iVar11 + 0x266c) != 0) {
      bVar9 = false;
    }
    if (100.0 <= afStack_44[1] * afStack_44[1]) {
      bVar9 = false;
    }
    pfStack_1e0 = (float *)0xdce894;
    iVar11 = FUN_00da0b10();
    if (iVar11 != 0) {
      bVar9 = false;
    }
    if ((25.0 <= fStack_190) || (pfStack_1c8 == (float *)0x0)) {
      *(float *)(param_1 + 0x7f4) =
           (2.7 - *(float *)(param_1 + 0x7f4)) * 0.1 + *(float *)(param_1 + 0x7f4);
    }
    else {
      fVar1 = (((25.0 - fStack_190) * 0.5 + 2.7) - *(float *)(param_1 + 0x7f4)) * 0.02 +
              *(float *)(param_1 + 0x7f4);
      *(float *)(param_1 + 0x7f4) = fVar1;
      if (bVar9) {
        *(float *)(param_1 + 0x790) =
             (-0.7853982 - *(float *)(param_1 + 0x790)) * 0.02 + *(float *)(param_1 + 0x790);
      }
      if (!NAN(fVar1) && 6.0 < fVar1 != (fVar1 == 6.0)) {
        *(undefined4 *)(param_1 + 0x7f4) = 0x40c00000;
      }
    }
  }
  if (*(float *)(param_1 + 0x790) < -0.34906584) {
    pfStack_1e0 = (float *)(*(float *)(param_1 + 0x790) - -0.34906584);
    fVar15 = (float10)FUN_00ddba30();
    *(float *)(param_1 + 0x4f4) =
         (float)(fVar15 * (float10)57.29578 * (float10)-0.084 + (float10)*(float *)(param_1 + 0x4f4)
                );
  }
  if (10.0 < *(float *)(param_1 + 0x4f4)) {
    *(undefined4 *)(param_1 + 0x4f4) = 0x41200000;
  }
  uStack_18c = 0;
  pfStack_1e0 = (float *)0x5;
  uStack_188 = 0;
  fStack_184 = -*(float *)(param_1 + 0x4f4);
  uStack_bc = *(undefined4 *)(param_1 + 0x360);
  uStack_b8 = *(undefined4 *)(param_1 + 0x364);
  uStack_b4 = *(undefined4 *)(param_1 + 0x368);
  uStack_b0 = *(undefined4 *)(param_1 + 0x36c);
  uStack_c4 = 0;
  uStack_c8 = 0;
  fStack_cc = 0.0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_e4 = 0;
  fStack_ec = 0.0;
  fStack_f0 = 0.0;
  fStack_f4 = 0.0;
  uStack_f8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  fStack_e8 = 1.0;
  fStack_fc = 1.0;
  thunk_FUN_00ddc1d0(auStack_9c,&uStack_bc);
  pfStack_1e0 = &fStack_fc;
  D3DXMatrixMultiply(pfStack_1e0,auStack_9c);
  D3DXMatrixMultiply(&fStack_108,&fStack_108,param_1 + 0x390);
  D3DXVec3TransformNormal(&fStack_1a4,&fStack_1a4,auStack_114);
  fStack_1b0 = fStack_1b0 + fStack_f0 + *(float *)(param_1 + 0x4c0);
  fStack_1ac = fStack_ec + fStack_1ac + *(float *)(param_1 + 0x4c4);
  piStack_1a8 = (int *)(fStack_e8 + (float)piStack_1a8 + *(float *)(param_1 + 0x4c8));
  fStack_1a4 = fStack_1a4 + *(float *)(param_1 + 0x4cc);
  *(float *)(param_1 + 0x4bc) = fStack_1a4;
  *(float *)(param_1 + 0x4b0) = fStack_1b0;
  *(float *)(param_1 + 0x4b4) = fStack_1ac;
  *(int **)(param_1 + 0x4b8) = piStack_1a8;
  fVar1 = (fStack_cc + 0.5) - *(float *)(param_1 + 0x4b4);
  if (0.0 < fVar1) {
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar1;
    *(float *)(param_1 + 0x4c4) = fVar1 + *(float *)(param_1 + 0x4c4);
  }
  fStack_150 = *(float *)(param_1 + 0x4b0) - *(float *)(param_1 + 0x4c0);
  fStack_14c = *(float *)(param_1 + 0x4b4) - *(float *)(param_1 + 0x4c4);
  fStack_148 = *(float *)(param_1 + 0x4b8) - *(float *)(param_1 + 0x4c8);
  afStack_144[0] = *(float *)(param_1 + 0x4bc) - *(float *)(param_1 + 0x4cc);
  if (((fStack_150 != 0.0) || (fStack_14c != 0.0)) || (fStack_148 != 0.0)) {
    fVar1 = fStack_148 * fStack_148 + fStack_150 * fStack_150 + fStack_14c * fStack_14c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_1a0,&fStack_150);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_1a0 = 0.0;
      fStack_19c = 1.0;
      fStack_198 = 0.0;
    }
  }
  fStack_1a0 = fStack_1a0 * 0.02 + *(float *)(param_1 + 0x4c0);
  fStack_19c = fStack_19c * 0.02 + *(float *)(param_1 + 0x4c4);
  fStack_198 = fStack_198 * 0.02 + *(float *)(param_1 + 0x4c8);
  fStack_194 = fStack_194 * 0.02 + *(float *)(param_1 + 0x4cc);
  iVar11 = FUN_00dca740(&fStack_1a0,*(undefined4 *)(param_1 + 0x76c),&fStack_150,&pfStack_1e0);
  fVar1 = (float)pfStack_1e0 - *(float *)(param_1 + 0x4c0);
  fVar6 = (float)pfStack_1dc - *(float *)(param_1 + 0x4c4);
  fVar2 = (float)pfStack_1d8 - *(float *)(param_1 + 0x4c8);
  fVar1 = SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1);
  if (fVar1 < 0.01) {
    fVar1 = 0.01;
  }
  if (*(float *)(param_1 + 0x4f4) < fVar1) {
    fVar1 = *(float *)(param_1 + 0x4f4);
  }
  if (iVar11 == 0) {
    fVar1 = *(float *)(param_1 + 0x7e4) - 0.02;
    *(float *)(param_1 + 0x7e4) = fVar1;
    if (fVar1 < -0.78000003) {
      *(undefined4 *)(param_1 + 0x7e4) = 0xbf47ae15;
    }
    fVar2 = *(float *)(param_1 + 0x7e8) + 0.02;
    *(float *)(param_1 + 0x7e8) = fVar2;
    fVar1 = 1.08;
    if (fVar2 <= 1.08) {
      return;
    }
  }
  else {
    fVar1 = fVar1 / *(float *)(param_1 + 0x4f4);
    fVar2 = fVar1 * -0.78000003;
    if (-0.3 < fVar2) {
      fVar2 = -0.3;
    }
    *(float *)(param_1 + 0x7e4) =
         (fVar2 - *(float *)(param_1 + 0x7e4)) * 0.1 + *(float *)(param_1 + 0x7e4);
    fVar1 = (1.0 - fVar1) * -0.24 + 1.08;
  }
  *(float *)(param_1 + 0x7e8) = fVar1;
  return;
}

// 00DCEDE0  FUN_00dcede0  size=52  [callgraph]
void __fastcall FUN_00dcede0(int param_1)

{
  FUN_00dca7c0();
  FUN_00dcad20();
  if (*(int *)(param_1 + 0x920) != 0) {
    *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x4a4);
    return;
  }
  *(undefined4 *)(param_1 + 0x928) = 0xbf800000;
  return;
}

// 00DCEE20  FUN_00dcee20  size=1110  [callgraph]
void __thiscall FUN_00dcee20(int param_1,int param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  undefined8 uVar5;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 auStack_58 [4];
  int local_54;
  undefined1 local_50 [76];
  
  *(undefined4 *)(param_2 + 0x788) = 0;
  local_54 = *(int *)(param_2 + 0x6f8);
  *(undefined4 *)(param_2 + 0x78c) = 0;
  if ((*(int *)(param_2 + 0x6f0) == 0) || (local_54 == 0)) {
    iVar1 = 0;
    pfVar2 = (float *)(param_3 + 0x294);
    do {
      if (*pfVar2 != 0.0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        *(undefined4 *)(param_1 + 8) = 0;
        goto LAB_00dcf1af;
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 0x10;
    } while (iVar1 < 3);
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      if ((*(uint *)(param_3 + 0xfc) & 0x8000000) != 0) {
        fVar4 = (float10)FUN_00dc2d90(param_2);
        fVar4 = (float10)FUN_00ddba30((float)fVar4);
        FUN_00da93f0((float)fVar4);
      }
    }
    else {
      FUN_00da4470(param_2);
    }
    goto LAB_00dcf1af;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_00da4470(param_2);
    goto LAB_00dcf1af;
  }
  if ((*(uint *)(param_3 + 0xfc) & 0x8000000) == 0) {
    FUN_00dcb9b0(param_2,param_3,local_54);
    goto LAB_00dcf1af;
  }
  fVar4 = (float10)FUN_00dc2d90(param_2);
  local_84 = (float)fVar4;
  fVar3 = (float10)FUN_00dc2e70(param_2);
  fVar4 = (float10)local_84;
  if (ABS(fVar4) < ABS(fVar3)) {
    fVar4 = fVar3;
  }
  fVar4 = (float10)FUN_00ddba30((float)fVar4);
  local_84 = (float)fVar4;
  if (fVar4 <= (float10)0) {
    if ((float10)0 <= fVar4) goto LAB_00dcf132;
    local_70 = *(float *)(param_2 + 0x1b0);
    local_6c = *(float *)(param_2 + 0x1b4);
    local_68 = *(float *)(param_2 + 0x1b8);
    local_64 = *(float *)(param_2 + 0x1bc);
    local_a0 = *(float *)(param_2 + 0x1c0);
    local_9c = *(float *)(param_2 + 0x1c4);
    local_98 = *(float *)(param_2 + 0x1c8);
    local_94 = *(float *)(param_2 + 0x1cc);
    local_b0 = local_70 - local_a0;
    local_ac = local_6c - local_9c;
    local_a8 = local_68 - local_98;
    local_a4 = local_64 - local_94;
    D3DXMatrixRotationY(local_50,(float)(fVar4 - (float10)0.2617994));
    D3DXVec3TransformNormal(&stack0xffffff48,&stack0xffffff48,auStack_58);
    fStack_80 = local_b0 + local_a0;
    fStack_7c = local_ac + local_9c;
    fStack_78 = local_a8 + local_98;
    fStack_74 = local_a4 + local_94;
    iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_22(0,0,&local_70,&fStack_80,0x3f000000);
    if (iVar1 == 0) {
      iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_22(0,0,&local_a0,&fStack_80,0x3f000000)
      ;
      if (iVar1 != 0) {
        FUN_00da93f0(0);
        goto LAB_00dcf1af;
      }
      goto LAB_00dcf12e;
    }
  }
  else {
    local_70 = *(float *)(param_2 + 0x1b0);
    local_6c = *(float *)(param_2 + 0x1b4);
    local_68 = *(float *)(param_2 + 0x1b8);
    local_64 = *(float *)(param_2 + 0x1bc);
    local_b0 = *(float *)(param_2 + 0x1c0);
    local_ac = *(float *)(param_2 + 0x1c4);
    local_a8 = *(float *)(param_2 + 0x1c8);
    local_a4 = *(float *)(param_2 + 0x1cc);
    local_a0 = local_70 - local_b0;
    local_9c = local_6c - local_ac;
    local_98 = local_68 - local_a8;
    local_94 = local_64 - local_a4;
    D3DXMatrixRotationY(local_50,(float)(fVar4 + (float10)0.2617994));
    D3DXVec3TransformNormal(&local_a8,&local_a8,auStack_58);
    fStack_80 = local_a0 + local_b0;
    fStack_7c = local_9c + local_ac;
    fStack_78 = local_98 + local_a8;
    fStack_74 = local_94 + local_a4;
    iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_22(0,0,&local_70,&fStack_80,0x3f000000);
    if ((iVar1 == 0) &&
       (iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_22
                          (0,0,&local_b0,&fStack_80,0x3f000000), iVar1 == 0)) {
LAB_00dcf12e:
      fVar4 = (float10)local_84;
LAB_00dcf132:
      FUN_00da93f0((float)fVar4);
      goto LAB_00dcf1af;
    }
  }
  FUN_00da93f0(0);
LAB_00dcf1af:
  if ((*(int *)(param_2 + 0x6f0) == 0) || (local_54 == 0)) {
    iVar1 = FUN_00da5bd0();
    if ((iVar1 == 0) &&
       (((*(float *)(param_3 + 0x220) < *(float *)(param_3 + 0x224) ==
          (*(float *)(param_3 + 0x220) == *(float *)(param_3 + 0x224)) ||
         ((*(uint *)(param_3 + 0xfc) & 0x10000000) != 0)) ||
        (((*(uint *)(param_3 + 0x80) & 0x10000000) != 0 &&
         (*(float *)(param_3 + 0x1a8) < *(float *)(param_3 + 0x1ac) ==
          (*(float *)(param_3 + 0x1a8) == *(float *)(param_3 + 0x1ac)))))))) {
      fVar4 = (float10)FUN_00dbb350(param_2);
      FUN_00da9380((float)fVar4);
    }
  }
  else {
    uVar5 = FUN_00db1a60();
    if ((int)uVar5 == 0) {
      FUN_00da4530(param_2,(int)((ulonglong)uVar5 >> 0x20));
    }
    else {
      fVar4 = (float10)FUN_00dbb350(param_2);
      FUN_00da9380((float)fVar4);
    }
  }
  FUN_00dbe570(param_2 + 0x360,param_2 + 0x4b0);
  return;
}

// 00DCF2A0  Camera::StateSubWeaponAiming::vf10  size=1195  [class]
void __thiscall Camera::StateSubWeaponAiming::vf10(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float fVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  float *pfVar8;
  float fVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined1 **ppuVar12;
  float fVar13;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  float fVar17;
  undefined1 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  float fStack_f0;
  int *piStack_ec;
  undefined4 *puStack_e8;
  undefined1 *puStack_e4;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  int aiStack_c0 [2];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [8];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [6];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [76];
  
  *(undefined4 *)(param_2 + 0x37c) = 0;
  *(undefined4 *)(param_2 + 0x380) = 0;
  puStack_e8 = (undefined4 *)0xdcf2d4;
  puStack_e4 = (undefined1 *)(param_2 + 0x460);
  FUN_00da01f0();
  *(undefined4 *)(param_2 + 0x37c) = *(undefined4 *)(param_2 + 0x770);
  *(undefined4 *)(param_2 + 0x380) = 0;
  puStack_e8 = (undefined4 *)0xdcf2f4;
  puStack_e4 = (undefined1 *)(param_2 + 0x460);
  FUN_00da01f0();
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcf314:
    puStack_e4 = (undefined1 *)0xdcf31f;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) goto LAB_00dcf323;
    uStack_a4 = 0;
  }
  else {
    puStack_e4 = (undefined1 *)0xdcf305;
    piVar2 = (int *)FUN_00c13920();
    puStack_e4 = (undefined1 *)0x1;
    puStack_e8 = (undefined4 *)0xdcf310;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 == 0) goto LAB_00dcf314;
LAB_00dcf323:
    puStack_e4 = (undefined1 *)0xdcf32a;
    uStack_a4 = FUN_00a7c8a0();
  }
  fStack_d0 = *(float *)(param_1 + 0x10);
  puStack_e8 = (undefined4 *)(param_2 + 0x1e0);
  puStack_e4 = (undefined1 *)0x5;
  uStack_cc = *(undefined4 *)(param_1 + 0x14);
  piStack_ec = (int *)auStack_50;
  uStack_c8 = *(undefined4 *)(param_1 + 0x18);
  fStack_c4 = *(float *)(param_1 + 0x1c);
  uStack_a0 = 0x3f800000;
  uStack_9c = 0;
  auStack_98[0] = 0;
  fStack_f0 = 2.0291152e-38;
  FUN_00ddc1d0();
  puStack_e4 = auStack_50;
  puStack_e8 = &uStack_a0;
  piStack_ec = aiStack_c0;
  fStack_f0 = 2.0291189e-38;
  D3DXVec3TransformNormal();
  fVar5 = (float)(param_2 + 0x390);
  puStack_f8 = &uStack_cc;
  puStack_fc = (undefined1 *)0xdcf3a8;
  puStack_f4 = puStack_f8;
  fStack_f0 = fVar5;
  D3DXVec3TransformNormal();
  puStack_fc = (undefined1 *)0x5;
  puStack_e8 = (undefined4 *)
               ((*(float *)(param_2 + 0x3c0) + unaff_EBX) * *(float *)(param_1 + 0x20) +
               (float)puStack_e8);
  puStack_e4 = (undefined1 *)
               ((*(float *)(param_2 + 0x3c4) + fStack_d4) * *(float *)(param_1 + 0x20) +
               (float)puStack_e4);
  uStack_b8 = 0;
  uStack_b4 = 0x3f800000;
  uStack_b0 = 0;
  FUN_00ddc1d0(auStack_68,param_2 + 0x1e0);
  puStack_fc = auStack_68;
  puVar16 = &uStack_b8;
  puVar15 = &stack0xffffff28;
  D3DXVec3TransformNormal(puVar15);
  ppuVar12 = &puStack_e4;
  ppuVar14 = ppuVar12;
  fVar11 = fVar5;
  D3DXVec3TransformNormal(ppuVar12,ppuVar12,fVar5);
  fVar9 = *(float *)(param_1 + 0x24);
  fVar13 = (*(float *)(param_2 + 0x3c0) + fStack_f0) * fVar9 + (float)puVar16;
  puStack_fc = (undefined1 *)
               ((*(float *)(param_2 + 0x3c4) + (float)piStack_ec) * fVar9 + (float)puStack_fc);
  puStack_f8 = (undefined4 *)
               ((*(float *)(param_2 + 0x3c8) + (float)puStack_e8) * fVar9 + (float)puStack_f8);
  puStack_f4 = (undefined4 *)(fVar9 * (float)puStack_e4 + (float)puStack_f4);
  fStack_d0 = 0.0;
  uStack_cc = 0;
  uStack_c8 = 0x3f800000;
  FUN_00ddc1d0(auStack_80,param_2 + 0x1e0,5);
  puVar10 = auStack_80;
  pfVar8 = &fStack_d0;
  D3DXVec3TransformNormal(&fStack_f0,pfVar8,puVar10);
  ppuVar6 = &puStack_fc;
  ppuVar7 = ppuVar6;
  D3DXVec3TransformNormal(ppuVar6,ppuVar6,fVar5);
  piVar2 = piStack_ec;
  fVar5 = *(float *)(param_1 + 0x28);
  fVar9 = (fVar11 + *(float *)(param_2 + 0x3c0)) * fVar5 + (float)pfVar8;
  fVar11 = (*(float *)(param_2 + 0x3c4) + (float)puVar15) * fVar5 + (float)puVar10;
  fVar13 = (*(float *)(param_2 + 0x3c8) + fVar13) * fVar5 + (float)ppuVar12;
  fVar5 = fVar5 * (float)puStack_fc + (float)ppuVar14;
  iVar3 = FUN_00a12290(0xffffffff);
  if (iVar3 == 0) {
    fVar17 = (float)piVar2[0x12];
    fVar1 = (float)piVar2[0x13];
  }
  else {
    fVar17 = *(float *)(iVar3 + 0x48);
    fVar1 = *(float *)(iVar3 + 0x4c);
  }
  fVar17 = fVar17 + fVar13;
  puStack_fc = (undefined1 *)(fVar1 + fVar5);
  piStack_ec = (int *)SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9);
  iVar3 = (**(code **)(*piVar2 + 0x84))();
  puStack_e4 = (undefined1 *)(*(float *)(iVar3 + 4) + 3.1415927);
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar3 != 0) {
      fVar5 = 0.0;
      goto LAB_00dcf5d2;
    }
  }
  fVar5 = *(float *)(*(int *)(param_2 + 0x378) + 0x278c);
LAB_00dcf5d2:
  fVar5 = fVar5 * -1.0;
  fStack_d0 = (float)piStack_ec;
  D3DXMatrixRotationX();
  D3DXVec3TransformNormal(&stack0xffffff20,&stack0xffffff20,&uStack_a0);
  D3DXMatrixRotationY(auStack_ac,puStack_f8);
  D3DXVec3TransformNormal(&puStack_f4,&puStack_f4,&uStack_b4);
  fStack_f0 = fVar17 + (float)auStack_98;
  piStack_ec = (int *)((float)puStack_fc + fVar5);
  puStack_e8 = (undefined4 *)((float)puStack_f8 + (float)ppuVar6);
  puStack_e4 = (undefined1 *)((float)puStack_f4 + (float)ppuVar7);
  FUN_00dcd1f0(&fStack_f0,&fStack_f0,piVar2);
  *(float *)(param_2 + 0x4b0) = fStack_f0;
  *(int **)(param_2 + 0x4b4) = piStack_ec;
  *(undefined4 **)(param_2 + 0x4b8) = puStack_e8;
  *(undefined1 **)(param_2 + 0x4bc) = puStack_e4;
  *(undefined4 **)(param_2 + 0x4c0) = auStack_98;
  *(float *)(param_2 + 0x4c4) = fVar5;
  *(undefined1 ***)(param_2 + 0x4c8) = ppuVar6;
  *(undefined1 ***)(param_2 + 0x4cc) = ppuVar7;
  thunk_FUN_00dde510(&fStack_c4,&uStack_c8,&stack0xffffff20,&fStack_f0);
  *(float *)(param_2 + 0x360) = -fStack_c4;
  *(undefined4 *)(param_2 + 0x364) = uStack_c8;
  return;
}

// 00DCF750  Camera::StatePlayerDead::vf10  size=248  [class]
void __fastcall Camera::StatePlayerDead::vf10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [24];
  undefined4 uStack_18;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar5 != 0) goto LAB_00dcf794;
  }
  iVar5 = FUN_00a81330();
  if (iVar5 == 0) {
    return;
  }
LAB_00dcf794:
  iVar5 = FUN_00a7c8a0();
  if (iVar5 != 0) {
    iVar5 = param_1 + 0x60;
    FUN_00dcd7a0(iVar5,iVar5,0);
    fVar2 = *(float *)(param_1 + 0xb4) + 1.0;
    *(float *)(param_1 + 0xb4) = fVar2;
    fVar1 = *(float *)(param_1 + 0xb0);
    fVar3 = 0.0;
    if ((fVar2 < 0.0) || (fVar3 = fVar2, fVar2 <= fVar1)) {
      fVar1 = fVar3;
    }
    *(float *)(param_1 + 0xb4) = fVar1;
    fVar6 = (float10)FUN_00db51c0();
    FUN_00dbeb10(auStack_60,param_1 + 0x10,iVar5,(float)fVar6);
    FUN_00dcd7a0(auStack_60,auStack_60,0x3dcccccd);
    Math::safePositionTargetXz_2(auStack_60,auStack_50,auStack_30,uStack_18);
  }
  return;
}

// 00DCF850  Camera::StateSlashingBehind::vf10  size=1379  [class]
void __thiscall Camera::StateSlashingBehind::vf10(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  
  FUN_00dbd770(param_2);
  iVar5 = *(int *)(param_1 + 0x74);
  local_b0 = *(float *)(iVar5 + 0x40);
  local_ac = *(float *)(iVar5 + 0x44);
  local_a8 = *(float *)(iVar5 + 0x48);
  local_a4 = *(undefined4 *)(iVar5 + 0x4c);
  local_c0 = 0.0;
  local_bc = 0.0;
  local_b8 = 1.0;
  local_d0 = 1.0;
  local_dc = 1.0;
  local_cc = 0.0;
  local_c8 = 0.0;
  local_e0 = 0.0;
  local_d8 = 0.0;
  D3DXVec3TransformNormal(&local_c0,&local_c0,*(int *)(param_1 + 0x70) + 0x10);
  D3DXVec3TransformNormal(&local_dc,&local_dc,*(int *)(param_1 + 0x70) + 0x10);
  D3DXVec3TransformNormal(&fStack_f8,&fStack_f8,*(int *)(param_1 + 0x70) + 0x10);
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = *(float *)(param_1 + 0x84);
  fVar3 = *(float *)(param_1 + 0x88);
  fStack_84 = fVar3 * fStack_e4 + fStack_104 * fVar2 + fStack_f4 * fVar1 + fStack_d4;
  fStack_80 = local_e0 * fVar3 + fStack_100 * fVar2 + fStack_f0 * fVar1 + local_d0;
  fStack_7c = local_dc * fVar3 + fStack_fc * fVar2 + fStack_ec * fVar1 + local_cc;
  fStack_78 = local_d8 * fVar3 + fStack_f8 * fVar2 + fStack_e8 * fVar1 + local_c8;
  fVar1 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x94);
  fStack_c4 = fVar2 * fStack_104;
  fVar3 = *(float *)(param_1 + 0x98);
  local_c0 = local_e0 * fVar3;
  local_bc = local_dc * fVar3;
  fStack_74 = fVar3 * fStack_e4 + fStack_c4 + fStack_f4 * fVar1 + fStack_d4;
  fStack_70 = local_c0 + fStack_100 * fVar2 + fStack_f0 * fVar1 + local_d0;
  fStack_6c = local_bc + fStack_fc * fVar2 + fStack_ec * fVar1 + local_cc;
  fStack_68 = fVar3 * local_d8 + fVar2 * fStack_f8 + fVar1 * fStack_e8 + local_c8;
  if (*(float *)(param_1 + 0xa0) != 0.0) {
    FUN_00ddcfe0(&fStack_c4,&fStack_e4,*(float *)(param_1 + 0xa0) * 0.017453292);
    D3DXVec3TransformNormal(&fStack_104,&fStack_104,&fStack_c4);
  }
  fVar2 = 0.0;
  fVar3 = *(float *)(param_1 + 0xc) + 1.0;
  *(float *)(param_1 + 0xc) = fVar3;
  fVar1 = *(float *)(param_1 + 8);
  if ((fVar3 < 0.0) || (fVar2 = fVar3, fVar3 <= fVar1)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0xc) = fVar1;
  fStack_54 = fStack_104;
  fStack_50 = fStack_100;
  fStack_4c = fStack_fc;
  fStack_48 = fStack_f8;
  fStack_3c = *(float *)(param_1 + 0xa4) * 0.017453292;
  fVar7 = (float10)FUN_00db51c0();
  if (*(int *)(param_1 + 4) == 0x32) {
    *(float *)(param_1 + 0x50) = fStack_104;
    *(float *)(param_1 + 0x54) = fStack_100;
    *(float *)(param_1 + 0x58) = fStack_fc;
    *(float *)(param_1 + 0x5c) = fStack_f8;
    FUN_00dbedf0(&fStack_84,param_1 + 0x20,&fStack_84,(float)fVar7);
  }
  else {
    FUN_00dbeb10(&fStack_84,param_1 + 0x20,&fStack_84,(float)fVar7);
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
    break;
  default:
    goto switchD_00dcfc61_caseD_2;
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcfc88:
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) goto LAB_00dcfc97;
    uVar6 = 0;
  }
  else {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar5 == 0) goto LAB_00dcfc88;
LAB_00dcfc97:
    uVar6 = FUN_00a7c8a0();
  }
  fStack_c4 = fStack_84;
  local_c0 = fStack_80;
  local_bc = fStack_7c;
  local_b8 = fStack_78;
  fStack_b4 = fStack_74;
  local_b0 = fStack_70;
  local_ac = fStack_6c;
  local_a8 = fStack_68;
  FUN_00dcd1f0(&fStack_c4,&fStack_c4,uVar6);
  fStack_84 = fStack_c4;
  fStack_80 = local_c0;
  fStack_7c = local_bc;
  fStack_78 = local_b8;
  fStack_74 = fStack_b4;
  fStack_70 = local_b0;
  fStack_6c = local_ac;
  fStack_68 = local_a8;
switchD_00dcfc61_caseD_2:
  Math::safePositionTargetXz_2(&fStack_84,&fStack_74,&fStack_54,fStack_3c);
  return;
}

// 00DCFDE0  FUN_00dcfde0  size=1491  [between]
void __thiscall FUN_00dcfde0(int *param_1,int param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  float *pfVar29;
  undefined4 *puVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dcfe11:
    iVar27 = FUN_00a81330();
    if (iVar27 == 0) {
      iVar27 = 0;
      goto LAB_00dcfe30;
    }
  }
  else {
    piVar26 = (int *)FUN_00c13920();
    iVar27 = (**(code **)(*piVar26 + 0x28))(1);
    if (iVar27 == 0) goto LAB_00dcfe11;
  }
  iVar27 = FUN_00a7c8a0();
LAB_00dcfe30:
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fStack_a0 = param_3[4];
  fStack_9c = param_3[5];
  fStack_98 = param_3[6];
  fStack_54 = param_3[8];
  iVar28 = FUN_00a12290(0xffffffff);
  if (iVar28 == 0) {
    fStack_b0 = *(float *)(iVar27 + 0x40);
    fStack_ac = *(float *)(iVar27 + 0x44);
    fStack_a8 = *(float *)(iVar27 + 0x48);
    fVar4 = *(float *)(iVar27 + 0x4c);
  }
  else {
    fStack_b0 = *(float *)(iVar28 + 0x40);
    fStack_ac = *(float *)(iVar28 + 0x44);
    fStack_a8 = *(float *)(iVar28 + 0x48);
    fVar4 = *(float *)(iVar28 + 0x4c);
  }
  pfVar29 = (float *)FUN_00a92640(&fStack_80);
  fVar5 = *pfVar29;
  fVar6 = pfVar29[1];
  fVar7 = pfVar29[2];
  fVar8 = pfVar29[3];
  pfVar29 = (float *)FUN_00a926e0(&fStack_80);
  fVar9 = *pfVar29;
  fVar10 = pfVar29[1];
  fVar11 = pfVar29[2];
  fVar12 = pfVar29[3];
  pfVar29 = (float *)FUN_00a925a0(&fStack_80);
  fVar13 = pfVar29[1];
  fVar14 = pfVar29[3];
  fVar5 = *pfVar29 * fVar3 + fVar9 * fVar2 + fVar5 * fVar1 + fStack_b0;
  fVar7 = pfVar29[2] * fVar3 + fVar11 * fVar2 + fVar7 * fVar1 + fStack_a8;
  iVar28 = FUN_00a12290(0xffffffff);
  if (iVar28 == 0) {
    fStack_c0 = *(float *)(iVar27 + 0x40);
    fStack_bc = *(float *)(iVar27 + 0x44);
    fStack_b8 = *(float *)(iVar27 + 0x48);
    fVar9 = *(float *)(iVar27 + 0x4c);
  }
  else {
    fStack_c0 = *(float *)(iVar28 + 0x40);
    fStack_bc = *(float *)(iVar28 + 0x44);
    fStack_b8 = *(float *)(iVar28 + 0x48);
    fVar9 = *(float *)(iVar28 + 0x4c);
  }
  pfVar29 = (float *)FUN_00a92640(&fStack_80);
  fVar11 = *pfVar29 * fStack_a0;
  fVar17 = pfVar29[1] * fStack_a0;
  fVar18 = pfVar29[2] * fStack_a0;
  fVar19 = pfVar29[3] * fStack_a0;
  pfVar29 = (float *)FUN_00a926e0(&fStack_80);
  fVar15 = *pfVar29 * fStack_9c;
  fVar20 = pfVar29[1] * fStack_9c;
  fVar16 = pfVar29[2] * fStack_9c;
  fVar21 = pfVar29[3] * fStack_9c;
  pfVar29 = (float *)FUN_00a925a0(&fStack_80);
  fVar22 = pfVar29[1] * fStack_98;
  fVar23 = pfVar29[3] * fStack_98;
  fVar11 = *pfVar29 * fStack_98 + fVar15 + fVar11 + fStack_c0;
  fVar18 = pfVar29[2] * fStack_98 + fVar16 + fVar18 + fStack_b8;
  if (*param_1 == 0) {
    FUN_00da01f0(param_2 + 0x460);
    fVar15 = (float)param_1[0xc] - (float)param_1[8];
    fVar16 = (float)param_1[0xe] - (float)param_1[10];
    fVar25 = fVar11 - fVar5;
    fVar24 = fVar18 - fVar7;
    fVar31 = (float10)FUN_00ddbb50((fVar25 * fVar15 + fVar24 * fVar16) /
                                   (SQRT(fVar24 * fVar24 + fVar25 * fVar25) *
                                   SQRT(fVar16 * fVar16 + fVar15 * fVar15)));
    fVar32 = (float10)param_3[9];
    fVar31 = ABS(fVar31);
    if ((float10)param_3[10] < fVar31) {
      fVar32 = (fVar31 - (float10)param_3[10]) * (float10)57.29578 * (float10)param_3[0xb] + fVar32;
    }
    fVar33 = (float10)0.5;
    if ((float10)param_3[0xc] < fVar31) {
      fVar33 = fVar33 + (float10)param_3[0xd] * (float10)0.01 *
                        (fVar31 - (float10)param_3[0xc]) * (float10)57.29578;
      if ((float10)1 < fVar33) {
        fVar33 = (float10)1;
      }
    }
    fVar15 = param_3[0xf];
    fVar16 = param_3[0xe];
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    param_1[1] = (int)(float)fVar32;
    param_1[2] = 0;
    param_1[3] = (int)fVar16;
    param_1[4] = (int)fVar15;
    *param_1 = 1;
    param_1[5] = (int)(float)fVar33;
  }
  fVar32 = (float10)FUN_00a92ff0();
  fVar31 = fVar32 * fVar32 * (float10)0.85 + (float10)0.15 + (float10)(float)param_1[2];
  param_1[2] = (int)(float)fVar31;
  fVar33 = (float10)(float)param_1[1];
  fVar32 = (float10)0;
  if ((fVar31 < (float10)0) || (fVar32 = fVar31, fVar31 <= fVar33)) {
    fVar33 = fVar32;
  }
  param_1[2] = (int)(float)fVar33;
  fVar32 = (float10)FUN_00db51c0();
  fStack_58 = (float)fVar32;
  iStack_50 = param_1[8];
  iStack_4c = param_1[9];
  iStack_48 = param_1[10];
  iStack_44 = param_1[0xb];
  iStack_40 = param_1[0xc];
  iStack_3c = param_1[0xd];
  iStack_38 = param_1[0xe];
  iStack_34 = param_1[0xf];
  fStack_a0 = 0.0;
  fStack_9c = 1.0;
  fStack_98 = 0.0;
  fStack_80 = fVar5;
  fStack_7c = fVar13 * fVar3 + fVar10 * fVar2 + fVar6 * fVar1 + fStack_ac;
  fStack_78 = fVar7;
  fStack_74 = fVar14 * fVar3 + fVar12 * fVar2 + fVar8 * fVar1 + fVar4;
  fStack_70 = fVar11;
  fStack_6c = fVar22 + fVar20 + fVar17 + fStack_bc;
  fStack_68 = fVar18;
  fStack_64 = fVar23 + fVar21 + fVar19 + fVar9;
  FUN_00db6970(auStack_30,&iStack_50,&fStack_80,&fStack_a0,param_1[5],(float)fVar32);
  FUN_00dcd1f0(auStack_30,auStack_30,iVar27);
  FUN_00a926e0(&fStack_90);
  fStack_90 = (fStack_90 - (float)param_1[0x14]) * fStack_58 + (float)param_1[0x14];
  fStack_8c = (fStack_8c - (float)param_1[0x15]) * fStack_58 + (float)param_1[0x15];
  fStack_88 = (fStack_88 - (float)param_1[0x16]) * fStack_58 + (float)param_1[0x16];
  fStack_84 = (fStack_84 - (float)param_1[0x17]) * fStack_58 + (float)param_1[0x17];
  Camera::Math::safePositionTargetXz_2
            (auStack_30,auStack_20,&fStack_90,
             fStack_58 * fStack_54 + (1.0 - fStack_58) * (float)param_1[0x1a]);
  fStack_a0 = 0.0;
  fStack_9c = 1.0;
  fStack_98 = 0.0;
  puVar30 = (undefined4 *)FUN_00da9920(&fStack_80,&fStack_a0);
  *(undefined4 *)(param_2 + 0x360) = *puVar30;
  *(undefined4 *)(param_2 + 0x364) = puVar30[1];
  *(undefined4 *)(param_2 + 0x368) = puVar30[2];
  *(undefined4 *)(param_2 + 0x36c) = puVar30[3];
  return;
}

// 00DD03E0  FUN_00dd03e0  size=270  [between]
void __fastcall FUN_00dd03e0(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00db8ad0();
  FUN_00dca7c0();
  FUN_00dcad20();
  if (*(int *)(param_1 + 0x920) == 0) {
    uVar2 = 0xbf800000;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x4a4);
  }
  *(undefined4 *)(param_1 + 0x928) = uVar2;
  pfVar1 = (float *)(param_1 + 0x460);
  FUN_00db9090(&local_30);
  FUN_00dbe1b0(pfVar1,param_1);
  FUN_00db53c0(pfVar1,0);
  local_20 = *(float *)(param_1 + 0x510) + local_30;
  local_1c = *(float *)(param_1 + 0x514) + local_2c;
  local_18 = *(float *)(param_1 + 0x518) + local_28;
  local_14 = *(float *)(param_1 + 0x51c) + local_24;
  local_30 = *(float *)(param_1 + 0x470) + local_20;
  local_2c = *(float *)(param_1 + 0x474) + local_1c;
  local_28 = *(float *)(param_1 + 0x478) + local_18;
  local_24 = *(float *)(param_1 + 0x47c) + local_14;
  local_20 = *pfVar1 + local_20;
  local_1c = *(float *)(param_1 + 0x464) + local_1c;
  local_18 = local_18 + *(float *)(param_1 + 0x468);
  local_14 = local_14 + *(float *)(param_1 + 0x46c);
  FUN_00de5d10(&local_20,&local_30,param_1 + 0x490);
  FUN_00db8090();
  return;
}

// 00DD0510  Camera::StateBattle::vf10  size=999  [class]
void __thiscall Camera::StateBattle::vf10(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  float local_28;
  float local_24 [4];
  undefined4 local_14;
  
  local_24[0] = *(float *)(param_2 + 0x94);
  if ((*(uint *)(param_3 + 0xfc) & 0x80000000) == 0) {
    fVar1 = 0.87266463;
  }
  else {
    fVar1 = *(float *)(param_3 + 0x10c);
  }
  fVar10 = (float10)FUN_00db51c0();
  fVar11 = (float10)1;
  *(float *)(param_2 + 0x4f8) =
       (float)((fVar11 / ((fVar11 - fVar10) * (float10)*(float *)(param_3 + 0x178) + fVar11)) *
               ((float10)fVar1 - (float10)local_24[0]) + (float10)local_24[0]);
  *(undefined4 *)(param_2 + 0x4f0) = 0;
  *(undefined4 *)(param_2 + 0x4e0) = 0;
  *(undefined4 *)(param_2 + 0x4e8) = 0;
  *(float *)(param_2 + 0x4e4) = (float)fVar11;
  *(undefined4 *)(param_2 + 0x4ec) = local_14;
  if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_00dd0649;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd05d1:
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) goto LAB_00dd05e0;
    iVar5 = 0;
  }
  else {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar5 == 0) goto LAB_00dd05d1;
LAB_00dd05e0:
    iVar5 = FUN_00a7c8a0();
  }
  fVar1 = *(float *)(param_2 + 0x1b0) - *(float *)(iVar5 + 0x40);
  fVar3 = *(float *)(param_2 + 0x1b4) - (*(float *)(iVar5 + 0x44) + 1.4);
  fVar2 = *(float *)(param_2 + 0x1b8) - *(float *)(iVar5 + 0x48);
  if (2.0 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1)) {
    if (0 < *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0xf;
    FUN_00dcbcf0(param_2);
  }
LAB_00dd0649:
  if (*(int *)(param_1 + 0x34) == 0) {
    fVar1 = *(float *)(param_1 + 0x28) - 0.1;
    *(float *)(param_1 + 0x28) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    fVar1 = *(float *)(param_1 + 0x30) * 0.98;
    *(float *)(param_1 + 0x30) = fVar1;
    if (0.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  if (*(int *)(param_2 + 0x6f8) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x6f8) + 0x4b0);
  }
  uVar7 = FUN_00daefb0(uVar6);
  if (uVar7 < 0x40) {
    if ((*(uint *)(PTR_DAT_018bc3a0 + uVar7 * 0xd8 + 0xd1fc) & 0x40000000) == 0) {
      puVar8 = PTR_DAT_018bc3a0 + 0x1078c;
    }
    else {
      puVar8 = PTR_DAT_018bc3a0 + uVar7 * 0xd8 + 0xd18c;
    }
  }
  else {
    puVar8 = PTR_DAT_018bc3a0 + 0x1078c;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar8 + 0x84);
  FUN_00dcee20(param_2,param_3);
  if ((*(uint *)(param_3 + 0x108) & 0x40000000) == 0) {
    FUN_00db9880(0x3f800000);
  }
  else {
    *(undefined4 *)(param_2 + 0x778) = 0;
    *(undefined4 *)(param_2 + 0x77c) = 0;
    FUN_00db89b0(0);
    FUN_00db8a40(0);
  }
  FUN_00dc6db0(param_2,param_3);
  FUN_00dc92a0(param_2,param_3);
  iVar5 = 0;
  pfVar9 = (float *)(param_3 + 0x294);
  do {
    if (*pfVar9 != 0.0) goto LAB_00dd07c1;
    iVar5 = iVar5 + 1;
    pfVar9 = pfVar9 + 0x10;
  } while (iVar5 < 3);
  if (((*(float *)(param_2 + 0x77c) == 0.0) && (*(float *)(param_2 + 0x784) == 0.0)) &&
     ((*(byte *)(param_1 + 4) & 1) == 0)) {
    iVar5 = FUN_00dcc900(local_24,param_2,param_3);
    *(int *)(param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(param_2 + 0x924) = 1;
      *(float *)(param_2 + 0x78c) = local_24[0];
    }
  }
LAB_00dd07c1:
  *(undefined4 *)(param_2 + 0x7b0) = *(undefined4 *)(param_3 + 0x23c);
  *(undefined4 *)(param_2 + 0x7a0) = *(undefined4 *)(param_3 + 0x240);
  local_24[0] = *(float *)(param_2 + 0x780) + *(float *)(param_2 + 0x778) +
                *(float *)(param_2 + 0x788);
  local_28 = *(float *)(param_2 + 0x784) + *(float *)(param_2 + 0x77c) + *(float *)(param_2 + 0x78c)
  ;
  if (0.0 < *(float *)(param_2 + 0x7c4)) {
    fVar11 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x7c8) - *(float *)(param_2 + 0x364));
    local_28 = (float)(fVar11 * (float10)0.1);
    fVar1 = *(float *)(param_2 + 0x7c4) - 1.0;
    *(float *)(param_2 + 0x7c4) = fVar1;
    *(float *)(param_2 + 0x37c) = fVar1;
    *(undefined4 *)(param_2 + 0x380) = 0;
    FUN_00da01f0(param_2 + 0x460);
  }
  if (*(int *)(param_2 + 0x774) == 0) {
    FUN_00da90c0(local_24[0]);
    FUN_00da0e40(local_28);
  }
  else {
    fVar11 = (float10)FUN_00ddba30(local_24[0] + *(float *)(param_2 + 0x360));
    *(float *)(param_2 + 0x360) = (float)fVar11;
    fVar11 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x364) + local_28);
    *(float *)(param_2 + 0x364) = (float)fVar11;
  }
  FUN_00db24d0(param_2);
  if ((*(uint *)(param_3 + 0x108) & 0x80000000) == 0) {
    *(undefined4 *)(param_2 + 0x920) = 1;
  }
  FUN_00da0fb0();
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

// 00DD0900  FUN_00dd0900  size=433  [between]
void __thiscall FUN_00dd0900(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float afStack_30 [2];
  float fStack_28;
  undefined1 auStack_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x184) + 1.0;
  *(float *)(param_1 + 0x184) = fVar1;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    if (*(float *)(param_1 + 0x180) < fVar1) {
      fVar1 = *(float *)(param_1 + 0x180);
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x184) = fVar1;
  fVar3 = *(float *)(param_1 + 0x194) + 1.0;
  *(float *)(param_1 + 0x194) = fVar3;
  fVar1 = *(float *)(param_1 + 400);
  if ((fVar3 < 0.0) || (fVar2 = fVar3, fVar3 <= fVar1)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x194) = fVar1;
  if ((*param_1 & 1) == 0) {
    FUN_00dc3ea0(param_2,param_3);
  }
  else {
    FUN_00dcbf70(param_2,param_3);
  }
  FUN_00dc4030(param_3);
  FUN_00dc3a00(param_3);
  FUN_00dbbd10(param_3);
  FUN_00dc3b10(param_2,param_3);
  FUN_00dbbe30(param_3);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd09ec:
    iVar5 = FUN_00a81330();
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_00dd0a06;
    }
  }
  else {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar5 == 0) goto LAB_00dd09ec;
  }
  iVar5 = FUN_00a7c8a0();
LAB_00dd0a06:
  uStack_40 = *(undefined4 *)(iVar5 + 0x40);
  uStack_3c = *(undefined4 *)(iVar5 + 0x44);
  uStack_38 = *(undefined4 *)(iVar5 + 0x48);
  uStack_34 = *(undefined4 *)(iVar5 + 0x4c);
  FUN_00db5960(auStack_20,iVar5);
  uStack_44 = 0x3dcccccd;
  FUN_00dbf6e0(afStack_30,&uStack_40,auStack_20,&uStack_44,1,0xbf800000);
  *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xb0) + afStack_30[0];
  *(float *)(param_1 + 0xb8) = fStack_28 + *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0xc0) = afStack_30[0] + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 200) = fStack_28 + *(float *)(param_1 + 200);
  FUN_00db28b0();
  return;
}

// 00DD0AC0  FUN_00dd0ac0  size=230  [between]
void __thiscall FUN_00dd0ac0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  FUN_00db27b0(param_3);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd0af3:
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00dd0b0d;
    }
  }
  else {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 == 0) goto LAB_00dd0af3;
  }
  iVar2 = FUN_00a7c8a0();
LAB_00dd0b0d:
  fVar4 = (float10)fpatan(-((float10)*(float *)(*(int *)(param_2 + 0x6f8) + 0x40) -
                           (float10)*(float *)(iVar2 + 0x40)),
                          -((float10)*(float *)(*(int *)(param_2 + 0x6f8) + 0x48) -
                           (float10)*(float *)(iVar2 + 0x48)));
  fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_3 + 0x104) - fVar4));
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)fVar4 - fVar3));
  *(float *)(param_1 + 0x104) = (float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)3.1415927));
  *(float *)(param_1 + 0xf4) = (float)fVar3;
  FUN_00da7460();
  thunk_FUN_00de01a0(param_1 + 0x70,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xd0);
  FUN_00dd0900(param_2,param_4);
  return;
}

// 00DD0BB0  Camera::StateRadio::vf10  size=654  [class]
void __thiscall Camera::StateRadio::vf10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  undefined4 *puVar5;
  float unaff_EDI;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfStack_9c;
  undefined4 *puStack_98;
  float local_94;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 *local_5c;
  float local_58;
  float local_54;
  undefined4 local_50 [7];
  float local_34;
  
  local_6c = *(float *)(PTR_DAT_018bc3a4 + 0xf4);
  local_68 = *(float *)(PTR_DAT_018bc3a4 + 0xf8);
  local_70 = *(float *)(PTR_DAT_018bc3a4 + 0xf0);
  fVar1 = *(float *)(PTR_DAT_018bc3a4 + 0x100);
  puVar5 = (undefined4 *)(param_2 + 0x720);
  puVar6 = local_50;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_60 = *(float *)(PTR_DAT_018bc3a4 + 0x108);
  local_5c = *(undefined4 **)(PTR_DAT_018bc3a4 + 0x10c);
  local_58 = *(float *)(PTR_DAT_018bc3a4 + 0x110);
  local_70 = local_70 - local_60;
  local_6c = local_6c - (float)local_5c;
  local_68 = local_68 - local_58;
  local_64 = local_64 - local_54;
  fVar3 = *(float *)(PTR_DAT_018bc3a4 + 0xfc) - local_60;
  fVar1 = fVar1 - (float)local_5c;
  local_78 = *(float *)(PTR_DAT_018bc3a4 + 0x104) - local_58;
  local_74 = local_74 - local_54;
  fVar2 = local_34 * 0.003921569 * 0.1;
  if (0.2 < ABS(fVar2)) {
    local_94 = 2.0300197e-38;
    fVar7 = (float10)FUN_00da7500();
    fVar8 = (float10)fVar2;
    fVar8 = -(ABS(fVar8) * fVar8) * (float10)-0.1 * fVar7 + (float10)*(float *)(param_1 + 4);
    *(float *)(param_1 + 4) = (float)fVar8;
    fVar7 = (float10)-0.5235988;
    if ((fVar8 < (float10)-0.5235988) || (fVar7 = (float10)0.5235988, (float10)0.5235988 < fVar8)) {
      fVar8 = fVar7;
    }
    *(float *)(param_1 + 4) = (float)fVar8;
  }
  fVar2 = *(float *)(param_1 + 4);
  puStack_98 = local_50;
  pfStack_9c = (float *)0xdd0d09;
  local_94 = fVar2;
  D3DXMatrixRotationX();
  pfStack_9c = &local_58;
  pfVar9 = &local_78;
  pfVar10 = pfVar9;
  D3DXVec3TransformNormal(pfVar9,pfVar9);
  puVar5 = puStack_98;
  D3DXMatrixRotationX(&local_64,puStack_98);
  D3DXVec3TransformNormal(&pfStack_9c,&pfStack_9c,&local_6c);
  puStack_98 = (undefined4 *)((float)puStack_98 + unaff_EBX);
  local_94 = local_94 + fVar2;
  local_70 = unaff_EDI + fVar3;
  local_6c = unaff_ESI + fVar1;
  local_68 = unaff_EBX + (float)puVar5;
  local_64 = fVar2 + (float)pfVar9;
  local_60 = fVar3 + (float)pfVar10;
  pfStack_9c = (float *)(fVar1 + (float)pfStack_9c);
  local_58 = *(float *)(PTR_DAT_018bc3a4 + 0x114) * 0.017453292;
  local_54 = 40.0;
  local_50[0] = 0x3fc90fdb;
  local_50[1] = 0x3dcccccd;
  local_50[2] = 0x3fc90fdb;
  local_50[3] = 0x3e99999a;
  local_50[4] = 0x3f400000;
  local_50[5] = 0x40000000;
  local_78 = (float)puStack_98;
  local_74 = local_94;
  local_5c = pfStack_9c;
  FUN_00dcfde0(param_2,&local_78);
  return;
}

// 00DD0E40  FUN_00dd0e40  size=1197  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00dd0e40(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uStack_c;
  float fStack_8;
  int iStack_4;
  
  fVar4 = param_2;
  FUN_00da9380(0);
  FUN_00da93f0(0);
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd0e86:
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      return;
    }
  }
  else {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 == 0) goto LAB_00dd0e86;
  }
  iVar6 = FUN_00a7c8a0();
  fVar3 = param_3;
  if (iVar6 == 0) {
    return;
  }
  iStack_4 = iVar6;
  if (((*(float *)((int)param_3 + 0x220) < *(float *)((int)param_3 + 0x224) ==
        (*(float *)((int)param_3 + 0x220) == *(float *)((int)param_3 + 0x224))) ||
      ((*(uint *)((int)param_3 + 0xfc) & 0x10000000) != 0)) ||
     (((*(uint *)((int)param_3 + 0x80) & 0x10000000) != 0 &&
      (*(float *)((int)param_3 + 0x1a8) < *(float *)((int)param_3 + 0x1ac) ==
       (*(float *)((int)param_3 + 0x1a8) == *(float *)((int)param_3 + 0x1ac)))))) {
    fVar8 = (float10)FUN_00dbb350(fVar4);
LAB_00dd1133:
    FUN_00da9380((float)fVar8);
  }
  else if ((*(int *)((int)fVar4 + 0x8ec) == 0) && (iVar7 = FUN_00db56a0(), iVar7 != 0)) {
    fStack_8 = 0.12217305;
    param_3 = *(float *)((int)fVar4 + 0x8e4);
    fVar1 = 0.12217305;
    if (3.0 < *(float *)((int)fVar4 + 0x474) - *(float *)(iVar6 + 0x44)) {
      param_2 = 0.0;
      uStack_c = 0;
      thunk_FUN_00dde510(&param_2,&uStack_c,(int)fVar4 + 0x4c0,(int)fVar4 + 0x4b0);
      fVar2 = param_2 * -1.0;
      fVar1 = fStack_8;
      if (!NAN(fVar2) && 0.12217305 < fVar2 != (fVar2 == 0.12217305)) {
        param_3 = 1.0;
        fVar1 = fVar2;
      }
    }
    fVar8 = (float10)FUN_00ddba30(fVar1 - *(float *)((int)fVar4 + 0x360));
    param_2 = (float)(fVar8 * (float10)param_3);
    iVar6 = FUN_00da60e0();
    fVar1 = param_2;
    if (iVar6 == 0) {
      if (ABS(param_2) <= 0.001) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = (120.0 - *(float *)((int)fVar4 + 0x7c0)) * 0.008333334 * 0.02 * param_2;
      }
    }
    FUN_00da9380(fVar1);
    fVar8 = (float10)FUN_004fbd50(*(undefined4 *)((int)fVar4 + 0x788),
                                  *(undefined4 *)((int)fVar4 + 0x7b0),
                                  *(undefined4 *)((int)fVar4 + 0x7a0));
    *(float *)((int)fVar4 + 0x788) = (float)fVar8;
  }
  else {
    if ((DAT_01bea094 & 0x20000) != 0) {
      piVar5 = (int *)FUN_00c13920();
      iVar7 = (**(code **)(*piVar5 + 0x28))(1);
      if (iVar7 != 0) goto LAB_00dd113d;
    }
    iVar7 = (**(code **)(**(int **)((int)fVar4 + 0x378) + 0x340))();
    if (iVar7 != 0) {
      if ((DAT_01bea094 & 0x20000) != 0) {
        piVar5 = (int *)FUN_00c13920();
        iVar7 = (**(code **)(*piVar5 + 0x28))(1);
        if (iVar7 != 0) goto LAB_00dd113d;
      }
      if (((*(int *)((int)fVar4 + 0x378) != 0) && (iVar7 = FUN_00b7e3f0(), iVar7 != 0)) &&
         (3.0 < *(float *)((int)fVar4 + 0x474) - *(float *)(iVar6 + 0x44))) {
        param_2 = 0.0;
        fStack_8 = 0.0;
        thunk_FUN_00dde510(&param_2,&fStack_8,(int)fVar4 + 0x4c0,(int)fVar4 + 0x4b0);
        param_2 = param_2 * -1.0;
        param_3 = *(float *)((int)fVar4 + 0x8e4);
        if (NAN(param_2) || 0.12217305 < param_2 == (param_2 == 0.12217305)) {
          fVar1 = 0.12217305;
        }
        else {
          param_3 = 1.0;
          fVar1 = param_2;
        }
        fVar8 = (float10)FUN_00ddba30(fVar1 - *(float *)((int)fVar4 + 0x360));
        fVar8 = fVar8 * (float10)param_3;
        goto LAB_00dd1133;
      }
    }
  }
LAB_00dd113d:
  iVar6 = FUN_00db34c0(fVar4);
  if (iVar6 == 0) {
    if ((*(uint *)((int)fVar3 + 0xfc) & 0x8000000) != 0) {
      fVar8 = (float10)FUN_00dc2d90(fVar4);
      fVar8 = (float10)FUN_00ddba30((float)fVar8);
      FUN_00da93f0((float)fVar8);
      return;
    }
    if ((*(int *)((int)fVar4 + 0x8ec) == 0) && (iVar6 = FUN_00db56a0(), iVar6 != 0)) {
      iVar6 = FUN_00dcc900(&param_2,fVar4,fVar3);
      *(int *)(param_1 + 0x10) = iVar6;
      if (iVar6 != 0) {
        *(float *)((int)fVar4 + 0x78c) = param_2;
        *(undefined4 *)((int)fVar4 + 0x924) = 1;
        return;
      }
      param_3 = *(float *)(iStack_4 + 0x94) - *(float *)((int)fVar4 + 0x364);
      if (0.1 < ABS(*(float *)((int)fVar4 + 0x734) + *(float *)((int)fVar4 + 0x730))) {
        fVar3 = *(float *)((int)fVar4 + 0x8e4) + 0.05;
        *(float *)((int)fVar4 + 0x8e4) = fVar3;
        if (*(float *)((int)fVar4 + 0x6e0) <= fVar3) {
          *(undefined4 *)((int)fVar4 + 0x8e4) = *(undefined4 *)((int)fVar4 + 0x6e0);
        }
        param_2 = _DAT_01be942c * 0.2;
        iVar6 = FUN_00db57d0();
        if (iVar6 != 0) {
          param_2 = param_2 * 0.5;
        }
        fVar8 = (float10)FUN_00ddba30(param_3);
        FUN_00da93f0((float)((float10)*(float *)((int)fVar4 + 0x8e4) * (float10)param_2 * fVar8));
      }
    }
    return;
  }
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(1);
    if (iVar6 != 0) goto LAB_00dd1180;
  }
  if (*(int *)((int)fVar4 + 0x378) != 0) {
    FUN_00a81330();
  }
LAB_00dd1180:
  iVar6 = FUN_00a7c800();
  fVar8 = (float10)FUN_00ddba30(*(float *)(iVar6 + 0x94) - *(float *)((int)fVar4 + 0x364));
  FUN_00da93f0((float)fVar8);
  return;
}

// 00DD12F0  Camera::StateSlashingNormal::vf10  size=1845  [class]
void __thiscall Camera::StateSlashingNormal::vf10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd1325:
    if ((*(int *)(param_2 + 0x378) == 0) || (*(int *)(*(int *)(param_2 + 0x378) + 0x40c8) != 0x14))
    goto LAB_00dd133c;
    local_a8 = *(float *)(PTR_DAT_018bc3a4 + 0xb8);
    fStack_a0 = *(float *)(PTR_DAT_018bc3a4 + 0xbc);
    fStack_9c = *(float *)(PTR_DAT_018bc3a4 + 0xc0);
    fStack_98 = *(float *)(PTR_DAT_018bc3a4 + 0xc4);
    fStack_80 = *(float *)(PTR_DAT_018bc3a4 + 200);
    fStack_7c = *(float *)(PTR_DAT_018bc3a4 + 0xcc);
    fStack_78 = *(float *)(PTR_DAT_018bc3a4 + 0xd0);
    fStack_58 = *(float *)(PTR_DAT_018bc3a4 + 0xd4);
    fStack_54 = *(float *)(PTR_DAT_018bc3a4 + 0xd8);
    fStack_84 = *(float *)(PTR_DAT_018bc3a4 + 0xdc);
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00dd1325;
LAB_00dd133c:
    local_a8 = *(float *)(PTR_DAT_018bc3a4 + 0x34);
    fStack_a0 = *(float *)(PTR_DAT_018bc3a4 + 0x38);
    fStack_9c = *(float *)(PTR_DAT_018bc3a4 + 0x3c);
    fStack_98 = *(float *)(PTR_DAT_018bc3a4 + 0x40);
    fStack_80 = *(float *)(PTR_DAT_018bc3a4 + 0x44);
    fStack_7c = *(float *)(PTR_DAT_018bc3a4 + 0x48);
    fStack_78 = *(float *)(PTR_DAT_018bc3a4 + 0x4c);
    fStack_58 = *(float *)(PTR_DAT_018bc3a4 + 0x50);
    fStack_54 = *(float *)(PTR_DAT_018bc3a4 + 0x54);
    fStack_84 = *(float *)(PTR_DAT_018bc3a4 + 0x58);
  }
  local_a4 = local_64;
  fStack_54 = fStack_54 * 0.017453292;
  fStack_58 = fStack_58 * 0.017453292;
  fStack_74 = local_64;
  if (*(int *)(param_1 + 0x90) == 0) {
    if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd148c:
      if ((*(int *)(param_2 + 0x378) != 0) && (*(int *)(*(int *)(param_2 + 0x378) + 0x40c8) == 0x15)
         ) goto LAB_00dd14a7;
    }
    else {
      piVar3 = (int *)FUN_00c13920();
      iVar4 = (**(code **)(*piVar3 + 0x28))(1);
      if (iVar4 == 0) goto LAB_00dd148c;
    }
  }
  else {
LAB_00dd14a7:
    *(undefined4 *)(param_1 + 0x90) = 1;
    fVar1 = *(float *)(param_1 + 0x84) + 1.0;
    *(float *)(param_1 + 0x84) = fVar1;
    fVar11 = *(float *)(param_1 + 0x80);
    fVar2 = 0.0;
    if ((fVar1 < 0.0) || (fVar2 = fVar1, fVar1 <= fVar11)) {
      fVar11 = fVar2;
    }
    *(float *)(param_1 + 0x84) = fVar11;
    fVar5 = (float10)FUN_00db51c0();
    fStack_70 = *(float *)(PTR_DAT_018bc3a4 + 0x74);
    fStack_6c = *(float *)(PTR_DAT_018bc3a4 + 0x78);
    fStack_68 = *(float *)(PTR_DAT_018bc3a4 + 0x7c);
    local_a8 = (float)(((float10)*(float *)(PTR_DAT_018bc3a4 + 100) - (float10)local_a8) * fVar5 +
                      (float10)local_a8);
    local_a4 = (float)(((float10)local_64 - (float10)local_a4) * fVar5 + (float10)local_a4);
    fStack_a0 = (float)(((float10)*(float *)(PTR_DAT_018bc3a4 + 0x68) - (float10)fStack_a0) * fVar5
                       + (float10)fStack_a0);
    fStack_9c = (float)(((float10)*(float *)(PTR_DAT_018bc3a4 + 0x6c) - (float10)fStack_9c) * fVar5
                       + (float10)fStack_9c);
    fStack_98 = (float)(((float10)*(float *)(PTR_DAT_018bc3a4 + 0x70) - (float10)fStack_98) * fVar5
                       + (float10)fStack_98);
    fStack_80 = (float)(((float10)fStack_70 - (float10)fStack_80) * fVar5 + (float10)fStack_80);
    fStack_7c = (float)(((float10)fStack_6c - (float10)fStack_7c) * fVar5 + (float10)fStack_7c);
    fStack_78 = (float)(((float10)fStack_68 - (float10)fStack_78) * fVar5 + (float10)fStack_78);
    fStack_74 = (float)((float10)fStack_74 + ((float10)local_64 - (float10)fStack_74) * fVar5);
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd1606:
    if (((0.0 < *(float *)(*(int *)(param_2 + 0x378) + 0x894)) ||
        (*(int *)(*(int *)(param_2 + 0x378) + 0x764) == 0)) || (iVar4 = FUN_008e2740(), iVar4 == 0))
    goto LAB_00dd1632;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00dd1606;
LAB_00dd1632:
    if ((DAT_01bea094 & 0x20000) != 0) {
      piVar3 = (int *)FUN_00c13920();
      iVar4 = (**(code **)(*piVar3 + 0x28))(1);
      if (iVar4 != 0) goto LAB_00dd17a3;
    }
    iVar4 = (**(code **)(**(int **)(param_2 + 0x378) + 0x1d8))();
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_00c13920();
      iVar4 = (**(code **)(*piVar3 + 0x28))(0);
      if (((iVar4 == 0) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)) ||
         (iVar4 = FUN_00a7c8a0(), *(int *)(iVar4 + 0x4b0) != 0x11500)) {
        fStack_9c = fStack_9c * 0.8;
        fStack_7c = fStack_7c * 0.8;
      }
      else {
        local_a8 = *(float *)(PTR_DAT_018bc3a4 + 0x88);
        local_a4 = local_64;
        fStack_a0 = *(float *)(PTR_DAT_018bc3a4 + 0x8c);
        fStack_9c = *(float *)(PTR_DAT_018bc3a4 + 0x90);
        fStack_98 = *(float *)(PTR_DAT_018bc3a4 + 0x94);
        fStack_80 = *(float *)(PTR_DAT_018bc3a4 + 0x98);
        fStack_7c = *(float *)(PTR_DAT_018bc3a4 + 0x9c);
        fStack_78 = *(float *)(PTR_DAT_018bc3a4 + 0xa0);
        fStack_74 = local_64;
        fStack_58 = *(float *)(PTR_DAT_018bc3a4 + 0xa4) * 0.017453292;
        fStack_54 = *(float *)(PTR_DAT_018bc3a4 + 0xa8) * 0.017453292;
        fStack_84 = *(float *)(PTR_DAT_018bc3a4 + 0xac);
      }
    }
  }
LAB_00dd17a3:
  local_a8 = local_a8 - fStack_78;
  local_a4 = local_a4 - fStack_74;
  fStack_98 = fStack_98 - fStack_78;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd181b:
    if ((*(int *)(param_2 + 0x378) == 0) || (iVar4 = FUN_00b8c050(), iVar4 == 0)) goto LAB_00dd182e;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00dd181b;
LAB_00dd182e:
    local_a8 = local_a8 * fStack_84;
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd185e:
    fVar6 = (float10)FUN_00b8bbf0();
    fVar5 = (float10)-1.4835298;
    if ((fVar5 <= fVar6) && (fVar5 = fVar6, (float10)1.4835298 < fVar6)) {
      fVar5 = (float10)1.4835298;
    }
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00dd185e;
    fVar5 = (float10)0;
  }
  pfVar10 = &fStack_50;
  fVar11 = (float)fVar5;
  D3DXMatrixRotationX(pfVar10,fVar11);
  pfVar9 = &fStack_58;
  puVar7 = &stack0xffffff48;
  puVar8 = puVar7;
  D3DXVec3TransformNormal(puVar7,puVar7,pfVar9);
  D3DXMatrixRotationX(&local_64,fStack_98);
  D3DXVec3TransformNormal(&stack0xffffff44,&stack0xffffff44,&fStack_6c);
  fStack_78 = fStack_98 + local_a8;
  fStack_74 = (float)puVar7 + local_a4;
  fStack_70 = (float)puVar8 + (fStack_a0 - fStack_80);
  fStack_6c = (float)pfVar9 + (fStack_9c - fStack_7c);
  fStack_68 = local_a8 + (float)pfVar10;
  local_64 = local_a4 + fVar11;
  fStack_60 = (fStack_a0 - fStack_80) + unaff_EDI;
  fStack_5c = (fStack_9c - fStack_7c) + unaff_ESI;
  if ((DAT_01bea094 & 0x20000) == 0) {
LAB_00dd1995:
    if ((*(int *)(param_2 + 0x378) != 0) &&
       (iVar4 = FUN_00b8c050(), fStack_58 = fStack_80, iVar4 != 0)) goto LAB_00dd19b2;
  }
  else {
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar4 == 0) goto LAB_00dd1995;
  }
  fStack_58 = fStack_7c;
LAB_00dd19b2:
  fStack_54 = *(float *)(PTR_DAT_018bc3a4 + 0x10);
  fStack_50 = *(float *)(PTR_DAT_018bc3a4 + 0x1c) * 0.017453292;
  uStack_4c = *(undefined4 *)(PTR_DAT_018bc3a4 + 0x20);
  fStack_48 = *(float *)(PTR_DAT_018bc3a4 + 0x24) * 0.017453292;
  uStack_44 = *(undefined4 *)(PTR_DAT_018bc3a4 + 0x28);
  uStack_40 = *(undefined4 *)(PTR_DAT_018bc3a4 + 0x14);
  uStack_3c = *(undefined4 *)(PTR_DAT_018bc3a4 + 0x18);
  FUN_00dcfde0(param_2,&fStack_78);
  return;
}

// 00DD1A30  FUN_00dd1a30  size=599  [between]
void __fastcall FUN_00dd1a30(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar6;
  float unaff_EDI;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 local_70 [4];
  int iStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  FUN_00ddc1d0(local_50,param_1 + 0x78,5);
  puVar8 = &local_60;
  D3DXVec3TransformNormal(local_70,puVar8,local_50);
  D3DXVec3TransformNormal(&stack0xffffff84,&stack0xffffff84,param_1 + 0xe4);
  fVar1 = (float)param_1[0xf0] + (float)puVar8;
  fVar3 = (float)param_1[0xf2] + unaff_EDI;
  fVar2 = SQRT(fVar1 * fVar1 + fVar3 * fVar3);
  if (1.1920929e-07 < fVar2) {
    param_1[0x1d4] = (int)-(fVar1 / fVar2);
    param_1[0x1d5] = 0;
    param_1[0x1d6] = (int)-(fVar3 / fVar2);
  }
  param_1[0xe1] = 0;
  piVar6 = param_1 + 0x80;
  piVar7 = param_1 + 0xa0;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar6 = param_1 + 0x2c;
  piVar7 = param_1 + 0x5c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if (DAT_01beb8e4 == 0) {
    piVar6 = &DAT_01dc5f60;
    iVar5 = 0x10;
    do {
      if ((*(byte *)(piVar6 + 1) & 1) != 0) {
        (**(code **)(*piVar6 + 8))();
      }
      piVar6 = piVar6 + 0x11;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    DAT_01beb8e4 = 1;
  }
  iVar5 = FUN_00da6810();
  if (iVar5 == 0) {
    iVar5 = FUN_00db58c0(param_1);
    if (iVar5 == 0) {
      param_1[0x1bc] = 0;
      FUN_00a7c950();
      param_1[0x1be] = 0;
    }
    else {
      FUN_00da67b0();
    }
  }
  else {
    FUN_00da6740(iVar5);
  }
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  uVar4 = FUN_00db3ff0(param_1 + 0x1c8);
  *(undefined4 *)(extraout_ECX + 0x10) = uVar4;
  uVar4 = FUN_00db4070(param_1 + 0x1c8);
  *(undefined4 *)(extraout_ECX_00 + 0x14) = uVar4;
  iVar5 = FUN_00dcd850();
  param_1[0x1a4] = 0;
  if (iVar5 == 0) {
    if (param_1[0x15c] != 0) {
      param_1[0x124] = 0;
      param_1[0x125] = 0x3f800000;
      param_1[0x126] = 0;
      param_1[0x127] = iStack_6c;
      param_1[0x138] = 0;
      param_1[0x139] = param_1[0x125];
      param_1[0x13a] = param_1[0x126];
      param_1[0x13b] = param_1[0x127];
      param_1[0x110] = 0;
      param_1[0x111] = param_1[0x139];
      param_1[0x112] = param_1[0x13a];
      param_1[0x113] = param_1[0x13b];
      *(undefined4 *)(param_1[0x1b9] + 0x68) = 1;
      param_1[0x15c] = 0;
    }
    if ((DAT_01bea070 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
    FUN_00dd03e0();
    param_1[0x22e] = 0;
  }
  return;
}

// 00DD1C90  FUN_00dd1c90  size=74  [between]
void __fastcall FUN_00dd1c90(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x8b4)) {
  case 1:
    FUN_00db9880(0x3f800000);
    FUN_00dcdd10();
    return;
  case 2:
    FUN_00dc1990();
    return;
  case 3:
    FUN_00dc7d60();
    return;
  case 4:
    FUN_00db9880(0x3f800000);
    FUN_00dc1ab0();
    return;
  default:
    return;
  }
}

// 00DD1CF0  Camera::StateLockOn::vf10  size=561  [class]
void __thiscall Camera::StateLockOn::vf10(int param_1,int param_2)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  int iVar7;
  undefined1 local_20 [28];
  
  fVar3 = *(float *)(param_1 + 0x6e4) + 1.0;
  *(float *)(param_1 + 0x6e4) = fVar3;
  fVar2 = *(float *)(param_1 + 0x6e0);
  fVar4 = 0.0;
  if ((fVar3 < 0.0) || (fVar4 = fVar3, fVar3 <= fVar2)) {
    fVar2 = fVar4;
  }
  *(float *)(param_1 + 0x6e4) = fVar2;
  iVar7 = param_1 + 0x520;
  FUN_00db2b80(param_2);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 4);
  FUN_00dbc080(param_2);
  pbVar1 = (byte *)(param_1 + 0x10);
  FUN_00dd0900(param_2,iVar7);
  FUN_00dd0ac0(param_2,pbVar1,iVar7);
  if (((*pbVar1 & 1) == 0) && (iVar5 = FUN_00dcc340(param_2,iVar7), iVar5 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      if (((*(int *)(param_1 + 0x6f4) == 0) && (iVar5 = FUN_00da4a60(param_2), iVar5 != 0)) &&
         (iVar5 = FUN_00dcc620(param_2,iVar7), iVar5 == 0)) {
        FUN_00db27b0(param_1 + 0x370);
        FUN_00db2a50();
        *(undefined4 *)(param_1 + 0x6f4) = 0xf;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 1;
        FUN_00dc41e0(pbVar1,param_2,iVar7);
        *(undefined4 *)(param_1 + 0x6f4) = 0xf;
      }
    }
    else {
      fVar6 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x364) - *(float *)(param_1 + 0x474));
      if ((ABS(fVar6) < (float10)0.7853982) &&
         (((*(byte *)(param_1 + 0x370) & 1) != 0 ||
          (iVar5 = FUN_00dcc340(param_2,iVar7), iVar5 == 0)))) {
        FUN_00db27b0(param_1 + 0x370);
      }
    }
    *(undefined4 *)(param_1 + 0x6f0) = 0xf;
  }
  if ((DAT_01b7b914 & 0x8000) != 0) {
    FUN_00db27b0(param_1 + 0x370);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar7 = param_1 + 0x140;
  }
  else {
    iVar5 = FUN_00da9820(local_20);
    *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(iVar5 + 4);
    FUN_00dbc340(param_2);
    FUN_00dd0900(param_2,iVar7);
    iVar7 = param_1 + 0x2f0;
  }
  FUN_00dc6f70(param_2,iVar7);
  if (*(int *)(param_1 + 0x6f0) < 1) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_00dc4260(param_2);
    }
    return;
  }
  *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x6f0) + -1;
  return;
}

// 00DD1F30  Camera::StateNormal::vf10  size=757  [class]
void __thiscall Camera::StateNormal::vf10(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  float10 fVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = *(float *)(param_2 + 0x94);
  if ((*(uint *)(param_3 + 0xfc) & 0x80000000) == 0) {
    fVar3 = 0.87266463;
  }
  else {
    fVar3 = *(float *)(param_3 + 0x10c);
  }
  fVar7 = (float10)FUN_00db51c0();
  fVar5 = (float10)1;
  fVar4 = *(float *)(param_3 + 0x178);
  local_30 = *(float *)(param_2 + 0x4c0);
  local_2c = *(float *)(param_2 + 0x4c4);
  local_28 = *(float *)(param_2 + 0x4c8);
  local_24 = *(float *)(param_2 + 0x4cc);
  if (*(int *)(param_1 + 0x10) == 0) {
    fVar6 = *(float *)(param_1 + 4) - 0.1;
    *(float *)(param_1 + 4) = fVar6;
    if (fVar6 < 0.0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    fVar6 = *(float *)(param_1 + 0xc) * 0.98;
    *(float *)(param_1 + 0xc) = fVar6;
    if (fVar6 < 0.0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_2 + 0x4e0) = 0;
  *(undefined4 *)(param_2 + 0x4e8) = 0;
  *(float *)(param_2 + 0x4e4) = (float)fVar5;
  *(float *)(param_2 + 0x4ec) = local_14;
  *(float *)(param_2 + 0x4f8) =
       (float)((fVar5 / ((fVar5 - fVar7) * (float10)fVar4 + fVar5)) *
               ((float10)fVar3 - (float10)fVar2) + (float10)fVar2);
  FUN_00dd0e40(param_2,param_3);
  FUN_00db3540(param_2,param_3);
  if ((*(uint *)(param_3 + 0x108) & 0x40000000) == 0) {
    FUN_00db9880(0x3f800000);
  }
  else {
    *(undefined4 *)(param_2 + 0x778) = 0;
    *(undefined4 *)(param_2 + 0x77c) = 0;
    FUN_00db89b0(0);
    FUN_00db8a40(0);
  }
  FUN_00dbd4b0(param_2,param_3);
  FUN_00dc4950(param_2,param_3);
  FUN_00db36c0(param_2,param_3);
  if ((*(uint *)(param_3 + 0x108) & 0x80000000) == 0) {
    *(undefined4 *)(param_2 + 0x920) = 1;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    if (*(int *)(param_2 + 0x8c8) != 3) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      local_20 = *(float *)(param_2 + 0x4c0) - local_30;
      local_1c = *(float *)(param_2 + 0x4c4) - local_2c;
      local_18 = *(float *)(param_2 + 0x4c8) - local_28;
      local_14 = *(float *)(param_2 + 0x4cc) - local_24;
      FUN_00da0690(&local_30,0x3f800000);
      pfVar1 = (float *)(param_1 + 0x20);
      fVar3 = local_2c * local_1c + local_30 * local_20 + local_28 * local_18;
      fVar4 = local_30 * fVar3;
      fVar2 = local_2c * fVar3;
      fVar6 = local_28 * fVar3;
      fVar3 = fVar3 * local_24;
      local_20 = (local_20 - fVar4) * 0.2;
      local_1c = (local_1c - fVar2) * 0.2;
      local_18 = (local_18 - fVar6) * 0.2;
      local_14 = (local_14 - fVar3) * 0.2;
      local_30 = local_20 + fVar4;
      local_2c = local_1c + fVar2;
      local_28 = local_18 + fVar6;
      local_24 = local_14 + fVar3;
      *pfVar1 = local_30 + *pfVar1;
      *(float *)(param_1 + 0x24) = local_2c + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x28) = local_28 + *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = local_24 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = local_20 + fVar4 + *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x34) = local_1c + fVar2 + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x38) = fVar6 + local_18 + *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x3c) = local_14 + fVar3 + *(float *)(param_1 + 0x3c);
      *(float **)(param_2 + 900) = pfVar1;
    }
  }
  FUN_00da0fb0();
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}

// 00DD2250  Camera::StateUniqueSituation::vf10  size=24  [class]
void Camera::StateUniqueSituation::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x8b4) - 1U < 4) {
    FUN_00dd1c90();
  }
  return;
}

// 015F0A80  Camera::StateNodeTrait::StateNodeTrait  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait(void)

{
  PTR_vftable_018cccb4 = (undefined *)vftable;
  return;
}

// 015F0A90  Camera::StateNodeTrait::StateNodeTrait_2  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_2(void)

{
  PTR_vftable_018cccc0 = (undefined *)vftable;
  return;
}

// 015F0AA0  Camera::StateNodeTrait::StateNodeTrait_3  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_3(void)

{
  PTR_vftable_018ccccc = (undefined *)vftable;
  return;
}

// 015F0AB0  Camera::StateNodeTrait::StateNodeTrait_4  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_4(void)

{
  PTR_vftable_018cccd8 = (undefined *)vftable;
  return;
}

// 015F0AC0  Camera::StateNodeTrait::StateNodeTrait_5  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_5(void)

{
  PTR_vftable_018ccce4 = (undefined *)vftable;
  return;
}

// 015F0AD0  Camera::StateNodeTrait::StateNodeTrait_6  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_6(void)

{
  PTR_vftable_018cccf0 = (undefined *)vftable;
  return;
}

// 015F0AE0  Camera::StateNodeTrait::StateNodeTrait_7  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_7(void)

{
  PTR_vftable_018cccfc = (undefined *)vftable;
  return;
}

// 015F0AF0  Camera::StateNodeTrait::StateNodeTrait_8  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_8(void)

{
  PTR_vftable_018ccd08 = (undefined *)vftable;
  return;
}

// 015F0B00  Camera::StateNodeTrait::StateNodeTrait_9  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_9(void)

{
  PTR_vftable_018ccd14 = (undefined *)vftable;
  return;
}

// 015F0B10  Camera::StateNodeTrait::StateNodeTrait_10  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_10(void)

{
  PTR_vftable_018ccd20 = (undefined *)vftable;
  return;
}

// 015F0B20  Camera::StateNodeTrait::StateNodeTrait_11  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_11(void)

{
  PTR_vftable_018ccd2c = (undefined *)vftable;
  return;
}

// 015F0B30  Camera::StateNodeTrait::StateNodeTrait_12  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_12(void)

{
  PTR_vftable_018ccd38 = (undefined *)vftable;
  return;
}

// 015F0B40  Camera::StateNodeTrait::StateNodeTrait_13  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_13(void)

{
  PTR_vftable_018ccd44 = (undefined *)vftable;
  return;
}

// 015F0B50  Camera::StateNodeTrait::StateNodeTrait_14  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_14(void)

{
  PTR_vftable_018ccd50 = (undefined *)vftable;
  return;
}

// 015F0B60  Camera::StateNodeTrait::StateNodeTrait_15  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_15(void)

{
  PTR_vftable_018ccd5c = (undefined *)vftable;
  return;
}

// 015F0B70  Camera::StateNodeTrait::StateNodeTrait_16  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_16(void)

{
  PTR_vftable_018ccd68 = (undefined *)vftable;
  return;
}

// 015F0B80  Camera::StateNodeTrait::StateNodeTrait_17  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_17(void)

{
  PTR_vftable_018ccd74 = (undefined *)vftable;
  return;
}

// 015F0B90  Camera::StateNodeTrait::StateNodeTrait_18  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_18(void)

{
  PTR_vftable_018ccd80 = (undefined *)vftable;
  return;
}

// 015F0BA0  Camera::StateNodeTrait::StateNodeTrait_19  size=11  [class]
void Camera::StateNodeTrait::StateNodeTrait_19(void)

{
  PTR_vftable_018ccd8c = (undefined *)vftable;
  return;
}

