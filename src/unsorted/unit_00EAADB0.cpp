// src/unsorted/unit_00EAADB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAADB0..00EAC880, 11 functions

#include "mgrr.h"

// 00EAADB0  FUN_00eaadb0  size=48  [run]
int __thiscall FUN_00eaadb0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_1;
  if (param_1[1] != 0) {
    do {
      if (piVar1[2] == param_2) {
        return param_1[uVar2 * 2 + 3] + (int)param_1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (uVar2 < (uint)param_1[1]);
  }
  return 0;
}

// 00EAB070  FUN_00eab070  size=1  [run]
void FUN_00eab070(void)

{
  return;
}

// 00EAB080  FUN_00eab080  size=1  [run]
void FUN_00eab080(void)

{
  return;
}

// 00EAB090  FUN_00eab090  size=346  [run]
void __fastcall FUN_00eab090(undefined4 *param_1)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0x3dcccccd;
  param_1[0xe] = 0x41a00000;
  param_1[0xf] = 0x42c80000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3dcccccd;
  param_1[0x18] = 0x41a00000;
  param_1[0x19] = 0x42c80000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3dcccccd;
  param_1[0x22] = 0x41a00000;
  param_1[0x23] = 0x42c80000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3dcccccd;
  param_1[0x2c] = 0x41a00000;
  param_1[0x2d] = 0x42c80000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xa1] = 0xbf800000;
  param_1[3] = 0;
  param_1[0xab] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  FUN_00a1ebc0();
  return;
}

// 00EAB260  FUN_00eab260  size=205  [run]
void __fastcall FUN_00eab260(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  FUN_00a1ebc0();
  iVar2 = 3;
  pfVar1 = (float *)(param_1 + 0x30);
  do {
    iVar2 = iVar2 + -1;
    pfVar1[0x6d] = (pfVar1[0x4c] - *pfVar1) / *(float *)(param_1 + 0x284);
    pfVar1[0x6e] = (pfVar1[0x4d] - pfVar1[1]) / *(float *)(param_1 + 0x284);
    pfVar1[0x6f] = (pfVar1[0x4e] - pfVar1[2]) / *(float *)(param_1 + 0x284);
    pfVar1[0x70] = (pfVar1[0x4f] - pfVar1[3]) / *(float *)(param_1 + 0x284);
    pfVar1[0x71] = (pfVar1[0x50] - pfVar1[4]) / *(float *)(param_1 + 0x284);
    pfVar1[0x72] = (pfVar1[0x51] - pfVar1[5]) / *(float *)(param_1 + 0x284);
    pfVar1[0x73] = (pfVar1[0x52] - pfVar1[6]) / *(float *)(param_1 + 0x284);
    *(float *)(param_1 + 0x29c) = pfVar1[0x6d];
    *(float *)(param_1 + 0x2a0) = pfVar1[0x71];
    pfVar1 = pfVar1 + 10;
  } while (iVar2 != 0);
  return;
}

