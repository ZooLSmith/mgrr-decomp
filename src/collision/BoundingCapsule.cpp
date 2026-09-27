// src/collision/BoundingCapsule.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A68250..00A6AB40, 16 functions

#include "mgrr.h"
#include "BoundingCapsule.h"

// 00A68250  BoundingCapsule::vf14  size=481  [class]
undefined4 __thiscall BoundingCapsule::vf14(int *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float fVar6;
  float *pfStack_58;
  float *pfStack_54;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [44];
  
  if (((*param_2 - *param_3 == 0.0) && (param_2[1] - param_3[1] == 0.0)) &&
     (param_2[2] - param_3[2] == 0.0)) {
    pfStack_54 = param_2;
    pfStack_58 = (float *)0xa682a3;
    uVar1 = (**(code **)(*param_1 + 0x18))();
    return uVar1;
  }
  pfStack_58 = param_2;
  pfStack_54 = (float *)(param_1 + 0x2c);
  D3DXVec3TransformNormal(local_30);
  fStack_38 = (float)param_1[0x39] + fStack_38;
  fStack_34 = (float)param_1[0x3a] + fStack_34;
  D3DXVec3TransformNormal(&stack0xffffffb4,param_3,param_1 + 0x2c);
  pfStack_58 = (float *)((float)pfStack_58 + (float)param_1[0x38]);
  pfStack_54 = (float *)((float)param_1[0x39] + (float)pfStack_54);
  fVar6 = (float)param_1[0x40] * (float)param_1[0x40];
  if (param_1[0x41] == 1) {
    fVar5 = (float10)thunk_FUN_00de19d0(param_1 + 0x44,&stack0xffffffb8,&pfStack_58,0);
    if (fVar5 * fVar5 < (float10)fVar6) {
      return 1;
    }
  }
  else {
    iVar3 = 0;
    if (0 < param_1[0x41] + -1) {
      pfVar4 = (float *)(param_1 + 0x49);
      do {
        if (((pfVar4[-5] - pfVar4[-1] == 0.0) && (pfVar4[-4] - *pfVar4 == 0.0)) &&
           (pfVar4[-3] - pfVar4[1] == 0.0)) {
          fVar5 = (float10)thunk_FUN_00de19d0(pfVar4 + -5,&stack0xffffffb8,&pfStack_58,0);
          if (fVar5 * fVar5 < (float10)fVar6) {
            return 1;
          }
        }
        else {
          iVar2 = FUN_00d9d800(&fStack_38,&stack0xffffffb8,&pfStack_58,pfVar4 + -5,pfVar4 + -1,
                               param_1[0x40]);
          if (iVar2 != 0) {
            return 1;
          }
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 4;
      } while (iVar3 < param_1[0x41] + -1);
    }
  }
  return 0;
}

// 00A68440  BoundingCapsule::vf10  size=98  [class]
void __thiscall BoundingCapsule::vf10(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  
  fVar1 = *(float *)(param_1 + 0x100);
  iVar3 = *(int *)(param_1 + 0x104) + -1;
  if (0 < iVar3) {
    pfVar4 = (float *)(param_1 + 0x124);
    do {
      fVar2 = SQRT((pfVar4[-5] - pfVar4[-1]) * (pfVar4[-5] - pfVar4[-1]) +
                   (pfVar4[-4] - *pfVar4) * (pfVar4[-4] - *pfVar4) +
                   (pfVar4[-3] - pfVar4[1]) * (pfVar4[-3] - pfVar4[1]));
      if (fVar1 < fVar2) {
        fVar1 = fVar2;
      }
      pfVar4 = pfVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *param_2 = fVar1;
  param_2[1] = fVar1;
  param_2[2] = fVar1;
  return;
}

// 00A68610  BoundingCapsule::vf00  size=6  [class]
undefined * BoundingCapsule::vf00(void)

{
  return &DAT_01be99e0;
}

// 00A68620  BoundingCapsule::vf04  size=31  [class]
undefined4 * __thiscall BoundingCapsule::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = BoundingVolumeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A688E0  BoundingCapsule::vf0C  size=1690  [class]
void __thiscall BoundingCapsule::vf0C(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float fStack_3ec;
  float *local_3e8;
  float local_3e4;
  undefined1 local_3e0 [4];
  undefined1 auStack_3dc [12];
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  undefined4 uStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float afStack_3b0 [4];
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [64];
  float afStack_340 [96];
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 auStack_1a8 [96];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 == 1) {
    D3DXVec3TransformNormal(&local_460,param_1 + 0x110,param_1 + 0x70);
    FUN_00f96100(&stack0xfffffb94,*(undefined4 *)(param_1 + 0x100),param_2,0,0);
    return;
  }
  local_3e4 = 0.0;
  if (iVar1 != 1 && -1 < iVar1 + -1) {
    iVar1 = param_1 + 0x70;
    pfVar3 = (float *)(param_1 + 0x118);
    do {
      local_410 = pfVar3[-2];
      local_40c = pfVar3[-1];
      local_408 = *pfVar3;
      local_404 = pfVar3[1];
      local_400 = pfVar3[2];
      local_3fc = pfVar3[3];
      local_3f8 = pfVar3[4];
      local_3f4 = pfVar3[5];
      local_3e8 = pfVar3;
      D3DXVec3TransformNormal(local_3e0,&local_410,iVar1);
      fStack_3ec = *(float *)(param_1 + 0xa0) + fStack_3ec;
      local_3e8 = (float *)(*(float *)(param_1 + 0xa4) + (float)local_3e8);
      local_3e4 = *(float *)(param_1 + 0xa8) + local_3e4;
      D3DXVec3TransformNormal(auStack_3dc,&local_40c,iVar1);
      fStack_3d0 = *(float *)(param_1 + 0xa0) + fStack_3d0;
      fStack_3cc = *(float *)(param_1 + 0xa4) + fStack_3cc;
      fStack_3c8 = *(float *)(param_1 + 0xa8) + fStack_3c8;
      FUN_00f96100(local_3e0,*(undefined4 *)(param_1 + 0x100),param_2,0,0);
      FUN_00f96100(&fStack_3d0,*(undefined4 *)(param_1 + 0x100),param_2,0,0);
      uStack_3c0 = 0;
      fStack_3bc = 0.0;
      fStack_3b8 = *(float *)(param_1 + 0x100);
      fStack_3b4 = 0.0;
      local_460 = local_410 - local_400;
      fStack_45c = local_40c - local_3fc;
      fStack_458 = local_408 - local_3f8;
      fStack_454 = local_404 - local_3f4;
      fStack_420 = 0.0;
      fStack_41c = 1.0;
      fStack_418 = 0.0;
      fStack_414 = 0.0;
      if (((local_460 != 0.0) || (fStack_45c != 0.0)) || (fStack_458 != 0.0)) {
        fVar2 = fStack_458 * fStack_458 + local_460 * local_460 + fStack_45c * fStack_45c;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&local_460,&local_460);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_460 = 0.0;
          fStack_45c = 1.0;
          fStack_458 = 0.0;
        }
        fVar2 = fStack_418 * fStack_418 + fStack_420 * fStack_420 + fStack_41c * fStack_41c;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&fStack_420,&fStack_420);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_420 = 0.0;
          fStack_41c = 1.0;
          fStack_418 = 0.0;
        }
        thunk_FUN_00de1080(auStack_3a0,&fStack_420,&local_460);
        FUN_00ddd760(auStack_390,auStack_3a0,5);
        FUN_00ddc1d0(auStack_380,auStack_390,5);
        D3DXVec3TransformNormal(&uStack_3c0,&uStack_3c0,auStack_380);
        fStack_434 = 0.0;
        iVar4 = 0;
        do {
          FUN_00ddcfe0(auStack_380,&local_460,(float)(int)fStack_434 * 22.5 * 0.017453292);
          D3DXVec3TransformNormal(afStack_3b0,&uStack_3c0,auStack_380);
          fStack_43c = fStack_41c + fStack_3bc;
          fStack_438 = fStack_418 + fStack_3b8;
          fStack_434 = fStack_414 + fStack_3b4;
          fStack_430 = local_410 + afStack_3b0[0];
          fStack_45c = fStack_3bc + local_40c;
          fStack_458 = fStack_3b8 + local_408;
          fStack_454 = fStack_3b4 + local_404;
          fStack_450 = afStack_3b0[0] + local_400;
          D3DXVec3TransformNormal(&fStack_43c,&fStack_43c,iVar1);
          fStack_448 = *(float *)(param_1 + 0xa0) + fStack_448;
          fStack_444 = *(float *)(param_1 + 0xa4) + fStack_444;
          fStack_440 = *(float *)(param_1 + 0xa8) + fStack_440;
          D3DXVec3TransformNormal(&stack0xfffffb98,&stack0xfffffb98,iVar1);
          fStack_450 = *(float *)(param_1 + 0xa0) + fStack_450;
          fStack_44c = fStack_44c + *(float *)(param_1 + 0xa4);
          fStack_448 = fStack_448 + *(float *)(param_1 + 0xa8);
          FUN_00f95f40(&fStack_430,&fStack_450,param_2,0);
          fStack_434 = (float)((int)fStack_434 + 1);
          *(float *)((int)afStack_340 + iVar4) = fStack_430;
          iVar5 = iVar4 + 0x18;
          *(undefined4 *)((int)afStack_340 + iVar4 + 4) = uStack_42c;
          *(undefined4 *)((int)afStack_340 + iVar4 + 8) = uStack_428;
          *(float *)((int)afStack_340 + iVar4 + 0xc) = fStack_450;
          *(float *)((int)afStack_340 + iVar4 + 0x10) = fStack_44c;
          *(float *)((int)afStack_340 + iVar4 + 0x14) = fStack_448;
          *(undefined4 *)((int)auStack_1a8 + iVar4) =
               *(undefined4 *)((int)afStack_340 + iVar4 + 0xc);
          *(undefined4 *)((int)auStack_1a8 + iVar4 + 4) =
               *(undefined4 *)((int)afStack_340 + iVar4 + 0x10);
          *(undefined4 *)((int)auStack_1a8 + iVar4 + 8) =
               *(undefined4 *)((int)afStack_340 + iVar4 + 0x14);
          *(undefined4 *)((int)auStack_1a8 + iVar4 + 0xc) =
               *(undefined4 *)((int)afStack_340 + iVar4);
          *(undefined4 *)((int)auStack_1a8 + iVar4 + 0x10) =
               *(undefined4 *)((int)afStack_340 + iVar4 + 4);
          *(undefined4 *)((int)auStack_1a8 + iVar4 + 0x14) =
               *(undefined4 *)((int)afStack_340 + iVar4 + 8);
          iVar4 = iVar5;
        } while (iVar5 < 0x180);
        fStack_1c0 = afStack_340[0];
        uStack_1bc = afStack_340[1];
        uStack_1b8 = afStack_340[2];
        uStack_1b4 = afStack_340[3];
        uStack_1b0 = afStack_340[4];
        uStack_1ac = afStack_340[5];
        uStack_28 = auStack_1a8[0];
        uStack_24 = auStack_1a8[1];
        uStack_20 = auStack_1a8[2];
        uStack_1c = auStack_1a8[3];
        uStack_18 = auStack_1a8[4];
        uStack_14 = auStack_1a8[5];
        FUN_00f96060(auStack_1a8,0x22,param_2 & 0x50ffffff,0);
        FUN_00f96060(afStack_340,0x22,param_2 & 0x50ffffff,0);
        pfVar3 = local_3e8;
      }
      local_3e4 = (float)((int)local_3e4 + 1);
      pfVar3 = pfVar3 + 4;
    } while ((int)local_3e4 < *(int *)(param_1 + 0x104) + -1);
  }
  return;
}

