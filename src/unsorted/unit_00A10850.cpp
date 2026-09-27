// src/unsorted/unit_00A10850.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A10850..00A11970, 18 functions

#include "mgrr.h"

// 00A10850  FUN_00a10850  size=198  [run]
int __thiscall FUN_00a10850(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 0xc);
  if (((0.5235988 < param_3) && ((DAT_01b7b39c & 0x800) == 0)) && (0.0 < fVar1)) {
    if (param_5 == -1) {
      fVar1 = fVar1 * *(float *)(param_1 + 0x14);
    }
    if (fVar1 < param_2) {
      return -1;
    }
  }
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (*(float *)(param_1 + iVar2 * 4) < param_4) break;
    iVar2 = iVar2 + 1;
    iVar3 = 2;
  } while (iVar2 < 3);
  if (param_5 != -1) {
    if (param_5 - iVar3 == 1) {
      if (param_4 < *(float *)(param_1 + iVar3 * 4) * 0.1 + *(float *)(param_1 + iVar3 * 4)) {
        iVar3 = param_5;
      }
    }
    else if ((iVar3 - param_5 == 1) &&
            (*(float *)(param_1 + param_5 * 4) - *(float *)(param_1 + param_5 * 4) * 0.1 < param_4))
    {
      iVar3 = param_5;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar3 <= *(int *)(param_1 + 0x1c)) {
    iVar2 = iVar3;
  }
  return iVar2;
}

// 00A10920  FUN_00a10920  size=189  [run]
void __thiscall FUN_00a10920(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_4 != 0) {
    iVar1 = *(int *)(param_4 + 0x198);
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_4 + 0x198)) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x18) = iVar1;
    return;
  }
  fVar3 = (float10)*param_2 - (float10)*(float *)(param_3 + 0x1b0);
  fVar4 = (float10)param_2[1] - (float10)*(float *)(param_3 + 0x1b4);
  fVar5 = (float10)param_2[2] - (float10)*(float *)(param_3 + 0x1b8);
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = (float10)fptan((float10)0.4359999895095825);
  fVar4 = (SQRT((float10)param_2[6] * (float10)param_2[6] +
                (float10)param_2[4] * (float10)param_2[4] +
                (float10)param_2[5] * (float10)param_2[5]) / (fVar4 * fVar3)) * (float10)100.0;
  *(float *)(param_1 + 0x10) = (float)fVar4;
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_00a10850((float)fVar3,0x3f5f3b64,(float)fVar4,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}