// 00EAB330  FUN_00eab330  size=442  [run]
void __fastcall FUN_00eab330(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  
  if (*(float *)(param_1 + 0x298) <= 0.0) {
    if (0.0 < *(float *)(param_1 + 0x284)) {
      iVar4 = 3;
      pfVar3 = (float *)(param_1 + 0x30);
      do {
        iVar4 = iVar4 + -1;
        fVar1 = *pfVar3;
        *pfVar3 = pfVar3[0x6d] + fVar1;
        pfVar3[1] = pfVar3[0x6e] + pfVar3[1];
        pfVar3[2] = pfVar3[0x6f] + pfVar3[2];
        pfVar3[3] = pfVar3[0x70] + pfVar3[3];
        pfVar3[4] = pfVar3[0x71] + pfVar3[4];
        pfVar3[5] = pfVar3[0x72] + pfVar3[5];
        pfVar3[6] = pfVar3[0x73] + pfVar3[6];
        *(float *)(param_1 + 0x29c) = pfVar3[0x6d] + fVar1;
        *(float *)(param_1 + 0x2a0) = pfVar3[4];
        pfVar3 = pfVar3 + 10;
      } while (iVar4 != 0);
      fVar1 = *(float *)(param_1 + 0x284) - 1.0;
      *(float *)(param_1 + 0x284) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        pfVar3 = (float *)(param_1 + 0x160);
        pfVar6 = (float *)(param_1 + 0x30);
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar6 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar6 = pfVar6 + 1;
        }
        puVar5 = (undefined4 *)(param_1 + 0x188);
        puVar7 = (undefined4 *)(param_1 + 0x58);
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined4 *)(param_1 + 0x1b0);
        puVar7 = (undefined4 *)(param_1 + 0x80);
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined4 *)(param_1 + 0x154);
        puVar7 = (undefined4 *)(param_1 + 0x1d8);
        for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined4 *)(param_1 + 0x154);
        puVar7 = (undefined4 *)(param_1 + 0xd0);
        for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      return;
    }
  }
  else {
    iVar4 = 3;
    fVar1 = *(float *)(param_1 + 0x298) * 10.0;
    pfVar3 = (float *)(param_1 + 0x30);
    do {
      iVar4 = iVar4 + -1;
      fVar2 = pfVar3[0x6d] * fVar1 + *pfVar3;
      *pfVar3 = fVar2;
      pfVar3[1] = pfVar3[0x6e] * fVar1 + pfVar3[1];
      pfVar3[2] = pfVar3[0x6f] * fVar1 + pfVar3[2];
      pfVar3[3] = pfVar3[0x70] * fVar1 + pfVar3[3];
      pfVar3[4] = pfVar3[0x71] * fVar1 + pfVar3[4];
      pfVar3[5] = pfVar3[0x72] * fVar1 + pfVar3[5];
      pfVar3[6] = pfVar3[0x73] * fVar1 + pfVar3[6];
      *(float *)(param_1 + 0x29c) = fVar2;
      *(float *)(param_1 + 0x2a0) = pfVar3[4];
      pfVar3 = pfVar3 + 10;
    } while (iVar4 != 0);
  }
  return;
}

// 00EAB4F0  FUN_00eab4f0  size=238  [run]
void __fastcall FUN_00eab4f0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar6 = *(int *)(param_1 + 0x290);
  if (0 < iVar6) {
    pfVar2 = (float *)(param_1 + 0xdc + *(int *)(param_1 + 0x10) * 0x28);
    pfVar3 = (float *)(param_1 + 0xdc + *(int *)(param_1 + 0xc) * 0x28);
    fVar7 = 1.0 - (float)*(int *)(param_1 + 0x294) / (float)iVar6;
    fVar8 = 1.0 - fVar7;
    *(float *)(param_1 + 0x25c) = *pfVar3 * fVar8 + *pfVar2 * fVar7;
    *(float *)(param_1 + 0x260) = pfVar3[1] * fVar8 + pfVar2[1] * fVar7;
    *(float *)(param_1 + 0x264) = pfVar3[2] * fVar8 + pfVar2[2] * fVar7;
    *(float *)(param_1 + 0x268) = pfVar3[3] * fVar8 + pfVar2[3] * fVar7;
    *(float *)(param_1 + 0x26c) = pfVar3[4] * fVar8 + pfVar2[4] * fVar7;
    *(float *)(param_1 + 0x270) = pfVar3[5] * fVar8 + pfVar2[5] * fVar7;
    fVar4 = pfVar2[6];
    iVar1 = *(int *)(param_1 + 0x294) + 1;
    fVar5 = pfVar3[6];
    *(int *)(param_1 + 0x294) = iVar1;
    *(float *)(param_1 + 0x274) = fVar7 * fVar4 + fVar5 * fVar8;
    if (iVar6 <= iVar1) {
      *(undefined4 *)(param_1 + 0x290) = 0;
    }
  }
  return;
}