// 00A68F80  BoundingCapsule::vf18  size=421  [class]
undefined4 __thiscall BoundingCapsule::vf18(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [12];
  float fStack_24;
  
  D3DXVec3TransformNormal(local_30,param_2,param_1 + 0xb0);
  fVar2 = *(float *)(param_1 + 0xe0) + fStack_3c;
  fVar4 = *(float *)(param_1 + 0xe4) + fStack_38;
  fVar5 = *(float *)(param_1 + 0xe8) + fStack_34;
  fVar3 = *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x104) == 1) {
    fVar2 = *(float *)(param_1 + 0x110) - fVar2;
    fVar4 = *(float *)(param_1 + 0x114) - fVar4;
    fVar5 = *(float *)(param_1 + 0x118) - fVar5;
    if (fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2 < fVar3) {
      return 1;
    }
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x104) + -1) {
      pfVar7 = (float *)(param_1 + 0x114);
      fStack_3c = fVar2;
      fStack_38 = fVar4;
      fStack_34 = fVar5;
      do {
        fStack_24 = pfVar7[1] - pfVar7[5];
        if (((pfVar7[-1] - pfVar7[3] == 0.0) && (*pfVar7 - pfVar7[4] == 0.0)) && (fStack_24 == 0.0))
        {
          fVar1 = pfVar7[-1] - fVar2;
          if ((pfVar7[1] - fVar5) * (pfVar7[1] - fVar5) +
              (*pfVar7 - fVar4) * (*pfVar7 - fVar4) + fVar1 * fVar1 < fVar3) {
            return 1;
          }
        }
        else {
          fVar1 = *(float *)(param_1 + 0x100);
          fVar8 = (float10)thunk_FUN_00de19d0(&fStack_3c,pfVar7 + -1,pfVar7 + 3,0);
          fVar2 = fStack_3c;
          fVar4 = fStack_38;
          fVar5 = fStack_34;
          if (fVar8 < (float10)fVar1) {
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x104) + -1);
    }
  }
  return 0;
}