// 00A10A00  FUN_00a10a00  size=216  [run]
void __thiscall FUN_00a10a00(char *param_1,undefined4 param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (((*(uint *)(param_4 + 0x364) & 2) != 0) && ((DAT_01b7b39c >> 0x1d & 1) == 0)) {
    pfVar1 = (float *)(param_4 + 0x130);
    if ((*(uint *)(param_4 + 0x364) & 4) == 0) {
      iVar4 = FUN_00de5710(pfVar1,SQRT(*(float *)(param_4 + 0x148) * *(float *)(param_4 + 0x148) +
                                       *(float *)(param_4 + 0x140) * *(float *)(param_4 + 0x140) +
                                       *(float *)(param_4 + 0x144) * *(float *)(param_4 + 0x144)));
      *param_1 = iVar4 == 0;
    }
    else {
      iVar4 = FUN_00de58e0(pfVar1);
      *param_1 = iVar4 == 0;
    }
    if (*param_1 == '\0') {
      fVar3 = *(float *)(param_4 + 0x134) - param_3[1];
      fVar2 = *(float *)(param_4 + 0x138) - param_3[2];
      if (40.0 <= SQRT((*pfVar1 - *param_3) * (*pfVar1 - *param_3) + fVar3 * fVar3 + fVar2 * fVar2))
      {
        param_1[1] = '\x01';
        return;
      }
      param_1[1] = '\0';
    }
    return;
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  return;
}

// 00A10AE0  FUN_00a10ae0  size=416  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a10ae0(int param_1,undefined4 param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  if (((DAT_01b7b39c & 0x20000000) == 0) && ((DAT_01b7b39c & 0x10000) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((*(byte *)(param_5 + 0x364) & 2) != 0) && (!bVar2)) {
    *(undefined1 *)(param_1 + 2) = 0xff;
    if ((*(char *)(param_1 + 3) == -1) || (*(int *)(param_5 + 0x198) <= (int)*(char *)(param_1 + 3))
       ) {
      pfVar1 = (float *)(param_5 + 0x130);
      fVar3 = SQRT(*(float *)(param_5 + 0x148) * *(float *)(param_5 + 0x148) +
                   *(float *)(param_5 + 0x140) * *(float *)(param_5 + 0x140) +
                   *(float *)(param_5 + 0x144) * *(float *)(param_5 + 0x144));
      fVar5 = *(float *)(param_5 + 0x134) - param_4[1];
      fVar4 = *(float *)(param_5 + 0x138) - param_4[2];
      fVar4 = SQRT((*pfVar1 - *param_4) * (*pfVar1 - *param_4) + fVar5 * fVar5 + fVar4 * fVar4);
      if (((_DAT_0189ef64 < fVar3) || (fVar4 <= _DAT_0189ef60)) &&
         ((_DAT_0189ef5c < fVar3 || (fVar4 <= _DAT_0189ef58)))) {
        iVar7 = 0;
        if ((*(byte *)(param_5 + 0x364) & 4) == 0) {
          if (0 < param_3) {
            do {
              iVar6 = FUN_00de5650(pfVar1,fVar3);
              if (iVar6 != 0) {
                *(byte *)(param_1 + 2) =
                     *(byte *)(param_1 + 2) & ~('\x01' << ((byte)iVar7 & 0x1f) | 0x80U);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < param_3);
            return;
          }
        }
        else if (0 < param_3) {
          do {
            iVar6 = FUN_00de57b0(pfVar1);
            if (iVar6 != 0) {
              *(byte *)(param_1 + 2) =
                   *(byte *)(param_1 + 2) & ~('\x01' << ((byte)iVar7 & 0x1f) | 0x80U);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_3);
          return;
        }
        return;
      }
    }
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

// 00A10CF0  FUN_00a10cf0  size=282  [run]
void __thiscall FUN_00a10cf0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  float unaff_EBX;
  int iVar1;
  float unaff_ESI;
  undefined4 *puVar2;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  D3DXVec4Transform(&local_60,param_1 + 8,param_2);
  if (param_3 == 0) {
    D3DXVec3TransformNormal(&stack0xffffff84,param_1 + 0xc,param_2);
  }
  else {
    uStack_4c = param_1[0xc];
    puVar2 = &uStack_4c;
    iVar1 = 3;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = param_1[0xd];
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_30 = 0x3f800000;
    uStack_24 = param_1[0xe];
    uStack_20 = 0x3f800000;
    uStack_70 = 0x3f800000;
    unaff_ESI = 0.0;
    unaff_EBX = 0.0;
    fStack_74 = 0.0;
    do {
      D3DXVec3TransformNormal(&fStack_5c,puVar2,param_2);
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
      unaff_ESI = ABS(fStack_5c) + unaff_ESI;
      unaff_EBX = ABS(fStack_58) + unaff_EBX;
      fStack_74 = ABS(fStack_54) + fStack_74;
    } while (iVar1 != 0);
  }
  *param_1 = uStack_6c;
  param_1[1] = uStack_68;
  param_1[2] = uStack_64;
  param_1[3] = local_60;
  param_1[4] = ABS(unaff_ESI);
  param_1[5] = ABS(unaff_EBX);
  param_1[6] = ABS(fStack_74);
  param_1[7] = uStack_70;
  return;
}

// 00A10ED0  FUN_00a10ed0  size=183  [run]
void FUN_00a10ed0(float *param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  
  if (*(int *)(param_4 + 0x10) == 1) {
    fVar7 = -0.35;
    local_18 = -0.35;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar5 = 0.35;
    fVar6 = 0.35;
    fVar8 = 0.9;
    fVar4 = param_3[3];
  }
  else {
    local_18 = -0.42;
    fVar1 = *(float *)(param_5 + 0x30);
    fVar2 = *(float *)(param_5 + 0x34);
    fVar3 = *(float *)(param_5 + 0x38);
    fVar5 = 0.42;
    fVar6 = 0.42;
    fVar8 = 0.45;
    fVar7 = -0.42;
    fVar4 = *(float *)(param_5 + 0x3c);
  }
  *param_1 = fVar6 + fVar1;
  param_1[1] = fVar2 + fVar8;
  param_1[2] = fVar3 + fVar5;
  param_1[3] = fVar4 + 1.0;
  *param_2 = fVar7 + fVar1;
  param_2[1] = fVar2 - 0.85;
  param_2[2] = fVar3 + local_18;
  param_2[3] = fVar4 + 1.0;
  return;
}

// 00A10F90  FUN_00a10f90  size=615  [run]
undefined4 FUN_00a10f90(int param_1,float param_2,float *param_3,float *param_4,int *param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_d4;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 local_84;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  
  local_84 = 0;
  local_60 = (*param_3 + *param_4) * 0.5;
  local_5c = (param_4[1] + param_3[1]) * 0.5;
  local_58 = (param_3[2] + param_4[2]) * 0.5;
  local_54 = (param_3[3] + param_4[3]) * 0.5;
  local_d4 = SQRT((param_4[2] - param_3[2]) * (param_4[2] - param_3[2]) +
                  (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
                  (*param_4 - *param_3) * (*param_4 - *param_3)) * 0.5;
  iVar1 = FUN_00d96a00(param_1,SQRT(*(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                                    *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                                    *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14)),
                       &local_60);
  if (iVar1 == 0) {
    return 0;
  }
  local_d4 = param_2;
  D3DXMatrixInverse(local_50,0);
  D3DXVec3TransformNormal(&fStack_bc,param_4,&local_5c);
  fStack_c4 = fStack_34 + fStack_c4;
  fStack_c0 = fStack_30 + fStack_c0;
  D3DXVec3TransformNormal(auStack_b8,param_3,auStack_68);
  fStack_c4 = fStack_c4 + fStack_44;
  iVar1 = 0;
  fStack_c0 = fStack_c0 + fStack_40;
  fStack_bc = fStack_bc + fStack_3c;
  if (0 < param_5[2]) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      pfVar2 = (float *)(param_5[1] + iVar4);
      if ((*(byte *)(*param_5 + 0x38 + iVar5) & 1) != 0) {
        fStack_94 = *(float *)(param_1 + 0x40) + *pfVar2;
        fStack_90 = pfVar2[1] + *(float *)(param_1 + 0x44);
        fStack_8c = pfVar2[2] + *(float *)(param_1 + 0x48);
        fStack_88 = pfVar2[3] + *(float *)(param_1 + 0x4c);
        fStack_a4 = *(float *)(param_1 + 0x40) + pfVar2[4];
        fStack_a0 = pfVar2[5] + *(float *)(param_1 + 0x44);
        fStack_9c = pfVar2[6] + *(float *)(param_1 + 0x48);
        fStack_98 = pfVar2[7] + *(float *)(param_1 + 0x4c);
        iVar3 = FUN_00d8d720(&fStack_c4,param_5[3],&fStack_94,&fStack_a4);
        if (iVar3 != 0) {
          iVar3 = FUN_00d8d6c0(&local_d4,&fStack_94,&fStack_a4);
          if (iVar3 == 0) {
            iVar3 = FUN_00d91800(&local_d4,&fStack_c4,&fStack_94,&fStack_a4);
            if (iVar3 != 0) {
              return 1;
            }
          }
        }
      }
      iVar5 = iVar5 + 0x70;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x50;
    } while (iVar1 < param_5[2]);
  }
  return uStack_a8;
}

// 00A11200  FUN_00a11200  size=70  [run]
void FUN_00a11200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_EDX;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_00a10ed0(local_20,local_30,param_1,param_3,param_4);
  FUN_00d8d720(param_2,*(undefined4 *)(extraout_EDX + 0xc),local_20,local_30);
  return;
}