// 00EAB5E0  FUN_00eab5e0  size=398  [run]
void __fastcall FUN_00eab5e0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  fVar6 = (float10)FUN_00e773a0(&DAT_01be5540);
  fVar2 = (float)fVar6;
  iVar3 = -1;
  if ((*(float *)(param_1 + 0x54) != *(float *)(param_1 + 0x50)) &&
     (*(float *)(param_1 + 0x50) < fVar2)) {
    iVar3 = 0;
  }
  if ((*(float *)(param_1 + 0x7c) == *(float *)(param_1 + 0x78)) ||
     (fVar2 <= *(float *)(param_1 + 0x78))) {
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)(param_1 + 0x30);
      puVar5 = (undefined4 *)(param_1 + 0x25c);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      return;
    }
  }
  else {
    iVar3 = 1;
  }
  iVar1 = iVar3 * 5 + 10;
  fVar2 = (fVar2 - *(float *)(param_1 + iVar1 * 8)) /
          (*(float *)(param_1 + 0x54 + iVar3 * 0x28) - *(float *)(param_1 + iVar1 * 8));
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  iVar3 = param_1 + (iVar3 * 5 + 5) * 8;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(float *)(param_1 + 0x268) = *(float *)(iVar3 + 0x3c) * fVar2 + *(float *)(param_1 + 0x268);
  *(float *)(param_1 + 0x264) = *(float *)(iVar3 + 0x38) * fVar2 + *(float *)(param_1 + 0x264);
  *(float *)(param_1 + 0x25c) = *(float *)(iVar3 + 0x30) * fVar2 + *(float *)(param_1 + 0x25c);
  *(float *)(param_1 + 0x260) = *(float *)(iVar3 + 0x34) * fVar2 + *(float *)(param_1 + 0x260);
  *(float *)(param_1 + 0x26c) = *(float *)(iVar3 + 0x40) * fVar2 + *(float *)(param_1 + 0x26c);
  fVar2 = 1.0 - fVar2;
  *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) + fVar2 * *(float *)(iVar3 + 0x14);
  *(float *)(param_1 + 0x264) = *(float *)(iVar3 + 0x10) * fVar2 + *(float *)(param_1 + 0x264);
  *(float *)(param_1 + 0x25c) = *(float *)(iVar3 + 8) * fVar2 + *(float *)(param_1 + 0x25c);
  *(float *)(param_1 + 0x260) = *(float *)(iVar3 + 0xc) * fVar2 + *(float *)(param_1 + 0x260);
  *(float *)(param_1 + 0x26c) = fVar2 * *(float *)(iVar3 + 0x18) + *(float *)(param_1 + 0x26c);
  return;
}