// 00A69130  FUN_00a69130  size=96  [callgraph]
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

// 00A691B0  FUN_00a691b0  size=93  [callgraph]
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

// 00A69210  FUN_00a69210  size=65  [callgraph]
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

// 00A692D0  FUN_00a692d0  size=113  [callgraph]
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

// 00A69DB0  BoundingCapsule::vf08  size=484  [class]
undefined4 __thiscall BoundingCapsule::vf08(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_11c;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [144];
  undefined4 local_50;
  
  FUN_0118f7b0();
  local_50 = 0;
  local_130 = *(undefined4 *)(param_1 + 0xa0);
  local_12c = *(undefined4 *)(param_1 + 0xa4);
  local_128 = *(undefined4 *)(param_1 + 0xa8);
  local_124 = *(undefined4 *)(param_1 + 0xac);
  local_11c = SQRT(*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
                   *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) +
                   *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78));
  local_118 = SQRT(*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) +
                   *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) +
                   *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88));
  fVar3 = SQRT(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x98) +
               *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90));
  fVar1 = *(float *)(param_1 + 0x88);
  fVar2 = *(float *)(param_1 + 0x98);
  fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x78) / fVar3));
  fVar6 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  local_100 = (float)fVar6;
  local_fc = (float)fVar5;
  fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x74) / (float10)local_118,
                          (float10)*(float *)(param_1 + 0x70) / (float10)local_11c);
  local_f8 = (float)fVar5;
  if (*(int *)(param_1 + 0x104) < 2) {
    piVar4 = (int *)FUN_00910da0();
    (**(code **)(*piVar4 + 8))
              (param_2,local_e0,&local_130,&local_100,*(undefined4 *)(param_1 + 0x100),1);
    return param_2;
  }
  local_110 = *(undefined4 *)(param_1 + 0x110);
  local_10c = *(undefined4 *)(param_1 + 0x114);
  local_108 = *(undefined4 *)(param_1 + 0x118);
  local_104 = *(undefined4 *)(param_1 + 0x11c);
  local_f0 = *(undefined4 *)(param_1 + 0x120);
  local_ec = *(undefined4 *)(param_1 + 0x124);
  local_e8 = *(undefined4 *)(param_1 + 0x128);
  local_e4 = *(undefined4 *)(param_1 + 300);
  piVar4 = (int *)FUN_00910da0();
  (**(code **)(*piVar4 + 0xc))
            (param_2,local_e0,&local_130,&local_100,&local_110,&local_f0,
             *(undefined4 *)(param_1 + 0x100),1);
  return param_2;
}

