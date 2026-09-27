// src/misc/switchD_00d900d7.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8D500..00D9F8C0, 213 functions

#include "types.h"

// 00D8D500  FUN_00d8d500  size=275  [callgraph]
float10 FUN_00d8d500(float param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  byte *pbVar5;
  uint uVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 fVar9;
  float10 extraout_ST1_00;
  float10 fVar10;
  byte local_10c;
  undefined4 local_104;
  byte local_100 [256];
  
  if (0.0 <= param_1) {
    local_104 = 1;
  }
  else {
    local_104 = -1;
  }
  iVar2 = FUN_00fdbc60();
  fVar7 = (float10)iVar2;
  fVar9 = extraout_ST0 - fVar7;
  if (param_2 == 0) {
    return fVar7 * (float10)local_104;
  }
  uVar6 = (uint)param_2;
  sVar4 = 0;
  local_100[0] = 0;
  fVar10 = extraout_ST1;
  if (uVar6 != 0) {
    fVar8 = (float10)10.0;
    iVar2 = 0;
    do {
      fVar10 = fVar9 * fVar8;
      local_10c = (byte)(int)ROUND(fVar10);
      local_100[iVar2 + 1] = local_10c;
      iVar3 = FUN_00fdbc60();
      sVar4 = sVar4 + 1;
      iVar2 = (int)sVar4;
      fVar9 = fVar7 - (float10)iVar3;
      fVar7 = extraout_ST1_00;
      fVar8 = extraout_ST0_00;
    } while (iVar2 < (int)uVar6);
  }
  if (4 < local_100[uVar6]) {
    local_100[uVar6 - 1] = local_100[uVar6 - 1] + 1;
  }
  sVar4 = param_2 - 1;
  local_100[uVar6] = 0;
  if (-1 < sVar4) {
    pbVar5 = local_100 + sVar4;
    do {
      bVar1 = *pbVar5;
      sVar4 = sVar4 + -1;
      pbVar5 = pbVar5 + -1;
      fVar10 = (float10)bVar1 + fVar10 * (float10)0.1;
    } while (-1 < sVar4);
  }
  return (fVar7 + fVar10) * (float10)local_104;
}

// 00D8D620  FUN_00d8d620  size=147  [callgraph]
float10 FUN_00d8d620(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)0;
  if (*param_1 < *param_3) {
    fVar1 = ((float10)*param_3 - (float10)*param_1) * ((float10)*param_3 - (float10)*param_1);
  }
  if (*param_2 < *param_1) {
    fVar1 = ((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
            fVar1;
  }
  if (param_1[1] < param_3[1]) {
    fVar1 = ((float10)param_3[1] - (float10)param_1[1]) *
            ((float10)param_3[1] - (float10)param_1[1]) + fVar1;
  }
  if (param_2[1] < param_1[1]) {
    fVar1 = ((float10)param_1[1] - (float10)param_2[1]) *
            ((float10)param_1[1] - (float10)param_2[1]) + fVar1;
  }
  if (param_1[2] < param_3[2]) {
    fVar1 = ((float10)param_3[2] - (float10)param_1[2]) *
            ((float10)param_3[2] - (float10)param_1[2]) + fVar1;
  }
  if (param_2[2] < param_1[2]) {
    fVar1 = ((float10)param_1[2] - (float10)param_2[2]) *
            ((float10)param_1[2] - (float10)param_2[2]) + fVar1;
  }
  return fVar1;
}

// 00D8D6C0  FUN_00d8d6c0  size=95  [callgraph]
undefined4 FUN_00d8d6c0(float *param_1,float *param_2,float *param_3)

{
  if ((((*param_3 <= *param_1) && (param_3[1] <= param_1[1])) && (param_3[2] <= param_1[2])) &&
     (((*param_1 <= *param_2 && (param_1[1] <= param_2[1])) && (param_1[2] <= param_2[2])))) {
    return 1;
  }
  return 0;
}

// 00D8D720  FUN_00d8d720  size=47  [callgraph]
undefined4 FUN_00d8d720(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00d8d620(param_1,param_3,param_4);
  if (fVar1 <= (float10)param_2 * (float10)param_2) {
    return 1;
  }
  return 0;
}

// 00D8D820  FUN_00d8d820  size=105  [callgraph]
undefined4 FUN_00d8d820(float *param_1,float *param_2,float *param_3,float *param_4)

{
  if (*param_4 <= *param_1) {
    if ((((*param_2 <= *param_3) && (param_4[1] <= param_1[1])) && (param_2[1] <= param_3[1])) &&
       ((param_4[2] <= param_1[2] && (param_2[2] <= param_3[2])))) {
      return 1;
    }
  }
  return 0;
}

// 00D8D890  FUN_00d8d890  size=212  [callgraph]
undefined4 FUN_00d8d890(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2[2] - param_4[2]) * (*param_1 - *param_4) -
          (param_1[2] - param_4[2]) * (*param_2 - *param_4);
  fVar2 = (*param_1 - *param_3) * (param_2[2] - param_3[2]) -
          (param_1[2] - param_3[2]) * (*param_2 - *param_3);
  if (((fVar1 == 0.0) || (fVar2 == 0.0)) || (0.0 <= fVar2 * fVar1)) {
    return 0;
  }
  fVar3 = (*param_3 - *param_1) * (param_4[2] - param_1[2]) -
          (param_3[2] - param_1[2]) * (*param_4 - *param_1);
  fVar1 = (fVar3 + fVar2) - fVar1;
  if (((fVar3 != 0.0) && (fVar1 != 0.0)) && (fVar1 * fVar3 < 0.0)) {
    return 1;
  }
  return 0;
}

// 00D8D970  FUN_00d8d970  size=20  [callgraph]
void __fastcall FUN_00d8d970(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

// 00D8D9F0  FUN_00d8d9f0  size=232  [callgraph]
void __thiscall FUN_00d8d9f0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_0164fcc8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"PreCheckRadiusSqr");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"oldTrans");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Trans");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"RoomOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x30);
  }
  return;
}

// 00D8DAE0  FUN_00d8dae0  size=62  [callgraph]
void __thiscall FUN_00d8dae0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Radius");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x40);
  }
  return;
}

// 00D8DB20  FUN_00d8db20  size=134  [callgraph]
void __thiscall FUN_00d8db20(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Radius");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016c28d4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x44);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Bottom");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x48);
  }
  return;
}

// 00D8DBC0  FUN_00d8dbc0  size=296  [callgraph]
void __thiscall FUN_00d8dbc0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x48);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016c28d4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Bottom");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 100);
  }
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54);
  return;
}

// 00D8DCF0  FUN_00d8dcf0  size=173  [callgraph]
void __thiscall FUN_00d8dcf0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Radius");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"PointNum");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 0x44);
  }
  uVar2 = (**(code **)(*param_2 + 0x18))(*param_3,"PointList");
  iVar1 = 0;
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar4 = param_1 + 0x60;
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(uVar2,iVar1);
      (**(code **)(*param_2 + 0x44))(uVar3,iVar4);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x44));
  }
  return;
}

// 00D8DDA0  FUN_00d8dda0  size=248  [callgraph]
void __thiscall FUN_00d8dda0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Radius");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"HeightHalf");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x44);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x70);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x80);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x90);
  }
  return;
}

// 00D8DEA0  FUN_00d8dea0  size=362  [callgraph]
void __thiscall FUN_00d8dea0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x48);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x4c))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"HeightHalf");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x80);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x90);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0xa0);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"WorldMatrixIm3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0xb0);
  }
  return;
}

// 00D8E350  FUN_00d8e350  size=91  [callgraph]
undefined4 __thiscall FUN_00d8e350(int param_1,undefined4 *param_2,float param_3)

{
  float10 fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = 0x3f800000;
  fVar1 = (float10)FUN_00d8d620(&local_20,param_1 + 0x50,param_1 + 0x60);
  if (fVar1 <= (float10)param_3 * (float10)param_3) {
    return 1;
  }
  return 0;
}

// 00D8E530  FUN_00d8e530  size=62  [callgraph]
undefined4 __thiscall
FUN_00d8e530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = (float10)FUN_00d8d620(param_1 + 0x50,param_3,param_4);
  if (fVar2 <= (float10)fVar1 * (float10)fVar1) {
    return 1;
  }
  return 0;
}

// 00D8E810  FUN_00d8e810  size=78  [callgraph]
undefined4 __thiscall
FUN_00d8e810(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00d8d620(param_3,param_1 + 0x50,param_1 + 0x60);
  if (fVar1 <= (float10)param_4 * (float10)param_4) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return 1;
  }
  return 0;
}

// 00D8EB90  FUN_00d8eb90  size=192  [callgraph]
undefined4 __fastcall FUN_00d8eb90(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    FUN_00f95fd0(param_1 + 0x50,0x40400000,0);
    return 0;
  case 1:
    FUN_00f95f40(param_1 + 0x50,param_1 + 0x60,0xffffffff,0);
    return 0;
  case 3:
    FUN_00f96100(param_1 + 0x50,*(undefined4 *)(param_1 + 0x80),0xffffffff,0,0);
    return 0;
  case 4:
    FUN_00f96010(param_1 + 0x50,0xffffffff,0);
    return 0;
  case 5:
    FUN_00f96100(param_1 + 0x50,*(undefined4 *)(param_1 + 0x80),0xffff00ff,0,0);
    FUN_00f96100(param_1 + 0x60,*(undefined4 *)(param_1 + 0x80),0xffffff00,0,0);
  }
  return 0;
}

// 00D8ECA0  FUN_00d8eca0  size=360  [callgraph]
void __fastcall FUN_00d8eca0(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a81330();
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c800();
    *(undefined4 *)(param_1 + 0x138) = uVar3;
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar3 = FUN_00a12210(*(undefined4 *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x13c) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  if (iVar2 != 0) {
    pfVar1 = (float *)(param_1 + 0xa0);
    D3DXVec3TransformNormal(pfVar1,param_1 + 0x90,iVar2 + 0x10);
    *pfVar1 = *pfVar1 + *(float *)(iVar2 + 0x40);
    *(float *)(param_1 + 0xa4) = *(float *)(iVar2 + 0x44) + *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa8) = *(float *)(iVar2 + 0x48) + *(float *)(param_1 + 0xa8);
    iVar2 = *(int *)(param_1 + 0x13c);
    pfVar1 = (float *)(param_1 + 0x50);
    D3DXVec3TransformNormal(pfVar1,param_1 + 0x20,iVar2 + 0x10);
    *pfVar1 = *(float *)(iVar2 + 0x40) + *pfVar1;
    *(float *)(param_1 + 0x54) = *(float *)(iVar2 + 0x44) + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(iVar2 + 0x48) + *(float *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x13c);
    pfVar1 = (float *)(param_1 + 0x60);
    D3DXVec3TransformNormal(pfVar1,param_1 + 0x30,iVar2 + 0x10);
    *pfVar1 = *pfVar1 + *(float *)(iVar2 + 0x40);
    *(float *)(param_1 + 100) = *(float *)(iVar2 + 0x44) + *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x68) = *(float *)(iVar2 + 0x48) + *(float *)(param_1 + 0x68);
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// 00D8F160  FUN_00d8f160  size=63  [callgraph]
undefined4 __thiscall FUN_00d8f160(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_3);
  if (iVar1 != 0) {
    *unaff_retaddr = param_1[0x14];
    unaff_retaddr[1] = param_1[0x15];
    unaff_retaddr[2] = param_1[0x16];
    unaff_retaddr[3] = param_1[0x17];
    return 1;
  }
  return 0;
}

// 00D8F6D0  FUN_00d8f6d0  size=63  [callgraph]
undefined4 __thiscall FUN_00d8f6d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_3);
  if (iVar1 != 0) {
    *unaff_retaddr = param_1[0x14];
    unaff_retaddr[1] = param_1[0x15];
    unaff_retaddr[2] = param_1[0x16];
    unaff_retaddr[3] = param_1[0x17];
    return 1;
  }
  return 0;
}

// 00D8F7A0  FUN_00d8f7a0  size=91  [callgraph]
undefined4 __thiscall FUN_00d8f7a0(int param_1,undefined4 *param_2,float param_3)

{
  float10 fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = 0x3f800000;
  fVar1 = (float10)FUN_00d8d620(&local_20,param_1 + 0x50,param_1 + 0x60);
  if (fVar1 <= (float10)param_3 * (float10)param_3) {
    return 1;
  }
  return 0;
}

