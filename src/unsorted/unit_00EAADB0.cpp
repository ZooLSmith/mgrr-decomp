// src/unsorted/unit_00EAADB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAADB0..00EAF7D0, 52 functions

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

// 00EAC9E0  FUN_00eac9e0  size=336  [run]
void __thiscall FUN_00eac9e0(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 auStack_40c [4];
  float local_408 [257];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_40c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x74) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0x3c0;
  uVar4 = 0;
  do {
    fVar1 = (float)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uVar4 = uVar4 + 1;
    local_408[uVar4] = fVar1 / 255.0;
  } while (uVar4 < 0x100);
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) != 0);
  local_408[0]._0_1_ = (undefined1)(int)ROUND(*(float *)(param_1 + 0x10) * 255.0);
  uVar3 = local_408[0]._0_1_;
  local_408[0]._0_1_ = (undefined1)(int)ROUND(*(float *)(param_1 + 0x14) * 255.0);
  uVar2 = CONCAT11(uVar3,local_408[0]._0_1_);
  local_408[0] = (float)(int)ROUND(*(float *)(param_1 + 0x18) * 255.0);
  FUN_00a28140((uint)CONCAT21(uVar2,local_408[0]._0_1_));
  __security_check_cookie(local_4 ^ (uint)auStack_40c);
  return;
}

// 00EACB30  FUN_00eacb30  size=1  [run]
void FUN_00eacb30(void)

{
  return;
}

// 00EACB40  FUN_00eacb40  size=1  [run]
void FUN_00eacb40(void)

{
  return;
}

// 00EACB50  FUN_00eacb50  size=14  [run]
void __fastcall FUN_00eacb50(undefined4 param_1)

{
  FUN_00932780(param_1,0x5d,0);
  return;
}

// 00EACDF0  FUN_00eacdf0  size=1  [run]
void FUN_00eacdf0(void)

{
  return;
}

// 00EACE00  FUN_00eace00  size=99  [run]
void __thiscall FUN_00eace00(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (param_2 - *(float *)(param_1 + 0x4438)) * *(float *)(param_1 + 0x2e78) +
          *(float *)(param_1 + 0x4438);
  *(float *)(param_1 + 0x4438) = fVar1;
  if (fVar1 < *(float *)(param_1 + 0x2e6c)) {
    *(undefined4 *)(param_1 + 0x4438) = *(undefined4 *)(param_1 + 0x2e6c);
  }
  if (*(float *)(param_1 + 0x2e70) < *(float *)(param_1 + 0x4438)) {
    *(undefined4 *)(param_1 + 0x4438) = *(undefined4 *)(param_1 + 0x2e70);
  }
  return;
}

// 00EACE90  FUN_00eace90  size=29  [run]
void __fastcall FUN_00eace90(int param_1)

{
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x60) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x4494) = 1;
  return;
}

// 00EACEB0  FUN_00eaceb0  size=74  [run]
void __fastcall FUN_00eaceb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5a8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  iVar2 = 0x10;
  puVar1 = (undefined4 *)(param_1 + 0x488);
  do {
    puVar1[-2] = 0x3f800000;
    iVar2 = iVar2 + -1;
    puVar1[-1] = 0x3f800000;
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x5a8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  return;
}

