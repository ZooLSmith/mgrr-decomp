// src/unsorted/unit_00A69130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A69130..00A696F0, 7 functions

#include "mgrr.h"

// 00A69130  FUN_00a69130  size=96  [run]
undefined1 FUN_00a69130(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x1c))(param_3);
    return uVar2;
  }
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,0xb);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
    (**(code **)(*param_1 + 0x14))(param_2,0xb);
    return uVar2;
  }
  return 0;
}

// 00A691B0  FUN_00a691b0  size=93  [run]
undefined4 __thiscall FUN_00a691b0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00a68710();
  return 1;
}

// 00A69210  FUN_00a69210  size=65  [run]
void __fastcall FUN_00a69210(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A692D0  FUN_00a692d0  size=113  [run]
undefined4 FUN_00a692d0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)*param_1)();
  if (cVar1 != '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0x3f800000;
  }
  cVar1 = FUN_00a69130(param_1,&DAT_01662d3c,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_00a69130(param_1,&DAT_01662d38,param_2 + 1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00a69130(param_1,&DAT_01662d34,param_2 + 2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 00A69350  FUN_00a69350  size=406  [run]
int __thiscall FUN_00a69350(int param_1,int param_2)

{
  undefined4 local_c8;
  undefined4 local_c4;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [92];
  
  local_c4 = *(undefined4 *)(param_1 + 0x68);
  local_c8 = *(undefined4 *)(param_1 + 100);
  D3DXMatrixScaling(param_2,*(undefined4 *)(param_1 + 0x60));
  fStack_88 = 0.0;
  fStack_8c = 0.0;
  fStack_84 = 1.0;
  if (*(float *)(param_1 + 0x58) != 0.0) {
    D3DXMatrixRotationZ(auStack_60,*(undefined4 *)(param_1 + 0x58));
    D3DXMatrixMultiply(&local_c8,auStack_68,&local_c8);
  }
  if (*(float *)(param_1 + 0x54) != 0.0) {
    D3DXMatrixRotationY(auStack_60,*(undefined4 *)(param_1 + 0x54));
    D3DXMatrixMultiply(&local_c8,auStack_68,&local_c8);
  }
  if (*(float *)(param_1 + 0x50) != 0.0) {
    D3DXMatrixRotationX(auStack_60,*(undefined4 *)(param_1 + 0x50));
    D3DXMatrixMultiply(&local_c8,auStack_68,&local_c8);
  }
  D3DXMatrixMultiply(param_2,&stack0xffffff40,param_2);
  fStack_8c = *(float *)(param_1 + 0x30) * -1.0;
  fStack_88 = *(float *)(param_1 + 0x34) * -1.0;
  fStack_84 = *(float *)(param_1 + 0x38) * -1.0;
  fStack_80 = *(float *)(param_1 + 0x3c) * -1.0;
  D3DXVec3TransformNormal(auStack_7c,&fStack_8c,param_2);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fStack_88;
  *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + fStack_84;
  *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) + fStack_80;
  *(float *)(param_2 + 0x30) = *(float *)(param_1 + 0x40) + *(float *)(param_2 + 0x30);
  *(float *)(param_2 + 0x34) = *(float *)(param_1 + 0x44) + *(float *)(param_2 + 0x34);
  *(float *)(param_2 + 0x38) = *(float *)(param_1 + 0x48) + *(float *)(param_2 + 0x38);
  return param_2;
}

// 00A694F0  FUN_00a694f0  size=501  [run]
void __fastcall FUN_00a694f0(int param_1)

{
  int iVar1;
  undefined4 local_c8;
  undefined4 local_c4;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [92];
  
  if ((*(int *)(param_1 + 0xf0) != 0) ||
     ((*(int *)(param_1 + 0xf4) != 0 && (0.0 < *(float *)(param_1 + 0xfc))))) {
    local_c4 = *(undefined4 *)(param_1 + 0x68);
    iVar1 = param_1 + 0x70;
    local_c8 = *(undefined4 *)(param_1 + 100);
    D3DXMatrixScaling(iVar1,*(undefined4 *)(param_1 + 0x60));
    fStack_88 = 0.0;
    fStack_8c = 0.0;
    fStack_84 = 1.0;
    if (*(float *)(param_1 + 0x58) != 0.0) {
      D3DXMatrixRotationZ(auStack_60,*(undefined4 *)(param_1 + 0x58));
      D3DXMatrixMultiply(&local_c8,auStack_68,&local_c8);
    }
    if (*(float *)(param_1 + 0x54) != 0.0) {
      D3DXMatrixRotationY(auStack_60,*(undefined4 *)(param_1 + 0x54));
      D3DXMatrixMultiply(&local_c8,auStack_68,&local_c8);
    }
    if (*(float *)(param_1 + 0x50) != 0.0) {
      D3DXMatrixRotationX(auStack_60,*(undefined4 *)(param_1 + 0x50));
      D3DXMatrixMultiply(&local_c8,auStack_68,&local_c8);
    }
    D3DXMatrixMultiply(iVar1,&stack0xffffff40,iVar1);
    fStack_8c = *(float *)(param_1 + 0x30) * -1.0;
    fStack_88 = *(float *)(param_1 + 0x34) * -1.0;
    fStack_84 = *(float *)(param_1 + 0x38) * -1.0;
    fStack_80 = *(float *)(param_1 + 0x3c) * -1.0;
    D3DXVec3TransformNormal(auStack_7c,&fStack_8c,iVar1);
    *(float *)(param_1 + 0xa0) = fStack_88 + *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + fStack_84;
    *(float *)(param_1 + 0xa8) = fStack_80 + *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0xa8);
    if ((*(int *)(param_1 + 0xf4) != 0) && (0.0 < *(float *)(param_1 + 0xfc))) {
      D3DXMatrixMultiply(iVar1,iVar1,*(int *)(param_1 + 0xf4));
    }
    D3DXMatrixInverse(param_1 + 0xb0,0,iVar1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}

// 00A696F0  FUN_00a696f0  size=339  [run]
void __thiscall FUN_00a696f0(int param_1,float *param_2)

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
  float10 fVar12;
  float10 fVar13;
  
  *(float *)(param_1 + 0x40) = param_2[0xc];
  *(float *)(param_1 + 0x44) = param_2[0xd];
  *(float *)(param_1 + 0x48) = param_2[0xe];
  *(float *)(param_1 + 0x4c) = param_2[0xf];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar11 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  fVar7 = param_2[6];
  fVar8 = param_2[10];
  fVar12 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar11));
  fVar9 = param_2[1];
  fVar10 = *param_2;
  fVar13 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
  *(float *)(param_1 + 0x50) = (float)fVar13;
  *(float *)(param_1 + 0x54) = (float)fVar12;
  fVar12 = (float10)fpatan((float10)fVar9 /
                           (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                           (float10)fVar10 /
                           (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  *(float *)(param_1 + 0x58) = (float)fVar12;
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = param_2[8];
  fVar5 = param_2[9];
  fVar6 = param_2[10];
  *(float *)(param_1 + 0x60) =
       SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  *(float *)(param_1 + 100) = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  *(float *)(param_1 + 0x68) = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  *(undefined4 *)(param_1 + 0xf0) = 1;
  return;
}