// 00D8FB20  switchD_00d900d7::caseD_2  size=163  [class]
undefined4 switchD_00d900d7::caseD_2(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(float *)(param_1 + 100) < param_2[1]) && (param_2[1] < *(float *)(param_1 + 0x60))) {
    fVar1 = *param_2 - *(float *)(param_1 + 0x40);
    fVar2 = param_2[2] - *(float *)(param_1 + 0x44);
    if (*(float *)(param_1 + 0x6c) * fVar1 <= *(float *)(param_1 + 0x68) * fVar2) {
      fVar3 = *param_2 - *(float *)(param_1 + 0x50);
      fVar4 = param_2[2] - *(float *)(param_1 + 0x54);
      if (*(float *)(param_1 + 0x7c) * fVar3 <= *(float *)(param_1 + 0x78) * fVar4) {
        if (*(float *)(param_1 + 0x74) * fVar1 < *(float *)(param_1 + 0x70) * fVar2) {
          return 0;
        }
        if ((*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar4 <=
            (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) * fVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00D900C0  FUN_00d900c0  size=642  [between]
uint FUN_00d900c0(undefined1 *param_1,float ****param_2,float ***param_3,float param_4)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float ****ppppfVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float unaff_ESI;
  float *pfVar11;
  float unaff_EDI;
  undefined1 *puVar12;
  float10 fVar13;
  int iVar14;
  float ***pppfStack_e8;
  float fStack_e4;
  float ***pppfStack_d4;
  float *****pppppfStack_d0;
  float *****pppppfStack_cc;
  float ****ppppfStack_c8;
  float ****ppppfStack_c4;
  float ***pppfStack_a8;
  float ***pppfStack_a4;
  float **ppfStack_a0;
  float ****ppppfStack_9c;
  float **ppfStack_98;
  float *pfStack_94;
  float ****ppppfStack_90;
  float fStack_8c;
  undefined1 *puStack_88;
  float ***pppfStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  float ***pppfStack_78;
  float ****ppppfStack_74;
  float *pfStack_68;
  float ***pppfStack_64;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float ****ppppfStack_3c;
  float ****ppppfStack_38;
  undefined1 *puStack_34;
  float ***in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float fStack_28;
  float fStack_24;
  float ***local_20;
  float ***pppfStack_1c;
  float **ppfStack_18;
  float **ppfStack_14;
  
  puVar7 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    if (*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40) <=
        ((float)param_2[2] - *(float *)(param_1 + 0x18)) *
        ((float)param_2[2] - *(float *)(param_1 + 0x18)) +
        ((float)*param_2 - *(float *)(param_1 + 0x10)) *
        ((float)*param_2 - *(float *)(param_1 + 0x10)) +
        ((float)param_2[1] - *(float *)(param_1 + 0x14)) *
        ((float)param_2[1] - *(float *)(param_1 + 0x14))) {
      return 0;
    }
    return 1;
  case 1:
    if ((float)param_2[1] <= *(float *)(param_1 + 0x48)) {
      return 0;
    }
    if (((float)param_2[1] < *(float *)(param_1 + 0x44)) &&
       ((*(float *)(param_1 + 0x18) - (float)param_2[2]) *
        (*(float *)(param_1 + 0x18) - (float)param_2[2]) +
        (*(float *)(param_1 + 0x10) - (float)*param_2) *
        (*(float *)(param_1 + 0x10) - (float)*param_2) <
        *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40))) {
      return 1;
    }
    return 0;
  case 2:
    if ((*(float *)(param_1 + 100) < (float)param_2[1]) &&
       ((float)param_2[1] < *(float *)(param_1 + 0x60))) {
      if (*(float *)(param_1 + 0x6c) * ((float)*param_2 - *(float *)(param_1 + 0x40)) <=
          *(float *)(param_1 + 0x68) * ((float)param_2[2] - *(float *)(param_1 + 0x44))) {
        if (*(float *)(param_1 + 0x7c) * ((float)*param_2 - *(float *)(param_1 + 0x50)) <=
            *(float *)(param_1 + 0x78) * ((float)param_2[2] - *(float *)(param_1 + 0x54))) {
          if (*(float *)(param_1 + 0x74) * ((float)*param_2 - *(float *)(param_1 + 0x40)) <
              *(float *)(param_1 + 0x70) * ((float)param_2[2] - *(float *)(param_1 + 0x44))) {
            return 0;
          }
          if ((*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) *
              ((float)param_2[2] - *(float *)(param_1 + 0x54)) <=
              (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) *
              ((float)*param_2 - *(float *)(param_1 + 0x50))) {
            return 1;
          }
        }
      }
    }
    return 0;
  case 3:
    puVar12 = param_1 + 0x60;
    if (*(float *)(param_1 + 4) <
        ((float)*param_2 - *(float *)(param_1 + 0x10)) *
        ((float)*param_2 - *(float *)(param_1 + 0x10)) +
        ((float)param_2[1] - *(float *)(param_1 + 0x14)) *
        ((float)param_2[1] - *(float *)(param_1 + 0x14)) +
        ((float)param_2[2] - *(float *)(param_1 + 0x18)) *
        ((float)param_2[2] - *(float *)(param_1 + 0x18))) {
      return 0;
    }
    pbVar1 = param_1 + 0x44;
    fVar4 = *(float *)(param_1 + 0x40);
    iVar14 = 0;
    param_1 = param_1 + 0x70;
    if (*pbVar1 != 1 && -1 < (int)(*pbVar1 - 1)) {
      do {
        ppfStack_14 = (float **)0x0;
        ppfStack_18 = (float **)param_1;
        local_20 = (float ***)param_2;
        pppfStack_1c = (float ***)puVar12;
        fVar13 = (float10)thunk_FUN_00de19d0();
        if (fVar13 < (float10)fVar4) {
          return 1;
        }
        param_1 = param_1 + 0x10;
        iVar14 = iVar14 + 1;
        puVar12 = puVar12 + 0x10;
      } while (iVar14 < (int)((byte)puVar7[0x44] - 1));
      return 0;
    }
    return 0;
  case 4:
    puStack_34 = param_1 + 0x60;
    ppppfStack_38 = param_2;
    ppppfStack_3c = &local_20;
    fStack_40 = 1.9925881e-38;
    D3DXVec3TransformNormal();
    if (((-*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x94) + fStack_28) &&
        (*(float *)(param_1 + 0x94) + fStack_28 < *(float *)(param_1 + 0x44))) &&
       ((*(float *)(param_1 + 0x98) + fStack_24) * (*(float *)(param_1 + 0x98) + fStack_24) +
        (*(float *)(param_1 + 0x90) + unaff_ESI) * (*(float *)(param_1 + 0x90) + unaff_ESI) <
        *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40))) {
      return 1;
    }
    return 0;
  case 6:
    uVar9 = FUN_00d9c6c0();
    return uVar9;
  case 7:
    uVar9 = FUN_00d95c60();
    return uVar9;
  case 8:
    fVar4 = (float)*param_2 - *(float *)(param_1 + 0x40);
    fVar3 = (float)param_2[1] - *(float *)(param_1 + 0x44);
    fVar2 = (float)param_2[2] - *(float *)(param_1 + 0x48);
    if (((*(float *)(param_1 + 0xa8) * fVar2 +
          *(float *)(param_1 + 0xa0) * fVar4 + *(float *)(param_1 + 0xa4) * fVar3 <= 0.0) &&
        (*(float *)(param_1 + 0xb4) * fVar2 +
         fVar4 * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb0) * fVar3 <= 0.0)) &&
       (fVar2 * *(float *)(param_1 + 0xc0) +
        *(float *)(param_1 + 0xbc) * fVar3 + *(float *)(param_1 + 0xb8) * fVar4 <= 0.0)) {
      fVar2 = (float)*param_2 - *(float *)(param_1 + 0x88);
      fVar4 = (float)param_2[1] - *(float *)(param_1 + 0x8c);
      fVar3 = (float)param_2[2] - *(float *)(param_1 + 0x90);
      if ((0.0 < *(float *)(param_1 + 0xcc) * fVar3 +
                 *(float *)(param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 200) * fVar4) ||
         (0.0 < *(float *)(param_1 + 0xd8) * fVar3 +
                *(float *)(param_1 + 0xd0) * fVar2 + *(float *)(param_1 + 0xd4) * fVar4)) {
        return 0;
      }
      if (fVar3 * *(float *)(param_1 + 0xe4) +
          *(float *)(param_1 + 0xe0) * fVar4 + *(float *)(param_1 + 0xdc) * fVar2 <= 0.0) {
        return 1;
      }
    }
    return 0;
  case 9:
    fVar4 = *(float *)(param_1 + 0x40);
    ppfStack_14 = (float **)0xd8f8a0;
    fVar13 = (float10)thunk_FUN_00de19d0();
    if ((float10)fVar4 * (float10)fVar4 <= fVar13) {
      return 0;
    }
    return 1;
  case 10:
    if ((((float)param_2[1] <= *(float *)(param_1 + 0x44)) ||
        ((float)param_3[1] <= *(float *)(param_1 + 0x44))) &&
       ((*(float *)(param_1 + 0x48) <= (float)param_2[1] ||
        (*(float *)(param_1 + 0x48) <= (float)param_3[1])))) {
      local_20 = *(float ****)(param_1 + 0x10);
      ppfStack_18 = *(float ***)(param_1 + 0x18);
      ppfStack_14 = *(float ***)(param_1 + 0x1c);
      pppfStack_1c = *(float ****)(param_1 + 0x48);
      pppfStack_64 = (float ***)param_2;
      pfStack_68 = &fStack_40;
      iVar14 = FUN_00d9d800();
      if (((iVar14 != 0) && ((float)ppppfStack_3c <= *(float *)(param_1 + 0x44))) &&
         (*(float *)(param_1 + 0x48) <= (float)ppppfStack_3c)) {
        return 1;
      }
    }
    return 0;
  case 0xb:
    if (((*(float *)(param_1 + 0x60) < (float)param_2[1]) &&
        (*(float *)(param_1 + 0x60) < (float)param_3[1])) ||
       (((float)param_2[1] < *(float *)(param_1 + 100) &&
        ((float)param_3[1] < *(float *)(param_1 + 100))))) {
      return 0;
    }
    pfStack_68 = *(float **)(param_1 + 0x4c);
    puStack_80 = *(undefined1 **)(param_1 + 0x50);
    puStack_7c = *(undefined1 **)(param_1 + 100);
    pppfStack_78 = *(float ****)(param_1 + 0x54);
    ppppfStack_90 = *(float *****)(param_1 + 0x58);
    fStack_8c = *(float *)(param_1 + 100);
    puStack_88 = *(undefined1 **)(param_1 + 0x5c);
    ppfStack_a0 = (float **)
                  ((*(float *)(param_1 + 100) - fStack_8c) *
                   ((float)pppfStack_78 - (float)puStack_88) -
                  ((float)pfStack_68 - (float)puStack_88) * ((float)puStack_7c - fStack_8c));
    ppppfStack_c4 = (float ****)&ppfStack_a0;
    pppppfStack_d0 = &ppppfStack_90;
    pppfStack_a8 = (float ***)
                   (((float)pfStack_68 - (float)puStack_88) *
                    ((float)puStack_80 - (float)ppppfStack_90) -
                   ((float)pppfStack_78 - (float)puStack_88) *
                   (*(float *)(param_1 + 0x48) - (float)ppppfStack_90));
    ppppfStack_c8 = (float ****)&stack0xffffff90;
    pppfStack_a4 = (float ***)
                   (((float)puStack_7c - fStack_8c) *
                    (*(float *)(param_1 + 0x48) - (float)ppppfStack_90) -
                   (*(float *)(param_1 + 100) - fStack_8c) *
                   ((float)puStack_80 - (float)ppppfStack_90));
    pppppfStack_cc = (float *****)&puStack_80;
    pppfStack_d4 = param_3;
    ppppfStack_9c = (float ****)pppfStack_a8;
    ppfStack_98 = (float **)pppfStack_a4;
    iVar14 = FUN_00d927a0();
    if (iVar14 == 0) {
      ppppfStack_c4 = (float ****)&stack0xffffffa0;
      ppppfStack_c8 = (float ****)&stack0xffffff90;
      pppppfStack_cc = &ppppfStack_90;
      pppppfStack_d0 = (float *****)param_3;
      pppfStack_d4 = (float ***)param_2;
      iVar14 = FUN_00d977e0();
      if (iVar14 == 0) {
        ppppfStack_90 = *(float *****)(param_1 + 0x40);
        fStack_8c = *(float *)(param_1 + 0x60);
        puStack_88 = *(undefined1 **)(param_1 + 0x44);
        puStack_80 = *(undefined1 **)(param_1 + 0x48);
        puStack_7c = *(undefined1 **)(param_1 + 0x60);
        pppfStack_78 = *(float ****)(param_1 + 0x4c);
        pfStack_68 = *(float **)(param_1 + 0x54);
        fVar4 = *(float *)(param_1 + 0x58);
        fVar2 = *(float *)(param_1 + 0x60);
        fVar3 = *(float *)(param_1 + 0x5c);
        fStack_48 = *(float *)(param_1 + 0x50) - (float)ppppfStack_90;
        fVar5 = *(float *)(param_1 + 0x60) - fStack_8c;
        fStack_44 = (float)pfStack_68 - (float)puStack_88;
        ppfStack_a0 = (float **)
                      (fVar5 * ((float)pppfStack_78 - (float)puStack_88) -
                      fStack_44 * ((float)puStack_7c - fStack_8c));
        ppppfStack_c4 = (float ****)&ppfStack_a0;
        pppppfStack_d0 = &ppppfStack_90;
        pppfStack_a8 = (float ***)
                       (fStack_44 * ((float)puStack_80 - (float)ppppfStack_90) -
                       ((float)pppfStack_78 - (float)puStack_88) * fStack_48);
        ppppfStack_c8 = (float ****)&stack0xffffff90;
        pppfStack_a4 = (float ***)
                       (((float)puStack_7c - fStack_8c) * fStack_48 -
                       fVar5 * ((float)puStack_80 - (float)ppppfStack_90));
        pppppfStack_cc = (float *****)&puStack_80;
        pppfStack_d4 = param_3;
        ppppfStack_9c = (float ****)pppfStack_a8;
        ppfStack_98 = (float **)pppfStack_a4;
        iVar14 = FUN_00d927a0();
        if (iVar14 == 0) {
          ppfStack_a0 = (float **)
                        ((fVar2 - fStack_8c) * fStack_44 - (fVar3 - (float)puStack_88) * fVar5);
          ppppfStack_c4 = (float ****)&ppfStack_a0;
          pppppfStack_d0 = &ppppfStack_90;
          pppfStack_a8 = (float ***)
                         ((fVar3 - (float)puStack_88) * fStack_48 -
                         fStack_44 * (fVar4 - (float)ppppfStack_90));
          ppppfStack_c8 = (float ****)&stack0xffffffa0;
          pppfStack_a4 = (float ***)
                         ((fVar4 - (float)ppppfStack_90) * fVar5 - (fVar2 - fStack_8c) * fStack_48);
          pppppfStack_cc = (float *****)&stack0xffffff90;
          pppfStack_d4 = param_3;
          ppppfStack_9c = (float ****)pppfStack_a8;
          ppfStack_98 = (float **)pppfStack_a4;
          iVar14 = FUN_00d927a0();
          if (iVar14 == 0) {
            iVar14 = 0;
            do {
              if (iVar14 == 3) {
                iVar8 = 0;
              }
              else {
                iVar8 = iVar14 + 1;
              }
              ppppfStack_90 = *(float *****)(param_1 + iVar14 * 8 + 0x40);
              fStack_8c = *(float *)(param_1 + 0x60);
              puStack_88 = *(undefined1 **)(param_1 + iVar14 * 8 + 0x44);
              puStack_80 = *(undefined1 **)(param_1 + iVar14 * 8 + 0x40);
              puStack_7c = *(undefined1 **)(param_1 + 100);
              pppfStack_78 = *(float ****)(param_1 + iVar14 * 8 + 0x44);
              pfStack_68 = *(float **)(param_1 + iVar8 * 8 + 0x44);
              fVar4 = *(float *)(param_1 + iVar8 * 8 + 0x40);
              fVar2 = *(float *)(param_1 + 0x60);
              fVar3 = *(float *)(param_1 + iVar8 * 8 + 0x44);
              fStack_48 = *(float *)(param_1 + iVar8 * 8 + 0x40) - (float)ppppfStack_90;
              fVar5 = *(float *)(param_1 + 100) - fStack_8c;
              fStack_44 = (float)pfStack_68 - (float)puStack_88;
              local_20 = (float ***)
                         (fVar5 * ((float)pppfStack_78 - (float)puStack_88) -
                         fStack_44 * ((float)puStack_7c - fStack_8c));
              ppppfStack_c4 = &local_20;
              pppppfStack_d0 = &ppppfStack_90;
              pppfStack_a8 = (float ***)
                             (fStack_44 * ((float)puStack_80 - (float)ppppfStack_90) -
                             ((float)pppfStack_78 - (float)puStack_88) * fStack_48);
              ppppfStack_c8 = (float ****)&stack0xffffff90;
              pppfStack_a4 = (float ***)
                             (((float)puStack_7c - fStack_8c) * fStack_48 -
                             fVar5 * ((float)puStack_80 - (float)ppppfStack_90));
              pppppfStack_cc = (float *****)&puStack_80;
              pppfStack_d4 = param_3;
              pppfStack_1c = pppfStack_a8;
              ppfStack_18 = (float **)pppfStack_a4;
              iVar8 = FUN_00d927a0();
              if (iVar8 != 0) {
                return 1;
              }
              ppfStack_a0 = (float **)
                            ((fVar2 - fStack_8c) * fStack_44 - (fVar3 - (float)puStack_88) * fVar5);
              ppppfStack_c4 = (float ****)&stack0xffffffd0;
              pppppfStack_d0 = &ppppfStack_90;
              ppppfStack_9c =
                   (float ****)
                   ((fVar3 - (float)puStack_88) * fStack_48 -
                   fStack_44 * (fVar4 - (float)ppppfStack_90));
              ppppfStack_c8 = (float ****)&stack0xffffffa0;
              ppfStack_98 = (float **)
                            ((fVar4 - (float)ppppfStack_90) * fVar5 -
                            (fVar2 - fStack_8c) * fStack_48);
              pppppfStack_cc = (float *****)&stack0xffffff90;
              pppfStack_d4 = param_3;
              iVar8 = FUN_00d927a0();
              if (iVar8 != 0) {
                return 1;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < 4);
            return 0;
          }
        }
      }
    }
    return 1;
  case 0xc:
    fStack_48 = *(float *)(param_1 + 0x40);
    pfVar11 = (float *)(param_1 + 0x60);
    pfVar10 = (float *)(param_1 + 0x70);
    fStack_44 = 0.0;
    if (0 < (int)((byte)param_1[0x44] - 1)) {
      do {
        if (1e-06 <= ((float)*param_2 - (float)*param_3) * ((float)*param_2 - (float)*param_3) +
                     ((float)param_2[1] - (float)param_3[1]) *
                     ((float)param_2[1] - (float)param_3[1]) +
                     ((float)param_2[2] - (float)param_3[2]) *
                     ((float)param_2[2] - (float)param_3[2])) {
          ppppfStack_74 = &local_20;
          pppfStack_78 = (float ***)&stack0xffffffd0;
          puStack_7c = (undefined1 *)0xd9f153;
          pfStack_68 = pfVar11;
          pppfStack_64 = (float ***)pfVar10;
          FUN_00d91100();
          fStack_40 = (float)in_stack_ffffffd0 - (float)local_20;
          ppppfStack_3c = (float ****)(in_stack_ffffffd4 - (float)pppfStack_1c);
          ppppfStack_38 = (float ****)(fStack_28 - (float)ppfStack_18);
          puStack_34 = (undefined1 *)(fStack_24 - (float)ppfStack_14);
          fVar4 = (float)ppppfStack_38 * (float)ppppfStack_38 +
                  (float)ppppfStack_3c * (float)ppppfStack_3c + fStack_40 * fStack_40;
          if (fVar4 <= fStack_48 * fStack_48) {
            if (fVar4 <= 0.0) {
              return 1;
            }
            fVar4 = (float)ppppfStack_38 * (float)ppppfStack_38 +
                    (float)ppppfStack_3c * (float)ppppfStack_3c + fStack_40 * fStack_40;
            if (fVar4 < 0.0 == (fVar4 == 0.0)) {
              pfStack_68 = &fStack_40;
              pppfStack_64 = (float ***)pfStack_68;
              FUN_00ddf460();
              return 1;
            }
            pppfStack_64 = (float ***)&DAT_0163d0ac;
            pfStack_68 = (float *)0xd9f235;
            FUN_00dd5650();
            return 1;
          }
        }
        else {
          pppfStack_78 = (float ***)&stack0xffffffd0;
          ppppfStack_74 = param_2;
          puStack_7c = (undefined1 *)0xd9f109;
          pfStack_68 = pfVar10;
          pppfStack_64 = (float ***)fStack_48;
          iVar14 = FUN_00d97f50();
          if (iVar14 != 0) {
            return 1;
          }
        }
        fStack_44 = (float)((int)fStack_44 + 1);
        pfVar11 = pfVar11 + 4;
        pfVar10 = pfVar10 + 4;
      } while ((int)fStack_44 < (int)((byte)param_1[0x44] - 1));
    }
    return 0;
  case 0xd:
    pppfStack_78 = (float ***)param_2;
    puStack_7c = &stack0xffffffa0;
    puStack_80 = (undefined1 *)0xd9ef60;
    ppppfStack_74 = (float ****)(param_1 + 0x60);
    D3DXVec3TransformNormal();
    pppfStack_84 = param_3;
    puStack_88 = &stack0xffffffa4;
    pfStack_68 = (float *)(*(float *)(param_1 + 0x94) + (float)pfStack_68);
    pppfStack_64 = (float ***)(*(float *)(param_1 + 0x98) + (float)pppfStack_64);
    fStack_8c = 2.0014241e-38;
    puStack_80 = param_1 + 0x60;
    D3DXVec3TransformNormal();
    pfStack_68 = (float *)(*(float *)(param_1 + 0x90) + (float)pfStack_68);
    pppfStack_64 = (float ***)(*(float *)(param_1 + 0x94) + (float)pppfStack_64);
    if (((float)ppppfStack_74 <= *(float *)(param_1 + 0x44)) ||
       ((float)pppfStack_64 <= *(float *)(param_1 + 0x44))) {
      if (((float)ppppfStack_74 < -*(float *)(param_1 + 0x44)) &&
         ((float)pppfStack_64 < -*(float *)(param_1 + 0x44))) {
        return 0;
      }
      fStack_48 = 0.0;
      ppppfStack_90 = (float ****)&ppppfStack_38;
      fStack_44 = *(float *)(param_1 + 0x44);
      pfStack_94 = &fStack_48;
      ppfStack_98 = &pfStack_68;
      fStack_40 = 0.0;
      ppppfStack_38 = (float ****)0x0;
      puStack_34 = (undefined1 *)-*(float *)(param_1 + 0x44);
      fStack_8c = *(float *)(param_1 + 0x40);
      ppppfStack_9c = &pppfStack_78;
      ppfStack_a0 = (float **)&stack0xffffffa8;
      pppfStack_a4 = (float ***)0xd9f047;
      iVar14 = FUN_00d9d800();
      if (((iVar14 != 0) && (fStack_54 <= *(float *)(param_1 + 0x44))) &&
         (-*(float *)(param_1 + 0x44) <= fStack_54)) {
        return 1;
      }
    }
    return 0;
  case 0xe:
    D3DXVec3TransformNormal(&stack0xffffff90,param_2,param_1 + 0x80);
    puStack_7c = (undefined1 *)(*(float *)(param_1 + 0xb0) + (float)puStack_7c);
    pppfStack_78 = (float ***)(*(float *)(param_1 + 0xb4) + (float)pppfStack_78);
    ppppfStack_74 = (float ****)(*(float *)(param_1 + 0xb8) + (float)ppppfStack_74);
    D3DXVec3TransformNormal(&stack0xffffff94,param_3,param_1 + 0x80);
    pppfStack_78 = (float ***)((float)pppfStack_78 + *(float *)(param_1 + 0xb0));
    ppppfStack_74 = (float ****)(*(float *)(param_1 + 0xb4) + (float)ppppfStack_74);
    if ((*(float *)(param_1 + 0x60) < (float)pppfStack_84) &&
       (*(float *)(param_1 + 0x60) < (float)ppppfStack_74)) {
      return 0;
    }
    pppfStack_d4 = (float ***)-*(float *)(param_1 + 0x60);
    if (((float)pppfStack_84 < (float)pppfStack_d4) && ((float)ppppfStack_74 < (float)pppfStack_d4))
    {
      return 0;
    }
    pppfStack_a8 = *(float ****)(param_1 + 0x40);
    ppfStack_a0 = *(float ***)(param_1 + 0x44);
    ppppfStack_c8 = *(float *****)(param_1 + 0x50);
    pppppfStack_d0 = *(float ******)(param_1 + 0x5c);
    pppfStack_e8 = (float ***)
                   (((float)pppfStack_d4 - (float)pppfStack_d4) *
                    (*(float *)(param_1 + 0x54) - (float)pppppfStack_d0) -
                   (*(float *)(param_1 + 0x4c) - (float)pppppfStack_d0) *
                   ((float)pppfStack_d4 - (float)pppfStack_d4));
    fStack_e4 = (*(float *)(param_1 + 0x4c) - (float)pppppfStack_d0) *
                ((float)ppppfStack_c8 - *(float *)(param_1 + 0x58)) -
                (*(float *)(param_1 + 0x54) - (float)pppppfStack_d0) *
                (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x58));
    ppppfStack_c4 = (float ****)pppfStack_d4;
    pppfStack_a4 = pppfStack_d4;
    iVar14 = FUN_00d927a0(&stack0xffffffa8,&puStack_88,&pppfStack_78,&stack0xffffff28,&ppppfStack_c8
                          ,&stack0xffffff48,&pppfStack_e8);
    if ((iVar14 == 0) &&
       (iVar14 = FUN_00d977e0(&stack0xffffffa8,&puStack_88,&pppfStack_78,&stack0xffffff28,
                              &stack0xffffff48,&pppfStack_a8), iVar14 == 0)) {
      fVar4 = *(float *)(param_1 + 0x40);
      pppfStack_d4 = *(float ****)(param_1 + 0x60);
      pppppfStack_d0 = *(float ******)(param_1 + 0x44);
      ppppfStack_c8 = *(float *****)(param_1 + 0x48);
      ppppfStack_c4 = *(float *****)(param_1 + 0x60);
      pppfStack_a8 = *(float ****)(param_1 + 0x58);
      pppfStack_a4 = *(float ****)(param_1 + 0x60);
      ppfStack_a0 = *(float ***)(param_1 + 0x5c);
      ppppfStack_90 = (float ****)(*(float *)(param_1 + 0x50) - fVar4);
      pfStack_94 = (float *)(*(float *)(param_1 + 0x60) - (float)pppfStack_d4);
      fStack_8c = *(float *)(param_1 + 0x54) - (float)pppppfStack_d0;
      pppfStack_e8 = (float ***)
                     ((float)pfStack_94 * (*(float *)(param_1 + 0x4c) - (float)pppppfStack_d0) -
                     fStack_8c * ((float)ppppfStack_c4 - (float)pppfStack_d4));
      fStack_e4 = fStack_8c * ((float)ppppfStack_c8 - fVar4) -
                  (*(float *)(param_1 + 0x4c) - (float)pppppfStack_d0) * (float)ppppfStack_90;
      iVar14 = FUN_00d927a0(&stack0xffffffa8,&puStack_88,&pppfStack_78,&stack0xffffff28,
                            &ppppfStack_c8,&stack0xffffff48,&pppfStack_e8);
      if (iVar14 == 0) {
        pppfStack_e8 = (float ***)
                       (((float)pppfStack_a4 - (float)pppfStack_d4) * fStack_8c -
                       ((float)ppfStack_a0 - (float)pppppfStack_d0) * (float)pfStack_94);
        fStack_e4 = ((float)ppfStack_a0 - (float)pppppfStack_d0) * (float)ppppfStack_90 -
                    fStack_8c * ((float)pppfStack_a8 - fVar4);
        iVar14 = FUN_00d927a0(&stack0xffffffa8,&puStack_88,&pppfStack_78,&stack0xffffff28,
                              &stack0xffffff48,&pppfStack_a8,&pppfStack_e8);
        if (iVar14 == 0) {
          iVar14 = 0;
          ppppfVar6 = (float ****)-*(float *)(param_1 + 0x60);
          do {
            if (iVar14 == 3) {
              iVar8 = 0;
            }
            else {
              iVar8 = iVar14 + 1;
            }
            fVar4 = *(float *)(param_1 + iVar14 * 8 + 0x40);
            pppfStack_d4 = *(float ****)(param_1 + 0x60);
            pppppfStack_d0 = *(float ******)(param_1 + iVar14 * 8 + 0x44);
            ppppfStack_c8 = *(float *****)(param_1 + iVar14 * 8 + 0x40);
            pppfStack_a8 = *(float ****)(param_1 + iVar8 * 8 + 0x40);
            pppfStack_a4 = *(float ****)(param_1 + 0x60);
            ppfStack_a0 = *(float ***)(param_1 + iVar8 * 8 + 0x44);
            ppppfStack_90 = (float ****)(*(float *)(param_1 + iVar8 * 8 + 0x40) - fVar4);
            pfStack_94 = (float *)((float)ppppfVar6 - (float)pppfStack_d4);
            fStack_8c = *(float *)(param_1 + iVar8 * 8 + 0x44) - (float)pppppfStack_d0;
            fStack_48 = (float)pfStack_94 *
                        (*(float *)(param_1 + iVar14 * 8 + 0x44) - (float)pppppfStack_d0) -
                        fStack_8c * ((float)ppppfVar6 - (float)pppfStack_d4);
            fStack_44 = fStack_8c * ((float)ppppfStack_c8 - fVar4) -
                        (*(float *)(param_1 + iVar14 * 8 + 0x44) - (float)pppppfStack_d0) *
                        (float)ppppfStack_90;
            fStack_40 = ((float)ppppfVar6 - (float)pppfStack_d4) * (float)ppppfStack_90 -
                        (float)pfStack_94 * ((float)ppppfStack_c8 - fVar4);
            ppppfStack_c4 = ppppfVar6;
            iVar8 = FUN_00d927a0(&stack0xffffffa8,&puStack_88,&pppfStack_78,&stack0xffffff28,
                                 &ppppfStack_c8,&stack0xffffff48,&fStack_48);
            if (iVar8 != 0) {
              return 1;
            }
            pppfStack_e8 = (float ***)
                           (((float)pppfStack_a4 - (float)pppfStack_d4) * fStack_8c -
                           ((float)ppfStack_a0 - (float)pppppfStack_d0) * (float)pfStack_94);
            fStack_e4 = ((float)ppfStack_a0 - (float)pppppfStack_d0) * (float)ppppfStack_90 -
                        fStack_8c * ((float)pppfStack_a8 - fVar4);
            ppppfStack_38 = (float ****)pppfStack_e8;
            puStack_34 = (undefined1 *)fStack_e4;
            iVar8 = FUN_00d927a0(&stack0xffffffa8,&puStack_88,&pppfStack_78,&stack0xffffff28,
                                 &stack0xffffff48,&pppfStack_a8,&ppppfStack_38);
            if (iVar8 != 0) {
              return 1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < 4);
          return 0;
        }
      }
    }
    return 1;
  case 0xf:
    iVar14 = FUN_00d9c6c0();
    if (iVar14 != 0) {
      iVar14 = FUN_00d9c6c0();
      return (uint)(iVar14 != 0);
    }
    return 0;
  case 0x10:
    iVar14 = FUN_00d95c60();
    if (iVar14 != 0) {
      iVar14 = FUN_00d95c60();
      return (uint)(iVar14 != 0);
    }
    return 0;
  case 0x11:
    return 0;
  case 0x12:
    D3DXMatrixMultiply();
    if (*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40) <=
        ((float)param_2[2] - fStack_24) * ((float)param_2[2] - fStack_24) +
        ((float)*param_2 - in_stack_ffffffd4) * ((float)*param_2 - in_stack_ffffffd4) +
        ((float)param_2[1] - fStack_28) * ((float)param_2[1] - fStack_28)) {
      return 0;
    }
    return 1;
  case 0x13:
    pppfStack_a4 = (float ***)param_4;
    pppfStack_a8 = param_3;
    D3DXMatrixMultiply();
    D3DXMatrixInverse();
    ppppfStack_c8 = (float ****)0xd8f9f2;
    ppppfStack_c4 = (float ****)&stack0xffffff48;
    D3DXVec3TransformNormal();
    fVar4 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x48)) * 0.5;
    if (((-fVar4 < (float)puStack_80 + (float)param_2) &&
        ((float)puStack_80 + (float)param_2 < fVar4)) &&
       (((float)puStack_7c + (float)&pppfStack_a8) * ((float)puStack_7c + (float)&pppfStack_a8) +
        ((float)pppfStack_84 + (float)ppppfStack_c4) * ((float)pppfStack_84 + (float)ppppfStack_c4)
        < *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40))) {
      return 1;
    }
    return 0;
  case 0x14:
    pppfStack_a4 = (float ***)param_4;
    pppfStack_a8 = param_3;
    D3DXMatrixMultiply();
    D3DXMatrixInverse();
    ppppfStack_c8 = (float ****)0xd8fd42;
    ppppfStack_c4 = (float ****)&stack0xffffff48;
    D3DXVec3TransformNormal();
    fVar4 = (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 100)) * 0.5;
    if ((-fVar4 < (float)puStack_80 + (float)param_2) &&
       ((float)puStack_80 + (float)param_2 < fVar4)) {
      fVar4 = ((float)pppfStack_84 + (float)ppppfStack_c4) -
              (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x10));
      fVar2 = ((float)puStack_7c + (float)&pppfStack_a8) -
              (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x18));
      if ((*(float *)(param_1 + 0x6c) * fVar4 - *(float *)(param_1 + 0x68) * fVar2 <= 0.0) &&
         (0.0 <= *(float *)(param_1 + 0x74) * fVar4 - *(float *)(param_1 + 0x70) * fVar2)) {
        fVar4 = ((float)pppfStack_84 + (float)ppppfStack_c4) -
                (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x10));
        fVar2 = ((float)puStack_7c + (float)&pppfStack_a8) -
                (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x18));
        if (*(float *)(param_1 + 0x7c) * fVar4 - *(float *)(param_1 + 0x78) * fVar2 <= 0.0) {
          if ((*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) * fVar4 -
              (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar2 < 0.0) {
            return 0;
          }
          return 1;
        }
      }
      return 0;
    }
    return 0;
  case 0x15:
    fStack_e4 = param_4;
    pppfStack_e8 = param_3;
    D3DXMatrixMultiply(&stack0xffffffb0);
    D3DXMatrixInverse(&ppppfStack_9c,0,&stack0xffffffa4);
    D3DXVec3TransformNormal(&stack0xffffff28,param_2,&pppfStack_a8);
    fStack_e4 = (float)pppfStack_84 + fStack_e4;
    if (((float)puStack_7c + unaff_ESI) * ((float)puStack_7c + unaff_ESI) +
        ((float)puStack_80 + unaff_EDI) * ((float)puStack_80 + unaff_EDI) + fStack_e4 * fStack_e4 <=
        *(float *)(param_1 + 4)) {
      pppfStack_e8 = *(float ****)(param_1 + 0x40);
      pfVar11 = (float *)(param_1 + 0x60);
      pfVar10 = (float *)(param_1 + 0x70);
      iVar14 = 0;
      if ((byte)param_1[0x44] != 1 && -1 < (int)((byte)param_1[0x44] - 1)) {
        do {
          ppppfStack_c4 = (float ****)(*pfVar11 - *(float *)(param_1 + 0x10));
          pppfStack_d4 = (float ***)(*pfVar10 - *(float *)(param_1 + 0x10));
          pppppfStack_d0 = (float *****)(pfVar10[1] - *(float *)(param_1 + 0x14));
          pppppfStack_cc = (float *****)(pfVar10[2] - *(float *)(param_1 + 0x18));
          ppppfStack_c8 = (float ****)(pfVar10[3] - *(float *)(param_1 + 0x1c));
          fVar13 = (float10)thunk_FUN_00de19d0(&fStack_e4,&ppppfStack_c4,&pppfStack_d4,0);
          if (fVar13 < (float10)(float)pppfStack_e8) {
            return 1;
          }
          iVar14 = iVar14 + 1;
          pfVar11 = pfVar11 + 4;
          pfVar10 = pfVar10 + 4;
        } while (iVar14 < (int)((byte)param_1[0x44] - 1));
      }
    }
    return 0;
  case 0x16:
    pppfStack_a4 = (float ***)param_4;
    pppfStack_a8 = param_3;
    D3DXMatrixMultiply();
    D3DXMatrixInverse();
    ppppfStack_c8 = (float ****)0xd8fab2;
    ppppfStack_c4 = (float ****)&stack0xffffff48;
    D3DXVec3TransformNormal();
    if (((-*(float *)(param_1 + 0x44) < (float)puStack_80 + (float)param_2) &&
        ((float)puStack_80 + (float)param_2 < *(float *)(param_1 + 0x44))) &&
       (((float)puStack_7c + (float)&pppfStack_a8) * ((float)puStack_7c + (float)&pppfStack_a8) +
        ((float)pppfStack_84 + (float)ppppfStack_c4) * ((float)pppfStack_84 + (float)ppppfStack_c4)
        < *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40))) {
      return 1;
    }
    return 0;
  case 0x17:
    pppfStack_a4 = (float ***)param_4;
    pppfStack_a8 = param_3;
    D3DXMatrixMultiply();
    D3DXMatrixInverse();
    ppppfStack_c8 = (float ****)0xd8fe72;
    ppppfStack_c4 = (float ****)&stack0xffffff48;
    D3DXVec3TransformNormal();
    if ((-*(float *)(param_1 + 0x60) < (float)puStack_80 + (float)param_2) &&
       ((float)puStack_80 + (float)param_2 < *(float *)(param_1 + 0x60))) {
      fVar2 = ((float)pppfStack_84 + (float)ppppfStack_c4) - *(float *)(param_1 + 0x40);
      fVar4 = ((float)puStack_7c + (float)&pppfStack_a8) - *(float *)(param_1 + 0x44);
      if ((0.0 < (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x44)) * fVar2 -
                 (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x40)) * fVar4) ||
         ((*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x44)) * fVar2 -
          (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x40)) * fVar4 < 0.0)) {
        return 0;
      }
      fVar4 = ((float)pppfStack_84 + (float)ppppfStack_c4) - *(float *)(param_1 + 0x50);
      fVar2 = ((float)puStack_7c + (float)&pppfStack_a8) - *(float *)(param_1 + 0x54);
      if (0.0 < (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) * fVar4 -
                (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x50)) * fVar2) {
        return 0;
      }
      if (0.0 <= (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) * fVar4 -
                 (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar2) {
        return 1;
      }
    }
    return 0;
  case 0x18:
    D3DXMatrixMultiply();
    ppppfStack_c4 = (float ****)0x0;
    ppppfStack_c8 = (float ****)&ppppfStack_9c;
    pppppfStack_cc = (float *****)0xd9f2d0;
    D3DXMatrixInverse();
    pppppfStack_cc = (float *****)&pppfStack_a8;
    pppppfStack_d0 = (float *****)param_2;
    pppfStack_d4 = (float ***)&stack0xffffff48;
    D3DXVec3TransformNormal();
    ppppfStack_c4 = (float ****)((float)ppppfStack_c4 + (float)pppfStack_84);
    uVar9 = FUN_00d9c6c0();
    return uVar9;
  case 0x19:
    D3DXMatrixMultiply();
    ppppfStack_c4 = (float ****)0x0;
    ppppfStack_c8 = (float ****)&ppppfStack_9c;
    pppppfStack_cc = (float *****)0xd9bb90;
    D3DXMatrixInverse();
    pppppfStack_cc = (float *****)&pppfStack_a8;
    pppppfStack_d0 = (float *****)param_2;
    pppfStack_d4 = (float ***)&stack0xffffff48;
    D3DXVec3TransformNormal();
    ppppfStack_c4 = (float ****)((float)ppppfStack_c4 + (float)pppfStack_84);
    uVar9 = FUN_00d95c60();
    return uVar9;
  case 0x1a:
    return 0;
  }
  local_20 = *param_2;
  pppfStack_1c = param_2[1];
  puStack_34 = param_1 + 0x80;
  ppfStack_18 = (float **)param_2[2];
  ppfStack_14 = (float **)param_2[3];
  ppppfStack_3c = &local_20;
  fStack_40 = 1.992689e-38;
  ppppfStack_38 = ppppfStack_3c;
  D3DXVec3TransformNormal();
  if ((-*(float *)(param_1 + 0x60) < *(float *)(param_1 + 0xb4) + fStack_28) &&
     (*(float *)(param_1 + 0xb4) + fStack_28 < *(float *)(param_1 + 0x60))) {
    fVar2 = (unaff_ESI + *(float *)(param_1 + 0xb0)) - *(float *)(param_1 + 0x40);
    fVar4 = (*(float *)(param_1 + 0xb8) + fStack_24) - *(float *)(param_1 + 0x44);
    if ((0.0 < (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x44)) * fVar2 -
               (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x40)) * fVar4) ||
       ((*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x44)) * fVar2 -
        (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x40)) * fVar4 < 0.0)) {
      return 0;
    }
    fVar4 = (unaff_ESI + *(float *)(param_1 + 0xb0)) - *(float *)(param_1 + 0x50);
    fVar2 = (*(float *)(param_1 + 0xb8) + fStack_24) - *(float *)(param_1 + 0x54);
    if (0.0 < (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) * fVar4 -
              (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x50)) * fVar2) {
      return 0;
    }
    if (0.0 <= (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) * fVar4 -
               (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar2) {
      return 1;
    }
  }
  return 0;
}

// 00D90100  FUN_00d90100  size=1212  [between]
undefined4 FUN_00d90100(undefined1 *param_1,float *param_2,undefined1 *param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar4;
  float10 fVar5;
  int iVar6;
  float fVar7;
  float fStack_e4;
  undefined1 **ppuStack_d4;
  float *pfStack_d0;
  undefined1 **ppuStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined1 **ppuStack_c0;
  undefined1 **ppuStack_bc;
  undefined1 *puStack_b8;
  float fStack_b4;
  undefined1 *puStack_a8;
  float fStack_a4;
  undefined1 auStack_9c [24];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  float fStack_54;
  undefined1 local_50 [36];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    fStack_54 = param_4;
    puStack_58 = param_3;
    puStack_5c = local_50;
    uStack_60 = 0xd954eb;
    D3DXMatrixMultiply();
    if ((param_2[2] - fStack_24) * (param_2[2] - fStack_24) +
        (*param_2 - fStack_2c) * (*param_2 - fStack_2c) +
        (param_2[1] - fStack_28) * (param_2[1] - fStack_28) <
        *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40)) {
      return 1;
    }
    return 0;
  case 1:
    fStack_a4 = param_4;
    puStack_a8 = param_3;
    D3DXMatrixMultiply();
    fStack_b4 = 0.0;
    puStack_b8 = auStack_9c;
    ppuStack_bc = (undefined1 **)0xd8f9df;
    D3DXMatrixInverse();
    ppuStack_bc = &puStack_a8;
    ppuStack_c0 = (undefined1 **)param_2;
    puStack_c8 = (undefined1 *)0xd8f9f2;
    puStack_c4 = (undefined1 *)&puStack_b8;
    D3DXVec3TransformNormal();
    fVar7 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x48)) * 0.5;
    if (((-fVar7 < fStack_80 + (float)ppuStack_c0) && (fStack_80 + (float)ppuStack_c0 < fVar7)) &&
       ((fStack_7c + (float)ppuStack_bc) * (fStack_7c + (float)ppuStack_bc) +
        (fStack_84 + (float)puStack_c4) * (fStack_84 + (float)puStack_c4) <
        *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40))) {
      return 1;
    }
    return 0;
  case 2:
    fStack_a4 = param_4;
    puStack_a8 = param_3;
    D3DXMatrixMultiply();
    fStack_b4 = 0.0;
    puStack_b8 = auStack_9c;
    ppuStack_bc = (undefined1 **)0xd8fd2f;
    D3DXMatrixInverse();
    ppuStack_bc = &puStack_a8;
    ppuStack_c0 = (undefined1 **)param_2;
    puStack_c8 = (undefined1 *)0xd8fd42;
    puStack_c4 = (undefined1 *)&puStack_b8;
    D3DXVec3TransformNormal();
    fVar7 = (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 100)) * 0.5;
    if ((-fVar7 < fStack_80 + (float)ppuStack_c0) && (fStack_80 + (float)ppuStack_c0 < fVar7)) {
      fVar7 = (fStack_84 + (float)puStack_c4) -
              (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x10));
      fVar1 = (fStack_7c + (float)ppuStack_bc) -
              (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x18));
      if ((*(float *)(param_1 + 0x6c) * fVar7 - *(float *)(param_1 + 0x68) * fVar1 <= 0.0) &&
         (0.0 <= *(float *)(param_1 + 0x74) * fVar7 - *(float *)(param_1 + 0x70) * fVar1)) {
        fVar7 = (fStack_84 + (float)puStack_c4) -
                (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x10));
        fVar1 = (fStack_7c + (float)ppuStack_bc) -
                (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x18));
        if (*(float *)(param_1 + 0x7c) * fVar7 - *(float *)(param_1 + 0x78) * fVar1 <= 0.0) {
          if ((*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) * fVar7 -
              (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar1 < 0.0) {
            return 0;
          }
          return 1;
        }
      }
      return 0;
    }
    return 0;
  case 3:
    fStack_e4 = param_4;
    D3DXMatrixMultiply(local_50,param_3);
    D3DXMatrixInverse(auStack_9c,0,&puStack_5c);
    D3DXVec3TransformNormal(&stack0xffffff28,param_2,&puStack_a8);
    fStack_e4 = fStack_84 + fStack_e4;
    if ((fStack_7c + unaff_ESI) * (fStack_7c + unaff_ESI) +
        (fStack_80 + unaff_EDI) * (fStack_80 + unaff_EDI) + fStack_e4 * fStack_e4 <=
        *(float *)(param_1 + 4)) {
      fVar7 = *(float *)(param_1 + 0x40);
      pfVar4 = (float *)(param_1 + 0x60);
      pfVar3 = (float *)(param_1 + 0x70);
      iVar6 = 0;
      if ((byte)param_1[0x44] != 1 && -1 < (int)((byte)param_1[0x44] - 1)) {
        do {
          puStack_c4 = (undefined1 *)(*pfVar4 - *(float *)(param_1 + 0x10));
          ppuStack_c0 = (undefined1 **)(pfVar4[1] - *(float *)(param_1 + 0x14));
          ppuStack_bc = (undefined1 **)(pfVar4[2] - *(float *)(param_1 + 0x18));
          puStack_b8 = (undefined1 *)(pfVar4[3] - *(float *)(param_1 + 0x1c));
          ppuStack_d4 = (undefined1 **)(*pfVar3 - *(float *)(param_1 + 0x10));
          pfStack_d0 = (float *)(pfVar3[1] - *(float *)(param_1 + 0x14));
          ppuStack_cc = (undefined1 **)(pfVar3[2] - *(float *)(param_1 + 0x18));
          puStack_c8 = (undefined1 *)(pfVar3[3] - *(float *)(param_1 + 0x1c));
          fVar5 = (float10)thunk_FUN_00de19d0(&fStack_e4,&puStack_c4,&ppuStack_d4,0);
          if (fVar5 < (float10)fVar7) {
            return 1;
          }
          iVar6 = iVar6 + 1;
          pfVar4 = pfVar4 + 4;
          pfVar3 = pfVar3 + 4;
        } while (iVar6 < (int)((byte)param_1[0x44] - 1));
      }
    }
    return 0;
  case 4:
    fStack_a4 = param_4;
    puStack_a8 = param_3;
    D3DXMatrixMultiply();
    fStack_b4 = 0.0;
    puStack_b8 = auStack_9c;
    ppuStack_bc = (undefined1 **)0xd8fa9f;
    D3DXMatrixInverse();
    ppuStack_bc = &puStack_a8;
    ppuStack_c0 = (undefined1 **)param_2;
    puStack_c8 = (undefined1 *)0xd8fab2;
    puStack_c4 = (undefined1 *)&puStack_b8;
    D3DXVec3TransformNormal();
    if (((-*(float *)(param_1 + 0x44) < fStack_80 + (float)ppuStack_c0) &&
        (fStack_80 + (float)ppuStack_c0 < *(float *)(param_1 + 0x44))) &&
       ((fStack_7c + (float)ppuStack_bc) * (fStack_7c + (float)ppuStack_bc) +
        (fStack_84 + (float)puStack_c4) * (fStack_84 + (float)puStack_c4) <
        *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40))) {
      return 1;
    }
    return 0;
  case 6:
    fStack_b4 = param_4;
    puStack_b8 = param_3;
    ppuStack_bc = (undefined1 **)local_50;
    ppuStack_c0 = (undefined1 **)0xd9f2bf;
    D3DXMatrixMultiply();
    ppuStack_c0 = &puStack_5c;
    puStack_c4 = (undefined1 *)0x0;
    puStack_c8 = auStack_9c;
    ppuStack_cc = (undefined1 **)0xd9f2d0;
    D3DXMatrixInverse();
    ppuStack_cc = &puStack_a8;
    pfStack_d0 = param_2;
    ppuStack_d4 = &puStack_b8;
    D3DXVec3TransformNormal();
    puStack_c4 = (undefined1 *)((float)puStack_c4 + fStack_84);
    ppuStack_c0 = (undefined1 **)(fStack_80 + (float)ppuStack_c0);
    ppuStack_bc = (undefined1 **)(fStack_7c + (float)ppuStack_bc);
    uVar2 = FUN_00d9c6c0();
    return uVar2;
  case 7:
    fStack_b4 = param_4;
    puStack_b8 = param_3;
    ppuStack_bc = (undefined1 **)local_50;
    ppuStack_c0 = (undefined1 **)0xd9bb7f;
    D3DXMatrixMultiply();
    ppuStack_c0 = &puStack_5c;
    puStack_c4 = (undefined1 *)0x0;
    puStack_c8 = auStack_9c;
    ppuStack_cc = (undefined1 **)0xd9bb90;
    D3DXMatrixInverse();
    ppuStack_cc = &puStack_a8;
    pfStack_d0 = param_2;
    ppuStack_d4 = &puStack_b8;
    D3DXVec3TransformNormal();
    puStack_c4 = (undefined1 *)((float)puStack_c4 + fStack_84);
    ppuStack_c0 = (undefined1 **)(fStack_80 + (float)ppuStack_c0);
    ppuStack_bc = (undefined1 **)(fStack_7c + (float)ppuStack_bc);
    uVar2 = FUN_00d95c60();
    return uVar2;
  case 8:
    return 0;
  }
  fStack_a4 = param_4;
  puStack_a8 = param_3;
  D3DXMatrixMultiply();
  fStack_b4 = 0.0;
  puStack_b8 = auStack_9c;
  ppuStack_bc = (undefined1 **)0xd8fe5f;
  D3DXMatrixInverse();
  ppuStack_bc = &puStack_a8;
  ppuStack_c0 = (undefined1 **)param_2;
  puStack_c8 = (undefined1 *)0xd8fe72;
  puStack_c4 = (undefined1 *)&puStack_b8;
  D3DXVec3TransformNormal();
  if ((-*(float *)(param_1 + 0x60) < fStack_80 + (float)ppuStack_c0) &&
     (fStack_80 + (float)ppuStack_c0 < *(float *)(param_1 + 0x60))) {
    fVar1 = (fStack_84 + (float)puStack_c4) - *(float *)(param_1 + 0x40);
    fVar7 = (fStack_7c + (float)ppuStack_bc) - *(float *)(param_1 + 0x44);
    if ((0.0 < (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x44)) * fVar1 -
               (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x40)) * fVar7) ||
       ((*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x44)) * fVar1 -
        (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x40)) * fVar7 < 0.0)) {
      return 0;
    }
    fVar7 = (fStack_84 + (float)puStack_c4) - *(float *)(param_1 + 0x50);
    fVar1 = (fStack_7c + (float)ppuStack_bc) - *(float *)(param_1 + 0x54);
    if (0.0 < (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) * fVar7 -
              (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x50)) * fVar1) {
      return 0;
    }
    if (0.0 <= (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x54)) * fVar7 -
               (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar1) {
      return 1;
    }
  }
  return 0;
}