// 00A69FA0  FUN_00a69fa0  size=69  [callgraph]
void __fastcall FUN_00a69fa0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_00dd29b0(0x180c,0x20,0,0);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0x200;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(int *)(param_1 + 0x18) = iVar1 + 0x1800;
      FUN_00a68710();
      return;
    }
  }
  return;
}

// 00A69FF0  FUN_00a69ff0  size=108  [callgraph]
void __fastcall FUN_00a69ff0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)param_1[6]) {
    do {
      piVar1 = (int *)*piVar2;
      if ((piVar1[6] != 0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 4))(1);
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)param_1[6]);
  }
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

// 00A6A060  FUN_00a6a060  size=116  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00a6a060(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01be99c4 & 1) == 0) {
    _DAT_01be99c4 = _DAT_01be99c4 | 1;
    DAT_01be99c0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be99c0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be99c0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00a692d0(param_1,param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00A6A960  BoundingCapsule::vf1C  size=358  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall BoundingCapsule::vf1C(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char extraout_AL;
  byte bVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined3 uVar6;
  byte unaff_BL;
  int iVar7;
  int iVar8;
  byte bStack_4;
  
  bVar2 = FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar3 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar3 == '\0') {
    bStack_4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  (**(code **)(*param_2 + 0x10))("countOfPoints",7);
  if (extraout_AL == '\0') {
    unaff_BL = 0;
    uVar6 = extraout_var;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x104);
    uVar5 = (**(code **)(*param_2 + 0x14))("countOfPoints",7);
    uVar6 = (undefined3)((uint)uVar5 >> 8);
  }
  bVar2 = bVar2 & bStack_4 & unaff_BL;
  iVar8 = 0;
  if (*(int *)(param_1 + 0x104) < 1) {
    return CONCAT31(uVar6,bVar2);
  }
  iVar7 = param_1 + 0x110;
  do {
    if ((_DAT_01be99c4 & 1) == 0) {
      _DAT_01be99c4 = _DAT_01be99c4 | 1;
      DAT_01be99c0 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar1 = DAT_01be99c0;
    cVar3 = (**(code **)(*param_2 + 0x10))("point",DAT_01be99c0);
    if (cVar3 == '\0') {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_00a692d0(param_2,iVar7);
      (**(code **)(*param_2 + 0x14))("point",iVar1);
    }
    bVar2 = bVar2 & bVar4;
    iVar7 = iVar7 + 0x10;
    iVar8 = iVar8 + 1;
  } while (iVar8 < *(int *)(param_1 + 0x104));
  return CONCAT31((int3)((uint)iVar8 >> 8),bVar2);
}

// 00A6AB40  BoundingCapsule::thunk_vf1C  size=5  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall BoundingCapsule::thunk_vf1C(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char extraout_AL;
  byte bVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined3 uVar6;
  byte unaff_BL;
  int iVar7;
  int iVar8;
  byte bStack_4;
  
  bVar2 = FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar3 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar3 == '\0') {
    bStack_4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  (**(code **)(*param_2 + 0x10))("countOfPoints",7);
  if (extraout_AL == '\0') {
    unaff_BL = 0;
    uVar6 = extraout_var;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x104);
    uVar5 = (**(code **)(*param_2 + 0x14))("countOfPoints",7);
    uVar6 = (undefined3)((uint)uVar5 >> 8);
  }
  bVar2 = bVar2 & bStack_4 & unaff_BL;
  iVar8 = 0;
  if (*(int *)(param_1 + 0x104) < 1) {
    return CONCAT31(uVar6,bVar2);
  }
  iVar7 = param_1 + 0x110;
  do {
    if ((_DAT_01be99c4 & 1) == 0) {
      _DAT_01be99c4 = _DAT_01be99c4 | 1;
      DAT_01be99c0 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar1 = DAT_01be99c0;
    cVar3 = (**(code **)(*param_2 + 0x10))("point",DAT_01be99c0);
    if (cVar3 == '\0') {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_00a692d0(param_2,iVar7);
      (**(code **)(*param_2 + 0x14))("point",iVar1);
    }
    bVar2 = bVar2 & bVar4;
    iVar7 = iVar7 + 0x10;
    iVar8 = iVar8 + 1;
  } while (iVar8 < *(int *)(param_1 + 0x104));
  return CONCAT31((int3)((uint)iVar8 >> 8),bVar2);
}