// 00EACF00  FUN_00eacf00  size=94  [run]
void __thiscall FUN_00eacf00(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  
  if (*(int *)(param_1 + 0x5a8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  iVar1 = (param_2 + 0x48) * 0x10;
  pfVar2 = (float *)(iVar1 + param_1);
  *pfVar2 = *(float *)(iVar1 + param_1) * *param_3;
  pfVar2[1] = param_3[1] * pfVar2[1];
  pfVar2[2] = param_3[2] * pfVar2[2];
  pfVar2[3] = param_3[3] * pfVar2[3];
  if (*(int *)(param_1 + 0x5a8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  return;
}

// 00EACF60  FUN_00eacf60  size=68  [run]
void __fastcall FUN_00eacf60(int param_1)

{
  if (*(int *)(param_1 + 0x5a8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  *(undefined4 *)(param_1 + 0x580) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x584) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x588) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58c) = 0x3f800000;
  if (*(int *)(param_1 + 0x5a8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  return;
}

// 00EACFB0  FUN_00eacfb0  size=83  [run]
void __thiscall FUN_00eacfb0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x5a8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  *(undefined4 *)(param_1 + 0x580) = *param_2;
  *(undefined4 *)(param_1 + 0x584) = param_2[1];
  *(undefined4 *)(param_1 + 0x588) = param_2[2];
  *(undefined4 *)(param_1 + 0x58c) = param_2[3];
  if (*(int *)(param_1 + 0x5a8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  return;
}

// 00EAD840  FUN_00ead840  size=39  [run]
undefined4 __thiscall FUN_00ead840(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  return 1;
}

// 00EAD8E0  FUN_00ead8e0  size=20  [run]
void __thiscall FUN_00ead8e0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00EAD990  FUN_00ead990  size=31  [run]
void __fastcall FUN_00ead990(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00EADA30  FUN_00eada30  size=31  [run]
void __fastcall FUN_00eada30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  return;
}

// 00EADA50  FUN_00eada50  size=31  [run]
void __fastcall FUN_00eada50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00EADAF0  FUN_00eadaf0  size=34  [run]
void __fastcall FUN_00eadaf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x88,uVar1);
  return;
}

// 00EADC90  FUN_00eadc90  size=90  [run]
bool __fastcall FUN_00eadc90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00a281f0("FilterShaderZCullReload.pso");
  uVar2 = FUN_00a281f0("FilterShaderZCullReload.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      return iVar3 != 0;
    }
  }
  return false;
}

// 00EADF00  FUN_00eadf00  size=348  [run]
void FUN_00eadf00(int param_1,int param_2,undefined4 param_3,float param_4,float param_5,
                 float param_6,int param_7)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  undefined1 auStack_98 [4];
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined1 auStack_70 [32];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_40;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_98;
  local_84 = param_3;
  local_88 = param_5;
  local_a4 = 0xeadf35;
  local_90 = (float)FUN_00f98a70();
  local_8c = (float)(int)local_90;
  local_a4 = 0xeadf46;
  iVar1 = FUN_00f98a80();
  local_90 = (float)iVar1;
  local_ac = local_88 / local_8c;
  local_a8 = param_6 / local_90;
  local_a4 = 0x3f800000;
  iStack_b0 = param_2;
  uStack_b4 = 0xeadf87;
  local_80 = local_ac;
  local_7c = local_a8;
  D3DXMatrixScaling();
  local_90 = fStack_94 / unaff_ESI;
  puStack_c0 = auStack_70;
  local_8c = param_4 / unaff_EDI;
  *(float *)(param_2 + 0x30) = local_90;
  *(float *)(param_2 + 0x34) = local_8c;
  *(undefined4 *)(param_2 + 0x38) = 0;
  uStack_b4 = 0;
  uStack_b8 = 0xbf800000;
  uStack_bc = 0x3f800000;
  iStack_c4 = 0xeadfd1;
  D3DXMatrixScaling();
  uStack_50 = 0x3f800000;
  iStack_c4 = param_2;
  uStack_4c = 0;
  uStack_48 = 0;
  D3DXMatrixMultiply(param_2,&local_80);
  FUN_00ddcbb0(param_1,0,0x3f800000,0x3f800000,0,0,0x3f800000);
  if (param_7 != 0) {
    FUN_00f98d70(&local_ac);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - 1.0 / (float)local_a4;
    *(float *)(param_1 + 0x34) = 1.0 / (float)(int)unaff_EDI + *(float *)(param_1 + 0x34);
  }
  __security_check_cookie(uStack_40 ^ (uint)&iStack_c4);
  return;
}

// 00EAE060  FUN_00eae060  size=1000  [run]
void FUN_00eae060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_stack_00000030;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 auStack_c4 [8];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_c4;
  local_bc = param_2;
  if (DAT_01edab78 == 0) goto LAB_00eae242;
  local_a4 = DAT_018da674;
  local_a8 = DAT_018da65c;
  local_b8 = DAT_018da670;
  local_b0 = DAT_018da678;
  if (in_stack_00000030 == 0) {
    FUN_00f9d8f0(0);
  }
  else if (in_stack_00000030 == 1) {
    FUN_00f9d8f0(1);
    FUN_00f9d970(5,6,1);
  }
  else if (in_stack_00000030 == 2) {
    FUN_00f9d8f0(1);
    FUN_00f9d970(5,2,1);
  }
  uVar1 = DAT_018da63c;
  FUN_00f9d6e0(1);
  uVar2 = DAT_018da644;
  FUN_00f9d760(0);
  local_b4 = DAT_018da648;
  FUN_00f9d7a0(0);
  local_ac = DAT_018da688;
  FUN_00f9db30(1);
  FUN_00eadf00(local_a0,local_60,param_3,param_4,param_5,param_6,1);
  if (param_7 == 0) {
    FUN_00f9ea50(&DAT_01edc838,local_bc,4);
    FUN_00f9ee50(&DAT_01edc820,local_a0);
    FUN_00f9ee50(&DAT_01edc82c,local_60);
    uVar3 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edc844,uVar3);
    puVar4 = &DAT_01edc7f8;
LAB_00eae1cd:
    FUN_00f990e0(puVar4);
LAB_00eae1d5:
    ppuVar5 = &PTR_vftable_018da4d8;
  }
  else {
    if (param_7 == 1) {
      FUN_00f9ea50(&DAT_01edc890,local_bc,4);
      FUN_00f9ee50(&DAT_01edc878,local_a0);
      FUN_00f9ee50(&DAT_01edc884,local_60);
      uVar3 = FUN_00fa0740(0);
      FUN_00fa1d50(&DAT_01edc89c,uVar3);
      puVar4 = &DAT_01edc850;
      goto LAB_00eae1cd;
    }
    if (param_7 != 2) {
      if (param_7 == 3) {
        FUN_00f9ea50(&DAT_01edca38,local_bc,4);
        FUN_00f9ee50(&DAT_01edca20,local_a0);
        FUN_00f9ee50(&DAT_01edca2c,local_60);
        uVar3 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edca5c,uVar3);
        puVar4 = &DAT_01edc9f8;
        goto LAB_00eae1cd;
      }
      if (param_7 == 4) {
        FUN_00f9db30(0);
        FUN_00f9ea50(&DAT_01edcaa8,local_bc,4);
        FUN_00f9ea50(&DAT_01edcab4,&stack0x00000020,4);
        FUN_00f9ee50(&DAT_01edca90,local_a0);
        FUN_00f9ee50(&DAT_01edca9c,local_60);
        uVar3 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcac0,uVar3);
        puVar4 = &DAT_01edca68;
        goto LAB_00eae1cd;
      }
      if (param_7 == 5) {
        FUN_00f9db30(0);
        FUN_00f9ea50(&DAT_01edcb28,local_bc,4);
        FUN_00f9ea50(&DAT_01edcb34,&stack0x00000020,4);
        FUN_00f9ee50(&DAT_01edcb10,local_a0);
        FUN_00f9ee50(&DAT_01edcb1c,local_60);
        uVar3 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcb40,uVar3);
        puVar4 = &DAT_01edcae8;
        goto LAB_00eae1cd;
      }
      FUN_00dd5650(&DAT_016d3edc);
      goto LAB_00eae1d5;
    }
    FUN_00f9ee50(&DAT_01edc924,local_a0);
    FUN_00f9ee50(&DAT_01edc930,local_60);
    uVar3 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edc93c,uVar3);
    FUN_00f990e0(&DAT_01edc8a8);
    ppuVar5 = &PTR_vftable_018da4c0;
  }
  FUN_00f98f80(ppuVar5);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f9dfb0(5);
  FUN_00f9d8f0(local_a8);
  FUN_00f9d970(local_b8,local_a4,local_b0);
  FUN_00f9d6e0(uVar1);
  FUN_00f9d760(uVar2);
  FUN_00f9d7a0(local_b4);
  FUN_00f9da50(local_ac);
