// src/unsorted/unit_00BC7F10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BC7F10..00BC8A30, 5 functions

#include "types.h"

// 00BC7F10  FUN_00bc7f10  size=1448  [run]
/* WARNING: Removing unreachable block (ram,0x00bc8175) */
/* WARNING: Removing unreachable block (ram,0x00bc8347) */

void FUN_00bc7f10(undefined4 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
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
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar4 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar4);
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_20;
      pfVar1[1] = local_1c;
      pfVar1[2] = local_18;
    }
    local_8 = local_8 + 1;
  }
  local_50 = *param_3;
  local_4c = param_3[1];
  local_48 = param_3[2];
  local_44 = local_50 - local_20;
  local_28 = local_4c - local_1c;
  local_24 = local_48 - local_18;
  fVar3 = SQRT(local_24 * local_24 + local_44 * local_44 + local_28 * local_28);
  param_2 = (float *)(fVar3 * 0.33333334);
  if (2.0 < (float)param_2) {
    param_2 = (float *)0x40000000;
  }
  fVar3 = fVar3 * 0.16666667;
  local_5c = (local_20 + local_50) * 0.5;
  local_54 = (local_48 + local_18) * 0.5;
  if (local_4c <= local_1c) {
    local_58 = local_1c + (float)param_2;
  }
  else {
    if (local_4c + 5.0 < local_1c) {
      param_2 = (float *)((float)param_2 * 0.5);
    }
    local_58 = (float)param_2 + local_4c;
  }
  local_2c = local_44 * 0.16666667;
  local_28 = local_28 * 0.16666667;
  local_24 = local_24 * 0.16666667;
  local_38 = local_5c - local_2c;
  local_34 = local_58 - local_28;
  local_30 = local_54 - local_24;
  local_68 = local_38 - local_20;
  local_64 = local_34 - local_1c;
  local_60 = local_30 - local_18;
  local_40 = local_64;
  local_3c = local_60;
  if (((local_68 != 0.0) || (local_64 != 0.0)) || (local_60 != 0.0)) {
    fVar2 = local_60 * local_60 + local_68 * local_68 + local_64 * local_64;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_68 = 0.0;
      local_64 = 1.0;
      local_60 = 0.0;
    }
    D3DXVec3Normalize(&local_68,&local_68);
  }
  iVar5 = local_8;
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_68 * fVar3 + local_20;
      pfVar1[1] = local_64 * fVar3 + local_1c;
      pfVar1[2] = local_60 * fVar3 + local_18;
    }
    iVar5 = local_8 + 1;
    if (iVar5 < local_c) {
      pfVar1 = (float *)(local_10 + iVar5 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_38;
        pfVar1[1] = local_34;
        pfVar1[2] = local_30;
      }
      iVar5 = local_8 + 2;
      if (iVar5 < local_c) {
        pfVar1 = (float *)(local_10 + iVar5 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_5c;
          pfVar1[1] = local_58;
          pfVar1[2] = local_54;
        }
        iVar5 = local_8 + 3;
      }
    }
  }
  local_8 = iVar5;
  local_20 = local_2c + local_5c;
  local_1c = local_28 + local_58;
  local_18 = local_24 + local_54;
  local_68 = local_50 - local_20;
  local_64 = local_4c - local_1c;
  local_60 = local_48 - local_18;
  if (((local_68 != 0.0) || (local_64 != 0.0)) || (local_60 != 0.0)) {
    fVar2 = local_60 * local_60 + local_68 * local_68 + local_64 * local_64;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_68 = 0.0;
      local_64 = 1.0;
      local_60 = 0.0;
    }
    D3DXVec3Normalize(&local_68,&local_68);
  }
  local_68 = local_68 * fVar3;
  local_64 = local_64 * fVar3;
  local_60 = local_60 * fVar3;
  iVar5 = local_8;
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_20;
      pfVar1[1] = local_1c;
      pfVar1[2] = local_18;
    }
    iVar5 = local_8 + 1;
    if (iVar5 < local_c) {
      pfVar1 = (float *)(local_10 + iVar5 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_50 - local_68;
        pfVar1[1] = local_4c - local_64;
        pfVar1[2] = local_48 - local_60;
      }
      iVar5 = local_8 + 2;
      if (iVar5 < local_c) {
        pfVar1 = (float *)(local_10 + iVar5 * 0xc);
        if (pfVar1 == (float *)0x0) {
          iVar5 = local_8 + 3;
        }
        else {
          *pfVar1 = local_50;
          pfVar1[1] = local_4c;
          pfVar1[2] = local_48;
          iVar5 = local_8 + 3;
        }
      }
    }
  }
  local_8 = iVar5;
  FUN_00a5e090(&local_14);
  if ((local_10 != 0) && (local_8 = 0, local_4 != 0)) {
    FUN_00dd48d0(local_10,0);
  }
  return;
}