// 00D90320  FUN_00d90320  size=1  [between]
void FUN_00d90320(void)

{
  return;
}

// 00D90330  FUN_00d90330  size=1  [between]
void FUN_00d90330(void)

{
  return;
}

// 00D90360  FUN_00d90360  size=66  [between]
undefined4 FUN_00d90360(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
  case 1:
    return 0x60;
  case 2:
    return 0x80;
  case 3:
    return 0x460;
  case 4:
    return 0xa0;
  case 5:
    return 0xc0;
  case 6:
    return 0x150;
  case 7:
    uVar1 = 400;
    break;
  case 8:
    return 0xf0;
  }
  return uVar1;
}

// 00D903D0  FUN_00d903d0  size=115  [between]
void FUN_00d903d0(char *param_1)

{
  float fVar1;
  undefined1 local_50 [36];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*param_1 == '\x01') {
    fVar1 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x48)) * 0.5;
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x14) - fVar1;
    *(float *)(param_1 + 0x44) = fVar1 + *(float *)(param_1 + 0x14);
    return;
  }
  if (*param_1 == '\x05') {
    D3DXMatrixInverse(local_50,0,param_1 + 0x80);
    uStack_2c = *(undefined4 *)(param_1 + 0x10);
    uStack_28 = *(undefined4 *)(param_1 + 0x14);
    uStack_24 = *(undefined4 *)(param_1 + 0x18);
    D3DXMatrixInverse(param_1 + 0x80,0,&stack0xffffffa4);
  }
  return;
}

// 00D90450  FUN_00d90450  size=31  [between]
int * FUN_00d90450(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_018bc228;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    uVar2 = uVar2 + 8;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x40);
  return (int *)0x0;
}

// 00D904A0  FUN_00d904a0  size=218  [between]
void __thiscall FUN_00d904a0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016a35a0);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Quat_x");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xe0);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Quat_y");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xe4);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Quat_z");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xe8);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Quat_w");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xec);
  }
  return;
}

// 00D90580  FUN_00d90580  size=221  [between]
void __thiscall FUN_00d90580(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d904a0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016c29d0);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x170);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016c29c8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x174);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"RIGHT");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x178);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"FLONG");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x17c);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"BEHIND");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x180);
  }
  return;
}

// 00D90660  FUN_00d90660  size=104  [between]
void __thiscall FUN_00d90660(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d904a0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Radius");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xf0);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016c29d4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0xf4);
  }
  return;
}

// 00D907D0  FUN_00d907d0  size=228  [between]
float10 FUN_00d907d0(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = (float10)*param_2 - (float10)*param_1;
  fVar2 = (float10)param_2[1] - (float10)param_1[1];
  fVar3 = (float10)param_2[2] - (float10)param_1[2];
  fVar4 = (float10)*param_3 - (float10)*param_1;
  fVar5 = (float10)param_3[1] - (float10)param_1[1];
  fVar6 = (float10)param_3[2] - (float10)param_1[2];
  fVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
  if (fVar7 <= (float10)0) {
    return fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  }
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar1 <= fVar7) {
    return (float10)(param_3[2] - param_2[2]) * (float10)(param_3[2] - param_2[2]) +
           (float10)(*param_3 - *param_2) * (float10)(*param_3 - *param_2) +
           (float10)(param_3[1] - param_2[1]) * (float10)(param_3[1] - param_2[1]);
  }
  return (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) - (fVar7 * fVar7) / fVar1;
}

// 00D908C0  FUN_00d908c0  size=35  [between]
float10 FUN_00d908c0(float *param_1,float *param_2)

{
  return (((float10)param_1[2] * (float10)param_2[2] +
          (float10)*param_1 * (float10)*param_2 + (float10)param_1[1] * (float10)param_2[1]) -
         (float10)param_2[4]) / (float10)param_2[5];
}

// 00D908F0  FUN_00d908f0  size=246  [between]
float10 FUN_00d908f0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = (float10)*param_1 - (float10)*param_2;
  fVar3 = (float10)param_1[1] - (float10)param_2[1];
  fVar4 = (float10)param_1[2] - (float10)param_2[2];
  fVar8 = (float10)param_2[6] * fVar4 + fVar2 * (float10)param_2[4] + (float10)param_2[5] * fVar3;
  fVar1 = (float10)0;
  fVar5 = (float10)-1.0;
  if ((float10)param_2[0x10] * fVar5 <= fVar8) {
    fVar6 = fVar1;
    if ((float10)param_2[0x10] < fVar8) {
      fVar6 = fVar8 - (float10)param_2[0x10];
    }
  }
  else {
    fVar6 = fVar8 + (float10)param_2[0x10];
  }
  fVar8 = (float10)param_2[10] * fVar4 + fVar2 * (float10)param_2[8] + (float10)param_2[9] * fVar3;
  if ((float10)param_2[0x11] * fVar5 <= fVar8) {
    fVar7 = fVar1;
    if ((float10)param_2[0x11] < fVar8) {
      fVar7 = fVar8 - (float10)param_2[0x11];
    }
  }
  else {
    fVar7 = fVar8 + (float10)param_2[0x11];
  }
  fVar8 = fVar7 * fVar7 + (float10)(float)(fVar6 * fVar6);
  fVar2 = fVar2 * (float10)param_2[0xc] + (float10)param_2[0xd] * fVar3 +
          (float10)param_2[0xe] * fVar4;
  if (fVar5 * (float10)param_2[0x12] <= fVar2) {
    if (fVar2 <= (float10)param_2[0x12]) {
      return fVar1 * fVar1 + fVar8;
    }
    return (fVar2 - (float10)param_2[0x12]) * (fVar2 - (float10)param_2[0x12]) + fVar8;
  }
  return (fVar2 + (float10)param_2[0x12]) * (fVar2 + (float10)param_2[0x12]) + fVar8;
}

// 00D909F0  FUN_00d909f0  size=161  [between]
void FUN_00d909f0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar6 = *param_4 - *param_3;
  fVar8 = param_4[1] - param_3[1];
  fVar9 = param_4[2] - param_3[2];
  fVar1 = param_4[3];
  fVar2 = param_3[3];
  fVar7 = ((param_2[2] - param_3[2]) * fVar9 +
          (param_2[1] - param_3[1]) * fVar8 + (*param_2 - *param_3) * fVar6) /
          (fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
  fVar3 = 0.0;
  if ((fVar7 <= 0.0) || (fVar3 = 1.0, 1.0 < fVar7)) {
    fVar7 = fVar3;
  }
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  *param_1 = *param_3 + fVar6 * fVar7;
  param_1[1] = fVar3 + fVar7 * fVar8;
  param_1[2] = fVar4 + fVar9 * fVar7;
  param_1[3] = fVar7 * (fVar1 - fVar2) + fVar5;
  return;
}

// 00D90AA0  FUN_00d90aa0  size=232  [between]
void FUN_00d90aa0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_14;
  
  fVar6 = (param_5[1] - param_3[1]) * (param_4[2] - param_3[2]) -
          (param_5[2] - param_3[2]) * (param_4[1] - param_3[1]);
  fVar5 = (param_5[2] - param_3[2]) * (*param_4 - *param_3) -
          (*param_5 - *param_3) * (param_4[2] - param_3[2]);
  fVar4 = (*param_5 - *param_3) * (param_4[1] - param_3[1]) -
          (param_5[1] - param_3[1]) * (*param_4 - *param_3);
  fVar7 = (float10)FUN_00d8d500(((param_2[2] * fVar4 + *param_2 * fVar6 + param_2[1] * fVar5) -
                                (param_3[2] * fVar4 + *param_3 * fVar6 + param_3[1] * fVar5)) /
                                (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),4);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = (float)((float10)*param_2 - (float10)fVar6 * fVar7);
  param_1[1] = (float)((float10)fVar1 - (float10)fVar5 * fVar7);
  param_1[2] = (float)((float10)fVar2 - (float10)fVar4 * fVar7);
  param_1[3] = (float)((float10)fVar3 - (float10)local_14 * fVar7);
  return;
}

// 00D90B90  FUN_00d90b90  size=85  [between]
void FUN_00d90b90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (param_3[2] * param_2[2] + param_3[1] * param_2[1] + *param_2 * *param_3) - param_3[4];
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2 - *param_3 * fVar7;
  param_1[1] = fVar4 - fVar1 * fVar7;
  param_1[2] = fVar5 - fVar2 * fVar7;
  param_1[3] = fVar6 - fVar3 * fVar7;
  return;
}

// 00D90BF0  FUN_00d90bf0  size=1129  [between]
void FUN_00d90bf0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar6 = *param_4 - *param_3;
  fVar9 = param_4[1] - param_3[1];
  fVar8 = param_4[2] - param_3[2];
  fVar1 = param_4[3];
  fVar2 = param_3[3];
  fVar14 = *param_5 - *param_3;
  fVar16 = param_5[1] - param_3[1];
  fVar17 = param_5[2] - param_3[2];
  fVar3 = param_5[3];
  fVar4 = param_3[3];
  fVar7 = (param_2[2] - param_3[2]) * fVar8 +
          (*param_2 - *param_3) * fVar6 + (param_2[1] - param_3[1]) * fVar9;
  fVar5 = fVar17 * (param_2[2] - param_3[2]) +
          fVar16 * (param_2[1] - param_3[1]) + fVar14 * (*param_2 - *param_3);
  if ((0.0 < fVar7) || (fVar5 < 0.0 == (fVar5 == 0.0))) {
    fVar11 = (param_2[2] - param_4[2]) * fVar8 +
             (*param_2 - *param_4) * fVar6 + (param_2[1] - param_4[1]) * fVar9;
    fVar10 = (param_2[2] - param_4[2]) * fVar17 +
             (*param_2 - *param_4) * fVar14 + (param_2[1] - param_4[1]) * fVar16;
    if ((0.0 <= fVar11) && (fVar10 <= fVar11)) {
LAB_00d90d39:
      *param_1 = *param_4;
      param_1[1] = param_4[1];
      param_1[2] = param_4[2];
      param_1[3] = param_4[3];
      return;
    }
    fVar13 = fVar10 * fVar7 - fVar11 * fVar5;
    if (((fVar13 < 0.0 == (fVar13 == 0.0)) || (fVar7 < 0.0)) || (fVar11 < 0.0 == (fVar11 == 0.0))) {
      fVar12 = (param_2[2] - param_5[2]) * fVar8 +
               (*param_2 - *param_5) * fVar6 + (param_2[1] - param_5[1]) * fVar9;
      fVar15 = (param_2[2] - param_5[2]) * fVar17 +
               (*param_2 - *param_5) * fVar14 + (param_2[1] - param_5[1]) * fVar16;
      if ((0.0 <= fVar15) && (fVar12 <= fVar15)) {
        *param_1 = *param_5;
        param_1[1] = param_5[1];
        param_1[2] = param_5[2];
        param_1[3] = param_5[3];
        return;
      }
      fVar7 = fVar12 * fVar5 - fVar15 * fVar7;
      if (((fVar7 < 0.0 == (fVar7 == 0.0)) || (fVar5 < 0.0)) || (fVar15 < 0.0 == (fVar15 == 0.0))) {
        fVar5 = fVar15 * fVar11 - fVar12 * fVar10;
        if (((fVar5 < 0.0 == (fVar5 == 0.0)) || (fVar10 = fVar10 - fVar11, fVar10 < 0.0)) ||
           (fVar12 - fVar15 < 0.0)) {
          fVar5 = 1.0 / (fVar5 + fVar7 + fVar13);
          fVar7 = fVar5 * fVar7;
          fVar13 = fVar13 * fVar5;
          fVar5 = param_3[1];
          fVar10 = param_3[2];
          fVar11 = param_3[3];
          *param_1 = fVar7 * fVar6 + *param_3 + fVar13 * fVar14;
          param_1[1] = fVar7 * fVar9 + fVar5 + fVar13 * fVar16;
          param_1[2] = fVar7 * fVar8 + fVar10 + fVar13 * fVar17;
          param_1[3] = (fVar1 - fVar2) * fVar7 + fVar11 + (fVar3 - fVar4) * fVar13;
          return;
        }
        fVar1 = (fVar12 - fVar15) + fVar10;
        if (fVar1 != 0.0) {
          fVar10 = fVar10 / fVar1;
          fVar1 = param_5[1];
          fVar2 = param_4[1];
          fVar3 = param_5[2];
          fVar4 = param_4[2];
          fVar6 = param_5[3];
          fVar5 = param_4[3];
          fVar7 = param_4[1];
          fVar8 = param_4[2];
          fVar9 = param_4[3];
          *param_1 = (*param_5 - *param_4) * fVar10 + *param_4;
          param_1[1] = (fVar1 - fVar2) * fVar10 + fVar7;
          param_1[2] = (fVar3 - fVar4) * fVar10 + fVar8;
          param_1[3] = (fVar6 - fVar5) * fVar10 + fVar9;
          return;
        }
        goto LAB_00d90d39;
      }
      if (fVar5 - fVar15 != 0.0) {
        fVar5 = fVar5 / (fVar5 - fVar15);
        fVar1 = param_3[1];
        fVar2 = param_3[2];
        fVar6 = param_3[3];
        *param_1 = fVar14 * fVar5 + *param_3;
        param_1[1] = fVar1 + fVar5 * fVar16;
        param_1[2] = fVar5 * fVar17 + fVar2;
        param_1[3] = (fVar3 - fVar4) * fVar5 + fVar6;
        return;
      }
    }
    else if (fVar7 - fVar11 != 0.0) {
      fVar7 = fVar7 / (fVar7 - fVar11);
      fVar3 = param_3[1];
      fVar4 = param_3[2];
      fVar5 = param_3[3];
      *param_1 = *param_3 + fVar7 * fVar6;
      param_1[1] = fVar3 + fVar7 * fVar9;
      param_1[2] = fVar7 * fVar8 + fVar4;
      param_1[3] = fVar7 * (fVar1 - fVar2) + fVar5;
      return;
    }
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  return;
}