LAB_00eae242:
  __security_check_cookie(local_14 ^ (uint)auStack_c4);
  return;
}

// 00EAE450  FUN_00eae450  size=421  [run]
void FUN_00eae450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c4 [8];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  uVar3 = DAT_018da674;
  uVar2 = DAT_018da670;
  uVar1 = DAT_018da65c;
  local_14 = DAT_018e8764 ^ (uint)auStack_c4;
  local_a8 = param_1;
  local_b8 = param_2;
  if (DAT_01edab78 != 0) {
    local_b0 = DAT_018da678;
    FUN_00f9d8f0(0);
    local_a4 = DAT_018da63c;
    FUN_00f9d6e0(1);
    local_bc = DAT_018da644;
    FUN_00f9d760(0);
    local_b4 = DAT_018da648;
    FUN_00f9d7a0(0);
    local_ac = DAT_018da688;
    FUN_00f9db30(1);
    FUN_00eadf00(local_a0,local_60,param_5,param_6,param_7,param_8,1);
    FUN_00f9ea50(&DAT_01edca38,local_b8,4);
    FUN_00f9ee50(&DAT_01edca20,local_a0);
    FUN_00f9ee50(&DAT_01edca2c,local_60);
    uVar4 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edca5c,uVar4);
    FUN_00f990e0(&DAT_01edc9f8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(uVar1);
    FUN_00f9d970(uVar2,uVar3,local_b0);
    FUN_00f9d6e0(local_a4);
    FUN_00f9d760(local_bc);
    FUN_00f9d7a0(local_b4);
    FUN_00f9da50(local_ac);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_c4);
  return;
}

