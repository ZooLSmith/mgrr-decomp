// src/unsorted/unit_00533F40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00533F40..005349D0, 11 functions

#include "mgrr.h"

// 00533F40  FUN_00533f40  size=74  [run]
void __thiscall FUN_00533f40(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00533F90  FUN_00533f90  size=251  [run]
void __thiscall FUN_00533f90(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00e5e0c0("em01a0_se_mov_body_separate",param_1,0xffffffff,0);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_2 != (undefined4 *)0x0) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
  }
  if (param_3 != (undefined4 *)0x0) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
  }
  FUN_0052b620(&local_20,&local_30);
  FUN_0052b790(&local_20,&local_30);
  if (param_4 != 0) {
    FUN_0052b850(&local_20,&local_30);
  }
  FUN_0052b900(&local_20,&local_30);
  FUN_0052b9c0(&local_20,&local_30);
  *(uint *)(param_1 + 0x1440) = *(uint *)(param_1 + 0x1440) | 2;
  FUN_00c27f40(10,0xbf800000);
  return;
}

// 00534090  FUN_00534090  size=99  [run]
void __thiscall FUN_00534090(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [4];
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_3,uVar1,uVar2);
  (**(code **)(*param_1 + 0x360))(local_160);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 00534100  FUN_00534100  size=79  [run]
void __fastcall FUN_00534100(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_0051a750();
    return;
  case 1:
    FUN_0051a7c0();
    return;
  case 2:
    FUN_0051a860();
    return;
  case 3:
    FUN_0051a990();
    return;
  case 4:
    FUN_0052cf10();
    return;
  case 5:
    FUN_0051aa70();
    return;
  case 6:
    FUN_0051abb0();
    return;
  case 7:
    FUN_0052d1b0();
    return;
  case 8:
    FUN_0052d450();
    return;
  case 9:
    FUN_0052d680();
    return;
  case 10:
    FUN_0052d8c0();
    return;
  case 0xb:
    FUN_0052db00();
    return;
  default:
    return;
  }
}