// 00EABB00  FUN_00eabb00  size=1777  [run]
void __thiscall FUN_00eabb00(int param_1,uint param_2,int param_3,float param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte local_8;
  
  iVar3 = param_2;
  fVar2 = 1.0 - param_4;
  *(float *)(param_1 + 0x400) =
       *(float *)(param_3 + 0x400) * param_4 + fVar2 * *(float *)(param_2 + 0x400);
  *(float *)(param_1 + 0x404) =
       *(float *)(param_3 + 0x404) * param_4 + *(float *)(param_2 + 0x404) * fVar2;
  *(float *)(param_1 + 0x408) =
       *(float *)(param_3 + 0x408) * param_4 + *(float *)(param_2 + 0x408) * fVar2;
  *(float *)(param_1 + 0x40c) =
       *(float *)(param_3 + 0x40c) * param_4 + *(float *)(param_2 + 0x40c) * fVar2;
  *(float *)(param_1 + 0x410) =
       *(float *)(param_3 + 0x410) * param_4 + *(float *)(param_2 + 0x410) * fVar2;
  *(float *)(param_1 + 0x414) =
       *(float *)(param_3 + 0x414) * param_4 + *(float *)(param_2 + 0x414) * fVar2;
  *(float *)(param_1 + 0x418) =
       *(float *)(param_3 + 0x418) * param_4 + *(float *)(param_2 + 0x418) * fVar2;
  *(float *)(param_1 + 0x41c) =
       *(float *)(param_3 + 0x41c) * param_4 + *(float *)(param_2 + 0x41c) * fVar2;
  *(float *)(param_1 + 0x420) =
       *(float *)(param_3 + 0x420) * param_4 + *(float *)(param_2 + 0x420) * fVar2;
  *(float *)(param_1 + 0x424) =
       *(float *)(param_3 + 0x424) * param_4 + *(float *)(param_2 + 0x424) * fVar2;
  *(float *)(param_1 + 0x428) =
       *(float *)(param_3 + 0x428) * param_4 + *(float *)(param_2 + 0x428) * fVar2;
  *(float *)(param_1 + 0x42c) =
       *(float *)(param_3 + 0x42c) * param_4 + *(float *)(param_2 + 0x42c) * fVar2;
  *(float *)(param_1 + 0x430) =
       *(float *)(param_3 + 0x430) * param_4 + *(float *)(param_2 + 0x430) * fVar2;
  *(float *)(param_1 + 0x434) =
       *(float *)(param_3 + 0x434) * param_4 + *(float *)(param_2 + 0x434) * fVar2;
  *(float *)(param_1 + 0x438) =
       *(float *)(param_3 + 0x438) * param_4 + *(float *)(param_2 + 0x438) * fVar2;
  *(float *)(param_1 + 0x43c) =
       *(float *)(param_3 + 0x43c) * param_4 + *(float *)(param_2 + 0x43c) * fVar2;
  *(float *)(param_1 + 0x440) =
       *(float *)(param_3 + 0x440) * param_4 + *(float *)(param_2 + 0x440) * fVar2;
  *(float *)(param_1 + 0x444) =
       *(float *)(param_3 + 0x444) * param_4 + *(float *)(param_2 + 0x444) * fVar2;
  if (*(int *)(param_2 + 0x448) != *(int *)(param_3 + 0x448)) {
    FUN_00dd5650(&DAT_016d2ffc);
  }
  piVar1 = (int *)(param_2 + 0x448);
  param_2 = 0;
  if (*piVar1 != 0) {
    pbVar4 = (byte *)(param_3 + 0x44c);
    puVar5 = (undefined1 *)(param_1 + 0x44d);
    do {
      local_8 = (byte)(int)ROUND((float)*pbVar4 * param_4 + (float)pbVar4[iVar3 - param_3] * fVar2);
      (pbVar4 + 2)[(param_1 - param_3) + -2] = local_8;
      local_8 = (byte)(int)ROUND((float)pbVar4[1] * param_4 +
                                 (float)(byte)(puVar5 + 2)[(iVar3 - param_1) + -2] * fVar2);
      *puVar5 = local_8;
      param_2 = param_2 + 1;
      pbVar4 = pbVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (param_2 < *(uint *)(iVar3 + 0x448));
  }
  *(float *)(param_1 + 0x46c) =
       *(float *)(param_3 + 0x46c) * param_4 + *(float *)(iVar3 + 0x46c) * fVar2;
  *(float *)(param_1 + 0x470) =
       *(float *)(param_3 + 0x470) * param_4 + *(float *)(iVar3 + 0x470) * fVar2;
  *(float *)(param_1 + 0x474) =
       *(float *)(param_3 + 0x474) * param_4 + *(float *)(iVar3 + 0x474) * fVar2;
  *(float *)(param_1 + 0x478) =
       *(float *)(param_3 + 0x478) * param_4 + *(float *)(iVar3 + 0x478) * fVar2;
  *(float *)(param_1 + 0x47c) =
       *(float *)(param_3 + 0x47c) * param_4 + *(float *)(iVar3 + 0x47c) * fVar2;
  *(float *)(param_1 + 0x480) =
       *(float *)(param_3 + 0x480) * param_4 + *(float *)(iVar3 + 0x480) * fVar2;
  *(float *)(param_1 + 0x484) =
       *(float *)(param_3 + 0x484) * param_4 + *(float *)(iVar3 + 0x484) * fVar2;
  *(float *)(param_1 + 0x490) =
       *(float *)(param_3 + 0x490) * param_4 + *(float *)(iVar3 + 0x490) * fVar2;
  *(float *)(param_1 + 0x494) =
       *(float *)(param_3 + 0x494) * param_4 + *(float *)(iVar3 + 0x494) * fVar2;
  *(float *)(param_1 + 0x498) =
       *(float *)(param_3 + 0x498) * param_4 + *(float *)(iVar3 + 0x498) * fVar2;
  *(float *)(param_1 + 0x49c) =
       *(float *)(param_3 + 0x49c) * param_4 + *(float *)(iVar3 + 0x49c) * fVar2;
  *(float *)(param_1 + 0x4a0) =
       *(float *)(param_3 + 0x4a0) * param_4 + *(float *)(iVar3 + 0x4a0) * fVar2;
  *(float *)(param_1 + 0x4a4) =
       *(float *)(param_3 + 0x4a4) * param_4 + *(float *)(iVar3 + 0x4a4) * fVar2;
  *(float *)(param_1 + 0x4a8) =
       *(float *)(param_3 + 0x4a8) * param_4 + *(float *)(iVar3 + 0x4a8) * fVar2;
  *(float *)(param_1 + 0x4ac) =
       *(float *)(param_3 + 0x4ac) * param_4 + *(float *)(iVar3 + 0x4ac) * fVar2;
  *(float *)(param_1 + 0x4b0) =
       *(float *)(param_3 + 0x4b0) * param_4 + *(float *)(iVar3 + 0x4b0) * fVar2;
  *(float *)(param_1 + 0x4b4) =
       *(float *)(param_3 + 0x4b4) * param_4 + *(float *)(iVar3 + 0x4b4) * fVar2;
  *(float *)(param_1 + 0x4b8) =
       *(float *)(param_3 + 0x4b8) * param_4 + *(float *)(iVar3 + 0x4b8) * fVar2;
  *(float *)(param_1 + 0x4bc) =
       *(float *)(param_3 + 0x4bc) * param_4 + *(float *)(iVar3 + 0x4bc) * fVar2;
  *(float *)(param_1 + 0x4c0) =
       *(float *)(param_3 + 0x4c0) * param_4 + *(float *)(iVar3 + 0x4c0) * fVar2;
  *(float *)(param_1 + 0x4c4) =
       *(float *)(param_3 + 0x4c4) * param_4 + *(float *)(iVar3 + 0x4c4) * fVar2;
  *(float *)(param_1 + 0x4d0) =
       *(float *)(param_3 + 0x4d0) * param_4 + *(float *)(iVar3 + 0x4d0) * fVar2;
  *(float *)(param_1 + 0x4d4) =
       *(float *)(param_3 + 0x4d4) * param_4 + *(float *)(iVar3 + 0x4d4) * fVar2;
  *(float *)(param_1 + 0x4d8) =
       *(float *)(param_3 + 0x4d8) * param_4 + *(float *)(iVar3 + 0x4d8) * fVar2;
  *(float *)(param_1 + 0x4dc) =
       *(float *)(param_3 + 0x4dc) * param_4 + *(float *)(iVar3 + 0x4dc) * fVar2;
  *(float *)(param_1 + 0x4e0) =
       *(float *)(param_3 + 0x4e0) * param_4 + *(float *)(iVar3 + 0x4e0) * fVar2;
  *(float *)(param_1 + 0x4e4) =
       *(float *)(param_3 + 0x4e4) * param_4 + *(float *)(iVar3 + 0x4e4) * fVar2;
  *(float *)(param_1 + 0x4f0) =
       *(float *)(param_3 + 0x4f0) * param_4 + *(float *)(iVar3 + 0x4f0) * fVar2;
  *(float *)(param_1 + 0x4f4) =
       *(float *)(param_3 + 0x4f4) * param_4 + *(float *)(iVar3 + 0x4f4) * fVar2;
  *(float *)(param_1 + 0x4f8) =
       *(float *)(param_3 + 0x4f8) * param_4 + *(float *)(iVar3 + 0x4f8) * fVar2;
  *(float *)(param_1 + 0x4fc) =
       *(float *)(param_3 + 0x4fc) * param_4 + *(float *)(iVar3 + 0x4fc) * fVar2;
  *(float *)(param_1 + 0x500) =
       *(float *)(param_3 + 0x500) * param_4 + *(float *)(iVar3 + 0x500) * fVar2;
  *(float *)(param_1 + 0x504) =
       *(float *)(param_3 + 0x504) * param_4 + *(float *)(iVar3 + 0x504) * fVar2;
  *(float *)(param_1 + 0x510) =
       *(float *)(param_3 + 0x510) * param_4 + *(float *)(iVar3 + 0x510) * fVar2;
  *(float *)(param_1 + 0x514) =
       *(float *)(param_3 + 0x514) * param_4 + *(float *)(iVar3 + 0x514) * fVar2;
  *(float *)(param_1 + 0x518) =
       *(float *)(param_3 + 0x518) * param_4 + *(float *)(iVar3 + 0x518) * fVar2;
  *(float *)(param_1 + 0x51c) =
       *(float *)(param_3 + 0x51c) * param_4 + *(float *)(iVar3 + 0x51c) * fVar2;
  *(float *)(param_1 + 0x520) =
       *(float *)(param_3 + 0x520) * param_4 + *(float *)(iVar3 + 0x520) * fVar2;
  *(float *)(param_1 + 0x524) =
       *(float *)(param_3 + 0x524) * param_4 + *(float *)(iVar3 + 0x524) * fVar2;
  *(float *)(param_1 + 0x530) =
       *(float *)(param_3 + 0x530) * param_4 + *(float *)(iVar3 + 0x530) * fVar2;
  *(float *)(param_1 + 0x534) =
       *(float *)(param_3 + 0x534) * param_4 + *(float *)(iVar3 + 0x534) * fVar2;
  *(float *)(param_1 + 0x538) =
       *(float *)(param_3 + 0x538) * param_4 + *(float *)(iVar3 + 0x538) * fVar2;
  *(float *)(param_1 + 0x53c) =
       fVar2 * *(float *)(iVar3 + 0x53c) + *(float *)(param_3 + 0x53c) * param_4;
  return;
}

// 00EAC200  FUN_00eac200  size=1130  [run]
void __thiscall FUN_00eac200(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  byte *pbVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 *puVar8;
  uint local_8;
  byte local_4;
  
  fVar3 = param_4;
  fVar2 = 1.0 - param_4;
  if (*(int *)(param_2 + 0x10) != *(int *)(param_3 + 0x10)) {
    FUN_00dd5650(&DAT_016d301c);
  }
  local_8 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    pbVar5 = (byte *)(param_3 + 0x14);
    puVar8 = (undefined1 *)(param_1 + 0x15);
    do {
      local_4 = (byte)(int)ROUND((float)*pbVar5 * param_4 + (float)pbVar5[param_2 - param_3] * fVar2
                                );
      (pbVar5 + 2)[(param_1 - param_3) + -2] = local_4;
      local_4 = (byte)(int)ROUND((float)pbVar5[1] * param_4 +
                                 (float)(byte)(puVar8 + 2)[(param_2 - param_1) + -2] * fVar2);
      *puVar8 = local_4;
      local_8 = local_8 + 1;
      pbVar5 = pbVar5 + 2;
      puVar8 = puVar8 + 2;
    } while (local_8 < *(uint *)(param_2 + 0x10));
  }
  *(float *)(param_1 + 0x30) =
       *(float *)(param_3 + 0x30) * param_4 + *(float *)(param_2 + 0x30) * fVar2;
  *(float *)(param_1 + 0x34) =
       *(float *)(param_3 + 0x34) * param_4 + *(float *)(param_2 + 0x34) * fVar2;
  *(float *)(param_1 + 0x38) =
       *(float *)(param_3 + 0x38) * param_4 + *(float *)(param_2 + 0x38) * fVar2;
  *(float *)(param_1 + 0x3c) =
       *(float *)(param_3 + 0x3c) * param_4 + *(float *)(param_2 + 0x3c) * fVar2;
  *(float *)(param_1 + 0x40) =
       *(float *)(param_3 + 0x40) * param_4 + *(float *)(param_2 + 0x40) * fVar2;
  *(float *)(param_1 + 0x44) =
       *(float *)(param_3 + 0x44) * param_4 + *(float *)(param_2 + 0x44) * fVar2;
  *(float *)(param_1 + 0x48) =
       *(float *)(param_3 + 0x48) * param_4 + *(float *)(param_2 + 0x48) * fVar2;
  *(float *)(param_1 + 0x4c) =
       *(float *)(param_3 + 0x4c) * param_4 + *(float *)(param_2 + 0x4c) * fVar2;
  *(float *)(param_1 + 0x50) =
       *(float *)(param_3 + 0x50) * param_4 + *(float *)(param_2 + 0x50) * fVar2;
  *(float *)(param_1 + 0x54) =
       *(float *)(param_3 + 0x54) * param_4 + *(float *)(param_2 + 0x54) * fVar2;
  *(float *)(param_1 + 0x58) =
       *(float *)(param_3 + 0x58) * param_4 + *(float *)(param_2 + 0x58) * fVar2;
  *(float *)(param_1 + 0x5c) =
       *(float *)(param_3 + 0x5c) * param_4 + *(float *)(param_2 + 0x5c) * fVar2;
  *(float *)(param_1 + 0x60) =
       *(float *)(param_3 + 0x60) * param_4 + *(float *)(param_2 + 0x60) * fVar2;
  *(float *)(param_1 + 100) =
       *(float *)(param_3 + 100) * param_4 + *(float *)(param_2 + 100) * fVar2;
  fVar1 = *(float *)(param_3 + 0x68) * param_4;
  param_4 = 2.24208e-44;
  *(float *)(param_1 + 0x68) = fVar1 + *(float *)(param_2 + 0x68) * fVar2;
  *(float *)(param_1 + 0x6c) =
       *(float *)(param_3 + 0x6c) * fVar3 + *(float *)(param_2 + 0x6c) * fVar2;
  *(float *)(param_1 + 0x70) =
       *(float *)(param_3 + 0x70) * fVar3 + *(float *)(param_2 + 0x70) * fVar2;
  *(float *)(param_1 + 0x74) =
       *(float *)(param_3 + 0x74) * fVar3 + *(float *)(param_2 + 0x74) * fVar2;
  *(float *)(param_1 + 0x78) =
       *(float *)(param_3 + 0x78) * fVar3 + *(float *)(param_2 + 0x78) * fVar2;
  *(float *)(param_1 + 0x7c) =
       *(float *)(param_3 + 0x7c) * fVar3 + *(float *)(param_2 + 0x7c) * fVar2;
  *(float *)(param_1 + 0x90) =
       *(float *)(param_3 + 0x90) * fVar3 + *(float *)(param_2 + 0x90) * fVar2;
  *(float *)(param_1 + 0x94) =
       *(float *)(param_3 + 0x94) * fVar3 + *(float *)(param_2 + 0x94) * fVar2;
  *(float *)(param_1 + 0x98) =
       *(float *)(param_3 + 0x98) * fVar3 + *(float *)(param_2 + 0x98) * fVar2;
  *(float *)(param_1 + 0x9c) =
       *(float *)(param_3 + 0x9c) * fVar3 + *(float *)(param_2 + 0x9c) * fVar2;
  pfVar4 = (float *)(param_3 + 0xa0);
  pfVar6 = (float *)(param_1 + 0xa4);
  pfVar7 = (float *)(param_2 + 0xac);
  do {
    param_4 = (float)((int)param_4 + -1);
    *(float *)((int)pfVar4 + (param_1 - param_3)) =
         *pfVar4 * fVar3 + *(float *)((int)pfVar4 + (param_2 - param_3)) * fVar2;
    *pfVar6 = pfVar4[1] * fVar3 + *(float *)((int)pfVar6 + (param_2 - param_1)) * fVar2;
    pfVar6[1] = pfVar7[-1] * fVar2 + pfVar4[2] * fVar3;
    pfVar6[2] = *pfVar7 * fVar2 + pfVar4[3] * fVar3;
    pfVar6[3] = pfVar7[1] * fVar2 + pfVar4[4] * fVar3;
    pfVar6[4] = pfVar7[2] * fVar2 + pfVar4[5] * fVar3;
    pfVar6[7] = pfVar7[5] * fVar2 + pfVar4[8] * fVar3;
    pfVar6[8] = pfVar7[6] * fVar2 + pfVar4[9] * fVar3;
    pfVar6[9] = pfVar7[7] * fVar2 + pfVar4[10] * fVar3;
    pfVar6[10] = pfVar7[8] * fVar2 + pfVar4[0xb] * fVar3;
    pfVar4 = pfVar4 + 0x20;
    pfVar6 = pfVar6 + 0x20;
    pfVar7 = pfVar7 + 0x20;
  } while (param_4 != 0.0);
  *(float *)(param_1 + 0x8a0) =
       *(float *)(param_3 + 0x8a0) * fVar3 + *(float *)(param_2 + 0x8a0) * fVar2;
  *(float *)(param_1 + 0x8a4) =
       *(float *)(param_3 + 0x8a4) * fVar3 + *(float *)(param_2 + 0x8a4) * fVar2;
  *(float *)(param_1 + 0x8a8) =
       *(float *)(param_3 + 0x8a8) * fVar3 + *(float *)(param_2 + 0x8a8) * fVar2;
  *(float *)(param_1 + 0x8ac) =
       *(float *)(param_3 + 0x8ac) * fVar3 + *(float *)(param_2 + 0x8ac) * fVar2;
  *(float *)(param_1 + 0x8b0) =
       *(float *)(param_3 + 0x8b0) * fVar3 + *(float *)(param_2 + 0x8b0) * fVar2;
  *(float *)(param_1 + 0x8b4) =
       *(float *)(param_3 + 0x8b4) * fVar3 + *(float *)(param_2 + 0x8b4) * fVar2;
  *(float *)(param_1 + 0x8b8) =
       *(float *)(param_3 + 0x8b8) * fVar3 + *(float *)(param_2 + 0x8b8) * fVar2;
  *(float *)(param_1 + 0x8bc) =
       *(float *)(param_3 + 0x8bc) * fVar3 + *(float *)(param_2 + 0x8bc) * fVar2;
  *(float *)(param_1 + 0x8c0) =
       fVar2 * *(float *)(param_2 + 0x8c0) + *(float *)(param_3 + 0x8c0) * fVar3;
  return;
}

// 00EAC880  FUN_00eac880  size=341  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00eac880(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  float local_10;
  int local_c [2];
  int local_4;
  
  local_c[0] = 0;
  local_c[1] = 0;
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
  FUN_00f974a0(local_c,local_c + 1);
  uVar2 = 0;
  puVar1 = (undefined1 *)(local_c[0] + 2);
  do {
    local_10 = *(float *)(param_2 + uVar2 * 4);
    if (local_10 <= 1.0) {
      if (local_10 < 0.0) {
        local_10 = 0.0;
      }
    }
    else {
      local_10 = 1.0;
    }
    uVar2 = uVar2 + 1;
    local_4._0_1_ = (undefined1)(int)ROUND(local_10 * 255.0);
    puVar1[-2] = (undefined1)local_4;
    local_4._0_1_ = (undefined1)(int)ROUND(local_10 * 255.0);
    puVar1[-1] = (undefined1)local_4;
    local_4 = (int)ROUND(local_10 * 255.0);
    *puVar1 = (undefined1)local_4;
    puVar1[1] = 0xff;
    puVar1 = puVar1 + 4;
  } while (uVar2 < 0x100);
  cLockableTexture::unlock();
  return;
}