// 00EAE600  FUN_00eae600  size=129  [run]
void FUN_00eae600(void)

{
  DAT_01edab74 = DAT_018da65c;
  DAT_01edab70 = DAT_018da670;
  DAT_01edab6c = DAT_018da674;
  DAT_01edab68 = DAT_018da678;
  FUN_00f9d8f0(0);
  DAT_01edab60 = DAT_018da63c;
  FUN_00f9d6e0(1);
  DAT_01edab5c = DAT_018da644;
  FUN_00f9d760(0);
  DAT_01edab58 = DAT_018da648;
  FUN_00f9d7a0(0);
  DAT_01edab64 = DAT_018da688;
  FUN_00f9db30(1);
  return;
}

// 00EAE690  FUN_00eae690  size=87  [run]
void FUN_00eae690(void)

{
  FUN_00f9d8f0(DAT_01edab74);
  FUN_00f9d970(DAT_01edab70,DAT_01edab6c,DAT_01edab68);
  FUN_00f9d6e0(DAT_01edab60);
  FUN_00f9d760(DAT_01edab5c);
  FUN_00f9d7a0(DAT_01edab58);
  FUN_00f9da50(DAT_01edab64);
  return;
}

// 00EAE710  FUN_00eae710  size=263  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eae710(void)

{
  byte *local_c;
  undefined4 local_8;
  float local_4;
  
  if (DAT_01edab78 != 0) {
    if ((_DAT_01bea080 & 0x2000) == 0) {
      local_c = (byte *)0x0;
      local_8 = 0;
      FUN_00f97440(&local_c,&local_8);
      if (local_c != (byte *)0x0) {
        local_4 = ((float)*local_c * 0.114478 +
                  (float)local_c[2] * 0.298912 + (float)local_c[1] * 0.586611) * _DAT_018d5df4;
        FUN_00eace00(local_4);
        cLockableTexture::unlock();
      }
      if ((_DAT_01bea080 & 0x2000) == 0) {
        DAT_01edd5f0 = 1;
        return;
      }
    }
    if (DAT_01edd5f0 != 0) {
      DAT_01edd5f0 = 0;
    }
  }
  return;
}