// 00D91100  FUN_00d91100  size=966  [between]
float10 FUN_00d91100(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                    float *param_6)

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
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  fVar10 = (float10)*param_4 - (float10)*param_3;
  fVar11 = (float10)param_4[1] - (float10)param_3[1];
  fVar12 = (float10)param_4[2] - (float10)param_3[2];
  fVar1 = param_4[3];
  fVar2 = param_3[3];
  fVar13 = (float10)*param_6 - (float10)*param_5;
  fVar14 = (float10)param_6[1] - (float10)param_5[1];
  fVar15 = (float10)param_6[2] - (float10)param_5[2];
  fVar3 = param_6[3];
  fVar4 = param_5[3];
  fVar5 = (float)(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  fVar6 = (float)(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
  fVar7 = (float)((float10)(param_3[2] - param_5[2]) * fVar15 +
                 (float10)(*param_3 - *param_5) * fVar13 +
                 (float10)(param_3[1] - param_5[1]) * fVar14);
  if (1e-06 < fVar5) {
    fVar17 = (float10)(param_3[2] - param_5[2]) * fVar12 +
             (float10)(*param_3 - *param_5) * fVar10 + (float10)(param_3[1] - param_5[1]) * fVar11;
    fVar8 = (float)fVar17;
    if (fVar6 <= 1e-06) {
      fVar16 = (float10)0;
      fVar17 = -(fVar17 / (float10)fVar5);
      if ((float10)0 <= fVar17) {
        if ((float10)1 < fVar17) {
          fVar17 = (float10)1;
        }
      }
      else {
        fVar17 = (float10)0;
      }
    }
    else {
      fVar16 = fVar13 * fVar10 + fVar14 * fVar11 + fVar15 * fVar12;
      fVar9 = (float)fVar16;
      fVar17 = (float10)fVar6 * (float10)fVar5 - fVar16 * fVar16;
      if ((float10)0 == fVar17) {
        fVar17 = (float10)0;
      }
      else {
        fVar17 = (fVar16 * (float10)fVar7 - (float10)fVar8 * (float10)fVar6) /
                 (float10)(float)fVar17;
        if ((float10)0 <= fVar17) {
          if (fVar17 <= (float10)1) {
            fVar16 = (float10)fVar9;
          }
          else {
            fVar16 = (float10)fVar9;
            fVar17 = (float10)1;
          }
        }
        else {
          fVar16 = (float10)fVar9;
          fVar17 = (float10)0;
        }
      }
      fVar16 = (fVar16 * fVar17 + (float10)fVar7) / (float10)fVar6;
      if ((float10)0 <= fVar16) {
        if ((float10)1 < fVar16) {
          fVar17 = (float10)FUN_004fbd50((fVar9 - fVar8) / fVar5,0,0x3f800000);
          fVar15 = (float10)(float)fVar15;
          fVar14 = (float10)(float)fVar14;
          fVar11 = (float10)(float)fVar11;
          fVar13 = (float10)(float)fVar13;
          fVar10 = (float10)(float)fVar10;
          fVar16 = (float10)1.0;
        }
      }
      else {
        fVar16 = (float10)0;
        fVar17 = -((float10)fVar8 / (float10)fVar5);
        if ((float10)0 <= fVar17) {
          if ((float10)1 < fVar17) {
            fVar17 = (float10)1;
          }
        }
        else {
          fVar17 = (float10)0;
        }
      }
    }
  }
  else {
    fVar16 = (float10)fVar6;
    if (fVar16 < (float10)1e-06 != (fVar16 == (float10)1e-06)) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      *param_2 = *param_5;
      param_2[1] = param_5[1];
      param_2[2] = param_5[2];
      param_2[3] = param_5[3];
      return ((float10)param_1[1] - (float10)param_2[1]) *
             ((float10)param_1[1] - (float10)param_2[1]) +
             ((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
             ((float10)param_1[2] - (float10)param_2[2]) *
             ((float10)param_1[2] - (float10)param_2[2]);
    }
    fVar17 = (float10)0;
    fVar16 = (float10)fVar7 / fVar16;
    if (fVar16 < (float10)0) {
      fVar16 = (float10)0;
    }
    else if ((float10)1 < fVar16) {
      fVar16 = (float10)1;
    }
  }
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  *param_1 = (float)((float10)*param_3 + fVar10 * fVar17);
  param_1[1] = (float)(fVar11 * fVar17 + (float10)fVar5);
  param_1[2] = (float)((float10)(float)fVar12 * fVar17) + fVar6;
  param_1[3] = (float)((float10)(fVar1 - fVar2) * fVar17 + (float10)fVar7);
  fVar12 = (float10)*param_5 + fVar13 * fVar16;
  fVar10 = fVar14 * fVar16 + (float10)param_5[1];
  fVar11 = (float10)param_5[2] + fVar15 * fVar16;
  fVar1 = param_5[3];
  *param_2 = (float)fVar12;
  param_2[1] = (float)fVar10;
  param_2[2] = (float)fVar11;
  param_2[3] = (float)((float10)(fVar3 - fVar4) * fVar16 + (float10)fVar1);
  fVar12 = (float10)*param_1 - fVar12;
  fVar10 = (float10)param_1[1] - fVar10;
  fVar11 = (float10)param_1[2] - fVar11;
  return fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
}

// 00D914D0  FUN_00d914d0  size=53  [between]
undefined4 FUN_00d914d0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = ABS((param_1[2] * param_3[2] + *param_1 * *param_3 + param_1[1] * param_3[1]) - param_3[4]
             );
  if (fVar1 < param_2 != (fVar1 == param_2)) {
    return 1;
  }
  return 0;
}

// 00D91580  FUN_00d91580  size=158  [between]
undefined4 FUN_00d91580(float *param_1,float *param_2,float param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00d8d500((param_1[2] * param_4[2] +
                                *param_1 * *param_4 + param_1[1] * param_4[1]) - param_4[4],4);
  fVar2 = (float10)FUN_00d8d500((param_2[2] * param_4[2] +
                                *param_2 * *param_4 + param_2[1] * param_4[1]) - param_4[4],4);
  if ((((float10)(float)(undefined *)0x0 <= fVar2 * (float10)(float)fVar1) &&
      ((float10)param_3 <= ABS((float10)(float)fVar1))) && ((float10)param_3 <= ABS(fVar2))) {
    return 0;
  }
  return 1;
}

// 00D91620  FUN_00d91620  size=105  [between]
undefined4
FUN_00d91620(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  
  FUN_00d90bf0(param_1,param_2,param_4,param_5,param_6);
  fVar1 = ((*param_1 - *param_2) * (*param_1 - *param_2) +
           (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
          (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])) - param_3 * param_3;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D917A0  FUN_00d917a0  size=83  [between]
undefined4
FUN_00d917a0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
            undefined4 param_5,float param_6)

{
  float10 fVar1;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = (float10)FUN_00d91100(local_20,local_30,param_1,param_2,param_4,param_5);
  if (fVar1 <= (float10)(param_3 + param_6) * (float10)(param_3 + param_6)) {
    return 1;
  }
  return 0;
}

// 00D91800  FUN_00d91800  size=456  [between]
undefined4 FUN_00d91800(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = (*param_3 + *param_4) * 0.5;
  fVar5 = (param_4[1] + param_3[1]) * 0.5;
  fVar4 = (param_4[2] + param_3[2]) * 0.5;
  fVar2 = *param_3 - fVar1;
  fVar11 = param_3[1] - fVar5;
  fVar7 = param_3[2] - fVar4;
  fVar3 = (*param_1 + *param_2) * 0.5;
  fVar9 = (param_1[1] + param_2[1]) * 0.5;
  fVar6 = (param_1[2] + param_2[2]) * 0.5;
  fVar12 = *param_2 - fVar3;
  fVar10 = param_2[1] - fVar9;
  fVar8 = param_2[2] - fVar6;
  fVar3 = fVar3 - fVar1;
  fVar9 = fVar9 - fVar5;
  fVar6 = fVar6 - fVar4;
  if (fVar2 + ABS(fVar12) < ABS(fVar3)) {
    return 0;
  }
  if (ABS(fVar9) <= fVar11 + ABS(fVar10)) {
    if (fVar7 + ABS(fVar8) < ABS(fVar6)) {
      return 0;
    }
    fVar5 = ABS(fVar12) + 1e-06;
    fVar4 = ABS(fVar10) + 1e-06;
    fVar1 = ABS(fVar8) + 1e-06;
    if (ABS(fVar9 * fVar8 - fVar6 * fVar10) <= fVar7 * fVar4 + fVar1 * fVar11) {
      if (fVar1 * fVar2 + fVar7 * fVar5 < ABS(fVar6 * fVar12 - fVar3 * fVar8)) {
        return 0;
      }
      if (fVar4 * fVar2 + fVar11 * fVar5 < ABS(fVar3 * fVar10 - fVar9 * fVar12)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00D919D0  FUN_00d919d0  size=226  [between]
undefined4 FUN_00d919d0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float *extraout_EDX;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = (param_1[2] - param_2[2]) * param_3[2] +
          (*param_1 - *param_2) * *param_3 + (param_1[1] - param_2[1]) * param_3[1];
  if ((-param_4 <= fVar1) && (fVar1 <= param_5 + param_4)) {
    local_30 = *param_2 + *param_3 * param_4;
    local_2c = param_4 * param_3[1] + param_2[1];
    local_28 = param_3[2] * param_4 + param_2[2];
    local_24 = param_3[3] * param_4 + param_2[3];
    FUN_00d909f0(&local_20,param_1,param_2,&local_30);
    if (SQRT((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
             (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) +
             (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX)) < param_4) {
      return 1;
    }
  }
  return 0;
}

// 00D91BA0  FUN_00d91ba0  size=490  [between]
undefined4 FUN_00d91ba0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = (*param_1 + *param_2) * 0.5;
  fVar8 = (param_1[1] + param_2[1]) * 0.5;
  fVar5 = (param_1[2] + param_2[2]) * 0.5;
  fVar2 = *param_2 - fVar1;
  fVar4 = param_2[1] - fVar8;
  fVar3 = param_2[2] - fVar5;
  fVar1 = fVar1 - *param_3;
  fVar8 = fVar8 - param_3[1];
  fVar5 = fVar5 - param_3[2];
  fVar7 = param_3[6] * fVar5 + param_3[5] * fVar8 + param_3[4] * fVar1;
  fVar6 = fVar5 * param_3[10] + param_3[8] * fVar1 + fVar8 * param_3[9];
  fVar1 = fVar5 * param_3[0xe] + fVar1 * param_3[0xc] + param_3[0xd] * fVar8;
  fVar8 = param_3[6] * fVar3 + param_3[4] * fVar2 + param_3[5] * fVar4;
  fVar5 = param_3[10] * fVar3 + param_3[8] * fVar2 + param_3[9] * fVar4;
  fVar2 = fVar2 * param_3[0xc] + param_3[0xd] * fVar4 + param_3[0xe] * fVar3;
  if (ABS(fVar8) + param_3[0x10] < ABS(fVar7)) {
    return 0;
  }
  if (ABS(fVar6) <= param_3[0x11] + ABS(fVar5)) {
    if (param_3[0x12] + ABS(fVar2) < ABS(fVar1)) {
      return 0;
    }
    fVar9 = ABS(fVar8) + 1e-06;
    fVar3 = ABS(fVar5) + 1e-06;
    fVar4 = ABS(fVar2) + 1e-06;
    if (ABS(fVar2 * fVar6 - fVar5 * fVar1) <= param_3[0x11] * fVar4 + param_3[0x12] * fVar3) {
      if (fVar4 * param_3[0x10] + param_3[0x12] * fVar9 < ABS(fVar1 * fVar8 - fVar2 * fVar7)) {
        return 0;
      }
      if (fVar3 * param_3[0x10] + param_3[0x11] * fVar9 < ABS(fVar5 * fVar7 - fVar6 * fVar8)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00D91D90  FUN_00d91d90  size=42  [between]
undefined4 FUN_00d91d90(undefined4 param_1,float param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00d908f0(param_1,param_3);
  if (fVar1 <= (float10)param_2 * (float10)param_2) {
    return 1;
  }
  return 0;
}

// 00D91DC0  FUN_00d91dc0  size=168  [between]
undefined4 FUN_00d91dc0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_3[2] * param_2[2] + *param_2 * *param_3 + param_3[1] * param_2[1]) - param_2[4];
  fVar2 = ABS((param_3[0xe] * param_2[2] + param_3[0xc] * *param_2 + param_3[0xd] * param_2[1]) *
              param_3[0x12]) +
          ABS((param_3[10] * param_2[2] + param_3[8] * *param_2 + param_3[9] * param_2[1]) *
              param_3[0x11]) +
          ABS((param_3[6] * param_2[2] + *param_2 * param_3[4] + param_3[5] * param_2[1]) *
              param_3[0x10]);
  if (0.0 <= fVar1) {
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  fVar1 = ABS(fVar1);
  if (fVar1 < fVar2 != (fVar1 == fVar2)) {
    return 1;
  }
  return 0;
}

// 00D91E70  FUN_00d91e70  size=1256  [between]
undefined4 FUN_00d91e70(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float local_70 [6];
  float local_58 [21];
  
  local_58[9] = param_1[6] * param_2[6] + param_1[4] * param_2[4] + param_1[5] * param_2[5];
  local_58[10] = param_1[6] * param_2[10] + param_1[4] * param_2[8] + param_1[5] * param_2[9];
  local_58[0xb] = param_1[6] * param_2[0xe] + param_1[4] * param_2[0xc] + param_1[5] * param_2[0xd];
  local_58[0xc] = param_1[10] * param_2[6] + param_1[8] * param_2[4] + param_1[9] * param_2[5];
  local_58[0xd] = param_1[10] * param_2[10] + param_1[8] * param_2[8] + param_1[9] * param_2[9];
  local_58[0xe] = param_1[10] * param_2[0xe] + param_1[8] * param_2[0xc] + param_1[9] * param_2[0xd]
  ;
  local_58[0xf] = param_1[0xe] * param_2[6] + param_1[0xc] * param_2[4] + param_1[0xd] * param_2[5];
  local_58[0x10] =
       param_1[0xe] * param_2[10] + param_1[0xc] * param_2[8] + param_1[0xd] * param_2[9];
  local_58[0x11] =
       param_1[0xe] * param_2[0xe] + param_1[0xc] * param_2[0xc] + param_1[0xd] * param_2[0xd];
  fVar2 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  local_70[0] = param_1[6] * fVar3 + fVar2 * param_1[4] + param_1[5] * fVar1;
  local_70[1] = param_1[10] * fVar3 + param_1[8] * fVar2 + param_1[9] * fVar1;
  local_70[2] = param_1[0xd] * fVar1 + param_1[0xc] * fVar2 + param_1[0xe] * fVar3;
  local_58[0] = ABS(local_58[9]) + 0.1;
  local_58[1] = ABS(local_58[10]) + 0.1;
  local_58[2] = ABS(local_58[0xb]) + 0.1;
  local_58[3] = ABS(local_58[0xc]) + 0.1;
  local_58[4] = ABS(local_58[0xd]) + 0.1;
  local_58[5] = ABS(local_58[0xe]) + 0.1;
  local_58[6] = ABS(local_58[0xf]) + 0.1;
  local_58[7] = ABS(local_58[0x10]) + 0.1;
  local_58[8] = ABS(local_58[0x11]) + 0.1;
  iVar6 = 0;
  pfVar5 = local_58;
  pfVar4 = param_1 + 0x10;
  do {
    if (pfVar5[2] * param_2[0x12] + *pfVar5 * param_2[0x10] + pfVar5[1] * param_2[0x11] + *pfVar4 <
        ABS(local_70[iVar6])) {
      return 0;
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 3;
  } while (iVar6 < 3);
  pfVar4 = param_2 + 0x10;
  iVar6 = 0;
  do {
    if (*(float *)((int)local_58 + iVar6 + 0x18) * param_1[0x12] +
        *(float *)((int)local_58 + iVar6 + 0xc) * param_1[0x11] +
        *(float *)((int)local_58 + iVar6) * param_1[0x10] + *pfVar4 <
        ABS(*(float *)((int)local_58 + iVar6 + 0x3c) * local_70[2] +
            *(float *)((int)local_58 + iVar6 + 0x24) * local_70[0] +
            *(float *)((int)local_58 + iVar6 + 0x30) * local_70[1])) {
      return 0;
    }
    iVar6 = iVar6 + 4;
    pfVar4 = pfVar4 + 1;
  } while (iVar6 < 0xc);
  if (((local_58[1] * param_2[0x12] + param_2[0x11] * local_58[2] +
        local_58[6] * param_1[0x11] + param_1[0x12] * local_58[3] <
        ABS(local_70[2] * local_58[0xc] - local_70[1] * local_58[0xf])) ||
      (local_58[2] * param_2[0x10] + local_58[0] * param_2[0x12] +
       local_58[7] * param_1[0x11] + param_1[0x12] * local_58[4] <
       ABS(local_70[2] * local_58[0xd] - local_70[1] * local_58[0x10]))) ||
     (local_58[1] * param_2[0x10] + param_2[0x11] * local_58[0] +
      local_58[8] * param_1[0x11] + param_1[0x12] * local_58[5] <
      ABS(local_70[2] * local_58[0xe] - local_70[1] * local_58[0x11]))) {
    return 0;
  }
  if ((param_1[0x10] * local_58[6] + param_1[0x12] * local_58[0] +
       local_58[4] * param_2[0x12] + param_2[0x11] * local_58[5] <
       ABS(local_70[0] * local_58[0xf] - local_70[2] * local_58[9])) ||
     (param_1[0x12] * local_58[1] + param_1[0x10] * local_58[7] +
      local_58[3] * param_2[0x12] + local_58[5] * param_2[0x10] <
      ABS(local_70[0] * local_58[0x10] - local_70[2] * local_58[10]))) {
    return 0;
  }
  if (local_58[4] * param_2[0x10] + param_2[0x11] * local_58[3] +
      param_1[0x12] * local_58[2] + param_1[0x10] * local_58[8] <
      ABS(local_70[0] * local_58[0x11] - local_70[2] * local_58[0xb])) {
    return 0;
  }
  if ((ABS(local_70[1] * local_58[9] - local_70[0] * local_58[0xc]) <=
       local_58[0] * param_1[0x11] + param_1[0x10] * local_58[3] +
       local_58[7] * param_2[0x12] + param_2[0x11] * local_58[8]) &&
     (ABS(local_70[1] * local_58[10] - local_70[0] * local_58[0xd]) <=
      local_58[1] * param_1[0x11] + param_1[0x10] * local_58[4] +
      local_58[6] * param_2[0x12] + local_58[8] * param_2[0x10])) {
    if (local_58[2] * param_1[0x11] + param_1[0x10] * local_58[5] +
        local_58[7] * param_2[0x10] + param_2[0x11] * local_58[6] <
        ABS(local_70[1] * local_58[0xb] - local_70[0] * local_58[0xe])) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 00D92360  FUN_00d92360  size=291  [between]
undefined4
FUN_00d92360(float *param_1,float *param_2,float param_3,float *param_4,float *param_5,float param_6
            )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_4 - *param_1;
  fVar7 = param_4[1] - param_1[1];
  fVar6 = param_4[2] - param_1[2];
  fVar2 = (*param_5 - *param_2) - fVar1;
  fVar4 = (param_5[1] - param_2[1]) - fVar7;
  fVar5 = (param_5[2] - param_2[2]) - fVar6;
  fVar3 = fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
  if (fVar3 == 0.0) {
    return 0;
  }
  fVar2 = fVar5 * fVar6 + fVar4 * fVar7 + fVar2 * fVar1;
  fVar1 = fVar2 * fVar2 -
          ((fVar1 * fVar1 + fVar7 * fVar7 + fVar6 * fVar6) -
          (param_3 + param_6) * (param_3 + param_6)) * fVar3;
  if (0.0 <= fVar1) {
    fVar1 = SQRT(fVar1);
    fVar4 = (fVar1 - fVar2) / fVar3;
    fVar3 = (-fVar2 - fVar1) / fVar3;
    if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
      return 1;
    }
    if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
      return 1;
    }
  }
  return 0;
}

// 00D92490  FUN_00d92490  size=194  [between]
undefined4 FUN_00d92490(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_2 - *param_4;
  fVar2 = param_2[1] - param_4[1];
  fVar3 = param_2[2] - param_4[2];
  fVar1 = param_3[2] * fVar3 + *param_3 * fVar7 + param_3[1] * fVar2;
  param_5 = (fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) - param_5;
  if ((param_5 <= 0.0) || (fVar1 <= 0.0)) {
    param_5 = fVar1 * fVar1 - param_5;
    if (0.0 <= param_5) {
      fVar7 = -fVar1 - SQRT(param_5);
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      fVar6 = param_2[3];
      *param_1 = *param_2 + *param_3 * fVar7;
      param_1[1] = fVar4 + fVar1 * fVar7;
      param_1[2] = fVar2 * fVar7 + fVar5;
      param_1[3] = fVar6 + fVar3 * fVar7;
      return 1;
    }
  }
  return 0;
}

// 00D92590  FUN_00d92590  size=210  [between]
undefined4
FUN_00d92590(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_3 - *param_5;
  fVar2 = param_3[1] - param_5[1];
  fVar3 = param_3[2] - param_5[2];
  fVar1 = param_4[2] * fVar3 + *param_4 * fVar7 + param_4[1] * fVar2;
  fVar7 = (fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) - param_6 * param_6;
  if ((fVar7 <= 0.0) || (fVar1 <= 0.0)) {
    fVar7 = fVar1 * fVar1 - fVar7;
    if (0.0 <= fVar7) {
      fVar7 = -fVar1 - SQRT(fVar7);
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      fVar3 = param_4[3];
      fVar4 = param_3[1];
      fVar5 = param_3[2];
      fVar6 = param_3[3];
      *param_1 = *param_3 + *param_4 * fVar7;
      param_1[1] = fVar4 + fVar1 * fVar7;
      param_1[2] = fVar2 * fVar7 + fVar5;
      param_1[3] = fVar6 + fVar3 * fVar7;
      *param_2 = fVar7;
      return 1;
    }
  }
  return 0;
}

// 00D92670  FUN_00d92670  size=301  [between]
undefined4
FUN_00d92670(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

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
  
  fVar8 = (param_5[1] - param_4[1]) * (param_6[2] - param_4[2]) -
          (param_5[2] - param_4[2]) * (param_6[1] - param_4[1]);
  fVar9 = (param_5[2] - param_4[2]) * (*param_6 - *param_4) -
          (*param_5 - *param_4) * (param_6[2] - param_4[2]);
  fVar7 = (*param_5 - *param_4) * (param_6[1] - param_4[1]) -
          (param_5[1] - param_4[1]) * (*param_6 - *param_4);
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar5 = param_3[3];
  fVar6 = param_2[3];
  fVar10 = (fVar3 - fVar4) * fVar7 + fVar8 * (*param_3 - *param_2) + (fVar1 - fVar2) * fVar9;
  if (fVar10 == 0.0) {
    return 0;
  }
  fVar10 = ((param_4[2] * fVar7 + *param_4 * fVar8 + param_4[1] * fVar9) -
           (fVar7 * param_2[2] + *param_2 * fVar8 + param_2[1] * fVar9)) / fVar10;
  if ((!NAN(fVar10) && 0.0 < fVar10 != (fVar10 == 0.0)) && (fVar10 <= 1.0)) {
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    fVar9 = param_2[3];
    *param_1 = *param_2 + (*param_3 - *param_2) * fVar10;
    param_1[1] = fVar7 + (fVar1 - fVar2) * fVar10;
    param_1[2] = (fVar3 - fVar4) * fVar10 + fVar8;
    param_1[3] = fVar9 + fVar10 * (fVar5 - fVar6);
    return 1;
  }
  return 0;
}

// 00D927A0  FUN_00d927a0  size=587  [between]
undefined4
FUN_00d927a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7)

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
  float10 fVar10;
  
  fVar1 = *param_2 - *param_3;
  fVar3 = param_2[1] - param_3[1];
  fVar4 = param_2[2] - param_3[2];
  fVar2 = param_7[2] * fVar4 + fVar1 * *param_7 + param_7[1] * fVar3;
  if (fVar2 <= 0.0) {
    return 0;
  }
  fVar6 = *param_2 - *param_4;
  fVar8 = param_2[1] - param_4[1];
  fVar5 = param_2[2] - param_4[2];
  fVar7 = param_7[2] * fVar5 + fVar6 * *param_7 + param_7[1] * fVar8;
  if (fVar7 < 0.0) {
    return 0;
  }
  if (fVar2 < fVar7) {
    return 0;
  }
  fVar9 = fVar8 * fVar4 - fVar5 * fVar3;
  fVar4 = fVar5 * fVar1 - fVar4 * fVar6;
  fVar1 = fVar3 * fVar6 - fVar8 * fVar1;
  fVar3 = (param_6[2] - param_4[2]) * fVar1 +
          fVar9 * (*param_6 - *param_4) + (param_6[1] - param_4[1]) * fVar4;
  if (0.0 <= fVar3) {
    if (fVar3 <= fVar2) {
      fVar1 = -(fVar1 * (param_5[2] - param_4[2]) +
               fVar9 * (*param_5 - *param_4) + fVar4 * (param_5[1] - param_4[1]));
      if (fVar1 < 0.0) {
        return 0;
      }
      if (fVar1 + fVar3 <= fVar2) {
        fVar7 = (1.0 / fVar2) * fVar7;
        fVar1 = *param_3;
        fVar2 = param_3[1];
        fVar3 = param_3[2];
        fVar8 = 1.0 - fVar7;
        fVar4 = *param_2;
        fVar5 = param_2[1];
        fVar6 = param_2[2];
        param_1[3] = param_2[3] * fVar8 + param_3[3] * fVar7;
        fVar10 = (float10)FUN_00d8d500(fVar4 * fVar8 + fVar1 * fVar7,4);
        *param_1 = (float)fVar10;
        fVar10 = (float10)FUN_00d8d500(fVar5 * fVar8 + fVar7 * fVar2,4);
        param_1[1] = (float)fVar10;
        fVar10 = (float10)FUN_00d8d500(fVar3 * fVar7 + fVar6 * fVar8,4);
        param_1[2] = (float)fVar10;
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

// 00D929F0  FUN_00d929f0  size=268  [between]
undefined4
FUN_00d929f0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
            float *param_6)

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
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar10 = (float10)FUN_00d8d500((param_4[2] * param_6[2] +
                                 *param_4 * *param_6 + param_6[1] * param_4[1]) - param_6[4],4);
  fVar11 = (float10)FUN_00d8d500(param_3[2] * param_6[2] +
                                 param_3[1] * param_6[1] + *param_3 * *param_6,4);
  fVar12 = (float10)(float)fVar10;
  fVar10 = (float10)0;
  if (fVar10 < fVar11 * fVar12 != (fVar10 == fVar11 * fVar12)) {
    return 0;
  }
  fVar13 = (float10)param_5;
  if (fVar12 <= fVar10) {
    fVar13 = -fVar13;
  }
  fVar11 = (fVar13 - fVar12) / fVar11;
  *param_2 = (float)fVar11;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar6 = param_6[3];
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_1 = (float)(((float10)*param_4 + (float10)*param_3 * fVar11) - (float10)*param_6 * fVar13);
  param_1[1] = (float)(((float10)fVar1 * fVar11 + (float10)fVar7) - (float10)fVar4 * fVar13);
  param_1[2] = (float)(((float10)fVar8 + (float10)fVar2 * fVar11) -
                      (float10)(float)(fVar13 * (float10)fVar5));
  param_1[3] = (float)(((float10)fVar9 + (float10)fVar3 * fVar11) - (float10)fVar6 * fVar13);
  return 1;
}

// 00D92B00  FUN_00d92b00  size=369  [between]
undefined4
FUN_00d92b00(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
            float *param_6)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = param_6[2] * param_4[2] + param_6[1] * param_4[1] + *param_4 * *param_6;
  fVar2 = (float10)FUN_00d8d500(fVar1 - param_6[4],4);
  if ((float10)param_5 <= ABS(fVar2)) {
    fVar4 = (float10)FUN_00d8d500(param_6[2] * param_3[2] +
                                  *param_3 * *param_6 + param_3[1] * param_6[1],4);
    fVar6 = (float10)(float)fVar2;
    fVar2 = (float10)0;
    if (fVar2 < fVar4 * fVar6 != (fVar2 == fVar4 * fVar6)) {
      return 0;
    }
    fVar3 = (float10)param_5;
    if (fVar6 <= fVar2) {
      fVar3 = -fVar3;
    }
    fVar4 = (fVar3 - fVar6) / fVar4;
    *param_2 = (float)fVar4;
    fVar6 = ((float10)*param_4 + (float10)*param_3 * fVar4) - (float10)*param_6 * fVar3;
    fVar5 = ((float10)param_3[1] * fVar4 + (float10)param_4[1]) - (float10)param_6[1] * fVar3;
    fVar2 = ((float10)param_3[2] * fVar4 + (float10)param_4[2]) -
            (float10)(float)((float10)param_6[2] * fVar3);
    fVar4 = ((float10)param_4[3] + (float10)param_3[3] * fVar4) - (float10)param_6[3] * fVar3;
  }
  else {
    *param_2 = 0.0;
    fVar4 = ((float10)fVar1 - (float10)param_6[4]) /
            ((float10)param_6[2] * (float10)param_6[2] +
            (float10)param_6[1] * (float10)param_6[1] + (float10)*param_6 * (float10)*param_6);
    fVar6 = (float10)*param_4 - (float10)*param_6 * fVar4;
    fVar5 = (float10)param_4[1] - (float10)param_6[1] * fVar4;
    fVar2 = (float10)param_4[2] - (float10)param_6[2] * fVar4;
    fVar4 = (float10)param_4[3] - (float10)param_6[3] * fVar4;
  }
  *param_1 = (float)fVar6;
  param_1[1] = (float)fVar5;
  param_1[2] = (float)fVar2;
  param_1[3] = (float)fVar4;
  return 1;
}

// 00D92C80  FUN_00d92c80  size=457  [between]
undefined4
FUN_00d92c80(float *param_1,float *param_2,float param_3,float *param_4,float *param_5,float param_6
            ,float *param_7,float *param_8)

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
  
  fVar1 = *param_4 - *param_1;
  fVar6 = param_4[1] - param_1[1];
  fVar5 = param_4[2] - param_1[2];
  fVar2 = (*param_5 - *param_2) - fVar1;
  fVar3 = (param_5[1] - param_2[1]) - fVar6;
  fVar4 = (param_5[2] - param_2[2]) - fVar5;
  fVar10 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar10 == 0.0) {
    return 0;
  }
  fVar2 = fVar4 * fVar5 + fVar3 * fVar6 + fVar2 * fVar1;
  fVar1 = fVar2 * fVar2 -
          ((fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) -
          (param_3 + param_6) * (param_3 + param_6)) * fVar10;
  if (0.0 <= fVar1) {
    fVar1 = SQRT(fVar1);
    fVar3 = (fVar1 - fVar2) / fVar10;
    fVar10 = (-fVar2 - fVar1) / fVar10;
    if (((0.0 <= fVar3) && (fVar3 <= 1.0)) || ((0.0 <= fVar10 && (fVar10 <= 1.0)))) {
      fVar1 = param_2[1];
      fVar2 = param_1[1];
      fVar3 = param_2[2];
      fVar4 = param_1[2];
      fVar5 = param_2[3];
      fVar6 = param_1[3];
      fVar7 = param_1[1];
      fVar8 = param_1[2];
      fVar9 = param_1[3];
      *param_7 = (*param_2 - *param_1) * fVar10 + *param_1;
      param_7[1] = fVar7 + (fVar1 - fVar2) * fVar10;
      param_7[2] = fVar8 + (fVar3 - fVar4) * fVar10;
      param_7[3] = fVar9 + (fVar5 - fVar6) * fVar10;
      fVar1 = param_5[1];
      fVar2 = param_4[1];
      fVar3 = param_5[2];
      fVar4 = param_4[2];
      fVar5 = param_5[3];
      fVar6 = param_4[3];
      fVar7 = param_4[1];
      fVar8 = param_4[2];
      fVar9 = param_4[3];
      *param_8 = *param_4 + (*param_5 - *param_4) * fVar10;
      param_8[1] = (fVar1 - fVar2) * fVar10 + fVar7;
      param_8[2] = (fVar3 - fVar4) * fVar10 + fVar8;
      param_8[3] = fVar9 + (fVar5 - fVar6) * fVar10;
      return 1;
    }
  }
  return 0;
}

// 00D930F0  FUN_00d930f0  size=99  [between]
void __thiscall FUN_00d930f0(int param_1,undefined4 param_2)

{
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x30);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  local_14 = *(undefined4 *)(param_1 + 0x3c);
  local_1c = *(float *)(param_1 + 0x118) * 0.5 + *(float *)(param_1 + 0x34);
  FUN_00f96180(&local_20,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),param_2,0
               ,0);
  return;
}

// 00D934A0  FUN_00d934a0  size=487  [between]
void __thiscall FUN_00d934a0(int param_1,undefined4 param_2)

{
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
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_60 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x1e4);
  local_5c = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x1e8);
  local_58 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x1ec);
  local_54 = *(float *)(param_1 + 0x1fc) + *(float *)(param_1 + 0x30);
  local_50 = *(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x34);
  local_4c = *(float *)(param_1 + 0x204) + *(float *)(param_1 + 0x38);
  local_48 = *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x30);
  local_44 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x218);
  local_40 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x21c);
  local_3c = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x22c);
  local_38 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x230);
  local_34 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x234);
  local_30 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x1f0);
  local_2c = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 500);
  local_28 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x1f8);
  local_24 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x208);
  local_20 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x20c);
  local_1c = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x210);
  local_18 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x220);
  local_14 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x224);
  local_10 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x228);
  local_c = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x238);
  local_8 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x23c);
  local_4 = *(float *)(param_1 + 0x240) + *(float *)(param_1 + 0x38);
  FUN_00f962a0(&local_60,param_2,0,0);
  return;
}

// 00D939C0  FUN_00d939c0  size=103  [between]
void __thiscall FUN_00d939c0(int param_1,byte param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 < 8) {
    puVar1 = (undefined4 *)(param_1 + 0x1e4 + (uint)param_2 * 0xc);
    local_20 = *puVar1;
    local_1c = puVar1[1];
    local_18 = puVar1[2];
    local_14 = 0x3f800000;
  }
  else {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  *param_3 = local_20;
  param_3[1] = local_1c;
  param_3[2] = local_18;
  param_3[3] = local_14;
  return;
}

// 00D93A30  FUN_00d93a30  size=42  [between]
void __fastcall FUN_00d93a30(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = local_14;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  return;
}

// 00D93A90  FUN_00d93a90  size=83  [between]
void __thiscall FUN_00d93a90(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  param_1[4] = param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1];
  param_1[5] = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  return;
}

// 00D93B50  FUN_00d93b50  size=30  [between]
float10 __thiscall FUN_00d93b50(float *param_1,float *param_2)

{
  return ((float10)param_2[2] * (float10)param_1[2] +
         (float10)*param_2 * (float10)*param_1 + (float10)param_2[1] * (float10)param_1[1]) -
         (float10)param_1[4];
}

// 00D93B70  FUN_00d93b70  size=83  [between]
void __thiscall FUN_00d93b70(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (param_1[2] * param_3[2] + param_1[1] * param_3[1] + *param_3 * *param_1) - param_1[4];
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_2 = *param_3 - *param_1 * fVar7;
  param_2[1] = fVar4 - fVar1 * fVar7;
  param_2[2] = fVar5 - fVar2 * fVar7;
  param_2[3] = fVar6 - fVar3 * fVar7;
  return;
}

// 00D93BD0  FUN_00d93bd0  size=657  [between]
void __fastcall FUN_00d93bd0(int param_1)

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
  
  fVar1 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x40);
  fVar4 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x44);
  fVar7 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x40);
  fVar8 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x44);
  fVar9 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x40);
  fVar6 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x44);
  fVar5 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0xa0) = fVar6 * fVar7 - fVar5 * fVar4;
  *(float *)(param_1 + 0xa4) = fVar5 * fVar1 - fVar7 * fVar3;
  *(float *)(param_1 + 0xa8) = fVar4 * fVar3 - fVar6 * fVar1;
  *(float *)(param_1 + 0xac) = fVar9 * fVar4 - fVar8 * fVar7;
  *(float *)(param_1 + 0xb0) = fVar7 * fVar2 - fVar9 * fVar1;
  *(float *)(param_1 + 0xb4) = fVar8 * fVar1 - fVar4 * fVar2;
  *(float *)(param_1 + 0xb8) = fVar5 * fVar8 - fVar6 * fVar9;
  *(float *)(param_1 + 0xbc) = fVar9 * fVar3 - fVar5 * fVar2;
  *(float *)(param_1 + 0xc0) = fVar2 * fVar6 - fVar3 * fVar8;
  fVar1 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x88);
  fVar7 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x8c);
  fVar4 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x88);
  fVar3 = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x8c);
  fVar9 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x90);
  fVar8 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x88);
  fVar5 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x8c);
  fVar6 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90);
  *(float *)(param_1 + 0xc4) = fVar5 * fVar4 - fVar6 * fVar7;
  *(float *)(param_1 + 200) = fVar6 * fVar1 - fVar4 * fVar8;
  *(float *)(param_1 + 0xcc) = fVar8 * fVar7 - fVar5 * fVar1;
  *(float *)(param_1 + 0xd0) = fVar6 * fVar3 - fVar5 * fVar9;
  *(float *)(param_1 + 0xd4) = fVar9 * fVar8 - fVar6 * fVar2;
  *(float *)(param_1 + 0xd8) = fVar5 * fVar2 - fVar3 * fVar8;
  *(float *)(param_1 + 0xdc) = fVar9 * fVar7 - fVar3 * fVar4;
  *(float *)(param_1 + 0xe0) = fVar4 * fVar2 - fVar9 * fVar1;
  *(float *)(param_1 + 0xe4) = fVar3 * fVar1 - fVar2 * fVar7;
  return;
}

// 00D93E70  FUN_00d93e70  size=327  [between]
void __thiscall FUN_00d93e70(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_00d8d9f0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x40);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x4c);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 100);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point4");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x70);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point5");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x7c);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point6");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x88);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"Point7");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x94);
  }
  FUN_00d93bd0();
  return;
}

// 00D94080  FUN_00d94080  size=50  [between]
void __thiscall FUN_00d94080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d91100(local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_3,param_4);
  return;
}

// 00D94240  FUN_00d94240  size=48  [between]
void __thiscall FUN_00d94240(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00d92670(local_20,param_2,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D94270  FUN_00d94270  size=87  [between]
undefined4 __thiscall FUN_00d94270(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float10 fVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = (float10)FUN_00d91100(local_20,local_30,param_2,param_3,param_1 + 0x50,param_1 + 0x60);
  if (fVar2 <= (float10)fVar1 * (float10)fVar1) {
    return 1;
  }
  return 0;
}

// 00D942F0  FUN_00d942f0  size=48  [between]
void __thiscall FUN_00d942f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d92670(local_20,param_1 + 0x50,param_1 + 0x60,param_2,param_3,param_4);
  return;
}

// 00D94370  FUN_00d94370  size=148  [between]
undefined4 __thiscall FUN_00d94370(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00d90bf0(&local_20,&local_30,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  fVar1 = ((local_20 - local_30) * (local_20 - local_30) +
           (local_1c - local_2c) * (local_1c - local_2c) +
          (local_18 - local_28) * (local_18 - local_28)) - param_3 * param_3;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D94460  FUN_00d94460  size=122  [between]
undefined4 __thiscall FUN_00d94460(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90bf0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  fVar1 = ((local_20 - *param_2) * (local_20 - *param_2) +
           (local_1c - param_2[1]) * (local_1c - param_2[1]) +
          (local_18 - param_2[2]) * (local_18 - param_2[2])) - param_3 * param_3;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D944E0  FUN_00d944e0  size=133  [between]
undefined4 __thiscall
FUN_00d944e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = *(float *)(param_1 + 0x80);
  FUN_00d90bf0(&local_20,(float *)(param_1 + 0x50),param_2,param_3,param_4);
  local_20 = local_20 - *(float *)(param_1 + 0x50);
  local_1c = local_1c - *(float *)(param_1 + 0x54);
  local_18 = local_18 - *(float *)(param_1 + 0x58);
  fVar1 = (local_20 * local_20 + local_1c * local_1c + local_18 * local_18) - fVar1 * fVar1;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D945B0  FUN_00d945b0  size=76  [between]
undefined4 __thiscall FUN_00d945b0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float10 fVar1;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = (float10)FUN_00d91100(local_20,local_30,param_1 + 0x50,param_1 + 0x60,param_2,param_3);
  if (fVar1 <= (float10)param_4 * (float10)param_4) {
    return 1;
  }
  return 0;
}

// 00D94600  FUN_00d94600  size=90  [between]
undefined4 __thiscall FUN_00d94600(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = (float10)FUN_00d91100(local_20,local_30,param_2,param_3,param_1 + 0x50,param_1 + 0x60);
  fVar3 = (float10)(fVar1 + param_4);
  if (fVar2 <= fVar3 * fVar3) {
    return 1;
  }
  return 0;
}

// 00D94750  FUN_00d94750  size=100  [between]
undefined4 __thiscall
FUN_00d94750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  undefined1 local_20 [28];
  
  fVar1 = (float10)thunk_FUN_00de1cf0(param_1 + 0x50,param_1 + 0x60,param_3,param_4);
  if (fVar1 < (float10)1e-06 != (fVar1 == (float10)1e-06)) {
    FUN_00d91100(param_2,local_20,param_1 + 0x50,param_1 + 0x60,param_3,param_4);
    return 1;
  }
  return 0;
}

// 00D94880  FUN_00d94880  size=106  [between]
undefined4 __thiscall FUN_00d94880(int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  
  FUN_00d90bf0(param_2,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  fVar1 = ((*param_2 - *param_3) * (*param_2 - *param_3) +
           (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
          (param_2[2] - param_3[2]) * (param_2[2] - param_3[2])) - param_4 * param_4;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D949A0  FUN_00d949a0  size=35  [between]
void __fastcall FUN_00d949a0(int param_1)

{
  FUN_00d8eca0();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}

// 00D94BA0  FUN_00d94ba0  size=50  [between]
void __thiscall FUN_00d94ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d91100(param_2,local_20,param_1 + 0x50,param_1 + 0x60,param_3,param_4);
  return;
}

// 00D94BE0  FUN_00d94be0  size=48  [between]
void __thiscall FUN_00d94be0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d92670(local_20,param_1 + 0x50,param_1 + 0x60,param_2,param_3,param_4);
  return;
}

// 00D94C10  FUN_00d94c10  size=76  [between]
undefined4 __thiscall FUN_00d94c10(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float10 fVar1;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = (float10)FUN_00d91100(local_20,local_30,param_1 + 0x50,param_1 + 0x60,param_2,param_3);
  if (fVar1 <= (float10)param_4 * (float10)param_4) {
    return 1;
  }
  return 0;
}

// 00D94C80  FUN_00d94c80  size=87  [between]
undefined4 __thiscall
FUN_00d94c80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_3,param_4);
  if (iVar1 != 0) {
    FUN_00d91100(param_2,&stack0xffffffd8,param_1 + 0x14,param_1 + 0x18,param_3,param_4);
    return 1;
  }
  return 0;
}

// 00D94D70  FUN_00d94d70  size=48  [between]
void __thiscall FUN_00d94d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00d92670(local_20,param_2,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D94EA0  FUN_00d94ea0  size=224  [between]
undefined4 __thiscall
FUN_00d94ea0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
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
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  local_50 = *param_4;
  local_4c = param_4[1];
  local_48 = param_4[2];
  local_44 = param_4[3];
  fVar1 = *(float *)(param_1 + 0x80);
  FUN_00d90bf0(&local_20,(float *)(param_1 + 0x50),&local_30,&local_40,&local_50);
  local_20 = local_20 - *(float *)(param_1 + 0x50);
  local_1c = local_1c - *(float *)(param_1 + 0x54);
  local_18 = local_18 - *(float *)(param_1 + 0x58);
  fVar1 = (local_18 * local_18 + local_1c * local_1c + local_20 * local_20) - fVar1 * fVar1;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D94FB0  FUN_00d94fb0  size=148  [between]
undefined4 __thiscall FUN_00d94fb0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00d90bf0(&local_20,&local_30,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  fVar1 = ((local_20 - local_30) * (local_20 - local_30) +
           (local_1c - local_2c) * (local_1c - local_2c) +
          (local_18 - local_28) * (local_18 - local_28)) - param_3 * param_3;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D95050  FUN_00d95050  size=122  [between]
undefined4 __thiscall FUN_00d95050(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90bf0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  fVar1 = ((local_20 - *param_2) * (local_20 - *param_2) +
           (local_1c - param_2[1]) * (local_1c - param_2[1]) +
          (local_18 - param_2[2]) * (local_18 - param_2[2])) - param_3 * param_3;
  if (fVar1 < 1e-06 != (fVar1 == 1e-06)) {
    return 1;
  }
  return 0;
}

// 00D95140  FUN_00d95140  size=90  [between]
undefined4 __thiscall FUN_00d95140(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = (float10)FUN_00d91100(local_20,local_30,param_2 + 0x50,param_2 + 0x60,param_1 + 0x50,
                                param_1 + 0x60);
  if (fVar2 <= (float10)fVar1 * (float10)fVar1) {
    return 1;
  }
  return 0;
}

// 00D951A0  FUN_00d951a0  size=96  [between]
undefined4 __thiscall FUN_00d951a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_2 + 0x80);
  fVar2 = *(float *)(param_1 + 0x80);
  fVar3 = (float10)FUN_00d91100(local_20,local_30,param_2 + 0x50,param_2 + 0x60,param_1 + 0x50,
                                param_1 + 0x60);
  fVar4 = (float10)(fVar1 + fVar2);
  if (fVar3 <= fVar4 * fVar4) {
    return 1;
  }
  return 0;
}

// 00D95200  FUN_00d95200  size=87  [between]
undefined4 __thiscall FUN_00d95200(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float10 fVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = (float10)FUN_00d91100(local_20,local_30,param_2,param_3,param_1 + 0x50,param_1 + 0x60);
  if (fVar2 <= (float10)fVar1 * (float10)fVar1) {
    return 1;
  }
  return 0;
}

// 00D95260  FUN_00d95260  size=90  [between]
undefined4 __thiscall FUN_00d95260(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = (float10)FUN_00d91100(local_20,local_30,param_2,param_3,param_1 + 0x50,param_1 + 0x60);
  fVar3 = (float10)(fVar1 + param_4);
  if (fVar2 <= fVar3 * fVar3) {
    return 1;
  }
  return 0;
}

// 00D952E0  FUN_00d952e0  size=127  [between]
void FUN_00d952e0(undefined1 *param_1,void *param_2)

{
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
    D3DXMatrixTranslation
              (param_2,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18));
    return;
  case 4:
    D3DXMatrixInverse(param_2,0,param_1 + 0x60);
    return;
  case 5:
    D3DXMatrixInverse(param_2,0,param_1 + 0x80);
    return;
  case 6:
    FID_conflict__memcpy(param_2,param_1 + 0x60,0x40);
    return;
  case 7:
    FID_conflict__memcpy(param_2,param_1 + 0x60,0x40);
  }
  return;
}