// 00A11250  FUN_00a11250  size=244  [run]
void __thiscall
FUN_00a11250(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int extraout_EDX;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (*(int *)(param_6 + 0x10) == 0) {
    if (param_5 == 0) {
      iVar4 = FUN_00a07cf0(param_2,param_3,param_4,param_6);
    }
    else {
      iVar4 = FUN_00a10f90(param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    FUN_00a10ed0(local_20,local_30,param_2,param_6,param_3);
    iVar4 = FUN_00d8d720(param_4,*(undefined4 *)(extraout_EDX + 0xc),local_20,local_30);
  }
  if (iVar4 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = param_1[1];
  }
  fVar2 = *param_1;
  if (fVar1 == fVar2) goto LAB_00a11339;
  if (fVar2 <= fVar1) {
    fVar3 = fVar2 + 0.05;
    if (fVar2 + 0.05 <= fVar1) goto LAB_00a11314;
  }
  else {
    fVar3 = fVar2 - 0.05;
    if (fVar1 <= fVar2 - 0.05) {
LAB_00a11314:
      fVar1 = fVar3;
    }
  }
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 < fVar1)) {
    *param_1 = 1.0;
    return;
  }
LAB_00a11339:
  *param_1 = fVar2;
  return;
}

// 00A11350  FUN_00a11350  size=79  [run]
void FUN_00a11350(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_2;
  
  if ((((param_2 & 0xffff) != 0xffffffff) && (iVar1 = FUN_00a0c240(&local_10,param_2), iVar1 != 0))
     && (FUN_00f91fc0(local_10,local_2), param_3 != 0)) {
    FUN_00f92020(local_c,local_2);
  }
  return;
}