// 00EAE820  FUN_00eae820  size=643  [run]
void FUN_00eae820(void)

{
  int iVar1;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_5c;
  DAT_01edab78 = 1;
  FUN_00f9cb30(0x200,&DAT_01b7bcf0);
  FUN_00f99db0();
  local_58 = (float)FUN_00f98a90();
  local_5c = (float)(int)local_58;
  iVar1 = FUN_00f98aa0();
  local_38 = (float)iVar1;
  local_58 = 0.5 / local_38;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xbf800000;
  local_40 = 0xbf800000;
  local_34 = 0xbf800000;
  local_28 = 0xbf800000;
  local_48 = local_5c;
  local_30 = local_5c;
  local_44 = 0;
  local_3c = 0;
  local_5c = 0.5 / local_5c;
  local_2c = local_38;
  FUN_00f9cae0(0xc,4,&DAT_01edcacc);
  FUN_00f99d50(&local_54,0xc,4);
  local_24 = local_5c + 0.0;
  local_20 = local_58 + 0.0;
  local_10 = local_58 + 1.0;
  local_5c = local_5c + 1.0;
  local_1c = local_5c;
  local_18 = local_20;
  local_14 = local_24;
  local_c = local_5c;
  local_8 = local_10;
  FUN_00f9cae0(8,4,&DAT_01edcacc);
  FUN_00f99d50(&local_24,8,4);
  local_54 = 0xbf800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0.0;
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_30 = 0.0;
  local_28 = 0;
  local_3c = 0xbf800000;
  local_38 = -1.0;
  local_2c = -1.0;
  FUN_00f9cae0(0xc,4,&DAT_01edcacc);
  FUN_00f99d50(&local_54,0xc,4);
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 1.0;
  local_10 = 1.0;
  local_c = 1.0;
  local_8 = 1.0;
  local_18 = 0.0;
  local_14 = 0.0;
  FUN_00f9cae0(8,4,&DAT_01edcacc);
  FUN_00f99d50(&local_24,8,4);
  local_54 = 0xbf800000;
  local_50 = 0xbf800000;
  local_4c = 0;
  local_48 = -1.0;
  local_44 = 0x3f800000;
  local_3c = 0x3f800000;
  local_30 = 1.0;
  local_2c = 1.0;
  local_40 = 0;
  local_34 = 0;
  local_28 = 0;
  local_38 = -1.0;
  FUN_00f9cae0(0xc,4,&DAT_01edcacc);
  FUN_00f99d50(&local_54,0xc,4);
  FUN_00f99df0();
  __security_check_cookie(local_4 ^ (uint)&local_5c);
  return;
}

// 00EAEB00  FUN_00eaeb00  size=63  [run]
void __fastcall FUN_00eaeb00(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_14;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 2;
  return;
}