// 00BC84C0  FUN_00bc84c0  size=1215  [run]
/* WARNING: Removing unreachable block (ram,0x00bc8663) */
/* WARNING: Removing unreachable block (ram,0x00bc8825) */

void FUN_00bc84c0(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
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
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar4 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar4);
  local_44 = *param_2;
  local_40 = param_2[1];
  local_3c = param_2[2];
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_44;
      pfVar1[1] = local_40;
      pfVar1[2] = local_3c;
    }
    local_8 = local_8 + 1;
  }
  local_38 = *param_3;
  local_34 = param_3[1];
  local_30 = param_3[2];
  local_20 = local_38 - local_44;
  local_1c = local_34 - local_40;
  local_18 = local_30 - local_3c;
  fVar3 = SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) * 0.16666667;
  local_50 = *param_4;
  local_4c = param_4[1];
  local_48 = param_4[2];
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_2c = local_50 - local_20;
  local_28 = local_4c - local_1c;
  local_24 = local_48 - local_18;
  local_5c = local_2c - local_44;
  local_58 = local_28 - local_40;
  local_54 = local_24 - local_3c;
  if (((local_5c != 0.0) || (local_58 != 0.0)) || (local_54 != 0.0)) {
    fVar2 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_5c = 0.0;
      local_58 = 1.0;
      local_54 = 0.0;
    }
    D3DXVec3Normalize(&local_5c,&local_5c);
  }
  iVar5 = local_8;
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_5c * fVar3 + local_44;
      pfVar1[1] = local_58 * fVar3 + local_40;
      pfVar1[2] = local_54 * fVar3 + local_3c;
    }
    iVar5 = local_8 + 1;
    if (iVar5 < local_c) {
      pfVar1 = (float *)(local_10 + iVar5 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_2c;
        pfVar1[1] = local_28;
        pfVar1[2] = local_24;
      }
      iVar5 = local_8 + 2;
      if (iVar5 < local_c) {
        pfVar1 = (float *)(local_10 + iVar5 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_50;
          pfVar1[1] = local_4c;
          pfVar1[2] = local_48;
        }
        iVar5 = local_8 + 3;
      }
    }
  }
  local_8 = iVar5;
  local_2c = local_20 + local_50;
  local_28 = local_1c + local_4c;
  local_24 = local_18 + local_48;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  if (((local_5c != 0.0) || (local_58 != 0.0)) || (local_54 != 0.0)) {
    fVar2 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_5c = 0.0;
      local_58 = 1.0;
      local_54 = 0.0;
    }
    D3DXVec3Normalize(&local_5c,&local_5c);
  }
  local_5c = local_5c * fVar3;
  local_58 = local_58 * fVar3;
  local_54 = local_54 * fVar3;
  iVar5 = local_8;
  if (local_8 < local_c) {
    pfVar1 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_2c;
      pfVar1[1] = local_28;
      pfVar1[2] = local_24;
    }
    iVar5 = local_8 + 1;
    if (iVar5 < local_c) {
      pfVar1 = (float *)(local_10 + iVar5 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_38 - local_5c;
        pfVar1[1] = local_34 - local_58;
        pfVar1[2] = local_30 - local_54;
      }
      iVar5 = local_8 + 2;
      if (iVar5 < local_c) {
        pfVar1 = (float *)(local_10 + iVar5 * 0xc);
        if (pfVar1 == (float *)0x0) {
          iVar5 = local_8 + 3;
        }
        else {
          *pfVar1 = local_38;
          pfVar1[1] = local_34;
          pfVar1[2] = local_30;
          iVar5 = local_8 + 3;
        }
      }
    }
  }
  local_8 = iVar5;
  FUN_00a5e090(&local_14);
  if ((local_10 != 0) && (local_8 = 0, local_4 != 0)) {
    FUN_00dd48d0(local_10,0);
  }
  return;
}