// 00A113A0  FUN_00a113a0  size=66  [run]
void FUN_00a113a0(int param_1)

{
  int iVar1;
  void *_Src;
  
  _Src = (void *)((uint)*(byte *)(param_1 + 0x8e) * 0x40 + param_1);
  iVar1 = FUN_00f994a0(0x10,_Src,0x10);
  if (iVar1 == 0) {
    FID_conflict__memcpy(&DAT_01f135d0,_Src,0x40);
    FUN_00f995e0(0x10,&DAT_01f135d0,0x10);
  }
  return;
}

// 00A113F0  FUN_00a113f0  size=99  [run]
void FUN_00a113f0(int param_1)

{
  int iVar1;
  undefined1 *puStack_5c;
  undefined *puStack_58;
  int iStack_54;
  undefined1 local_50 [76];
  
  iStack_54 = (uint)*(byte *)(param_1 + 0x8e) * 0x40 + param_1;
  puStack_58 = &DAT_01f6c830;
  puStack_5c = local_50;
  D3DXMatrixMultiply();
  iVar1 = FUN_00f994a0(0x18,&puStack_5c,0x10);
  if (iVar1 == 0) {
    FID_conflict__memcpy(&DAT_01f13650,&puStack_5c,0x40);
    FUN_00f995e0(0x18,&DAT_01f13650,0x10);
  }
  return;
}

// 00A11460  FUN_00a11460  size=99  [run]
void FUN_00a11460(int param_1)