// 00EAEB50  FUN_00eaeb50  size=1360  [run]
void __fastcall FUN_00eaeb50(float *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 auStack_124 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
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
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_124;
  iVar1 = FUN_00c12740(0);
  iVar2 = FUN_00c12740(4);
  local_d0 = *(float *)(iVar1 + 0x1b0) - *param_1;
  local_cc = *(float *)(iVar1 + 0x1b4) - param_1[1];
  local_c8 = *(float *)(iVar1 + 0x1b8) - param_1[2];
  local_c4 = *(float *)(iVar1 + 0x1bc) - param_1[3];
  local_f0 = *(float *)(iVar1 + 0x1c0) - *param_1;
  local_ec = *(float *)(iVar1 + 0x1c4) - param_1[1];
  local_e8 = *(float *)(iVar1 + 0x1c8) - param_1[2];
  local_e4 = *(float *)(iVar1 + 0x1cc) - param_1[3];
  local_e0 = *(float *)(iVar1 + 0x1d0);
  local_dc = *(float *)(iVar1 + 0x1d4);
  local_d8 = *(float *)(iVar1 + 0x1d8);
  local_d4 = *(float *)(iVar1 + 0x1dc);
  local_b8 = local_c8 * param_1[6] + param_1[4] * local_d0 + local_cc * param_1[5];
  local_bc = local_e8 * param_1[6] + param_1[4] * local_f0 + local_ec * param_1[5];
  local_b4 = local_d8 * param_1[6] + param_1[4] * local_e0 + local_dc * param_1[5];
  local_b0 = local_bc * param_1[4];
  local_ac = param_1[5] * local_bc;
  local_a8 = param_1[6] * local_bc;
  local_100 = local_b0 * 2.0;
  local_fc = local_ac * 2.0;
  local_f8 = local_a8 * 2.0;
  local_120 = local_100 - local_b0;
  local_11c = local_fc - local_ac;
  local_118 = local_f8 - local_a8;
  local_104 = local_118 * local_118 + local_11c * local_11c + local_120 * local_120;
  fVar3 = (float10)FUN_00fdef70();
  local_104 = (float)fVar3;
  *(float *)(iVar2 + 0x98) = local_104 + *(float *)(iVar1 + 0x98);
  local_d0 = local_b8 * param_1[4] * -2.0 + *param_1 + local_d0;
  local_cc = param_1[5] * local_b8 * -2.0 + param_1[1] + local_cc;
  local_c8 = param_1[6] * local_b8 * -2.0 + param_1[2] + local_c8;
  local_c4 = local_b8 * param_1[7] * -2.0 + param_1[3] + local_c4;
  local_f0 = local_bc * param_1[4] * -2.0 + *param_1 + local_f0;
  local_ec = param_1[5] * local_bc * -2.0 + param_1[1] + local_ec;
  local_e8 = param_1[6] * local_bc * -2.0 + param_1[2] + local_e8;
  local_e4 = local_bc * param_1[7] * -2.0 + param_1[3] + local_e4;
  local_120 = local_b4 * param_1[4];
  local_11c = param_1[5] * local_b4;
  local_118 = param_1[6] * local_b4;
  local_114 = local_b4 * param_1[7];
  local_100 = local_120 * -2.0;
  local_fc = local_11c * -2.0;
  local_f8 = local_118 * -2.0;
  local_f4 = local_114 * -2.0;
  local_e0 = local_100 + local_e0;
  local_dc = local_fc + local_dc;
  local_d8 = local_f8 + local_d8;
  local_d4 = local_f4 + local_d4;
  FUN_00de5f20(&local_d0);
  FUN_00de5fc0(&local_f0);
  FUN_00de6060(&local_e0);
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar1 + 0x94);
  thunk_FUN_00de01a0(local_60,iVar2 + 0x1b0,iVar2 + 0x1c0,iVar2 + 0x1d0);
  local_68 = 0;
  local_6c = 0;
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
  local_64 = 0x3f800000;
  local_78 = 0x3f800000;
  local_8c = 0x3f800000;
  local_a0 = 0xbf800000;
  D3DXMatrixMultiply(local_60,local_60,&local_a0);
  FUN_00de5180(&local_6c);
  FUN_00de5aa0();
  FUN_00de5170();
  FUN_00da38d0();
  FUN_00da3830(*(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x98),
               *(undefined4 *)(iVar2 + 0x9c),iVar2 + 0x1b0,iVar2 + 0x1c0,iVar2 + 0x1d0);
  __security_check_cookie(uStack_20 ^ (uint)&stack0xfffffed0);
  return;
}

