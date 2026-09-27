// src/misc/StaticSpline.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D2F00..00EC3380, 9 functions

#include "mgrr.h"

// 009D2F00  StaticSpline<float,18>::vf04  size=824  [class]
void __thiscall StaticSpline<float,18>::vf04(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 < 3) {
    FUN_00dd5650(&DAT_01659828,param_3);
    return;
  }
  if (*(uint *)(param_1 + 0x18) < param_3) {
    FUN_00dd5650(&DAT_016597f0,param_3,*(uint *)(param_1 + 0x18));
    return;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  **(undefined4 **)(param_1 + 0xc) = 0;
  uVar1 = param_3 - 1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0;
  uVar3 = 1;
  if (1 < uVar1) {
    if (3 < (int)(param_3 - 2)) {
      do {
        iVar4 = uVar3 * 4;
        iVar5 = *(int *)(param_1 + 4) + uVar3 * 4;
        uVar3 = uVar3 + 4;
        *(float *)(*(int *)(param_1 + 0xc) + -0x10 + uVar3 * 4) =
             ((*(float *)(iVar5 + -4) - *(float *)(*(int *)(param_1 + 4) + iVar4) * 2.0) +
             *(float *)(iVar5 + 4)) * 3.0;
        iVar4 = *(int *)(param_1 + 4);
        *(float *)(*(int *)(param_1 + 0xc) + -0xc + uVar3 * 4) =
             ((*(float *)(iVar4 + -0x10 + uVar3 * 4) - *(float *)(iVar4 + -0xc + uVar3 * 4) * 2.0) +
             *(float *)(iVar4 + -8 + uVar3 * 4)) * 3.0;
        iVar4 = *(int *)(param_1 + 4);
        *(float *)(*(int *)(param_1 + 0xc) + -8 + uVar3 * 4) =
             ((*(float *)(iVar4 + -0xc + uVar3 * 4) - *(float *)(iVar4 + -8 + uVar3 * 4) * 2.0) +
             *(float *)(iVar4 + -4 + uVar3 * 4)) * 3.0;
        iVar4 = *(int *)(param_1 + 4);
        *(float *)(*(int *)(param_1 + 0xc) + -4 + uVar3 * 4) =
             ((*(float *)(iVar4 + -8 + uVar3 * 4) - *(float *)(iVar4 + -4 + uVar3 * 4) * 2.0) +
             *(float *)(iVar4 + uVar3 * 4)) * 3.0;
      } while (uVar3 < param_3 - 4);
    }
    while (uVar3 < uVar1) {
      iVar4 = uVar3 * 4;
      iVar5 = *(int *)(param_1 + 4) + uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(float *)(*(int *)(param_1 + 0xc) + -4 + uVar3 * 4) =
           ((*(float *)(iVar5 + -4) - *(float *)(*(int *)(param_1 + 4) + iVar4) * 2.0) +
           *(float *)(iVar5 + 4)) * 3.0;
    }
  }
  uVar3 = 1;
  if (1 < uVar1) {
    if (3 < (int)(param_3 - 2)) {
      do {
        pfVar2 = (float *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
        *pfVar2 = (*(float *)(*(int *)(param_1 + 0xc) + uVar3 * 4) - pfVar2[-1]) *
                  (float)(&DAT_01dd8f60)[uVar3];
        iVar4 = uVar3 * 4;
        pfVar2 = (float *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
        uVar3 = uVar3 + 4;
        pfVar2[1] = (*(float *)(*(int *)(param_1 + 0xc) + 4 + iVar4) - *pfVar2) *
                    *(float *)(uVar3 * 4 + 0x1dd8f54);
        iVar4 = *(int *)(param_1 + 0xc);
        *(float *)(iVar4 + -8 + uVar3 * 4) =
             (*(float *)(iVar4 + -8 + uVar3 * 4) - *(float *)(iVar4 + -0xc + uVar3 * 4)) *
             *(float *)(&DAT_01dd8f58 + uVar3 * 4);
        iVar4 = *(int *)(param_1 + 0xc);
        *(float *)(iVar4 + -4 + uVar3 * 4) =
             (*(float *)(iVar4 + -4 + uVar3 * 4) - *(float *)(iVar4 + -8 + uVar3 * 4)) *
             *(float *)(uVar3 * 4 + 0x1dd8f5c);
      } while (uVar3 < param_3 - 4);
    }
    while (uVar3 < uVar1) {
      iVar4 = uVar3 * 4;
      pfVar2 = (float *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      *pfVar2 = (*(float *)(*(int *)(param_1 + 0xc) + iVar4) - pfVar2[-1]) *
                *(float *)(uVar3 * 4 + 0x1dd8f5c);
    }
  }
  for (iVar4 = param_3 - 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    pfVar2 = (float *)(*(int *)(param_1 + 0xc) + iVar4 * 4);
    *pfVar2 = *pfVar2 - (float)(&DAT_01dd8f60)[iVar4] *
                        *(float *)(*(int *)(param_1 + 0xc) + 4 + iVar4 * 4);
  }
  uVar3 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar1 * 4) = 0;
  if (3 < (int)uVar1) {
    iVar5 = (param_3 - 5 >> 2) + 1;
    uVar3 = iVar5 * 4;
    iVar4 = 8;
    do {
      iVar5 = iVar5 + -1;
      *(float *)(iVar4 + -8 + *(int *)(param_1 + 0x10)) =
           (*(float *)(iVar4 + -4 + *(int *)(param_1 + 0xc)) -
           *(float *)(iVar4 + -8 + *(int *)(param_1 + 0xc))) * 0.33333334;
      *(float *)(*(int *)(param_1 + 0x10) + -0x14 + iVar4 + 0x10) =
           (*(float *)(iVar4 + *(int *)(param_1 + 0xc)) -
           *(float *)(iVar4 + -4 + *(int *)(param_1 + 0xc))) * 0.33333334;
      *(float *)(iVar4 + *(int *)(param_1 + 0x10)) =
           (*(float *)(iVar4 + 4 + *(int *)(param_1 + 0xc)) -
           *(float *)(iVar4 + *(int *)(param_1 + 0xc))) * 0.33333334;
      *(float *)(iVar4 + 4 + *(int *)(param_1 + 0x10)) =
           (*(float *)(iVar4 + 8 + *(int *)(param_1 + 0xc)) -
           *(float *)(iVar4 + 4 + *(int *)(param_1 + 0xc))) * 0.33333334;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 != 0);
  }
  while (uVar3 < uVar1) {
    iVar5 = uVar3 * 4;
    iVar4 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(float *)(*(int *)(param_1 + 0x10) + -4 + uVar3 * 4) =
         (*(float *)(*(int *)(param_1 + 0xc) + 4 + iVar5) -
         *(float *)(*(int *)(param_1 + 0xc) + iVar4)) * 0.33333334;
  }
  uVar3 = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4) = 0;
  if (3 < (int)uVar1) {
    iVar5 = (param_3 - 5 >> 2) + 1;
    uVar3 = iVar5 * 4;
    iVar4 = 8;
    do {
      iVar5 = iVar5 + -1;
      *(float *)(iVar4 + -8 + *(int *)(param_1 + 8)) =
           ((*(float *)(iVar4 + -4 + *(int *)(param_1 + 4)) -
            *(float *)(iVar4 + -8 + *(int *)(param_1 + 4))) -
           *(float *)(iVar4 + -8 + *(int *)(param_1 + 0xc))) -
           *(float *)(iVar4 + -8 + *(int *)(param_1 + 0x10));
      *(float *)(iVar4 + -4 + *(int *)(param_1 + 8)) =
           ((*(float *)(iVar4 + *(int *)(param_1 + 4)) -
            *(float *)(iVar4 + -4 + *(int *)(param_1 + 4))) -
           *(float *)(iVar4 + -4 + *(int *)(param_1 + 0xc))) -
           *(float *)(iVar4 + -4 + *(int *)(param_1 + 0x10));
      *(float *)(iVar4 + *(int *)(param_1 + 8)) =
           ((*(float *)(iVar4 + 4 + *(int *)(param_1 + 4)) -
            *(float *)(iVar4 + *(int *)(param_1 + 4))) - *(float *)(iVar4 + *(int *)(param_1 + 0xc))
           ) - *(float *)(iVar4 + *(int *)(param_1 + 0x10));
      *(float *)(iVar4 + 4 + *(int *)(param_1 + 8)) =
           ((*(float *)(iVar4 + 8 + *(int *)(param_1 + 4)) -
            *(float *)(iVar4 + 4 + *(int *)(param_1 + 4))) -
           *(float *)(iVar4 + 4 + *(int *)(param_1 + 0xc))) -
           *(float *)(iVar4 + 4 + *(int *)(param_1 + 0x10));
      iVar4 = iVar4 + 0x10;
    } while (iVar5 != 0);
  }
  while (uVar3 < uVar1) {
    iVar5 = uVar3 * 4;
    iVar4 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(float *)(*(int *)(param_1 + 8) + -4 + uVar3 * 4) =
         ((*(float *)(*(int *)(param_1 + 4) + 4 + iVar5) - *(float *)(*(int *)(param_1 + 4) + iVar4)
          ) - *(float *)(*(int *)(param_1 + 0xc) + -4 + uVar3 * 4)) -
         *(float *)(*(int *)(param_1 + 0x10) + -4 + uVar3 * 4);
  }
  *(uint *)(param_1 + 0x14) = param_3;
  return;
}

// 00EB4790  StaticSpline<float,18>::StaticSpline<float,18>  size=1297  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
StaticSpline<float,18>::StaticSpline<float,18>(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  byte *pbVar4;
  float fVar5;
  int iVar6;
  undefined4 unaff_ESI;
  float fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  int local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined1 local_20c [8];
  undefined **local_204;
  undefined4 local_200;
  undefined1 *local_1fc;
  undefined1 *local_1f8;
  undefined1 *local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [76];
  undefined1 local_19c [76];
  undefined1 local_150 [68];
  int iStack_10c;
  undefined **local_104;
  undefined4 local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [76];
  undefined1 local_9c [76];
  undefined1 local_50 [76];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_230;
  iVar6 = *(int *)(param_1 + 0x10);
  local_21c = param_2;
  if (*(float *)(param_1 + 0x8a0) == 0.5) {
    _DAT_01edd998 = 0xc0200000;
  }
  else {
    _DAT_01edd998 = 0xc0a00000;
  }
  _DAT_01edd970 = 0;
  if ((_DAT_01bea080 & 0x2000) == 0) {
    local_22c = (param_3 - *(float *)(param_1 + 0x8a4)) * *(float *)(param_1 + 0x8a8);
    local_220 = 1.0 - local_22c * _DAT_018d5f00;
    if (*(float *)(param_1 + 0x8a0) == 0.5) {
      local_22c = local_22c * _DAT_018d5efc;
    }
    else if (local_220 < 0.98) {
      local_220 = 0.98;
    }
  }
  else {
    local_22c = 0.0;
    local_220 = 1.0;
  }
  iVar2 = 0;
  if (3 < iVar6) {
    pbVar4 = (byte *)(param_1 + 0x15);
    do {
      iVar2 = iVar2 + 4;
      *(float *)(iVar2 * 4 + 0x1edd98c) = (float)pbVar4[-1] + local_22c;
      *(float *)(iVar2 * 4 + 0x1edd964) = (float)*pbVar4;
      *(float *)(&DAT_01edd990 + iVar2 * 4) = (float)pbVar4[1] + local_22c;
      *(float *)(&DAT_01edd968 + iVar2 * 4) = (float)pbVar4[2];
      *(float *)(&DAT_01edd994 + iVar2 * 4) = (float)pbVar4[3] + local_22c;
      *(float *)(&DAT_01edd96c + iVar2 * 4) = (float)pbVar4[4];
      *(float *)(&DAT_01edd998 + iVar2 * 4) = (float)pbVar4[5] + local_22c;
      local_230 = (float)(uint)pbVar4[6];
      *(float *)(&DAT_01edd970 + iVar2 * 4) = (float)(int)local_230;
      pbVar4 = pbVar4 + 8;
    } while (iVar2 < iVar6 + -3);
  }
  if (iVar2 < iVar6) {
    pbVar4 = (byte *)(param_1 + 0x15 + iVar2 * 2);
    do {
      iVar2 = iVar2 + 1;
      *(float *)(&DAT_01edd998 + iVar2 * 4) = (float)pbVar4[-1] + local_22c;
      local_230 = (float)(uint)*pbVar4;
      *(float *)(&DAT_01edd970 + iVar2 * 4) = (float)(int)local_230;
      pbVar4 = pbVar4 + 2;
    } while (iVar2 < iVar6);
  }
  if (*(float *)(param_1 + 0x8a0) == 0.5) {
    fVar7 = (float)(iVar6 + 3);
    *(undefined4 *)(&DAT_01edd990 + (int)fVar7 * 4) = 0x430f0000;
    *(undefined4 *)(&DAT_01edd968 + (int)fVar7 * 4) = 0x430f0000;
    *(undefined4 *)(&DAT_01edd994 + (int)fVar7 * 4) = 0x43828000;
    *(undefined4 *)(&DAT_01edd96c + (int)fVar7 * 4) = 0x43850000;
  }
  else {
    fVar7 = (float)(iVar6 + 2);
    *(undefined4 *)(&DAT_01edd994 + (int)fVar7 * 4) = 0x43828000;
    *(undefined4 *)(&DAT_01edd96c + (int)fVar7 * 4) = 0x43800000;
  }
  local_204 = vftable;
  local_228 = fVar7;
  _memset(local_1e8,0,0x4c);
  _memset(local_19c,0,0x4c);
  _memset(local_150,0,0x4c);
  local_1f8 = local_19c;
  local_1fc = local_1e8;
  local_1f4 = local_150;
  local_200 = 0;
  local_1f0 = 0;
  local_1ec = 0x12;
  vf04(&DAT_01edd998,fVar7);
  local_104 = vftable;
  _memset(local_e8,0,0x4c);
  _memset(local_9c,0,0x4c);
  _memset(local_50,0,0x4c);
  local_f8 = local_9c;
  local_fc = local_e8;
  local_f4 = local_50;
  local_100 = 0;
  local_f0 = 0;
  local_ec = 0x12;
  vf04(&DAT_01edd970,fVar7);
  local_230 = 0.0;
  local_22c = 0.0;
  local_224 = 0.0;
  fVar7 = 0.0;
  iVar6 = 0x2a;
  local_214 = (float)(int)local_228 / 48.0;
  do {
    fVar5 = local_224;
    pfVar3 = (float *)(*(code *)local_204[2])(local_20c,local_22c);
    local_230 = *pfVar3;
    pfVar3 = (float *)(**(code **)(iStack_10c + 8))(&local_210,unaff_ESI);
    local_218 = *pfVar3 * 0.00390625;
    local_210 = local_214 + local_22c;
    local_224 = (float)(int)local_224;
    local_224 = (float)FUN_00fdbc60();
    if (local_224 == 0.0) {
      local_228 = 0.0;
    }
    else {
      local_228 = (local_218 - local_230) / (float)(int)local_224;
    }
    local_22c = local_230;
    if (extraout_ST0 <= extraout_ST1) {
      do {
        fVar1 = local_22c;
        local_22c = local_22c * local_220;
        if ((int)fVar5 < 0) {
          fVar7 = 0.0;
LAB_00eb4bda:
          if (0.0 <= local_22c) {
            if (1.0 < local_22c) {
              local_22c = 1.0;
            }
            *(float *)(local_21c + (int)fVar7 * 4) = local_22c;
          }
          else {
            *(undefined4 *)(local_21c + (int)fVar7 * 4) = 0;
          }
        }
        else {
          fVar7 = fVar5;
          if ((int)fVar5 < 0x100) goto LAB_00eb4bda;
        }
        fVar5 = (float)((int)fVar5 + 1);
        local_22c = local_228 + fVar1;
        local_230 = fVar5;
      } while ((float10)(int)fVar5 < extraout_ST1 != ((float10)(int)fVar5 == extraout_ST1));
    }
    local_22c = local_210;
    local_224 = (float)FUN_00fdbc60();
    local_230 = local_218;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      if (((int)fVar7 < 0x100) && ((int)fVar7 < 0x100)) {
        iVar6 = 0x100 - (int)fVar7;
        do {
          iVar6 = iVar6 + -1;
          *(float *)(local_21c + (int)fVar7 * 4) = (float)extraout_ST0_00;
        } while (iVar6 != 0);
      }
      __security_check_cookie(local_4 ^ (uint)&local_230);
      return;
    }
  } while( true );
}