// 00BC8980  FUN_00bc8980  size=74  [run]
void __thiscall FUN_00bc8980(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00BC89D0  FUN_00bc89d0  size=85  [run]
void __thiscall FUN_00bc89d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00BC8A30  FUN_00bc8a30  size=530  [run]
void __fastcall FUN_00bc8a30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined *local_16c;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_1c4 = param_1 + 0xdd4;
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  iVar1 = FUN_00907640(local_1c4,&local_1f4,&local_1c0);
  if (iVar1 != 0) {
    FUN_0112bcf0();
    if (0 < *(int *)(local_1f4 + 0x14)) {
      piVar4 = (int *)(*(int *)(local_1f4 + 0x10) + 0x28);
      iVar1 = 0;
      do {
        iVar2 = *piVar4;
        if ((*(char *)(iVar2 + 0x18) == '\x01') &&
           (iVar2 = *(char *)(iVar2 + 0x10) + iVar2, iVar2 != 0)) {
          *(undefined4 *)(param_1 + 0xdd8) = 1;
          FUN_00910a40(iVar2);
          iVar1 = FUN_00915990(9);
          if ((*(int *)(param_1 + 0x618) == 1) && (*(int *)(param_1 + 0x61c) < 4)) {
            uVar5 = 0x14b;
            if ((iVar1 == 8) || (iVar1 == 0x10)) {
              uVar5 = 0x14c;
            }
            uVar6 = 0;
            uVar3 = FUN_00a7c8a0(0);
            FUN_004039a0(uVar5,uVar3,uVar6);
            local_40 = local_1c0;
            local_3c = local_1bc;
            local_38 = local_1b8;
            local_34 = local_1b4;
            FUN_00a8c930(0,local_160);
          }
          break;
        }
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 0xc;
      } while (iVar1 < *(int *)(local_1f4 + 0x14));
    }
  }
  iVar1 = FUN_00a12210(0);
  local_1f0 = *(float *)(param_1 + 0x40);
  local_1ec = *(float *)(param_1 + 0x44);
  local_1e8 = *(float *)(param_1 + 0x48);
  local_1e4 = *(float *)(param_1 + 0x4c);
  local_1e0 = *(float *)(iVar1 + 0x40) - local_1f0;
  local_1dc = *(float *)(iVar1 + 0x44) - local_1ec;
  local_1d8 = *(float *)(iVar1 + 0x48) - local_1e8;
  local_1d4 = *(float *)(iVar1 + 0x4c) - local_1e4;
  iVar1 = FUN_009f8b40();
  local_1a0 = local_1f0;
  local_19c = local_1ec;
  local_1b0[0] = local_1c4;
  local_17c = iVar1 << 0x10 | 5;
  local_198 = local_1e8;
  local_194 = local_1e4;
  local_1b0[1] = 0;
  local_190 = local_1e0;
  local_178 = 0x3ff001b;
  local_174 = 0;
  local_18c = local_1dc;
  local_170 = 0;
  local_16c = &DAT_016a2684;
  local_188 = local_1d8;
  local_184 = local_1d4;
  local_180 = 0x3d4ccccd;
  FUN_0090fb00(local_1b0);
  return;
}