// 00D95390  FUN_00d95390  size=165  [between]
void FUN_00d95390(undefined1 *param_1,void *param_2)

{
  undefined1 *puStack_60;
  undefined1 local_50 [76];
  
  puStack_60 = local_50;
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
    D3DXMatrixTranslation();
    D3DXMatrixInverse(param_2,0,&puStack_60);
    return;
  case 4:
    puStack_60 = (undefined1 *)0xd953f2;
    FID_conflict__memcpy(param_2,param_1 + 0x60,0x40);
    return;
  case 5:
    puStack_60 = (undefined1 *)0xd95408;
    FID_conflict__memcpy(param_2,param_1 + 0x80,0x40);
    return;
  case 6:
    puStack_60 = (undefined1 *)0xd9541e;
    D3DXMatrixInverse();
    return;
  case 7:
    puStack_60 = (undefined1 *)0xd95431;
    D3DXMatrixInverse();
  }
  return;
}

// 00D95490  switchD_00d900d7::caseD_0  size=64  [class]
undefined4 switchD_00d900d7::caseD_0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar3 = param_2[1] - *(float *)(param_1 + 0x14);
  fVar2 = param_2[2] - *(float *)(param_1 + 0x18);
  if (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 <
      *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40)) {
    return 1;
  }
  return 0;
}

// 00D954D0  switchD_00d900d7::caseD_12  size=98  [class]
undefined4
switchD_00d900d7::caseD_12(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [36];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  D3DXMatrixMultiply(local_50,param_3,param_4);
  if ((param_2[2] - fStack_24) * (param_2[2] - fStack_24) +
      (*param_2 - fStack_2c) * (*param_2 - fStack_2c) +
      (param_2[1] - fStack_28) * (param_2[1] - fStack_28) <
      *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40)) {
    return 1;
  }
  return 0;
}

// 00D95780  FUN_00d95780  size=200  [callgraph]
void FUN_00d95780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_2) {
  case 0:
    FUN_00d8dae0(param_3,param_4);
    return;
  case 1:
    FUN_00d8db20(param_3,param_4);
    return;
  case 2:
    FUN_00d8dbc0(param_3,param_4);
    return;
  case 3:
    FUN_00d8dcf0(param_3,param_4);
    return;
  case 4:
    FUN_00d8dda0(param_3,param_4);
    return;
  case 5:
    FUN_00d8dea0(param_3,param_4);
    return;
  case 6:
    FUN_00d90660(param_3,param_4);
    return;
  case 7:
    FUN_00d90580(param_3,param_4);
    break;
  case 8:
    FUN_00d93e70(param_3,param_4);
    return;
  }
  return;
}

// 00D95870  FUN_00d95870  size=281  [callgraph]
undefined4 FUN_00d95870(undefined1 *param_1,int *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 != (undefined1 *)0x0) {
    local_2c = 1.0;
    switch(*param_1) {
    case 0:
    case 3:
      local_2c = *(float *)(param_1 + 0x40);
      break;
    case 1:
      local_2c = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x48)) * 0.5;
      break;
    case 2:
      local_2c = (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 100)) * 0.5;
      break;
    case 4:
      local_2c = *(float *)(param_1 + 0x44);
      break;
    case 5:
      local_2c = *(float *)(param_1 + 0x60);
    }
    local_20 = *(undefined4 *)(param_1 + 0x10);
    local_1c = *(undefined4 *)(param_1 + 0x14);
    local_18 = *(undefined4 *)(param_1 + 0x18);
    local_14 = *(undefined4 *)(param_1 + 0x1c);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    local_2c = local_2c + local_2c;
    if (local_2c <= 10.0) {
      local_2c = 10.0;
    }
    local_2c = *(float *)(param_1 + 0x14) - local_2c;
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (0,0,&local_34,0,&local_20,&local_30,0x1e,"PrimAt");
    if (((iVar2 != 0) && (local_34 != 0)) && (iVar2 = FUN_008f7780(local_34), iVar2 != 0)) {
      uVar1 = FUN_00912c40(local_34);
      *param_2 = iVar2;
      *param_3 = uVar1;
      return 1;
    }
  }
  return 0;
}

// 00D959B0  FUN_00d959b0  size=263  [callgraph]
void __fastcall FUN_00d959b0(undefined2 *param_1)

{
  *param_1 = 0x7f;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6e) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  return;
}

// 00D95AC0  FUN_00d95ac0  size=402  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00d95bd7) */

bool FUN_00d95ac0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = (param_2[1] - param_3[1]) * (param_2[2] - param_4[2]) -
             (param_2[2] - param_3[2]) * (param_2[1] - param_4[1]);
  local_1c = (param_2[2] - param_3[2]) * (*param_2 - *param_4) -
             (*param_2 - *param_3) * (param_2[2] - param_4[2]);
  local_18 = (*param_2 - *param_3) * (param_2[1] - param_4[1]) -
             (param_2[1] - param_3[1]) * (*param_2 - *param_4);
  if (((local_20 == 0.0) && (local_1c == 0.0)) && (local_18 == 0.0)) {
    return false;
  }
  fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_1c = 1.0;
    local_20 = 0.0;
  }
  return ((param_1[2] * local_18 + *param_1 * local_20 + param_1[1] * local_1c) -
         (local_18 * param_2[2] + param_2[1] * local_1c + *param_2 * local_20)) /
         (local_1c * local_1c + local_20 * local_20 + local_18 * local_18) <= 0.0;
}

// 00D95C60  FUN_00d95c60  size=225  [callgraph]
undefined4 __thiscall FUN_00d95c60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x100;
  iVar1 = FUN_00d95ac0(param_2,param_1 + 0xf0,iVar3,param_1 + 0x130);
  if (iVar1 != 1) {
    return 0;
  }
  iVar1 = param_1 + 0x120;
  iVar2 = FUN_00d95ac0(param_2,iVar1,param_1 + 0xf0,param_1 + 0x160);
  if (iVar2 == 1) {
    iVar2 = FUN_00d95ac0(param_2,param_1 + 0x110,iVar1,param_1 + 0x150);
    if (iVar2 == 1) {
      iVar2 = FUN_00d95ac0(param_2,iVar3,param_1 + 0x110,param_1 + 0x140);
      if (iVar2 == 1) {
        iVar3 = FUN_00d95ac0(param_2,param_1 + 0xf0,iVar1,iVar3);
        if (iVar3 == 1) {
          iVar3 = FUN_00d95ac0(param_2,param_1 + 0x150,param_1 + 0x130,param_1 + 0x140);
          if (iVar3 == 1) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00D95DB0  FUN_00d95db0  size=147  [callgraph]
undefined4 __fastcall
FUN_00d95db0(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (1e-06 <= ABS(param_4)) {
    fVar1 = (param_6 - param_3) * (1.0 / param_4);
    fVar2 = (param_5 - param_3) * (1.0 / param_4);
    fVar3 = fVar2;
    if (fVar2 < fVar1) {
      fVar3 = fVar1;
      fVar1 = fVar2;
    }
    if (*param_1 < fVar1) {
      *param_1 = fVar1;
    }
    if (*param_2 < fVar3) {
      *param_2 = fVar3;
    }
    if (*param_2 < *param_1) {
      return 0;
    }
  }
  else {
    if (param_3 < param_6) {
      return 0;
    }
    if (param_5 < param_3) {
      return 0;
    }
  }
  return 1;
}

// 00D95E50  FUN_00d95e50  size=302  [callgraph]
undefined4 FUN_00d95e50(float *param_1,undefined4 *param_2)

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
  float *in_EAX;
  int iVar12;
  float *unaff_ESI;
  undefined4 *unaff_EDI;
  
  fVar1 = *unaff_ESI;
  fVar2 = *in_EAX;
  fVar3 = unaff_ESI[1];
  fVar4 = in_EAX[1];
  fVar5 = unaff_ESI[2];
  fVar6 = in_EAX[2];
  fVar7 = unaff_ESI[3];
  fVar8 = in_EAX[3];
  iVar12 = FUN_00d95db0(*unaff_ESI,fVar1 - fVar2,*param_2,*unaff_EDI);
  if (((iVar12 != 0) &&
      (iVar12 = FUN_00d95db0(unaff_ESI[1],fVar3 - fVar4,param_2[1],unaff_EDI[1]), iVar12 != 0)) &&
     (iVar12 = FUN_00d95db0(unaff_ESI[2],fVar5 - fVar6,param_2[2],unaff_EDI[2]), iVar12 != 0)) {
    fVar9 = unaff_ESI[1];
    fVar10 = unaff_ESI[2];
    fVar11 = unaff_ESI[3];
    *param_1 = *unaff_ESI + (fVar1 - fVar2) * 0.0;
    param_1[1] = fVar9 + (fVar3 - fVar4) * 0.0;
    param_1[2] = (fVar5 - fVar6) * 0.0 + fVar10;
    param_1[3] = fVar11 + (fVar7 - fVar8) * 0.0;
    return 1;
  }
  return 0;
}

// 00D95F80  FUN_00d95f80  size=263  [callgraph]
void FUN_00d95f80(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  fVar7 = *param_4;
  fVar8 = *param_2;
  fVar9 = param_4[1];
  fVar10 = param_2[1];
  fVar11 = param_4[2];
  fVar12 = param_2[2];
  *param_1 = (fVar9 - fVar10) * (fVar5 - fVar6) - (fVar11 - fVar12) * (fVar3 - fVar4);
  param_1[1] = (fVar11 - fVar12) * (fVar1 - fVar2) - (fVar7 - fVar8) * (fVar5 - fVar6);
  param_1[2] = (fVar7 - fVar8) * (fVar3 - fVar4) - (fVar9 - fVar10) * (fVar1 - fVar2);
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

// 00D96090  FUN_00d96090  size=1449  [callgraph]
undefined4 FUN_00d96090(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
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
  
  if (((((*param_3 != *param_2) || (param_3[1] != param_2[1])) || (param_3[2] != param_2[2])) &&
      (((*param_4 != *param_3 || (param_4[1] != param_3[1])) || (param_4[2] != param_3[2])))) &&
     (((*param_2 != *param_4 || (param_2[1] != param_4[1])) || (param_2[2] != param_4[2])))) {
    local_20 = *param_3 - *param_2;
    local_1c = param_3[1] - param_2[1];
    local_18 = param_3[2] - param_2[2];
    local_14 = param_3[3] - param_2[3];
    local_40 = *param_4 - *param_2;
    local_3c = param_4[1] - param_2[1];
    local_38 = param_4[2] - param_2[2];
    local_34 = param_4[3] - param_2[3];
    local_30 = *param_1 - *param_2;
    local_2c = param_1[1] - param_2[1];
    local_28 = param_1[2] - param_2[2];
    local_24 = param_1[3] - param_2[3];
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
    fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_30 = 0.0;
      local_2c = 1.0;
    }
    fVar1 = local_3c * local_1c + local_40 * local_20 + local_38 * local_18;
    if ((fVar1 - (local_18 * local_28 + local_2c * local_1c + local_30 * local_20) <= 1e-06) &&
       (fVar1 - (local_28 * local_38 + local_30 * local_40 + local_2c * local_3c) <= 1e-06)) {
      local_20 = *param_2 - *param_3;
      local_1c = param_2[1] - param_3[1];
      local_18 = param_2[2] - param_3[2];
      local_14 = param_2[3] - param_3[3];
      local_40 = *param_4 - *param_3;
      local_3c = param_4[1] - param_3[1];
      local_38 = param_4[2] - param_3[2];
      local_34 = param_4[3] - param_3[3];
      local_30 = *param_1 - *param_3;
      local_2c = param_1[1] - param_3[1];
      local_28 = param_1[2] - param_3[2];
      local_24 = param_1[3] - param_3[3];
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20 = 0.0;
        local_1c = 1.0;
        local_18 = 0.0;
      }
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
      fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_28 = 0.0;
        local_30 = 0.0;
        local_2c = 1.0;
      }
      fVar1 = local_3c * local_1c + local_40 * local_20 + local_38 * local_18;
      if ((fVar1 - (local_18 * local_28 + local_2c * local_1c + local_30 * local_20) <= 1e-06) &&
         (fVar1 - (local_28 * local_38 + local_30 * local_40 + local_2c * local_3c) <= 1e-06)) {
        return 1;
      }
    }
  }
  return 0;
}

// 00D96670  FUN_00d96670  size=107  [callgraph]
undefined4 FUN_00d96670(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90aa0(&local_20,param_1,param_2,param_3,param_4);
  if ((local_20 - *param_1) * (local_20 - *param_1) +
      (local_1c - param_1[1]) * (local_1c - param_1[1]) +
      (local_18 - param_1[2]) * (local_18 - param_1[2]) < 1e-06) {
    return 1;
  }
  return 0;
}

// 00D966E0  FUN_00d966e0  size=665  [callgraph]
void FUN_00d966e0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
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
  
  fVar3 = (float10)FUN_00d91100(&local_40,&local_30,param_3,param_4,param_5,param_6);
  local_54 = (float)fVar3;
  fVar3 = (float10)FUN_00d91100(&local_50,&local_20,param_3,param_4,param_6,param_7);
  if (fVar3 < (float10)local_54) {
    local_40 = local_50;
    local_3c = local_4c;
    local_38 = local_48;
    local_34 = local_44;
    local_30 = local_20;
    local_2c = local_1c;
    local_28 = local_18;
    local_24 = local_14;
    local_54 = (float)fVar3;
  }
  fVar3 = (float10)FUN_00d91100(&local_50,&local_20,param_3,param_4,param_7,param_5);
  if (fVar3 < (float10)local_54) {
    local_40 = local_50;
    local_3c = local_4c;
    local_38 = local_48;
    local_34 = local_44;
    local_30 = local_20;
    local_2c = local_1c;
    local_28 = local_18;
    local_24 = local_14;
    local_54 = (float)fVar3;
  }
  FUN_00d90aa0(&local_50,param_3,param_5,param_6,param_7);
  iVar2 = FUN_00d96090(&local_50,param_5,param_6,param_7);
  if ((iVar2 != 0) &&
     (fVar1 = (local_4c - param_3[1]) * (local_4c - param_3[1]) +
              (local_50 - *param_3) * (local_50 - *param_3) +
              (local_48 - param_3[2]) * (local_48 - param_3[2]), fVar1 < local_54)) {
    local_40 = *param_3;
    local_3c = param_3[1];
    local_38 = param_3[2];
    local_34 = param_3[3];
    local_30 = local_50;
    local_2c = local_4c;
    local_28 = local_48;
    local_24 = local_44;
    local_54 = fVar1;
  }
  FUN_00d90aa0(&local_50,param_4,param_5,param_6,param_7);
  iVar2 = FUN_00d96090(&local_50,param_5,param_6,param_7);
  if ((iVar2 != 0) &&
     ((local_4c - param_4[1]) * (local_4c - param_4[1]) +
      (local_50 - *param_4) * (local_50 - *param_4) +
      (local_48 - param_4[2]) * (local_48 - param_4[2]) < local_54)) {
    local_40 = *param_4;
    local_3c = param_4[1];
    local_38 = param_4[2];
    local_34 = param_4[3];
    local_30 = local_50;
    local_2c = local_4c;
    local_28 = local_48;
    local_24 = local_44;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = local_34;
  *param_2 = local_30;
  param_2[1] = local_2c;
  param_2[2] = local_28;
  param_2[3] = local_24;
  return;
}

// 00D96980  FUN_00d96980  size=121  [callgraph]
undefined4
FUN_00d96980(float *param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d95f80(&local_20,param_3,param_4,param_5);
  fVar1 = ABS((param_1[1] * local_1c + *param_1 * local_20 + param_1[2] * local_18) -
              (local_18 * param_3[2] + param_3[1] * local_1c + *param_3 * local_20));
  if (fVar1 < param_2 != (fVar1 == param_2)) {
    return 1;
  }
  return 0;
}

// 00D96A00  FUN_00d96a00  size=72  [callgraph]
undefined4 FUN_00d96a00(float *param_1,float param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (*param_1 - *param_3) * (*param_1 - *param_3) +
          (param_1[1] - param_3[1]) * (param_1[1] - param_3[1]) +
          (param_1[2] - param_3[2]) * (param_1[2] - param_3[2]);
  fVar1 = (param_2 + param_4) * (param_2 + param_4);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return 1;
  }
  return 0;
}

// 00D96A50  FUN_00d96a50  size=101  [callgraph]
undefined4 FUN_00d96a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_3,param_1,param_2);
  if ((local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) +
      (local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) < param_4 * param_4) {
    return 1;
  }
  return 0;
}

// 00D96AC0  FUN_00d96ac0  size=104  [callgraph]
undefined4
FUN_00d96ac0(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_1,param_3,param_4);
  if ((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
      (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) <
      (param_2 + param_5) * (param_2 + param_5)) {
    return 1;
  }
  return 0;
}

// 00D96B30  FUN_00d96b30  size=182  [callgraph]
undefined4 FUN_00d96b30(float *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_4 - *param_3;
  fVar4 = param_4[1] - param_3[1];
  fVar5 = param_4[2] - param_3[2];
  fVar2 = ((param_1[2] - param_3[2]) * fVar5 +
          (param_1[1] - param_3[1]) * fVar4 + (*param_1 - *param_3) * fVar1) /
          (fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
  fVar3 = 0.0;
  if ((0.0 < fVar2) && (fVar3 = fVar2, 1.0 < fVar2)) {
    fVar3 = 1.0;
  }
  fVar1 = (*param_3 + fVar1 * fVar3) - *param_1;
  fVar4 = (param_3[1] + fVar4 * fVar3) - param_1[1];
  fVar2 = (fVar3 * fVar5 + param_3[2]) - param_1[2];
  if (param_2 <= fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2) {
    return 0;
  }
  return 1;
}

// 00D96BF0  FUN_00d96bf0  size=309  [callgraph]
undefined4 FUN_00d96bf0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_1 - *param_2;
  local_2c = param_1[1] - param_2[1];
  local_28 = param_1[2] - param_2[2];
  local_24 = param_1[3] - param_2[3];
  fVar1 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_20 = 0.0;
    local_1c = 1.0;
  }
  fVar1 = ABS((local_20 * param_2[0xc] + param_2[0xd] * local_1c + param_2[0xe] * local_18) *
              param_2[0x12]) +
          ABS((param_2[10] * local_18 + param_2[8] * local_20 + param_2[9] * local_1c) *
              param_2[0x11]) +
          ABS((param_2[6] * local_18 + param_2[4] * local_20 + param_2[5] * local_1c) *
              param_2[0x10]);
  fVar2 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
  fVar1 = fVar1 * fVar1;
  if (fVar2 < fVar1 == (fVar2 == fVar1)) {
    return 0;
  }
  return 1;
}

// 00D96D30  FUN_00d96d30  size=164  [callgraph]
void FUN_00d96d30(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 float param_5)

{
  undefined1 *puStack_94;
  float fStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 local_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  fStack_74 = param_5;
  fStack_78 = 0.0;
  puStack_7c = local_50;
  puStack_80 = (undefined1 *)0xd96d49;
  D3DXMatrixInverse();
  puStack_80 = auStack_5c;
  uStack_84 = param_1;
  puStack_88 = auStack_6c;
  puStack_8c = (undefined1 *)0xd96d5c;
  D3DXVec3TransformNormal();
  fStack_78 = fStack_78 + fStack_38;
  puStack_8c = auStack_68;
  fStack_90 = param_2;
  fStack_74 = fStack_34 + fStack_74;
  fStack_70 = fStack_30 + fStack_70;
  puStack_94 = (undefined1 *)&puStack_88;
  D3DXVec3TransformNormal();
  puStack_94 = (undefined1 *)((float)puStack_94 + fStack_44);
  fStack_90 = fStack_40 + fStack_90;
  puStack_8c = (undefined1 *)(fStack_3c + (float)puStack_8c);
  FUN_00d91800(&uStack_84,&puStack_94,param_3,param_4);
  return;
}

// 00D96DE0  FUN_00d96de0  size=231  [callgraph]
undefined4
FUN_00d96de0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined4 param_6)

{
  byte bVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d95f80(&local_20,param_4,param_5,param_6);
  bVar1 = local_20 * (*param_1 - *param_4) + local_1c * (param_1[1] - param_4[1]) +
          local_18 * (param_1[2] - param_4[2]) < 0.0;
  if ((param_2[2] - param_4[2]) * local_18 +
      (param_2[1] - param_4[1]) * local_1c + local_20 * (*param_2 - *param_4) < 0.0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_3[1] - param_4[1]) * local_1c + (*param_3 - *param_4) * local_20 +
      (param_3[2] - param_4[2]) * local_18 < 0.0) {
    bVar1 = bVar1 | 4;
  }
  if (((bVar1 != 3) && (bVar1 != 6)) && (bVar1 != 5)) {
    return 0;
  }
  return 1;
}

// 00D96ED0  FUN_00d96ed0  size=82  [callgraph]
undefined4 FUN_00d96ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float *extraout_EDX;
  float local_20 [2];
  float local_18;
  
  FUN_00d909f0(local_20,param_1,param_2,param_3);
  if (SQRT((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
           (local_20[0] - *extraout_EDX) * (local_20[0] - *extraout_EDX)) < param_4) {
    return 1;
  }
  return 0;
}

// 00D96F30  FUN_00d96f30  size=136  [callgraph]
undefined4 FUN_00d96f30(int param_1,undefined4 *param_2,float param_3,float param_4)