// 00EB4EC0  FUN_00eb4ec0  size=105  [callgraph]
void __fastcall FUN_00eb4ec0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 0xc))();
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x18])(1);
    }
    param_1[0x18] = 0;
  }
  FUN_00a2a8a0();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 == 0xfffe) {
      param_1 = param_1 + uVar1 * 3;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = -1;
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar1 < 8);
  return;
}

// 00EB4FD0  FUN_00eb4fd0  size=223  [callgraph]
void __thiscall FUN_00eb4fd0(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = param_1;
  do {
    if (*piVar3 == param_2) {
      if ((((param_1 + uVar2 * 3 != (int *)0x0) &&
           (pcVar1 = (char *)(param_1 + uVar2 * 3)[2], pcVar1 != (char *)0x0)) && (*pcVar1 == 'O'))
         && (((pcVar1[1] == 'L' && (pcVar1[2] == 'D')) && (pcVar1[3] == '\0')))) {
        FUN_00dd48d0(pcVar1,0);
      }
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (uVar2 < 8);
  uVar2 = 0;
  piVar3 = param_1;
  do {
    if (*piVar3 == param_2) {
      piVar3 = param_1 + uVar2 * 3;
      *piVar3 = -1;
      piVar3[2] = 0;
      piVar3[1] = 0;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (uVar2 < 8);
  uVar2 = 0;
  piVar3 = param_1 + 0x1a4;
  do {
    if (*piVar3 == param_2) {
      piVar3 = param_1 + uVar2 * 3 + 0x1a4;
      *piVar3 = -1;
      piVar3[2] = 0;
      piVar3[1] = 0;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (uVar2 < 8);
  uVar2 = 0;
  piVar3 = param_1 + 0x1bc;
  do {
    if (*piVar3 == param_2) {
      param_1 = param_1 + uVar2 * 3 + 0x1bc;
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = -1;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (uVar2 < 8);
  return;
}

// 00EB50C0  FUN_00eb50c0  size=1684  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00eb50c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  undefined *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_14;
  
  FUN_00ec3380((uint *)(param_1 + 0x1180));
  *(undefined4 *)(param_1 + 0x4430) = *(undefined4 *)(param_1 + 0x2e60);
  *(float *)(param_1 + 0x4434) = 1.0 / *(float *)(param_1 + 0x2e60);
  StaticSpline<float,18>::StaticSpline<float,18>(param_1 + 0x7c,_DAT_018d5df8);
  local_34 = -((*(float *)(param_1 + 0x4438) - *(float *)(param_1 + 0x2e64)) *
               *(float *)(param_1 + 0x2e74) * *(float *)(param_1 + 0x2e68));
  local_40 = local_34 + *(float *)(param_1 + 0x25f0);
  local_3c = *(float *)(param_1 + 0x25f4) + local_34;
  local_38 = *(float *)(param_1 + 0x25f8) + local_34;
  local_34 = local_34 + *(float *)(param_1 + 0x25fc);
  FUN_00eac880(param_1 + 0x7c);
  iVar13 = *(int *)(param_1 + 0x60);
  *(float *)(iVar13 + 0x60) = local_40;
  *(float *)(iVar13 + 100) = local_3c;
  *(float *)(iVar13 + 0x68) = local_38;
  *(float *)(iVar13 + 0x6c) = local_34;
  iVar13 = *(int *)(param_1 + 0x60);
  fVar1 = *(float *)(param_1 + 0x4434);
  fVar2 = *(float *)(param_1 + 0x2604);
  fVar3 = *(float *)(param_1 + 0x2608);
  local_14 = *(float *)(param_1 + 0x260c);
  *(float *)(iVar13 + 0x30) = fVar1 * *(float *)(param_1 + 0x2600);
  *(float *)(iVar13 + 0x34) = fVar2 * fVar1;
  *(float *)(iVar13 + 0x38) = fVar1 * fVar3;
  *(float *)(iVar13 + 0x3c) = local_14;
  iVar13 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(param_1 + 0x2620);
  *(undefined4 *)(iVar13 + 0x44) = *(undefined4 *)(param_1 + 0x2624);
  *(undefined4 *)(iVar13 + 0x48) = *(undefined4 *)(param_1 + 0x2628);
  *(undefined4 *)(iVar13 + 0x4c) = *(undefined4 *)(param_1 + 0x262c);
  *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x70) = *(undefined4 *)(param_1 + 0x2e7c);
  *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x74) = *(undefined4 *)(param_1 + 0x2e80);
  *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x78) = *(undefined4 *)(param_1 + 0x2e84);
  *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x7c) = *(undefined4 *)(param_1 + 0x2e88);
  local_4c = 1.0;
  if ((*(uint *)(param_1 + 0x1180) & 0x8000000) == 0) {
    puVar9 = DAT_01beb8c0;
    if (DAT_01beb8c0 == (undefined *)0x0) {
      puVar9 = &DAT_01bea1d0;
    }
    local_40 = *(float *)(puVar9 + 0x1c0) - *(float *)(puVar9 + 0x1b0);
    local_3c = *(float *)(puVar9 + 0x1c4) - *(float *)(puVar9 + 0x1b4);
    local_38 = *(float *)(puVar9 + 0x1c8) - *(float *)(puVar9 + 0x1b8);
    local_34 = *(float *)(puVar9 + 0x1cc) - *(float *)(puVar9 + 0x1bc);
    if (local_3c < 0.0) {
      fVar1 = local_3c * local_3c + local_40 * local_40 + local_38 * local_38;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
      local_4c = 1.0 - (local_3c * local_3c + local_40 * 0.0 + local_38 * 0.0);
    }
  }
  fVar1 = *(float *)(param_1 + 0x584);
  fVar2 = *(float *)(param_1 + 0x2634);
  fVar3 = *(float *)(param_1 + 0x588);
  fVar4 = *(float *)(param_1 + 0x2638);
  local_14 = local_4c * *(float *)(param_1 + 0x58c) * *(float *)(param_1 + 0x263c);
  if ((_DAT_01bea080 & 0x1000) != 0) {
    local_14 = 0.0;
  }
  iVar13 = *(int *)(param_1 + 0x60);
  *(float *)(iVar13 + 0x50) = local_4c * *(float *)(param_1 + 0x2630) * *(float *)(param_1 + 0x580);
  *(float *)(iVar13 + 0x54) = fVar1 * fVar2 * local_4c;
  *(float *)(iVar13 + 0x58) = fVar3 * fVar4 * local_4c;
  *(float *)(iVar13 + 0x5c) = local_14;
  local_50 = *(float *)(param_1 + 0x2674);
  if (local_50 < *(float *)(param_1 + 0x26f4)) {
    local_50 = *(float *)(param_1 + 0x26f4);
  }
  if (local_50 < *(float *)(param_1 + 0x2774)) {
    local_50 = *(float *)(param_1 + 0x2774);
  }
  puVar9 = DAT_01beb8c0;
  if (DAT_01beb8c0 == (undefined *)0x0) {
    puVar9 = &DAT_01bea1d0;
  }
  pfVar11 = (float *)&DAT_01f8e6f8;
  *(float *)(puVar9 + 0x348) = local_50;
  bVar8 = DAT_01bea070._3_1_ & 1;
  DAT_01f8e9e0 = 1;
  pfVar12 = (float *)(param_1 + 0x488);
  pfVar10 = (float *)(param_1 + 0x2688);
  iVar13 = 0xe;
  do {
    fVar1 = pfVar10[-9];
    fVar2 = *(float *)(param_1 + 0x4430);
    fVar3 = pfVar10[-8];
    fVar4 = *(float *)(param_1 + 0x4430);
    fVar5 = pfVar10[-7];
    pfVar11[-2] = pfVar10[-10] * *(float *)(param_1 + 0x4430);
    pfVar11[-1] = fVar1 * fVar2;
    *pfVar11 = fVar3 * fVar4;
    pfVar11[1] = fVar5;
    pfVar11[-6] = pfVar10[-6];
    pfVar11[-5] = pfVar10[-5];
    if (60000.0 < pfVar10[-6]) {
      pfVar11[-6] = 60000.0;
    }
    if (60000.0 < pfVar10[-5]) {
      pfVar11[-5] = 60000.0;
    }
    fVar1 = pfVar10[-1];
    fVar2 = pfVar12[-1];
    fVar3 = *pfVar10;
    fVar4 = *pfVar12;
    fVar5 = *(float *)(param_1 + 0x4430);
    fVar6 = pfVar10[1];
    fVar7 = pfVar12[1];
    if (bVar8 == 0) {
      pfVar11[2] = fVar5 * pfVar10[-2] * pfVar12[-2];
      pfVar11[3] = fVar1 * fVar2 * fVar5;
      pfVar11[4] = fVar5 * fVar3 * fVar4;
      pfVar11[5] = fVar6 * fVar7;
    }
    else {
      pfVar11[2] = 1.0;
      pfVar11[3] = 1.0;
      pfVar11[4] = 1.0;
      pfVar11[5] = 1.0;
    }
    pfVar12 = pfVar12 + 4;
    pfVar10 = pfVar10 + 0x20;
    pfVar11 = pfVar11 + 0xc;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  _DAT_01f8e990 = *(undefined4 *)(param_1 + 0x4430);
  _DAT_01f8e994 = *(undefined4 *)(param_1 + 0x4430);
  _DAT_01f8e998 = *(undefined4 *)(param_1 + 0x4430);
  _DAT_01f8e99c = 0x3f800000;
  _DAT_01f8e980 = 0x49742400;
  _DAT_01f8e984 = 0x49742400;
  _DAT_01f8e9a0 = *(float *)(param_1 + 0x560) * *(float *)(param_1 + 0x4430);
  _DAT_01f8e9a4 = *(float *)(param_1 + 0x564) * *(float *)(param_1 + 0x4430);
  _DAT_01f8e9a8 = *(float *)(param_1 + 0x568) * *(float *)(param_1 + 0x4430);
  _DAT_01f8e9ac = *(undefined4 *)(param_1 + 0x56c);
  _DAT_01f8e9c0 = *(undefined4 *)(param_1 + 0x4430);
  _DAT_01f8e9c4 = *(undefined4 *)(param_1 + 0x4430);
  _DAT_01f8e9c8 = *(undefined4 *)(param_1 + 0x4430);
  _DAT_01f8e9cc = 0x3f800000;
  _DAT_01f8e9b0 = 0x49742400;
  _DAT_01f8e9b4 = 0x49742400;
  _DAT_01f8e9d0 = *(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x4430);
  _DAT_01f8e9d4 = *(float *)(param_1 + 0x574) * *(float *)(param_1 + 0x4430);
  _DAT_01f8e9d8 = *(float *)(param_1 + 0x578) * *(float *)(param_1 + 0x4430);
  _DAT_01f8e9dc = *(undefined4 *)(param_1 + 0x57c);
  return;
}

// 00EC31B0  StaticSpline<float,18>::StaticSpline<float,18>_2  size=107  [class]
undefined4 * __thiscall
StaticSpline<float,18>::StaticSpline<float,18>_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = vftable;
  _memset(param_1 + 7,0,0x4c);
  _memset(param_1 + 0x1a,0,0x4c);
  _memset(param_1 + 0x2d,0,0x4c);
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[2] = param_1 + 7;
  param_1[3] = param_1 + 0x1a;
  param_1[4] = param_1 + 0x2d;
  param_1[6] = 0x12;
  vf04(param_2,param_3);
  return param_1;
}

// 00EC3220  StaticSpline<float,18>::vf00  size=31  [class]
undefined4 * __thiscall StaticSpline<float,18>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Spline<float>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EC3240  FUN_00ec3240  size=83  [callgraph]
void __fastcall FUN_00ec3240(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00EC3380  FUN_00ec3380  size=632  [callgraph]
void __thiscall FUN_00ec3380(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_8;
  
  puVar1 = param_2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)((int)param_2 + 0x1e);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  iVar5 = (int)param_2 - (int)param_1;
  param_1[0x25] = param_2[0x25];
  puVar2 = param_2 + 0x33;
  puVar3 = param_1 + 0x31;
  param_1[0x26] = param_2[0x26];
  local_8 = 0x10;
  param_1[0x27] = param_2[0x27];
  do {
    puVar3[-9] = puVar2[-0xb];
    puVar3[-8] = puVar2[-10];
    param_2 = (undefined4 *)0x10;
    puVar3[-7] = puVar2[-9];
    puVar3[-6] = puVar2[-8];
    puVar3[-5] = puVar2[-7];
    puVar3[-4] = puVar2[-6];
    puVar3[-1] = puVar2[-3];
    *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
    puVar3[1] = puVar2[-1];
    puVar3[2] = *puVar2;
    puVar3[3] = puVar2[1];
    puVar6 = puVar3 + 4;
    do {
      *puVar6 = *(undefined4 *)((int)puVar2 + (-0x2c - (int)(puVar3 + -9)) + (int)puVar6);
      puVar6 = puVar6 + 1;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
    puVar2 = puVar2 + 0x20;
    puVar3 = puVar3 + 0x20;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_1[0x228] = puVar1[0x228];
  iVar4 = 0x54;
  param_1[0x229] = puVar1[0x229];
  param_1[0x22a] = puVar1[0x22a];
  param_1[0x22b] = puVar1[0x22b];
  param_1[0x22c] = puVar1[0x22c];
  param_1[0x22d] = puVar1[0x22d];
  param_1[0x22e] = puVar1[0x22e];
  param_1[0x22f] = puVar1[0x22f];
  param_1[0x230] = puVar1[0x230];
  param_1[0x231] = puVar1[0x231];
  puVar2 = param_1 + 0x233;
  param_1[0x232] = puVar1[0x232];
  do {
    *puVar2 = *(undefined4 *)(iVar5 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