{
  int iVar1;
  undefined1 *puStack_5c;
  undefined *puStack_58;
  int iStack_54;
  undefined1 local_50 [76];
  
  iStack_54 = (uint)*(byte *)(param_1 + 0x8e) * 0x40 + param_1;
  puStack_58 = &DAT_01f6c7f0;
  puStack_5c = local_50;
  D3DXMatrixMultiply();
  iVar1 = FUN_00f994a0(0x14,&puStack_5c,0x10);
  if (iVar1 == 0) {
    FID_conflict__memcpy(&DAT_01f13610,&puStack_5c,0x40);
    FUN_00f995e0(0x14,&DAT_01f13610,0x10);
  }
  return;
}

// 00A114D0  FUN_00a114d0  size=107  [run]
void FUN_00a114d0(int param_1,byte param_2)

{
  int iVar1;
  void *_Src;
  
  if ((param_2 & 4) != 0) {
    _Src = (void *)((uint)*(byte *)(param_1 + 0x8e) * 0x40 + param_1);
    iVar1 = FUN_00f994a0(0x10,_Src,0x10);
    if (iVar1 == 0) {
      FID_conflict__memcpy(&DAT_01f135d0,_Src,0x40);
      FUN_00f995e0(0x10,&DAT_01f135d0,0x10);
    }
  }
  if ((param_2 & 2) != 0) {
    FUN_00a11460(param_1);
  }
  if ((param_2 & 1) != 0) {
    FUN_00a113f0(param_1);
  }
  return;
}

// 00A11540  FUN_00a11540  size=905  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a11540(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(*(int *)(*param_1 + 0xb0) + 200);
  if (DAT_01bdfce8 == iVar2) {
    if (-1 < iVar2) goto LAB_00a118a1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    iVar2 = FUN_00f994a0(0xbd,&local_20,4);
    if (iVar2 == 0) {
      _DAT_01f140a0 = local_20;
      _DAT_01f140a4 = local_1c;
      _DAT_01f140a8 = local_18;
      _DAT_01f140ac = local_14;
      FUN_00f995e0(0xbd,&DAT_01f140a0,4);
    }
    iVar2 = FUN_00f99540(0xbd,&local_20,4);
    if (iVar2 == 0) {
      _DAT_01f132a0 = local_20;
      _DAT_01f132a4 = local_1c;
      _DAT_01f132a8 = local_18;
      _DAT_01f132ac = local_14;
      FUN_00f99620(0xbd,&DAT_01f132a0,4);
    }
    iVar2 = FUN_00f99540(0xbe,&local_30,4);
    if (iVar2 != 0) goto LAB_00a118a1;
    _DAT_01f132b0 = local_30;
    _DAT_01f132b4 = local_2c;
    _DAT_01f132b8 = local_28;
    _DAT_01f132bc = local_24;
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2 * 0x10;
      local_30 = *(undefined4 *)(&DAT_01b85d00 + iVar1);
      local_2c = *(undefined4 *)(&DAT_01b85d04 + iVar1);
      local_28 = *(undefined4 *)(&DAT_01b85d08 + iVar1);
      local_20 = *(undefined4 *)(&DAT_01b85d80 + iVar1);
      local_1c = *(undefined4 *)(&DAT_01b85d84 + iVar1);
      local_18 = *(undefined4 *)(&DAT_01b85d88 + iVar1);
      local_14 = *(undefined4 *)(&DAT_01b85d8c + iVar1);
      local_24 = 0x3f800000;
    }
    DAT_01bdfce8 = iVar2;
    if (DAT_01be5550 == 0) {
      iVar2 = FUN_00f994a0(0xc3,&local_30,4);
      if (iVar2 == 0) {
        _DAT_01f14100 = local_30;
        _DAT_01f14104 = local_2c;
        _DAT_01f14108 = local_28;
        _DAT_01f1410c = local_24;
        FUN_00f995e0(0xc3,&DAT_01f14100,4);
      }
      iVar2 = FUN_00f994a0(199,&local_20,4);
      if (iVar2 == 0) {
        _DAT_01f14140 = local_20;
        _DAT_01f14144 = local_1c;
        _DAT_01f14148 = local_18;
        _DAT_01f1414c = local_14;
        FUN_00f995e0(199,&DAT_01f14140,4);
      }
      goto LAB_00a118a1;
    }
    iVar2 = FUN_00f994a0(0xbd,&local_30,4);
    if (iVar2 == 0) {
      _DAT_01f140a0 = local_30;
      _DAT_01f140a4 = local_2c;
      _DAT_01f140a8 = local_28;
      _DAT_01f140ac = local_24;
      FUN_00f995e0(0xbd,&DAT_01f140a0,4);
    }
    iVar2 = FUN_00f99540(0xbd,&local_30,4);
    if (iVar2 == 0) {
      _DAT_01f132a0 = local_30;
      _DAT_01f132a4 = local_2c;
      _DAT_01f132a8 = local_28;
      _DAT_01f132ac = local_24;
      FUN_00f99620(0xbd,&DAT_01f132a0,4);
    }
    iVar2 = FUN_00f99540(0xbe,&local_20,4);
    if (iVar2 != 0) goto LAB_00a118a1;
    _DAT_01f132b0 = local_20;
    _DAT_01f132b4 = local_1c;
    _DAT_01f132b8 = local_18;
    _DAT_01f132bc = local_14;
  }
  FUN_00f99620(0xbe,&DAT_01f132b0,4);