{
  float *extraout_EDX;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20 [2];
  float local_18;
  
  local_30 = *param_2;
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_2c = (float)param_2[1] + param_4;
  if ((((float)param_2[1] <= *(float *)(param_1 + 4)) && (*(float *)(param_1 + 4) <= local_2c)) &&
     (FUN_00d909f0(local_20,param_1,param_2,&local_30),
     SQRT((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
          (local_20[0] - *extraout_EDX) * (local_20[0] - *extraout_EDX)) < param_3)) {
    return 1;
  }
  return 0;
}

// 00D97080  FUN_00d97080  size=187  [callgraph]
undefined4
FUN_00d97080(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  
  FUN_00d95f80(&local_30,param_3,param_4,param_5);
  fVar1 = (*param_1 + *param_2) * 0.5;
  fVar2 = (param_2[1] + param_1[1]) * 0.5;
  fVar3 = (param_2[2] + param_1[2]) * 0.5;
  if (ABS((fVar2 * local_2c + fVar1 * local_30 + fVar3 * local_28) -
          (param_3[2] * local_28 + *param_3 * local_30 + param_3[1] * local_2c)) <=
      ABS(local_28) * (param_1[2] - fVar3) +
      ABS(local_30) * (*param_1 - fVar1) + ABS(local_2c) * (param_1[1] - fVar2)) {
    return 1;
  }
  return 0;
}

// 00D97140  FUN_00d97140  size=214  [callgraph]
undefined4 FUN_00d97140(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  undefined4 uVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (1e-06 <= (*param_1 - *param_2) * (*param_1 - *param_2) +
               (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
               (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])) {
    local_14 = param_4[3];
    local_24 = param_5[3];
    local_30 = *param_5 - param_3;
    local_2c = param_5[1] - param_3;
    local_28 = param_5[2] - param_3;
    local_20 = *param_4 + param_3;
    local_1c = param_4[1] + param_3;
    local_18 = param_4[2] + param_3;
    uVar1 = FUN_00d91800(param_1,param_2,&local_20,&local_30);
    return uVar1;
  }
  fVar2 = (float10)FUN_00d8d620(param_1,param_4,param_5);
  if (fVar2 <= (float10)param_3 * (float10)param_3) {
    return 1;
  }
  return 0;
}

// 00D97420  FUN_00d97420  size=310  [callgraph]
undefined4
FUN_00d97420(float *param_1,float *param_2,float param_3,int param_4,uint param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float local_14;
  
  uVar10 = 0;
  uVar9 = 0;
  if (param_5 != 0) {
    fVar1 = 10000.0;
    pfVar8 = (float *)(param_4 + 8);
    do {
      fVar2 = ((param_2[2] * *pfVar8 + pfVar8[-2] * *param_2 + pfVar8[-1] * param_2[1]) - pfVar8[2])
              / pfVar8[3];
      if (param_3 < fVar2) {
        return 0;
      }
      if (fVar2 < fVar1) {
        uVar10 = uVar9;
        fVar1 = fVar2;
      }
      uVar9 = uVar9 + 1;
      pfVar8 = pfVar8 + 8;
    } while (uVar9 < param_5);
    if (fVar1 < 0.0) {
      fVar1 = *(float *)(param_6 + 0x34);
      fVar2 = *(float *)(param_6 + 0x38);
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_1 = *(float *)(param_6 + 0x30) * 0.5 + *param_2 * 0.5;
      param_1[1] = fVar3 * 0.5 + fVar1 * 0.5;
      param_1[2] = fVar4 * 0.5 + fVar2 * 0.5;
      param_1[3] = local_14;
      return 1;
    }
  }
  pfVar8 = (float *)(uVar10 * 0x20 + param_4);
  fVar7 = (pfVar8[2] * param_2[2] + pfVar8[1] * param_2[1] + *param_2 * *pfVar8) - pfVar8[4];
  fVar1 = pfVar8[1];
  fVar2 = pfVar8[2];
  fVar3 = pfVar8[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2 - *pfVar8 * fVar7;
  param_1[1] = fVar4 - fVar1 * fVar7;
  param_1[2] = fVar5 - fVar2 * fVar7;
  param_1[3] = fVar6 - fVar3 * fVar7;
  return 1;
}

// 00D97610  FUN_00d97610  size=458  [callgraph]
undefined4 FUN_00d97610(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_24 = param_3[3] - param_2[3];
  fVar4 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (1e-06 < SQRT(fVar4)) {
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    if (fVar4 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_2c = 1.0;
      local_30 = 0.0;
    }
    else {
      FUN_00ddf460(&local_30,&local_30);
    }
    if ((param_4[1] * local_2c + *param_4 * local_30 + param_4[2] * local_28 <= 0.0) &&
       (param_4[4] != 0.0)) {
      fVar4 = (param_4[4] -
              (param_2[2] * param_4[2] + param_2[1] * param_4[1] + *param_2 * *param_4)) /
              (param_4[1] * local_1c + *param_4 * local_20 + param_4[2] * local_18);
      if ((!NAN(fVar4) && 0.0 < fVar4 != (fVar4 == 0.0)) && (fVar4 <= 1.0)) {
        fVar1 = param_2[1];
        fVar2 = param_2[2];
        fVar3 = param_2[3];
        *param_1 = *param_2 + local_20 * fVar4;
        param_1[1] = fVar1 + local_1c * fVar4;
        param_1[2] = local_18 * fVar4 + fVar2;
        param_1[3] = local_14 * fVar4 + fVar3;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

// 00D977E0  FUN_00d977e0  size=146  [callgraph]
void FUN_00d977e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 float *param_5,float *param_6)

{
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = (param_6[1] - param_4[1]) * (param_5[2] - param_4[2]) -
             (param_6[2] - param_4[2]) * (param_5[1] - param_4[1]);
  local_1c = (param_6[2] - param_4[2]) * (*param_5 - *param_4) -
             (*param_6 - *param_4) * (param_5[2] - param_4[2]);
  local_18 = (*param_6 - *param_4) * (param_5[1] - param_4[1]) -
             (param_6[1] - param_4[1]) * (*param_5 - *param_4);
  FUN_00d927a0(param_1,param_2,param_3,param_4,param_5,param_6,&local_20);
  return;
}

// 00D97880  FUN_00d97880  size=89  [callgraph]
bool FUN_00d97880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00d977e0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_00d977e0(param_1,param_2,param_3,param_4,param_6,param_7);
  return iVar1 != 0;
}

// 00D978E0  FUN_00d978e0  size=308  [callgraph]
undefined4 FUN_00d978e0(undefined4 param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int *local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_58;
  int local_54 [20];
  
  local_54[0] = 2;
  local_54[2] = 2;
  local_54[7] = 2;
  local_54[9] = 6;
  local_54[0xe] = 6;
  local_78 = local_54;
  local_58 = 0;
  local_54[1] = 1;
  local_54[3] = 4;
  local_54[4] = 1;
  local_54[5] = 3;
  local_54[6] = 7;
  local_54[8] = 0;
  local_54[10] = 3;
  local_54[0xb] = 1;
  local_54[0xc] = 5;
  local_54[0xd] = 0;
  local_54[0xf] = 4;
  local_54[0x10] = 7;
  local_74 = 0;
  do {
    iVar4 = local_78[1] * 0x10 + param_4;
    iVar2 = *local_78 * 0x10 + param_4;
    pfVar3 = (float *)(local_78[-1] * 0x10 + param_4);
    FUN_00d95f80(&local_70,pfVar3,iVar2,iVar4);
    fVar1 = ABS((param_2[1] * local_6c + *param_2 * local_70 + param_2[2] * local_68) -
                (local_68 * pfVar3[2] + pfVar3[1] * local_6c + *pfVar3 * local_70));
    if (fVar1 < param_3 != (fVar1 == param_3)) {
      FUN_00d90aa0(param_1,param_2,pfVar3,iVar2,iVar4);
      return 1;
    }
    local_78 = local_78 + 3;
    local_74 = local_74 + 1;
  } while (local_74 < 6);
  return 0;
}

// 00D97A20  FUN_00d97a20  size=345  [callgraph]
undefined4 FUN_00d97a20(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = param_5 * param_5;
  fVar1 = (*param_2 - *param_4) * (*param_2 - *param_4) +
          (param_2[1] - param_4[1]) * (param_2[1] - param_4[1]) +
          (param_2[2] - param_4[2]) * (param_2[2] - param_4[2]);
  if (fVar1 < fVar2 != (fVar1 == fVar2)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return 1;
  }
  iVar3 = FUN_00d96ac0(param_4,param_5,param_2,param_3,0);
  if (iVar3 != 0) {
    local_20 = *param_3 - *param_2;
    local_1c = param_3[1] - param_2[1];
    local_18 = param_3[2] - param_2[2];
    local_14 = param_3[3] - param_2[3];
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
    uVar4 = FUN_00d92490(param_1,param_2,&local_20,param_4,fVar2);
    return uVar4;
  }
  return 0;
}

// 00D97B80  FUN_00d97b80  size=340  [callgraph]
undefined4 FUN_00d97b80(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*param_2 - *param_4) * (*param_2 - *param_4) +
      (param_2[1] - param_4[1]) * (param_2[1] - param_4[1]) +
      (param_2[2] - param_4[2]) * (param_2[2] - param_4[2]) <= param_5) {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    return 1;
  }
  iVar4 = FUN_00d96b30(param_4,param_5,param_2,param_3);
  if (iVar4 != 0) {
    local_20 = *param_3 - *param_2;
    local_1c = param_3[1] - param_2[1];
    local_18 = param_3[2] - param_2[2];
    local_14 = param_3[3] - param_2[3];
    fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    uVar5 = FUN_00d92490(param_1,param_2,&local_20,param_4,param_5);
    return uVar5;
  }
  return 0;
}

// 00D97CE0  FUN_00d97ce0  size=378  [callgraph]
undefined4
FUN_00d97ce0(float *param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float param_7)

{
  float fVar1;
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
  
  FUN_00d91100(&local_30,&local_20,param_2,param_3,param_5,param_6);
  local_40 = local_30 - local_20;
  local_3c = local_2c - local_1c;
  local_38 = local_28 - local_18;
  local_34 = local_24 - local_14;
  fVar1 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
  if ((param_4 + param_7) * (param_4 + param_7) < fVar1) {
    return 0;
  }
  if (0.0 < fVar1) {
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_38 = 0.0;
      local_40 = 0.0;
      local_3c = 1.0;
    }
    *param_1 = local_20 + local_40 * param_7;
    param_1[1] = local_1c + local_3c * param_7;
    param_1[2] = local_18 + local_38 * param_7;
    param_1[3] = param_7 * local_34 + local_14;
    return 1;
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return 1;
}

// 00D97F50  FUN_00d97f50  size=364  [callgraph]
undefined4
FUN_00d97f50(float *param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  float *extraout_EDX;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00d909f0(&local_30,param_2,param_4,param_5);
  local_20 = *extraout_EDX - local_30;
  local_1c = extraout_EDX[1] - local_2c;
  local_18 = extraout_EDX[2] - local_28;
  local_14 = extraout_EDX[3] - local_24;
  fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
  if ((param_3 + param_6) * (param_3 + param_6) < fVar1) {
    return 0;
  }
  if (0.0 < fVar1) {
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_18 = 0.0;
      local_20 = 0.0;
      local_1c = 1.0;
    }
    *param_1 = local_30 + local_20 * param_6;
    param_1[1] = local_1c * param_6 + local_2c;
    param_1[2] = local_18 * param_6 + local_28;
    param_1[3] = param_6 * local_14 + local_24;
    return 1;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  return 1;
}

// 00D980C0  FUN_00d980c0  size=1097  [callgraph]
undefined4
FUN_00d980c0(undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00d95f80(&local_40,param_6,param_7,param_8);
  bVar2 = local_3c * (param_3[1] - param_6[1]) + local_40 * (*param_3 - *param_6) +
          local_38 * (param_3[2] - param_6[2]) < 0.0;
  if ((param_4[2] - param_6[2]) * local_38 +
      (param_4[1] - param_6[1]) * local_3c + local_40 * (*param_4 - *param_6) < 0.0) {
    bVar2 = bVar2 | 2;
  }
  if ((param_5[1] - param_6[1]) * local_3c + (*param_5 - *param_6) * local_40 +
      (param_5[2] - param_6[2]) * local_38 < 0.0) {
    bVar2 = bVar2 | 4;
  }
  if ((bVar2 != 0) && (bVar2 != 7)) {
    local_50 = (param_8[1] - param_6[1]) * (param_7[2] - param_6[2]) -
               (param_8[2] - param_6[2]) * (param_7[1] - param_6[1]);
    local_4c = (param_8[2] - param_6[2]) * (*param_7 - *param_6) -
               (param_7[2] - param_6[2]) * (*param_8 - *param_6);
    local_48 = (*param_8 - *param_6) * (param_7[1] - param_6[1]) -
               (param_8[1] - param_6[1]) * (*param_7 - *param_6);
    local_40 = (param_5[1] - param_3[1]) * (param_4[2] - param_3[2]) -
               (param_5[2] - param_3[2]) * (param_4[1] - param_3[1]);
    local_3c = (param_5[2] - param_3[2]) * (*param_4 - *param_3) -
               (param_4[2] - param_3[2]) * (*param_5 - *param_3);
    local_38 = (*param_5 - *param_3) * (param_4[1] - param_3[1]) -
               (param_5[1] - param_3[1]) * (*param_4 - *param_3);
    iVar1 = FUN_00d927a0(local_30,param_3,param_4,param_6,param_7,param_8,&local_50);
    bVar2 = iVar1 != 0;
    iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_3,param_5,param_6,param_7,param_8,
                         &local_50);
    if (iVar1 != 0) {
      bVar2 = bVar2 + 1;
    }
    bVar3 = bVar2 == 2;
    if (bVar2 < 2) {
      iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_4,param_3,param_6,param_7,param_8,
                           &local_50);
      if (iVar1 != 0) {
        bVar2 = bVar2 + 1;
      }
      bVar3 = bVar2 == 2;
      if (bVar2 < 2) {
        iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_4,param_5,param_6,param_7,param_8,
                             &local_50);
        if (iVar1 != 0) {
          bVar2 = bVar2 + 1;
        }
        bVar3 = bVar2 == 2;
        if (bVar2 < 2) {
          iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_5,param_3,param_6,param_7,param_8,
                               &local_50);
          if (iVar1 != 0) {
            bVar2 = bVar2 + 1;
          }
          bVar3 = bVar2 == 2;
          if (bVar2 < 2) {
            iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_5,param_4,param_6,param_7,param_8,
                                 &local_50);
            if (iVar1 != 0) {
              bVar2 = bVar2 + 1;
            }
            bVar3 = bVar2 == 2;
            if (bVar2 < 2) {
              iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_6,param_7,param_3,param_4,
                                   param_5,&local_40);
              if (iVar1 != 0) {
                bVar2 = bVar2 + 1;
              }
              bVar3 = bVar2 == 2;
              if (bVar2 < 2) {
                iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_6,param_8,param_3,param_4,
                                     param_5,&local_40);
                if (iVar1 != 0) {
                  bVar2 = bVar2 + 1;
                }
                bVar3 = bVar2 == 2;
                if ((char)bVar2 < '\x02') {
                  iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_7,param_6,param_3,param_4,
                                       param_5,&local_40);
                  if (iVar1 != 0) {
                    bVar2 = bVar2 + 1;
                  }
                  bVar3 = bVar2 == 2;
                  if ((char)bVar2 < '\x02') {
                    iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_7,param_8,param_3,param_4,
                                         param_5,&local_40);
                    if (iVar1 != 0) {
                      bVar2 = bVar2 + 1;
                    }
                    bVar3 = bVar2 == 2;
                    if ((char)bVar2 < '\x02') {
                      iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_8,param_6,param_3,
                                           param_4,param_5,&local_40);
                      if (iVar1 != 0) {
                        bVar2 = bVar2 + 1;
                      }
                      bVar3 = bVar2 == 2;
                      if ((char)bVar2 < '\x02') {
                        iVar1 = FUN_00d927a0(local_30 + (char)bVar2 * 4,param_8,param_7,param_3,
                                             param_4,param_5,&local_40);
                        if (iVar1 != 0) {
                          bVar2 = bVar2 + 1;
                        }
                        bVar3 = bVar2 == 2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (bVar3) {
      *param_1 = local_30[0];
      param_1[1] = local_30[1];
      param_1[2] = local_30[2];
      param_1[3] = local_30[3];
      *param_2 = local_20;
      param_2[1] = local_1c;
      param_2[2] = local_18;
      param_2[3] = local_14;
      return 1;
    }
  }
  return 0;
}

// 00D98510  FUN_00d98510  size=245  [callgraph]
undefined4
FUN_00d98510(float *param_1,float *param_2,float param_3,float param_4,float *param_5,float param_6,
            float param_7)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_4 + param_7 < ABS(param_2[1] - param_5[1]) ==
      (param_4 + param_7 == ABS(param_2[1] - param_5[1]))) {
    local_20 = *param_2 - *param_5;
    local_1c = 0.0;
    local_18 = param_2[2] - param_5[2];
    fVar1 = local_20 * local_20 + local_18 * local_18;
    fVar2 = (param_3 + param_6) * (param_3 + param_6);
    if (fVar2 < fVar1 == (fVar2 == fVar1)) {
      fVar2 = SQRT(fVar2) - SQRT(fVar1);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_20 = 0.0;
        local_1c = 1.0;
      }
      *param_1 = fVar2 * local_20;
      param_1[1] = fVar2 * local_1c;
      param_1[2] = fVar2 * local_18;
      return 1;
    }
  }
  return 0;
}

// 00D98610  FUN_00d98610  size=659  [callgraph]
undefined4
FUN_00d98610(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8)

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
  
  fVar2 = (param_5[1] - param_3[1]) * (param_4[2] - param_3[2]) -
          (param_5[2] - param_3[2]) * (param_4[1] - param_3[1]);
  fVar3 = (param_5[2] - param_3[2]) * (*param_4 - *param_3) -
          (param_4[2] - param_3[2]) * (*param_5 - *param_3);
  fVar1 = (*param_5 - *param_3) * (param_4[1] - param_3[1]) -
          (param_5[1] - param_3[1]) * (*param_4 - *param_3);
  fVar7 = (param_8[1] - param_6[1]) * (param_7[2] - param_6[2]) -
          (param_8[2] - param_6[2]) * (param_7[1] - param_6[1]);
  fVar6 = (param_8[2] - param_6[2]) * (*param_7 - *param_6) -
          (param_7[2] - param_6[2]) * (*param_8 - *param_6);
  fVar4 = (*param_8 - *param_6) * (param_7[1] - param_6[1]) -
          (param_8[1] - param_6[1]) * (*param_7 - *param_6);
  *param_2 = fVar4 * fVar3 - fVar6 * fVar1;
  param_2[1] = fVar7 * fVar1 - fVar4 * fVar2;
  param_2[2] = fVar6 * fVar2 - fVar7 * fVar3;
  fVar10 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (fVar10 < 1e-06) {
    return 0;
  }
  fVar9 = fVar4 * param_6[2] + param_6[1] * fVar6 + *param_6 * fVar7;
  fVar5 = param_3[1] * fVar3 + *param_3 * fVar2 + param_3[2] * fVar1;
  fVar8 = fVar7 * fVar5 - fVar2 * fVar9;
  fVar7 = fVar6 * fVar5 - fVar3 * fVar9;
  fVar6 = fVar4 * fVar5 - fVar9 * fVar1;
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  fVar4 = *param_2;
  *param_1 = fVar7 * param_2[2] - fVar6 * param_2[1];
  param_1[1] = fVar1 * fVar6 - fVar8 * fVar2;
  param_1[2] = fVar8 * fVar3 - fVar4 * fVar7;
  *param_1 = *param_1 / fVar10;
  param_1[1] = param_1[1] / fVar10;
  param_1[2] = param_1[2] / fVar10;
  param_1[3] = param_1[3] / fVar10;
  fVar1 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_2 = 0.0;
    param_2[1] = 1.0;
    param_2[2] = 0.0;
    return 1;
  }
  FUN_00ddf460(param_2,param_2);
  return 1;
}

// 00D988B0  FUN_00d988b0  size=732  [callgraph]
undefined4
FUN_00d988b0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
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
  undefined1 local_20 [28];
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  bVar2 = true;
  local_40 = *param_2 + *param_3 * param_5;
  local_3c = param_3[1] * param_5 + param_2[1];
  local_38 = param_2[2] + param_3[2] * param_5;
  local_34 = param_3[3] * param_5 + param_2[3];
  local_64 = 32000.0;
  FUN_00d90aa0(&local_60,&local_30,param_6,param_7,param_8);
  iVar3 = FUN_00d96090(&local_60,param_6,param_7,param_8);
  if ((iVar3 == 0) ||
     (fVar1 = (local_58 - local_28) * (local_58 - local_28) +
              (local_5c - local_2c) * (local_5c - local_2c) +
              (local_60 - local_30) * (local_60 - local_30), 32000.0 <= fVar1)) {
    bVar2 = false;
  }
  else {
    local_50 = local_30;
    local_4c = local_2c;
    local_48 = local_28;
    local_44 = local_24;
    local_64 = fVar1;
  }
  FUN_00d90aa0(&local_60,&local_40,param_6,param_7,param_8);
  iVar3 = FUN_00d96090(&local_60,param_6,param_7,param_8);
  if (iVar3 != 0) {
    fVar4 = (float10)local_40;
    fVar5 = (float10)local_3c;
    fVar6 = (float10)local_38;
    fVar7 = ((float10)local_58 - fVar6) * ((float10)local_58 - fVar6) +
            ((float10)local_5c - fVar5) * ((float10)local_5c - fVar5) +
            ((float10)local_60 - fVar4) * ((float10)local_60 - fVar4);
    if (fVar7 < (float10)local_64) {
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_38;
      local_44 = local_34;
      local_64 = (float)fVar7;
      if (bVar2) goto LAB_00d98b4f;
    }
  }
  fVar4 = (float10)FUN_00d91100(&local_60,local_20,&local_30,&local_40,param_6,param_7);
  if (fVar4 < (float10)local_64) {
    local_50 = local_60;
    local_4c = local_5c;
    local_48 = local_58;
    local_44 = local_54;
    local_64 = (float)fVar4;
  }
  fVar4 = (float10)FUN_00d91100(&local_60,local_20,&local_30,&local_40,param_7,param_8);
  if (fVar4 < (float10)local_64) {
    local_50 = local_60;
    local_4c = local_5c;
    local_48 = local_58;
    local_44 = local_54;
    local_64 = (float)fVar4;
  }
  fVar7 = (float10)FUN_00d91100(&local_60,local_20,&local_30,&local_40,param_8,param_6);
  local_34 = local_44;
  if (fVar7 < (float10)local_64) {
    local_34 = local_54;
    local_48 = local_58;
    local_4c = local_5c;
    local_50 = local_60;
  }
  fVar4 = (float10)local_50;
  fVar5 = (float10)local_4c;
  fVar6 = (float10)local_48;
LAB_00d98b4f:
  if ((float10)param_4 * (float10)param_4 <= fVar7) {
    return 0;
  }
  *param_1 = (float)fVar4;
  param_1[1] = (float)fVar5;
  param_1[2] = (float)fVar6;
  param_1[3] = local_34;
  return 1;
}

// 00D99030  FUN_00d99030  size=413  [callgraph]
float10 __thiscall FUN_00d99030(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  fVar9 = (float10)10000.0;
  fVar10 = (float10)*param_3;
  fVar11 = (float10)param_3[1];
  fVar2 = param_3[2];
  iVar8 = 0;
  fVar12 = (float10)*(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x34);
  pfVar7 = (float *)(param_1 + 0x1ec);
  fVar4 = *(float *)(param_1 + 0x38);
  iVar6 = 2;
  do {
    fVar13 = ((float10)pfVar7[-2] + fVar12) - fVar10;
    fVar14 = (float10)(pfVar7[-1] + fVar3) - fVar11;
    fVar15 = (float10)((*pfVar7 + fVar4) - fVar2);
    fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
    if (fVar13 < fVar9) {
      iVar8 = iVar6 + -2;
      fVar9 = fVar13;
    }
    fVar13 = ((float10)pfVar7[1] + fVar12) - fVar10;
    fVar14 = ((float10)pfVar7[2] + (float10)fVar3) - fVar11;
    fVar15 = (float10)((pfVar7[3] + fVar4) - fVar2);
    fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
    if (fVar13 < fVar9) {
      iVar8 = iVar6 + -1;
      fVar9 = fVar13;
    }
    fVar13 = ((float10)pfVar7[4] + fVar12) - fVar10;
    fVar14 = ((float10)pfVar7[5] + (float10)fVar3) - fVar11;
    fVar15 = (float10)((pfVar7[6] + fVar4) - fVar2);
    fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
    if (fVar13 < fVar9) {
      iVar8 = iVar6;
      fVar9 = fVar13;
    }
    fVar13 = ((float10)pfVar7[7] + fVar12) - fVar10;
    fVar14 = ((float10)pfVar7[8] + (float10)fVar3) - fVar11;
    fVar15 = (float10)((pfVar7[9] + fVar4) - fVar2);
    fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
    if (fVar13 < fVar9) {
      iVar8 = iVar6 + 1;
      fVar9 = fVar13;
    }
    uVar1 = iVar6 + 2;
    pfVar7 = pfVar7 + 0xc;
    iVar6 = iVar6 + 4;
  } while (uVar1 < 8);
  pfVar7 = (float *)(param_1 + 0x1e4 + iVar8 * 0xc);
  fVar2 = pfVar7[1];
  fVar3 = *(float *)(param_1 + 0x34);
  fVar4 = pfVar7[2];
  fVar5 = *(float *)(param_1 + 0x38);
  *param_2 = *pfVar7 + *(float *)(param_1 + 0x30);
  param_2[1] = fVar2 + fVar3;
  param_2[2] = fVar4 + fVar5;
  param_2[3] = 1.0;
  return SQRT(fVar9);
}

// 00D991D0  FUN_00d991d0  size=420  [callgraph]
uint __thiscall FUN_00d991d0(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
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
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  uVar14 = 0;
  fVar5 = param_3[2];
  fVar6 = *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x34);
  pfVar15 = (float *)(param_1 + 0x1ec);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = 10000.0;
  uVar13 = 2;
  do {
    fVar11 = (pfVar15[-2] + fVar6) - fVar3;
    fVar10 = (pfVar15[-1] + fVar7) - fVar4;
    fVar12 = (fVar8 + *pfVar15) - fVar5;
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar9) {
      uVar14 = uVar13 - 2;
      fVar9 = fVar10;
    }
    fVar11 = (pfVar15[1] + fVar6) - fVar3;
    fVar10 = (pfVar15[2] + fVar7) - fVar4;
    fVar12 = (pfVar15[3] + fVar8) - fVar5;
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar9) {
      uVar14 = uVar13 - 1;
      fVar9 = fVar10;
    }
    fVar11 = (pfVar15[4] + fVar6) - fVar3;
    fVar10 = (pfVar15[5] + fVar7) - fVar4;
    fVar12 = (pfVar15[6] + fVar8) - fVar5;
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar9) {
      uVar14 = uVar13;
      fVar9 = fVar10;
    }
    fVar11 = (pfVar15[7] + fVar6) - fVar3;
    fVar10 = (pfVar15[8] + fVar7) - fVar4;
    fVar12 = (pfVar15[9] + fVar8) - fVar5;
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar9) {
      uVar14 = uVar13 + 1;
      fVar9 = fVar10;
    }
    uVar1 = uVar13 + 2;
    pfVar15 = pfVar15 + 0xc;
    uVar13 = uVar13 + 4;
  } while (uVar1 < 8);
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 - 1;
  }
  iVar2 = param_1 + 0x1e4 + uVar14 * 0xc;
  fVar3 = *(float *)(iVar2 + 4);
  fVar4 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(iVar2 + 8);
  fVar6 = *(float *)(param_1 + 0x38);
  *param_2 = *(float *)(param_1 + 0x1e4 + uVar14 * 0xc) + *(float *)(param_1 + 0x30);
  param_2[1] = fVar3 + fVar4;
  param_2[2] = fVar5 + fVar6;
  param_2[3] = 1.0;
  return uVar14;
}

// 00D993F0  FUN_00d993f0  size=85  [callgraph]
void __thiscall FUN_00d993f0(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  param_1[4] = param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1];
  param_1[5] = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  return;
}

// 00D99510  FUN_00d99510  size=88  [callgraph]
undefined4 __thiscall
FUN_00d99510(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00d95f80(param_1,param_2,param_3,param_4);
  param_1[4] = param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1];
  param_1[5] = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  return 1;
}

// 00D995D0  FUN_00d995d0  size=54  [callgraph]
void __thiscall FUN_00d995d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d966e0(local_20,param_2,param_3,param_4,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D99610  FUN_00d99610  size=54  [callgraph]
void __thiscall
FUN_00d99610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 local_20 [28];
  
  FUN_00d966e0(local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_3,param_4,param_5);
  return;
}

// 00D99650  FUN_00d99650  size=54  [callgraph]
void __thiscall
FUN_00d99650(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 local_20 [28];
  
  FUN_00d966e0(local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_3,param_4,param_5);
  return;
}

// 00D99690  FUN_00d99690  size=54  [callgraph]
void __thiscall FUN_00d99690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d966e0(local_20,param_2,param_3,param_4,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D99700  FUN_00d99700  size=111  [callgraph]
undefined4 __thiscall FUN_00d99700(int param_1,float *param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90aa0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  if ((local_20 - *param_2) * (local_20 - *param_2) +
      (local_1c - param_2[1]) * (local_1c - param_2[1]) +
      (local_18 - param_2[2]) * (local_18 - param_2[2]) < 1e-06) {
    return 1;
  }
  return 0;
}

// 00D997A0  FUN_00d997a0  size=113  [callgraph]
undefined4 __thiscall FUN_00d997a0(int param_1,float *param_2)

{
  int extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - param_2[2]) * (local_18 - param_2[2]) +
      (local_20 - *param_2) * (local_20 - *param_2) +
      (local_1c - param_2[1]) * (local_1c - param_2[1]) <
      *(float *)(extraout_EDX + 0x80) * *(float *)(extraout_EDX + 0x80)) {
    return 1;
  }
  return 0;
}

// 00D99850  FUN_00d99850  size=119  [callgraph]
undefined4 __thiscall FUN_00d99850(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_1 + 0x50,param_2,param_3);
  fVar1 = *(float *)(param_1 + 0x80) + 0.1;
  if ((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
      (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) < fVar1 * fVar1) {
    return 1;
  }
  return 0;
}

// 00D998D0  FUN_00d998d0  size=48  [callgraph]
void __thiscall FUN_00d998d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00d977e0(local_20,param_2,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D99900  FUN_00d99900  size=111  [callgraph]
undefined4 __thiscall
FUN_00d99900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90aa0(&local_20,(float *)(param_1 + 0x50),param_2,param_3,param_4);
  local_20 = local_20 - *(float *)(param_1 + 0x50);
  local_1c = local_1c - *(float *)(param_1 + 0x54);
  local_18 = local_18 - *(float *)(param_1 + 0x58);
  if (local_20 * local_20 + local_1c * local_1c + local_18 * local_18 < 1e-06) {
    return 1;
  }
  return 0;
}

// 00D99970  FUN_00d99970  size=57  [callgraph]
void __thiscall FUN_00d99970(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_00d98610(local_30,local_20,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,param_2,param_3,
               param_4);
  return;
}

// 00D99A40  FUN_00d99a40  size=138  [callgraph]
undefined4 __thiscall FUN_00d99a40(int param_1,float *param_2,float param_3)

{
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00d909f0(&local_20,&local_30,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - local_28) * (local_18 - local_28) +
      (local_20 - local_30) * (local_20 - local_30) + (local_1c - local_2c) * (local_1c - local_2c)
      < param_3 * param_3) {
    return 1;
  }
  return 0;
}

// 00D99AD0  FUN_00d99ad0  size=75  [callgraph]
void __thiscall FUN_00d99ad0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = 0x3f800000;
  FUN_00d96980(&local_20,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D99B80  FUN_00d99b80  size=146  [callgraph]
undefined4 __thiscall FUN_00d99b80(int param_1,float *param_2,float param_3)

{
  int extraout_EDX;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00d909f0(&local_20,&local_30,param_1 + 0x50,param_1 + 0x60);
  param_3 = *(float *)(extraout_EDX + 0x80) + param_3;
  if ((local_18 - local_28) * (local_18 - local_28) +
      (local_20 - local_30) * (local_20 - local_30) + (local_1c - local_2c) * (local_1c - local_2c)
      < param_3 * param_3) {
    return 1;
  }
  return 0;
}

// 00D99C20  FUN_00d99c20  size=105  [callgraph]
undefined4 __thiscall FUN_00d99c20(int param_1,undefined4 param_2,float param_3)

{
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
      (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) < param_3 * param_3) {
    return 1;
  }
  return 0;
}

// 00D99D70  FUN_00d99d70  size=48  [callgraph]
void __thiscall FUN_00d99d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d977e0(local_20,param_1 + 0x50,param_1 + 0x60,param_2,param_3,param_4);
  return;
}

// 00D99DD0  FUN_00d99dd0  size=57  [callgraph]
void __thiscall FUN_00d99dd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_00d980c0(local_30,local_20,param_2,param_3,param_4,param_1 + 0x50,param_1 + 0x60,
               param_1 + 0x70);
  return;
}

// 00D99E70  FUN_00d99e70  size=76  [callgraph]
undefined4 __thiscall FUN_00d99e70(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00d907d0(param_3,param_1 + 0x50,param_1 + 0x60);
  if (fVar1 < (float10)1e-06) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return 1;
  }
  return 0;
}

// 00D99EC0  FUN_00d99ec0  size=56  [callgraph]
undefined4 FUN_00d99ec0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00d99700(param_2);
  if (iVar1 != 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return 1;
  }
  return 0;
}

// 00D99F00  FUN_00d99f00  size=71  [callgraph]
undefined4 __thiscall FUN_00d99f00(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00d96090(param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  if (iVar1 != 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return 1;
  }
  return 0;
}

// 00D9A040  FUN_00d9a040  size=56  [callgraph]
void __thiscall
FUN_00d9a040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 local_20 [28];
  
  FUN_00d98610(param_2,local_20,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,param_3,param_4,param_5
              );
  return;
}

// 00D9A2B0  FUN_00d9a2b0  size=205  [callgraph]
undefined4 __thiscall
FUN_00d9a2b0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
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
  
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = param_5[2];
  local_14 = 0x3f800000;
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  local_24 = 0x3f800000;
  local_40 = *param_7;
  local_3c = param_7[1];
  local_38 = param_7[2];
  local_34 = 0x3f800000;
  iVar1 = FUN_00d977e0(param_2,param_1 + 0x50,param_1 + 0x60,&local_20,&local_30,&local_40);
  if (iVar1 != 0) {
    FUN_00d95f80(param_4,&local_20,&local_30,&local_40);
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    return 1;
  }
  return 0;
}

// 00D9A380  FUN_00d9a380  size=107  [callgraph]
undefined4 __thiscall
FUN_00d9a380(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00d977e0(param_2,param_1 + 0x50,param_1 + 0x60,param_5,param_6,param_7);
  if (iVar1 != 0) {
    FUN_00d95f80(param_4,param_5,param_6,param_7);
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    return 1;
  }
  return 0;
}

// 00D9A420  FUN_00d9a420  size=111  [callgraph]
undefined4 __thiscall
FUN_00d9a420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90aa0(&local_20,(float *)(param_1 + 0x50),param_2,param_3,param_4);
  local_20 = local_20 - *(float *)(param_1 + 0x50);
  local_1c = local_1c - *(float *)(param_1 + 0x54);
  local_18 = local_18 - *(float *)(param_1 + 0x58);
  if (local_20 * local_20 + local_1c * local_1c + local_18 * local_18 < 1e-06) {
    return 1;
  }
  return 0;
}

// 00D9A4C0  FUN_00d9a4c0  size=54  [callgraph]
void __thiscall
FUN_00d9a4c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 local_20 [28];
  
  FUN_00d966e0(param_2,local_20,param_1 + 0x50,param_1 + 0x60,param_3,param_4,param_5);
  return;
}

// 00D9A530  FUN_00d9a530  size=144  [callgraph]
undefined4 __thiscall FUN_00d9a530(int param_1,float *param_2,float param_3)

{
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00d909f0(&local_20,&local_30,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - local_28) * (local_18 - local_28) +
      (local_20 - local_30) * (local_20 - local_30) + (local_1c - local_2c) * (local_1c - local_2c)
      < (param_3 + 0.1) * (param_3 + 0.1)) {
    return 1;
  }
  return 0;
}