// 00534240  FUN_00534240  size=74  [run]
void __thiscall FUN_00534240(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00534290  FUN_00534290  size=120  [run]
void __thiscall FUN_00534290(int param_1,int param_2)

{
  undefined1 local_160 [348];
  
  if (param_2 != 0) {
    FUN_004039a0(0,param_1,0);
    if (param_1 + 0x8b0 != 0) {
      FUN_00dffb20(param_1 + 0x8b0);
    }
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    return;
  }
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 00534310  FUN_00534310  size=469  [run]
undefined4 __fastcall FUN_00534310(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined1 local_260 [148];
  int local_1cc;
  int local_160 [12];
  float local_130;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x538);
  if (param_1[0x53e] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar7 = param_1[0x19f];
  bVar3 = false;
  iVar5 = param_1[0x1a1] * 0x150 + iVar7;
  FUN_00445db0();
  FUN_004105d0();
  iVar4 = -1;
  bVar2 = false;
  if (iVar7 != iVar5) {
    do {
      iVar1 = *(int *)(iVar7 + 4);
      if (iVar4 <= iVar1) {
        FUN_00448f50(iVar7);
        bVar2 = true;
        iVar4 = iVar1;
      }
      iVar7 = iVar7 + 0x150;
    } while (iVar7 != iVar5);
    if (bVar2) {
      FUN_0043e160(local_160);
      if ((((local_160[0] == 0) || (local_160[0] == 1)) || (local_160[0] == 2)) ||
         ((local_160[0] == 0x1b0 || (local_160[0] == 0x147)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        iVar7 = FUN_00a81330();
        if (iVar7 != 0) {
          uVar8 = FUN_00a7c8a0();
        }
        param_1[0x21c] = -1;
        uVar6 = 0x8001;
        fVar9 = (float10)FUN_00ddba30(local_130 - (float)param_1[0x25]);
        param_1[0x245] = (int)(float)fVar9;
        iVar7 = FUN_00a98220(local_260);
        if (((iVar7 != 0) && (local_1cc != 0)) && (param_1[0x21c] < 0)) {
          uVar6 = 0x8101;
          bVar3 = true;
        }
        (**(code **)(*param_1 + 0x198))(uVar8,local_160,uVar6);
        uVar8 = 1;
      }
      if ((local_1cc != 0) && (bVar3)) {
        FUN_00a8e5d0(param_1,local_260,0);
      }
      if (param_1[0x53e] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return uVar8;
    }
  }
  if (param_1[0x53e] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 005344F0  FUN_005344f0  size=1088  [run]
/* WARNING: Removing unreachable block (ram,0x0053465e) */
/* WARNING: Removing unreachable block (ram,0x005347dd) */

void FUN_005344f0(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar5;
  float fStack_78;
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
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar2 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar2);
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  if (local_18 < local_1c) {
    pfVar5 = (float *)(local_20 + local_18 * 0xc);
    if (pfVar5 != (float *)0x0) {
      *pfVar5 = local_4c;
      pfVar5[1] = local_48;
      pfVar5[2] = local_44;
    }
    local_18 = local_18 + 1;
  }
  local_64 = *param_4;
  local_60 = param_4[1];
  local_5c = param_4[2];
  local_30 = local_64 - local_4c;
  local_2c = local_60 - local_48;
  local_28 = local_5c - local_44;
  local_74 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c) * 0.16666667;
  local_58 = *param_3;
  local_54 = param_3[1];
  local_50 = param_3[2];
  local_30 = local_30 * 0.16666667;
  local_2c = local_2c * 0.16666667;
  local_28 = local_28 * 0.16666667;
  local_40 = local_58 - local_30;
  local_3c = local_54 - local_2c;
  local_38 = local_50 - local_28;
  local_70 = local_40 - local_4c;
  local_6c = local_3c - local_48;
  local_68 = local_38 - local_44;
  fVar4 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_70 = 0.0;
    local_6c = 1.0;
    local_68 = 0.0;
  }
  pfVar5 = &local_70;
  D3DXVec3Normalize(pfVar5);
  iVar3 = local_20;
  if (local_20 < local_24) {
    pfVar1 = (float *)((int)local_28 + local_20 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fStack_78 * unaff_ESI + local_54;
      pfVar1[1] = local_74 * unaff_ESI + local_50;
      pfVar1[2] = local_70 * unaff_ESI + local_4c;
    }
    iVar3 = local_20 + 1;
    if (iVar3 < local_24) {
      pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_48;
        pfVar1[1] = local_44;
        pfVar1[2] = local_40;
      }
      iVar3 = local_20 + 2;
      if (iVar3 < local_24) {
        pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_60;
          pfVar1[1] = local_5c;
          pfVar1[2] = local_58;
        }
        iVar3 = local_20 + 3;
      }
    }
  }
  local_20 = iVar3;
  local_48 = *param_3 + local_38;
  local_44 = param_3[1] + fStack_34;
  local_40 = local_30 + param_3[2];
  fStack_78 = local_6c - local_48;
  local_74 = local_68 - local_44;
  local_70 = local_64 - local_40;
  fVar4 = local_70 * local_70 + local_74 * local_74 + fStack_78 * fStack_78;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_78 = 0.0;
    local_74 = 1.0;
    local_70 = 0.0;
  }
  D3DXVec3Normalize(&fStack_78,&fStack_78);
  fStack_78 = fStack_78 * (float)pfVar5;
  fVar4 = local_28;
  if ((int)local_28 < (int)local_2c) {
    pfVar1 = (float *)((int)local_30 + (int)local_28 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_50;
      pfVar1[1] = local_4c;
      pfVar1[2] = local_48;
    }
    fVar4 = (float)((int)local_28 + 1);
    if ((int)fVar4 < (int)local_2c) {
      pfVar1 = (float *)((int)local_30 + (int)fVar4 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_74 - unaff_EDI * (float)pfVar5;
        pfVar1[1] = local_70 - unaff_ESI * (float)pfVar5;
        pfVar1[2] = local_6c - fStack_78;
      }
      fVar4 = (float)((int)local_28 + 2);
      if ((int)fVar4 < (int)local_2c) {
        pfVar5 = (float *)((int)local_30 + (int)fVar4 * 0xc);
        if (pfVar5 == (float *)0x0) {
          fVar4 = (float)((int)local_28 + 3);
        }
        else {
          *pfVar5 = local_74;
          pfVar5[1] = local_70;
          pfVar5[2] = local_6c;
          fVar4 = (float)((int)local_28 + 3);
        }
      }
    }
  }
  local_28 = fVar4;
  FUN_00a5e090(&fStack_34);
  if ((local_30 != 0.0) && (local_28 = 0.0, local_24 != 0)) {
    FUN_00dd48d0(local_30,0);
  }
  return;
}

// 00534930  FUN_00534930  size=74  [run]
void __thiscall FUN_00534930(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00534980  FUN_00534980  size=74  [run]
void __thiscall FUN_00534980(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 005349D0  FUN_005349d0  size=176  [run]
void __thiscall FUN_005349d0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_00a8c930(uVar2,local_160);
  return;
}

