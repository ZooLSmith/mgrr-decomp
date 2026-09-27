// src/enemy/em0010/Em0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAB940..00B60310, 526 functions

#include "mgrr.h"
#include "Em0010.h"

// 00AAB940  Em0010::Em0010  size=502  [class]
undefined4 * __fastcall Em0010::Em0010(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x4b8] = 0;
  cEspControler::cEspControler();
  FUN_00904d60();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a7c930();
  FUN_00a603a0();
  FUN_00a603a0();
  return param_1;
}

// 00AABB40  Em0010::vf04  size=6  [class]
undefined * Em0010::vf04(void)

{
  return &DAT_01be9d20;
}

// 00AABB50  Em0010::vf17C  size=6  [class]
undefined4 Em0010::vf17C(void)

{
  return 1;
}

// 00AABB60  Em0010::vf180  size=6  [class]
undefined4 Em0010::vf180(void)

{
  return 1;
}

// 00AABB70  Em0010::vf140  size=39  [class]
float10 Em0010::vf140(void)

{
  int iVar1;
  
  iVar1 = FUN_00b34d30();
  if (iVar1 == 0) {
    iVar1 = FUN_00b34d50();
    if (iVar1 == 0) {
      return (float10)4.0;
    }
  }
  return (float10)4.8;
}

// 00AABBA0  Em0010::vf144  size=39  [class]
float10 Em0010::vf144(void)

{
  int iVar1;
  
  iVar1 = FUN_00b34d30();
  if (iVar1 == 0) {
    iVar1 = FUN_00b34d50();
    if (iVar1 == 0) {
      return (float10)4.1;
    }
  }
  return (float10)4.92;
}

// 00AABBD0  Em0010::vf20C  size=7  [class]
float10 Em0010::vf20C(void)

{
  return (float10)1.5;
}

// 00AABBE0  Em0010::vf1E0  size=36  [class]
void __fastcall Em0010::vf1E0(int param_1)

{
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  return;
}

// 00AABC10  Em0010::vf278  size=17  [class]
void Em0010::vf278(void)

{
  FUN_00b39f00(0xa0001,0,0,0);
  return;
}

// 00AABC30  Em0010::vf1E8  size=38  [class]
void __fastcall Em0010::vf1E8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x12f0) + 8))(0x41200000,0,0);
  return;
}

// 00AABC60  Em0010::vf1EC  size=38  [class]
void __fastcall Em0010::vf1EC(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x12f0) + 8))(0x41200000,0,0);
  return;
}

// 00AABC90  Em0010::vf1E4  size=37  [class]
void __fastcall Em0010::vf1E4(int param_1)

{
  if ((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0x370) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
  }
  return;
}

// 00AABCC0  FUN_00aabcc0  size=242  [callgraph]
void FUN_00aabcc0(void)

{
  cXml::cXml_7();
  cXml::cXml_7();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB6820  Em0010::vf00  size=30  [class]
undefined4 __thiscall Em0010::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aabcc0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B29220  Em0010::vfFC  size=30  [class]
void __fastcall Em0010::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  *(undefined4 *)(param_1 + 0x1ab4) = 0xffffffff;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  return;
}

// 00B29240  Em0010::vf100  size=59  [class]
void __fastcall Em0010::vf100(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf100();
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfeffffff;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
    }
  }
  return;
}

// 00B29280  Em0010::vf104  size=66  [class]
void __fastcall Em0010::vf104(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  Bh0064::vf104();
  uVar1 = FUN_00e678d0(2,0,0xffffffff);
  iVar2 = FUN_00e7a5f0(uVar1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x31c))();
  }
  param_1[0x5a3] = 1;
  return;
}

// 00B292D0  Em0010::vf10C  size=35  [class]
undefined4 Em0010::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0x30030) && (param_1 != 0x30070)) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 00B29300  Em0010::vf1D0  size=3  [class]
void Em0010::vf1D0(void)

{
  return;
}

// 00B29310  Em0010::vf158  size=5  [class]
undefined4 Em0010::vf158(void)

{
  return 0;
}

// 00B29320  Em0010::vf184  size=6  [class]
undefined4 Em0010::vf184(void)

{
  return 0xffffffff;
}

// 00B29330  Em0010::vf188  size=3  [class]
void Em0010::vf188(void)

{
  return;
}

// 00B29370  FUN_00b29370  size=176  [between]
void __fastcall FUN_00b29370(int *param_1)

{
  param_1[0x375] = param_1[0x375] | 0x800000;
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x197e),0,0x3e99999a,0x3f800000,0,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b293db;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b293db:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B29440  FUN_00b29440  size=341  [between]
void __fastcall FUN_00b29440(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  int local_8;
  undefined2 local_4;
  
  local_8 = *(int *)((int)param_1 + 0x198a);
  local_4 = *(undefined2 *)((int)param_1 + 0x198e);
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    iVar2 = (int)*(short *)((int)&local_8 + ((int)(short)param_1[0x2ad] % 3) * 2);
    if (param_1[0x4f7] == 2) {
      iVar2 = 0x4d;
    }
    if (param_1[0x4f7] == 3) {
      iVar2 = 0x121;
    }
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    FUN_00aa4080(iVar2,0,0x3e088889,0x3f800000,0,0,(float)fVar3);
    sVar1 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    local_8 = (int)sVar1;
    param_1[0x248] = (int)((float)local_8 * 60.0);
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x249] = 0;
    param_1[0x250] = (int)sVar1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2955e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2955e:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00B295A0  FUN_00b295a0  size=198  [between]
void __fastcall FUN_00b295a0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1abc) != 0) {
    iVar2 = FUN_00a12210((int)*(short *)(param_1 + 0x1ac0));
    if (iVar2 == 0) {
      FUN_00a8d230(&local_20);
    }
    else {
      local_20 = *(undefined4 *)(iVar2 + 0x40);
      local_1c = *(undefined4 *)(iVar2 + 0x44);
      local_18 = *(undefined4 *)(iVar2 + 0x48);
      local_14 = *(undefined4 *)(iVar2 + 0x4c);
    }
    iVar2 = FUN_00a12210(5);
    thunk_FUN_00dde510(&local_28,local_24,&local_20,iVar2 + 0x40);
    local_28 = local_28 * 1.2732395;
    fVar1 = -1.0;
    if ((local_28 < -1.0) || (fVar1 = 1.0, 1.0 < local_28)) {
      local_28 = fVar1;
    }
    *(float *)(param_1 + 0x1590) =
         (local_28 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
  }
  return;
}

// 00B29670  FUN_00b29670  size=290  [between]
void __fastcall FUN_00b29670(int *param_1)

{
  int iVar1;
  
  param_1[0x5a3] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x44f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x6af] != 0) {
      FUN_00a8e880(param_1[0x6af] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x3d0efa35,0x3e32b8c2);
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x450,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0;
      return;
    }
  }
  return;
}

// 00B297B0  FUN_00b297b0  size=198  [between]
void __fastcall FUN_00b297b0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1abc) != 0) {
    iVar2 = FUN_00a12210((int)*(short *)(param_1 + 0x1ac0));
    if (iVar2 == 0) {
      FUN_00a8d230(&local_20);
    }
    else {
      local_20 = *(undefined4 *)(iVar2 + 0x40);
      local_1c = *(undefined4 *)(iVar2 + 0x44);
      local_18 = *(undefined4 *)(iVar2 + 0x48);
      local_14 = *(undefined4 *)(iVar2 + 0x4c);
    }
    iVar2 = FUN_00a12210(5);
    thunk_FUN_00dde510(&local_28,local_24,&local_20,iVar2 + 0x40);
    local_28 = local_28 * 1.2732395;
    fVar1 = -1.0;
    if ((local_28 < -1.0) || (fVar1 = 1.0, 1.0 < local_28)) {
      local_28 = fVar1;
    }
    *(float *)(param_1 + 0x1590) =
         (local_28 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
  }
  return;
}

// 00B29880  FUN_00b29880  size=20  [between]
void __fastcall FUN_00b29880(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  return;
}

// 00B298A0  FUN_00b298a0  size=440  [between]
/* WARNING: Removing unreachable block (ram,0x00b29922) */
/* WARNING: Removing unreachable block (ram,0x00b2994d) */

void __fastcall FUN_00b298a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20 [8];
  
  local_20[0] = 0x23;
  local_20[1] = 0x24;
  local_20[2] = 0x25;
  local_20[3] = 0x26;
  local_20[4] = 0x85;
  local_20[5] = 0x86;
  local_20[6] = 0x87;
  local_20[7] = 0x88;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    uVar1 = FUN_00dde2a0(0,100);
    uVar2 = local_20[uVar1 & 3];
    if (*(int *)(param_1 + 0x13dc) == 2) {
      uVar1 = FUN_00dde2a0(0,100);
      uVar2 = local_20[(uVar1 & 3) + 4];
    }
    if ((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) {
      uVar2 = 0x465;
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    uVar2 = 5;
    if (*(int *)(param_1 + 0x13dc) == 2) {
      uVar2 = 0x2e5;
    }
    if ((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) {
      uVar2 = 0x454;
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      return;
    }
  }
  return;
}

// 00B29A70  FUN_00b29a70  size=685  [between]
void __fastcall FUN_00b29a70(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_18 [6];
  
  iVar4 = 4;
  local_18[1] = 0x2e3;
  local_18[2] = 0x2e5;
  local_18[3] = 7;
  local_18[4] = 8;
  local_18[5] = 9;
  local_18[0] = 0x2e7;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = FUN_00dde2a0(0,100);
    if ((uVar2 & 0xffff) % 3 == 0) {
      iVar4 = 5;
    }
    uVar2 = FUN_00dde2a0(0,1000);
    if ((uVar2 & 0xffff) % 0x32 == 0) {
      uVar2 = FUN_00dde2a0(0,2);
      iVar4 = local_18[(uVar2 & 0xffff) + 3];
    }
    if (*(int *)(param_1 + 0x13dc) == 2) {
      iVar4 = 0x30;
    }
    FUN_00aa4080(iVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1740) = 0;
    sVar1 = FUN_00dde2d0(0,3);
    local_18[0] = (int)sVar1;
    *(float *)(param_1 + 0x924) = (float)local_18[0] * 60.0 + 180.0;
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 == 2) {
      sVar1 = FUN_00dde2d0(0,0x1e);
      local_18[0] = (int)sVar1;
      *(float *)(param_1 + 0x924) = (float)local_18[0] + 60.0;
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(int *)(param_1 + 0x13dc) != 2) || (0.0 < *(float *)(param_1 + 0x924))) {
LAB_00b29cc0:
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x61c) = 0;
      }
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 2:
    sVar1 = FUN_00dde2d0(0,1);
    iVar4 = local_18[sVar1 + 1];
    if ((*(int *)(param_1 + 0x628) != 2) &&
       (uVar2 = FUN_00dde2a0(0,100), (uVar2 & 0xffff) % 0x14 == 0)) {
      iVar4 = 0x2e4;
    }
    iVar3 = FUN_00a82d50();
    if (iVar3 == 2) {
      sVar1 = FUN_00dde2d0(0,0);
      iVar4 = local_18[sVar1];
    }
    FUN_00aa4080(iVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto LAB_00b29cc0;
  }
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x924)) {
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 00B29D40  FUN_00b29d40  size=193  [between]
void __fastcall FUN_00b29d40(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    fVar2 = (float10)FUN_00dde300(0,0x41f00000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)(float)(fVar2 + (float10)60.0);
    param_1[0x249] = 0x40400000;
  }
  else if (param_1[0x187] != 1) goto LAB_00b29dde;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b29dde:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00B29E20  FUN_00b29e20  size=347  [between]
void __fastcall FUN_00b29e20(int *param_1)

{
  float fVar1;
  short sVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    sVar2 = *(short *)((int)param_1 + 0x199a);
    FUN_00aa4080((int)sVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    fVar3 = (float10)FUN_00dde300(0,0x3f000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)(float)((float10)60.0 + fVar3 * (float10)60.0);
    param_1[0x249] = 0x40400000;
    if (((param_1[0x376] & 0x2000U) != 0) && (sVar2 == 0x481)) {
      FUN_00a92f90();
      FUN_00e36b50(0,1,0);
    }
    param_1[0x376] = param_1[0x376] & 0xffffdfff;
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00b29f58;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b29f58:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00B29FA0  FUN_00b29fa0  size=240  [between]
void __fastcall FUN_00b29fa0(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080((int)*(short *)(param_1 + 0x197c),0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
    sVar1 = FUN_00dde2d0(3,6);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x920) = (float)(int)sVar1 * 30.0 + 90.0;
    sVar1 = FUN_00dde2d0(1,3);
    *(undefined4 *)(param_1 + 0x1740) = 0;
    *(float *)(param_1 + 0x920) = (float)(int)sVar1 * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) + *(float *)(param_1 + 0x910);
  return;
}

// 00B2A090  FUN_00b2a090  size=380  [between]
void __fastcall FUN_00b2a090(int *param_1)

{
  short sVar1;
  short sVar2;
  float10 fVar3;
  float fVar4;
  
  if (param_1[0x187] == 0) {
    sVar2 = *(short *)((int)param_1 + 0x197e);
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      sVar2 = (short)param_1[0x660];
    }
    else if (sVar1 == 2) {
      sVar2 = *(short *)((int)param_1 + 0x1982);
    }
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)sVar2,0,0x3e99999a,0x3f800000,0,(float)fVar3,fVar4);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5d0] = 0;
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2a1b9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b2a1b9:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x63c] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B2A210  FUN_00b2a210  size=312  [between]
void __fastcall FUN_00b2a210(int *param_1)

{
  short sVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_1[0x187] == 0) {
    fVar2 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar3 = (float)fVar2;
    fVar2 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)(short)param_1[0x662],0,0x3e99999a,0x3f800000,0,(float)fVar2,fVar3);
    sVar1 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
  }
  else if (param_1[0x187] != 1) goto LAB_00b2a2f5;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar3 - (float)param_1[0x244]);
  if (fVar3 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b2a2f5:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x63c] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B2A4E0  FUN_00b2a4e0  size=23  [between]
void __fastcall FUN_00b2a4e0(int *param_1)

{
  if ((param_1[0x376] & 0x2000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b2a4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B2A510  FUN_00b2a510  size=138  [between]
bool __fastcall FUN_00b2a510(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((*(uint *)(param_1 + 0xdd4) & 0x1000) != 0) {
    return false;
  }
  if ((*(uint *)(param_1 + 0xdd4) & 0x2000) == 0) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x2000;
    uVar2 = FUN_00ac8660(0,0x5d);
    *(undefined4 *)(param_1 + 0x1ad0) = uVar2;
    uVar2 = FUN_00ac8660(0,0x5e);
    sVar1 = FUN_00dde2d0(0,uVar2);
    *(int *)(param_1 + 0x1ad0) = *(int *)(param_1 + 0x1ad0) + (int)sVar1;
    *(undefined4 *)(param_1 + 0x1ad4) = 1;
    return true;
  }
  *(int *)(param_1 + 0x1ad4) = *(int *)(param_1 + 0x1ad4) + 1;
  bVar3 = *(int *)(param_1 + 0x1ad4) != *(int *)(param_1 + 0x1ad0);
  if (!bVar3) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffdfff;
  }
  return bVar3;
}

// 00B2A5F0  FUN_00b2a5f0  size=87  [between]
undefined4 __fastcall FUN_00b2a5f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x5a) {
      *(undefined4 *)(param_1 + 0x13bc) = 0x41200000;
      *(undefined4 *)(param_1 + 0x13b8) = 0;
      *(undefined4 *)(param_1 + 0x13c0) = 1;
      *(undefined4 *)(param_1 + 0x13dc) = 0;
      return 1;
    }
  }
  return 0;
}

// 00B2A660  FUN_00b2a660  size=222  [between]
void FUN_00b2a660(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    uVar4 = FUN_00a81330();
    FUN_00a9e0d0(uVar4);
    FUN_00a81330();
    piVar5 = (int *)FUN_00a7c8a0();
    iVar3 = (**(code **)(*piVar5 + 0xd8))(1);
    if (iVar3 != 0) {
      uStack_24 = 0;
      fStack_20 = 10.0;
      fStack_1c = 0.0;
      FUN_0091a7e0(&uStack_24);
      sVar1 = FUN_00dde2d0(5,10);
      sVar2 = FUN_00dde2d0(10,0x14);
      fStack_1c = (float)(int)sVar2 * 0.017453292;
      uStack_24 = 0;
      fStack_20 = (float)(int)sVar1 * 0.017453292;
      FUN_0091a820(&uStack_24);
    }
    FUN_00a7c950();
  }
  return;
}

// 00B2A740  Em0010::vf2C  size=63  [class]
void Em0010::vf2C(void)

{
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41100000,0);
  return;
}

// 00B2A800  Em0010::vf110  size=438  [class]
void __thiscall Em0010::vf110(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf110(param_2);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x40000;
    return;
  }
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfffbffff;
  return;
}

// 00B2A9C0  Em0010::vf1C  size=206  [class]
void Em0010::vf1C(void)

{
  int iVar1;
  int *piVar2;
  
  BehaviorEmBase::vf1C();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x1c))();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x1c))();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00b2aa89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x1c))();
      return;
    }
  }
  return;
}

// 00B2AA90  Em0010::vf20  size=206  [class]
void Em0010::vf20(void)

{
  int iVar1;
  int *piVar2;
  
  BehaviorEmBase::vf20();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00b2ab59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 00B2AB60  FUN_00b2ab60  size=263  [callgraph]
void __fastcall FUN_00b2ab60(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("ASS WAIT",0x3e088889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x36,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x32,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x35,0x3e088889,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    sVar1 = FUN_00dde2d0(1,3);
    *(float *)(param_1 + 0x920) = ((float)(int)sVar1 + 1.0) * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2AC70  FUN_00b2ac70  size=445  [callgraph]
void __fastcall FUN_00b2ac70(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  
  iVar1 = param_1[0x186];
  uVar3 = 0x43;
  if (iVar1 == 0x20002) {
    uVar3 = 0x59;
  }
  if (iVar1 == 0x20003) {
    uVar3 = 0x5a;
  }
  if (iVar1 == 0x20004) {
    uVar3 = 0x5b;
  }
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    FUN_00a9f4c0("ASS WALK",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x39,0x3e888889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar3,0x3e888889,0x80100);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x38,0x3e888889,0x80000);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar2 * 30.0 + 90.0);
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2add9;
  FUN_00a947e0(0,0,param_1[0x564],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2add9:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x63c] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B2AE30  FUN_00b2ae30  size=163  [callgraph]
void __fastcall FUN_00b2ae30(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4d,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2ae96;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2ae96:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B2AFC0  FUN_00b2afc0  size=272  [callgraph]
void __fastcall FUN_00b2afc0(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("RPG WAIT",0x3e088889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x112,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x10e,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x111,0x3e088889,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    sVar1 = FUN_00dde2d0(1,3);
    *(float *)(param_1 + 0x920) = ((float)(int)sVar1 + 1.0) * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2B0D0  FUN_00b2b0d0  size=408  [callgraph]
void __fastcall FUN_00b2b0d0(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  
  iVar1 = param_1[0x186];
  uVar3 = 0x11b;
  if (iVar1 == 0x30002) {
    uVar3 = 0x125;
  }
  if (iVar1 == 0x30003) {
    uVar3 = 0x126;
  }
  if (iVar1 == 0x30004) {
    uVar3 = 0x127;
  }
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    FUN_00a9f4c0("RPG WALK",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x115,0x3e888889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar3,0x3e888889,0x80100);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x114,0x3e888889,0x80000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2b214;
  FUN_00a947e0(0,0,param_1[0x564],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2b214:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x63c] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
  }
  return;
}

// 00B2B270  FUN_00b2b270  size=166  [callgraph]
void __fastcall FUN_00b2b270(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x121,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2b2d9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2b2d9:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B2B350  FUN_00b2b350  size=129  [callgraph]
void __thiscall FUN_00b2b350(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    FUN_00a8ce90(local_30,local_20);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar3;
    D3DXVec3TransformNormal(local_30,local_30,param_2 + 0x10);
    fVar1 = *(float *)(param_2 + 0x44);
    fVar2 = *(float *)(param_2 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + fStack_38;
    *(float *)(param_1 + 0x58) = fVar2 + fStack_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 00B2B450  FUN_00b2b450  size=50  [callgraph]
void __fastcall FUN_00b2b450(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
  }
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  return;
}

// 00B2B4A0  FUN_00b2b4a0  size=323  [callgraph]
void __fastcall FUN_00b2b4a0(int *param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2fd,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2b562;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,5);
    param_1[0x3ef] = (int)((float)(int)sVar1 * 60.0 + 600.0);
  }
LAB_00b2b562:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  }
  return;
}

// 00B2B880  FUN_00b2b880  size=63  [callgraph]
void FUN_00b2b880(void)

{
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 00B2B8C0  FUN_00b2b8c0  size=63  [callgraph]
void FUN_00b2b8c0(void)

{
  FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(2,0,0,0);
  return;
}

// 00B2B900  FUN_00b2b900  size=63  [callgraph]
void FUN_00b2b900(void)

{
  FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 00B2B940  FUN_00b2b940  size=47  [callgraph]
void __fastcall FUN_00b2b940(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x61c) == 0) &&
     (*(undefined4 *)(param_1 + 0x61c) = 1, *(int *)(param_1 + 0xa08) != 0)) {
    uVar1 = FUN_009f8b40();
    FUN_009f8ae0(uVar1);
  }
  return;
}

// 00B2B970  FUN_00b2b970  size=100  [callgraph]
void __fastcall FUN_00b2b970(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    thunk_FUN_00a8c480();
    *(undefined4 *)(param_1 + 0xa64) = 1;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xa60) = 0x41200000;
    *(undefined4 *)(param_1 + 0xa64) = 1;
  }
  return;
}

// 00B2B9E0  FUN_00b2b9e0  size=82  [callgraph]
void __fastcall FUN_00b2b9e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x187] = 1;
    (*pcVar1)();
    if (param_1[0x282] != 0) {
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a8c760(0x31);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00B2BA60  FUN_00b2ba60  size=1  [callgraph]
void FUN_00b2ba60(void)

{
  return;
}

// 00B2BA90  FUN_00b2ba90  size=56  [callgraph]
void __fastcall FUN_00b2ba90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    return;
  }
  FUN_00ba6810(1,1);
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B2BAE0  FUN_00b2bae0  size=1  [callgraph]
void FUN_00b2bae0(void)

{
  return;
}

// 00B2BB10  Em0010::vf294  size=1  [class]
void Em0010::vf294(void)

{
  return;
}

// 00B2BB20  Em0010::vf2AC  size=15  [class]
void __fastcall Em0010::vf2AC(int param_1)

{
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffffbf;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x20;
  return;
}

// 00B2BB30  Em0010::vf2B0  size=1  [class]
void Em0010::vf2B0(void)

{
  return;
}

// 00B2BB40  Em0010::vf2BC  size=1  [class]
void Em0010::vf2BC(void)

{
  return;
}

// 00B2BB50  Em0010::vf2C0  size=1  [class]
void Em0010::vf2C0(void)

{
  return;
}

// 00B2BB60  Em0010::vf2C4  size=1  [class]
void Em0010::vf2C4(void)

{
  return;
}

// 00B2BB70  Em0010::vf2C8  size=1  [class]
void Em0010::vf2C8(void)

{
  return;
}

// 00B2BB80  Em0010::vf2CC  size=1  [class]
void Em0010::vf2CC(void)

{
  return;
}

// 00B2BB90  Em0010::vf2D0  size=1  [class]
void Em0010::vf2D0(void)

{
  return;
}

// 00B2BBB0  FUN_00b2bbb0  size=70  [callgraph]
void __thiscall FUN_00b2bbb0(int param_1,undefined4 param_2)

{
  FUN_00a9e290(param_2,0,0,0x3f800000,0x8000000,0,0x3f800000);
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 1;
  return;
}

// 00B2BC00  FUN_00b2bc00  size=70  [callgraph]
void __thiscall FUN_00b2bc00(int param_1,undefined4 param_2)

{
  FUN_00a9e290(param_2,0,0,0x3f800000,0x8000000,0,0x3f800000);
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 1;
  return;
}

// 00B2BCA0  FUN_00b2bca0  size=80  [callgraph]
void __thiscall FUN_00b2bca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a9e290(param_2,0,0,0x3f800000,0x8000000,0,0x3f800000);
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x8c0) = param_3;
  *(undefined4 *)(param_1 + 0x8c4) = 1;
  return;
}

// 00B2BCF0  FUN_00b2bcf0  size=210  [callgraph]
void __fastcall FUN_00b2bcf0(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0x367;
  if ((param_1[0x375] & 0x20000U) != 0) {
    if (param_1[0x372] == 8) {
      uVar2 = 0x40;
    }
    else if (param_1[0x372] != 9) goto LAB_00b2bd20;
    uVar1 = 0x491;
  }
LAB_00b2bd20:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2bd85;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2bd85:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 00B2BDE0  FUN_00b2bde0  size=259  [callgraph]
void __fastcall FUN_00b2bde0(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x368;
  if ((param_1[0x375] & 0x20000U) != 0) {
    if (param_1[0x372] == 8) {
      uVar2 = 0x499;
    }
    else if (param_1[0x372] == 9) {
      uVar2 = 0x493;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2be99;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x422] = 0x41f00000;
  }
LAB_00b2be99:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00B2BF00  FUN_00b2bf00  size=140  [callgraph]
void __fastcall FUN_00b2bf00(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x36b;
  if ((*(uint *)(param_1 + 0xdd4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xdc8) == 8) {
      uVar1 = 0x49b;
    }
    else if (*(int *)(param_1 + 0xdc8) == 9) {
      uVar1 = 0x495;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2BFA0  FUN_00b2bfa0  size=167  [callgraph]
void __fastcall FUN_00b2bfa0(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x36d;
  if ((param_1[0x375] & 0x20000U) != 0) {
    if (param_1[0x372] == 8) {
      uVar2 = 0x49c;
    }
    else if (param_1[0x372] == 9) {
      uVar2 = 0x496;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2c045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2C070  FUN_00b2c070  size=258  [callgraph]
void __fastcall FUN_00b2c070(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0;
    uVar1 = (uint)param_1[0x375] >> 0x11 & 1;
    uVar2 = 0x374;
    if (uVar1 != 0) {
      if (param_1[0x372] == 8) {
        uVar2 = 0x4a4;
        uVar3 = 0x40;
      }
      else if (param_1[0x372] == 9) {
        uVar2 = 0x4a3;
      }
    }
    if (param_1[0x186] == 0x6000a) {
      uVar3 = 0;
      uVar2 = 0x375;
      if (uVar1 != 0) {
        if (param_1[0x372] == 8) {
          uVar2 = 0x4a3;
          uVar3 = 0x40;
        }
        else if (param_1[0x372] == 9) {
          uVar2 = 0x4a4;
        }
      }
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b2c13e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b2c13e:
  (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x393702d3,0);
  return;
}

// 00B2C180  FUN_00b2c180  size=102  [callgraph]
void __fastcall FUN_00b2c180(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a94bc0(2,0);
  uVar1 = 0x36c;
  if ((*(uint *)(param_1 + 0xdd4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xdc8) == 8) {
      uVar1 = 0x49d;
    }
    if (*(int *)(param_1 + 0xdc8) == 9) {
      uVar1 = 0x497;
    }
  }
  FUN_00aa4080(uVar1,2,0,0x3f800000,0x8000010,0,0x3f800000);
  return;
}

// 00B2C280  FUN_00b2c280  size=220  [callgraph]
void __fastcall FUN_00b2c280(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x37f;
    if ((*(byte *)(param_1 + 0x5d2) & 2) != 0) {
      uVar1 = 0x388;
    }
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2c31f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x422] = 0x41f00000;
  }
LAB_00b2c31f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00B2C370  FUN_00b2c370  size=224  [callgraph]
void __fastcall FUN_00b2c370(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("HAIZURI ASS WAIT",0x3e088889,0,0);
    uVar1 = (*(uint *)(param_1 + 0x1748) & 2) << 5 | 0x80000;
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x386,0x3e088889,uVar1);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x382,0x3e088889,uVar1);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x385,0x3e088889,uVar1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2C460  FUN_00b2c460  size=136  [callgraph]
void __fastcall FUN_00b2c460(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(900,0,0x3e088889,0x3f800000,(param_1[0x5d2] & 2U | 0x400000) << 5,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2c4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2C4F0  FUN_00b2c4f0  size=79  [callgraph]
void __fastcall FUN_00b2c4f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1748);
  FUN_00a94bc0(2,0);
  FUN_00aa4080(899,2,0,0x3f800000,(uVar1 & 2) << 5 | 0x8000010,0,0x3f800000);
  return;
}

// 00B2C550  FUN_00b2c550  size=145  [callgraph]
void __fastcall FUN_00b2c550(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 2) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x389,0,0x3e088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2c5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2C600  FUN_00b2c600  size=145  [callgraph]
void __fastcall FUN_00b2c600(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 2) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x53c,0,0x3e2aaaab,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2c68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2C6B0  FUN_00b2c6b0  size=96  [callgraph]
void __fastcall FUN_00b2c6b0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3a5,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2C720  FUN_00b2c720  size=99  [callgraph]
void __fastcall FUN_00b2c720(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3a8,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2C790  FUN_00b2c790  size=226  [callgraph]
void __fastcall FUN_00b2c790(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("KamaeWaitSlider",0x3e2aaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x3ac,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x3a9,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x3ad,0x3e2aaaab,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xfa4) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2C890  FUN_00b2c890  size=99  [callgraph]
void __fastcall FUN_00b2c890(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3aa,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2C940  FUN_00b2c940  size=124  [callgraph]
void __fastcall FUN_00b2c940(int param_1)

{
  float fVar1;
  float local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
    thunk_FUN_00dde510(&local_8,local_4,*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x40);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((local_8 < -1.0) || (fVar1 = 1.0, 1.0 < local_8)) {
      local_8 = fVar1;
    }
    *(float *)(param_1 + 0x1590) =
         (local_8 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
  }
  return;
}

// 00B2C9E0  FUN_00b2c9e0  size=124  [callgraph]
void __fastcall FUN_00b2c9e0(int param_1)

{
  float fVar1;
  float local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
    thunk_FUN_00dde510(&local_8,local_4,*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x40);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((local_8 < -1.0) || (fVar1 = 1.0, 1.0 < local_8)) {
      local_8 = fVar1;
    }
    *(float *)(param_1 + 0x1590) =
         (local_8 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
  }
  return;
}

// 00B2CAB0  FUN_00b2cab0  size=117  [callgraph]
void __fastcall FUN_00b2cab0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x41e;
    if (*(int *)(param_1 + 0x618) == 0x10000017) {
      uVar1 = 0x41f;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CB40  FUN_00b2cb40  size=117  [callgraph]
void __fastcall FUN_00b2cb40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x426;
    if (*(int *)(param_1 + 0x618) == 0x10000017) {
      uVar1 = 0x427;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CCA0  FUN_00b2cca0  size=138  [callgraph]
void __fastcall FUN_00b2cca0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x220))(0x41200000);
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      uVar2 = 0x423;
    }
    else {
      uVar2 = 0x424;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CD40  FUN_00b2cd40  size=170  [callgraph]
void __fastcall FUN_00b2cd40(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x3f2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xfa4) = 1;
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x3f3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CE10  FUN_00b2ce10  size=109  [callgraph]
void __fastcall FUN_00b2ce10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_00b2ce6a;
  }
  FUN_00aa4120(0x3c0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_00b2ce6a:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CED0  FUN_00b2ced0  size=109  [callgraph]
void __fastcall FUN_00b2ced0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_00b2cf2a;
  }
  FUN_00aa4080(0x438,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_00b2cf2a:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CF50  FUN_00b2cf50  size=99  [callgraph]
void __fastcall FUN_00b2cf50(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x430,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2CFD0  FUN_00b2cfd0  size=99  [callgraph]
void __fastcall FUN_00b2cfd0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x431,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2D040  FUN_00b2d040  size=304  [callgraph]
void __fastcall FUN_00b2d040(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x433,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x434,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x435,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B2D1A0  FUN_00b2d1a0  size=99  [callgraph]
void __fastcall FUN_00b2d1a0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x418,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2D210  FUN_00b2d210  size=40  [callgraph]
void __fastcall FUN_00b2d210(int param_1)

{
  *(undefined4 *)(param_1 + 0x19d4) = 0;
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 00B2D2E0  FUN_00b2d2e0  size=952  [callgraph]
void __fastcall FUN_00b2d2e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a8,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(byte *)((int)param_1 + 0xdd6) & 1) != 0) {
      param_1[0x375] = param_1[0x375] & 0xfffeffff;
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x250] == param_1[0x6b1]) {
        param_1[0x187] = 8;
      }
    }
    iVar1 = FUN_00a8c760(0xf);
    iVar2 = 0x2b2;
    goto LAB_00b2d4a2;
  case 2:
    FUN_00aa4080(0x2b6,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x2a9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(byte *)((int)param_1 + 0xdd6) & 1) != 0) {
      param_1[0x375] = param_1[0x375] & 0xfffeffff;
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x250] == param_1[0x6b1]) {
        param_1[0x187] = 8;
      }
    }
    iVar1 = FUN_00a8c760(0xf);
    iVar2 = 0x2b1;
LAB_00b2d4a2:
    if ((iVar1 != 0) && ((param_1[0x375] & 0x8000U) != 0)) {
      param_1[0x375] = param_1[0x375] & 0xffff7fff;
      param_1[0x251] = iVar2;
      param_1[0x187] = 10;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x251] = iVar2;
      param_1[0x187] = 10;
    }
    break;
  case 6:
    FUN_00aa4080(0x2b7,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0;
    }
    break;
  case 8:
    FUN_00aa4080(0x2b8,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    break;
  case 10:
    FUN_00aa4080(param_1[0x251],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B2D6E0  FUN_00b2d6e0  size=227  [callgraph]
void __fastcall FUN_00b2d6e0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2b4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2d768;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b2d768:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B2D970  FUN_00b2d970  size=159  [callgraph]
void __fastcall FUN_00b2d970(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x280,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2d9f8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b2d9f8:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B2DA20  FUN_00b2da20  size=159  [callgraph]
void __fastcall FUN_00b2da20(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x281,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2daa8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b2daa8:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B2DAD0  FUN_00b2dad0  size=159  [callgraph]
void __fastcall FUN_00b2dad0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x282,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b2db58;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b2db58:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B2DB90  FUN_00b2db90  size=92  [callgraph]
void __fastcall FUN_00b2db90(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x454,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2DC20  FUN_00b2dc20  size=169  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b2dc81) */

void __fastcall FUN_00b2dc20(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short local_4 [2];
  
  local_4[0] = 0x489;
  local_4[1] = 0x48a;
  if (param_1[0x187] == 0) {
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0x8000000;
    uVar5 = 0x3f800000;
    uVar4 = 0x3e2aaaab;
    uVar3 = 0;
    uVar1 = FUN_00dde2a0(1,100);
    FUN_00aa4080((int)local_4[uVar1 & 1],uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2dcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2DD00  FUN_00b2dd00  size=133  [callgraph]
void __fastcall FUN_00b2dd00(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x487,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x128] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2dd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2E150  Em0010::thunk_vf1C0  size=5  [class]
void __thiscall Em0010::thunk_vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 00B2E160  FUN_00b2e160  size=42  [between]
void __fastcall FUN_00b2e160(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if ((iVar1 != 0) && (param_1[0x63c] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b2e186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B2E190  FUN_00b2e190  size=42  [between]
void __fastcall FUN_00b2e190(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if ((iVar1 != 0) && (param_1[0x63c] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b2e1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B2E1C0  FUN_00b2e1c0  size=61  [between]
void __fastcall FUN_00b2e1c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
  }
  else {
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (param_1[0x63c] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b2e1fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B2E200  FUN_00b2e200  size=45  [between]
void __thiscall FUN_00b2e200(int param_1,float param_2)

{
  *(float *)(param_1 + 0x1088) = param_2 * 60.0;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(float *)(param_1 + 0x1088) = param_2 * 60.0 + 120.0;
    return;
  }
  return;
}

// 00B2E230  FUN_00b2e230  size=64  [between]
undefined4 __fastcall FUN_00b2e230(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x13e0);
  if (((iVar1 != -1) && (iVar1 != 0)) && (iVar1 != 4)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00B2E270  FUN_00b2e270  size=87  [between]
undefined4 __thiscall FUN_00b2e270(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == param_2)) &&
     (*(int *)(param_1 + 0x13e0) == param_3)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00B2E2D0  FUN_00b2e2d0  size=368  [between]
void __fastcall FUN_00b2e2d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x13dc);
  *(undefined4 *)(param_1 + 0x13dc) = *(undefined4 *)(param_1 + 0x13e0);
  *(undefined4 *)(param_1 + 0x13e0) = uVar1;
  FUN_00a81330();
  FUN_00a81330();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if ((*(int *)(param_1 + 0x13dc) == 6) || (*(int *)(param_1 + 0x13e0) == 6)) {
    iVar2 = FUN_00a81330();
    iVar3 = FUN_00a81330();
    if (iVar2 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
      FUN_00a7c950();
    }
    if (iVar3 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
      FUN_00a7c950();
    }
  }
  *(undefined1 *)(param_1 + 0xfc0) = 0;
  FUN_00eaa6e0(0x41200000,0);
  if (*(int *)(param_1 + 0x13dc) == 2) {
    uVar1 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x12d0) = uVar1;
    iVar2 = FUN_00ac8470();
    if (iVar2 != 0) {
      uVar1 = FUN_00ac8660(0,0x9c);
      *(undefined4 *)(param_1 + 0x12d0) = uVar1;
    }
  }
  else if (*(int *)(param_1 + 0x13dc) == 3) {
    *(undefined4 *)(param_1 + 0x12d4) = 1;
    *(undefined4 *)(param_1 + 0x12d0) = 1;
  }
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x71);
  *(float *)(param_1 + 0x19d0) = (float)(fVar4 * (float10)60.0);
  return;
}

// 00B2E440  FUN_00b2e440  size=260  [between]
undefined4 FUN_00b2e440(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_14;
  
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  iVar3 = FUN_00f98a90();
  iVar4 = FUN_00f98aa0();
  iVar5 = FUN_00a12210(0);
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00d9fa80(&local_20,iVar5 + 0x40);
  if ((((1.0 < local_14) && ((float)iVar1 * 0.5 - (float)iVar3 * 0.5 < local_20)) &&
      (local_20 < (float)iVar3 * 0.5 + (float)iVar1 * 0.5)) &&
     (((float)iVar2 * 0.5 - (float)iVar4 * 0.5 < local_1c &&
      (local_1c < (float)iVar4 * 0.5 + (float)iVar2 * 0.5)))) {
    return 1;
  }
  return 0;
}

// 00B2E550  FUN_00b2e550  size=153  [between]
void FUN_00b2e550(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x25c))(0xffffffff,0,0);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x25c))(0xffffffff,0,0);
    }
  }
  return;
}

// 00B2E5F0  FUN_00b2e5f0  size=549  [between]
void __thiscall FUN_00b2e5f0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x197c) = 0x2450241;
    *(undefined4 *)(param_1 + 0x1980) = 0x2470247;
    *(word **)(param_1 + 0x1984) = &WORD_025d025a;
    *(word **)(param_1 + 0x1988) = &WORD_024e0260;
    *(undefined4 *)(param_1 + 0x198c) = 0x250024f;
    *(undefined4 *)(param_1 + 0x1990) = 0x2650264;
    *(undefined4 *)(param_1 + 0x1994) = 0x2540253;
    *(undefined **)(param_1 + 0x1998) = &DAT_02290255;
    *(undefined **)(param_1 + 0x199c) = &DAT_022e022c;
    *(undefined2 *)(param_1 + 0x19a0) = 0x263;
    *(undefined **)(param_1 + 0x19a2) = &DAT_01ea01f6;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x197c) = 0x4680454;
    *(undefined4 *)(param_1 + 0x1980) = 0x4680468;
    *(undefined4 *)(param_1 + 0x1984) = 0x470046c;
    *(undefined4 *)(param_1 + 0x1988) = 0x4780474;
    *(undefined4 *)(param_1 + 0x198c) = 0x4780478;
    *(undefined4 *)(param_1 + 0x1990) = 0x47c047b;
    *(undefined4 *)(param_1 + 0x199a) = 0x4810481;
    *(undefined4 *)(param_1 + 0x199e) = 0x47d0483;
    *(undefined4 *)(param_1 + 0x19a2) = 0x48c048c;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x197c) = 0x2930292;
    *(undefined4 *)(param_1 + 0x1980) = 0x2930293;
    *(undefined4 *)(param_1 + 0x1984) = 0x2980297;
    *(undefined4 *)(param_1 + 0x1988) = 0x2940299;
    *(undefined4 *)(param_1 + 0x198c) = 0x2940294;
    *(undefined4 *)(param_1 + 0x1990) = 0x2960295;
    *(undefined4 *)(param_1 + 0x1994) = 0x29b029a;
    *(undefined4 *)(param_1 + 0x1998) = 0x29e029c;
    *(undefined4 *)(param_1 + 0x199c) = 0x2c1029f;
    *(undefined4 *)(param_1 + 0x19a0) = 0x2b1029d;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x197c) = 0x5240521;
    *(undefined4 *)(param_1 + 0x1980) = 0x5240524;
    *(undefined4 *)(param_1 + 0x1984) = 0x5320531;
    *(undefined4 *)(param_1 + 0x1988) = 0x5270533;
    *(undefined4 *)(param_1 + 0x198c) = 0x5270527;
    *(undefined4 *)(param_1 + 0x1990) = 0x52e052d;
    *(undefined4 *)(param_1 + 0x1994) = 0x52a0529;
    *(undefined4 *)(param_1 + 0x1998) = 0x53f052b;
    *(undefined4 *)(param_1 + 0x199c) = 0x5410540;
    *(undefined4 *)(param_1 + 0x19a0) = 0x542052f;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x197c) = 0x26d0268;
    *(undefined4 *)(param_1 + 0x1980) = 0x26d026d;
    *(undefined4 *)(param_1 + 0x1984) = 0x2720271;
    *(undefined4 *)(param_1 + 0x1988) = 0x26f0273;
    *(undefined4 *)(param_1 + 0x198c) = 0x26f026f;
    *(undefined4 *)(param_1 + 0x1990) = 0x27a0279;
    *(undefined4 *)(param_1 + 0x1994) = 0x2760275;
    *(undefined4 *)(param_1 + 0x1998) = 0x2850277;
    *(undefined4 *)(param_1 + 0x199c) = 0x2880286;
    *(undefined2 *)(param_1 + 0x19a0) = 0x27b;
    *(undefined4 *)(param_1 + 0x19a2) = 0x2810289;
  }
  return;
}

// 00B2E880  FUN_00b2e880  size=46  [between]
uint __fastcall FUN_00b2e880(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xdd4);
  if ((((uVar1 & 0x800) == 0) && ((uVar1 & 0x400) == 0)) && ((uVar1 & 0x200) == 0)) {
    return *(uint *)(param_1 + 0xdd8) >> 0x15 & 1;
  }
  return 1;
}

// 00B2E8F0  Em0010::vf348  size=33  [class]
undefined4 __thiscall Em0010::vf348(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xdd4) & 0x100) != 0) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf348(param_2);
  return uVar1;
}

// 00B2E920  FUN_00b2e920  size=132  [between]
undefined4 __fastcall FUN_00b2e920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    iVar1 = FUN_008e2740();
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = 0;
  iVar1 = FUN_00a8d3d0(7);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x8e4))) {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x1a40) = *(undefined4 *)(param_1 + 0x16d0);
    *(undefined4 *)(param_1 + 0x1a44) = *(undefined4 *)(param_1 + 0x16d4);
    *(undefined4 *)(param_1 + 0x1a48) = *(undefined4 *)(param_1 + 0x16d8);
    *(undefined4 *)(param_1 + 0x1a4c) = *(undefined4 *)(param_1 + 0x16dc);
    *(float *)(param_1 + 0x1a44) = *(float *)(param_1 + 0x1a44) + 1.0;
  }
  return uVar2;
}

// 00B2E9B0  FUN_00b2e9b0  size=179  [between]
undefined4 __fastcall FUN_00b2e9b0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1928) != 0) || (*(int *)(param_1 + 0x194c) != 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x764) != 0) && (iVar1 = FUN_008e2740(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00a8d3d0(8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1a40) = *(undefined4 *)(param_1 + 0x1930);
    *(undefined4 *)(param_1 + 0x1a44) = *(undefined4 *)(param_1 + 0x1934);
    *(undefined4 *)(param_1 + 0x1a48) = *(undefined4 *)(param_1 + 0x1938);
    *(undefined4 *)(param_1 + 0x1a4c) = *(undefined4 *)(param_1 + 0x193c);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1a40) = *(undefined4 *)(param_1 + 0x16d0);
  *(undefined4 *)(param_1 + 0x1a44) = *(undefined4 *)(param_1 + 0x16d4);
  *(undefined4 *)(param_1 + 0x1a48) = *(undefined4 *)(param_1 + 0x16d8);
  *(undefined4 *)(param_1 + 0x1a4c) = *(undefined4 *)(param_1 + 0x16dc);
  return 1;
}

// 00B2EA70  FUN_00b2ea70  size=98  [between]
bool __fastcall FUN_00b2ea70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    iVar1 = FUN_008e2740();
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = FUN_00a8d3d0(10);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1a40) = *(undefined4 *)(param_1 + 0x16d0);
    *(undefined4 *)(param_1 + 0x1a44) = *(undefined4 *)(param_1 + 0x16d4);
    *(undefined4 *)(param_1 + 0x1a48) = *(undefined4 *)(param_1 + 0x16d8);
    *(undefined4 *)(param_1 + 0x1a4c) = *(undefined4 *)(param_1 + 0x16dc);
  }
  return iVar1 != 0;
}

// 00B2EAE0  FUN_00b2eae0  size=45  [between]
bool __fastcall FUN_00b2eae0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x372] != 0x1e) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x274))();
      return iVar1 != 0;
    }
  }
  return false;
}

// 00B2EB10  FUN_00b2eb10  size=38  [between]
bool __fastcall FUN_00b2eb10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x13dc);
  if (((iVar1 != 1) && (iVar1 != 7)) && (iVar1 != 6)) {
    return iVar1 == 5;
  }
  return true;
}

// 00B2EB60  FUN_00b2eb60  size=67  [between]
undefined4 __fastcall FUN_00b2eb60(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xdd8) & 0x2000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 00B2EBB0  FUN_00b2ebb0  size=66  [between]
undefined4 __thiscall FUN_00b2ebb0(int param_1,float *param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    return 0;
  }
  fVar1 = (float10)FUN_00a8ec30(param_1 + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x94
                                                                   )));
  *param_2 = (float)fVar1;
  return 1;
}

// 00B2EC00  FUN_00b2ec00  size=273  [between]
bool __fastcall FUN_00b2ec00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0xd80) == 0) {
    return false;
  }
  uVar2 = FUN_00a82d50();
  bVar3 = 0.0 < *(float *)(param_1 + 0xbb4);
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0xd80);
    *(float *)(iVar1 + 0xc) = *(float *)(param_1 + 0xbac) * 0.017453292;
    *(float *)(iVar1 + 0x10) = *(float *)(param_1 + 0xbb0) * 0.017453292;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0xbb4);
    iVar1 = *(int *)(param_1 + 0xd80);
    *(float *)(iVar1 + 0x30) = *(float *)(param_1 + 0xbac) * 0.017453292;
    *(float *)(iVar1 + 0x34) = *(float *)(param_1 + 0xbb0) * 0.017453292;
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0xbb4);
  }
  if (*(float *)(param_1 + 0xbc0) <= 0.0) {
    if (!bVar3) {
      return bVar3;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd80);
    bVar3 = true;
    *(float *)(iVar1 + 0x18) = *(float *)(param_1 + 3000) * 0.017453292;
    *(float *)(iVar1 + 0x1c) = *(float *)(param_1 + 0xbbc) * 0.017453292;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0xbc0);
    iVar1 = *(int *)(param_1 + 0xd80);
    *(float *)(iVar1 + 0x3c) = *(float *)(param_1 + 3000) * 0.017453292;
    *(float *)(iVar1 + 0x40) = *(float *)(param_1 + 0xbbc) * 0.017453292;
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xbc0);
  }
  FUN_00a82b40(*(undefined4 *)(param_1 + 0xd80),4);
  FUN_00a85340(uVar2);
  return bVar3;
}

// 00B2ED20  FUN_00b2ed20  size=18  [between]
undefined4 __fastcall FUN_00b2ed20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xd80) == 0) {
    return 0;
  }
  uVar1 = FUN_00a82d50();
  puVar3 = &DAT_018a7c18;
  puVar4 = *(undefined4 **)(param_1 + 0xd80);
  for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00a82b40(*(undefined4 *)(param_1 + 0xd80),4);
  FUN_00a85340(uVar1);
  return 1;
}

// 00B2ED32  FUN_00b2ed32  size=83  [between]
undefined4 FUN_00b2ed32(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_00a82d50();
  puVar3 = &DAT_018a7c18;
  puVar4 = *(undefined4 **)(unaff_EBP + 0xd80);
  for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00a82b40(*(undefined4 *)(unaff_EBP + 0xd80),4);
  FUN_00a85340(uVar1);
  return 1;
}

// 00B2ED90  FUN_00b2ed90  size=32  [between]
bool __fastcall FUN_00b2ed90(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 0xb0008) {
    return true;
  }
  return *(int *)(param_1 + 0x618) == 0xa0020;
}

// 00B2EDB0  Em0010::vf2FC  size=12  [class]
bool __fastcall Em0010::vf2FC(int param_1)

{
  return *(int *)(param_1 + 0x19b8) != 0;
}

// 00B2EDC0  FUN_00b2edc0  size=518  [callgraph]
void FUN_00b2edc0(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  FUN_00ac8fd0(param_1);
  iVar1 = FUN_00ac8bb0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  iVar1 = FUN_00ac8bb0(4);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  iVar1 = FUN_00ac8bb0(2);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(*(int *)(iVar1 + 800) + 0x1c + iVar3) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  iVar1 = FUN_00ac8bb0(3);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(float *)(*(int *)(iVar1 + 800) + 0x1c + iVar3) = param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
    }
  }
  return;
}

// 00B2EFD0  FUN_00b2efd0  size=56  [callgraph]
void __fastcall FUN_00b2efd0(int param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_00dde2a0(1,10);
  *(float *)(param_1 + 0x1b4c) = ((float)uVar1 * 0.1 + 5.0) * 60.0;
  return;
}

// 00B2F010  FUN_00b2f010  size=74  [callgraph]
void __fastcall FUN_00b2f010(int *param_1)

{
  param_1[0x6c9] = 1;
  FUN_00ac48e0();
  FUN_00ac8e10(1);
  (**(code **)(*param_1 + 0x110))(1);
  param_1[0x3d0] = 0x43160000;
  (**(code **)(*param_1 + 0x358))(0x1cc,0);
  return;
}

// 00B2F060  FUN_00b2f060  size=132  [callgraph]
void __thiscall FUN_00b2f060(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00e5e0c0("em0010_vs_type_a",param_1,0xffffffff,0);
    return;
  }
  if (param_2 == 1) {
    FUN_00e5e0c0("em0010_vs_type_b",param_1,0xffffffff,0);
    return;
  }
  if (param_2 == 2) {
    FUN_00e5e0c0("em0010_vs_type_c",param_1,0xffffffff,0);
    return;
  }
  if (param_2 == 3) {
    FUN_00e5e0c0("em0010_vs_type_d",param_1,0xffffffff,0);
    return;
  }
  if (param_2 == 4) {
    FUN_00e5e0c0("em0010_vs_type_e",param_1,0xffffffff,0);
  }
  return;
}

// 00B2F0F0  FUN_00b2f0f0  size=274  [callgraph]
void __fastcall FUN_00b2f0f0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1b54)) {
  case 1:
    FUN_00e5e0c0("em0010_vs_type_e",param_1,0xffffffff,0);
    *(undefined4 *)(param_1 + 7000) = 0x42700000;
    *(int *)(param_1 + 0x1b54) = *(int *)(param_1 + 0x1b54) + 1;
    return;
  case 2:
    fVar1 = *(float *)(param_1 + 7000) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 7000) = fVar1;
    if (fVar1 < 0.0) {
      uVar2 = FUN_00e5e0c0("em0010_vo_line_action_fail",param_1,0xffffffff,0);
      *(int *)(param_1 + 0x1b54) = *(int *)(param_1 + 0x1b54) + 1;
      *(undefined4 *)(param_1 + 0x1b5c) = uVar2;
      return;
    }
    break;
  case 3:
    iVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1b5c));
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x1b54) = *(int *)(param_1 + 0x1b54) + 1;
      *(undefined4 *)(param_1 + 7000) = 0x41f00000;
      return;
    }
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 7000) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 7000) = fVar1;
    if (fVar1 < 0.0) {
      uVar2 = FUN_00e5e0c0("em0010_vo_line_tandem_lost",param_1,0xffffffff,0);
      *(int *)(param_1 + 0x1b54) = *(int *)(param_1 + 0x1b54) + 1;
      *(undefined4 *)(param_1 + 0x1b5c) = uVar2;
      return;
    }
    break;
  case 5:
    iVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1b5c));
    if (iVar3 == 0) {
      FUN_00b2f060(*(undefined4 *)(param_1 + 0x1b50));
      *(undefined4 *)(param_1 + 0x1b54) = 0;
    }
  }
  return;
}

// 00B2F430  FUN_00b2f430  size=488  [callgraph]
void __fastcall FUN_00b2f430(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x768) = 0;
  BehaviorEmBase::vf4C();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  return;
}

// 00B2F620  FUN_00b2f620  size=16  [callgraph]
void FUN_00b2f620(void)

{
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  return;
}

// 00B2F6A0  FUN_00b2f6a0  size=22  [callgraph]
void __fastcall FUN_00b2f6a0(int *param_1)

{
  if (param_1[0x5d9] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 00B2F6C0  FUN_00b2f6c0  size=22  [callgraph]
void __fastcall FUN_00b2f6c0(int *param_1)

{
  if (param_1[0x5d9] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 00B2F6E0  FUN_00b2f6e0  size=22  [callgraph]
void __fastcall FUN_00b2f6e0(int *param_1)

{
  if (param_1[0x5d9] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 00B2F770  FUN_00b2f770  size=22  [callgraph]
void __fastcall FUN_00b2f770(int *param_1)

{
  if (param_1[0x5d9] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 00B2F830  FUN_00b2f830  size=162  [callgraph]
void __fastcall FUN_00b2f830(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4e9,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  param_1[0x5d2] = param_1[0x5d2] | 8;
  param_1[0x36a] = -1;
  param_1[0x36c] = -1;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x5d1] = 1;
                    /* WARNING: Could not recover jumptable at 0x00b2f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00B2F940  FUN_00b2f940  size=211  [callgraph]
void __fastcall FUN_00b2f940(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (param_1[0x187] == 0) {
    FUN_00ac8e10(1);
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x375] = param_1[0x375] & 0xfffbffff;
    param_1[0x3d0] = 0x43160000;
    (**(code **)(*param_1 + 0x358))(0x1cc,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x6c9] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00ac8f80();
  FUN_00b2edc0((float)(fVar2 - (float10)(float)param_1[0x244] * (float10)0.01));
  fVar1 = (float)param_1[0x3d0];
  param_1[0x3d0] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 <= fVar1 - (float)param_1[0x244]) {
    return;
  }
  FUN_009fdde0();
  return;
}

// 00B2FA30  FUN_00b2fa30  size=87  [callgraph]
void __fastcall FUN_00b2fa30(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x800000;
    FUN_00ac8e10(1);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5c50(5);
    }
    FUN_00a937e0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B2FAA0  FUN_00b2faa0  size=138  [callgraph]
void __fastcall FUN_00b2faa0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x4ec;
    if (param_1[0x372] == 0x12) {
      uVar1 = 0x4eb;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2fb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2FB40  FUN_00b2fb40  size=123  [callgraph]
void __fastcall FUN_00b2fb40(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4ee,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b2fbb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B2FBF0  FUN_00b2fbf0  size=42  [callgraph]
uint FUN_00b2fbf0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d28;
  (**(code **)(*param_1 + 4))(&DAT_01be9d28);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B2FC20  FUN_00b2fc20  size=42  [callgraph]
uint FUN_00b2fc20(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d2c;
  (**(code **)(*param_1 + 4))(&DAT_01be9d2c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B2FD20  Em0010::vf30  size=228  [class]
void __fastcall Em0010::vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  BehaviorEmBase::vf30();
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x4000000;
  *(undefined4 *)(param_1 + 0x1adc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ae0) = 0;
  *(undefined4 *)(param_1 + 0x1ae4) = 0;
  *(undefined4 *)(param_1 + 0x1ae8) = 0;
  *(undefined4 *)(param_1 + 0x1aec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1af0) = 0;
  *(undefined4 *)(param_1 + 0x1af4) = 0;
  *(undefined4 *)(param_1 + 0x1af8) = 0;
  if (((*(uint *)(param_1 + 0xddc) & 0x2000) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b34eb0;
      (**(code **)(*piVar2 + 4))(&DAT_01b34eb0);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_004e3ab0();
      }
    }
  }
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41100000,0);
  FUN_00a87b80();
  return;
}

// 00B2FE10  Em0010::vf14C  size=150  [class]
bool __thiscall Em0010::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((((0 < param_1[0x21c]) && (param_1[0x139] == 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 == 0)) && (param_1[0x5d1] != 1)) {
    if (param_2 == 0x24) {
      iVar1 = FUN_00b2e880();
      if (iVar1 == 0) {
        return param_1[0x66e] == 0;
      }
    }
    else {
      if ((param_2 == 0x28) || (param_2 == 0x29)) {
        return true;
      }
      if (param_2 == 0x25) {
        if (param_1[0x66e] == 0) {
          return true;
        }
      }
      else {
        if (param_2 == 0x26) {
          return true;
        }
        if (param_2 == 0x27) {
          return true;
        }
      }
    }
  }
  return false;
}

// 00B2FEC0  FUN_00b2fec0  size=445  [between]
void __fastcall FUN_00b2fec0(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  float10 fVar2;
  int iStack_14;
  float afStack_10 [2];
  float fStack_8;
  
  param_1[0x375] = param_1[0x375] | 0x800000;
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 == 0) {
      FUN_009f8ea0(&stack0xffffffe4,10,param_1[300],0);
      FUN_00dd5650(&DAT_0163d460,&stack0xffffffe4,param_1[0x2c9]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00a5dcc0(iVar1);
    }
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x198a),0,0x3e088889,0x3f800000,0,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0x3e19999a;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00a581b0(&stack0xffffffe4,(float)param_1[0x24a] * (float)param_1[0x244],
                                param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  param_1[0x14] = unaff_ESI;
  param_1[0x16] = iStack_14;
  FUN_00a585a0(afStack_10,0x3e800000,(float)fVar2);
  fVar2 = (float10)fpatan((float10)afStack_10[0],(float10)fStack_8);
  param_1[0x25] = (int)(float)fVar2;
  iVar1 = FUN_00a54a60(param_1[0x249]);
  if (iVar1 != 0) {
    param_1[0x5d4] = param_1[0x10];
    param_1[0x5d5] = param_1[0x11];
    param_1[0x5d6] = param_1[0x12];
    param_1[0x5d7] = param_1[0x13];
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B30080  FUN_00b30080  size=654  [between]
void __fastcall FUN_00b30080(int *param_1)

{
  float fVar1;
  int iVar2;
  
  param_1[0x6db] = 1;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x4e8] = 1;
    FUN_00aa4080(0x1fe,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x250] = 0;
    param_1[0x5d0] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x1ff,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b30173;
  case 3:
LAB_00b30173:
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 9 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_00b300a0_default;
  case 4:
    FUN_00aa4080(0x200,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b301e5;
  case 5:
LAB_00b301e5:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto LAB_00b3011f;
  default:
    goto switchD_00b300a0_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_00b3011f:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00b300a0_default:
  if (param_1[0x2a1] == 0) {
    return;
  }
  if (3 < param_1[0x187]) {
    return;
  }
  if (((float)param_1[0x2a3] <= 49.0) && (0.0 < (float)param_1[0x248])) {
    if (param_1[0x250] == 1) {
      param_1[0x23c] = (int)((float)param_1[0x23c] - 0.34906584);
      param_1[0x23d] = (int)((float)param_1[0x23d] - 0.34906584);
      param_1[0x23e] = (int)((float)param_1[0x23e] - 0.34906584);
      fVar1 = (float)param_1[0x23f] - 0.34906584;
    }
    else {
      if (param_1[0x250] != 2) goto LAB_00b302db;
      param_1[0x23c] = (int)((float)param_1[0x23c] + 0.34906584);
      param_1[0x23d] = (int)((float)param_1[0x23d] + 0.34906584);
      param_1[0x23e] = (int)((float)param_1[0x23e] + 0.34906584);
      fVar1 = (float)param_1[0x23f] + 0.34906584;
    }
    param_1[0x23f] = (int)fVar1;
  }
LAB_00b302db:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 00B30330  FUN_00b30330  size=119  [between]
void __fastcall FUN_00b30330(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    iVar1 = FUN_00a8cac0();
    if ((iVar1 != 3) || ((float)ABS(fVar2) <= 2.3561945)) {
      iVar1 = FUN_00a8cac0();
      if (iVar1 != 3) {
        return;
      }
      if (9.0 <= *(float *)(param_1 + 0xa8c)) {
        return;
      }
    }
    FUN_00a8cb60(4);
  }
  return;
}

// 00B303B0  FUN_00b303b0  size=634  [between]
void __fastcall FUN_00b303b0(int *param_1)

{
  int iVar1;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_1[0x375] = param_1[0x375] | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x4fe,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x4ff,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x15] = (int)((float)param_1[0x15] + 0.1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a12210(0xf00);
    local_20 = *(float *)(iVar1 + 0x40);
    local_1c = *(float *)(iVar1 + 0x44);
    local_18 = *(float *)(iVar1 + 0x48);
    local_14 = *(float *)(iVar1 + 0x4c);
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 1.0;
    D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
    local_30 = local_30 + local_20;
    local_2c = local_2c + local_1c;
    local_28 = local_28 + local_18;
    fStack_24 = fStack_24 + local_14;
    iVar1 = FUN_009f8b40();
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (0,0,0,0,&local_20,&local_30,iVar1 << 0x10 | 7,0);
    if (iVar1 == 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)(((float)param_1[0x5b4] - local_20) * 0.1 + (float)param_1[0x14]);
    param_1[0x16] = (int)(((float)param_1[0x5b6] - local_18) * 0.1 + (float)param_1[0x16]);
    break;
  case 4:
    FUN_00aa4080(0x500,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  iVar1 = FUN_00a8c760(0xc);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e32b8c2,0);
  return;
}

// 00B30650  FUN_00b30650  size=643  [between]
void __fastcall FUN_00b30650(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f1,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
    (**(code **)(*param_1 + 0x220))(0x41700000);
    uStack_24 = 0xbfc00000;
    local_20 = 0.0;
    local_1c = 0.8;
    D3DXVec3TransformNormal(param_1 + 0x5c8,&uStack_24,param_1 + 4);
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b307b4;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0,0x3f800000);
LAB_00b307b4:
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 != 0) && (iVar1 = param_1[0x2a1], iVar1 != 0)) {
    local_20 = *(float *)(iVar1 + 0x40) + (float)param_1[0x5c8];
    local_1c = (float)param_1[0x5c9] + *(float *)(iVar1 + 0x44);
    local_18 = (float)param_1[0x5ca] + *(float *)(iVar1 + 0x48);
    local_14 = (float)param_1[0x5cb] + *(float *)(iVar1 + 0x4c);
    fVar4 = (float)param_1[0x244] * 0.1;
    uVar3 = 0x3c23d70a;
    fVar2 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar4);
    FUN_00a980d0(param_1 + 0x14,param_1 + 0x14,&local_20,(float)fVar2,uVar3,fVar4);
  }
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    if (param_1[0x250] == 0) {
      param_1[0x250] = 1;
      FUN_00b7ab80(0x41700000,0x3dcccccd);
    }
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B308E0  FUN_00b308e0  size=218  [between]
void __fastcall FUN_00b308e0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(500,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b30964;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b30964:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3d567750,0);
  }
  return;
}

// 00B309C0  Em0010::vf1A0  size=234  [class]
undefined4 __thiscall Em0010::vf1A0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  fVar3 = (float10)FUN_00ddba30((float)piVar1[0x25] - (float)param_1[0x25]);
  if (*param_2 != 0x9e) {
    return 0;
  }
  if (fVar3 * fVar3 < (float10)2.4674013 == (fVar3 * fVar3 == (float10)2.4674013)) {
    iVar2 = (**(code **)(*piVar1 + 0x14c))(0x29,param_1[0x13c]);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = (**(code **)(*param_1 + 0x14c))(0x29,param_3);
    if (iVar2 == 0) {
      return 1;
    }
    (**(code **)(*piVar1 + 0x150))(0x29,param_1[0x13c]);
    uVar4 = 0x29;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x14c))(0x28,param_1[0x13c]);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = (**(code **)(*param_1 + 0x14c))(0x28,param_3);
    if (iVar2 == 0) {
      return 1;
    }
    (**(code **)(*piVar1 + 0x150))(0x28,param_1[0x13c]);
    uVar4 = 0x28;
  }
  (**(code **)(*param_1 + 0x150))(uVar4,param_3);
  return 1;
}

// 00B30AB0  Em0010::vf360  size=181  [class]
void __fastcall Em0010::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00e00900();
  iVar1 = FUN_00ac89d0();
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4f0);
  }
  else {
    uVar2 = FUN_00a81330(0);
  }
  FUN_00e03080(uVar2,uVar4);
  iVar1 = FUN_00a81330();
  iVar3 = FUN_00a81330();
  if (iVar1 != 0) {
    if (iVar3 != 0) {
      FUN_00e03080(iVar1,2);
      FUN_00e03080(iVar3,3);
      return;
    }
    if (*(int *)(iVar1 + 0x24) == 0x30070) {
      FUN_00e03080(iVar1,4);
      return;
    }
    if (*(int *)(iVar1 + 0x24) == 0x30080) {
      FUN_00e03080(iVar1,5);
      return;
    }
    FUN_00e03080(iVar1,1);
  }
  return;
}

// 00B30B70  FUN_00b30b70  size=121  [between]
void __fastcall FUN_00b30b70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
  }
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xfc0) = 0;
  FUN_00eaa6e0(0x41200000,0);
  FUN_00eaa6e0(0x3f800000,0);
  *(undefined4 *)(param_1 + 0x1740) = 0;
  return;
}

// 00B30BF0  Em0010::setRayCast  size=232  [class]
void __thiscall Em0010::setRayCast(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar5 = FUN_00a12210(0);
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016a0d08);
    return;
  }
  uVar1 = *(undefined4 *)(iVar5 + 0x40);
  uVar2 = *(undefined4 *)(iVar5 + 0x44);
  uVar3 = *(undefined4 *)(iVar5 + 0x48);
  uVar4 = *(undefined4 *)(iVar5 + 0x4c);
  iVar5 = FUN_009f8b40();
  local_2c = iVar5 << 0x10 | 7;
  local_60[0] = param_1 + 0x13d0;
  local_40 = *param_2;
  local_60[1] = 0;
  local_28 = 0x3ff001b;
  local_3c = param_2[1];
  local_24 = 0;
  local_20 = 0;
  local_38 = param_2[2];
  local_1c = "Em0010MoveArea";
  local_34 = param_2[3];
  local_30 = 0x3f000000;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar3;
  local_44 = uVar4;
  FUN_0090fb00(local_60);
  return;
}

// 00B30CE0  FUN_00b30ce0  size=29  [callgraph]
bool __fastcall FUN_00b30ce0(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    bVar1 = *(int *)(param_1 + 0x1744) != 1;
  }
  return bVar1;
}

// 00B30D00  FUN_00b30d00  size=140  [callgraph]
undefined1 __fastcall FUN_00b30d00(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0xbe8);
  fVar1 = *(float *)(param_1 + 0x19dc);
  iVar3 = *(int *)(param_1 + 0x18f0);
  uVar4 = DAT_01bea060 & 0x2000000;
  uVar5 = DAT_01bea060 & 0x40000000;
  iVar6 = FUN_00ac8410();
  if ((*(int *)(param_1 + 0x196c) == 0) &&
     (iVar6 == 0 && (uVar5 == 0 && (uVar4 == 0 && (iVar3 != 0 && (fVar1 <= 0.0 && iVar2 == 0)))))) {
    return 1;
  }
  *(undefined1 *)(param_1 + 0xfc0) = 0;
  FUN_00eaa6e0(0x41200000,0);
  return 0;
}

// 00B30DE0  FUN_00b30de0  size=97  [callgraph]
void __fastcall FUN_00b30de0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_00ac8a80(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x12dc) = 0x44160000;
  return;
}

// 00B30EB0  FUN_00b30eb0  size=606  [callgraph]
void __fastcall FUN_00b30eb0(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2ff,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x300,0,0,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((uVar4 != 0) && (iVar2 = FUN_00a8cac0(), iVar2 == 4)) {
      param_1[0x187] = 4;
    }
    break;
  case 4:
    FUN_00aa4080(0x301,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      param_1[0x376] = param_1[0x376] | 0x1000000;
      FUN_00b2b450();
      sVar1 = FUN_00dde2d0(0,0x14);
      param_1[0x3ef] = (int)((float)(int)sVar1 * 60.0 + 900.0);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    break;
  case 6:
    FUN_00aa4080(0x302,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = 2;
    }
  }
  iVar2 = FUN_00a8c760(0x1c);
  if (iVar2 == 0) {
    FUN_00b2b350(uVar4);
  }
  return;
}

// 00B316D0  FUN_00b316d0  size=165  [callgraph]
void FUN_00b316d0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(2,0,0,0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d20;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d20);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && ((piVar2[0x377] & 0x2000U) != 0)) {
        FUN_00a92f90();
        FUN_00e36b50(0,8,0);
      }
    }
  }
  return;
}

// 00B31B10  FUN_00b31b10  size=1409  [callgraph]
void __fastcall FUN_00b31b10(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_24 [32];
  
  piVar5 = (int *)0x0;
  local_44 = FUN_00a81330();
  if ((local_44 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar8 = &DAT_01be9d20;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d20);
    iVar4 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar3);
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    if (piVar5 != (int *)0x0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x33e,unaff_EBX,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      FUN_00ac4c70(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x394);
    param_1[0x248] = 0x42200000;
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    FUN_00a92f90();
    Animation::Motion::Unit::setCameraNo(0,0);
    if (piVar5 != (int *)0x0) {
      FUN_00a8e880(piVar5 + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x3c8efa35,0x40490fdb,0);
    }
    param_1[0x249] = param_1[0x25];
    param_1[0x250] = 0;
    FUN_00b80920(unaff_EBX,0x3f333333,0x3f000000,0x3f800000,1);
    param_1[0x2dd] = 0;
    FUN_00b7dbe0(3);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8c760(0xb);
      return;
    }
    break;
  case 2:
    if (piVar5 != (int *)0x0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x340,unaff_EBX,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      DAT_01dc08d4 = 0;
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
      FUN_00da8810(0x41f00000);
    }
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar7 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar7 = 0x40a00000;
    }
    FUN_00b7ab30(uVar7);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar2 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar2;
      if (((fVar2 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar2)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar7 = 0;
        FUN_00a92f90(0);
        fVar6 = (float10)FUN_00407b40(uVar7);
        param_1[0x24f] = (int)(float)fVar6;
        FUN_00b89c20(0xff,4,3,unaff_EBX,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
        FUN_00a8c760(0xb);
        return;
      }
    }
    break;
  case 4:
    switchD_0080dbae::default();
    FUN_00aa4080(0x4d2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x25] = param_1[0x249];
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      uStack_34 = 0;
      uStack_30 = 0xc0c00000;
      uStack_2c = 0;
      local_44 = param_1[0x10];
      iStack_40 = param_1[0x11];
      iStack_3c = param_1[0x12];
      iStack_38 = param_1[0x13];
      iVar4 = hkpCdPointCollector::hkpCdPointCollector_14(&uStack_34,&local_44,1,0,0x3c23d70a);
      FUN_008e4320(auStack_24);
      if (iVar4 != 0) {
        param_1[0x14] = local_44;
        param_1[0x15] = iStack_40;
        param_1[0x16] = iStack_3c;
        param_1[0x17] = iStack_38;
      }
    }
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      DAT_01dc08d4 = 0;
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
      FUN_00da8810(0x41f00000);
      FUN_00dc1270(0,0);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x220))(0x43340000);
        FUN_00a8c760(0xb);
        return;
      }
    }
  }
  FUN_00a8c760(0xb);
  return;
}

// 00B320B0  Em0010::vf29C  size=77  [class]
void __fastcall Em0010::vf29C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffffdf;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x40;
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xfffeffff;
  if (((*(uint *)(param_1 + 0xddc) & 0x3000) == 0) &&
     ((*(uint *)(param_1 + 0xdd8) & 0x20000000) == 0)) {
    iVar1 = FUN_00a85630();
    if (iVar1 != 5) {
      FUN_00a8cab0();
      return;
    }
  }
  return;
}

// 00B32100  FUN_00b32100  size=204  [between]
void __fastcall FUN_00b32100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0xdd8) & 0x80000) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0xb0008) {
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0xa0020) {
    return;
  }
  if ((*(uint *)(param_1 + 0xd44) & 0x800000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      return;
    }
    if ((DAT_01d6426c == 0) && (DAT_01d64270 == 0)) {
      FUN_00a81330();
      uVar2 = FUN_00a7c8a0();
      iVar1 = FUN_005f57d0(uVar2);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_005f4730();
      if (iVar1 != 0) {
        DAT_01d6426c = 1;
        FUN_00a884f0(1);
        return;
      }
      iVar1 = FUN_005f4750();
      if (iVar1 == 0) {
        return;
      }
      DAT_01d64270 = 1;
    }
    FUN_00a884f0(1);
    return;
  }
  return;
}

// 00B321D0  Em0010::vf2D4  size=217  [class]
undefined4 __fastcall Em0010::vf2D4(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x372] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) && (param_1[0x139] != 0)) {
    return 0;
  }
  if ((((param_1[0x375] & 0x4000U) == 0) &&
      ((((param_1[0x375] & 0xe00U) == 0 && ((param_1[0x376] & 0x200000U) == 0)) ||
       (param_1[0x5d1] == 1)))) &&
     (((param_1[0x186] != 0x100005 && (param_1[0x6c9] == 0)) &&
      ((param_1[0x186] != 0xb000a &&
       ((((iVar1 = FUN_00a85630(), iVar1 != 2 && (iVar1 = FUN_00a8c760(0x1e), iVar1 == 0)) &&
         (param_1[0x66e] == 0)) && (param_1[0x294] != 0)))))))) {
    iVar1 = FUN_00416910(6);
    if (iVar1 == 0) {
      return 1;
    }
    if (((param_1[0x376] & 0x80000U) != 0) && (iVar1 = FUN_00b2ed90(), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}

// 00B333B0  FUN_00b333b0  size=62  [callgraph]
uint FUN_00b333b0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    puVar4 = &DAT_01be9d28;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 00B33480  FUN_00b33480  size=62  [callgraph]
uint FUN_00b33480(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    puVar4 = &DAT_01be9d30;
    (**(code **)(*piVar3 + 4))(&DAT_01be9d30);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 00B334C0  FUN_00b334c0  size=270  [callgraph]
void FUN_00b334c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em0010Shield",0x30090,0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01646268);
  }
  else {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d2c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d2c);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        iVar1 = FUN_00ac8660(0,0x4f);
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c940(uVar2);
        FUN_00a7c940(&stack0x00000000);
        FUN_00a7c960(&stack0xfffffff8);
        piVar3[0x237] = iVar1;
        piVar3[0x236] = iVar1;
        iVar1 = FUN_00ac89d0();
        piVar3[0x146] = iVar1;
        return;
      }
    }
  }
  return;
}

// 00B335D0  FUN_00b335d0  size=79  [callgraph]
uint FUN_00b335d0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a81330();
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9d2c;
  (**(code **)(*piVar2 + 4))(&DAT_01be9d2c);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00B33660  FUN_00b33660  size=441  [callgraph]
bool __fastcall FUN_00b33660(int param_1)

{
  int iVar1;
  int iVar2;
  float local_8c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = FUN_00a12210(0);
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_00907640(param_1 + 0x18ec,0,0);
  if (*(int *)(param_1 + 0xa84) == 0) {
    return false;
  }
  FUN_00a8d230(&local_70);
  local_50 = *(float *)(iVar1 + 0x40);
  local_8c = *(float *)(iVar1 + 0x44);
  local_48 = *(float *)(iVar1 + 0x48);
  local_44 = *(float *)(iVar1 + 0x4c);
  if (*(int *)(param_1 + 0x13dc) == 2) {
    local_8c = local_8c + 0.6;
  }
  if (*(int *)(param_1 + 0x13dc) == 3) {
    local_8c = local_8c + 0.6;
  }
  iVar1 = FUN_009f8b40();
  local_60[0] = param_1 + 0x18ec;
  local_4c = local_8c;
  local_2c = iVar1 << 0x10 | 7;
  local_60[1] = 0xf;
  local_28 = 0x3ff001b;
  local_24 = 8;
  local_20 = 0;
  local_1c = "Em0010View";
  local_30 = 0x3e800000;
  local_40 = local_70 - local_50;
  local_3c = local_6c - local_8c;
  local_38 = local_68 - local_48;
  local_34 = local_64 - local_44;
  FUN_0090fb00(local_60);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1900) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x1904) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x1908) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x190c) = *(undefined4 *)(iVar1 + 0x4c);
  }
  return iVar2 == 0;
}

// 00B33820  FUN_00b33820  size=274  [callgraph]
undefined4 __fastcall FUN_00b33820(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar9 = FUN_00907560(param_1 + 0x191c,0,0,0,0,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0xa84);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(iVar10 + 0x40);
  uVar6 = *(undefined4 *)(iVar10 + 0x48);
  uVar7 = *(undefined4 *)(iVar10 + 0x4c);
  fVar8 = *(float *)(iVar10 + 0x44);
  iVar10 = FUN_009f8b40();
  local_30 = iVar10 << 0x10 | 7;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_60[1] = 0xf;
  local_2c = 0x3ff001b;
  local_28 = 0x10;
  local_20 = "Em0010UsePath";
  local_60[0] = param_1 + 0x191c;
  local_50 = uVar1;
  local_4c = fVar2 + 0.5;
  local_48 = uVar3;
  local_44 = uVar4;
  local_40 = uVar5;
  local_3c = fVar8 + 0.5;
  local_38 = uVar6;
  local_34 = uVar7;
  HavokRayCastManager::set(local_60);
  return uVar9;
}

// 00B33940  FUN_00b33940  size=270  [callgraph]
undefined4 __fastcall FUN_00b33940(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar9 = FUN_00907560(param_1 + 0x1910,0,0,0,0,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0xa84);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(iVar10 + 0x40);
  uVar6 = *(undefined4 *)(iVar10 + 0x48);
  uVar7 = *(undefined4 *)(iVar10 + 0x4c);
  fVar8 = *(float *)(iVar10 + 0x44);
  iVar10 = FUN_009f8b40();
  local_30 = iVar10 << 0x10 | 7;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_60[1] = 0xf;
  local_28 = 0x78;
  local_20 = "Em0010Obstacle";
  local_60[0] = param_1 + 0x1910;
  local_50 = uVar1;
  local_4c = fVar2 + 0.5;
  local_48 = uVar3;
  local_44 = uVar4;
  local_40 = uVar5;
  local_3c = fVar8 + 0.5;
  local_38 = uVar6;
  local_34 = uVar7;
  HavokRayCastManager::set(local_60);
  return uVar9;
}

// 00B33A50  FUN_00b33a50  size=575  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b33ac0) */

void __thiscall FUN_00b33a50(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_74;
  int local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  float local_14;
  
  *(undefined4 *)(param_1 + 0x1918) = 0;
  local_74 = FUN_00907640(param_1 + 0x1940,&local_a4,0);
  if ((local_74 != 0) && (FUN_0112bcf0(), 0 < *(int *)(local_a4 + 0x14))) {
    iVar2 = *(int *)(*(int *)(local_a4 + 0x10) + 0x28);
    iVar3 = 0;
    iVar4 = 0;
    if (*(char *)(iVar2 + 0x18) == '\x01') {
      iVar3 = *(char *)(iVar2 + 0x10) + iVar2;
    }
    if (*(char *)(iVar2 + 0x18) == '\x02') {
      if (*(char *)(iVar2 + 0x18) == '\x02') {
        iVar4 = *(char *)(iVar2 + 0x10) + iVar2;
      }
      else {
        iVar4 = 0;
      }
    }
    if ((iVar3 != 0) && (iVar2 = FUN_008f7780(iVar3), iVar2 != 0)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
      iVar2 = FUN_009f9460(uVar1);
      if ((iVar2 != 0) ||
         ((iVar2 = FUN_009f94a0(uVar1), iVar2 != 0 || (iVar2 = FUN_009f9480(uVar1), iVar2 != 0)))) {
        *(undefined4 *)(param_1 + 0x1918) = 1;
      }
    }
    if ((iVar4 != 0) && (iVar2 = FUN_008f7780(iVar4), iVar2 != 0)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
      iVar2 = FUN_009f9460(uVar1);
      if ((iVar2 != 0) ||
         ((iVar2 = FUN_009f94a0(uVar1), iVar2 != 0 || (iVar2 = FUN_009f9480(uVar1), iVar2 != 0)))) {
        *(undefined4 *)(param_1 + 0x1918) = 1;
      }
    }
  }
  local_a0 = *(float *)(param_1 + 0x40);
  local_98 = *(float *)(param_1 + 0x48);
  local_94 = *(float *)(param_1 + 0x4c);
  local_14 = param_2[3];
  local_9c = *(float *)(param_1 + 0x44) + 1.5;
  local_90 = *param_2 - local_a0;
  local_8c = (param_2[1] + 1.5) - local_9c;
  local_88 = param_2[2] - local_98;
  local_84 = local_14 - local_94;
  iVar2 = FUN_009f8b40();
  local_70[0] = param_1 + 0x1940;
  local_60 = local_a0;
  local_5c = local_9c;
  local_3c = iVar2 << 0x10 | 7;
  local_58 = local_98;
  local_54 = local_94;
  local_70[1] = 0x3c;
  local_50 = local_90;
  local_38 = 0x3ff001b;
  local_34 = 0;
  local_4c = local_8c;
  local_30 = 0;
  local_2c = "Em0010NextPointView";
  local_48 = local_88;
  local_44 = local_84;
  local_40 = 0x3e4ccccd;
  FUN_0090fb00(local_70);
  iVar2 = FUN_00a8d3d0(8);
  if ((iVar2 == 0) && (local_74 != 0)) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  return;
}

// 00B33C90  FUN_00b33c90  size=327  [callgraph]
int __fastcall FUN_00b33c90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float local_74;
  float local_70;
  int local_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  
  iVar4 = FUN_00907640(param_1 + 0x1924,0,param_1 + 0x1930);
  if (iVar4 != 0) {
    local_74 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1934);
    iVar5 = FUN_00a8d3d0(8);
    if (iVar5 == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = 0.3;
    }
    if (fVar1 < local_74 != (fVar1 == local_74)) {
      iVar4 = 0;
    }
  }
  local_70 = 0.0;
  local_6c[0] = 0x40000000;
  local_6c[1] = 0x3f800000;
  D3DXVec3TransformNormal(&local_70,&local_70,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  local_70 = *(float *)(param_1 + 0x4c) + local_70;
  iVar5 = FUN_009f8b40();
  uStack_38 = iVar5 << 0x10 | 7;
  fStack_50 = local_70;
  local_6c[1] = 1;
  uStack_4c = 0;
  uStack_34 = 0;
  uStack_30 = 0x60;
  uStack_48 = 0xc2c80000;
  uStack_2c = 0;
  pcStack_28 = "Em0010FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e99999a;
  local_6c[0] = param_1 + 0x1924;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + local_74;
  FUN_0090fb00(local_6c);
  return iVar4;
}

// 00B33DE0  FUN_00b33de0  size=672  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b33e5e) */

undefined4 __thiscall FUN_00b33de0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float unaff_EBX;
  int iVar6;
  undefined4 unaff_ESI;
  float fStack_94;
  float fStack_90;
  float local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  
  iVar6 = 0;
  local_88 = param_1 + 0x1944;
  *(undefined4 *)(param_1 + 0x1950) = 0;
  *(undefined4 *)(param_1 + 0x1954) = 0;
  *(undefined4 *)(param_1 + 0x1958) = 0;
  local_84 = FUN_00907640(local_88,&local_8c,0);
  if ((local_84 != 0) && (FUN_0112bcf0(), 0 < *(int *)((int)local_8c + 0x14))) {
    iVar4 = *(int *)(*(int *)((int)local_8c + 0x10) + 0x28);
    iVar5 = 0;
    if (*(char *)(iVar4 + 0x18) == '\x01') {
      iVar5 = *(char *)(iVar4 + 0x10) + iVar4;
    }
    if (*(char *)(iVar4 + 0x18) == '\x02') {
      if (*(char *)(iVar4 + 0x18) == '\x02') {
        iVar6 = *(char *)(iVar4 + 0x10) + iVar4;
      }
      else {
        iVar6 = 0;
      }
    }
    if ((iVar5 != 0) && (iVar4 = FUN_008f7780(iVar5), iVar4 != 0)) {
      iVar4 = *(int *)(iVar4 + 0x4b0);
      iVar5 = FUN_009f93b0(iVar4);
      if (((iVar5 != 0) || (iVar5 = FUN_009f9350(iVar4), iVar5 != 0)) &&
         (*(undefined4 *)(param_1 + 0x1950) = 1, iVar4 == 0x12040)) {
        *(undefined4 *)(param_1 + 0x1954) = 1;
      }
      iVar5 = FUN_009f9460(iVar4);
      if (((iVar5 != 0) || (iVar5 = FUN_009f94a0(iVar4), iVar5 != 0)) ||
         (iVar4 = FUN_009f9480(iVar4), iVar4 != 0)) {
        *(undefined4 *)(param_1 + 0x1958) = 1;
      }
    }
    if ((iVar6 != 0) && (iVar6 = FUN_008f7780(iVar6), iVar6 != 0)) {
      iVar6 = *(int *)(iVar6 + 0x4b0);
      iVar4 = FUN_009f93b0(iVar6);
      if (((iVar4 != 0) || (iVar4 = FUN_009f9350(iVar6), iVar4 != 0)) &&
         (*(undefined4 *)(param_1 + 0x1950) = 1, iVar6 == 0x12040)) {
        *(undefined4 *)(param_1 + 0x1954) = 1;
      }
      iVar4 = FUN_009f9460(iVar6);
      if (((iVar4 != 0) || (iVar4 = FUN_009f94a0(iVar6), iVar4 != 0)) ||
         (iVar6 = FUN_009f9480(iVar6), iVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x1958) = 1;
      }
    }
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 1.0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  D3DXVec3TransformNormal(&local_80,&local_80,param_1 + 0x10);
  D3DXVec3TransformNormal(&local_7c,&local_7c,param_1 + 0x10);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  local_8c = param_2[3] + local_8c;
  iVar6 = FUN_009f8b40();
  uStack_44 = iVar6 << 0x10 | 7;
  fStack_5c = local_8c;
  uStack_74 = 10;
  iStack_58 = local_88;
  uStack_40 = 0x3ff001b;
  uStack_3c = 0;
  iStack_54 = local_84;
  uStack_38 = 0;
  pcStack_34 = "Em0010WallCheck";
  uStack_50 = local_80;
  uStack_4c = local_7c;
  uStack_48 = 0x3dcccccd;
  local_68 = fVar1 + unaff_EBX;
  fStack_64 = fVar2 + fStack_94;
  fStack_60 = fVar3 + fStack_90;
  FUN_0090fb00(&local_78);
  return unaff_ESI;
}

// 00B34080  FUN_00b34080  size=615  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b34100) */

undefined4 __thiscall FUN_00b34080(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_88;
  int local_84;
  int local_80;
  int *local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  uVar3 = 0;
  local_74 = param_1 + 0x1968;
  local_78 = param_1;
  iVar1 = FUN_00907640(local_74,&local_84,0);
  if (iVar1 != 0) {
    FUN_0112bcf0();
    local_7c = (int *)(local_84 + 0x10);
    local_80 = 0;
    if (0 < *(int *)(local_84 + 0x14)) {
      local_88 = 0;
      do {
        iVar2 = 0;
        iVar1 = *(int *)(*local_7c + local_88 + 0x28);
        iVar4 = 0;
        if (*(char *)(iVar1 + 0x18) == '\x01') {
          iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
        }
        if (*(char *)(iVar1 + 0x18) == '\x02') {
          if (*(char *)(iVar1 + 0x18) == '\x02') {
            iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
          }
          else {
            iVar4 = 0;
          }
        }
        if ((iVar2 != 0) && (iVar1 = FUN_008f7780(iVar2), iVar1 != 0)) {
          iVar2 = FUN_009f93b0(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar2 != 0) {
            uVar3 = 1;
          }
          iVar2 = FUN_009f9480(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar2 != 0) {
            uVar3 = 1;
          }
          iVar2 = FUN_009f9460(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar2 != 0) {
            uVar3 = 1;
          }
          iVar1 = FUN_009f94a0(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar1 != 0) {
            uVar3 = 1;
          }
        }
        if ((iVar4 != 0) && (iVar1 = FUN_008f7780(iVar4), iVar1 != 0)) {
          iVar2 = FUN_009f93b0(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar2 != 0) {
            uVar3 = 1;
          }
          iVar2 = FUN_009f9480(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar2 != 0) {
            uVar3 = 1;
          }
          iVar2 = FUN_009f9460(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar2 != 0) {
            uVar3 = 1;
          }
          iVar1 = FUN_009f94a0(*(undefined4 *)(iVar1 + 0x4b0));
          if (iVar1 != 0) {
            uVar3 = 1;
          }
        }
        local_88 = local_88 + 0x30;
        local_80 = local_80 + 1;
      } while (local_80 < local_7c[1]);
    }
  }
  local_70 = *param_3 - *param_2;
  local_6c = param_3[1] - param_2[1];
  local_68 = param_3[2] - param_2[2];
  local_64 = param_3[3] - param_2[3];
  iVar1 = FUN_009f8b40();
  local_50 = *param_2;
  local_4c = param_2[1];
  local_2c = iVar1 << 0x10 | 7;
  local_48 = param_2[2];
  local_24 = 0;
  local_44 = param_2[3];
  local_20 = 0;
  local_40 = local_70;
  local_60[0] = local_74;
  local_3c = local_6c;
  local_60[1] = 10;
  local_28 = 0x3ff001b;
  local_38 = local_68;
  local_1c = "Em0010FireLineCheck";
  local_34 = local_64;
  local_30 = 0x3dcccccd;
  FUN_0090fb00(local_60);
  return uVar3;
}

// 00B342F0  FUN_00b342f0  size=535  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b34360) */

undefined4 __thiscall FUN_00b342f0(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float unaff_ESI;
  int iVar6;
  float unaff_EDI;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  
  local_68 = (float)(param_1 + 0x195c);
  local_88 = 0;
  local_6c = param_1;
  iVar3 = FUN_00907640(local_68,&local_64,0);
  if ((iVar3 != 0) && (local_84 = 0, 0 < *(int *)((int)local_64 + 0x14))) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(*(int *)((int)local_64 + 0x10) + 0x28 + iVar3);
      iVar5 = 0;
      iVar6 = 0;
      if (*(char *)(iVar4 + 0x18) == '\x01') {
        iVar5 = *(char *)(iVar4 + 0x10) + iVar4;
      }
      if (*(char *)(iVar4 + 0x18) == '\x02') {
        if (*(char *)(iVar4 + 0x18) == '\x02') {
          iVar6 = *(char *)(iVar4 + 0x10) + iVar4;
        }
        else {
          iVar6 = 0;
        }
      }
      if (((iVar5 != 0) && (iVar4 = FUN_008f7780(iVar5), iVar4 != 0)) &&
         (iVar4 = FUN_009f93b0(*(undefined4 *)(iVar4 + 0x4b0)), iVar4 != 0)) {
        local_88 = 1;
      }
      if (((iVar6 != 0) && (iVar4 = FUN_008f7780(iVar6), iVar4 != 0)) &&
         (iVar4 = FUN_009f93b0(*(undefined4 *)(iVar4 + 0x4b0)), iVar4 != 0)) {
        local_88 = 1;
      }
      local_84 = local_84 + 1;
      iVar3 = iVar3 + 0x30;
      param_1 = local_6c;
    } while (local_84 < *(int *)((int)local_64 + 0x14));
  }
  fVar1 = (float)(param_1 + 0x10);
  local_80 = 0;
  local_7c = 0;
  puVar7 = &local_a0;
  local_78 = 0x3f333333;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  fVar9 = fVar1;
  D3DXVec3TransformNormal(puVar7,puVar7,fVar1);
  D3DXVec3TransformNormal(&uStack_8c,&uStack_8c,fVar1);
  fVar8 = *param_2 + (float)puVar7;
  fVar9 = param_2[1] + fVar9;
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  iVar3 = FUN_009f8b40();
  uStack_44 = iVar3 << 0x10 | 7;
  local_78 = local_80;
  uStack_58 = local_98;
  uStack_74 = 10;
  uStack_40 = 0x3ff001b;
  uStack_54 = uStack_94;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_50 = uStack_90;
  pcStack_34 = "Em0010PhotoFrameRouteWallCheck";
  uStack_4c = uStack_8c;
  uStack_48 = param_3;
  local_68 = fVar8;
  local_64 = fVar9;
  fStack_60 = fVar1 + unaff_EDI;
  fStack_5c = fVar2 + unaff_ESI;
  FUN_0090fb00(&local_78);
  return local_a0;
}

// 00B34510  FUN_00b34510  size=158  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b3456a) */

undefined4 FUN_00b34510(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  undefined1 local_20 [28];
  
  iVar3 = 0;
  iVar1 = FUN_00907640(param_1,&local_24,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0112bcf0();
  if (0 < *(int *)(local_24 + 0x14)) {
    iVar1 = *(int *)(*(int *)(local_24 + 0x10) + 0x28);
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x18) == '\x01') {
      iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
    }
    if (*(char *)(iVar1 + 0x18) == '\x02') {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        iVar3 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      else {
        iVar3 = 0;
      }
    }
    if (iVar2 != 0) {
      FUN_008f7780(iVar2);
    }
    if (iVar3 != 0) {
      FUN_008f7780(iVar3);
    }
  }
  return 1;
}

// 00B345B0  FUN_00b345b0  size=278  [callgraph]
void __thiscall FUN_00b345b0(int *param_1,int param_2,float param_3)

{
  float10 fVar1;
  
  if (((param_1[0x139] != 0) && (param_1[0x570] == 0)) && (param_1[0x6c9] == 0)) {
    if (((param_1[0x375] & 0x10000000U) != 0) && (param_2 == 0)) {
      (**(code **)(*param_1 + 0x358))(2,param_1 + 0x430);
      FUN_00e5e0c0("em0010_se_dmg_spark_death",param_1,0xffffffff,0);
    }
    if ((param_1[0x375] & 0x100U) == 0) {
      if (param_3 <= 0.0) {
        fVar1 = (float10)FUN_00dde300(0,0x42f00000);
        param_1[0x570] = 1;
        param_1[0x56f] = (int)(float)(fVar1 + (float10)240.0);
      }
      else {
        param_1[0x570] = 1;
        param_1[0x56f] = (int)(param_3 * 60.0);
      }
    }
    param_1[0x139] = 1;
    FUN_00b30b70();
    FUN_00eaa6e0(0x41100000,0);
    if (param_1[0x5d2] == 0) {
      (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x45c);
    }
  }
  return;
}

// 00B346D0  FUN_00b346d0  size=277  [callgraph]
void __fastcall FUN_00b346d0(int *param_1)

{
  int unaff_ESI;
  char *pcVar1;
  
  param_1[0x139] = 1;
  param_1[0x5a3] = 1;
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41200000,0);
  if ((param_1[0x375] & 0x100U) != 0) {
    param_1[0x1af] = 1;
    return;
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x358))(3,0);
    if (unaff_ESI == 0) {
      pcVar1 = "em0010_se_dmg_spark_explosion";
    }
    else {
      pcVar1 = "em0010_se_dmg_vanish";
    }
    FUN_00e5e0c0(pcVar1,param_1,0xffffffff,0);
    (**(code **)(*param_1 + 0x364))(0x20010);
    param_1[0x1af] = 1;
    FUN_00a85670(param_1,1);
    FUN_00940450(param_1[0x20f]);
    (**(code **)(*param_1 + 0x20))();
  }
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00c4d1a0(param_1[0x13c],0);
  FUN_00b2e550();
  return;
}

// 00B347F0  Em0010::vf368  size=291  [class]
undefined1 __fastcall Em0010::vf368(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar2 = 0;
  if ((iVar1 == 0x20140) &&
     (uVar2 = (*(uint *)(param_1 + 0xdd8) & 0x4000) != 0,
     (*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0)) {
    uVar2 = 2;
  }
  if (iVar1 == 0x20142) {
    uVar2 = 3;
    if ((*(uint *)(param_1 + 0xdd8) & 0x4000) != 0) {
      uVar2 = 4;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0) {
      uVar2 = 5;
    }
  }
  if (iVar1 == 0x20144) {
    uVar2 = 6;
    if ((*(uint *)(param_1 + 0xdd8) & 0x4000) != 0) {
      uVar2 = 7;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0) {
      uVar2 = 8;
    }
  }
  if (iVar1 == 0x20150) {
    uVar2 = 0xc;
    if ((*(uint *)(param_1 + 0xdd8) & 0x4000) != 0) {
      uVar2 = 0xd;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0) {
      uVar2 = 0xe;
    }
  }
  if (iVar1 == 0x20152) {
    uVar2 = 0xf;
    if ((*(uint *)(param_1 + 0xdd8) & 0x4000) != 0) {
      uVar2 = 0x10;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0) {
      uVar2 = 0x11;
    }
  }
  if (iVar1 == 0x20160) {
    uVar2 = 9;
    if ((*(uint *)(param_1 + 0xdd8) & 0x4000) != 0) {
      uVar2 = 10;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0) {
      uVar2 = 0xb;
    }
  }
  if (iVar1 == 0x20170) {
    uVar2 = 0x12;
    if ((*(uint *)(param_1 + 0xdd8) & 0x4000) != 0) {
      uVar2 = 0x13;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x4000000) != 0) {
      uVar2 = 0x14;
    }
  }
  return uVar2;
}

// 00B34920  FUN_00b34920  size=339  [between]
undefined4 __fastcall FUN_00b34920(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((param_1[0x372] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) {
    return 0;
  }
  if ((((((param_1[0x375] & 0xe00U) == 0) && ((param_1[0x376] & 0x200000U) == 0)) &&
       (((*(byte *)(param_1 + 0x377) & 0x80) == 0 &&
        ((param_1[0x139] == 0 && (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)))))) &&
      (0 < param_1[0x21c])) &&
     ((((param_1[0x187] != 0 && (iVar1 = FUN_00a82e80(), iVar1 == 0)) &&
       (iVar1 = FUN_00a8c760(0x3f), iVar1 == 0)) && (param_1[0x186] != 0x100001)))) {
    if (((param_1[0x376] & 0x80000U) != 0) && (iVar1 = FUN_00a82e70(), iVar1 != 0)) {
      return 0;
    }
    piVar2 = (int *)FUN_00ac8120();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x1d8))();
      if (iVar1 != 0) {
        return 0;
      }
      if (piVar2[0x139] != 0) {
        return 0;
      }
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x3f800000,0x3fc00000,0x40490fdb,0x3f490fdb,
                 0x1001,0);
    return 1;
  }
  return 0;
}

// 00B34A80  Em0010::vf13C  size=142  [class]
bool __fastcall Em0010::vf13C(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x372] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) {
    return false;
  }
  if (((((param_1[0x66e] == 0) && ((param_1[0x375] & 0xe00U) == 0)) &&
       (((param_1[0x376] & 0x200000U) == 0 &&
        (((*(byte *)(param_1 + 0x377) & 0x80) == 0 && (param_1[0x139] == 0)))))) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
     ((0 < param_1[0x21c] && (param_1[0x187] != 0)))) {
    iVar1 = FUN_00a82e80();
    return iVar1 == 0;
  }
  return false;
}

// 00B34B10  FUN_00b34b10  size=233  [between]
undefined4 __fastcall FUN_00b34b10(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((param_1[0x372] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) {
    return 0;
  }
  if ((((param_1[0x5d1] != 1) && (param_1[0x139] == 0)) &&
      (((DAT_01bea060 & 0x2000000) == 0 &&
       ((iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0 && (0 < param_1[0x21c])))))) &&
     (param_1[0x186] == 0xa0015)) {
    piVar2 = (int *)FUN_00ac8120();
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x1d8))();
      if (iVar1 != 0) {
        return 0;
      }
      if (piVar2[0x139] != 0) {
        return 0;
      }
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40200000,0x3fc00000,0x24,8);
    return 1;
  }
  return 0;
}

// 00B34C00  FUN_00b34c00  size=249  [between]
undefined4 __thiscall FUN_00b34c00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4a0) == 0x14) {
    return 1;
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x14);
  if (*(int *)(param_1 + 0x4a0) == 8) {
    uVar1 = FUN_00a8d2a0();
    puVar2 = (undefined4 *)FUN_009f8b60();
    iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar2,0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
      *(undefined4 *)(iVar3 + 0x594) = param_2;
      *(undefined4 *)(iVar3 + 0x590) = param_3;
      FUN_00d771d0(0xb);
      FUN_00a93a00(iVar3,uVar1);
      FUN_00d7b0f0();
      FUN_00d7b890();
      return 1;
    }
  }
  else if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar3 != 0) {
      iVar3 = Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      if (iVar3 == 0) {
        return 0;
      }
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_00a93730(0xb);
    }
  }
  return 1;
}

// 00B34D00  FUN_00b34d00  size=46  [between]
bool __fastcall FUN_00b34d00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (((iVar1 != 0x20010) && (iVar1 != 0x20140)) && (iVar1 != 0x20142)) {
    return iVar1 == 0x20144;
  }
  return true;
}

// 00B34D30  FUN_00b34d30  size=32  [between]
bool __fastcall FUN_00b34d30(int param_1)

{
  if (*(int *)(param_1 + 0x4b0) == 0x20150) {
    return true;
  }
  return *(int *)(param_1 + 0x4b0) == 0x20152;
}

// 00B34D50  FUN_00b34d50  size=16  [between]
bool __fastcall FUN_00b34d50(int param_1)

{
  return *(int *)(param_1 + 0x4b0) == 0x20170;
}

// 00B34D70  FUN_00b34d70  size=39  [between]
bool __fastcall FUN_00b34d70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 != 0x20144) && (iVar1 != 0x20152)) {
    return iVar1 == 0x20170;
  }
  return true;
}

// 00B34DA0  FUN_00b34da0  size=79  [between]
undefined4 FUN_00b34da0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar3 = &DAT_01be9c94;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && ((*(byte *)(piVar2 + 0x130) & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

// 00B34E20  FUN_00b34e20  size=266  [between]
void __fastcall FUN_00b34e20(int *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 auStack_38 [6];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar8 = &DAT_01be9c78;
  (**(code **)(*param_1 + 4))(&DAT_01be9c78);
  iVar3 = FUN_00dd6d80(puVar8);
  if ((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a7c8a0();
  }
  iVar3 = FUN_00a10040(0x3c);
  if (iVar3 != 2) {
    iVar3 = (int)*(char *)((int)param_1 + 0xbab);
    if ((param_1[0x12a] & 0x100U) != 0) {
      iVar3 = 0;
    }
    if ((param_1[0x12a] & 0x200U) != 0) {
      iVar3 = 6;
    }
    iVar1 = param_1[0x13c];
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    puVar5 = auStack_38 + 2;
    auStack_38[4] = 0;
    puVar4 = &uStack_20;
    uStack_20 = 0;
    auStack_38[0] = 2;
    uStack_1c = 0;
    auStack_38[1] = 3;
    uStack_18 = 0;
    uVar9 = 0xbf800000;
    uVar7 = 0x3f000000;
    uVar6 = 0x41200000;
    sVar2 = FUN_00dde2d0(0,1);
    iVar3 = FUN_0093c1f0(iVar3,iVar1,2,auStack_38[sVar2],puVar4,puVar5,uVar6,uVar7,uVar9);
    param_1[0x6d2] = iVar3;
  }
  return;
}

// 00B34F30  FUN_00b34f30  size=158  [between]
undefined4 __thiscall FUN_00b34f30(int param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((((DAT_01bea060 & 0x2000000) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
     ((DAT_01bea060 & 0x8000000) == 0)) {
    iVar1 = FUN_00ac82f0();
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 0;
    iVar1 = FUN_00b2e440();
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x18f0) == 0)) {
      FUN_00a92fb0();
      fVar3 = (float10)FUN_00e049b0();
      fVar3 = fVar3 + (float10)*(float *)(param_1 + 0xbd0);
      *(float *)(param_1 + 0xbd0) = (float)fVar3;
      if ((float10)param_2 <= fVar3) {
        uVar2 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xbd0) = 0;
    }
    if (param_3 * param_3 < *(float *)(param_1 + 0xa8c) !=
        (param_3 * param_3 == *(float *)(param_1 + 0xa8c))) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 1;
}

// 00B34FD0  FUN_00b34fd0  size=149  [between]
void __thiscall FUN_00b34fd0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0x4b0) == 0x20170) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9d28;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00a9e290(param_2,0,0,0x3f800000,0x8000000,0,0x3f800000);
      piVar2[0x186] = 0;
      piVar2[0x230] = param_3;
      piVar2[0x231] = 1;
    }
  }
  return;
}

// 00B35070  FUN_00b35070  size=825  [between]
void __thiscall FUN_00b35070(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_20 [8];
  
  local_20[0] = 0x149;
  local_20[1] = 0x14f;
  local_20[2] = 0x148;
  local_20[3] = 0x14e;
  local_20[4] = 0x14a;
  local_20[5] = 0x150;
  local_20[6] = 0x14b;
  local_20[7] = 0x151;
  uVar1 = (uint)(param_1[300] == 0x20152);
  switch(param_2) {
  case 0x49:
    goto switchD_00b350e2_caseD_49;
  case 0x4a:
    goto switchD_00b350e2_caseD_4a;
  case 0x4b:
    goto switchD_00b350e2_caseD_4b;
  case 0x4c:
    break;
  case 0x4d:
    if ((param_1[0x377] & 0x40000U) == 0) {
      if (param_1[300] == 0x20170) {
        if (param_3 != 0) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
        }
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_00b34e20();
      FUN_00ac8d40(1);
      param_1[0x377] = param_1[0x377] | 0x40000;
    }
    break;
  default:
    goto switchD_00b350e2_default;
  }
  if ((param_1[0x377] & 0x80000U) == 0) {
    if (param_1[300] == 0x20170) {
      FUN_00ac94e0("R_upper_leg_shield");
      FUN_00ac94e0("R_lower_leg_shield");
      if (param_3 != 0) {
        uVar2 = 0x157;
LAB_00b351a2:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("R_hip_armor");
      FUN_00ac94e0("R_leg_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1 + 4];
        goto LAB_00b351a2;
      }
    }
    FUN_00ac9420("_EFD003");
    FUN_00ac8dd0("_R_leg_",1);
    param_1[0x377] = param_1[0x377] | 0x80000;
  }
  if (param_4 != 0) goto switchD_00b350e2_default;
switchD_00b350e2_caseD_4b:
  if ((param_1[0x377] & 0x100000U) == 0) {
    if (param_1[300] == 0x20170) {
      FUN_00ac94e0("L_upper_leg_shield");
      FUN_00ac94e0("L_lower_leg_shield");
      if (param_3 != 0) {
        uVar2 = 0x158;
LAB_00b35238:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("L_hip_armor");
      FUN_00ac94e0("L_leg_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1 + 6];
        goto LAB_00b35238;
      }
    }
    FUN_00ac9420("_EFD004");
    FUN_00ac8dd0("_L_leg_",1);
    param_1[0x377] = param_1[0x377] | 0x100000;
  }
  if (param_4 != 0) goto switchD_00b350e2_default;
switchD_00b350e2_caseD_4a:
  if ((param_1[0x377] & 0x200000U) == 0) {
    if (param_1[300] == 0x20170) {
      FUN_00ac94e0("L_forearm_armor1");
      FUN_00ac94e0("R_shoulder_pad");
      if (param_3 != 0) {
        uVar2 = 0x154;
LAB_00b352c2:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("R_shoulder_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1];
        goto LAB_00b352c2;
      }
    }
    FUN_00ac9420("_EFD01");
    FUN_00ac8dd0("_R_arm_",1);
    param_1[0x377] = param_1[0x377] | 0x200000;
  }
  if (param_4 != 0) goto switchD_00b350e2_default;
switchD_00b350e2_caseD_49:
  if ((param_1[0x377] & 0x400000U) != 0) goto switchD_00b350e2_default;
  if (param_1[300] == 0x20170) {
    FUN_00ac94e0("L_forearm_armor");
    FUN_00ac94e0("L_shoulder_pad");
    if (param_3 != 0) {
      uVar2 = 0x155;
LAB_00b35348:
      (**(code **)(*param_1 + 0x358))(uVar2,0);
    }
  }
  else {
    FUN_00ac94e0("L_shoulder_armor");
    if (param_3 != 0) {
      uVar2 = local_20[uVar1 + 2];
      goto LAB_00b35348;
    }
  }
  FUN_00ac9420("_EFD02");
  FUN_00ac8dd0("_L_arm_",1);
  param_1[0x377] = param_1[0x377] | 0x400000;
switchD_00b350e2_default:
  if ((param_1[0x375] & 0x1000U) == 0) {
    (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
  }
  param_1[0x375] = param_1[0x375] | 0x1000;
  return;
}

// 00B353C0  FUN_00b353c0  size=113  [between]
uint __fastcall FUN_00b353c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((((iVar1 == 0x20010) || (iVar1 == 0x20140)) || (iVar1 == 0x20142)) ||
     (((iVar1 == 0x20144 || (iVar1 == 0x20160)) ||
      (uVar2 = *(uint *)(param_1 + 0xddc), (uVar2 & 0x40000) != 0)))) {
    return 0x4d;
  }
  if ((uVar2 & 0x80000) != 0) {
    return 0x4c;
  }
  if ((uVar2 & 0x100000) != 0) {
    return 0x4b;
  }
  if ((uVar2 & 0x200000) != 0) {
    return 0x4a;
  }
  return (uVar2 & 0x400000 | 0x12000000) >> 0x16;
}

// 00B354B0  FUN_00b354b0  size=74  [between]
void __thiscall FUN_00b354b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar2 = 0;
    if ((iVar1 == 0x20150) || (iVar1 == 0x20152)) {
      uVar2 = 1;
    }
    if (iVar1 == 0x20170) {
      uVar2 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar2,param_2,param_3);
  }
  return;
}

// 00B35500  FUN_00b35500  size=92  [between]
undefined4 __fastcall FUN_00b35500(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) == 0x310a1)) {
      iVar1 = FUN_00a7c9b0(param_1 + 0xf44);
      if (iVar1 != 0) {
        FUN_00a7c960(param_1 + 0xf44);
        return 1;
      }
    }
  }
  return 0;
}

// 00B35560  Em0010::vf2F8  size=115  [class]
void __fastcall Em0010::vf2F8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar2 = 0;
    if ((iVar1 == 0x20150) || (iVar1 == 0x20152)) {
      uVar2 = 1;
    }
    if (iVar1 == 0x20170) {
      uVar2 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar2,0,0);
    param_1[0x1af] = 1;
    FUN_00940450(param_1[0x20f]);
  }
  (**(code **)(*param_1 + 0x20))();
  FUN_009fdde0();
  return;
}

// 00B355E0  FUN_00b355e0  size=230  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b3564f) */

undefined4 __fastcall FUN_00b355e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 0xdd8) & 0x80000) == 0) {
    return 0;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x764) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x764) + 300);
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = 0;
  FUN_0112bcf0();
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    do {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x28 + iVar5);
      iVar3 = 0;
      iVar6 = 0;
      if (*(char *)(iVar2 + 0x18) == '\x01') {
        iVar3 = *(char *)(iVar2 + 0x10) + iVar2;
      }
      if (*(char *)(iVar2 + 0x18) == '\x02') {
        if (*(char *)(iVar2 + 0x18) == '\x02') {
          iVar6 = *(char *)(iVar2 + 0x10) + iVar2;
        }
        else {
          iVar6 = 0;
        }
      }
      if (((iVar3 != 0) && (iVar2 = FUN_008f7780(iVar3), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x4b0) == 0x12040)) {
        local_4 = 1;
      }
      if (((iVar6 != 0) && (iVar2 = FUN_008f7780(iVar6), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x4b0) == 0x12040)) {
        local_4 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *(int *)(iVar1 + 0x14));
  }
  return local_4;
}

// 00B359E0  FUN_00b359e0  size=292  [callgraph]
void __fastcall FUN_00b359e0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x870) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x10000000;
    FUN_00aa4080(0x395,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b345b0(*(undefined4 *)(param_1 + 0x1748),0xbf800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    piVar2 = (int *)FUN_00c209f0();
    (**(code **)(*piVar2 + 0x14))(10);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x15c0) = 0;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    FUN_00b346d0(0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 3:
    break;
  default:
    return;
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    FUN_009fdde0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B35B80  FUN_00b35b80  size=1179  [callgraph]
undefined4 __thiscall FUN_00b35b80(int *param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int *local_24;
  undefined4 auStack_20 [8];
  
  bVar2 = true;
  local_24 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_24 = (int *)FUN_00a7c8a0();
  }
  iVar3 = FUN_00ac8170(local_24);
  if ((iVar3 != 0) && (local_24 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*local_24 + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar7);
  }
  if ((param_1[0xdc] == 0) || (*(int *)(param_1[0xdc] + 0xc) != 0)) {
    bVar2 = false;
    iVar3 = FUN_00ac82f0();
    if ((iVar3 != 0) && (iVar3 = FUN_00ac8350(), iVar3 != 0)) {
      bVar2 = true;
    }
  }
  iVar4 = FUN_00ac8cd0(param_2);
  iVar3 = param_1[300];
  if ((((iVar3 == 0x20150) || (iVar3 == 0x20152)) || (iVar3 == 0x20170)) &&
     ((param_1[0x375] & 0x1000U) == 0)) {
    iVar4 = 0;
  }
  if ((((param_1[0x377] & 0x8000U) != 0) && (param_1[0x3e3] != 0)) && (param_1[0x139] == 0)) {
    if ((param_1[0x376] & 0x2000000U) == 0) {
      fVar1 = 2.0943952;
    }
    else {
      fVar1 = 1.5707964;
    }
    if ((float)param_1[0x2a8] < fVar1) {
      iVar4 = 0;
    }
  }
  if (((*(uint *)(param_2 + 0x8c) & 0x600) != 0) || ((*(uint *)(param_2 + 0x90) & 0x40000) != 0)) {
    bVar2 = true;
  }
  if ((*(uint *)(param_2 + 0x90) & 0x20000) != 0) {
    bVar2 = true;
    if (((iVar3 == 0x20150) || (iVar3 == 0x20152)) || (iVar3 == 0x20170)) {
      auStack_20[0] = 0x149;
      auStack_20[1] = 0x14f;
      auStack_20[2] = 0x148;
      auStack_20[3] = 0x14e;
      auStack_20[4] = 0x14a;
      auStack_20[5] = 0x150;
      auStack_20[6] = 0x14b;
      auStack_20[7] = 0x151;
      uVar5 = (uint)(iVar3 == 0x20152);
      if ((param_1[0x377] & 0x40000U) == 0) {
        if (iVar3 == 0x20170) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_00b34e20();
        FUN_00ac8d40(1);
        param_1[0x377] = param_1[0x377] | 0x40000;
      }
      if ((param_1[0x377] & 0x80000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("R_upper_leg_shield");
          FUN_00ac94e0("R_lower_leg_shield");
          uVar6 = 0x157;
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          FUN_00ac94e0("R_leg_armor");
          uVar6 = auStack_20[uVar5 + 4];
        }
        (**(code **)(*param_1 + 0x358))(uVar6,0);
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x80000;
      }
      if ((param_1[0x377] & 0x100000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_upper_leg_shield");
          FUN_00ac94e0("L_lower_leg_shield");
          uVar6 = 0x158;
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          FUN_00ac94e0("L_leg_armor");
          uVar6 = auStack_20[uVar5 + 6];
        }
        (**(code **)(*param_1 + 0x358))(uVar6,0);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x100000;
      }
      if ((param_1[0x377] & 0x200000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_forearm_armor1");
          FUN_00ac94e0("R_shoulder_pad");
          uVar6 = 0x154;
        }
        else {
          FUN_00ac94e0("R_shoulder_armor");
          uVar6 = auStack_20[uVar5];
        }
        (**(code **)(*param_1 + 0x358))(uVar6,0);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x200000;
      }
      if ((param_1[0x377] & 0x400000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_forearm_armor");
          FUN_00ac94e0("L_shoulder_pad");
          uVar6 = 0x155;
        }
        else {
          FUN_00ac94e0("L_shoulder_armor");
          uVar6 = auStack_20[uVar5 + 2];
        }
        (**(code **)(*param_1 + 0x358))(uVar6,0);
        FUN_00ac9420("_EFD02");
        FUN_00ac8dd0("_L_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x400000;
      }
      if ((param_1[0x375] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      }
      param_1[0x375] = param_1[0x375] | 0x1000;
    }
    iVar4 = FUN_00ac8cd0(param_2);
  }
  if ((iVar4 == 0) || (*(int *)(param_2 + 0x94) == 0)) {
    return 0;
  }
  if (!bVar2) {
    if (*(int *)(param_2 + 0x94) == 0) {
      return 0;
    }
    if (param_1[0x204] == 0) {
      return 0;
    }
    FUN_00a8e680(param_2,0,0x3e4ccccd);
  }
  FUN_00ac8d00(param_1,param_2,0);
  (**(code **)(*param_1 + 0x1ec))();
  (**(code **)(*param_1 + 0x198))(local_24,param_2,0x100);
  return 1;
}

// 00B36020  FUN_00b36020  size=2114  [callgraph]
void __fastcall FUN_00b36020(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_20 [8];
  
  iVar3 = param_1[300];
  if (((((iVar3 == 0x20010) || (iVar3 == 0x20140)) || (iVar3 == 0x20142)) ||
      ((iVar3 == 0x20144 || (iVar3 == 0x20160)))) ||
     (((param_1[0x377] & 0x40000U) != 0 ||
      (((iVar3 != 0x20150 && (iVar3 != 0x20152)) && (iVar3 != 0x20170)))))) {
    return;
  }
  iVar3 = FUN_00a8eea0();
  fVar1 = (float)iVar3;
  iVar3 = FUN_00a8eeb0();
  fVar2 = (float)iVar3;
  if (fVar1 < (float)param_1[0x6c4] * fVar2) {
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x20152);
    if ((param_1[0x377] & 0x40000U) == 0) {
      if (param_1[300] == 0x20170) {
        (**(code **)(*param_1 + 0x358))(0x156,0);
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_00b34e20();
      FUN_00ac8d40(1);
      param_1[0x377] = param_1[0x377] | 0x40000;
    }
    if ((param_1[0x377] & 0x80000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("R_upper_leg_shield");
        FUN_00ac94e0("R_lower_leg_shield");
        uVar5 = 0x157;
      }
      else {
        FUN_00ac94e0("R_hip_armor");
        FUN_00ac94e0("R_leg_armor");
        uVar5 = local_20[uVar4 + 4];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD003");
      FUN_00ac8dd0("_R_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x80000;
    }
    if ((param_1[0x377] & 0x100000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_upper_leg_shield");
        FUN_00ac94e0("L_lower_leg_shield");
        uVar5 = 0x158;
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        FUN_00ac94e0("L_leg_armor");
        uVar5 = local_20[uVar4 + 6];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x100000;
    }
    if ((param_1[0x377] & 0x200000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor1");
        FUN_00ac94e0("R_shoulder_pad");
        uVar5 = 0x154;
      }
      else {
        FUN_00ac94e0("R_shoulder_armor");
        uVar5 = local_20[uVar4];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x200000;
    }
    if ((param_1[0x377] & 0x400000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor");
        FUN_00ac94e0("L_shoulder_pad");
        uVar5 = 0x155;
      }
      else {
        FUN_00ac94e0("L_shoulder_armor");
        uVar5 = local_20[uVar4 + 2];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x400000;
    }
    if ((param_1[0x375] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      param_1[0x375] = param_1[0x375] | 0x1000;
      return;
    }
  }
  else if (fVar1 < (float)param_1[0x6c3] * fVar2) {
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x20152);
    if ((param_1[0x377] & 0x80000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("R_upper_leg_shield");
        FUN_00ac94e0("R_lower_leg_shield");
        uVar5 = 0x157;
      }
      else {
        FUN_00ac94e0("R_hip_armor");
        FUN_00ac94e0("R_leg_armor");
        uVar5 = local_20[uVar4 + 4];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD003");
      FUN_00ac8dd0("_R_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x80000;
    }
    if ((param_1[0x377] & 0x100000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_upper_leg_shield");
        FUN_00ac94e0("L_lower_leg_shield");
        uVar5 = 0x158;
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        FUN_00ac94e0("L_leg_armor");
        uVar5 = local_20[uVar4 + 6];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x100000;
    }
    if ((param_1[0x377] & 0x200000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor1");
        FUN_00ac94e0("R_shoulder_pad");
        uVar5 = 0x154;
      }
      else {
        FUN_00ac94e0("R_shoulder_armor");
        uVar5 = local_20[uVar4];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x200000;
    }
    if ((param_1[0x377] & 0x400000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor");
        FUN_00ac94e0("L_shoulder_pad");
        uVar5 = 0x155;
      }
      else {
        FUN_00ac94e0("L_shoulder_armor");
        uVar5 = local_20[uVar4 + 2];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x400000;
    }
    if ((param_1[0x375] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      param_1[0x375] = param_1[0x375] | 0x1000;
      return;
    }
  }
  else {
    if ((float)param_1[0x6c2] * fVar2 <= fVar1) {
      if (fVar1 < (float)param_1[0x6c1] * fVar2) {
        FUN_00b35070(0x4a,1,0);
        return;
      }
      if ((float)param_1[0x6c0] * fVar2 <= fVar1) {
        return;
      }
      FUN_00b35070(0x49,1,0);
      return;
    }
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x20152);
    if ((param_1[0x377] & 0x100000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_upper_leg_shield");
        FUN_00ac94e0("L_lower_leg_shield");
        uVar5 = 0x158;
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        FUN_00ac94e0("L_leg_armor");
        uVar5 = local_20[uVar4 + 6];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x100000;
    }
    if ((param_1[0x377] & 0x200000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor1");
        FUN_00ac94e0("R_shoulder_pad");
        uVar5 = 0x154;
      }
      else {
        FUN_00ac94e0("R_shoulder_armor");
        uVar5 = local_20[uVar4];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x200000;
    }
    if ((param_1[0x377] & 0x400000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor");
        FUN_00ac94e0("L_shoulder_pad");
        uVar5 = 0x155;
      }
      else {
        FUN_00ac94e0("L_shoulder_armor");
        uVar5 = local_20[uVar4 + 2];
      }
      (**(code **)(*param_1 + 0x358))(uVar5,0);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x400000;
    }
    if ((param_1[0x375] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
    }
  }
  param_1[0x375] = param_1[0x375] | 0x1000;
  return;
}

// 00B36870  FUN_00b36870  size=243  [callgraph]
void __fastcall FUN_00b36870(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1d7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    piVar3 = param_1 + 0x10;
    uVar1 = FUN_00a81330(piVar3);
    FUN_00a88250(uVar1,piVar3);
    FUN_00b30b70();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b34fd0(&DAT_0163b604,1);
    if (((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) &&
       ((param_1[0x376] & 0x20000000U) != 0)) {
      iVar2 = FUN_00b333b0();
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_0163b604,0);
      }
      param_1[0x376] = param_1[0x376] & 0xdfffffff;
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B36970  FUN_00b36970  size=470  [callgraph]
void __fastcall FUN_00b36970(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x1df;
    if (param_1[300] == 0x20170) {
      uVar3 = 0x564;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar1,0,0x3f800000);
    FUN_00b34fd0(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    uVar3 = 0x1e0;
    if (param_1[300] == 0x20170) {
      uVar3 = 0x565;
    }
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar1,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar3 = 0x1e1;
    if (param_1[300] == 0x20170) {
      uVar3 = 0x566;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar1,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b36af0;
  case 5:
LAB_00b36af0:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00b2e200(param_1[0x639]);
      (**(code **)(*param_1 + 0x34c))();
      FUN_00e5e0c0("em0010_vo_line_action_awake",param_1,0xffffffff,0);
      return;
    }
    goto LAB_00b36b2d;
  default:
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
LAB_00b36b2d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B36B60  FUN_00b36b60  size=463  [callgraph]
void __fastcall FUN_00b36b60(int *param_1)

{
  float fVar1;
  code *pcVar2;
  short sVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00dde2d0(0,2);
    sVar3 = FUN_00dde2d0(0,1);
    if (sVar3 != 0) {
      FUN_00dde2d0(0,1);
    }
    FUN_00dde2d0(0,1);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
    param_1[0x248] = 0x40000000;
    param_1[0x250] = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
    param_1[0x249] = 0x43340000;
    FUN_00eaa6e0(0x41100000,0);
  case 1:
    if ((param_1[0x250] == 0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - 1.0), fVar1 - 1.0 < 0.0)) {
      FUN_004066f0();
      param_1[0x250] = 1;
      FUN_00406760();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00c4d1a0(param_1[0x13c],0);
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x249] = 0x42f00000;
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x1af] = 1;
    (*pcVar2)();
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 00B36D40  Em0010::vf44  size=395  [class]
void __fastcall Em0010::vf44(int param_1)

{
  int iVar1;
  
  FUN_00983fd0(param_1);
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0x19bc) != 0) {
    FUN_00d8a1d0(0x16,*(int *)(param_1 + 0x19bc));
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a92a00();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  FUN_00a8c820();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  RayCastManager::getWork(param_1 + 0x18ec);
  RayCastManager::getWork(param_1 + 0x13d0);
  RayCastManager::getWork(param_1 + 0x191c);
  RayCastManager::getWork(param_1 + 0x1910);
  RayCastManager::getWork(param_1 + 0x1924);
  RayCastManager::getWork(param_1 + 0x1940);
  RayCastManager::getWork(param_1 + 0x1944);
  RayCastManager::getWork(param_1 + 0x1968);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  (**(code **)(*(int *)(param_1 + 0x10c0) + 4))();
  FUN_00a92a90(0x20010);
  BehaviorEmBase::vf44();
  return;
}

// 00B36ED0  Em0010::getAttackInfo  size=1356  [class]
undefined4 __thiscall Em0010::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016a0dd8);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  FUN_00ac8520(*param_2);
  uVar4 = FUN_00fdbc60();
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[3] = unaff_EBP;
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  *puVar1 = (uint)*param_2;
  *(undefined2 *)(puVar1 + 0x21) = 0x1000;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x95;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  default:
    goto switchD_00b36fce_caseD_5;
  case 6:
    *puVar1 = 0x96;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 8:
    *puVar1 = 0x97;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 10:
    *puVar1 = 0x9a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0xc:
    *puVar1 = 0x9b;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1001;
    return unaff_EBX;
  case 0xe:
    *puVar1 = 0x95;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0x98;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x12:
    *puVar1 = 0x99;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x14:
    *puVar1 = 0x9e;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    return unaff_EBX;
  case 0x16:
    *puVar1 = 0x9f;
    goto LAB_00b3712d;
  case 0x18:
    *puVar1 = 0xa0;
LAB_00b3712d:
    *(undefined1 *)((int)puVar1 + 0x11) = 5;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    if (*(int *)(param_1 + 0x618) != 0x10015) {
      return unaff_EBX;
    }
    puVar1[0x23] = puVar1[0x23] | 0x100;
    return unaff_EBX;
  case 0x1a:
    *puVar1 = 0xa1;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x1c:
    *puVar1 = 0xa2;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    return unaff_EBX;
  case 0x1e:
    *puVar1 = 0xa3;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x60000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    return unaff_EBX;
  case 0x20:
    *puVar1 = 0xa4;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    iVar2 = FUN_00b34d30();
    if (iVar2 != 0) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    *(undefined2 *)(puVar1 + 0x21) = 0x1002;
    return unaff_EBX;
  case 0x21:
    *puVar1 = 0xa4;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    iVar2 = FUN_00b34d30();
    if (iVar2 != 0) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    *(undefined2 *)(puVar1 + 0x21) = 0x1002;
    return unaff_EBX;
  case 0x24:
  case 0x2c:
    *puVar1 = 0xaa;
    goto LAB_00b37347;
  case 0x25:
    *puVar1 = 0xaa;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_00b37379;
  case 0x26:
    *puVar1 = 0xab;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x28:
    *puVar1 = 0xac;
LAB_00b37347:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = 0x1003;
    return unaff_EBX;
  case 0x2a:
    *puVar1 = 0xab;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_00b37379:
    uVar6 = 0x1003;
LAB_00b3737e:
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = uVar6;
    return unaff_EBX;
  case 0x2b:
    *puVar1 = 0xac;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x2e:
    *puVar1 = 0xad;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    uVar6 = 0x1002;
    goto LAB_00b3737e;
  case 0x30:
    *puVar1 = 0xae;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    break;
  case 0x32:
  case 0x37:
    *puVar1 = 0xa6;
    *(undefined1 *)((int)puVar1 + 0x11) = 5;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x33:
  case 0x36:
    *puVar1 = 0xa5;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x34:
  case 0x35:
    *puVar1 = 0xa7;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x38:
    *puVar1 = 0xa6;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  case 0x39:
    *puVar1 = 0xa8;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000100;
    return unaff_EBX;
  case 0x3a:
    *puVar1 = 0xa9;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    return unaff_EBX;
  }
  *(undefined2 *)(puVar1 + 0x21) = 0x1003;
switchD_00b36fce_caseD_5:
  return unaff_EBX;
}

// 00B374D0  FUN_00b374d0  size=381  [between]
void __fastcall FUN_00b374d0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 local_20 [8];
  
  local_20[0] = 0x3f933333;
  param_1[0x375] = param_1[0x375] | 0x1000000;
  local_20[1] = 0x3f8ccccd;
  local_20[2] = 0x3f59999a;
  uVar3 = 0x240;
  local_20[3] = 0x3f666666;
  local_20[4] = 0x3f800000;
  local_20[5] = 0x3f7ae148;
  local_20[6] = 0x3f866666;
  local_20[7] = 0x3f733333;
  if (param_1[0x187] == 0) {
    if (param_1[0x4f7] == 2) {
      uVar3 = 0x31;
    }
    if (param_1[0x4f7] == 3) {
      uVar3 = 0x31;
    }
    if ((param_1[0x377] & 0x8000U) != 0) {
      uVar3 = 0x453;
      if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
        uVar3 = 0x460;
      }
    }
    sVar1 = FUN_00dde2d0(0,7);
    FUN_00aa4080(uVar3,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,local_20[sVar1]);
    param_1[0x187] = param_1[0x187] + 1;
    if ((((param_1[0x377] & 0x8000U) == 0) && (param_1[0x4f7] == 1)) && (param_1[0x3dd] == 0)) {
      *(undefined1 *)(param_1 + 0x3da) = 1;
      param_1[0x3db] = 0x41d00000;
      param_1[0x3dc] = 1;
    }
    param_1[0x5d0] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B37650  FUN_00b37650  size=399  [between]
void __fastcall FUN_00b37650(int *param_1)

{
  float fVar1;
  short sVar2;
  float10 fVar3;
  int local_8;
  undefined2 local_4;
  
  local_8 = *(int *)((int)param_1 + 0x198a);
  local_4 = *(undefined2 *)((int)param_1 + 0x198e);
  param_1[0x6db] = 1;
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
      fVar3 = (float10)1;
    }
    FUN_00aa4080((int)*(short *)((int)&local_8 + ((int)(short)param_1[0x2ad] % 3) * 2),0,0x3e088889,
                 0x3f800000,0,0,(float)fVar3);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    local_8 = (int)sVar2;
    param_1[0x248] = (int)((float)local_8 * 60.0);
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x249] = 0;
    param_1[0x250] = (int)sVar2;
  }
  else if (param_1[0x187] != 1) goto LAB_00b3779f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b3779f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B377E0  FUN_00b377e0  size=386  [between]
void __fastcall FUN_00b377e0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  short local_8 [4];
  
  local_8[0] = *(short *)((int)param_1 + 0x198a);
  local_8[1] = (short)param_1[0x663];
  local_8[2] = *(undefined2 *)((int)param_1 + 0x198e);
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    iVar2 = (int)local_8[(int)(short)param_1[0x2ad] % 3];
    if (param_1[0x4f7] == 2) {
      iVar2 = 0x4d;
    }
    if (param_1[0x4f7] == 3) {
      iVar2 = 0x121;
    }
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
      fVar3 = (float10)1;
    }
    FUN_00aa4080(iVar2,0,0x3e2aaaab,0x3f800000,0,0,(float)fVar3);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b3792b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x5c6] != 0) ||
     (fVar1 = ((float)param_1[0x10] - (float)param_1[0x5b0]) *
              ((float)param_1[0x10] - (float)param_1[0x5b0]) +
              ((float)param_1[0x11] - (float)param_1[0x5b1]) *
              ((float)param_1[0x11] - (float)param_1[0x5b1]) +
              ((float)param_1[0x12] - (float)param_1[0x5b2]) *
              ((float)param_1[0x12] - (float)param_1[0x5b2]), fVar1 < 2.25 != (fVar1 == 2.25))) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b3792b:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00B37970  FUN_00b37970  size=420  [between]
void __fastcall FUN_00b37970(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f2,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01be9d28;
      (**(code **)(*piVar1 + 4))(&DAT_01be9d28);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016464f8,1);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00b37abe;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b37abe:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B37B20  FUN_00b37b20  size=339  [between]
void __fastcall FUN_00b37b20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00b37c4e;
  }
  iVar1 = *(int *)(param_1 + 0x13dc);
  uVar3 = 0;
  uVar2 = 0x508;
  if (iVar1 == 2) {
    uVar2 = 0x509;
  }
  if (iVar1 == 3) {
    uVar2 = 0x50a;
  }
  if (iVar1 == 6) {
    uVar2 = 0x27d;
  }
  if (((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) && (*(int *)(param_1 + 0xf8c) != 0)) {
    uVar2 = 0x465;
  }
  if (*(int *)(param_1 + 0x4b0) == 0x20170) {
    uVar2 = 0x535;
  }
  if (*(int *)(param_1 + 0x1744) == 2) {
    uVar2 = 0x37b;
    if (*(int *)(param_1 + 0x4b0) == 0x20170) {
      uVar2 = 0x576;
    }
    if ((*(byte *)(param_1 + 0x1748) & 2) != 0) {
      uVar3 = 0x40;
    }
  }
  if (*(int *)(param_1 + 0x1744) == 1) {
    uVar2 = 0x366;
    if (*(int *)(param_1 + 0xdc8) == 8) {
      uVar3 = 0x40;
    }
    else if (*(int *)(param_1 + 0xdc8) != 9) goto LAB_00b37be0;
    uVar2 = 0x490;
  }
LAB_00b37be0:
  FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
  FUN_00b34fd0(&DAT_0163b604,1);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
  *(float *)(param_1 + 0x920) = (float)((fVar4 + (float10)1) * (float10)60.0);
LAB_00b37c4e:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 00B37C80  Em0010::vf19C  size=179  [class]
void __thiscall Em0010::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 00B37D40  FUN_00b37d40  size=479  [between]
void __fastcall FUN_00b37d40(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(param_1 + 0x1974) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1974) = fVar1;
  if (fVar1 <= 0.0) {
    switch(*(undefined1 *)(param_1 + 0xfb8)) {
    case 0:
      local_20 = 0x40400000;
      local_1c = 0;
      local_18 = 0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em0010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0xfb8) = *(char *)(param_1 + 0xfb8) + '\x01';
      return;
    case 1:
      iVar2 = FUN_00b34510(param_1 + 0x13d0);
      *(undefined4 *)(param_1 + 0x1974) = 0x42700000;
      local_20 = 0;
      local_1c = 0;
      *(uint *)(param_1 + 0xfa8) = (uint)(iVar2 == 0);
      local_18 = 0xc0400000;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em0010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0xfb8) = *(char *)(param_1 + 0xfb8) + '\x01';
      return;
    case 2:
      iVar2 = FUN_00b34510(param_1 + 0x13d0);
      *(undefined4 *)(param_1 + 0x1974) = 0x42700000;
      local_20 = 0xc0400000;
      local_1c = 0;
      local_18 = 0;
      *(uint *)(param_1 + 0xfac) = (uint)(iVar2 == 0);
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em0010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0xfb8) = *(char *)(param_1 + 0xfb8) + '\x01';
      return;
    case 3:
      iVar2 = FUN_00b34510(param_1 + 0x13d0);
      *(undefined4 *)(param_1 + 0x1974) = 0x42700000;
      local_20 = 0x40400000;
      *(uint *)(param_1 + 0xfb0) = (uint)(iVar2 == 0);
      local_1c = 0;
      local_18 = 0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em0010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0xfb8) = *(char *)(param_1 + 0xfb8) + '\x01';
      return;
    case 4:
      iVar2 = FUN_00b34510(param_1 + 0x13d0);
      *(undefined4 *)(param_1 + 0x1974) = 0x42700000;
      *(uint *)(param_1 + 0xfb4) = (uint)(iVar2 == 0);
      *(undefined1 *)(param_1 + 0xfb8) = 0;
      return;
    }
  }
  return;
}

// 00B37F40  FUN_00b37f40  size=414  [between]
void __thiscall
FUN_00b37f40(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,int param_6
            )

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  float local_33c;
  undefined4 local_338;
  undefined1 local_330 [4];
  undefined4 local_32c;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  
  iVar1 = FUN_00a12210(9);
  local_340 = param_2;
  fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + param_3);
  local_33c = (float)fVar3;
  local_338 = 0;
  local_360 = *(undefined4 *)(iVar1 + 0x40);
  local_35c = *(undefined4 *)(iVar1 + 0x44);
  local_358 = *(undefined4 *)(iVar1 + 0x48);
  local_354 = *(undefined4 *)(iVar1 + 0x4c);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_220 = 0x45;
  if (param_5 == 0) {
    if (param_6 == 0) {
      local_21c = 0x15;
    }
    else {
      local_21c = 0x18;
      local_220 = 0x79;
    }
  }
  else {
    local_21c = 0x16;
  }
  local_32c = 0x31013;
  local_1c0 = FUN_009f8b40();
  local_30c = *(undefined4 *)(param_1 + 0x4f0);
  local_294 = local_294 | 0x10000010;
  local_31c = 0;
  local_314 = 0x1e;
  local_318 = 0x96;
  local_310 = 0xa00;
  local_320 = 0x9d;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  iVar1 = *(int *)(param_1 + 0xa84);
  local_350 = *(undefined4 *)(iVar1 + 0x40);
  local_34c = *(undefined4 *)(iVar1 + 0x44);
  local_348 = *(undefined4 *)(iVar1 + 0x48);
  local_344 = *(undefined4 *)(iVar1 + 0x4c);
  FUN_00416e30(&local_360,&local_350,&local_340,param_4,0x44480000);
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(undefined4 *)(param_1 + 0x1978) = 0x44160000;
  return;
}

// 00B380E0  FUN_00b380e0  size=296  [between]
void FUN_00b380e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_90 [140];
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a81330();
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    if (param_1 == 0) {
      if (iVar3 != 0) {
        FUN_00b2b880();
      }
    }
    else if (iVar3 != 0) {
      FUN_00b2b900();
    }
    FUN_0040b190();
    iVar1 = FUN_00a82090("Em0010Magazine",0x30041,local_90);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        FUN_00a81330();
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c940(uVar2);
        FUN_00a7c960(&stack0xffffff68);
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c940(uVar2);
        FUN_00a7c960(&stack0xffffff68);
        if (param_1 != 0) {
          FUN_00b2b8c0();
          return;
        }
        FUN_00b316d0();
      }
    }
  }
  return;
}

// 00B38210  FUN_00b38210  size=743  [between]
void __thiscall FUN_00b38210(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_36c;
  float local_368;
  float local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  float local_34c;
  float local_348;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined4 uStack_318;
  uint uStack_2a0;
  undefined4 uStack_22c;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1ac;
  float fStack_1a8;
  
  if (*(int *)(param_1 + 0x13dc) == 2) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        FUN_00c27f40(7,0x44e10000);
        FUN_00a8d280();
        iVar3 = FUN_00a12210(0);
        if (iVar3 != 0) {
          local_34c = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                           *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                           *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
          local_348 = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                           *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                           *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
          fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                       *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                       *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
          local_368 = *(float *)(iVar3 + 0x28) / fVar1;
          local_364 = *(float *)(iVar3 + 0x38) / fVar1;
          fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar1));
          fVar6 = (float10)fpatan((float10)local_368,(float10)local_364);
          local_340 = (float)fVar6;
          local_33c = (float)fVar5;
          fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_348,
                                  (float10)*(float *)(iVar3 + 0x10) / (float10)local_34c);
          local_338 = (float)fVar5;
          local_360 = 0;
          local_35c = 0x3c23d70a;
          local_358 = 0x3ec7ae14;
          D3DXVec3TransformNormal(&local_360,&local_360,(float *)(iVar3 + 0x10));
          fStack_36c = *(float *)(iVar3 + 0x40) + fStack_36c;
          local_368 = *(float *)(iVar3 + 0x44) + local_368;
          local_364 = *(float *)(iVar3 + 0x48) + local_364;
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          uStack_1cc = FUN_009f8b40();
          uStack_328 = 3;
          uStack_320 = 10;
          uStack_31c = 0;
          uStack_324 = 0x96;
          uStack_22c = 0x19;
          fVar5 = (float10)FUN_00dde300(0xbcd67750,0x3cd67750);
          fStack_1ac = (float)fVar5;
          fVar5 = (float10)FUN_00dde300(0xbcd67750,0x3cd67750);
          fStack_1a8 = (float)fVar5;
          if (*(int *)(param_1 + 0x18e8) == 0) {
            fVar5 = (float10)FUN_00dde300(0xbd7a35dd,0x3d7a35dd);
            fStack_1ac = (float)fVar5;
            fVar5 = (float10)FUN_00dde300(0xbd7a35dd,0x3d7a35dd);
            fStack_1a8 = (float)fVar5;
          }
          uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
          uStack_1d0 = 0x3f7f7cee;
          uStack_2a0 = uStack_2a0 | 0x10000010;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          FUN_00416e30(&fStack_36c,param_2,&local_34c,0x3f4ccccd,0x42c80000);
          FUN_00ae2bc0(iVar2,&local_33c);
        }
      }
    }
  }
  return;
}

// 00B38500  FUN_00b38500  size=933  [between]
void __fastcall FUN_00b38500(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uStack_37c;
  float local_378;
  float local_374;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  float local_350;
  float local_34c;
  float local_348 [3];
  float local_33c;
  float local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 uStack_328;
  undefined4 uStack_324;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_38;
  
  if (*(int *)(param_1 + 0x13dc) == 3) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        FUN_00c27f40(8,0x44e10000);
        iVar4 = FUN_00a12210(0);
        if (iVar4 != 0) {
          pfVar1 = (float *)(iVar4 + 0x10);
          local_33c = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                           *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                           *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
          local_338 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                           *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                           *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
          fVar2 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                       *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                       *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
          local_374 = *(float *)(iVar4 + 0x28) / fVar2;
          local_378 = *(float *)(iVar4 + 0x38) / fVar2;
          fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar2));
          fVar8 = (float10)fpatan((float10)local_374,(float10)local_378);
          local_350 = (float)fVar8;
          local_34c = (float)fVar7;
          fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_338,
                                  (float10)*pfVar1 / (float10)local_33c);
          local_348[0] = (float)fVar7;
          local_360 = 0;
          local_35c = 0x3c23d70a;
          local_358 = 0x3ec7ae14;
          D3DXVec3TransformNormal(&local_360,&local_360,pfVar1);
          fStack_36c = *(float *)(iVar4 + 0x40) + fStack_36c;
          fStack_368 = *(float *)(iVar4 + 0x44) + fStack_368;
          fStack_364 = *(float *)(iVar4 + 0x48) + fStack_364;
          uStack_37c = 0;
          local_378 = 0.0;
          local_374 = 200.0;
          D3DXVec3TransformNormal(&uStack_37c,&uStack_37c,pfVar1);
          uVar5 = FUN_00ac8660(0,0x7d);
          FUN_004105d0();
          FUN_00410710();
          FUN_0041cf30();
          uStack_234 = 0xf;
          local_348[1] = 2.81249e-40;
          uStack_238 = 0x54;
          uStack_1d8 = FUN_009f8b40();
          uStack_2a8 = uStack_2a8 | 0x2000000;
          uStack_2ac = uStack_2ac | 0x10100110;
          uStack_32c = 0x1e;
          uStack_330 = 0x96;
          uStack_328 = 0xa00;
          local_338 = 1.20512e-43;
          uStack_334 = uVar5;
          fVar7 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
          fStack_1b8 = (float)fVar7;
          fVar7 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
          fStack_1b4 = (float)fVar7;
          if (*(int *)(param_1 + 0x18e8) == 0) {
            fVar7 = (float10)FUN_00dde300(0xbcd67750,0x3cd67750);
            fStack_1b8 = (float)fVar7;
            fVar7 = (float10)FUN_00dde300(0xbd7a35dd,0x3d7a35dd);
            fStack_1b4 = (float)fVar7;
          }
          uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
          uStack_1e8 = 0x3f333333;
          uVar6 = FUN_00a7c7f0();
          FUN_00a7c960(uVar6);
          FUN_00416e30(&local_378,&stack0xfffffc78,&fStack_368,0x3f99999a,0x43960000);
          fStack_368 = 0.0;
          fStack_364 = 0.8;
          local_360 = 0;
          uStack_38 = uVar5;
          FUN_0043fed0(*(undefined4 *)(*(int *)(param_1 + 0x1abc) + 0x4f0),0,&fStack_368);
          FUN_00ad3be0(*(undefined4 *)(iVar3 + 0x4f0),local_348);
        }
      }
    }
  }
  return;
}

// 00B388B0  Em0010::thunk_vf2B4  size=5  [class]
void __fastcall Em0010::thunk_vf2B4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0xdd8) & 0x80000) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0xb0008) {
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0xa0020) {
    return;
  }
  if ((*(uint *)(param_1 + 0xd44) & 0x800000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      return;
    }
    if ((DAT_01d6426c == 0) && (DAT_01d64270 == 0)) {
      FUN_00a81330();
      uVar2 = FUN_00a7c8a0();
      iVar1 = FUN_005f57d0(uVar2);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_005f4730();
      if (iVar1 != 0) {
        DAT_01d6426c = 1;
        FUN_00a884f0(1);
        return;
      }
      iVar1 = FUN_005f4750();
      if (iVar1 == 0) {
        return;
      }
      DAT_01d64270 = 1;
    }
    FUN_00a884f0(1);
    return;
  }
  return;
}

// 00B388C0  Em0010::thunk_vf2B8  size=5  [class]
void __fastcall Em0010::thunk_vf2B8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0xdd8) & 0x80000) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0xb0008) {
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0xa0020) {
    return;
  }
  if ((*(uint *)(param_1 + 0xd44) & 0x800000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      return;
    }
    if ((DAT_01d6426c == 0) && (DAT_01d64270 == 0)) {
      FUN_00a81330();
      uVar2 = FUN_00a7c8a0();
      iVar1 = FUN_005f57d0(uVar2);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_005f4730();
      if (iVar1 != 0) {
        DAT_01d6426c = 1;
        FUN_00a884f0(1);
        return;
      }
      iVar1 = FUN_005f4750();
      if (iVar1 == 0) {
        return;
      }
      DAT_01d64270 = 1;
    }
    FUN_00a884f0(1);
    return;
  }
  return;
}

// 00B388D0  FUN_00b388d0  size=200  [callgraph]
void __fastcall FUN_00b388d0(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x37d;
  if (param_1[300] == 0x20170) {
    uVar1 = 0x577;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,(param_1[0x5d2] & 2U) << 5,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b3895b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b3895b:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00B389A0  FUN_00b389a0  size=223  [callgraph]
void __fastcall FUN_00b389a0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ac85c0(5,0x92);
  *(float *)(param_1 + 0x19dc) = (float)(fVar1 * (float10)60.0);
  fVar1 = (float10)FUN_00ac85c0(5,0x93);
  fVar1 = (float10)FUN_00dde300(0,(float)fVar1);
  *(float *)(param_1 + 0x19dc) =
       (float)(fVar1 * (float10)60.0 + (float10)*(float *)(param_1 + 0x19dc));
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3bb,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b380e0(0);
    *(undefined4 *)(param_1 + 0x19d4) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B38A80  FUN_00b38a80  size=165  [callgraph]
void __fastcall FUN_00b38a80(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2a1,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b2bca0(&DAT_01646514,0);
      }
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B38B30  FUN_00b38b30  size=274  [callgraph]
void __fastcall FUN_00b38b30(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b2bca0(&DAT_0164651c,0);
      }
    }
    param_1[0x376] = param_1[0x376] & 0xdfffffff;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b2bca0(&DAT_0163b604,0);
      }
    }
  }
  return;
}

// 00B38C50  FUN_00b38c50  size=173  [callgraph]
void __fastcall FUN_00b38c50(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x538,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00b34fd0(&DAT_01646524,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00b38ce6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b38ce6:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B38D00  FUN_00b38d00  size=173  [callgraph]
void __fastcall FUN_00b38d00(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x539,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00b34fd0(&DAT_0164652c,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00b38d96;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b38d96:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B38DB0  FUN_00b38db0  size=173  [callgraph]
void __fastcall FUN_00b38db0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00b34fd0(&DAT_01646534,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00b38e46;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b38e46:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B38E60  FUN_00b38e60  size=173  [callgraph]
void __fastcall FUN_00b38e60(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00b34fd0(&DAT_0164653c,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00b38ef6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b38ef6:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B38F10  FUN_00b38f10  size=449  [callgraph]
void __fastcall FUN_00b38f10(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x540,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x40490fdb,0);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00b34fd0(&DAT_0163b604,1);
    FUN_00b30b70();
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x541,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b34fd0(&DAT_0163b604,1);
    break;
  case 4:
    FUN_00aa4080(0x542,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b34fd0(&DAT_01646544,1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00b38f2b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00b38f2b_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00B390F0  FUN_00b390f0  size=351  [callgraph]
void __fastcall FUN_00b390f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d2c;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d2c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        return;
      }
    }
  }
  if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
    param_1[0x128] = 0xb;
    param_1[0x65f] = 0x2930292;
    param_1[0x660] = 0x2930293;
    param_1[0x661] = 0x2980297;
    param_1[0x662] = 0x2940299;
    param_1[0x663] = 0x2940294;
    param_1[0x664] = 0x2960295;
    param_1[0x665] = 0x29b029a;
    param_1[0x666] = 0x29e029c;
    param_1[0x667] = 0x2c1029f;
    param_1[0x668] = 0x2b1029d;
  }
  else {
    param_1[0x128] = 0;
    param_1[0x65f] = 0x2450241;
    param_1[0x660] = 0x2470247;
    param_1[0x661] = (int)&WORD_025d025a;
    param_1[0x662] = (int)&WORD_024e0260;
    param_1[0x663] = 0x250024f;
    param_1[0x664] = 0x2650264;
    param_1[0x665] = 0x2540253;
    param_1[0x666] = (int)&DAT_02290255;
    param_1[0x667] = (int)&DAT_022e022c;
    *(undefined2 *)(param_1 + 0x668) = 0x263;
    *(undefined **)((int)param_1 + 0x19a2) = &DAT_01ea01f6;
  }
  param_1[0x377] = param_1[0x377] & 0xffff7fff;
                    /* WARNING: Could not recover jumptable at 0x00b3924a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B392C0  Em0010::vf33C  size=2983  [class]
void __thiscall Em0010::vf33C(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[0x66e] != 0) {
    *(undefined4 *)(param_3 + 0x18) = 0x42000;
    return;
  }
  if ((param_1[0x375] & 0x4000000U) != 0) {
    *(undefined4 *)(param_3 + 0x18) = 0x42000;
    return;
  }
  iVar4 = 0;
  uVar3 = 0;
  do {
    uVar1 = 0x80000000 >> ((byte)uVar3 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar3 >> 5) * 4) & uVar1) != 0) &&
       ((*(uint *)(param_3 + 8 + (uVar3 >> 5) * 4) & uVar1) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xd);
  if ((iVar4 == 1) || ((3 < (int)param_2[0x33] && (iVar4 < 4)))) {
LAB_00b39af3:
    *(undefined4 *)(param_3 + 0x18) = 0x42000;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (((param_1[0x375] & 0x200000U) != 0) &&
     (((iVar4 = FUN_0043f860(0x2a), iVar4 != 0 && (iVar4 = FUN_0043f860(0x2b), iVar4 != 0)) &&
      (iVar4 = FUN_0043f830(0x29), iVar4 == 0)))) {
    *(undefined4 *)(param_3 + 0x18) = 0x42004;
    *param_2 = 1;
    uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x7c))(0x7a);
    param_2[1] = uVar2;
    param_1[0x375] = param_1[0x375] | 0x100000;
    return;
  }
  iVar4 = FUN_0043f830(0x1e);
  if ((iVar4 == 0) && (iVar4 = FUN_0043f830(0x28), iVar4 != 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0x42004;
    *param_2 = 0;
    uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x24))(0x7a);
    param_2[1] = uVar2;
    return;
  }
  iVar4 = FUN_0043f860(0x27);
  if (iVar4 != 0) {
    iVar4 = FUN_0043f830(0x20);
    if (iVar4 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x42004;
      *param_2 = 2;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x2c))(0x7a);
      param_2[1] = uVar2;
      return;
    }
    iVar4 = FUN_0043f830(0x29);
    if ((iVar4 == 0) || (iVar4 = FUN_0043f830(0x22), iVar4 == 0)) {
      *(undefined4 *)(param_3 + 0x18) = 0x42004;
      *param_2 = 1;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x7c))(0x7a);
      param_2[1] = uVar2;
      if ((param_1[0x375] & 0x200000U) == 0) {
        return;
      }
      param_1[0x375] = param_1[0x375] | 0x100000;
      return;
    }
    iVar4 = FUN_0043f830(0x24);
    if (iVar4 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x42004;
      *param_2 = 4;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x84))(0x7a);
      param_2[1] = uVar2;
      return;
    }
    iVar4 = FUN_0043f830(0x26);
    if (iVar4 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x42004;
      *param_2 = 3;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x8c))(0x7a);
      param_2[1] = uVar2;
      return;
    }
  }
  iVar4 = FUN_0043f830(0xe);
  if (((((((iVar4 != 0) || (iVar4 = FUN_0043f830(0x13), iVar4 != 0)) &&
         (iVar4 = FUN_0043f830(0), iVar4 == 0)) &&
        ((iVar4 = FUN_0043f830(1), iVar4 == 0 && (iVar4 = FUN_0043f830(2), iVar4 == 0)))) &&
       (iVar4 = FUN_0043f830(3), iVar4 == 0)) &&
      ((((iVar4 = FUN_0043f830(4), iVar4 == 0 && (iVar4 = FUN_0043f830(5), iVar4 == 0)) &&
        ((iVar4 = FUN_0043f830(6), iVar4 == 0 &&
         (((iVar4 = FUN_0043f830(7), iVar4 == 0 && (iVar4 = FUN_0043f830(8), iVar4 == 0)) &&
          (iVar4 = FUN_0043f830(9), iVar4 == 0)))))) &&
       ((iVar4 = FUN_0043f830(10), iVar4 == 0 && (iVar4 = FUN_0043f830(0xb), iVar4 == 0)))))) &&
     ((iVar4 = FUN_0043f830(0xc), iVar4 == 0 && (iVar4 = FUN_0043f830(0xd), iVar4 == 0)))) {
    *param_2 = 0x1e;
    param_2[1] = 1;
    *(int *)(param_3 + 0x18) = param_1[0x12d];
    goto LAB_00b39e26;
  }
  iVar4 = FUN_0043f830(10);
  if (((((iVar4 == 0) && (iVar4 = FUN_0043f830(0xd), iVar4 == 0)) ||
       ((iVar4 = FUN_0043f830(0), iVar4 != 0 ||
        (((iVar4 = FUN_0043f830(1), iVar4 != 0 || (iVar4 = FUN_0043f830(2), iVar4 != 0)) ||
         (iVar4 = FUN_0043f830(4), iVar4 != 0)))))) ||
      (((iVar4 = FUN_0043f830(5), iVar4 != 0 || (iVar4 = FUN_0043f830(6), iVar4 != 0)) ||
       (iVar4 = FUN_0043f830(7), iVar4 != 0)))) ||
     (((iVar4 = FUN_0043f830(8), iVar4 != 0 || (iVar4 = FUN_0043f830(9), iVar4 != 0)) ||
      ((iVar4 = FUN_0043f830(0xb), iVar4 != 0 || (iVar4 = FUN_0043f830(0xc), iVar4 != 0)))))) {
    iVar4 = FUN_0043f830(0x10);
    if (((((((iVar4 == 0) || (iVar4 = FUN_0043f830(0), iVar4 != 0)) ||
           (iVar4 = FUN_0043f830(1), iVar4 != 0)) ||
          ((iVar4 = FUN_0043f830(2), iVar4 != 0 || (iVar4 = FUN_0043f830(3), iVar4 != 0)))) ||
         (iVar4 = FUN_0043f830(4), iVar4 != 0)) ||
        ((iVar4 = FUN_0043f830(5), iVar4 != 0 || (iVar4 = FUN_0043f830(6), iVar4 != 0)))) ||
       (((iVar4 = FUN_0043f830(7), iVar4 != 0 ||
         (((iVar4 = FUN_0043f830(8), iVar4 != 0 || (iVar4 = FUN_0043f830(9), iVar4 != 0)) ||
          (iVar4 = FUN_0043f830(10), iVar4 != 0)))) ||
        (((iVar4 = FUN_0043f830(0xb), iVar4 != 0 || (iVar4 = FUN_0043f830(0xc), iVar4 != 0)) ||
         (iVar4 = FUN_0043f830(0xd), iVar4 != 0)))))) {
      iVar4 = FUN_0043f860(0);
      if (iVar4 != 0) goto LAB_00b39af3;
      iVar4 = FUN_0043f830(0x14);
      if (((iVar4 != 0) && (iVar4 = FUN_0043f860(0x14), iVar4 == 0)) &&
         ((iVar4 = FUN_0043f830(0x15), iVar4 != 0 && (iVar4 = FUN_0043f860(0x15), iVar4 == 0)))) {
        iVar4 = FUN_0043f860(2);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(9), iVar4 == 0)) &&
           (iVar4 = FUN_0043f860(10), iVar4 == 0)) {
          *param_2 = 0x14;
          param_2[2] = param_1[0x4f3];
          *(int *)(param_3 + 0x18) = param_1[0x12d];
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x18;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
          }
          goto LAB_00b39d68;
        }
        iVar4 = FUN_0043f860(5);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(0xc), iVar4 == 0)) &&
           (iVar4 = FUN_0043f860(0xd), iVar4 == 0)) {
          *param_2 = 0x13;
          param_2[2] = param_1[0x4f3];
          *(int *)(param_3 + 0x18) = param_1[0x12d];
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x17;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x19;
          }
          goto LAB_00b39d68;
        }
        iVar4 = FUN_0043f830(0x11);
        if (iVar4 == 0) {
          *param_2 = 0x15;
          *(int *)(param_3 + 0x18) = param_1[0x12d];
          goto LAB_00b39d68;
        }
        iVar4 = FUN_0043f830(0x12);
        if (iVar4 == 0) {
          *param_2 = 0x16;
          *(int *)(param_3 + 0x18) = param_1[0x12d];
          goto LAB_00b39d68;
        }
      }
      iVar4 = FUN_0043f830(0);
      if ((iVar4 != 0) && (iVar4 = FUN_00b353c0(), iVar4 == 0x4d)) {
        iVar4 = FUN_0043f860(8);
        if ((iVar4 == 0) && (iVar4 = FUN_0043f860(2), iVar4 == 0)) {
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x18;
            *(int *)(param_3 + 0x18) = param_1[0x12d];
            goto LAB_00b39d68;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
            *(int *)(param_3 + 0x18) = param_1[0x12d];
            goto LAB_00b39d68;
          }
        }
        iVar4 = FUN_0043f860(0xb);
        if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x17;
            *(int *)(param_3 + 0x18) = param_1[0x12d];
            goto LAB_00b39d68;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x19;
            *(int *)(param_3 + 0x18) = param_1[0x12d];
            goto LAB_00b39d68;
          }
        }
        iVar4 = FUN_0043f860(8);
        if ((((iVar4 != 0) || (iVar4 = FUN_0043f860(9), iVar4 != 0)) ||
            (iVar4 = FUN_0043f860(10), iVar4 != 0)) &&
           (((iVar4 = FUN_0043f860(0xb), iVar4 != 0 || (iVar4 = FUN_0043f860(0xc), iVar4 != 0)) ||
            (iVar4 = FUN_0043f860(0xd), iVar4 != 0)))) {
          iVar4 = FUN_0043f860(1);
          if (iVar4 != 0) goto LAB_00b39af3;
          *param_2 = 2;
          param_2[2] = param_1[0x4f3];
          *(int *)(param_3 + 0x18) = param_1[0x12d];
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0xb;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0xd;
          }
          goto LAB_00b39d68;
        }
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = param_1[0x4f3];
        *(int *)(param_3 + 0x18) = param_1[0x12d];
LAB_00b39d40:
        iVar4 = FUN_00a8c760(5);
        if (iVar4 != 0) {
          *param_2 = 10;
        }
        iVar4 = FUN_00a8c760(6);
        if (iVar4 != 0) {
          *param_2 = 0xc;
        }
LAB_00b39d68:
        iVar4 = (**(code **)(*param_1 + 0x1d8))();
        if ((iVar4 != 0) && ((param_1[0x186] & 0xffff0000U) != 0x120000)) {
          param_2[1] = *param_2;
          *param_2 = 0x10;
        }
        if ((param_1[0x376] & 0x200000U) == 0) {
          return;
        }
        *param_2 = 0x1d;
        return;
      }
      iVar4 = FUN_0043f830(8);
      if (iVar4 == 0) {
        iVar4 = FUN_0043f830(9);
        if ((iVar4 != 0) || (iVar4 = FUN_0043f830(10), iVar4 != 0)) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            iVar4 = FUN_0043f830(0xb);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f830(0xc), iVar4 == 0)) {
              *param_2 = 9;
              goto LAB_00b39ce4;
            }
            goto LAB_00b39b22;
          }
          goto LAB_00b39b2d;
        }
        iVar4 = FUN_0043f830(0xb);
        if (iVar4 != 0) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
LAB_00b39ba8:
            *param_2 = 4;
            goto LAB_00b39ce4;
          }
          goto LAB_00b39b2d;
        }
        iVar4 = FUN_0043f830(0xc);
        if ((iVar4 != 0) || (iVar4 = FUN_0043f830(0xd), iVar4 != 0)) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            iVar4 = FUN_0043f830(8);
            if ((iVar4 != 0) || (iVar4 = FUN_0043f830(9), iVar4 != 0)) goto LAB_00b39ba8;
            *param_2 = 8;
            goto LAB_00b39ce4;
          }
          goto LAB_00b39b2d;
        }
        iVar4 = FUN_0043f830(2);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f830(3), iVar4 == 0)) &&
           (iVar4 = FUN_0043f830(4), iVar4 == 0)) {
          iVar4 = FUN_0043f830(5);
          if ((iVar4 == 0) && (iVar4 = FUN_0043f830(6), iVar4 == 0)) {
            iVar4 = FUN_0043f830(7);
            if (iVar4 == 0) {
              iVar4 = FUN_0043f830(1);
              if (iVar4 == 0) {
                iVar4 = FUN_0043f830(0xe);
                if ((iVar4 == 0) && (iVar4 = FUN_0043f830(0x13), iVar4 == 0)) {
                  *param_2 = 0x1e;
                  param_2[1] = 1;
                  goto LAB_00b39dd5;
                }
                *param_2 = 0x1e;
                param_2[1] = 1;
                goto LAB_00b39e1d;
              }
              *param_2 = 1;
              param_2[1] = 1;
              *(int *)(param_3 + 0x18) = param_1[0x12d];
              goto LAB_00b39d40;
            }
            iVar4 = FUN_0043f830(1);
            if (iVar4 == 0) {
              iVar4 = param_1[0x139];
              goto joined_r0x00b39c6d;
            }
          }
          else {
            iVar4 = FUN_0043f830(1);
            if (iVar4 == 0) {
              iVar4 = param_1[0x139];
joined_r0x00b39c6d:
              if (iVar4 == 0) {
                *param_2 = 6;
                goto LAB_00b39ce4;
              }
            }
          }
        }
        else {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            *param_2 = 7;
            goto LAB_00b39ce4;
          }
        }
        *param_2 = 1;
      }
      else {
        iVar4 = FUN_0043f830(1);
        if ((iVar4 == 0) && (param_1[0x139] == 0)) {
LAB_00b39b22:
          *param_2 = 5;
LAB_00b39ce4:
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0xe;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0xf;
          }
          if ((param_1[0x376] & 0x200000U) != 0) {
            *param_2 = 0x1c;
          }
          goto LAB_00b39dd5;
        }
LAB_00b39b2d:
        *param_2 = 3;
      }
      iVar4 = FUN_00a8c760(5);
      if (iVar4 != 0) {
        *param_2 = 10;
      }
      iVar4 = FUN_00a8c760(6);
      if (iVar4 != 0) {
        *param_2 = 0xc;
      }
      if ((param_1[0x376] & 0x200000U) != 0) {
        *param_2 = 0x1d;
      }
LAB_00b39dd5:
      *(int *)(param_3 + 0x18) = param_1[0x12d];
      iVar4 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar4 == 0) {
        return;
      }
      if ((param_1[0x186] & 0xffff0000U) == 0x120000) {
        return;
      }
      param_2[1] = *param_2;
      *param_2 = 0x10;
      return;
    }
    *param_2 = 0x1b;
  }
  else {
    iVar4 = FUN_0043f830(0xd);
    if (iVar4 == 0) {
      *param_2 = 0x11;
    }
    iVar4 = FUN_0043f830(10);
    if (iVar4 == 0) {
      *param_2 = 0x12;
    }
  }
LAB_00b39e1d:
  *(int *)(param_3 + 0x18) = param_1[0x12d];
LAB_00b39e26:
  iVar4 = (**(code **)(*param_1 + 0x1d8))();
  if ((iVar4 != 0) && ((param_1[0x186] & 0xffff0000U) != 0x120000)) {
    param_2[1] = *param_2;
    *param_2 = 0x10;
  }
  if ((param_1[0x376] & 0x200000U) != 0) {
    *param_2 = 0x1c;
  }
  return;
}

// 00B39E70  Em0010::vf338  size=138  [class]
void __thiscall Em0010::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (0 < param_4) {
    piVar3 = (int *)(param_3 + 0x18);
    bVar2 = true;
    do {
      if (*piVar3 == param_1[0x12d]) {
        bVar2 = false;
      }
      piVar3 = piVar3 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (!bVar2) {
      return;
    }
  }
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar4 = 0;
    if ((iVar1 == 0x20150) || (iVar1 == 0x20152)) {
      uVar4 = 1;
    }
    if (iVar1 == 0x20170) {
      uVar4 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar4,1,1);
    (**(code **)(*param_1 + 0x364))(0x20010);
  }
  return;
}

// 00B39F00  FUN_00b39f00  size=655  [callgraph]
void __thiscall FUN_00b39f00(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (((param_1[0x375] & 0x800000U) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e5ac0(2);
    param_1[0x375] = param_1[0x375] & 0xff7fffff;
  }
  (**(code **)(*param_1 + 0x314))();
  param_1[0x375] = param_1[0x375] & 0xffffbfff;
  param_1[0x376] = param_1[0x376] & 0xfeffffff;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  FUN_00eaa6e0(0x41200000,0);
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    iVar1 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
  }
  if (param_2 == 0x20) {
    if (param_1[0x6b7] != 0x20) {
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x2000e) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x3000c)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1f)) || (param_1[0x6b7] != -1)) {
        param_1[0x6b7] = 0x20;
        goto LAB_00b3a000;
      }
      if (param_1[0x139] != 0) {
        return;
      }
    }
  }
  else if ((param_2 == 0x1f) && (param_1[0x6b7] != 0x1f)) {
    if ((param_1[0x6b7] != -1) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x20)) {
      param_1[0x6b7] = 0x1f;
      goto LAB_00b3a000;
    }
    if (param_1[0x139] != 0) {
      return;
    }
  }
  iVar1 = FUN_00a8cab0();
  if (((iVar1 != 0x2000e) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x3000c)) ||
     (((*(byte *)(param_1 + 0x375) & 1) != 0 ||
      (((param_2 & 0xffff0000) == 0xa0000 || ((param_2 & 0xffff0000) == 0xb0000)))))) {
    param_1[0x375] = param_1[0x375] & 0xfffffffe;
    if (param_1[0x6b7] == -1) {
      FUN_00a8caf0(param_2,param_3,param_4,param_5);
    }
    else {
      FUN_00a8caf0(param_1[0x6b7],param_1[0x6b8],param_1[0x6b9],param_1[0x6ba]);
      param_1[0x6b7] = -1;
      param_1[0x6b8] = 0;
      param_1[0x6b9] = 0;
      param_1[0x6ba] = 0;
    }
    if (param_1[300] == 0x20170) {
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffe;
      }
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 4;
        return;
      }
    }
    else {
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 1;
      }
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffb;
      }
    }
    return;
  }
  param_1[0x6b7] = param_2;
LAB_00b3a000:
  param_1[0x6b8] = param_3;
  param_1[0x6b9] = param_4;
  param_1[0x6ba] = param_5;
  return;
}

// 00B3A190  FUN_00b3a190  size=246  [callgraph]
void __fastcall FUN_00b3a190(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9d28;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],9,0xffffffff,4);
      FUN_00ac8be0(0,0);
      FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
      piVar2[0x186] = 0;
      piVar2[0x231] = 1;
      *(undefined4 *)(param_1 + 0xf74) = 1;
      FUN_00ac9420("hand_mac");
      FUN_00ac94e0("hand_mac2");
      FUN_00ac94e0("hand_gun");
      *(undefined4 *)(param_1 + 0xfa4) = 0;
    }
  }
  return;
}

// 00B3A290  FUN_00b3a290  size=259  [callgraph]
void __fastcall FUN_00b3a290(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9d28;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = 0xa00;
      if ((*(int *)(param_1 + 0x4b0) == 0x20150) || (*(int *)(param_1 + 0x4b0) == 0x20152)) {
        uVar3 = 0x520;
      }
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],uVar3,0xffffffff,0x32);
      FUN_00ac8be0(0,1);
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0,0x3f800000);
      piVar2[0x186] = 0;
      piVar2[0x231] = 1;
      *(undefined4 *)(param_1 + 0xf74) = 0;
      FUN_00ac94e0("hand_mac");
      FUN_00ac9420("hand_gun");
    }
  }
  return;
}

// 00B3A3A0  FUN_00b3a3a0  size=214  [callgraph]
void __fastcall FUN_00b3a3a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9d28;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(2,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],9,0xffffffff,4);
      FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
      piVar2[0x186] = 0;
      piVar2[0x231] = 1;
      FUN_00ac94e0("hand_mac");
      FUN_00ac9420("hand_gun");
      *(undefined4 *)(param_1 + 0xf84) = 1;
    }
  }
  return;
}

// 00B3A480  FUN_00b3a480  size=328  [callgraph]
void __fastcall FUN_00b3a480(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9d28;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = 0x520;
      if (*(int *)(param_1 + 0x4b0) == 0x20170) {
        uVar3 = 0;
      }
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(2,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],uVar3,0xffffffff,0x35);
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0,0x3f800000);
      piVar2[0x186] = 0;
      piVar2[0x231] = 1;
      if ((*(int *)(param_1 + 0x4b0) == 0x20150) || (*(int *)(param_1 + 0x4b0) == 0x20152)) {
        FUN_00a9e290(&DAT_01643658,0,0,0x3f800000,0x8000000,0,0x3f800000);
        piVar2[0x186] = 0;
        piVar2[0x231] = 1;
      }
      FUN_00ac9420("hand_mac");
      FUN_00ac94e0("hand_mac2");
      FUN_00ac94e0("hand_gun");
      *(undefined4 *)(param_1 + 0xf84) = 0;
    }
  }
  return;
}

// 00B3A5D0  FUN_00b3a5d0  size=133  [callgraph]
void FUN_00b3a5d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9d28;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00a9e290(param_1,0,0,0x3f800000,0x8000000,0,0x3f800000);
      piVar2[0x186] = 0;
      piVar2[0x230] = param_2;
      piVar2[0x231] = 1;
    }
  }
  return;
}

// 00B3A660  FUN_00b3a660  size=470  [callgraph]
void __fastcall FUN_00b3a660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [140];
  
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em0010_RPG",0x31003,0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01646570);
  }
  else {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d28;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        if (1 < (short)piVar3[0xc9]) {
          *(uint *)(piVar3[200] + 0xa8) = *(uint *)(piVar3[200] + 0xa8) & 0xfffffffe;
        }
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c940(uVar2);
        FUN_00a7c960(auStack_94);
        iVar1 = FUN_00ac89d0();
        piVar3[0x146] = iVar1;
      }
    }
    FUN_00b3a480();
    *(undefined4 *)(param_1 + 0x12d4) = 1;
    *(undefined4 *)(param_1 + 0x12d0) = 1;
    FUN_0040b190();
    iVar1 = FUN_00a82090("Em0010RPGBullet",0x31004,auStack_90);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01646590);
      return;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d30;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d30);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_00a81330();
        FUN_00b33370(uVar2);
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        piVar3[0x146] = iVar1;
        return;
      }
    }
  }
  return;
}

// 00B3A840  FUN_00b3a840  size=131  [callgraph]
void __fastcall FUN_00b3a840(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d2c;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d2c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00ac8b80(piVar2[0x13c]);
        FUN_00ac8ad0(3,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],0xd,0xffffffff,7);
        FUN_00b2de70();
        *(undefined4 *)(param_1 + 0xf8c) = 1;
      }
    }
  }
  return;
}

// 00B3A8D0  FUN_00b3a8d0  size=102  [callgraph]
void __fastcall FUN_00b3a8d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d2c;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d2c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00ac8b80(piVar2[0x13c]);
        FUN_00b2ded0();
        *(undefined4 *)(param_1 + 0xf8c) = 0;
      }
    }
  }
  return;
}

// 00B3A940  FUN_00b3a940  size=231  [callgraph]
void FUN_00b3a940(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em0010_Hammer",0x30080,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d28;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c940(uVar2);
        FUN_00a7c960(&stack0x00000004);
        iVar1 = FUN_00ac89d0();
        piVar3[0x146] = iVar1;
      }
    }
    FUN_00b3a480();
    return;
  }
  FUN_00dd5650(&DAT_016465d0);
  return;
}

// 00B3AA30  FUN_00b3aa30  size=363  [callgraph]
void __thiscall FUN_00b3aa30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_4;
  
  iVar1 = FUN_00a81330();
  uVar5 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  uVar3 = 0;
  uVar4 = 9;
  local_4 = 4;
  if (param_2 != 0) {
    iVar1 = FUN_00a81330();
    uVar5 = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar6 = &DAT_01be9d28;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
        iVar1 = FUN_00dd6d80(puVar6);
        uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
    uVar4 = 0xd;
    local_4 = 7;
    uVar3 = 4;
  }
  if (uVar5 != 0) {
    FUN_00ac8b80(*(undefined4 *)(uVar5 + 0x4f0));
    FUN_00ac8ad0(uVar3,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(uVar5 + 0x4f0),uVar4,
                 0xffffffff,local_4);
    FUN_00ac8be0(uVar3,0);
    FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
    *(undefined4 *)(uVar5 + 0x618) = 0;
    *(undefined4 *)(uVar5 + 0x8c4) = 1;
    *(undefined4 *)(param_1 + 4000) = 1;
    FUN_00ac94e0("hand_gun");
    if (param_2 != 0) {
      FUN_00ac9420("hand_mac2");
      *(undefined4 *)(param_1 + 0xfa4) = 0;
      return;
    }
    FUN_00ac9210("RM_hand_mac");
    *(undefined4 *)(param_1 + 0xfa4) = 0;
  }
  return;
}

// 00B3ABA0  FUN_00b3aba0  size=353  [callgraph]
void __thiscall FUN_00b3aba0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_4;
  
  iVar1 = FUN_00a81330();
  uVar5 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  uVar3 = 0;
  uVar4 = 0xa00;
  local_4 = 0x32;
  if (param_2 != 0) {
    iVar1 = FUN_00a81330();
    uVar5 = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar6 = &DAT_01be9d28;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
        iVar1 = FUN_00dd6d80(puVar6);
        uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
    uVar4 = 0xa01;
    local_4 = 0x33;
    uVar3 = 4;
  }
  if (uVar5 != 0) {
    FUN_00ac8b80(*(undefined4 *)(uVar5 + 0x4f0));
    FUN_00ac8ad0(uVar3,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(uVar5 + 0x4f0),uVar4,
                 0xffffffff,local_4);
    FUN_00ac8be0(uVar3,1);
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    *(undefined4 *)(uVar5 + 0x618) = 0;
    *(undefined4 *)(uVar5 + 0x8c4) = 1;
    *(undefined4 *)(param_1 + 4000) = 0;
    FUN_00ac9420("hand_gun");
    if (param_2 != 0) {
      FUN_00ac94e0("hand_mac2");
      return;
    }
    FUN_00ac94e0("hand_mac");
  }
  return;
}

// 00B3AD10  FUN_00b3ad10  size=609  [callgraph]
undefined4 __thiscall FUN_00b3ad10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 1)) &&
     (*(int *)(param_1 + 0x13e0) == 2)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x2000b;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 2)) &&
     (*(int *)(param_1 + 0x13e0) == 1)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x20009;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 6)) &&
     (*(int *)(param_1 + 0x13e0) == 2)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x40000;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 2)) &&
     (*(int *)(param_1 + 0x13e0) == 6)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x40001;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 1)) &&
     (*(int *)(param_1 + 0x13e0) == 3)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x3000a;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 3)) &&
     (*(int *)(param_1 + 0x13e0) == 1)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x30009;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 7)) &&
     (*(int *)(param_1 + 0x13e0) == 3)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0xd0002;
      }
    }
  }
  if (((*(float *)(param_1 + 0x19d0) <= 0.0) && (*(int *)(param_1 + 0x13dc) == 3)) &&
     (*(int *)(param_1 + 0x13e0) == 7)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0xd0003;
        goto LAB_00b3af3f;
      }
    }
  }
  if (iVar2 == -1) {
    return 0;
  }
LAB_00b3af3f:
  FUN_00b39f00(iVar2,0,0,0);
  FUN_00b2e2d0();
  *(undefined4 *)(param_1 + 0x19cc) = param_2;
  return 1;
}

// 00B3AF80  FUN_00b3af80  size=397  [callgraph]
undefined4 __fastcall FUN_00b3af80(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((param_1[0x3e9] == 0) &&
     ((((iVar2 = param_1[0x4f7], iVar2 == 1 || (iVar2 == 7)) || (iVar2 == 6)) || (iVar2 == 5)))) {
    if (((param_1[0x372] != 0x1e) && (iVar2 = FUN_00ac8a50(), iVar2 != 0)) &&
       (iVar2 = (**(code **)(*param_1 + 0x274))(), iVar2 != 0)) {
      return 0;
    }
    if ((((param_1[0x12a] & 0x800U) == 0) && (param_1[0x4f2] != 0)) &&
       ((((DAT_01bea094 & 0x20000) == 0 &&
         (((param_1[0x6d8] != 0 || ((param_1[0x375] & 0x8000000U) == 0)) &&
          ((param_1[0x376] & 0x400U) == 0)))) && ((param_1[0x376] & 0x2000000U) == 0)))) {
      iVar2 = FUN_00ac82f0();
      if (iVar2 == 0) {
        param_1[0x6b3] = param_1[0x6b3] + 1;
        if (param_1[0x6b3] == param_1[0x6b2]) {
          param_1[0x6b3] = 0;
          iVar2 = FUN_00ac8660(0,0x69);
          param_1[0x6b2] = iVar2;
          uVar5 = FUN_00ac8660(0,0x6a);
          sVar1 = FUN_00dde2d0(0,uVar5);
          param_1[0x6b2] = param_1[0x6b2] + (int)sVar1;
          iVar2 = FUN_00b34d30();
          if (iVar2 == 0) {
            return 1;
          }
          iVar2 = FUN_00ac8660(0,0x6d);
          param_1[0x6b2] = iVar2;
          uVar5 = FUN_00ac8660(0,0x6e);
          sVar1 = FUN_00dde2d0(0,uVar5);
          param_1[0x6b2] = param_1[0x6b2] + (int)sVar1;
          return 1;
        }
      }
      else {
        iVar2 = FUN_00ac8660(0,0x62);
        iVar3 = FUN_00b34d30();
        if (iVar3 != 0) {
          iVar2 = FUN_00ac8660(0,0x66);
        }
        uVar4 = FUN_00dde2a0(0,1000);
        if ((int)((longlong)(ulonglong)(uVar4 & 0xffff) % (longlong)iVar2) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00B3B110  FUN_00b3b110  size=360  [callgraph]
bool __fastcall FUN_00b3b110(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1[0x372] != 0x10) {
    return false;
  }
  bVar4 = false;
  switch(param_1[0x373]) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    param_1[0x139] = 1;
    FUN_00b39f00(0xb0002,0,0,0);
    FUN_00b354b0(1,1);
    return true;
  case 4:
  case 5:
  case 8:
  case 9:
    iVar3 = FUN_00a8c760(5);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x5d1] = 1;
      (*pcVar1)();
    }
    iVar2 = FUN_00a8c760(6);
    if (iVar2 != 0) {
      FUN_00b39f00(0xa001d,0,0,0);
      param_1[0x36a] = -1;
      param_1[0x36c] = -1;
      return true;
    }
    bVar4 = false;
    if (iVar3 != 0) {
      param_1[0x36a] = -1;
      param_1[0x36c] = -1;
      return true;
    }
    break;
  case 6:
  case 7:
  case 0x11:
  case 0x12:
  case 0x1b:
  case 0x1e:
    iVar3 = FUN_00a8c760(5);
    bVar4 = iVar3 != 0;
    if (bVar4) {
      FUN_00b39f00(0xa0010,0,0,0);
    }
    iVar3 = FUN_00a8c760(6);
    if (iVar3 != 0) {
      FUN_00b39f00(0xa0011,0,0,0);
      bVar4 = true;
    }
    break;
  case 0xe:
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x5d1] = 1;
    (*pcVar1)();
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    return true;
  case 0xf:
    FUN_00b39f00(0xa001d,0,0,0);
    return true;
  }
  return bVar4;
}

// 00B3B2B0  FUN_00b3b2b0  size=327  [callgraph]
undefined4 __fastcall FUN_00b3b2b0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_1 + 0x4e4) != 0) || (*(int *)(param_1 + 0xfa4) != 0)) ||
      ((*(uint *)(param_1 + 0xddc) & 0x2000) != 0)) || ((*(uint *)(param_1 + 0xdd8) & 0x800) != 0))
  {
    return 0;
  }
  iVar2 = FUN_00b2eb60();
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xfdffffff;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x618);
  uVar3 = uVar1 & 0xffff0000;
  if ((*(uint *)(param_1 + 0xdd8) & 0x2000000) == 0) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x2000000;
    if (*(int *)(param_1 + 0x618) == 0x1f) {
      return 0;
    }
    if (*(int *)(param_1 + 0x618) == 0x23) {
      return 0;
    }
    if (uVar3 == 0xa0000) {
      return 0;
    }
    if (uVar3 == 0xb0000) {
      return 0;
    }
    if (uVar3 == 0x100000) {
      return 0;
    }
    if ((((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) && (*(int *)(param_1 + 0xf8c) != 0)) &&
       (uVar3 == 0x110000)) {
      return 0;
    }
    uVar4 = 0x24;
  }
  else {
    if (uVar1 == 0x1f) {
      return 0;
    }
    if (uVar1 == 0x23) {
      return 0;
    }
    if (uVar1 == 0x24) {
      return 0;
    }
    if (uVar1 == 0x25) {
      return 0;
    }
    if (uVar3 == 0xa0000) {
      return 0;
    }
    if (uVar3 == 0xb0000) {
      return 0;
    }
    if (uVar3 == 0x100000) {
      return 0;
    }
    if ((((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) && (*(int *)(param_1 + 0xf8c) != 0)) &&
       (uVar3 == 0x110000)) {
      return 0;
    }
    uVar4 = 0x25;
  }
  FUN_00b39f00(uVar4,0,0,0);
  FUN_00c27f40(6,0x44e10000);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x4000000;
  return 1;
}

// 00B3B400  FUN_00b3b400  size=59  [callgraph]
void __fastcall FUN_00b3b400(int param_1)

{
  if ((*(uint *)(param_1 + 0xdd4) & 0x20000) == 0) {
    if (*(int *)(param_1 + 0x1744) != 1) {
      FUN_00b39f00(0xa0011,0,0,0);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfffdffff;
  }
  FUN_00b39f00(0xa001d,0,0,0);
  return;
}

// 00B3B440  FUN_00b3b440  size=68  [callgraph]
void __fastcall FUN_00b3b440(int *param_1)

{
  if ((param_1[0x375] & 0x20000U) != 0) {
    param_1[0x375] = param_1[0x375] & 0xfffdffff;
                    /* WARNING: Could not recover jumptable at 0x00b3b45e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x5d1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00b3b471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00b39f00(0xa0010,0,0,0);
  return;
}

// 00B3B490  FUN_00b3b490  size=79  [callgraph]
void __fastcall FUN_00b3b490(int param_1)

{
  if (*(int *)(param_1 + 0x13dc) == 5) {
    FUN_00b3a3a0();
    *(undefined4 *)(param_1 + 0xfa4) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x13dc) != 6) {
    FUN_00b3a190();
    *(undefined4 *)(param_1 + 0xfa4) = 0;
    return;
  }
  FUN_00b3aa30(1);
  FUN_00b3aa30(0);
  *(undefined4 *)(param_1 + 0xfa4) = 0;
  return;
}

// 00B3B4E0  FUN_00b3b4e0  size=220  [callgraph]
void __thiscall FUN_00b3b4e0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x40001) {
    if (param_2 == 0x40000) {
      FUN_00b3aba0(1);
      FUN_00b3aba0(0);
      FUN_00b3a3a0();
      return;
    }
    if (param_2 < 0x3000a) {
      if ((param_2 == 0x30009) || (param_2 == 0x20009)) goto LAB_00b3b5ac;
      if (param_2 != 0x2000b) {
        return;
      }
    }
    else if (param_2 != 0x3000a) {
      return;
    }
  }
  else {
    if (0xd0002 < param_2) {
      if (param_2 != 0xd0003) {
        return;
      }
LAB_00b3b5ac:
      FUN_00b3a190();
      FUN_00b3a480();
      return;
    }
    if (param_2 != 0xd0002) {
      if (param_2 == 0x40001) {
        FUN_00b3aa30(1);
        FUN_00b3aa30(0);
        FUN_00b3a480();
        return;
      }
      if (param_2 < 0xd0000) {
        return;
      }
      if (0xd0001 < param_2) {
        return;
      }
      *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xdfffffff;
      iVar1 = FUN_00b333b0();
      if (iVar1 == 0) {
        return;
      }
      FUN_00b2bca0(&DAT_0163b604,0);
      return;
    }
  }
  FUN_00b3a290();
  FUN_00b3a3a0();
  return;
}

// 00B3B5C0  FUN_00b3b5c0  size=292  [callgraph]
void __fastcall FUN_00b3b5c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x294] != 0) {
    iVar3 = param_1[300];
    uVar2 = 0;
    if ((iVar3 == 0x20150) || (iVar3 == 0x20152)) {
      uVar2 = 1;
    }
    if (iVar3 == 0x20170) {
      uVar2 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar2,1,1);
  }
  FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
  param_1[0x375] = param_1[0x375] | 0x10000000;
  param_1[0x6b7] = -1;
  param_1[0x6bb] = -1;
  pcVar1 = *(code **)(*param_1 + 0x1d8);
  param_1[0x139] = 1;
  param_1[0x21c] = 0;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  param_1[0x6ba] = 0;
  param_1[0x6bc] = 0;
  param_1[0x6bd] = 0;
  param_1[0x6be] = 0;
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    if (param_1[0x5d1] == 1) {
      FUN_00b39f00(0x60008,0,0,0);
      return;
    }
    iVar3 = FUN_00ac8a50();
    if (iVar3 != 0) {
      if (param_1[0x5d1] != 2) {
        return;
      }
      FUN_00b345b0(0,0xbf800000);
    }
    FUN_00b39f00(0xb0000,0,0,0);
    return;
  }
  FUN_00b345b0(0,0xbf800000);
  return;
}

// 00B3B8F0  FUN_00b3b8f0  size=253  [callgraph]
void __fastcall FUN_00b3b8f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00b39f00(0xc0001,0,0,0);
  *(undefined4 *)(param_1 + 0x19ac) = 0;
  *(undefined4 *)(param_1 + 0x19b4) = 1;
  FUN_00ac9420(&DAT_016a0e40);
  FUN_00b34c00(0x3fd33333,0x3eb33333);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6d00();
  }
  iVar1 = FUN_0094ea60(0xdeadbeef,(int)*(char *)(param_1 + 0xba8));
  if (iVar1 == 0) {
    FUN_00951d60(0xdeadbeef,(int)*(char *)(param_1 + 0xba8));
    uVar2 = FUN_0094ea80(0xdeadbeef,0);
    FUN_00cc1250(2,uVar2);
    FUN_0094ea90(0xdeadbeef);
  }
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ac89d0();
    iVar4 = 0;
    iVar3 = 0;
    if (0 < *(short *)(iVar1 + 0x32c)) {
      do {
        *(undefined4 *)(*(int *)(iVar1 + 0x328) + 0x460 + iVar4) = 2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x560;
      } while (iVar3 < *(short *)(iVar1 + 0x32c));
    }
  }
  FUN_00b34e20();
  return;
}

// 00B3B9F0  FUN_00b3b9f0  size=255  [callgraph]
void __thiscall FUN_00b3b9f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00a9e160(param_3);
  FUN_00b39f00(0xc0001,0,0,0);
  FUN_00ac9420(&DAT_016a0e40);
  FUN_00b34c00(0x3fd33333,0x3eb33333);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6d00();
  }
  iVar1 = FUN_0094ea60(0xdeadbeef,(int)*(char *)(param_1 + 0xba8));
  if (iVar1 == 0) {
    FUN_00951d60(0xdeadbeef,(int)*(char *)(param_1 + 0xba8));
    uVar2 = FUN_0094ea80(0xdeadbeef,0);
    FUN_00cc1250(2,uVar2);
    FUN_0094ea90(0xdeadbeef);
  }
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ac89d0();
    iVar4 = 0;
    iVar3 = 0;
    if (0 < *(short *)(iVar1 + 0x32c)) {
      do {
        *(undefined4 *)(*(int *)(iVar1 + 0x328) + 0x460 + iVar4) = 2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x560;
      } while (iVar3 < *(short *)(iVar1 + 0x32c));
    }
  }
  FUN_00b34e20();
  return;
}

// 00B3BAF0  FUN_00b3baf0  size=109  [callgraph]
void __fastcall FUN_00b3baf0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  BehaviorEmBase::vf48();
  if (param_1[0x570] != 0) {
    iVar2 = FUN_00ac8410();
    if ((iVar2 == 0) &&
       (fVar1 = (float)param_1[0x56f], param_1[0x56f] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      param_1[0x570] = 0;
      FUN_00b39f00(0xb0002,0,0,0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
    }
  }
  return;
}

// 00B3BB60  FUN_00b3bb60  size=208  [callgraph]
void __fastcall FUN_00b3bb60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x38f,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  piVar1 = (int *)FUN_00c209f0();
  (**(code **)(*piVar1 + 0x14))(10);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    FUN_00ac8e10(0);
    FUN_00ac8eb0(1,1);
    FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),1);
    *(undefined4 *)(param_1 + 0x19c0) = 1;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b39f00(0xc0002,0,0,0);
  }
  return;
}

// 00B3BC30  FUN_00b3bc30  size=229  [callgraph]
void __thiscall FUN_00b3bc30(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_3c = *(undefined4 *)(param_1 + 0x54);
  local_38 = *(undefined4 *)(param_1 + 0x58);
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_90[0] = 100;
  local_30 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  iVar1 = FUN_00a82090("Em0010UIKnife",0x30030,local_90);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar6 = 0;
    param_3 = param_3 * 0.016666668;
    uVar5 = 0x8000000;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 0;
    FUN_00a7c8a0(param_2,0,0,0x3f800000,0x8000000,param_3,0);
    FUN_00a9e290(param_2,uVar2,uVar3,uVar4,uVar5,param_3,uVar6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
  }
  return;
}

// 00B3BD20  FUN_00b3bd20  size=229  [callgraph]
void __thiscall FUN_00b3bd20(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_3c = *(undefined4 *)(param_1 + 0x54);
  local_38 = *(undefined4 *)(param_1 + 0x58);
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_90[0] = 100;
  local_30 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  iVar1 = FUN_00a82090("Em0010UIGun",0x30020,local_90);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar6 = 0;
    param_3 = param_3 * 0.016666668;
    uVar5 = 0x8000000;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 0;
    FUN_00a7c8a0(param_2,0,0,0x3f800000,0x8000000,param_3,0);
    FUN_00a9e290(param_2,uVar2,uVar3,uVar4,uVar5,param_3,uVar6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
  }
  return;
}

// 00B3BE10  FUN_00b3be10  size=229  [callgraph]
void __thiscall FUN_00b3be10(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_3c = *(undefined4 *)(param_1 + 0x54);
  local_38 = *(undefined4 *)(param_1 + 0x58);
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_90[0] = 100;
  local_30 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  iVar1 = FUN_00a82090("Em0010UIHako",0x21000,local_90);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar6 = 0;
    param_3 = param_3 * 0.016666668;
    uVar5 = 0x8000000;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 0;
    FUN_00a7c8a0(param_2,0,0,0x3f800000,0x8000000,param_3,0);
    FUN_00a9e290(param_2,uVar2,uVar3,uVar4,uVar5,param_3,uVar6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
  }
  return;
}

// 00B3BF00  FUN_00b3bf00  size=873  [callgraph]
void __fastcall FUN_00b3bf00(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0xbe8) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  if ((((0.0 <= *(float *)(param_1 + 0x1088)) || (iVar2 = FUN_00c15850(), iVar2 == 0)) ||
      (*(int *)(param_1 + 0x18e8) == 0)) ||
     (((*(int *)(param_1 + 0x18f0) == 0 || (*(int *)(param_1 + 0x13dc) != 1)) ||
      ((*(int *)(param_1 + 0x13b8) == 0 || (25.0 <= *(float *)(param_1 + 0xa8c))))))) {
LAB_00b3bffe:
    if ((((64.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
        (*(int *)(param_1 + 0x18f0) != 0)) ||
       ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    if ((((25.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
        (*(int *)(param_1 + 0x13dc) == 1)) && (*(int *)(param_1 + 0x13b8) != 0)) {
      FUN_00b39f00(0xf,0,0,0);
      if ((((*(byte *)(param_1 + 0xddc) & 0x20) == 0) || (sVar1 = FUN_00dde2d0(0,3), sVar1 != 0)) ||
         ((iVar2 = FUN_00c15850(), iVar2 == 0 ||
          ((*(int *)(param_1 + 0x18e8) == 0 || (*(int *)(param_1 + 0x18f0) == 0)))))) {
        return;
      }
      goto LAB_00b3c101;
    }
    if ((((9.0 <= *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
        (*(int *)(param_1 + 0x13dc) != 1)) || (*(int *)(param_1 + 0x13b8) == 0)) {
      if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
        FUN_00b39f00(0x18,0,0,0);
      }
      if (*(float *)(param_1 + 0xa9c) <= 2.1816616) {
        if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
          FUN_00b39f00(0x17,0,0,0);
        }
        if (-2.1816616 <= *(float *)(param_1 + 0xa9c)) {
          if ((0.0 <= *(float *)(param_1 + 0x920)) && (*(int *)(param_1 + 0x18f0) != 0)) {
            return;
          }
          sVar1 = FUN_00dde2d0(0,1);
          if (sVar1 == 0) {
            FUN_00b39f00(0x11,0,0,0);
            return;
          }
          FUN_00b39f00(0x10,0,0,0);
          return;
        }
      }
      FUN_00b39f00(0x16,0,0,0);
      return;
    }
    FUN_00b39f00(0x12,0,0,0);
    if ((*(byte *)(param_1 + 0xddc) & 0x40) == 0) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      return;
    }
    iVar2 = FUN_00c15850();
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x18e8) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x18f0) == 0) {
      return;
    }
LAB_00b3bfb2:
    FUN_00b39f00(0x10000,0,0,0);
    uVar3 = FUN_00dde2a0(0,100);
    if ((uVar3 & 1) == 0) goto LAB_00b3bfe8;
    uVar4 = 0x10001;
  }
  else {
    if ((*(byte *)(param_1 + 0xddc) & 0x40) != 0) {
      if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_00b3bffe;
      goto LAB_00b3bfb2;
    }
LAB_00b3c101:
    uVar4 = 0x10002;
  }
  FUN_00b39f00(uVar4,0,0,0);
LAB_00b3bfe8:
  FUN_00c27260(0x40200000);
  return;
}

// 00B3C270  FUN_00b3c270  size=437  [callgraph]
void __fastcall FUN_00b3c270(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    if (((((float)param_1[0x422] < 0.0) &&
         ((((iVar3 = FUN_00c15850(), iVar3 != 0 && (param_1[0x63a] != 0)) && (param_1[0x63c] != 0))
          && ((param_1[0x4f7] == 1 && (param_1[0x4ee] != 0)))))) &&
        ((*(byte *)(param_1 + 0x377) & 0x20) != 0)) && ((float)param_1[0x2a3] < 25.0)) {
      FUN_00b39f00(0x10002,0,0,0);
      FUN_00c27260(0x40200000);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b3c3d4;
      }
    }
    else if (param_1[0x63c] != 0) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00b39f00(0x11,0,0,0);
      }
      else {
        FUN_00b39f00(0x10,0,0,0);
      }
    }
  }
LAB_00b3c3d4:
  if ((*(byte *)(param_1 + 0x377) & 0x40) == 0) {
    if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x00b3c423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((float)param_1[0x2a3] < 4.0) {
                    /* WARNING: Could not recover jumptable at 0x00b3c3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B3C430  FUN_00b3c430  size=410  [callgraph]
void __fastcall FUN_00b3c430(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x61c) == 0) || (*(int *)(param_1 + 0xa84) == 0)) {
    return;
  }
  if (((((0.0 <= *(float *)(param_1 + 0x1088)) || (iVar3 = FUN_00c15850(), iVar3 == 0)) ||
       (*(int *)(param_1 + 0x18e8) == 0)) ||
      ((*(int *)(param_1 + 0x18f0) == 0 || (*(int *)(param_1 + 0x13dc) != 1)))) ||
     ((*(int *)(param_1 + 0x13b8) == 0 || (36.0 <= *(float *)(param_1 + 0xa8c))))) {
    if (*(int *)(param_1 + 0x18f0) != 0) {
      fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x924) = fVar1;
      if (0.0 <= fVar1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x924) = 0;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
    *(float *)(param_1 + 0x924) = fVar1;
    if (fVar1 <= 60.0) {
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if ((sVar2 != 0) && (*(int *)(param_1 + 0xfb0) != 0)) {
      FUN_00b39f00(0x1a,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xfb4) == 0) {
      return;
    }
    FUN_00b39f00(0x1b,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xddc) & 0x20) == 0) {
    if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_00b3c51a;
    FUN_00b39f00(0x10000,0,0,0);
    uVar4 = FUN_00dde2a0(0,100);
    if ((uVar4 & 1) == 0) goto LAB_00b3c51a;
    uVar5 = 0x10001;
  }
  else {
    uVar5 = 0x10002;
  }
  FUN_00b39f00(uVar5,0,0,0);
LAB_00b3c51a:
  FUN_00c27260(0x40200000);
  return;
}

// 00B3C5D0  FUN_00b3c5d0  size=384  [callgraph]
void __fastcall FUN_00b3c5d0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x61c) == 0) || (*(int *)(param_1 + 0xa84) == 0)) {
    return;
  }
  if ((((0.0 <= *(float *)(param_1 + 0x1088)) || (iVar3 = FUN_00c15850(), iVar3 == 0)) ||
      (*(int *)(param_1 + 0x18e8) == 0)) ||
     (((*(int *)(param_1 + 0x18f0) == 0 || (*(int *)(param_1 + 0x13dc) != 1)) ||
      ((*(int *)(param_1 + 0x13b8) == 0 || (36.0 <= *(float *)(param_1 + 0xa8c))))))) {
    if (*(int *)(param_1 + 0x18f0) != 0) {
      fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x924) = fVar1;
      if (0.0 <= fVar1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x924) = 0;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
    *(float *)(param_1 + 0x924) = fVar1;
    if (fVar1 <= 60.0) {
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_00b39f00(0x1a,0,0,0);
      return;
    }
    FUN_00b39f00(0x1b,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xddc) & 0x20) == 0) {
    if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_00b3c6ba;
    FUN_00b39f00(0x10000,0,0,0);
    uVar4 = FUN_00dde2a0(0,100);
    if ((uVar4 & 1) == 0) goto LAB_00b3c6ba;
    uVar5 = 0x10001;
  }
  else {
    uVar5 = 0x10002;
  }
  FUN_00b39f00(uVar5,0,0,0);
LAB_00b3c6ba:
  FUN_00c27260(0x40200000);
  return;
}

// 00B3C750  FUN_00b3c750  size=295  [callgraph]
void __fastcall FUN_00b3c750(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    return;
  }
  if (((((param_1[0x2a1] == 0) || (0.0 <= (float)param_1[0x422])) ||
       (iVar1 = FUN_00c15850(), iVar1 == 0)) || ((param_1[0x63a] == 0 || (param_1[0x63c] == 0)))) ||
     ((param_1[0x4f7] != 1 || ((param_1[0x4ee] == 0 || (25.0 <= (float)param_1[0x2a3])))))) {
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00b3c875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x377) & 0x20) == 0) {
    if (4.0 <= (float)param_1[0x2a3]) goto LAB_00b3c838;
    FUN_00b39f00(0x10000,0,0,0);
    uVar2 = FUN_00dde2a0(0,100);
    if ((uVar2 & 1) == 0) goto LAB_00b3c838;
    uVar3 = 0x10001;
  }
  else {
    uVar3 = 0x10002;
  }
  FUN_00b39f00(uVar3,0,0,0);
LAB_00b3c838:
  FUN_00c27260(0x40200000);
  return;
}

// 00B3C880  FUN_00b3c880  size=409  [callgraph]
bool __thiscall FUN_00b3c880(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  bVar2 = (param_2[0x24] & 0x10000000U) != 0;
  if (bVar2) {
    FUN_00b39f00(0xa000f,0,0,0);
  }
  bVar3 = (param_2[0x24] & 0x8000000U) != 0;
  if (bVar3) {
    FUN_00b39f00(0xa0012,0,0,0);
  }
  bVar4 = (param_2[0x24] & 0x2000000U) != 0;
  if (bVar4) {
    FUN_00b39f00(0xa0004,0,0,0);
  }
  bVar5 = (*(byte *)((int)param_2 + 0x93) & 1) != 0;
  if (bVar5) {
    FUN_00b39f00(0xa000c,0,0,0);
  }
  bVar6 = (param_2[0x24] & 0x800000U) != 0;
  if (bVar6) {
    FUN_00b39f00(0xa0005,0,0,0);
  }
  bVar7 = (param_2[0x24] & 0x80000000U) != 0;
  if (bVar7) {
    FUN_00b39f00(0xa0017,0,0,0);
  }
  bVar8 = (param_2[0x24] & 0x40000000U) != 0;
  if (bVar8) {
    FUN_00b39f00(0xa0018,0,0,0);
  }
  bVar9 = (param_2[0x24] & 0x20000000U) != 0;
  if (bVar9) {
    FUN_00b39f00(0xa0019,0,0,0);
  }
  bVar9 = bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))))));
  if ((*param_2 == 0x4c) || (*param_2 == 0x4b)) {
    FUN_00b39f00(0xa0014,0,0,0);
    bVar9 = true;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 != 0) {
    FUN_00b39f00(0xa0006,0,0,0);
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x4e9] = 1;
      FUN_00b39f00(0xa0007,0,0,0);
    }
    return true;
  }
  return bVar9;
}

// 00B3CA20  FUN_00b3ca20  size=41  [callgraph]
void __fastcall FUN_00b3ca20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00b3af80();
    if (iVar1 != 0) {
      FUN_00b39f00(0x110001,0,0,0);
    }
  }
  return;
}

// 00B3CA50  FUN_00b3ca50  size=213  [callgraph]
undefined4 __fastcall FUN_00b3ca50(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x1744) != 2)) &&
      ((*(int *)(param_1 + 0xfa4) != 0 ||
       ((((iVar2 = *(int *)(param_1 + 0x13dc), iVar2 != 1 && (iVar2 != 7)) && (iVar2 != 6)) &&
        (iVar2 != 5)))))) && ((*(uint *)(param_1 + 0xdd8) & 0x2000000) == 0)) {
    iVar2 = FUN_00b34d30();
    if (((iVar2 != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) && (*(int *)(param_1 + 0x18e8) != 0))
    {
      sVar1 = FUN_00dde2d0(0,100);
      uVar3 = (int)sVar1 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if (uVar3 == 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar1 = FUN_00dde2d0(0,1);
        FUN_00b39f00(sVar1 + 0x1a,uVar4,uVar5,uVar6);
        *(undefined4 *)(param_1 + 0x1080) = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 00B3CB30  FUN_00b3cb30  size=300  [callgraph]
undefined4 __fastcall FUN_00b3cb30(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x1744) != 2)) &&
       (*(int *)(param_1 + 0xfa4) == 0)) &&
      (((iVar2 = *(int *)(param_1 + 0x13dc), iVar2 == 1 || (iVar2 == 7)) ||
       ((iVar2 == 6 || (iVar2 == 5)))))) && ((*(uint *)(param_1 + 0xdd8) & 0x2000000) == 0)) {
    iVar2 = FUN_00b34d30();
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x4b0) != 0x20170) && (*(float *)(param_1 + 0xa8c) < 6.25)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          FUN_00b39f00(0x10001,0,0,0);
          if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
            FUN_00b39f00(0x10005,0,0,0);
          }
          return 1;
        }
      }
    }
    else if ((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,3);
      FUN_00b39f00(sVar1 + 0x10010,uVar3,uVar4,uVar5);
      return 1;
    }
  }
  return 0;
}

// 00B3CC60  FUN_00b3cc60  size=535  [callgraph]
void __fastcall FUN_00b3cc60(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_00b3cd7b;
  }
  FUN_00ac82f0();
  iVar2 = param_1[300];
  uVar3 = 0x19f;
  if (iVar2 == 0x20170) {
    uVar3 = 0x548;
  }
  if (2.4674013 <= (float)param_1[0x245] * (float)param_1[0x245]) {
LAB_00b3ccc2:
    if (iVar2 != 0x20170) goto LAB_00b3ccca;
  }
  else {
    uVar3 = 0x1a0;
    if (iVar2 == 0x20170) {
      uVar3 = 0x54a;
      goto LAB_00b3ccc2;
    }
LAB_00b3ccca:
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      uVar3 = 0x1a1;
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      uVar3 = 0x1a2;
    }
  }
  uVar4 = 0x8000000;
  if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
    uVar4 = 0x8000040;
  }
  FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
  FUN_00b34fd0(&DAT_0163b604,1);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00b30b70();
LAB_00b3cd7b:
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_00b3ca50();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((float)param_1[0x2a3] < 30.25) && ((float)param_1[0x2a8] < 1.0471976)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_00b3cb30();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3CE80  FUN_00b3ce80  size=759  [callgraph]
void __fastcall FUN_00b3ce80(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float unaff_ESI;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float local_18;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  iVar3 = FUN_00a81330();
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  bVar2 = false;
  switch(param_1[0x187]) {
  case 0:
    FUN_00ac82f0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
    iVar3 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3dcccccd;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3dcccccd;
    *(undefined4 *)(iVar3 + 0xec) = 0x3dcccccd;
    bVar2 = true;
    break;
  case 1:
    break;
  case 2:
    uVar4 = 0x1d5;
    if ((param_1[0x377] & 0x8000U) != 0) {
      uVar4 = 0x481;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
    goto LAB_00b3d05b;
  case 3:
LAB_00b3d05b:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((0.0 < fVar1 - (float)param_1[0x244]) && (iVar5 != 0)) {
      switchD_0080dbae::default();
      local_20 = *(float *)(iVar5 + 0x40);
      local_18 = *(float *)(iVar5 + 0x48);
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 1.5;
      D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
      param_1[0x14] =
           (int)((local_20 - ((float)param_1[0x10] + local_30)) * 0.1 + (float)param_1[0x14]);
      param_1[0x16] =
           (int)((local_18 - ((float)param_1[0x12] + local_28)) * 0.1 + (float)param_1[0x16]);
    }
    iVar3 = FUN_00a952e0(0,0x41a00000);
    if (iVar3 != 0) {
      FUN_00dde2d0(0,2);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
        FUN_00b2e200(param_1[0x639]);
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00b39f00(0x23,0,0,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00b3cec2_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0xd);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
      FUN_00b2e200(param_1[0x639]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  if ((bVar2) && (iVar5 != 0)) {
    switchD_0080dbae::default();
    local_20 = *(float *)(iVar5 + 0x40);
    local_18 = *(float *)(iVar5 + 0x48);
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 2.0;
    D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
    param_1[0x14] = (int)((local_2c - ((float)param_1[0x10] + unaff_ESI)) + (float)param_1[0x14]);
    param_1[0x16] = (int)((fStack_24 - ((float)param_1[0x12] + fStack_34)) + (float)param_1[0x16]);
    return;
  }
switchD_00b3cec2_default:
  return;
}

// 00B3D190  FUN_00b3d190  size=362  [callgraph]
void __fastcall FUN_00b3d190(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar3 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(0x1d0,0,0,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((float)param_1[0x2a3] < 30.25) && ((float)param_1[0x2a8] < 1.0471976)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_00b3cb30();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3D300  FUN_00b3d300  size=983  [callgraph]
void __fastcall FUN_00b3d300(int *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int unaff_ESI;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x228] = 0;
    iVar5 = FUN_00ac82f0();
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x3d088889;
    }
    uVar4 = 0x4c3;
    if (param_1[300] == 0x20170) {
      uVar4 = 0x550;
    }
    if (2.4674013 <= (float)param_1[0x245] * (float)param_1[0x245]) {
      param_1[0x250] = 0;
      fVar2 = (float)param_1[0x245] + 3.1415927 + (float)param_1[0x25];
    }
    else {
      uVar4 = 0x4c7;
      fVar2 = (float)param_1[0x25] + (float)param_1[0x245];
      param_1[0x250] = 1;
    }
    param_1[0x25] = (int)fVar2;
    uVar3 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,uVar6,0x3f800000,uVar3,0xbf800000,0x3f800000);
    iVar5 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar5 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xec) = 0x3f800000;
    local_20 = 0;
    local_1c = 0;
    local_18 = -0x42333333;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 4);
    param_1[0x224] = local_20;
    param_1[0x225] = local_1c;
    param_1[0x226] = local_18;
    param_1[0x227] = iStack_14;
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
    break;
  case 1:
    break;
  case 2:
    uVar6 = 0x4c4;
    if (param_1[300] == 0x20170) {
      uVar6 = 0x551;
    }
    if (param_1[0x250] == 1) {
      uVar6 = 0x4c8;
    }
    uVar4 = 0;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar4 = 0x40;
    }
    FUN_00aa4080(uVar6,0,0,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x248] = -0x42333333;
    if (param_1[0x250] == 1) {
      param_1[0x248] = 0x3dcccccd;
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = param_1[0x248];
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 4);
    param_1[0x224] = unaff_ESI;
    param_1[0x225] = unaff_EBX;
    param_1[0x226] = local_24;
    param_1[0x227] = local_20;
    (**(code **)(*param_1 + 0x314))();
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b3d5bb;
  case 3:
LAB_00b3d5bb:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 0x324))();
    if (iVar5 == 0) {
      return;
    }
LAB_00b3d5ef:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar6 = 0x4c5;
    if (param_1[300] == 0x20170) {
      uVar6 = 0x552;
    }
    if (param_1[0x250] == 1) {
      uVar6 = 0x4c9;
    }
    uVar4 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar4 = 0x8000040;
    }
    FUN_00aa4080(uVar6,0,0x3daaaaab,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) {
      return;
    }
    FUN_00b2e200(param_1[0x639]);
    iVar5 = FUN_00b3b110();
    if (iVar5 != 0) {
      return;
    }
    if (param_1[0x139] == 0) {
      FUN_00b3b400();
      return;
    }
    goto LAB_00b3d5ef;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00b3d32b_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x324);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      param_1[0x187] = 4;
      return;
    }
  }
switchD_00b3d32b_default:
  return;
}

// 00B3D700  FUN_00b3d700  size=82  [callgraph]
void __fastcall FUN_00b3d700(int *param_1)

{
  int iVar1;
  
  if (param_1[0x5d9] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 3) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00b39f00(0xa0009,0,0,0);
    }
  }
  return;
}

// 00B3D760  FUN_00b3d760  size=451  [callgraph]
void __fastcall FUN_00b3d760(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x3d088889;
    }
    uVar4 = 0x1a7;
    if (param_1[300] == 0x20170) {
      uVar4 = 0x54c;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,uVar2,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x186] == 0xa0012) {
      fVar5 = (float10)FUN_00ac85c0(5,0x53);
      uVar2 = 0x52;
    }
    else {
      fVar5 = (float10)FUN_00ac85c0(5,0x48);
      uVar2 = 0x47;
    }
    param_1[0x225] = (int)(float)fVar5;
    fVar5 = (float10)FUN_00ac85c0(5,uVar2);
    param_1[0x289] = (int)(float)fVar5;
    param_1[0x288] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
    (**(code **)(*param_1 + 0x220))(0x41000000);
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0x1a8;
    if (param_1[300] == 0x20170) {
      uVar2 = 0x54d;
    }
    FUN_00aa4080(uVar2,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00b39f00(0xa0009,0,0,0);
      return;
    }
  default:
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3D940  FUN_00b3d940  size=296  [callgraph]
void __fastcall FUN_00b3d940(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  local_8[0] = 0x1e3;
  local_8[1] = 0x1e4;
  if (*(int *)(param_1 + 0x61c) == 0) {
    local_c = 0;
    iVar3 = FUN_00ac82f0();
    if (iVar3 != 0) {
      local_c = 0x3d088889;
    }
    uVar1 = FUN_00dde2a0(1,1000);
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1748) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(local_8[uVar1 & 1],0,local_c,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4b);
    *(float *)(param_1 + 0xa24) = (float)fVar4;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4c);
    *(float *)(param_1 + 0x894) = (float)fVar4;
    if (*(int *)(param_1 + 0x13a4) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_00b30b70();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00b39f00(0xa0008,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3DA70  FUN_00b3da70  size=70  [callgraph]
void __fastcall FUN_00b3da70(int *param_1)

{
  int iVar1;
  
  if (param_1[0x5d9] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00b39f00(0xa0009,0,0,0);
  }
  return;
}

// 00B3DAC0  FUN_00b3dac0  size=252  [callgraph]
void __fastcall FUN_00b3dac0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1748) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1a8,0,uVar1,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4b);
    *(float *)(param_1 + 0xa24) = (float)fVar4;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4c);
    *(float *)(param_1 + 0x894) = (float)fVar4;
    if (*(int *)(param_1 + 0x13a4) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_00b30b70();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00b39f00(0xa0008,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3DBC0  FUN_00b3dbc0  size=87  [callgraph]
void __fastcall FUN_00b3dbc0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00b39f00(0xa0009,0,0,0);
  }
  return;
}

// 00B3DC20  FUN_00b3dc20  size=346  [callgraph]
void __fastcall FUN_00b3dc20(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar2 == 0) {
    uVar4 = 0x1a9;
    if (*(int *)(param_1 + 0x4b0) == 0x20170) {
      uVar4 = 0x54e;
    }
    uVar3 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1748) & 1) != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,0x3c888889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00b30b70();
LAB_00b3dd07:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto LAB_00b3dd65;
    fVar1 = *(float *)(param_1 + 0x18e4) * 60.0;
    *(float *)(param_1 + 0x1088) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1088) = fVar1 + 120.0;
    }
    iVar2 = FUN_00b3b110();
    if (iVar2 != 0) goto LAB_00b3dd65;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 3;
      goto LAB_00b3dd65;
    }
  }
  else {
    if (iVar2 == 1) goto LAB_00b3dd07;
    if (iVar2 != 2) {
      return;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto LAB_00b3dd65;
    fVar1 = *(float *)(param_1 + 0x18e4) * 60.0;
    *(float *)(param_1 + 0x1088) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1088) = fVar1 + 120.0;
    }
    iVar2 = FUN_00b3b110();
    if (iVar2 != 0) goto LAB_00b3dd65;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      goto LAB_00b3dd65;
    }
  }
  FUN_00b3b400();
LAB_00b3dd65:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3DD80  FUN_00b3dd80  size=41  [callgraph]
void __fastcall FUN_00b3dd80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00b3af80();
    if (iVar1 != 0) {
      FUN_00b39f00(0x110001,0,0,0);
    }
  }
  return;
}

// 00B3DDB0  FUN_00b3ddb0  size=492  [callgraph]
void __fastcall FUN_00b3ddb0(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  local_8[0] = 0x1cd;
  local_8[1] = 0x1ce;
  if (param_1[0x187] == 0) {
    local_c = 0;
    iVar3 = FUN_00ac82f0();
    if (iVar3 != 0) {
      local_c = 0x3d088889;
    }
    sVar2 = FUN_00dde2d0(0,1);
    uVar1 = local_8[sVar2];
    uVar4 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar4 = 0x8000040;
    }
    fVar5 = (float10)FUN_00dde300(0x3f19999a,0x3f99999a);
    fVar7 = (float)fVar5;
    uVar6 = 0;
    fVar5 = (float10)FUN_00dde300(0x3f19999a,0x3f800000);
    FUN_00aa4080(uVar1,0,local_c,(float)fVar5,uVar4,uVar6,fVar7);
    iVar3 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f800000;
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a952e0(0,0x41200000);
  if (iVar3 != 0) {
    FUN_00b3ca50();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
      }
      if (((param_1[0x375] & 0x80000U) != 0) && (param_1[0x4f7] == 2)) {
        param_1[0x375] = param_1[0x375] & 0xfff7ffff;
        FUN_00b39f00(0x20005,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3DFA0  FUN_00b3dfa0  size=201  [callgraph]
void __fastcall FUN_00b3dfa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    uVar4 = 0x1df;
    if (*(int *)(param_1 + 0x4b0) == 0x20170) {
      uVar4 = 0x564;
    }
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1748) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,uVar1,0x3f800000,uVar2,0xbf800000,0x3f800000);
    FUN_00b30b70();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00b39f00(0xa0015,2,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3E070  FUN_00b3e070  size=267  [callgraph]
void __fastcall FUN_00b3e070(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar3 == 0) {
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1748) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1ad,0,uVar1,0x3f800000,uVar2,0xbf800000,0x3f800000);
    iVar3 = *(int *)(param_1 + 0x918);
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f800000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00b3b440();
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3E180  FUN_00b3e180  size=786  [callgraph]
void __fastcall FUN_00b3e180(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  switch(param_1[0x187]) {
  case 0:
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1be,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    if (param_1[0x3e9] == 0) {
      FUN_00b34fd0(&DAT_0163b604,1);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
    (**(code **)(*param_1 + 0x358))(param_1[0x573],param_1 + 0x574);
    FUN_00c27f40(5,0x44e10000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar2 = 0;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar2 = 0x40;
    }
    FUN_00aa4080(0x1bf,0,0,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
      if (param_1[0x573] == 200) {
        param_1[0x573] = 0xca;
      }
      if (param_1[0x573] == 0xc9) {
        param_1[0x573] = 0xcb;
      }
      (**(code **)(*param_1 + 0x358))(param_1[0x573],0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1c0,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b3e3df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x1c2,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43960000;
    (**(code **)(*param_1 + 0x358))(param_1[0x573],param_1 + 0x574);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
      FUN_00b3b400();
      return;
    }
  }
  return;
}

// 00B3E4C0  FUN_00b3e4c0  size=230  [callgraph]
void __fastcall FUN_00b3e4c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar3 == 0) {
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    uVar2 = 0x1d9;
    if (*(int *)(param_1 + 0x4b0) == 0x20170) {
      uVar2 = 0x554;
    }
    FUN_00aa4080(uVar2,0,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b30b70();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) && (iVar3 = FUN_00b3b110(), iVar3 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00b3b400();
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3E5B0  FUN_00b3e5b0  size=386  [callgraph]
void __fastcall FUN_00b3e5b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar3 = 0x1aa;
    if (param_1[300] == 0x20170) {
      uVar3 = 0x557;
    }
    if (param_1[0x186] == 0xa0010) {
      uVar3 = 0x1ab;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) goto LAB_00b3e71d;
  param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
  }
  if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x4f7] != 1) ||
       (((param_1[0x2a1] == 0 || (iVar2 = FUN_00c15850(), iVar2 == 0)) ||
        (6.25 <= (float)param_1[0x2a3])))) goto LAB_00b3e71d;
    if (1.0471976 < (float)param_1[0x2a8]) {
      FUN_00b39f00(0x10001,0,0,0);
    }
    if ((float)param_1[0x2a8] <= 2.0943952) goto LAB_00b3e71d;
    uVar3 = 0x10005;
  }
  else {
    uVar3 = 0x23;
  }
  FUN_00b39f00(uVar3,0,0,0);
LAB_00b3e71d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3E740  FUN_00b3e740  size=838  [callgraph]
void __fastcall FUN_00b3e740(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x186] != 0xa0013) {
    (**(code **)(*param_1 + 0x1d4))(1);
    switch(param_1[0x187]) {
    case 0:
      (**(code **)(*param_1 + 0x318))();
      param_1[0x228] = 0;
      FUN_00aa4080(0x4cb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x25] = (int)((float)param_1[0x245] + 3.1415927 + (float)param_1[0x25]);
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*param_1 + 0x324);
        param_1[0x187] = param_1[0x187] + 1;
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
LAB_00b3e968:
          param_1[0x187] = 4;
          return;
        }
      }
      break;
    case 2:
      FUN_00aa4080(0x4cc,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      pcVar1 = *(code **)(*param_1 + 0x314);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar1)();
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = (**(code **)(*param_1 + 0x324))();
      if (iVar2 != 0) {
LAB_00b3e9e2:
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 4:
      FUN_00aa4080(0x4cd,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aa92c0(0x3d);
    case 5:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
      FUN_00b2e200(param_1[0x639]);
      iVar2 = FUN_00b3b110();
      if (iVar2 != 0) {
        return;
      }
      if (param_1[0x139] != 0) goto LAB_00b3e9e2;
      goto LAB_00b3ea75;
    case 6:
      goto LAB_00b3e812;
    default:
      break;
    }
switchD_00b3e76f_default:
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x225] = 0x3c23d70a;
    FUN_00aa4080(0x1dd,0,0x3d088889,0x3f800000,0x8000000,0,0x40000000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00b2e200(param_1[0x639]);
      if (param_1[0x139] != 0) {
        param_1[0x187] = 4;
        return;
      }
LAB_00b3ea75:
      FUN_00b3b400();
      return;
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = 3;
    (*pcVar1)(0x3d,0);
    if (param_1[0x139] != 0) goto LAB_00b3e968;
  case 3:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00b2e200(param_1[0x639]);
      if (param_1[0x139] == 0) {
        FUN_00b3b400();
      }
      else {
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00b3e76f_default;
  }
LAB_00b3e812:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3EAC0  FUN_00b3eac0  size=273  [callgraph]
void __fastcall FUN_00b3eac0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = 0x1db;
    if (param_1[300] == 0x20170) {
      uVar1 = 0x555;
    }
    param_1[0x225] = 0x3dcccccd;
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8e520();
  if (iVar2 != 0) {
    param_1[0x15] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x15]);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    iVar2 = FUN_00b3b110();
    if (iVar2 == 0) {
      if (param_1[0x139] == 0) {
        FUN_00b3b400();
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  return;
}

// 00B3EBE0  FUN_00b3ebe0  size=222  [callgraph]
void __fastcall FUN_00b3ebe0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x318))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  param_1[0x66a] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x309,0,0x3d088889,0x3f800000,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00a94ce0(0);
  iVar1 = (**(code **)(*param_1 + 400))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x34c))();
    (**(code **)(*param_1 + 0x220))(0x40800000);
    param_1[0x245] = 0x40490fdb;
    FUN_00b39f00(0xa0004,0,0,0);
    (**(code **)(*param_1 + 0x314))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3ECC0  FUN_00b3ecc0  size=172  [callgraph]
void __fastcall FUN_00b3ecc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    FUN_00aa4080(0x191,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00b3b110(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00b3b440();
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  return;
}

// 00B3ED70  FUN_00b3ed70  size=172  [callgraph]
void __fastcall FUN_00b3ed70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    FUN_00aa4080(0x192,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00b3b110(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00b3b440();
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  return;
}

// 00B3EE20  FUN_00b3ee20  size=645  [callgraph]
void __fastcall FUN_00b3ee20(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar5 = 0x8000000;
    uVar6 = 0x364;
    if (param_1[0x374] == 0) {
      iVar4 = FUN_00ac82f0();
      if (iVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x3d088889;
      }
      if (param_1[0x372] == 8) {
        uVar5 = 0x8000040;
LAB_00b3ee88:
        uVar6 = 0x48f;
      }
      else if (param_1[0x372] == 9) goto LAB_00b3ee88;
      FUN_00aa4080(uVar6,0,uVar1,0x3f800000,uVar5,0xbf800000,0x3f800000);
    }
    iVar4 = param_1[0x4f7];
    if ((((iVar4 == 5) || (iVar4 == 7)) || (iVar4 == 6)) || (iVar4 == 3)) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a81330();
        iVar4 = FUN_00a7c8a0();
        if (iVar4 != 0) {
          FUN_00a81330();
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x25c))(0xffffffff,0,0);
        }
      }
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a81330();
        iVar4 = FUN_00a7c8a0();
        if (iVar4 != 0) {
          FUN_00a81330();
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x25c))(0xffffffff,0,0);
        }
      }
      param_1[0x4f7] = 0;
      param_1[0x3e9] = 1;
    }
    if ((param_1[0x377] & 0x8000U) != 0) {
      if (param_1[0x4f8] == 4) {
        FUN_00b3a8d0();
        param_1[0x4f8] = 0;
      }
      param_1[0x377] = param_1[0x377] & 0xffff7fff;
    }
    if (param_1[0x3e9] != 0) {
      param_1[0x4f7] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
    if (param_1[0x139] == 0) {
      param_1[0x570] = 0;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00b3f049;
  iVar4 = FUN_00a94ce0(0);
  if ((iVar4 != 0) && (iVar4 = FUN_00b3b110(), iVar4 == 0)) {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x5d1] = 1;
    (*pcVar2)();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b3f049:
  iVar4 = FUN_00a8c760(0x3e);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  iVar4 = FUN_00a8c760(0xe);
  if ((iVar4 != 0) && (param_1[0x139] == 0)) {
    FUN_00e5e0c0("em0010_vo_line_amputate_body",param_1,0xffffffff,0);
  }
  iVar4 = FUN_00a8c760(10);
  if (iVar4 != 0) {
    param_1[0x375] = param_1[0x375] | 0x20000;
  }
  return;
}

// 00B3F0B0  FUN_00b3f0b0  size=624  [callgraph]
void __fastcall FUN_00b3f0b0(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar6 = 0x379;
  if (param_1[300] == 0x20170) {
    uVar6 = 0x575;
  }
  if (param_1[0x187] == 0) {
    if (param_1[0x374] == 0) {
      iVar5 = FUN_00ac82f0();
      if (iVar5 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x3d088889;
      }
      uVar3 = 0x8000000;
      if (param_1[0x186] == 0xa001c) {
        uVar3 = 0x8000040;
      }
      FUN_00aa4080(uVar6,0,uVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
    }
    bVar2 = false;
    if ((param_1[0x186] == 0xa001c) && ((param_1[0x4f7] == 2 || (param_1[0x4f7] == 3)))) {
      bVar2 = true;
    }
    iVar5 = param_1[0x4f7];
    if ((((iVar5 == 5) || (iVar5 == 7)) || (iVar5 == 6)) || (bVar2)) {
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a81330();
        iVar5 = FUN_00a7c8a0();
        if (iVar5 != 0) {
          FUN_00a81330();
          piVar4 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar4 + 0x25c))(0xffffffff,0,0);
        }
      }
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a81330();
        iVar5 = FUN_00a7c8a0();
        if (iVar5 != 0) {
          FUN_00a81330();
          piVar4 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar4 + 0x25c))(0xffffffff,0,0);
        }
      }
      param_1[0x4f7] = 0;
      param_1[0x3e9] = 1;
    }
    if ((param_1[0x377] & 0x8000U) != 0) {
      if (param_1[0x4f8] == 4) {
        FUN_00b3a8d0();
        param_1[0x4f8] = 0;
      }
      param_1[0x377] = param_1[0x377] & 0xffff7fff;
    }
    if (param_1[0x3e9] != 0) {
      param_1[0x4f7] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) goto LAB_00b3f2f4;
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    param_1[0x5d1] = 2;
    if (param_1[0x186] == 0xa001c) {
      param_1[0x5d1] = 2;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b3f2f4:
  iVar5 = FUN_00a8c760(0xe);
  if ((iVar5 != 0) && (param_1[0x139] == 0)) {
    FUN_00e5e0c0("em0010_vo_line_amputate_arm1",param_1,0xffffffff,0);
  }
  return;
}

// 00B3F320  FUN_00b3f320  size=938  [callgraph]
void __fastcall FUN_00b3f320(int *param_1)

{
  float fVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x5a3] = 1;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x374] != 0) goto LAB_00b3f553;
    iVar4 = param_1[300];
    uVar6 = 0x1b0;
    if (iVar4 == 0x20170) {
      uVar6 = 0x55a;
    }
    break;
  case 1:
    goto switchD_00b3f349_caseD_1;
  case 2:
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    FUN_00b346d0(param_1[0x5d2]);
    if ((param_1[0x375] & 0x100U) != 0) {
      FUN_00b39f00(0xb000b,0,0,0);
    }
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_00b3f349_default;
  }
  uVar5 = 0x8000000;
  switch(param_1[0x372]) {
  case 1:
    uVar6 = 0x1b0;
    if (iVar4 == 0x20170) {
      uVar6 = 0x55a;
    }
    switch(param_1[0x4f3]) {
    case 0:
      uVar6 = 0x1b0;
      if (iVar4 == 0x20170) {
        uVar6 = 0x55a;
      }
      break;
    case 1:
      uVar6 = 0x1b1;
      if (iVar4 == 0x20170) {
        uVar6 = 0x55b;
      }
      break;
    case 2:
      uVar6 = 0x1b2;
      if (iVar4 == 0x20170) {
        uVar6 = 0x55c;
      }
      break;
    case 3:
      uVar6 = 0x1b2;
      if (iVar4 == 0x20170) {
        uVar6 = 0x55c;
      }
      uVar5 = 0x8000040;
    }
    if ((param_1[0x375] & 0x20000U) != 0) {
      uVar6 = 0x4a1;
    }
    goto switchD_00b3f444_default;
  case 2:
    uVar6 = 0x1b4;
    if (iVar4 == 0x20170) {
      uVar6 = 0x55e;
    }
    switch(param_1[0x4f3]) {
    case 0:
      uVar6 = 0x1b6;
      if (iVar4 == 0x20170) {
        uVar6 = 0x560;
      }
      bVar3 = FUN_00dde2a0(0,100);
      if ((bVar3 & 1) != 0) {
        uVar6 = 0x192;
      }
      break;
    case 1:
      uVar6 = 0x1b7;
      if (iVar4 == 0x20170) {
        uVar6 = 0x561;
      }
      break;
    case 2:
      uVar5 = 0x8000040;
    case 3:
      uVar6 = 0x1b9;
    }
    goto switchD_00b3f444_default;
  case 3:
    uVar6 = 0x364;
    break;
  case 10:
  case 0x17:
    uVar6 = 0x4d7;
    goto switchD_00b3f444_default;
  case 0xb:
  case 0x18:
    uVar6 = 0x4d6;
    goto switchD_00b3f444_default;
  case 0xc:
  case 0x1a:
    goto switchD_00b3f391_caseD_c;
  case 0xd:
    uVar6 = 0x4db;
    goto switchD_00b3f444_default;
  case 0x13:
    uVar6 = 0x4f0;
    if (param_1[0x4f3] == 1) goto switchD_00b3f391_caseD_15;
    break;
  case 0x14:
    uVar6 = 0x4f2;
    break;
  case 0x15:
switchD_00b3f391_caseD_15:
    uVar6 = 0x4f1;
    break;
  case 0x16:
    uVar6 = 0x4f0;
    break;
  case 0x19:
    FUN_00dde300(0x3f666666,0x3f99999a);
    goto switchD_00b3f391_caseD_c;
  }
switchD_00b3f391_caseD_4:
  FUN_00aa4080(uVar6,0,0x3c888889,0x3f800000,uVar5,0xbf800000,0x3f800000);
LAB_00b3f553:
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00b345b0(param_1[0x5d2],0xbf800000);
  fVar7 = (float10)FUN_00dde300(0,0x42700000);
  param_1[0x248] = (int)(float)fVar7;
switchD_00b3f349_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (((iVar4 != 0) && (iVar4 = FUN_00ac8410(), iVar4 == 0)) ||
     ((iVar4 = FUN_00a8c760(10), iVar4 != 0 &&
      ((iVar4 = FUN_00ac8410(), iVar4 == 0 &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)))))) {
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x1af] = 1;
    param_1[0x570] = 0;
  }
switchD_00b3f349_default:
  iVar4 = FUN_00a8c760(0xc);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b3f647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))();
    return;
  }
  return;
switchD_00b3f391_caseD_c:
  uVar6 = 0x4dc;
switchD_00b3f444_default:
  FUN_00dde300(0x3f666666,0x3f99999a);
  goto switchD_00b3f391_caseD_4;
}

// 00B3F750  FUN_00b3f750  size=471  [callgraph]
void __fastcall FUN_00b3f750(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  local_8[0] = 0x1bb;
  local_8[1] = 0x1bc;
  *(undefined4 *)(param_1 + 0x168c) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    local_c = 0;
    iVar3 = FUN_00ac82f0();
    if (iVar3 != 0) {
      local_c = 0x3d088889;
    }
    sVar2 = FUN_00dde2d0(0,0);
    uVar4 = local_8[sVar2];
    if (*(float *)(param_1 + 0x914) * *(float *)(param_1 + 0x914) < 2.4674013) {
      uVar4 = 0x1bc;
    }
    FUN_00aa4080(uVar4,0,local_c,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = *(int *)(param_1 + 0x918);
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xec) = 0x3f800000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00b345b0(*(undefined4 *)(param_1 + 0x1748),0xbf800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_00ac8410(), iVar3 == 0)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_00eaa6e0(0x41200000,0);
      *(undefined4 *)(param_1 + 0x6bc) = 1;
      *(undefined4 *)(param_1 + 0x15c0) = 0;
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0x61c) = 3;
    FUN_00b346d0(*(undefined4 *)(param_1 + 0x1748));
    if ((*(uint *)(param_1 + 0xdd4) & 0x100) != 0) {
      FUN_00b39f00(0xb000b,0,0,0);
    }
  case 3:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      FUN_009fdde0();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 00B3F940  FUN_00b3f940  size=157  [callgraph]
void __fastcall FUN_00b3f940(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00b30b70();
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    FUN_00b346d0(*(undefined4 *)(param_1 + 0x1748));
    if ((*(uint *)(param_1 + 0xdd4) & 0x100) != 0) {
      FUN_00b39f00(0xb000b,0,0,0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    FUN_009fdde0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3F9E0  FUN_00b3f9e0  size=377  [callgraph]
void __fastcall FUN_00b3f9e0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 unaff_ESI;
  float10 fVar3;
  
  param_1[0x375] = param_1[0x375] | 0x4000000;
  iVar2 = param_1[0x187];
  param_1[0x139] = 1;
  param_1[0x5a3] = 1;
  if (iVar2 == 0) {
    param_1[0x187] = 1;
    FUN_00b30b70();
    FUN_00eaa6e0(0x41100000,0);
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x248] = 0x42700000;
    param_1[0x1af] = 1;
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(5);
    }
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    fVar3 = (float10)FUN_00ac8f80();
    if ((float10)0 <= fVar3 - (float10)0.011111111) {
      FUN_00b2edc0((float)(fVar3 - (float10)0.011111111));
      return;
    }
    (**(code **)(*param_1 + 0x364))(0x20010);
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    FUN_00b2edc0(unaff_ESI);
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] < 0.0) &&
     (param_1[0x187] = param_1[0x187] + 1, (param_1[0x375] & 0x100U) != 0)) {
    FUN_00b39f00(0xb000b,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B3FB60  FUN_00b3fb60  size=50  [callgraph]
void FUN_00b3fb60(void)

{
  undefined4 uVar1;
  
  FUN_00a81330();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  FUN_00b39f00(6,0,0,0);
  return;
}

// 00B3FBA0  Em0010::vf108  size=138  [class]
void __thiscall Em0010::vf108(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 0:
    FUN_00b39f00(0xb,0,0,0);
    return;
  case 1:
    uVar2 = 0x23;
    break;
  case 2:
    uVar2 = 0x13;
    break;
  case 3:
    FUN_00b3a190();
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x3e9] = 0;
    (*pcVar1)();
    return;
  default:
    (**(code **)(*param_1 + 0x34c))();
    FUN_00dd5650(&DAT_0164664c);
    return;
  }
  FUN_00b39f00(uVar2,0,0,0);
  FUN_00b3a190();
  param_1[0x3e9] = 0;
  return;
}

// 00B3FC40  Em0010::vf264  size=705  [class]
undefined4 __thiscall Em0010::vf264(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040ac60(param_2);
  param_1[0x5c4] = param_1[0x2e1];
  if (param_1[0x2e1] != 0) {
    param_1[0x5c0] = param_1[0x2e3];
    param_1[0x5c1] = param_1[0x2e4];
    param_1[0x5c2] = param_1[0x2e5];
    param_1[0x5c3] = 0x3f800000;
    param_1[0x5c5] = param_1[0x2e2];
  }
  if (param_1[0x2bf] == 5) {
    param_1[0x5c0] = param_1[0x2e3];
    param_1[0x5c1] = param_1[0x2e4];
    param_1[0x5c2] = param_1[0x2e5];
    param_1[0x5c3] = 0x3f800000;
  }
  FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  if (((param_1[299] == 10) || ((*(byte *)(param_1 + 0x12a) & 4) == 0 && param_1[0x5c4] != 4)) &&
     (param_1[0x2c2] != -1)) {
    FUN_00b39f00(0,0,0,0);
    param_1[0x375] = param_1[0x375] | 0x80;
  }
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if ((param_1[0x1f6] != 0) && (*(int *)(param_1[0x1f6] + 0x810) != 0)) {
    FUN_00a8d580(0x40000);
  }
  if (param_1[0x2c9] != -1) {
    FUN_00b39f00(0x100005,0,0,0);
  }
  if (param_1[299] == 1) {
    param_1[0x5ac] = (int)((float)(int)*(short *)(param_2 + 4) * 45.0 + 300.0);
    iVar1 = FUN_00c19e40(*(undefined4 *)(param_2 + 0xec),(int)*(short *)(param_2 + 2));
    if ((iVar1 != 0) && (FUN_00a7c8a0(), param_1[0x1d9] != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_008e26e0(uVar2);
    }
  }
  FUN_00b2ec00();
  if (((param_1[0x12a] & 0x10000U) != 0) &&
     (((char)param_1[0x2ea] == '\x01' ||
      (iVar1 = FUN_0094ea60(0x6f2396e8,(int)(char)param_1[0x2ea]), iVar1 == 0)))) {
    param_1[0x375] = param_1[0x375] | 0x200000;
    (**(code **)(*param_1 + 0x358))(0x17c,param_1 + 0x60c);
    iVar1 = FUN_00ac89d0();
    if (iVar1 != 0) {
      iVar1 = FUN_00ac89d0();
      iVar4 = 0;
      iVar3 = 0;
      if (0 < *(short *)(iVar1 + 0x32c)) {
        do {
          *(undefined4 *)(iVar4 + 0x460 + *(int *)(iVar1 + 0x328)) = 8;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x560;
        } while (iVar3 < *(short *)(iVar1 + 0x32c));
      }
    }
    FUN_00ac85c0(5,0xb4);
    if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
      FUN_00ac85c0(5,0xb5);
    }
    if (param_1[300] == 0x20170) {
      FUN_00ac85c0(5,0xb6);
    }
    FUN_00a8eea0();
    uVar2 = FUN_00fdbc60();
    FUN_00a8edf0(uVar2);
  }
  return 1;
}

// 00B3FF10  FUN_00b3ff10  size=1239  [between]
void __fastcall FUN_00b3ff10(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  param_1[0x375] = param_1[0x375] | 0x400000;
  if (((param_1[0x376] & 0x80000U) == 0) && (iVar4 = FUN_00a82e60(), iVar4 == 0)) {
    iVar4 = param_1[0x2a1];
    param_1[0x5b0] = *(int *)(iVar4 + 0x40);
    param_1[0x5b1] = *(int *)(iVar4 + 0x44);
    param_1[0x5b2] = *(int *)(iVar4 + 0x48);
    param_1[0x5b3] = *(int *)(iVar4 + 0x4c);
  }
  iVar4 = FUN_00a82e70();
  if ((iVar4 != 0) && ((*(byte *)(param_1 + 0x375) & 0x40) != 0)) {
    param_1[0x5b0] = param_1[0x34c];
    param_1[0x5b1] = param_1[0x34d];
    param_1[0x5b2] = param_1[0x34e];
    param_1[0x5b3] = param_1[0x34f];
    param_1[0x375] = param_1[0x375] & 0xffbfffff;
  }
  iVar4 = param_1[0x2a1];
  param_1[0x5b8] = *(int *)(iVar4 + 0x40);
  param_1[0x5b9] = *(int *)(iVar4 + 0x44);
  param_1[0x5ba] = *(int *)(iVar4 + 0x48);
  param_1[0x5bb] = *(int *)(iVar4 + 0x4c);
  iVar4 = FUN_00a85630();
  if ((iVar4 == 2) || (iVar4 = FUN_00a85630(), iVar4 == 5)) {
    iVar4 = param_1[0x2a1];
    if ((iVar4 == 0) || (param_1[0x5c4] != 3)) {
      param_1[0x5b0] = param_1[0x5c0];
      param_1[0x5b1] = param_1[0x5c1];
      param_1[0x5b2] = param_1[0x5c2];
      iVar4 = param_1[0x5c3];
    }
    else {
      param_1[0x5b0] = *(int *)(iVar4 + 0x40);
      param_1[0x5b1] = *(int *)(iVar4 + 0x44);
      param_1[0x5b2] = *(int *)(iVar4 + 0x48);
      iVar4 = *(int *)(iVar4 + 0x4c);
    }
    pfVar5 = (float *)(param_1 + 0x5b0);
    param_1[0x5b3] = iVar4;
    param_1[0x5d4] = param_1[0x5c0];
    param_1[0x5d5] = param_1[0x5c1];
    param_1[0x5d6] = param_1[0x5c2];
    param_1[0x5d7] = param_1[0x5c3];
    fVar6 = (float10)*pfVar5 - (float10)(float)param_1[0x10];
    fVar7 = (float10)(float)param_1[0x5b2] - (float10)(float)param_1[0x12];
    fVar1 = (float)(((float10)(float)param_1[0x5b1] - (float10)(float)param_1[0x11]) *
                    ((float10)(float)param_1[0x5b1] - (float10)(float)param_1[0x11]) + fVar6 * fVar6
                   + fVar7 * fVar7);
    fVar6 = (float10)fpatan(fVar6,fVar7);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
    fVar2 = 0.5;
    if (param_1[0x5c4] == 3) {
      fVar2 = 2.5;
    }
    if ((fVar1 < fVar2 * fVar2 != (fVar1 == fVar2 * fVar2)) ||
       ((fVar6 * fVar6 < (float10)2.4674013 && (fVar1 <= 1.0)))) {
      FUN_00a87ba0();
      if (param_1[0x1d9] != 0) {
        FUN_008e5ac0(2);
      }
      iVar4 = FUN_00a85630();
      if (iVar4 == 3) {
        (**(code **)(*param_1 + 0x34c))();
        FUN_00a8e880(pfVar5);
        return;
      }
      if (iVar4 == 4) {
        FUN_00a88b50(4,0);
        (**(code **)(*param_1 + 0x34c))();
        if (param_1[0x3e9] != 0) {
          FUN_00b39f00(0x23,0,0,0);
          FUN_00a8e880(pfVar5);
          return;
        }
      }
    }
    FUN_00a8e880(pfVar5);
    return;
  }
  local_20 = (float)param_1[0x5b0];
  pfVar5 = (float *)(param_1 + 0x5b4);
  local_1c = (float)param_1[0x5b1];
  local_18 = (float)param_1[0x5b2];
  local_14 = param_1[0x5b3];
  *pfVar5 = (float)param_1[0x5b0];
  param_1[0x5b5] = param_1[0x5b1];
  param_1[0x5b6] = param_1[0x5b2];
  param_1[0x5b7] = param_1[0x5b3];
  param_1[0x5c6] = 0;
  if (param_1[0x4e8] != 0) {
    FUN_00a8d330(param_1 + 0x10,param_1 + 0x5b0);
    param_1[0x4e8] = 0;
  }
  iVar4 = FUN_00aa09c0(pfVar5,0x3fc00000,0);
  if ((iVar4 != 0) && (iVar4 = FUN_00a8d380(), iVar4 != 0)) {
    param_1[0x5c6] = 1;
  }
  if ((param_1[0x376] & 0x8000U) == 0) {
    iVar4 = FUN_00a979d0();
    if (iVar4 == 0) {
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      param_1[0x659] = iVar4;
      if (iVar4 != 0) {
        param_1[0x376] = param_1[0x376] | 0x8000;
      }
    }
  }
  else {
    iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
    if (((param_1[0x659] != 0) && (iVar4 != 0)) &&
       (*(int *)(param_1[0x659] + 0xc) != *(int *)(iVar4 + 0xc))) {
      param_1[0x4e8] = 1;
      param_1[0x376] = param_1[0x376] & 0xffff7fff;
    }
  }
  FUN_00a979f0(&local_2c);
  *pfVar5 = local_2c;
  param_1[0x5b5] = local_28;
  param_1[0x5b6] = local_24;
  param_1[0x5b7] = 0x3f800000;
  if (param_1[0x63c] == 0) {
    if (param_1[0x5c6] != 0) {
      FUN_00a8e880(&local_20);
      return;
    }
  }
  else {
    bVar3 = false;
    iVar4 = FUN_00a8d3d0(6);
    if ((iVar4 != 0) &&
       (bVar3 = true,
       ((float)param_1[0x10] - local_20) * ((float)param_1[0x10] - local_20) +
       ((float)param_1[0x11] - local_1c) * ((float)param_1[0x11] - local_1c) +
       ((float)param_1[0x12] - local_18) * ((float)param_1[0x12] - local_18) <
       ((float)param_1[0x11] - (float)param_1[0x5b5]) *
       ((float)param_1[0x11] - (float)param_1[0x5b5]) +
       ((float)param_1[0x10] - *pfVar5) * ((float)param_1[0x10] - *pfVar5) +
       ((float)param_1[0x12] - (float)param_1[0x5b6]) *
       ((float)param_1[0x12] - (float)param_1[0x5b6]))) {
      bVar3 = false;
    }
    if (param_1[0x648] != 0) {
      bVar3 = true;
    }
    fVar1 = (float)param_1[0x2a3];
    if ((NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) && (!bVar3)) goto LAB_00b401f9;
  }
  local_20 = *pfVar5;
  local_1c = (float)param_1[0x5b5];
  local_18 = (float)param_1[0x5b6];
  local_14 = param_1[0x5b7];
  param_1[0x375] = param_1[0x375] & 0xffbfffff;
LAB_00b401f9:
  FUN_00a8e880(&local_20);
  return;
}

// 00B403F0  Em0010::vf268  size=1057  [class]
undefined4 __thiscall
Em0010::vf268(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_1[0x139] != 0) && ((param_1[0x375] & 0x100U) == 0)) {
switchD_00b40447_caseD_3:
    return 0;
  }
  local_20 = param_4[8];
  local_1c = param_4[9];
  local_18 = param_4[10];
  local_14 = 0x3f800000;
  switch(*param_4) {
  case 1:
    FUN_00a883f0(2,0,&local_20);
    return 1;
  case 2:
    FUN_00a883f0(4,0,&local_20);
    return 1;
  default:
    goto switchD_00b40447_caseD_3;
  case 4:
    param_1[0x5ac] = (int)((float)(int)(short)param_1[0x2ad] * 45.0 + 10.0);
    return 1;
  case 9:
    param_1[0x2fa] = 0;
    return 1;
  case 10:
    iVar2 = param_1[0x5c4];
    if (iVar2 == 6) {
      uVar3 = FUN_00b34d30();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        FUN_00b39f00(0xd0001,0,0,0);
        return 1;
      }
    }
    if ((iVar2 == 1) || (iVar2 == 3)) {
      FUN_00a82d70(4,0x44160000);
    }
    if (param_1[0x5c4] == 2) {
      FUN_00a82d70(3,0x44160000);
    }
    FUN_00a82d70(5,0xbf800000);
    FUN_00b39f00(10,0,0,0);
    (**(code **)(*param_1 + 0x314))();
    FUN_00b30b70();
    return 1;
  case 0xf:
    param_1[0x2fa] = 1;
    return 1;
  case 0x15:
    if ((*(byte *)(param_1 + 0x375) & 0x80) != 0) {
      FUN_00ac4710(param_4[0xb]);
      FUN_00a8d710(param_1 + 0x10);
      param_1[0x2c2] = param_4[0xb];
      return 1;
    }
    FUN_00aa0ba0(param_4[0xb],param_1[0x2e7]);
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x375] = param_1[0x375] | 0x80;
    param_1[0x2c2] = param_4[0xb];
    return 1;
  case 0x16:
    uVar4 = 9;
    break;
  case 0x17:
    uVar4 = 0x3000b;
    break;
  case 0x18:
    uVar4 = 0x120003;
    break;
  case 0x19:
    uVar4 = 0x120002;
    break;
  case 0x1a:
    param_1[0x375] = param_1[0x375] & 0xfffffeff;
    param_1[0x139] = 1;
    FUN_00b39f00(0xb0002,0,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00b30b70();
    return 1;
  case 0x1c:
    param_1[0x377] = param_1[0x377] & 0xffffefff;
    param_1[0x376] = param_1[0x376] & 0xfffbffff;
    iVar2 = param_1[0x4f7];
    if ((iVar2 == 1) || (iVar2 == 7)) {
      iVar1 = param_1[0x4f8];
      if (iVar1 == 0) {
        param_1[0x128] = 0;
      }
      if (iVar1 == 2) {
        param_1[0x128] = 3;
      }
      if (iVar1 == 3) {
        param_1[0x128] = 4;
      }
    }
    if (iVar2 == 2) {
      if (param_1[0x4f8] == 0) {
        param_1[0x128] = 1;
      }
      if (param_1[0x4f8] == 1) {
        param_1[0x128] = 6;
      }
    }
    if (iVar2 == 3) {
      iVar2 = param_1[0x4f8];
      if (iVar2 == 0) {
        param_1[0x128] = 2;
      }
      if (iVar2 == 1) {
        param_1[0x128] = 7;
      }
      if (iVar2 == 7) {
        param_1[0x128] = 7;
      }
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
    param_1[0x376] = param_1[0x376] & 0xfffff7ff;
    param_1[0x1bb] = 1;
    return 1;
  case 0x1e:
    param_1[0x376] = param_1[0x376] | 0x80000000;
    return 1;
  case 0x1f:
    param_1[0x376] = param_1[0x376] & 0x7fffffff;
    return 1;
  case 0x21:
    if (param_1[0x2c2] == -1) {
      return 1;
    }
    FUN_00a8d790(&local_2c);
    param_1[0x5b0] = local_2c;
    param_1[0x5b1] = local_28;
    uVar4 = 7;
    param_1[0x5b2] = local_24;
    param_1[0x5b3] = 0x3f800000;
  }
  FUN_00b39f00(uVar4,0,0,0);
  FUN_00b30b70();
  return 1;
}

// 00B40880  Em0010::vf150  size=337  [class]
void __thiscall Em0010::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return;
  }
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined4 *)(param_1 + 0x1adc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ae0) = 0;
  *(undefined4 *)(param_1 + 0x1ae4) = 0;
  *(undefined4 *)(param_1 + 0x1ae8) = 0;
  if (param_2 == 0x28) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0x29) {
      if (param_2 == 0x24) {
        FUN_00b39f00(0xa000e,0,0,0);
        return;
      }
      if (param_2 == 0x25) {
        FUN_00b30de0();
        if ((DAT_01bea094 & 0x20000) == 0) {
          FUN_00b39f00(0xb0005,0,0,0);
          return;
        }
        FUN_00b39f00(0xb0008,0,0,0);
        return;
      }
      if (param_2 == 0x26) {
        FUN_00b30de0();
        if ((DAT_01bea094 & 0x20000) == 0) {
          FUN_00b39f00(0xb0006,0,0,0);
          return;
        }
        FUN_00b39f00(0xb0009,0,0,0);
        return;
      }
      if (param_2 != 0x27) {
        return;
      }
      FUN_00b39f00(0xb0007,0,0,0);
      FUN_00b30de0();
      return;
    }
    uVar1 = 6;
  }
  FUN_00b39f00(0xa0022,uVar1,0,0);
  FUN_00b30de0();
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x8000000;
  return;
}

// 00B409E0  FUN_00b409e0  size=260  [between]
void __fastcall FUN_00b409e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x375] = param_1[0x375] | 0x800002;
  if (param_1[0x187] == 0) {
    param_1[0x375] = param_1[0x375] | 0x4000;
    FUN_00aa4080(0x2d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a88b50(4,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  param_1[0x5d4] = param_1[0x14];
  param_1[0x5d5] = param_1[0x15];
  param_1[0x5d6] = param_1[0x16];
  param_1[0x5d7] = param_1[0x17];
  if (param_1[0x5c4] == 5) {
    uVar2 = 0x23;
  }
  else {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x376] & 0x40000U) != 0) goto LAB_00b40ad7;
    uVar2 = 0x13;
  }
  FUN_00b39f00(uVar2,0,0,0);
LAB_00b40ad7:
                    /* WARNING: Could not recover jumptable at 0x00b40ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

// 00B40AF0  FUN_00b40af0  size=713  [between]
void __fastcall FUN_00b40af0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  uVar4 = 1099;
  if (param_1[0x4f7] == 1) {
    uVar4 = 4;
  }
  param_1[0x375] = param_1[0x375] | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x375] = param_1[0x375] | 0x4000;
    FUN_00aa4080(uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x5ac];
    param_1[0x5ac] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar4 = 0x44c;
    if (param_1[0x4f7] == 1) {
      uVar4 = 0x24e;
    }
    FUN_00aa4080(uVar4,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x314);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    param_1[0x248] = 0x41200000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (iVar3 = FUN_008e29f0(), iVar3 == 0)) {
      if (param_1[0x4f7] == 1) {
        uVar4 = 0x13;
      }
      else {
        uVar4 = 0x20005;
      }
      FUN_00b39f00(uVar4,0,0,0);
      (**(code **)(*param_1 + 0x314))();
      if (param_1[0x5c4] == 1) {
        FUN_00a82d70(4,0x44160000);
        FUN_00a82d70(2,0x44160000);
      }
      if (param_1[0x5c4] == 2) {
        FUN_00a82d70(3,0x44160000);
        FUN_00a82d70(2,0x44160000);
      }
      if (param_1[0x1d9] != 0) {
        uVar4 = FUN_009f8b40();
        FUN_008e26e0(uVar4);
        CharacterControl::setRadius(0x3e99999a);
        CharacterControl::setHeight(0x3fc00000);
        FUN_008e1c70();
      }
      FUN_0040e950();
      iStack_48 = param_1[0x2e7];
      uStack_10 = 0;
      iStack_44 = (int)*(short *)((int)param_1 + 0xab2);
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0xffffffff;
      uStack_54 = 0;
      uStack_38 = 0xffffffff;
      uStack_50 = 0;
      uStack_2c = 0;
      uStack_34 = 1;
      uStack_30 = 5;
      FUN_00c5e350(param_1,&uStack_54,&uStack_30);
      return;
    }
  }
  return;
}

// 00B40DD0  FUN_00b40dd0  size=760  [between]
void __fastcall FUN_00b40dd0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x375] = param_1[0x375] | 0x800002;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x375] = param_1[0x375] | 0x4000;
    FUN_00aa4080(0x2d6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a88b50(4,0);
    (**(code **)(*param_1 + 0x358))(0xff,param_1 + 0x378);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x318))();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x314);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar1)();
    }
    iVar3 = FUN_00a959f0(0);
    if (40.0 < (float)iVar3) {
                    /* WARNING: Could not recover jumptable at 0x00b40edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x2d7,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a88b50(4,0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x225] = (int)((float)param_1[0x225] - (float)param_1[0x244] * 0.02);
    return;
  case 4:
    FUN_00aa4080(0x2d8,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a88b50(4,0);
    FUN_00eaa6e0(0x41200000,0);
    if (param_1[300] == 0x20170) {
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffe;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 4;
      }
    }
    else {
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
      }
    }
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x5d4] = param_1[0x14];
      param_1[0x5d5] = param_1[0x15];
      param_1[0x5d6] = param_1[0x16];
      param_1[0x5d7] = param_1[0x17];
      if (param_1[0x5c4] == 5) {
        uVar4 = 0x23;
      }
      else {
        uVar4 = 0x13;
      }
      FUN_00b39f00(uVar4,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00b410c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  }
  return;
}

// 00B410E0  FUN_00b410e0  size=669  [between]
void __fastcall FUN_00b410e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    if ((((float)param_1[0x422] < 0.0) &&
        ((((iVar3 = FUN_00c15850(), iVar3 != 0 && (param_1[0x63a] != 0)) && (param_1[0x63c] != 0))
         && ((param_1[0x4f7] == 1 && (param_1[0x4ee] != 0)))))) && ((float)param_1[0x2a3] < 25.0)) {
      FUN_00b39f00(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00b39f00(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00b39f00(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10005,0,0,0);
        }
      }
      FUN_00c27260(param_1[0x639]);
      return;
    }
    if (param_1[0x4f1] == 0) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b41359;
      }
    }
    else if (param_1[0x63c] != 0) {
      param_1[0x376] = param_1[0x376] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x4f2] == 0) {
        return;
      }
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00b39f00(sVar2 + 0x1c,uVar4,uVar5,uVar6);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 != 1) {
        return;
      }
      FUN_00b39f00(0x110001,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00b39f00(0x11,0,0,0);
      }
      else {
        FUN_00b39f00(0x10,0,0,0);
      }
    }
  }
LAB_00b41359:
  if (16.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4137b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B41380  FUN_00b41380  size=658  [between]
void __fastcall FUN_00b41380(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x5a3] = 1;
  (*pcVar1)();
  param_1[0x375] = param_1[0x375] | 0x800002;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x375] = param_1[0x375] | 0x4000;
    FUN_00aa4080(0x4bd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e6c60(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0xc);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x318))();
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x4be,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e6c60(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d088889);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x226] = 0;
      return;
    }
    break;
  case 4:
    uVar2 = 0x4bf;
    if ((param_1[299] == 9) && (param_1[0x4f7] == 1)) {
      uVar2 = 0x4c0;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x30);
    if (iVar3 != 0) {
      FUN_00b3a190();
      param_1[0x3e9] = 0;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if ((param_1[0x5c4] != 4) && ((*(byte *)(param_1 + 0x12a) & 4) == 0)) {
        if (param_1[0x5c4] != 5) {
          if (param_1[299] == 9) {
            fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
            param_1[0x674] = (int)(float)(fVar4 * (float10)60.0);
          }
                    /* WARNING: Could not recover jumptable at 0x00b415dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        FUN_00b39f00(0x23,0,0,0);
        fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
        param_1[0x674] = (int)(float)(fVar4 * (float10)60.0);
        return;
      }
      if (param_1[0x2c2] == -1) {
                    /* WARNING: Could not recover jumptable at 0x00b4160d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00b39f00(0,0,0,0);
      param_1[0x375] = param_1[0x375] | 0x80;
      return;
    }
  }
  return;
}

// 00B41630  FUN_00b41630  size=160  [between]
void __fastcall FUN_00b41630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x1b18) != 0) {
      *(undefined4 *)(param_1 + 0x1aec) = 0;
      *(undefined4 *)(param_1 + 0x1af0) = 1;
      FUN_00b39f00(0x1000a,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xfa4) != 0)) {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  return;
}

// 00B416D0  FUN_00b416d0  size=514  [between]
void __fastcall FUN_00b416d0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  param_1[0x5a3] = 1;
  uVar4 = 0x1ff;
  if (param_1[300] == 0x20170) {
    uVar4 = 0x525;
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
LAB_00b41723:
    if (param_1[0x4f7] == 2) {
      uVar4 = 0x3d;
    }
    if ((param_1[0x377] & 0x8000U) != 0) {
      uVar4 = 0x468;
    }
    FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    if (iVar3 == 1) goto LAB_00b41723;
    if (iVar3 != 2) {
      return;
    }
  }
  local_2c = (float)param_1[0x5d4];
  local_28 = (float)param_1[0x5d5];
  local_24 = (float)param_1[0x5d6];
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] == 0) {
    param_1[0x5b0] = param_1[0x5d4];
    param_1[0x5b1] = param_1[0x5d5];
    param_1[0x5b2] = param_1[0x5d6];
    param_1[0x5b3] = param_1[0x5d7];
    fVar1 = ((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
            ((float)param_1[0x11] - local_28) * ((float)param_1[0x11] - local_28) +
            ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c);
    if (fVar1 < 2.25 == (fVar1 == 2.25)) goto LAB_00b4185d;
  }
  else {
    cVar2 = FUN_00c9db20(0);
    iVar3 = FUN_00a97e60(0x3f800000,0);
    if ((iVar3 != 0) && (cVar2 != '\0')) {
      FUN_00b39f00(1,0,0,0);
    }
    iVar3 = FUN_00a85630();
    if (iVar3 != 1) goto LAB_00b4185d;
  }
  FUN_00b39f00(1,0,0,0);
LAB_00b4185d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 00B418E0  FUN_00b418e0  size=68  [between]
void __fastcall FUN_00b418e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
    }
  }
  return;
}

// 00B41930  FUN_00b41930  size=471  [between]
void __fastcall FUN_00b41930(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_c [3];
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  local_c[1] = 0x2e3;
  local_c[2] = 0x2e5;
  local_c[0] = 0x2e7;
  uVar7 = 5;
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0x13dc) == 2) {
      sVar4 = FUN_00dde2d0(0,1);
      uVar7 = local_c[sVar4 + 1];
      if (*(int *)(param_1 + 0x628) != 2) {
        uVar6 = FUN_00dde2a0(0,100);
        if ((uVar6 & 0xffff) % 0x14 == 0) {
          uVar7 = 0x2e4;
        }
      }
      iVar5 = FUN_00a82d50();
      if (iVar5 == 2) {
        sVar4 = FUN_00dde2d0(0,0);
        uVar7 = local_c[sVar4];
      }
    }
    if ((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) {
      uVar7 = 0x454;
    }
    FUN_00aa4080(uVar7,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x808) == 0) {
        *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_1 + 0x1750);
        *(undefined4 *)(param_1 + 0x16c4) = *(undefined4 *)(param_1 + 0x1754);
        *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_1 + 0x1758);
        *(undefined4 *)(param_1 + 0x16cc) = *(undefined4 *)(param_1 + 0x175c);
        fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x16c0);
        fVar3 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x16c4);
        fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x16c8);
        fVar1 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
        if (fVar1 < 2.25 != (fVar1 == 2.25)) {
          *(undefined4 *)(param_1 + 0x61c) = 0;
          return;
        }
      }
      iVar5 = FUN_00a82e60();
      if (iVar5 != 0) {
        FUN_00b39f00(0,1,0,0);
        return;
      }
      FUN_00b39f00(0xc0005,1,0,0);
      return;
    }
  }
  return;
}

// 00B41B10  FUN_00b41b10  size=156  [between]
void __fastcall FUN_00b41b10(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x187] != 0) && ((*(byte *)(param_1 + 0x375) & 4) != 0)) {
    param_1[0x375] = param_1[0x375] & 0xfffffffb;
    if (param_1[0x654] == 0) {
      iVar1 = FUN_00ac4d60(4);
      if (iVar1 != 0) {
        FUN_00b39f00(0x27,0,0,0);
        param_1[0x6bb] = 10;
        return;
      }
      iVar1 = FUN_00ac4d60(3);
      if (iVar1 != 0) {
        FUN_00b39f00(0x26,0,0,0);
        param_1[0x6bb] = 10;
        return;
      }
    }
    if ((float)param_1[0x2a4] < 10.0) {
      FUN_00a87ba0();
                    /* WARNING: Could not recover jumptable at 0x00b41baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B41BB0  FUN_00b41bb0  size=250  [between]
void __fastcall FUN_00b41bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  else {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
      return;
    }
    iVar1 = FUN_00b2ea70();
    if (iVar1 != 0) {
      FUN_00b39f00(0x120000,0,0,0);
      *(undefined4 *)(param_1 + 0x1adc) = 7;
      return;
    }
    iVar1 = FUN_00b2e920();
    if (iVar1 != 0) {
      FUN_00b39f00(0x120004,0,0,0);
      *(undefined4 *)(param_1 + 0x1adc) = 7;
      return;
    }
    iVar1 = FUN_00b2e9b0();
    if (iVar1 != 0) {
      FUN_00b39f00(0x120001,0,0,0);
      *(undefined4 *)(param_1 + 0x1adc) = 7;
      return;
    }
  }
  if (*(int *)(param_1 + 0x1b18) != 0) {
    *(undefined4 *)(param_1 + 0x1aec) = 7;
    *(undefined4 *)(param_1 + 0x1af0) = 0;
    FUN_00b39f00(0x1000a,0,0,0);
  }
  return;
}

// 00B41CB0  FUN_00b41cb0  size=574  [between]
void __fastcall FUN_00b41cb0(int *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x187];
  param_1[0x5a3] = 1;
  uVar3 = 0x1ff;
  if (iVar1 == 0) {
    iVar1 = param_1[0x4f7];
    param_1[0x4e8] = 1;
    if (iVar1 == 2) {
      uVar3 = 0x3d;
    }
    if ((iVar1 == 3) && (param_1[0x3e9] == 0)) {
      uVar3 = 0x119;
    }
    if ((iVar1 == 5) && (param_1[0x3e9] == 0)) {
      uVar3 = 0x524;
    }
    if ((param_1[0x377] & 0x8000U) != 0) {
      uVar3 = 0x468;
    }
    FUN_00aa4120(uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5c6] = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (ABS((float)param_1[0x25] - (float)param_1[0x5bd]) < 0.05235988) {
      if ((param_1[299] == 0xb) &&
         (((param_1[0x4f7] == 2 || (param_1[0x4f7] == 3)) &&
          (param_1[0x376] = param_1[0x376] | 0x400000, param_1[0x3e9] != 0)))) {
        FUN_00b39f00(0x23,0,0,0);
      }
      else {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    FUN_00a8e960(param_1[0x5bd]);
    uVar3 = 0x3e860a92;
    goto LAB_00b41ec8;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x5c6] != 0) ||
     (fVar2 = ((float)param_1[0x10] - (float)param_1[0x5b0]) *
              ((float)param_1[0x10] - (float)param_1[0x5b0]) +
              ((float)param_1[0x11] - (float)param_1[0x5b1]) *
              ((float)param_1[0x11] - (float)param_1[0x5b1]) +
              ((float)param_1[0x12] - (float)param_1[0x5b2]) *
              ((float)param_1[0x12] - (float)param_1[0x5b2]), fVar2 < 1.0 != (fVar2 == 1.0))) {
    if (param_1[0x2c2] == -1) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if ((param_1[299] == 0xb) && ((param_1[0x4f7] == 2 || (param_1[0x4f7] == 3)))) {
      param_1[0x376] = param_1[0x376] | 0x400000;
      FUN_00b39f00(0x23,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  uVar3 = 0x3d0efa35;
LAB_00b41ec8:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,uVar3,0);
  return;
}

// 00B41EF0  FUN_00b41ef0  size=68  [between]
void __fastcall FUN_00b41ef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
    }
  }
  return;
}

// 00B41F40  FUN_00b41f40  size=275  [between]
void __fastcall FUN_00b41f40(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  local_4 = 0x2e7;
  uVar3 = 0x2e3;
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar2 = FUN_00a82d50();
    if (iVar2 == 2) {
      sVar1 = FUN_00dde2d0(0,0);
      uVar3 = (&local_4)[sVar1];
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      iVar2 = FUN_00a82d50();
      if (iVar2 < 2) {
        *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_1 + 0x1750);
        *(undefined4 *)(param_1 + 0x16c4) = *(undefined4 *)(param_1 + 0x1754);
        *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_1 + 0x1758);
        *(undefined4 *)(param_1 + 0x16cc) = *(undefined4 *)(param_1 + 0x175c);
        FUN_00b39f00(7,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B42060  FUN_00b42060  size=68  [between]
void __fastcall FUN_00b42060(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
    }
  }
  return;
}

// 00B420B0  FUN_00b420b0  size=200  [between]
void __fastcall FUN_00b420b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2e9,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      iVar1 = FUN_00a85630();
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x61c) = 0;
        return;
      }
      iVar1 = FUN_00a82e70();
      if (iVar1 != 0) {
        FUN_00b39f00(2,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B42180  FUN_00b42180  size=170  [between]
void __fastcall FUN_00b42180(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    if ((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    if (*(int *)(param_1 + 0x61c) == 0) {
      return;
    }
  }
  iVar1 = FUN_00b2ea70();
  if (iVar1 != 0) {
    FUN_00b39f00(0x120000,0,0,0);
    *(undefined4 *)(param_1 + 0x1adc) = 4;
    return;
  }
  iVar1 = FUN_00b2e920();
  if (iVar1 == 0) {
    iVar1 = FUN_00b2e9b0();
    if (iVar1 != 0) {
      FUN_00b39f00(0x120001,0,0,0);
      *(undefined4 *)(param_1 + 0x1adc) = 4;
    }
    return;
  }
  FUN_00b39f00(0x120004,0,0,0);
  *(undefined4 *)(param_1 + 0x1adc) = 4;
  return;
}

// 00B42230  FUN_00b42230  size=867  [between]
void __fastcall FUN_00b42230(int *param_1)

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
  byte bVar16;
  float *pfVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  undefined4 local_50 [8];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  local_50[4] = 0x8a;
  local_50[5] = 0x8a;
  local_50[6] = 0x8a;
  local_50[7] = 0x8a;
  local_50[0] = 0x28;
  local_50[1] = 0x29;
  local_50[2] = 0x2a;
  local_50[3] = 0x2b;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x4e8] = 1;
    fVar1 = (float)param_1[0x5b0];
    fVar2 = (float)param_1[0x10];
    fVar3 = (float)param_1[0x5b1];
    fVar4 = (float)param_1[0x11];
    fVar5 = (float)param_1[0x5b2];
    fVar6 = (float)param_1[0x12];
    pfVar17 = (float *)FUN_00a925a0(local_30);
    fVar7 = pfVar17[1];
    fVar8 = *pfVar17;
    fVar9 = pfVar17[2];
    fVar10 = (float)param_1[0x5b0];
    fVar11 = (float)param_1[0x10];
    fVar12 = (float)param_1[0x5b1];
    fVar13 = (float)param_1[0x11];
    fVar14 = (float)param_1[0x5b2];
    fVar15 = (float)param_1[0x12];
    pfVar17 = (float *)FUN_00a92640(local_20);
    fVar10 = pfVar17[2] * (fVar14 - fVar15) +
             *pfVar17 * (fVar10 - fVar11) + pfVar17[1] * (fVar12 - fVar13);
    if (fVar10 <= 0.5) {
      if (-0.5 <= fVar10) {
        if (fVar9 * (fVar5 - fVar6) + (fVar1 - fVar2) * fVar8 + fVar7 * (fVar3 - fVar4) <= 0.0) {
          iVar18 = 3;
        }
        else {
          iVar18 = 0;
        }
      }
      else {
        iVar18 = 2;
      }
    }
    else {
      iVar18 = 1;
    }
    uVar19 = local_50[iVar18];
    if (param_1[0x4f7] == 2) {
      uVar19 = local_50[iVar18 + 4];
    }
    FUN_00aa4080(uVar19,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5c6] = 0;
    bVar16 = FUN_00dde2a0(1,1000);
    if ((bVar16 & 1) == 0) {
      pcVar21 = "em0010_vo_line_nortice1";
    }
    else {
      pcVar21 = "em0010_vo_line_action_nortice";
    }
    FUN_00e5e0c0(pcVar21,param_1,0xffffffff,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar18 = FUN_00a94ce0(0);
    if (iVar18 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 2:
    uVar19 = 0x2c;
    if (param_1[0x4f7] == 2) {
      uVar19 = 0x8e;
    }
    if ((param_1[0x377] & 0x8000U) != 0) {
      uVar19 = 0x463;
    }
    FUN_00aa4080(uVar19,0,0x3d4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x5c6] != 0) ||
       (fVar1 = ((float)param_1[0x10] - (float)param_1[0x5b0]) *
                ((float)param_1[0x10] - (float)param_1[0x5b0]) +
                ((float)param_1[0x11] - (float)param_1[0x5b1]) *
                ((float)param_1[0x11] - (float)param_1[0x5b1]) +
                ((float)param_1[0x12] - (float)param_1[0x5b2]) *
                ((float)param_1[0x12] - (float)param_1[0x5b2]), fVar1 < 1.0 != (fVar1 == 1.0))) {
      param_1[0x187] = param_1[0x187] + 1;
      uVar20 = param_1[0x377] & 0x8000;
LAB_00b424e5:
      if (uVar20 != 0) {
        FUN_00b39f00(5,0,0,0);
      }
    }
    break;
  case 4:
    uVar19 = 0x2d;
    if (param_1[0x4f7] == 2) {
      uVar19 = 0x8f;
    }
    FUN_00aa4080(uVar19,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar20 = FUN_00a94ce0(0);
    goto LAB_00b424e5;
  default:
    break;
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00B425B0  FUN_00b425b0  size=309  [between]
void __fastcall FUN_00b425b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    FUN_00a81330();
    iVar6 = FUN_00a7c8a0();
    if ((((iVar6 != 0) && (iVar2 = *(int *)(param_1 + 0x61c), iVar2 != 0)) && (iVar2 < 2)) &&
       ((*(float *)(param_1 + 0x1b64) < 0.01 && (*(int *)(param_1 + 0x1960) != 0)))) {
      fVar3 = *(float *)(param_1 + 0x40) - *(float *)(iVar6 + 0x40);
      fVar5 = *(float *)(param_1 + 0x44) - *(float *)(iVar6 + 0x44);
      fVar4 = *(float *)(param_1 + 0x48) - *(float *)(iVar6 + 0x48);
      fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
      if (fVar3 < 4.0 != (fVar3 == 4.0)) {
        *(int *)(param_1 + 0x61c) = iVar2 + 1;
        *(undefined4 *)(param_1 + 0x940) = 1;
        return;
      }
      if (*(int *)(param_1 + 0xb08) == -1) {
        *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_1 + 0x1750);
        *(undefined4 *)(param_1 + 0x16c4) = *(undefined4 *)(param_1 + 0x1754);
        *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_1 + 0x1758);
        uVar1 = *(undefined4 *)(param_1 + 0x175c);
      }
      else {
        FUN_00a8d790(&local_c);
        *(undefined4 *)(param_1 + 0x16c0) = local_c;
        *(undefined4 *)(param_1 + 0x16c4) = local_8;
        *(undefined4 *)(param_1 + 0x16c8) = local_4;
        uVar1 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x16cc) = uVar1;
      FUN_00b39f00(7,0,0,0);
    }
  }
  return;
}

// 00B426F0  FUN_00b426f0  size=1114  [between]
void __fastcall FUN_00b426f0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    iVar6 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar4 = param_1[0x4f7];
    param_1[0x187] = 1;
    uVar5 = 0x1ff;
    if (iVar4 == 2) {
      uVar5 = 0x3d;
    }
    if ((iVar4 == 3) && (param_1[0x3e9] == 0)) {
      uVar5 = 0x119;
    }
    if ((iVar4 == 5) && (param_1[0x3e9] == 0)) {
      uVar5 = 0x524;
    }
    FUN_00aa4080(uVar5,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (iVar6 != 0) {
      FUN_00a8e880((float *)(iVar6 + 0x40));
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
      fVar1 = (float)param_1[0x10] - *(float *)(iVar6 + 0x40);
      fVar3 = (float)param_1[0x11] - *(float *)(iVar6 + 0x44);
      fVar2 = (float)param_1[0x12] - *(float *)(iVar6 + 0x48);
      fVar1 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
      if (fVar1 < 1.0 == (fVar1 == 1.0)) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
      return;
    }
    if (param_1[0x2c2] == -1) {
LAB_00b42885:
      param_1[0x5b0] = param_1[0x5d4];
      param_1[0x5b1] = param_1[0x5d5];
      param_1[0x5b2] = param_1[0x5d6];
      iVar4 = param_1[0x5d7];
    }
    else {
      FUN_00a8d790(&local_c);
      param_1[0x5b0] = local_c;
      param_1[0x5b1] = local_8;
      param_1[0x5b2] = local_4;
      iVar4 = 0x3f800000;
    }
LAB_00b428af:
    param_1[0x5b3] = iVar4;
    FUN_00b39f00(7,0,0,0);
    return;
  case 2:
    uVar5 = 0x30d;
    if (param_1[0x250] != 0) {
      uVar5 = 0x312;
    }
    FUN_00aa4080(uVar5,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    if (iVar6 != 0) {
      FUN_00a8e880(iVar6 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
    }
    break;
  case 4:
    param_1[0x187] = 5;
    uVar5 = 0x30e;
    if (param_1[0x250] != 0) {
      uVar5 = 0x313;
    }
    FUN_00aa4080(uVar5,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    break;
  case 5:
    break;
  case 6:
    param_1[0x187] = 7;
    uVar5 = 0x30f;
    if (param_1[0x250] != 0) {
      uVar5 = 0x314;
    }
    FUN_00aa4080(uVar5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x44e10000;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 <= fVar1 - (float)param_1[0x244]) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    goto LAB_00b42983;
  case 8:
    param_1[0x187] = 9;
    uVar5 = 0x310;
    if (param_1[0x250] != 0) {
      uVar5 = 0x315;
    }
    FUN_00aa4080(uVar5,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    if (param_1[0x2c2] != -1) {
      FUN_00a8d790(&local_c);
      param_1[0x5b0] = local_c;
      param_1[0x5b1] = local_8;
      param_1[0x5b2] = local_4;
      iVar4 = 0x3f800000;
      goto LAB_00b428af;
    }
    goto LAB_00b42885;
  default:
    goto switchD_00b4272e_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
switchD_00b4272e_default:
    return;
  }
LAB_00b42983:
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00B42B80  FUN_00b42b80  size=159  [between]
void __fastcall FUN_00b42b80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00b35500();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00b39f00(6,0,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x13b8) != 0) && (0 < *(int *)(param_1 + 0x61c))) {
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00b39f00(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xfa4) != 0)) {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  return;
}

// 00B42C20  FUN_00b42c20  size=243  [between]
void __fastcall FUN_00b42c20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  iVar1 = FUN_00b35500();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00b39f00(6,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x50);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
  iVar1 = FUN_00a8cac0();
  if (((iVar1 != 3) || ((float)ABS(fVar3) <= 2.3561945)) &&
     ((iVar1 = FUN_00a8cac0(), iVar1 != 3 || (9.0 <= *(float *)(param_1 + 0xa8c))))) {
    iVar1 = FUN_00a82e60();
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xb08) == -1) {
      return;
    }
    FUN_00b39f00(0,0,0,0);
    return;
  }
  FUN_00a8cb60(4);
  return;
}

// 00B42D20  FUN_00b42d20  size=354  [between]
void __fastcall FUN_00b42d20(int *param_1)

{
  float fVar1;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)(short)param_1[0x667],0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0xbe4ccccd;
    D3DXMatrixRotationY(local_50,param_1[0x25]);
    D3DXVec3TransformNormal(param_1 + 0x568,auStack_68,local_58);
    FUN_00eaa6e0(0x3f800000,0);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  else if (param_1[0x187] != 1) goto LAB_00b42e5c;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_00b39f00(0x110001,0,0,0);
    param_1[0x376] = param_1[0x376] | 0x2000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b42e5c:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00B42E90  FUN_00b42e90  size=317  [between]
void __fastcall FUN_00b42e90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x199e),0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000
                 ,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00b34fd0(&DAT_01646524,1);
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00b42faa;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00b39f00(0x10003,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b42faa:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00B42FD0  FUN_00b42fd0  size=445  [between]
void __fastcall FUN_00b42fd0(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)(short)param_1[0x661],0,0x3e99999a,0x3f800000,0,(float)fVar3,fVar4);
    sVar1 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b42fe6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((*(byte *)(param_1 + 0x377) & 0x80) != 0) {
      return;
    }
    iVar2 = param_1[300];
    if ((((iVar2 != 0x20010) && (iVar2 != 0x20140)) && (iVar2 != 0x20142)) && (iVar2 != 0x20144)) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      return;
    }
    iVar2 = FUN_00c15850();
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x2fa] != 0) {
      return;
    }
    FUN_00b39f00(0x10002,0,0,0);
    return;
  }
LAB_00b42fe6:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x63c] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B43190  FUN_00b43190  size=445  [between]
void __fastcall FUN_00b43190(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1986),0,0x3e99999a,0x3f800000,0,(float)fVar3,fVar4
                );
    sVar1 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b431a6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((*(byte *)(param_1 + 0x377) & 0x80) != 0) {
      return;
    }
    iVar2 = param_1[300];
    if ((((iVar2 != 0x20010) && (iVar2 != 0x20140)) && (iVar2 != 0x20142)) && (iVar2 != 0x20144)) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      return;
    }
    iVar2 = FUN_00c15850();
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x2fa] != 0) {
      return;
    }
    FUN_00b39f00(0x10002,0,0,0);
    return;
  }
LAB_00b431a6:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x63c] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B43350  FUN_00b43350  size=154  [between]
void __fastcall FUN_00b43350(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9c94;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && ((*(byte *)(piVar2 + 0x130) & 1) != 0)) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar1 + 0x4c);
      *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
    }
  }
  return;
}

// 00B433F0  FUN_00b433f0  size=154  [between]
void __fastcall FUN_00b433f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9c94;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && ((*(byte *)(piVar2 + 0x130) & 1) != 0)) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar1 + 0x4c);
      *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
    }
  }
  return;
}

// 00B43490  FUN_00b43490  size=154  [between]
void __fastcall FUN_00b43490(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9c94;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c94);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && ((*(byte *)(piVar2 + 0x130) & 1) != 0)) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar1 + 0x4c);
      *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
    }
  }
  return;
}

// 00B43530  FUN_00b43530  size=268  [between]
undefined4 __fastcall FUN_00b43530(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x13dc) == 1)) &&
      (*(int *)(param_1 + 0x13b8) != 0)) &&
     ((*(int *)(param_1 + 0x4b0) == 0x20150 || (*(int *)(param_1 + 0x4b0) == 0x20152)))) {
    if ((*(float *)(param_1 + 0xa8c) < 36.0) &&
       ((*(float *)(param_1 + 0xaa0) < 1.0471976 && (*(int *)(param_1 + 0x18e8) != 0)))) {
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 == 0) {
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00b39f00(sVar1 + 0x10010,uVar2,uVar3,uVar4);
        return 1;
      }
    }
    if (((*(int *)(param_1 + 0x1084) != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 0;
      sVar1 = FUN_00dde2d0(0,3);
      FUN_00b39f00(sVar1 + 0x10010,uVar2,uVar3,uVar4);
      return 1;
    }
  }
  return 0;
}

// 00B43640  FUN_00b43640  size=518  [between]
void __fastcall FUN_00b43640(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x50e,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3e32b8c2,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x318))();
    FUN_00aa4080(0x50f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0x510,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x1f6] != 0) {
      FUN_00c70800();
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (iVar1 = FUN_00b3b110(), iVar1 == 0)) {
      if (param_1[0x6b7] == -1) {
                    /* WARNING: Could not recover jumptable at 0x00b43842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00b39f00(param_1[0x6b7],0,0,0);
      return;
    }
  }
  return;
}

// 00B43870  FUN_00b43870  size=1246  [between]
void __fastcall FUN_00b43870(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float afStack_20 [7];
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x186] == 0x120002) {
      iVar2 = FUN_00d46690((char)param_1[0x6ac]);
      if (iVar2 == 0) {
        FUN_009f8ea0(&iStack_2c,10,param_1[300],0);
        FUN_00dd5650(&DAT_0163d460,&iStack_2c,param_1[0x6ac]);
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00a5dcc0(iVar2);
        param_1[0x249] = 0;
        param_1[0x24a] = 0x3e19999a;
      }
    }
    FUN_00aa4080(0x2d6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 == 0) {
      if (param_1[0x186] == 0x120002) {
        fVar3 = (float10)FUN_00a581b0(&iStack_2c,param_1[0x24a],param_1[0x249]);
        param_1[0x249] = (int)(float)fVar3;
        param_1[0x14] = iStack_2c;
        param_1[0x15] = iStack_28;
        param_1[0x16] = iStack_24;
        FUN_00a585a0(afStack_20,0x3e800000,(float)fVar3);
        fVar3 = (float10)fpatan((float10)afStack_20[0],(float10)afStack_20[2]);
        param_1[0x25] = (int)(float)fVar3;
      }
    }
    else {
      (**(code **)(*param_1 + 0x318))();
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x2d7,0,0x3d4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x186] == 0x120002) {
      fVar3 = (float10)FUN_00a581b0(&iStack_2c,param_1[0x24a],param_1[0x249]);
      param_1[0x249] = (int)(float)fVar3;
      param_1[0x14] = iStack_2c;
      param_1[0x15] = iStack_28;
      param_1[0x16] = iStack_24;
      FUN_00a585a0(afStack_20,0x3e800000,(float)fVar3);
      fVar3 = (float10)fpatan((float10)afStack_20[0],(float10)afStack_20[2]);
      param_1[0x25] = (int)(float)fVar3;
      iVar2 = FUN_00a54a60(param_1[0x249]);
      if (iVar2 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      afStack_20[0] = 0.0;
      afStack_20[1] = 0.0;
      afStack_20[2] = 0.06;
      D3DXVec3TransformNormal(afStack_20,afStack_20,param_1 + 4);
      param_1[0x224] = (int)afStack_20[0];
      param_1[0x226] = (int)afStack_20[2];
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x224] = 0;
      param_1[0x226] = 0;
    }
    break;
  case 4:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0x2d8,0,0x3d4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1f6] != 0) {
      FUN_00c70800();
    }
    if (param_1[300] == 0x20170) {
      iVar2 = FUN_00a92f90();
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffe;
      }
      iVar2 = FUN_00a92f90();
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 4;
        param_1[0x187] = param_1[0x187] + 1;
        goto LAB_00b43c5e;
      }
    }
    else {
      iVar2 = FUN_00a92f90();
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 1;
      }
      iVar2 = FUN_00a92f90();
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b43c5e;
  case 5:
LAB_00b43c5e:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (iVar2 = FUN_00b3b110(), iVar2 == 0)) {
      if (param_1[0x186] == 0x120002) {
        param_1[0x5d4] = param_1[0x10];
        param_1[0x5d5] = param_1[0x11];
        param_1[0x5d6] = param_1[0x12];
        param_1[0x5d7] = param_1[0x13];
      }
      if (param_1[0x6b7] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00b39f00(param_1[0x6b7],0,0,0);
      }
    }
    break;
  default:
    break;
  }
  if (param_1[0x186] == 0x120001) {
    FUN_00a8e880(param_1 + 0x690);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
  }
  return;
}

// 00B43D70  FUN_00b43d70  size=1091  [between]
void __fastcall FUN_00b43d70(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    fVar1 = (float)param_1[0x691] - (float)param_1[0x11];
    if (NAN(fVar1) || 7.0 < fVar1 == (fVar1 == 7.0)) {
      if (3.0 < fVar1) {
        fVar1 = (fVar1 - 3.0) * 0.25;
      }
      else {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
    param_1[0x248] = (int)fVar1;
    param_1[0x250] = 0;
    iVar3 = FUN_00ac4d60(8);
    if (iVar3 != 0) {
      param_1[0x250] = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00aa4080(0x517,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8e880(param_1 + 0x690);
      return;
    }
    break;
  case 3:
    FUN_00a9f4c0("JUMPUP",0x3e2aaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x518,0x3e2aaaab,0x8080000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x51d,0x3e2aaaab,0x8080000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x250] == 1) {
      param_1[600] = (int)((float)param_1[0x690] - (float)param_1[0x10]);
      param_1[0x259] = (int)((float)param_1[0x691] - (float)param_1[0x11]);
      param_1[0x25a] = (int)((float)param_1[0x692] - (float)param_1[0x12]);
      param_1[0x25b] = (int)((float)param_1[0x693] - (float)param_1[0x13]);
      param_1[0x259] = 0;
      param_1[600] = (int)((float)param_1[600] * 0.02);
      param_1[0x259] = (int)((float)param_1[0x259] * 0.02);
      param_1[0x25a] = (int)((float)param_1[0x25a] * 0.02);
      param_1[0x25b] = (int)((float)param_1[0x25b] * 0.02);
    }
    goto LAB_00b43f6c;
  case 4:
LAB_00b43f6c:
    (**(code **)(*param_1 + 0x318))();
    FUN_00a947e0(0,0,param_1[0x248],0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94d60("JUMPUP");
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x250] != 0) {
      param_1[0x14] = (int)((float)param_1[600] + (float)param_1[0x14]);
      param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
      FUN_00a8e880(param_1 + 0x690);
      return;
    }
    param_1[0x14] =
         (int)(((float)param_1[0x690] - (float)param_1[0x10]) * 0.025 + (float)param_1[0x14]);
    param_1[0x16] =
         (int)(((float)param_1[0x692] - (float)param_1[0x12]) * 0.025 + (float)param_1[0x16]);
    FUN_00a8e880(param_1 + 0x690);
    return;
  case 5:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] == 0) {
      fVar1 = ((float)param_1[0x692] - (float)param_1[0x12]) * 0.025;
      param_1[0x14] =
           (int)(((float)param_1[0x690] - (float)param_1[0x10]) * 0.025 + (float)param_1[0x14]);
    }
    else {
      param_1[0x14] = (int)((float)param_1[600] + (float)param_1[0x14]);
      fVar1 = (float)param_1[0x25a];
    }
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x16] = (int)(fVar1 + (float)param_1[0x16]);
    iVar3 = (*pcVar2)(0x3d888889);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8e880(param_1 + 0x690);
      return;
    }
    break;
  case 6:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0x519,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1f6] != 0) {
      FUN_00c70800();
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b44124;
  case 7:
LAB_00b44124:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_00b3b110(), iVar3 == 0)) {
      if (param_1[0x6b7] == -1) {
        (**(code **)(*param_1 + 0x34c))();
        FUN_00a8e880(param_1 + 0x690);
        return;
      }
      FUN_00b39f00(param_1[0x6b7],0,0,0);
      FUN_00a8e880(param_1 + 0x690);
      return;
    }
  }
  FUN_00a8e880(param_1 + 0x690);
  return;
}

// 00B441E0  FUN_00b441e0  size=362  [between]
void __fastcall FUN_00b441e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00b44319;
  }
  uVar2 = 0x8000000;
  uVar3 = 0x513;
  if ((*(int *)(param_1 + 0x13dc) == 2) || (*(int *)(param_1 + 0x13dc) == 3)) {
    uVar3 = 0x514;
  }
  if (*(int *)(param_1 + 0x4b0) == 0x20170) {
    uVar3 = 0x56e;
  }
  if ((*(uint *)(param_1 + 0xddc) & 0x8000) != 0) {
    uVar3 = 0x465;
  }
  if (*(int *)(param_1 + 0x1744) == 2) {
    uVar3 = 0x37b;
    if (*(int *)(param_1 + 0x4b0) == 0x20170) {
      uVar3 = 0x576;
    }
    if ((*(byte *)(param_1 + 0x1748) & 2) != 0) {
      uVar2 = 0x8000040;
    }
  }
  if (*(int *)(param_1 + 0x1744) == 1) {
    uVar3 = 0x366;
    if (*(int *)(param_1 + 0xdc8) == 8) {
      uVar2 = uVar2 | 0x40;
    }
    else if (*(int *)(param_1 + 0xdc8) != 9) goto LAB_00b44287;
    uVar3 = 0x490;
  }
LAB_00b44287:
  if ((*(uint *)(param_1 + 0xdd8) & 0x20000000) != 0) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xdfffffff;
    iVar1 = FUN_00b333b0();
    if (iVar1 != 0) {
      FUN_00b2bca0(&DAT_0163b604,0);
    }
  }
  FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
  FUN_00b34fd0(&DAT_0163b604,1);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x2000000;
  *(undefined2 *)(param_1 + 0x824) = 1;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
LAB_00b44319:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x25,0,0,0);
  }
  return;
}

// 00B44350  FUN_00b44350  size=483  [between]
void __fastcall FUN_00b44350(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x1b;
    if (param_1[300] == 0x20170) {
      uVar1 = 0x5b2;
    }
    FUN_00aa4080(uVar1,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x228] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar1 = 0x1c;
    if (param_1[300] == 0x20170) {
      uVar1 = 0x5b3;
    }
    FUN_00aa4080(uVar1,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 0x324))();
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    uVar1 = 0x1d;
    if (param_1[300] == 0x20170) {
      uVar1 = 0x5b4;
    }
    FUN_00aa4080(uVar1,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x6bb] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00b39f00(param_1[0x6bb],0,0,0);
        param_1[0x6bb] = -1;
      }
    }
  }
  iVar2 = FUN_00a8c760(0xc);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4452f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 00B44550  FUN_00b44550  size=232  [between]
void __fastcall FUN_00b44550(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x187] == 0) {
    uVar2 = 0x19;
    if ((param_1[0x4f7] == 2) || (param_1[0x4f7] == 3)) {
      uVar2 = 0x92;
    }
    FUN_00aa4080(uVar2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[300] == 0x20170) {
      FUN_00a92f90();
      FUN_00e36b50(0,8,0);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  if (param_1[0x6bb] != -1) {
    FUN_00b39f00(param_1[0x6bb],0,0,0);
    param_1[0x6bb] = -1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b44636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B44640  FUN_00b44640  size=520  [between]
void __fastcall FUN_00b44640(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    uVar1 = 0x1e8;
    if (param_1[0x186] == 0x10005) {
      uVar1 = 499;
    }
    FUN_00aa4080(uVar1,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b447f2;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    if ((((((*(byte *)(param_1 + 0x377) & 0x80) == 0) && (param_1[0x4f7] == 1)) &&
         (param_1[0x4ee] != 0)) && ((param_1[0x2a1] != 0 && (iVar2 = FUN_00c15850(), iVar2 != 0))))
       && ((float)param_1[0x2a3] < 6.25)) {
      if (1.0471976 < (float)param_1[0x2a8]) {
        FUN_00b39f00(0x10001,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_00b39f00(0x10005,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b447f2:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B44850  FUN_00b44850  size=718  [between]
void __fastcall FUN_00b44850(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    sVar2 = (short)param_1[0x669];
    if (param_1[0x186] == 0x10003) {
      sVar2 = *(short *)((int)param_1 + 0x19a2);
      FUN_00b34fd0(&DAT_0163b604,1);
    }
    FUN_00aa4080((int)sVar2,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
    }
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
    param_1[0x248] = 0x3f800000;
    if (param_1[0x2a1] != 0) {
      param_1[0x248] = (int)(SQRT((float)param_1[0x2a3]) * 0.22222222);
      if (SQRT((float)param_1[0x2a3]) * 0.22222222 < 0.2) {
        param_1[0x248] = 0x3e4ccccd;
      }
      if (1.3 < (float)param_1[0x248]) {
        param_1[0x248] = 0x3fa66666;
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00b44ac8;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) && (param_1[0x186] == 0x10003)) {
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((param_1[0x4f7] == 1) && (param_1[0x4ee] != 0)) &&
         ((param_1[0x2a1] != 0 &&
          ((iVar1 = FUN_00c15850(), iVar1 != 0 && ((float)param_1[0x2a3] < 6.25)))))) {
        if ((param_1[0x377] & 0x8000U) == 0) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00b39f00(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            uVar3 = 0x10005;
            goto LAB_00b44aa8;
          }
        }
        else if (1.0471976 < (float)param_1[0x2a8]) {
          uVar3 = 0x70008;
LAB_00b44aa8:
          FUN_00b39f00(uVar3,0,0,0);
        }
      }
    }
  }
  FUN_00ac80a0(param_1[0x248],0x3f800000);
LAB_00b44ac8:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00B44B20  FUN_00b44b20  size=489  [between]
void __fastcall FUN_00b44b20(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f0,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b44cb3;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
    if ((((param_1[0x4f7] == 1) && (param_1[0x4ee] != 0)) && (param_1[0x2a1] != 0)) &&
       ((iVar1 = FUN_00c15850(), iVar1 != 0 && ((float)param_1[0x2a3] < 6.25)))) {
      if (1.0471976 < (float)param_1[0x2a8]) {
        FUN_00b39f00(0x10001,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_00b39f00(0x10005,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b44cb3:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B44D10  FUN_00b44d10  size=359  [between]
void __fastcall FUN_00b44d10(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f8,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b44e2e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a952e0(0,0x42040000);
  if (iVar4 != 0) {
    sVar3 = FUN_00dde2d0(0,1);
    if (sVar3 == 0) {
      uVar6 = 0x40c00000;
      uVar5 = 0;
      uVar2 = 0xbf490fdb;
    }
    else {
      uVar6 = 0x40999999;
      uVar5 = 0x3dd67750;
      uVar2 = 0xbea0d97c;
    }
    FUN_00b37f40(uVar2,uVar5,uVar6,0,0);
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b44e2e:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B44E80  FUN_00b44e80  size=281  [between]
void __fastcall FUN_00b44e80(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x9e,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b44f47;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if ((DAT_01bea094 & 0x20000) == 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    else if (param_1[0x6bb] == -1) {
      FUN_00b39f00(0x20005,0,0,0);
    }
    else {
      FUN_00b39f00(param_1[0x6bb],param_1[0x6bc],0,0);
    }
  }
LAB_00b44f47:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B44FA0  FUN_00b44fa0  size=793  [between]
void __fastcall FUN_00b44fa0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_00b44fbc_caseD_1;
  case 2:
    uVar5 = 0x1f9;
    if ((param_1[0x4f7] == 2) || (param_1[0x4f7] == 3)) {
      uVar5 = 0x9a;
    }
    FUN_00aa4080(uVar5,0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(8);
    if (iVar3 != 0) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        uVar7 = 0x41900000;
        uVar6 = 0;
        uVar5 = 0xbf490fdb;
      }
      else {
        uVar7 = 0x41b66666;
        uVar6 = 0x3dd67750;
        uVar5 = 0xbea0d97c;
      }
      FUN_00b37f40(uVar5,uVar6,uVar7,0,1);
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (param_1[0x1f6] != 0)) && (param_1[0x2a1] != 0)) {
      iVar3 = *(int *)(param_1[0x1f6] + 0x818);
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if (((iVar3 != 0) && (iVar4 != 0)) && (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))) {
LAB_00b4519e:
        (**(code **)(*param_1 + 0x34c))();
        goto switchD_00b44fbc_default;
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x248] = 0x42700000;
    goto switchD_00b44fbc_default;
  case 4:
    FUN_00aa4080((int)(short)param_1[0x65f],0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 <= fVar1 - (float)param_1[0x244]) goto switchD_00b44fbc_default;
    if (param_1[0x63c] == 0) {
      FUN_00b39f00(0x1e,0,0,0);
      goto switchD_00b44fbc_default;
    }
    if (param_1[0x645] != 0) {
      param_1[0x187] = 2;
      goto switchD_00b44fbc_default;
    }
    goto LAB_00b4519e;
  default:
    goto switchD_00b44fbc_default;
  }
  FUN_00aa4080((int)(short)param_1[0x662],0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x42700000;
  FUN_00a8d280();
switchD_00b44fbc_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    if ((param_1[0x1f6] != 0) && (param_1[0x2a1] != 0)) {
      iVar3 = *(int *)(param_1[0x1f6] + 0x818);
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if ((iVar3 != 0) && ((iVar4 != 0 && (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))))) {
        (**(code **)(*param_1 + 0x34c))();
        goto switchD_00b44fbc_default;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00b44fbc_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B452E0  FUN_00b452e0  size=859  [between]
void __fastcall FUN_00b452e0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined *puVar5;
  
  param_1[0x5a3] = 1;
  param_1[0x375] = param_1[0x375] | 0x1000000;
  if (param_1[0x187] == 0) {
    fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
    iVar2 = param_1[300];
    param_1[0x674] = (int)(float)(fVar4 * (float10)60.0);
    if (((((iVar2 == 0x20010) || (iVar2 == 0x20140)) || (iVar2 == 0x20142)) || (iVar2 == 0x20144))
       && (((param_1[0x4f7] == 3 && (param_1[0x4f8] == 1)) && ((float)param_1[0x2a3] <= 25.0)))) {
      FUN_00b2e2d0();
    }
    iVar2 = param_1[300];
    if ((((iVar2 == 0x20010) || (iVar2 == 0x20140)) || ((iVar2 == 0x20142 || (iVar2 == 0x20144))))
       && (((param_1[0x4f7] == 1 && (param_1[0x4f8] == 3)) &&
           (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))))) {
      FUN_00b2e2d0();
    }
    iVar2 = param_1[300];
    iVar3 = 0x4ae;
    if (((iVar2 == 0x20010) || (iVar2 == 0x20140)) ||
       ((iVar2 == 0x20142 || ((iVar2 == 0x20144 || (iVar2 == 0x20160)))))) {
      iVar2 = param_1[0x4f7];
      if (iVar2 == 6) {
        *(undefined1 *)(param_1 + 0x3e4) = 1;
        param_1[999] = 1;
        if (param_1[0x186] == 0x23) {
          iVar3 = 0x269;
          param_1[0x3e5] = 0x422c0000;
          param_1[0x3e6] = 0x422c0000;
        }
        else {
          iVar3 = 0x26b;
          param_1[0x3e5] = 0x42a20000;
          param_1[0x3e6] = 0x42a20000;
        }
      }
      else if ((param_1[0x377] & 0x8000U) == 0) {
        if (iVar2 == 1) {
          *(undefined1 *)(param_1 + 0x3da) = 1;
          param_1[0x3dc] = 1;
          if (param_1[0x186] == 0x23) {
            iVar3 = 0x240;
            param_1[0x3db] = 0x41d00000;
          }
          else {
            param_1[0x3db] = 0x42440000;
          }
        }
        else if (iVar2 == 2) {
          iVar3 = (-(uint)(param_1[0x186] != 0x23) & 0x489) + 0x31;
        }
        else if (iVar2 == 3) {
          iVar3 = 0x4b1;
          FUN_00b3a3a0();
          *(undefined1 *)(param_1 + 0x3de) = 0;
          FUN_00b3a5d0(&DAT_016466f0,0);
        }
      }
      else {
        iVar3 = 0x453;
        param_1[0x3db] = 0x41a00000;
        *(undefined1 *)(param_1 + 0x3da) = 1;
        param_1[0x3dc] = 1;
      }
    }
    if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
      if ((param_1[0x377] & 0x8000U) == 0) {
        if (param_1[0x4f7] == 7) {
          iVar3 = 0x4b4;
          param_1[0x3db] = 0x41980000;
          *(undefined1 *)(param_1 + 0x3da) = 1;
          param_1[0x3dc] = 1;
        }
        else if (param_1[0x4f7] == 3) {
          iVar3 = 0x4b1;
          FUN_00b3a3a0();
          *(undefined1 *)(param_1 + 0x3de) = 0;
          FUN_00b3a5d0(&DAT_016466f0,0);
        }
      }
      else {
        iVar3 = 0x460;
        param_1[0x3db] = 0x41b80000;
        *(undefined1 *)(param_1 + 0x3da) = 1;
        param_1[0x3dc] = 1;
      }
    }
    if (param_1[300] == 0x20170) {
      FUN_00b3a3a0();
      *(undefined1 *)(param_1 + 0x3de) = 0;
      if (param_1[0x186] == 0x23) {
        iVar3 = 0x522;
        puVar5 = &DAT_016466e4;
      }
      else {
        iVar3 = 0x4b7;
        puVar5 = &DAT_016466dc;
      }
      FUN_00b34fd0(puVar5,1);
    }
    FUN_00aa4080(iVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3e9] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b45639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B45640  FUN_00b45640  size=625  [between]
void __fastcall FUN_00b45640(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00b45818;
  }
  iVar2 = *(int *)(param_1 + 0x4b0);
  uVar3 = 0x4af;
  if ((((iVar2 == 0x20010) || (iVar2 == 0x20140)) || (iVar2 == 0x20142)) ||
     ((iVar2 == 0x20144 || (iVar2 == 0x20160)))) {
    iVar2 = *(int *)(param_1 + 0x13dc);
    if (iVar2 == 6) {
      uVar3 = 0x26a;
      *(undefined4 *)(param_1 + 0xf94) = 0x428a0000;
      *(undefined1 *)(param_1 + 0xf90) = 1;
      *(undefined4 *)(param_1 + 0xf9c) = 0;
      *(undefined4 *)(param_1 + 0xf98) = 0x42400000;
    }
    else if ((*(uint *)(param_1 + 0xddc) & 0x8000) == 0) {
      if (iVar2 == 1) {
        *(undefined1 *)(param_1 + 0xf68) = 1;
        *(undefined4 *)(param_1 + 0xf6c) = 0x42c80000;
        *(undefined4 *)(param_1 + 0xf70) = 0;
      }
      else if (iVar2 == 2) {
        uVar3 = 0x33;
      }
      else if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0xf7c) = 0x43510000;
        uVar3 = 0x4b2;
        *(undefined1 *)(param_1 + 0xf78) = 1;
        *(undefined4 *)(param_1 + 0xf80) = 0;
        FUN_00b3a5d0(&DAT_0164670c,0);
      }
    }
    else {
      uVar3 = 0x455;
      *(undefined4 *)(param_1 + 0xf6c) = 0x42140000;
      *(undefined1 *)(param_1 + 0xf68) = 1;
      *(undefined4 *)(param_1 + 0xf70) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x4b0);
  if ((iVar2 == 0x20150) || (iVar2 == 0x20152)) {
    if ((*(uint *)(param_1 + 0xddc) & 0x8000) == 0) {
      if (*(int *)(param_1 + 0x13dc) != 7) goto LAB_00b457ad;
      uVar1 = 0x42ce0000;
      uVar3 = 0x4b5;
    }
    else {
      uVar1 = 0x42100000;
      uVar3 = 0x461;
    }
    *(undefined4 *)(param_1 + 0xf6c) = uVar1;
    *(undefined4 *)(param_1 + 0xf70) = 0;
    *(undefined1 *)(param_1 + 0xf68) = 1;
  }
LAB_00b457ad:
  if (iVar2 == 0x20170) {
    *(undefined4 *)(param_1 + 0xf7c) = 0x43560000;
    uVar3 = 0x4b8;
    *(undefined1 *)(param_1 + 0xf78) = 1;
    *(undefined4 *)(param_1 + 0xf80) = 0;
    FUN_00b34fd0(&DAT_016466fc,2);
  }
  FUN_00aa4080(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0xfa4) = 1;
LAB_00b45818:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xb08) == -1) {
      *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_1 + 0x1750);
      *(undefined4 *)(param_1 + 0x16c4) = *(undefined4 *)(param_1 + 0x1754);
      *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_1 + 0x1758);
      uVar3 = *(undefined4 *)(param_1 + 0x175c);
    }
    else {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x16c0) = local_c;
      *(undefined4 *)(param_1 + 0x16c4) = local_8;
      *(undefined4 *)(param_1 + 0x16c8) = local_4;
      uVar3 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x16cc) = uVar3;
    FUN_00b39f00(7,0,0,0);
  }
  return;
}

// 00B458C0  FUN_00b458c0  size=150  [between]
void __fastcall FUN_00b458c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1[0x376] & 0x80000000U) == 0) {
    if (param_1[0x63c] != 0) {
      if ((param_1[0x645] != 0) && ((param_1[0x12a] & 0x400000U) == 0)) {
        FUN_00b39f00(0x1000c,0,0,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00b4590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if ((param_1[0x1f6] != 0) && (param_1[0x2a1] != 0)) {
      iVar1 = *(int *)(param_1[0x1f6] + 0x818);
      iVar2 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if ((iVar1 != 0) && ((iVar2 != 0 && (*(int *)(iVar1 + 0xc) != *(int *)(iVar2 + 0xc))))) {
        FUN_00b39f00(0x14,0,0,0);
      }
    }
  }
  return;
}

// 00B45960  FUN_00b45960  size=311  [between]
void __fastcall FUN_00b45960(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x4f7];
    uVar1 = 0x508;
    if (iVar2 == 2) {
      uVar1 = 0x509;
    }
    if (iVar2 == 3) {
      uVar1 = 0x50a;
    }
    if (iVar2 == 6) {
      uVar1 = 0x27d;
    }
    if (((param_1[0x377] & 0x8000U) != 0) && (param_1[0x3e3] != 0)) {
      uVar1 = 0x465;
    }
    if (param_1[300] == 0x20170) {
      uVar1 = 0x535;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b45a7b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((*(byte *)((int)param_1 + 0xdda) & 1) == 0) {
      iVar2 = param_1[0x2a1];
      if (iVar2 != 0) {
        param_1[0x5b0] = *(int *)(iVar2 + 0x40);
        param_1[0x5b1] = *(int *)(iVar2 + 0x44);
        param_1[0x5b2] = *(int *)(iVar2 + 0x48);
        param_1[0x5b3] = *(int *)(iVar2 + 0x4c);
      }
      FUN_00b39f00(0x22,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
LAB_00b45a7b:
  if ((param_1[0x36c] == 2) || (param_1[0x36c] == -1)) {
    param_1[0x36c] = 1;
  }
  return;
}

// 00B45AA0  FUN_00b45aa0  size=121  [between]
void __fastcall FUN_00b45aa0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    return;
  }
  iVar1 = FUN_00b2ea70();
  if (iVar1 != 0) {
    FUN_00b39f00(0x120000,0,0,0);
    return;
  }
  iVar1 = FUN_00b2e920();
  if (iVar1 != 0) {
    FUN_00b39f00(0x120004,0,0,0);
    *(undefined4 *)(param_1 + 0x1adc) = 0xffffffff;
    return;
  }
  iVar1 = FUN_00b2e9b0();
  if (iVar1 != 0) {
    FUN_00b39f00(0x120001,0,0,0);
  }
  return;
}

// 00B45B20  FUN_00b45b20  size=308  [between]
void __fastcall FUN_00b45b20(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    uVar2 = 0x503;
    if (param_1[0x4f7] == 2) {
      uVar2 = 0x504;
    }
    if (param_1[0x4f7] == 3) {
      uVar2 = 0x505;
    }
    if (((param_1[0x377] & 0x8000U) != 0) && (param_1[0x3e3] != 0)) {
      uVar2 = 0x468;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b45c20;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = ((float)param_1[0x10] - (float)param_1[0x5b0]) *
          ((float)param_1[0x10] - (float)param_1[0x5b0]) +
          ((float)param_1[0x11] - (float)param_1[0x5b1]) *
          ((float)param_1[0x11] - (float)param_1[0x5b1]) +
          ((float)param_1[0x12] - (float)param_1[0x5b2]) *
          ((float)param_1[0x12] - (float)param_1[0x5b2]);
  if (fVar1 < 2.25 != (fVar1 == 2.25)) {
    FUN_00b39f00(0x21,0,0,0);
  }
  if (param_1[0x63c] != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00b45c20:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 00B45C60  Em0010::vf34C  size=340  [class]
void __fastcall Em0010::vf34C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  if (*(int *)(param_1 + 0x1744) == 1) {
    FUN_00b39f00(0x60000,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x1744) == 2) {
    FUN_00b39f00(0x50000,0,0,0);
    return;
  }
  if (((*(uint *)(param_1 + 0xddc) & 0x8000) == 0) || (*(int *)(param_1 + 0xf8c) == 0)) {
    *(undefined4 *)(param_1 + 0x1824) = 0x41f00000;
    FUN_00b39f00(0xb,0,0,0);
    if (*(int *)(param_1 + 0xfa4) == 0) {
      if (*(int *)(param_1 + 0x13dc) == 1) {
        FUN_00b39f00(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x13dc) == 7) {
        FUN_00b39f00(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x13dc) == 6) {
        FUN_00b39f00(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x13dc) == 5) {
        FUN_00b39f00(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x13dc) == 2) {
        FUN_00b39f00(0x20000,0,0,0);
      }
      if (*(int *)(param_1 + 0x13dc) == 3) {
        FUN_00b39f00(0x30000,0,0,0);
      }
    }
    FUN_00b3b4e0(uVar1);
  }
  else {
    FUN_00b39f00(0x70000,0,0,0);
    if (*(int *)(param_1 + 0xfa4) == 0) {
      FUN_00b39f00(0xe,0,0,0);
      return;
    }
  }
  return;
}

// 00B45DC0  Em0010::vf1A4  size=501  [class]
void __thiscall Em0010::vf1A4(int param_1,int *param_2,byte param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00a81330();
  iVar4 = *param_2;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffff7fff;
  switch(iVar4) {
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
    if ((param_3 & 4) != 0) {
      FUN_00a7c950();
      if (iVar2 != 0) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
      if (*(int *)(param_1 + 0x1744) == 1) {
        FUN_00b39f00(0x60007,0,0,0);
      }
      else {
        FUN_00b39f00(0xa0002,0,0,0);
      }
    }
    break;
  case 0x9f:
  case 0xa0:
    if ((param_3 & 2) != 0) {
      if (*(int *)(param_1 + 0x618) == 0x10015) {
        *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x10000;
      }
      else {
        uVar3 = FUN_00ac8660(0,0x59);
        *(undefined4 *)(param_1 + 0x1ac4) = uVar3;
        uVar3 = FUN_00ac8660(0,0x5a);
        sVar1 = FUN_00dde2d0(0,uVar3);
        *(int *)(param_1 + 0x1ac4) = *(int *)(param_1 + 0x1ac4) + (int)sVar1;
        if (iVar4 == 0x9f) {
          uVar3 = 2;
        }
        else {
          uVar3 = 6;
        }
        FUN_00b39f00(0x10015,uVar3,0,0);
        *(undefined4 *)(param_1 + 0x940) = 0;
      }
    }
    if (*(int *)(param_1 + 0x618) == 0x10015) {
      if ((param_3 & 8) == 0) {
        *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x8000;
      }
      else {
        *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x10000;
      }
    }
  }
  if ((*(int *)(param_1 + 0x4b0) == 0x20150) || (*(int *)(param_1 + 0x4b0) == 0x20152)) {
    if ((param_3 & 4) == 0) {
      if (((*(uint *)(param_1 + 0xdd4) & 0x2000) != 0) && ((param_3 & 2) != 0)) {
        *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
        FUN_00b39f00(0x19,0,0,0);
      }
      *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffdfff;
    }
    else if (*(int *)(param_1 + 0x618) != 0x10015) {
      iVar4 = FUN_00b2a510();
      if (iVar4 == 0) {
        FUN_00b39f00(0x10015,8,0,0);
      }
      else {
        FUN_00b39f00(0x110001,0,0,0);
      }
    }
  }
  if (((*(int *)(param_1 + 0x4b0) == 0x20170) && ((*(uint *)(param_1 + 0xdd4) & 0x1000) == 0)) &&
     ((param_3 & 4) != 0)) {
    FUN_00b39f00(0x110002,0,0,0);
  }
  return;
}

// 00B45FD0  FUN_00b45fd0  size=620  [between]
void __fastcall FUN_00b45fd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [288];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (((*(int *)(param_1 + 0x598) == 1) || (iVar1 = FUN_00a8c760(0x11), iVar1 != 0)) &&
     (iVar1 = FUN_00a12210(0x11), iVar1 != 0)) {
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(0x3c,uVar2,uVar3);
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(float *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_180 = *(undefined4 *)(iVar1 + 0x40);
    local_178 = *(undefined4 *)(iVar1 + 0x48);
    local_174 = *(undefined4 *)(iVar1 + 0x4c);
    local_17c = *(float *)(iVar1 + 0x44) + 1.0;
    local_16c = *(float *)(iVar1 + 0x44) - 5.0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&local_180,0,0,0,&local_180,&local_170,0x1e,"em0010_foot");
    if (iVar1 != 0) {
      local_40 = local_180;
      local_3c = local_17c;
      local_38 = local_178;
      local_34 = local_174;
    }
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x20010,puVar4);
    FUN_00a8c930(uVar2,puVar4);
  }
  if ((*(int *)(param_1 + 0x594) != 1) && (iVar1 = FUN_00a8c760(0x12), iVar1 == 0)) {
    return;
  }
  iVar1 = FUN_00a12210(0x15);
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(0x3c,uVar2,uVar3);
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(float *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_180 = *(undefined4 *)(iVar1 + 0x40);
    local_178 = *(undefined4 *)(iVar1 + 0x48);
    local_174 = *(undefined4 *)(iVar1 + 0x4c);
    local_17c = *(float *)(iVar1 + 0x44) + 1.0;
    local_16c = *(float *)(iVar1 + 0x44) - 5.0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&local_180,0,0,0,&local_180,&local_170,0x1e,"em0010_foot");
    if (iVar1 != 0) {
      local_40 = local_180;
      local_3c = local_17c;
      local_38 = local_178;
      local_34 = local_174;
    }
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x20010,puVar4);
    FUN_00a8c930(uVar2,puVar4);
  }
  return;
}

// 00B46240  FUN_00b46240  size=80  [between]
undefined4 __fastcall FUN_00b46240(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x13dc) == 1) && (*(int *)(param_1 + 0xf74) == 0)) {
    FUN_00b39f00(0x23,0,0,0);
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    uVar1 = 1;
  }
  return uVar1;
}

// 00B46290  FUN_00b46290  size=79  [between]
void __fastcall FUN_00b46290(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0xf68) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0xf6c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0xf6c) = fVar1, fVar1 < 0.0)) {
    if (*(int *)(param_1 + 0xf70) != 0) {
      FUN_00b3a190();
      *(undefined1 *)(param_1 + 0xf68) = 0;
      return;
    }
    FUN_00b3a290();
    *(undefined1 *)(param_1 + 0xf68) = 0;
  }
  return;
}

// 00B462E0  FUN_00b462e0  size=89  [between]
void __fastcall FUN_00b462e0(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0xf78) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0xf7c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0xf7c) = fVar1, fVar1 < 0.0)) {
    if (*(int *)(param_1 + 0xf80) != 0) {
      FUN_00b3a3a0();
      *(undefined4 *)(param_1 + 0xfa4) = 0;
      *(undefined1 *)(param_1 + 0xf78) = 0;
      return;
    }
    FUN_00b3a480();
    *(undefined1 *)(param_1 + 0xf78) = 0;
  }
  return;
}

// 00B46340  FUN_00b46340  size=168  [between]
void __fastcall FUN_00b46340(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0xf90) == '\x01') {
    fVar1 = *(float *)(param_1 + 0xf94) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xf94) = fVar1;
    *(float *)(param_1 + 0xf98) = *(float *)(param_1 + 0xf98) - *(float *)(param_1 + 0x910);
    if (fVar1 < 0.0) {
      if (*(int *)(param_1 + 0xf9c) == 0) {
        FUN_00b3aba0(0);
      }
      else {
        FUN_00b3aa30(0);
      }
    }
    if (*(float *)(param_1 + 0xf98) < 0.0) {
      if (*(int *)(param_1 + 0xf9c) == 0) {
        FUN_00b3aba0(1);
      }
      else {
        FUN_00b3aa30(1);
      }
    }
    if ((*(float *)(param_1 + 0xf94) < 0.0) && (*(float *)(param_1 + 0xf98) < 0.0)) {
      *(undefined1 *)(param_1 + 0xf90) = 0;
      return;
    }
  }
  return;
}

// 00B463F0  FUN_00b463f0  size=195  [between]
void __fastcall FUN_00b463f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x13b8) != 0) {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x50);
      FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    }
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00b39f00(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xfa4) != 0)) {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  return;
}

// 00B464C0  FUN_00b464c0  size=64  [between]
void __fastcall FUN_00b464c0(int param_1)

{
  if ((((*(int *)(param_1 + 0x13e0) != -1) && (*(float *)(param_1 + 0xa8c) <= 36.0)) &&
      (*(float *)(param_1 + 0xaa0) < 1.3962634)) && (*(int *)(param_1 + 0x13c4) != 0)) {
    FUN_00b3ad10(0xffffffff);
  }
  return;
}

// 00B46500  FUN_00b46500  size=283  [between]
void __fastcall FUN_00b46500(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x61;
  if (param_1[0x186] == 0x20007) {
    uVar2 = 0x62;
  }
  if (param_1[0x186] == 0x20008) {
    uVar2 = 99;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x564] = 0;
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00b465d1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x20000,0,0,0);
  }
LAB_00b465d1:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3cd67750,0);
  }
  return;
}

// 00B46620  FUN_00b46620  size=259  [between]
void __fastcall FUN_00b46620(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xf,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b3a5d0(&DAT_016457ec,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    FUN_00b3a190();
  }
  iVar1 = FUN_00a8c760(0x31);
  if (iVar1 != 0) {
    FUN_00b3a480();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x19cc) != -1) {
      FUN_00b39f00(*(int *)(param_1 + 0x19cc),0,0,0);
      return;
    }
    FUN_00b39f00(0xe,0,0,0);
  }
  return;
}

// 00B46730  FUN_00b46730  size=347  [between]
void __fastcall FUN_00b46730(int *param_1)

{
  int iVar1;
  
  param_1[0x5a3] = 1;
  param_1[0x375] = param_1[0x375] | 0x1000000;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x12,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x564] = 0;
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x3db] = 0x42440000;
    param_1[0x3df] = 0x41c00000;
    *(undefined1 *)(param_1 + 0x3da) = 1;
    param_1[0x3dc] = 1;
    *(undefined1 *)(param_1 + 0x3de) = 1;
    param_1[0x3e0] = 0;
    FUN_00b3a5d0(&DAT_01646728,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00b46834;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0xe,0,0,0);
  }
LAB_00b46834:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00B46890  FUN_00b46890  size=262  [between]
void __fastcall FUN_00b46890(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b3a5d0(&DAT_01646730,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    FUN_00b3a290();
  }
  iVar1 = FUN_00a8c760(0x31);
  if (iVar1 != 0) {
    FUN_00b3a3a0();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x19cc) != -1) {
      FUN_00b39f00(*(int *)(param_1 + 0x19cc),0,0,0);
      return;
    }
    FUN_00b39f00(0x20000,0,0,0);
  }
  return;
}

// 00B469A0  FUN_00b469a0  size=264  [between]
void __fastcall FUN_00b469a0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x13,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(undefined4 *)(param_1 + 0xf6c) = 0x42860000;
    *(undefined4 *)(param_1 + 0xf7c) = 0x42c00000;
    *(undefined1 *)(param_1 + 0xf68) = 1;
    *(undefined4 *)(param_1 + 0xf70) = 0;
    *(undefined1 *)(param_1 + 0xf78) = 1;
    *(undefined4 *)(param_1 + 0xf80) = 1;
    FUN_00b3a5d0(&DAT_01646738,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x20000,0,0,0);
  }
  return;
}

// 00B46AB0  FUN_00b46ab0  size=479  [between]
void __fastcall FUN_00b46ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x1088) = 0x42f00000;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x1088) = 0x43700000;
  }
  fVar3 = (float10)FUN_00ac85c0(5,0x92);
  *(float *)(param_1 + 0x19dc) = (float)(fVar3 * (float10)60.0);
  fVar3 = (float10)FUN_00ac85c0(5,0x93);
  fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
  *(float *)(param_1 + 0x19dc) =
       (float)(fVar3 * (float10)60.0 + (float10)*(float *)(param_1 + 0x19dc));
  iVar1 = FUN_00ac8470();
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x97);
    *(float *)(param_1 + 0x19dc) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)FUN_00ac85c0(5,0x98);
    fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
    *(float *)(param_1 + 0x19dc) =
         (float)(fVar3 * (float10)60.0 + (float10)*(float *)(param_1 + 0x19dc));
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    uVar2 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x12d0) = uVar2;
    iVar1 = FUN_00ac8470();
    if (iVar1 != 0) {
      uVar2 = FUN_00ac8660(0,0x9c);
      *(undefined4 *)(param_1 + 0x12d0) = uVar2;
    }
    FUN_00b380e0(0);
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 1;
    FUN_00b39f00(0x20000,0,0,0);
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xffbfffff;
  }
  return;
}

// 00B46C90  FUN_00b46c90  size=140  [between]
void FUN_00b46c90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(param_1,uVar2,uVar3);
    uVar2 = FUN_00a81330();
    FUN_00e03080(uVar2,0);
    if (param_2 != 0) {
      FUN_00dffb20(param_2);
    }
    iVar1 = FUN_00a81330();
    FUN_00a8c8b0(*(undefined4 *)(iVar1 + 0x24),local_160);
  }
  return;
}

// 00B46D20  FUN_00b46d20  size=807  [between]
undefined4 __fastcall FUN_00b46d20(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  
  param_1[0x376] = param_1[0x376] | 0x20000;
  switch((char)param_1[0x3f0]) {
  case '\0':
    fVar4 = (float10)FUN_00ac85c0(5,0x8e);
    param_1[0x56e] = (int)(float)fVar4;
    fVar4 = (float10)FUN_00ac85c0(5,0x8f);
    fVar4 = (float10)FUN_00dde300(0,(float)fVar4);
    param_1[0x56e] = (int)(float)(fVar4 + (float10)(float)param_1[0x56e]);
    FUN_00b46c90(1,param_1 + 0x3f4);
    *(undefined1 *)(param_1 + 0x3f0) = 1;
    break;
  case '\x01':
    break;
  case '\x02':
    *(undefined2 *)(param_1 + 0x3f0) = 3;
  case '\x03':
    fVar1 = (float)param_1[0x56e] - (float)param_1[0x244];
    param_1[0x56e] = (int)fVar1;
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (param_1[0x4b4] != 0)) {
      FUN_00eaa6e0(0x41200000,0);
      FUN_00a94bc0(2,0);
      FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
      param_1[0x4b4] = param_1[0x4b4] + -1;
      param_1[0x56e] = 0x41000000;
      *(char *)((int)param_1 + 0xfc1) = *(char *)((int)param_1 + 0xfc1) + '\x01';
      param_1[0x4b6] = 1;
    }
  default:
    goto switchD_00b46d40_default;
  }
  param_1[0x5a2] = 0x3dcccccd;
  fVar1 = (float)param_1[0x56e];
  param_1[0x56e] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4b4] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a94bc0(2,0);
    FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
    param_1[0x4b4] = param_1[0x4b4] + -1;
    param_1[0x56e] = 0x40c00000;
    param_1[0x4b6] = 1;
  }
  if (((int *)param_1[0x2a1] != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))(), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x3f0) = 2;
  }
switchD_00b46d40_default:
  if (param_1[0x6af] != 0) {
    FUN_00a8e880(param_1[0x6af] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  if ((param_1[0x4b4] == 0) && ((float)param_1[0x56e] <= 0.0)) {
    sVar2 = FUN_00dde2d0(0,2);
    fVar1 = (float)(sVar2 + 1) * 60.0;
    param_1[0x422] = (int)fVar1;
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)(fVar1 + 120.0);
    }
    FUN_00b39f00(0x2000e,0,0,0);
    iVar3 = FUN_00ac8660(0,0x9b);
    param_1[0x4b4] = iVar3;
    iVar3 = FUN_00ac8470();
    if (iVar3 != 0) {
      iVar3 = FUN_00ac8660(0,0x9c);
      param_1[0x4b4] = iVar3;
    }
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    return 1;
  }
  return 0;
}

// 00B47060  FUN_00b47060  size=159  [between]
void __fastcall FUN_00b47060(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x13b8) != 0) {
    iVar1 = FUN_00b35500();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b39f00(6,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00b39f00(0,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 4) && (*(int *)(param_1 + 0xfa4) != 0)) {
      FUN_00b39f00(0x1f,0,0,0);
    }
  }
  return;
}

// 00B47100  FUN_00b47100  size=403  [between]
void __fastcall FUN_00b47100(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8d230(local_20);
      iVar2 = FUN_00a12210(5);
      thunk_FUN_00dde510(&local_28,local_24,local_20,iVar2 + 0x40);
      local_28 = local_28 * 1.2732395;
      fVar1 = -1.0;
      if ((-1.0 <= local_28) && (fVar1 = local_28, 1.0 < local_28)) {
        fVar1 = 1.0;
      }
      *(float *)(param_1 + 0x1590) =
           (fVar1 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
    }
    iVar2 = FUN_00b30d00();
    if (iVar2 != 0) {
      FUN_00b39f00(0x3000b,0,0,0);
      return;
    }
  }
  if (((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
     (iVar2 = FUN_00b3ad10(0xffffffff), iVar2 == 0)) {
    if (0.0 < *(float *)(param_1 + 0x1970)) {
      *(float *)(param_1 + 0x1970) = *(float *)(param_1 + 0x1970) - *(float *)(param_1 + 0x910);
    }
    if (((((*(float *)(param_1 + 0x1970) <= 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)))
         || ((iVar2 = *(int *)(param_1 + 0x618), iVar2 == 0x30002 &&
             (*(int *)(param_1 + 0xfac) == 0)))) ||
        ((iVar2 == 0x30004 && (*(int *)(param_1 + 0xfb0) == 0)))) ||
       ((iVar2 == 0x30003 && (*(int *)(param_1 + 0xfb4) == 0)))) {
      FUN_00b39f00(0x30000,0,0,0);
    }
  }
  return;
}

// 00B472A0  FUN_00b472a0  size=46  [between]
void __fastcall FUN_00b472a0(int param_1)

{
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00b3ad10(0xffffffff);
  }
  return;
}

// 00B472D0  FUN_00b472d0  size=283  [between]
void __fastcall FUN_00b472d0(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x12d;
  if (param_1[0x186] == 0x30007) {
    uVar2 = 0x12e;
  }
  if (param_1[0x186] == 0x30008) {
    uVar2 = 0x12f;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x564] = 0;
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00b473a1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x30000,0,0,0);
  }
LAB_00b473a1:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3cd67750,0);
  }
  return;
}

// 00B473F0  FUN_00b473f0  size=259  [between]
void __fastcall FUN_00b473f0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x16,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b3a5d0(&DAT_01646744,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    FUN_00b3a190();
  }
  iVar1 = FUN_00a8c760(0x31);
  if (iVar1 != 0) {
    FUN_00b3a480();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x19cc) != -1) {
      FUN_00b39f00(*(int *)(param_1 + 0x19cc),0,0,0);
      return;
    }
    FUN_00b39f00(0xe,0,0,0);
  }
  return;
}

// 00B47500  FUN_00b47500  size=260  [between]
void __fastcall FUN_00b47500(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x15,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b3a3a0();
    *(undefined1 *)(param_1 + 0xf78) = 0;
    FUN_00b3a5d0(&DAT_0164674c,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    FUN_00b3a290();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x19cc) != -1) {
      FUN_00b39f00(*(int *)(param_1 + 0x19cc),0,0,0);
      return;
    }
    FUN_00b39f00(0x30000,0,0,0);
  }
  return;
}

// 00B47610  FUN_00b47610  size=415  [between]
void __fastcall FUN_00b47610(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8d230(local_20);
      iVar4 = FUN_00a12210(5);
      thunk_FUN_00dde510(&local_28,local_24,local_20,iVar4 + 0x40);
      fVar1 = local_28 * 1.2732395;
      fVar2 = -1.0;
      if ((-1.0 <= fVar1) && (fVar2 = fVar1, 1.0 < fVar1)) {
        fVar2 = 1.0;
      }
      *(float *)(param_1 + 0x1590) =
           (fVar2 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
    }
    if (*(int *)(param_1 + 0x12d0) == 0) {
      sVar3 = FUN_00dde2d0(0,2);
      local_28 = (float)(sVar3 + 1);
      *(float *)(param_1 + 0x1088) = (float)(int)local_28 * 60.0;
      if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
        *(float *)(param_1 + 0x1088) = (float)(int)local_28 * 60.0 + 120.0;
      }
      FUN_00b39f00(0x3000c,0,0,0);
      *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_1 + 0x12d4);
    }
    if (((*(int **)(param_1 + 0xa84) != (int *)0x0) &&
        (iVar4 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1fc))(), iVar4 != 0)) &&
       (*(int *)(param_1 + 0x12d0) != *(int *)(param_1 + 0x12d4))) {
      sVar3 = FUN_00dde2d0(0,2);
      local_28 = (float)(sVar3 + 1);
      FUN_00b2e200((float)(int)local_28);
      FUN_00b39f00(0x3000c,0,0,0);
      *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_1 + 0x12d4);
    }
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00b3ad10(0xffffffff);
  }
  return;
}

// 00B477B0  FUN_00b477b0  size=794  [between]
void __fastcall FUN_00b477b0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  param_1[0x376] = param_1[0x376] | 0x20000;
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9f4c0("RPG FIRE",0x3e088889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x112,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x10e,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x111,0x3e088889,0x80000);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar2 * 30.0 + 90.0);
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    fVar5 = (float10)FUN_00ac85c0(5,0x8e);
    param_1[0x249] = (int)(float)fVar5;
    fVar5 = (float10)FUN_00ac85c0(5,0x8f);
    fVar5 = (float10)FUN_00dde300(0,(float)fVar5);
    param_1[0x249] = (int)(float)(fVar5 + (float10)(float)param_1[0x249]);
    FUN_00b46c90(1,param_1 + 0x3f4);
    FUN_00e5e0c0("em0010_vo_line_caution_rpg",param_1,0xffffffff,0);
    FUN_00a8d280();
  case 1:
    param_1[0x5a2] = 0x3dcccccd;
    fVar1 = (float)param_1[0x249] - (float)param_1[0x244];
    param_1[0x249] = (int)fVar1;
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (param_1[0x2a1] != 0)) {
      FUN_00eaa6e0(0x41200000,0);
      FUN_00a94bc0(2,0);
      FUN_00aa4080(0x327,2,0,0x3f800000,0x8000010,0,0x3f800000);
      iVar3 = param_1[0x6af];
      if (iVar3 == 0) {
        iVar3 = param_1[0x2a1];
      }
      FUN_00b38500(iVar3 + 0x40);
      piVar4 = (int *)FUN_00b33480();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))();
      }
      param_1[0x4b4] = param_1[0x4b4] + -1;
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a947e0(0,0,param_1[0x564],0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_00b477cf_default;
  case 2:
    param_1[0x187] = 3;
    param_1[0x249] = 0x42700000;
    break;
  case 3:
    break;
  default:
    goto switchD_00b477cf_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00b39f00(0x3000c,0,0,0);
  }
switchD_00b477cf_default:
  if (param_1[0x6af] != 0) {
    FUN_00a8e880(param_1[0x6af] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B47AE0  FUN_00b47ae0  size=413  [between]
void __fastcall FUN_00b47ae0(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
  *(undefined4 *)(param_1 + 0x1088) = 0x42f00000;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x1088) = 0x43700000;
  }
  fVar3 = (float10)FUN_00ac85c0(5,0x94);
  *(float *)(param_1 + 0x19dc) = (float)(fVar3 * (float10)60.0);
  fVar3 = (float10)FUN_00ac85c0(5,0x95);
  fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
  *(float *)(param_1 + 0x19dc) =
       (float)(fVar3 * (float10)60.0 + (float10)*(float *)(param_1 + 0x19dc));
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x117,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_1 + 0x12d4);
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9d30;
      (**(code **)(*piVar1 + 4))(&DAT_01be9d30);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00a8caf0(1,0,0,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 1;
    FUN_00b39f00(0x30000,0,0,0);
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xffbfffff;
  }
  return;
}

// 00B47C80  FUN_00b47c80  size=167  [between]
void __fastcall FUN_00b47c80(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    return;
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) goto LAB_00b47ce8;
  }
  if ((*(byte *)((int)param_1 + 0xddb) & 1) == 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00b2b450();
    return;
  }
LAB_00b47ce8:
  if ((param_1[0x187] != 5) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x10b)) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00b2b450();
    FUN_00b39f00(0xa0001,0,0,0);
  }
  return;
}

// 00B47D30  FUN_00b47d30  size=1747  [between]
void __fastcall FUN_00b47d30(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  float unaff_EBX;
  float fVar6;
  uint uVar7;
  undefined2 uVar8;
  float10 extraout_ST0;
  float10 fVar9;
  undefined8 uVar10;
  undefined6 uVar11;
  undefined *puVar12;
  float local_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float afStack_34 [12];
  
  fVar6 = 0.0;
  local_44 = 0.0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      local_44 = 0.0;
    }
    else {
      puVar12 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar12);
      fVar6 = (float)(-(uint)(iVar3 != 0) & (uint)piVar4);
      local_44 = fVar6;
    }
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x5a3] = 1;
  param_1[0x375] = param_1[0x375] | 2;
  if ((uint)param_1[0x187] < 4) {
    fVar9 = (float10)1;
    switch(param_1[0x187]) {
    case 0:
      iVar3 = param_1[300];
      uVar8 = 0x335;
      if ((iVar3 == 0x20150) || (iVar3 == 0x20152)) {
        uVar8 = 0x34a;
      }
      if (iVar3 == 0x20170) {
        uVar8 = 0x34e;
      }
      if (param_1[0x186] == 0xb0006) {
        uVar8 = 0x345;
        uVar10 = FUN_00b34d30();
        if ((int)uVar10 != 0) {
          uVar8 = 0x353;
        }
        if ((int)((ulonglong)uVar10 >> 0x20) == 0x20170) {
          uVar8 = 0x357;
        }
      }
      FUN_00aa4080(uVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(0);
      }
      param_1[0x187] = param_1[0x187] + 1;
      if (fVar6 != 0.0) {
        FUN_00a95ee0(0,fVar6);
      }
      param_1[0x139] = 1;
      param_1[0x362] = 1;
      if ((fVar6 == 0.0) || (iVar3 = FUN_00b88550(), iVar3 == 0)) {
        FUN_00b354b0(3,1);
      }
      else {
        FUN_00ac48e0();
      }
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      param_1[0xd9] = param_1[0xd9] & 0xffefffff;
      param_1[0x21c] = 0;
      if ((param_1[0x377] & 0x8000U) != 0) {
        FUN_00b3a8d0();
      }
      param_1[0x301] = 1;
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a8c760(0x19);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x358))(0x104,param_1 + 0x488);
      }
      iVar3 = FUN_00a8c760(0x1f);
      if ((iVar3 != 0) &&
         (((iVar3 = param_1[300], iVar3 == 0x20150 || (iVar3 == 0x20152)) || (iVar3 == 0x20170)))) {
        afStack_34[0] = 4.61027e-43;
        afStack_34[1] = 4.69435e-43;
        afStack_34[2] = 4.59626e-43;
        afStack_34[3] = 4.68034e-43;
        afStack_34[4] = 4.62428e-43;
        afStack_34[5] = 4.70836e-43;
        afStack_34[6] = 4.6383e-43;
        afStack_34[7] = 4.72238e-43;
        uVar7 = (uint)(iVar3 == 0x20152);
        if ((param_1[0x377] & 0x40000U) == 0) {
          if (iVar3 == 0x20170) {
            (**(code **)(*param_1 + 0x358))(0x156,0);
            FUN_00ac94e0("chest_vest");
          }
          FUN_00ac9420(&DAT_0163d9a8);
          FUN_00b34e20();
          FUN_00ac8d40(1);
          param_1[0x377] = param_1[0x377] | 0x40000;
        }
        if ((param_1[0x377] & 0x80000U) == 0) {
          if (param_1[300] == 0x20170) {
            FUN_00ac94e0("R_upper_leg_shield");
            FUN_00ac94e0("R_lower_leg_shield");
            fVar6 = 4.80645e-43;
          }
          else {
            FUN_00ac94e0("R_hip_armor");
            FUN_00ac94e0("R_leg_armor");
            fVar6 = afStack_34[uVar7 + 4];
          }
          (**(code **)(*param_1 + 0x358))(fVar6,0);
          FUN_00ac9420("_EFD003");
          FUN_00ac8dd0("_R_leg_",1);
          param_1[0x377] = param_1[0x377] | 0x80000;
        }
        if ((param_1[0x377] & 0x100000U) == 0) {
          if (param_1[300] == 0x20170) {
            FUN_00ac94e0("L_upper_leg_shield");
            FUN_00ac94e0("L_lower_leg_shield");
            fVar6 = 4.82047e-43;
          }
          else {
            FUN_00ac94e0("L_hip_armor");
            FUN_00ac94e0("L_leg_armor");
            fVar6 = afStack_34[uVar7 + 6];
          }
          (**(code **)(*param_1 + 0x358))(fVar6,0);
          FUN_00ac9420("_EFD004");
          FUN_00ac8dd0("_L_leg_",1);
          param_1[0x377] = param_1[0x377] | 0x100000;
        }
        if ((param_1[0x377] & 0x200000U) == 0) {
          if (param_1[300] == 0x20170) {
            FUN_00ac94e0("L_forearm_armor1");
            FUN_00ac94e0("R_shoulder_pad");
            fVar6 = 4.76441e-43;
          }
          else {
            FUN_00ac94e0("R_shoulder_armor");
            fVar6 = afStack_34[uVar7];
          }
          (**(code **)(*param_1 + 0x358))(fVar6,0);
          FUN_00ac9420("_EFD01");
          FUN_00ac8dd0("_R_arm_",1);
          param_1[0x377] = param_1[0x377] | 0x200000;
        }
        if ((param_1[0x377] & 0x400000U) == 0) {
          if (param_1[300] == 0x20170) {
            FUN_00ac94e0("L_forearm_armor");
            FUN_00ac94e0("L_shoulder_pad");
            fVar6 = 4.77843e-43;
          }
          else {
            FUN_00ac94e0("L_shoulder_armor");
            fVar6 = afStack_34[uVar7 + 2];
          }
          (**(code **)(*param_1 + 0x358))(fVar6,0);
          FUN_00ac9420("_EFD02");
          FUN_00ac8dd0("_L_arm_",1);
          param_1[0x377] = param_1[0x377] | 0x400000;
        }
        if ((param_1[0x375] & 0x1000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
        }
        param_1[0x375] = param_1[0x375] | 0x1000;
        fVar6 = unaff_EBX;
      }
      break;
    case 2:
      iVar3 = param_1[300];
      sVar5 = 0x337;
      if ((iVar3 == 0x20150) || (iVar3 == 0x20152)) {
        sVar5 = 0x34c;
      }
      if (iVar3 == 0x20170) {
        sVar5 = 0x350;
      }
      if (param_1[0x186] == 0xb0006) {
        uVar11 = FUN_00b34d30();
        sVar5 = (short)((uint6)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          sVar5 = 0x355;
        }
        fVar9 = extraout_ST0;
        if (iVar3 == 0x20170) {
          sVar5 = 0x359;
        }
      }
      FUN_00aa4080((int)sVar5,0,0x3e2aaaab,(float)fVar9,0x8000000,0,(float)fVar9);
      param_1[0x187] = param_1[0x187] + 1;
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a8c760(0x19);
      if ((iVar3 != 0) && (param_1[0x294] != 0)) {
        (**(code **)(*param_1 + 0x358))(0x104,param_1 + 0x488);
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00b39f00(0xb0004,0,0,0);
      param_1[0x376] = param_1[0x376] | 0x800000;
      (**(code **)(*param_1 + 0x314))();
      param_1[0x139] = 1;
      param_1[0x21c] = 0;
    }
  }
  if ((fVar6 == 0.0) || (iVar3 = FUN_00a8c760(0x1c), iVar3 != 0)) {
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(1);
    }
  }
  else {
    FUN_00a95ee0(0,fVar6);
    FUN_00a8ce90(&local_44,afStack_34);
    fVar9 = (float10)FUN_00ddba30(*(float *)((int)fVar6 + 0x94) + afStack_34[1]);
    param_1[0x25] = (int)(float)fVar9;
    D3DXVec3TransformNormal(&local_44,&local_44,(int)fVar6 + 0x10);
    fVar1 = *(float *)((int)fVar6 + 0x44);
    fVar2 = *(float *)((int)fVar6 + 0x48);
    param_1[0x14] = (int)(*(float *)((int)fVar6 + 0x40) + local_44);
    param_1[0x15] = (int)(fVar1 + fStack_40);
    param_1[0x16] = (int)(fVar2 + fStack_3c);
    param_1[0x17] = iStack_38;
  }
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0xc);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  return;
}

// 00B48420  FUN_00b48420  size=2713  [between]
void __fastcall FUN_00b48420(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float unaff_EBX;
  uint uVar6;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  undefined *puVar10;
  uint local_44 [4];
  float afStack_34 [12];
  
  uVar6 = 0;
  local_44[0] = 0;
  iVar3 = FUN_00a81330();
  uVar7 = local_44[0];
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), uVar7 = uVar6, piVar4 != (int *)0x0)) {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar4;
    uVar7 = uVar6;
  }
  local_44[0] = uVar7;
  (**(code **)(*param_1 + 0x318))();
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x375] = param_1[0x375] | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00a92f90();
    if (iVar3 != 0) {
      if (param_1[300] == 0x20170) {
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
        }
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
        }
      }
      else {
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffe;
        }
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 4;
        }
      }
    }
    FUN_00aa4080(0x33d,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (uVar6 != 0) {
      FUN_00a95ee0(0,uVar6);
    }
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 100))();
    param_1[0x376] = param_1[0x376] | 0x4000;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x33f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b4862a;
  case 3:
LAB_00b4862a:
    iVar3 = FUN_00a8c760(10);
    if ((((iVar3 == 0) && (uVar6 != 0)) && (iVar3 = FUN_00a8cac0(), iVar3 == 3)) &&
       (iVar3 = FUN_00a8cab0(), iVar3 == 0xff)) {
      FUN_00a95ee0(0,uVar6);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_008e6d00();
      CharacterControl::setHeight(0x3ff33333);
      CharacterControl::setRadius(0x3f000000);
      (**(code **)(*param_1 + 0x314))();
      FUN_00b2b450();
      param_1[0xd9] = param_1[0xd9] | 0x100000;
      if ((param_1[0x376] & 0x1000U) == 0) {
        param_1[0x21c] = 0;
        param_1[0x139] = 1;
        FUN_00b39f00(0xb0002,0,0,0);
        FUN_00b354b0(0,1);
      }
      else {
        param_1[0x187] = param_1[0x187] + 1;
        FUN_00b2f010();
      }
    }
    goto switchD_00b484a7_default;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_00b484a7_default;
  }
  iVar3 = FUN_00a8c760(10);
  if (((iVar3 == 0) && (uVar6 != 0)) &&
     ((iVar3 = FUN_00a8cac0(), iVar3 < 2 && (iVar3 = FUN_00a8cab0(), iVar3 == 0xff)))) {
    FUN_00a95ee0(0,uVar6);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00b484a7_default:
  iVar3 = param_1[300];
  if (((iVar3 == 0x20150) || (iVar3 == 0x20152)) || (iVar3 == 0x20170)) {
    iVar3 = FUN_00a8c760(0x37);
    if (iVar3 != 0) {
      iVar3 = param_1[300];
      afStack_34[0] = 4.61027e-43;
      afStack_34[1] = 4.69435e-43;
      afStack_34[2] = 4.59626e-43;
      afStack_34[3] = 4.68034e-43;
      afStack_34[4] = 4.62428e-43;
      afStack_34[5] = 4.70836e-43;
      afStack_34[6] = 4.6383e-43;
      afStack_34[7] = 4.72238e-43;
      if ((param_1[0x377] & 0x80000U) == 0) {
        if (iVar3 == 0x20170) {
          FUN_00ac94e0("R_upper_leg_shield");
          FUN_00ac94e0("R_lower_leg_shield");
          (**(code **)(*param_1 + 0x358))(0x157,0);
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          FUN_00ac94e0("R_leg_armor");
          (**(code **)(*param_1 + 0x358))(afStack_34[(iVar3 == 0x20152) + 4],0);
        }
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x80000;
      }
      if ((param_1[0x375] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      }
      param_1[0x375] = param_1[0x375] | 0x1000;
      iVar3 = param_1[300];
      afStack_34[0] = 4.61027e-43;
      afStack_34[1] = 4.69435e-43;
      afStack_34[2] = 4.59626e-43;
      afStack_34[3] = 4.68034e-43;
      afStack_34[4] = 4.62428e-43;
      afStack_34[5] = 4.70836e-43;
      afStack_34[6] = 4.6383e-43;
      afStack_34[7] = 4.72238e-43;
      if ((param_1[0x377] & 0x100000U) == 0) {
        if (iVar3 == 0x20170) {
          FUN_00ac94e0("L_upper_leg_shield");
          FUN_00ac94e0("L_lower_leg_shield");
          fVar9 = 4.82047e-43;
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          FUN_00ac94e0("L_leg_armor");
          fVar9 = afStack_34[(iVar3 == 0x20152) + 6];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x100000;
      }
      if ((param_1[0x375] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      }
      param_1[0x375] = param_1[0x375] | 0x1000;
    }
    iVar3 = FUN_00a8c760(0x36);
    if (iVar3 != 0) {
      iVar3 = param_1[300];
      afStack_34[0] = 4.61027e-43;
      afStack_34[1] = 4.69435e-43;
      afStack_34[2] = 4.59626e-43;
      afStack_34[3] = 4.68034e-43;
      afStack_34[4] = 4.62428e-43;
      afStack_34[5] = 4.70836e-43;
      afStack_34[6] = 4.6383e-43;
      afStack_34[7] = 4.72238e-43;
      if ((param_1[0x377] & 0x200000U) == 0) {
        if (iVar3 == 0x20170) {
          FUN_00ac94e0("L_forearm_armor1");
          FUN_00ac94e0("R_shoulder_pad");
          fVar9 = 4.76441e-43;
        }
        else {
          FUN_00ac94e0("R_shoulder_armor");
          fVar9 = afStack_34[iVar3 == 0x20152];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x200000;
      }
      if ((param_1[0x375] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      }
      param_1[0x375] = param_1[0x375] | 0x1000;
      FUN_00b35070(0x49,1,1);
    }
    iVar3 = FUN_00a8c760(0x35);
    if ((iVar3 != 0) || (iVar3 = FUN_00a8c760(0x1f), iVar3 != 0)) {
      afStack_34[0] = 4.61027e-43;
      afStack_34[1] = 4.69435e-43;
      afStack_34[2] = 4.59626e-43;
      afStack_34[3] = 4.68034e-43;
      afStack_34[4] = 4.62428e-43;
      afStack_34[5] = 4.70836e-43;
      afStack_34[6] = 4.6383e-43;
      afStack_34[7] = 4.72238e-43;
      uVar7 = (uint)(param_1[300] == 0x20152);
      if ((param_1[0x377] & 0x40000U) == 0) {
        if (param_1[300] == 0x20170) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_00b34e20();
        FUN_00ac8d40(1);
        param_1[0x377] = param_1[0x377] | 0x40000;
      }
      if ((param_1[0x377] & 0x80000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("R_upper_leg_shield");
          FUN_00ac94e0("R_lower_leg_shield");
          fVar9 = 4.80645e-43;
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          FUN_00ac94e0("R_leg_armor");
          fVar9 = afStack_34[uVar7 + 4];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x80000;
      }
      if ((param_1[0x377] & 0x100000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_upper_leg_shield");
          FUN_00ac94e0("L_lower_leg_shield");
          fVar9 = 4.82047e-43;
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          FUN_00ac94e0("L_leg_armor");
          fVar9 = afStack_34[uVar7 + 6];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x100000;
      }
      if ((param_1[0x377] & 0x200000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_forearm_armor1");
          FUN_00ac94e0("R_shoulder_pad");
          fVar9 = 4.76441e-43;
        }
        else {
          FUN_00ac94e0("R_shoulder_armor");
          fVar9 = afStack_34[uVar7];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x200000;
      }
      if ((param_1[0x377] & 0x400000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_forearm_armor");
          FUN_00ac94e0("L_shoulder_pad");
          fVar9 = 4.77843e-43;
        }
        else {
          FUN_00ac94e0("L_shoulder_armor");
          fVar9 = afStack_34[uVar7 + 2];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD02");
        FUN_00ac8dd0("_L_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x400000;
      }
      if ((param_1[0x375] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      }
      param_1[0x375] = param_1[0x375] | 0x1000;
    }
  }
  iVar3 = FUN_00a8c760(0x1c);
  if (iVar3 == 0) {
    iVar3 = FUN_00ac82f0();
    if (iVar3 != 0) {
      param_1[0x251] = 1;
      return;
    }
    if (((param_1[0x251] == 0) && (unaff_EBX != 0.0)) && (iVar3 = FUN_00a8cac0(), iVar3 < 2)) {
      FUN_00a8ce90(local_44,afStack_34);
      fVar8 = (float10)FUN_00ddba30(*(float *)((int)unaff_EBX + 0x94) + afStack_34[1]);
      param_1[0x25] = (int)(float)fVar8;
      D3DXVec3TransformNormal(local_44,local_44,(int)unaff_EBX + 0x10);
      fVar9 = *(float *)((int)unaff_EBX + 0x44);
      fVar1 = *(float *)((int)unaff_EBX + 0x48);
      param_1[0x14] = (int)(unaff_EDI + *(float *)((int)unaff_EBX + 0x40));
      param_1[0x15] = (int)(fVar9 + unaff_ESI);
      param_1[0x16] = (int)(fVar1 + unaff_EBX);
      param_1[0x17] = local_44[0];
      return;
    }
  }
  else {
    if (param_1[0x250] == 0) {
      CharacterControl::setHeight(0x3ff33333);
      CharacterControl::setRadius(0x3f000000);
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_009f8b10();
        FUN_00a7c950();
      }
      pcVar2 = *(code **)(*param_1 + 0x314);
      param_1[0x195] = -1;
      (*pcVar2)();
    }
    param_1[0x250] = 1;
  }
  return;
}

// 00B48ED0  Em0010::vf298  size=184  [class]
void __fastcall Em0010::vf298(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffffdf;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x40;
  if (((*(uint *)(param_1 + 0xddc) & 0x3000) == 0) &&
     ((*(uint *)(param_1 + 0xdd8) & 0x20000000) == 0)) {
    iVar1 = FUN_00a85630();
    if (iVar1 != 5) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 8) {
        if ((*(uint *)(param_1 + 0xdd8) & 0x80000000) != 0) {
          if (*(int *)(param_1 + 0xfa4) != 0) {
            FUN_00b39f00(5,0,0,0);
            return;
          }
          FUN_00b39f00(0x1e,0,0,0);
          return;
        }
        FUN_00b39f00(4,0,0,0);
        if (((*(uint *)(param_1 + 0xdd8) & 0x80000) != 0) && (DAT_01d64270 != 0)) {
          *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x100000;
          FUN_00ac4710(10);
          FUN_00a8d710(param_1 + 0x40);
        }
      }
    }
  }
  return;
}

// 00B48F90  Em0010::vf2A0  size=321  [class]
void __fastcall Em0010::vf2A0(int *param_1)

{
  int iVar1;
  
  param_1[0x375] = param_1[0x375] & 0xffffffdf;
  param_1[0x375] = param_1[0x375] | 0x40;
  param_1[0x376] = param_1[0x376] & 0x7ffeffff;
  if (((param_1[0x377] & 0x3000U) == 0) && ((*(byte *)(param_1 + 0x375) & 0x10) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if ((iVar1 == 0) && (param_1[0x5d1] != 1)) {
      iVar1 = FUN_00a85630();
      if (iVar1 != 5) {
        if ((param_1[0x186] & 0xffff0000U) != 0xa0000) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 == 8) {
            FUN_00b39f00(9,0,0,0);
            return;
          }
          if ((param_1[0x376] & 0x20000000U) != 0) {
            FUN_00b39f00(0xd0001,0,0,0);
            return;
          }
          if (param_1[0x3e9] == 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          else {
            FUN_00b39f00(0x1f,0,0,0);
          }
        }
        if ((param_1[0x376] & 0x80000U) != 0) {
          if (DAT_01d64270 != 0) {
            param_1[0x376] = param_1[0x376] | 0x100000;
          }
          FUN_00ac4710(10);
          FUN_00a8d710(param_1 + 0x10);
        }
        if (((param_1[0x351] & 0x800000U) != 0) && ((param_1[0x186] & 0xffff0000U) != 0xa0000)) {
          FUN_00e5e0c0("em0010_vo_line_found_1st",param_1,0xffffffff,0);
        }
      }
    }
  }
  return;
}

// 00B490E0  Em0010::vf2A4  size=272  [class]
void __fastcall Em0010::vf2A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffffbf;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x20;
  if ((*(uint *)(param_1 + 0xddc) & 0x2000) == 0) {
    if (*(int *)(param_1 + 0x1744) == 1) {
      FUN_00ac48e0();
      FUN_00b39f00(0xb000a,0,0,0);
      return;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 != 8) {
      if (*(int *)(param_1 + 0xfa4) == 0) {
        FUN_00b39f00(0x20,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0xb08) == -1) {
        *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_1 + 0x1750);
        *(undefined4 *)(param_1 + 0x16c4) = *(undefined4 *)(param_1 + 0x1754);
        *(undefined4 *)(param_1 + 0x16c8) = *(undefined4 *)(param_1 + 0x1758);
        uVar1 = *(undefined4 *)(param_1 + 0x175c);
      }
      else {
        if ((*(uint *)(param_1 + 0xdd8) & 0x80000) != 0) {
          FUN_00ac4710(*(int *)(param_1 + 0xb08));
          FUN_00a8d710(param_1 + 0x40);
        }
        FUN_00a8d790(&local_c);
        *(undefined4 *)(param_1 + 0x16c0) = local_c;
        *(undefined4 *)(param_1 + 0x16c4) = local_8;
        *(undefined4 *)(param_1 + 0x16c8) = local_4;
        uVar1 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x16cc) = uVar1;
      FUN_00b39f00(7,0,0,0);
    }
  }
  return;
}

// 00B491F0  Em0010::vf2A8  size=124  [class]
void __fastcall Em0010::vf2A8(int param_1)

{
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffffbf;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x20;
  if ((*(uint *)(param_1 + 0xddc) & 0x2000) == 0) {
    if (*(int *)(param_1 + 0x1744) == 1) {
      FUN_00ac48e0();
      FUN_00b39f00(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x4a8) & 0x100000) != 0) {
      *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x80000000;
    }
    if ((*(uint *)(param_1 + 0xdd8) & 0x80000) != 0) {
      FUN_00b39f00(0xc0007,0,0,0);
      return;
    }
    FUN_00b39f00(0x21,0,0,0);
  }
  return;
}

// 00B49270  FUN_00b49270  size=429  [callgraph]
void __fastcall FUN_00b49270(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00b34f30(*(undefined4 *)(param_1 + 0x1b1c),*(undefined4 *)(param_1 + 0x1b20));
    if (iVar2 != 0) {
      FUN_00ac48e0();
      FUN_00b39f00(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xdd8) & 0x2000000) == 0) {
      if ((4.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x920) < 0.0)) {
        FUN_00b39f00(0x60001,0,0,0);
      }
      if ((((*(int *)(param_1 + 0x13dc) == 1) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0))
          && (*(float *)(param_1 + 0xa8c) < 9.0)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00b39f00(0x60002,0,0,0);
      }
      if (((*(int *)(param_1 + 0x13dc) == 2) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0)) &&
         ((*(float *)(param_1 + 0xa8c) < 9.0 && (*(float *)(param_1 + 0xaa0) < 0.5235988)))) {
        FUN_00b39f00(0x60003,0,0,0);
      }
      if ((*(uint *)(param_1 + 0xdd4) & 0x20000) == 0) {
        if (0.5235988 < *(float *)(param_1 + 0xa9c)) {
          FUN_00b39f00(0x6000a,0,0,0);
        }
        fVar1 = -0.5235988;
      }
      else {
        if (0.87266463 < *(float *)(param_1 + 0xa9c)) {
          FUN_00b39f00(0x6000a,0,0,0);
        }
        fVar1 = -0.87266463;
      }
      if (*(float *)(param_1 + 0xa9c) < fVar1) {
        FUN_00b39f00(0x60009,0,0,0);
      }
    }
  }
  return;
}

// 00B49420  FUN_00b49420  size=223  [callgraph]
void __fastcall FUN_00b49420(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0x366;
  if ((*(uint *)(param_1 + 0xdd4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xdc8) == 8) {
      uVar2 = 0x40;
    }
    else if (*(int *)(param_1 + 0xdc8) != 9) goto LAB_00b49450;
    uVar1 = 0x490;
  }
LAB_00b49450:
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x13dc) == 1) {
      FUN_00b3a190();
      *(undefined4 *)(param_1 + 0xfa4) = 0;
    }
    if (*(int *)(param_1 + 0x13dc) == 2) {
      FUN_00b3a3a0();
      *(undefined4 *)(param_1 + 0xfa4) = 0;
    }
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 00B49500  FUN_00b49500  size=399  [callgraph]
void __fastcall FUN_00b49500(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00b34f30(*(undefined4 *)(param_1 + 0x1b1c),*(undefined4 *)(param_1 + 0x1b20));
    if (iVar2 != 0) {
      FUN_00ac48e0();
      FUN_00b39f00(0xb000a,0,0,0);
      return;
    }
    if ((((*(int *)(param_1 + 0x13dc) == 1) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0)) &&
        (*(float *)(param_1 + 0xa8c) < 9.0)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_00b39f00(0x60002,0,0,0);
      return;
    }
    if (((*(int *)(param_1 + 0x13dc) == 2) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0)) &&
       ((*(float *)(param_1 + 0xa8c) < 100.0 && (*(float *)(param_1 + 0xaa0) < 0.5235988)))) {
      FUN_00b39f00(0x60003,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00b39f00(0x60000,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x20000) == 0) {
      if (0.5235988 < *(float *)(param_1 + 0xa9c)) {
        FUN_00b39f00(0x6000a,0,0,0);
      }
      fVar1 = -0.5235988;
    }
    else {
      if (0.87266463 < *(float *)(param_1 + 0xa9c)) {
        FUN_00b39f00(0x6000a,0,0,0);
      }
      fVar1 = -0.87266463;
    }
    if (*(float *)(param_1 + 0xa9c) < fVar1) {
      FUN_00b39f00(0x60009,0,0,0);
    }
  }
  return;
}

// 00B49690  FUN_00b49690  size=174  [callgraph]
void __fastcall FUN_00b49690(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x36a;
  if ((*(uint *)(param_1 + 0xdd4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xdc8) == 8) {
      uVar2 = 0x49a;
    }
    else if (*(int *)(param_1 + 0xdc8) == 9) {
      uVar2 = 0x494;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x60004,0,0,0);
  }
  return;
}

// 00B49740  FUN_00b49740  size=257  [callgraph]
void __fastcall FUN_00b49740(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (0.0 <= *(float *)(param_1 + 0x1088)) {
    return;
  }
  if (*(int *)(param_1 + 0x13dc) != 2) {
    return;
  }
  if ((*(uint *)(param_1 + 0xdd4) & 0x20000) == 0) {
    if (((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
       (*(int *)(param_1 + 0x196c) == 0)) {
      FUN_00b39f00(0x60006,0,0,0);
    }
    if (121.0 < *(float *)(param_1 + 0xa8c)) goto LAB_00b4982d;
    fVar1 = 0.54105204;
  }
  else {
    if (((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
       (*(int *)(param_1 + 0x196c) == 0)) {
      FUN_00b39f00(0x60006,0,0,0);
    }
    if (121.0 < *(float *)(param_1 + 0xa8c)) goto LAB_00b4982d;
    fVar1 = 0.80285144;
  }
  if (fVar1 < *(float *)(param_1 + 0xaa0) == (fVar1 == *(float *)(param_1 + 0xaa0))) {
    return;
  }
LAB_00b4982d:
  FUN_00b39f00(0x60005,0,0,0);
  return;
}

// 00B49850  FUN_00b49850  size=51  [callgraph]
void __fastcall FUN_00b49850(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x12d0) == 0)) {
    FUN_00b39f00(0x60004,0,0,0);
    *(undefined4 *)(param_1 + 0x1088) = 0x41f00000;
  }
  return;
}

// 00B49890  FUN_00b49890  size=465  [callgraph]
void __fastcall FUN_00b49890(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0x36b;
  if ((param_1[0x375] & 0x20000U) != 0) {
    if (param_1[0x372] == 8) {
      uVar4 = 0x49b;
    }
    else if (param_1[0x372] == 9) {
      uVar4 = 0x495;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x248] = (int)((float)(int)sVar2 * 30.0 + 90.0);
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0x42480000;
    FUN_00b46c90(1,param_1 + 0x3f4);
    param_1[0x4b4] = 0xf;
  }
  else if (param_1[0x187] != 1) goto LAB_00b49a2c;
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4b4] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b2c180();
    FUN_00b38210(param_1[0x2a1] + 0x40);
    param_1[0x4b4] = param_1[0x4b4] + -1;
    param_1[0x249] = 0x40c00000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00b39f00(0x60004,0,0,0);
  }
LAB_00b49a2c:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3ae4c388,0);
  return;
}

// 00B49AA0  FUN_00b49aa0  size=688  [callgraph]
void __fastcall FUN_00b49aa0(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x318))();
    param_1[0x228] = 0;
    if (param_1[0x2a1] != 0) {
      param_1[0x25] = (int)(*(float *)(param_1[0x2a1] + 0x94) + 3.1415927);
    }
    uVar3 = 0x8000000;
    uVar5 = 0x4d3;
    if (((param_1[0x375] & 0x20000U) != 0) && (uVar5 = 0x4cf, param_1[0x372] == 8)) {
      uVar3 = 0x8000040;
    }
    iVar4 = FUN_00ac82f0();
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    FUN_00aa4080(uVar5,0,uVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
    iVar4 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar4 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0xec) = 0x3f800000;
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
    break;
  case 1:
    break;
  case 2:
    uVar5 = 0;
    uVar3 = 0x4c4;
    if (((param_1[0x375] & 0x20000U) != 0) && (uVar3 = 0x4d0, param_1[0x372] == 8)) {
      uVar5 = 0x40;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar5,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x314);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    goto LAB_00b49c4b;
  case 3:
LAB_00b49c4b:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 0x324))();
    if (iVar4 == 0) {
      return;
    }
LAB_00b49c7f:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar5 = 0x8000000;
    uVar3 = 0x4c5;
    if (((param_1[0x375] & 0x20000U) != 0) && (uVar3 = 0x4d1, param_1[0x372] == 8)) {
      uVar5 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,uVar5,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    FUN_00b2e200(param_1[0x639]);
    iVar4 = FUN_00b3b110();
    if (iVar4 != 0) {
      return;
    }
    if (param_1[0x139] == 0) {
      FUN_00b3b400();
      return;
    }
    goto LAB_00b49c7f;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00b49abb_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00b49abb_default:
  return;
}

// 00B49D70  FUN_00b49d70  size=418  [callgraph]
void __fastcall FUN_00b49d70(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x3d088889;
    }
    uVar1 = 0x8000000;
    if (((param_1[0x375] & 0x20000U) != 0) && (param_1[0x372] == 8)) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x4a7,0,uVar2,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x48);
    param_1[0x225] = (int)(float)fVar4;
    fVar4 = (float10)FUN_00ac85c0(5,0x47);
    param_1[0x289] = (int)(float)fVar4;
    param_1[0x288] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
    (**(code **)(*param_1 + 0x220))(0x41000000);
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0;
    if (((param_1[0x375] & 0x20000U) != 0) && (param_1[0x372] == 8)) {
      uVar2 = 0x40;
    }
    FUN_00aa4080(0x4a8,0,0x3dcccccd,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00b39f00(0x60010,0,0,0);
      return;
    }
  default:
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B49F30  FUN_00b49f30  size=274  [callgraph]
void __fastcall FUN_00b49f30(int param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  local_8[0] = 0x1e3;
  local_8[1] = 0x1e4;
  if (*(int *)(param_1 + 0x61c) == 0) {
    local_c = 0;
    iVar2 = FUN_00ac82f0();
    if (iVar2 != 0) {
      local_c = 0x3d088889;
    }
    uVar1 = FUN_00dde2a0(1,1000);
    FUN_00aa4080(local_8[uVar1 & 1],0,local_c,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar3 = (float10)FUN_00ac85c0(5,0x4b);
    *(float *)(param_1 + 0xa24) = (float)fVar3;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    fVar3 = (float10)FUN_00ac85c0(5,0x4c);
    *(float *)(param_1 + 0x894) = (float)fVar3;
    if (*(int *)(param_1 + 0x13a4) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_00b30b70();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b39f00(0x6000f,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B4A050  FUN_00b4a050  size=257  [callgraph]
void __fastcall FUN_00b4a050(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar3 = 0;
    if (((*(uint *)(param_1 + 0xdd4) & 0x20000) != 0) && (*(int *)(param_1 + 0xdc8) == 8)) {
      uVar3 = 0x40;
    }
    iVar2 = FUN_00ac82f0();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    FUN_00aa4080(0x4a8,0,uVar1,0x3f800000,uVar3,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4b);
    *(float *)(param_1 + 0xa24) = (float)fVar4;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4c);
    *(float *)(param_1 + 0x894) = (float)fVar4;
    if (*(int *)(param_1 + 0x13a4) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_00b30b70();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b39f00(0x6000f,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B4A160  FUN_00b4a160  size=80  [callgraph]
void __fastcall FUN_00b4a160(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00b39f00(0x60010,0,0,0);
  }
  return;
}

// 00B4A1B0  FUN_00b4a1b0  size=291  [callgraph]
void __fastcall FUN_00b4a1b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    uVar2 = 0x8000000;
    if (((*(uint *)(param_1 + 0xdd4) & 0x20000) != 0) && (*(int *)(param_1 + 0xdc8) == 8)) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x4a9,0,0x3c888889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00b30b70();
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00b3b110();
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00b2e200(*(undefined4 *)(param_1 + 0x18e4));
    FUN_00b3b400();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00b3b110(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00b2e200(*(undefined4 *)(param_1 + 0x18e4));
      FUN_00b3b400();
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    return;
  }
  return;
}

// 00B4A2E0  FUN_00b4a2e0  size=431  [callgraph]
void __fastcall FUN_00b4a2e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    uVar4 = 0;
    uVar3 = 0x1c3;
    if ((param_1[0x375] & 0x20000U) != 0) {
      if (param_1[0x372] == 8) {
        uVar4 = 0x40;
        uVar3 = 0x1c4;
      }
      if (param_1[0x372] == 9) {
        uVar3 = 0x1c4;
      }
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43960000;
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(param_1[0x573],param_1 + 0x574);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
                    /* WARNING: Could not recover jumptable at 0x00b4a3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 6:
    FUN_00aa4080(0x1c2,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43960000;
    (**(code **)(*param_1 + 0x358))(param_1[0x573],param_1 + 0x574);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
      FUN_00b3b400();
      return;
    }
    break;
  default:
    goto switchD_00b4a2f4_default;
  }
switchD_00b4a2f4_default:
  return;
}

// 00B4A4B0  FUN_00b4a4b0  size=489  [callgraph]
void __fastcall FUN_00b4a4b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00b34f30(*(undefined4 *)(param_1 + 0x1b1c),*(undefined4 *)(param_1 + 0x1b20));
    if (iVar1 != 0) {
      FUN_00ac48e0();
      FUN_00b39f00(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xdd8) & 0x2000000) == 0) {
      if ((2.25 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x920) < 0.0)) {
        FUN_00b39f00(0x50001,0,0,0);
      }
      if (1.5707964 < *(float *)(param_1 + 0xaa0)) {
        FUN_00b39f00(0x50001,0,0,0);
      }
      if (*(int *)(param_1 + 0x4b0) != 0x20170) {
        if (((*(int *)(param_1 + 0x13dc) == 1) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0))
           && ((*(byte *)(param_1 + 0x1748) & 2) == 0)) {
          if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
            FUN_00b39f00(0x50002,0,0,0);
            return;
          }
        }
        else {
          if (((*(int *)(param_1 + 0x13dc) != 2) || ((*(uint *)(param_1 + 0xdd4) & 0x40000000) != 0)
              ) || ((*(byte *)(param_1 + 0x1748) & 2) != 0)) {
            if (4.0 <= *(float *)(param_1 + 0xa8c)) {
              return;
            }
            FUN_00b39f00(0x50007,0,0,0);
            return;
          }
          if ((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 1.7453293)) {
            FUN_00b39f00(0x50003,0,0,0);
            return;
          }
        }
        FUN_00b39f00(0x50001,0,0,0);
        return;
      }
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00b39f00(0x1001a,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B4A6A0  FUN_00b4a6a0  size=244  [callgraph]
void __fastcall FUN_00b4a6a0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x37b;
  if (*(int *)(param_1 + 0x4b0) == 0x20170) {
    uVar1 = 0x576;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,(*(uint *)(param_1 + 0x1748) & 2) << 5,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if ((*(int *)(param_1 + 0x13dc) == 1) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0)) {
      FUN_00b3a190();
      *(undefined4 *)(param_1 + 0xfa4) = 0;
    }
    if ((*(int *)(param_1 + 0x13dc) == 2) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0)) {
      FUN_00b3a3a0();
      *(undefined4 *)(param_1 + 0xfa4) = 0;
    }
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 00B4A7A0  FUN_00b4a7a0  size=372  [callgraph]
void __fastcall FUN_00b4a7a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00b34f30(*(undefined4 *)(param_1 + 0x1b1c),*(undefined4 *)(param_1 + 0x1b20));
    if (iVar1 != 0) {
      FUN_00ac48e0();
      FUN_00b39f00(0xb000a,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x4b0) == 0x20170) {
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00b39f00(0x1001a,0,0,0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x13dc) == 1) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0))
            && ((*(byte *)(param_1 + 0x1748) & 2) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00b39f00(0x50002,0,0,0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x13dc) == 2) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) == 0))
            && ((*(byte *)(param_1 + 0x1748) & 2) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00b39f00(0x50003,0,0,0);
        return;
      }
    }
    else if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00b39f00(0x50007,0,0,0);
    }
  }
  return;
}

// 00B4A920  FUN_00b4a920  size=215  [callgraph]
void __fastcall FUN_00b4a920(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x381,0,0x3e088889,0x3f800000,(param_1[0x5d2] & 2U | 0x400000) << 5,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b4a9ad;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x50004,0,0,0);
  }
LAB_00b4a9ad:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00B4AA00  FUN_00b4aa00  size=352  [callgraph]
void __fastcall FUN_00b4aa00(int *param_1)

{
  float fVar1;
  float local_8;
  undefined1 local_4 [4];
  
  if (param_1[0x187] != 0) {
    thunk_FUN_00dde510(&local_8,local_4,param_1[0x2a1] + 0x40,param_1 + 0x10);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((-1.0 <= local_8) && (fVar1 = local_8, 1.0 < local_8)) {
      fVar1 = 1.0;
    }
    param_1[0x564] = (int)((fVar1 - (float)param_1[0x564]) * 0.1 + (float)param_1[0x564]);
    if ((((float)param_1[0x422] < 0.0) && (param_1[0x4f7] == 2)) &&
       ((*(byte *)(param_1 + 0x5d2) & 2) == 0)) {
      if ((((float)param_1[0x2a3] < 100.0) && ((float)param_1[0x2a8] < 0.7853982)) &&
         (param_1[0x65b] == 0)) {
        FUN_00b39f00(0x50006,0,0,0);
      }
      if ((121.0 < (float)param_1[0x2a3]) ||
         (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 0.80285144 < fVar1 != (fVar1 == 0.80285144))
         ) {
        FUN_00b39f00(0x50005,0,0,0);
      }
    }
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00B4AC10  FUN_00b4ac10  size=483  [callgraph]
void __fastcall FUN_00b4ac10(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("HAIZURI ASS FIRE",0x3e088889,0,0);
    uVar4 = (*(uint *)(param_1 + 0x1748) & 2) << 5 | 0x80000;
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x386,0x3e088889,uVar4);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x382,0x3e088889,uVar4);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x385,0x3e088889,uVar4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    sVar2 = FUN_00dde2d0(3,6);
    *(float *)(param_1 + 0x920) = (float)(int)sVar2 * 30.0 + 90.0;
    sVar2 = FUN_00dde2d0(1,3);
    *(float *)(param_1 + 0x920) = (float)(int)sVar2 * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0x42480000;
    FUN_00b46c90(1,param_1 + 0xfd0);
    *(undefined4 *)(param_1 + 0x12d0) = 0xf;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = fVar1;
  if ((fVar1 <= 0.0) && (*(int *)(param_1 + 0x12d0) != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b2c4f0();
    FUN_00b38210(*(int *)(param_1 + 0xa84) + 0x40);
    *(int *)(param_1 + 0x12d0) = *(int *)(param_1 + 0x12d0) + -1;
    *(undefined4 *)(param_1 + 0x924) = 0x40c00000;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1590),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00b39f00(0x50004,0,0,0);
  }
  return;
}

// 00B4AE00  FUN_00b4ae00  size=131  [callgraph]
void __fastcall FUN_00b4ae00(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  param_1[0x377] = param_1[0x377] | 0x2000;
  FUN_00a93090(7);
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x1d9] != 0) {
    FUN_008e3c10();
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
    if (iVar2 != 0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
  }
  FUN_00b39f00(0x10000000,0,0,0);
  return;
}

// 00B4AE90  FUN_00b4ae90  size=229  [callgraph]
void __fastcall FUN_00b4ae90(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x372] == 0x10) {
    FUN_00b3b110();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      param_1[0x25] = *(int *)(iVar1 + 0x94);
    }
  }
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = param_1[0x11];
  param_1[0x16] = param_1[0x12];
  param_1[0x17] = param_1[0x13];
  FUN_00a7c950();
  param_1[0x377] = param_1[0x377] & 0xffffdfff;
  FUN_00a93090(6);
  FUN_009f8b10();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
    if (iVar1 != 0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(1);
    }
  }
  return;
}

// 00B4AF80  FUN_00b4af80  size=282  [callgraph]
void __fastcall FUN_00b4af80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x41a;
    if (*(int *)(param_1 + 0x618) == 0x10000015) {
      uVar1 = 0x41b;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0x618) == 0x10000014) {
      puVar3 = &DAT_01645724;
    }
    else {
      puVar3 = &DAT_01645740;
    }
    FUN_00b3a5d0(puVar3,1);
    *(undefined4 *)(param_1 + 0x19d4) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    iVar2 = FUN_00b32fa0();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_00b32fa0();
      uVar1 = *(undefined4 *)(iVar2 + 0x94);
    }
    FUN_00b37f40(0xbf490fdb,uVar1,0x40c00000,1,0);
  }
  return;
}

// 00B4B0A0  FUN_00b4b0a0  size=320  [callgraph]
void __fastcall FUN_00b4b0a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x318))();
    uVar2 = 0x40d;
    if ((param_1[0x128] != 1) && (param_1[0x128] != 6)) {
      uVar2 = 0x412;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0x40e;
    if ((param_1[0x128] != 1) && (param_1[0x128] != 6)) {
      uVar2 = 0x413;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00b39f00(0x10000027,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00b4b1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  default:
    goto switchD_00b4b0b4_default;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00b4b0b4_default:
  return;
}

// 00B4B1F0  FUN_00b4b1f0  size=301  [callgraph]
void __fastcall FUN_00b4b1f0(int *param_1)

{
  int iVar1;
  undefined1 auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x40f,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = (int)((float)param_1[0x244] * -0.03);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((param_1[0x128] != 1) && (param_1[0x128] != 6)) {
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = (float)param_1[0x244] * 0.05;
    D3DXMatrixRotationY(local_50,param_1[0x25]);
    D3DXVec3TransformNormal(auStack_68,auStack_68,&local_58);
    param_1[0x14] = (int)((float)param_1[0x14] + local_60);
    param_1[0x15] = (int)((float)param_1[0x15] + local_5c);
    param_1[0x16] = (int)((float)param_1[0x16] + local_58);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_54);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00b39f00(0x10000028,0,0,0);
  }
  return;
}

// 00B4B320  FUN_00b4b320  size=365  [callgraph]
void __fastcall FUN_00b4b320(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4120(0x43f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4120(0x440,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4120(0x441,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00b39f00(0xb0000,0,0,0);
      return;
    }
  }
  return;
}

// 00B4B4B0  FUN_00b4b4b0  size=225  [callgraph]
void __fastcall FUN_00b4b4b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x187] == 0) {
    FUN_00aa4120(0x443,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 800))(0x3d888889), iVar1 == 0)) {
    return;
  }
  FUN_009f8b10();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  FUN_00b39f00(0xa0005,0,0,0);
  param_1[0x187] = 2;
  return;
}

// 00B4B5A0  FUN_00b4b5a0  size=373  [callgraph]
undefined4 __fastcall FUN_00b4b5a0(int param_1)

{
  float fVar1;
  short sVar2;
  
  if (*(int *)(param_1 + 0x19d4) == 0) {
    *(undefined4 *)(param_1 + 0x15b8) = 0x42480000;
    FUN_00b46c90(1,param_1 + 0xfd0);
    *(undefined4 *)(param_1 + 0x19d4) = 1;
  }
  else if (*(int *)(param_1 + 0x19d4) != 1) goto LAB_00b4b67a;
  fVar1 = *(float *)(param_1 + 0x15b8) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x15b8) = fVar1;
  if ((fVar1 <= 0.0) && (*(int *)(param_1 + 0x12d0) != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a94bc0(2,0);
    FUN_00aa4080(0x3bc,2,0,0x3f800000,0x8000010,0,0x3f800000);
    *(int *)(param_1 + 0x12d0) = *(int *)(param_1 + 0x12d0) + -1;
    *(undefined4 *)(param_1 + 0x15b8) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x12d8) = 1;
  }
LAB_00b4b67a:
  if ((*(int *)(param_1 + 0x12d0) == 0) && (*(float *)(param_1 + 0x15b8) <= 0.0)) {
    sVar2 = FUN_00dde2d0(0,2);
    fVar1 = (float)(sVar2 + 1) * 60.0;
    *(float *)(param_1 + 0x1088) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1088) = fVar1 + 120.0;
    }
    *(undefined4 *)(param_1 + 0x12d0) = *(undefined4 *)(param_1 + 0x12d4);
    *(undefined4 *)(param_1 + 0x19d4) = 0;
    FUN_00eaa6e0(0x41200000,0);
    return 1;
  }
  return 0;
}

// 00B4B720  FUN_00b4b720  size=868  [callgraph]
void __fastcall FUN_00b4b720(int *param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar3 = param_1[0x186];
    uVar1 = 0x2ac;
    if (iVar3 == 0x10011) {
      uVar1 = 0x2ad;
    }
    if (iVar3 == 0x10012) {
      uVar1 = 0x2ae;
    }
    if (iVar3 == 0x10013) {
      uVar1 = 0x2af;
    }
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    iVar3 = param_1[0x186];
    param_1[0x6b6] = iVar3;
    uVar1 = 0x2a8;
    if (iVar3 == 0x10011) {
      uVar1 = 0x2a9;
    }
    if (iVar3 == 0x10012) {
      uVar1 = 0x2aa;
    }
    if (iVar3 == 0x10013) {
      uVar1 = 0x2ab;
    }
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00b2e200((float)(int)sVar2);
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) break;
    if ((20.25 <= (float)param_1[0x2a3]) || (0.7853982 <= (float)param_1[0x2a8])) {
      sVar2 = FUN_00dde2d0(0,1);
LAB_00b4b99f:
      FUN_00b2e200((float)(int)sVar2);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      iVar3 = param_1[0x186];
      if (iVar3 == 0x10010) {
        param_1[0x250] = 699;
        param_1[0x251] = 0x10012;
        FUN_00a8d280();
        param_1[0x187] = param_1[0x187] + 1;
        break;
      }
      if (iVar3 == 0x10011) {
        param_1[0x250] = 700;
      }
      else {
        if (iVar3 != 0x10012) {
          sVar2 = FUN_00dde2d0(0,1);
          goto LAB_00b4b99f;
        }
        if (param_1[0x18a] == 0x10013) break;
        param_1[0x250] = 0x2bd;
      }
      param_1[0x251] = 0x10013;
      FUN_00a8d280();
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(param_1[0x250],0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00b39f00(param_1[0x251],2,0,0);
    }
  default:
    break;
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B4BAA0  FUN_00b4baa0  size=175  [callgraph]
void __fastcall FUN_00b4baa0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a4,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b3a3a0();
    *(undefined1 *)(param_1 + 0x3de) = 0;
    FUN_00b3a5d0(&DAT_016467c0,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    FUN_00b3a290();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4bb4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B4BB50  FUN_00b4bb50  size=175  [callgraph]
void __fastcall FUN_00b4bb50(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a5,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b3a480();
    *(undefined1 *)(param_1 + 0x3de) = 0;
    FUN_00b3a5d0(&DAT_016467c8,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 != 0) {
    FUN_00b3a190();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4bbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B4BC00  FUN_00b4bc00  size=255  [callgraph]
void __fastcall FUN_00b4bc00(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x28e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined4 *)(param_1 + 0xf94) = 0x42680000;
    *(undefined4 *)(param_1 + 0xf98) = 0x42100000;
    *(undefined4 *)(param_1 + 0x1740) = 0;
    *(undefined1 *)(param_1 + 0xf90) = 1;
    *(undefined4 *)(param_1 + 0xf7c) = 0x428c0000;
    *(undefined4 *)(param_1 + 0xf9c) = 0;
    *(undefined1 *)(param_1 + 0xf78) = 1;
    *(undefined4 *)(param_1 + 0xf80) = 1;
    FUN_00b3a5d0(&DAT_016467d0,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0x20000,0,0,0);
  }
  return;
}

// 00B4BD00  FUN_00b4bd00  size=246  [callgraph]
void __fastcall FUN_00b4bd00(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x168c) = 1;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x28f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1590) = 0;
    *(undefined4 *)(param_1 + 0xf94) = 0x42900000;
    *(undefined4 *)(param_1 + 0xf98) = 0x42900000;
    *(undefined4 *)(param_1 + 0x1740) = 0;
    *(undefined4 *)(param_1 + 0xf7c) = 0x42040000;
    *(undefined1 *)(param_1 + 0xf90) = 1;
    *(undefined4 *)(param_1 + 0xf9c) = 1;
    *(undefined1 *)(param_1 + 0xf78) = 1;
    *(undefined4 *)(param_1 + 0xf80) = 0;
    FUN_00b3a5d0(&DAT_016467dc,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b39f00(0xe,0,0,0);
  }
  return;
}

// 00B4BE00  FUN_00b4be00  size=45  [callgraph]
void __fastcall FUN_00b4be00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82d50();
  if ((iVar1 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
    FUN_00b39f00(0,0,0,0);
  }
  return;
}

// 00B4BE30  FUN_00b4be30  size=329  [callgraph]
void __fastcall FUN_00b4be30(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  if (param_1[0x187] == 0) goto LAB_00b4bf55;
  if (((param_1[0x2a1] == 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (param_1[0x63a] == 0)) {
LAB_00b4bebd:
    if (param_1[0x63c] != 0) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
      goto LAB_00b4bf55;
    }
  }
  else if (param_1[0x63c] != 0) {
    if ((param_1[0x2fa] == 0) && ((float)param_1[0x2a3] < 16.0)) {
      FUN_00b39f00(0x10002,0,0,0);
      FUN_00c27260(param_1[0x639]);
      return;
    }
    goto LAB_00b4bebd;
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
  if (30.0 < (float)param_1[0x244] + fVar1) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (param_1[0x3ed] != 0) {
        FUN_00b39f00(0x11,0,0,0);
      }
    }
    else if (param_1[0x3ec] != 0) {
      FUN_00b39f00(0x10,0,0,0);
    }
  }
LAB_00b4bf55:
  if (4.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4bf77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B4BF80  FUN_00b4bf80  size=369  [callgraph]
void __fastcall FUN_00b4bf80(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x198a),0,0x3e088889,0x3f800000,0,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5c6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b4bfec;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b4bfec:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d2c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d2c);
      iVar2 = FUN_00dd6d80(puVar4);
      if ((iVar2 != 0) && (iVar2 = FUN_00a12210(0), iVar2 != 0)) {
        iVar2 = FUN_00a12210(0);
        param_1[0x5b0] = *(int *)(iVar2 + 0x40);
        param_1[0x5b1] = *(int *)(iVar2 + 0x44);
        param_1[0x5b2] = *(int *)(iVar2 + 0x48);
        param_1[0x5b3] = *(int *)(iVar2 + 0x4c);
        FUN_00a8e880(param_1 + 0x5b0);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
        fVar1 = (float)param_1[0x10] - (float)param_1[0x5b0];
        if ((param_1[0x5c6] != 0) ||
           (fVar1 = ((float)param_1[0x12] - (float)param_1[0x5b2]) *
                    ((float)param_1[0x12] - (float)param_1[0x5b2]) + fVar1 * fVar1,
           fVar1 < 1.0 != (fVar1 == 1.0))) {
          FUN_00b39f00(0x7000c,0,0,0);
        }
      }
    }
  }
  return;
}

// 00B4C100  FUN_00b4c100  size=237  [callgraph]
void __fastcall FUN_00b4c100(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x485,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(10);
  if (iVar1 != 0) {
    FUN_00b3a840();
    param_1[0x65f] = 0x4680454;
    param_1[0x660] = 0x4680468;
    param_1[0x661] = 0x470046c;
    param_1[0x662] = 0x4780474;
    param_1[0x663] = 0x4780478;
    param_1[0x664] = 0x47c047b;
    *(undefined4 *)((int)param_1 + 0x199a) = 0x4810481;
    *(undefined4 *)((int)param_1 + 0x199e) = 0x47d0483;
    *(undefined4 *)((int)param_1 + 0x19a2) = 0x48c048c;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4c1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B4C1F0  FUN_00b4c1f0  size=303  [callgraph]
void __fastcall FUN_00b4c1f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4e4) == 0) && (-1 < *(int *)(param_1 + 0x870))) &&
     ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0xb0000)) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xf8c);
      iVar2 = FUN_00b335d0();
      if (iVar2 != 0) {
        FUN_00ac8b80(*(undefined4 *)(iVar2 + 0x4f0));
        *(undefined4 *)(param_1 + 0xf8c) = 0;
      }
      if (iVar1 != 0) {
        FUN_00b39f00(0x7000d,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x13e0) = 0;
      iVar1 = FUN_00b34d30();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x4a0) = 0xb;
        *(undefined4 *)(param_1 + 0x197c) = 0x2930292;
        *(undefined4 *)(param_1 + 0x1980) = 0x2930293;
        *(undefined4 *)(param_1 + 0x1984) = 0x2980297;
        *(undefined4 *)(param_1 + 0x1988) = 0x2940299;
        *(undefined4 *)(param_1 + 0x198c) = 0x2940294;
        *(undefined4 *)(param_1 + 0x1990) = 0x2960295;
        *(undefined4 *)(param_1 + 0x1994) = 0x29b029a;
        *(undefined4 *)(param_1 + 0x1998) = 0x29e029c;
        *(undefined4 *)(param_1 + 0x199c) = 0x2c1029f;
        *(undefined4 *)(param_1 + 0x19a0) = 0x2b1029d;
        *(uint *)(param_1 + 0xddc) = *(uint *)(param_1 + 0xddc) & 0xffff7fff;
        return;
      }
      *(undefined4 *)(param_1 + 0x4a0) = 0;
      FUN_00b2e5f0(0);
      *(uint *)(param_1 + 0xddc) = *(uint *)(param_1 + 0xddc) & 0xffff7fff;
    }
  }
  return;
}

// 00B4C320  FUN_00b4c320  size=112  [callgraph]
void __thiscall FUN_00b4c320(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[0x3e3] != 0) && (param_1[0x186] != 0x110001)) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      uVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        uVar2 = FUN_00a7c8a0();
      }
      (**(code **)(*param_1 + 0x198))(uVar2,param_2,3);
      FUN_00b39f00(0x110001,0,0,0);
    }
  }
  return;
}

// 00B4C3F0  FUN_00b4c3f0  size=312  [callgraph]
undefined4 __thiscall FUN_00b4c3f0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = *param_2;
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || ((iVar1 == 0x1b0 || (iVar1 == 0x147)))) {
    return 0;
  }
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar3 = FUN_00a7c8a0();
  }
  param_1[0x236] = param_1[0x236] - param_2[1];
  (**(code **)(*param_1 + 0x198))(uVar3,param_2,1);
  uVar4 = 0;
  if ((param_1[0x234] == 0) && (param_1[0x236] < param_1[0x237] / 2)) {
    param_1[0x234] = 1;
  }
  if (*param_2 == 0x4f) {
    param_1[0x236] = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar5 = &DAT_01be9d20;
        (**(code **)(*piVar2 + 4))(&DAT_01be9d20);
        iVar1 = FUN_00dd6d80(puVar5);
        uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
  }
  if (param_1[0x236] < 1) {
    if (uVar4 != 0) {
      FUN_00b4c1f0();
    }
    FUN_009fdde0();
    return 1;
  }
  if (uVar4 != 0) {
    FUN_00b4c320(param_2);
  }
  return 1;
}

// 00B4C530  FUN_00b4c530  size=837  [callgraph]
bool __thiscall FUN_00b4c530(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = FUN_00ac8a30();
  bVar3 = param_2 == 0;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    if (param_2 == 0) {
      if (param_4 == param_3) {
        return true;
      }
      FUN_00b39f00(0xb0000,0,0,0);
    }
    param_1[0x5d2] = param_1[0x5d2] | 4;
    if (param_1[0x294] != 0) {
      FUN_00b354b0(1,1);
    }
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    param_1[0x4f3] = *(int *)(iVar2 + 8);
    return false;
  case 4:
  case 5:
  case 8:
  case 9:
    if (param_2 == 0) {
      if (param_4 == param_3) {
        return true;
      }
      param_1[0x375] = param_1[0x375] & 0xfffdffff;
      if ((param_3 == 9) || (param_3 == 8)) {
        param_1[0x375] = param_1[0x375] | 0x20000;
      }
      FUN_00b39f00(0xa001a,0,0,0);
    }
    param_1[0x5d2] = param_1[0x5d2] | 8;
    param_1[0x5d1] = 1;
    goto LAB_00b4c6d4;
  case 6:
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x5d2) & 4) != 0) {
        return true;
      }
      FUN_00b39f00(0xa001b,0,0,0);
    }
    param_1[0x5d2] = param_1[0x5d2] | 1;
    param_1[0x5d1] = 2;
    break;
  case 7:
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x5d2) & 4) != 0) {
        return true;
      }
      FUN_00b39f00(0xa001c,0,0,0);
    }
    param_1[0x5d2] = param_1[0x5d2] | 2;
    param_1[0x5d1] = 2;
    FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
    return bVar3;
  case 0xe:
    if (param_2 == 0) {
      if ((param_4 == param_3) || ((param_1[0x5d1] == 1 && ((param_1[0x375] & 0x20000U) == 0)))) {
        FUN_00b39f00(0x60007,0,0,0);
      }
      else {
        pcVar1 = *(code **)(*param_1 + 0x34c);
        param_1[0x5d1] = 1;
        (*pcVar1)();
      }
    }
    iVar2 = param_1[0x13c];
    goto LAB_00b4c747;
  case 0xf:
    if (param_2 == 0) {
      FUN_00b39f00(0xa001d,0,0,0);
    }
    iVar2 = param_1[0x13c];
LAB_00b4c747:
    param_1[0x5d1] = 1;
    FUN_00c1a300(iVar2,param_1 + 0x2ac);
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    return bVar3;
  default:
    return bVar3;
  case 0x11:
  case 0x12:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00b39f00(0xa001e,0,0,0);
    }
LAB_00b4c6d4:
    FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
    return bVar3;
  case 0x1b:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00b39f00(0xa001f,0,0,0);
    }
    break;
  case 0x1c:
    FUN_00b39f00(0xa0020,2,0,0);
    iVar2 = param_1[0x13c];
    goto LAB_00b4c621;
  case 0x1d:
    FUN_00b39f00(0xb000c,0,0,0);
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    return bVar3;
  case 0x1e:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00b39f00(0xa0000,0,0,0);
    }
    iVar2 = param_1[0x13c];
    goto LAB_00b4c621;
  }
  iVar2 = param_1[0x13c];
LAB_00b4c621:
  FUN_00c1a300(iVar2,param_1 + 0x2ac);
  return bVar3;
}

// 00B4C8D0  Em0010::vf258  size=960  [class]
void __thiscall Em0010::vf258(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  uVar4 = 0;
  if ((param_3 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*piVar1 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if (iVar2 != 0) {
      FUN_00a7c940(piVar1 + 0x21c);
      FUN_00a81330();
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        puVar6 = &DAT_01be9d20;
        (**(code **)(*piVar1 + 4))(&DAT_01be9d20);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
      }
    }
  }
  iVar2 = param_4;
  switch(param_2) {
  case 0:
    iVar2 = 1;
    if (*(int *)(param_4 + 0x24) == 0x30070) {
      iVar2 = 7;
    }
    if (*(int *)(param_4 + 0x24) == 0x30060) {
      iVar2 = 6;
    }
    param_4 = FUN_00ac8c70(param_4);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    if (*(int *)(param_4 + 0xc) == 9) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(int *)(param_1 + 0x13dc) = iVar2;
      FUN_00b3a190();
    }
    else {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x13e4) != iVar2)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x13e0) = iVar2;
      }
      else {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x13dc) = iVar2;
      }
      FUN_00b3a290();
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_00b2fbf0(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
LAB_00b4cc71:
      FUN_00a7c960(&param_4);
      uVar3 = FUN_00ac89d0();
      *(undefined4 *)(iVar2 + 0x518) = uVar3;
    }
    break;
  case 1:
    break;
  case 2:
    iVar2 = *(int *)(param_4 + 0x24);
    iVar5 = 3;
    if ((iVar2 == 0x30040) || (iVar2 == 0x30042)) {
      iVar5 = 2;
    }
    if (iVar2 == 0x30080) {
      iVar5 = 5;
    }
    param_4 = FUN_00ac8c70(param_4);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    if (*(int *)(param_4 + 0xc) == 9) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(int *)(param_1 + 0x13dc) = iVar5;
      FUN_00b3a3a0();
    }
    else {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x13e4) != iVar5)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x13e0) = iVar5;
      }
      else {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x13dc) = iVar5;
      }
      FUN_00b3a480();
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_00b2fbf0(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      goto LAB_00b4cc71;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x13e0) = 4;
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_00b2fc20(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      FUN_00a7c960(&param_4);
      FUN_00b3a840();
      uVar3 = FUN_00ac89d0();
      *(undefined4 *)(iVar2 + 0x518) = uVar3;
      return;
    }
    break;
  case 4:
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    iVar2 = FUN_00ac8c70(iVar2);
    if (*(int *)(iVar2 + 0xc) == 0xd) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(undefined4 *)(param_1 + 0x13dc) = 6;
      FUN_00b3aa30(1);
    }
    else {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x13e4) != 6)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(undefined4 *)(param_1 + 0x13e0) = 6;
      }
      else {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(undefined4 *)(param_1 + 0x13dc) = 6;
      }
      FUN_00b3aba0(1);
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_00b2fbf0(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      goto LAB_00b4cc71;
    }
    break;
  default:
    goto switchD_00b4c954_default;
  }
switchD_00b4c954_default:
  return;
}

// 00B4CCB0  Em0010::vf340  size=40  [class]
void __fastcall Em0010::vf340(int param_1)

{
  BehaviorEmBase::vf340();
  if (*(int *)(param_1 + 0xbfc) != 0) {
    FUN_00dd5650(&DAT_016467e4);
    FUN_00b3b5c0();
    return;
  }
  return;
}

// 00B4CCE0  FUN_00b4cce0  size=311  [callgraph]
void __fastcall FUN_00b4cce0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = param_1[0x187];
  param_1[0x5a3] = 1;
  if (iVar2 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_00b4cd55;
  }
  FUN_00aa4120(0x4d,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_00b4cd55:
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] != 0) {
    cVar1 = FUN_00c9db20(0);
    iVar2 = FUN_00a97e60(0x3fc00000,0);
    if ((iVar2 != 0) && (cVar1 != '\0')) {
      FUN_00b39f00(0xc0006,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e860a92,0);
  return;
}

// 00B4CE20  FUN_00b4ce20  size=219  [callgraph]
void __fastcall FUN_00b4ce20(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x509,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x618) == 0xc0007) {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x16c0) = local_c;
      *(undefined4 *)(param_1 + 0x16c4) = local_8;
      *(undefined4 *)(param_1 + 0x16c8) = local_4;
      *(undefined4 *)(param_1 + 0x16cc) = 0x3f800000;
      FUN_00b39f00(0xc0008,0,0,0);
      return;
    }
    FUN_00b39f00(0xc0005,1,0,0);
  }
  return;
}

// 00B4CF00  FUN_00b4cf00  size=277  [callgraph]
void __fastcall FUN_00b4cf00(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    fVar2 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    FUN_00aa4080(0x4d,0,0x3e2aaaab,0x3f800000,0,0,(float)fVar2);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00b4cfe1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x5c6] != 0) ||
     (fVar1 = ((float)param_1[0x10] - (float)param_1[0x5b0]) *
              ((float)param_1[0x10] - (float)param_1[0x5b0]) +
              ((float)param_1[0x11] - (float)param_1[0x5b1]) *
              ((float)param_1[0x11] - (float)param_1[0x5b1]) +
              ((float)param_1[0x12] - (float)param_1[0x5b2]) *
              ((float)param_1[0x12] - (float)param_1[0x5b2]), fVar1 < 2.25 != (fVar1 == 2.25))) {
    FUN_00b39f00(0xc0005,0,0,0);
  }
LAB_00b4cfe1:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00B4D020  FUN_00b4d020  size=276  [callgraph]
void __fastcall FUN_00b4d020(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar3 = 0x30030;
  if ((iVar1 == 0x20150) || (iVar1 == 0x20152)) {
    uVar3 = 0x30070;
  }
  if (iVar1 == 0x20160) {
    uVar3 = 0x30031;
  }
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em0010_Blade",uVar3,0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0164680c);
  }
  else {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar4 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c940(uVar3);
        FUN_00a7c960(&stack0x00000000);
        iVar1 = FUN_00ac89d0();
        piVar2[0x146] = iVar1;
        FUN_00b3a290();
        return;
      }
    }
  }
  FUN_00b3a290();
  return;
}

// 00B4D140  FUN_00b4d140  size=530  [callgraph]
void __thiscall FUN_00b4d140(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [140];
  
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  uVar1 = 0x30040;
  if (*(int *)(param_1 + 0x4b0) == 0x20160) {
    uVar1 = 0x30042;
  }
  iVar2 = FUN_00a82090("Em0010_Assault",uVar1,0);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_01646840);
  }
  else {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d28;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d28);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        uVar1 = FUN_009f8b40();
        FUN_009f8ae0(uVar1);
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c940(uVar1);
        FUN_00a7c960(auStack_94);
        iVar2 = FUN_00ac89d0();
        piVar3[0x146] = iVar2;
      }
    }
    FUN_00b3a480();
    uVar1 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x12d4) = uVar1;
    *(undefined4 *)(param_1 + 0x12d0) = uVar1;
    FUN_0040b190();
    iVar2 = FUN_00a82090("Em0010Magazine",0x30041,auStack_90);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01646860);
      return;
    }
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9d24;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d24);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00a7c940(param_2);
        FUN_00a7c960(auStack_94);
        uVar1 = FUN_009f8b40();
        FUN_009f8ae0(uVar1);
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        piVar3[0x146] = iVar2;
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c940(uVar1);
        FUN_00a7c960(&stack0xffffff68);
        return;
      }
    }
  }
  return;
}

// 00B4D360  FUN_00b4d360  size=298  [callgraph]
void FUN_00b4d360(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  FUN_00a7c950();
  if (param_2 == 0) {
    FUN_00a7c950();
    uVar4 = 0x30060;
    pcVar3 = "Em0010_Blade";
  }
  else {
    FUN_00a7c950();
    uVar4 = 0x30050;
    pcVar3 = "Em0010_SmallBlade";
  }
  iVar1 = FUN_00a82090(pcVar3,uVar4,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      puVar5 = &DAT_0164689c;
    }
    else {
      puVar5 = &DAT_016468bc;
    }
    FUN_00dd5650(puVar5);
  }
  else {
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9d28;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d28);
      iVar1 = FUN_00dd6d80(puVar5);
      if (iVar1 != 0) {
        uVar4 = FUN_009f8b40();
        FUN_009f8ae0(uVar4);
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c940(uVar4);
        FUN_00a7c960(&stack0x00000000);
        iVar1 = FUN_00ac89d0();
        piVar2[0x146] = iVar1;
        FUN_00b3aba0(param_2);
        return;
      }
    }
  }
  FUN_00b3aba0(param_2);
  return;
}

// 00B4D490  FUN_00b4d490  size=1287  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b4d6bb) */
/* WARNING: Removing unreachable block (ram,0x00b4d83e) */

void FUN_00b4d490(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float unaff_retaddr;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
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
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  pfStack_64 = (float *)0xb4d4af;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_2c;
      pfVar7[1] = local_28;
      pfVar7[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (param_4 < (float)param_2) {
    param_2 = (float *)param_4;
  }
  if ((float)param_2 < param_5) {
    param_2 = (float *)param_5;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 <= local_28) {
    local_4c = local_28 + (float)param_2;
  }
  else {
    local_4c = (float)param_2;
    if (local_40 + 5.0 < local_28) {
      local_4c = (float)param_2 * 0.5;
    }
    local_4c = local_4c + local_40;
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * (float)param_2 + local_34;
      pfVar1[1] = unaff_ESI * (float)param_2 + local_30;
      pfVar1[2] = local_5c * (float)param_2 + local_2c;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * unaff_retaddr;
  fVar8 = (float)pfVar7 * unaff_retaddr;
  pfStack_64 = (float *)((float)pfStack_64 * unaff_retaddr);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 00B4DA10  FUN_00b4da10  size=49  [callgraph]
void __fastcall FUN_00b4da10(int param_1)

{
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x19ac) != 0) {
    FUN_00b45fd0();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00B4DA50  FUN_00b4da50  size=509  [callgraph]
void __fastcall FUN_00b4da50(int *param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  
  FUN_00ac8e10(1);
  iVar1 = param_1[0x129];
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(0x20012,0x20010);
  FUN_00a92f90();
  FUN_00e27330(0x2014f,0x20010);
  fVar2 = (float)(iVar1 + -4);
  FUN_00a9e290(&DAT_016a0ecc,0,0,0x3f800000,0x8000000,fVar2 * 0.016666668,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  param_1[0x20b] = 5;
  FUN_00ac94e0("saya_Double");
  if (param_1[300] == 0x20160) {
    FUN_00ac94e0("_face_A");
    FUN_00ac94e0("_face_C");
  }
  FUN_00a7c950();
  FUN_00a7c950();
  if (param_1[0x129] == 4) {
    FUN_00b3bc30(&DAT_016a0ecc,fVar2);
  }
  if (param_1[0x129] == 5) {
    FUN_00b3bc30(&DAT_016a0ecc,fVar2);
    FUN_00b3bd20(&DAT_016a0ecc,fVar2);
  }
  if (param_1[0x129] == 8) {
    FUN_00b3bc30(&DAT_016a0ecc,fVar2);
  }
  FUN_00a7c950();
  FUN_00b3be10(&DAT_016a0ecc,fVar2);
  FUN_00ac94e0("hand_mac");
  FUN_00ac94e0("hand_gun");
  switch(param_1[0x129]) {
  case 4:
    FUN_00ac9210("RM_hand_mac");
    pcVar3 = "LM_hand_mac";
    goto LAB_00b4dc29;
  case 5:
  case 8:
    pcVar3 = "RG_hand_gun";
    break;
  case 6:
  case 7:
    pcVar3 = "RM_hand_mac";
    break;
  default:
    goto switchD_00b4dbf7_default;
  }
  FUN_00ac9210(pcVar3);
  pcVar3 = "LM_hand_mac2";
LAB_00b4dc29:
  FUN_00ac9210(pcVar3);
switchD_00b4dbf7_default:
  FUN_00ac94e0("rifle_ATT");
                    /* WARNING: Could not recover jumptable at 0x00b4dc4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 00B4DC70  FUN_00b4dc70  size=321  [callgraph]
void __fastcall FUN_00b4dc70(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) goto LAB_00b4dd8d;
  if (((param_1[0x2a1] == 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (param_1[0x63a] == 0)) {
LAB_00b4dd03:
    if (param_1[0x63c] != 0) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
      goto LAB_00b4dd8d;
    }
  }
  else if (param_1[0x63c] != 0) {
    iVar3 = FUN_00b46240(1);
    if (iVar3 != 0) {
      return;
    }
    if (((param_1[0x250] == 1) && ((*(byte *)(param_1 + 0x377) & 0x20) != 0)) &&
       ((float)param_1[0x2a3] < 16.0)) {
      FUN_00b39f00(0x10002,0,0,0);
      FUN_00c27260(0x40200000);
      return;
    }
    goto LAB_00b4dd03;
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
  if (30.0 < (float)param_1[0x244] + fVar1) {
    iVar3 = FUN_00b46240(1);
    if (iVar3 != 0) {
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      FUN_00b39f00(0x11,0,0,0);
    }
    else {
      FUN_00b39f00(0x10,0,0,0);
    }
  }
LAB_00b4dd8d:
  if (4.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b4ddaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B4DDD0  FUN_00b4ddd0  size=5973  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b4e63b) */

int __thiscall FUN_00b4ddd0(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  float10 fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  uint local_4;
  
  local_18 = 0;
  local_c = (int *)0x0;
  local_14 = (int *)FUN_00a8cab0();
  local_4 = 0;
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    local_c = (int *)FUN_00a7c8a0();
  }
  iVar7 = *param_2;
  if ((((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) || ((iVar7 == 0x1b0 || (iVar7 == 0x147))))
  goto LAB_00b4f482;
  if (5 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x375] = param_1[0x375] | 0x8000000;
  }
  if ((param_2[0x23] & 0x10000000U) != 0) {
    param_1[0x376] = param_1[0x376] | 0x400;
  }
  local_10 = param_2[1];
  if (0.0 < (float)param_1[0x56d]) {
    local_10 = 0;
  }
  if ((*param_2 == 0xe2) && (param_1[0x186] == 0xb0007)) {
    return 0;
  }
  if (*param_2 == 0x9d) {
    local_10 = 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    local_10 = 0;
  }
  local_4 = 1;
  if ((param_1[0x1d9] != 0) && (iVar7 = FUN_008e24a0(2), iVar7 != 0)) {
    local_4 = 0x8001;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) goto LAB_00b4f482;
  param_1[0x376] = param_1[0x376] & 0xffffefff;
  if ((*param_2 == 0x93) && (iVar7 = FUN_00b34d70(), iVar7 != 0)) {
    local_4 = 0x40000;
    goto LAB_00b4f482;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    bVar2 = true;
    iVar7 = FUN_00b34d30();
    if (((iVar7 != 0) || (param_1[300] == 0x20170)) && ((param_1[0x375] & 0x1000U) == 0)) {
      bVar2 = false;
    }
    iVar7 = FUN_00ac8120();
    if (iVar7 != 0) {
      FUN_00ac8120();
      iVar7 = FUN_00bda170();
      if (iVar7 == 0) goto LAB_00b4df92;
    }
    if (bVar2) {
      local_4 = local_4 | 0x40;
    }
  }
LAB_00b4df92:
  if (((param_2[0x23] & 0x8000U) != 0) &&
     (((iVar7 = FUN_00b34d30(), iVar7 == 0 && (param_1[300] != 0x20170)) ||
      ((param_1[0x375] & 0x1000U) != 0)))) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    if ((param_1[0x377] & 0x40000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_00b34e20();
      FUN_00ac8d40(1);
      param_1[0x377] = param_1[0x377] | 0x40000;
    }
    if ((param_1[0x377] & 0x80000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("R_upper_leg_shield");
        pcVar15 = "R_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("R_hip_armor");
        pcVar15 = "R_leg_armor";
      }
      FUN_00ac94e0(pcVar15);
      FUN_00ac9420("_EFD003");
      FUN_00ac8dd0("_R_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x80000;
    }
    if ((param_1[0x377] & 0x100000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_upper_leg_shield");
        pcVar15 = "L_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        pcVar15 = "L_leg_armor";
      }
      FUN_00ac94e0(pcVar15);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x100000;
    }
    if ((param_1[0x377] & 0x200000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar15 = "R_shoulder_pad";
      }
      else {
        pcVar15 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar15);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x200000;
    }
    if ((param_1[0x377] & 0x400000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar15 = "L_shoulder_pad";
      }
      else {
        pcVar15 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar15);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x400000;
    }
    if ((param_1[0x375] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
    }
    param_1[0x375] = param_1[0x375] | 0x1000;
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar7 = FUN_00ac8170(local_c), iVar7 == 0))
  goto LAB_00b4f482;
  if ((DAT_01bea094 & 0x20000) != 0) {
    param_1[0x375] = param_1[0x375] | 0x80000;
  }
  if ((param_1[0x21c] < 1) || (iVar7 = FUN_00ac8170(local_c), iVar7 == 0)) {
LAB_00b4e4f3:
    if ((param_1[0x66e] != 0) && (param_1[0x670] == 0)) {
      local_10 = 0;
    }
    param_1[0x424] = param_1[0x424] + -1;
    fVar12 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar12;
    if (((param_1[0x377] & 0x8000U) != 0) && (param_1[0x3e3] != 0)) {
      if ((param_1[0x376] & 0x2000000U) == 0) {
        fVar3 = 2.0943952;
      }
      else {
        fVar3 = 1.0471976;
      }
      if ((float)param_1[0x2a8] < fVar3) {
        FUN_00b39f00(0x110001,0,0,0);
        local_4 = 3;
        goto LAB_00b4f482;
      }
    }
    iVar7 = *param_2;
    bVar2 = false;
    bVar4 = false;
    if ((((iVar7 == 0x4c) || (iVar7 == 0x4b)) || (iVar7 == 0x4a)) &&
       ((param_1[0x6d8] == 2 ||
        ((param_1[0x6d8] == 1 && (uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 1) != 0)))))) {
      bVar2 = true;
      bVar4 = true;
    }
    iVar7 = *param_2;
    if (((iVar7 == 0x30) || (iVar7 == 0x32)) ||
       ((iVar7 == 0x33 || (((iVar7 == 0x34 || (iVar7 == 0x10)) || (iVar7 == 0x35)))))) {
      if (param_1[0x6d8] == 2) {
        uVar9 = FUN_00dde2a0(1,1000);
        if ((uVar9 & 1) != 0) {
LAB_00b4e645:
          bVar2 = true;
          bVar4 = true;
        }
      }
      else if ((param_1[0x6d8] == 1) && (uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 3) == 2))
      goto LAB_00b4e645;
    }
    if (param_1[0x3e9] != 0) {
      bVar2 = false;
      bVar4 = false;
    }
    if ((param_1[0x4f7] == 2) || (param_1[0x4f7] == 3)) {
      bVar2 = false;
      bVar4 = false;
    }
    if (param_1[0x5d1] == 1) {
      bVar2 = false;
      bVar4 = false;
    }
    if (local_14 == (int *)0xa000d) {
      bVar2 = false;
      bVar4 = false;
    }
    if (local_14 == (int *)0xa0015) {
      bVar2 = false;
      bVar4 = false;
    }
    if (param_1[0x5d1] == 2) {
      bVar4 = false;
    }
    else if (bVar2) {
      local_10 = 0;
    }
    (**(code **)(*param_1 + 0x30c))(local_10,0);
    iVar7 = param_1[300];
    param_1[0x6bf] = param_1[0x6bf] + local_10;
    if (((iVar7 == 0x20150) || (iVar7 == 0x20152)) || (iVar7 == 0x20170)) {
      FUN_00b36020();
    }
    if ((param_2[0x24] & 0x1000U) != 0) {
      param_1[0x21c] = 0;
    }
    if (param_1[0x21c] < 1) {
      uVar9 = param_2[0x24];
      if ((uVar9 & 0x12000) == 0) {
        uVar11 = 0;
        if ((param_2[0x23] & 0x100000U) != 0) {
          uVar11 = 2;
        }
        if ((uVar9 & 0x200) != 0) {
          uVar11 = 4;
        }
        FUN_00b354b0(uVar11,uVar9 >> 0xb & 1);
        FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      }
      else {
        FUN_00b2f010();
        piVar10 = (int *)FUN_00c209f0();
        (**(code **)(*piVar10 + 0x14))(0xe);
      }
      param_1[0x139] = 1;
      param_1[0x375] = param_1[0x375] | 0x10000000;
      pcVar1 = *(code **)(*param_1 + 0x1d8);
      param_1[0x6b7] = -1;
      param_1[0x6b8] = 0;
      param_1[0x6b9] = 0;
      param_1[0x6ba] = 0;
      param_1[0x6bb] = -1;
      param_1[0x6bc] = 0;
      param_1[0x6bd] = 0;
      param_1[0x6be] = 0;
      iVar7 = (*pcVar1)();
      if ((iVar7 == 0) && ((param_1[0x376] & 0x200000U) == 0)) {
        FUN_00b39f00(0xb0000,0,0,0);
        iVar7 = FUN_00b3c880(param_2);
        if (iVar7 != 0) {
          iVar7 = param_1[0x5d2];
          goto LAB_00b4e82c;
        }
      }
      else {
        iVar7 = param_1[0x5d2];
LAB_00b4e82c:
        FUN_00b345b0(iVar7,0xbf800000);
      }
      if (param_1[0x5d1] == 1) {
        FUN_00b39f00(0x60008,0,0,0);
      }
      if (param_1[0x66e] != 0) {
        FUN_00b39f00(0xc0003,0,0,0);
      }
      local_4 = local_4 | 0x80;
      iVar7 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar7 == 0) goto LAB_00b4f482;
    }
    bVar2 = true;
    if ((local_14 == (int *)0xa000d) || (local_14 == (int *)0x60012)) {
      bVar2 = false;
    }
    uVar13 = FUN_00b2e880();
    uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
    if (((int)uVar13 != 0) && (param_1[0x5d1] != uVar9)) {
      bVar2 = false;
    }
    if ((param_1[0x5d9] == 0) && (4 < *(byte *)((int)param_2 + 0x11))) {
      param_1[0x5d3] = param_1[0x5d3] - (uint)*(byte *)((int)param_2 + 0x11);
    }
    if (param_1[0x66e] != 0) {
      local_4 = uVar9;
    }
    if ((param_1[0x66a] != 0) || (param_1[0x66e] != 0)) goto LAB_00b4f482;
    if ((param_1[0x376] & 0x200000U) != 0) {
      FUN_00b39f00(0xa0020,2,0,0);
      goto LAB_00b4f482;
    }
    uVar13 = FUN_00b34d30();
    iVar7 = (int)((ulonglong)uVar13 >> 0x20);
    if (((int)uVar13 != 0) && ((*(byte *)(param_2 + 0x23) & 2) != 0)) {
      (**(code **)(*param_1 + 0x358))(399,0);
      if ((param_1[0x377] & 0x40000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_00b34e20();
        FUN_00ac8d40(1);
        param_1[0x377] = param_1[0x377] | 0x40000;
      }
      if ((param_1[0x377] & 0x80000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("R_upper_leg_shield");
          pcVar15 = "R_lower_leg_shield";
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          pcVar15 = "R_leg_armor";
        }
        FUN_00ac94e0(pcVar15);
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x80000;
      }
      if ((param_1[0x377] & 0x100000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_upper_leg_shield");
          pcVar15 = "L_lower_leg_shield";
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          pcVar15 = "L_leg_armor";
        }
        FUN_00ac94e0(pcVar15);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x377] = param_1[0x377] | 0x100000;
      }
      if ((param_1[0x377] & 0x200000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_forearm_armor1");
          pcVar15 = "R_shoulder_pad";
        }
        else {
          pcVar15 = "R_shoulder_armor";
        }
        FUN_00ac94e0(pcVar15);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x200000;
      }
      if ((param_1[0x377] & 0x400000U) == 0) {
        if (param_1[300] == 0x20170) {
          FUN_00ac94e0("L_forearm_armor");
          pcVar15 = "L_shoulder_pad";
        }
        else {
          pcVar15 = "L_shoulder_armor";
        }
        FUN_00ac94e0(pcVar15);
        FUN_00ac9420("_EFD02");
        FUN_00ac8dd0("_L_arm_",1);
        param_1[0x377] = param_1[0x377] | 0x400000;
      }
      if ((param_1[0x375] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
      }
      param_1[0x375] = param_1[0x375] | 0x1000;
      iVar7 = 1;
    }
    if (((param_1[0x377] & 0x8000U) != 0) && (param_1[0x3e3] != 0)) {
      if (*(byte *)((int)param_2 + 0x11) < 6) {
        if (bVar2) {
          if (param_1[0x5d1] == iVar7) {
            FUN_00b39f00(0x60007,0,0,0);
          }
          else {
            FUN_00b39f00(0x70009,0,0,0);
          }
          goto LAB_00b4f482;
        }
      }
      else {
        FUN_00b3a8d0();
        iVar7 = FUN_00b34d30();
        if (iVar7 == 0) {
          FUN_00b2e5f0(0);
        }
        else {
          param_1[0x65f] = 0x2930292;
          param_1[0x660] = 0x2930293;
          param_1[0x661] = 0x2980297;
          param_1[0x662] = 0x2940299;
          param_1[0x663] = 0x2940294;
          param_1[0x664] = 0x2960295;
          param_1[0x665] = 0x29b029a;
          param_1[0x666] = 0x29e029c;
          param_1[0x667] = 0x2c1029f;
          param_1[0x668] = 0x2b1029d;
        }
      }
    }
    iVar7 = FUN_00a8c760(0x10);
    if (iVar7 == 0) {
      if (bVar2) {
        if (param_1[0x5d1] == 1) {
          uVar11 = 0x60007;
        }
        else {
          FUN_00b39f00(0xa0000,0,0,0);
          param_1[0x4f5] = param_1[0x4f5] + 1;
          if ((*(byte *)(param_1 + 0x4f5) & 1) == 0) goto LAB_00b4ec77;
          uVar11 = 0xa000a;
        }
        FUN_00b39f00(uVar11,0,0,0);
      }
    }
    else if (param_1[0x246] != 0) {
      FUN_0041cc40(0x3dcccccd);
    }
LAB_00b4ec77:
    if (((*param_2 == 0x42) || (*param_2 == 99)) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa000a,0,0,0);
    }
    if ((*param_2 == 0x44) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa000a,0,0,0);
    }
    if (*param_2 == 0x3b) {
      FUN_00b39f00(0xa0017,0,0,0);
    }
    if (*param_2 == 0x3e) {
      FUN_00b39f00(0xa0018,0,0,0);
    }
    if (*param_2 == 0x46) {
      FUN_00b39f00(0xa0012,0,0,0);
    }
    if ((param_2[0x24] & 0x8000000U) != 0) {
      FUN_00b39f00(0xa0012,0,0,0);
    }
    if ((param_1[0x5d9] != 0) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa0001,0,0,0);
    }
    if (((*param_2 == 0x34) || (*param_2 == 0x40)) &&
       ((param_1[0x5d1] != 1 || ((param_1[0x375] & 0x20000U) != 0)))) {
      FUN_00b39f00(0xa000f,0,0,0);
    }
    if ((param_2[0x24] & 0x2000000U) != 0) {
      FUN_00b39f00(0xa0004,0,0,0);
      param_1[0x5d3] = 0x1e;
      if (local_c != (int *)0x0) {
        FUN_00a8e880(local_c + 0x10);
        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
      }
    }
    if ((param_2[0x24] & 0x800000U) != 0) {
      param_1[0x5d3] = 0x1e;
      FUN_00b39f00(0xa0005,0,0,0);
    }
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x5d3] = 0x1e;
      FUN_00b39f00(0xa000c,0,0,0);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x573] = 200;
      if (param_1[0x5d1] == 1) {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar11 = 0;
          uVar14 = 0x60012;
        }
        else {
          uVar11 = 6;
          uVar14 = 0x60012;
        }
      }
      else {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 6;
        }
        uVar14 = 0xa000d;
      }
      FUN_00b39f00(uVar14,uVar11,0,0);
    }
    if ((*param_2 == 0x54) && (local_14 != (int *)0xa000d)) {
      param_1[0x571] = param_1[0x571] + 1;
      param_1[0x572] = 0x43340000;
      param_1[0x573] = 0xc9;
      if (4 < param_1[0x571]) {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 6;
        }
        FUN_00b39f00(0xa000d,uVar11,0,0);
      }
    }
    if ((local_14 == (int *)0xa0002) && (*param_2 == 0x4f)) {
      FUN_00b39f00(0xa0002,2,0,0);
    }
    if ((*param_2 == 0x4c) || (uVar9 = local_4, *param_2 == 0x4b)) {
      if (bVar4) {
        FUN_00b39f00(0x110001,0,0,0);
        local_4 = 2;
        uVar9 = local_4;
      }
      else {
        param_1[0x5d3] = 8;
        FUN_00b39f00(0xa0014,0,0,0);
        bVar2 = true;
        iVar7 = FUN_00b34d30();
        if (((iVar7 != 0) || (param_1[300] == 0x20170)) && ((param_1[0x375] & 0x1000U) == 0)) {
          bVar2 = false;
        }
        iVar7 = FUN_00ac8120();
        uVar9 = local_4 | 0x20000;
        if (iVar7 != 0) {
          FUN_00ac8120();
          iVar7 = FUN_00bda170();
          if (iVar7 == 0) goto LAB_00b4efad;
        }
        if (bVar2) {
          uVar9 = local_4 | 0x20040;
        }
      }
    }
LAB_00b4efad:
    local_4 = uVar9;
    if (local_14 == (int *)0x110000) {
      if (*(char *)((int)param_2 + 0x11) == '\n') {
        param_1[0x4ea] = 0;
        FUN_00b39f00(0xa000b,0,0,0);
        local_4 = 8;
      }
      if (param_1[0x423] < 0) {
        param_1[0x4ea] = 0;
        local_4 = 8;
        FUN_00b39f00(0xa000b,0,0,0);
        param_1[0x423] = 100;
      }
    }
    if (0.0 < (float)param_1[0x4ea]) {
      param_1[0x4ea] = 0;
      local_4 = 8;
      FUN_00b39f00(0xa000b,0,0,0);
    }
    if (local_14 != (int *)0xa0015) {
      if (((param_2[0x23] & 0x800U) != 0) && (param_1[0x5d1] != 1)) {
        FUN_00b39f00(0xa0015,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (param_1[0x5d1] != 1)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00b39f00(0xa0015,0,0,0);
      }
    }
    if ((param_2[0x24] & 0x80000000U) != 0) {
      FUN_00b39f00(0xa0017,0,0,0);
    }
    if ((param_2[0x24] & 0x40000000U) != 0) {
      FUN_00b39f00(0xa0018,0,0,0);
    }
    if ((param_2[0x24] & 0x20000000U) != 0) {
      FUN_00b39f00(0xa0019,0,0,0);
    }
    if (((param_2[0x24] & 0x80000U) != 0) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa0001,0,0,0);
    }
    if ((*param_2 == 0x4a) && (bVar4)) {
      FUN_00b39f00(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar7 = *param_2;
    if ((((((iVar7 == 0x30) || (iVar7 == 0x32)) || (iVar7 == 0x33)) ||
         ((iVar7 == 0x34 || (iVar7 == 0x10)))) || (iVar7 == 0x35)) && (bVar4)) {
      FUN_00b39f00(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar7 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar7 != 0) {
      if (param_1[0x5d1] == 1) {
        uVar11 = 0x6000d;
      }
      else {
        uVar11 = 0xa0006;
      }
      FUN_00b39f00(uVar11,0,0,0);
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00b39f00(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x40000000U) != 0) {
        FUN_00b39f00(0xa0018,0,0,0);
      }
      if ((param_2[0x24] & 0x20000000U) != 0) {
        FUN_00b39f00(0xa0019,0,0,0);
      }
      if ((param_2[0x24] & 0x80000000U) != 0) {
        FUN_00b39f00(0xa0017,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x4e9] = 1;
        if (param_1[0x5d1] == 1) {
          uVar11 = 0x6000e;
        }
        else {
          uVar11 = 0xa0007;
        }
        FUN_00b39f00(uVar11,0,0,0);
      }
    }
    if (param_1[0x5d1] == 1) {
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00b39f00(0x6000b,0,0,0);
      }
      if ((param_2[0x23] & 0x20000U) != 0) {
        param_1[0x573] = 200;
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 6;
        }
        FUN_00b39f00(0x60012,uVar11,0,0);
      }
      if ((*param_2 == 0x54) && (local_14 != (int *)0x60012)) {
        param_1[0x571] = param_1[0x571] + 1;
        param_1[0x572] = 0x43340000;
        param_1[0x573] = 0xc9;
        if (4 < param_1[0x571]) {
          iVar7 = FUN_00a8c760(6);
          if (iVar7 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = 6;
          }
          FUN_00b39f00(0x60012,uVar11,0,0);
        }
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_00b39f00(0x6000c,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x5d3] = 0x1e;
        FUN_00b39f00(0x6000e,0,0,0);
      }
      iVar7 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar7 != 0) {
        FUN_00b39f00(0x6000d,0,0,0);
        if ((param_2[0x24] & 0x2000000U) != 0) {
          FUN_00b39f00(0x6000b,0,0,0);
        }
        if ((param_2[0x24] & 0x40000000U) != 0) {
          FUN_00b39f00(0xa0018,0,0,0);
        }
        if ((param_2[0x24] & 0x20000000U) != 0) {
          FUN_00b39f00(0xa0019,0,0,0);
        }
        if ((param_2[0x24] & 0x80000000U) != 0) {
          FUN_00b39f00(0xa0017,0,0,0);
        }
        if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
          param_1[0x4e9] = 1;
          FUN_00b39f00(0x6000e,0,0,0);
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x21c))(local_c,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
    iVar7 = -1;
    if ((local_c != (int *)0x0) && (iVar8 = (**(code **)(*local_c + 0x17c))(), iVar8 != 0)) {
      iVar7 = (**(code **)(*local_c + 0x184))(*param_2,param_1[0x13c],param_2);
    }
    if (param_1[0x4ee] == 0) goto LAB_00b4e4f3;
    iVar8 = param_1[0x186];
    if (((((iVar8 == 0x110001) || (iVar8 == 0x110002)) || (iVar8 == 0x110003)) &&
        ((iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 == 0 && ((param_2[0x23] & 0x2000U) == 0))
        )) && ((param_1[0x6d8] == 2 || (*(byte *)((int)param_2 + 0x11) < 6)))) {
      local_18 = 1;
      FUN_00a8e880(local_c + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      iVar7 = 2;
      if (param_1[0x6d8] == 2) {
        iVar7 = 1;
      }
      if ((((param_1[0x377] & 0x8000U) == 0) || (param_1[0x3e3] == 0)) &&
         ((iVar8 = FUN_00a8e2b0(), iVar8 != 0 ||
          ((iVar8 = FUN_00ac82f0(), iVar8 != 0 && (iVar8 = FUN_00ac8350(), iVar8 != 0)))))) {
        FUN_00b39f00(0x110002,0,0,0);
        FUN_00b39f00(0xa000b,0,0,0);
        local_14 = (int *)&DAT_00000008;
      }
      else {
        if ((param_1[0x5d0] < iVar7) || (iVar7 = FUN_00ac82f0(), iVar7 != 0)) {
          local_14 = (int *)0x2;
          FUN_00b39f00(0x110002,0,0,0);
        }
        else {
          FUN_00b39f00(0x110003,0,0,0);
          local_14 = (int *)0x200;
        }
        iVar7 = FUN_00b34d30();
        if ((iVar7 != 0) && (*local_c == 0x4f)) {
          FUN_00b39f00(0x110003,0,0,0);
          local_14 = (int *)0x200;
        }
      }
      uVar5 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x56);
      (**(code **)(*param_1 + 0x21c))(iVar6,uVar5,0x3c23d70a,0);
      param_1[0x5d0] = param_1[0x5d0] + 1;
      if ((param_1[0x376] & 0x2000000U) != 0) {
        param_1[0x5d0] = 0;
      }
      goto LAB_00b4f482;
    }
    if ((((param_1[0x4ee] == 0) || (iVar7 != 9)) ||
        (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 != 0)) ||
       (iVar7 = FUN_00b30ce0(), iVar7 == 0)) goto LAB_00b4e4f3;
    (**(code **)(*param_1 + 0x188))(9,iVar6);
    (**(code **)(*local_14 + 0x188))(9,param_1[0x13c]);
    local_4 = 0;
  }
  local_18 = 1;
LAB_00b4f482:
  if (((iVar6 != 0) && ((param_1[0x376] & 0x200000U) == 0)) && (param_1[0x139] == 0)) {
    FUN_00a88250(iVar6,param_2 + 0x40);
    piVar10 = (int *)FUN_00c206d0();
    (**(code **)(*piVar10 + 4))(0,param_1[0x13c],param_1 + 0x10);
    if ((param_1[0x376] & 0x80000U) != 0) {
      DAT_01d6426c = 1;
    }
  }
  if (local_4 != 0) {
    (**(code **)(*param_1 + 0x198))(local_c,param_2,local_4);
  }
  if (local_18 != 0) {
    FUN_00b3b4e0(local_14);
  }
  return local_18;
}

// 00B4F530  FUN_00b4f530  size=5339  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b4fbeb) */

undefined4 __thiscall FUN_00b4f530(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  char *pcVar14;
  undefined4 local_20;
  int *local_14;
  int local_c;
  uint local_4;
  
  local_20 = 0;
  local_14 = (int *)0x0;
  iVar4 = FUN_00a8cab0();
  bVar10 = iVar4 == 0xa0015;
  bVar11 = iVar4 == 0xa000d;
  local_4 = 0;
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    local_14 = (int *)FUN_00a7c8a0();
  }
  piVar9 = local_14;
  iVar6 = *param_2;
  if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) || ((iVar6 == 0x1b0 || (iVar6 == 0x147))))
  goto LAB_00b509a5;
  if (5 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x375] = param_1[0x375] | 0x8000000;
  }
  if ((param_2[0x23] & 0x10000000U) != 0) {
    param_1[0x376] = param_1[0x376] | 0x400;
  }
  local_c = param_2[1];
  if (0.0 < (float)param_1[0x56d]) {
    local_c = 0;
  }
  if ((*param_2 == 0xe2) && (param_1[0x186] == 0xb0007)) {
    return 0;
  }
  if (*param_2 == 0x9d) {
    local_c = 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    local_c = 0;
  }
  local_4 = 1;
  if ((param_1[0x1d9] != 0) && (iVar6 = FUN_008e24a0(2), iVar6 != 0)) {
    local_4 = 0x8001;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) goto LAB_00b509a5;
  if (*param_2 == 0x93) {
    local_4 = 0x40000;
    goto LAB_00b509a5;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    uVar7 = param_1[0x375];
    iVar6 = FUN_00ac8120();
    if (iVar6 != 0) {
      FUN_00ac8120();
      iVar6 = FUN_00bda170();
      if (iVar6 == 0) goto LAB_00b4f6c0;
    }
    if ((uVar7 & 0x1000) != 0) {
      local_4 = local_4 | 0x40;
    }
  }
LAB_00b4f6c0:
  if (((param_2[0x23] & 0x8000U) != 0) && ((param_1[0x375] & 0x1000U) != 0)) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    if ((param_1[0x377] & 0x40000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_00b34e20();
      FUN_00ac8d40(1);
      param_1[0x377] = param_1[0x377] | 0x40000;
    }
    if ((param_1[0x377] & 0x80000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("R_upper_leg_shield");
        pcVar14 = "R_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("R_hip_armor");
        pcVar14 = "R_leg_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD003");
      FUN_00ac8dd0("_R_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x80000;
    }
    if ((param_1[0x377] & 0x100000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_upper_leg_shield");
        pcVar14 = "L_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        pcVar14 = "L_leg_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x100000;
    }
    if ((param_1[0x377] & 0x200000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar14 = "R_shoulder_pad";
      }
      else {
        pcVar14 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x200000;
    }
    if ((param_1[0x377] & 0x400000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar14 = "L_shoulder_pad";
      }
      else {
        pcVar14 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x400000;
    }
    if ((param_1[0x375] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
    }
    param_1[0x375] = param_1[0x375] | 0x1000;
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar6 = FUN_00ac8170(local_14), iVar6 == 0))
  goto LAB_00b509a5;
  if ((0 < param_1[0x21c]) && (iVar6 = FUN_00ac8170(local_14), iVar6 != 0)) {
    (**(code **)(*param_1 + 0x21c))(local_14,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
    if ((local_14 != (int *)0x0) && (iVar6 = (**(code **)(*local_14 + 0x17c))(), iVar6 != 0)) {
      (**(code **)(*local_14 + 0x184))(*param_2,param_1[0x13c],param_2);
    }
    if ((param_1[0x4ee] != 0) &&
       ((((iVar6 = param_1[0x186], iVar6 == 0x110001 || (iVar6 == 0x110002)) || (iVar6 == 0x110003))
        && ((iVar6 = (**(code **)(*param_1 + 0x1d8))(), iVar6 == 0 &&
            ((param_2[0x23] & 0x2000U) == 0)))))) {
      local_20 = 1;
      FUN_00a8e880(local_14 + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      iVar4 = FUN_00a8e2b0();
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_00ac82f0(), iVar4 == 0 || (iVar4 = FUN_00ac8350(), iVar4 == 0)))) {
        if ((param_1[0x5d0] < 0) || (iVar4 = FUN_00ac82f0(), iVar4 != 0)) {
          local_14 = (int *)0x2;
          FUN_00b39f00(0x110002,0,0,0);
        }
        else {
          FUN_00b39f00(0x110003,0,0,0);
          local_14 = (int *)0x200;
        }
      }
      else {
        FUN_00b39f00(0x110002,0,0,0);
        FUN_00b39f00(0xa000b,0,0,0);
        local_14 = (int *)&DAT_00000008;
      }
      uVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x56);
      (**(code **)(*param_1 + 0x21c))(piVar9,uVar3,0x3c23d70a,0);
      param_1[0x5d0] = param_1[0x5d0] + 1;
      goto LAB_00b509a5;
    }
  }
  param_1[0x424] = param_1[0x424] + -1;
  fVar13 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar13;
  iVar6 = *param_2;
  bVar2 = false;
  if (((iVar6 != 0x4c) && (iVar6 != 0x4b)) && (iVar6 != 0x4a)) goto switchD_00b4fb52_default;
  uVar7 = FUN_00dde2a0(1,1000);
  uVar8 = FUN_00ac4780();
  switch(uVar8) {
  case 0:
    if ((uVar7 & 0xffff) % 5 == 2) goto switchD_00b4fb52_caseD_3;
    break;
  case 1:
    bVar12 = (uVar7 & 1) == 0;
    goto LAB_00b4fb7c;
  case 2:
    bVar12 = (uVar7 & 0xffff) % 5 == 2;
LAB_00b4fb7c:
    if (!bVar12) {
switchD_00b4fb52_caseD_3:
      bVar2 = true;
    }
    break;
  case 3:
  case 4:
    goto switchD_00b4fb52_caseD_3;
  }
switchD_00b4fb52_default:
  iVar6 = *param_2;
  if ((((iVar6 == 0x30) || (iVar6 == 0x32)) ||
      ((iVar6 == 0x33 || ((iVar6 == 0x34 || (iVar6 == 0x10)))))) || (iVar6 == 0x35)) {
    if (param_1[0x6d8] == 2) {
      uVar7 = FUN_00dde2a0(1,1000);
      if ((uVar7 & 1) != 0) {
LAB_00b4fbf5:
        bVar2 = true;
      }
    }
    else if ((param_1[0x6d8] == 1) && (uVar7 = FUN_00dde2a0(1,1000), (uVar7 & 3) == 2))
    goto LAB_00b4fbf5;
  }
  if (param_1[0x3e9] != 0) {
    bVar2 = false;
  }
  if (param_1[0x5d1] == 1) {
    bVar2 = false;
  }
  if (bVar11) {
    bVar2 = false;
  }
  if (bVar10) {
    bVar2 = false;
  }
  if (param_1[0x5d1] == 2) {
    bVar2 = false;
  }
  else if (bVar2) {
    local_c = 0;
  }
  (**(code **)(*param_1 + 0x30c))(local_c,0);
  param_1[0x6bf] = param_1[0x6bf] + local_c;
  param_1[0x6d1] = param_1[0x6d1] + local_c;
  FUN_00b36020();
  if ((param_2[0x24] & 0x1000U) != 0) {
    param_1[0x21c] = 0;
  }
  if (param_1[0x21c] < 1) {
    uVar7 = param_2[0x24];
    if ((uVar7 & 0x12000) == 0) {
      uVar8 = 0;
      if ((param_2[0x23] & 0x100000U) != 0) {
        uVar8 = 2;
      }
      if ((uVar7 & 0x200) != 0) {
        uVar8 = 4;
      }
      FUN_00b354b0(uVar8,uVar7 >> 0xb & 1);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    }
    else {
      FUN_00b2f010();
      piVar9 = (int *)FUN_00c209f0();
      (**(code **)(*piVar9 + 0x14))(0xe);
    }
    param_1[0x139] = 1;
    param_1[0x375] = param_1[0x375] | 0x10000000;
    pcVar1 = *(code **)(*param_1 + 0x1d8);
    param_1[0x6b7] = -1;
    param_1[0x6b8] = 0;
    param_1[0x6b9] = 0;
    param_1[0x6ba] = 0;
    param_1[0x6bb] = -1;
    param_1[0x6bc] = 0;
    param_1[0x6bd] = 0;
    param_1[0x6be] = 0;
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) {
      FUN_00b39f00(0xb0000,0,0,0);
      iVar6 = FUN_00b3c880(param_2);
      if (iVar6 != 0) {
        iVar6 = param_1[0x5d2];
        goto LAB_00b4fda0;
      }
    }
    else {
      iVar6 = param_1[0x5d2];
LAB_00b4fda0:
      FUN_00b345b0(iVar6,0xbf800000);
    }
    if (param_1[0x5d1] == 1) {
      FUN_00b39f00(0x60008,0,0,0);
    }
    local_4 = local_4 | 0x80;
    iVar6 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar6 == 0) goto LAB_00b509a5;
  }
  if (param_1[0x66a] != 0) goto LAB_00b509a5;
  if ((*(byte *)(param_2 + 0x23) & 2) != 0) {
    (**(code **)(*param_1 + 0x358))(399,0);
    if ((param_1[0x377] & 0x40000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_00b34e20();
      FUN_00ac8d40(1);
      param_1[0x377] = param_1[0x377] | 0x40000;
    }
    if ((param_1[0x377] & 0x80000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("R_upper_leg_shield");
        pcVar14 = "R_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("R_hip_armor");
        pcVar14 = "R_leg_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD003");
      FUN_00ac8dd0("_R_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x80000;
    }
    if ((param_1[0x377] & 0x100000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_upper_leg_shield");
        pcVar14 = "L_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        pcVar14 = "L_leg_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x377] = param_1[0x377] | 0x100000;
    }
    if ((param_1[0x377] & 0x200000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar14 = "R_shoulder_pad";
      }
      else {
        pcVar14 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x200000;
    }
    if ((param_1[0x377] & 0x400000U) == 0) {
      if (param_1[300] == 0x20170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar14 = "L_shoulder_pad";
      }
      else {
        pcVar14 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x377] = param_1[0x377] | 0x400000;
    }
    if ((param_1[0x375] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3a4);
    }
    param_1[0x375] = param_1[0x375] | 0x1000;
  }
  if ((((param_1[0x6d0] <= param_1[0x6d1]) && (param_1[0x6d1] = 0, param_1[0x5d1] != 1)) &&
      (!bVar10)) && (!bVar11)) {
    FUN_00b39f00(0xa0001,0,0,0);
  }
  param_1[0x6ce] = param_1[0x6ce] + local_c;
  param_1[0x6cd] = param_1[0x6cc];
  if (((bVar10) || (bVar11)) || (param_1[0x5d1] == 1)) {
    param_1[0x6ce] = 0;
  }
  else if (param_1[0x6cf] <= param_1[0x6ce]) {
    param_1[0x6ce] = 0;
    FUN_00b39f00(0xa0015,0,0,0);
    bVar10 = true;
  }
  if (((param_1[0x375] & 0x1000U) != 0) || (bVar11)) {
    if ((!bVar10) && (((*(byte *)(param_2 + 0x23) & 1) != 0 && (param_1[0x5d1] != 1)))) {
      (**(code **)(*param_1 + 0x358))(0x18e,0);
      FUN_00b39f00(0xa0015,0,0,0);
    }
    iVar6 = FUN_00a8c760(0x10);
    if ((iVar6 != 0) && (param_1[0x246] != 0)) {
      FUN_0041cc40(0x3dcccccd);
    }
    if (((*param_2 == 0x42) || (*param_2 == 99)) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa000a,0,0,0);
    }
    if ((*param_2 == 0x44) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa000a,0,0,0);
    }
    if (*param_2 == 0x3b) {
      FUN_00b39f00(0xa0017,0,0,0);
    }
    if (*param_2 == 0x3e) {
      FUN_00b39f00(0xa0018,0,0,0);
    }
    if (*param_2 == 0x46) {
      FUN_00b39f00(0xa0012,0,0,0);
    }
    if ((param_2[0x24] & 0x8000000U) != 0) {
      FUN_00b39f00(0xa0012,0,0,0);
    }
    if ((param_1[0x5d9] != 0) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa0001,0,0,0);
    }
    if (((*param_2 == 0x34) || (*param_2 == 0x40)) &&
       ((param_1[0x5d1] != 1 || ((param_1[0x375] & 0x20000U) != 0)))) {
      FUN_00b39f00(0xa000f,0,0,0);
    }
    if ((param_2[0x24] & 0x2000000U) != 0) {
      FUN_00b39f00(0xa0004,0,0,0);
      param_1[0x5d3] = 0x1e;
      if (local_14 != (int *)0x0) {
        FUN_00a8e880(local_14 + 0x10);
        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
      }
    }
    if ((param_2[0x24] & 0x800000U) != 0) {
      param_1[0x5d3] = 0x1e;
      FUN_00b39f00(0xa0005,0,0,0);
    }
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x5d3] = 0x1e;
      FUN_00b39f00(0xa000c,0,0,0);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x573] = 200;
      iVar6 = FUN_00a8c760(6);
      if (iVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 6;
      }
      FUN_00b39f00(0xa000d,uVar8,0,0);
    }
    if ((*param_2 == 0x54) && (iVar4 != 0xa000d)) {
      param_1[0x571] = param_1[0x571] + 1;
      param_1[0x572] = 0x43340000;
      param_1[0x573] = 0xc9;
      if (4 < param_1[0x571]) {
        iVar6 = FUN_00a8c760(6);
        if (iVar6 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 6;
        }
        FUN_00b39f00(0xa000d,uVar8,0,0);
      }
    }
    if ((iVar4 == 0xa0002) && (*param_2 == 0x4f)) {
      FUN_00b39f00(0xa0002,2,0,0);
    }
    if ((*param_2 == 0x4c) || (uVar7 = local_4, *param_2 == 0x4b)) {
      if (bVar2) {
        FUN_00b39f00(0x110001,0,0,0);
        local_4 = 2;
        uVar7 = local_4;
      }
      else {
        param_1[0x5d3] = 8;
        FUN_00b39f00(0xa0014,0,0,0);
        bVar11 = true;
        iVar6 = FUN_00b34d30();
        if (((iVar6 != 0) || (param_1[300] == 0x20170)) && ((param_1[0x375] & 0x1000U) == 0)) {
          bVar11 = false;
        }
        iVar6 = FUN_00ac8120();
        uVar7 = local_4 | 0x20000;
        if (iVar6 != 0) {
          FUN_00ac8120();
          iVar6 = FUN_00bda170();
          if (iVar6 == 0) goto LAB_00b504ff;
        }
        if (bVar11) {
          uVar7 = local_4 | 0x20040;
        }
      }
    }
LAB_00b504ff:
    local_4 = uVar7;
    if (iVar4 == 0x110000) {
      if (*(char *)((int)param_2 + 0x11) == '\n') {
        param_1[0x4ea] = 0;
        FUN_00b39f00(0xa000b,0,0,0);
        local_4 = 8;
      }
      if (param_1[0x423] < 0) {
        param_1[0x4ea] = 0;
        local_4 = 8;
        FUN_00b39f00(0xa000b,0,0,0);
        param_1[0x423] = 100;
      }
    }
    if (0.0 < (float)param_1[0x4ea]) {
      param_1[0x4ea] = 0;
      local_4 = 8;
      FUN_00b39f00(0xa000b,0,0,0);
    }
    if (!bVar10) {
      if (((param_2[0x23] & 0x800U) != 0) && (param_1[0x5d1] != 1)) {
        FUN_00b39f00(0xa0015,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (param_1[0x5d1] != 1)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00b39f00(0xa0015,0,0,0);
      }
    }
    if ((param_2[0x24] & 0x80000000U) != 0) {
      FUN_00b39f00(0xa0017,0,0,0);
    }
    if ((param_2[0x24] & 0x40000000U) != 0) {
      FUN_00b39f00(0xa0018,0,0,0);
    }
    if ((param_2[0x24] & 0x20000000U) != 0) {
      FUN_00b39f00(0xa0019,0,0,0);
    }
    if (((param_2[0x24] & 0x80000U) != 0) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa0001,0,0,0);
    }
    if ((*param_2 == 0x4a) && (bVar2)) {
      FUN_00b39f00(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar6 = *param_2;
    if (((((iVar6 == 0x30) || (iVar6 == 0x32)) || (iVar6 == 0x33)) ||
        ((iVar6 == 0x34 || (iVar6 == 0x10)))) || (iVar6 == 0x35)) {
      if (bVar2) {
        FUN_00b39f00(0x110001,0,0,0);
        local_4 = 2;
        goto LAB_00b506e8;
      }
    }
    else {
LAB_00b506e8:
      if (bVar2) {
        FUN_00b39f00(0xa0023,0,0,0);
        iVar6 = FUN_00ac82f0();
        local_4 = (-(uint)(iVar6 != 0) & 0x3e00) + 0x200;
      }
    }
    iVar6 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar6 != 0) {
      FUN_00b39f00(0xa0006,0,0,0);
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00b39f00(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x40000000U) != 0) {
        FUN_00b39f00(0xa0018,0,0,0);
      }
      if ((param_2[0x24] & 0x20000000U) != 0) {
        FUN_00b39f00(0xa0019,0,0,0);
      }
      if ((param_2[0x24] & 0x80000000U) != 0) {
        FUN_00b39f00(0xa0017,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x4e9] = 1;
        FUN_00b39f00(0xa0007,0,0,0);
      }
    }
    if (param_1[0x5d1] == 1) {
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00b39f00(0x6000b,0,0,0);
      }
      if ((param_2[0x23] & 0x20000U) != 0) {
        param_1[0x573] = 200;
        iVar6 = FUN_00a8c760(6);
        if (iVar6 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 6;
        }
        FUN_00b39f00(0x60012,uVar8,0,0);
      }
      if ((*param_2 == 0x54) && (iVar4 != 0x60012)) {
        param_1[0x571] = param_1[0x571] + 1;
        param_1[0x572] = 0x43340000;
        param_1[0x573] = 0xc9;
        if (4 < param_1[0x571]) {
          iVar4 = FUN_00a8c760(6);
          if (iVar4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 6;
          }
          FUN_00b39f00(0x60012,uVar8,0,0);
        }
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_00b39f00(0x6000c,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x5d3] = 0x1e;
        FUN_00b39f00(0x6000e,0,0,0);
      }
      iVar4 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar4 != 0) {
        FUN_00b39f00(0x6000d,0,0,0);
        if ((param_2[0x24] & 0x2000000U) != 0) {
          FUN_00b39f00(0x6000b,0,0,0);
        }
        if ((param_2[0x24] & 0x40000000U) != 0) {
          FUN_00b39f00(0xa0018,0,0,0);
        }
        if ((param_2[0x24] & 0x20000000U) != 0) {
          FUN_00b39f00(0xa0019,0,0,0);
        }
        if ((param_2[0x24] & 0x80000000U) != 0) {
          FUN_00b39f00(0xa0017,0,0,0);
        }
        if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
          param_1[0x4e9] = 1;
          uVar8 = 0x6000e;
          goto LAB_00b50996;
        }
      }
    }
  }
  else {
    if (bVar2) {
      FUN_00b39f00(0xa0023,0,0,0);
      iVar4 = FUN_00ac82f0();
      local_4 = (-(uint)(iVar4 != 0) & 0x3e00) + 0x200;
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x573] = 200;
      iVar4 = FUN_00a8c760(6);
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 6;
      }
      FUN_00b39f00(0xa000d,uVar8,0,0);
    }
    iVar4 = *param_2;
    if ((((iVar4 == 0x55) || (iVar4 == 0x57)) || (iVar4 == 0x56)) && (param_1[0x5d1] != 1)) {
      FUN_00b39f00(0xa0001,0,0,0);
      param_1[0x6d1] = 0;
    }
    if (((!bVar10) && ((*(byte *)(param_2 + 0x23) & 1) != 0)) && (param_1[0x5d1] != 1)) {
      (**(code **)(*param_1 + 0x358))(0x18e,0);
      uVar8 = 0xa0015;
LAB_00b50996:
      FUN_00b39f00(uVar8,0,0,0);
    }
  }
  local_20 = 1;
LAB_00b509a5:
  if (iVar5 != 0) {
    FUN_00a88250(iVar5,param_2 + 0x40);
    piVar9 = (int *)FUN_00c206d0();
    (**(code **)(*piVar9 + 4))(0,param_1[0x13c],param_1 + 0x10);
  }
  if (local_4 != 0) {
    (**(code **)(*param_1 + 0x198))(local_14,param_2,local_4);
  }
  return local_20;
}

// 00B50A20  FUN_00b50a20  size=219  [callgraph]
undefined4 __thiscall FUN_00b50a20(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    iVar1 = *param_2;
    if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))
    {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) &&
         ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 && ((*(byte *)(iVar1 + 0x4c0) & 0x10) != 0)))) {
        (**(code **)(*param_1 + 0x21c))(iVar1,(char)param_2[4],0x3c23d70a,0);
        fVar3 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
        param_1[0x245] = (int)(float)fVar3;
        (**(code **)(*param_1 + 0x198))(iVar1,param_2,1);
        uVar2 = 1;
      }
      if ((param_1[0x375] & 0x10000000U) != 0) {
        FUN_00b3c880(param_2);
      }
    }
    return uVar2;
  }
  return 0;
}

// 00B50B00  FUN_00b50b00  size=762  [callgraph]
void __fastcall FUN_00b50b00(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_c [3];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  local_c[0] = 0x195;
  local_c[1] = 0x196;
  local_c[2] = 0x197;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,2);
    uVar3 = local_c[sVar1];
    if ((float)param_1[0x245] * (float)param_1[0x245] < 0.6168503) {
      uVar3 = 0x198;
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        uVar3 = 0x199;
      }
    }
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      uVar3 = 0x19a;
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        uVar3 = 0x19b;
      }
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      uVar3 = 0x19c;
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        uVar3 = 0x19d;
      }
    }
    FUN_00ac82f0();
    uVar4 = 0x8000000;
    if ((*(byte *)(param_1 + 0x5d2) & 1) != 0) {
      uVar4 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
    iVar2 = param_1[0x246];
    if (iVar2 != 0) {
      FUN_00e26e90();
      *(undefined4 *)(iVar2 + 0xe4) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xe8) = 0x3f000000;
      *(undefined4 *)(iVar2 + 0xec) = 0x3f000000;
    }
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00b30b70();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a952e0(0,0x41200000);
  if (iVar2 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_00b3ca50();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x3e9] == 0) || (param_1[0x4f7] == 0)) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
      }
      if (((param_1[0x375] & 0x80000U) != 0) && (param_1[0x4f7] == 2)) {
        param_1[0x375] = param_1[0x375] & 0xfff7ffff;
        FUN_00b39f00(0x20005,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((param_1[0x5d1] != 2) && ((float)param_1[0x2a3] < 30.25)) &&
         ((float)param_1[0x2a8] < 1.0471976)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_00b3cb30();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00b39f00(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B50E00  Em0010::vf48  size=1619  [class]
void __fastcall Em0010::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 auStack_30 [5];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((DAT_01bea070 & 0x20000000) != 0) {
    return;
  }
  if (param_1[0x66e] != 0) {
    FUN_00b3baf0();
    return;
  }
  if (param_1[0x672] != 0) {
    BehaviorEmBase::vf48();
    return;
  }
  param_1[0x6d8] = 0;
  iVar2 = FUN_00ac4780();
  if (iVar2 == 2) {
    param_1[0x6d8] = 1;
  }
  else if (iVar2 - 3U < 2) {
    param_1[0x6d8] = 2;
  }
  if ((param_1[0x375] & 0x40000U) != 0) {
    param_1[0x3d0] = (int)((float)param_1[0x3d0] - (float)param_1[0x244]);
    if (param_1[0x6c9] != 0) {
      fVar7 = (float10)FUN_00ac8f80();
      FUN_00b2edc0((float)(fVar7 - (float10)(float)param_1[0x244] * (float10)0.01));
    }
    if ((float)param_1[0x3d0] < 0.0) {
      if (param_1[0x6c9] == 0) {
        (**(code **)(*param_1 + 0x110))(0);
      }
      else {
        FUN_009fdde0();
      }
    }
  }
  if (((param_1[0x372] != 0x1e) && (iVar2 = FUN_00ac8a50(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x274))(), iVar2 != 0)) goto LAB_00b50f6b;
  param_1[0x63c] = (uint)param_1[0x351] >> 0x19 & 1;
  iVar2 = FUN_00a82d50();
  if (iVar2 == 4) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_00b33820();
      param_1[0x648] = iVar2;
      goto LAB_00b50f42;
    }
  }
  else {
LAB_00b50f42:
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_00b33940();
      param_1[0x645] = iVar2;
    }
  }
  FUN_00b37d40();
  iVar2 = FUN_00b33c90();
  param_1[0x64a] = iVar2;
LAB_00b50f6b:
  BehaviorEmBase::vf48();
  fVar1 = (float)param_1[0x422];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x422] = (int)((float)param_1[0x422] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x4ea] != ((float)param_1[0x4ea] == 0.0)) {
    param_1[0x4ea] = (int)((float)param_1[0x4ea] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x572] != ((float)param_1[0x572] == 0.0)) {
    param_1[0x572] = (int)((float)param_1[0x572] - (float)param_1[0x244]);
  }
  if ((float)param_1[0x572] < 0.0) {
    param_1[0x571] = 0;
  }
  fVar1 = (float)param_1[0x3ef];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x3ef] = (int)((float)param_1[0x3ef] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x674] != ((float)param_1[0x674] == 0.0)) {
    param_1[0x674] = (int)((float)param_1[0x674] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x609] != ((float)param_1[0x609] == 0.0)) {
    param_1[0x609] = (int)((float)param_1[0x609] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x677] != ((float)param_1[0x677] == 0.0)) {
    param_1[0x677] = (int)((float)param_1[0x677] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x65e] != ((float)param_1[0x65e] == 0.0)) {
    param_1[0x65e] = (int)((float)param_1[0x65e] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x6d3] != ((float)param_1[0x6d3] == 0.0)) {
    param_1[0x6d3] = (int)((float)param_1[0x6d3] - (float)param_1[0x244]);
  }
  if (param_1[300] == 0x20170) {
    fVar1 = (float)param_1[0x6cd];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x6cd] = (int)((float)param_1[0x6cd] - (float)param_1[0x244]);
    }
    if ((float)param_1[0x6cd] < 0.0) {
      param_1[0x6ce] = 0;
    }
  }
  iVar2 = FUN_00b2e440();
  param_1[0x63a] = iVar2;
  FUN_00b34b10();
  if ((param_1[0x4f0] != 0) &&
     (fVar1 = (float)param_1[0x4ef], param_1[0x4ef] = (int)(fVar1 - 1.0), fVar1 - 1.0 < 0.0)) {
    param_1[0x4f0] = 0;
    FUN_00b2a660();
  }
  if (((param_1[0x570] != 0) && (iVar2 = FUN_00ac8410(), iVar2 == 0)) &&
     (fVar1 = (float)param_1[0x56f], param_1[0x56f] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x570] = 0;
    param_1[0x139] = 1;
    FUN_00b39f00(0xb0002,0,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  FUN_00b3b2b0();
  FUN_00b3ff10();
  param_1[0x6ae] = 0;
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar2 != 0) {
      uVar4 = FUN_00a7c8a0();
      iVar2 = FUN_0049b700(uVar4);
      param_1[0x6ae] = iVar2;
    }
  }
  param_1[0x6af] = param_1[0x2a1];
  *(undefined2 *)(param_1 + 0x6b0) = 4;
  if (param_1[0x6ae] != 0) {
    param_1[0x6af] = param_1[0x6ae];
    *(undefined2 *)(param_1 + 0x6b0) = 0;
  }
  if (((param_1[0x377] & 0x1000U) != 0) && (DAT_018b9174 == 0x458)) {
    uVar8 = 0xd0013;
    uVar4 = FUN_00e03ea0("explosion",0xd0013);
    iVar2 = FUN_00a18d70(uVar4,uVar8);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      param_1[0x6af] = iVar2;
      *(undefined2 *)(param_1 + 0x6b0) = 0xffff;
    }
  }
  iVar2 = FUN_00a8cab0();
  if ((iVar2 == 8) || (iVar2 = FUN_00a8cab0(), iVar2 == 9)) {
    auStack_30[0] = 0x10800;
    auStack_30[1] = 0x10801;
    auStack_30[2] = 0x10a00;
    auStack_30[3] = 0x10a01;
    uVar6 = 0;
    do {
      iVar2 = FUN_00c27650(param_1 + 0x10,0x40a00000,auStack_30[uVar6]);
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        param_1[0x6af] = iVar2;
        *(undefined2 *)(param_1 + 0x6b0) = 5;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
  }
  param_1[0x65b] = 0;
  if (param_1[0x6af] != 0) {
    iVar2 = FUN_00a12210(3);
    iVar5 = FUN_00a12210((int)(short)param_1[0x6b0]);
    if ((iVar2 != 0) && (iVar5 != 0)) {
      auStack_30[4] = *(undefined4 *)(iVar2 + 0x40);
      uStack_1c = *(undefined4 *)(iVar2 + 0x44);
      uStack_18 = *(undefined4 *)(iVar2 + 0x48);
      uStack_14 = *(undefined4 *)(iVar2 + 0x4c);
      auStack_30[0] = *(undefined4 *)(iVar5 + 0x40);
      auStack_30[1] = *(undefined4 *)(iVar5 + 0x44);
      auStack_30[2] = *(undefined4 *)(iVar5 + 0x48);
      auStack_30[3] = *(undefined4 *)(iVar5 + 0x4c);
      iVar2 = FUN_00b34080(auStack_30 + 4,auStack_30);
      param_1[0x65b] = iVar2;
    }
  }
  iVar2 = FUN_00a12210(0);
  iVar2 = FUN_00b33de0(iVar2 + 0x40);
  param_1[0x653] = iVar2;
  iVar2 = FUN_00a12210(0);
  iVar2 = FUN_00b342f0(iVar2 + 0x40,0x3f266666);
  param_1[0x658] = iVar2;
  if (((param_1[0x139] == 0) && ((*(byte *)(param_1 + 0x375) & 2) == 0)) && (param_1[0x653] != 0)) {
    fVar1 = (float)param_1[0x652];
    param_1[0x652] = (int)((float)param_1[0x244] + fVar1);
    if (30.0 <= (float)param_1[0x244] + fVar1) {
      param_1[0x375] = param_1[0x375] | 4;
    }
  }
  else {
    param_1[0x375] = param_1[0x375] & 0xfffffffb;
    param_1[0x652] = 0;
  }
  if ((-1 < param_1[0x6d2]) && (iVar2 = FUN_00ac89d0(), iVar2 != 0)) {
    FUN_00ac89d0();
    iVar2 = FUN_00a10040(0x3c);
    if ((iVar2 == 2) || ((param_1[0x376] & 0x800000U) != 0)) {
      FUN_00c5ad80(param_1[0x6d2]);
      param_1[0x376] = param_1[0x376] & 0xff7fffff;
      param_1[0x6d2] = -1;
    }
  }
  iVar2 = FUN_00b355e0();
  param_1[0x6c6] = iVar2;
  return;
}

// 00B51460  Em0010::vf50  size=531  [class]
void __fastcall Em0010::vf50(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x19b8) != 0) {
    switchD_0080dbae::default();
    BehaviorEmBase::vf50();
    if (*(int *)(param_1 + 0x19ac) != 0) {
      FUN_00b45fd0();
    }
    if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_008f3cb0(param_1);
    }
    return;
  }
  if (*(int *)(param_1 + 0x19c8) != 0) {
    switchD_0080dbae::default();
    BehaviorEmBase::vf50();
    return;
  }
  if ((*(int *)(param_1 + 0x13dc) == 2) || (*(int *)(param_1 + 0x13dc) == 3)) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8d230(param_1 + 0x16a0);
    }
    if (*(int *)(param_1 + 0x1abc) != 0) {
      FUN_00a8d230(param_1 + 0x16a0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1688);
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x18f0) == 0) && ((*(uint *)(param_1 + 0xdd8) & 0x20000) == 0)) {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xfffdffff;
    if ((*(int *)(param_1 + 0x168c) != 0) || ((*(uint *)(param_1 + 0xddc) & 0x2000) != 0)) {
      uVar5 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x1690);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(param_1 + 0x16a0,0,uVar5,0,iVar4 != 0,uVar1);
  }
  else {
    FUN_00a84720();
  }
  *(undefined4 *)(param_1 + 0x168c) = 0;
  *(undefined4 *)(param_1 + 0x1688) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1690) = 0;
  *(undefined4 *)(param_1 + 0x768) = 1;
  if ((*(byte *)(param_1 + 0xdd7) & 1) == 0) {
    iVar4 = FUN_00a12210(0xa00);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x90) = 0x3f9ffa70;
      *(undefined4 *)(iVar4 + 0x94) = 0xbbf033b5;
      *(undefined4 *)(iVar4 + 0x98) = 0xbeea36fe;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x768) = 0;
  }
  switchD_0080dbae::default();
  fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x900);
  fVar3 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x908);
  *(float *)(param_1 + 0x1b64) = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x12d8) != 0) {
    if (*(int *)(param_1 + 0x1abc) != 0) {
      FUN_00b38210(*(int *)(param_1 + 0x1abc) + 0x40);
    }
    *(undefined4 *)(param_1 + 0x12d8) = 0;
  }
  FUN_00b45fd0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  FUN_00ac95d0();
  return;
}

// 00B51680  FUN_00b51680  size=481  [between]
void __fastcall FUN_00b51680(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  param_1[0x23d] = param_1[0x5bd];
  param_1[0x5a3] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x44f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x56e] = 0x41f00000;
    FUN_00b46c90(1,param_1 + 0x3f4);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4b4] = 3;
  }
  else if (param_1[0x187] != 1) goto LAB_00b517b6;
  fVar1 = (float)param_1[0x56e];
  param_1[0x56e] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4b4] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
    iVar3 = FUN_00a12210((int)(short)param_1[0x6b0]);
    FUN_00b38210(iVar3 + 0x40);
    param_1[0x4b4] = param_1[0x4b4] + -1;
    param_1[0x56e] = 0x40c00000;
  }
LAB_00b517b6:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x4b4] == 0) && ((float)param_1[0x56e] <= 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4b4] = param_1[0x4b5];
    *(undefined1 *)(param_1 + 0x3f0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x128] = 6;
    (*pcVar2)();
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
  return;
}

// 00B51870  FUN_00b51870  size=1111  [between]
void __fastcall FUN_00b51870(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBX;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_c;
  int local_8;
  int local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x446,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x690] = param_1[0x5c0];
    param_1[0x691] = param_1[0x5c1];
    param_1[0x692] = param_1[0x5c2];
    param_1[0x693] = param_1[0x5c3];
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_00b4d490(param_1 + 0x678,param_1 + 0x10,param_1 + 0x690,0x41f00000,0x40400000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    FUN_00a8e880(param_1 + 0x690);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&stack0xfffffff0,0,param_1[0x248]);
    param_1[0x248] = (int)((float)param_1[0x244] * 0.04 + (float)param_1[0x248]);
    param_1[0x14] = unaff_EBX;
    param_1[0x15] = local_c;
    param_1[0x16] = local_8;
    FUN_00a8e880(param_1 + 0x690);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00aa4080(0x447,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_c,0,param_1[0x248]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x248];
    param_1[0x248] = (int)fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    FUN_00a8e880(param_1 + 0x690);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar5 = param_1 + 0x690;
    FUN_00b4d490(param_1 + 0x678,param_1 + 0x10,piVar5,0x41f00000,0x40400000);
    FUN_00a581b0(&local_c,0,param_1[0x248]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x248];
    param_1[0x248] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x40000000;
    }
    param_1[0x14] = local_c;
    uVar7 = 1;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    uVar6 = 0x40000000;
    uVar2 = FUN_00a7c7f0(piVar5,0x40000000,1);
    uVar4 = extraout_ECX;
    FUN_00a7c940(uVar2);
    FUN_00c62c50(uVar4,piVar5,uVar6,uVar7);
    return;
  case 6:
    FUN_00aa4080(0x448,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b51cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B51CF0  FUN_00b51cf0  size=95  [between]
void __thiscall FUN_00b51cf0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [4];
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  (**(code **)(*param_1 + 0x360))(local_160);
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 00B51D50  FUN_00b51d50  size=615  [between]
void __fastcall FUN_00b51d50(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8d230(local_20);
      iVar2 = FUN_00a12210(5);
      thunk_FUN_00dde510(&local_28,local_24,local_20,iVar2 + 0x40);
      local_28 = local_28 * 1.2732395;
      fVar1 = -1.0;
      if ((-1.0 <= local_28) && (fVar1 = local_28, 1.0 < local_28)) {
        fVar1 = 1.0;
      }
      *(float *)(param_1 + 0x1590) =
           (fVar1 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
    }
    iVar2 = FUN_00b30d00();
    if ((iVar2 != 0) && (iVar2 = FUN_00b46d20(), iVar2 != 0)) {
      return;
    }
    if ((49.0 < *(float *)(param_1 + 0xa8c)) && ((*(byte *)(param_1 + 0xdd4) & 4) == 0)) {
      if (*(int *)(param_1 + 0x18f0) == 0) {
        if ((1600.0 < *(float *)(param_1 + 0xa8c)) &&
           ((*(uint *)(param_1 + 0xdd8) & 0x10000000) == 0)) goto LAB_00b51e7e;
      }
      else {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (NAN(fVar1) || 900.0 < fVar1 == (fVar1 == 900.0)) goto LAB_00b51e7e;
      }
      FUN_00b39f00(0x20005,0,0,0);
    }
  }
LAB_00b51e7e:
  if (((((*(int *)(param_1 + 0x18f0) != 0) && (*(int *)(*(int *)(param_1 + 0xa84) + 0x2660) != 0))
       && (*(int *)(param_1 + 0x13c8) != 0)) &&
      ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) &&
     (iVar2 = FUN_00b2e270(2,1), iVar2 != 0)) {
    FUN_00b39f00(0x2000a,0,0,0);
    FUN_00b2e2d0();
    return;
  }
  if (((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
     (iVar2 = FUN_00b3ad10(0xffffffff), iVar2 == 0)) {
    if (0.0 < *(float *)(param_1 + 0x1970)) {
      *(float *)(param_1 + 0x1970) = *(float *)(param_1 + 0x1970) - *(float *)(param_1 + 0x910);
    }
    if (((((*(float *)(param_1 + 0x1970) <= 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)))
         || ((iVar2 = *(int *)(param_1 + 0x618), iVar2 == 0x20002 &&
             (*(int *)(param_1 + 0xfac) == 0)))) ||
        ((iVar2 == 0x20004 && (*(int *)(param_1 + 0xfb0) == 0)))) ||
       ((iVar2 == 0x20003 && (*(int *)(param_1 + 0xfb4) == 0)))) {
      FUN_00b39f00(0x20000,0,0,0);
    }
  }
  return;
}

// 00B51FC0  FUN_00b51fc0  size=150  [between]
void __fastcall FUN_00b51fc0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  param_1[0x5a3] = 1;
  if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_00b49270();
      return;
    }
    if ((iVar1 == 0x25) && ((param_1[0x376] & 0x2000000U) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b52004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0x60001:
      FUN_00b49500();
      return;
    case 0x60004:
      FUN_00b49740();
      return;
    case 0x60006:
      FUN_00b49850();
      return;
    case 0x60009:
    case 0x6000a:
      if ((float)param_1[0x2a8] < 0.17453292) {
        FUN_00b39f00(0x60000,0,0,0);
      }
      return;
    case 0x6000c:
    case 0x6000d:
    case 0x6000e:
    case 0x6000f:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
  return;
}

// 00B52090  FUN_00b52090  size=178  [between]
void __fastcall FUN_00b52090(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  fStack_c = 1.6633927e-38;
  (**(code **)(*param_1 + 0x1d4))();
  iVar1 = param_1[0x186];
  if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
      FUN_00b4a4b0();
      return;
    }
    if ((iVar1 == 0x25) && ((param_1[0x376] & 0x2000000U) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b520ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (iVar1 < 0xa0006) {
    if (iVar1 == 0xa0005) {
      fStack_c = 1.4013e-45;
      (**(code **)(*param_1 + 0x1d4))();
      return;
    }
    switch(iVar1) {
    case 0x50001:
      FUN_00b4a7a0();
      return;
    case 0x50004:
      FUN_00b4aa00();
      return;
    case 0x50006:
      if (param_1[0x187] != 0) {
        thunk_FUN_00dde510(&fStack_c,&uStack_8,param_1[0x2a1] + 0x40,param_1 + 0x10,uStack_8);
        fVar2 = fStack_c * 1.2732395;
        fVar3 = -1.0;
        if ((-1.0 <= fVar2) && (fVar3 = fVar2, 1.0 < fVar2)) {
          fVar3 = 1.0;
        }
        param_1[0x564] = (int)((fVar3 - (float)param_1[0x564]) * 0.1 + (float)param_1[0x564]);
        if (param_1[0x4b4] == 0) {
          FUN_00b39f00(0x50004,0,0,0);
          param_1[0x422] = 0x41f00000;
        }
      }
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0xa0006:
    case 0xa0007:
    case 0xa0008:
    case 0xa0012:
      fStack_c = 1.4013e-45;
      (**(code **)(*param_1 + 0x1d4))();
    }
  }
  return;
}

// 00B52180  FUN_00b52180  size=153  [between]
void __fastcall FUN_00b52180(int param_1)

{
  float fVar1;
  int iVar2;
  float local_8;
  undefined1 local_4 [4];
  
  if (((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) &&
     ((iVar2 = FUN_00b30d00(), iVar2 == 0 || (iVar2 = FUN_00b4b5a0(), iVar2 == 0)))) {
    thunk_FUN_00dde510(&local_8,local_4,*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x40);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((local_8 < -1.0) || (fVar1 = 1.0, 1.0 < local_8)) {
      local_8 = fVar1;
    }
    *(float *)(param_1 + 0x1590) =
         (local_8 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
  }
  return;
}

// 00B52220  FUN_00b52220  size=201  [between]
void __fastcall FUN_00b52220(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_160 [148];
  int local_cc;
  int local_74;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  piVar3 = *(int **)(param_1 + 0x67c);
  piVar4 = piVar3 + *(int *)(param_1 + 0x684) * 0x54;
  FUN_00445db0();
  iVar2 = -1;
  bVar1 = false;
  if (piVar3 != piVar4) {
    do {
      if ((*piVar3 != 0x147) && (iVar2 < piVar3[1])) {
        bVar1 = true;
        FUN_00448f50(piVar3);
        iVar2 = piVar3[1];
      }
      piVar3 = piVar3 + 0x54;
    } while (piVar3 != piVar4);
    if (bVar1) {
      if (((*(int *)(param_1 + 0x8d0) != 0) && (local_cc != 0)) && (local_74 != 0)) {
        FUN_00a8e5d0(param_1,local_160,0);
        return;
      }
      FUN_00b4c3f0(local_160);
    }
  }
  return;
}

// 00B522F0  Em0010::vf334  size=919  [class]
void __thiscall Em0010::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  
  BehaviorEmBase::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar14 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar4 = FUN_00dd6d80(puVar14);
    uVar10 = -(uint)(iVar4 != 0) & (uint)param_3;
  }
  FUN_009fd240();
  if (uVar10 != 0) {
    piVar3 = (int *)FUN_00acdea0();
    if (piVar3 != (int *)0x0) {
      puVar14 = &DAT_01be9d20;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d20);
      iVar4 = FUN_00dd6d80(puVar14);
      if ((iVar4 != 0) && (piVar3 != param_1)) {
        uVar5 = FUN_00a8cae0();
        uVar6 = FUN_00a8cad0(uVar5);
        uVar7 = FUN_00a8cac0(uVar6);
        uVar8 = FUN_00a8cab0(uVar7);
        FUN_00b39f00(uVar8,uVar7,uVar6,uVar5);
        uVar15 = 0x3f800000;
        param_1[0x5d2] = piVar3[0x5d2];
        uVar13 = 0xbf800000;
        uVar5 = FUN_00a95d20(0);
        uVar12 = 0x3f800000;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = FUN_00a95df0(0);
        FUN_00a9e290(uVar6,uVar7,uVar8,uVar12,uVar5,uVar13,uVar15);
        fVar11 = (float10)FUN_00a958c0(0);
        FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          Animation::Motion::Unit::setCurrentTime(0,(float)fVar11);
        }
        FUN_0040ac60(piVar3 + 0x2ac);
        param_1[0x375] = piVar3[0x375];
        param_1[0x376] = piVar3[0x376];
        param_1[0x377] = piVar3[0x377];
        uVar6 = 0;
        param_1[0x139] = piVar3[0x139];
        uVar5 = FUN_00a82d50(0);
        FUN_00a88b50(uVar5,uVar6);
        uVar5 = FUN_009f8b40();
        FUN_009f8ae0(uVar5);
        iVar4 = FUN_00a10040(0x3c);
        if (iVar4 == 0) {
          param_1[0x6d2] = piVar3[0x6d2];
        }
        param_1[0x4f7] = piVar3[0x4f7];
        param_1[0x4f8] = piVar3[0x4f8];
        param_1[0x372] = piVar3[0x372];
      }
    }
  }
  iVar4 = param_1[300];
  if (((iVar4 == 0x20150) || (iVar4 == 0x20152)) || (iVar4 == 0x20170)) {
    FUN_00ac8d40(0);
    if ((param_1[0x377] & 0x40000U) == 0) {
      if ((param_1[0x377] & 0x80000U) != 0) {
        FUN_00ac8dd0("_R_leg_",1);
      }
      if ((param_1[0x377] & 0x100000U) != 0) {
        FUN_00ac8dd0("_L_leg_",1);
      }
      if ((param_1[0x377] & 0x200000U) != 0) {
        FUN_00ac8dd0("_R_arm_",1);
      }
      if ((param_1[0x377] & 0x400000U) != 0) {
        FUN_00ac8dd0("_L_arm_",1);
      }
    }
    else {
      FUN_00ac8d40(1);
    }
  }
  piVar3 = (int *)FUN_00ac8a30();
  iVar4 = FUN_00a8cd60(piVar3,4);
  if (iVar4 != 0) {
    param_1[0x375] = param_1[0x375] | 0x40000000;
  }
  iVar4 = FUN_00a8cd60(piVar3,7);
  if (iVar4 != 0) {
    param_1[0x375] = param_1[0x375] | 0x20000000;
  }
  if (((param_1[0x375] & 0x200000U) != 0) && ((param_1[0x375] & 0x100000U) == 0)) {
    iVar4 = FUN_00a8cd60(piVar3,0x22);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x358))(0x17c,param_1 + 0x60c);
    }
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  param_1[0x375] = param_1[0x375] | 0x80000000;
  iVar4 = param_1[0x372];
  param_1[0x4f9] = param_1[0x4f7];
  param_1[0x4fa] = param_1[0x4f8];
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  iVar1 = *piVar3;
  param_1[0x372] = iVar1;
  iVar2 = piVar3[1];
  param_1[0x373] = iVar2;
  iVar9 = iVar1;
  if (iVar1 == 0x10) {
    iVar9 = iVar2;
  }
  iVar4 = FUN_00b4c530(iVar1 == 0x10,iVar9,iVar4);
  if ((param_1[0x294] != 0) && (iVar4 != 0)) {
    FUN_00a88250(0,param_1 + 0x10);
    piVar3 = (int *)FUN_00c206d0();
    (**(code **)(*piVar3 + 4))(0,param_1[0x13c],param_1 + 0x10);
  }
  return;
}

// 00B52690  FUN_00b52690  size=155  [callgraph]
void __fastcall FUN_00b52690(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1094;
  FUN_00a7c950();
  FUN_00a7c950();
  switch(*(undefined4 *)(param_1 + 0x13dc)) {
  case 1:
  case 7:
    FUN_00b4d020(iVar1);
    FUN_00b3a290();
    return;
  case 2:
    FUN_00b4d140(iVar1);
    FUN_00b3a3a0();
    return;
  case 3:
    FUN_00b3a660(iVar1);
    FUN_00b3a480();
    return;
  case 5:
    FUN_00b3a940(iVar1);
    FUN_00b3a480();
    return;
  case 6:
    FUN_00b4d360(iVar1,0);
    FUN_00b4d360(param_1 + 0x1098,1);
    FUN_00b3aba0(0);
  }
  return;
}

// 00B52750  FUN_00b52750  size=134  [callgraph]
void __fastcall FUN_00b52750(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x109c;
  FUN_00a7c950();
  FUN_00a7c950();
  switch(*(undefined4 *)(param_1 + 0x13e0)) {
  case 1:
  case 7:
    FUN_00b4d020(iVar1);
    return;
  case 2:
    FUN_00b4d140(iVar1);
    return;
  case 3:
    FUN_00b3a660(iVar1);
    return;
  case 4:
    FUN_00b334c0(iVar1);
    return;
  case 5:
    FUN_00b3a940(iVar1);
    return;
  case 6:
    FUN_00b4d360(iVar1,0);
    FUN_00b4d360(param_1 + 0x10a0,1);
  }
  return;
}

// 00B52E40  FUN_00b52e40  size=483  [callgraph]
void __fastcall FUN_00b52e40(int *param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf4C();
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0xb0003) {
    if (iVar1 == 0xb0002) {
      FUN_00b3f940();
    }
    else {
      switch(iVar1) {
      case 0xa0000:
        FUN_00b50b00();
        break;
      case 0xa0001:
        FUN_00b3cc60();
        break;
      case 0xa0002:
        FUN_00b3ce80();
        break;
      case 0xa0003:
        FUN_00b3d190();
        break;
      case 0xa0004:
        FUN_00b3d300();
        break;
      case 0xa0005:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3d760();
        break;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3d940();
        break;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3dbc0();
        break;
      case 0xa0009:
        FUN_00b3dc20();
        break;
      case 0xa000a:
        FUN_00b3ddb0();
        break;
      case 0xa000b:
        FUN_00b3dfa0();
        break;
      case 0xa000c:
        FUN_00b3e070();
        break;
      case 0xa000d:
        FUN_00b3e180();
        break;
      case 0xa000e:
        FUN_00b36870();
        break;
      case 0xa000f:
        FUN_00b3e4c0();
        break;
      case 0xa0010:
      case 0xa0011:
        FUN_00b3e5b0();
        break;
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3d700();
        break;
      case 0xa0013:
      case 0xa0019:
        FUN_00b3e740();
        break;
      case 0xa0014:
        FUN_00b3eac0();
        break;
      case 0xa0015:
        FUN_00b36970();
        break;
      case 0xa0016:
        FUN_00b3ebe0();
        break;
      case 0xa0017:
        FUN_00b3ecc0();
        break;
      case 0xa0018:
        FUN_00b3ed70();
      }
    }
  }
  else {
    switch(iVar1) {
    case 0xc0000:
      FUN_00b356f0();
      break;
    case 0xc0001:
      FUN_00b3bb60();
      break;
    case 0xc0002:
      FUN_00b358d0();
      break;
    case 0xc0003:
      FUN_00b359e0();
      break;
    case 0xc0004:
      FUN_00b2f270();
    }
  }
  iVar1 = FUN_00a8c760(0x1a);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x209) = 2;
    param_1[0x20a] = 0x78;
  }
  return;
}

// 00B530A0  FUN_00b530a0  size=422  [callgraph]
/* WARNING: Switch with 1 destination removed at 0x00b5318f : 19 cases all go to same destination */

void __fastcall FUN_00b530a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      return;
    case 1:
      FUN_00b418e0();
      return;
    case 2:
      FUN_00b41ef0();
      return;
    case 3:
      FUN_00b42060();
      return;
    case 6:
      FUN_00b425b0();
      return;
    case 0xb:
      FUN_00b42b80();
      return;
    case 0xc:
      FUN_00b42c20();
      return;
    case 0xd:
      FUN_00b30330();
      return;
    case 0xe:
      FUN_00b3bf00();
      return;
    case 0xf:
      FUN_00b3c270();
      return;
    case 0x10:
      FUN_00b3c430();
      return;
    case 0x11:
      FUN_00b3c5d0();
      return;
    case 0x12:
      FUN_00b3c750();
      return;
    case 0x13:
      FUN_00b4dc70();
      return;
    case 0x16:
      FUN_00b43350();
      return;
    case 0x17:
      FUN_00b433f0();
      return;
    case 0x18:
      FUN_00b43490();
      return;
    case 0x25:
      FUN_00b2a4e0();
      return;
    }
  }
  else if (0x20009 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_00b3ca20();
        return;
      }
    }
    else if (iVar1 < 0xb0001) {
      switch(iVar1) {
      case 0xa0004:
        FUN_00b2f6a0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3d700();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b2f6c0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b2f6e0();
        return;
      case 0xa000a:
        FUN_00b3dd80();
        return;
      case 0xa0013:
        FUN_00b2f770();
        return;
      case 0xa0014:
        (**(code **)(*param_1 + 0x1d4))(1);
        break;
      case 0xa0022:
        FUN_00b47c80();
        return;
      }
    }
  }
  return;
}

// 00B53330  FUN_00b53330  size=81  [callgraph]
void __thiscall FUN_00b53330(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x10;
  if (*(int *)(param_1 + 0x4b0) == 0x20170) {
    iVar1 = FUN_00b4f530(param_2);
  }
  else {
    iVar1 = FUN_00b4ddd0(param_2);
  }
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xffffffef;
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xdb4) & 8) == 0)) {
    *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 1;
  }
  return;
}

// 00B53390  Em0010::vf40  size=6670  [class]
undefined4 __fastcall Em0010::vf40(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int iStack_94;
  uint uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [124];
  
  iVar6 = BehaviorEmBase::vf40();
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = param_1[300];
  uVar7 = 0x2014f;
  if ((iVar6 == 0x20150) || (iVar6 == 0x20152)) {
    uVar7 = 0x2015f;
  }
  if (iVar6 == 0x20170) {
    uVar7 = 0x20170;
  }
  FUN_00ac9720(0x20012,uVar7);
  param_1[0x1c] = 0x3f8ccccd;
  param_1[0x1d] = 0x3f8ccccd;
  param_1[0x1e] = 0x3f8ccccd;
  param_1[0x56c] = 0;
  param_1[0x56d] = -0x40800000;
  param_1[0x21e] = 1;
  param_1[0x375] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  FUN_00a7c950();
  param_1[0x5a2] = 0x3f800000;
  param_1[0x3e9] = 1;
  param_1[0x6c9] = 0;
  param_1[0x4e8] = 1;
  param_1[0x6b7] = -1;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  param_1[0x6ba] = 0;
  param_1[0x6bb] = -1;
  param_1[0x6bc] = 0;
  param_1[0x6bd] = 0;
  param_1[0x6be] = 0;
  if ((param_1[0x12a] & 0x8000U) != 0) {
    param_1[0x376] = param_1[0x376] | 0x80000;
  }
  if ((param_1[0x12a] & 0x40000U) != 0) {
    param_1[0x376] = param_1[0x376] | 0x40000;
  }
  param_1[0x5c0] = param_1[0x14];
  param_1[0x5c1] = param_1[0x15];
  param_1[0x5c2] = param_1[0x16];
  param_1[0x5c3] = param_1[0x17];
  param_1[0x5bc] = param_1[0x24];
  param_1[0x5bd] = param_1[0x25];
  param_1[0x5be] = param_1[0x26];
  param_1[0x5bf] = param_1[0x27];
  uVar1 = param_1[300];
  if (uVar1 < 0x20151) {
    if (uVar1 != 0x20150) {
      if (uVar1 < 0x20143) {
        if (uVar1 == 0x20142) {
          FUN_00acf600(0x20143,"Em0142Body");
        }
        else if (uVar1 == 0x20010) {
          FUN_00acf600(0x20011,"Em0010Body");
        }
        else if (uVar1 == 0x20140) {
          FUN_00acf600(0x20141,"Em0140Body");
        }
      }
      else if (uVar1 == 0x20144) {
        FUN_00acf600(0x20145,"Em0144Body");
      }
      goto LAB_00b535f4;
    }
    pcVar13 = "Em0150Body";
    uVar7 = 0x20151;
LAB_00b535de:
    FUN_00acf600(uVar7,pcVar13);
    iVar6 = 0x3f99999a;
LAB_00b535eb:
    param_1[0x1e] = iVar6;
    param_1[0x1d] = iVar6;
    param_1[0x1c] = iVar6;
  }
  else {
    if (uVar1 == 0x20152) {
      pcVar13 = "Em0152Body";
      uVar7 = 0x20153;
      goto LAB_00b535de;
    }
    if (uVar1 != 0x20160) {
      if (uVar1 != 0x20170) goto LAB_00b535f4;
      FUN_00acf600(0x20171,"Em0170Body");
      iVar6 = 0x3fa66666;
      goto LAB_00b535eb;
    }
    FUN_00acf600(0x20161,"Em0160Body");
  }
LAB_00b535f4:
  iVar6 = FUN_00ac8a50();
  param_1[0x371] = iVar6;
  param_1[0x372] = 0;
  param_1[0x374] = 0;
  FUN_00ac8e10(0);
  FUN_00ac8eb0(1,1);
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  local_8c = 0x3f666666;
  local_88 = 0x3f99999a;
  local_84 = 0x3f8ccccd;
  local_a0 = 0x3e4ccccd;
  local_9c = 0x40400000;
  local_98 = 0x40000000;
  FUN_00a8e4d0(&local_a0,&local_8c);
  iVar6 = param_1[300];
  if (((iVar6 == 0x20150) || (iVar6 == 0x20152)) || (iVar6 == 0x20170)) {
    FUN_00ac8d40(0);
  }
  if ((param_1[0x371] == 0) && (FUN_00ac94e0(&DAT_0163d9a8), param_1[0x371] == 0)) {
    iVar6 = param_1[300];
    uVar7 = 1;
    if (iVar6 == 0x20140) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x20142) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x20144) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x20150) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x20152) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x20160) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x20170) {
      uVar7 = 0x1c2;
    }
    (**(code **)(*param_1 + 0x358))(uVar7,param_1 + 0x45c);
  }
  sVar4 = FUN_00dde2d0(0,4);
  param_1[0x6d4] = (int)sVar4;
  FUN_00b2f060((int)sVar4);
  param_1[0x4ed] = 0;
  param_1[0x4ec] = 0;
  FUN_00ac4c70(1);
  lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>();
  FUN_00a929d0();
  if (param_1[0x1d6] != 0) {
    FUN_00a92a90(0xffffffff);
  }
  FUN_00a92a30(0x20010);
  FUN_00ac4c70(0);
  param_1[0x672] = (uint)(param_1[0x128] == 0x14);
  if ((param_1[0x128] == 0x14) != 0) {
    FUN_00b4da50();
    return 1;
  }
  sVar4 = FUN_00dde2d0(0,0x3c);
  FUN_00a8edf0(sVar4 + 0x78);
  if (param_1[0x1d5] != 0) {
    param_1[0x6ca] = 0x3f800000;
    param_1[0x6cb] = 0x3f800000;
    if (param_1[300] == 0x20142) {
      fVar11 = (float10)FUN_00ac85c0(5,0xa3);
      param_1[0x6ca] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(5,0xa4);
      param_1[0x6cb] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x20144) {
      fVar11 = (float10)FUN_00ac85c0(7,0xa3);
      param_1[0x6ca] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(7,0xa4);
      param_1[0x6cb] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x20160) {
      fVar11 = (float10)FUN_00ac85c0(6,0xa3);
      param_1[0x6ca] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(6,0xa4);
      param_1[0x6cb] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x20152) {
      fVar11 = (float10)FUN_00ac85c0(5,0xa6);
      param_1[0x6ca] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(5,0xa7);
      param_1[0x6cb] = (int)(float)fVar11;
    }
    FUN_00ac8660(0,0x2f);
    uVar5 = FUN_00ac8660(0,0x30);
    iVar6 = FUN_00b34d00();
    if (iVar6 != 0) {
      FUN_00ac8660(0,0x37);
      uVar5 = FUN_00ac8660(0,0x38);
    }
    if ((param_1[0x12a] & 0x2000U) != 0) {
      FUN_00ac8660(0,0x33);
      uVar5 = FUN_00ac8660(0,0x34);
    }
    if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
      FUN_00ac8660(0,0x3b);
      uVar5 = FUN_00ac8660(0,0x3c);
    }
    if (param_1[300] == 0x20170) {
      FUN_00ac8660(0,0x3f);
      uVar5 = FUN_00ac8660(0,0x40);
      iVar6 = FUN_00ac8660(0,0xaa);
      param_1[0x6cf] = iVar6;
      fVar11 = (float10)FUN_00ac85c0(5,0xab);
      param_1[0x6cc] = (int)(float)fVar11;
      param_1[0x6cd] = 0;
      param_1[0x6ce] = 0;
      iVar6 = FUN_00ac8660(0,0xae);
      param_1[0x12a] = param_1[0x12a] | 0x400000;
      param_1[0x6d0] = iVar6;
      param_1[0x6d1] = 0;
    }
    if (param_1[300] == 0x20160) {
      FUN_00ac8660(0,0x43);
      uVar5 = FUN_00ac8660(0,0x44);
    }
    FUN_00dde2d0(0,uVar5);
    uVar7 = FUN_00fdbc60();
    FUN_00a8edf0(uVar7);
    fVar11 = (float10)FUN_00ac85c0(5,0x9f);
    param_1[0x6c7] = (int)(float)(fVar11 * (float10)60.0);
    fVar11 = (float10)FUN_00ac85c0(5,0xa0);
    param_1[0x6c8] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0xb1);
    param_1[0x639] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0xb9);
    param_1[0x3d7] = (int)(float)fVar11;
    iVar6 = FUN_00ac8660(0,0xba);
    param_1[0x3d8] = iVar6;
  }
  param_1[0x422] = 0;
  param_1[0x677] = 0;
  param_1[0x65e] = 0;
  param_1[0x6b3] = 0;
  iVar6 = FUN_00ac8660(0,0x69);
  param_1[0x6b2] = iVar6;
  uVar7 = FUN_00ac8660(0,0x6a);
  sVar4 = FUN_00dde2d0(0,uVar7);
  param_1[0x6b2] = param_1[0x6b2] + (int)sVar4;
  if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
    iVar6 = FUN_00ac8660(0,0x6d);
    param_1[0x6b2] = iVar6;
    uVar7 = FUN_00ac8660(0,0x6e);
    sVar4 = FUN_00dde2d0(0,uVar7);
    param_1[0x6b2] = param_1[0x6b2] + (int)sVar4;
  }
  iVar6 = FUN_00c5def0(param_1[0x13c]);
  param_1[0x25c] = iVar6;
  FUN_00405230();
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  FUN_00c151f0(1,param_1[0x13c],3,&local_a0,0,0x41000000,0x3f800000,2,0);
  FUN_00c57830(auStack_80);
  param_1[0x1b1] = 3;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = iStack_94;
  param_1[0x1ba] = 0x3fc00000;
  param_1[0x1bb] = 1;
  param_1[0x1b9] = -1;
  param_1[0x1b8] = 5;
  if (param_1[0x129] == 10) {
    param_1[0x1bb] = 0;
  }
  param_1[0x572] = -0x40800000;
  param_1[0x571] = 0;
  iVar6 = FUN_008ec660(param_1,0x3ff33333,0x3f000000,0x41a00000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar6;
  FUN_008e6d00();
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  FUN_008e6fe0(4);
  FUN_008e6fe0(0x40000);
  FUN_008e6fe0(0x400000);
  FUN_008e7400(0x40000);
  FUN_008e5610(0x100);
  FUN_008e5610(0x80);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(0x20012,0x20010);
  iVar6 = param_1[300];
  if ((((iVar6 == 0x20010) || (iVar6 == 0x20140)) || (iVar6 == 0x20142)) ||
     ((iVar6 == 0x20144 || (iVar6 == 0x20160)))) {
    FUN_00a92f90();
    FUN_00e27330(0x2014f,0x20010);
  }
  if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
    FUN_00a92f90();
    FUN_00e27330(0x2015f,0x20010);
  }
  iVar6 = param_1[300];
  FUN_00a92f90();
  FUN_00e27330(iVar6,0x20010);
  FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  sVar4 = FUN_00dde2d0(0,6);
  param_1[0x4ea] = 0;
  param_1[0x424] = sVar4 + 1;
  iVar6 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar6;
  uStack_a4 = 0;
  uVar7 = FUN_00a54ae0(&uStack_a4,param_1 + 0x125,"_col.hkx");
  iVar6 = FUN_008f6410(param_1[0x13c],uVar7,uStack_a4);
  if (iVar6 != 0) {
    FUN_008f2cd0(0);
    (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
    puVar8 = (undefined4 *)FUN_009f8b60();
    (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar8);
    FUN_008f1600(0x80000000);
    FUN_008f1600(0x20);
    FUN_008f1600(0x100);
    FUN_008f1600(0x80);
    FUN_008f1600(0x40);
    FUN_008f12d0(0x40000);
    FUN_008f18c0(0x100);
  }
  iVar6 = FUN_00b34c00(0x3f733333,0x3ecccccd);
  uStack_90 = (uint)(iVar6 == 0);
  param_1[0x4eb] = 0;
  FUN_00a82790(param_1[0x13c],1,0);
  param_1[0x4fc] = param_1[0x4fc] | 0x60;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  param_1[0x52a] = 0x3f800000;
  param_1[0x52b] = iStack_94;
  FUN_00a82870(0x3f860a92,0xbf860a92,0x3dcccccd,0x393702d3,0x3d567750);
  puVar8 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
  param_1[0x360] = (int)puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar10 = &DAT_018a7c18;
    for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    }
    lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
              (param_1[0x13c],5,param_1[0x360],4);
    FUN_00a88b50(1,0);
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x20) != 0) {
    lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
              (param_1[0x13c],5,&DAT_018a7b88,4);
    FUN_00a88b50(1,0);
  }
  if ((param_1[0x351] & 0x80000000U) != 0) {
    if ((param_1[0x376] & 0x80000U) != 0) {
      param_1[0x352] = 0x43480000;
    }
    if ((param_1[0x12a] & 0x800000U) != 0) {
      FUN_00a82dd0(1);
      FUN_00a82e00(1);
      FUN_00a82e30(1);
    }
  }
  iVar6 = param_1[300];
  iVar9 = 1;
  if ((iVar6 == 0x20150) || (iVar6 == 0x20152)) {
    iVar9 = 7;
  }
  iVar2 = param_1[0x128];
  param_1[0x4f7] = iVar9;
  param_1[0x4f8] = 0;
  if (iVar2 == 1) {
    param_1[0x4f7] = 2;
    param_1[0x4f8] = 0;
  }
  if (iVar2 == 2) {
    param_1[0x4f7] = 3;
    param_1[0x4f8] = 0;
  }
  if (iVar2 == 3) {
    param_1[0x4f7] = iVar9;
    param_1[0x4f8] = 2;
  }
  if (iVar2 == 4) {
    param_1[0x4f7] = iVar9;
    param_1[0x4f8] = 3;
  }
  if (iVar2 == 6) {
    param_1[0x4f7] = 2;
    param_1[0x4f8] = iVar9;
  }
  if (iVar2 == 7) {
    param_1[0x4f7] = 3;
    param_1[0x4f8] = iVar9;
  }
  if (iVar2 == 10) {
    param_1[0x4f7] = 2;
    param_1[0x4f8] = iVar9;
  }
  if (iVar2 == 8) {
    param_1[0x4f7] = 0;
    param_1[0x4f8] = 0;
  }
  if (iVar2 == 0xe) {
    param_1[0x4f7] = 2;
    param_1[0x4f8] = iVar9;
  }
  if (iVar2 == 0xf) {
    param_1[0x4f7] = iVar9;
    param_1[0x4f8] = 4;
  }
  if (iVar2 == 0x10) {
    param_1[0x4f7] = 3;
    param_1[0x4f8] = iVar9;
  }
  if (iVar2 == 0x11) {
    param_1[0x4f7] = 6;
    param_1[0x4f8] = 0;
  }
  if (iVar2 == 0x12) {
    param_1[0x4f7] = 6;
    param_1[0x4f8] = 2;
  }
  if (iVar2 == 0x13) {
    param_1[0x4f7] = 2;
    param_1[0x4f8] = 6;
  }
  if (iVar6 == 0x20170) {
    param_1[0x4f7] = 5;
    param_1[0x4f8] = 0;
  }
  if (param_1[0x371] != 0) {
    param_1[0x4f7] = 0;
    param_1[0x4f8] = 0;
  }
  iVar6 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar6 == 0) {
    return 0;
  }
  param_1[0x4ef] = 0;
  param_1[0x56e] = 0;
  param_1[0x4ee] = 1;
  param_1[0x4f0] = 0;
  sVar4 = FUN_00dde2d0(0,0x14);
  param_1[0x570] = 0;
  *(undefined1 *)(param_1 + 0x3da) = 0;
  *(undefined1 *)(param_1 + 0x3de) = 0;
  param_1[0x6d5] = 0;
  param_1[0x5d3] = 0x1e;
  param_1[0x5d9] = 0;
  param_1[0x3ef] = (int)((float)(int)sVar4 * 60.0 + 900.0);
  param_1[0x56f] = 0;
  param_1[0x3db] = 0;
  param_1[0x3df] = 0;
  param_1[0x5d8] = -0x40800000;
  param_1[0x5d4] = param_1[0x14];
  param_1[0x5d5] = param_1[0x15];
  param_1[0x5d6] = param_1[0x16];
  param_1[0x5d7] = param_1[0x17];
  param_1[0x5b0] = param_1[0x5d4];
  param_1[0x5b1] = param_1[0x5d5];
  param_1[0x5b2] = param_1[0x5d6];
  param_1[0x5b3] = param_1[0x5d7];
  FUN_00b52690();
  FUN_00b52750();
  if ((*(byte *)(param_1 + 0x12a) & 0x80) != 0) {
    FUN_00b3b490();
  }
  uVar5 = 4;
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    FUN_00a88b50(4,0);
  }
  (**(code **)(*param_1 + 0x34c))();
  if (param_1[299] == 1) {
    FUN_00b39f00(0x100001,0,0,0);
    param_1[0x5ac] = 0;
    if (param_1[0x1d9] != 0) {
      CharacterControl::setHeight(0x3f000000);
      CharacterControl::setRadius(0x3dcccccd);
      FUN_008e1cc0();
    }
  }
  if (param_1[299] == 2) {
    FUN_00b39f00(0x100000,0,0,0);
    uVar5 = 0x2d4;
  }
  if (param_1[299] == 3) {
    FUN_00a88b50(4,0);
    FUN_00b39f00(0x100002,0,0,0);
    uVar5 = 0x2d6;
    iVar6 = FUN_00b2eb10();
    if (iVar6 != 0) {
      FUN_00b3a190();
      param_1[0x3e9] = 0;
    }
  }
  if (param_1[299] == 4) {
    FUN_00a88b50(4,0);
    FUN_00b39f00(0xe,0,0,0);
    uVar5 = 0x241;
    FUN_00b3b490();
    param_1[0x3e9] = 0;
  }
  if (param_1[299] == 5) {
    FUN_00a88b50(4,0);
    FUN_00b39f00(0x1000b,0,0,0);
    FUN_00b3a190();
    param_1[0x3e9] = 0;
    uVar5 = 0x446;
  }
  if (param_1[299] == 6) {
    FUN_00a88b50(4,0);
    FUN_00b39f00(0x100003,0,0,0);
    uVar5 = 0x245;
    FUN_00b3a190();
    param_1[0x3e9] = 0;
  }
  if ((param_1[299] == 7) || (param_1[299] == 9)) {
    FUN_00b39f00(0x100004,0,0,0);
    uVar5 = 0x4bd;
  }
  if ((param_1[299] == 0xb) && ((param_1[0x4f7] == 2 || (param_1[0x4f7] == 3)))) {
    FUN_00b3a3a0();
    uVar5 = 0x32;
    if (param_1[0x4f7] == 3) {
      uVar5 = 0x10e;
    }
    pcVar3 = *(code **)(*param_1 + 0x34c);
    param_1[0x3e9] = 0;
    (*pcVar3)();
    param_1[0x376] = param_1[0x376] | 0x400000;
  }
  if (param_1[299] == 0xc) {
    param_1[0x376] = param_1[0x376] | 0x10000;
    (**(code **)(*param_1 + 0x34c))();
  }
  if (((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) && (param_1[299] == 8)) {
    FUN_00b39f00(0xd0000,0,0,0);
    uVar5 = 0x2a1;
    FUN_00b3a190();
    param_1[0x3e9] = 0;
    param_1[0x376] = param_1[0x376] | 0x20000000;
  }
  if (param_1[0x128] == 10) {
    FUN_00b39f00(0x10000000,0,0,0);
    uVar5 = 0x3a5;
  }
  if (param_1[0x128] == 8) {
    uVar5 = 0x38d;
  }
  if (param_1[0x128] == 0xe) {
    param_1[0x377] = param_1[0x377] | 0x4000;
    FUN_00b39f00(8,0,0,0);
    uVar5 = 0x44f;
  }
  if (param_1[0x128] == 0xf) {
    param_1[0x377] = param_1[0x377] | 0x8000;
    FUN_00b39f00(0x70000,0,0,0);
    uVar5 = 0x454;
    FUN_00b3a840();
  }
  if (param_1[0x128] == 0x10) {
    param_1[0x377] = param_1[0x377] | 0x1000;
    FUN_00b3a3a0();
    param_1[0x3e9] = 0;
    FUN_00b39f00(0x30000,0,0,0);
    if (DAT_018b9174 == 0x458) {
      param_1[0x376] = param_1[0x376] | 0x800;
    }
  }
  if (param_1[0x128] == 0xc) {
    param_1[0x377] = param_1[0x377] | 0xc0;
    FUN_00a88b50(4,0);
    FUN_00b39f00(0xe,0,0,0);
    if (param_1[299] == 3) {
      FUN_00b39f00(0x100002,0,0,0);
    }
    FUN_00b3a190();
    param_1[0x3e9] = 0;
    uVar5 = 0x2d6;
  }
  if (param_1[0x128] == 0xd) {
    param_1[0x377] = param_1[0x377] | 0xa0;
    FUN_00a88b50(4,0);
    FUN_00b39f00(0xe,0,0,0);
    if (param_1[299] == 3) {
      FUN_00b39f00(0x100002,0,0,0);
    }
    FUN_00b3a190();
    param_1[0x3e9] = 0;
    uVar5 = 0x2d6;
  }
  if ((param_1[0x12a] & 0x80000U) != 0) {
    param_1[0x375] = param_1[0x375] | 0x100;
  }
  if (param_1[0x371] == 0) {
    FUN_00aa4080(uVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
  }
  param_1[0x66f] = 0;
  param_1[0x66e] = (uint)(param_1[0x128] == 8);
  if ((param_1[0x128] == 8) != 0) {
    CardboardSlashSlot::CardboardSlashSlot();
  }
  piVar12 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar12);
  FUN_00987dd0(param_1);
  param_1[0x6d2] = -1;
  if (((param_1[0x371] == 0) && (param_1[0x66e] == 0)) &&
     ((iVar6 = FUN_00b34d00(), iVar6 != 0 || (param_1[300] == 0x20160)))) {
    FUN_00b34e20();
  }
  if ((*(byte *)(param_1 + 0x12a) & 8) != 0) {
    param_1[0x375] = param_1[0x375] | 0x2000000;
  }
  if ((param_1[0x12a] & 0x10U) != 0) {
    param_1[0x2fa] = 1;
  }
  if (((param_1[0x12a] & 0x400U) != 0) && (iVar6 = FUN_00ac8120(), iVar6 != 0)) {
    FUN_00a8e880(iVar6 + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x40490fdb,0);
  }
  if ((param_1[0x12a] & 0x1000U) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x3d0] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x1cc,0);
  }
  if ((param_1[0x12a] & 0x100000U) != 0) {
    param_1[0x376] = param_1[0x376] | 0x80000000;
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) != 0) {
    param_1[0x376] = param_1[0x376] | 0x10000000;
  }
  param_1[0x1e3] = 0;
  iVar6 = FUN_00dd3580(0x20,&DAT_01b7bd48);
  param_1[0x1e2] = iVar6;
  FUN_00a8c720(6,10);
  FUN_00a8c720(7,0xb);
  FUN_00a8c720(8,0xc);
  FUN_00a8c720(9,0xd);
  FUN_00a8c720(0xf,0x13);
  FUN_00a8c720(0x10,0x14);
  FUN_00a8c720(0x11,0x15);
  FUN_00a8c720(0x12,0x16);
  FUN_00a95e20(param_1[0x1e2],param_1[0x1e3]);
  param_1[0x20b] = 5;
  param_1[0x20c] = 5;
  iVar6 = FUN_00b34d00();
  if (iVar6 != 0) {
    if ((param_1[0x4f7] == 6) || (param_1[0x4f8] == 6)) {
      FUN_00ac9300(&DAT_01646980);
    }
    else {
      FUN_00ac94e0("saya_Double");
    }
  }
  FUN_00b2e5f0(0);
  if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
    if ((param_1[0x377] & 0x8000U) == 0) {
      param_1[0x128] = 0xb;
      param_1[0x65f] = 0x2930292;
      param_1[0x660] = 0x2930293;
      param_1[0x661] = 0x2980297;
      param_1[0x662] = 0x2940299;
      param_1[0x663] = 0x2940294;
      param_1[0x664] = 0x2960295;
      param_1[0x665] = 0x29b029a;
      param_1[0x666] = 0x29e029c;
      param_1[0x667] = 0x2c1029f;
      param_1[0x668] = 0x2b1029d;
      goto LAB_00b549b6;
    }
LAB_00b549c2:
    param_1[0x65f] = 0x4680454;
    param_1[0x660] = 0x4680468;
    param_1[0x661] = 0x470046c;
    param_1[0x662] = 0x4780474;
    param_1[0x663] = 0x4780478;
    param_1[0x664] = 0x47c047b;
    *(undefined4 *)((int)param_1 + 0x199a) = 0x4810481;
    *(undefined4 *)((int)param_1 + 0x199e) = 0x47d0483;
    *(undefined4 *)((int)param_1 + 0x19a2) = 0x48c048c;
  }
  else {
LAB_00b549b6:
    if ((param_1[0x377] & 0x8000U) != 0) goto LAB_00b549c2;
  }
  if (param_1[300] == 0x20170) {
    param_1[0x65f] = 0x5240521;
    param_1[0x660] = 0x5240524;
    param_1[0x661] = 0x5320531;
    param_1[0x662] = 0x5270533;
    param_1[0x663] = 0x5270527;
    param_1[0x664] = 0x52e052d;
    param_1[0x665] = 0x52a0529;
    param_1[0x666] = 0x53f052b;
    param_1[0x667] = 0x5410540;
    param_1[0x668] = 0x542052f;
  }
  if ((param_1[0x4f7] == 6) || (param_1[0x4f8] == 6)) {
    param_1[0x65f] = 0x26d0268;
    param_1[0x660] = 0x26d026d;
    param_1[0x661] = 0x2720271;
    param_1[0x662] = 0x26f0273;
    param_1[0x663] = 0x26f026f;
    param_1[0x664] = 0x27a0279;
    param_1[0x665] = 0x2760275;
    param_1[0x666] = 0x2850277;
    param_1[0x667] = 0x2880286;
    *(undefined2 *)(param_1 + 0x668) = 0x27b;
    *(undefined4 *)((int)param_1 + 0x19a2) = 0x2810289;
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    param_1[0x639] = (int)((float)param_1[0x639] + 2.0);
  }
  if (param_1[0x129] == 9) {
    FUN_00a8edf0(0x50);
  }
  param_1[0x6b6] = -1;
  param_1[0x673] = -1;
  param_1[0x648] = 0;
  param_1[0x65d] = 0;
  param_1[0x6d3] = 0;
  param_1[0x645] = 0;
  param_1[0x36a] = 0;
  param_1[0x36c] = 0;
  if (param_1[300] != 0x20160) goto LAB_00b54c23;
  iVar6 = param_1[0x129];
  if ((iVar6 == 1) || (iVar6 == 0)) {
    FUN_00ac94e0("_face_C");
    FUN_00ac94e0("_face_D");
    pcVar13 = "Dam_face_A";
LAB_00b54be9:
    FUN_00ac94e0(pcVar13);
  }
  else {
    if (iVar6 == 2) {
      FUN_00ac94e0("_face_A");
      FUN_00ac94e0("_face_D");
      pcVar13 = "Dam_face_C";
      goto LAB_00b54be9;
    }
    if (iVar6 == 3) {
      FUN_00ac94e0("_face_A");
      pcVar13 = "_face_C";
      goto LAB_00b54be9;
    }
  }
  FUN_00ac9300("L_arm_A_DEC");
  if ((param_1[0x4f7] == 1) || (param_1[0x4f8] == 1)) {
    FUN_00e5e0c0("wp0031_se_setobj_baton",param_1,0xffffffff,0);
  }
LAB_00b54c23:
  if ((param_1[300] == 0x20150) || (param_1[300] == 0x20152)) {
    fVar11 = (float10)FUN_00ac85c0(5,0x80);
    param_1[0x6c0] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x81);
    param_1[0x6c1] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x82);
    param_1[0x6c2] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x83);
    param_1[0x6c3] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x84);
    param_1[0x6c4] = (int)(float)fVar11;
  }
  if (param_1[300] == 0x20170) {
    fVar11 = (float10)FUN_00ac85c0(5,0x87);
    param_1[0x6c0] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x88);
    param_1[0x6c1] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x89);
    param_1[0x6c2] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x8a);
    param_1[0x6c3] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x8b);
    param_1[0x6c4] = (int)(float)fVar11;
  }
  if ((param_1[300] == 0x20144) || (param_1[300] == 0x20160)) {
    if (((param_1[0x4f7] != 2) || (param_1[0x4f8] == 0)) && (param_1[0x4f8] != 2)) {
      FUN_00ac94e0("rifle_ATT");
    }
  }
  if (((param_1[0x12a] & 0x4000U) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e59c0(2);
  }
  if ((uStack_90 != 0) && (iVar6 = FUN_00ac8a50(), iVar6 == 0)) {
    FUN_00b354b0(0,0);
    FUN_00b39f00(0xb0002,0,0,0);
  }
  return 1;
}

// 00B54DB0  FUN_00b54db0  size=1625  [callgraph]
void __fastcall FUN_00b54db0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xdda) & 1) != 0) {
    if (*(int *)(param_1 + 0x61c) == 0) {
      FUN_00b2efd0();
      return;
    }
    iVar3 = FUN_00b35500();
    if (iVar3 == 0) {
      if (0.0 < *(float *)(param_1 + 0x1b4c)) {
        return;
      }
      FUN_00b39f00(0x21,0,0,0);
      return;
    }
    FUN_00b3fb60();
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00b553d8;
  iVar3 = FUN_00b34da0();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar3 + 0x4c);
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x40000000;
    FUN_00b39f00(0x19,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00b553d8;
  if ((*(byte *)(param_1 + 0xdd4) & 4) != 0) {
    uVar4 = FUN_00dde2a0(0,100);
    uVar4 = (uVar4 & 0xffff) % 3;
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0xfac) != 0) {
        FUN_00b39f00(0x12,0,0,0);
        return;
      }
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0xfb0) != 0) {
        FUN_00b39f00(0x10,0,0,0);
        return;
      }
    }
    else if ((uVar4 == 2) && (*(int *)(param_1 + 0xfb4) != 0)) goto LAB_00b54eb9;
  }
  iVar3 = FUN_00a82e80();
  if (((iVar3 != 0) &&
      ((*(float *)(param_1 + 0x1824) < 0.0 && (12.25 < *(float *)(param_1 + 0xa8c))))) &&
     ((*(int *)(param_1 + 0x18f0) == 0 || ((*(uint *)(param_1 + 0xdd4) & 0x400000) == 0)))) {
    FUN_00b39f00(0x14,0,0,0);
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
  if ((((iVar3 != 0) && (*(int *)(param_1 + 0x13dc) == 1)) && (*(int *)(param_1 + 0x13b8) != 0)) &&
     (*(float *)(param_1 + 0xa8c) < 25.0)) {
    FUN_00b39f00(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00b39f00(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00b39f00(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    }
    if (6.25 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
      FUN_00b39f00(0x10001,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    }
    if (*(float *)(param_1 + 0xaa0) <= 2.0943952) {
      return;
    }
    FUN_00b39f00(0x10005,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(int *)(param_1 + 0x18f0) != 0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0xfb4) != 0) {
        uVar5 = 0x11;
        goto LAB_00b550fb;
      }
    }
    else if (*(int *)(param_1 + 0xfb0) != 0) {
      uVar5 = 0x10;
LAB_00b550fb:
      FUN_00b39f00(uVar5,0,0,0);
    }
  }
  if ((*(int *)(param_1 + 0xbe8) == 0) && (*(float *)(param_1 + 0xa8c) <= 4.0)) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
  }
  if ((((36.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
      (*(int *)(param_1 + 0x18f0) != 0)) ||
     (((100.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
      (*(int *)(param_1 + 0x18f0) != 0)))) {
    FUN_00b39f00(0x13,0,0,0);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xdd4) >> 0x16 & 1;
  if (uVar4 != 0) {
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      FUN_00b39f00(0x18,0,0,0);
      return;
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00b55231:
      FUN_00b39f00(0x16,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      FUN_00b39f00(0x17,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00b55231;
  }
  if ((*(int *)(param_1 + 0x13c4) != 0) && (*(int *)(param_1 + 0x18f0) != 0)) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
    if (*(int *)(param_1 + 0x13c8) != 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00b39f00(sVar2 + 0x1c,uVar5,uVar6,uVar7);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 == 1) {
        FUN_00b39f00(0x110001,0,0,0);
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
    if (iVar3 != 0) {
      FUN_00b39f00(0x10008,0,0,0);
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
    if (iVar3 == 0) {
      return;
    }
    FUN_00b39f00(0xa0021,0,0,0);
    return;
  }
  if ((uVar4 != 0) && ((*(float *)(param_1 + 0x920) < 0.0 || (*(int *)(param_1 + 0x18f0) == 0)))) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0xfb4) != 0) {
LAB_00b54eb9:
        FUN_00b39f00(0x11,0,0,0);
        return;
      }
    }
    else if (*(int *)(param_1 + 0xfb0) != 0) {
      FUN_00b39f00(0x10,0,0,0);
      return;
    }
  }
  if (((*(float *)(param_1 + 0xa8c) < 10.0) && (*(int *)(param_1 + 0x18f0) != 0)) &&
     (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5(), iVar3 != 0)) {
    FUN_00b39f00(0x1000c,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0x924);
  if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
    iVar3 = FUN_00464930();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xdb0) = 1;
    }
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
LAB_00b553d8:
  fVar1 = *(float *)(param_1 + 0xa8c);
  if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00b3ad10(0xffffffff);
  }
  return;
}

// 00B55410  FUN_00b55410  size=1088  [callgraph]
void __fastcall FUN_00b55410(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00b34da0();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x376] = param_1[0x376] | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00b39f00(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
      if (((iVar3 != 0) && (param_1[0x4f7] == 1)) &&
         ((param_1[0x4ee] != 0 && ((float)param_1[0x2a3] < 25.0)))) {
        FUN_00b39f00(0x10002,0,0,0);
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
        if (iVar3 != 0) {
          FUN_00b39f00(0xa0021,0,0,0);
        }
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00b39f00(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00b39f00(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00b39f00(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00b39f00(0x10005,0,0,0);
          }
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x4f2] != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00b39f00(sVar2 + 0x1c,uVar4,uVar5,uVar6);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00b39f00(0x110001,0,0,0);
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
        if (iVar3 != 0) {
          FUN_00b39f00(0x10008,0,0,0);
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
        if (iVar3 == 0) {
          return;
        }
        FUN_00b39f00(0xa0021,0,0,0);
        return;
      }
      iVar3 = FUN_00a82e80();
      if (((iVar3 != 0) && ((param_1[0x375] & 0x400000U) != 0)) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) {
LAB_00b55735:
        FUN_00b39f00(0x13,0,0,0);
        return;
      }
      if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
        if (param_1[0x63c] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_00b557c5;
        }
      }
      else if (param_1[0x63c] != 0) goto LAB_00b55735;
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          FUN_00b39f00(0x11,0,0,0);
        }
        else {
          FUN_00b39f00(0x10,0,0,0);
        }
      }
    }
  }
LAB_00b557c5:
  if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x00b557e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00b3ad10(0xffffffff);
    }
  }
  else {
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
    if (iVar3 != 0) {
      FUN_00b39f00(0x10008,0,0,0);
      return;
    }
  }
  return;
}

// 00B55850  FUN_00b55850  size=1031  [callgraph]
void __fastcall FUN_00b55850(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = true;
  if (param_1[0x187] == 0) goto LAB_00b55bc6;
  if (param_1[0x3ec] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b55872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar3 = FUN_00b34da0();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x376] = param_1[0x376] | 0x40000000;
    FUN_00b39f00(0x19,0,0,0);
    return;
  }
  if (param_1[0x2a1] != 0) {
    iVar3 = FUN_00a82e80();
    if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
       (12.25 < (float)param_1[0x2a3])) {
      FUN_00b39f00(0x14,0,0,0);
      return;
    }
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if (((iVar3 != 0) && (param_1[0x4f7] == 1)) &&
       ((param_1[0x4ee] != 0 && ((float)param_1[0x2a3] < 36.0)))) {
      FUN_00b39f00(0x10002,0,0,0);
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
      if (iVar3 != 0) {
        FUN_00b39f00(0xa0021,0,0,0);
      }
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00b39f00(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00b39f00(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10005,0,0,0);
        }
      }
      FUN_00c27260(param_1[0x639]);
      return;
    }
    if (param_1[0x4f1] == 0) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b55bbf;
      }
    }
    else if (param_1[0x63c] != 0) {
      param_1[0x376] = param_1[0x376] & 0xbfffffff;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
      if (param_1[0x4f2] != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_00b39f00(sVar2 + 0x1c,uVar5,uVar6,uVar7);
        sVar2 = FUN_00dde2d0(0,3);
        if (sVar2 == 1) {
          FUN_00b39f00(0x110001,0,0,0);
        }
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
      if (iVar3 != 0) {
        FUN_00b39f00(0x10008,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
      if (iVar3 == 0) {
        return;
      }
      FUN_00b39f00(0xa0021,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
        if (param_1[0x3ed] != 0) {
          FUN_00b39f00(0x1b,0,0,0);
        }
      }
      else {
        FUN_00b39f00(0x1a,0,0,0);
      }
    }
  }
LAB_00b55bbf:
  bVar4 = param_1[0x187] == 0;
LAB_00b55bc6:
  if (((!bVar4) && (100.0 < (float)param_1[0x2a3])) && ((*(byte *)(param_1 + 0x375) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b55bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00b3ad10(0xffffffff);
    }
  }
  else {
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
    if (iVar3 != 0) {
      FUN_00b39f00(0x10008,0,0,0);
      return;
    }
  }
  return;
}

// 00B55C60  FUN_00b55c60  size=1031  [callgraph]
void __fastcall FUN_00b55c60(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = true;
  if (param_1[0x187] == 0) goto LAB_00b55fd6;
  if (param_1[0x3ed] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b55c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar3 = FUN_00b34da0();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x376] = param_1[0x376] | 0x40000000;
    FUN_00b39f00(0x19,0,0,0);
    return;
  }
  if (param_1[0x2a1] != 0) {
    iVar3 = FUN_00a82e80();
    if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
       (12.25 < (float)param_1[0x2a3])) {
      FUN_00b39f00(0x14,0,0,0);
      return;
    }
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if (((iVar3 != 0) && (param_1[0x4f7] == 1)) &&
       ((param_1[0x4ee] != 0 && ((float)param_1[0x2a3] < 36.0)))) {
      FUN_00b39f00(0x10002,0,0,0);
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
      if (iVar3 != 0) {
        FUN_00b39f00(0xa0021,0,0,0);
      }
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00b39f00(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00b39f00(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10005,0,0,0);
        }
      }
      FUN_00c27260(param_1[0x639]);
      return;
    }
    if (param_1[0x4f1] == 0) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b55fcf;
      }
    }
    else if (param_1[0x63c] != 0) {
      param_1[0x376] = param_1[0x376] & 0xbfffffff;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
      if (param_1[0x4f2] != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_00b39f00(sVar2 + 0x1c,uVar5,uVar6,uVar7);
        sVar2 = FUN_00dde2d0(0,3);
        if (sVar2 == 1) {
          FUN_00b39f00(0x110001,0,0,0);
        }
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
      if (iVar3 != 0) {
        FUN_00b39f00(0x10008,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
      if (iVar3 == 0) {
        return;
      }
      FUN_00b39f00(0xa0021,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
        if (param_1[0x3ed] != 0) {
          FUN_00b39f00(0x1b,0,0,0);
        }
      }
      else {
        FUN_00b39f00(0x1a,0,0,0);
      }
    }
  }
LAB_00b55fcf:
  bVar4 = param_1[0x187] == 0;
LAB_00b55fd6:
  if (((!bVar4) && (100.0 < (float)param_1[0x2a3])) && ((*(byte *)(param_1 + 0x375) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b56001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00b3ad10(0xffffffff);
    }
  }
  else {
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
    if (iVar3 != 0) {
      FUN_00b39f00(0x10008,0,0,0);
      return;
    }
  }
  return;
}

// 00B56070  FUN_00b56070  size=936  [callgraph]
void __fastcall FUN_00b56070(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x3eb] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b56092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00b34da0();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x376] = param_1[0x376] | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00b39f00(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
      if (((iVar3 != 0) && (param_1[0x4f7] == 1)) &&
         ((param_1[0x4ee] != 0 && ((float)param_1[0x2a3] < 25.0)))) {
        FUN_00b39f00(0x10002,0,0,0);
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
        if (iVar3 != 0) {
          FUN_00b39f00(0xa0021,0,0,0);
        }
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00b39f00(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00b39f00(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00b39f00(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00b39f00(0x10005,0,0,0);
          }
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x4f2] != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00b39f00(sVar2 + 0x1c,uVar4,uVar5,uVar6);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00b39f00(0x110001,0,0,0);
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
        if (iVar3 != 0) {
          FUN_00b39f00(0x10008,0,0,0);
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
        if (iVar3 == 0) {
          return;
        }
        FUN_00b39f00(0xa0021,0,0,0);
        return;
      }
    }
    if (((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) &&
       ((*(byte *)(param_1 + 0x375) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b56377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00b3ad10(0xffffffff);
    }
  }
  else if (((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
          ((6.25 < (float)param_1[0x2a3] && ((float)param_1[0x2a8] < 0.7853982)))) {
    FUN_00b39f00(0x10008,0,0,0);
    return;
  }
  return;
}

// 00B56420  FUN_00b56420  size=917  [callgraph]
void __fastcall FUN_00b56420(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  if (param_1[0x187] == 0) {
    param_1[0x4e8] = 1;
    goto LAB_00b56719;
  }
  iVar3 = FUN_00b34da0();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x376] = param_1[0x376] | 0x40000000;
    FUN_00b39f00(0x19,0,0,0);
    return;
  }
  iVar3 = FUN_00b2ea70();
  if (iVar3 != 0) {
    FUN_00b39f00(0x120000,0,0,0);
    param_1[0x6b7] = -1;
    return;
  }
  iVar3 = FUN_00b2e920();
  if (iVar3 != 0) {
    FUN_00b39f00(0x120004,0,0,0);
    param_1[0x6b7] = -1;
    return;
  }
  iVar3 = FUN_00b2e9b0();
  if (iVar3 != 0) {
    FUN_00b39f00(0x120001,0,0,0);
    param_1[0x6b7] = -1;
    return;
  }
  iVar3 = FUN_00b52db0();
  if (iVar3 != 0) {
    return;
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = lib::Array<Entity*>::Array<Entity*>_4(), iVar3 != 0)) {
    if (param_1[0x250] == 1) {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 1) != 0)) {
LAB_00b56574:
        uVar5 = 0x10009;
LAB_00b5657f:
        FUN_00b39f00(uVar5,0,0,0);
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if ((float)param_1[0x2a3] < 16.0) {
        uVar5 = 0x10002;
        goto LAB_00b5657f;
      }
    }
    else {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 1) != 0))
      goto LAB_00b56574;
      if ((float)param_1[0x2a3] < 6.25) {
        uVar5 = 0x10004;
        goto LAB_00b5657f;
      }
    }
  }
  if (param_1[0x63c] == 0) {
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x375] & 0x400000U) != 0)) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00b39f00(0x11,0,0,0);
      }
      else {
        FUN_00b39f00(0x10,0,0,0);
      }
    }
  }
  else {
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x249] = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x375) & 4) != 0) {
    param_1[0x375] = param_1[0x375] & 0xfffffffb;
    if (param_1[0x654] == 0) {
      iVar3 = FUN_00ac4d60(4);
      if (iVar3 != 0) {
        FUN_00b39f00(0x27,0,0,0);
        return;
      }
      iVar3 = FUN_00ac4d60(3);
      if (iVar3 != 0) {
        FUN_00b39f00(0x26,0,0,0);
        return;
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5();
    if (iVar3 != 0) {
      FUN_00b39f00(0x1000c,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      uVar5 = 0x11;
    }
    else {
      uVar5 = 0x10;
    }
    FUN_00b39f00(uVar5,0,0,0);
  }
LAB_00b56719:
  if (param_1[0x63c] != 0) {
    if (*(int *)(param_1[0x2a1] + 0x2660) != 0) {
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
      if (iVar3 != 0) {
        FUN_00b39f00(0x10008,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
      if (iVar3 == 0) {
        return;
      }
      FUN_00b39f00(0xa0021,0,0,0);
      return;
    }
    if (((param_1[0x63c] != 0) && ((float)param_1[0x2a3] < 12.25)) &&
       ((float)param_1[0x2a8] < 1.3962634)) {
                    /* WARNING: Could not recover jumptable at 0x00b567ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  FUN_00b52db0();
  return;
}

// 00B567C0  FUN_00b567c0  size=373  [callgraph]
void __fastcall FUN_00b567c0(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    return;
  }
  iVar2 = FUN_00b34da0();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar2 + 0x4c);
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x40000000;
    FUN_00b39f00(0x19,0,0,0);
    return;
  }
  iVar2 = FUN_00b2ea70();
  if (iVar2 != 0) {
    FUN_00b39f00(0x120000,0,0,0);
    *(undefined4 *)(param_1 + 0x1adc) = 0xffffffff;
    return;
  }
  iVar2 = FUN_00b2e920();
  if (iVar2 != 0) {
    FUN_00b39f00(0x120004,0,0,0);
    *(undefined4 *)(param_1 + 0x1adc) = 0xffffffff;
    return;
  }
  iVar2 = FUN_00b2e9b0();
  if (iVar2 != 0) {
    FUN_00b39f00(0x120001,0,0,0);
    *(undefined4 *)(param_1 + 0x1adc) = 0xffffffff;
    return;
  }
  if ((*(byte *)(param_1 + 0xdd4) & 4) != 0) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfffffffb;
    if (*(int *)(param_1 + 0x1950) == 0) {
      iVar2 = FUN_00ac4d60(4);
      if (iVar2 != 0) {
        FUN_00b39f00(0x27,0,0,0);
        return;
      }
      iVar2 = FUN_00ac4d60(3);
      if (iVar2 != 0) {
        FUN_00b39f00(0x26,0,0,0);
        return;
      }
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00b39f00(0x10,0,0,0);
      FUN_00b52db0();
      return;
    }
    FUN_00b39f00(0x11,0,0,0);
  }
  FUN_00b52db0();
  return;
}

// 00B56940  FUN_00b56940  size=427  [callgraph]
undefined4 __fastcall FUN_00b56940(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x13dc) == 1)) &&
     (*(int *)(param_1 + 0x13b8) != 0)) {
    if ((*(int *)(param_1 + 0x4b0) == 0x20150) || (*(int *)(param_1 + 0x4b0) == 0x20152)) {
      if (((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
         (*(int *)(param_1 + 0x18e8) != 0)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,3);
          FUN_00b39f00(sVar1 + 0x10010,uVar3,uVar4,uVar5);
          return 1;
        }
      }
    }
    else {
      iVar2 = FUN_00b34d00();
      if ((iVar2 != 0) &&
         ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(int *)(param_1 + 0x18e8) != 0)))) {
        sVar1 = FUN_00dde2d0(0,3);
        if (sVar1 == 0) {
          if (-1 < (char)*(uint *)(param_1 + 0xddc)) {
            FUN_00b39f00(0x10002,0,0,0);
            if (((*(uint *)(param_1 + 0xddc) & 0x8000) == 0) && (*(float *)(param_1 + 0xa8c) < 9.0))
            {
              FUN_00b39f00(0x10004,0,0,0);
            }
            FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
            iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
            if (iVar2 != 0) {
              FUN_00b39f00(0xa0021,0,0,0);
            }
            return 1;
          }
          if ((*(uint *)(param_1 + 0xddc) & 0x20) != 0) {
            FUN_00b39f00(0x10002,0,0,0);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00B56AF0  FUN_00b56af0  size=348  [callgraph]
void __fastcall FUN_00b56af0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar3;
    FUN_00aa4080((int)(short)param_1[0x664],0,0x3e088889,0x3f800000,0x8000000,0,(float)fVar3);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x40a00000);
  }
  else if (param_1[0x187] != 1) goto LAB_00b56b05;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00b56940();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a82e80();
    if (((iVar2 != 0) && (param_1[0x63c] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00b39f00(0x14,0,0,0);
      return;
    }
  }
LAB_00b56b05:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 00B56C50  FUN_00b56c50  size=348  [callgraph]
void __fastcall FUN_00b56c50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar3;
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1992),0,0x3e088889,0x3f800000,0x8000000,0,
                 (float)fVar3);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x40a00000);
  }
  else if (param_1[0x187] != 1) goto LAB_00b56c65;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00b56940();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a82e80();
    if (((iVar2 != 0) && (param_1[0x63c] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00b39f00(0x14,0,0,0);
      return;
    }
  }
LAB_00b56c65:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 00B56DB0  FUN_00b56db0  size=547  [callgraph]
undefined4 __fastcall FUN_00b56db0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x13dc) == 1)) &&
     (*(int *)(param_1 + 0x13b8) != 0)) {
    if ((*(int *)(param_1 + 0x4b0) == 0x20150) || (*(int *)(param_1 + 0x4b0) == 0x20152)) {
      if (((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
         (*(int *)(param_1 + 0x18e8) != 0)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,3);
          FUN_00b39f00(sVar1 + 0x10010,uVar3,uVar4,uVar5);
          return 1;
        }
      }
      if (((*(int *)(param_1 + 0x1084) != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) &&
         (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00b39f00(sVar1 + 0x10010,uVar3,uVar4,uVar5);
        return 1;
      }
    }
    else {
      iVar2 = FUN_00b34d00();
      if (((iVar2 != 0) &&
          ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(int *)(param_1 + 0x18e8) != 0)))) &&
         (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
        sVar1 = FUN_00dde2d0(0,3);
        if (sVar1 == 0) {
          iVar2 = FUN_00c15850();
          if (iVar2 != 0) {
            if ((char)*(uint *)(param_1 + 0xddc) < '\0') {
              FUN_00b39f00(0x10002,0,0,0);
              if (*(float *)(param_1 + 0xa8c) < 9.0) {
                FUN_00b39f00(0x10004,0,0,0);
              }
              FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
              iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
              if (iVar2 != 0) {
                FUN_00b39f00(0xa0021,0,0,0);
              }
              return 1;
            }
            if ((*(uint *)(param_1 + 0xddc) & 0x20) != 0) {
              FUN_00b39f00(0x10002,0,0,0);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00B56FF0  FUN_00b56ff0  size=364  [callgraph]
void __fastcall FUN_00b56ff0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    param_1[0x248] = 0x3f800000;
    if (param_1[0x421] != 0) {
      pcVar1 = *(code **)(*param_1 + 0x220);
      param_1[0x248] = 0x3fc00000;
      (*pcVar1)(0x41700000);
    }
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1996),0,0x3d088889,0x3f800000,0x8000000,0,
                 param_1[0x248]);
    FUN_00b34fd0(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x421] = param_1[0x420];
    param_1[0x420] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b5711f;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_00b56db0();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00b56db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_00b5711f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B57160  FUN_00b57160  size=364  [callgraph]
void __fastcall FUN_00b57160(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    param_1[0x248] = 0x3f800000;
    if (param_1[0x421] != 0) {
      pcVar1 = *(code **)(*param_1 + 0x220);
      param_1[0x248] = 0x3fc00000;
      (*pcVar1)(0x41700000);
    }
    FUN_00aa4080((int)(short)param_1[0x666],0,0x3d088889,0x3f800000,0x8000000,0,param_1[0x248]);
    FUN_00b34fd0(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x421] = param_1[0x420];
    param_1[0x420] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b5728f;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_00b56db0();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00b56db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_00b5728f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00B572D0  FUN_00b572d0  size=265  [callgraph]
void __fastcall FUN_00b572d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x256,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    iVar2 = param_1[0x420];
    param_1[0x248] = 0x3f800000;
    param_1[0x421] = iVar2;
    param_1[0x420] = 0;
    if (iVar2 != 0) {
      param_1[0x248] = 0x3f99999a;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00b5739c;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00b56db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_00b5739c:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00B573E0  FUN_00b573e0  size=237  [callgraph]
void __fastcall FUN_00b573e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(599,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    param_1[0x421] = param_1[0x420];
    param_1[0x420] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00b57490;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00b56db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_00b57490:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00B574D0  FUN_00b574d0  size=655  [callgraph]
void __fastcall FUN_00b574d0(int *param_1)

{
  short sVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1e9,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x639]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00b57709;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x422] = (int)((float)param_1[0x639] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x422] = (int)((float)param_1[0x639] * 60.0 + 120.0);
    }
    if ((((param_1[0x2a1] != 0) && (iVar2 = FUN_00c15850(), iVar2 != 0)) && (param_1[0x2fa] == 0))
       && ((*(byte *)(param_1 + 0x377) & 0x80) == 0)) {
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x10005,0,0,0);
        }
      }
      if ((((float)param_1[0x2a3] < 36.0) && (1.5707964 < (float)param_1[0x2a8])) &&
         (sVar1 = FUN_00dde2d0(0,3), sVar1 == 0)) {
        FUN_00b39f00(0x10002,0,0,0);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
      iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
      if (iVar2 != 0) {
        FUN_00b39f00(0xa0021,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b57709:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00B57760  FUN_00b57760  size=1197  [callgraph]
void __fastcall FUN_00b57760(int param_1)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00b57b63;
  iVar4 = FUN_00a82e60();
  if ((iVar4 != 0) && (iVar4 = FUN_00b35500(), iVar4 != 0)) {
    FUN_00b3fb60();
    return;
  }
  iVar4 = FUN_00a82e60();
  if ((iVar4 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
    *(undefined1 *)(param_1 + 0xfc0) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00b39f00(0,0,0,0);
    return;
  }
  iVar4 = FUN_00a82e80();
  if ((iVar4 != 0) && (*(int *)(param_1 + 0xfa4) != 0)) {
    FUN_00b39f00(0x23,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00b57b63;
  FUN_00a8d230(local_20);
  iVar4 = FUN_00a12210(5);
  thunk_FUN_00dde510(&local_28,local_24,local_20,iVar4 + 0x40);
  local_28 = local_28 * 1.2732395;
  if (-1.0 <= local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
  }
  else {
    local_28 = -1.0;
  }
  *(float *)(param_1 + 0x1590) =
       (local_28 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
  if ((*(uint *)(param_1 + 0xdd8) & 0x40000) != 0) {
    iVar4 = FUN_00b30d00();
    if (iVar4 == 0) {
      return;
    }
    FUN_00b46d20();
    return;
  }
  if (((*(uint *)(param_1 + 0xdd8) & 0x400000) != 0) && (iVar4 = FUN_00a82e60(), iVar4 != 0)) {
    return;
  }
  iVar4 = FUN_00b30d00();
  if ((iVar4 != 0) && (iVar4 = FUN_00b46d20(), iVar4 != 0)) {
    return;
  }
  if (((*(float *)(param_1 + 0xa8c) <= 64.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) ||
     (*(int *)(param_1 + 0x196c) != 0)) {
    if (*(int *)(param_1 + 0x196c) == 0) {
      if ((*(int *)(param_1 + 0xfac) != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 0)) {
        FUN_00b39f00(0x20002,0,0,0);
        return;
      }
    }
    else {
      fVar5 = (float10)FUN_00dde300(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x1970) = (float)(fVar5 * (float10)60.0);
    }
    if ((*(int *)(param_1 + 0xfb0) != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 0)) {
      FUN_00b39f00(0x20004,0,0,0);
      return;
    }
    if ((*(int *)(param_1 + 0xfb4) != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 0)) {
      FUN_00b39f00(0x20003,0,0,0);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0xdd4) & 0x400000) != 0) {
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00b39f00(0x20006,0,0,0);
      return;
    }
    if (2.5307274 < *(float *)(param_1 + 0xa9c)) {
LAB_00b57a55:
      FUN_00b39f00(0x20008,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00b39f00(0x20007,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.5307274) goto LAB_00b57a55;
  }
  uVar2 = *(uint *)(param_1 + 0xdd8);
  if (((uVar2 & 0x80400000) == 0) && (36.0 < *(float *)(param_1 + 0xa8c))) {
    if (*(int *)(param_1 + 0x18f0) == 0) {
      if ((((uVar2 & 0x80000) != 0) || (*(float *)(param_1 + 0xa8c) <= 2500.0)) ||
         ((uVar2 & 0x10000000) != 0)) {
LAB_00b57b0d:
        FUN_00b39f00(0x20005,0,0,0);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 900.0 < fVar1 != (fVar1 == 900.0)) goto LAB_00b57b0d;
    }
  }
  iVar4 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5();
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x18f0) == 0) {
      if (*(int *)(param_1 + 0x1718) == 0) goto LAB_00b57b63;
    }
    else if (10.0 <= *(float *)(param_1 + 0xa90)) goto LAB_00b57b63;
    FUN_00b39f00(0x1000c,0,0,0);
  }
LAB_00b57b63:
  if ((((*(int *)(param_1 + 0x18f0) != 0) && (*(int *)(*(int *)(param_1 + 0xa84) + 0x2660) != 0)) &&
      ((*(int *)(param_1 + 0x13c8) != 0 &&
       ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(float *)(param_1 + 0xaa0) < 0.7853982)))))) &&
     (iVar4 = FUN_00b2e270(2,1), iVar4 != 0)) {
    FUN_00b39f00(0x2000a,0,0,0);
    FUN_00b2e2d0();
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00b3ad10(0xffffffff);
  }
  return;
}

// 00B57C10  FUN_00b57c10  size=774  [callgraph]
void __fastcall FUN_00b57c10(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    FUN_00a8d230(local_20);
    iVar3 = FUN_00a12210(5);
    thunk_FUN_00dde510(&local_28,local_24,local_20,iVar3 + 0x40);
    local_28 = local_28 * 1.2732395;
    fVar1 = -1.0;
    if ((-1.0 <= local_28) && (fVar1 = 1.0, local_28 <= 1.0)) {
      fVar1 = local_28;
    }
    param_1[0x564] = (int)((fVar1 - (float)param_1[0x564]) * 0.1 + (float)param_1[0x564]);
    return;
  }
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00b2ea70();
    if (iVar3 != 0) {
      FUN_00b39f00(0x120000,0,0,0);
      return;
    }
    iVar3 = FUN_00b2e920();
    if (iVar3 != 0) {
      FUN_00b39f00(0x120004,0,0,0);
      return;
    }
    iVar3 = FUN_00b2e9b0();
    if (iVar3 != 0) {
      FUN_00b39f00(0x120001,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      FUN_00a8d230(local_20);
      iVar3 = FUN_00a12210(5);
      thunk_FUN_00dde510(&local_28,local_24,local_20,iVar3 + 0x40);
      local_28 = local_28 * 1.2732395;
      fVar1 = -1.0;
      if ((-1.0 <= local_28) && (fVar1 = local_28, 1.0 < local_28)) {
        fVar1 = 1.0;
      }
      param_1[0x564] = (int)((fVar1 - (float)param_1[0x564]) * 0.1 + (float)param_1[0x564]);
    }
    if ((*(byte *)(param_1 + 0x375) & 4) != 0) {
      param_1[0x375] = param_1[0x375] & 0xfffffffb;
      if ((param_1[0x376] & 0x80000U) == 0) {
        if (param_1[0x654] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00b39f00(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00b39f00(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5();
        if (iVar3 != 0) {
          FUN_00b39f00(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x20003;
        }
        else {
          uVar4 = 0x20004;
        }
      }
      else {
        if ((param_1[0x63c] != 0) && (param_1[0x654] == 0)) goto LAB_00b57e77;
        uVar4 = 0x1e;
      }
      FUN_00b39f00(uVar4,0,0,0);
    }
  }
LAB_00b57e77:
  if ((DAT_01bea094 & 0x20000) == 0) {
    if (((param_1[0x63c] != 0) && ((float)param_1[0x2a3] <= 36.0)) &&
       ((float)param_1[0x2a8] < 1.3962634)) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (((float)param_1[0x2a3] <= 4.0) && ((float)param_1[0x2a8] < 1.3962634)) {
    param_1[0x6bb] = -1;
    FUN_00b39f00(0x1000a,0,0,0);
    return;
  }
  FUN_00b52db0();
  return;
}

// 00B57F20  FUN_00b57f20  size=1172  [callgraph]
void __fastcall FUN_00b57f20(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar3 = FUN_00a82e60();
    if ((iVar3 != 0) && (iVar3 = FUN_00b35500(), iVar3 != 0)) {
      FUN_00b3fb60();
      return;
    }
    if ((*(uint *)(param_1 + 0xddc) & 0x1000) != 0) {
      FUN_00a8d230(local_20);
      iVar3 = FUN_00a12210(5);
      thunk_FUN_00dde510(&local_28,local_24,local_20,iVar3 + 0x40);
      local_28 = local_28 * 1.2732395;
      fVar1 = -1.0;
      if ((-1.0 <= local_28) && (fVar1 = 1.0, local_28 <= 1.0)) {
        fVar1 = local_28;
      }
      *(float *)(param_1 + 0x1590) =
           (fVar1 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
      return;
    }
    if ((*(uint *)(param_1 + 0x4a8) & 0x40000) == 0) {
      iVar3 = FUN_00a82d50();
      if ((iVar3 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
        FUN_00b39f00(0,0,0,0);
        return;
      }
      if (((*(uint *)(param_1 + 0xdd8) & 0x400000) == 0) || (iVar3 = FUN_00a82e60(), iVar3 == 0)) {
        if (*(int *)(param_1 + 0xa84) != 0) {
          iVar3 = FUN_00b30d00();
          if (iVar3 != 0) goto LAB_00b58006;
          FUN_00a8d230(local_20);
          iVar3 = FUN_00a12210(5);
          thunk_FUN_00dde510(&local_28,local_24,local_20,iVar3 + 0x40);
          local_28 = local_28 * 1.2732395;
          if (-1.0 <= local_28) {
            if (1.0 < local_28) {
              local_28 = 1.0;
            }
          }
          else {
            local_28 = -1.0;
          }
          *(float *)(param_1 + 0x1590) =
               (local_28 - *(float *)(param_1 + 0x1590)) * 0.1 + *(float *)(param_1 + 0x1590);
          if (((*(float *)(param_1 + 0xa8c) <= 64.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634))
             || (*(int *)(param_1 + 0x196c) != 0)) {
            if (*(int *)(param_1 + 0x196c) == 0) {
              if ((*(int *)(param_1 + 0xfac) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
                FUN_00b39f00(0x30002,0,0,0);
                return;
              }
            }
            else {
              fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
              *(float *)(param_1 + 0x1970) = (float)(fVar4 * (float10)60.0);
            }
            if ((*(int *)(param_1 + 0xfb0) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
              FUN_00b39f00(0x30004,0,0,0);
              return;
            }
            if ((*(int *)(param_1 + 0xfb4) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
              FUN_00b39f00(0x30003,0,0,0);
              return;
            }
          }
          if ((*(uint *)(param_1 + 0xdd4) & 0x400000) != 0) {
            if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
              FUN_00b39f00(0x30006,0,0,0);
              return;
            }
            if (2.5307274 < *(float *)(param_1 + 0xa9c)) {
LAB_00b58251:
              FUN_00b39f00(0x30008,0,0,0);
              return;
            }
            if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
              FUN_00b39f00(0x30007,0,0,0);
              return;
            }
            if (*(float *)(param_1 + 0xa9c) < -2.5307274) goto LAB_00b58251;
          }
          if ((((*(uint *)(param_1 + 0xdd8) & 0x80400000) == 0) && (*(int *)(param_1 + 0x18f0) == 0)
              ) && ((*(float *)(param_1 + 0xa8c) <= 2500.0 ||
                    ((*(uint *)(param_1 + 0xdd8) & 0x10000000) != 0)))) {
            FUN_00b39f00(0x30005,0,0,0);
          }
          if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x18f0) != 0)) &&
             (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5(), iVar3 != 0)) {
            FUN_00b39f00(0x1000c,0,0,0);
          }
        }
        if ((((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
            (iVar3 = FUN_00b3ad10(0xffffffff), iVar3 == 0)) && (0 < *(int *)(param_1 + 0x61c))) {
          iVar3 = FUN_00a82e60();
          if ((iVar3 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
            FUN_00b39f00(0,0,0,0);
          }
          iVar3 = FUN_00a82e80();
          if ((iVar3 != 0) && (*(int *)(param_1 + 0xfa4) != 0)) {
            FUN_00b39f00(0x23,0,0,0);
          }
        }
      }
    }
    else {
      iVar3 = FUN_00b30d00();
      if (iVar3 != 0) {
LAB_00b58006:
        FUN_00b39f00(0x3000b,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B583C0  FUN_00b583c0  size=537  [callgraph]
void __fastcall FUN_00b583c0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    if (param_1[0x187] == 0) {
      param_1[0x4e8] = 1;
    }
    else {
      iVar3 = FUN_00b2ea70();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120000,0,0,0);
        return;
      }
      iVar3 = FUN_00b2e920();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120004,0,0,0);
        return;
      }
      iVar3 = FUN_00b2e9b0();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120001,0,0,0);
        return;
      }
      if (param_1[0x2a1] != 0) {
        FUN_00a8d230(local_20);
        iVar3 = FUN_00a12210(5);
        thunk_FUN_00dde510(&local_28,local_24,local_20,iVar3 + 0x40);
        local_28 = local_28 * 1.2732395;
        fVar1 = -1.0;
        if ((-1.0 <= local_28) && (fVar1 = local_28, 1.0 < local_28)) {
          fVar1 = 1.0;
        }
        param_1[0x564] = (int)((fVar1 - (float)param_1[0x564]) * 0.1 + (float)param_1[0x564]);
      }
      if ((*(byte *)(param_1 + 0x375) & 4) != 0) {
        param_1[0x375] = param_1[0x375] & 0xfffffffb;
        if (param_1[0x654] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00b39f00(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00b39f00(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5();
        if (iVar3 != 0) {
          FUN_00b39f00(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x30003;
        }
        else {
          uVar4 = 0x30004;
        }
        FUN_00b39f00(uVar4,0,0,0);
      }
      iVar3 = FUN_00b52db0();
      if (iVar3 != 0) {
        return;
      }
    }
    if ((((float)param_1[0x2a3] <= 36.0) && ((float)param_1[0x2a8] < 1.3962634)) &&
       (iVar3 = FUN_00b3ad10(0xffffffff), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00B585E0  FUN_00b585e0  size=71  [callgraph]
void __fastcall FUN_00b585e0(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  switch(param_1[0x186]) {
  default:
    return;
  case 0x10000002:
    FUN_00b52180();
    return;
  case 0x1000000a:
  case 0x1000000b:
  case 0x1000000c:
  case 0x1000000d:
    FUN_00b2c940();
    return;
  case 0x10000012:
  case 0x10000013:
    FUN_00b2c9e0();
    return;
  }
}

// 00B58670  FUN_00b58670  size=1045  [callgraph]
void __fastcall FUN_00b58670(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if ((*(byte *)(param_1 + 0xdda) & 1) == 0) {
      if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
        iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
        if ((iVar3 != 0) && ((*(int *)(param_1 + 0x13dc) == 7 && (*(int *)(param_1 + 0x13b8) != 0)))
           ) {
          if ((*(float *)(param_1 + 0xa8c) < 12.25) && (iVar3 = FUN_00ac8190(), iVar3 != 0)) {
            FUN_00b39f00(0x10014,0,0,0);
            return;
          }
          if (((*(float *)(param_1 + 0xa8c) < 16.0) && (-2.0 < *(float *)(param_1 + 0xa94))) &&
             (*(float *)(param_1 + 0xa94) < 2.0)) {
            do {
              sVar2 = FUN_00dde2d0(0,4);
            } while (sVar2 + 0x10010 == *(int *)(param_1 + 0x1ad8));
            FUN_00b39f00(sVar2 + 0x10010,0,0,0);
            return;
          }
        }
        if ((((((*(uint *)(param_1 + 0xdd8) & 0x8000) == 0) &&
              ((*(uint *)(param_1 + 0xdd4) & 0x400000) == 0)) &&
             ((iVar3 = FUN_00a82e80(), iVar3 != 0 && (64.0 < *(float *)(param_1 + 0xa8c))))) ||
            (((64.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
             (*(int *)(param_1 + 0x18f0) != 0)))) ||
           ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
          FUN_00b39f00(0x13,0,0,0);
          return;
        }
        if ((*(uint *)(param_1 + 0xdd4) & 0x400000) != 0) {
          if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
            FUN_00b39f00(0x18,0,0,0);
            return;
          }
          if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00b588c2:
            FUN_00b39f00(0x16,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00b39f00(0x17,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00b588c2;
        }
        if ((*(int *)(param_1 + 0x13c4) != 0) && (*(int *)(param_1 + 0x18f0) != 0)) {
          *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (*(int *)(param_1 + 0x13c8) != 0) {
            do {
              sVar2 = FUN_00dde2d0(0,4);
            } while (sVar2 + 0x10010 == *(int *)(param_1 + 0x1ad8));
            FUN_00b39f00(sVar2 + 0x10010,0,0,0);
          }
          iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
          if (iVar3 == 0) {
            return;
          }
          FUN_00b39f00(0x10008,0,0,0);
          return;
        }
        if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x18f0) == 0)) {
          sVar2 = FUN_00dde2d0(0,2);
          if (sVar2 == 0) {
            if (*(int *)(param_1 + 0xfb0) != 0) {
              FUN_00b39f00(0x10,0,0,0);
              return;
            }
          }
          else if (sVar2 == 1) {
            if (*(int *)(param_1 + 0xfb4) != 0) {
              FUN_00b39f00(0x11,0,0,0);
              return;
            }
          }
          else if ((sVar2 == 2) && (*(int *)(param_1 + 0xfac) != 0)) {
            FUN_00b39f00(0x12,0,0,0);
            return;
          }
        }
        if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x18f0) != 0)) &&
           (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5(), iVar3 != 0)) {
          FUN_00b39f00(0x1000c,0,0,0);
        }
        fVar1 = *(float *)(param_1 + 0x924);
        if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
          iVar3 = FUN_00464930();
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0xdb0) = 1;
          }
          *(undefined4 *)(param_1 + 0x924) = 0;
        }
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
         (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
        FUN_00b3ad10(0xffffffff);
      }
    }
    else {
      if (*(int *)(param_1 + 0x61c) == 0) {
        FUN_00b2efd0();
        return;
      }
      iVar3 = FUN_00b35500();
      if (iVar3 != 0) {
        FUN_00b3fb60();
        return;
      }
      if (*(float *)(param_1 + 0x1b4c) <= 0.0) {
        FUN_00b39f00(0x21,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B58A90  FUN_00b58a90  size=703  [callgraph]
void __fastcall FUN_00b58a90(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if (((iVar3 != 0) &&
        (((param_1[0x4f7] == 7 && (param_1[0x4ee] != 0)) && ((float)param_1[0x2a3] < 12.25)))) &&
       ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6b6]);
      FUN_00b39f00(sVar2 + 0x10010,0,0,0);
      return;
    }
    if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
      param_1[0x376] = param_1[0x376] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x4f2] != 0) {
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6b6]);
        FUN_00b39f00(sVar2 + 0x10010,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
      if (iVar3 == 0) {
        return;
      }
      FUN_00b39f00(0x10008,0,0,0);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b58ca5;
      }
    }
    else if (param_1[0x63c] != 0) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x3ed] != 0) {
          FUN_00b39f00(0x11,0,0,0);
        }
      }
      else if (param_1[0x3ec] != 0) {
        FUN_00b39f00(0x10,0,0,0);
      }
    }
  }
LAB_00b58ca5:
  if (16.0 <= (float)param_1[0x2a3]) {
    if (((((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) &&
         (param_1[0x4f2] != 0)) &&
        (((float)param_1[0x2a3] < 20.25 && (6.25 < (float)param_1[0x2a3])))) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6b6]);
      FUN_00b39f00(sVar2 + 0x10010,0,0,0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b58cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B58D50  FUN_00b58d50  size=732  [callgraph]
void __fastcall FUN_00b58d50(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if ((iVar3 != 0) &&
       ((((param_1[0x4f7] == 7 && (param_1[0x4ee] != 0)) && ((float)param_1[0x2a3] < 12.25)) &&
        ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6b6]);
      FUN_00b39f00(sVar2 + 0x10010,0,0,0);
      return;
    }
    if (param_1[0x4f1] == 0) {
      bVar4 = param_1[0x63c] == 0;
    }
    else {
      bVar4 = param_1[0x63c] == 0;
      if (!bVar4) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x4f2] == 0) {
          return;
        }
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6b6]);
        FUN_00b39f00(sVar2 + 0x10010,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
          if (param_1[0x3ed] != 0) {
            FUN_00b39f00(0x1b,0,0,0);
          }
        }
        else {
          FUN_00b39f00(0x1a,0,0,0);
        }
      }
    }
    else {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (param_1[0x63c] != 0)) {
LAB_00b58f67:
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x63c] != 0) goto LAB_00b58f67;
      goto LAB_00b59012;
    }
  }
  if ((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x4f2] == 0) {
      return;
    }
    if (20.25 <= (float)param_1[0x2a3]) {
      return;
    }
    if ((float)param_1[0x2a3] <= 6.25) {
      return;
    }
    if (0.7853982 <= (float)param_1[0x2a8]) {
      return;
    }
    do {
      sVar2 = FUN_00dde2d0(0,4);
    } while (sVar2 + 0x10010 == param_1[0x6b6]);
    FUN_00b39f00(sVar2 + 0x10010,0,0,0);
    return;
  }
LAB_00b59012:
  if (param_1[0x3ec] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b5902a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B59030  FUN_00b59030  size=732  [callgraph]
void __fastcall FUN_00b59030(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if ((iVar3 != 0) &&
       ((((param_1[0x4f7] == 7 && (param_1[0x4ee] != 0)) && ((float)param_1[0x2a3] < 12.25)) &&
        ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6b6]);
      FUN_00b39f00(sVar2 + 0x10010,0,0,0);
      return;
    }
    if (param_1[0x4f1] == 0) {
      bVar4 = param_1[0x63c] == 0;
    }
    else {
      bVar4 = param_1[0x63c] == 0;
      if (!bVar4) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x4f2] == 0) {
          return;
        }
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6b6]);
        FUN_00b39f00(sVar2 + 0x10010,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
          if (param_1[0x3ed] != 0) {
            FUN_00b39f00(0x1b,0,0,0);
          }
        }
        else {
          FUN_00b39f00(0x1a,0,0,0);
        }
      }
    }
    else {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (param_1[0x63c] != 0)) {
LAB_00b59247:
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x63c] != 0) goto LAB_00b59247;
      goto LAB_00b592f2;
    }
  }
  if ((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x4f2] == 0) {
      return;
    }
    if (20.25 <= (float)param_1[0x2a3]) {
      return;
    }
    if ((float)param_1[0x2a3] <= 6.25) {
      return;
    }
    if (0.7853982 <= (float)param_1[0x2a8]) {
      return;
    }
    do {
      sVar2 = FUN_00dde2d0(0,4);
    } while (sVar2 + 0x10010 == param_1[0x6b6]);
    FUN_00b39f00(sVar2 + 0x10010,0,0,0);
    return;
  }
LAB_00b592f2:
  if (param_1[0x3ed] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b5930a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B59310  FUN_00b59310  size=618  [callgraph]
void __fastcall FUN_00b59310(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = lib::Array<Entity*>::Array<Entity*>_4();
      if ((((iVar2 != 0) && (param_1[0x4f7] == 7)) && (param_1[0x4ee] != 0)) &&
         ((((float)param_1[0x2a3] < 12.25 && (-2.0 < (float)param_1[0x2a5])) &&
          ((float)param_1[0x2a5] < 2.0)))) {
        do {
          sVar1 = FUN_00dde2d0(0,4);
        } while (sVar1 + 0x10010 == param_1[0x6b6]);
        FUN_00b39f00(sVar1 + 0x10010,0,0,0);
        return;
      }
      if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         (((float)param_1[0x2a8] < 0.7853982 && (param_1[0x63c] != 0)))) {
        FUN_00b39f00(0x13,0,0,0);
        return;
      }
      if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar1 + 0x19,uVar3,uVar4,uVar5);
        if (param_1[0x4f2] != 0) {
          do {
            sVar1 = FUN_00dde2d0(0,4);
          } while (sVar1 + 0x10010 == param_1[0x6b6]);
          FUN_00b39f00(sVar1 + 0x10010,0,0,0);
        }
        iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
        if (iVar2 == 0) {
          return;
        }
        FUN_00b39f00(0x10008,0,0,0);
        return;
      }
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00b594c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    if (param_1[0x3eb] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b59578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    do {
      sVar1 = FUN_00dde2d0(0,4);
    } while (sVar1 + 0x10010 == param_1[0x6b6]);
    FUN_00b39f00(sVar1 + 0x10010,0,0,0);
    return;
  }
  return;
}

// 00B59580  FUN_00b59580  size=846  [callgraph]
void __fastcall FUN_00b59580(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  iVar3 = FUN_00b2ea70();
  if (iVar3 != 0) {
    FUN_00b39f00(0x120000,0,0,0);
    param_1[0x6b7] = -1;
    return;
  }
  iVar3 = FUN_00b2e920();
  if (iVar3 != 0) {
    FUN_00b39f00(0x120004,0,0,0);
    param_1[0x6b7] = -1;
    return;
  }
  iVar3 = FUN_00b2e9b0();
  if (iVar3 != 0) {
    FUN_00b39f00(0x120001,0,0,0);
    param_1[0x6b7] = -1;
    return;
  }
  if ((*(byte *)(param_1 + 0x375) & 4) != 0) {
    param_1[0x375] = param_1[0x375] & 0xfffffffb;
    if (param_1[0x654] == 0) {
      iVar3 = FUN_00ac4d60(4);
      if (iVar3 != 0) {
        FUN_00b39f00(0x27,0,0,0);
        return;
      }
      iVar3 = FUN_00ac4d60(3);
      if (iVar3 != 0) {
        FUN_00b39f00(0x26,0,0,0);
        return;
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5();
    if (iVar3 != 0) {
      FUN_00b39f00(0x1000c,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (param_1[0x3ed] == 0) goto LAB_00b596be;
      uVar4 = 0x11;
    }
    else {
      if (param_1[0x3ec] == 0) goto LAB_00b596be;
      uVar4 = 0x10;
    }
    FUN_00b39f00(uVar4,0,0,0);
  }
LAB_00b596be:
  iVar3 = FUN_00b52db0();
  if (iVar3 == 0) {
    if (param_1[0x187] != 0) {
      if ((((param_1[0x2a1] != 0) && (iVar3 = lib::Array<Entity*>::Array<Entity*>_4(), iVar3 != 0))
          && ((float)param_1[0x2a3] < 12.25)) &&
         ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))) {
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6b6]);
        FUN_00b39f00(sVar2 + 0x10010,0,0,0);
        return;
      }
      if (param_1[0x63c] == 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x375] & 0x400000U) != 0)) {
          sVar2 = FUN_00dde2d0(0,1);
          if (sVar2 == 0) {
            if (param_1[0x3ed] != 0) {
              FUN_00b39f00(0x11,0,0,0);
            }
          }
          else if (param_1[0x3ec] != 0) {
            FUN_00b39f00(0x10,0,0,0);
          }
        }
      }
      else {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
      }
    }
    if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
      if (((float)param_1[0x2a3] < 4.0) && ((float)param_1[0x2a5] < 2.0)) {
                    /* WARNING: Could not recover jumptable at 0x00b598cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else if ((((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
             (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6b6]);
      FUN_00b39f00(sVar2 + 0x10010,0,0,0);
      return;
    }
  }
  return;
}

// 00B598D0  FUN_00b598d0  size=809  [callgraph]
void __fastcall FUN_00b598d0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if ((*(byte *)(param_1 + 0xdda) & 1) == 0) {
      if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
        iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
        if ((iVar3 != 0) && (*(float *)(param_1 + 0xa8c) < 12.25)) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,3);
          FUN_00b39f00(sVar2 + 0x10016,uVar4,uVar5,uVar6);
          return;
        }
        if (((((((*(uint *)(param_1 + 0xdd8) & 0x8000) == 0) &&
               ((*(uint *)(param_1 + 0xdd4) & 0x400000) == 0)) &&
              (iVar3 = FUN_00a82e80(), iVar3 != 0)) && (64.0 < *(float *)(param_1 + 0xa8c))) ||
            (((64.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
             (*(int *)(param_1 + 0x18f0) != 0)))) ||
           ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
          FUN_00b39f00(0x13,0,0,0);
          return;
        }
        if ((*(uint *)(param_1 + 0xdd4) & 0x400000) != 0) {
          if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
            FUN_00b39f00(0x18,0,0,0);
            return;
          }
          if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00b59aa0:
            FUN_00b39f00(0x16,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00b39f00(0x17,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00b59aa0;
        }
        if ((*(int *)(param_1 + 0x13c4) == 0) || (*(int *)(param_1 + 0x18f0) == 0)) {
          if ((*(int *)(param_1 + 0x194c) != 0) && (*(int *)(param_1 + 0x1958) != 0)) {
            FUN_00b39f00(0x10016,0,0,0);
            return;
          }
          if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x18f0) == 0)) {
            sVar2 = FUN_00dde2d0(0,2);
            if (sVar2 == 0) {
              if (*(int *)(param_1 + 0xfb0) != 0) {
                FUN_00b39f00(0x10,0,0,0);
                return;
              }
            }
            else if (sVar2 == 1) {
              if (*(int *)(param_1 + 0xfb4) != 0) {
                FUN_00b39f00(0x11,0,0,0);
                return;
              }
            }
            else if ((sVar2 == 2) && (*(int *)(param_1 + 0xfac) != 0)) {
              FUN_00b39f00(0x12,0,0,0);
              return;
            }
          }
          fVar1 = *(float *)(param_1 + 0x924);
          if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
            iVar3 = FUN_00464930();
            if (iVar3 != 0) {
              *(undefined4 *)(param_1 + 0xdb0) = 1;
            }
            *(undefined4 *)(param_1 + 0x924) = 0;
          }
        }
        else {
          *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (*(int *)(param_1 + 0x13c8) != 0) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            sVar2 = FUN_00dde2d0(0,3);
            FUN_00b39f00(sVar2 + 0x10016,uVar4,uVar5,uVar6);
            return;
          }
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x61c) == 0) {
        FUN_00b2efd0();
        return;
      }
      iVar3 = FUN_00b35500();
      if (iVar3 != 0) {
        FUN_00b3fb60();
        return;
      }
      if (*(float *)(param_1 + 0x1b4c) <= 0.0) {
        FUN_00b39f00(0x21,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B59C00  FUN_00b59c00  size=565  [callgraph]
void __fastcall FUN_00b59c00(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,3);
      FUN_00b39f00(sVar2 + 0x10016,uVar4,uVar5,uVar6);
      return;
    }
    if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
      param_1[0x376] = param_1[0x376] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x4f2] == 0) {
        return;
      }
      FUN_00b39f00(0x10016,0,0,0);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b59d94;
      }
    }
    else if (param_1[0x63c] != 0) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x3ed] != 0) {
          FUN_00b39f00(0x11,0,0,0);
        }
      }
      else if (param_1[0x3ec] != 0) {
        FUN_00b39f00(0x10,0,0,0);
      }
    }
  }
LAB_00b59d94:
  if (16.0 <= (float)param_1[0x2a3]) {
    if ((((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) &&
        (param_1[0x4f2] != 0)) &&
       ((((float)param_1[0x2a3] < 20.25 && (6.25 < (float)param_1[0x2a3])) &&
        ((float)param_1[0x2a8] < 0.7853982)))) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,3);
      FUN_00b39f00(sVar2 + 0x10016,uVar4,uVar5,uVar6);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b59db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B59E40  FUN_00b59e40  size=623  [callgraph]
void __fastcall FUN_00b59e40(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) goto LAB_00b5a071;
    if (param_1[0x4f1] == 0) {
      bVar4 = param_1[0x63c] == 0;
    }
    else {
      bVar4 = param_1[0x63c] == 0;
      if (!bVar4) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x4f2] == 0) {
          return;
        }
        FUN_00b39f00(0x10016,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
          if (param_1[0x3ed] != 0) {
            FUN_00b39f00(0x1b,0,0,0);
          }
        }
        else {
          FUN_00b39f00(0x1a,0,0,0);
        }
      }
    }
    else {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (param_1[0x63c] != 0)) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x63c] != 0) {
        FUN_00b39f00(0xf,0,0,0);
        return;
      }
      goto LAB_00b5a095;
    }
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
LAB_00b5a095:
    if (param_1[0x3ec] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b5a0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x4f2] == 0) {
    return;
  }
  if (20.25 <= (float)param_1[0x2a3]) {
    return;
  }
  if ((float)param_1[0x2a3] <= 6.25) {
    return;
  }
  if (0.7853982 <= (float)param_1[0x2a8]) {
    return;
  }
LAB_00b5a071:
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,3);
  FUN_00b39f00(sVar2 + 0x10016,uVar5,uVar6,uVar7);
  return;
}

// 00B5A0B0  FUN_00b5a0b0  size=623  [callgraph]
void __fastcall FUN_00b5a0b0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) goto LAB_00b5a2e1;
    if (param_1[0x4f1] == 0) {
      bVar4 = param_1[0x63c] == 0;
    }
    else {
      bVar4 = param_1[0x63c] == 0;
      if (!bVar4) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x4f2] == 0) {
          return;
        }
        FUN_00b39f00(0x10016,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
          if (param_1[0x3ed] != 0) {
            FUN_00b39f00(0x1b,0,0,0);
          }
        }
        else {
          FUN_00b39f00(0x1a,0,0,0);
        }
      }
    }
    else {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (param_1[0x63c] != 0)) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x63c] != 0) {
        FUN_00b39f00(0xf,0,0,0);
        return;
      }
      goto LAB_00b5a305;
    }
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
LAB_00b5a305:
    if (param_1[0x3ed] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b5a31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x4f2] == 0) {
    return;
  }
  if (20.25 <= (float)param_1[0x2a3]) {
    return;
  }
  if ((float)param_1[0x2a3] <= 6.25) {
    return;
  }
  if (0.7853982 <= (float)param_1[0x2a8]) {
    return;
  }
LAB_00b5a2e1:
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,3);
  FUN_00b39f00(sVar2 + 0x10016,uVar5,uVar6,uVar7);
  return;
}

// 00B5A320  FUN_00b5a320  size=483  [callgraph]
void __fastcall FUN_00b5a320(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = lib::Array<Entity*>::Array<Entity*>_4();
      if ((iVar2 != 0) && ((float)param_1[0x2a3] < 12.25)) {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00b39f00(sVar1 + 0x10016,uVar3,uVar4,uVar5);
        return;
      }
      if (((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
          ((float)param_1[0x2a8] < 0.7853982)) && (param_1[0x63c] != 0)) {
        FUN_00b39f00(0xf,0,0,0);
        return;
      }
      if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar1 + 0x19,uVar3,uVar4,uVar5);
        if (param_1[0x4f2] == 0) {
          return;
        }
        FUN_00b39f00(0x10016,0,0,0);
        return;
      }
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00b5a452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    if (param_1[0x3eb] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b5a501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    sVar1 = FUN_00dde2d0(0,3);
    FUN_00b39f00(sVar1 + 0x10016,uVar3,uVar4,uVar5);
    return;
  }
  return;
}

// 00B5A510  FUN_00b5a510  size=712  [callgraph]
void __fastcall FUN_00b5a510(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    iVar3 = FUN_00b2ea70();
    if (iVar3 == 0) {
      iVar3 = FUN_00b2e920();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120004,0,0,0);
        param_1[0x6b7] = -1;
        return;
      }
      iVar3 = FUN_00b2e9b0();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120001,0,0,0);
        param_1[0x6b7] = -1;
        return;
      }
      if ((*(byte *)(param_1 + 0x375) & 4) != 0) {
        param_1[0x375] = param_1[0x375] & 0xfffffffb;
        if (param_1[0x654] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00b39f00(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00b39f00(0x26,0,0,0);
            return;
          }
          if (param_1[0x656] != 0) {
            FUN_00b39f00(0x10016,0,0,0);
            return;
          }
        }
        (**(code **)(*param_1 + 0x34c))();
      }
      iVar3 = FUN_00b52db0();
      if (iVar3 == 0) {
        if (param_1[0x187] != 0) {
          if (((param_1[0x2a1] != 0) &&
              (iVar3 = lib::Array<Entity*>::Array<Entity*>_4(), iVar3 != 0)) &&
             ((float)param_1[0x2a3] < 12.25)) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            sVar2 = FUN_00dde2d0(0,3);
            FUN_00b39f00(sVar2 + 0x10016,uVar4,uVar5,uVar6);
            return;
          }
          if (param_1[0x63c] == 0) {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
            if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x375] & 0x400000U) != 0)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                if (param_1[0x3ed] != 0) {
                  FUN_00b39f00(0x11,0,0,0);
                }
              }
              else if (param_1[0x3ec] != 0) {
                FUN_00b39f00(0x10,0,0,0);
              }
            }
          }
          else {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
            if (fVar1 - (float)param_1[0x244] < 0.0) {
              param_1[0x249] = 0;
            }
          }
        }
        if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
          if ((float)param_1[0x2a3] < 4.0) {
                    /* WARNING: Could not recover jumptable at 0x00b5a7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        else if ((((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
                 (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,3);
          FUN_00b39f00(sVar2 + 0x10016,uVar4,uVar5,uVar6);
          return;
        }
      }
    }
    else {
      FUN_00b39f00(0x120000,0,0,0);
      param_1[0x6b7] = -1;
    }
  }
  return;
}

// 00B5A7E0  FUN_00b5a7e0  size=1479  [callgraph]
void __fastcall FUN_00b5a7e0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xdda) & 1) != 0) {
    if (*(int *)(param_1 + 0x61c) == 0) {
      FUN_00b2efd0();
      return;
    }
    iVar3 = FUN_00b35500();
    if (iVar3 == 0) {
      if (0.0 < *(float *)(param_1 + 0x1b4c)) {
        return;
      }
      FUN_00b39f00(0x21,0,0,0);
      return;
    }
    FUN_00b3fb60();
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00b5ad76;
  iVar3 = FUN_00b34da0();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar3 + 0x4c);
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) | 0x40000000;
    FUN_00b39f00(0x19,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00b5ad76;
  if ((*(byte *)(param_1 + 0xdd4) & 4) != 0) {
    uVar4 = FUN_00dde2a0(0,100);
    uVar4 = (uVar4 & 0xffff) % 3;
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0xfac) != 0) {
        FUN_00b39f00(0x12,0,0,0);
        return;
      }
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0xfb0) != 0) {
        FUN_00b39f00(0x10,0,0,0);
        return;
      }
    }
    else if ((uVar4 == 2) && (*(int *)(param_1 + 0xfb4) != 0)) {
      FUN_00b39f00(0x11,0,0,0);
      return;
    }
  }
  iVar3 = FUN_00a82e80();
  if (((iVar3 != 0) && (*(float *)(param_1 + 0x1824) < 0.0)) &&
     (((*(int *)(param_1 + 0x18f0) == 0 && (12.25 < *(float *)(param_1 + 0xa8c))) ||
      ((*(uint *)(param_1 + 0xdd4) & 0x400000) == 0)))) {
    FUN_00b39f00(0x14,0,0,0);
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
  if ((iVar3 != 0) && (*(float *)(param_1 + 0xa8c) < 16.0)) {
    FUN_00b39f00(0x1000e,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00b39f00(0x1000f,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    }
    if (4.0 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    FUN_00b39f00(0x1000d,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(int *)(param_1 + 0x18f0) != 0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0xfb4) != 0) {
        uVar5 = 0x11;
        goto LAB_00b5aa99;
      }
    }
    else if (*(int *)(param_1 + 0xfb0) != 0) {
      uVar5 = 0x10;
LAB_00b5aa99:
      FUN_00b39f00(uVar5,0,0,0);
    }
  }
  if (*(float *)(param_1 + 0xa8c) <= 4.0) {
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
  }
  if ((((36.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
      (*(int *)(param_1 + 0x18f0) != 0)) ||
     ((100.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
    FUN_00b39f00(0x13,0,0,0);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xdd4) >> 0x16 & 1;
  if (uVar4 != 0) {
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      FUN_00b39f00(0x18,0,0,0);
      return;
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00b5abbd:
      FUN_00b39f00(0x16,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      FUN_00b39f00(0x17,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00b5abbd;
  }
  if ((*(int *)(param_1 + 0x13c4) == 0) || (*(int *)(param_1 + 0x18f0) == 0)) {
    if ((uVar4 != 0) && ((*(float *)(param_1 + 0x920) < 0.0 || (*(int *)(param_1 + 0x18f0) == 0))))
    {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (*(int *)(param_1 + 0xfb4) == 0) {
          return;
        }
        FUN_00b39f00(0x11,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0xfb0) == 0) {
        return;
      }
      FUN_00b39f00(0x10,0,0,0);
      return;
    }
    if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x18f0) != 0)) &&
       (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5(), iVar3 != 0)) {
      FUN_00b39f00(0x1000c,0,0,0);
    }
    fVar1 = *(float *)(param_1 + 0x924);
    if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
      iVar3 = FUN_00464930();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xdb0) = 1;
      }
      *(undefined4 *)(param_1 + 0x924) = 0;
    }
LAB_00b5ad76:
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
      FUN_00b3ad10(0xffffffff);
    }
    return;
  }
  *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xbfffffff;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,2);
  FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
  if (*(int *)(param_1 + 0x13c8) != 0) {
    sVar2 = FUN_00dde2a0(0,2);
    if (sVar2 == 0) {
      uVar5 = 0x1000d;
    }
    else if (sVar2 == 1) {
      uVar5 = 0x110001;
    }
    else {
      if (sVar2 != 2) goto LAB_00b5ac62;
      uVar5 = 0x1000f;
    }
    FUN_00b39f00(uVar5,0,0,0);
  }
LAB_00b5ac62:
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
  if (iVar3 != 0) {
    FUN_00b39f00(0x10008,0,0,0);
  }
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_4();
  if (iVar3 == 0) {
    return;
  }
  FUN_00b39f00(0xa0021,0,0,0);
  return;
}

// 00B5ADB0  FUN_00b5adb0  size=1070  [callgraph]
void __fastcall FUN_00b5adb0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00b34da0();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x376] = param_1[0x376] | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00b39f00(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00b39f00(0x1000e,0,0,0);
        FUN_00c27260(param_1[0x639]);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00b39f00(0x1000f,0,0,0);
          FUN_00c27260(param_1[0x639]);
        }
        if (4.0 <= (float)param_1[0x2a3]) {
          return;
        }
        FUN_00b39f00(0x1000d,0,0,0);
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if ((param_1[0x4f1] != 0) && (param_1[0x63c] != 0)) {
        param_1[0x376] = param_1[0x376] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x4f2] != 0) {
          sVar2 = FUN_00dde2a0(0,2);
          if (sVar2 == 0) {
            uVar4 = 0x1000d;
          }
          else if (sVar2 == 1) {
            uVar4 = 0x110001;
          }
          else {
            if (sVar2 != 2) goto LAB_00b5afcc;
            uVar4 = 0x1000f;
          }
          FUN_00b39f00(uVar4,0,0,0);
        }
LAB_00b5afcc:
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
        if (iVar3 == 0) {
          return;
        }
        FUN_00b39f00(0x10008,0,0,0);
        return;
      }
      iVar3 = FUN_00a82e80();
      if (((iVar3 != 0) && ((param_1[0x375] & 0x400000U) != 0)) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) {
LAB_00b5b04d:
        FUN_00b39f00(0x13,0,0,0);
        return;
      }
      if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
        if (param_1[0x63c] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_00b5b0dd;
        }
      }
      else if (param_1[0x63c] != 0) goto LAB_00b5b04d;
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          FUN_00b39f00(0x11,0,0,0);
        }
        else {
          FUN_00b39f00(0x10,0,0,0);
        }
      }
    }
  }
LAB_00b5b0dd:
  if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x00b5b0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00b3ad10(0xffffffff);
    }
  }
  else if ((((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_00b39f00(0x1000d,0,0,0);
      return;
    }
    if (sVar2 == 1) {
      FUN_00b39f00(0x1000f,0,0,0);
      return;
    }
  }
  return;
}

// 00B5B1E0  FUN_00b5b1e0  size=1013  [callgraph]
void __fastcall FUN_00b5b1e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x3ec] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b5b202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00b34da0();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x376] = param_1[0x376] | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00b39f00(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00b39f00(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00b39f00(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00b39f00(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if (param_1[0x4f1] == 0) {
        if (param_1[0x63c] == 0) goto LAB_00b5b3e6;
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
      }
      else {
        if (param_1[0x63c] != 0) {
          param_1[0x376] = param_1[0x376] & 0xbfffffff;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
          if (param_1[0x4f2] == 0) {
            return;
          }
          uVar4 = FUN_00dde2a0(0,2);
          if ((uVar4 & 0xffff) == 0) goto LAB_00b5b3c9;
          uVar4 = (uVar4 & 0xffff) - 1;
          if (uVar4 == 0) {
            FUN_00b39f00(0x110001,0,0,0);
            return;
          }
          goto LAB_00b5b57b;
        }
LAB_00b5b3e6:
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if (60.0 < (float)param_1[0x244] + fVar1) {
          sVar2 = FUN_00dde2d0(0,1);
          if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
            if (param_1[0x3ed] != 0) {
              FUN_00b39f00(0x1b,0,0,0);
            }
          }
          else {
            FUN_00b39f00(0x1a,0,0,0);
          }
        }
      }
      if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
         (param_1[0x63c] != 0)) {
LAB_00b5b4e6:
        FUN_00b39f00(0x13,0,0,0);
        return;
      }
      if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         ((float)param_1[0x2a8] < 0.7853982)) {
        if (param_1[0x63c] != 0) goto LAB_00b5b4e6;
        goto LAB_00b5b58f;
      }
    }
  }
  if ((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x4f2] == 0) {
      return;
    }
    if (20.25 <= (float)param_1[0x2a3]) {
      return;
    }
    if ((float)param_1[0x2a3] <= 6.25) {
      return;
    }
    if (0.7853982 <= (float)param_1[0x2a8]) {
      return;
    }
    uVar4 = FUN_00dde2a0(0,1);
    uVar4 = uVar4 & 0xffff;
    if (uVar4 == 0) {
LAB_00b5b3c9:
      FUN_00b39f00(0x1000d,0,0,0);
      return;
    }
LAB_00b5b57b:
    if (uVar4 != 1) {
      return;
    }
    FUN_00b39f00(0x1000f,0,0,0);
    return;
  }
LAB_00b5b58f:
  if (param_1[0x3ec] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
    return;
  }
  if (1.3962634 <= (float)param_1[0x2a8]) {
    return;
  }
  FUN_00b3ad10(0xffffffff);
  return;
}

// 00B5B5E0  FUN_00b5b5e0  size=1013  [callgraph]
void __fastcall FUN_00b5b5e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x3ed] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b5b602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00b34da0();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x376] = param_1[0x376] | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00b39f00(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00b39f00(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00b39f00(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00b39f00(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if (param_1[0x4f1] == 0) {
        if (param_1[0x63c] == 0) goto LAB_00b5b7e6;
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
      }
      else {
        if (param_1[0x63c] != 0) {
          param_1[0x376] = param_1[0x376] & 0xbfffffff;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00b39f00(sVar2 + 0x19,uVar5,uVar6,uVar7);
          if (param_1[0x4f2] == 0) {
            return;
          }
          uVar4 = FUN_00dde2a0(0,2);
          if ((uVar4 & 0xffff) == 0) goto LAB_00b5b7c9;
          uVar4 = (uVar4 & 0xffff) - 1;
          if (uVar4 == 0) {
            FUN_00b39f00(0x110001,0,0,0);
            return;
          }
          goto LAB_00b5b97b;
        }
LAB_00b5b7e6:
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if (60.0 < (float)param_1[0x244] + fVar1) {
          sVar2 = FUN_00dde2d0(0,1);
          if ((sVar2 == 0) || (param_1[0x3ec] == 0)) {
            if (param_1[0x3ed] != 0) {
              FUN_00b39f00(0x1b,0,0,0);
            }
          }
          else {
            FUN_00b39f00(0x1a,0,0,0);
          }
        }
      }
      if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
         (param_1[0x63c] != 0)) {
LAB_00b5b8e6:
        FUN_00b39f00(0x13,0,0,0);
        return;
      }
      if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         ((float)param_1[0x2a8] < 0.7853982)) {
        if (param_1[0x63c] != 0) goto LAB_00b5b8e6;
        goto LAB_00b5b98f;
      }
    }
  }
  if ((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x4f2] == 0) {
      return;
    }
    if (20.25 <= (float)param_1[0x2a3]) {
      return;
    }
    if ((float)param_1[0x2a3] <= 6.25) {
      return;
    }
    if (0.7853982 <= (float)param_1[0x2a8]) {
      return;
    }
    uVar4 = FUN_00dde2a0(0,1);
    uVar4 = uVar4 & 0xffff;
    if (uVar4 == 0) {
LAB_00b5b7c9:
      FUN_00b39f00(0x1000d,0,0,0);
      return;
    }
LAB_00b5b97b:
    if (uVar4 != 1) {
      return;
    }
    FUN_00b39f00(0x1000f,0,0,0);
    return;
  }
LAB_00b5b98f:
  if (param_1[0x3ed] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
    return;
  }
  if (1.3962634 <= (float)param_1[0x2a8]) {
    return;
  }
  FUN_00b3ad10(0xffffffff);
  return;
}

// 00B5B9E0  FUN_00b5b9e0  size=868  [callgraph]
void __fastcall FUN_00b5b9e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x3eb] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b5ba02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00b34da0();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x376] = param_1[0x376] | 0x40000000;
      FUN_00b39f00(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x63c] == 0)) && ((float)param_1[0x609] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00b39f00(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00b39f00(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00b39f00(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00b39f00(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      if ((((float)param_1[0x422] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         (((float)param_1[0x2a8] < 0.7853982 && (param_1[0x63c] != 0)))) {
        FUN_00b39f00(0x13,0,0,0);
        return;
      }
      if (param_1[0x4f1] != 0) {
        if (param_1[0x63c] != 0) {
          param_1[0x376] = param_1[0x376] & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00b39f00(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (param_1[0x4f2] != 0) {
            sVar2 = FUN_00dde2a0(0,2);
            if (sVar2 == 0) {
              uVar4 = 0x1000d;
            }
            else if (sVar2 == 1) {
              uVar4 = 0x110001;
            }
            else {
              if (sVar2 != 2) goto LAB_00b5bc2b;
              uVar4 = 0x1000f;
            }
            FUN_00b39f00(uVar4,0,0,0);
          }
LAB_00b5bc2b:
          iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_6();
          if (iVar3 == 0) {
            return;
          }
          FUN_00b39f00(0x10008,0,0,0);
          return;
        }
        goto LAB_00b5bcfe;
      }
    }
  }
  if ((param_1[0x63c] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x4f2] == 0) {
      return;
    }
    if (20.25 <= (float)param_1[0x2a3]) {
      return;
    }
    if ((float)param_1[0x2a3] <= 6.25) {
      return;
    }
    if (0.7853982 <= (float)param_1[0x2a8]) {
      return;
    }
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_00b39f00(0x1000d,0,0,0);
      return;
    }
    if (sVar2 != 1) {
      return;
    }
    FUN_00b39f00(0x1000f,0,0,0);
    return;
  }
LAB_00b5bcfe:
  if (param_1[0x3eb] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
    FUN_00b3ad10(0xffffffff);
  }
  return;
}

// 00B5BD50  FUN_00b5bd50  size=952  [callgraph]
void __fastcall FUN_00b5bd50(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    iVar3 = FUN_00b2ea70();
    if (iVar3 == 0) {
      iVar3 = FUN_00b2e920();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120004,0,0,0);
        param_1[0x6b7] = -1;
        return;
      }
      iVar3 = FUN_00b2e9b0();
      if (iVar3 != 0) {
        FUN_00b39f00(0x120001,0,0,0);
        param_1[0x6b7] = -1;
        return;
      }
      if ((*(byte *)(param_1 + 0x375) & 4) != 0) {
        param_1[0x375] = param_1[0x375] & 0xfffffffb;
        if (param_1[0x654] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00b39f00(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00b39f00(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_5();
        if (iVar3 != 0) {
          FUN_00b39f00(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x11;
        }
        else {
          uVar4 = 0x10;
        }
        FUN_00b39f00(uVar4,0,0,0);
      }
      iVar3 = FUN_00b52db0();
      if (iVar3 == 0) {
        iVar3 = FUN_00b34da0();
        if (iVar3 != 0) {
          FUN_00a81330();
          iVar3 = FUN_00a7c8a0();
          param_1[600] = *(int *)(iVar3 + 0x40);
          param_1[0x259] = *(int *)(iVar3 + 0x44);
          param_1[0x25a] = *(int *)(iVar3 + 0x48);
          param_1[0x25b] = *(int *)(iVar3 + 0x4c);
          param_1[0x376] = param_1[0x376] | 0x40000000;
          FUN_00b39f00(0x19,0,0,0);
          return;
        }
        if (param_1[0x187] != 0) {
          if (((param_1[0x2a1] != 0) &&
              (iVar3 = lib::Array<Entity*>::Array<Entity*>_4(), iVar3 != 0)) &&
             ((float)param_1[0x2a3] < 16.0)) {
            FUN_00b39f00(0x1000e,0,0,0);
            if ((float)param_1[0x2a3] < 12.25) {
              FUN_00b39f00(0x1000f,0,0,0);
            }
            if ((float)param_1[0x2a3] < 6.25) {
              FUN_00b39f00(0x1000d,0,0,0);
            }
            FUN_00c27260(param_1[0x639]);
            return;
          }
          if (param_1[0x63c] == 0) {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
            if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x375] & 0x400000U) != 0)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                FUN_00b39f00(0x11,0,0,0);
              }
              else {
                FUN_00b39f00(0x10,0,0,0);
              }
            }
          }
          else {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
            if (fVar1 - (float)param_1[0x244] < 0.0) {
              param_1[0x249] = 0;
            }
          }
        }
        if ((param_1[0x63c] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
          if (((float)param_1[0x2a3] < 4.0) && ((float)param_1[0x2a5] < 2.0)) {
                    /* WARNING: Could not recover jumptable at 0x00b5c106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        else if ((((param_1[0x4f2] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
                 (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
          sVar2 = FUN_00dde2a0(0,1);
          if (sVar2 == 0) {
            FUN_00b39f00(0x1000d,0,0,0);
            return;
          }
          if (sVar2 == 1) {
            FUN_00b39f00(0x1000f,0,0,0);
            return;
          }
        }
      }
    }
    else {
      FUN_00b39f00(0x120000,0,0,0);
      param_1[0x6b7] = -1;
    }
  }
  return;
}

// 00B5C110  FUN_00b5c110  size=1049  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b5c19e) */

void __fastcall FUN_00b5c110(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xf8c) == 0) {
    FUN_00b39f00(0x7000b,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
  if (((iVar3 == 0) || (*(int *)(param_1 + 0x13dc) != 1)) || (*(int *)(param_1 + 0x13b8) == 0)) {
LAB_00b5c212:
    if ((((64.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
        (*(int *)(param_1 + 0x18f0) != 0)) ||
       ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    if ((((*(float *)(param_1 + 0xa8c) <= 25.0) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
        (*(int *)(param_1 + 0x13dc) != 1)) || (*(int *)(param_1 + 0x13b8) == 0)) {
      if (((9.0 <= *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
         ((*(int *)(param_1 + 0x13dc) != 1 || (*(int *)(param_1 + 0x13b8) == 0)))) {
        if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
          FUN_00b39f00(0x18,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) <= 2.1816616) {
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00b39f00(0x17,0,0,0);
          }
          if (-2.1816616 <= *(float *)(param_1 + 0xa9c)) {
            if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x18f0) == 0)) {
              sVar2 = FUN_00dde2d0(0,2);
              if (sVar2 == 0) {
                if (*(int *)(param_1 + 0xfb0) != 0) {
                  FUN_00b39f00(0x10,0,0,0);
                  return;
                }
              }
              else if (sVar2 == 1) {
                if (*(int *)(param_1 + 0xfb4) != 0) {
                  FUN_00b39f00(0x11,0,0,0);
                  return;
                }
              }
              else if ((sVar2 == 2) && (*(int *)(param_1 + 0xfac) != 0)) {
                FUN_00b39f00(0x12,0,0,0);
                return;
              }
            }
            fVar1 = *(float *)(param_1 + 0x924);
            if (NAN(fVar1) || 120.0 < fVar1 == (fVar1 == 120.0)) {
              return;
            }
            iVar3 = FUN_00464930();
            if (iVar3 != 0) {
              *(undefined4 *)(param_1 + 0xdb0) = 1;
            }
            *(undefined4 *)(param_1 + 0x924) = 0;
            return;
          }
        }
        FUN_00b39f00(0x16,0,0,0);
        return;
      }
      FUN_00b39f00(0x12,0,0,0);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 != 0) {
        return;
      }
      iVar3 = FUN_00c15850();
      if (iVar3 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x18e8) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x18f0) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0xbe8) != 0) {
        return;
      }
      if (*(float *)(param_1 + 0xaa0) <= 1.0471976) goto LAB_00b5c3ec;
      goto LAB_00b5c3da;
    }
    FUN_00b39f00(0xf,0,0,0);
    sVar2 = FUN_00dde2d0(0,3);
    if ((((sVar2 != 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (*(int *)(param_1 + 0x18e8) == 0)
        ) || ((*(int *)(param_1 + 0x18f0) == 0 || (*(int *)(param_1 + 0xbe8) != 0)))) {
      return;
    }
    uVar5 = 0x10002;
  }
  else {
    if ((25.0 <= *(float *)(param_1 + 0xa8c)) || (uVar4 = FUN_00dde2a0(1,100), (uVar4 & 3) != 0)) {
      FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
      goto LAB_00b5c212;
    }
    FUN_00b39f00(0x10002,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
    if (6.25 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (*(float *)(param_1 + 0xaa0) <= 1.0471976) {
      return;
    }
LAB_00b5c3da:
    uVar5 = 0x70008;
  }
  FUN_00b39f00(uVar5,0,0,0);
LAB_00b5c3ec:
  FUN_00c27260(*(undefined4 *)(param_1 + 0x18e4));
  return;
}

// 00B5C530  FUN_00b5c530  size=486  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b5c59f) */

void __fastcall FUN_00b5c530(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_4();
    if ((iVar3 != 0) && ((param_1[0x4f7] == 1 && (param_1[0x4ee] != 0)))) {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(1,100), (uVar4 & 3) == 0)) {
        FUN_00b39f00(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
          FUN_00b39f00(0x70008,0,0,0);
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      FUN_00c27260(param_1[0x639]);
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x63c] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00b5c6f2;
      }
    }
    else if (param_1[0x63c] != 0) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x3ed] != 0) {
          FUN_00b39f00(0x11,0,0,0);
        }
      }
      else if (param_1[0x3ec] != 0) {
        FUN_00b39f00(0x10,0,0,0);
      }
    }
  }
LAB_00b5c6f2:
  if (16.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b5c714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B5C720  FUN_00b5c720  size=213  [callgraph]
void __fastcall FUN_00b5c720(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((((param_1[0x2a1] != 0) && (iVar1 = lib::Array<Entity*>::Array<Entity*>_4(), iVar1 != 0)) &&
        (param_1[0x4f7] == 1)) && (param_1[0x4ee] != 0)) {
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00b39f00(0x70008,0,0,0);
        }
        FUN_00c27260(param_1[0x639]);
        return;
      }
      FUN_00c27260(param_1[0x639]);
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00b5c7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if (param_1[0x3eb] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b5c7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B5C800  FUN_00b5c800  size=256  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b5c86f) */

void __fastcall FUN_00b5c800(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) &&
      (iVar1 = lib::Array<Entity*>::Array<Entity*>_4(), iVar1 != 0)) &&
     ((param_1[0x4f7] == 1 && (param_1[0x4ee] != 0)))) {
    if (((float)param_1[0x2a3] < 36.0) && (uVar2 = FUN_00dde2a0(1,100), (uVar2 & 3) == 0)) {
      FUN_00b39f00(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
        FUN_00b39f00(0x70008,0,0,0);
      }
      FUN_00c27260(param_1[0x639]);
      return;
    }
    FUN_00c27260(param_1[0x639]);
  }
  if (param_1[0x3ec] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b5c8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B5C900  FUN_00b5c900  size=256  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b5c96f) */

void __fastcall FUN_00b5c900(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) &&
      (iVar1 = lib::Array<Entity*>::Array<Entity*>_4(), iVar1 != 0)) &&
     ((param_1[0x4f7] == 1 && (param_1[0x4ee] != 0)))) {
    if (((float)param_1[0x2a3] < 36.0) && (uVar2 = FUN_00dde2a0(1,100), (uVar2 & 3) == 0)) {
      FUN_00b39f00(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
        FUN_00b39f00(0x70008,0,0,0);
      }
      FUN_00c27260(param_1[0x639]);
      return;
    }
    FUN_00c27260(param_1[0x639]);
  }
  if (param_1[0x3ed] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b5c9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B5CA10  FUN_00b5ca10  size=544  [callgraph]
void __fastcall FUN_00b5ca10(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if ((iVar1 != 0) && (param_1[0x186] != 0xc0008)) {
    iVar1 = param_1[0x2a1];
    param_1[0x5b0] = *(int *)(iVar1 + 0x40);
    param_1[0x5b1] = *(int *)(iVar1 + 0x44);
    param_1[0x5b2] = *(int *)(iVar1 + 0x48);
    param_1[0x5b3] = *(int *)(iVar1 + 0x4c);
  }
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000b) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b463f0();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      if ((param_1[0x187] == 0) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
        FUN_00b39f00(0x110001,0,0,0);
        FUN_00b34920();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x20000:
        FUN_00b57760();
        FUN_00b34920();
        return;
      case 0x20001:
      case 0x20002:
      case 0x20003:
      case 0x20004:
        FUN_00b51d50();
        FUN_00b34920();
        return;
      case 0x20005:
        FUN_00b57c10();
        FUN_00b34920();
        return;
      case 0x20006:
      case 0x20007:
      case 0x20008:
        FUN_00b464c0();
        FUN_00b34920();
        return;
      }
    }
  }
  else if (iVar1 < 0xc0006) {
    if (iVar1 == 0xc0005) {
      FUN_00b2e160();
      FUN_00b34920();
      return;
    }
    if (iVar1 != 0xa0001) {
      if (iVar1 == 0xa0020) {
        FUN_005f5620();
        FUN_00b34920();
        return;
      }
      if (iVar1 == 0xb0008) {
        FUN_005f5610();
        FUN_00b34920();
        return;
      }
    }
  }
  else if ((iVar1 == 0xc0006) || (iVar1 == 0xc0007)) {
    FUN_00b2e190();
  }
  else if (iVar1 == 0xc0008) {
    FUN_00b2e1c0();
    FUN_00b34920();
    return;
  }
  FUN_00b34920();
  return;
}

// 00B5CCC0  Em0010::vf32C  size=977  [class]
undefined4 __fastcall Em0010::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
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
  bool bVar13;
  int iVar14;
  float *pfVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar18;
  float10 fVar19;
  undefined1 *puVar20;
  undefined1 auStack_170 [16];
  undefined1 local_160 [16];
  undefined1 uStack_150;
  float fStack_130;
  uint uStack_d0;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if ((param_1[0x376] & 0x8000000U) != 0) {
    param_1[0x376] = param_1[0x376] & 0xf7ffffff;
    return 0;
  }
  iVar14 = FUN_00a8c240();
  if (iVar14 != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    return 0;
  }
  iVar14 = FUN_00a8ef10();
  if (iVar14 != 0) {
    return 0;
  }
  iVar14 = FUN_00a8c760(9);
  if (iVar14 != 0) {
    return 0;
  }
  if ((param_1[0x376] & 0x800U) != 0) {
    return 0;
  }
  if ((param_1[0x186] & 0xffff0000U) == 0x100000) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
  if (param_1[0x286] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  param_1[0x4e9] = 0;
  piVar17 = (int *)param_1[0x19f];
  piVar16 = piVar17 + param_1[0x1a1] * 0x54;
  FUN_00445db0();
  iVar14 = -1;
  bVar13 = false;
  if (piVar17 != piVar16) {
    do {
      if ((*piVar17 != 0x147) && (iVar14 <= piVar17[1])) {
        bVar13 = true;
        FUN_00448f50(piVar17);
        iVar14 = piVar17[1];
      }
      piVar17 = piVar17 + 0x54;
    } while (piVar17 != piVar16);
    if ((bVar13) && (iVar14 = FUN_00a8f040(local_160), iVar14 == 0)) {
      param_1[0x376] = param_1[0x376] & 0xffbfffff;
      param_1[0x375] = param_1[0x375] & 0xf7ffffff;
      param_1[0x376] = param_1[0x376] & 0xfffffbff;
      FUN_00eaa6e0(0x41200000,0);
      FUN_00a81330();
      pfVar15 = (float *)FUN_00a7c8b0();
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      fVar3 = pfVar15[2];
      pfVar15 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      fVar6 = pfVar15[2];
      pfVar15 = (float *)FUN_00a925a0(auStack_170);
      fVar7 = pfVar15[1];
      fVar8 = *pfVar15;
      fVar9 = pfVar15[2];
      pfVar15 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar10 = *pfVar15;
      fVar11 = pfVar15[1];
      fVar12 = pfVar15[2];
      pfVar15 = (float *)FUN_00a92640(auStack_170);
      fVar10 = pfVar15[2] * (fVar3 - fVar12) +
               *pfVar15 * (fVar1 - fVar10) + pfVar15[1] * (fVar2 - fVar11);
      if (fVar10 <= 0.5) {
        if (-0.5 <= fVar10) {
          if (fVar9 * (fVar3 - fVar6) + fVar8 * (fVar1 - fVar4) + fVar7 * (fVar2 - fVar5) <= 0.0) {
            param_1[0x4f3] = 1;
          }
          else {
            param_1[0x4f3] = 0;
          }
        }
        else {
          param_1[0x4f3] = 2;
        }
      }
      else {
        param_1[0x4f3] = 3;
      }
      fVar19 = (float10)FUN_00ddba30(fStack_130 - (float)param_1[0x25]);
      param_1[0x245] = (int)(float)fVar19;
      iVar14 = FUN_00b35b80(local_160);
      if (iVar14 == 0) {
        iVar14 = FUN_00a8c760(0x34);
        if ((iVar14 == 0) && (param_1[0x186] != 0x100001)) {
          if ((param_1[0x377] & 0x2000U) == 0) {
            if (param_1[0x139] == 0) {
              iVar14 = FUN_00416910(6);
              if ((iVar14 != 0) && ((uStack_d0 & 0x10000) != 0)) {
                param_1[0x376] = param_1[0x376] | 0x1000;
              }
              uVar18 = FUN_00b53330(local_160);
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar18;
            }
          }
          else if (param_1[0x139] == 0) {
            iVar14 = FUN_00b32fa0();
            if (iVar14 != 0) {
              puVar20 = local_160;
              FUN_00b32fa0(puVar20);
              FUN_004e5aa0(puVar20);
            }
            goto LAB_00b5cfc6;
          }
          FUN_00b50a20(local_160);
        }
      }
      else {
        uVar18 = 0;
        iVar14 = FUN_00a81330();
        if (iVar14 != 0) {
          uVar18 = FUN_00a7c8a0();
        }
        iVar14 = FUN_00ac8170(uVar18);
        if (iVar14 != 0) {
          (**(code **)(*param_1 + 0x21c))(uVar18,uStack_150,0x3c23d70a,0);
        }
      }
    }
  }
LAB_00b5cfc6:
  if (param_1[0x286] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00B5D0A0  FUN_00b5d0a0  size=944  [between]
/* WARNING: Switch with 1 destination removed at 0x00b5d28b : 19 cases all go to same destination */

void __fastcall FUN_00b5d0a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 2:
      FUN_00b41ef0();
      FUN_00b34920();
      return;
    case 3:
      FUN_00b42060();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 6:
      FUN_00b425b0();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 8:
      FUN_00b295a0();
      FUN_00b34920();
      return;
    case 9:
      FUN_00b297b0();
      FUN_00b34920();
      return;
    case 10:
      FUN_00b41b10();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b42b80();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0xd:
      FUN_00b30330();
      FUN_00b34920();
      return;
    case 0xe:
      FUN_00b54db0();
      FUN_00b34920();
      return;
    case 0xf:
      FUN_00b55410();
      FUN_00b34920();
      return;
    case 0x10:
      FUN_00b55850();
      FUN_00b34920();
      return;
    case 0x11:
      FUN_00b55c60();
      FUN_00b34920();
      return;
    case 0x12:
      FUN_00b56070();
      FUN_00b34920();
      return;
    case 0x13:
      FUN_00b56420();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x16:
      FUN_00b43350();
      FUN_00b34920();
      return;
    case 0x17:
      FUN_00b433f0();
      FUN_00b34920();
      return;
    case 0x18:
      FUN_00b43490();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    case 0x25:
      FUN_00b2a4e0();
      FUN_00b34920();
      return;
    }
  }
  else if (0x20009 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_00b3ca20();
        FUN_00b34920();
        return;
      }
      FUN_00b34920();
      return;
    }
    if (iVar1 < 0xb0001) {
      switch(iVar1) {
      default:
        goto switchD_00b5d0cf_caseD_15;
      case 0xa0004:
        FUN_00b2f6a0();
        FUN_00b34920();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3d700();
        FUN_00b34920();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b2f6c0();
        FUN_00b34920();
        return;
      case 0xa0007:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3da70();
        FUN_00b34920();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b2f6e0();
        FUN_00b34920();
        return;
      case 0xa000a:
        FUN_00b3dd80();
        FUN_00b34920();
        return;
      case 0xa0013:
      case 0xa0019:
        FUN_00b2f770();
        FUN_00b34920();
        return;
      case 0xa0014:
        goto switchD_00b5d2dd_caseD_a0014;
      case 0xa0020:
        FUN_005f5620();
        FUN_00b34920();
        return;
      case 0xa0022:
        FUN_00b47c80();
        FUN_00b34920();
        return;
      }
    }
    if (iVar1 < 0x100001) {
      switch(iVar1) {
      case 0xb0008:
        FUN_005f5610();
        FUN_00b34920();
        return;
      case 0xb000c:
        FUN_005f5630();
        FUN_00b34920();
        return;
      }
    }
    else if (iVar1 < 0x110001) {
      if (iVar1 != 0x110000) {
        switch(iVar1) {
        case 0x100003:
          FUN_00b410e0();
          FUN_00b34920();
          return;
        }
      }
    }
    else {
      if (0x120000 < iVar1) {
        switch(iVar1) {
        case 0x120001:
        case 0x120002:
        case 0x120003:
        case 0x120004:
          goto switchD_00b5d2dd_caseD_a0014;
        default:
          goto switchD_00b5d0cf_caseD_15;
        }
      }
      if (iVar1 != 0x120000) {
        FUN_00b34920();
        return;
      }
switchD_00b5d2dd_caseD_a0014:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
switchD_00b5d0cf_caseD_15:
  FUN_00b34920();
  return;
}

// 00B5D5A0  FUN_00b5d5a0  size=428  [between]
void __fastcall FUN_00b5d5a0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    fVar4 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar4;
    FUN_00aa4080((int)(short)param_1[0x668],0,0x3e088889,0x3f800000,0x8000000,0,(float)fVar4);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
  }
  else if (param_1[0x187] != 1) goto LAB_00b5d5b5;
  FUN_00ac80a0(0x3fc00000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_00b56940();
    if (iVar3 != 0) {
      return;
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
    iVar3 = FUN_00a82e80();
    if (((iVar3 != 0) && (param_1[0x63c] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00b39f00(0x14,0,0,0);
      return;
    }
  }
LAB_00b5d5b5:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d8efa35,0);
  }
  return;
}

// 00B5D750  FUN_00b5d750  size=562  [between]
void __fastcall FUN_00b5d750(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    fVar4 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar4;
    if (param_1[0x421] != 0) {
      param_1[0x248] = 0x3fb33333;
    }
    FUN_00aa4080((int)(short)param_1[0x665],0,0x3d088889,0x3f800000,0x8000000,0,param_1[0x248]);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    param_1[0x421] = param_1[0x420];
    param_1[0x420] = 0;
    if (((((param_1[0x376] & 0x40000000U) != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (*(int *)(iVar3 + 0x4b0) == 0x31011)) {
      FUN_00e5e0c0("em0010_vo_line_caution_grenade",param_1,0xffffffff,0);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00b5d765;
  FUN_00ac80a0(0x3fc00000,0x3f800000);
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_00b56db0();
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x376] = param_1[0x376] & 0xbfffffff;
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_00b56db0();
    if (iVar3 != 0) {
      return;
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
      FUN_00b39f00(0x13,0,0,0);
      return;
    }
  }
LAB_00b5d765:
  if ((param_1[0x376] & 0x40000000U) == 0) {
    if (param_1[0x2a1] == 0) {
      return;
    }
  }
  else {
    FUN_00a8e880(param_1 + 600);
  }
  (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  return;
}

// 00B5D990  FUN_00b5d990  size=751  [between]
void __fastcall FUN_00b5d990(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000b) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 2:
      FUN_00b41ef0();
      FUN_00b34920();
      return;
    case 3:
      FUN_00b42060();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 6:
      FUN_00b425b0();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 8:
      FUN_00b295a0();
      FUN_00b34920();
      return;
    case 9:
      FUN_00b297b0();
      FUN_00b34920();
      return;
    case 10:
      FUN_00b41b10();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b463f0();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    case 0x25:
      FUN_00b2a4e0();
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      if ((param_1[0x187] == 0) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
        FUN_00b39f00(0x110001,0,0,0);
        FUN_00b34920();
        return;
      }
    }
    else if (iVar1 < 0x20001) {
      if (iVar1 == 0x20000) {
        FUN_00b57760();
        FUN_00b34920();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x20001:
      case 0x20002:
      case 0x20003:
      case 0x20004:
        FUN_00b51d50();
        FUN_00b34920();
        return;
      case 0x20005:
        FUN_00b57c10();
        FUN_00b34920();
        return;
      case 0x20006:
      case 0x20007:
      case 0x20008:
        FUN_00b464c0();
        FUN_00b34920();
        return;
      }
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_00b2f6a0();
      FUN_00b34920();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3d700();
      FUN_00b34920();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6c0();
      FUN_00b34920();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3da70();
      FUN_00b34920();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6e0();
      FUN_00b34920();
      return;
    case 0xa000a:
      FUN_00b3dd80();
      FUN_00b34920();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_00b2f770();
      FUN_00b34920();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0x100001) {
    switch(iVar1) {
    case 0xb0008:
      FUN_005f5610();
    }
  }
  FUN_00b34920();
  return;
}

// 00B5DD90  FUN_00b5dd90  size=675  [between]
void __fastcall FUN_00b5dd90(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000d) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 2:
      FUN_00b41ef0();
      FUN_00b34920();
      return;
    case 3:
      FUN_00b42060();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 6:
      FUN_00b425b0();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 10:
      FUN_00b41b10();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b47060();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    case 0x25:
      FUN_00b2a4e0();
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      if ((param_1[0x187] == 0) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
        FUN_00b39f00(0x110001,0,0,0);
        FUN_00b34920();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x30000:
        FUN_00b57f20();
        FUN_00b34920();
        return;
      case 0x30001:
      case 0x30002:
      case 0x30003:
      case 0x30004:
        FUN_00b47100();
        FUN_00b34920();
        return;
      case 0x30005:
        FUN_00b583c0();
        FUN_00b34920();
        return;
      case 0x30006:
      case 0x30007:
      case 0x30008:
        FUN_00b472a0();
        FUN_00b34920();
        return;
      case 0x3000b:
        FUN_00b47610();
        FUN_00b34920();
        return;
      }
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_00b2f6a0();
      FUN_00b34920();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3d700();
      FUN_00b34920();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6c0();
      FUN_00b34920();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3da70();
      FUN_00b34920();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6e0();
      FUN_00b34920();
      return;
    case 0xa000a:
      FUN_00b3dd80();
      FUN_00b34920();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_00b2f770();
      break;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b34920();
      return;
    }
  }
  FUN_00b34920();
  return;
}

// 00B5E120  FUN_00b5e120  size=819  [between]
/* WARNING: Switch with 1 destination removed at 0x00b5e2c3 : 20 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00b5e3f0 : 11 cases all go to same destination */

void __fastcall FUN_00b5e120(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 2:
      FUN_00b41ef0();
      FUN_00b34920();
      return;
    case 3:
      FUN_00b42060();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 6:
      FUN_00b425b0();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 10:
      FUN_00b41b10();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b42b80();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0xd:
      FUN_00b30330();
      FUN_00b34920();
      return;
    case 0xe:
      FUN_00b58670();
      FUN_00b34920();
      return;
    case 0xf:
      FUN_00b58a90();
      FUN_00b34920();
      return;
    case 0x10:
      FUN_00b58d50();
      FUN_00b34920();
      return;
    case 0x11:
      FUN_00b59030();
      FUN_00b34920();
      return;
    case 0x12:
      FUN_00b59310();
      FUN_00b34920();
      return;
    case 0x13:
      FUN_00b59580();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    case 0x25:
      FUN_00b2a4e0();
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (((iVar1 == 0xa0000) && (param_1[0x187] == 0)) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
      FUN_00b39f00(0x110001,0,0,0);
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_00b2f6a0();
      FUN_00b34920();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3d700();
      FUN_00b34920();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6c0();
      FUN_00b34920();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6e0();
      FUN_00b34920();
      return;
    case 0xa000a:
      FUN_00b3dd80();
      FUN_00b34920();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_00b2f770();
      FUN_00b34920();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b34920();
      return;
    case 0xa0022:
      FUN_00b47c80();
      FUN_00b34920();
      return;
    }
  }
  else if (0xd0000 < iVar1) {
    if (iVar1 < 0x110001) {
      if (((iVar1 != 0x110000) && (iVar1 < 0x100001)) && (iVar1 != 0x100000)) {
        FUN_00b34920();
        return;
      }
    }
    else {
      if (0x120000 < iVar1) {
        switch(iVar1) {
        case 0x120001:
        case 0x120002:
        case 0x120003:
        case 0x120004:
          goto switchD_00b5e436_caseD_120001;
        default:
          goto switchD_00b5e156_caseD_8;
        }
      }
      if (iVar1 != 0x120000) {
        FUN_00b34920();
        return;
      }
switchD_00b5e436_caseD_120001:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
switchD_00b5e156_caseD_8:
  FUN_00b34920();
  return;
}

// 00B5E570  FUN_00b5e570  size=824  [between]
/* WARNING: Switch with 1 destination removed at 0x00b5e713 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00b5e85d : 11 cases all go to same destination */

void __fastcall FUN_00b5e570(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10009) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 2:
      FUN_00b41ef0();
      FUN_00b34920();
      return;
    case 3:
      FUN_00b42060();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 6:
      FUN_00b425b0();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 10:
      FUN_00b41b10();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b42b80();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0xd:
      FUN_00b30330();
      FUN_00b34920();
      return;
    case 0xe:
      FUN_00b598d0();
      FUN_00b34920();
      return;
    case 0xf:
      FUN_00b59c00();
      FUN_00b34920();
      return;
    case 0x10:
      FUN_00b59e40();
      FUN_00b34920();
      return;
    case 0x11:
      FUN_00b5a0b0();
      FUN_00b34920();
      return;
    case 0x12:
      FUN_00b5a320();
      FUN_00b34920();
      return;
    case 0x13:
      FUN_00b5a510();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    case 0x25:
      FUN_00b2a4e0();
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (((iVar1 == 0xa0000) && (param_1[0x187] == 0)) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
      FUN_00b39f00(0x110001,0,0,0);
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_00b2f6a0();
      FUN_00b34920();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3d700();
      FUN_00b34920();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6c0();
      FUN_00b34920();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3da70();
      FUN_00b34920();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6e0();
      FUN_00b34920();
      return;
    case 0xa000a:
      FUN_00b3dd80();
      FUN_00b34920();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_00b2f770();
      FUN_00b34920();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b34920();
      return;
    case 0xa0022:
      FUN_00b47c80();
      FUN_00b34920();
      return;
    }
  }
  else if ((0x100000 < iVar1) && (0x110000 < iVar1)) {
    if (0x120000 < iVar1) {
      switch(iVar1) {
      case 0x120001:
      case 0x120002:
      case 0x120003:
      case 0x120004:
        goto switchD_00b5e88b_caseD_120001;
      default:
        goto switchD_00b5e5a6_caseD_8;
      }
    }
    if (iVar1 != 0x120000) {
      FUN_00b34920();
      return;
    }
switchD_00b5e88b_caseD_120001:
    (**(code **)(*param_1 + 0x1d4))(1);
  }
switchD_00b5e5a6_caseD_8:
  FUN_00b34920();
  return;
}

// 00B5E9C0  FUN_00b5e9c0  size=792  [between]
/* WARNING: Switch with 1 destination removed at 0x00b5ec6b : 11 cases all go to same destination */

void __fastcall FUN_00b5e9c0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10009) {
    switch(iVar1) {
    case 0:
      FUN_00b41630();
      FUN_00b34920();
      return;
    case 1:
      FUN_00b418e0();
      FUN_00b34920();
      return;
    case 2:
      FUN_00b41ef0();
      FUN_00b34920();
      return;
    case 3:
      FUN_00b42060();
      FUN_00b34920();
      return;
    case 4:
      FUN_00b42180();
      FUN_00b34920();
      return;
    case 5:
      FUN_00b29880();
      FUN_00b34920();
      return;
    case 6:
      FUN_00b425b0();
      FUN_00b34920();
      return;
    case 7:
      FUN_00b41bb0();
      FUN_00b34920();
      return;
    case 10:
      FUN_00b41b10();
      FUN_00b34920();
      return;
    case 0xb:
      FUN_00b42b80();
      FUN_00b34920();
      return;
    case 0xc:
      FUN_00b42c20();
      FUN_00b34920();
      return;
    case 0xd:
      FUN_00b30330();
      FUN_00b34920();
      return;
    case 0xe:
      FUN_00b5a7e0();
      FUN_00b34920();
      return;
    case 0xf:
      FUN_00b5adb0();
      FUN_00b34920();
      return;
    case 0x10:
      FUN_00b5b1e0();
      FUN_00b34920();
      return;
    case 0x11:
      FUN_00b5b5e0();
      FUN_00b34920();
      return;
    case 0x12:
      FUN_00b5b9e0();
      FUN_00b34920();
      return;
    case 0x13:
      FUN_00b5bd50();
      FUN_00b34920();
      return;
    case 0x14:
      FUN_00b567c0();
      FUN_00b34920();
      return;
    case 0x1e:
      FUN_00b458c0();
      FUN_00b34920();
      return;
    case 0x22:
      FUN_00b45aa0();
      FUN_00b34920();
      return;
    case 0x25:
      FUN_00b2a4e0();
      FUN_00b34920();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 != 0xa0000) {
      FUN_00b34920();
      return;
    }
    if ((param_1[0x187] == 0) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
      FUN_00b39f00(0x110001,0,0,0);
      FUN_00b34920();
      return;
    }
  }
  else {
    if (iVar1 < 0xb0001) {
      switch(iVar1) {
      default:
        goto switchD_00b5e9f6_caseD_8;
      case 0xa0004:
        FUN_00b2f6a0();
        FUN_00b34920();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b3d700();
        FUN_00b34920();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b2f6c0();
        FUN_00b34920();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00b2f6e0();
        FUN_00b34920();
        return;
      case 0xa000a:
        FUN_00b3dd80();
        FUN_00b34920();
        return;
      case 0xa0013:
      case 0xa0019:
        FUN_00b2f770();
        FUN_00b34920();
        return;
      case 0xa0014:
        goto switchD_00b5ebb7_caseD_a0014;
      case 0xa0022:
        FUN_00b47c80();
        FUN_00b34920();
        return;
      }
    }
    if (0x100000 < iVar1) {
      if (iVar1 < 0x110001) {
        if (iVar1 != 0x110000) {
          switch(iVar1) {
          case 0x100003:
            FUN_00b410e0();
            FUN_00b34920();
            return;
          }
        }
      }
      else {
        if (0x120000 < iVar1) {
          switch(iVar1) {
          case 0x120001:
          case 0x120002:
          case 0x120003:
          case 0x120004:
            goto switchD_00b5ebb7_caseD_a0014;
          default:
            goto switchD_00b5e9f6_caseD_8;
          }
        }
        if (iVar1 != 0x120000) {
          FUN_00b34920();
          return;
        }
switchD_00b5ebb7_caseD_a0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
  }
switchD_00b5e9f6_caseD_8:
  FUN_00b34920();
  return;
}

// 00B5EDF0  FUN_00b5edf0  size=638  [between]
void __fastcall FUN_00b5edf0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x70001) {
    if (iVar1 == 0x70000) {
      iVar1 = FUN_00a82d50();
      if ((iVar1 == 1) && (param_1[0x2c2] != -1)) {
        FUN_00b39f00(0,0,0,0);
        FUN_00b34920();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0:
        FUN_00b41630();
        FUN_00b34920();
        return;
      case 1:
        FUN_00b418e0();
        FUN_00b34920();
        return;
      case 4:
        FUN_00b42180();
        FUN_00b34920();
        return;
      case 5:
        FUN_00b29880();
        FUN_00b34920();
        return;
      case 6:
        FUN_00b425b0();
        FUN_00b34920();
        return;
      case 7:
        FUN_00b41bb0();
        FUN_00b34920();
        return;
      case 0xe:
        FUN_00b5c110();
        FUN_00b34920();
        return;
      case 0xf:
        FUN_00b5c530();
        FUN_00b34920();
        return;
      case 0x10:
        FUN_00b5c800();
        FUN_00b34920();
        return;
      case 0x11:
        FUN_00b5c900();
        FUN_00b34920();
        return;
      case 0x12:
        FUN_00b5c720();
        FUN_00b34920();
        return;
      case 0x13:
        FUN_00b4be30();
        FUN_00b34920();
        return;
      case 0x14:
        FUN_00b567c0();
        FUN_00b34920();
        return;
      case 0x22:
        FUN_00b45aa0();
        FUN_00b34920();
        return;
      case 0x25:
        FUN_00b2a4e0();
        FUN_00b34920();
        return;
      }
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      if ((param_1[0x187] == 0) && (iVar1 = FUN_00b3af80(), iVar1 != 0)) {
        FUN_00b39f00(0x110001,0,0,0);
        FUN_00b34920();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x7000b:
        FUN_00b390f0();
        FUN_00b34920();
        return;
      }
    }
  }
  else if (iVar1 < 0xb0005) {
    switch(iVar1) {
    case 0xa0004:
      FUN_00b2f6a0();
      FUN_00b34920();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b3d700();
      FUN_00b34920();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6c0();
      FUN_00b34920();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00b2f6e0();
      FUN_00b34920();
      return;
    case 0xa000a:
      FUN_00b3dd80();
      FUN_00b34920();
      return;
    case 0xa0013:
      FUN_00b2f770();
      FUN_00b34920();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
  FUN_00b34920();
  return;
}

// 00B5F130  FUN_00b5f130  size=340  [between]
void __fastcall FUN_00b5f130(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = (**(code **)(*param_1 + 0x274))();
  if (iVar2 == 0) {
    param_1[0x66a] = 0;
    param_1[0x375] = param_1[0x375] & 0xfefffffd;
    if (param_1[0x286] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
    }
    if (param_1[0x5d1] == 1) {
      FUN_00b51fc0();
    }
    else if (param_1[0x5d1] == 2) {
      FUN_00b52090();
    }
    else {
      (**(code **)(*param_1 + 0x1f0))(1);
      uVar1 = param_1[0x377];
      if ((uVar1 & 0x2000) == 0) {
        if ((uVar1 & 0x8000) == 0) {
          if ((char)uVar1 < '\0') {
            FUN_00b530a0();
          }
          else if ((param_1[0x376] & 0x80000U) == 0) {
            if (param_1[0x4f7] == 0) {
              FUN_00b5d0a0();
            }
            if (param_1[0x4f7] == 1) {
              FUN_00b5d0a0();
            }
            if (param_1[0x4f7] == 2) {
              FUN_00b5d990();
            }
            if (param_1[0x4f7] == 3) {
              FUN_00b5dd90();
            }
            if (param_1[0x4f7] == 6) {
              FUN_00b5e9c0();
            }
            if (param_1[0x4f7] == 7) {
              FUN_00b5e120();
            }
            if (param_1[0x4f7] == 5) {
              FUN_00b5e570();
            }
          }
          else {
            FUN_00b5ca10();
          }
        }
        else {
          FUN_00b5edf0();
        }
      }
      else {
        param_1[0x375] = param_1[0x375] | 0x1000000;
        FUN_00b585e0();
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
    }
  }
  return;
}

// 00B5F290  FUN_00b5f290  size=3328  [between]
void __fastcall FUN_00b5f290(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 == 0) {
    param_1[0x5a3] = 1;
  }
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    if (iVar1 != 0x10000) {
      switch(iVar1) {
      case 0:
        FUN_00b416d0();
        break;
      case 1:
        FUN_00b41930();
        break;
      case 2:
        FUN_00b41f40();
        break;
      case 3:
        FUN_00b420b0();
        break;
      case 4:
        FUN_00b42230();
        break;
      case 5:
        FUN_00b298a0();
        break;
      case 6:
        FUN_00b426f0();
        break;
      case 7:
        FUN_00b41cb0();
        break;
      case 8:
        FUN_00b29670();
        break;
      case 9:
        FUN_00b51680();
        break;
      case 10:
        FUN_00b29440();
        break;
      case 0xb:
        FUN_00b29a70();
        break;
      case 0xc:
        FUN_00b30080();
        break;
      case 0xd:
        FUN_00b374d0();
        break;
      case 0xe:
        FUN_00b29fa0();
        break;
      case 0xf:
        FUN_00b2a090();
        break;
      case 0x10:
        FUN_00b42fd0();
        break;
      case 0x11:
        FUN_00b43190();
        break;
      case 0x12:
        FUN_00b2a210();
        break;
      case 0x13:
        FUN_00b37650();
        break;
      case 0x14:
        FUN_00b377e0();
        break;
      case 0x15:
        FUN_00b303b0();
        break;
      case 0x16:
        FUN_00b5d5a0();
        break;
      case 0x17:
        FUN_00b56af0();
        break;
      case 0x18:
        FUN_00b56c50();
        break;
      case 0x19:
        FUN_00b5d750();
        break;
      case 0x1a:
        FUN_00b56ff0();
        break;
      case 0x1b:
        FUN_00b57160();
        break;
      case 0x1c:
        FUN_00b572d0();
        break;
      case 0x1d:
        FUN_00b573e0();
        break;
      case 0x1e:
      case 0x25:
        FUN_00b37b20();
        break;
      case 0x1f:
      case 0x23:
        FUN_00b452e0();
        break;
      case 0x20:
        FUN_00b45640();
        break;
      case 0x21:
        FUN_00b45960();
        break;
      case 0x22:
        FUN_00b45b20();
        break;
      case 0x24:
        FUN_00b441e0();
        break;
      case 0x26:
        FUN_00b44350();
        break;
      case 0x27:
        FUN_00b44550();
      }
      goto switchD_00b5f2cc_default;
    }
switchD_00b5f4c6_caseD_10005:
    FUN_00b44640();
  }
  else {
    if (0x20000 < iVar1) {
      if (iVar1 < 0x30001) {
        if (iVar1 == 0x30000) {
          FUN_00b2afc0();
        }
        else {
          switch(iVar1) {
          case 0x20001:
          case 0x20002:
          case 0x20003:
          case 0x20004:
            FUN_00b2ac70();
            break;
          case 0x20005:
            FUN_00b2ae30();
            break;
          case 0x20006:
          case 0x20007:
          case 0x20008:
            FUN_00b46500();
            break;
          case 0x20009:
            FUN_00b46620();
            break;
          case 0x2000a:
            FUN_00b46730();
            break;
          case 0x2000b:
            FUN_00b46890();
            break;
          case 0x2000c:
            FUN_00b469a0();
            break;
          case 0x2000e:
            FUN_00b46ab0();
          }
        }
      }
      else if (iVar1 < 0x40001) {
        if (iVar1 == 0x40000) {
          FUN_00b4bc00();
        }
        else {
          switch(iVar1) {
          case 0x30001:
          case 0x30002:
          case 0x30003:
          case 0x30004:
            FUN_00b2b0d0();
            break;
          case 0x30005:
            FUN_00b2b270();
            break;
          case 0x30006:
          case 0x30007:
          case 0x30008:
            FUN_00b472d0();
            break;
          case 0x30009:
            FUN_00b473f0();
            break;
          case 0x3000a:
            FUN_00b47500();
            break;
          case 0x3000b:
            FUN_00b477b0();
            break;
          case 0x3000c:
            FUN_00b47ae0();
          }
        }
      }
      else if (iVar1 < 0xb0001) {
        if (iVar1 == 0xb0000) {
          FUN_00b3f320();
        }
        else if (iVar1 < 0xa0001) {
          if (iVar1 == 0xa0000) {
            FUN_00b50b00();
          }
          else if (iVar1 < 0x60001) {
            if (iVar1 == 0x60000) {
              FUN_00b49420();
            }
            else if (iVar1 < 0x50001) {
              if (iVar1 == 0x50000) {
                FUN_00b4a6a0();
              }
              else if (iVar1 == 0x40001) {
                FUN_00b4bd00();
              }
            }
            else {
              switch(iVar1) {
              case 0x50001:
                FUN_00b388d0();
                break;
              case 0x50002:
                FUN_00b2c280();
                break;
              case 0x50003:
                FUN_00b4a920();
                break;
              case 0x50004:
                FUN_00b2c370();
                break;
              case 0x50005:
                FUN_00b2c460();
                break;
              case 0x50006:
                FUN_00b4ac10();
                break;
              case 0x50007:
                FUN_00b2c550();
              }
            }
          }
          else if (iVar1 < 0x70001) {
            if (iVar1 == 0x70000) {
              FUN_00b2db90();
            }
            else {
              switch(iVar1) {
              case 0x60001:
                FUN_00b2bcf0();
                break;
              case 0x60002:
                FUN_00b2bde0();
                break;
              case 0x60003:
                FUN_00b49690();
                break;
              case 0x60004:
                FUN_00b2bf00();
                break;
              case 0x60005:
                FUN_00b2bfa0();
                break;
              case 0x60006:
                FUN_00b49890();
                break;
              case 0x60007:
                FUN_00b32520();
                break;
              case 0x60008:
                FUN_00b32620();
                break;
              case 0x60009:
              case 0x6000a:
                FUN_00b2c070();
                break;
              case 0x6000b:
                FUN_00b49aa0();
                break;
              case 0x6000c:
                FUN_00b49d70();
                break;
              case 0x6000d:
                FUN_00b49f30();
                break;
              case 0x6000e:
                FUN_00b4a050();
                break;
              case 0x6000f:
                FUN_00b4a160();
                break;
              case 0x60010:
                FUN_00b4a1b0();
                break;
              case 0x60011:
                FUN_00b32700();
                break;
              case 0x60012:
                FUN_00b4a2e0();
              }
            }
          }
          else {
            switch(iVar1) {
            case 0x70008:
              FUN_00b33010();
              break;
            case 0x70009:
              FUN_00b2dc20();
              break;
            case 0x7000a:
              FUN_00b33170();
              break;
            case 0x7000b:
              FUN_00b4bf80();
              break;
            case 0x7000c:
              FUN_00b4c100();
              break;
            case 0x7000d:
              FUN_00b2dd00();
            }
          }
        }
        else {
          switch(iVar1) {
          case 0xa0001:
            FUN_00b3cc60();
            break;
          case 0xa0002:
            FUN_00b3ce80();
            break;
          case 0xa0003:
            FUN_00b3d190();
            break;
          case 0xa0004:
            FUN_00b3d300();
            break;
          case 0xa0005:
          case 0xa0012:
            FUN_00b3d760();
            break;
          case 0xa0006:
            FUN_00b3d940();
            break;
          case 0xa0007:
            FUN_00b3dac0();
            break;
          case 0xa0008:
            FUN_00b3dbc0();
            break;
          case 0xa0009:
            FUN_00b3dc20();
            break;
          case 0xa000a:
            FUN_00b3ddb0();
            break;
          case 0xa000b:
            FUN_00b3dfa0();
            break;
          case 0xa000c:
            FUN_00b3e070();
            break;
          case 0xa000d:
            FUN_00b3e180();
            break;
          case 0xa000e:
            FUN_00b36870();
            break;
          case 0xa000f:
            FUN_00b3e4c0();
            break;
          case 0xa0010:
          case 0xa0011:
            FUN_00b3e5b0();
            break;
          case 0xa0013:
          case 0xa0019:
            FUN_00b3e740();
            break;
          case 0xa0014:
            FUN_00b3eac0();
            break;
          case 0xa0015:
            FUN_00b36970();
            break;
          case 0xa0016:
            FUN_00b3ebe0();
            break;
          case 0xa0017:
            FUN_00b3ecc0();
            break;
          case 0xa0018:
            FUN_00b3ed70();
            break;
          case 0xa001a:
            FUN_00b3ee20();
            break;
          case 0xa001b:
          case 0xa001c:
            FUN_00b3f0b0();
            break;
          case 0xa001d:
            FUN_00b2f830();
            break;
          case 0xa001e:
            FUN_00b2faa0();
            break;
          case 0xa001f:
            FUN_00b2fb40();
            break;
          case 0xa0020:
            FUN_005fa060();
            break;
          case 0xa0021:
            FUN_00b2b4a0();
            break;
          case 0xa0022:
            FUN_00b30eb0();
            break;
          case 0xa0023:
            FUN_00b38f10();
          }
        }
      }
      else if (iVar1 < 0xc0006) {
        if (iVar1 == 0xc0005) {
          FUN_00b4cce0();
        }
        else {
          switch(iVar1) {
          case 0xb0001:
            FUN_00b3f750();
            break;
          case 0xb0002:
            FUN_00b3f940();
            break;
          case 0xb0003:
            FUN_00b36b60();
            break;
          case 0xb0004:
            FUN_00b3f9e0();
            break;
          case 0xb0005:
          case 0xb0006:
            FUN_00b47d30();
            break;
          case 0xb0007:
            FUN_00b48420();
            break;
          case 0xb0008:
          case 0xb0009:
            FUN_005fb330();
            break;
          case 0xb000a:
            FUN_00b2f940();
            break;
          case 0xb000b:
            FUN_00b2fa30();
            break;
          case 0xb000c:
            FUN_005fa210();
          }
        }
      }
      else if (iVar1 < 0x10000001) {
        if (iVar1 == 0x10000000) {
          FUN_00b2c6b0();
        }
        else if (iVar1 < 0x100001) {
          if (iVar1 == 0x100000) {
            FUN_00b409e0();
          }
          else if (iVar1 < 0xd0001) {
            if (iVar1 == 0xd0000) {
              FUN_00b38a80();
            }
            else if ((iVar1 == 0xc0006) || (iVar1 == 0xc0007)) {
              FUN_00b4ce20();
            }
            else if (iVar1 == 0xc0008) {
              FUN_00b4cf00();
            }
          }
          else if (iVar1 == 0xd0001) {
            FUN_00b38b30();
          }
          else if (iVar1 == 0xd0002) {
            FUN_00b4baa0();
          }
          else if (iVar1 == 0xd0003) {
            FUN_00b4bb50();
          }
        }
        else if (iVar1 < 0x110001) {
          if (iVar1 == 0x110000) {
            FUN_00b29d40();
          }
          else {
            switch(iVar1) {
            case 0x100001:
              FUN_00b40af0();
              break;
            case 0x100002:
              FUN_00b40dd0();
              break;
            case 0x100003:
              FUN_00b29370();
              break;
            case 0x100004:
              FUN_00b41380();
              break;
            case 0x100005:
              FUN_00b2fec0();
            }
          }
        }
        else if (iVar1 < 0x120001) {
          if (iVar1 == 0x120000) {
            FUN_00b43640();
          }
          else if (iVar1 == 0x110001) {
            FUN_00b29e20();
          }
          else if (iVar1 == 0x110002) {
            FUN_00b42d20();
          }
          else if (iVar1 == 0x110003) {
            FUN_00b42e90();
          }
        }
        else {
          switch(iVar1) {
          case 0x120001:
          case 0x120002:
          case 0x120003:
            FUN_00b43870();
            break;
          case 0x120004:
            FUN_00b43d70();
          }
        }
      }
      else {
        switch(iVar1) {
        case 0x10000001:
          FUN_00b2c720();
          break;
        case 0x10000002:
          FUN_00b2c790();
          break;
        case 0x10000003:
          FUN_00b2c890();
          break;
        case 0x10000005:
          FUN_00b389a0();
          break;
        case 0x10000006:
        case 0x10000007:
        case 0x10000008:
        case 0x10000009:
          FUN_00b327d0();
          break;
        case 0x1000000a:
        case 0x1000000b:
        case 0x1000000c:
        case 0x1000000d:
          FUN_00b32950();
          break;
        case 0x1000000e:
          FUN_00b2d1a0();
          break;
        case 0x1000000f:
          FUN_00b32bb0();
          break;
        case 0x10000010:
        case 0x10000011:
          FUN_00b32c90();
          break;
        case 0x10000012:
        case 0x10000013:
          FUN_00b32d90();
          break;
        case 0x10000014:
        case 0x10000015:
          FUN_00b4af80();
          break;
        case 0x10000016:
        case 0x10000017:
        case 0x10000018:
        case 0x10000019:
          FUN_00b2cab0();
          break;
        case 0x1000001a:
          FUN_00b2cca0();
          break;
        case 0x1000001b:
        case 0x1000001c:
        case 0x1000001d:
        case 0x1000001e:
          FUN_00b2cb40();
          break;
        case 0x1000001f:
          FUN_00b2cf50();
          break;
        case 0x10000020:
          FUN_00b2cfd0();
          break;
        case 0x10000021:
          FUN_00b2d040();
          break;
        case 0x10000024:
        case 0x10000029:
          FUN_00b4b4b0();
          break;
        case 0x10000025:
          FUN_00b2ced0();
          break;
        case 0x10000026:
          FUN_00b4b0a0();
          break;
        case 0x10000027:
          FUN_00b4b1f0();
          break;
        case 0x10000028:
          FUN_00b32f20();
          break;
        case 0x1000002a:
          FUN_00b4b320();
          break;
        case 0x1000002b:
          FUN_00b2cd40();
          break;
        case 0x1000002c:
          FUN_00b2ce10();
        }
      }
      goto switchD_00b5f2cc_default;
    }
    if (iVar1 == 0x20000) {
      FUN_00b2ab60();
      goto switchD_00b5f2cc_default;
    }
    switch(iVar1) {
    case 0x10001:
      FUN_00b574d0();
      break;
    case 0x10002:
    case 0x10003:
      FUN_00b44850();
      break;
    case 0x10004:
      FUN_00b44b20();
      break;
    case 0x10005:
      goto switchD_00b5f4c6_caseD_10005;
    case 0x10006:
      FUN_00b30650();
      break;
    case 0x10007:
      FUN_00b37970();
      break;
    case 0x10008:
      FUN_00b44d10();
      break;
    case 0x10009:
      FUN_00b308e0();
      break;
    case 0x1000a:
      FUN_00b44e80();
      break;
    case 0x1000b:
      FUN_00b51870();
      break;
    case 0x1000c:
      FUN_00b44fa0();
      break;
    case 0x1000d:
      FUN_00b2d970();
      break;
    case 0x1000e:
      FUN_00b2da20();
      break;
    case 0x1000f:
      FUN_00b2dad0();
      break;
    case 0x10010:
    case 0x10011:
    case 0x10012:
    case 0x10013:
      FUN_00b4b720();
      break;
    case 0x10014:
      FUN_00b2d6e0();
      break;
    case 0x10015:
      FUN_00b2d2e0();
      break;
    case 0x10016:
      FUN_00b38c50();
      break;
    case 0x10017:
      FUN_00b38d00();
      break;
    case 0x10018:
      FUN_00b38db0();
      break;
    case 0x10019:
      FUN_00b38e60();
      break;
    case 0x1001a:
      FUN_00b2c600();
    }
  }
switchD_00b5f2cc_default:
  iVar1 = FUN_00a8c760(0x1a);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x209) = 2;
    param_1[0x20a] = 0x78;
  }
  iVar1 = FUN_00a8c760(0x1b);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x209) = 0;
    param_1[0x20a] = 0x78;
  }
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    param_1[0x375] = param_1[0x375] | 0x400;
    (**(code **)(*param_1 + 0x1d4))(0);
  }
  iVar1 = FUN_00a8c760(6);
  if (iVar1 != 0) {
    param_1[0x375] = param_1[0x375] | 0x200;
    (**(code **)(*param_1 + 0x1d4))(0);
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  iVar1 = FUN_00a8c760(0x26);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  iVar1 = FUN_00a8c760(0xc);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  if (param_1[300] == 0x20160) {
    if (param_1[0x129] == 1) {
      iVar1 = FUN_00a8c760(0x38);
      if (iVar1 == 0) {
        FUN_00ac9420("face_A");
        FUN_00ac94e0("Dam_face_A");
      }
      else {
        FUN_00ac94e0("face_A");
        FUN_00ac9420("Dam_face_A");
      }
    }
    if (param_1[0x129] == 2) {
      iVar1 = FUN_00a8c760(0x38);
      if (iVar1 != 0) {
        FUN_00ac94e0("face_C");
        FUN_00ac9420("Dam_face_C");
        return;
      }
      FUN_00ac9420("face_C");
      FUN_00ac94e0("Dam_face_C");
    }
  }
  return;
}

// 00B60310  Em0010::vf4C  size=1602  [class]
void __fastcall Em0010::vf4C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined1 local_190 [396];
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfffff1ff;
    *(uint *)(param_1 + 0xdd8) = *(uint *)(param_1 + 0xdd8) & 0xffdfffff;
    iVar8 = 0;
    if (*(int *)(param_1 + 0x19b8) != 0) {
      FUN_00b52e40();
      return;
    }
    if (*(int *)(param_1 + 0x19c8) != 0) {
      FUN_00b2f430();
      return;
    }
    FUN_00a92fb0();
    fVar9 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar9;
    uVar10 = *(undefined4 *)(param_1 + 0x4f0);
    uVar12 = 0x40800000;
    *(undefined4 *)(param_1 + 0x13c4) = 0;
    uVar11 = 0x3f860a92;
    uVar3 = *(undefined4 *)(param_1 + 0x94);
    uVar2 = FUN_00ac45b0(uVar10,uVar3,0x3f860a92,0x40800000);
    uVar3 = lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4
                      (uVar2,uVar10,uVar3,uVar11,uVar12);
    *(undefined4 *)(param_1 + 0x13c4) = uVar3;
    *(undefined4 *)(param_1 + 0x13c8) = 0;
    if ((*(int *)(param_1 + 0xa84) != 0) &&
       ((fVar9 = (float10)FUN_00ddba30(*(float *)(*(int *)(param_1 + 0xa84) + 0x94) -
                                       *(float *)(param_1 + 0x94)), (float10)2.3561945 < fVar9 ||
        (fVar9 < (float10)-2.3561945)))) {
      *(undefined4 *)(param_1 + 0x13c8) = 1;
    }
    fVar1 = *(float *)(param_1 + 0x15b4);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0x15b4) = *(float *)(param_1 + 0x15b4) - 1.0;
    }
    if ((*(int *)(param_1 + 0x618) == 0xa000e) && (*(int *)(param_1 + 0xa88) != 0)) {
      uVar3 = FUN_00a7c8a0();
      iVar4 = FUN_00412580(uVar3);
      if (0.0 < *(float *)(iVar4 + 0xbb4)) {
        *(undefined2 *)(param_1 + 0x81c) = 1;
        *(undefined4 *)(param_1 + 0x820) = 4;
      }
    }
    BehaviorEmBase::vf4C();
    if (*(int *)(param_1 + 0x618) == 0xa0015) {
      *(undefined2 *)(param_1 + 0x824) = 3;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
    iVar4 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3fc90fdb
                         ,0x41200000,0);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xf4c) = 0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0xf4c) + *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xf4c) = fVar1;
      if (5.0 < fVar1) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
    }
    FUN_00a7c950();
    iVar4 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3fc90fdb
                         ,0x40200000,1);
    if ((iVar4 != 0) ||
       (iVar4 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),
                             0x40490fdb,0x3fc00000,1), iVar4 != 0)) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    uVar3 = FUN_00c49880(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xf5c),2,0);
    *(undefined4 *)(param_1 + 0xf64) = uVar3;
    FUN_00a7c950();
    if ((((*(uint *)(param_1 + 0xdd8) & 0x80000) != 0) && (iVar4 = FUN_00b2ed90(), iVar4 == 0)) &&
       ((iVar4 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),
                              0x3fdf66f3,0x40200000,4), iVar4 != 0 ||
        (iVar4 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),
                              0x3f860a92,0x40a00000,4), iVar4 != 0)))) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    *(undefined4 *)(param_1 + 0x1b68) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_004066f0();
      local_1ac = 0x7f7fffee;
      local_1a0 = local_190;
      local_1b0 = hkpAllCdPointCollector::vftable;
      local_198 = 0x80000008;
      local_19c = 0;
      hkpCdPointCollector::hkpCdPointCollector_13(param_1 + 0x50,0,1,&local_1b0);
      if ((0 < local_19c) && (FUN_0112bcf0(), 0 < local_19c)) {
        iVar4 = 0;
        puVar7 = local_1a0;
        do {
          if ((*(float *)(puVar7 + iVar4 + 4) <= *(float *)(param_1 + 0x44) + 0.5) ||
             (0.25 <= *(float *)(puVar7 + iVar4 + 0x14) * *(float *)(puVar7 + iVar4 + 0x14))) {
            iVar5 = *(int *)(puVar7 + iVar4 + 0x28);
            if ((*(char *)(iVar5 + 0x18) == '\x01') &&
               (iVar5 = *(char *)(iVar5 + 0x10) + iVar5, iVar5 != 0)) {
              FUN_00910a40(iVar5);
              uVar3 = local_1f4;
              goto LAB_00b6076b;
            }
          }
          else {
            iVar5 = *(int *)(puVar7 + iVar4 + 0x28);
            if ((*(char *)(iVar5 + 0x18) == '\x01') &&
               (iVar5 = *(char *)(iVar5 + 0x10) + iVar5, iVar5 != 0)) {
              FUN_00910a40(iVar5);
              uVar3 = local_1f8;
LAB_00b6076b:
              uVar6 = FUN_00917cd0(uVar3);
              puVar7 = local_1a0;
              if ((uVar6 & 0x30000000) != 0) {
                *(undefined4 *)(param_1 + 0x1b68) = 1;
              }
            }
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar8 < local_19c);
      }
      hkpCdPointCollector::hkpCdPointCollector_4();
      FUN_00406760();
    }
    iVar8 = FUN_00ac4770();
    if (iVar8 == 0) {
      FUN_00b5f130();
    }
    FUN_00b5f290();
    *(float *)(param_1 + 0x50) =
         *(float *)(param_1 + 0x15a0) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x58) =
         *(float *)(param_1 + 0x15a8) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x58);
    fVar9 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x15a0) = (float)((float10)*(float *)(param_1 + 0x15a0) * fVar9);
    *(float *)(param_1 + 0x15a4) = (float)((float10)*(float *)(param_1 + 0x15a4) * fVar9);
    *(float *)(param_1 + 0x15a8) = (float)((float10)*(float *)(param_1 + 0x15a8) * fVar9);
    *(float *)(param_1 + 0x15ac) = (float)(fVar9 * (float10)*(float *)(param_1 + 0x15ac));
    FUN_00b46290();
    FUN_00b462e0();
    FUN_00b46340();
    FUN_00b2f0f0();
    if ((*(int *)(param_1 + 0x1b68) != 0) && (*(int *)(param_1 + 0x1b6c) != 0)) {
      local_1d0 = *(undefined4 *)(param_1 + 0x50);
      local_1cc = *(undefined4 *)(param_1 + 0x54);
      local_1c8 = *(undefined4 *)(param_1 + 0x58);
      local_1c4 = *(undefined4 *)(param_1 + 0x5c);
      local_1e0 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x900);
      local_1dc = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x904);
      local_1d8 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x908);
      local_1d4 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x90c);
      iVar8 = hkpCdPointCollector::hkpCdPointCollector_14(&local_1e0,&local_1d0,1,0,0x3c23d70a);
      if (iVar8 == 0) {
        local_1c0 = 0;
        local_1bc = 0xbf000000;
        local_1b8 = 0;
        local_1f0 = *(undefined4 *)(param_1 + 0x50);
        local_1ec = *(undefined4 *)(param_1 + 0x54);
        local_1e8 = *(undefined4 *)(param_1 + 0x58);
        local_1e4 = *(undefined4 *)(param_1 + 0x5c);
        iVar8 = hkpCdPointCollector::hkpCdPointCollector_14(&local_1c0,&local_1f0,1,0,0x3c23d70a);
        if (iVar8 != 0) {
          *(undefined4 *)(param_1 + 0x54) = local_1ec;
          *(undefined4 *)(*(int *)(param_1 + 0x764) + 0x124) = 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1b6c) = 0;
  }
  return;
}