// 00D9A5C0  FUN_00d9a5c0  size=111  [callgraph]
undefined4 __thiscall FUN_00d9a5c0(int param_1,undefined4 param_2,float param_3)

{
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
      (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) <
      (param_3 + 0.1) * (param_3 + 0.1)) {
    return 1;
  }
  return 0;
}

// 00D9A630  FUN_00d9a630  size=48  [callgraph]
void __thiscall FUN_00d9a630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d977e0(local_20,param_1 + 0x50,param_1 + 0x60,param_2,param_3,param_4);
  return;
}

// 00D9A6C0  FUN_00d9a6c0  size=205  [callgraph]
undefined4 __thiscall
FUN_00d9a6c0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
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
  
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = param_5[2];
  local_14 = 0x3f800000;
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  local_24 = 0x3f800000;
  local_40 = *param_7;
  local_3c = param_7[1];
  local_38 = param_7[2];
  local_34 = 0x3f800000;
  iVar1 = FUN_00d977e0(param_2,param_1 + 0x50,param_1 + 0x60,&local_20,&local_30,&local_40);
  if (iVar1 != 0) {
    FUN_00d95f80(param_4,&local_20,&local_30,&local_40);
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    return 1;
  }
  return 0;
}

// 00D9A800  FUN_00d9a800  size=111  [callgraph]
undefined4 __thiscall FUN_00d9a800(int param_1,float *param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d90aa0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  if ((local_20 - *param_2) * (local_20 - *param_2) +
      (local_1c - param_2[1]) * (local_1c - param_2[1]) +
      (local_18 - param_2[2]) * (local_18 - param_2[2]) < 1e-06) {
    return 1;
  }
  return 0;
}

// 00D9A870  FUN_00d9a870  size=57  [callgraph]
void __thiscall FUN_00d9a870(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_00d98610(local_30,local_20,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,param_2,param_3,
               param_4);
  return;
}

// 00D9A8B0  FUN_00d9a8b0  size=75  [callgraph]
void __thiscall FUN_00d9a8b0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = 0x3f800000;
  FUN_00d96980(&local_20,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D9A990  FUN_00d9a990  size=56  [callgraph]
void __thiscall
FUN_00d9a990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 local_20 [28];
  
  FUN_00d98610(param_2,local_20,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,param_3,param_4,param_5
              );
  return;
}

// 00D9AA50  FUN_00d9aa50  size=113  [callgraph]
undefined4 __thiscall FUN_00d9aa50(int param_1,undefined4 param_2,undefined4 param_3)

{
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_1 + 0x50,param_2,param_3);
  if ((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
      (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) <
      *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80)) {
    return 1;
  }
  return 0;
}

// 00D9ACD0  FUN_00d9acd0  size=54  [callgraph]
void __thiscall FUN_00d9acd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20 [28];
  
  FUN_00d966e0(param_2,local_20,param_3,param_4,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D9AD40  FUN_00d9ad40  size=48  [callgraph]
void __thiscall FUN_00d9ad40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00d977e0(local_20,param_2,param_3,param_1 + 0x50,param_1 + 0x60,param_1 + 0x70);
  return;
}

// 00D9ADA0  FUN_00d9ada0  size=57  [callgraph]
void __thiscall FUN_00d9ada0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_00d980c0(local_30,local_20,param_2,param_3,param_4,param_1 + 0x50,param_1 + 0x60,
               param_1 + 0x70);
  return;
}

// 00D9AE10  FUN_00d9ae10  size=116  [callgraph]
undefined4 __thiscall FUN_00d9ae10(int param_1,int param_2)

{
  float *extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_2 + 0x50,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - extraout_EDX[2]) * (local_18 - extraout_EDX[2]) +
      (local_20 - *extraout_EDX) * (local_20 - *extraout_EDX) +
      (local_1c - extraout_EDX[1]) * (local_1c - extraout_EDX[1]) <
      *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80)) {
    return 1;
  }
  return 0;
}

// 00D9AEF0  FUN_00d9aef0  size=113  [callgraph]
undefined4 __thiscall FUN_00d9aef0(int param_1,float *param_2)

{
  int extraout_EDX;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00d909f0(&local_20,param_2,param_1 + 0x50,param_1 + 0x60);
  if ((local_18 - param_2[2]) * (local_18 - param_2[2]) +
      (local_20 - *param_2) * (local_20 - *param_2) +
      (local_1c - param_2[1]) * (local_1c - param_2[1]) <
      *(float *)(extraout_EDX + 0x80) * *(float *)(extraout_EDX + 0x80)) {
    return 1;
  }
  return 0;
}

// 00D9AF70  FUN_00d9af70  size=146  [callgraph]
undefined4 __thiscall FUN_00d9af70(int param_1,float *param_2,float param_3)

{
  int extraout_EDX;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00d909f0(&local_20,&local_30,param_1 + 0x50,param_1 + 0x60);
  param_3 = *(float *)(extraout_EDX + 0x80) + param_3;
  if ((local_18 - local_28) * (local_18 - local_28) +
      (local_20 - local_30) * (local_20 - local_30) + (local_1c - local_2c) * (local_1c - local_2c)
      < param_3 * param_3) {
    return 1;
  }
  return 0;
}

// 00D9B070  FUN_00d9b070  size=83  [callgraph]
void FUN_00d9b070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 local_90 [52];
  undefined1 auStack_5c [88];
  
  iStack_94 = param_4;
  uStack_98 = 0xd9b088;
  iStack_94 = FUN_00a12290();
  if (iStack_94 != 0) {
    iStack_94 = iStack_94 + 0x10;
    uStack_98 = 0;
    puStack_9c = local_90;
    D3DXMatrixInverse();
    FUN_00d952e0(param_1,auStack_5c);
    D3DXMatrixMultiply(param_2,auStack_5c,&puStack_9c);
  }
  return;
}

// 00D9BBE0  FUN_00d9bbe0  size=125  [callgraph]
void FUN_00d9bbe0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_90 [52];
  undefined1 auStack_5c [88];
  
  *(undefined4 *)(param_2 + 0x40) = param_3;
  *(undefined4 *)(param_2 + 0x44) = param_4;
  iVar1 = FUN_00a12290(param_4);
  if (iVar1 != 0) {
    D3DXMatrixInverse(local_90,0,iVar1 + 0x10);
    FUN_00d952e0(param_1,auStack_5c);
    D3DXMatrixMultiply(param_2,auStack_5c,&stack0xffffff64);
  }
  iVar1 = FUN_00a12290(param_4);
  if (iVar1 != 0) {
    D3DXMatrixInverse(param_2 + 0x50,0,iVar1 + 0x10);
  }
  return;
}

// 00D9BC60  FUN_00d9bc60  size=596  [callgraph]
void __fastcall FUN_00d9bc60(int param_1)

{
  int iVar1;
  float **ppfVar2;
  undefined4 *puVar3;
  float *apfStack_150 [4];
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int iStack_138;
  undefined4 *puStack_134;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4 [18];
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [4];
  undefined1 auStack_5c [88];
  
  local_f4[3] = 0.0;
  local_f4[2] = 0.0;
  local_f4[1] = 0.0;
  puStack_134 = &local_120;
  local_f4[0] = 0.0;
  local_fc = 0.0;
  iStack_138 = param_1 + 0x10;
  local_100 = 0;
  local_104 = 0;
  puStack_13c = local_60;
  local_108 = 0;
  local_110 = 0;
  local_114 = 0;
  local_118 = 0;
  local_11c = 0;
  local_f4[4] = 1.0;
  local_f8 = 1.0;
  local_10c = 0x3f800000;
  local_120 = 0x3f800000;
  local_64 = 1.0;
  local_78 = 0x3f800000;
  local_8c = 0x3f800000;
  local_a0 = 0x3f800000;
  local_68 = 0.0;
  local_6c = 0.0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  puStack_140 = (undefined1 *)0xd9bd3a;
  D3DXVec3TransformNormal();
  local_fc = local_6c + local_fc;
  local_f8 = local_68 + local_f8;
  local_f4[0] = local_64 + local_f4[0];
  local_f4[0x10] = 0.0;
  local_f4[0xf] = 0.0;
  local_f4[0xe] = 0.0;
  local_f4[0xd] = 0.0;
  local_f4[0xb] = 0.0;
  local_f4[10] = 0.0;
  local_f4[9] = 0.0;
  local_f4[8] = 0.0;
  local_f4[6] = 0.0;
  local_f4[5] = 0.0;
  local_f4[4] = 0.0;
  local_f4[3] = 0.0;
  local_f4[0x11] = 1.0;
  local_f4[0xc] = 1.0;
  local_f4[7] = 1.0;
  local_f4[2] = 1.0;
  if (*(float *)(param_1 + 0x58) != 0.0) {
    puStack_140 = *(undefined1 **)(param_1 + 0x58);
    apfStack_150[3] = (float *)auStack_5c;
    apfStack_150[2] = (float *)0xd9bddb;
    D3DXMatrixRotationZ();
    apfStack_150[0] = local_f4;
    apfStack_150[1] = &local_64;
    apfStack_150[2] = apfStack_150[0];
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x54) != 0.0) {
    puStack_140 = *(undefined1 **)(param_1 + 0x54);
    apfStack_150[3] = (float *)auStack_5c;
    apfStack_150[2] = (float *)0xd9be16;
    D3DXMatrixRotationY();
    apfStack_150[0] = local_f4;
    apfStack_150[1] = &local_64;
    apfStack_150[2] = apfStack_150[0];
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x50) != 0.0) {
    puStack_140 = *(undefined1 **)(param_1 + 0x50);
    apfStack_150[3] = (float *)auStack_5c;
    apfStack_150[2] = (float *)0xd9be4d;
    D3DXMatrixRotationX();
    apfStack_150[0] = local_f4;
    apfStack_150[1] = &local_64;
    apfStack_150[2] = apfStack_150[0];
    D3DXMatrixMultiply();
  }
  apfStack_150[2] = (float *)auStack_ac;
  apfStack_150[3] = local_f4 + 2;
  apfStack_150[1] = (float *)0xd9be77;
  puStack_140 = (undefined1 *)apfStack_150[2];
  D3DXMatrixMultiply();
  apfStack_150[1] = (float *)&iStack_138;
  apfStack_150[0] = (float *)(param_1 + 0xa0);
  D3DXMatrixMultiply(apfStack_150[1]);
  D3DXMatrixMultiply(apfStack_150 + 3,local_f4 + 0xc,apfStack_150 + 3);
  ppfVar2 = apfStack_150;
  puVar3 = (undefined4 *)(param_1 + 0x60);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppfVar2;
    ppfVar2 = ppfVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 00D9BEC0  FUN_00d9bec0  size=543  [callgraph]
void __thiscall FUN_00d9bec0(int param_1,undefined4 *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puStack_134;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4 [5];
  undefined1 local_a0 [16];
  undefined4 local_90 [9];
  float fStack_6c;
  float fStack_68;
  float afStack_64 [2];
  undefined1 auStack_5c [88];
  
  local_b4[3] = 0.0;
  local_b4[2] = 0.0;
  local_b4[1] = 0.0;
  local_b4[0] = 0.0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  puStack_134 = local_90;
  local_c8 = 0;
  puVar3 = local_90;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_b4[4] = 1.0;
  local_b8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_e0 = 0x3f800000;
  D3DXVec3TransformNormal(local_a0,param_1 + 0x30);
  fStack_6c = local_b4[2] + fStack_6c;
  fStack_68 = local_b4[3] + fStack_68;
  afStack_64[0] = local_b4[4] + afStack_64[0];
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0x3f800000;
  if (*(float *)(param_1 + 0x58) != 0.0) {
    D3DXMatrixRotationZ(auStack_5c,*(undefined4 *)(param_1 + 0x58));
    D3DXMatrixMultiply(&puStack_134,afStack_64,&puStack_134);
  }
  if (*(float *)(param_1 + 0x54) != 0.0) {
    D3DXMatrixRotationY(auStack_5c,*(undefined4 *)(param_1 + 0x54));
    D3DXMatrixMultiply(&puStack_134,afStack_64,&puStack_134);
  }
  if (*(float *)(param_1 + 0x50) != 0.0) {
    D3DXMatrixRotationX(auStack_5c,*(undefined4 *)(param_1 + 0x50));
    D3DXMatrixMultiply(&puStack_134,afStack_64,&puStack_134);
  }
  D3DXMatrixMultiply(auStack_ec,&stack0xfffffed4,auStack_ec);
  D3DXMatrixMultiply(local_b4 + 3,&uStack_f8,local_b4 + 3);
  pfVar2 = local_b4;
  pfVar4 = (float *)(param_1 + 0x60);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x9c);
  return;
}

// 00D9C0E0  FUN_00d9c0e0  size=487  [callgraph]
void __fastcall FUN_00d9c0e0(int param_1)

{
  undefined1 *_Src;
  float *pfVar1;
  int local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [48];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  _Src = (undefined1 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x178);
  local_64 = 8;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  pfVar1 = (float *)(param_1 + 0xf8);
  do {
    local_18 = 0.0;
    local_1c = 0.0;
    local_20 = 0.0;
    local_14 = 1.0;
    D3DXVec3TransformNormal(&local_60,pfVar1 + -2,_Src);
    if (auStack_50 != _Src) {
      FID_conflict__memcpy(auStack_50,_Src,0x40);
    }
    local_64 = local_64 + -1;
    pfVar1[-2] = local_20 + local_60;
    pfVar1[-1] = fStack_5c + local_1c;
    *pfVar1 = fStack_58 + local_18;
    pfVar1[1] = local_14;
    pfVar1 = pfVar1 + 4;
  } while (local_64 != 0);
  return;
}

// 00D9C2D0  FUN_00d9c2d0  size=24  [callgraph]
void FUN_00d9c2d0(undefined4 param_1)

{
  FUN_00d9bec0(param_1);
  FUN_00d9c0e0();
  return;
}

// 00D9C2F0  FUN_00d9c2f0  size=37  [callgraph]
void __fastcall FUN_00d9c2f0(int param_1)

{
  D3DXMatrixRotationQuaternion(param_1 + 0xa0,param_1 + 0xe0);
  FUN_00d9bc60();
  FUN_00d9c0e0();
  return;
}

// 00D9C320  FUN_00d9c320  size=195  [callgraph]
void __fastcall FUN_00d9c320(int param_1)

{
  undefined1 *_Src;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 auStack_5c [60];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  _Src = (undefined1 *)(param_1 + 0x60);
  FUN_00f95fe0(_Src,0x3f000000,0);
  local_70 = 0;
  local_6c = 0;
  local_68 = *(undefined4 *)(param_1 + 0x180);
  local_64 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_14 = 0x3f800000;
  D3DXVec3TransformNormal(local_60,&local_70,_Src);
  if (auStack_5c != _Src) {
    FID_conflict__memcpy(auStack_5c,_Src,0x40);
  }
  local_70 = local_20;
  FUN_00f95fa0(param_1 + 0x10,&stack0xffffff84,0xff0000ff,0);
  return;
}

// 00D9C3F0  FUN_00d9c3f0  size=718  [callgraph]
void __fastcall FUN_00d9c3f0(int param_1)

{
  undefined1 **_Src;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 *puStack_8c;
  float *pfStack_88;
  undefined1 **ppuStack_84;
  float fStack_78;
  undefined1 *puStack_74;
  float local_70;
  float local_6c;
  undefined1 *local_68;
  float local_64;
  undefined1 local_60 [4];
  undefined1 *puStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_70 = *(float *)(param_1 + 0x10);
  _Src = (undefined1 **)(param_1 + 0x60);
  local_68 = *(undefined1 **)(param_1 + 0x18);
  pfStack_88 = &local_70;
  local_64 = *(float *)(param_1 + 0x1c);
  puStack_8c = local_60;
  local_6c = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xf4);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_14 = 0x3f800000;
  ppuStack_84 = _Src;
  D3DXVec3TransformNormal();
  if (&puStack_5c != _Src) {
    FID_conflict__memcpy(&puStack_5c,_Src,0x40);
  }
  *(float *)(param_1 + 0x100) = fStack_2c + local_6c;
  *(float *)(param_1 + 0x104) = (float)local_68 + fStack_28;
  *(float *)(param_1 + 0x108) = local_64 + fStack_24;
  *(undefined4 *)(param_1 + 0x10c) = local_20;
  fStack_78 = 0.0;
  puStack_74 = (undefined1 *)0x0;
  local_70 = 0.0;
  fStack_24 = 0.0;
  fStack_28 = 0.0;
  fStack_2c = 0.0;
  local_20 = 0x3f800000;
  D3DXVec3TransformNormal();
  if (&local_68 != _Src) {
    FID_conflict__memcpy(&local_68,_Src,0x40);
  }
  *(float *)(param_1 + 0x110) = fStack_38 + fStack_78;
  *(float *)(param_1 + 0x114) = (float)puStack_74 + fStack_34;
  *(float *)(param_1 + 0x118) = local_70 + fStack_30;
  *(float *)(param_1 + 0x11c) = fStack_2c;
  fVar1 = *(float *)(param_1 + 0xf0);
  pfStack_88 = (float *)0x0;
  ppuStack_84 = (undefined1 **)0x0;
  fStack_30 = 0.0;
  fStack_34 = 0.0;
  fStack_38 = 0.0;
  fStack_2c = 1.0;
  D3DXVec3TransformNormal(&fStack_78);
  if (&puStack_74 != _Src) {
    FID_conflict__memcpy(&puStack_74,_Src,0x40);
  }
  *(float *)(param_1 + 0x120) = fStack_44 + (float)ppuStack_84;
  *(float *)(param_1 + 0x124) = fVar1 + fStack_40;
  *(float *)(param_1 + 0x128) = fStack_3c + 0.0;
  *(float *)(param_1 + 300) = fStack_38;
  fVar1 = *(float *)(param_1 + 0xf4);
  puStack_8c = (undefined1 *)0x0;
  pfStack_88 = (float *)0x0;
  fStack_3c = 0.0;
  fStack_40 = 0.0;
  fStack_44 = 0.0;
  fStack_38 = 1.0;
  D3DXVec3TransformNormal(&ppuStack_84,&stack0xffffff6c,_Src);
  if ((undefined1 **)&stack0xffffff80 != _Src) {
    FID_conflict__memcpy(&stack0xffffff80,_Src,0x40);
  }
  *(float *)(param_1 + 0x130) = fStack_50 + fVar1;
  *(float *)(param_1 + 0x134) = (float)puStack_8c + fStack_4c;
  *(float *)(param_1 + 0x138) = (float)pfStack_88 + fStack_48;
  *(float *)(param_1 + 0x13c) = fStack_44;
  fVar1 = *(float *)(param_1 + 0xf4);
  fVar2 = *(float *)(param_1 + 0xf0);
  fVar3 = 0.0;
  fStack_48 = 0.0;
  fStack_4c = 0.0;
  fStack_50 = 0.0;
  fStack_44 = 1.0;
  D3DXVec3TransformNormal(&stack0xffffff70,&stack0xffffff60,_Src);
  if (&puStack_8c != _Src) {
    FID_conflict__memcpy(&puStack_8c,_Src,0x40);
  }
  *(float *)(param_1 + 0x140) = fVar1 + (float)puStack_5c;
  *(float *)(param_1 + 0x144) = fVar2 + fStack_58;
  *(float *)(param_1 + 0x148) = fVar3 + fStack_54;
  *(float *)(param_1 + 0x14c) = fStack_50;
  return;
}

// 00D9C6C0  FUN_00d9c6c0  size=731  [callgraph]
undefined4 __thiscall FUN_00d9c6c0(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  float *pfStack_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  float *pfStack_104;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 local_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pfVar1 = (float *)(param_1 + 0x60);
  uStack_108 = 0;
  puStack_10c = local_90;
  puStack_110 = (undefined1 *)0xd9c6e1;
  pfStack_104 = pfVar1;
  D3DXMatrixInverse();
  puStack_118 = auStack_9c;
  puStack_11c = (undefined1 *)0xd9c6ef;
  pfStack_114 = pfVar1;
  puStack_110 = puStack_118;
  D3DXMatrixMultiply();
  puStack_11c = auStack_a8;
  fStack_120 = param_2;
  D3DXVec3TransformNormal(&uStack_108);
  fStack_e4 = fStack_84 + (float)pfStack_114;
  fStack_e0 = fStack_80 + (float)puStack_110;
  fStack_dc = fStack_7c + (float)puStack_10c;
  fStack_d8 = (float)uStack_78;
  fStack_f4 = 0.0;
  fStack_f0 = *(float *)(param_1 + 0xf4);
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  fStack_84 = fStack_e4;
  fStack_80 = fStack_e0;
  fStack_7c = fStack_dc;
  D3DXVec3TransformNormal(&pfStack_114,&fStack_f4,pfVar1);
  if (&fStack_80 != pfVar1) {
    FID_conflict__memcpy(&fStack_80,pfVar1,0x40);
  }
  pfVar1 = (float *)(param_1 + 0x10);
  fStack_f4 = fStack_44;
  fVar2 = (fStack_50 + fStack_120) - *pfVar1;
  fVar5 = (fStack_4c + (float)puStack_11c) - *(float *)(param_1 + 0x14);
  fVar6 = (fStack_48 + (float)puStack_118) - *(float *)(param_1 + 0x18);
  fVar4 = ((fStack_e8 - *(float *)(param_1 + 0x18)) * fVar6 +
          (fStack_f0 - *pfVar1) * fVar2 + (fStack_ec - *(float *)(param_1 + 0x14)) * fVar5) /
          (fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5);
  fVar3 = 0.0;
  if ((0.0 < fVar4) && (fVar3 = fVar4, 1.0 < fVar4)) {
    fVar3 = 1.0;
  }
  fStack_d0 = *pfVar1 + fVar2 * fVar3;
  fStack_cc = fVar5 * fVar3 + *(float *)(param_1 + 0x14);
  fStack_c8 = fVar6 * fVar3 + *(float *)(param_1 + 0x18);
  fStack_c4 = fVar3 * (fStack_44 - *(float *)(param_1 + 0x1c)) + *(float *)(param_1 + 0x1c);
  fStack_e0 = fStack_d0 - fStack_f0;
  fStack_dc = fStack_cc - fStack_ec;
  fStack_d8 = fStack_c8 - fStack_e8;
  fStack_120 = *(float *)(param_1 + 0x110);
  puStack_11c = *(undefined1 **)(param_1 + 0x114);
  puStack_118 = *(undefined1 **)(param_1 + 0x118);
  pfStack_114 = *(float **)(param_1 + 0x11c);
  puStack_110 = *(undefined1 **)(param_1 + 0x120);
  puStack_10c = *(undefined1 **)(param_1 + 0x124);
  uStack_108 = *(undefined4 *)(param_1 + 0x128);
  pfStack_104 = *(float **)(param_1 + 300);
  iVar7 = FUN_00d95ac0(param_2,pfVar1,&fStack_120,&puStack_110);
  fStack_120 = *(float *)(param_1 + 0x130);
  puStack_11c = *(undefined1 **)(param_1 + 0x134);
  puStack_118 = *(undefined1 **)(param_1 + 0x138);
  pfStack_114 = *(float **)(param_1 + 0x13c);
  puStack_110 = *(undefined1 **)(param_1 + 0x140);
  puStack_10c = *(undefined1 **)(param_1 + 0x144);
  uStack_108 = *(undefined4 *)(param_1 + 0x148);
  pfStack_104 = *(float **)(param_1 + 0x14c);
  iVar8 = FUN_00d95ac0(param_2,&stack0xffffff00,&puStack_110,&fStack_120);
  if (((SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc) <
        *(float *)(param_1 + 0xf0)) && (iVar7 == 1)) && (iVar8 == 1)) {
    return 1;
  }
  return 0;
}

// 00D9C9A0  FUN_00d9c9a0  size=24  [callgraph]
void FUN_00d9c9a0(undefined4 param_1)

{
  FUN_00d9bec0(param_1);
  FUN_00d9c3f0();
  return;
}

// 00D9C9C0  FUN_00d9c9c0  size=37  [callgraph]
void __fastcall FUN_00d9c9c0(int param_1)

{
  D3DXMatrixRotationQuaternion(param_1 + 0xa0,param_1 + 0xe0);
  FUN_00d9bc60();
  FUN_00d9c3f0();
  return;
}

// 00D9C9F0  FUN_00d9c9f0  size=1742  [callgraph]
void __thiscall FUN_00d9c9f0(int param_1,uint param_2)