// 00EAF160  FUN_00eaf160  size=503  [run]
uint __fastcall
FUN_00eaf160(undefined4 param_1,float *param_2,float *param_3,uint param_4,float *param_5,
            float param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  float fVar12;
  bool bVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  uint local_38;
  float local_30;
  
  pfVar17 = param_3 + 2;
  local_30 = param_6 + *pfVar17 * param_5[2] + *param_3 * *param_5 + param_3[1] * param_5[1];
  bVar11 = 0.0 < local_30;
  if (bVar11) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = *pfVar17;
    param_2[3] = param_3[3];
  }
  local_38 = (uint)bVar11;
  uVar15 = 0;
  if (param_4 != 0) {
    param_2 = param_2 + (uint)bVar11 * 4;
    do {
      uVar15 = uVar15 + 1;
      uVar16 = uVar15 % param_4;
      pfVar1 = param_3 + uVar16 * 4;
      fVar12 = param_5[2] * pfVar1[2] + pfVar1[1] * param_5[1] + *param_5 * param_3[uVar16 * 4] +
               param_6;
      bVar13 = 0.0 < fVar12;
      pfVar18 = param_2;
      if (bVar13 != bVar11) {
        local_38 = local_38 + 1;
        pfVar18 = param_2 + 4;
        fVar14 = ABS(local_30) / (ABS(fVar12) + ABS(local_30));
        fVar2 = pfVar1[1];
        fVar3 = pfVar17[-1];
        fVar4 = pfVar17[-1];
        fVar5 = pfVar1[2];
        fVar6 = *pfVar17;
        fVar7 = *pfVar17;
        fVar8 = pfVar1[3];
        fVar9 = pfVar17[1];
        fVar10 = pfVar17[1];
        *param_2 = pfVar17[-2] + fVar14 * (*pfVar1 - pfVar17[-2]);
        param_2[1] = (fVar2 - fVar3) * fVar14 + fVar4;
        param_2[2] = (fVar5 - fVar6) * fVar14 + fVar7;
        param_2[3] = (fVar8 - fVar9) * fVar14 + fVar10;
      }
      param_2 = pfVar18;
      if ((bVar13) && (uVar16 != 0)) {
        local_38 = local_38 + 1;
        *pfVar18 = *pfVar1;
        param_2 = pfVar18 + 4;
        pfVar18[1] = pfVar1[1];
        pfVar18[2] = pfVar1[2];
        pfVar18[3] = pfVar1[3];
      }
      pfVar17 = pfVar17 + 4;
      local_30 = fVar12;
      bVar11 = bVar13;
    } while (uVar15 < param_4);
  }
  if (param_4 + 1 < local_38) {
    FUN_00dd5650(&DAT_016d3f38);
    return local_38;
  }
  return local_38;
}

// 00EAF360  FUN_00eaf360  size=140  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eaf360(void)

{
  DAT_01ddab50 = 0;
  DAT_01ddaa90 = 0;
  DAT_01ddaa98 = 0xffffffff;
  DAT_01ddaa9c = 0xffffffff;
  DAT_01ddaaa8 = 0;
  DAT_01ddaab0 = 0xffffffff;
  DAT_01ddaab4 = 0xffffffff;
  _DAT_01ddaac0 = 0;
  DAT_01ddaac8 = 0xffffffff;
  DAT_01ddaacc = 0xffffffff;
  _DAT_01ddaad8 = 0;
  DAT_01ddaae0 = 0xffffffff;
  DAT_01ddaae4 = 0xffffffff;
  _DAT_01ddaaf0 = 0;
  DAT_01ddaaf8 = 0xffffffff;
  DAT_01ddaafc = 0xffffffff;
  _DAT_01ddab08 = 0;
  DAT_01ddab10 = 0xffffffff;
  DAT_01ddab14 = 0xffffffff;
  _DAT_01ddab20 = 0;
  DAT_01ddab28 = 0xffffffff;
  DAT_01ddab2c = 0xffffffff;
  _DAT_01ddab38 = 0;
  DAT_01ddab40 = 0xffffffff;
  DAT_01ddab44 = 0xffffffff;
  return;
}

// 00EAF3F0  FUN_00eaf3f0  size=11  [run]
undefined4 FUN_00eaf3f0(void)

{
  FUN_00eaf360();
  return 1;
}

// 00EAF410  FUN_00eaf410  size=62  [run]
undefined4 FUN_00eaf410(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_01ddaa90;
  uVar2 = 0;
  do {
    if (*piVar1 == 0) {
      *piVar1 = param_1;
      piVar1[2] = param_2;
      piVar1[3] = param_3;
      piVar1[4] = param_4;
      return 1;
    }
    uVar2 = uVar2 + 0x18;
    piVar1 = piVar1 + 6;
  } while (uVar2 < 0xc0);
  return 0;
}