LAB_00a118a1:
  FUN_00f9d8f0(0);
  FUN_00f9d720(0);
  FUN_00a07eb0(param_1[5]);
  DAT_01ee5424 = 0;
  return;
}

// 00A118D0  FUN_00a118d0  size=12  [run]
undefined4 __fastcall FUN_00a118d0(undefined4 param_1)

{
  FUN_00a07fa0();
  return param_1;
}

// 00A118E0  FUN_00a118e0  size=132  [run]
void __fastcall FUN_00a118e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4fc) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x500)) {
      do {
        FUN_00fa3700(*(undefined4 *)(*(int *)(param_1 + 0x4fc) + 4 + iVar1 * 8));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x500));
    }
    if (*(int *)(param_1 + 0x4fc) != 0) {
      FUN_00dd4940(*(int *)(param_1 + 0x4fc));
      *(undefined4 *)(param_1 + 0x4fc) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x4f4));
    *(undefined4 *)(param_1 + 0x4f4) = 0;
  }
  FUN_00a07fa0();
  return;
}

// 00A11970  FUN_00a11970  size=301  [run]
undefined4 __thiscall
FUN_00a11970(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  FUN_00a118e0();
  iVar1 = FUN_00fab380(*(undefined2 *)(param_3 + 0x1c));
  if (iVar1 != 0) {
    iVar2 = FUN_00a08100(param_2,param_3,param_6);
    if (iVar2 != 0) {
      iVar2 = FUN_00a082c0(iVar1,param_6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x490) = param_3;
        *(undefined4 *)(param_1 + 0x520) = param_4;
        *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_3 + 0xc);
        if (2 < *(ushort *)(param_3 + 0x1c)) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x10;
        }
        if ((*(byte *)(*(int *)(param_2 + 0xf8) + 0x1c) & 0x30) != 0) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 1;
        }
        if ((*(byte *)(param_3 + 0x1e) & 2) != 0) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x2000;
        }
        if ((*(byte *)(param_3 + 0x1e) & 1) != 0) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x1000;
        }
        if ((0 < *(int *)(param_2 + 0xcc)) && ((*(uint *)(param_1 + 0x51c) & 0x4000) != 0)) {
          *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x1000;
        }
        *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x8000;
        *(uint *)(param_1 + 0x518) = ~(*(uint *)(param_1 + 0x51c) >> 0xb) & 2 | 1;
        *(int *)(param_1 + 0x470) = iVar1;
        FUN_00a084c0(iVar1);
        FUN_00a085e0();
        FUN_00a08ae0(1);
        *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
        return 1;
      }
    }
  }
  FUN_00a118e0();
  return 0;
}