{
  undefined1 *_Src;
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  undefined4 uStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined1 local_220 [4];
  undefined1 auStack_21c [12];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [20];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  undefined1 auStack_1d4 [4];
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float local_1c0 [7];
  float local_1a4;
  undefined4 auStack_19c [40];
  float afStack_fc [38];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [88];
  
  _Src = (undefined1 *)(param_1 + 0x60);
  FUN_00f95fe0(_Src,0x3f000000,0);
  FUN_00f95fe0(_Src,0x3f000000,0);
  local_1c0[4] = 0.0;
  local_1c0[5] = 0.0;
  local_1c8 = *(float *)(param_1 + 0xf0);
  local_1a4 = 0.0;
  local_1c0[0] = 0.0;
  local_1cc = *(undefined4 *)(param_1 + 0xf4);
  local_1c0[2] = 0.0;
  local_1c0[3] = 0.0;
  local_1d0 = 0;
  local_1c4 = 0;
  local_1c0[1] = (float)local_1cc;
  local_1c0[6] = local_1c8;
  D3DXVec3TransformNormal(local_220,local_1c0,_Src);
  if (auStack_21c != _Src) {
    FID_conflict__memcpy(auStack_21c,_Src,0x40);
  }
  iVar5 = 0;
  fStack_2fc = fStack_1ec + fStack_22c;
  iVar8 = 10;
  fStack_2f8 = fStack_1e8 + fStack_228;
  fStack_2f4 = fStack_1e4 + fStack_224;
  uStack_2f0 = uStack_1e0;
  iVar6 = 0;
  do {
    uStack_2b4 = 0;
    uStack_2b8 = 0;
    uStack_2bc = 0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2cc = 0;
    uStack_2d0 = 0;
    uStack_2d4 = 0;
    uStack_2dc = 0;
    fStack_2e0 = 0.0;
    fStack_2e4 = 0.0;
    fStack_2e8 = 0.0;
    uStack_274 = 0;
    uStack_278 = 0;
    uStack_27c = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_28c = 0;
    uStack_290 = 0;
    uStack_294 = 0;
    uStack_29c = 0;
    uStack_2a0 = 0;
    uStack_2a4 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0x3f800000;
    uStack_2c4 = 0x3f800000;
    uStack_2d8 = 0x3f800000;
    fStack_2ec = 1.0;
    uStack_270 = 0x3f800000;
    uStack_284 = 0x3f800000;
    uStack_298 = 0x3f800000;
    uStack_2ac = 0x3f800000;
    fVar3 = (float)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    uStack_234 = 0;
    uStack_238 = 0;
    uStack_23c = 0;
    uStack_240 = 0;
    fStack_248 = 0.0;
    fStack_24c = 0.0;
    fStack_250 = 0.0;
    uStack_254 = 0;
    uStack_25c = 0;
    fStack_260 = 0.0;
    fStack_264 = 0.0;
    fStack_268 = 0.0;
    uStack_230 = 0x3f800000;
    fStack_244 = 1.0;
    uStack_258 = 0x3f800000;
    fStack_26c = 1.0;
    if (fVar3 * 0.017453292 != 0.0) {
      D3DXMatrixRotationY(auStack_5c,fVar3 * 0.017453292);
      D3DXMatrixMultiply(&uStack_274,auStack_64,&uStack_274);
    }
    D3DXMatrixMultiply(&fStack_2ec,&fStack_26c,&fStack_2ec);
    D3DXMatrixMultiply(&uStack_2b8,&fStack_2f8,_Src);
    D3DXVec3TransformNormal(&fStack_244,auStack_1d4,&uStack_2c4);
    FID_conflict__memcpy(&uStack_240,&uStack_2d0,0x40);
    fStack_210 = fStack_210 + fStack_250;
    fStack_20c = fStack_24c + fStack_20c;
    fStack_208 = fStack_248 + fStack_208;
    *(float *)((int)local_1c0 + iVar6 + 8) = fStack_208;
    *(float *)((int)local_1c0 + iVar6) = fStack_210;
    *(float *)((int)local_1c0 + iVar6 + 4) = fStack_20c;
    *(undefined4 *)((int)local_1c0 + iVar6 + 0xc) = uStack_204;
    D3DXVec3TransformNormal(&local_1d0,auStack_200,&uStack_2d0);
    FID_conflict__memcpy(auStack_21c,&uStack_2ac,0x40);
    fStack_1ec = fStack_1ec + local_1c0[5];
    iVar5 = iVar5 + 0x24;
    iVar8 = iVar8 + -1;
    fStack_1e8 = local_1c0[6] + fStack_1e8;
    fStack_1e4 = local_1a4 + fStack_1e4;
    *(float *)((int)afStack_fc + iVar6 + 8) = fStack_1e4;
    *(float *)((int)afStack_fc + iVar6) = fStack_1ec;
    *(float *)((int)afStack_fc + iVar6 + 4) = fStack_1e8;
    *(undefined4 *)((int)afStack_fc + iVar6 + 0xc) = uStack_1e0;
    iVar6 = iVar6 + 0x10;
  } while (iVar8 != 0);
  uVar4 = param_2 & 0x4fffffff;
  uVar9 = 1;
  iVar6 = 0;
  iVar8 = 10;
  do {
    uVar7 = uVar9;
    if (9 < uVar9) {
      uVar7 = 0;
    }
    FUN_00f95f40((undefined4 *)(unaff_ESI + 0x10),(int)auStack_19c + iVar6,param_2,0);
    FUN_00f95f40(&fStack_2fc,(int)afStack_fc + iVar6,param_2,0);
    puVar1 = auStack_19c + uVar7 * 4;
    FUN_00f95f40((int)auStack_19c + iVar6,puVar1,param_2,0);
    pfVar2 = afStack_fc + uVar7 * 4;
    FUN_00f95f40((int)afStack_fc + iVar6,pfVar2,param_2,0);
    FUN_00f95f40((int)auStack_19c + iVar6,(int)afStack_fc + iVar6,param_2,0);
    fStack_26c = *pfVar2;
    fStack_268 = afStack_fc[uVar7 * 4 + 1];
    fStack_264 = afStack_fc[uVar7 * 4 + 2];
    fStack_260 = afStack_fc[uVar7 * 4 + 3];
    uStack_25c = *(undefined4 *)((int)afStack_fc + iVar6);
    uStack_258 = *(undefined4 *)((int)afStack_fc + iVar6 + 4);
    uStack_254 = *(undefined4 *)((int)afStack_fc + iVar6 + 8);
    fStack_250 = *(float *)((int)afStack_fc + iVar6 + 0xc);
    fStack_24c = fStack_2fc;
    fStack_248 = fStack_2f8;
    fStack_244 = fStack_2f4;
    uStack_240 = uStack_2f0;
    uStack_2ac = *puVar1;
    uStack_2a8 = auStack_19c[uVar7 * 4 + 1];
    uStack_2a4 = auStack_19c[uVar7 * 4 + 2];
    uStack_2a0 = auStack_19c[uVar7 * 4 + 3];
    uStack_29c = *(undefined4 *)((int)auStack_19c + iVar6);
    uStack_298 = *(undefined4 *)((int)auStack_19c + iVar6 + 4);
    uStack_294 = *(undefined4 *)((int)auStack_19c + iVar6 + 8);
    uStack_290 = *(undefined4 *)((int)auStack_19c + iVar6 + 0xc);
    uStack_28c = *(undefined4 *)(unaff_ESI + 0x10);
    uStack_288 = *(undefined4 *)(unaff_ESI + 0x14);
    uStack_284 = *(undefined4 *)(unaff_ESI + 0x18);
    uStack_280 = *(undefined4 *)(unaff_ESI + 0x1c);
    FUN_00f96010(&fStack_26c,uVar4,0);
    FUN_00f96010(&uStack_2ac,uVar4,0);
    fStack_2ec = *pfVar2;
    fStack_2e8 = afStack_fc[uVar7 * 4 + 1];
    fStack_2e4 = afStack_fc[uVar7 * 4 + 2];
    fStack_2e0 = afStack_fc[uVar7 * 4 + 3];
    uStack_2dc = *(undefined4 *)((int)afStack_fc + iVar6);
    uStack_2d8 = *(undefined4 *)((int)afStack_fc + iVar6 + 4);
    uStack_2d4 = *(undefined4 *)((int)afStack_fc + iVar6 + 8);
    uStack_2d0 = *(undefined4 *)((int)afStack_fc + iVar6 + 0xc);
    uStack_2cc = *(undefined4 *)((int)auStack_19c + iVar6);
    uStack_2c8 = *(undefined4 *)((int)auStack_19c + iVar6 + 4);
    uStack_2c4 = *(undefined4 *)((int)auStack_19c + iVar6 + 8);
    uStack_2c0 = *(undefined4 *)((int)auStack_19c + iVar6 + 0xc);
    uStack_2bc = *puVar1;
    uStack_2b8 = auStack_19c[uVar7 * 4 + 1];
    uStack_2b4 = auStack_19c[uVar7 * 4 + 2];
    uStack_2b0 = auStack_19c[uVar7 * 4 + 3];
    FUN_00f960b0(&fStack_2ec,uVar4,4);
    uVar9 = uVar9 + 1;
    iVar6 = iVar6 + 0x10;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// 00D9D1A0  FUN_00d9d1a0  size=162  [callgraph]
void FUN_00d9d1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  
  local_30 = 0.0;
  local_2c = 1.0;
  local_28 = 0.0;
  local_20 = 0.0;
  local_1c = 1.0;
  FUN_00d95f80(&local_30,param_4,param_5,param_6);
  local_20 = param_4[1] * local_2c + *param_4 * local_30 + param_4[2] * local_28;
  local_1c = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
  FUN_00d91580(param_1,param_2,param_3,&local_30);
  return;
}

// 00D9D250  FUN_00d9d250  size=300  [callgraph]
undefined4 FUN_00d9d250(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_80;
  undefined1 local_70 [24];
  undefined4 local_58;
  int local_54 [20];
  
  local_54[0] = 2;
  local_54[2] = 2;
  local_54[7] = 2;
  local_54[9] = 6;
  local_54[0xe] = 6;
  piVar4 = local_54;
  local_54[3] = 4;
  local_54[0xf] = 4;
  local_58 = 0;
  local_54[1] = 1;
  local_54[4] = 1;
  local_54[5] = 3;
  local_54[6] = 7;
  local_54[8] = 0;
  local_54[10] = 3;
  local_54[0xb] = 1;
  local_54[0xc] = 5;
  local_54[0xd] = 0;
  local_54[0x10] = 7;
  local_80 = 0;
  do {
    iVar6 = 0;
    iVar1 = piVar4[1];
    iVar2 = *piVar4;
    iVar3 = piVar4[-1];
    piVar7 = local_54;
    do {
      iVar5 = FUN_00d98610(param_1,local_70,iVar3 * 0x10 + param_2,iVar2 * 0x10 + param_2,
                           iVar1 * 0x10 + param_2,piVar7[-1] * 0x10 + param_3,
                           *piVar7 * 0x10 + param_3,piVar7[1] * 0x10 + param_3);
      if (iVar5 != 0) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 3;
    } while (iVar6 < 6);
    piVar4 = piVar4 + 3;
    local_80 = local_80 + 1;
  } while (local_80 < 6);
  return 0;
}

// 00D9D3E0  FUN_00d9d3e0  size=1045  [callgraph]
undefined4
FUN_00d9d3e0(float *param_1,undefined4 *param_2,float *param_3,float *param_4,float param_5,
            float *param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  int iVar2;
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
  float local_20;
  float local_1c;
  
  local_74 = 0.0;
  local_70 = *param_4 - *param_3;
  local_6c = param_4[1] - param_3[1];
  local_68 = param_4[2] - param_3[2];
  local_64 = param_4[3] - param_3[3];
  local_30 = 0.0;
  local_2c = 1.0;
  local_28 = 0.0;
  local_20 = 0.0;
  local_1c = 1.0;
  FUN_00d95f80(&local_30,param_6,param_7,param_8);
  local_20 = param_6[1] * local_2c + *param_6 * local_30 + param_6[2] * local_28;
  local_1c = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
  iVar2 = FUN_00d91580(param_3,param_4,param_5,&local_30);
  if (((iVar2 != 0) &&
      (iVar2 = FUN_00d92b00(param_1,&local_74,&local_70,param_3,param_5,&local_30), iVar2 != 0)) &&
     ((local_74 != 0.0 ||
      (iVar2 = FUN_00d91620(param_1,param_3,param_5,param_6,param_7,param_8), iVar2 != 0)))) {
    iVar2 = FUN_00d96090(param_1,param_6,param_7,param_8);
    if (iVar2 != 0) {
      if (local_74 != 0.0) {
        FUN_00d95f80(param_2,param_6,param_7,param_8);
        return 1;
      }
      local_60 = *param_3 - *param_1;
      local_5c = param_3[1] - param_1[1];
      local_58 = param_3[2] - param_1[2];
      local_54 = param_3[3] - param_1[3];
      fVar1 = local_58 * local_58 + local_60 * local_60 + local_5c * local_5c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(param_2,&local_60);
        return 1;
      }
      FUN_00dd5650(&DAT_0163d0ac);
      *param_2 = 0;
      param_2[1] = 0x3f800000;
      param_2[2] = 0;
      return 1;
    }
    FUN_00d90bf0(&local_60,param_1,param_6,param_7,param_8);
    fVar1 = local_68 * local_68 + local_6c * local_6c + local_70 * local_70;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_70,&local_70);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_70 = 0.0;
      local_6c = 1.0;
      local_68 = 0.0;
    }
    local_50 = local_70 * -1.0;
    local_4c = local_6c * -1.0;
    local_48 = local_68 * -1.0;
    local_44 = local_64 * -1.0;
    iVar2 = FUN_00d92490(&local_40,&local_60,&local_50,param_3,param_5 * param_5);
    if (iVar2 != 0) {
      local_40 = (*param_3 + (*param_1 - local_40)) - *param_1;
      local_3c = (param_3[1] + (param_1[1] - local_3c)) - param_1[1];
      local_38 = (param_3[2] + (param_1[2] - local_38)) - param_1[2];
      local_34 = ((param_1[3] - local_34) + param_3[3]) - param_1[3];
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(param_2,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *param_2 = 0;
        param_2[1] = 0x3f800000;
        param_2[2] = 0;
      }
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = local_54;
      return 2;
    }
  }
  return 0;
}

// 00D9D800  FUN_00d9d800  size=457  [callgraph]
undefined4
FUN_00d9d800(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  undefined4 uVar2;
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
  
  if ((*param_2 - *param_3) * (*param_2 - *param_3) +
      (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
      (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) < 1e-06) {
    uVar2 = FUN_00d97f50(param_1,param_2,0,param_4,param_5,param_6);
    return uVar2;
  }
  FUN_00d91100(&local_30,&local_20,param_2,param_3,param_4,param_5);
  local_40 = local_30 - local_20;
  local_3c = local_2c - local_1c;
  local_38 = local_28 - local_18;
  local_34 = local_24 - local_14;
  fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
  if (fVar1 <= param_6 * param_6) {
    if (0.0 < fVar1) {
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_38 = 0.0;
        local_40 = 0.0;
        local_3c = 1.0;
      }
      *param_1 = local_20 + local_40 * param_6;
      param_1[1] = local_1c + local_3c * param_6;
      param_1[2] = local_18 + local_38 * param_6;
      param_1[3] = param_6 * local_34 + local_14;
      return 1;
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
    return 1;
  }
  return 0;
}

// 00D9D9D0  FUN_00d9d9d0  size=1716  [callgraph]
undefined4
FUN_00d9d9d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float param_7,float *param_8,undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
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
  
  local_78 = 0.0;
  local_70 = *param_6 - *param_5;
  local_6c = param_6[1] - param_5[1];
  local_68 = param_6[2] - param_5[2];
  local_64 = param_6[3] - param_5[3];
  local_30 = 0.0;
  local_2c = 1.0;
  local_28 = 0.0;
  local_24 = local_34;
  local_20 = 0.0;
  local_1c = 1.0;
  FUN_00d95f80(&local_30,param_8,param_9,param_10);
  local_20 = param_8[1] * local_2c + *param_8 * local_30 + param_8[2] * local_28;
  local_1c = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
  iVar3 = FUN_00d91580(param_5,param_6,param_7,&local_30);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00d92b00(param_1,&local_78,&local_70,param_5,param_7,&local_30);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00d96090(param_1,param_8,param_9,param_10);
  if (iVar3 != 0) {
    if (local_78 == 0.0) {
      if (SQRT((*param_5 - *param_1) * (*param_5 - *param_1) +
               (param_5[1] - param_1[1]) * (param_5[1] - param_1[1]) +
               (param_5[2] - param_1[2]) * (param_5[2] - param_1[2])) == 0.0) {
        *param_3 = 0.0;
        param_3[1] = 1.0;
        param_3[2] = 0.0;
      }
      else {
        *param_3 = local_30;
        param_3[1] = local_2c;
        param_3[2] = local_28;
        param_3[3] = local_24;
      }
    }
    else {
      FUN_00d95f80(param_3,param_8,param_9,param_10);
    }
    *param_2 = local_78;
    fVar1 = *param_3;
    fVar2 = *param_1;
    local_3c = param_3[1] * param_7 + param_1[1];
    local_38 = param_3[2] * param_7 + param_1[2];
    param_4[3] = param_1[3] + param_3[3] * param_7;
    fVar4 = (float10)FUN_00d8d500(fVar2 + param_7 * fVar1,4);
    *param_4 = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(local_3c,4);
    param_4[1] = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(local_38,4);
    param_4[2] = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(*param_1,4);
    *param_1 = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(param_1[1],4);
    param_1[1] = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(param_1[2],4);
    param_1[2] = (float)fVar4;
    return 1;
  }
  FUN_00d90bf0(&local_60,param_1,param_8,param_9,param_10);
  fVar1 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
  if (SQRT(fVar1) == 0.0) {
    if (param_7 * param_7 <
        (local_60 - *param_1) * (local_60 - *param_1) +
        (local_5c - param_1[1]) * (local_5c - param_1[1]) +
        (local_58 - param_1[2]) * (local_58 - param_1[2])) {
      return 0;
    }
    local_50 = local_60 - *param_5;
    local_4c = local_5c - param_5[1];
    local_48 = local_58 - param_5[2];
    local_44 = local_54 - param_5[3];
    fVar1 = local_48 * local_48 + local_4c * local_4c + local_50 * local_50;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_70,&local_50);
      goto LAB_00d9ddbc;
    }
  }
  else if (0.0 < fVar1) {
    FUN_00ddf460(&local_70,&local_70);
    goto LAB_00d9ddbc;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  local_70 = 0.0;
  local_6c = 1.0;
  local_68 = 0.0;
LAB_00d9ddbc:
  local_50 = local_70 * -1.0;
  local_4c = local_6c * -1.0;
  local_48 = local_68 * -1.0;
  local_44 = local_64 * -1.0;
  iVar3 = FUN_00d92590(&local_40,&local_74,&local_60,&local_50,param_5,param_7);
  if (iVar3 == 0) {
    return 0;
  }
  local_50 = local_60 - local_40;
  local_78 = local_5c - local_3c;
  local_74 = local_58 - local_38;
  if (SQRT(local_74 * local_74 + local_50 * local_50 + local_78 * local_78) <=
      SQRT((*param_6 - *param_5) * (*param_6 - *param_5) +
           (param_6[1] - param_5[1]) * (param_6[1] - param_5[1]) +
           (param_6[2] - param_5[2]) * (param_6[2] - param_5[2]))) {
    local_50 = local_50 + *param_5;
    local_4c = param_5[1] + local_78;
    local_48 = local_74 + param_5[2];
    local_44 = (local_54 - local_34) + param_5[3];
    if (SQRT((param_5[2] - local_58) * (param_5[2] - local_58) +
             (param_5[1] - local_5c) * (param_5[1] - local_5c) +
             (*param_5 - local_60) * (*param_5 - local_60)) == 0.0) {
      *param_3 = 0.0;
      param_3[1] = 1.0;
      param_3[2] = 0.0;
    }
    else {
      local_40 = local_50 - local_60;
      local_3c = local_4c - local_5c;
      local_38 = local_48 - local_58;
      local_34 = local_44 - local_54;
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(param_3,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *param_3 = 0.0;
        param_3[1] = 1.0;
        param_3[2] = 0.0;
      }
    }
    *param_4 = local_50;
    param_4[1] = local_4c;
    param_4[2] = local_48;
    param_4[3] = local_44;
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = local_54;
    fVar4 = (float10)FUN_00d8d500(*param_4,4);
    *param_4 = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(param_4[1],4);
    param_4[1] = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(param_4[2],4);
    param_4[2] = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(*param_1,4);
    *param_1 = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(param_1[1],4);
    param_1[1] = (float)fVar4;
    fVar4 = (float10)FUN_00d8d500(param_1[2],4);
    param_1[2] = (float)fVar4;
    return 2;
  }
  return 0;
}

// 00D9E090  FUN_00d9e090  size=873  [callgraph]
undefined4
FUN_00d9e090(float *param_1,float *param_2,float *param_3,float param_4,float *param_5,
            float *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float10 fVar4;
  byte local_5a;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*param_2 - *param_3) * (*param_2 - *param_3) +
      (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) +
      (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) < 1e-06) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    fVar4 = (float10)FUN_00d8d620(param_2,param_5,param_6);
    if ((float10)param_4 * (float10)param_4 < fVar4) {
      return 0;
    }
    return 1;
  }
  local_14 = param_5[3];
  local_24 = param_6[3];
  local_30 = *param_6 - param_4;
  local_2c = param_6[1] - param_4;
  local_28 = param_6[2] - param_4;
  local_20 = *param_5 + param_4;
  local_1c = param_5[1] + param_4;
  local_18 = param_4 + param_5[2];
  iVar3 = FUN_00d95e50(param_1,&local_20);
  if (iVar3 == 0) {
    return 0;
  }
  local_5a = *param_1 < *param_6;
  bVar1 = *param_5 < *param_1;
  if (param_1[1] < param_6[1]) {
    local_5a = local_5a | 2;
  }
  if (param_5[1] < param_1[1]) {
    bVar1 = bVar1 | 2;
  }
  if (param_1[2] < param_6[2]) {
    local_5a = local_5a | 4;
  }
  if (param_5[2] < param_1[2]) {
    bVar1 = bVar1 | 4;
  }
  local_20 = *param_2;
  local_1c = param_2[1];
  bVar2 = bVar1 + local_5a;
  local_18 = param_2[2];
  local_14 = param_2[3];
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_24 = param_3[3];
  if (bVar2 == 7) {
    if ((bVar1 & 1) == 0) {
      local_40 = *param_6;
    }
    else {
      local_40 = *param_5;
    }
    if ((bVar1 & 1) == 0) {
      local_3c = param_6[1];
    }
    else {
      local_3c = param_5[1];
    }
    if ((bVar1 & 1) == 0) {
      local_38 = param_6[2];
    }
    else {
      local_38 = param_5[2];
    }
    if (((bVar1 ^ 1) & 1) == 0) {
      local_50 = *param_6;
      local_4c = param_6[1];
      local_48 = param_6[2];
    }
    else {
      local_50 = *param_5;
      local_4c = param_5[1];
      local_48 = param_5[2];
    }
    iVar3 = FUN_00d9d800(param_1,&local_20,&local_30,&local_40,&local_50,param_4);
    if (iVar3 != 0) {
      return 1;
    }
    FUN_00d8d3c0(bVar1);
    local_54 = CONCAT31(local_54._1_3_,bVar1) ^ 4;
    FUN_00d8d3c0(bVar1 ^ 4);
    iVar3 = FUN_00d9d800(param_1,&local_20,&local_30,&local_40,extraout_ECX,param_4);
    if (iVar3 != 0) {
      return 1;
    }
    FUN_00d8d3c0(bVar1);
    FUN_00d8d3c0(local_54);
    iVar3 = FUN_00d9d800(param_1,&local_20,&local_30,&local_40,extraout_ECX_00,param_4);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if ((bVar2 & bVar2 - 1) != 0) {
    FUN_00d8d3c0(local_5a ^ 7);
    FUN_00d8d3c0(bVar1);
    iVar3 = FUN_00d9d800(param_1,&local_20,&local_30,&local_50,extraout_ECX_01,param_4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00D9E4C0  FUN_00d9e4c0  size=411  [callgraph]
void __fastcall FUN_00d9e4c0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte *pbVar6;
  float *pfVar7;
  int local_50;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    pfVar7 = (float *)(param_1 + 0x30);
    D3DXVec3TransformNormal(pfVar7,param_1 + 0x20,iVar2 + 0x10);
    *pfVar7 = *(float *)(iVar2 + 0x40) + *pfVar7;
    *(float *)(param_1 + 0x34) = *(float *)(iVar2 + 0x44) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = *(float *)(iVar2 + 0x48) + *(float *)(param_1 + 0x38);
  }
  pbVar6 = (byte *)(param_1 + 0x245);
  local_50 = 6;
  pfVar7 = (float *)(param_1 + 0x128);
  do {
    pfVar1 = (float *)(param_1 + 0x1e4 + (uint)pbVar6[-1] * 0xc);
    fVar3 = *(float *)(param_1 + 0x30) + *pfVar1;
    fVar4 = pfVar1[1] + *(float *)(param_1 + 0x34);
    fVar5 = pfVar1[2] + *(float *)(param_1 + 0x38);
    pfVar1 = (float *)(param_1 + 0x1e4 + (uint)*pbVar6 * 0xc);
    uStack_34 = 0x3f800000;
    fStack_30 = *(float *)(param_1 + 0x30) + *pfVar1;
    fStack_2c = pfVar1[1] + *(float *)(param_1 + 0x34);
    fStack_28 = pfVar1[2] + *(float *)(param_1 + 0x38);
    pfVar1 = (float *)(param_1 + 0x1e4 + (uint)pbVar6[1] * 0xc);
    uStack_24 = 0x3f800000;
    local_20 = *pfVar1 + *(float *)(param_1 + 0x30);
    fStack_1c = pfVar1[1] + *(float *)(param_1 + 0x34);
    fStack_18 = pfVar1[2] + *(float *)(param_1 + 0x38);
    uStack_14 = 0x3f800000;
    local_40 = fVar3;
    fStack_3c = fVar4;
    fStack_38 = fVar5;
    FUN_00d95f80(pfVar7 + -2,&local_40,&fStack_30,&local_20);
    pbVar6 = pbVar6 + 3;
    local_50 = local_50 + -1;
    pfVar7[2] = fVar5 * *pfVar7 + fVar3 * pfVar7[-2] + pfVar7[-1] * fVar4;
    pfVar7[3] = pfVar7[-1] * pfVar7[-1] + pfVar7[-2] * pfVar7[-2] + *pfVar7 * *pfVar7;
    pfVar7 = pfVar7 + 8;
  } while (local_50 != 0);
  fVar3 = *(float *)(param_1 + 0x1f0) - *(float *)(param_1 + 0x1e4);
  fVar5 = *(float *)(param_1 + 500) - *(float *)(param_1 + 0x1e8);
  fVar4 = *(float *)(param_1 + 0x1f8) - *(float *)(param_1 + 0x1ec);
  *(float *)(param_1 + 0x1e0) = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
  return;
}

// 00D9E660  FUN_00d9e660  size=85  [callgraph]
float * __thiscall FUN_00d9e660(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00d95f80(param_1,param_2,param_3,param_4);
  param_1[4] = param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1];
  param_1[5] = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  return param_1;
}

// 00D9E750  FUN_00d9e750  size=64  [callgraph]
int __thiscall FUN_00d9e750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d3e0(local_30,local_20,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),param_2,param_3,param_4);
  return (int)sVar1;
}

// 00D9E7C0  FUN_00d9e7c0  size=71  [callgraph]
int __thiscall FUN_00d9e7c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 local_44 [4];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(local_20,local_44,local_30,local_40,param_2,param_3,param_4,param_1 + 0x50,
                       param_1 + 0x60,param_1 + 0x70);
  return (int)sVar1;
}

// 00D9E840  FUN_00d9e840  size=70  [callgraph]
int __thiscall
FUN_00d9e840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  short sVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(param_2,local_34,local_20,local_30,param_1 + 0x50,param_1 + 0x50,
                       *(undefined4 *)(param_1 + 0x80),param_3,param_4,param_5);
  return (int)sVar1;
}

// 00D9E890  FUN_00d9e890  size=73  [callgraph]
int __thiscall
FUN_00d9e890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  short sVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(param_2,local_34,local_20,local_30,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),param_3,param_4,param_5);
  return (int)sVar1;
}

// 00D9E8E0  FUN_00d9e8e0  size=157  [callgraph]
int __thiscall
FUN_00d9e8e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  short sVar1;
  undefined1 local_44 [4];
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
  
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = param_5[2];
  local_14 = 0x3f800000;
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  local_24 = 0x3f800000;
  local_40 = *param_7;
  local_3c = param_7[1];
  local_38 = param_7[2];
  local_34 = 0x3f800000;
  sVar1 = FUN_00d9d9d0(param_2,local_44,param_4,param_3,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),&local_20,&local_30,&local_40);
  return (int)sVar1;
}

// 00D9EA00  FUN_00d9ea00  size=70  [callgraph]
int __thiscall
FUN_00d9ea00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  short sVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(param_2,local_34,local_20,local_30,param_3,param_4,param_5,param_1 + 0x50,
                       param_1 + 0x60,param_1 + 0x70);
  return (int)sVar1;
}

// 00D9EAB0  FUN_00d9eab0  size=70  [callgraph]
int __thiscall
FUN_00d9eab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  short sVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(param_2,local_34,local_20,local_30,param_1 + 0x50,param_1 + 0x50,
                       *(undefined4 *)(param_1 + 0x80),param_3,param_4,param_5);
  return (int)sVar1;
}

// 00D9EB00  FUN_00d9eb00  size=157  [callgraph]
int __thiscall
FUN_00d9eb00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  short sVar1;
  undefined1 local_44 [4];
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
  
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = param_5[2];
  local_14 = 0x3f800000;
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  local_24 = 0x3f800000;
  local_40 = *param_7;
  local_3c = param_7[1];
  local_38 = param_7[2];
  local_34 = 0x3f800000;
  sVar1 = FUN_00d9d9d0(param_2,local_44,param_4,param_3,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),&local_20,&local_30,&local_40);
  return (int)sVar1;
}

// 00D9EBA0  FUN_00d9eba0  size=164  [callgraph]
int __thiscall
FUN_00d9eba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  short sVar1;
  undefined1 local_44 [4];
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
  
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = param_5[2];
  local_14 = param_5[3];
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  local_24 = param_6[3];
  local_40 = *param_7;
  local_3c = param_7[1];
  local_38 = param_7[2];
  local_34 = param_7[3];
  sVar1 = FUN_00d9d9d0(param_2,local_44,param_4,param_3,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),&local_20,&local_30,&local_40);
  return (int)sVar1;
}

// 00D9EC50  FUN_00d9ec50  size=71  [callgraph]
int __thiscall FUN_00d9ec50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 local_44 [4];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(local_20,local_44,local_30,local_40,param_2,param_3,param_4,param_1 + 0x50,
                       param_1 + 0x60,param_1 + 0x70);
  return (int)sVar1;
}

// 00D9ECA0  FUN_00d9eca0  size=70  [callgraph]
int __thiscall
FUN_00d9eca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  short sVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(param_2,local_34,local_20,local_30,param_3,param_4,param_5,param_1 + 0x50,
                       param_1 + 0x60,param_1 + 0x70);
  return (int)sVar1;
}

// 00D9ED20  FUN_00d9ed20  size=73  [callgraph]
int __thiscall
FUN_00d9ed20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  short sVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  sVar1 = FUN_00d9d9d0(param_2,local_34,local_20,local_30,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),param_3,param_4,param_5);
  return (int)sVar1;
}

// 00D9ED70  FUN_00d9ed70  size=157  [callgraph]
int __thiscall
FUN_00d9ed70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  short sVar1;
  undefined1 local_44 [4];
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
  
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = param_5[2];
  local_14 = 0x3f800000;
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  local_24 = 0x3f800000;
  local_40 = *param_7;
  local_3c = param_7[1];
  local_38 = param_7[2];
  local_34 = 0x3f800000;
  sVar1 = FUN_00d9d9d0(param_2,local_44,param_4,param_3,param_1 + 0x50,param_1 + 0x60,
                       *(undefined4 *)(param_1 + 0x80),&local_20,&local_30,&local_40);
  return (int)sVar1;
}

// 00D9F320  FUN_00d9f320  size=303  [callgraph]
void __fastcall FUN_00d9f320(undefined1 *param_1)

{
  FUN_00d959b0();
  *param_1 = 7;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x17c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
  D3DXMatrixRotationQuaternion(param_1 + 0xa0,param_1 + 0xe0);
  FUN_00d9bc60();
  FUN_00d9c0e0();
  return;
}

// 00D9F450  FUN_00d9f450  size=281  [callgraph]
void __fastcall FUN_00d9f450(undefined1 *param_1)

{
  FUN_00d959b0();
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *param_1 = 6;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0xf4);
  D3DXMatrixRotationQuaternion(param_1 + 0xa0,param_1 + 0xe0);
  FUN_00d9bc60();
  FUN_00d9c3f0();
  return;
}

// 00D9F570  FUN_00d9f570  size=841  [callgraph]
undefined4 FUN_00d9f570(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte bVar4;
  float10 fVar5;
  byte local_6a;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  undefined1 local_20 [28];
  
  if ((*param_1 - *param_2) * (*param_1 - *param_2) +
      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
      (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) < 1e-06) {
    fVar5 = (float10)FUN_00d8d620(param_1,param_4,param_5);
    if ((float10)param_3 * (float10)param_3 < fVar5) {
      return 0;
    }
    return 1;
  }
  local_24 = param_4[3];
  local_34 = param_5[3];
  local_40 = *param_5 - param_3;
  local_3c = param_5[1] - param_3;
  local_38 = param_5[2] - param_3;
  local_30 = *param_4 + param_3;
  local_2c = param_4[1] + param_3;
  local_28 = param_3 + param_4[2];
  iVar2 = FUN_00d95e50(&local_50,&local_30);
  if (iVar2 == 0) {
    return 0;
  }
  local_6a = local_50 < *param_5;
  bVar4 = *param_4 < local_50;
  if (local_4c < param_5[1]) {
    local_6a = local_6a | 2;
  }
  if (param_4[1] < local_4c) {
    bVar4 = bVar4 | 2;
  }
  if (local_48 < param_5[2]) {
    local_6a = local_6a | 4;
  }
  if (param_4[2] < local_48) {
    bVar4 = bVar4 | 4;
  }
  local_30 = *param_1;
  local_2c = param_1[1];
  bVar1 = bVar4 + local_6a;
  local_28 = param_1[2];
  local_24 = param_1[3];
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  if (bVar1 == 7) {
    if ((bVar4 & 1) == 0) {
      local_50 = *param_5;
    }
    else {
      local_50 = *param_4;
    }
    if ((bVar4 & 1) == 0) {
      local_4c = param_5[1];
    }
    else {
      local_4c = param_4[1];
    }
    if ((bVar4 & 1) == 0) {
      local_48 = param_5[2];
    }
    else {
      local_48 = param_4[2];
    }
    if (((bVar4 ^ 1) & 1) == 0) {
      local_60 = *param_5;
      local_5c = param_5[1];
      local_58 = param_5[2];
    }
    else {
      local_60 = *param_4;
      local_5c = param_4[1];
      local_58 = param_4[2];
    }
    iVar2 = FUN_00d9d800(local_20,&local_30,&local_40,&local_50,&local_60,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_00d8d3c0(bVar4);
    local_64 = CONCAT31(local_64._1_3_,bVar4) ^ 4;
    FUN_00d8d3c0(bVar4 ^ 4);
    iVar2 = FUN_00d9d800(local_20,&local_30,&local_40,&local_50,extraout_ECX,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_00d8d3c0(bVar4);
    FUN_00d8d3c0(local_64);
    iVar2 = FUN_00d9d800(local_20,&local_30,&local_40,&local_50,extraout_ECX_00,param_3);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if ((bVar1 & bVar1 - 1) == 0) {
    return 1;
  }
  FUN_00d8d3c0(local_6a ^ 7);
  FUN_00d8d3c0(bVar4);
  uVar3 = FUN_00d9d800(local_20,&local_30,&local_40,&local_60,extraout_ECX_01,param_3);
  return uVar3;
}

// 00D9F8C0  FUN_00d9f8c0  size=225  [callgraph]
undefined4
FUN_00d9f8c0(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  
  FUN_00d95f80(&local_30,param_5,param_6,param_7);
  local_20 = param_5[1] * local_2c + *param_5 * local_30 + param_5[2] * local_28;
  local_1c = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
  local_40 = *param_3 - *param_2;
  local_3c = param_3[1] - param_2[1];
  local_38 = param_3[2] - param_2[2];
  local_34 = param_3[3] - param_2[3];
  iVar1 = FUN_00d92b00(param_1,&local_44,&local_40,param_2,param_4,&local_30);
  if (((iVar1 != 0) && (0.0 <= local_44)) && (local_44 <= 1.0)) {
    return 1;
  }
  return 0;
}