// 00EAF450  FUN_00eaf450  size=368  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eaf450(int param_1,int param_2)

{
  if ((param_2 < 0) || ((param_1 == DAT_01ddaa98 && (param_2 == DAT_01ddaa9c)))) {
    DAT_01ddaa90 = 0;
    DAT_01ddaa98 = -1;
    DAT_01ddaa9c = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaab0 && (param_2 == DAT_01ddaab4)))) {
    DAT_01ddaaa8 = 0;
    DAT_01ddaab0 = -1;
    DAT_01ddaab4 = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaac8 && (param_2 == DAT_01ddaacc)))) {
    _DAT_01ddaac0 = 0;
    DAT_01ddaac8 = -1;
    DAT_01ddaacc = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaae0 && (param_2 == DAT_01ddaae4)))) {
    _DAT_01ddaad8 = 0;
    DAT_01ddaae0 = -1;
    DAT_01ddaae4 = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddaaf8 && (param_2 == DAT_01ddaafc)))) {
    _DAT_01ddaaf0 = 0;
    DAT_01ddaaf8 = -1;
    DAT_01ddaafc = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddab10 && (param_2 == DAT_01ddab14)))) {
    _DAT_01ddab08 = 0;
    DAT_01ddab10 = -1;
    DAT_01ddab14 = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddab28 && (param_2 == DAT_01ddab2c)))) {
    _DAT_01ddab20 = 0;
    DAT_01ddab28 = -1;
    DAT_01ddab2c = -1;
  }
  if ((param_2 < 0) || ((param_1 == DAT_01ddab40 && (param_2 == DAT_01ddab44)))) {
    _DAT_01ddab38 = 0;
    DAT_01ddab40 = -1;
    DAT_01ddab44 = -1;
  }
  return;
}

// 00EAF5E0  FUN_00eaf5e0  size=76  [run]
undefined4 FUN_00eaf5e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fa6050(*param_1,param_1[1],param_1[2],&DAT_01b7bcf0,param_1[3]);
  if (iVar1 != 0) {
    iVar1 = FUN_00f97dd0();
    if (iVar1 != 0) {
      FUN_00f97df0(&DAT_01edd490);
      return 1;
    }
  }
  return 0;
}

// 00EAF630  FUN_00eaf630  size=10  [run]
void FUN_00eaf630(void)

{
  FUN_00f9d030();
  return;
}

// 00EAF660  FUN_00eaf660  size=20  [run]
void FUN_00eaf660(void)

{
  FUN_00f97de0();
  FUN_00fa4eb0();
  return;
}

// 00EAF6B0  FUN_00eaf6b0  size=10  [run]
void FUN_00eaf6b0(void)

{
  FUN_00fcdea0();
  return;
}

// 00EAF6C0  FUN_00eaf6c0  size=8  [run]
void __fastcall FUN_00eaf6c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00EAF6D0  FUN_00eaf6d0  size=17  [run]
void __fastcall FUN_00eaf6d0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00EAF700  FUN_00eaf700  size=95  [run]
void __fastcall FUN_00eaf700(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00de4500("pre_texture.wta");
  iVar2 = FUN_00de4500("pre_texture.wtp");
  if ((iVar1 == 0) || (iVar2 == 0)) {
    iVar1 = FUN_00de4500("pre_texture.wtb");
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00fa25d0(iVar1);
  }
  else {
    iVar1 = FUN_00fa4d00(iVar1,iVar2);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}

// 00EAF780  FUN_00eaf780  size=10  [run]
void FUN_00eaf780(void)

{
  FUN_00fcdc80();
  return;
}

// 00EAF7D0  FUN_00eaf7d0  size=3  [run]
undefined4 __fastcall FUN_00eaf7d0(undefined4 param_1)

{
  return param_1;
}

