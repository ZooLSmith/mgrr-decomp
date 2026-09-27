// src/enemy/em8010/Em8010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00617100..00ABA2E0, 443 functions

#include "types.h"

// 00617100  Em8010::vfFC  size=30  [class]
void __fastcall Em8010::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  *(undefined4 *)(param_1 + 0x1b64) = 0xffffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  return;
}

// 00617120  Em8010::vf100  size=59  [class]
void __fastcall Em8010::vf100(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf100();
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfeffffff;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
    }
  }
  return;
}

// 00617160  Em8010::vf104  size=66  [class]
void __fastcall Em8010::vf104(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  Bh0064::vf104();
  uVar1 = FUN_00e678d0(2,0,0xffffffff);
  iVar2 = FUN_00e7a5f0(uVar1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x31c))();
  }
  param_1[0x5d7] = 1;
  return;
}

// 006171B0  Em8010::vf10C  size=35  [class]
undefined4 Em8010::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0x30030) && (param_1 != 0x30070)) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 006171E0  Em8010::vf1D0  size=3  [class]
void Em8010::vf1D0(void)

{
  return;
}

// 006171F0  Em8010::vf158  size=5  [class]
undefined4 Em8010::vf158(void)

{
  return 0;
}

// 00617200  Em8010::vf184  size=6  [class]
undefined4 Em8010::vf184(void)

{
  return 0xffffffff;
}

// 00617210  Em8010::vf188  size=3  [class]
void Em8010::vf188(void)

{
  return;
}

// 00617250  FUN_00617250  size=176  [between]
void __fastcall FUN_00617250(int *param_1)

{
  param_1[0x3a9] = param_1[0x3a9] | 0x800000;
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a4e),0,0x3e99999a,0x3f800000,0,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_006172bb;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_006172bb:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00617320  FUN_00617320  size=341  [between]
void __fastcall FUN_00617320(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  int local_8;
  undefined2 local_4;
  
  local_8 = *(int *)((int)param_1 + 0x1a5a);
  local_4 = *(undefined2 *)((int)param_1 + 0x1a5e);
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    iVar2 = (int)*(short *)((int)&local_8 + ((int)(short)param_1[0x2ad] % 3) * 2);
    if (param_1[0x52b] == 2) {
      iVar2 = 0x4d;
    }
    if (param_1[0x52b] == 3) {
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
  else if (param_1[0x187] != 1) goto LAB_0061743e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0061743e:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00617480  FUN_00617480  size=198  [between]
void __fastcall FUN_00617480(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1b6c) != 0) {
    iVar2 = FUN_00a12210((int)*(short *)(param_1 + 0x1b70));
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
    *(float *)(param_1 + 0x1660) =
         (local_28 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 00617550  FUN_00617550  size=290  [between]
void __fastcall FUN_00617550(int *param_1)

{
  int iVar1;
  
  param_1[0x5d7] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x44f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x6db] != 0) {
      FUN_00a8e880(param_1[0x6db] + 0x40);
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

// 00617690  FUN_00617690  size=198  [between]
void __fastcall FUN_00617690(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1b6c) != 0) {
    iVar2 = FUN_00a12210((int)*(short *)(param_1 + 0x1b70));
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
    *(float *)(param_1 + 0x1660) =
         (local_28 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 00617760  FUN_00617760  size=474  [between]
/* WARNING: Removing unreachable block (ram,0x006177e2) */
/* WARNING: Removing unreachable block (ram,0x0061781e) */

void __fastcall FUN_00617760(int param_1)

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
    *(undefined4 *)(param_1 + 0x1470) = 1;
    uVar1 = FUN_00dde2a0(0,100);
    uVar2 = local_20[uVar1 & 3];
    if ((*(uint *)(param_1 + 0xea8) & 0x80000000) != 0) {
      uVar2 = 0x23;
    }
    if (*(int *)(param_1 + 0x14ac) == 2) {
      uVar1 = FUN_00dde2a0(0,100);
      uVar2 = local_20[(uVar1 & 3) + 4];
      if ((*(uint *)(param_1 + 0xea8) & 0x80000000) != 0) {
        uVar2 = 0x85;
      }
    }
    if ((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) {
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
    if (*(int *)(param_1 + 0x14ac) == 2) {
      uVar2 = 0x2e5;
    }
    if ((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) {
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

// 00617950  FUN_00617950  size=685  [between]
void __fastcall FUN_00617950(int param_1)

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
    if (*(int *)(param_1 + 0x14ac) == 2) {
      iVar4 = 0x30;
    }
    FUN_00aa4080(iVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1810) = 0;
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
    if ((*(int *)(param_1 + 0x14ac) != 2) || (0.0 < *(float *)(param_1 + 0x924))) {
LAB_00617ba0:
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
    goto LAB_00617ba0;
  }
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x924)) {
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 00617C20  FUN_00617c20  size=193  [between]
void __fastcall FUN_00617c20(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    fVar2 = (float10)FUN_00dde300(0,0x41f00000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)(float)(fVar2 + (float10)90.0);
    param_1[0x249] = 0x40400000;
  }
  else if (param_1[0x187] != 1) goto LAB_00617cbe;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00617cbe:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00617D00  FUN_00617d00  size=349  [between]
void __fastcall FUN_00617d00(int *param_1)

{
  float fVar1;
  short sVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    sVar2 = *(short *)((int)param_1 + 0x1a6a);
    FUN_00aa4080((int)sVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    fVar3 = (float10)FUN_00dde300(0,0x3f000000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)(float)(fVar3 * (float10)60.0 + (float10)90.0);
    param_1[0x249] = 0x40400000;
    if (((param_1[0x3aa] & 0x2000U) != 0) && (sVar2 == 0x481)) {
      FUN_00a92f90();
      FUN_00e36b50(0,1,0);
    }
    param_1[0x3aa] = param_1[0x3aa] & 0xffffdfff;
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00617e3a;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00617e3a:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00617E80  FUN_00617e80  size=240  [between]
void __fastcall FUN_00617e80(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080((int)*(short *)(param_1 + 0x1a4c),0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
    sVar1 = FUN_00dde2d0(3,6);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x920) = (float)(int)sVar1 * 30.0 + 90.0;
    sVar1 = FUN_00dde2d0(1,3);
    *(undefined4 *)(param_1 + 0x1810) = 0;
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

// 00617F70  FUN_00617f70  size=380  [between]
void __fastcall FUN_00617f70(int *param_1)

{
  short sVar1;
  short sVar2;
  float10 fVar3;
  float fVar4;
  
  if (param_1[0x187] == 0) {
    sVar2 = *(short *)((int)param_1 + 0x1a4e);
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      sVar2 = (short)param_1[0x694];
    }
    else if (sVar1 == 2) {
      sVar2 = *(short *)((int)param_1 + 0x1a52);
    }
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)sVar2,0,0x3e99999a,0x3f800000,0,(float)fVar3,fVar4);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x604] = 0;
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00618099;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00618099:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 006180F0  FUN_006180f0  size=312  [between]
void __fastcall FUN_006180f0(int *param_1)

{
  short sVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_1[0x187] == 0) {
    fVar2 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar3 = (float)fVar2;
    fVar2 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)(short)param_1[0x696],0,0x3e99999a,0x3f800000,0,(float)fVar2,fVar3);
    sVar1 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
  }
  else if (param_1[0x187] != 1) goto LAB_006181d5;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar3 - (float)param_1[0x244]);
  if (fVar3 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_006181d5:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 006183C0  FUN_006183c0  size=23  [between]
void __fastcall FUN_006183c0(int *param_1)

{
  if ((param_1[0x3aa] & 0x2000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x006183d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00618400  FUN_00618400  size=231  [between]
void __fastcall FUN_00618400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_00618414_caseD_1;
  case 2:
    uVar2 = 0x5f0;
    if (*(int *)(param_1 + 0x940) != 0) {
      uVar2 = 0x5ec;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  uVar2 = 0x5ef;
  if (*(int *)(param_1 + 0x940) != 0) {
    uVar2 = 0x5eb;
  }
  FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_00618414_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00618500  FUN_00618500  size=138  [between]
bool __fastcall FUN_00618500(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((*(uint *)(param_1 + 0xea4) & 0x1000) != 0) {
    return false;
  }
  if ((*(uint *)(param_1 + 0xea4) & 0x2000) == 0) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x2000;
    uVar2 = FUN_00ac8660(0,0x5d);
    *(undefined4 *)(param_1 + 0x1b80) = uVar2;
    uVar2 = FUN_00ac8660(0,0x5e);
    sVar1 = FUN_00dde2d0(0,uVar2);
    *(int *)(param_1 + 0x1b80) = *(int *)(param_1 + 0x1b80) + (int)sVar1;
    *(undefined4 *)(param_1 + 0x1b84) = 1;
    return true;
  }
  *(int *)(param_1 + 0x1b84) = *(int *)(param_1 + 0x1b84) + 1;
  bVar3 = *(int *)(param_1 + 0x1b84) != *(int *)(param_1 + 0x1b80);
  if (!bVar3) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffdfff;
  }
  return bVar3;
}

// 006185E0  FUN_006185e0  size=73  [between]
undefined4 __fastcall FUN_006185e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
    *(undefined4 *)(param_1 + 0x1488) = 0;
    *(undefined4 *)(param_1 + 0x14ac) = 0;
    *(undefined4 *)(param_1 + 0x148c) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1490) = 1;
    return 1;
  }
  return 0;
}

// 00618640  FUN_00618640  size=222  [between]
void FUN_00618640(void)

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

// 00618720  Em8010::vf2C  size=63  [class]
void Em8010::vf2C(void)

{
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41100000,0);
  return;
}

// 006187E0  Em8010::vf110  size=438  [class]
void __thiscall Em8010::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40000;
    return;
  }
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfffbffff;
  return;
}

// 006189A0  Em8010::vf1C  size=206  [class]
void Em8010::vf1C(void)

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
                    /* WARNING: Could not recover jumptable at 0x00618a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x1c))();
      return;
    }
  }
  return;
}

// 00618A70  Em8010::vf20  size=206  [class]
void Em8010::vf20(void)

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
                    /* WARNING: Could not recover jumptable at 0x00618b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 00619830  Em8010::vf294  size=1  [class]
void Em8010::vf294(void)

{
  return;
}

// 00619840  Em8010::vf2AC  size=15  [class]
void __fastcall Em8010::vf2AC(int param_1)

{
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffbf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20;
  return;
}

// 00619850  Em8010::vf2B0  size=1  [class]
void Em8010::vf2B0(void)

{
  return;
}

// 00619860  Em8010::vf2B4  size=1  [class]
void Em8010::vf2B4(void)

{
  return;
}

// 00619870  Em8010::vf2B8  size=1  [class]
void Em8010::vf2B8(void)

{
  return;
}

// 00619880  Em8010::vf2BC  size=1  [class]
void Em8010::vf2BC(void)

{
  return;
}

// 00619890  Em8010::vf2C0  size=1  [class]
void Em8010::vf2C0(void)

{
  return;
}

// 006198A0  Em8010::vf2C4  size=1  [class]
void Em8010::vf2C4(void)

{
  return;
}

// 006198B0  Em8010::vf2C8  size=1  [class]
void Em8010::vf2C8(void)

{
  return;
}

// 006198C0  Em8010::vf2CC  size=1  [class]
void Em8010::vf2CC(void)

{
  return;
}

// 006198D0  Em8010::vf2D0  size=1  [class]
void Em8010::vf2D0(void)

{
  return;
}

// 0061BBE0  Em8010::thunk_vf1C0  size=5  [class]
void __thiscall Em8010::thunk_vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 0061BBF0  FUN_0061bbf0  size=45  [between]
void __thiscall FUN_0061bbf0(int param_1,float param_2)

{
  *(float *)(param_1 + 0x1158) = param_2 * 60.0;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(float *)(param_1 + 0x1158) = param_2 * 60.0 + 120.0;
    return;
  }
  return;
}

// 0061BC20  FUN_0061bc20  size=64  [between]
undefined4 __fastcall FUN_0061bc20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14b0);
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

// 0061BC60  FUN_0061bc60  size=87  [between]
undefined4 __thiscall FUN_0061bc60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == param_2)) &&
     (*(int *)(param_1 + 0x14b0) == param_3)) {
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

// 0061BCC0  FUN_0061bcc0  size=368  [between]
void __fastcall FUN_0061bcc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14ac);
  *(undefined4 *)(param_1 + 0x14ac) = *(undefined4 *)(param_1 + 0x14b0);
  *(undefined4 *)(param_1 + 0x14b0) = uVar1;
  FUN_00a81330();
  FUN_00a81330();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if ((*(int *)(param_1 + 0x14ac) == 6) || (*(int *)(param_1 + 0x14b0) == 6)) {
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
  *(undefined1 *)(param_1 + 0x1090) = 0;
  FUN_00eaa6e0(0x41200000,0);
  if (*(int *)(param_1 + 0x14ac) == 2) {
    uVar1 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x13a0) = uVar1;
    iVar2 = FUN_00ac8470();
    if (iVar2 != 0) {
      uVar1 = FUN_00ac8660(0,0x9c);
      *(undefined4 *)(param_1 + 0x13a0) = uVar1;
    }
  }
  else if (*(int *)(param_1 + 0x14ac) == 3) {
    *(undefined4 *)(param_1 + 0x13a4) = 1;
    *(undefined4 *)(param_1 + 0x13a0) = 1;
  }
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x71);
  *(float *)(param_1 + 0x1a80) = (float)(fVar4 * (float10)60.0);
  return;
}

// 0061BE30  FUN_0061be30  size=260  [between]
undefined4 FUN_0061be30(void)

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

// 0061BF40  FUN_0061bf40  size=153  [between]
void FUN_0061bf40(void)

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

// 0061BFE0  FUN_0061bfe0  size=549  [between]
void __thiscall FUN_0061bfe0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x1a4c) = 0x2450241;
    *(undefined4 *)(param_1 + 0x1a50) = 0x2470247;
    *(word **)(param_1 + 0x1a54) = &WORD_025d025a;
    *(word **)(param_1 + 0x1a58) = &WORD_024e0260;
    *(undefined4 *)(param_1 + 0x1a5c) = 0x250024f;
    *(undefined4 *)(param_1 + 0x1a60) = 0x2650264;
    *(undefined4 *)(param_1 + 0x1a64) = 0x2540253;
    *(undefined **)(param_1 + 0x1a68) = &DAT_02290255;
    *(undefined **)(param_1 + 0x1a6c) = &DAT_022e022c;
    *(undefined2 *)(param_1 + 0x1a70) = 0x263;
    *(undefined **)(param_1 + 0x1a72) = &DAT_01ea01f6;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x1a4c) = 0x4680454;
    *(undefined4 *)(param_1 + 0x1a50) = 0x4680468;
    *(undefined4 *)(param_1 + 0x1a54) = 0x470046c;
    *(undefined4 *)(param_1 + 0x1a58) = 0x4780474;
    *(undefined4 *)(param_1 + 0x1a5c) = 0x4780478;
    *(undefined4 *)(param_1 + 0x1a60) = 0x47c047b;
    *(undefined4 *)(param_1 + 0x1a6a) = 0x4810481;
    *(undefined4 *)(param_1 + 0x1a6e) = 0x47d0483;
    *(undefined4 *)(param_1 + 0x1a72) = 0x48c048c;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x1a4c) = 0x2930292;
    *(undefined4 *)(param_1 + 0x1a50) = 0x2930293;
    *(undefined4 *)(param_1 + 0x1a54) = 0x2980297;
    *(undefined4 *)(param_1 + 0x1a58) = 0x2940299;
    *(undefined4 *)(param_1 + 0x1a5c) = 0x2940294;
    *(undefined4 *)(param_1 + 0x1a60) = 0x2960295;
    *(undefined4 *)(param_1 + 0x1a64) = 0x29b029a;
    *(undefined4 *)(param_1 + 0x1a68) = 0x29e029c;
    *(undefined4 *)(param_1 + 0x1a6c) = 0x2c1029f;
    *(undefined4 *)(param_1 + 0x1a70) = 0x2b1029d;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x1a4c) = 0x5240521;
    *(undefined4 *)(param_1 + 0x1a50) = 0x5240524;
    *(undefined4 *)(param_1 + 0x1a54) = 0x5320531;
    *(undefined4 *)(param_1 + 0x1a58) = 0x5270533;
    *(undefined4 *)(param_1 + 0x1a5c) = 0x5270527;
    *(undefined4 *)(param_1 + 0x1a60) = 0x52e052d;
    *(undefined4 *)(param_1 + 0x1a64) = 0x52a0529;
    *(undefined4 *)(param_1 + 0x1a68) = 0x53f052b;
    *(undefined4 *)(param_1 + 0x1a6c) = 0x5410540;
    *(undefined4 *)(param_1 + 0x1a70) = 0x542052f;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x1a4c) = 0x26d0268;
    *(undefined4 *)(param_1 + 0x1a50) = 0x26d026d;
    *(undefined4 *)(param_1 + 0x1a54) = 0x2720271;
    *(undefined4 *)(param_1 + 0x1a58) = 0x26f0273;
    *(undefined4 *)(param_1 + 0x1a5c) = 0x26f026f;
    *(undefined4 *)(param_1 + 0x1a60) = 0x27a0279;
    *(undefined4 *)(param_1 + 0x1a64) = 0x2760275;
    *(undefined4 *)(param_1 + 0x1a68) = 0x2850277;
    *(undefined4 *)(param_1 + 0x1a6c) = 0x2880286;
    *(undefined2 *)(param_1 + 0x1a70) = 0x27b;
    *(undefined4 *)(param_1 + 0x1a72) = 0x2810289;
  }
  return;
}

// 0061C270  FUN_0061c270  size=46  [between]
uint __fastcall FUN_0061c270(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xea4);
  if ((((uVar1 & 0x800) == 0) && ((uVar1 & 0x400) == 0)) && ((uVar1 & 0x200) == 0)) {
    return *(uint *)(param_1 + 0xea8) >> 0x15 & 1;
  }
  return 1;
}

// 0061C2F0  Em8010::vf348  size=33  [class]
undefined4 __thiscall Em8010::vf348(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xea4) & 0x100) != 0) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf348(param_2);
  return uVar1;
}

// 0061C320  FUN_0061c320  size=132  [between]
undefined4 __fastcall FUN_0061c320(int param_1)

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
    *(undefined4 *)(param_1 + 0x1af0) = *(undefined4 *)(param_1 + 0x17a0);
    *(undefined4 *)(param_1 + 0x1af4) = *(undefined4 *)(param_1 + 0x17a4);
    *(undefined4 *)(param_1 + 0x1af8) = *(undefined4 *)(param_1 + 0x17a8);
    *(undefined4 *)(param_1 + 0x1afc) = *(undefined4 *)(param_1 + 0x17ac);
    *(float *)(param_1 + 0x1af4) = *(float *)(param_1 + 0x1af4) + 1.0;
  }
  return uVar2;
}

// 0061C3B0  FUN_0061c3b0  size=179  [between]
undefined4 __fastcall FUN_0061c3b0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x19f8) != 0) || (*(int *)(param_1 + 0x1a1c) != 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x764) != 0) && (iVar1 = FUN_008e2740(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00a8d3d0(8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1af0) = *(undefined4 *)(param_1 + 0x1a00);
    *(undefined4 *)(param_1 + 0x1af4) = *(undefined4 *)(param_1 + 0x1a04);
    *(undefined4 *)(param_1 + 0x1af8) = *(undefined4 *)(param_1 + 0x1a08);
    *(undefined4 *)(param_1 + 0x1afc) = *(undefined4 *)(param_1 + 0x1a0c);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1af0) = *(undefined4 *)(param_1 + 0x17a0);
  *(undefined4 *)(param_1 + 0x1af4) = *(undefined4 *)(param_1 + 0x17a4);
  *(undefined4 *)(param_1 + 0x1af8) = *(undefined4 *)(param_1 + 0x17a8);
  *(undefined4 *)(param_1 + 0x1afc) = *(undefined4 *)(param_1 + 0x17ac);
  return 1;
}

// 0061C470  FUN_0061c470  size=98  [between]
bool __fastcall FUN_0061c470(int param_1)

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
    *(undefined4 *)(param_1 + 0x1af0) = *(undefined4 *)(param_1 + 0x17a0);
    *(undefined4 *)(param_1 + 0x1af4) = *(undefined4 *)(param_1 + 0x17a4);
    *(undefined4 *)(param_1 + 0x1af8) = *(undefined4 *)(param_1 + 0x17a8);
    *(undefined4 *)(param_1 + 0x1afc) = *(undefined4 *)(param_1 + 0x17ac);
  }
  return iVar1 != 0;
}

// 0061C4E0  FUN_0061c4e0  size=45  [between]
bool __fastcall FUN_0061c4e0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x3a6] != 0x1e) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x274))();
      return iVar1 != 0;
    }
  }
  return false;
}

// 0061C560  FUN_0061c560  size=67  [between]
undefined4 __fastcall FUN_0061c560(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 0061C5B0  FUN_0061c5b0  size=66  [between]
undefined4 __thiscall FUN_0061c5b0(int param_1,float *param_2)

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

// 0061C600  FUN_0061c600  size=273  [between]
bool __fastcall FUN_0061c600(int param_1)

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

// 0061C720  FUN_0061c720  size=18  [between]
undefined4 __fastcall FUN_0061c720(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xd80) == 0) {
    return 0;
  }
  uVar1 = FUN_00a82d50();
  puVar3 = &DAT_01881f70;
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

// 0061C732  FUN_0061c732  size=83  [between]
undefined4 FUN_0061c732(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_00a82d50();
  puVar3 = &DAT_01881f70;
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

// 0061C7B0  Em8010::vf2FC  size=3  [class]
undefined4 Em8010::vf2FC(void)

{
  return 0;
}

// 0061C7C0  FUN_0061c7c0  size=584  [between]
void FUN_0061c7c0(float param_1)

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
  return;
}

// 0061CA10  FUN_0061ca10  size=56  [between]
void __fastcall FUN_0061ca10(int param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_00dde2a0(1,10);
  *(float *)(param_1 + 0x1bfc) = ((float)uVar1 * 0.1 + 5.0) * 60.0;
  return;
}

// 0061CA50  FUN_0061ca50  size=74  [between]
void __fastcall FUN_0061ca50(int *param_1)

{
  param_1[0x6f5] = 1;
  FUN_00ac48e0();
  FUN_00ac8e10(1);
  (**(code **)(*param_1 + 0x110))(1);
  param_1[0x404] = 0x43160000;
  (**(code **)(*param_1 + 0x358))(0x1cc,0);
  return;
}

// 0061CAA0  FUN_0061caa0  size=132  [between]
void __thiscall FUN_0061caa0(undefined4 param_1,int param_2)

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

// 0061CB70  FUN_0061cb70  size=22  [between]
void __fastcall FUN_0061cb70(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0061CB90  FUN_0061cb90  size=22  [between]
void __fastcall FUN_0061cb90(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0061CBB0  FUN_0061cbb0  size=22  [between]
void __fastcall FUN_0061cbb0(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0061CC40  FUN_0061cc40  size=22  [between]
void __fastcall FUN_0061cc40(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0061CCF0  FUN_0061ccf0  size=162  [between]
void __fastcall FUN_0061ccf0(int *param_1)

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
  param_1[0x606] = param_1[0x606] | 8;
  param_1[0x36a] = -1;
  param_1[0x36c] = -1;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x605] = 1;
                    /* WARNING: Could not recover jumptable at 0x0061cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0061CE10  FUN_0061ce10  size=87  [between]
void __fastcall FUN_0061ce10(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x800000;
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

// 0061CE80  FUN_0061ce80  size=138  [between]
void __fastcall FUN_0061ce80(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x4ec;
    if (param_1[0x3a6] == 0x12) {
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
                    /* WARNING: Could not recover jumptable at 0x0061cf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0061CF20  FUN_0061cf20  size=123  [between]
void __fastcall FUN_0061cf20(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0061cf99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0061CFE0  FUN_0061cfe0  size=42  [between]
uint FUN_0061cfe0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35540;
  (**(code **)(*param_1 + 4))(&DAT_01b35540);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0061D040  FUN_0061d040  size=42  [between]
uint FUN_0061d040(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35548;
  (**(code **)(*param_1 + 4))(&DAT_01b35548);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0061D070  FUN_0061d070  size=42  [between]
uint FUN_0061d070(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b3554c;
  (**(code **)(*param_1 + 4))(&DAT_01b3554c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0061D1A0  Em8010::vf30  size=228  [class]
void __fastcall Em8010::vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  BehaviorEmBase::vf30();
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x4000000;
  *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b90) = 0;
  *(undefined4 *)(param_1 + 0x1b94) = 0;
  *(undefined4 *)(param_1 + 0x1b98) = 0;
  *(undefined4 *)(param_1 + 0x1b9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ba0) = 0;
  *(undefined4 *)(param_1 + 0x1ba4) = 0;
  *(undefined4 *)(param_1 + 0x1ba8) = 0;
  if (((*(uint *)(param_1 + 0xeac) & 0x2000) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b356c0;
      (**(code **)(*piVar2 + 4))(&DAT_01b356c0);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_006e0c20();
      }
    }
  }
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41100000,0);
  FUN_00a87b80();
  return;
}

// 0061D290  Em8010::vf14C  size=133  [class]
bool __thiscall Em8010::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < param_1[0x21c]) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if ((iVar1 == 0) && (param_1[0x605] != 1)) {
      if (param_2 == 0x24) {
        iVar1 = FUN_0061c270();
        return iVar1 == 0;
      }
      if ((((param_2 != 0x28) && (param_2 != 0x29)) && (param_2 != 0x25)) && (param_2 != 0x26)) {
        return param_2 == 0x27;
      }
      return true;
    }
  }
  return false;
}

// 0061D320  FUN_0061d320  size=445  [between]
void __fastcall FUN_0061d320(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  float10 fVar2;
  int iStack_14;
  float afStack_10 [2];
  float fStack_8;
  
  param_1[0x3a9] = param_1[0x3a9] | 0x800000;
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
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a5a),0,0x3e088889,0x3f800000,0,0xbf800000,
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
    param_1[0x608] = param_1[0x10];
    param_1[0x609] = param_1[0x11];
    param_1[0x60a] = param_1[0x12];
    param_1[0x60b] = param_1[0x13];
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 0061D4E0  FUN_0061d4e0  size=648  [between]
void __fastcall FUN_0061d4e0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x51c] = 1;
    FUN_00aa4080(0x1fe,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x250] = 0;
    param_1[0x604] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x1ff,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0061d5cd;
  case 3:
LAB_0061d5cd:
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 9 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_0061d4fa_default;
  case 4:
    FUN_00aa4080(0x200,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0061d63f;
  case 5:
LAB_0061d63f:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto LAB_0061d579;
  default:
    goto switchD_0061d4fa_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_0061d579:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0061d4fa_default:
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
      if (param_1[0x250] != 2) goto LAB_0061d735;
      param_1[0x23c] = (int)((float)param_1[0x23c] + 0.34906584);
      param_1[0x23d] = (int)((float)param_1[0x23d] + 0.34906584);
      param_1[0x23e] = (int)((float)param_1[0x23e] + 0.34906584);
      fVar1 = (float)param_1[0x23f] + 0.34906584;
    }
    param_1[0x23f] = (int)fVar1;
  }
LAB_0061d735:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 0061D780  FUN_0061d780  size=119  [between]
void __fastcall FUN_0061d780(int param_1)

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

// 0061D800  FUN_0061d800  size=634  [between]
void __fastcall FUN_0061d800(int *param_1)

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
  
  param_1[0x3a9] = param_1[0x3a9] | 2;
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
    param_1[0x14] = (int)(((float)param_1[0x5e8] - local_20) * 0.1 + (float)param_1[0x14]);
    param_1[0x16] = (int)(((float)param_1[0x5ea] - local_18) * 0.1 + (float)param_1[0x16]);
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

// 0061DAA0  FUN_0061daa0  size=643  [between]
void __fastcall FUN_0061daa0(int *param_1)

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
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
    (**(code **)(*param_1 + 0x220))(0x41700000);
    uStack_24 = 0xbfc00000;
    local_20 = 0.0;
    local_1c = 0.8;
    D3DXVec3TransformNormal(param_1 + 0x5fc,&uStack_24,param_1 + 4);
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0061dc04;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0,0x3f800000);
LAB_0061dc04:
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 != 0) && (iVar1 = param_1[0x2a1], iVar1 != 0)) {
    local_20 = *(float *)(iVar1 + 0x40) + (float)param_1[0x5fc];
    local_1c = (float)param_1[0x5fd] + *(float *)(iVar1 + 0x44);
    local_18 = (float)param_1[0x5fe] + *(float *)(iVar1 + 0x48);
    local_14 = (float)param_1[0x5ff] + *(float *)(iVar1 + 0x4c);
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

// 0061DD30  FUN_0061dd30  size=218  [between]
void __fastcall FUN_0061dd30(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(500,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0061ddb4;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0061ddb4:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3d567750,0);
  }
  return;
}

// 0061DE10  Em8010::vf1A0  size=234  [class]
undefined4 __thiscall Em8010::vf1A0(int *param_1,int *param_2,int param_3)

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

// 0061DF00  Em8010::vf360  size=181  [class]
void __fastcall Em8010::vf360(int param_1)

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
    if (*(int *)(iVar1 + 0x24) == 0x38070) {
      FUN_00e03080(iVar1,4);
      return;
    }
    if (*(int *)(iVar1 + 0x24) == 0x38080) {
      FUN_00e03080(iVar1,5);
      return;
    }
    FUN_00e03080(iVar1,1);
  }
  return;
}

// 0061DFC0  FUN_0061dfc0  size=121  [between]
void __fastcall FUN_0061dfc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
  }
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1090) = 0;
  FUN_00eaa6e0(0x41200000,0);
  FUN_00eaa6e0(0x3f800000,0);
  *(undefined4 *)(param_1 + 0x1810) = 0;
  return;
}

// 0061E040  Em8010::setRayCast  size=232  [class]
void __thiscall Em8010::setRayCast(int param_1,undefined4 *param_2)

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
    FUN_00dd5650(&DAT_01646220);
    return;
  }
  uVar1 = *(undefined4 *)(iVar5 + 0x40);
  uVar2 = *(undefined4 *)(iVar5 + 0x44);
  uVar3 = *(undefined4 *)(iVar5 + 0x48);
  uVar4 = *(undefined4 *)(iVar5 + 0x4c);
  iVar5 = FUN_009f8b40();
  local_2c = iVar5 << 0x10 | 7;
  local_60[0] = param_1 + 0x14a0;
  local_40 = *param_2;
  local_60[1] = 0;
  local_28 = 0x3ff001b;
  local_3c = param_2[1];
  local_24 = 0;
  local_20 = 0;
  local_38 = param_2[2];
  local_1c = "Em8010MoveArea";
  local_34 = param_2[3];
  local_30 = 0x3f000000;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar3;
  local_44 = uVar4;
  FUN_0090fb00(local_60);
  return;
}

// 0061E130  FUN_0061e130  size=29  [callgraph]
bool __fastcall FUN_0061e130(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    bVar1 = *(int *)(param_1 + 0x1814) != 1;
  }
  return bVar1;
}

// 0061E150  FUN_0061e150  size=140  [callgraph]
undefined1 __fastcall FUN_0061e150(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0xbe8);
  fVar1 = *(float *)(param_1 + 0x1a8c);
  iVar3 = *(int *)(param_1 + 0x19c0);
  uVar4 = DAT_01bea060 & 0x2000000;
  uVar5 = DAT_01bea060 & 0x40000000;
  iVar6 = FUN_00ac8410();
  if ((*(int *)(param_1 + 0x1a3c) == 0) &&
     (iVar6 == 0 && (uVar5 == 0 && (uVar4 == 0 && (iVar3 != 0 && (fVar1 <= 0.0 && iVar2 == 0)))))) {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x1090) = 0;
  FUN_00eaa6e0(0x41200000,0);
  return 0;
}

// 0061E230  FUN_0061e230  size=97  [callgraph]
void __fastcall FUN_0061e230(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9c38;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_00ac8a80(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x13ac) = 0x44160000;
  return;
}

// 0061E640  Em8010::vf29C  size=89  [class]
void __fastcall Em8010::vf29C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffdf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40;
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xfffeffff;
  if (((*(uint *)(param_1 + 0xeac) & 0x3000) == 0) &&
     ((*(uint *)(param_1 + 0xea8) & 0x20000000) == 0)) {
    iVar1 = FUN_00a85630();
    if (iVar1 != 5) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 8) {
        FUN_00a8cab0();
        return;
      }
    }
  }
  return;
}

// 0061E6A0  Em8010::vf2D4  size=160  [class]
bool __fastcall Em8010::vf2D4(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x3a6] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) && (param_1[0x139] != 0)) {
    return false;
  }
  if ((((param_1[0x3a9] & 0x4000U) == 0) &&
      (((((param_1[0x3a9] & 0xe00U) == 0 && ((param_1[0x3aa] & 0x200000U) == 0)) ||
        (param_1[0x605] == 1)) && ((param_1[0x186] != 0x100005 && (param_1[0x6f5] == 0)))))) &&
     ((param_1[0x186] != 0xb000a &&
      ((iVar1 = FUN_00a85630(), iVar1 != 2 && (iVar1 = FUN_00a8c760(0x1e), iVar1 == 0)))))) {
    return param_1[0x294] != 0;
  }
  return false;
}

// 0061F770  FUN_0061f770  size=62  [callgraph]
uint FUN_0061f770(void)

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
    puVar4 = &DAT_01b35548;
    (**(code **)(*piVar3 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 0061F840  FUN_0061f840  size=62  [callgraph]
uint FUN_0061f840(void)

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
    puVar4 = &DAT_01b35550;
    (**(code **)(*piVar3 + 4))(&DAT_01b35550);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 0061F880  FUN_0061f880  size=270  [callgraph]
void FUN_0061f880(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em8010Shield",0x38090,0);
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
      puVar4 = &DAT_01b3554c;
      (**(code **)(*piVar3 + 4))(&DAT_01b3554c);
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

// 0061F990  FUN_0061f990  size=79  [callgraph]
uint FUN_0061f990(void)

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
  puVar3 = &DAT_01b3554c;
  (**(code **)(*piVar2 + 4))(&DAT_01b3554c);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 0061FA20  FUN_0061fa20  size=441  [callgraph]
bool __fastcall FUN_0061fa20(int param_1)

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
  iVar2 = FUN_00907640(param_1 + 0x19bc,0,0);
  if (*(int *)(param_1 + 0xa84) == 0) {
    return false;
  }
  FUN_00a8d230(&local_70);
  local_50 = *(float *)(iVar1 + 0x40);
  local_8c = *(float *)(iVar1 + 0x44);
  local_48 = *(float *)(iVar1 + 0x48);
  local_44 = *(float *)(iVar1 + 0x4c);
  if (*(int *)(param_1 + 0x14ac) == 2) {
    local_8c = local_8c + 0.6;
  }
  if (*(int *)(param_1 + 0x14ac) == 3) {
    local_8c = local_8c + 0.6;
  }
  iVar1 = FUN_009f8b40();
  local_60[0] = param_1 + 0x19bc;
  local_4c = local_8c;
  local_2c = iVar1 << 0x10 | 7;
  local_60[1] = 0xf;
  local_28 = 0x3ff001b;
  local_24 = 8;
  local_20 = 0;
  local_1c = "Em8010View";
  local_30 = 0x3e800000;
  local_40 = local_70 - local_50;
  local_3c = local_6c - local_8c;
  local_38 = local_68 - local_48;
  local_34 = local_64 - local_44;
  FUN_0090fb00(local_60);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x19d0) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x19d4) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x19d8) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x19dc) = *(undefined4 *)(iVar1 + 0x4c);
  }
  return iVar2 == 0;
}

// 0061FBE0  FUN_0061fbe0  size=274  [callgraph]
undefined4 __fastcall FUN_0061fbe0(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x19ec,0,0,0,0,0,0,0);
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
  local_20 = "Em8010UsePath";
  local_60[0] = param_1 + 0x19ec;
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

// 0061FD00  FUN_0061fd00  size=270  [callgraph]
undefined4 __fastcall FUN_0061fd00(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0x19e0,0,0,0,0,0,0,0);
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
  local_20 = "Em8010Obstacle";
  local_60[0] = param_1 + 0x19e0;
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

// 0061FE10  FUN_0061fe10  size=575  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0061fe80) */

void __thiscall FUN_0061fe10(int param_1,float *param_2)

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
  
  *(undefined4 *)(param_1 + 0x19e8) = 0;
  local_74 = FUN_00907640(param_1 + 0x1a10,&local_a4,0);
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
        *(undefined4 *)(param_1 + 0x19e8) = 1;
      }
    }
    if ((iVar4 != 0) && (iVar2 = FUN_008f7780(iVar4), iVar2 != 0)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x4b0);
      iVar2 = FUN_009f9460(uVar1);
      if ((iVar2 != 0) ||
         ((iVar2 = FUN_009f94a0(uVar1), iVar2 != 0 || (iVar2 = FUN_009f9480(uVar1), iVar2 != 0)))) {
        *(undefined4 *)(param_1 + 0x19e8) = 1;
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
  local_70[0] = param_1 + 0x1a10;
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
  local_2c = "Em8010NextPointView";
  local_48 = local_88;
  local_44 = local_84;
  local_40 = 0x3e4ccccd;
  FUN_0090fb00(local_70);
  iVar2 = FUN_00a8d3d0(8);
  if ((iVar2 == 0) && (local_74 != 0)) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  return;
}

// 00620050  FUN_00620050  size=327  [callgraph]
int __fastcall FUN_00620050(int param_1)

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
  
  iVar4 = FUN_00907640(param_1 + 0x19f4,0,param_1 + 0x1a00);
  if (iVar4 != 0) {
    local_74 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1a04);
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
  pcStack_28 = "Em8010FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e99999a;
  local_6c[0] = param_1 + 0x19f4;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + local_74;
  FUN_0090fb00(local_6c);
  return iVar4;
}

// 006201A0  FUN_006201a0  size=672  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0062021e) */

undefined4 __thiscall FUN_006201a0(int param_1,float *param_2)

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
  local_88 = param_1 + 0x1a14;
  *(undefined4 *)(param_1 + 0x1a20) = 0;
  *(undefined4 *)(param_1 + 0x1a24) = 0;
  *(undefined4 *)(param_1 + 0x1a28) = 0;
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
         (*(undefined4 *)(param_1 + 0x1a20) = 1, iVar4 == 0x12040)) {
        *(undefined4 *)(param_1 + 0x1a24) = 1;
      }
      iVar5 = FUN_009f9460(iVar4);
      if (((iVar5 != 0) || (iVar5 = FUN_009f94a0(iVar4), iVar5 != 0)) ||
         (iVar4 = FUN_009f9480(iVar4), iVar4 != 0)) {
        *(undefined4 *)(param_1 + 0x1a28) = 1;
      }
    }
    if ((iVar6 != 0) && (iVar6 = FUN_008f7780(iVar6), iVar6 != 0)) {
      iVar6 = *(int *)(iVar6 + 0x4b0);
      iVar4 = FUN_009f93b0(iVar6);
      if (((iVar4 != 0) || (iVar4 = FUN_009f9350(iVar6), iVar4 != 0)) &&
         (*(undefined4 *)(param_1 + 0x1a20) = 1, iVar6 == 0x12040)) {
        *(undefined4 *)(param_1 + 0x1a24) = 1;
      }
      iVar4 = FUN_009f9460(iVar6);
      if (((iVar4 != 0) || (iVar4 = FUN_009f94a0(iVar6), iVar4 != 0)) ||
         (iVar6 = FUN_009f9480(iVar6), iVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x1a28) = 1;
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
  pcStack_34 = "Em8010WallCheck";
  uStack_50 = local_80;
  uStack_4c = local_7c;
  uStack_48 = 0x3dcccccd;
  local_68 = fVar1 + unaff_EBX;
  fStack_64 = fVar2 + fStack_94;
  fStack_60 = fVar3 + fStack_90;
  FUN_0090fb00(&local_78);
  return unaff_ESI;
}

// 00620440  FUN_00620440  size=615  [callgraph]
/* WARNING: Removing unreachable block (ram,0x006204c0) */

undefined4 __thiscall FUN_00620440(int param_1,float *param_2,float *param_3)

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
  local_74 = param_1 + 0x1a38;
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
  local_1c = "Em8010FireLineCheck";
  local_34 = local_64;
  local_30 = 0x3dcccccd;
  FUN_0090fb00(local_60);
  return uVar3;
}

// 006206B0  FUN_006206b0  size=535  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00620720) */

undefined4 __thiscall FUN_006206b0(int param_1,float *param_2,undefined4 param_3)

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
  
  local_68 = (float)(param_1 + 0x1a2c);
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
  pcStack_34 = "Em8010PhotoFrameRouteWallCheck";
  uStack_4c = uStack_8c;
  uStack_48 = param_3;
  local_68 = fVar8;
  local_64 = fVar9;
  fStack_60 = fVar1 + unaff_EDI;
  fStack_5c = fVar2 + unaff_ESI;
  FUN_0090fb00(&local_78);
  return local_a0;
}

// 006208D0  FUN_006208d0  size=158  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0062092a) */

undefined4 FUN_006208d0(undefined4 param_1)

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

// 00620970  FUN_00620970  size=259  [callgraph]
void __thiscall FUN_00620970(int *param_1,int param_2,float param_3)

{
  float10 fVar1;
  
  if (((param_1[0x139] != 0) && (param_1[0x5a4] == 0)) && (param_1[0x6f5] == 0)) {
    if (((param_1[0x3a9] & 0x10000000U) != 0) && (param_2 == 0)) {
      (**(code **)(*param_1 + 0x358))(2,param_1 + 0x464);
      FUN_00e5e0c0("em0010_se_dmg_spark_death",param_1,0xffffffff,0);
    }
    if ((param_1[0x3a9] & 0x100U) == 0) {
      if ((float10)param_3 <= (float10)0) {
        fVar1 = (float10)FUN_00dde300((float)(float10)0,0x42f00000);
        fVar1 = fVar1 + (float10)240.0;
      }
      else {
        fVar1 = (float10)param_3 * (float10)60.0;
      }
      param_1[0x5a3] = (int)(float)fVar1;
      param_1[0x5a4] = 1;
    }
    FUN_0061dfc0();
    FUN_00eaa6e0(0x41100000,0);
    if (param_1[0x606] == 0) {
      (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x490);
    }
  }
  return;
}

// 00620A80  FUN_00620a80  size=277  [callgraph]
void __fastcall FUN_00620a80(int *param_1)

{
  int unaff_ESI;
  char *pcVar1;
  
  param_1[0x139] = 1;
  param_1[0x5d7] = 1;
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41200000,0);
  if ((param_1[0x3a9] & 0x100U) != 0) {
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
  FUN_0061bf40();
  return;
}

// 00620BA0  Em8010::vf368  size=291  [class]
undefined1 __fastcall Em8010::vf368(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar2 = 0;
  if ((iVar1 == 0x28140) &&
     (uVar2 = (*(uint *)(param_1 + 0xea8) & 0x4000) != 0,
     (*(uint *)(param_1 + 0xea4) & 0x4000000) != 0)) {
    uVar2 = 2;
  }
  if (iVar1 == 0x28142) {
    uVar2 = 3;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 4;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 5;
    }
  }
  if (iVar1 == 0x28144) {
    uVar2 = 6;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 7;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 8;
    }
  }
  if (iVar1 == 0x28150) {
    uVar2 = 0xc;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 0xd;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0xe;
    }
  }
  if (iVar1 == 0x28152) {
    uVar2 = 0xf;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 0x10;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0x11;
    }
  }
  if (iVar1 == 0x28160) {
    uVar2 = 9;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 10;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0xb;
    }
  }
  if (iVar1 == 0x28170) {
    uVar2 = 0x12;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 0x13;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0x14;
    }
  }
  return uVar2;
}

// 00620CD0  FUN_00620cd0  size=359  [between]
undefined4 __fastcall FUN_00620cd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((param_1[0x3a6] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) {
    return 0;
  }
  if ((((((param_1[0x3a9] & 0xe00U) == 0) && ((param_1[0x3aa] & 0x200000U) == 0)) &&
       (((*(byte *)(param_1 + 0x3ab) & 0x80) == 0 &&
        ((param_1[0x139] == 0 && (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)))))) &&
      (0 < param_1[0x21c])) &&
     ((param_1[0x187] != 0 &&
      ((((iVar1 = FUN_00a82e80(), iVar1 == 0 || ((param_1[0x3aa] & 0x2000000U) != 0)) &&
        (iVar1 = FUN_00a8c760(0x3f), iVar1 == 0)) && (param_1[0x186] != 0x100001)))))) {
    if (((param_1[0x3aa] & 0x80000U) != 0) && (iVar1 = FUN_00a82e70(), iVar1 != 0)) {
      return 0;
    }
    piVar2 = (int *)FUN_00a9b930();
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
    FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40400000,0x3fc00000,0x40490fdb,0x3f490fdb,
                 0x1001,10);
    return 1;
  }
  return 0;
}

// 00620E40  Em8010::vf13C  size=133  [class]
bool __fastcall Em8010::vf13C(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x3a6] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) {
    return false;
  }
  if ((((((param_1[0x3a9] & 0xe00U) == 0) && ((param_1[0x3aa] & 0x200000U) == 0)) &&
       (((*(byte *)(param_1 + 0x3ab) & 0x80) == 0 &&
        ((param_1[0x139] == 0 && (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)))))) &&
      (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
    iVar1 = FUN_00a82e80();
    return iVar1 == 0;
  }
  return false;
}

// 00620ED0  FUN_00620ed0  size=233  [between]
undefined4 __fastcall FUN_00620ed0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((param_1[0x3a6] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) {
    return 0;
  }
  if ((((param_1[0x605] != 1) && (param_1[0x139] == 0)) &&
      (((DAT_01bea060 & 0x2000000) == 0 &&
       ((iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0 && (0 < param_1[0x21c])))))) &&
     (param_1[0x186] == 0xa0015)) {
    piVar2 = (int *)FUN_00a9b930();
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
    FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40200000,0x3fc00000,2,8);
    return 1;
  }
  return 0;
}

// 00620FC0  FUN_00620fc0  size=214  [between]
void __thiscall FUN_00620fc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4a0) != 0x14) {
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
      }
    }
    else if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) &&
            (iVar3 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))(), iVar3 != 0)) {
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_00a93730(0xb);
      return;
    }
  }
  return;
}

// 006210A0  FUN_006210a0  size=46  [between]
bool __fastcall FUN_006210a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (((iVar1 != 0x28010) && (iVar1 != 0x28140)) && (iVar1 != 0x28142)) {
    return iVar1 == 0x28144;
  }
  return true;
}

// 006210D0  FUN_006210d0  size=32  [between]
bool __fastcall FUN_006210d0(int param_1)

{
  if (*(int *)(param_1 + 0x4b0) == 0x28150) {
    return true;
  }
  return *(int *)(param_1 + 0x4b0) == 0x28152;
}

// 006210F0  FUN_006210f0  size=16  [between]
bool __fastcall FUN_006210f0(int param_1)

{
  return *(int *)(param_1 + 0x4b0) == 0x28170;
}

// 00621110  FUN_00621110  size=39  [between]
bool __fastcall FUN_00621110(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 != 0x28144) && (iVar1 != 0x28152)) {
    return iVar1 == 0x28170;
  }
  return true;
}

// 00621140  FUN_00621140  size=79  [between]
undefined4 FUN_00621140(void)

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

// 006211C0  FUN_006211c0  size=266  [between]
void __fastcall FUN_006211c0(int *param_1)

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
    param_1[0x6fe] = iVar3;
  }
  return;
}

// 006212D0  FUN_006212d0  size=158  [between]
undefined4 __thiscall FUN_006212d0(int param_1,float param_2,float param_3)

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
    iVar1 = FUN_0061be30();
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x19c0) == 0)) {
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

// 00621370  FUN_00621370  size=87  [between]
void __thiscall FUN_00621370(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0x4b0) == 0x28170) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35548;
    (**(code **)(*piVar2 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00b2bca0(param_2,param_3);
    }
  }
  return;
}

// 006213D0  FUN_006213d0  size=825  [between]
void __thiscall FUN_006213d0(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar1 = (uint)(param_1[300] == 0x28152);
  switch(param_2) {
  case 0x49:
    goto switchD_00621442_caseD_49;
  case 0x4a:
    goto switchD_00621442_caseD_4a;
  case 0x4b:
    goto switchD_00621442_caseD_4b;
  case 0x4c:
    break;
  case 0x4d:
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x28170) {
        if (param_3 != 0) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
        }
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_006211c0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    break;
  default:
    goto switchD_00621442_default;
  }
  if ((param_1[0x3ab] & 0x80000U) == 0) {
    if (param_1[300] == 0x28170) {
      FUN_00ac94e0("R_upper_leg_shield");
      FUN_00ac94e0("R_lower_leg_shield");
      if (param_3 != 0) {
        uVar2 = 0x157;
LAB_00621502:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("R_hip_armor");
      FUN_00ac94e0("R_leg_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1 + 4];
        goto LAB_00621502;
      }
    }
    FUN_00ac9420("_EFD003");
    FUN_00ac8dd0("_R_leg_",1);
    param_1[0x3ab] = param_1[0x3ab] | 0x80000;
  }
  if (param_4 != 0) goto switchD_00621442_default;
switchD_00621442_caseD_4b:
  if ((param_1[0x3ab] & 0x100000U) == 0) {
    if (param_1[300] == 0x28170) {
      FUN_00ac94e0("L_upper_leg_shield");
      FUN_00ac94e0("L_lower_leg_shield");
      if (param_3 != 0) {
        uVar2 = 0x158;
LAB_00621598:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("L_hip_armor");
      FUN_00ac94e0("L_leg_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1 + 6];
        goto LAB_00621598;
      }
    }
    FUN_00ac9420("_EFD004");
    FUN_00ac8dd0("_L_leg_",1);
    param_1[0x3ab] = param_1[0x3ab] | 0x100000;
  }
  if (param_4 != 0) goto switchD_00621442_default;
switchD_00621442_caseD_4a:
  if ((param_1[0x3ab] & 0x200000U) == 0) {
    if (param_1[300] == 0x28170) {
      FUN_00ac94e0("L_forearm_armor1");
      FUN_00ac94e0("R_shoulder_pad");
      if (param_3 != 0) {
        uVar2 = 0x154;
LAB_00621622:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("R_shoulder_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1];
        goto LAB_00621622;
      }
    }
    FUN_00ac9420("_EFD01");
    FUN_00ac8dd0("_R_arm_",1);
    param_1[0x3ab] = param_1[0x3ab] | 0x200000;
  }
  if (param_4 != 0) goto switchD_00621442_default;
switchD_00621442_caseD_49:
  if ((param_1[0x3ab] & 0x400000U) != 0) goto switchD_00621442_default;
  if (param_1[300] == 0x28170) {
    FUN_00ac94e0("L_forearm_armor");
    FUN_00ac94e0("L_shoulder_pad");
    if (param_3 != 0) {
      uVar2 = 0x155;
LAB_006216a8:
      (**(code **)(*param_1 + 0x358))(uVar2,0);
    }
  }
  else {
    FUN_00ac94e0("L_shoulder_armor");
    if (param_3 != 0) {
      uVar2 = local_20[uVar1 + 2];
      goto LAB_006216a8;
    }
  }
  FUN_00ac9420("_EFD02");
  FUN_00ac8dd0("_L_arm_",1);
  param_1[0x3ab] = param_1[0x3ab] | 0x400000;
switchD_00621442_default:
  if ((param_1[0x3a9] & 0x1000U) == 0) {
    (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
  }
  param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  return;
}

// 00621720  FUN_00621720  size=113  [between]
uint __fastcall FUN_00621720(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((((iVar1 == 0x28010) || (iVar1 == 0x28140)) || (iVar1 == 0x28142)) ||
     (((iVar1 == 0x28144 || (iVar1 == 0x28160)) ||
      (uVar2 = *(uint *)(param_1 + 0xeac), (uVar2 & 0x40000) != 0)))) {
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

// 00621810  FUN_00621810  size=74  [between]
void __thiscall FUN_00621810(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar2 = 0;
    if ((iVar1 == 0x28150) || (iVar1 == 0x28152)) {
      uVar2 = 1;
    }
    if (iVar1 == 0x28170) {
      uVar2 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar2,param_2,param_3);
  }
  return;
}

// 00621860  FUN_00621860  size=92  [between]
undefined4 __fastcall FUN_00621860(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) == 0x310a1)) {
      iVar1 = FUN_00a7c9b0(param_1 + 0x1014);
      if (iVar1 != 0) {
        FUN_00a7c960(param_1 + 0x1014);
        return 1;
      }
    }
  }
  return 0;
}

// 006218C0  Em8010::vf2F8  size=115  [class]
void __fastcall Em8010::vf2F8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar2 = 0;
    if ((iVar1 == 0x28150) || (iVar1 == 0x28152)) {
      uVar2 = 1;
    }
    if (iVar1 == 0x28170) {
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

// 00621940  FUN_00621940  size=230  [between]
/* WARNING: Removing unreachable block (ram,0x006219af) */

undefined4 __fastcall FUN_00621940(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 0xea8) & 0x80000) == 0) {
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
         (*(int *)(iVar2 + 0x4b0) == 0x11500)) {
        local_4 = 1;
      }
      if (((iVar6 != 0) && (iVar2 = FUN_008f7780(iVar6), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x4b0) == 0x11500)) {
        local_4 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *(int *)(iVar1 + 0x14));
  }
  return local_4;
}

// 00621A30  FUN_00621a30  size=1179  [between]
undefined4 __thiscall FUN_00621a30(int *param_1,int param_2)

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
  if ((((iVar3 == 0x28150) || (iVar3 == 0x28152)) || (iVar3 == 0x28170)) &&
     ((param_1[0x3a9] & 0x1000U) == 0)) {
    iVar4 = 0;
  }
  if ((((param_1[0x3ab] & 0x8000U) != 0) && (param_1[0x417] != 0)) && (param_1[0x139] == 0)) {
    if ((param_1[0x3aa] & 0x2000000U) == 0) {
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
    if (((iVar3 == 0x28150) || (iVar3 == 0x28152)) || (iVar3 == 0x28170)) {
      auStack_20[0] = 0x149;
      auStack_20[1] = 0x14f;
      auStack_20[2] = 0x148;
      auStack_20[3] = 0x14e;
      auStack_20[4] = 0x14a;
      auStack_20[5] = 0x150;
      auStack_20[6] = 0x14b;
      auStack_20[7] = 0x151;
      uVar5 = (uint)(iVar3 == 0x28152);
      if ((param_1[0x3ab] & 0x40000U) == 0) {
        if (iVar3 == 0x28170) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_006211c0();
        FUN_00ac8d40(1);
        param_1[0x3ab] = param_1[0x3ab] | 0x40000;
      }
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (param_1[300] == 0x28170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x80000;
      }
      if ((param_1[0x3ab] & 0x100000U) == 0) {
        if (param_1[300] == 0x28170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x100000;
      }
      if ((param_1[0x3ab] & 0x200000U) == 0) {
        if (param_1[300] == 0x28170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x200000;
      }
      if ((param_1[0x3ab] & 0x400000U) == 0) {
        if (param_1[300] == 0x28170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x400000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
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

// 00621ED0  FUN_00621ed0  size=2114  [between]
void __fastcall FUN_00621ed0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_20 [8];
  
  iVar3 = param_1[300];
  if (((((iVar3 == 0x28010) || (iVar3 == 0x28140)) || (iVar3 == 0x28142)) ||
      ((iVar3 == 0x28144 || (iVar3 == 0x28160)))) ||
     (((param_1[0x3ab] & 0x40000U) != 0 ||
      (((iVar3 != 0x28150 && (iVar3 != 0x28152)) && (iVar3 != 0x28170)))))) {
    return;
  }
  iVar3 = FUN_00a8eea0();
  fVar1 = (float)iVar3;
  iVar3 = FUN_00a8eeb0();
  fVar2 = (float)iVar3;
  if (fVar1 < (float)param_1[0x6f0] * fVar2) {
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x28152);
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x28170) {
        (**(code **)(*param_1 + 0x358))(0x156,0);
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_006211c0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x80000;
    }
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
      return;
    }
  }
  else if (fVar1 < (float)param_1[0x6ef] * fVar2) {
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x28152);
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x80000;
    }
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
      return;
    }
  }
  else {
    if ((float)param_1[0x6ee] * fVar2 <= fVar1) {
      if (fVar1 < (float)param_1[0x6ed] * fVar2) {
        FUN_006213d0(0x4a,1,0);
        return;
      }
      if ((float)param_1[0x6ec] * fVar2 <= fVar1) {
        return;
      }
      FUN_006213d0(0x49,1,0);
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
    uVar4 = (uint)(param_1[300] == 0x28152);
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
    }
  }
  param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  return;
}

// 00622720  FUN_00622720  size=172  [between]
void __fastcall FUN_00622720(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1d7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    piVar3 = param_1 + 0x10;
    uVar1 = FUN_00a81330(piVar3);
    FUN_00a88250(uVar1,piVar3);
    FUN_0061dfc0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00621370(&DAT_0163b604,1);
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

// 006227D0  FUN_006227d0  size=470  [between]
void __fastcall FUN_006227d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x1df;
    if (param_1[300] == 0x28170) {
      uVar3 = 0x564;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar1,0,0x3f800000);
    FUN_00621370(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    uVar3 = 0x1e0;
    if (param_1[300] == 0x28170) {
      uVar3 = 0x565;
    }
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    if (param_1[300] == 0x28170) {
      uVar3 = 0x566;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar1,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00622950;
  case 5:
LAB_00622950:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0061bbf0(param_1[0x66d]);
      (**(code **)(*param_1 + 0x34c))();
      FUN_00e5e0c0("em0010_vo_line_action_awake",param_1,0xffffffff,0);
      return;
    }
    goto LAB_0062298d;
  default:
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
LAB_0062298d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 006229C0  FUN_006229c0  size=463  [between]
void __fastcall FUN_006229c0(int *param_1)

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
    FUN_0061dfc0();
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

// 00622BA0  FUN_00622ba0  size=234  [between]
void __fastcall FUN_00622ba0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (param_1[0x187] == 0) {
    FUN_00ac8e10(1);
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x3a9] = param_1[0x3a9] & 0xfffbffff;
    param_1[0x404] = 0x43160000;
    (**(code **)(*param_1 + 0x358))(0x1cc,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x6f5] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00ac8f80();
  FUN_0061c7c0((float)(fVar2 - (float10)(float)param_1[0x244] * (float10)0.01));
  fVar1 = (float)param_1[0x404];
  param_1[0x404] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 <= fVar1 - (float)param_1[0x244]) {
    return;
  }
  if (param_1[0x12a] != 0) {
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  }
  FUN_009fdde0();
  return;
}

// 00622C90  Em8010::vf44  size=374  [class]
void __fastcall Em8010::vf44(int param_1)

{
  int iVar1;
  
  FUN_00983fd0(param_1);
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
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
  RayCastManager::getWork(param_1 + 0x19bc);
  RayCastManager::getWork(param_1 + 0x14a0);
  RayCastManager::getWork(param_1 + 0x19ec);
  RayCastManager::getWork(param_1 + 0x19e0);
  RayCastManager::getWork(param_1 + 0x19f4);
  RayCastManager::getWork(param_1 + 0x1a10);
  RayCastManager::getWork(param_1 + 0x1a14);
  RayCastManager::getWork(param_1 + 0x1a38);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  (**(code **)(*(int *)(param_1 + 0x1190) + 4))();
  FUN_00a92a90(0x20010);
  BehaviorEmBase::vf44();
  return;
}

// 00622E10  Em8010::getAttackInfo  size=1134  [class]
undefined4 __thiscall Em8010::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016464c4);
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
  puVar1[3] = unaff_ESI;
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
    break;
  case 6:
    *puVar1 = 0x96;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 8:
    *puVar1 = 0x97;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 10:
    *puVar1 = 0x9a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    uVar6 = 0xffff;
    goto LAB_00623261;
  case 0xc:
    *puVar1 = 0x9b;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1001;
    break;
  case 0xe:
    *puVar1 = 0x95;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x10:
    *puVar1 = 0x98;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x12:
    *puVar1 = 0x99;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x14:
    *puVar1 = 0x9e;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    break;
  case 0x16:
    *puVar1 = 0x9f;
    goto LAB_0062300f;
  case 0x18:
    *puVar1 = 0xa0;
LAB_0062300f:
    *(undefined1 *)((int)puVar1 + 0x11) = 5;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    if (*(int *)(param_1 + 0x618) == 0x10015) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    break;
  case 0x1a:
    *puVar1 = 0xa1;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x1c:
    *puVar1 = 0xa2;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    break;
  case 0x1e:
    *puVar1 = 0xa3;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x60000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    break;
  case 0x20:
    *puVar1 = 0xa4;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    iVar2 = FUN_006210d0();
    if (iVar2 != 0) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    *(undefined2 *)(puVar1 + 0x21) = 0x1002;
    break;
  case 0x21:
    *puVar1 = 0xa4;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    iVar2 = FUN_006210d0();
    if (iVar2 != 0) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    uVar6 = 0x1002;
    goto LAB_00623261;
  case 0x24:
  case 0x2c:
    *puVar1 = 0xaa;
    goto LAB_006231b6;
  case 0x25:
    *puVar1 = 0xaa;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_006231df;
  case 0x26:
    *puVar1 = 0xab;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    goto LAB_0062325c;
  case 0x28:
    *puVar1 = 0xac;
LAB_006231b6:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = 0x1003;
    break;
  case 0x2a:
    *puVar1 = 0xab;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_006231df:
    uVar6 = 0x1003;
LAB_006231e4:
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = uVar6;
    break;
  case 0x2b:
    *puVar1 = 0xac;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    goto LAB_0062325c;
  case 0x2e:
    *puVar1 = 0xad;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    uVar6 = 0x1002;
    goto LAB_006231e4;
  case 0x30:
    *puVar1 = 0xae;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_0062325c:
    uVar6 = 0x1003;
LAB_00623261:
    *(undefined2 *)(puVar1 + 0x21) = uVar6;
    break;
  case 0x32:
  case 0x37:
    *puVar1 = 0xa6;
    *(undefined1 *)((int)puVar1 + 0x11) = 5;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x33:
  case 0x36:
    *puVar1 = 0xa5;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x34:
  case 0x35:
    *puVar1 = 0xa7;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x38:
    *puVar1 = 0xa6;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    break;
  case 0x39:
    *puVar1 = 0xa8;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000100;
    break;
  case 0x3a:
    *puVar1 = 0xa9;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
  }
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 00623340  FUN_00623340  size=381  [between]
void __fastcall FUN_00623340(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 local_20 [8];
  
  local_20[0] = 0x3f933333;
  param_1[0x3a9] = param_1[0x3a9] | 0x1000000;
  local_20[1] = 0x3f8ccccd;
  local_20[2] = 0x3f59999a;
  uVar3 = 0x240;
  local_20[3] = 0x3f666666;
  local_20[4] = 0x3f800000;
  local_20[5] = 0x3f7ae148;
  local_20[6] = 0x3f866666;
  local_20[7] = 0x3f733333;
  if (param_1[0x187] == 0) {
    if (param_1[0x52b] == 2) {
      uVar3 = 0x31;
    }
    if (param_1[0x52b] == 3) {
      uVar3 = 0x31;
    }
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      uVar3 = 0x453;
      if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
        uVar3 = 0x460;
      }
    }
    sVar1 = FUN_00dde2d0(0,7);
    FUN_00aa4080(uVar3,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,local_20[sVar1]);
    param_1[0x187] = param_1[0x187] + 1;
    if ((((param_1[0x3ab] & 0x8000U) == 0) && (param_1[0x52b] == 1)) && (param_1[0x411] == 0)) {
      *(undefined1 *)(param_1 + 0x40e) = 1;
      param_1[0x40f] = 0x41d00000;
      param_1[0x410] = 1;
    }
    param_1[0x604] = 0;
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

// 006234C0  FUN_006234c0  size=389  [between]
void __fastcall FUN_006234c0(int *param_1)

{
  float fVar1;
  short sVar2;
  float10 fVar3;
  int local_8;
  undefined2 local_4;
  
  local_8 = *(int *)((int)param_1 + 0x1a5a);
  local_4 = *(undefined2 *)((int)param_1 + 0x1a5e);
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
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
  else if (param_1[0x187] != 1) goto LAB_00623605;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00623605:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00623650  FUN_00623650  size=386  [between]
void __fastcall FUN_00623650(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  short local_8 [4];
  
  local_8[0] = *(short *)((int)param_1 + 0x1a5a);
  local_8[1] = (short)param_1[0x697];
  local_8[2] = *(undefined2 *)((int)param_1 + 0x1a5e);
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    iVar2 = (int)local_8[(int)(short)param_1[0x2ad] % 3];
    if (param_1[0x52b] == 2) {
      iVar2 = 0x4d;
    }
    if (param_1[0x52b] == 3) {
      iVar2 = 0x121;
    }
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
      fVar3 = (float10)1;
    }
    FUN_00aa4080(iVar2,0,0x3e2aaaab,0x3f800000,0,0,(float)fVar3);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0062379b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x5fa] != 0) ||
     (fVar1 = ((float)param_1[0x10] - (float)param_1[0x5e4]) *
              ((float)param_1[0x10] - (float)param_1[0x5e4]) +
              ((float)param_1[0x11] - (float)param_1[0x5e5]) *
              ((float)param_1[0x11] - (float)param_1[0x5e5]) +
              ((float)param_1[0x12] - (float)param_1[0x5e6]) *
              ((float)param_1[0x12] - (float)param_1[0x5e6]), fVar1 < 2.25 != (fVar1 == 2.25))) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0062379b:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 006237E0  FUN_006237e0  size=420  [between]
void __fastcall FUN_006237e0(int *param_1)

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
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016464f8,1);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0062392e;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0062392e:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00623990  FUN_00623990  size=339  [between]
void __fastcall FUN_00623990(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00623abe;
  }
  iVar1 = *(int *)(param_1 + 0x14ac);
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
  if (((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) && (*(int *)(param_1 + 0x105c) != 0)) {
    uVar2 = 0x465;
  }
  if (*(int *)(param_1 + 0x4b0) == 0x28170) {
    uVar2 = 0x535;
  }
  if (*(int *)(param_1 + 0x1814) == 2) {
    uVar2 = 0x37b;
    if (*(int *)(param_1 + 0x4b0) == 0x28170) {
      uVar2 = 0x576;
    }
    if ((*(byte *)(param_1 + 0x1818) & 2) != 0) {
      uVar3 = 0x40;
    }
  }
  if (*(int *)(param_1 + 0x1814) == 1) {
    uVar2 = 0x366;
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar3 = 0x40;
    }
    else if (*(int *)(param_1 + 0xe98) != 9) goto LAB_00623a50;
    uVar2 = 0x490;
  }
LAB_00623a50:
  FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
  FUN_00621370(&DAT_0163b604,1);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
  *(float *)(param_1 + 0x920) = (float)((fVar4 + (float10)1) * (float10)60.0);
LAB_00623abe:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 00623AF0  Em8010::vf19C  size=179  [class]
void __thiscall Em8010::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00623BB0  FUN_00623bb0  size=479  [callgraph]
void __fastcall FUN_00623bb0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(param_1 + 0x1a44) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1a44) = fVar1;
  if (fVar1 <= 0.0) {
    switch(*(undefined1 *)(param_1 + 0x1088)) {
    case 0:
      local_20 = 0x40400000;
      local_1c = 0;
      local_18 = 0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em8010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 1:
      iVar2 = FUN_006208d0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      local_20 = 0;
      local_1c = 0;
      *(uint *)(param_1 + 0x1078) = (uint)(iVar2 == 0);
      local_18 = 0xc0400000;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em8010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 2:
      iVar2 = FUN_006208d0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      local_20 = 0xc0400000;
      local_1c = 0;
      local_18 = 0;
      *(uint *)(param_1 + 0x107c) = (uint)(iVar2 == 0);
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em8010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 3:
      iVar2 = FUN_006208d0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      local_20 = 0x40400000;
      *(uint *)(param_1 + 0x1080) = (uint)(iVar2 == 0);
      local_1c = 0;
      local_18 = 0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      Em8010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 4:
      iVar2 = FUN_006208d0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      *(uint *)(param_1 + 0x1084) = (uint)(iVar2 == 0);
      *(undefined1 *)(param_1 + 0x1088) = 0;
      return;
    }
  }
  return;
}

// 00623DB0  FUN_00623db0  size=414  [callgraph]
void __thiscall
FUN_00623db0(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,int param_6
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
  *(undefined4 *)(param_1 + 0x1a48) = 0x44160000;
  return;
}

// 00623F50  FUN_00623f50  size=296  [callgraph]
void FUN_00623f50(int param_1)

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
        FUN_00619590();
      }
    }
    else if (iVar3 != 0) {
      FUN_00619610();
    }
    FUN_0040b190();
    iVar1 = FUN_00a82090("Em8010Magazine",0x38041,local_90);
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
          FUN_006195d0();
          return;
        }
        FUN_0061e590();
      }
    }
  }
  return;
}

// 00624080  FUN_00624080  size=743  [callgraph]
void __thiscall FUN_00624080(int param_1,undefined4 param_2)

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
  
  if (*(int *)(param_1 + 0x14ac) == 2) {
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
          if (*(int *)(param_1 + 0x19b8) == 0) {
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

// 00624370  FUN_00624370  size=933  [callgraph]
void __fastcall FUN_00624370(int param_1)

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
  
  if (*(int *)(param_1 + 0x14ac) == 3) {
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
          if (*(int *)(param_1 + 0x19b8) == 0) {
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
          FUN_0043fed0(*(undefined4 *)(*(int *)(param_1 + 0x1b6c) + 0x4f0),0,&fStack_368);
          FUN_00ad3be0(*(undefined4 *)(iVar3 + 0x4f0),local_348);
        }
      }
    }
  }
  return;
}

// 00624720  FUN_00624720  size=689  [callgraph]
void __fastcall FUN_00624720(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar5 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar6 = &DAT_01b35540;
    (**(code **)(*piVar2 + 4))(&DAT_01b35540);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8c760(0xc);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  switch(param_1[0x187]) {
  case 0:
    if (uVar5 != 0) {
      FUN_00ac4c70(1);
    }
    FUN_00aa4520(0x5cb,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (uVar5 != 0) {
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b80920(iVar1,0x3e99999a,0x3dcccccd,0x3e99999a,0);
    FUN_00db3e80(0x41880000,0,&DAT_01bea1d0);
    break;
  case 1:
  case 3:
    break;
  case 2:
    if (uVar5 != 0) {
      uVar4 = 0x5cc;
      iVar3 = FUN_006210d0();
      if (iVar3 != 0) {
        uVar4 = 0x5d0;
      }
      if (*(int *)(uVar5 + 0x4b0) == 0x28170) {
        uVar4 = 0x5d4;
      }
      FUN_00ac4c70(2);
      FUN_00aa4520(uVar4,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac4c70(0);
      FUN_00a8cb60(2);
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    if (uVar5 != 0) {
      uVar4 = 0x5cd;
      iVar3 = FUN_006210d0();
      if (iVar3 != 0) {
        uVar4 = 0x5d1;
      }
      if (*(int *)(uVar5 + 0x4b0) == 0x28170) {
        uVar4 = 0x5d5;
      }
      FUN_00ac4c70(2);
      FUN_00aa4520(uVar4,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac4c70(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
      return;
    }
  default:
    goto switchD_006247cd_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006247cd_default:
  return;
}

// 006249F0  FUN_006249f0  size=424  [callgraph]
void __fastcall FUN_006249f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar5 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01b35540;
      (**(code **)(*piVar2 + 4))(&DAT_01b35540);
      iVar3 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar3 != 0) & (uint)piVar2;
    }
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x318))();
  iVar3 = FUN_00a8c760(0xc);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  if (param_1[0x187] == 0) {
    iVar3 = *(int *)(uVar5 + 0x4b0);
    uVar4 = 0x5db;
    if ((iVar3 == 0x28150) || (iVar3 == 0x28152)) {
      uVar4 = 0x5dc;
    }
    if (iVar3 == 0x28170) {
      uVar4 = 0x5dd;
    }
    FUN_00ac4c70(2);
    FUN_00aa4520(uVar4,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac4c70(0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b80920(iVar1,0x3e99999a,0x3dcccccd,0x3e99999a,0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 0x388))(0);
    FUN_00ba6810(1,1);
  }
  return;
}

// 00624BA0  FUN_00624ba0  size=200  [callgraph]
void __fastcall FUN_00624ba0(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x37d;
  if (param_1[300] == 0x28170) {
    uVar1 = 0x577;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,(param_1[0x606] & 2U) << 5,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00624c2b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00624c2b:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00624C70  FUN_00624c70  size=223  [callgraph]
void __fastcall FUN_00624c70(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ac85c0(5,0x92);
  *(float *)(param_1 + 0x1a8c) = (float)(fVar1 * (float10)60.0);
  fVar1 = (float10)FUN_00ac85c0(5,0x93);
  fVar1 = (float10)FUN_00dde300(0,(float)fVar1);
  *(float *)(param_1 + 0x1a8c) =
       (float)(fVar1 * (float10)60.0 + (float10)*(float *)(param_1 + 0x1a8c));
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3bb,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00623f50(0);
    *(undefined4 *)(param_1 + 0x1a84) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00624D50  FUN_00624d50  size=165  [callgraph]
void __fastcall FUN_00624d50(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2a1,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
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

// 00624E00  FUN_00624e00  size=274  [callgraph]
void __fastcall FUN_00624e00(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b2bca0(&DAT_0164651c,0);
      }
    }
    param_1[0x3aa] = param_1[0x3aa] & 0xdfffffff;
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
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b2bca0(&DAT_0163b604,0);
      }
    }
  }
  return;
}

// 00624F20  FUN_00624f20  size=173  [callgraph]
void __fastcall FUN_00624f20(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x538,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00621370(&DAT_01646524,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00624fb6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00624fb6:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00624FD0  FUN_00624fd0  size=173  [callgraph]
void __fastcall FUN_00624fd0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x539,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00621370(&DAT_0164652c,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00625066;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00625066:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00625080  FUN_00625080  size=173  [callgraph]
void __fastcall FUN_00625080(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00621370(&DAT_01646534,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00625116;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00625116:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00625130  FUN_00625130  size=173  [callgraph]
void __fastcall FUN_00625130(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00621370(&DAT_0164653c,1);
  }
  else if (param_1[0x187] != 1) goto LAB_006251c6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_006251c6:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 006251E0  FUN_006251e0  size=449  [callgraph]
void __fastcall FUN_006251e0(int *param_1)

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
    FUN_00621370(&DAT_0163b604,1);
    FUN_0061dfc0();
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x541,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00621370(&DAT_0163b604,1);
    break;
  case 4:
    FUN_00aa4080(0x542,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00621370(&DAT_01646544,1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_006251fb_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_006251fb_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 006253C0  FUN_006253c0  size=351  [callgraph]
void __fastcall FUN_006253c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b3554c;
      (**(code **)(*piVar2 + 4))(&DAT_01b3554c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        return;
      }
    }
  }
  if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
    param_1[0x128] = 0xb;
    param_1[0x693] = 0x2930292;
    param_1[0x694] = 0x2930293;
    param_1[0x695] = 0x2980297;
    param_1[0x696] = 0x2940299;
    param_1[0x697] = 0x2940294;
    param_1[0x698] = 0x2960295;
    param_1[0x699] = 0x29b029a;
    param_1[0x69a] = 0x29e029c;
    param_1[0x69b] = 0x2c1029f;
    param_1[0x69c] = 0x2b1029d;
  }
  else {
    param_1[0x128] = 0;
    param_1[0x693] = 0x2450241;
    param_1[0x694] = 0x2470247;
    param_1[0x695] = (int)&WORD_025d025a;
    param_1[0x696] = (int)&WORD_024e0260;
    param_1[0x697] = 0x250024f;
    param_1[0x698] = 0x2650264;
    param_1[0x699] = 0x2540253;
    param_1[0x69a] = (int)&DAT_02290255;
    param_1[0x69b] = (int)&DAT_022e022c;
    *(undefined2 *)(param_1 + 0x69c) = 0x263;
    *(undefined **)((int)param_1 + 0x1a72) = &DAT_01ea01f6;
  }
  param_1[0x3ab] = param_1[0x3ab] & 0xffff7fff;
                    /* WARNING: Could not recover jumptable at 0x0062551a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00625570  Em8010::vf33C  size=2951  [class]
void __thiscall Em8010::vf33C(int *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1[0x3a9] & 0x4000000U) != 0) {
    param_3[6] = 0x42000;
    return;
  }
  iVar4 = 0;
  uVar3 = 0;
  do {
    uVar1 = 0x80000000 >> ((byte)uVar3 & 0x1f);
    if (((param_3[(uVar3 >> 5) + 4] & uVar1) != 0) && ((param_3[(uVar3 >> 5) + 2] & uVar1) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x11);
  if ((iVar4 == 1) || ((3 < (int)param_2[0x33] && (iVar4 < 4)))) {
LAB_00625d7c:
    param_3[6] = 0x42000;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (((param_1[0x3a9] & 0x200000U) != 0) &&
     (((iVar4 = FUN_0043f860(0x2a), iVar4 != 0 && (iVar4 = FUN_0043f860(0x2b), iVar4 != 0)) &&
      (iVar4 = FUN_0043f830(0x29), iVar4 == 0)))) {
    param_3[6] = 0x42004;
    *param_2 = 1;
    uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x7c))(0x7a);
    param_2[1] = uVar2;
    param_1[0x3a9] = param_1[0x3a9] | 0x100000;
    return;
  }
  if ((((param_3[4] & 2) == 0) || ((~(*param_3 >> 1) & 1) == 0)) &&
     (iVar4 = FUN_0043f830(0x28), iVar4 != 0)) {
    param_3[6] = 0x42004;
    *param_2 = 0;
    uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x24))(0x7a);
    param_2[1] = uVar2;
    return;
  }
  iVar4 = FUN_0043f860(0x27);
  if (iVar4 != 0) {
    iVar4 = FUN_0043f830(0x20);
    if (iVar4 == 0) {
      param_3[6] = 0x42004;
      *param_2 = 2;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x2c))(0x7a);
      param_2[1] = uVar2;
      return;
    }
    iVar4 = FUN_0043f830(0x29);
    if ((iVar4 == 0) || (iVar4 = FUN_0043f830(0x22), iVar4 == 0)) {
      param_3[6] = 0x42004;
      *param_2 = 1;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x7c))(0x7a);
      param_2[1] = uVar2;
      if ((param_1[0x3a9] & 0x200000U) == 0) {
        return;
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x100000;
      return;
    }
    iVar4 = FUN_0043f830(0x24);
    if (iVar4 == 0) {
      param_3[6] = 0x42004;
      *param_2 = 4;
      uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x84))(0x7a);
      param_2[1] = uVar2;
      return;
    }
    iVar4 = FUN_0043f830(0x26);
    if (iVar4 == 0) {
      param_3[6] = 0x42004;
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
      (((iVar4 = FUN_0043f830(4), iVar4 == 0 && (iVar4 = FUN_0043f830(5), iVar4 == 0)) &&
       (((iVar4 = FUN_0043f830(6), iVar4 == 0 &&
         (((iVar4 = FUN_0043f830(7), iVar4 == 0 && (iVar4 = FUN_0043f830(8), iVar4 == 0)) &&
          (iVar4 = FUN_0043f830(9), iVar4 == 0)))) &&
        (((iVar4 = FUN_0043f830(10), iVar4 == 0 && (iVar4 = FUN_0043f830(0xb), iVar4 == 0)) &&
         (iVar4 = FUN_0043f830(0xc), iVar4 == 0)))))))) && (iVar4 = FUN_0043f830(0xd), iVar4 == 0))
  {
    *param_2 = 0x1e;
    param_2[1] = 1;
    param_3[6] = param_1[0x12d];
    goto LAB_006260af;
  }
  iVar4 = FUN_0043f830(10);
  if (((iVar4 == 0) && (iVar4 = FUN_0043f830(0xd), iVar4 == 0)) ||
     (((iVar4 = FUN_0043f830(0), iVar4 != 0 ||
       (((iVar4 = FUN_0043f830(1), iVar4 != 0 || (iVar4 = FUN_0043f830(2), iVar4 != 0)) ||
        (iVar4 = FUN_0043f830(4), iVar4 != 0)))) ||
      (((iVar4 = FUN_0043f830(5), iVar4 != 0 || (iVar4 = FUN_0043f830(6), iVar4 != 0)) ||
       ((iVar4 = FUN_0043f830(7), iVar4 != 0 ||
        (((iVar4 = FUN_0043f830(8), iVar4 != 0 || (iVar4 = FUN_0043f830(9), iVar4 != 0)) ||
         ((iVar4 = FUN_0043f830(0xb), iVar4 != 0 || (iVar4 = FUN_0043f830(0xc), iVar4 != 0))))))))))
     )) {
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
      if (iVar4 != 0) goto LAB_00625d7c;
      iVar4 = FUN_0043f830(0x14);
      if (((iVar4 != 0) && (iVar4 = FUN_0043f860(0x14), iVar4 == 0)) &&
         ((iVar4 = FUN_0043f830(0x15), iVar4 != 0 && (iVar4 = FUN_0043f860(0x15), iVar4 == 0)))) {
        iVar4 = FUN_0043f860(2);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(9), iVar4 == 0)) &&
           (iVar4 = FUN_0043f860(10), iVar4 == 0)) {
          *param_2 = 0x14;
          param_2[2] = param_1[0x527];
          param_3[6] = param_1[0x12d];
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x18;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
          }
          goto LAB_00625ff1;
        }
        iVar4 = FUN_0043f860(5);
        if (((iVar4 == 0) && (iVar4 = FUN_0043f860(0xc), iVar4 == 0)) &&
           (iVar4 = FUN_0043f860(0xd), iVar4 == 0)) {
          *param_2 = 0x13;
          param_2[2] = param_1[0x527];
          param_3[6] = param_1[0x12d];
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x17;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x19;
          }
          goto LAB_00625ff1;
        }
        iVar4 = FUN_0043f830(0x11);
        if (iVar4 == 0) {
          *param_2 = 0x15;
          param_3[6] = param_1[0x12d];
          goto LAB_00625ff1;
        }
        iVar4 = FUN_0043f830(0x12);
        if (iVar4 == 0) {
          *param_2 = 0x16;
          param_3[6] = param_1[0x12d];
          goto LAB_00625ff1;
        }
      }
      iVar4 = FUN_0043f830(0);
      if ((iVar4 != 0) && (iVar4 = FUN_00621720(), iVar4 == 0x4d)) {
        iVar4 = FUN_0043f860(8);
        if ((iVar4 == 0) && (iVar4 = FUN_0043f860(2), iVar4 == 0)) {
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x18;
            param_3[6] = param_1[0x12d];
            goto LAB_00625ff1;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
            param_3[6] = param_1[0x12d];
            goto LAB_00625ff1;
          }
        }
        iVar4 = FUN_0043f860(0xb);
        if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x17;
            param_3[6] = param_1[0x12d];
            goto LAB_00625ff1;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x19;
            param_3[6] = param_1[0x12d];
            goto LAB_00625ff1;
          }
        }
        iVar4 = FUN_0043f860(8);
        if ((((iVar4 != 0) || (iVar4 = FUN_0043f860(9), iVar4 != 0)) ||
            (iVar4 = FUN_0043f860(10), iVar4 != 0)) &&
           (((iVar4 = FUN_0043f860(0xb), iVar4 != 0 || (iVar4 = FUN_0043f860(0xc), iVar4 != 0)) ||
            (iVar4 = FUN_0043f860(0xd), iVar4 != 0)))) {
          iVar4 = FUN_0043f860(1);
          if (iVar4 != 0) goto LAB_00625d7c;
          *param_2 = 2;
          param_2[2] = param_1[0x527];
          param_3[6] = param_1[0x12d];
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0xb;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0xd;
          }
          goto LAB_00625ff1;
        }
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = param_1[0x527];
        param_3[6] = param_1[0x12d];
LAB_00625fc9:
        iVar4 = FUN_00a8c760(5);
        if (iVar4 != 0) {
          *param_2 = 10;
        }
        iVar4 = FUN_00a8c760(6);
        if (iVar4 != 0) {
          *param_2 = 0xc;
        }
LAB_00625ff1:
        iVar4 = (**(code **)(*param_1 + 0x1d8))();
        if ((iVar4 != 0) && ((param_1[0x186] & 0xffff0000U) != 0x120000)) {
          param_2[1] = *param_2;
          *param_2 = 0x10;
        }
        if ((param_1[0x3aa] & 0x200000U) == 0) {
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
              goto LAB_00625f6d;
            }
            goto LAB_00625dab;
          }
          goto LAB_00625db6;
        }
        iVar4 = FUN_0043f830(0xb);
        if (iVar4 != 0) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
LAB_00625e31:
            *param_2 = 4;
            goto LAB_00625f6d;
          }
          goto LAB_00625db6;
        }
        iVar4 = FUN_0043f830(0xc);
        if ((iVar4 != 0) || (iVar4 = FUN_0043f830(0xd), iVar4 != 0)) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            iVar4 = FUN_0043f830(8);
            if ((iVar4 != 0) || (iVar4 = FUN_0043f830(9), iVar4 != 0)) goto LAB_00625e31;
            *param_2 = 8;
            goto LAB_00625f6d;
          }
          goto LAB_00625db6;
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
                  goto LAB_0062605e;
                }
                *param_2 = 0x1e;
                param_2[1] = 1;
                goto LAB_006260a6;
              }
              *param_2 = 1;
              param_2[1] = 1;
              param_3[6] = param_1[0x12d];
              goto LAB_00625fc9;
            }
            iVar4 = FUN_0043f830(1);
            if (iVar4 == 0) {
              iVar4 = param_1[0x139];
              goto joined_r0x00625ef6;
            }
          }
          else {
            iVar4 = FUN_0043f830(1);
            if (iVar4 == 0) {
              iVar4 = param_1[0x139];
joined_r0x00625ef6:
              if (iVar4 == 0) {
                *param_2 = 6;
                goto LAB_00625f6d;
              }
            }
          }
        }
        else {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            *param_2 = 7;
            goto LAB_00625f6d;
          }
        }
        *param_2 = 1;
      }
      else {
        iVar4 = FUN_0043f830(1);
        if ((iVar4 == 0) && (param_1[0x139] == 0)) {
LAB_00625dab:
          *param_2 = 5;
LAB_00625f6d:
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0xe;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0xf;
          }
          if ((param_1[0x3aa] & 0x200000U) != 0) {
            *param_2 = 0x1c;
          }
          goto LAB_0062605e;
        }
LAB_00625db6:
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
      if ((param_1[0x3aa] & 0x200000U) != 0) {
        *param_2 = 0x1d;
      }
LAB_0062605e:
      param_3[6] = param_1[0x12d];
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
LAB_006260a6:
  param_3[6] = param_1[0x12d];
LAB_006260af:
  iVar4 = (**(code **)(*param_1 + 0x1d8))();
  if ((iVar4 != 0) && ((param_1[0x186] & 0xffff0000U) != 0x120000)) {
    param_2[1] = *param_2;
    *param_2 = 0x10;
  }
  if ((param_1[0x3aa] & 0x200000U) != 0) {
    *param_2 = 0x1c;
  }
  return;
}

// 00626100  Em8010::vf338  size=138  [class]
void __thiscall Em8010::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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
    if ((iVar1 == 0x28150) || (iVar1 == 0x28152)) {
      uVar4 = 1;
    }
    if (iVar1 == 0x28170) {
      uVar4 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar4,1,1);
    (**(code **)(*param_1 + 0x364))(0x20010);
  }
  return;
}

// 00626190  FUN_00626190  size=655  [between]
void __thiscall FUN_00626190(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (((param_1[0x3a9] & 0x800000U) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e5ac0(2);
    param_1[0x3a9] = param_1[0x3a9] & 0xff7fffff;
  }
  (**(code **)(*param_1 + 0x314))();
  param_1[0x3a9] = param_1[0x3a9] & 0xffffbfff;
  param_1[0x3aa] = param_1[0x3aa] & 0xfeffffff;
  *(undefined1 *)(param_1 + 0x424) = 0;
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
    if (param_1[0x6e3] != 0x20) {
      iVar1 = FUN_00a8cab0();
      if ((((iVar1 == 0x2000e) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x3000c)) ||
          (iVar1 = FUN_00a8cab0(), iVar1 == 0x1f)) || (param_1[0x6e3] != -1)) {
        param_1[0x6e3] = 0x20;
        goto LAB_00626290;
      }
      if (param_1[0x139] != 0) {
        return;
      }
    }
  }
  else if ((param_2 == 0x1f) && (param_1[0x6e3] != 0x1f)) {
    if ((param_1[0x6e3] != -1) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x20)) {
      param_1[0x6e3] = 0x1f;
      goto LAB_00626290;
    }
    if (param_1[0x139] != 0) {
      return;
    }
  }
  iVar1 = FUN_00a8cab0();
  if (((iVar1 != 0x2000e) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x3000c)) ||
     (((*(byte *)(param_1 + 0x3a9) & 1) != 0 ||
      (((param_2 & 0xffff0000) == 0xa0000 || ((param_2 & 0xffff0000) == 0xb0000)))))) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffe;
    if (param_1[0x6e3] == -1) {
      FUN_00a8caf0(param_2,param_3,param_4,param_5);
    }
    else {
      FUN_00a8caf0(param_1[0x6e3],param_1[0x6e4],param_1[0x6e5],param_1[0x6e6]);
      param_1[0x6e3] = -1;
      param_1[0x6e4] = 0;
      param_1[0x6e5] = 0;
      param_1[0x6e6] = 0;
    }
    if (param_1[300] == 0x28170) {
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
  param_1[0x6e3] = param_2;
LAB_00626290:
  param_1[0x6e4] = param_3;
  param_1[0x6e5] = param_4;
  param_1[0x6e6] = param_5;
  return;
}

// 00626420  FUN_00626420  size=192  [between]
void __fastcall FUN_00626420(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35548;
    (**(code **)(*piVar2 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],9,0xffffffff,4);
      FUN_00ac8be0(0,0);
      FUN_00b2bbb0(&DAT_0163b604);
      *(undefined4 *)(param_1 + 0x1044) = 1;
      FUN_00ac9420("hand_mac");
      FUN_00ac94e0("hand_mac2");
      FUN_00ac94e0("hand_gun");
      *(undefined4 *)(param_1 + 0x1074) = 0;
    }
  }
  return;
}

// 006264E0  FUN_006264e0  size=206  [between]
void __fastcall FUN_006264e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b35548;
    (**(code **)(*piVar2 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = 0xa00;
      if ((*(int *)(param_1 + 0x4b0) == 0x28150) || (*(int *)(param_1 + 0x4b0) == 0x28152)) {
        uVar3 = 0x520;
      }
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],uVar3,0xffffffff,0x32);
      FUN_00ac8be0(0,1);
      FUN_00b2bc00(&DAT_0163b5f4);
      *(undefined4 *)(param_1 + 0x1044) = 0;
      FUN_00ac94e0("hand_mac");
      FUN_00ac9420("hand_gun");
    }
  }
  return;
}

// 006265B0  FUN_006265b0  size=153  [between]
void __fastcall FUN_006265b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35548;
    (**(code **)(*piVar2 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(2,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],9,0xffffffff,4);
      FUN_00b2bbb0(&DAT_0163b604);
      FUN_00ac94e0("hand_mac");
      FUN_00ac9420("hand_gun");
      *(undefined4 *)(param_1 + 0x1054) = 1;
    }
  }
  return;
}

// 00626650  FUN_00626650  size=225  [between]
void __fastcall FUN_00626650(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b35548;
    (**(code **)(*piVar2 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = 0x520;
      if (*(int *)(param_1 + 0x4b0) == 0x28170) {
        uVar3 = 0;
      }
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(2,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],uVar3,0xffffffff,0x35);
      FUN_00b2bc00(&DAT_0163b5f4);
      if ((*(int *)(param_1 + 0x4b0) == 0x28150) || (*(int *)(param_1 + 0x4b0) == 0x28152)) {
        FUN_00b2bc00(&DAT_01643658);
      }
      FUN_00ac9420("hand_mac");
      FUN_00ac94e0("hand_mac2");
      FUN_00ac94e0("hand_gun");
      *(undefined4 *)(param_1 + 0x1054) = 0;
    }
  }
  return;
}

// 00626740  FUN_00626740  size=75  [between]
void FUN_00626740(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35548;
    (**(code **)(*piVar2 + 4))(&DAT_01b35548);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00b2bca0(param_1,param_2);
    }
  }
  return;
}

// 00626790  FUN_00626790  size=470  [between]
void __fastcall FUN_00626790(int param_1)

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
  iVar1 = FUN_00a82090("Em8010_RPG",0x39003,0);
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
      puVar4 = &DAT_01b35548;
      (**(code **)(*piVar3 + 4))(&DAT_01b35548);
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
    FUN_00626650();
    *(undefined4 *)(param_1 + 0x13a4) = 1;
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    FUN_0040b190();
    iVar1 = FUN_00a82090("Em8010RPGBullet",0x39004,auStack_90);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01646590);
      return;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b35550;
      (**(code **)(*piVar3 + 4))(&DAT_01b35550);
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

// 00626970  FUN_00626970  size=154  [between]
void __fastcall FUN_00626970(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b3554c;
      (**(code **)(*piVar2 + 4))(&DAT_01b3554c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00ac8b80(piVar2[0x13c]);
        FUN_00ac8ad0(3,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],0xd,0xffffffff,7);
        (**(code **)(*piVar2 + 0xd8))(0);
        FUN_00b2bbb0(&DAT_0163b604);
        *(undefined4 *)(param_1 + 0x105c) = 1;
      }
    }
  }
  return;
}

// 00626A10  FUN_00626a10  size=102  [between]
void __fastcall FUN_00626a10(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b3554c;
      (**(code **)(*piVar2 + 4))(&DAT_01b3554c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00ac8b80(piVar2[0x13c]);
        FUN_0061bad0();
        *(undefined4 *)(param_1 + 0x105c) = 0;
      }
    }
  }
  return;
}

// 00626A80  FUN_00626a80  size=231  [between]
void FUN_00626a80(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em8010_Hammer",0x38080,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b35548;
      (**(code **)(*piVar3 + 4))(&DAT_01b35548);
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
    FUN_00626650();
    return;
  }
  FUN_00dd5650(&DAT_016465d0);
  return;
}

// 00626B70  FUN_00626b70  size=326  [between]
void __thiscall FUN_00626b70(int param_1,int param_2)

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
      puVar6 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
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
        puVar6 = &DAT_01b35548;
        (**(code **)(*piVar2 + 4))(&DAT_01b35548);
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
    FUN_00b2bbb0(&DAT_0163b604);
    *(undefined4 *)(param_1 + 0x1070) = 1;
    FUN_00ac94e0("hand_gun");
    if (param_2 != 0) {
      FUN_00ac9420("hand_mac2");
      *(undefined4 *)(param_1 + 0x1074) = 0;
      return;
    }
    FUN_00ac9210("RM_hand_mac");
    *(undefined4 *)(param_1 + 0x1074) = 0;
  }
  return;
}

// 00626CC0  FUN_00626cc0  size=308  [between]
void __thiscall FUN_00626cc0(int param_1,int param_2)

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
      puVar6 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
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
        puVar6 = &DAT_01b35548;
        (**(code **)(*piVar2 + 4))(&DAT_01b35548);
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
    FUN_00b2bc00(&DAT_0163b5f4);
    *(undefined4 *)(param_1 + 0x1070) = 0;
    FUN_00ac9420("hand_gun");
    if (param_2 != 0) {
      FUN_00ac94e0("hand_mac2");
      return;
    }
    FUN_00ac94e0("hand_mac");
  }
  return;
}

// 00626E00  FUN_00626e00  size=609  [between]
undefined4 __thiscall FUN_00626e00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
     (*(int *)(param_1 + 0x14b0) == 2)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x2000b;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 2)) &&
     (*(int *)(param_1 + 0x14b0) == 1)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x20009;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 6)) &&
     (*(int *)(param_1 + 0x14b0) == 2)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x40000;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 2)) &&
     (*(int *)(param_1 + 0x14b0) == 6)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x40001;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
     (*(int *)(param_1 + 0x14b0) == 3)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x3000a;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 3)) &&
     (*(int *)(param_1 + 0x14b0) == 1)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0x30009;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 7)) &&
     (*(int *)(param_1 + 0x14b0) == 3)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0xd0002;
      }
    }
  }
  if (((*(float *)(param_1 + 0x1a80) <= 0.0) && (*(int *)(param_1 + 0x14ac) == 3)) &&
     (*(int *)(param_1 + 0x14b0) == 7)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar2 = 0xd0003;
        goto LAB_0062702f;
      }
    }
  }
  if (iVar2 == -1) {
    return 0;
  }
LAB_0062702f:
  FUN_00626190(iVar2,0,0,0);
  FUN_0061bcc0();
  *(undefined4 *)(param_1 + 0x1a7c) = param_2;
  return 1;
}

// 00627070  FUN_00627070  size=397  [between]
undefined4 __fastcall FUN_00627070(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((param_1[0x41d] == 0) &&
     ((((iVar2 = param_1[0x52b], iVar2 == 1 || (iVar2 == 7)) || (iVar2 == 6)) || (iVar2 == 5)))) {
    if (((param_1[0x3a6] != 0x1e) && (iVar2 = FUN_00ac8a50(), iVar2 != 0)) &&
       (iVar2 = (**(code **)(*param_1 + 0x274))(), iVar2 != 0)) {
      return 0;
    }
    if ((((param_1[0x12a] & 0x800U) == 0) && (param_1[0x526] != 0)) &&
       ((((DAT_01bea094 & 0x20000) == 0 &&
         (((param_1[0x704] != 0 || ((param_1[0x3a9] & 0x8000000U) == 0)) &&
          ((param_1[0x3aa] & 0x400U) == 0)))) && ((param_1[0x3aa] & 0x2000000U) == 0)))) {
      iVar2 = FUN_00ac82f0();
      if (iVar2 == 0) {
        param_1[0x6df] = param_1[0x6df] + 1;
        if (param_1[0x6df] == param_1[0x6de]) {
          param_1[0x6df] = 0;
          iVar2 = FUN_00ac8660(0,0x69);
          param_1[0x6de] = iVar2;
          uVar5 = FUN_00ac8660(0,0x6a);
          sVar1 = FUN_00dde2d0(0,uVar5);
          param_1[0x6de] = param_1[0x6de] + (int)sVar1;
          iVar2 = FUN_006210d0();
          if (iVar2 == 0) {
            return 1;
          }
          iVar2 = FUN_00ac8660(0,0x6d);
          param_1[0x6de] = iVar2;
          uVar5 = FUN_00ac8660(0,0x6e);
          sVar1 = FUN_00dde2d0(0,uVar5);
          param_1[0x6de] = param_1[0x6de] + (int)sVar1;
          return 1;
        }
      }
      else {
        iVar2 = FUN_00ac8660(0,0x62);
        iVar3 = FUN_006210d0();
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

// 00627200  FUN_00627200  size=360  [between]
bool __fastcall FUN_00627200(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1[0x3a6] != 0x10) {
    return false;
  }
  bVar4 = false;
  switch(param_1[0x3a7]) {
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
    FUN_00626190(0xb0002,0,0,0);
    FUN_00621810(1,1);
    return true;
  case 4:
  case 5:
  case 8:
  case 9:
    iVar3 = FUN_00a8c760(5);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x605] = 1;
      (*pcVar1)();
    }
    iVar2 = FUN_00a8c760(6);
    if (iVar2 != 0) {
      FUN_00626190(0xa001d,0,0,0);
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
      FUN_00626190(0xa0010,0,0,0);
    }
    iVar3 = FUN_00a8c760(6);
    if (iVar3 != 0) {
      FUN_00626190(0xa0011,0,0,0);
      bVar4 = true;
    }
    break;
  case 0xe:
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x605] = 1;
    (*pcVar1)();
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    return true;
  case 0xf:
    FUN_00626190(0xa001d,0,0,0);
    return true;
  }
  return bVar4;
}

// 006273A0  FUN_006273a0  size=327  [between]
undefined4 __fastcall FUN_006273a0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_1 + 0x4e4) != 0) || (*(int *)(param_1 + 0x1074) != 0)) ||
      ((*(uint *)(param_1 + 0xeac) & 0x2000) != 0)) || ((*(uint *)(param_1 + 0xea8) & 0x800) != 0))
  {
    return 0;
  }
  iVar2 = FUN_0061c560();
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xfdffffff;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x618);
  uVar3 = uVar1 & 0xffff0000;
  if ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x2000000;
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
    if ((((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) && (*(int *)(param_1 + 0x105c) != 0)) &&
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
    if ((((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) && (*(int *)(param_1 + 0x105c) != 0)) &&
       (uVar3 == 0x110000)) {
      return 0;
    }
    uVar4 = 0x25;
  }
  FUN_00626190(uVar4,0,0,0);
  FUN_00c27f40(6,0x44e10000);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x4000000;
  return 1;
}

// 006274F0  FUN_006274f0  size=59  [between]
void __fastcall FUN_006274f0(int param_1)

{
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
    if (*(int *)(param_1 + 0x1814) != 1) {
      FUN_00626190(0xa0011,0,0,0);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfffdffff;
  }
  FUN_00626190(0xa001d,0,0,0);
  return;
}

// 00627530  FUN_00627530  size=68  [between]
void __fastcall FUN_00627530(int *param_1)

{
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffdffff;
                    /* WARNING: Could not recover jumptable at 0x0062754e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x605] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00627561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00626190(0xa0010,0,0,0);
  return;
}

// 00627580  FUN_00627580  size=79  [between]
void __fastcall FUN_00627580(int param_1)

{
  if (*(int *)(param_1 + 0x14ac) == 5) {
    FUN_006265b0();
    *(undefined4 *)(param_1 + 0x1074) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x14ac) != 6) {
    FUN_00626420();
    *(undefined4 *)(param_1 + 0x1074) = 0;
    return;
  }
  FUN_00626b70(1);
  FUN_00626b70(0);
  *(undefined4 *)(param_1 + 0x1074) = 0;
  return;
}

// 006275D0  FUN_006275d0  size=220  [between]
void __thiscall FUN_006275d0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x40001) {
    if (param_2 == 0x40000) {
      FUN_00626cc0(1);
      FUN_00626cc0(0);
      FUN_006265b0();
      return;
    }
    if (param_2 < 0x3000a) {
      if ((param_2 == 0x30009) || (param_2 == 0x20009)) goto LAB_0062769c;
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
LAB_0062769c:
      FUN_00626420();
      FUN_00626650();
      return;
    }
    if (param_2 != 0xd0002) {
      if (param_2 == 0x40001) {
        FUN_00626b70(1);
        FUN_00626b70(0);
        FUN_00626650();
        return;
      }
      if (param_2 < 0xd0000) {
        return;
      }
      if (0xd0001 < param_2) {
        return;
      }
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xdfffffff;
      iVar1 = FUN_0061f770();
      if (iVar1 == 0) {
        return;
      }
      FUN_00b2bca0(&DAT_0163b604,0);
      return;
    }
  }
  FUN_006264e0();
  FUN_006265b0();
  return;
}

// 006276B0  FUN_006276b0  size=292  [between]
void __fastcall FUN_006276b0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x294] != 0) {
    iVar3 = param_1[300];
    uVar2 = 0;
    if ((iVar3 == 0x28150) || (iVar3 == 0x28152)) {
      uVar2 = 1;
    }
    if (iVar3 == 0x28170) {
      uVar2 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar2,1,1);
  }
  FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
  param_1[0x3a9] = param_1[0x3a9] | 0x10000000;
  param_1[0x6e3] = -1;
  param_1[0x6e7] = -1;
  pcVar1 = *(code **)(*param_1 + 0x1d8);
  param_1[0x139] = 1;
  param_1[0x21c] = 0;
  param_1[0x6e4] = 0;
  param_1[0x6e5] = 0;
  param_1[0x6e6] = 0;
  param_1[0x6e8] = 0;
  param_1[0x6e9] = 0;
  param_1[0x6ea] = 0;
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    if (param_1[0x605] == 1) {
      FUN_00626190(0x60008,0,0,0);
      return;
    }
    iVar3 = FUN_00ac8a50();
    if (iVar3 != 0) {
      if (param_1[0x605] != 2) {
        return;
      }
      FUN_00620970(0,0xbf800000);
    }
    FUN_00626190(0xb0000,0,0,0);
    return;
  }
  FUN_00620970(0,0xbf800000);
  return;
}

// 006277E0  FUN_006277e0  size=873  [between]
void __fastcall FUN_006277e0(int param_1)

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
  if ((((0.0 <= *(float *)(param_1 + 0x1158)) || (iVar2 = FUN_00c15850(), iVar2 == 0)) ||
      (*(int *)(param_1 + 0x19b8) == 0)) ||
     (((*(int *)(param_1 + 0x19c0) == 0 || (*(int *)(param_1 + 0x14ac) != 1)) ||
      ((*(int *)(param_1 + 0x1488) == 0 || (25.0 <= *(float *)(param_1 + 0xa8c))))))) {
LAB_006278de:
    if ((((64.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
        (*(int *)(param_1 + 0x19c0) != 0)) ||
       ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    if ((((25.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
        (*(int *)(param_1 + 0x14ac) == 1)) && (*(int *)(param_1 + 0x1488) != 0)) {
      FUN_00626190(0xf,0,0,0);
      if ((((*(byte *)(param_1 + 0xeac) & 0x20) == 0) || (sVar1 = FUN_00dde2d0(0,3), sVar1 != 0)) ||
         ((iVar2 = FUN_00c15850(), iVar2 == 0 ||
          ((*(int *)(param_1 + 0x19b8) == 0 || (*(int *)(param_1 + 0x19c0) == 0)))))) {
        return;
      }
      goto LAB_006279e1;
    }
    if ((((9.0 <= *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
        (*(int *)(param_1 + 0x14ac) != 1)) || (*(int *)(param_1 + 0x1488) == 0)) {
      if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
        FUN_00626190(0x18,0,0,0);
      }
      if (*(float *)(param_1 + 0xa9c) <= 2.1816616) {
        if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
          FUN_00626190(0x17,0,0,0);
        }
        if (-2.1816616 <= *(float *)(param_1 + 0xa9c)) {
          if ((0.0 <= *(float *)(param_1 + 0x920)) && (*(int *)(param_1 + 0x19c0) != 0)) {
            return;
          }
          sVar1 = FUN_00dde2d0(0,1);
          if (sVar1 == 0) {
            FUN_00626190(0x11,0,0,0);
            return;
          }
          FUN_00626190(0x10,0,0,0);
          return;
        }
      }
      FUN_00626190(0x16,0,0,0);
      return;
    }
    FUN_00626190(0x12,0,0,0);
    if ((*(byte *)(param_1 + 0xeac) & 0x40) == 0) {
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
    if (*(int *)(param_1 + 0x19b8) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x19c0) == 0) {
      return;
    }
LAB_00627892:
    FUN_00626190(0x10000,0,0,0);
    uVar3 = FUN_00dde2a0(0,100);
    if ((uVar3 & 1) == 0) goto LAB_006278c8;
    uVar4 = 0x10001;
  }
  else {
    if ((*(byte *)(param_1 + 0xeac) & 0x40) != 0) {
      if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_006278de;
      goto LAB_00627892;
    }
LAB_006279e1:
    uVar4 = 0x10002;
  }
  FUN_00626190(uVar4,0,0,0);
LAB_006278c8:
  FUN_00c27260(0x40200000);
  return;
}

// 00627B50  FUN_00627b50  size=437  [between]
void __fastcall FUN_00627b50(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    if (((((float)param_1[0x456] < 0.0) &&
         ((((iVar3 = FUN_00c15850(), iVar3 != 0 && (param_1[0x66e] != 0)) && (param_1[0x670] != 0))
          && ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))))) &&
        ((*(byte *)(param_1 + 0x3ab) & 0x20) != 0)) && ((float)param_1[0x2a3] < 25.0)) {
      FUN_00626190(0x10002,0,0,0);
      FUN_00c27260(0x40200000);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00627cb4;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00626190(0x11,0,0,0);
      }
      else {
        FUN_00626190(0x10,0,0,0);
      }
    }
  }
LAB_00627cb4:
  if ((*(byte *)(param_1 + 0x3ab) & 0x40) == 0) {
    if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x00627d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((float)param_1[0x2a3] < 4.0) {
                    /* WARNING: Could not recover jumptable at 0x00627cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00627D10  FUN_00627d10  size=410  [between]
void __fastcall FUN_00627d10(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x61c) == 0) || (*(int *)(param_1 + 0xa84) == 0)) {
    return;
  }
  if (((((0.0 <= *(float *)(param_1 + 0x1158)) || (iVar3 = FUN_00c15850(), iVar3 == 0)) ||
       (*(int *)(param_1 + 0x19b8) == 0)) ||
      ((*(int *)(param_1 + 0x19c0) == 0 || (*(int *)(param_1 + 0x14ac) != 1)))) ||
     ((*(int *)(param_1 + 0x1488) == 0 || (36.0 <= *(float *)(param_1 + 0xa8c))))) {
    if (*(int *)(param_1 + 0x19c0) != 0) {
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
    if ((sVar2 != 0) && (*(int *)(param_1 + 0x1080) != 0)) {
      FUN_00626190(0x1a,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x1084) == 0) {
      return;
    }
    FUN_00626190(0x1b,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xeac) & 0x20) == 0) {
    if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_00627dfa;
    FUN_00626190(0x10000,0,0,0);
    uVar4 = FUN_00dde2a0(0,100);
    if ((uVar4 & 1) == 0) goto LAB_00627dfa;
    uVar5 = 0x10001;
  }
  else {
    uVar5 = 0x10002;
  }
  FUN_00626190(uVar5,0,0,0);
LAB_00627dfa:
  FUN_00c27260(0x40200000);
  return;
}

// 00627EB0  FUN_00627eb0  size=384  [between]
void __fastcall FUN_00627eb0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x61c) == 0) || (*(int *)(param_1 + 0xa84) == 0)) {
    return;
  }
  if ((((0.0 <= *(float *)(param_1 + 0x1158)) || (iVar3 = FUN_00c15850(), iVar3 == 0)) ||
      (*(int *)(param_1 + 0x19b8) == 0)) ||
     (((*(int *)(param_1 + 0x19c0) == 0 || (*(int *)(param_1 + 0x14ac) != 1)) ||
      ((*(int *)(param_1 + 0x1488) == 0 || (36.0 <= *(float *)(param_1 + 0xa8c))))))) {
    if (*(int *)(param_1 + 0x19c0) != 0) {
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
      FUN_00626190(0x1a,0,0,0);
      return;
    }
    FUN_00626190(0x1b,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xeac) & 0x20) == 0) {
    if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_00627f9a;
    FUN_00626190(0x10000,0,0,0);
    uVar4 = FUN_00dde2a0(0,100);
    if ((uVar4 & 1) == 0) goto LAB_00627f9a;
    uVar5 = 0x10001;
  }
  else {
    uVar5 = 0x10002;
  }
  FUN_00626190(uVar5,0,0,0);
LAB_00627f9a:
  FUN_00c27260(0x40200000);
  return;
}

// 00628030  FUN_00628030  size=295  [between]
void __fastcall FUN_00628030(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    return;
  }
  if (((((param_1[0x2a1] == 0) || (0.0 <= (float)param_1[0x456])) ||
       (iVar1 = FUN_00c15850(), iVar1 == 0)) || ((param_1[0x66e] == 0 || (param_1[0x670] == 0)))) ||
     ((param_1[0x52b] != 1 || ((param_1[0x522] == 0 || (25.0 <= (float)param_1[0x2a3])))))) {
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00628155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x3ab) & 0x20) == 0) {
    if (4.0 <= (float)param_1[0x2a3]) goto LAB_00628118;
    FUN_00626190(0x10000,0,0,0);
    uVar2 = FUN_00dde2a0(0,100);
    if ((uVar2 & 1) == 0) goto LAB_00628118;
    uVar3 = 0x10001;
  }
  else {
    uVar3 = 0x10002;
  }
  FUN_00626190(uVar3,0,0,0);
LAB_00628118:
  FUN_00c27260(0x40200000);
  return;
}

// 00628160  FUN_00628160  size=409  [between]
bool __thiscall FUN_00628160(int *param_1,int *param_2)

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
    FUN_00626190(0xa000f,0,0,0);
  }
  bVar3 = (param_2[0x24] & 0x8000000U) != 0;
  if (bVar3) {
    FUN_00626190(0xa0012,0,0,0);
  }
  bVar4 = (param_2[0x24] & 0x2000000U) != 0;
  if (bVar4) {
    FUN_00626190(0xa0004,0,0,0);
  }
  bVar5 = (*(byte *)((int)param_2 + 0x93) & 1) != 0;
  if (bVar5) {
    FUN_00626190(0xa000c,0,0,0);
  }
  bVar6 = (param_2[0x24] & 0x800000U) != 0;
  if (bVar6) {
    FUN_00626190(0xa0005,0,0,0);
  }
  bVar7 = (param_2[0x24] & 0x80000000U) != 0;
  if (bVar7) {
    FUN_00626190(0xa0017,0,0,0);
  }
  bVar8 = (param_2[0x24] & 0x40000000U) != 0;
  if (bVar8) {
    FUN_00626190(0xa0018,0,0,0);
  }
  bVar9 = (param_2[0x24] & 0x20000000U) != 0;
  if (bVar9) {
    FUN_00626190(0xa0019,0,0,0);
  }
  bVar9 = bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))))));
  if ((*param_2 == 0x4c) || (*param_2 == 0x4b)) {
    FUN_00626190(0xa0014,0,0,0);
    bVar9 = true;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 != 0) {
    FUN_00626190(0xa0006,0,0,0);
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x51d] = 1;
      FUN_00626190(0xa0007,0,0,0);
    }
    return true;
  }
  return bVar9;
}

// 00628300  FUN_00628300  size=41  [between]
void __fastcall FUN_00628300(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00627070();
    if (iVar1 != 0) {
      FUN_00626190(0x110001,0,0,0);
    }
  }
  return;
}

// 00628330  FUN_00628330  size=213  [between]
undefined4 __fastcall FUN_00628330(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x1814) != 2)) &&
      ((*(int *)(param_1 + 0x1074) != 0 ||
       ((((iVar2 = *(int *)(param_1 + 0x14ac), iVar2 != 1 && (iVar2 != 7)) && (iVar2 != 6)) &&
        (iVar2 != 5)))))) && ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0)) {
    iVar2 = FUN_006210d0();
    if (((iVar2 != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) && (*(int *)(param_1 + 0x19b8) != 0))
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
        FUN_00626190(sVar1 + 0x1a,uVar4,uVar5,uVar6);
        *(undefined4 *)(param_1 + 0x1150) = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 00628410  FUN_00628410  size=300  [between]
undefined4 __fastcall FUN_00628410(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x1814) != 2)) &&
       (*(int *)(param_1 + 0x1074) == 0)) &&
      (((iVar2 = *(int *)(param_1 + 0x14ac), iVar2 == 1 || (iVar2 == 7)) ||
       ((iVar2 == 6 || (iVar2 == 5)))))) && ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0)) {
    iVar2 = FUN_006210d0();
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x4b0) != 0x28170) && (*(float *)(param_1 + 0xa8c) < 6.25)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          FUN_00626190(0x10001,0,0,0);
          if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
            FUN_00626190(0x10005,0,0,0);
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
      FUN_00626190(sVar1 + 0x10010,uVar3,uVar4,uVar5);
      return 1;
    }
  }
  return 0;
}

// 00628540  FUN_00628540  size=535  [between]
void __fastcall FUN_00628540(int *param_1)

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
    goto LAB_0062865b;
  }
  FUN_00ac82f0();
  iVar2 = param_1[300];
  uVar3 = 0x19f;
  if (iVar2 == 0x28170) {
    uVar3 = 0x548;
  }
  if (2.4674013 <= (float)param_1[0x245] * (float)param_1[0x245]) {
LAB_006285a2:
    if (iVar2 != 0x28170) goto LAB_006285aa;
  }
  else {
    uVar3 = 0x1a0;
    if (iVar2 == 0x28170) {
      uVar3 = 0x54a;
      goto LAB_006285a2;
    }
LAB_006285aa:
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      uVar3 = 0x1a1;
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      uVar3 = 0x1a2;
    }
  }
  uVar4 = 0x8000000;
  if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
    uVar4 = 0x8000040;
  }
  FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
  FUN_00621370(&DAT_0163b604,1);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_0061dfc0();
LAB_0062865b:
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_00628330();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((float)param_1[0x2a3] < 30.25) && ((float)param_1[0x2a8] < 1.0471976)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_00628410();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00626190(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00628760  FUN_00628760  size=759  [between]
void __fastcall FUN_00628760(int *param_1)

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
    FUN_0061dfc0();
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
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      uVar4 = 0x481;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
    goto LAB_0062893b;
  case 3:
LAB_0062893b:
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
      if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
        FUN_0061bbf0(param_1[0x66d]);
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00626190(0x23,0,0,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_006287a2_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0xd);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
      FUN_0061bbf0(param_1[0x66d]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00626190(0x23,0,0,0);
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
switchD_006287a2_default:
  return;
}

// 00628A70  FUN_00628a70  size=362  [between]
void __fastcall FUN_00628a70(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar3 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(0x1d0,0,0,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0061dfc0();
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
    if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((float)param_1[0x2a3] < 30.25) && ((float)param_1[0x2a8] < 1.0471976)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_00628410();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00626190(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00628BE0  FUN_00628be0  size=983  [between]
void __fastcall FUN_00628be0(int *param_1)

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
    if (param_1[300] == 0x28170) {
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
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    FUN_0061dfc0();
    break;
  case 1:
    break;
  case 2:
    uVar6 = 0x4c4;
    if (param_1[300] == 0x28170) {
      uVar6 = 0x551;
    }
    if (param_1[0x250] == 1) {
      uVar6 = 0x4c8;
    }
    uVar4 = 0;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    goto LAB_00628e9b;
  case 3:
LAB_00628e9b:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 0x324))();
    if (iVar5 == 0) {
      return;
    }
LAB_00628ecf:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar6 = 0x4c5;
    if (param_1[300] == 0x28170) {
      uVar6 = 0x552;
    }
    if (param_1[0x250] == 1) {
      uVar6 = 0x4c9;
    }
    uVar4 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    FUN_0061bbf0(param_1[0x66d]);
    iVar5 = FUN_00627200();
    if (iVar5 != 0) {
      return;
    }
    if (param_1[0x139] == 0) {
      FUN_006274f0();
      return;
    }
    goto LAB_00628ecf;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00628c0b_default;
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
switchD_00628c0b_default:
  return;
}

// 00628FE0  FUN_00628fe0  size=82  [between]
void __fastcall FUN_00628fe0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 3) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00626190(0xa0009,0,0,0);
    }
  }
  return;
}

// 00629040  FUN_00629040  size=451  [between]
void __fastcall FUN_00629040(int *param_1)

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
    if (param_1[300] == 0x28170) {
      uVar4 = 0x54c;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    FUN_0061dfc0();
    (**(code **)(*param_1 + 0x220))(0x41000000);
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0x1a8;
    if (param_1[300] == 0x28170) {
      uVar2 = 0x54d;
    }
    FUN_00aa4080(uVar2,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00626190(0xa0009,0,0,0);
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

// 00629220  FUN_00629220  size=296  [between]
void __fastcall FUN_00629220(int param_1)

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
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(local_8[uVar1 & 1],0,local_c,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4b);
    *(float *)(param_1 + 0xa24) = (float)fVar4;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4c);
    *(float *)(param_1 + 0x894) = (float)fVar4;
    if (*(int *)(param_1 + 0x1474) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_0061dfc0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00626190(0xa0008,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00629350  FUN_00629350  size=70  [between]
void __fastcall FUN_00629350(int *param_1)

{
  int iVar1;
  
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00626190(0xa0009,0,0,0);
  }
  return;
}

// 006293A0  FUN_006293a0  size=252  [between]
void __fastcall FUN_006293a0(int param_1)

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
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1a8,0,uVar1,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4b);
    *(float *)(param_1 + 0xa24) = (float)fVar4;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    fVar4 = (float10)FUN_00ac85c0(5,0x4c);
    *(float *)(param_1 + 0x894) = (float)fVar4;
    if (*(int *)(param_1 + 0x1474) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_0061dfc0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00626190(0xa0008,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 006294A0  FUN_006294a0  size=87  [between]
void __fastcall FUN_006294a0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_0061dfc0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00626190(0xa0009,0,0,0);
  }
  return;
}

// 00629500  FUN_00629500  size=346  [between]
void __fastcall FUN_00629500(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar2 == 0) {
    uVar4 = 0x1a9;
    if (*(int *)(param_1 + 0x4b0) == 0x28170) {
      uVar4 = 0x54e;
    }
    uVar3 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,0x3c888889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0061dfc0();
LAB_006295e7:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto LAB_00629645;
    fVar1 = *(float *)(param_1 + 0x19b4) * 60.0;
    *(float *)(param_1 + 0x1158) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1158) = fVar1 + 120.0;
    }
    iVar2 = FUN_00627200();
    if (iVar2 != 0) goto LAB_00629645;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 3;
      goto LAB_00629645;
    }
  }
  else {
    if (iVar2 == 1) goto LAB_006295e7;
    if (iVar2 != 2) {
      return;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto LAB_00629645;
    fVar1 = *(float *)(param_1 + 0x19b4) * 60.0;
    *(float *)(param_1 + 0x1158) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1158) = fVar1 + 120.0;
    }
    iVar2 = FUN_00627200();
    if (iVar2 != 0) goto LAB_00629645;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      goto LAB_00629645;
    }
  }
  FUN_006274f0();
LAB_00629645:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00629660  FUN_00629660  size=41  [between]
void __fastcall FUN_00629660(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00627070();
    if (iVar1 != 0) {
      FUN_00626190(0x110001,0,0,0);
    }
  }
  return;
}

// 00629690  FUN_00629690  size=492  [between]
void __fastcall FUN_00629690(int *param_1)

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
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    FUN_0061dfc0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a952e0(0,0x41200000);
  if (iVar3 != 0) {
    FUN_00628330();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
      }
      if (((param_1[0x3a9] & 0x80000U) != 0) && (param_1[0x52b] == 2)) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfff7ffff;
        FUN_00626190(0x20005,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00626190(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00629880  FUN_00629880  size=201  [between]
void __fastcall FUN_00629880(int param_1)

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
    if (*(int *)(param_1 + 0x4b0) == 0x28170) {
      uVar4 = 0x564;
    }
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,uVar1,0x3f800000,uVar2,0xbf800000,0x3f800000);
    FUN_0061dfc0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00626190(0xa0015,2,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00629950  FUN_00629950  size=267  [between]
void __fastcall FUN_00629950(int param_1)

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
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
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
    FUN_0061dfc0();
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
      FUN_00627530();
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00629A60  FUN_00629a60  size=786  [between]
void __fastcall FUN_00629a60(int *param_1)

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
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1be,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    if (param_1[0x41d] == 0) {
      FUN_00621370(&DAT_0163b604,1);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0061dfc0();
    (**(code **)(*param_1 + 0x358))(param_1[0x5a7],param_1 + 0x5a8);
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
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
      if (param_1[0x5a7] == 200) {
        param_1[0x5a7] = 0xca;
      }
      if (param_1[0x5a7] == 0xc9) {
        param_1[0x5a7] = 0xcb;
      }
      (**(code **)(*param_1 + 0x358))(param_1[0x5a7],0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x1c0,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00629cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x1c2,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43960000;
    (**(code **)(*param_1 + 0x358))(param_1[0x5a7],param_1 + 0x5a8);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
      FUN_006274f0();
      return;
    }
  }
  return;
}

// 00629DA0  FUN_00629da0  size=230  [between]
void __fastcall FUN_00629da0(int param_1)

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
    if (*(int *)(param_1 + 0x4b0) == 0x28170) {
      uVar2 = 0x554;
    }
    FUN_00aa4080(uVar2,0,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0061dfc0();
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
  if ((iVar3 != 0) && (iVar3 = FUN_00627200(), iVar3 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_006274f0();
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00629E90  FUN_00629e90  size=483  [between]
void __fastcall FUN_00629e90(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar4 = 0x1aa;
    if (param_1[300] == 0x28170) {
      uVar4 = 0x557;
    }
    if (param_1[0x186] == 0xa0010) {
      uVar4 = 0x1ab;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(4);
  if (((iVar2 != 0) && (param_1[0x41d] == 0)) &&
     ((param_1[0x525] != 0 || ((float)param_1[0x2a3] <= 4.0)))) {
    uVar3 = FUN_00dde2a0(0,1000);
    if ((uVar3 & 1) == 0) {
      FUN_00626190(0x1b,0,0,0);
      return;
    }
    FUN_00626190(0x1a,0,0,0);
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) goto LAB_0062a05e;
  param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
  }
  if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x52b] != 1) ||
       (((param_1[0x2a1] == 0 || (iVar2 = FUN_00c15850(), iVar2 == 0)) ||
        (6.25 <= (float)param_1[0x2a3])))) goto LAB_0062a05e;
    if (1.0471976 < (float)param_1[0x2a8]) {
      FUN_00626190(0x10001,0,0,0);
    }
    if ((float)param_1[0x2a8] <= 2.0943952) goto LAB_0062a05e;
    uVar4 = 0x10005;
  }
  else {
    uVar4 = 0x23;
  }
  FUN_00626190(uVar4,0,0,0);
LAB_0062a05e:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0062A080  FUN_0062a080  size=838  [between]
void __fastcall FUN_0062a080(int *param_1)

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
LAB_0062a2a8:
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
LAB_0062a322:
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
      FUN_0061bbf0(param_1[0x66d]);
      iVar2 = FUN_00627200();
      if (iVar2 != 0) {
        return;
      }
      if (param_1[0x139] != 0) goto LAB_0062a322;
      goto LAB_0062a3b5;
    case 6:
      goto LAB_0062a152;
    default:
      break;
    }
switchD_0062a0af_default:
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
      FUN_0061bbf0(param_1[0x66d]);
      if (param_1[0x139] != 0) {
        param_1[0x187] = 4;
        return;
      }
LAB_0062a3b5:
      FUN_006274f0();
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
    if (param_1[0x139] != 0) goto LAB_0062a2a8;
  case 3:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0061bbf0(param_1[0x66d]);
      if (param_1[0x139] == 0) {
        FUN_006274f0();
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
    goto switchD_0062a0af_default;
  }
LAB_0062a152:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0062A400  FUN_0062a400  size=273  [between]
void __fastcall FUN_0062a400(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = 0x1db;
    if (param_1[300] == 0x28170) {
      uVar1 = 0x555;
    }
    param_1[0x225] = 0x3dcccccd;
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0061dfc0();
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
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    iVar2 = FUN_00627200();
    if (iVar2 == 0) {
      if (param_1[0x139] == 0) {
        FUN_006274f0();
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  return;
}

// 0062A520  FUN_0062a520  size=179  [between]
void __fastcall FUN_0062a520(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    FUN_00aa4080(0x191,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0061dfc0();
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
  if ((iVar1 != 0) && (iVar1 = FUN_00627200(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00627530();
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  return;
}

// 0062A5E0  FUN_0062a5e0  size=179  [between]
void __fastcall FUN_0062a5e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    FUN_00aa4080(0x192,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0061dfc0();
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
  if ((iVar1 != 0) && (iVar1 = FUN_00627200(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00627530();
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  return;
}

// 0062A6A0  FUN_0062a6a0  size=637  [between]
void __fastcall FUN_0062a6a0(int *param_1)

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
    if (param_1[0x3a8] == 0) {
      iVar4 = FUN_00ac82f0();
      if (iVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x3d088889;
      }
      if (param_1[0x3a6] == 8) {
        uVar5 = 0x8000040;
LAB_0062a708:
        uVar6 = 0x48f;
      }
      else if (param_1[0x3a6] == 9) goto LAB_0062a708;
      FUN_00aa4080(uVar6,0,uVar1,0x3f800000,uVar5,0xbf800000,0x3f800000);
    }
    iVar4 = param_1[0x52b];
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
      param_1[0x52b] = 0;
      param_1[0x41d] = 1;
    }
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      if (param_1[0x52c] == 4) {
        FUN_00626a10();
        param_1[0x52c] = 0;
      }
      param_1[0x3ab] = param_1[0x3ab] & 0xffff7fff;
    }
    if (param_1[0x41d] != 0) {
      param_1[0x52b] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0061dfc0();
    param_1[0x5a4] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0062a8c1;
  iVar4 = FUN_00a94ce0(0);
  if ((iVar4 != 0) && (iVar4 = FUN_00627200(), iVar4 == 0)) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x605] = 1;
    (*pcVar2)();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0062a8c1:
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
    param_1[0x3a9] = param_1[0x3a9] | 0x20000;
  }
  return;
}

// 0062A920  FUN_0062a920  size=624  [between]
void __fastcall FUN_0062a920(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar6 = 0x379;
  if (param_1[300] == 0x28170) {
    uVar6 = 0x575;
  }
  if (param_1[0x187] == 0) {
    if (param_1[0x3a8] == 0) {
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
    if ((param_1[0x186] == 0xa001c) && ((param_1[0x52b] == 2 || (param_1[0x52b] == 3)))) {
      bVar2 = true;
    }
    iVar5 = param_1[0x52b];
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
      param_1[0x52b] = 0;
      param_1[0x41d] = 1;
    }
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      if (param_1[0x52c] == 4) {
        FUN_00626a10();
        param_1[0x52c] = 0;
      }
      param_1[0x3ab] = param_1[0x3ab] & 0xffff7fff;
    }
    if (param_1[0x41d] != 0) {
      param_1[0x52b] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0061dfc0();
  }
  else if (param_1[0x187] != 1) goto LAB_0062ab64;
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    param_1[0x605] = 2;
    if (param_1[0x186] == 0xa001c) {
      param_1[0x605] = 2;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0062ab64:
  iVar5 = FUN_00a8c760(0xe);
  if ((iVar5 != 0) && (param_1[0x139] == 0)) {
    FUN_00e5e0c0("em0010_vo_line_amputate_arm1",param_1,0xffffffff,0);
  }
  return;
}

// 0062AB90  FUN_0062ab90  size=938  [between]
void __fastcall FUN_0062ab90(int *param_1)

{
  float fVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x5d7] = 1;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x3a8] != 0) goto LAB_0062adc3;
    iVar4 = param_1[300];
    uVar6 = 0x1b0;
    if (iVar4 == 0x28170) {
      uVar6 = 0x55a;
    }
    break;
  case 1:
    goto switchD_0062abb9_caseD_1;
  case 2:
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    FUN_00620a80(param_1[0x606]);
    if ((param_1[0x3a9] & 0x100U) != 0) {
      FUN_00626190(0xb000b,0,0,0);
    }
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_0062abb9_default;
  }
  uVar5 = 0x8000000;
  switch(param_1[0x3a6]) {
  case 1:
    uVar6 = 0x1b0;
    if (iVar4 == 0x28170) {
      uVar6 = 0x55a;
    }
    switch(param_1[0x527]) {
    case 0:
      uVar6 = 0x1b0;
      if (iVar4 == 0x28170) {
        uVar6 = 0x55a;
      }
      break;
    case 1:
      uVar6 = 0x1b1;
      if (iVar4 == 0x28170) {
        uVar6 = 0x55b;
      }
      break;
    case 2:
      uVar6 = 0x1b2;
      if (iVar4 == 0x28170) {
        uVar6 = 0x55c;
      }
      break;
    case 3:
      uVar6 = 0x1b2;
      if (iVar4 == 0x28170) {
        uVar6 = 0x55c;
      }
      uVar5 = 0x8000040;
    }
    if ((param_1[0x3a9] & 0x20000U) != 0) {
      uVar6 = 0x4a1;
    }
    goto switchD_0062acb4_default;
  case 2:
    uVar6 = 0x1b4;
    if (iVar4 == 0x28170) {
      uVar6 = 0x55e;
    }
    switch(param_1[0x527]) {
    case 0:
      uVar6 = 0x1b6;
      if (iVar4 == 0x28170) {
        uVar6 = 0x560;
      }
      bVar3 = FUN_00dde2a0(0,100);
      if ((bVar3 & 1) != 0) {
        uVar6 = 0x192;
      }
      break;
    case 1:
      uVar6 = 0x1b7;
      if (iVar4 == 0x28170) {
        uVar6 = 0x561;
      }
      break;
    case 2:
      uVar5 = 0x8000040;
    case 3:
      uVar6 = 0x1b9;
    }
    goto switchD_0062acb4_default;
  case 3:
    uVar6 = 0x364;
    break;
  case 10:
  case 0x17:
    uVar6 = 0x4d7;
    goto switchD_0062acb4_default;
  case 0xb:
  case 0x18:
    uVar6 = 0x4d6;
    goto switchD_0062acb4_default;
  case 0xc:
  case 0x1a:
    goto switchD_0062ac01_caseD_c;
  case 0xd:
    uVar6 = 0x4db;
    goto switchD_0062acb4_default;
  case 0x13:
    uVar6 = 0x4f0;
    if (param_1[0x527] == 1) goto switchD_0062ac01_caseD_15;
    break;
  case 0x14:
    uVar6 = 0x4f2;
    break;
  case 0x15:
switchD_0062ac01_caseD_15:
    uVar6 = 0x4f1;
    break;
  case 0x16:
    uVar6 = 0x4f0;
    break;
  case 0x19:
    FUN_00dde300(0x3f666666,0x3f99999a);
    goto switchD_0062ac01_caseD_c;
  }
switchD_0062ac01_caseD_4:
  FUN_00aa4080(uVar6,0,0x3c888889,0x3f800000,uVar5,0xbf800000,0x3f800000);
LAB_0062adc3:
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00620970(param_1[0x606],0xbf800000);
  fVar7 = (float10)FUN_00dde300(0,0x42700000);
  param_1[0x248] = (int)(float)fVar7;
switchD_0062abb9_caseD_1:
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
    param_1[0x5a4] = 0;
  }
switchD_0062abb9_default:
  iVar4 = FUN_00a8c760(0xc);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0062aeb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))();
    return;
  }
  return;
switchD_0062ac01_caseD_c:
  uVar6 = 0x4dc;
switchD_0062acb4_default:
  FUN_00dde300(0x3f666666,0x3f99999a);
  goto switchD_0062ac01_caseD_4;
}

// 0062AFC0  FUN_0062afc0  size=471  [between]
void __fastcall FUN_0062afc0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  local_8[0] = 0x1bb;
  local_8[1] = 0x1bc;
  *(undefined4 *)(param_1 + 0x175c) = 1;
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
    FUN_00620970(*(undefined4 *)(param_1 + 0x1818),0xbf800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_00ac8410(), iVar3 == 0)) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_00eaa6e0(0x41200000,0);
      *(undefined4 *)(param_1 + 0x6bc) = 1;
      *(undefined4 *)(param_1 + 0x1690) = 0;
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0x61c) = 3;
    FUN_00620a80(*(undefined4 *)(param_1 + 0x1818));
    if ((*(uint *)(param_1 + 0xea4) & 0x100) != 0) {
      FUN_00626190(0xb000b,0,0,0);
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

// 0062B1B0  FUN_0062b1b0  size=157  [between]
void __fastcall FUN_0062b1b0(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_0061dfc0();
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    FUN_00620a80(*(undefined4 *)(param_1 + 0x1818));
    if ((*(uint *)(param_1 + 0xea4) & 0x100) != 0) {
      FUN_00626190(0xb000b,0,0,0);
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

// 0062B250  FUN_0062b250  size=377  [between]
void __fastcall FUN_0062b250(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 unaff_ESI;
  float10 fVar3;
  
  param_1[0x3a9] = param_1[0x3a9] | 0x4000000;
  iVar2 = param_1[0x187];
  param_1[0x139] = 1;
  param_1[0x5d7] = 1;
  if (iVar2 == 0) {
    param_1[0x187] = 1;
    FUN_0061dfc0();
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
      FUN_0061c7c0((float)(fVar3 - (float10)0.011111111));
      return;
    }
    (**(code **)(*param_1 + 0x364))(0x20010);
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    FUN_0061c7c0(unaff_ESI);
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] < 0.0) &&
     (param_1[0x187] = param_1[0x187] + 1, (param_1[0x3a9] & 0x100U) != 0)) {
    FUN_00626190(0xb000b,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0062B3D0  FUN_0062b3d0  size=50  [between]
void FUN_0062b3d0(void)

{
  undefined4 uVar1;
  
  FUN_00a81330();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  FUN_00626190(6,0,0,0);
  return;
}

// 0062B410  Em8010::vf108  size=138  [class]
void __thiscall Em8010::vf108(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 0:
    FUN_00626190(0xb,0,0,0);
    return;
  case 1:
    uVar2 = 0x23;
    break;
  case 2:
    uVar2 = 0x13;
    break;
  case 3:
    FUN_00626420();
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x41d] = 0;
    (*pcVar1)();
    return;
  default:
    (**(code **)(*param_1 + 0x34c))();
    FUN_00dd5650(&DAT_0164664c);
    return;
  }
  FUN_00626190(uVar2,0,0,0);
  FUN_00626420();
  param_1[0x41d] = 0;
  return;
}

// 0062B4B0  Em8010::vf264  size=705  [class]
undefined4 __thiscall Em8010::vf264(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040ac60(param_2);
  param_1[0x5f8] = param_1[0x2e1];
  if (param_1[0x2e1] != 0) {
    param_1[0x5f4] = param_1[0x2e3];
    param_1[0x5f5] = param_1[0x2e4];
    param_1[0x5f6] = param_1[0x2e5];
    param_1[0x5f7] = 0x3f800000;
    param_1[0x5f9] = param_1[0x2e2];
  }
  if (param_1[0x2bf] == 5) {
    param_1[0x5f4] = param_1[0x2e3];
    param_1[0x5f5] = param_1[0x2e4];
    param_1[0x5f6] = param_1[0x2e5];
    param_1[0x5f7] = 0x3f800000;
  }
  FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  if (((param_1[299] == 10) || ((*(byte *)(param_1 + 0x12a) & 4) == 0 && param_1[0x5f8] != 4)) &&
     (param_1[0x2c2] != -1)) {
    FUN_00626190(0,0,0,0);
    param_1[0x3a9] = param_1[0x3a9] | 0x80;
  }
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if ((param_1[0x1f6] != 0) && (*(int *)(param_1[0x1f6] + 0x810) != 0)) {
    FUN_00a8d580(0x40000);
  }
  if (param_1[0x2c9] != -1) {
    FUN_00626190(0x100005,0,0,0);
  }
  if (param_1[299] == 1) {
    param_1[0x5e0] = (int)((float)(int)*(short *)(param_2 + 4) * 45.0 + 300.0);
    iVar1 = FUN_00c19e40(*(undefined4 *)(param_2 + 0xec),(int)*(short *)(param_2 + 2));
    if ((iVar1 != 0) && (FUN_00a7c8a0(), param_1[0x1d9] != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_008e26e0(uVar2);
    }
  }
  FUN_0061c600();
  if (((param_1[0x12a] & 0x10000U) != 0) &&
     (((char)param_1[0x2ea] == '\x01' ||
      (iVar1 = FUN_0094ea60(0x6f2396e8,(int)(char)param_1[0x2ea]), iVar1 == 0)))) {
    param_1[0x3a9] = param_1[0x3a9] | 0x200000;
    (**(code **)(*param_1 + 0x358))(0x17c,param_1 + 0x640);
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
    if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
      FUN_00ac85c0(5,0xb5);
    }
    if (param_1[300] == 0x28170) {
      FUN_00ac85c0(5,0xb6);
    }
    FUN_00a8eea0();
    uVar2 = FUN_00fdbc60();
    FUN_00a8edf0(uVar2);
  }
  return 1;
}

// 0062B780  FUN_0062b780  size=1284  [between]
void __fastcall FUN_0062b780(int *param_1)

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
  
  param_1[0x3a9] = param_1[0x3a9] | 0x400000;
  iVar4 = FUN_00a82e60();
  if (iVar4 == 0) {
    iVar4 = param_1[0x2a1];
    param_1[0x5e4] = *(int *)(iVar4 + 0x40);
    param_1[0x5e5] = *(int *)(iVar4 + 0x44);
    param_1[0x5e6] = *(int *)(iVar4 + 0x48);
    param_1[0x5e7] = *(int *)(iVar4 + 0x4c);
  }
  iVar4 = FUN_00a82e70();
  if ((iVar4 != 0) && ((*(byte *)(param_1 + 0x3a9) & 0x40) != 0)) {
    param_1[0x5e4] = param_1[0x34c];
    param_1[0x5e5] = param_1[0x34d];
    param_1[0x5e6] = param_1[0x34e];
    param_1[0x5e7] = param_1[0x34f];
    param_1[0x3a9] = param_1[0x3a9] & 0xffbfffff;
  }
  iVar4 = param_1[0x2a1];
  param_1[0x5ec] = *(int *)(iVar4 + 0x40);
  param_1[0x5ed] = *(int *)(iVar4 + 0x44);
  param_1[0x5ee] = *(int *)(iVar4 + 0x48);
  param_1[0x5ef] = *(int *)(iVar4 + 0x4c);
  iVar4 = FUN_00a85630();
  if ((iVar4 == 2) || (iVar4 = FUN_00a85630(), iVar4 == 5)) {
    iVar4 = param_1[0x2a1];
    if ((iVar4 == 0) || (param_1[0x5f8] != 3)) {
      param_1[0x5e4] = param_1[0x5f4];
      param_1[0x5e5] = param_1[0x5f5];
      param_1[0x5e6] = param_1[0x5f6];
      iVar4 = param_1[0x5f7];
    }
    else {
      param_1[0x5e4] = *(int *)(iVar4 + 0x40);
      param_1[0x5e5] = *(int *)(iVar4 + 0x44);
      param_1[0x5e6] = *(int *)(iVar4 + 0x48);
      iVar4 = *(int *)(iVar4 + 0x4c);
    }
    pfVar5 = (float *)(param_1 + 0x5e4);
    param_1[0x5e7] = iVar4;
    param_1[0x608] = param_1[0x5f4];
    param_1[0x609] = param_1[0x5f5];
    param_1[0x60a] = param_1[0x5f6];
    param_1[0x60b] = param_1[0x5f7];
    fVar6 = (float10)*pfVar5 - (float10)(float)param_1[0x10];
    fVar7 = (float10)(float)param_1[0x5e6] - (float10)(float)param_1[0x12];
    fVar1 = (float)(((float10)(float)param_1[0x5e5] - (float10)(float)param_1[0x11]) *
                    ((float10)(float)param_1[0x5e5] - (float10)(float)param_1[0x11]) + fVar6 * fVar6
                   + fVar7 * fVar7);
    fVar6 = (float10)fpatan(fVar6,fVar7);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
    fVar2 = 0.5;
    if (param_1[0x5f8] == 3) {
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
        if (param_1[0x41d] != 0) {
          FUN_00626190(0x23,0,0,0);
          FUN_00a8e880(pfVar5);
          return;
        }
      }
    }
    FUN_00a8e880(pfVar5);
    return;
  }
  local_20 = (float)param_1[0x5e4];
  pfVar5 = (float *)(param_1 + 0x5e8);
  local_1c = (float)param_1[0x5e5];
  local_18 = (float)param_1[0x5e6];
  local_14 = param_1[0x5e7];
  *pfVar5 = (float)param_1[0x5e4];
  param_1[0x5e9] = param_1[0x5e5];
  param_1[0x5ea] = param_1[0x5e6];
  param_1[0x5eb] = param_1[0x5e7];
  param_1[0x5fa] = 0;
  if (param_1[0x51c] != 0) {
    FUN_00a8d330(param_1 + 0x10,param_1 + 0x5e4);
    param_1[0x51c] = 0;
  }
  iVar4 = FUN_00aa09c0(pfVar5,0x3fc00000,0);
  if ((iVar4 != 0) && (iVar4 = FUN_00a8d380(), iVar4 != 0)) {
    param_1[0x5fa] = 1;
  }
  if ((param_1[0x3aa] & 0x8000U) == 0) {
    iVar4 = FUN_00a979d0();
    if (iVar4 == 0) {
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      param_1[0x68d] = iVar4;
      if (iVar4 != 0) {
        param_1[0x3aa] = param_1[0x3aa] | 0x8000;
      }
    }
  }
  else {
    iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
    if (((param_1[0x68d] != 0) && (iVar4 != 0)) &&
       (*(int *)(param_1[0x68d] + 0xc) != *(int *)(iVar4 + 0xc))) {
      param_1[0x51c] = 1;
      param_1[0x3aa] = param_1[0x3aa] & 0xffff7fff;
    }
  }
  FUN_00a979f0(&local_2c);
  *pfVar5 = local_2c;
  param_1[0x5e9] = local_28;
  param_1[0x5ea] = local_24;
  param_1[0x5eb] = 0x3f800000;
  if (param_1[0x670] == 0) {
    if (param_1[0x5fa] != 0) goto LAB_0062ba5d;
  }
  else {
    bVar3 = false;
    iVar4 = FUN_00a8d3d0(6);
    if ((iVar4 != 0) &&
       (bVar3 = true,
       ((float)param_1[0x10] - local_20) * ((float)param_1[0x10] - local_20) +
       ((float)param_1[0x11] - local_1c) * ((float)param_1[0x11] - local_1c) +
       ((float)param_1[0x12] - local_18) * ((float)param_1[0x12] - local_18) <
       ((float)param_1[0x11] - (float)param_1[0x5e9]) *
       ((float)param_1[0x11] - (float)param_1[0x5e9]) +
       ((float)param_1[0x10] - *pfVar5) * ((float)param_1[0x10] - *pfVar5) +
       ((float)param_1[0x12] - (float)param_1[0x5ea]) *
       ((float)param_1[0x12] - (float)param_1[0x5ea]))) {
      bVar3 = false;
    }
    if (param_1[0x67c] != 0) {
      bVar3 = true;
    }
    fVar1 = (float)param_1[0x2a3];
    if ((NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) && (!bVar3)) goto LAB_0062ba5d;
  }
  local_20 = *pfVar5;
  local_1c = (float)param_1[0x5e9];
  local_18 = (float)param_1[0x5ea];
  local_14 = param_1[0x5eb];
  param_1[0x3a9] = param_1[0x3a9] & 0xffbfffff;
LAB_0062ba5d:
  FUN_00a8e880(&local_20);
  if (((4.0 <= ABS(local_1c - (float)param_1[0x11])) && (iVar4 = FUN_00a8d3d0(7), iVar4 == 0)) &&
     (iVar4 = FUN_00a8d3d0(8), iVar4 == 0)) {
    param_1[0x51c] = 1;
    return;
  }
  return;
}

// 0062BC90  Em8010::vf268  size=1209  [class]
undefined4 __thiscall
Em8010::vf268(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_1[0x139] != 0) && ((param_1[0x3a9] & 0x100U) == 0)) {
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
    if (((param_1[0x3aa] & 0x80000U) == 0) || (iVar2 = FUN_00ac8170(param_2), iVar2 == 0)) {
      FUN_00a883f0(4,0,&local_20);
      return 1;
    }
  default:
    return 0;
  case 4:
    param_1[0x5e0] = (int)((float)(int)(short)param_1[0x2ad] * 45.0 + 10.0);
    return 1;
  case 9:
    param_1[0x2fa] = 0;
    return 1;
  case 10:
    iVar2 = param_1[0x5f8];
    if (iVar2 == 6) {
      uVar3 = FUN_006210d0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        FUN_00626190(0xd0001,0,0,0);
        return 1;
      }
    }
    if ((iVar2 == 1) || (iVar2 == 3)) {
      FUN_00a82d70(4,0x44160000);
    }
    if (param_1[0x5f8] == 2) {
      FUN_00a82d70(3,0x44160000);
    }
    FUN_00a82d70(5,0xbf800000);
    FUN_00626190(10,0,0,0);
    (**(code **)(*param_1 + 0x314))();
    FUN_0061dfc0();
    return 1;
  case 0xf:
    param_1[0x2fa] = 1;
    return 1;
  case 0x15:
    if ((*(byte *)(param_1 + 0x3a9) & 0x80) != 0) {
      FUN_00ac4710(param_4[0xb]);
      FUN_00a8d710(param_1 + 0x10);
      param_1[0x2c2] = param_4[0xb];
      return 1;
    }
    FUN_00aa0ba0(param_4[0xb],param_1[0x2e7]);
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x3a9] = param_1[0x3a9] | 0x80;
    param_1[0x2c2] = param_4[0xb];
    return 1;
  case 0x16:
    FUN_00626190(9,0,0,0);
    FUN_0061dfc0();
    return 1;
  case 0x17:
    FUN_00626190(0x3000b,0,0,0);
    FUN_0061dfc0();
    return 1;
  case 0x18:
    FUN_00626190(0x120003,0,0,0);
    FUN_0061dfc0();
    return 1;
  case 0x19:
    FUN_00626190(0x120002,0,0,0);
    FUN_0061dfc0();
    return 1;
  case 0x1a:
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffeff;
    param_1[0x139] = 1;
    FUN_00626190(0xb0002,0,0,0);
    FUN_0061dfc0();
    return 1;
  case 0x1c:
    param_1[0x3ab] = param_1[0x3ab] & 0xffffefff;
    param_1[0x3aa] = param_1[0x3aa] & 0xfffbffff;
    iVar2 = param_1[0x52b];
    if ((iVar2 == 1) || (iVar2 == 7)) {
      iVar1 = param_1[0x52c];
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
      if (param_1[0x52c] == 0) {
        param_1[0x128] = 1;
      }
      if (param_1[0x52c] == 1) {
        param_1[0x128] = 6;
      }
    }
    if (iVar2 == 3) {
      iVar2 = param_1[0x52c];
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
    param_1[0x3aa] = param_1[0x3aa] & 0xfffff7ff;
    param_1[0x1bb] = 1;
    return 1;
  case 0x1e:
    param_1[0x3aa] = param_1[0x3aa] | 0x80000000;
    return 1;
  case 0x1f:
    param_1[0x3aa] = param_1[0x3aa] & 0x7fffffff;
    return 1;
  case 0x21:
    if (param_1[0x2c2] != -1) {
      FUN_00a8d790(&local_2c);
      param_1[0x5e4] = local_2c;
      param_1[0x5e5] = local_28;
      param_1[0x5e6] = local_24;
      param_1[0x5e7] = 0x3f800000;
      FUN_00626190(7,0,0,0);
      FUN_0061dfc0();
      return 1;
    }
    break;
  case 0x22:
    FUN_00626190(0x120005,0,0,0);
    param_1[0x250] = 0;
    return 1;
  case 0x23:
    FUN_00626190(0x120005,0,0,0);
    param_1[0x250] = 1;
  }
  return 1;
}

// 0062C1C0  Em8010::vf50  size=447  [class]
void __fastcall Em8010::vf50(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0x14ac) == 2) || (*(int *)(param_1 + 0x14ac) == 3)) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8d230(param_1 + 6000);
    }
    if (*(int *)(param_1 + 0x1b6c) != 0) {
      FUN_00a8d230(param_1 + 6000);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1758);
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x19c0) == 0) && ((*(uint *)(param_1 + 0xea8) & 0x20000) == 0)) {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xfffdffff;
    if ((*(int *)(param_1 + 0x175c) != 0) || ((*(uint *)(param_1 + 0xeac) & 0x2000) != 0)) {
      uVar5 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x1760);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(param_1 + 6000,0,uVar5,0,iVar4 != 0,uVar1);
  }
  else {
    FUN_00a84720();
  }
  *(undefined4 *)(param_1 + 0x1758) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x175c) = 0;
  *(undefined4 *)(param_1 + 0x1760) = 0;
  *(undefined4 *)(param_1 + 0x768) = 1;
  if ((*(byte *)(param_1 + 0xea7) & 1) == 0) {
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
  *(float *)(param_1 + 0x1c14) = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x13a8) != 0) {
    if (*(int *)(param_1 + 0x1b6c) != 0) {
      FUN_00624080(*(int *)(param_1 + 0x1b6c) + 0x40);
    }
    *(undefined4 *)(param_1 + 0x13a8) = 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  FUN_00ac95d0();
  return;
}

// 0062C380  Em8010::vf150  size=337  [class]
void __thiscall Em8010::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return;
  }
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b90) = 0;
  *(undefined4 *)(param_1 + 0x1b94) = 0;
  *(undefined4 *)(param_1 + 0x1b98) = 0;
  if (param_2 == 0x28) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0x29) {
      if (param_2 == 0x24) {
        FUN_00626190(0xa000e,0,0,0);
        return;
      }
      if (param_2 == 0x25) {
        FUN_0061e230();
        if ((DAT_01bea094 & 0x20000) == 0) {
          FUN_00626190(0xb0005,0,0,0);
          return;
        }
        FUN_00626190(0xb0008,0,0,0);
        return;
      }
      if (param_2 == 0x26) {
        FUN_0061e230();
        if ((DAT_01bea094 & 0x20000) == 0) {
          FUN_00626190(0xb0006,0,0,0);
          return;
        }
        FUN_00626190(0xb0009,0,0,0);
        return;
      }
      if (param_2 != 0x27) {
        return;
      }
      FUN_00626190(0xb0007,0,0,0);
      FUN_0061e230();
      return;
    }
    uVar1 = 6;
  }
  FUN_00626190(0xa0022,uVar1,0,0);
  FUN_0061e230();
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x8000000;
  return;
}

// 0062C4E0  FUN_0062c4e0  size=260  [between]
void __fastcall FUN_0062c4e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x3a9] = param_1[0x3a9] | 0x800002;
  if (param_1[0x187] == 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x4000;
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
  param_1[0x608] = param_1[0x14];
  param_1[0x609] = param_1[0x15];
  param_1[0x60a] = param_1[0x16];
  param_1[0x60b] = param_1[0x17];
  if (param_1[0x5f8] == 5) {
    uVar2 = 0x23;
  }
  else {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x3aa] & 0x40000U) != 0) goto LAB_0062c5d7;
    uVar2 = 0x13;
  }
  FUN_00626190(uVar2,0,0,0);
LAB_0062c5d7:
                    /* WARNING: Could not recover jumptable at 0x0062c5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

// 0062C5F0  FUN_0062c5f0  size=713  [between]
void __fastcall FUN_0062c5f0(int *param_1)

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
  if (param_1[0x52b] == 1) {
    uVar4 = 4;
  }
  param_1[0x3a9] = param_1[0x3a9] | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3a9] = param_1[0x3a9] | 0x4000;
    FUN_00aa4080(uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x5e0];
    param_1[0x5e0] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar4 = 0x44c;
    if (param_1[0x52b] == 1) {
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
      if (param_1[0x52b] == 1) {
        uVar4 = 0x13;
      }
      else {
        uVar4 = 0x20005;
      }
      FUN_00626190(uVar4,0,0,0);
      (**(code **)(*param_1 + 0x314))();
      if (param_1[0x5f8] == 1) {
        FUN_00a82d70(4,0x44160000);
        FUN_00a82d70(2,0x44160000);
      }
      if (param_1[0x5f8] == 2) {
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

// 0062C8D0  FUN_0062c8d0  size=760  [between]
void __fastcall FUN_0062c8d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x3a9] = param_1[0x3a9] | 0x800002;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3a9] = param_1[0x3a9] | 0x4000;
    FUN_00aa4080(0x2d6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a88b50(4,0);
    (**(code **)(*param_1 + 0x358))(0xff,param_1 + 0x3ac);
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
                    /* WARNING: Could not recover jumptable at 0x0062c9df. Too many branches */
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
    if (param_1[300] == 0x28170) {
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
      param_1[0x608] = param_1[0x14];
      param_1[0x609] = param_1[0x15];
      param_1[0x60a] = param_1[0x16];
      param_1[0x60b] = param_1[0x17];
      if (param_1[0x5f8] == 5) {
        uVar4 = 0x23;
      }
      else {
        uVar4 = 0x13;
      }
      FUN_00626190(uVar4,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x0062cbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  }
  return;
}

// 0062CBE0  FUN_0062cbe0  size=669  [between]
void __fastcall FUN_0062cbe0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    if ((((float)param_1[0x456] < 0.0) &&
        ((((iVar3 = FUN_00c15850(), iVar3 != 0 && (param_1[0x66e] != 0)) && (param_1[0x670] != 0))
         && ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))))) && ((float)param_1[0x2a3] < 25.0)) {
      FUN_00626190(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00626190(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00626190(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00626190(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00626190(0x10005,0,0,0);
        }
      }
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    if (param_1[0x525] == 0) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_0062ce59;
      }
    }
    else if (param_1[0x670] != 0) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x526] == 0) {
        return;
      }
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00626190(sVar2 + 0x1c,uVar4,uVar5,uVar6);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 != 1) {
        return;
      }
      FUN_00626190(0x110001,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00626190(0x11,0,0,0);
      }
      else {
        FUN_00626190(0x10,0,0,0);
      }
    }
  }
LAB_0062ce59:
  if (16.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0062ce7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0062CE90  FUN_0062ce90  size=658  [between]
void __fastcall FUN_0062ce90(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x5d7] = 1;
  (*pcVar1)();
  param_1[0x3a9] = param_1[0x3a9] | 0x800002;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3a9] = param_1[0x3a9] | 0x4000;
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
    if ((param_1[299] == 9) && (param_1[0x52b] == 1)) {
      uVar2 = 0x4c0;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x30);
    if (iVar3 != 0) {
      FUN_00626420();
      param_1[0x41d] = 0;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if ((param_1[0x5f8] != 4) && ((*(byte *)(param_1 + 0x12a) & 4) == 0)) {
        if (param_1[0x5f8] != 5) {
          if (param_1[299] == 9) {
            fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
            param_1[0x6a0] = (int)(float)(fVar4 * (float10)60.0);
          }
                    /* WARNING: Could not recover jumptable at 0x0062d0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        FUN_00626190(0x23,0,0,0);
        fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
        param_1[0x6a0] = (int)(float)(fVar4 * (float10)60.0);
        return;
      }
      if (param_1[0x2c2] == -1) {
                    /* WARNING: Could not recover jumptable at 0x0062d11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00626190(0,0,0,0);
      param_1[0x3a9] = param_1[0x3a9] | 0x80;
      return;
    }
  }
  return;
}

// 0062D140  FUN_0062d140  size=160  [between]
void __fastcall FUN_0062d140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x1bc8) != 0) {
      *(undefined4 *)(param_1 + 0x1b9c) = 0;
      *(undefined4 *)(param_1 + 0x1ba0) = 1;
      FUN_00626190(0x1000a,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00626190(0x23,0,0,0);
    }
  }
  return;
}

// 0062D1E0  FUN_0062d1e0  size=514  [between]
void __fastcall FUN_0062d1e0(int *param_1)

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
  
  param_1[0x5d7] = 1;
  uVar4 = 0x1ff;
  if (param_1[300] == 0x28170) {
    uVar4 = 0x525;
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
LAB_0062d233:
    if (param_1[0x52b] == 2) {
      uVar4 = 0x3d;
    }
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      uVar4 = 0x468;
    }
    FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    if (iVar3 == 1) goto LAB_0062d233;
    if (iVar3 != 2) {
      return;
    }
  }
  local_2c = (float)param_1[0x608];
  local_28 = (float)param_1[0x609];
  local_24 = (float)param_1[0x60a];
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] == 0) {
    param_1[0x5e4] = param_1[0x608];
    param_1[0x5e5] = param_1[0x609];
    param_1[0x5e6] = param_1[0x60a];
    param_1[0x5e7] = param_1[0x60b];
    fVar1 = ((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
            ((float)param_1[0x11] - local_28) * ((float)param_1[0x11] - local_28) +
            ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c);
    if (fVar1 < 2.25 == (fVar1 == 2.25)) goto LAB_0062d36d;
  }
  else {
    cVar2 = FUN_00c9db20(0);
    iVar3 = FUN_00a97e60(0x3f800000,0);
    if ((iVar3 != 0) && (cVar2 != '\0')) {
      FUN_00626190(1,0,0,0);
    }
    iVar3 = FUN_00a85630();
    if (iVar3 != 1) goto LAB_0062d36d;
  }
  FUN_00626190(1,0,0,0);
LAB_0062d36d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 0062D3F0  FUN_0062d3f0  size=109  [between]
void __fastcall FUN_0062d3f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
      return;
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00626190(0x23,0,0,0);
    }
  }
  return;
}

// 0062D460  FUN_0062d460  size=440  [between]
void __fastcall FUN_0062d460(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_c [3];
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  local_c[1] = 0x2e3;
  local_c[2] = 0x2e5;
  local_c[0] = 0x2e7;
  uVar7 = 5;
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0x14ac) == 2) {
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
    if ((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) {
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
        *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_1 + 0x1820);
        *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(param_1 + 0x1824);
        *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_1 + 0x1828);
        *(undefined4 *)(param_1 + 0x179c) = *(undefined4 *)(param_1 + 0x182c);
        fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x1790);
        fVar3 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1794);
        fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1798);
        fVar1 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
        if (fVar1 < 2.25 != (fVar1 == 2.25)) {
          *(undefined4 *)(param_1 + 0x61c) = 0;
          return;
        }
      }
      FUN_00626190(0,1,0,0);
      return;
    }
  }
  return;
}

// 0062D620  FUN_0062d620  size=156  [between]
void __fastcall FUN_0062d620(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x187] != 0) && ((*(byte *)(param_1 + 0x3a9) & 4) != 0)) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
    if (param_1[0x688] == 0) {
      iVar1 = FUN_00ac4d60(4);
      if (iVar1 != 0) {
        FUN_00626190(0x27,0,0,0);
        param_1[0x6e7] = 10;
        return;
      }
      iVar1 = FUN_00ac4d60(3);
      if (iVar1 != 0) {
        FUN_00626190(0x26,0,0,0);
        param_1[0x6e7] = 10;
        return;
      }
    }
    if ((float)param_1[0x2a4] < 10.0) {
      FUN_00a87ba0();
                    /* WARNING: Could not recover jumptable at 0x0062d6ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0062D6C0  FUN_0062d6c0  size=250  [between]
void __fastcall FUN_0062d6c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  else {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
      return;
    }
    iVar1 = FUN_0061c470();
    if (iVar1 != 0) {
      FUN_00626190(0x120000,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
      return;
    }
    iVar1 = FUN_0061c320();
    if (iVar1 != 0) {
      FUN_00626190(0x120004,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
      return;
    }
    iVar1 = FUN_0061c3b0();
    if (iVar1 != 0) {
      FUN_00626190(0x120001,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
      return;
    }
  }
  if (*(int *)(param_1 + 0x1bc8) != 0) {
    *(undefined4 *)(param_1 + 0x1b9c) = 7;
    *(undefined4 *)(param_1 + 0x1ba0) = 0;
    FUN_00626190(0x1000a,0,0,0);
  }
  return;
}

// 0062D7C0  FUN_0062d7c0  size=574  [between]
void __fastcall FUN_0062d7c0(int *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x187];
  param_1[0x5d7] = 1;
  uVar3 = 0x1ff;
  if (iVar1 == 0) {
    iVar1 = param_1[0x52b];
    param_1[0x51c] = 1;
    if (iVar1 == 2) {
      uVar3 = 0x3d;
    }
    if ((iVar1 == 3) && (param_1[0x41d] == 0)) {
      uVar3 = 0x119;
    }
    if ((iVar1 == 5) && (param_1[0x41d] == 0)) {
      uVar3 = 0x524;
    }
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      uVar3 = 0x468;
    }
    FUN_00aa4120(uVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5fa] = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (ABS((float)param_1[0x25] - (float)param_1[0x5f1]) < 0.05235988) {
      if ((param_1[299] == 0xb) &&
         (((param_1[0x52b] == 2 || (param_1[0x52b] == 3)) &&
          (param_1[0x3aa] = param_1[0x3aa] | 0x400000, param_1[0x41d] != 0)))) {
        FUN_00626190(0x23,0,0,0);
      }
      else {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    FUN_00a8e960(param_1[0x5f1]);
    uVar3 = 0x3e860a92;
    goto LAB_0062d9d8;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x5fa] != 0) ||
     (fVar2 = ((float)param_1[0x10] - (float)param_1[0x5e4]) *
              ((float)param_1[0x10] - (float)param_1[0x5e4]) +
              ((float)param_1[0x11] - (float)param_1[0x5e5]) *
              ((float)param_1[0x11] - (float)param_1[0x5e5]) +
              ((float)param_1[0x12] - (float)param_1[0x5e6]) *
              ((float)param_1[0x12] - (float)param_1[0x5e6]), fVar2 < 1.0 != (fVar2 == 1.0))) {
    if (param_1[0x2c2] == -1) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if ((param_1[299] == 0xb) && ((param_1[0x52b] == 2 || (param_1[0x52b] == 3)))) {
      param_1[0x3aa] = param_1[0x3aa] | 0x400000;
      FUN_00626190(0x23,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  uVar3 = 0x3d0efa35;
LAB_0062d9d8:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,uVar3,0);
  return;
}

// 0062DA00  FUN_0062da00  size=68  [between]
void __fastcall FUN_0062da00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
    }
  }
  return;
}

// 0062DA50  FUN_0062da50  size=275  [between]
void __fastcall FUN_0062da50(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
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
        *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_1 + 0x1820);
        *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(param_1 + 0x1824);
        *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_1 + 0x1828);
        *(undefined4 *)(param_1 + 0x179c) = *(undefined4 *)(param_1 + 0x182c);
        FUN_00626190(7,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0062DB70  FUN_0062db70  size=68  [between]
void __fastcall FUN_0062db70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
    }
  }
  return;
}

// 0062DBC0  FUN_0062dbc0  size=200  [between]
void __fastcall FUN_0062dbc0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
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
        FUN_00626190(2,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0062DC90  FUN_0062dc90  size=170  [between]
void __fastcall FUN_0062dc90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
    if ((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    if (*(int *)(param_1 + 0x61c) == 0) {
      return;
    }
  }
  iVar1 = FUN_0061c470();
  if (iVar1 != 0) {
    FUN_00626190(0x120000,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 4;
    return;
  }
  iVar1 = FUN_0061c320();
  if (iVar1 == 0) {
    iVar1 = FUN_0061c3b0();
    if (iVar1 != 0) {
      FUN_00626190(0x120001,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 4;
    }
    return;
  }
  FUN_00626190(0x120004,0,0,0);
  *(undefined4 *)(param_1 + 0x1b8c) = 4;
  return;
}

// 0062DD40  FUN_0062dd40  size=867  [between]
void __fastcall FUN_0062dd40(int *param_1)

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
    param_1[0x51c] = 1;
    fVar1 = (float)param_1[0x5e4];
    fVar2 = (float)param_1[0x10];
    fVar3 = (float)param_1[0x5e5];
    fVar4 = (float)param_1[0x11];
    fVar5 = (float)param_1[0x5e6];
    fVar6 = (float)param_1[0x12];
    pfVar17 = (float *)FUN_00a925a0(local_30);
    fVar7 = pfVar17[1];
    fVar8 = *pfVar17;
    fVar9 = pfVar17[2];
    fVar10 = (float)param_1[0x5e4];
    fVar11 = (float)param_1[0x10];
    fVar12 = (float)param_1[0x5e5];
    fVar13 = (float)param_1[0x11];
    fVar14 = (float)param_1[0x5e6];
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
    if (param_1[0x52b] == 2) {
      uVar19 = local_50[iVar18 + 4];
    }
    FUN_00aa4080(uVar19,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5fa] = 0;
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
    if (param_1[0x52b] == 2) {
      uVar19 = 0x8e;
    }
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      uVar19 = 0x463;
    }
    FUN_00aa4080(uVar19,0,0x3d4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x5fa] != 0) ||
       (fVar1 = ((float)param_1[0x10] - (float)param_1[0x5e4]) *
                ((float)param_1[0x10] - (float)param_1[0x5e4]) +
                ((float)param_1[0x11] - (float)param_1[0x5e5]) *
                ((float)param_1[0x11] - (float)param_1[0x5e5]) +
                ((float)param_1[0x12] - (float)param_1[0x5e6]) *
                ((float)param_1[0x12] - (float)param_1[0x5e6]), fVar1 < 1.0 != (fVar1 == 1.0))) {
      param_1[0x187] = param_1[0x187] + 1;
      uVar20 = param_1[0x3ab] & 0x8000;
LAB_0062dff5:
      if (uVar20 != 0) {
        FUN_00626190(5,0,0,0);
      }
    }
    break;
  case 4:
    uVar19 = 0x2d;
    if (param_1[0x52b] == 2) {
      uVar19 = 0x8f;
    }
    FUN_00aa4080(uVar19,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar20 = FUN_00a94ce0(0);
    goto LAB_0062dff5;
  default:
    break;
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 0062E0C0  FUN_0062e0c0  size=54  [between]
void __fastcall FUN_0062e0c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_00626190(0x23,0,0,0);
  }
  return;
}

// 0062E100  FUN_0062e100  size=309  [between]
void __fastcall FUN_0062e100(int param_1)

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
       ((*(float *)(param_1 + 0x1c14) < 0.01 && (*(int *)(param_1 + 0x1a30) != 0)))) {
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
        *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_1 + 0x1820);
        *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(param_1 + 0x1824);
        *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_1 + 0x1828);
        uVar1 = *(undefined4 *)(param_1 + 0x182c);
      }
      else {
        FUN_00a8d790(&local_c);
        *(undefined4 *)(param_1 + 0x1790) = local_c;
        *(undefined4 *)(param_1 + 0x1794) = local_8;
        *(undefined4 *)(param_1 + 0x1798) = local_4;
        uVar1 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x179c) = uVar1;
      FUN_00626190(7,0,0,0);
    }
  }
  return;
}

// 0062E240  FUN_0062e240  size=1114  [between]
void __fastcall FUN_0062e240(int *param_1)

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
    iVar4 = param_1[0x52b];
    param_1[0x187] = 1;
    uVar5 = 0x1ff;
    if (iVar4 == 2) {
      uVar5 = 0x3d;
    }
    if ((iVar4 == 3) && (param_1[0x41d] == 0)) {
      uVar5 = 0x119;
    }
    if ((iVar4 == 5) && (param_1[0x41d] == 0)) {
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
LAB_0062e3d5:
      param_1[0x5e4] = param_1[0x608];
      param_1[0x5e5] = param_1[0x609];
      param_1[0x5e6] = param_1[0x60a];
      iVar4 = param_1[0x60b];
    }
    else {
      FUN_00a8d790(&local_c);
      param_1[0x5e4] = local_c;
      param_1[0x5e5] = local_8;
      param_1[0x5e6] = local_4;
      iVar4 = 0x3f800000;
    }
LAB_0062e3ff:
    param_1[0x5e7] = iVar4;
    FUN_00626190(7,0,0,0);
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
    goto LAB_0062e4d3;
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
      param_1[0x5e4] = local_c;
      param_1[0x5e5] = local_8;
      param_1[0x5e6] = local_4;
      iVar4 = 0x3f800000;
      goto LAB_0062e3ff;
    }
    goto LAB_0062e3d5;
  default:
    goto switchD_0062e27e_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
switchD_0062e27e_default:
    return;
  }
LAB_0062e4d3:
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 0062E6D0  FUN_0062e6d0  size=210  [between]
void __fastcall FUN_0062e6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00621860();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00626190(6,0,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x1488) != 0) && (0 < *(int *)(param_1 + 0x61c))) {
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00626190(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00626190(0x23,0,0,0);
    }
    if (*(int *)(param_1 + 0x1bc8) != 0) {
      *(undefined4 *)(param_1 + 0x1b9c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1ba0) = 0;
      FUN_00626190(0x1000a,0,0,0);
    }
  }
  return;
}

// 0062E7B0  FUN_0062e7b0  size=243  [between]
void __fastcall FUN_0062e7b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  iVar1 = FUN_00621860();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00626190(6,0,0,0);
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
    FUN_00626190(0,0,0,0);
    return;
  }
  FUN_00a8cb60(4);
  return;
}

// 0062E8B0  FUN_0062e8b0  size=354  [between]
void __fastcall FUN_0062e8b0(int *param_1)

{
  float fVar1;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)(short)param_1[0x69b],0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    local_60 = 0;
    local_5c = 0;
    local_58[0] = 0xbe4ccccd;
    D3DXMatrixRotationY(local_50,param_1[0x25]);
    D3DXVec3TransformNormal(param_1 + 0x59c,auStack_68,local_58);
    FUN_00eaa6e0(0x3f800000,0);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  else if (param_1[0x187] != 1) goto LAB_0062e9ec;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_00626190(0x110001,0,0,0);
    param_1[0x3aa] = param_1[0x3aa] | 0x2000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0062e9ec:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 0062EA20  FUN_0062ea20  size=317  [between]
void __fastcall FUN_0062ea20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a6e),0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000
                 ,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00621370(&DAT_01646524,1);
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_0062eb3a;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00626190(0x10003,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0062eb3a:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 0062EB60  FUN_0062eb60  size=445  [between]
void __fastcall FUN_0062eb60(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)(short)param_1[0x695],0,0x3e99999a,0x3f800000,0,(float)fVar3,fVar4);
    sVar1 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0062eb76;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((*(byte *)(param_1 + 0x3ab) & 0x80) != 0) {
      return;
    }
    iVar2 = param_1[300];
    if ((((iVar2 != 0x28010) && (iVar2 != 0x28140)) && (iVar2 != 0x28142)) && (iVar2 != 0x28144)) {
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
    FUN_00626190(0x10002,0,0,0);
    return;
  }
LAB_0062eb76:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0062ED20  FUN_0062ed20  size=445  [between]
void __fastcall FUN_0062ed20(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0,0);
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a56),0,0x3e99999a,0x3f800000,0,(float)fVar3,fVar4
                );
    sVar1 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0062ed36;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((*(byte *)(param_1 + 0x3ab) & 0x80) != 0) {
      return;
    }
    iVar2 = param_1[300];
    if ((((iVar2 != 0x28010) && (iVar2 != 0x28140)) && (iVar2 != 0x28142)) && (iVar2 != 0x28144)) {
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
    FUN_00626190(0x10002,0,0,0);
    return;
  }
LAB_0062ed36:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0062EEE0  FUN_0062eee0  size=154  [between]
void __fastcall FUN_0062eee0(int param_1)

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
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
      FUN_00626190(0x19,0,0,0);
    }
  }
  return;
}

// 0062EF90  FUN_0062ef90  size=394  [between]
undefined4 __fastcall FUN_0062ef90(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
     (*(int *)(param_1 + 0x1488) != 0)) {
    if ((*(int *)(param_1 + 0x4b0) == 0x28150) || (*(int *)(param_1 + 0x4b0) == 0x28152)) {
      if (((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
         (*(int *)(param_1 + 0x19b8) != 0)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,3);
          FUN_00626190(sVar1 + 0x10010,uVar3,uVar4,uVar5);
          return 1;
        }
      }
    }
    else {
      iVar2 = FUN_006210a0();
      if ((iVar2 != 0) &&
         ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(int *)(param_1 + 0x19b8) != 0)))) {
        sVar1 = FUN_00dde2d0(0,3);
        if (sVar1 == 0) {
          if (-1 < (char)*(uint *)(param_1 + 0xeac)) {
            FUN_00626190(0x10002,0,0,0);
            if (((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) && (*(float *)(param_1 + 0xa8c) < 9.0))
            {
              FUN_00626190(0x10004,0,0,0);
            }
            FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
            return 1;
          }
          if ((*(uint *)(param_1 + 0xeac) & 0x20) != 0) {
            FUN_00626190(0x10002,0,0,0);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 0062F120  FUN_0062f120  size=154  [between]
void __fastcall FUN_0062f120(int param_1)

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
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
      FUN_00626190(0x19,0,0,0);
    }
  }
  return;
}

// 0062F1C0  FUN_0062f1c0  size=348  [between]
void __fastcall FUN_0062f1c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar3;
    FUN_00aa4080((int)(short)param_1[0x698],0,0x3e088889,0x3f800000,0x8000000,0,(float)fVar3);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x40a00000);
  }
  else if (param_1[0x187] != 1) goto LAB_0062f1d5;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_0062ef90();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a82e80();
    if (((iVar2 != 0) && (param_1[0x670] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00626190(0x14,0,0,0);
      return;
    }
  }
LAB_0062f1d5:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 0062F320  FUN_0062f320  size=154  [between]
void __fastcall FUN_0062f320(int param_1)

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
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
      FUN_00626190(0x19,0,0,0);
    }
  }
  return;
}

// 0062F3C0  FUN_0062f3c0  size=348  [between]
void __fastcall FUN_0062f3c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar3;
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a62),0,0x3e088889,0x3f800000,0x8000000,0,
                 (float)fVar3);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x40a00000);
  }
  else if (param_1[0x187] != 1) goto LAB_0062f3d5;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_0062ef90();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a82e80();
    if (((iVar2 != 0) && (param_1[0x670] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00626190(0x14,0,0,0);
      return;
    }
  }
LAB_0062f3d5:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 0062F520  FUN_0062f520  size=510  [between]
undefined4 __fastcall FUN_0062f520(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
     (*(int *)(param_1 + 0x1488) != 0)) {
    if ((*(int *)(param_1 + 0x4b0) == 0x28150) || (*(int *)(param_1 + 0x4b0) == 0x28152)) {
      if (((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
         (*(int *)(param_1 + 0x19b8) != 0)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,3);
          FUN_00626190(sVar1 + 0x10010,uVar3,uVar4,uVar5);
          return 1;
        }
      }
      if (((*(int *)(param_1 + 0x1154) != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) &&
         (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00626190(sVar1 + 0x10010,uVar3,uVar4,uVar5);
        return 1;
      }
    }
    else {
      iVar2 = FUN_006210a0();
      if (((iVar2 != 0) &&
          ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(int *)(param_1 + 0x19b8) != 0)))) &&
         (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
        sVar1 = FUN_00dde2d0(0,3);
        if (sVar1 == 0) {
          iVar2 = FUN_00c15850();
          if (iVar2 != 0) {
            if ((char)*(uint *)(param_1 + 0xeac) < '\0') {
              FUN_00626190(0x10002,0,0,0);
              if (*(float *)(param_1 + 0xa8c) < 9.0) {
                FUN_00626190(0x10004,0,0,0);
              }
              FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
              return 1;
            }
            if ((*(uint *)(param_1 + 0xeac) & 0x20) != 0) {
              FUN_00626190(0x10002,0,0,0);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 0062F720  FUN_0062f720  size=268  [between]
undefined4 __fastcall FUN_0062f720(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
      (*(int *)(param_1 + 0x1488) != 0)) &&
     ((*(int *)(param_1 + 0x4b0) == 0x28150 || (*(int *)(param_1 + 0x4b0) == 0x28152)))) {
    if ((*(float *)(param_1 + 0xa8c) < 36.0) &&
       ((*(float *)(param_1 + 0xaa0) < 1.0471976 && (*(int *)(param_1 + 0x19b8) != 0)))) {
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 == 0) {
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00626190(sVar1 + 0x10010,uVar2,uVar3,uVar4);
        return 1;
      }
    }
    if (((*(int *)(param_1 + 0x1154) != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 0;
      sVar1 = FUN_00dde2d0(0,3);
      FUN_00626190(sVar1 + 0x10010,uVar2,uVar3,uVar4);
      return 1;
    }
  }
  return 0;
}

// 0062F830  FUN_0062f830  size=364  [between]
void __fastcall FUN_0062f830(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    param_1[0x248] = 0x3f800000;
    if (param_1[0x455] != 0) {
      pcVar1 = *(code **)(*param_1 + 0x220);
      param_1[0x248] = 0x3fc00000;
      (*pcVar1)(0x41700000);
    }
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a66),0,0x3d088889,0x3f800000,0x8000000,0,
                 param_1[0x248]);
    FUN_00621370(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = param_1[0x454];
    param_1[0x454] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0062f95f;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0062f520();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_0062f520();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0062f95f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 0062F9A0  FUN_0062f9a0  size=364  [between]
void __fastcall FUN_0062f9a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    param_1[0x248] = 0x3f800000;
    if (param_1[0x455] != 0) {
      pcVar1 = *(code **)(*param_1 + 0x220);
      param_1[0x248] = 0x3fc00000;
      (*pcVar1)(0x41700000);
    }
    FUN_00aa4080((int)(short)param_1[0x69a],0,0x3d088889,0x3f800000,0x8000000,0,param_1[0x248]);
    FUN_00621370(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = param_1[0x454];
    param_1[0x454] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0062facf;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0062f520();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_0062f520();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0062facf:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 0062FB10  FUN_0062fb10  size=265  [between]
void __fastcall FUN_0062fb10(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x256,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    iVar2 = param_1[0x454];
    param_1[0x248] = 0x3f800000;
    param_1[0x455] = iVar2;
    param_1[0x454] = 0;
    if (iVar2 != 0) {
      param_1[0x248] = 0x3f99999a;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0062fbdc;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_0062f520();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0062fbdc:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 0062FC20  FUN_0062fc20  size=237  [between]
void __fastcall FUN_0062fc20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(599,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    param_1[0x455] = param_1[0x454];
    param_1[0x454] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0062fcd0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_0062f520();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0062fcd0:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 0062FD10  FUN_0062fd10  size=518  [between]
void __fastcall FUN_0062fd10(int *param_1)

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
    if ((iVar1 != 0) && (iVar1 = FUN_00627200(), iVar1 == 0)) {
      if (param_1[0x6e3] == -1) {
                    /* WARNING: Could not recover jumptable at 0x0062ff12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00626190(param_1[0x6e3],0,0,0);
      return;
    }
  }
  return;
}

// 0062FF40  FUN_0062ff40  size=1246  [between]
void __fastcall FUN_0062ff40(int *param_1)

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
      iVar2 = FUN_00d46690((char)param_1[0x6d8]);
      if (iVar2 == 0) {
        FUN_009f8ea0(&iStack_2c,10,param_1[300],0);
        FUN_00dd5650(&DAT_0163d460,&iStack_2c,param_1[0x6d8]);
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
    if (param_1[300] == 0x28170) {
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
        goto LAB_0063032e;
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
    goto LAB_0063032e;
  case 5:
LAB_0063032e:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (iVar2 = FUN_00627200(), iVar2 == 0)) {
      if (param_1[0x186] == 0x120002) {
        param_1[0x608] = param_1[0x10];
        param_1[0x609] = param_1[0x11];
        param_1[0x60a] = param_1[0x12];
        param_1[0x60b] = param_1[0x13];
      }
      if (param_1[0x6e3] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00626190(param_1[0x6e3],0,0,0);
      }
    }
    break;
  default:
    break;
  }
  if (param_1[0x186] == 0x120001) {
    FUN_00a8e880(param_1 + 0x6bc);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
  }
  return;
}

// 00630440  FUN_00630440  size=1091  [between]
void __fastcall FUN_00630440(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    fVar1 = (float)param_1[0x6bd] - (float)param_1[0x11];
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
      FUN_00a8e880(param_1 + 0x6bc);
      return;
    }
    break;
  case 3:
    FUN_00a9f4c0("JUMPUP",0x3e2aaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x518,0x3e2aaaab,0x8080000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x51d,0x3e2aaaab,0x8080000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x250] == 1) {
      param_1[600] = (int)((float)param_1[0x6bc] - (float)param_1[0x10]);
      param_1[0x259] = (int)((float)param_1[0x6bd] - (float)param_1[0x11]);
      param_1[0x25a] = (int)((float)param_1[0x6be] - (float)param_1[0x12]);
      param_1[0x25b] = (int)((float)param_1[0x6bf] - (float)param_1[0x13]);
      param_1[0x259] = 0;
      param_1[600] = (int)((float)param_1[600] * 0.02);
      param_1[0x259] = (int)((float)param_1[0x259] * 0.02);
      param_1[0x25a] = (int)((float)param_1[0x25a] * 0.02);
      param_1[0x25b] = (int)((float)param_1[0x25b] * 0.02);
    }
    goto LAB_0063063c;
  case 4:
LAB_0063063c:
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
      FUN_00a8e880(param_1 + 0x6bc);
      return;
    }
    param_1[0x14] =
         (int)(((float)param_1[0x6bc] - (float)param_1[0x10]) * 0.025 + (float)param_1[0x14]);
    param_1[0x16] =
         (int)(((float)param_1[0x6be] - (float)param_1[0x12]) * 0.025 + (float)param_1[0x16]);
    FUN_00a8e880(param_1 + 0x6bc);
    return;
  case 5:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] == 0) {
      fVar1 = ((float)param_1[0x6be] - (float)param_1[0x12]) * 0.025;
      param_1[0x14] =
           (int)(((float)param_1[0x6bc] - (float)param_1[0x10]) * 0.025 + (float)param_1[0x14]);
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
      FUN_00a8e880(param_1 + 0x6bc);
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
    goto LAB_006307f4;
  case 7:
LAB_006307f4:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_00627200(), iVar3 == 0)) {
      if (param_1[0x6e3] == -1) {
        (**(code **)(*param_1 + 0x34c))();
        FUN_00a8e880(param_1 + 0x6bc);
        return;
      }
      FUN_00626190(param_1[0x6e3],0,0,0);
      FUN_00a8e880(param_1 + 0x6bc);
      return;
    }
  }
  FUN_00a8e880(param_1 + 0x6bc);
  return;
}

// 006308B0  FUN_006308b0  size=362  [between]
void __fastcall FUN_006308b0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_006309e9;
  }
  uVar2 = 0x8000000;
  uVar3 = 0x513;
  if ((*(int *)(param_1 + 0x14ac) == 2) || (*(int *)(param_1 + 0x14ac) == 3)) {
    uVar3 = 0x514;
  }
  if (*(int *)(param_1 + 0x4b0) == 0x28170) {
    uVar3 = 0x56e;
  }
  if ((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) {
    uVar3 = 0x465;
  }
  if (*(int *)(param_1 + 0x1814) == 2) {
    uVar3 = 0x37b;
    if (*(int *)(param_1 + 0x4b0) == 0x28170) {
      uVar3 = 0x576;
    }
    if ((*(byte *)(param_1 + 0x1818) & 2) != 0) {
      uVar2 = 0x8000040;
    }
  }
  if (*(int *)(param_1 + 0x1814) == 1) {
    uVar3 = 0x366;
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar2 = uVar2 | 0x40;
    }
    else if (*(int *)(param_1 + 0xe98) != 9) goto LAB_00630957;
    uVar3 = 0x490;
  }
LAB_00630957:
  if ((*(uint *)(param_1 + 0xea8) & 0x20000000) != 0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xdfffffff;
    iVar1 = FUN_0061f770();
    if (iVar1 != 0) {
      FUN_00b2bca0(&DAT_0163b604,0);
    }
  }
  FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
  FUN_00621370(&DAT_0163b604,1);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x2000000;
  *(undefined2 *)(param_1 + 0x824) = 1;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
LAB_006309e9:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00626190(0x25,0,0,0);
  }
  return;
}

// 00630A20  FUN_00630a20  size=483  [between]
void __fastcall FUN_00630a20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x1b;
    if (param_1[300] == 0x28170) {
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
    if (param_1[300] == 0x28170) {
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
    if (param_1[300] == 0x28170) {
      uVar1 = 0x5b4;
    }
    FUN_00aa4080(uVar1,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x6e7] == -1) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00626190(param_1[0x6e7],0,0,0);
        param_1[0x6e7] = -1;
      }
    }
  }
  iVar2 = FUN_00a8c760(0xc);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00630bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 00630C20  FUN_00630c20  size=232  [between]
void __fastcall FUN_00630c20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x187] == 0) {
    uVar2 = 0x19;
    if ((param_1[0x52b] == 2) || (param_1[0x52b] == 3)) {
      uVar2 = 0x92;
    }
    FUN_00aa4080(uVar2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[300] == 0x28170) {
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
  if (param_1[0x6e7] != -1) {
    FUN_00626190(param_1[0x6e7],0,0,0);
    param_1[0x6e7] = -1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00630d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00630D10  FUN_00630d10  size=520  [between]
void __fastcall FUN_00630d10(int *param_1)

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
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00630ec2;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    if ((((((*(byte *)(param_1 + 0x3ab) & 0x80) == 0) && (param_1[0x52b] == 1)) &&
         (param_1[0x522] != 0)) && ((param_1[0x2a1] != 0 && (iVar2 = FUN_00c15850(), iVar2 != 0))))
       && ((float)param_1[0x2a3] < 6.25)) {
      if (1.0471976 < (float)param_1[0x2a8]) {
        FUN_00626190(0x10001,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_00626190(0x10005,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00630ec2:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00630F30  FUN_00630f30  size=626  [between]
void __fastcall FUN_00630f30(int *param_1)

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
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0063114c;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    if ((((param_1[0x2a1] != 0) && (iVar2 = FUN_00c15850(), iVar2 != 0)) && (param_1[0x2fa] == 0))
       && ((*(byte *)(param_1 + 0x3ab) & 0x80) == 0)) {
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00626190(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00626190(0x10005,0,0,0);
        }
      }
      if ((((float)param_1[0x2a3] < 36.0) && (1.5707964 < (float)param_1[0x2a8])) &&
         (sVar1 = FUN_00dde2d0(0,3), sVar1 == 0)) {
        FUN_00626190(0x10002,0,0,0);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0063114c:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 006311B0  FUN_006311b0  size=718  [between]
void __fastcall FUN_006311b0(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    sVar2 = (short)param_1[0x69d];
    if (param_1[0x186] == 0x10003) {
      sVar2 = *(short *)((int)param_1 + 0x1a72);
      FUN_00621370(&DAT_0163b604,1);
    }
    FUN_00aa4080((int)sVar2,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
    }
    FUN_00c27260(param_1[0x66d]);
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
  else if (param_1[0x187] != 1) goto LAB_00631428;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) && (param_1[0x186] == 0x10003)) {
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((param_1[0x52b] == 1) && (param_1[0x522] != 0)) &&
         ((param_1[0x2a1] != 0 &&
          ((iVar1 = FUN_00c15850(), iVar1 != 0 && ((float)param_1[0x2a3] < 6.25)))))) {
        if ((param_1[0x3ab] & 0x8000U) == 0) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            uVar3 = 0x10005;
            goto LAB_00631408;
          }
        }
        else if (1.0471976 < (float)param_1[0x2a8]) {
          uVar3 = 0x70008;
LAB_00631408:
          FUN_00626190(uVar3,0,0,0);
        }
      }
    }
  }
  FUN_00ac80a0(param_1[0x248],0x3f800000);
LAB_00631428:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00631480  FUN_00631480  size=489  [between]
void __fastcall FUN_00631480(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f0,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00631613;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
    if ((((param_1[0x52b] == 1) && (param_1[0x522] != 0)) && (param_1[0x2a1] != 0)) &&
       ((iVar1 = FUN_00c15850(), iVar1 != 0 && ((float)param_1[0x2a3] < 6.25)))) {
      if (1.0471976 < (float)param_1[0x2a8]) {
        FUN_00626190(0x10001,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_00626190(0x10005,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00631613:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00631670  FUN_00631670  size=359  [between]
void __fastcall FUN_00631670(int *param_1)

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
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0063178e;
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
    FUN_00623db0(uVar2,uVar5,uVar6,0,0);
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0063178e:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 006317E0  FUN_006317e0  size=253  [between]
void __fastcall FUN_006317e0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x9e,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0063188b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (param_1[0x6e7] == -1) {
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00626190(param_1[0x6e7],param_1[0x6e8],0,0);
    }
  }
LAB_0063188b:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 006318E0  FUN_006318e0  size=793  [between]
void __fastcall FUN_006318e0(int *param_1)

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
    goto switchD_006318fc_caseD_1;
  case 2:
    uVar5 = 0x1f9;
    if ((param_1[0x52b] == 2) || (param_1[0x52b] == 3)) {
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
      FUN_00623db0(uVar5,uVar6,uVar7,0,1);
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (param_1[0x1f6] != 0)) && (param_1[0x2a1] != 0)) {
      iVar3 = *(int *)(param_1[0x1f6] + 0x818);
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if (((iVar3 != 0) && (iVar4 != 0)) && (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))) {
LAB_00631ade:
        (**(code **)(*param_1 + 0x34c))();
        goto switchD_006318fc_default;
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x248] = 0x42700000;
    goto switchD_006318fc_default;
  case 4:
    FUN_00aa4080((int)(short)param_1[0x693],0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 <= fVar1 - (float)param_1[0x244]) goto switchD_006318fc_default;
    if (param_1[0x670] == 0) {
      FUN_00626190(0x1e,0,0,0);
      goto switchD_006318fc_default;
    }
    if (param_1[0x679] != 0) {
      param_1[0x187] = 2;
      goto switchD_006318fc_default;
    }
    goto LAB_00631ade;
  default:
    goto switchD_006318fc_default;
  }
  FUN_00aa4080((int)(short)param_1[0x696],0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x42700000;
  FUN_00a8d280();
switchD_006318fc_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    if ((param_1[0x1f6] != 0) && (param_1[0x2a1] != 0)) {
      iVar3 = *(int *)(param_1[0x1f6] + 0x818);
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if ((iVar3 != 0) && ((iVar4 != 0 && (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))))) {
        (**(code **)(*param_1 + 0x34c))();
        goto switchD_006318fc_default;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_006318fc_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00631C20  FUN_00631c20  size=859  [between]
void __fastcall FUN_00631c20(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined *puVar5;
  
  param_1[0x5d7] = 1;
  param_1[0x3a9] = param_1[0x3a9] | 0x1000000;
  if (param_1[0x187] == 0) {
    fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
    iVar2 = param_1[300];
    param_1[0x6a0] = (int)(float)(fVar4 * (float10)60.0);
    if (((((iVar2 == 0x28010) || (iVar2 == 0x28140)) || (iVar2 == 0x28142)) || (iVar2 == 0x28144))
       && (((param_1[0x52b] == 3 && (param_1[0x52c] == 1)) && ((float)param_1[0x2a3] <= 25.0)))) {
      FUN_0061bcc0();
    }
    iVar2 = param_1[300];
    if ((((iVar2 == 0x28010) || (iVar2 == 0x28140)) || ((iVar2 == 0x28142 || (iVar2 == 0x28144))))
       && (((param_1[0x52b] == 1 && (param_1[0x52c] == 3)) &&
           (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))))) {
      FUN_0061bcc0();
    }
    iVar2 = param_1[300];
    iVar3 = 0x4ae;
    if (((iVar2 == 0x28010) || (iVar2 == 0x28140)) ||
       ((iVar2 == 0x28142 || ((iVar2 == 0x28144 || (iVar2 == 0x28160)))))) {
      iVar2 = param_1[0x52b];
      if (iVar2 == 6) {
        *(undefined1 *)(param_1 + 0x418) = 1;
        param_1[0x41b] = 1;
        if (param_1[0x186] == 0x23) {
          iVar3 = 0x269;
          param_1[0x419] = 0x422c0000;
          param_1[0x41a] = 0x422c0000;
        }
        else {
          iVar3 = 0x26b;
          param_1[0x419] = 0x42a20000;
          param_1[0x41a] = 0x42a20000;
        }
      }
      else if ((param_1[0x3ab] & 0x8000U) == 0) {
        if (iVar2 == 1) {
          *(undefined1 *)(param_1 + 0x40e) = 1;
          param_1[0x410] = 1;
          if (param_1[0x186] == 0x23) {
            iVar3 = 0x240;
            param_1[0x40f] = 0x41d00000;
          }
          else {
            param_1[0x40f] = 0x42440000;
          }
        }
        else if (iVar2 == 2) {
          iVar3 = (-(uint)(param_1[0x186] != 0x23) & 0x489) + 0x31;
        }
        else if (iVar2 == 3) {
          iVar3 = 0x4b1;
          FUN_006265b0();
          *(undefined1 *)(param_1 + 0x412) = 0;
          FUN_00626740(&DAT_016466f0,0);
        }
      }
      else {
        iVar3 = 0x453;
        param_1[0x40f] = 0x41a00000;
        *(undefined1 *)(param_1 + 0x40e) = 1;
        param_1[0x410] = 1;
      }
    }
    if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
      if ((param_1[0x3ab] & 0x8000U) == 0) {
        if (param_1[0x52b] == 7) {
          iVar3 = 0x4b4;
          param_1[0x40f] = 0x41980000;
          *(undefined1 *)(param_1 + 0x40e) = 1;
          param_1[0x410] = 1;
        }
        else if (param_1[0x52b] == 3) {
          iVar3 = 0x4b1;
          FUN_006265b0();
          *(undefined1 *)(param_1 + 0x412) = 0;
          FUN_00626740(&DAT_016466f0,0);
        }
      }
      else {
        iVar3 = 0x460;
        param_1[0x40f] = 0x41b80000;
        *(undefined1 *)(param_1 + 0x40e) = 1;
        param_1[0x410] = 1;
      }
    }
    if (param_1[300] == 0x28170) {
      FUN_006265b0();
      *(undefined1 *)(param_1 + 0x412) = 0;
      if (param_1[0x186] == 0x23) {
        iVar3 = 0x522;
        puVar5 = &DAT_016466e4;
      }
      else {
        iVar3 = 0x4b7;
        puVar5 = &DAT_016466dc;
      }
      FUN_00621370(puVar5,1);
    }
    FUN_00aa4080(iVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x41d] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00631f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00631F80  FUN_00631f80  size=625  [between]
void __fastcall FUN_00631f80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00632158;
  }
  iVar2 = *(int *)(param_1 + 0x4b0);
  uVar3 = 0x4af;
  if ((((iVar2 == 0x28010) || (iVar2 == 0x28140)) || (iVar2 == 0x28142)) ||
     ((iVar2 == 0x28144 || (iVar2 == 0x28160)))) {
    iVar2 = *(int *)(param_1 + 0x14ac);
    if (iVar2 == 6) {
      uVar3 = 0x26a;
      *(undefined4 *)(param_1 + 0x1064) = 0x428a0000;
      *(undefined1 *)(param_1 + 0x1060) = 1;
      *(undefined4 *)(param_1 + 0x106c) = 0;
      *(undefined4 *)(param_1 + 0x1068) = 0x42400000;
    }
    else if ((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) {
      if (iVar2 == 1) {
        *(undefined1 *)(param_1 + 0x1038) = 1;
        *(undefined4 *)(param_1 + 0x103c) = 0x42c80000;
        *(undefined4 *)(param_1 + 0x1040) = 0;
      }
      else if (iVar2 == 2) {
        uVar3 = 0x33;
      }
      else if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x104c) = 0x43510000;
        uVar3 = 0x4b2;
        *(undefined1 *)(param_1 + 0x1048) = 1;
        *(undefined4 *)(param_1 + 0x1050) = 0;
        FUN_00626740(&DAT_0164670c,0);
      }
    }
    else {
      uVar3 = 0x455;
      *(undefined4 *)(param_1 + 0x103c) = 0x42140000;
      *(undefined1 *)(param_1 + 0x1038) = 1;
      *(undefined4 *)(param_1 + 0x1040) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x4b0);
  if ((iVar2 == 0x28150) || (iVar2 == 0x28152)) {
    if ((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) {
      if (*(int *)(param_1 + 0x14ac) != 7) goto LAB_006320ed;
      uVar1 = 0x42ce0000;
      uVar3 = 0x4b5;
    }
    else {
      uVar1 = 0x42100000;
      uVar3 = 0x461;
    }
    *(undefined4 *)(param_1 + 0x103c) = uVar1;
    *(undefined4 *)(param_1 + 0x1040) = 0;
    *(undefined1 *)(param_1 + 0x1038) = 1;
  }
LAB_006320ed:
  if (iVar2 == 0x28170) {
    *(undefined4 *)(param_1 + 0x104c) = 0x43560000;
    uVar3 = 0x4b8;
    *(undefined1 *)(param_1 + 0x1048) = 1;
    *(undefined4 *)(param_1 + 0x1050) = 0;
    FUN_00621370(&DAT_016466fc,2);
  }
  FUN_00aa4080(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0x1074) = 1;
LAB_00632158:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xb08) == -1) {
      *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_1 + 0x1820);
      *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(param_1 + 0x1824);
      *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_1 + 0x1828);
      uVar3 = *(undefined4 *)(param_1 + 0x182c);
    }
    else {
      FUN_00a8d790(&local_c);
      *(undefined4 *)(param_1 + 0x1790) = local_c;
      *(undefined4 *)(param_1 + 0x1794) = local_8;
      *(undefined4 *)(param_1 + 0x1798) = local_4;
      uVar3 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x179c) = uVar3;
    FUN_00626190(7,0,0,0);
  }
  return;
}

// 00632200  FUN_00632200  size=150  [between]
void __fastcall FUN_00632200(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1[0x3aa] & 0x80000000U) == 0) {
    if (param_1[0x670] != 0) {
      if ((param_1[0x679] != 0) && ((param_1[0x12a] & 0x400000U) == 0)) {
        FUN_00626190(0x1000c,0,0,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0063224c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if ((param_1[0x1f6] != 0) && (param_1[0x2a1] != 0)) {
      iVar1 = *(int *)(param_1[0x1f6] + 0x818);
      iVar2 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if ((iVar1 != 0) && ((iVar2 != 0 && (*(int *)(iVar1 + 0xc) != *(int *)(iVar2 + 0xc))))) {
        FUN_00626190(0x14,0,0,0);
      }
    }
  }
  return;
}

// 006322A0  FUN_006322a0  size=311  [between]
void __fastcall FUN_006322a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x52b];
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
    if (((param_1[0x3ab] & 0x8000U) != 0) && (param_1[0x417] != 0)) {
      uVar1 = 0x465;
    }
    if (param_1[300] == 0x28170) {
      uVar1 = 0x535;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_006323bb;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((*(byte *)((int)param_1 + 0xeaa) & 1) == 0) {
      iVar2 = param_1[0x2a1];
      if (iVar2 != 0) {
        param_1[0x5e4] = *(int *)(iVar2 + 0x40);
        param_1[0x5e5] = *(int *)(iVar2 + 0x44);
        param_1[0x5e6] = *(int *)(iVar2 + 0x48);
        param_1[0x5e7] = *(int *)(iVar2 + 0x4c);
      }
      FUN_00626190(0x22,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
LAB_006323bb:
  if ((param_1[0x36c] == 2) || (param_1[0x36c] == -1)) {
    param_1[0x36c] = 1;
  }
  return;
}

// 006323E0  FUN_006323e0  size=121  [between]
void __fastcall FUN_006323e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
    return;
  }
  iVar1 = FUN_0061c470();
  if (iVar1 != 0) {
    FUN_00626190(0x120000,0,0,0);
    return;
  }
  iVar1 = FUN_0061c320();
  if (iVar1 != 0) {
    FUN_00626190(0x120004,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  iVar1 = FUN_0061c3b0();
  if (iVar1 != 0) {
    FUN_00626190(0x120001,0,0,0);
  }
  return;
}

// 00632460  FUN_00632460  size=308  [between]
void __fastcall FUN_00632460(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    uVar2 = 0x503;
    if (param_1[0x52b] == 2) {
      uVar2 = 0x504;
    }
    if (param_1[0x52b] == 3) {
      uVar2 = 0x505;
    }
    if (((param_1[0x3ab] & 0x8000U) != 0) && (param_1[0x417] != 0)) {
      uVar2 = 0x468;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00632560;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = ((float)param_1[0x10] - (float)param_1[0x5e4]) *
          ((float)param_1[0x10] - (float)param_1[0x5e4]) +
          ((float)param_1[0x11] - (float)param_1[0x5e5]) *
          ((float)param_1[0x11] - (float)param_1[0x5e5]) +
          ((float)param_1[0x12] - (float)param_1[0x5e6]) *
          ((float)param_1[0x12] - (float)param_1[0x5e6]);
  if (fVar1 < 2.25 != (fVar1 == 2.25)) {
    FUN_00626190(0x21,0,0,0);
  }
  if (param_1[0x670] != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00632560:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 006325A0  Em8010::vf34C  size=340  [class]
void __fastcall Em8010::vf34C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  if (*(int *)(param_1 + 0x1814) == 1) {
    FUN_00626190(0x60000,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x1814) == 2) {
    FUN_00626190(0x50000,0,0,0);
    return;
  }
  if (((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) || (*(int *)(param_1 + 0x105c) == 0)) {
    *(undefined4 *)(param_1 + 0x18f4) = 0x41f00000;
    FUN_00626190(0xb,0,0,0);
    if (*(int *)(param_1 + 0x1074) == 0) {
      if (*(int *)(param_1 + 0x14ac) == 1) {
        FUN_00626190(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 7) {
        FUN_00626190(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 6) {
        FUN_00626190(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 5) {
        FUN_00626190(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 2) {
        FUN_00626190(0x20000,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 3) {
        FUN_00626190(0x30000,0,0,0);
      }
    }
    FUN_006275d0(uVar1);
  }
  else {
    FUN_00626190(0x70000,0,0,0);
    if (*(int *)(param_1 + 0x1074) == 0) {
      FUN_00626190(0xe,0,0,0);
      return;
    }
  }
  return;
}

// 00632700  Em8010::vf1A4  size=501  [class]
void __thiscall Em8010::vf1A4(int param_1,int *param_2,byte param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00a81330();
  iVar4 = *param_2;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffff7fff;
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
      if (*(int *)(param_1 + 0x1814) == 1) {
        FUN_00626190(0x60007,0,0,0);
      }
      else {
        FUN_00626190(0xa0002,0,0,0);
      }
    }
    break;
  case 0x9f:
  case 0xa0:
    if ((param_3 & 2) != 0) {
      if (*(int *)(param_1 + 0x618) == 0x10015) {
        *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x10000;
      }
      else {
        uVar3 = FUN_00ac8660(0,0x59);
        *(undefined4 *)(param_1 + 0x1b74) = uVar3;
        uVar3 = FUN_00ac8660(0,0x5a);
        sVar1 = FUN_00dde2d0(0,uVar3);
        *(int *)(param_1 + 0x1b74) = *(int *)(param_1 + 0x1b74) + (int)sVar1;
        if (iVar4 == 0x9f) {
          uVar3 = 2;
        }
        else {
          uVar3 = 6;
        }
        FUN_00626190(0x10015,uVar3,0,0);
        *(undefined4 *)(param_1 + 0x940) = 0;
      }
    }
    if (*(int *)(param_1 + 0x618) == 0x10015) {
      if ((param_3 & 8) == 0) {
        *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x8000;
      }
      else {
        *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x10000;
      }
    }
  }
  if ((*(int *)(param_1 + 0x4b0) == 0x28150) || (*(int *)(param_1 + 0x4b0) == 0x28152)) {
    if ((param_3 & 4) == 0) {
      if (((*(uint *)(param_1 + 0xea4) & 0x2000) != 0) && ((param_3 & 2) != 0)) {
        *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
        FUN_00626190(0x19,0,0,0);
      }
      *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffdfff;
    }
    else if (*(int *)(param_1 + 0x618) != 0x10015) {
      iVar4 = FUN_00618500();
      if (iVar4 == 0) {
        FUN_00626190(0x10015,8,0,0);
      }
      else {
        FUN_00626190(0x110001,0,0,0);
      }
    }
  }
  if (((*(int *)(param_1 + 0x4b0) == 0x28170) && ((*(uint *)(param_1 + 0xea4) & 0x1000) == 0)) &&
     ((param_3 & 4) != 0)) {
    FUN_00626190(0x110002,0,0,0);
  }
  return;
}

// 00632910  FUN_00632910  size=620  [between]
void __fastcall FUN_00632910(int param_1)

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

// 00632B80  FUN_00632b80  size=80  [between]
undefined4 __fastcall FUN_00632b80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x14ac) == 1) && (*(int *)(param_1 + 0x1044) == 0)) {
    FUN_00626190(0x23,0,0,0);
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    uVar1 = 1;
  }
  return uVar1;
}

// 00632BD0  FUN_00632bd0  size=79  [between]
void __fastcall FUN_00632bd0(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x1038) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0x103c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x103c) = fVar1, fVar1 < 0.0)) {
    if (*(int *)(param_1 + 0x1040) != 0) {
      FUN_00626420();
      *(undefined1 *)(param_1 + 0x1038) = 0;
      return;
    }
    FUN_006264e0();
    *(undefined1 *)(param_1 + 0x1038) = 0;
  }
  return;
}

// 00632C20  FUN_00632c20  size=89  [between]
void __fastcall FUN_00632c20(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x1048) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0x104c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x104c) = fVar1, fVar1 < 0.0)) {
    if (*(int *)(param_1 + 0x1050) != 0) {
      FUN_006265b0();
      *(undefined4 *)(param_1 + 0x1074) = 0;
      *(undefined1 *)(param_1 + 0x1048) = 0;
      return;
    }
    FUN_00626650();
    *(undefined1 *)(param_1 + 0x1048) = 0;
  }
  return;
}

// 00632C80  FUN_00632c80  size=168  [between]
void __fastcall FUN_00632c80(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x1060) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x1064) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1064) = fVar1;
    *(float *)(param_1 + 0x1068) = *(float *)(param_1 + 0x1068) - *(float *)(param_1 + 0x910);
    if (fVar1 < 0.0) {
      if (*(int *)(param_1 + 0x106c) == 0) {
        FUN_00626cc0(0);
      }
      else {
        FUN_00626b70(0);
      }
    }
    if (*(float *)(param_1 + 0x1068) < 0.0) {
      if (*(int *)(param_1 + 0x106c) == 0) {
        FUN_00626cc0(1);
      }
      else {
        FUN_00626b70(1);
      }
    }
    if ((*(float *)(param_1 + 0x1064) < 0.0) && (*(float *)(param_1 + 0x1068) < 0.0)) {
      *(undefined1 *)(param_1 + 0x1060) = 0;
      return;
    }
  }
  return;
}

// 00632D30  FUN_00632d30  size=242  [between]
void __fastcall FUN_00632d30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x1488) != 0) {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x50);
      FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    }
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00626190(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00626190(0x23,0,0,0);
    }
    if (*(int *)(param_1 + 0x1bc8) != 0) {
      *(undefined4 *)(param_1 + 0x1b9c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1ba0) = 0;
      FUN_00626190(0x1000a,0,0,0);
    }
  }
  return;
}

// 00632E30  FUN_00632e30  size=64  [between]
void __fastcall FUN_00632e30(int param_1)

{
  if ((((*(int *)(param_1 + 0x14b0) != -1) && (*(float *)(param_1 + 0xa8c) <= 36.0)) &&
      (*(float *)(param_1 + 0xaa0) < 1.3962634)) && (*(int *)(param_1 + 0x1494) != 0)) {
    FUN_00626e00(0xffffffff);
  }
  return;
}

// 00632E70  FUN_00632e70  size=283  [between]
void __fastcall FUN_00632e70(int *param_1)

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
    param_1[0x598] = 0;
    *(undefined1 *)(param_1 + 0x424) = 0;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00632f41;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00626190(0x20000,0,0,0);
  }
LAB_00632f41:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3cd67750,0);
  }
  return;
}

// 00632F90  FUN_00632f90  size=322  [between]
void __fastcall FUN_00632f90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xf,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016457ec,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0x30);
  if (iVar2 != 0) {
    FUN_00626420();
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 != 0) {
    FUN_00626650();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00626190(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00626190(0xe,0,0,0);
  }
  return;
}

// 006330E0  FUN_006330e0  size=402  [between]
void __fastcall FUN_006330e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  param_1[0x5d7] = 1;
  param_1[0x3a9] = param_1[0x3a9] | 0x1000000;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x12,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x598] = 0;
    *(undefined1 *)(param_1 + 0x424) = 0;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x40f] = 0x42440000;
    *(undefined1 *)(param_1 + 0x40e) = 1;
    param_1[0x413] = 0x41c00000;
    param_1[0x410] = 1;
    *(undefined1 *)(param_1 + 0x412) = 1;
    param_1[0x414] = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_01646728,0);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0063321b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00626190(0xe,0,0,0);
  }
LAB_0063321b:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00633280  FUN_00633280  size=325  [between]
void __fastcall FUN_00633280(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_01646730,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0x30);
  if (iVar2 != 0) {
    FUN_006264e0();
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 != 0) {
    FUN_006265b0();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00626190(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00626190(0x20000,0,0,0);
  }
  return;
}

// 006333D0  FUN_006333d0  size=319  [between]
void __fastcall FUN_006333d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x13,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(undefined4 *)(param_1 + 0x103c) = 0x42860000;
    *(undefined1 *)(param_1 + 0x1038) = 1;
    *(undefined4 *)(param_1 + 0x104c) = 0x42c00000;
    *(undefined4 *)(param_1 + 0x1040) = 0;
    *(undefined1 *)(param_1 + 0x1048) = 1;
    *(undefined4 *)(param_1 + 0x1050) = 1;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_01646738,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00626190(0x20000,0,0,0);
  }
  return;
}

// 00633510  FUN_00633510  size=479  [between]
void __fastcall FUN_00633510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x1158) = 0x42f00000;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x1158) = 0x43700000;
  }
  fVar3 = (float10)FUN_00ac85c0(5,0x92);
  *(float *)(param_1 + 0x1a8c) = (float)(fVar3 * (float10)60.0);
  fVar3 = (float10)FUN_00ac85c0(5,0x93);
  fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
  *(float *)(param_1 + 0x1a8c) =
       (float)(fVar3 * (float10)60.0 + (float10)*(float *)(param_1 + 0x1a8c));
  iVar1 = FUN_00ac8470();
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x97);
    *(float *)(param_1 + 0x1a8c) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)FUN_00ac85c0(5,0x98);
    fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
    *(float *)(param_1 + 0x1a8c) =
         (float)(fVar3 * (float10)60.0 + (float10)*(float *)(param_1 + 0x1a8c));
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    uVar2 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x13a0) = uVar2;
    iVar1 = FUN_00ac8470();
    if (iVar1 != 0) {
      uVar2 = FUN_00ac8660(0,0x9c);
      *(undefined4 *)(param_1 + 0x13a0) = uVar2;
    }
    FUN_00623f50(0);
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 1;
    FUN_00626190(0x20000,0,0,0);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xffbfffff;
  }
  return;
}

// 006336F0  FUN_006336f0  size=140  [between]
void FUN_006336f0(undefined4 param_1,int param_2)

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

// 00633780  FUN_00633780  size=807  [between]
undefined4 __fastcall FUN_00633780(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  
  param_1[0x3aa] = param_1[0x3aa] | 0x20000;
  switch((char)param_1[0x424]) {
  case '\0':
    fVar4 = (float10)FUN_00ac85c0(5,0x8e);
    param_1[0x5a2] = (int)(float)fVar4;
    fVar4 = (float10)FUN_00ac85c0(5,0x8f);
    fVar4 = (float10)FUN_00dde300(0,(float)fVar4);
    param_1[0x5a2] = (int)(float)(fVar4 + (float10)(float)param_1[0x5a2]);
    FUN_006336f0(1,param_1 + 0x428);
    *(undefined1 *)(param_1 + 0x424) = 1;
    break;
  case '\x01':
    break;
  case '\x02':
    *(undefined2 *)(param_1 + 0x424) = 3;
  case '\x03':
    fVar1 = (float)param_1[0x5a2] - (float)param_1[0x244];
    param_1[0x5a2] = (int)fVar1;
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (param_1[0x4e8] != 0)) {
      FUN_00eaa6e0(0x41200000,0);
      FUN_00a94bc0(2,0);
      FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
      param_1[0x4e8] = param_1[0x4e8] + -1;
      param_1[0x5a2] = 0x41000000;
      *(char *)((int)param_1 + 0x1091) = *(char *)((int)param_1 + 0x1091) + '\x01';
      param_1[0x4ea] = 1;
    }
  default:
    goto switchD_006337a0_default;
  }
  param_1[0x5d6] = 0x3dcccccd;
  fVar1 = (float)param_1[0x5a2];
  param_1[0x5a2] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4e8] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a94bc0(2,0);
    FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
    param_1[0x4e8] = param_1[0x4e8] + -1;
    param_1[0x5a2] = 0x40c00000;
    param_1[0x4ea] = 1;
  }
  if (((int *)param_1[0x2a1] != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))(), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x424) = 2;
  }
switchD_006337a0_default:
  if (param_1[0x6db] != 0) {
    FUN_00a8e880(param_1[0x6db] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  if ((param_1[0x4e8] == 0) && ((float)param_1[0x5a2] <= 0.0)) {
    sVar2 = FUN_00dde2d0(0,2);
    fVar1 = (float)(sVar2 + 1) * 60.0;
    param_1[0x456] = (int)fVar1;
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)(fVar1 + 120.0);
    }
    FUN_00626190(0x2000e,0,0,0);
    iVar3 = FUN_00ac8660(0,0x9b);
    param_1[0x4e8] = iVar3;
    iVar3 = FUN_00ac8470();
    if (iVar3 != 0) {
      iVar3 = FUN_00ac8660(0,0x9c);
      param_1[0x4e8] = iVar3;
    }
    *(undefined1 *)(param_1 + 0x424) = 0;
    FUN_00eaa6e0(0x41200000,0);
    return 1;
  }
  return 0;
}

// 00633AC0  FUN_00633ac0  size=206  [between]
void __fastcall FUN_00633ac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1488) != 0) {
    iVar1 = FUN_00621860();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00626190(6,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00626190(0,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 4) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00626190(0x1f,0,0,0);
    }
    if (*(int *)(param_1 + 0x1bc8) != 0) {
      *(undefined4 *)(param_1 + 0x1b9c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1ba0) = 0;
      FUN_00626190(0x1000a,0,0,0);
    }
  }
  return;
}

// 00633B90  FUN_00633b90  size=403  [between]
void __fastcall FUN_00633b90(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
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
      *(float *)(param_1 + 0x1660) =
           (fVar1 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
    }
    iVar2 = FUN_0061e150();
    if (iVar2 != 0) {
      FUN_00626190(0x3000b,0,0,0);
      return;
    }
  }
  if (((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
     (iVar2 = FUN_00626e00(0xffffffff), iVar2 == 0)) {
    if (0.0 < *(float *)(param_1 + 0x1a40)) {
      *(float *)(param_1 + 0x1a40) = *(float *)(param_1 + 0x1a40) - *(float *)(param_1 + 0x910);
    }
    if (((((*(float *)(param_1 + 0x1a40) <= 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)))
         || ((iVar2 = *(int *)(param_1 + 0x618), iVar2 == 0x30002 &&
             (*(int *)(param_1 + 0x107c) == 0)))) ||
        ((iVar2 == 0x30004 && (*(int *)(param_1 + 0x1080) == 0)))) ||
       ((iVar2 == 0x30003 && (*(int *)(param_1 + 0x1084) == 0)))) {
      FUN_00626190(0x30000,0,0,0);
    }
  }
  return;
}

// 00633D30  FUN_00633d30  size=46  [between]
void __fastcall FUN_00633d30(int param_1)

{
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00626e00(0xffffffff);
  }
  return;
}

// 00633D60  FUN_00633d60  size=283  [between]
void __fastcall FUN_00633d60(int *param_1)

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
    param_1[0x598] = 0;
    *(undefined1 *)(param_1 + 0x424) = 0;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00633e31;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00626190(0x30000,0,0,0);
  }
LAB_00633e31:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3cd67750,0);
  }
  return;
}

// 00633E80  FUN_00633e80  size=322  [between]
void __fastcall FUN_00633e80(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x16,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_01646744,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0x30);
  if (iVar2 != 0) {
    FUN_00626420();
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 != 0) {
    FUN_00626650();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00626190(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00626190(0xe,0,0,0);
  }
  return;
}

// 00633FD0  FUN_00633fd0  size=319  [between]
void __fastcall FUN_00633fd0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x15,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_006265b0();
    *(undefined1 *)(param_1 + 0x1048) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_0164674c,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0x30);
  if (iVar2 != 0) {
    FUN_006264e0();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00626190(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00626190(0x30000,0,0,0);
  }
  return;
}

// 00634110  FUN_00634110  size=415  [between]
void __fastcall FUN_00634110(int param_1)

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
      *(float *)(param_1 + 0x1660) =
           (fVar2 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
    }
    if (*(int *)(param_1 + 0x13a0) == 0) {
      sVar3 = FUN_00dde2d0(0,2);
      local_28 = (float)(sVar3 + 1);
      *(float *)(param_1 + 0x1158) = (float)(int)local_28 * 60.0;
      if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
        *(float *)(param_1 + 0x1158) = (float)(int)local_28 * 60.0 + 120.0;
      }
      FUN_00626190(0x3000c,0,0,0);
      *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_1 + 0x13a4);
    }
    if (((*(int **)(param_1 + 0xa84) != (int *)0x0) &&
        (iVar4 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1fc))(), iVar4 != 0)) &&
       (*(int *)(param_1 + 0x13a0) != *(int *)(param_1 + 0x13a4))) {
      sVar3 = FUN_00dde2d0(0,2);
      local_28 = (float)(sVar3 + 1);
      FUN_0061bbf0((float)(int)local_28);
      FUN_00626190(0x3000c,0,0,0);
      *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_1 + 0x13a4);
    }
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00626e00(0xffffffff);
  }
  return;
}

// 006342B0  FUN_006342b0  size=794  [between]
void __fastcall FUN_006342b0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  param_1[0x3aa] = param_1[0x3aa] | 0x20000;
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
    FUN_006336f0(1,param_1 + 0x428);
    FUN_00e5e0c0("em0010_vo_line_caution_rpg",param_1,0xffffffff,0);
    FUN_00a8d280();
  case 1:
    param_1[0x5d6] = 0x3dcccccd;
    fVar1 = (float)param_1[0x249] - (float)param_1[0x244];
    param_1[0x249] = (int)fVar1;
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (param_1[0x2a1] != 0)) {
      FUN_00eaa6e0(0x41200000,0);
      FUN_00a94bc0(2,0);
      FUN_00aa4080(0x327,2,0,0x3f800000,0x8000010,0,0x3f800000);
      iVar3 = param_1[0x6db];
      if (iVar3 == 0) {
        iVar3 = param_1[0x2a1];
      }
      FUN_00624370(iVar3 + 0x40);
      piVar4 = (int *)FUN_0061f840();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))();
      }
      param_1[0x4e8] = param_1[0x4e8] + -1;
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a947e0(0,0,param_1[0x598],0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_006342cf_default;
  case 2:
    param_1[0x187] = 3;
    param_1[0x249] = 0x42700000;
    break;
  case 3:
    break;
  default:
    goto switchD_006342cf_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00626190(0x3000c,0,0,0);
  }
switchD_006342cf_default:
  if (param_1[0x6db] != 0) {
    FUN_00a8e880(param_1[0x6db] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 006345E0  FUN_006345e0  size=413  [between]
void __fastcall FUN_006345e0(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
  *(undefined4 *)(param_1 + 0x1158) = 0x42f00000;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x1158) = 0x43700000;
  }
  fVar3 = (float10)FUN_00ac85c0(5,0x94);
  *(float *)(param_1 + 0x1a8c) = (float)(fVar3 * (float10)60.0);
  fVar3 = (float10)FUN_00ac85c0(5,0x95);
  fVar3 = (float10)FUN_00dde300(0,(float)fVar3);
  *(float *)(param_1 + 0x1a8c) =
       (float)(fVar3 * (float10)60.0 + (float10)*(float *)(param_1 + 0x1a8c));
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x117,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_1 + 0x13a4);
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01b35550;
      (**(code **)(*piVar1 + 4))(&DAT_01b35550);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        FUN_00a8caf0(1,0,0,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 1;
    FUN_00626190(0x30000,0,0,0);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xffbfffff;
  }
  return;
}

// 00634780  FUN_00634780  size=1326  [between]
void __fastcall FUN_00634780(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBX;
  float10 extraout_ST0;
  float10 fVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  float local_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  float fStack_20;
  
  local_34 = 0.0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      local_34 = 0.0;
    }
    else {
      puVar9 = &DAT_01b35b90;
      (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
      iVar3 = FUN_00dd6d80(puVar9);
      local_34 = (float)(-(uint)(iVar3 != 0) & (uint)piVar4);
    }
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x5d7] = 1;
  param_1[0x3a9] = param_1[0x3a9] | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    param_1[0x139] = 1;
    param_1[0x362] = 1;
    FUN_00621810(3,1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    FUN_00a900b0(1);
    goto LAB_0063485d;
  case 1:
LAB_0063485d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    uVar7 = FUN_006210d0();
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      uVar5 = 0x5c4;
    }
    if (param_1[300] == 0x28170) {
      uVar5 = 0x5c8;
    }
    FUN_00aa4080(uVar5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x19);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x358))(0x104,param_1 + 0x4bc);
    }
    iVar3 = FUN_00a8c760(0x1f);
    if (iVar3 != 0) {
      iVar3 = FUN_006210d0();
      if ((iVar3 != 0) || (param_1[300] == 0x28170)) {
        if ((param_1[0x3ab] & 0x40000U) == 0) {
          if (param_1[300] == 0x28170) {
            FUN_00ac94e0("chest_vest");
          }
          FUN_00ac9420(&DAT_0163d9a8);
          FUN_006211c0();
          FUN_00ac8d40(1);
          param_1[0x3ab] = param_1[0x3ab] | 0x40000;
        }
        if ((param_1[0x3ab] & 0x80000U) == 0) {
          if (param_1[300] == 0x28170) {
            FUN_00ac94e0("R_upper_leg_shield");
            pcVar8 = "R_lower_leg_shield";
          }
          else {
            FUN_00ac94e0("R_hip_armor");
            pcVar8 = "R_leg_armor";
          }
          FUN_00ac94e0(pcVar8);
          FUN_00ac9420("_EFD003");
          FUN_00ac8dd0("_R_leg_",1);
          param_1[0x3ab] = param_1[0x3ab] | 0x80000;
        }
        if ((param_1[0x3ab] & 0x100000U) == 0) {
          if (param_1[300] == 0x28170) {
            FUN_00ac94e0("L_upper_leg_shield");
            pcVar8 = "L_lower_leg_shield";
          }
          else {
            FUN_00ac94e0("L_hip_armor");
            pcVar8 = "L_leg_armor";
          }
          FUN_00ac94e0(pcVar8);
          FUN_00ac9420("_EFD004");
          FUN_00ac8dd0("_L_leg_",1);
          param_1[0x3ab] = param_1[0x3ab] | 0x100000;
        }
        if ((param_1[0x3ab] & 0x200000U) == 0) {
          if (param_1[300] == 0x28170) {
            FUN_00ac94e0("L_forearm_armor1");
            pcVar8 = "R_shoulder_pad";
          }
          else {
            pcVar8 = "R_shoulder_armor";
          }
          FUN_00ac94e0(pcVar8);
          FUN_00ac9420("_EFD01");
          FUN_00ac8dd0("_R_arm_",1);
          param_1[0x3ab] = param_1[0x3ab] | 0x200000;
        }
        if ((param_1[0x3ab] & 0x400000U) == 0) {
          if (param_1[300] == 0x28170) {
            FUN_00ac94e0("L_forearm_armor");
            pcVar8 = "L_shoulder_pad";
          }
          else {
            pcVar8 = "L_shoulder_armor";
          }
          FUN_00ac94e0(pcVar8);
          FUN_00ac9420("_EFD02");
          FUN_00ac8dd0("_L_arm_",1);
          param_1[0x3ab] = param_1[0x3ab] | 0x400000;
        }
        if ((param_1[0x3a9] & 0x1000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
        }
        param_1[0x3a9] = param_1[0x3a9] | 0x1000;
      }
      param_1[0x21c] = 0;
      if ((param_1[0x3ab] & 0x8000U) != 0) {
        FUN_00626a10();
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    uVar7 = FUN_006210d0();
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      uVar5 = 0x5c5;
    }
    if (param_1[300] == 0x28170) {
      uVar5 = 0x5c9;
    }
    FUN_00aa4080(uVar5,0,0,(float)extraout_ST0,0x8000000,0xbf800000,(float)extraout_ST0);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00626190(0xb0004,0,0,0);
      param_1[0x3aa] = param_1[0x3aa] | 0x800000;
      (**(code **)(*param_1 + 0x314))();
      param_1[0x139] = 1;
      param_1[0x21c] = 0;
    }
  }
  if (((unaff_EBX == 0) || (iVar3 = FUN_00a8c760(0x1c), iVar3 != 0)) || (param_1[0x187] < 2)) {
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x318))();
    FUN_00a8ce90(&local_34,auStack_24);
    fVar6 = (float10)FUN_00ddba30(*(float *)(unaff_EBX + 0x94) + fStack_20);
    param_1[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(&local_34,&local_34,unaff_EBX + 0x10);
    fVar1 = *(float *)(unaff_EBX + 0x44);
    fVar2 = *(float *)(unaff_EBX + 0x48);
    param_1[0x14] = (int)(*(float *)(unaff_EBX + 0x40) + local_34);
    param_1[0x15] = (int)(fVar1 + fStack_30);
    param_1[0x16] = (int)(fVar2 + fStack_2c);
    param_1[0x17] = iStack_28;
  }
  iVar3 = FUN_00a8c760(0xc);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  return;
}

// 00634CD0  FUN_00634cd0  size=1803  [between]
void __fastcall FUN_00634cd0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  float unaff_EBX;
  float fVar8;
  uint uVar9;
  float10 fVar10;
  undefined *puVar11;
  float local_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float afStack_34 [12];
  
  fVar8 = 0.0;
  local_44 = 0.0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 == (int *)0x0) {
      fVar8 = 0.0;
      local_44 = 0.0;
    }
    else {
      puVar11 = &DAT_01b35b90;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b90);
      iVar4 = FUN_00dd6d80(puVar11);
      fVar8 = (float)(-(uint)(iVar4 != 0) & (uint)piVar5);
      local_44 = fVar8;
    }
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x5d7] = 1;
  param_1[0x3a9] = param_1[0x3a9] | 2;
  if (param_1[0x187] == 0) {
    iVar4 = param_1[300];
    uVar6 = 0x5d7;
    if ((iVar4 == 0x28150) || (iVar4 == 0x28152)) {
      uVar6 = 0x5d8;
    }
    if (iVar4 == 0x28170) {
      uVar6 = 0x5d9;
    }
    FUN_00aa4080(uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    if (fVar8 != 0.0) {
      FUN_00a95ee0(0,fVar8);
    }
    param_1[0x139] = 1;
    param_1[0x362] = 1;
    if (param_1[0x294] != 0) {
      iVar4 = param_1[300];
      uVar7 = 0;
      if ((iVar4 == 0x28150) || (iVar4 == 0x28152)) {
        uVar7 = 1;
      }
      if (iVar4 == 0x28170) {
        uVar7 = 2;
      }
      (**(code **)(*param_1 + 0x344))(uVar7,3,1);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x21c] = 0;
    if ((param_1[0x3ab] & 0x8000U) != 0) {
      FUN_00626a10();
    }
    FUN_00a900b0(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a7c950();
    iVar4 = FUN_00a82090("QTEKnife",0x11504,0);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), fVar8 = unaff_EBX, piVar5 != (int *)0x0)) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      FUN_00ac8ad0(5,param_1[0x13c],iVar4,0,0,0xffffffff);
      iVar4 = param_1[300];
      uVar7 = 0x5df;
      if ((iVar4 == 0x28150) || (iVar4 == 0x28152)) {
        uVar7 = 0x5e0;
      }
      if (iVar4 == 0x28170) {
        uVar7 = 0x5e1;
      }
      FUN_00ac4c70(2);
      FUN_00aa4520(uVar7,param_1[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac4c70(0);
      pcVar3 = *(code **)(*piVar5 + 100);
      piVar5[0xd9] = piVar5[0xd9] & 0xfffffffd;
      (*pcVar3)();
    }
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        FUN_00a81330();
        piVar5 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar5 + 100))();
      }
    }
    iVar4 = FUN_00a8c760(0x19);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x358))(0x104,param_1 + 0x4bc);
    }
    iVar4 = FUN_00a8c760(0x1f);
    if ((iVar4 != 0) &&
       (((iVar4 = param_1[300], iVar4 == 0x28150 || (iVar4 == 0x28152)) || (iVar4 == 0x28170)))) {
      afStack_34[0] = 4.61027e-43;
      afStack_34[1] = 4.69435e-43;
      afStack_34[2] = 4.59626e-43;
      afStack_34[3] = 4.68034e-43;
      afStack_34[4] = 4.62428e-43;
      afStack_34[5] = 4.70836e-43;
      afStack_34[6] = 4.6383e-43;
      afStack_34[7] = 4.72238e-43;
      uVar9 = (uint)(iVar4 == 0x28152);
      if ((param_1[0x3ab] & 0x40000U) == 0) {
        if (iVar4 == 0x28170) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_006211c0();
        FUN_00ac8d40(1);
        param_1[0x3ab] = param_1[0x3ab] | 0x40000;
      }
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("R_upper_leg_shield");
          FUN_00ac94e0("R_lower_leg_shield");
          fVar8 = 4.80645e-43;
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          FUN_00ac94e0("R_leg_armor");
          fVar8 = afStack_34[uVar9 + 4];
        }
        (**(code **)(*param_1 + 0x358))(fVar8,0);
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x80000;
      }
      if ((param_1[0x3ab] & 0x100000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("L_upper_leg_shield");
          FUN_00ac94e0("L_lower_leg_shield");
          fVar8 = 4.82047e-43;
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          FUN_00ac94e0("L_leg_armor");
          fVar8 = afStack_34[uVar9 + 6];
        }
        (**(code **)(*param_1 + 0x358))(fVar8,0);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x100000;
      }
      if ((param_1[0x3ab] & 0x200000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("L_forearm_armor1");
          FUN_00ac94e0("R_shoulder_pad");
          fVar8 = 4.76441e-43;
        }
        else {
          FUN_00ac94e0("R_shoulder_armor");
          fVar8 = afStack_34[uVar9];
        }
        (**(code **)(*param_1 + 0x358))(fVar8,0);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x200000;
      }
      if ((param_1[0x3ab] & 0x400000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("L_forearm_armor");
          FUN_00ac94e0("L_shoulder_pad");
          fVar8 = 4.77843e-43;
        }
        else {
          FUN_00ac94e0("L_shoulder_armor");
          fVar8 = afStack_34[uVar9 + 2];
        }
        (**(code **)(*param_1 + 0x358))(fVar8,0);
        FUN_00ac9420("_EFD02");
        FUN_00ac8dd0("_L_arm_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x400000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
      fVar8 = unaff_EBX;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00626190(0xb0004,0,0,0);
      param_1[0x3aa] = param_1[0x3aa] | 0x800000;
      (**(code **)(*param_1 + 0x314))();
      param_1[0x139] = 1;
      param_1[0x21c] = 0;
    }
  }
  if ((fVar8 == 0.0) || (iVar4 = FUN_00a8c760(0x1c), iVar4 != 0)) {
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(1);
    }
  }
  else {
    FUN_00a8ce90(&local_44,afStack_34);
    fVar10 = (float10)FUN_00ddba30(*(float *)((int)fVar8 + 0x94) + afStack_34[1]);
    param_1[0x25] = (int)(float)fVar10;
    D3DXVec3TransformNormal(&local_44,&local_44,(int)fVar8 + 0x10);
    fVar1 = *(float *)((int)fVar8 + 0x44);
    fVar2 = *(float *)((int)fVar8 + 0x48);
    param_1[0x14] = (int)(local_44 + *(float *)((int)fVar8 + 0x40));
    param_1[0x15] = (int)(fVar1 + fStack_40);
    param_1[0x16] = (int)(fVar2 + fStack_3c);
    param_1[0x17] = iStack_38;
  }
  (**(code **)(*param_1 + 0x314))();
  iVar4 = FUN_00a8c760(0xc);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  return;
}

// 006353E0  Em8010::vf298  size=139  [class]
void __fastcall Em8010::vf298(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffdf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40;
  if (((*(uint *)(param_1 + 0xeac) & 0x3000) == 0) &&
     ((*(uint *)(param_1 + 0xea8) & 0x20000000) == 0)) {
    iVar1 = FUN_00a85630();
    if (iVar1 != 5) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 8) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x120005) {
          if ((*(uint *)(param_1 + 0xea8) & 0x80000000) != 0) {
            if (*(int *)(param_1 + 0x1074) != 0) {
              FUN_00626190(5,0,0,0);
              return;
            }
            FUN_00626190(0x1e,0,0,0);
            return;
          }
          FUN_00626190(4,0,0,0);
        }
      }
    }
  }
  return;
}

// 00635470  Em8010::vf2A0  size=291  [class]
void __fastcall Em8010::vf2A0(int *param_1)

{
  int iVar1;
  
  param_1[0x3a9] = param_1[0x3a9] & 0xffffffdf;
  param_1[0x3a9] = param_1[0x3a9] | 0x40;
  param_1[0x3aa] = param_1[0x3aa] & 0x7ffeffff;
  if ((param_1[0x12a] & 0x8000U) != 0) {
    param_1[0x1bb] = 1;
  }
  if ((param_1[0x3ab] & 0x3000U) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if ((iVar1 == 0) && (param_1[0x605] != 1)) {
      iVar1 = FUN_00a85630();
      if (iVar1 != 5) {
        if (((param_1[0x186] & 0xffff0000U) != 0xa0000) &&
           ((param_1[0x186] & 0xffff0000U) != 0x10000)) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 == 8) {
            FUN_00626190(9,0,0,0);
            return;
          }
          if ((param_1[0x3aa] & 0x20000000U) != 0) {
            FUN_00626190(0xd0001,0,0,0);
            return;
          }
          if (param_1[0x41d] == 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          else {
            FUN_00626190(0x1f,0,0,0);
          }
        }
        if ((((param_1[0x351] & 0x800000U) != 0) && ((param_1[0x186] & 0xffff0000U) != 0xa0000)) &&
           ((param_1[0x186] & 0xffff0000U) != 0x10000)) {
          FUN_00e5e0c0("em0010_vo_line_found_1st",param_1,0xffffffff,0);
        }
      }
    }
  }
  return;
}

// 006355A0  Em8010::vf2A4  size=303  [class]
void __fastcall Em8010::vf2A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffbf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20;
  if ((*(uint *)(param_1 + 0xeac) & 0x2000) == 0) {
    if ((*(uint *)(param_1 + 0x4a8) & 0x8000) != 0) {
      *(undefined4 *)(param_1 + 0x6ec) = 0;
    }
    if (*(int *)(param_1 + 0x1814) == 1) {
      FUN_00ac48e0();
      FUN_00626190(0xb000a,0,0,0);
      return;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 != 8) {
      if (*(int *)(param_1 + 0x1074) == 0) {
        FUN_00626190(0x20,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0xb08) == -1) {
        *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_1 + 0x1820);
        *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(param_1 + 0x1824);
        *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_1 + 0x1828);
        uVar1 = *(undefined4 *)(param_1 + 0x182c);
      }
      else {
        FUN_00a8d790(&local_c);
        *(undefined4 *)(param_1 + 0x1790) = local_c;
        *(undefined4 *)(param_1 + 0x1794) = local_8;
        *(undefined4 *)(param_1 + 0x1798) = local_4;
        uVar1 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x179c) = uVar1;
      iVar2 = *(int *)(param_1 + 0x618);
      if (((iVar2 != 0x120004) && (iVar2 != 0x120001)) && (iVar2 != 0x120000)) {
        FUN_00626190(7,0,0,0);
        return;
      }
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
    }
  }
  return;
}

// 006356D0  Em8010::vf2A8  size=139  [class]
void __fastcall Em8010::vf2A8(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffbf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20;
  if ((*(uint *)(param_1 + 0xeac) & 0x2000) == 0) {
    if (*(int *)(param_1 + 0x1814) == 1) {
      FUN_00ac48e0();
      FUN_00626190(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x4a8) & 0x100000) != 0) {
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x80000000;
    }
    iVar1 = *(int *)(param_1 + 0x618);
    if (((iVar1 != 0x120004) && (iVar1 != 0x120001)) && (iVar1 != 0x120000)) {
      FUN_00626190(0x21,0,0,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x1b8c) = 0x21;
  }
  return;
}

// 00635760  FUN_00635760  size=441  [callgraph]
void __fastcall FUN_00635760(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_006212d0(*(undefined4 *)(param_1 + 0x1bcc),*(undefined4 *)(param_1 + 0x1bd0));
    if (iVar2 != 0) {
      FUN_00ac48e0();
      FUN_00626190(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0) {
      if ((4.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x920) < 0.0)) {
        FUN_00626190(0x60001,0,0,0);
      }
      if ((((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
          && (*(float *)(param_1 + 0xa8c) < 9.0)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00626190(0x60002,0,0,0);
      }
      if (((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) &&
         (((*(uint *)(param_1 + 0xea8) & 0x200) == 0 &&
          ((*(float *)(param_1 + 0xa8c) < 9.0 && (*(float *)(param_1 + 0xaa0) < 0.5235988)))))) {
        FUN_00626190(0x60003,0,0,0);
      }
      if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
        if (0.5235988 < *(float *)(param_1 + 0xa9c)) {
          FUN_00626190(0x6000a,0,0,0);
        }
        fVar1 = -0.5235988;
      }
      else {
        if (0.87266463 < *(float *)(param_1 + 0xa9c)) {
          FUN_00626190(0x6000a,0,0,0);
        }
        fVar1 = -0.87266463;
      }
      if (*(float *)(param_1 + 0xa9c) < fVar1) {
        FUN_00626190(0x60009,0,0,0);
      }
    }
  }
  return;
}

// 00635920  FUN_00635920  size=223  [callgraph]
void __fastcall FUN_00635920(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0x366;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar2 = 0x40;
    }
    else if (*(int *)(param_1 + 0xe98) != 9) goto LAB_00635950;
    uVar1 = 0x490;
  }
LAB_00635950:
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x14ac) == 1) {
      FUN_00626420();
      *(undefined4 *)(param_1 + 0x1074) = 0;
    }
    if (*(int *)(param_1 + 0x14ac) == 2) {
      FUN_006265b0();
      *(undefined4 *)(param_1 + 0x1074) = 0;
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

// 00635A00  FUN_00635a00  size=411  [callgraph]
void __fastcall FUN_00635a00(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_006212d0(*(undefined4 *)(param_1 + 0x1bcc),*(undefined4 *)(param_1 + 0x1bd0));
    if (iVar2 != 0) {
      FUN_00ac48e0();
      FUN_00626190(0xb000a,0,0,0);
      return;
    }
    if ((((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) &&
        (*(float *)(param_1 + 0xa8c) < 9.0)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_00626190(0x60002,0,0,0);
      return;
    }
    if (((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) &&
       (((*(uint *)(param_1 + 0xea8) & 0x200) == 0 &&
        ((*(float *)(param_1 + 0xa8c) < 100.0 && (*(float *)(param_1 + 0xaa0) < 0.5235988)))))) {
      FUN_00626190(0x60003,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00626190(0x60000,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
      if (0.5235988 < *(float *)(param_1 + 0xa9c)) {
        FUN_00626190(0x6000a,0,0,0);
      }
      fVar1 = -0.5235988;
    }
    else {
      if (0.87266463 < *(float *)(param_1 + 0xa9c)) {
        FUN_00626190(0x6000a,0,0,0);
      }
      fVar1 = -0.87266463;
    }
    if (*(float *)(param_1 + 0xa9c) < fVar1) {
      FUN_00626190(0x60009,0,0,0);
    }
  }
  return;
}

// 00635BA0  FUN_00635ba0  size=174  [callgraph]
void __fastcall FUN_00635ba0(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x36a;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar2 = 0x49a;
    }
    else if (*(int *)(param_1 + 0xe98) == 9) {
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
    FUN_00626190(0x60004,0,0,0);
  }
  return;
}

// 00635C50  FUN_00635c50  size=257  [callgraph]
void __fastcall FUN_00635c50(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (0.0 <= *(float *)(param_1 + 0x1158)) {
    return;
  }
  if (*(int *)(param_1 + 0x14ac) != 2) {
    return;
  }
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
    if (((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
       (*(int *)(param_1 + 0x1a3c) == 0)) {
      FUN_00626190(0x60006,0,0,0);
    }
    if (121.0 < *(float *)(param_1 + 0xa8c)) goto LAB_00635d3d;
    fVar1 = 0.54105204;
  }
  else {
    if (((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
       (*(int *)(param_1 + 0x1a3c) == 0)) {
      FUN_00626190(0x60006,0,0,0);
    }
    if (121.0 < *(float *)(param_1 + 0xa8c)) goto LAB_00635d3d;
    fVar1 = 0.80285144;
  }
  if (fVar1 < *(float *)(param_1 + 0xaa0) == (fVar1 == *(float *)(param_1 + 0xaa0))) {
    return;
  }
LAB_00635d3d:
  FUN_00626190(0x60005,0,0,0);
  return;
}

// 00635D60  FUN_00635d60  size=51  [callgraph]
void __fastcall FUN_00635d60(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x13a0) == 0)) {
    FUN_00626190(0x60004,0,0,0);
    *(undefined4 *)(param_1 + 0x1158) = 0x41f00000;
  }
  return;
}

// 00635DA0  FUN_00635da0  size=465  [callgraph]
void __fastcall FUN_00635da0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0x36b;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar4 = 0x49b;
    }
    else if (param_1[0x3a6] == 9) {
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
    FUN_006336f0(1,param_1 + 0x428);
    param_1[0x4e8] = 0xf;
  }
  else if (param_1[0x187] != 1) goto LAB_00635f3c;
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4e8] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00619d80();
    FUN_00624080(param_1[0x2a1] + 0x40);
    param_1[0x4e8] = param_1[0x4e8] + -1;
    param_1[0x249] = 0x40c00000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00626190(0x60004,0,0,0);
  }
LAB_00635f3c:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3ae4c388,0);
  return;
}

// 00635FB0  FUN_00635fb0  size=688  [callgraph]
void __fastcall FUN_00635fb0(int *param_1)

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
    if (((param_1[0x3a9] & 0x20000U) != 0) && (uVar5 = 0x4cf, param_1[0x3a6] == 8)) {
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
    FUN_0061dfc0();
    break;
  case 1:
    break;
  case 2:
    uVar5 = 0;
    uVar3 = 0x4c4;
    if (((param_1[0x3a9] & 0x20000U) != 0) && (uVar3 = 0x4d0, param_1[0x3a6] == 8)) {
      uVar5 = 0x40;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar5,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x314);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    goto LAB_0063615b;
  case 3:
LAB_0063615b:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 0x324))();
    if (iVar4 == 0) {
      return;
    }
LAB_0063618f:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar5 = 0x8000000;
    uVar3 = 0x4c5;
    if (((param_1[0x3a9] & 0x20000U) != 0) && (uVar3 = 0x4d1, param_1[0x3a6] == 8)) {
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
    FUN_0061bbf0(param_1[0x66d]);
    iVar4 = FUN_00627200();
    if (iVar4 != 0) {
      return;
    }
    if (param_1[0x139] == 0) {
      FUN_006274f0();
      return;
    }
    goto LAB_0063618f;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00635fcb_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00635fcb_default:
  return;
}

// 00636280  FUN_00636280  size=418  [callgraph]
void __fastcall FUN_00636280(int *param_1)

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
    if (((param_1[0x3a9] & 0x20000U) != 0) && (param_1[0x3a6] == 8)) {
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
    FUN_0061dfc0();
    (**(code **)(*param_1 + 0x220))(0x41000000);
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0;
    if (((param_1[0x3a9] & 0x20000U) != 0) && (param_1[0x3a6] == 8)) {
      uVar2 = 0x40;
    }
    FUN_00aa4080(0x4a8,0,0x3dcccccd,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00626190(0x60010,0,0,0);
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

// 00636440  FUN_00636440  size=274  [callgraph]
void __fastcall FUN_00636440(int param_1)

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
    if (*(int *)(param_1 + 0x1474) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_0061dfc0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00626190(0x6000f,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00636560  FUN_00636560  size=257  [callgraph]
void __fastcall FUN_00636560(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar3 = 0;
    if (((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) && (*(int *)(param_1 + 0xe98) == 8)) {
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
    if (*(int *)(param_1 + 0x1474) != 0) {
      *(undefined4 *)(param_1 + 0x894) = 0xbe99999a;
    }
    FUN_0061dfc0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00626190(0x6000f,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00636670  FUN_00636670  size=80  [callgraph]
void __fastcall FUN_00636670(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_0061dfc0();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00626190(0x60010,0,0,0);
  }
  return;
}

// 006366C0  FUN_006366c0  size=291  [callgraph]
void __fastcall FUN_006366c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    uVar2 = 0x8000000;
    if (((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) && (*(int *)(param_1 + 0xe98) == 8)) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x4a9,0,0x3c888889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0061dfc0();
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
    iVar1 = FUN_00627200();
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_0061bbf0(*(undefined4 *)(param_1 + 0x19b4));
    FUN_006274f0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00627200(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_0061bbf0(*(undefined4 *)(param_1 + 0x19b4));
      FUN_006274f0();
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    return;
  }
  return;
}

// 006367F0  FUN_006367f0  size=431  [callgraph]
void __fastcall FUN_006367f0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    uVar4 = 0;
    uVar3 = 0x1c3;
    if ((param_1[0x3a9] & 0x20000U) != 0) {
      if (param_1[0x3a6] == 8) {
        uVar4 = 0x40;
        uVar3 = 0x1c4;
      }
      if (param_1[0x3a6] == 9) {
        uVar3 = 0x1c4;
      }
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43960000;
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(param_1[0x5a7],param_1 + 0x5a8);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
                    /* WARNING: Could not recover jumptable at 0x006368ee. Too many branches */
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
    (**(code **)(*param_1 + 0x358))(param_1[0x5a7],param_1 + 0x5a8);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00eaa6e0(0x3f800000,0);
      FUN_006274f0();
      return;
    }
    break;
  default:
    goto switchD_00636804_default;
  }
switchD_00636804_default:
  return;
}

// 006369C0  FUN_006369c0  size=489  [callgraph]
void __fastcall FUN_006369c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_006212d0(*(undefined4 *)(param_1 + 0x1bcc),*(undefined4 *)(param_1 + 0x1bd0));
    if (iVar1 != 0) {
      FUN_00ac48e0();
      FUN_00626190(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0) {
      if ((2.25 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x920) < 0.0)) {
        FUN_00626190(0x50001,0,0,0);
      }
      if (1.5707964 < *(float *)(param_1 + 0xaa0)) {
        FUN_00626190(0x50001,0,0,0);
      }
      if (*(int *)(param_1 + 0x4b0) != 0x28170) {
        if (((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
           && ((*(byte *)(param_1 + 0x1818) & 2) == 0)) {
          if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
            FUN_00626190(0x50002,0,0,0);
            return;
          }
        }
        else {
          if (((*(int *)(param_1 + 0x14ac) != 2) || ((*(uint *)(param_1 + 0xea4) & 0x40000000) != 0)
              ) || ((*(byte *)(param_1 + 0x1818) & 2) != 0)) {
            if (4.0 <= *(float *)(param_1 + 0xa8c)) {
              return;
            }
            FUN_00626190(0x50007,0,0,0);
            return;
          }
          if ((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 1.7453293)) {
            FUN_00626190(0x50003,0,0,0);
            return;
          }
        }
        FUN_00626190(0x50001,0,0,0);
        return;
      }
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00626190(0x1001a,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00636BB0  FUN_00636bb0  size=244  [callgraph]
void __fastcall FUN_00636bb0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x37b;
  if (*(int *)(param_1 + 0x4b0) == 0x28170) {
    uVar1 = 0x576;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,(*(uint *)(param_1 + 0x1818) & 2) << 5,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if ((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) {
      FUN_00626420();
      *(undefined4 *)(param_1 + 0x1074) = 0;
    }
    if ((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) {
      FUN_006265b0();
      *(undefined4 *)(param_1 + 0x1074) = 0;
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

// 00636CB0  FUN_00636cb0  size=372  [callgraph]
void __fastcall FUN_00636cb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_006212d0(*(undefined4 *)(param_1 + 0x1bcc),*(undefined4 *)(param_1 + 0x1bd0));
    if (iVar1 != 0) {
      FUN_00ac48e0();
      FUN_00626190(0xb000a,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x4b0) == 0x28170) {
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00626190(0x1001a,0,0,0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
            && ((*(byte *)(param_1 + 0x1818) & 2) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00626190(0x50002,0,0,0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
            && ((*(byte *)(param_1 + 0x1818) & 2) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00626190(0x50003,0,0,0);
        return;
      }
    }
    else if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00626190(0x50007,0,0,0);
    }
  }
  return;
}

// 00636E30  FUN_00636e30  size=215  [callgraph]
void __fastcall FUN_00636e30(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x381,0,0x3e088889,0x3f800000,(param_1[0x606] & 2U | 0x400000) << 5,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00636ebd;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00626190(0x50004,0,0,0);
  }
LAB_00636ebd:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00636F10  FUN_00636f10  size=352  [callgraph]
void __fastcall FUN_00636f10(int *param_1)

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
    param_1[0x598] = (int)((fVar1 - (float)param_1[0x598]) * 0.1 + (float)param_1[0x598]);
    if ((((float)param_1[0x456] < 0.0) && (param_1[0x52b] == 2)) &&
       ((*(byte *)(param_1 + 0x606) & 2) == 0)) {
      if ((((float)param_1[0x2a3] < 100.0) && ((float)param_1[0x2a8] < 0.7853982)) &&
         (param_1[0x68f] == 0)) {
        FUN_00626190(0x50006,0,0,0);
      }
      if ((121.0 < (float)param_1[0x2a3]) ||
         (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 0.80285144 < fVar1 != (fVar1 == 0.80285144))
         ) {
        FUN_00626190(0x50005,0,0,0);
      }
    }
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00637120  FUN_00637120  size=483  [callgraph]
void __fastcall FUN_00637120(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("HAIZURI ASS FIRE",0x3e088889,0,0);
    uVar4 = (*(uint *)(param_1 + 0x1818) & 2) << 5 | 0x80000;
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x386,0x3e088889,uVar4);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x382,0x3e088889,uVar4);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x385,0x3e088889,uVar4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    sVar2 = FUN_00dde2d0(3,6);
    *(float *)(param_1 + 0x920) = (float)(int)sVar2 * 30.0 + 90.0;
    sVar2 = FUN_00dde2d0(1,3);
    *(float *)(param_1 + 0x920) = (float)(int)sVar2 * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0x42480000;
    FUN_006336f0(1,param_1 + 0x10a0);
    *(undefined4 *)(param_1 + 0x13a0) = 0xf;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = fVar1;
  if ((fVar1 <= 0.0) && (*(int *)(param_1 + 0x13a0) != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_0061a0f0();
    FUN_00624080(*(int *)(param_1 + 0xa84) + 0x40);
    *(int *)(param_1 + 0x13a0) = *(int *)(param_1 + 0x13a0) + -1;
    *(undefined4 *)(param_1 + 0x924) = 0x40c00000;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00626190(0x50004,0,0,0);
  }
  return;
}

// 00637310  FUN_00637310  size=131  [callgraph]
void __fastcall FUN_00637310(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  param_1[0x3ab] = param_1[0x3ab] | 0x2000;
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
  FUN_00626190(0x10000000,0,0,0);
  return;
}

// 006373A0  FUN_006373a0  size=229  [callgraph]
void __fastcall FUN_006373a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x3a6] == 0x10) {
    FUN_00627200();
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
  param_1[0x3ab] = param_1[0x3ab] & 0xffffdfff;
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

// 00637490  FUN_00637490  size=282  [callgraph]
void __fastcall FUN_00637490(int param_1)

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
    FUN_00626740(puVar3,1);
    *(undefined4 *)(param_1 + 0x1a84) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    iVar2 = FUN_0061f3c0();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_0061f3c0();
      uVar1 = *(undefined4 *)(iVar2 + 0x94);
    }
    FUN_00623db0(0xbf490fdb,uVar1,0x40c00000,1,0);
  }
  return;
}

// 006375B0  FUN_006375b0  size=320  [callgraph]
void __fastcall FUN_006375b0(int *param_1)

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
      FUN_00626190(0x10000027,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x006376ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  default:
    goto switchD_006375c4_default;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006375c4_default:
  return;
}

// 00637700  FUN_00637700  size=301  [callgraph]
void __fastcall FUN_00637700(int *param_1)

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
    FUN_00626190(0x10000028,0,0,0);
  }
  return;
}

// 00637830  FUN_00637830  size=365  [callgraph]
void __fastcall FUN_00637830(int param_1)

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
      FUN_00626190(0xb0000,0,0,0);
      return;
    }
  }
  return;
}

// 006379C0  FUN_006379c0  size=221  [callgraph]
void __fastcall FUN_006379c0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x318))();
  if (param_1[0x187] == 0) {
    FUN_00aa4120(0x198,0,0,0x3f800000,0,0xbf800000,0x3f800000);
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
  FUN_00626190(0xa0005,0,0,0);
  param_1[0x187] = 2;
  return;
}

// 00637AA0  FUN_00637aa0  size=373  [callgraph]
undefined4 __fastcall FUN_00637aa0(int param_1)

{
  float fVar1;
  short sVar2;
  
  if (*(int *)(param_1 + 0x1a84) == 0) {
    *(undefined4 *)(param_1 + 0x1688) = 0x42480000;
    FUN_006336f0(1,param_1 + 0x10a0);
    *(undefined4 *)(param_1 + 0x1a84) = 1;
  }
  else if (*(int *)(param_1 + 0x1a84) != 1) goto LAB_00637b7a;
  fVar1 = *(float *)(param_1 + 0x1688) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1688) = fVar1;
  if ((fVar1 <= 0.0) && (*(int *)(param_1 + 0x13a0) != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a94bc0(2,0);
    FUN_00aa4080(0x3bc,2,0,0x3f800000,0x8000010,0,0x3f800000);
    *(int *)(param_1 + 0x13a0) = *(int *)(param_1 + 0x13a0) + -1;
    *(undefined4 *)(param_1 + 0x1688) = 0x40c00000;
    *(undefined4 *)(param_1 + 0x13a8) = 1;
  }
LAB_00637b7a:
  if ((*(int *)(param_1 + 0x13a0) == 0) && (*(float *)(param_1 + 0x1688) <= 0.0)) {
    sVar2 = FUN_00dde2d0(0,2);
    fVar1 = (float)(sVar2 + 1) * 60.0;
    *(float *)(param_1 + 0x1158) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1158) = fVar1 + 120.0;
    }
    *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_1 + 0x13a4);
    *(undefined4 *)(param_1 + 0x1a84) = 0;
    FUN_00eaa6e0(0x41200000,0);
    return 1;
  }
  return 0;
}

// 00637C20  FUN_00637c20  size=310  [callgraph]
void __fastcall FUN_00637c20(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x5e4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xd88) = 1;
    FUN_00a900b0(1);
    FUN_00621810(3,1);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x5e6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 4:
    FUN_00aa4080(0x5e5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00626190(0xb0004,0,0,0);
      return;
    }
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00637D70  FUN_00637d70  size=868  [callgraph]
void __fastcall FUN_00637d70(int *param_1)

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
    param_1[0x6e2] = iVar3;
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
      FUN_0061bbf0((float)(int)sVar2);
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) break;
    if ((20.25 <= (float)param_1[0x2a3]) || (0.7853982 <= (float)param_1[0x2a8])) {
      sVar2 = FUN_00dde2d0(0,1);
LAB_00637fef:
      FUN_0061bbf0((float)(int)sVar2);
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
          goto LAB_00637fef;
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
      FUN_00626190(param_1[0x251],2,0,0);
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

// 006380F0  FUN_006380f0  size=234  [callgraph]
void __fastcall FUN_006380f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a4,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_006265b0();
    *(undefined1 *)(param_1 + 0x412) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016467c0,0);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0x30);
  if (iVar2 != 0) {
    FUN_006264e0();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006381d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006381E0  FUN_006381e0  size=234  [callgraph]
void __fastcall FUN_006381e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a5,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00626650();
    *(undefined1 *)(param_1 + 0x412) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016467c8,0);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0x30);
  if (iVar2 != 0) {
    FUN_00626420();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006382c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006382D0  FUN_006382d0  size=310  [callgraph]
void __fastcall FUN_006382d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x28e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined4 *)(param_1 + 0x1064) = 0x42680000;
    *(undefined4 *)(param_1 + 0x1810) = 0;
    *(undefined1 *)(param_1 + 0x1060) = 1;
    *(undefined4 *)(param_1 + 0x1068) = 0x42100000;
    *(undefined4 *)(param_1 + 0x106c) = 0;
    *(undefined1 *)(param_1 + 0x1048) = 1;
    *(undefined4 *)(param_1 + 0x104c) = 0x428c0000;
    *(undefined4 *)(param_1 + 0x1050) = 1;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016467d0,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00626190(0x20000,0,0,0);
  }
  return;
}

// 00638410  FUN_00638410  size=301  [callgraph]
void __fastcall FUN_00638410(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x28f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1660) = 0;
    *(undefined4 *)(param_1 + 0x1064) = 0x42900000;
    *(undefined4 *)(param_1 + 0x1810) = 0;
    *(undefined4 *)(param_1 + 0x1068) = 0x42900000;
    *(undefined1 *)(param_1 + 0x1060) = 1;
    *(undefined4 *)(param_1 + 0x106c) = 1;
    *(undefined4 *)(param_1 + 0x104c) = 0x42040000;
    *(undefined1 *)(param_1 + 0x1048) = 1;
    *(undefined4 *)(param_1 + 0x1050) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b35548;
      (**(code **)(*piVar1 + 4))(&DAT_01b35548);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016467dc,0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00626190(0xe,0,0,0);
  }
  return;
}

// 00638540  FUN_00638540  size=122  [callgraph]
void __fastcall FUN_00638540(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x105c) == 0) {
      FUN_00626190(0x7000b,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00626190(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00626190(0x23,0,0,0);
    }
  }
  return;
}

// 006385C0  FUN_006385c0  size=329  [callgraph]
void __fastcall FUN_006385c0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  if (param_1[0x187] == 0) goto LAB_006386e5;
  if (((param_1[0x2a1] == 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (param_1[0x66e] == 0)) {
LAB_0063864d:
    if (param_1[0x670] != 0) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
      goto LAB_006386e5;
    }
  }
  else if (param_1[0x670] != 0) {
    if ((param_1[0x2fa] == 0) && ((float)param_1[0x2a3] < 16.0)) {
      FUN_00626190(0x10002,0,0,0);
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    goto LAB_0063864d;
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
  if (30.0 < (float)param_1[0x244] + fVar1) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (param_1[0x421] != 0) {
        FUN_00626190(0x11,0,0,0);
      }
    }
    else if (param_1[0x420] != 0) {
      FUN_00626190(0x10,0,0,0);
    }
  }
LAB_006386e5:
  if (4.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00638707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00638710  FUN_00638710  size=369  [callgraph]
void __fastcall FUN_00638710(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a5a),0,0x3e088889,0x3f800000,0,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5fa] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0063877c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0063877c:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b3554c;
      (**(code **)(*piVar3 + 4))(&DAT_01b3554c);
      iVar2 = FUN_00dd6d80(puVar4);
      if ((iVar2 != 0) && (iVar2 = FUN_00a12210(0), iVar2 != 0)) {
        iVar2 = FUN_00a12210(0);
        param_1[0x5e4] = *(int *)(iVar2 + 0x40);
        param_1[0x5e5] = *(int *)(iVar2 + 0x44);
        param_1[0x5e6] = *(int *)(iVar2 + 0x48);
        param_1[0x5e7] = *(int *)(iVar2 + 0x4c);
        FUN_00a8e880(param_1 + 0x5e4);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
        fVar1 = (float)param_1[0x10] - (float)param_1[0x5e4];
        if ((param_1[0x5fa] != 0) ||
           (fVar1 = ((float)param_1[0x12] - (float)param_1[0x5e6]) *
                    ((float)param_1[0x12] - (float)param_1[0x5e6]) + fVar1 * fVar1,
           fVar1 < 1.0 != (fVar1 == 1.0))) {
          FUN_00626190(0x7000c,0,0,0);
        }
      }
    }
  }
  return;
}

// 00638890  FUN_00638890  size=237  [callgraph]
void __fastcall FUN_00638890(int *param_1)

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
    FUN_00626970();
    param_1[0x693] = 0x4680454;
    param_1[0x694] = 0x4680468;
    param_1[0x695] = 0x470046c;
    param_1[0x696] = 0x4780474;
    param_1[0x697] = 0x4780478;
    param_1[0x698] = 0x47c047b;
    *(undefined4 *)((int)param_1 + 0x1a6a) = 0x4810481;
    *(undefined4 *)((int)param_1 + 0x1a6e) = 0x47d0483;
    *(undefined4 *)((int)param_1 + 0x1a72) = 0x48c048c;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0063897b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00638980  FUN_00638980  size=303  [callgraph]
void __fastcall FUN_00638980(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4e4) == 0) && (-1 < *(int *)(param_1 + 0x870))) &&
     ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0xb0000)) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x105c);
      iVar2 = FUN_0061f990();
      if (iVar2 != 0) {
        FUN_00ac8b80(*(undefined4 *)(iVar2 + 0x4f0));
        *(undefined4 *)(param_1 + 0x105c) = 0;
      }
      if (iVar1 != 0) {
        FUN_00626190(0x7000d,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x14b0) = 0;
      iVar1 = FUN_006210d0();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x4a0) = 0xb;
        *(undefined4 *)(param_1 + 0x1a4c) = 0x2930292;
        *(undefined4 *)(param_1 + 0x1a50) = 0x2930293;
        *(undefined4 *)(param_1 + 0x1a54) = 0x2980297;
        *(undefined4 *)(param_1 + 0x1a58) = 0x2940299;
        *(undefined4 *)(param_1 + 0x1a5c) = 0x2940294;
        *(undefined4 *)(param_1 + 0x1a60) = 0x2960295;
        *(undefined4 *)(param_1 + 0x1a64) = 0x29b029a;
        *(undefined4 *)(param_1 + 0x1a68) = 0x29e029c;
        *(undefined4 *)(param_1 + 0x1a6c) = 0x2c1029f;
        *(undefined4 *)(param_1 + 0x1a70) = 0x2b1029d;
        *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) & 0xffff7fff;
        return;
      }
      *(undefined4 *)(param_1 + 0x4a0) = 0;
      FUN_0061bfe0(0);
      *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) & 0xffff7fff;
    }
  }
  return;
}

// 00638AB0  FUN_00638ab0  size=112  [callgraph]
void __thiscall FUN_00638ab0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[0x417] != 0) && (param_1[0x186] != 0x110001)) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      uVar2 = 0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        uVar2 = FUN_00a7c8a0();
      }
      (**(code **)(*param_1 + 0x198))(uVar2,param_2,3);
      FUN_00626190(0x110001,0,0,0);
    }
  }
  return;
}

// 00638B80  FUN_00638b80  size=312  [callgraph]
undefined4 __thiscall FUN_00638b80(int *param_1,int *param_2)

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
        puVar5 = &DAT_01b35540;
        (**(code **)(*piVar2 + 4))(&DAT_01b35540);
        iVar1 = FUN_00dd6d80(puVar5);
        uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
  }
  if (param_1[0x236] < 1) {
    if (uVar4 != 0) {
      FUN_00638980();
    }
    FUN_009fdde0();
    return 1;
  }
  if (uVar4 != 0) {
    FUN_00638ab0(param_2);
  }
  return 1;
}

// 00638CC0  FUN_00638cc0  size=837  [callgraph]
bool __thiscall FUN_00638cc0(int *param_1,int param_2,int param_3,int param_4)

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
      FUN_00626190(0xb0000,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 4;
    if (param_1[0x294] != 0) {
      FUN_00621810(1,1);
    }
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    param_1[0x527] = *(int *)(iVar2 + 8);
    return false;
  case 4:
  case 5:
  case 8:
  case 9:
    if (param_2 == 0) {
      if (param_4 == param_3) {
        return true;
      }
      param_1[0x3a9] = param_1[0x3a9] & 0xfffdffff;
      if ((param_3 == 9) || (param_3 == 8)) {
        param_1[0x3a9] = param_1[0x3a9] | 0x20000;
      }
      FUN_00626190(0xa001a,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 8;
    param_1[0x605] = 1;
    goto LAB_00638e64;
  case 6:
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x606) & 4) != 0) {
        return true;
      }
      FUN_00626190(0xa001b,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 1;
    param_1[0x605] = 2;
    break;
  case 7:
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x606) & 4) != 0) {
        return true;
      }
      FUN_00626190(0xa001c,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 2;
    param_1[0x605] = 2;
    FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
    return bVar3;
  case 0xe:
    if (param_2 == 0) {
      if ((param_4 == param_3) || ((param_1[0x605] == 1 && ((param_1[0x3a9] & 0x20000U) == 0)))) {
        FUN_00626190(0x60007,0,0,0);
      }
      else {
        pcVar1 = *(code **)(*param_1 + 0x34c);
        param_1[0x605] = 1;
        (*pcVar1)();
      }
    }
    iVar2 = param_1[0x13c];
    goto LAB_00638ed7;
  case 0xf:
    if (param_2 == 0) {
      FUN_00626190(0xa001d,0,0,0);
    }
    iVar2 = param_1[0x13c];
LAB_00638ed7:
    param_1[0x605] = 1;
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
      FUN_00626190(0xa001e,0,0,0);
    }
LAB_00638e64:
    FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
    return bVar3;
  case 0x1b:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00626190(0xa001f,0,0,0);
    }
    break;
  case 0x1c:
    FUN_00626190(0xa0020,2,0,0);
    iVar2 = param_1[0x13c];
    goto LAB_00638db1;
  case 0x1d:
    FUN_00626190(0xb000c,0,0,0);
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    return bVar3;
  case 0x1e:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00626190(0xa0000,0,0,0);
    }
    iVar2 = param_1[0x13c];
    goto LAB_00638db1;
  }
  iVar2 = param_1[0x13c];
LAB_00638db1:
  FUN_00c1a300(iVar2,param_1 + 0x2ac);
  return bVar3;
}

// 00639060  Em8010::vf258  size=960  [class]
void __thiscall Em8010::vf258(int param_1,undefined4 param_2,int param_3,int param_4)

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
        puVar6 = &DAT_01b35540;
        (**(code **)(*piVar1 + 4))(&DAT_01b35540);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
      }
    }
  }
  iVar2 = param_4;
  switch(param_2) {
  case 0:
    iVar2 = 1;
    if (*(int *)(param_4 + 0x24) == 0x38070) {
      iVar2 = 7;
    }
    if (*(int *)(param_4 + 0x24) == 0x38060) {
      iVar2 = 6;
    }
    param_4 = FUN_00ac8c70(param_4);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    if (*(int *)(param_4 + 0xc) == 9) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(int *)(param_1 + 0x14ac) = iVar2;
      FUN_00626420();
    }
    else {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x14b4) != iVar2)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x14b0) = iVar2;
      }
      else {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x14ac) = iVar2;
      }
      FUN_006264e0();
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0061d040(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
LAB_00639401:
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
    if ((iVar2 == 0x38040) || (iVar2 == 0x38042)) {
      iVar5 = 2;
    }
    if (iVar2 == 0x38080) {
      iVar5 = 5;
    }
    param_4 = FUN_00ac8c70(param_4);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    if (*(int *)(param_4 + 0xc) == 9) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(int *)(param_1 + 0x14ac) = iVar5;
      FUN_006265b0();
    }
    else {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x14b4) != iVar5)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x14b0) = iVar5;
      }
      else {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(int *)(param_1 + 0x14ac) = iVar5;
      }
      FUN_00626650();
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0061d040(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      goto LAB_00639401;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x14b0) = 4;
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0061d070(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      FUN_00a7c960(&param_4);
      FUN_00626970();
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
      *(undefined4 *)(param_1 + 0x14ac) = 6;
      FUN_00626b70(1);
    }
    else {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x14b4) != 6)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(undefined4 *)(param_1 + 0x14b0) = 6;
      }
      else {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        *(undefined4 *)(param_1 + 0x14ac) = 6;
      }
      FUN_00626cc0(1);
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0061d040(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      goto LAB_00639401;
    }
    break;
  default:
    goto switchD_006390e4_default;
  }
switchD_006390e4_default:
  return;
}

// 00639440  Em8010::vf340  size=40  [class]
void __fastcall Em8010::vf340(int param_1)

{
  BehaviorEmBase::vf340();
  if (*(int *)(param_1 + 0xbfc) != 0) {
    FUN_00dd5650(&DAT_016467e4);
    FUN_006276b0();
    return;
  }
  return;
}

// 00639470  FUN_00639470  size=276  [between]
void __fastcall FUN_00639470(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar3 = 0x38030;
  if ((iVar1 == 0x28150) || (iVar1 == 0x28152)) {
    uVar3 = 0x38070;
  }
  if (iVar1 == 0x28160) {
    uVar3 = 0x38031;
  }
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em8010_Blade",uVar3,0);
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
      puVar4 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c940(uVar3);
        FUN_00a7c960(&stack0x00000000);
        iVar1 = FUN_00ac89d0();
        piVar2[0x146] = iVar1;
        FUN_006264e0();
        return;
      }
    }
  }
  FUN_006264e0();
  return;
}

// 00639590  FUN_00639590  size=530  [between]
void __thiscall FUN_00639590(int param_1,undefined4 param_2)

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
  uVar1 = 0x38040;
  if (*(int *)(param_1 + 0x4b0) == 0x28160) {
    uVar1 = 0x38042;
  }
  iVar2 = FUN_00a82090("Em8010_Assault",uVar1,0);
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
      puVar4 = &DAT_01b35548;
      (**(code **)(*piVar3 + 4))(&DAT_01b35548);
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
    FUN_00626650();
    uVar1 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x13a4) = uVar1;
    *(undefined4 *)(param_1 + 0x13a0) = uVar1;
    FUN_0040b190();
    iVar2 = FUN_00a82090("Em8010Magazine",0x38041,auStack_90);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01646860);
      return;
    }
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b35544;
      (**(code **)(*piVar3 + 4))(&DAT_01b35544);
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

// 006397B0  FUN_006397b0  size=298  [between]
void FUN_006397b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  FUN_00a7c950();
  if (param_2 == 0) {
    FUN_00a7c950();
    uVar4 = 0x38060;
    pcVar3 = "Em8010_Blade";
  }
  else {
    FUN_00a7c950();
    uVar4 = 0x38050;
    pcVar3 = "Em8010_SmallBlade";
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
      puVar5 = &DAT_01b35548;
      (**(code **)(*piVar2 + 4))(&DAT_01b35548);
      iVar1 = FUN_00dd6d80(puVar5);
      if (iVar1 != 0) {
        uVar4 = FUN_009f8b40();
        FUN_009f8ae0(uVar4);
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c940(uVar4);
        FUN_00a7c960(&stack0x00000000);
        iVar1 = FUN_00ac89d0();
        piVar2[0x146] = iVar1;
        FUN_00626cc0(param_2);
        return;
      }
    }
  }
  FUN_00626cc0(param_2);
  return;
}

// 006398E0  FUN_006398e0  size=1287  [between]
/* WARNING: Removing unreachable block (ram,0x00639b0b) */
/* WARNING: Removing unreachable block (ram,0x00639c8e) */

void FUN_006398e0(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

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
  pfStack_64 = (float *)0x6398ff;
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

// 00639DF0  FUN_00639df0  size=321  [between]
void __fastcall FUN_00639df0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) goto LAB_00639f0d;
  if (((param_1[0x2a1] == 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (param_1[0x66e] == 0)) {
LAB_00639e83:
    if (param_1[0x670] != 0) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
      goto LAB_00639f0d;
    }
  }
  else if (param_1[0x670] != 0) {
    iVar3 = FUN_00632b80(1);
    if (iVar3 != 0) {
      return;
    }
    if (((param_1[0x250] == 1) && ((*(byte *)(param_1 + 0x3ab) & 0x20) != 0)) &&
       ((float)param_1[0x2a3] < 16.0)) {
      FUN_00626190(0x10002,0,0,0);
      FUN_00c27260(0x40200000);
      return;
    }
    goto LAB_00639e83;
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
  if (30.0 < (float)param_1[0x244] + fVar1) {
    iVar3 = FUN_00632b80(1);
    if (iVar3 != 0) {
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      FUN_00626190(0x11,0,0,0);
    }
    else {
      FUN_00626190(0x10,0,0,0);
    }
  }
LAB_00639f0d:
  if (4.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00639f2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00639F40  FUN_00639f40  size=6155  [between]
/* WARNING: Removing unreachable block (ram,0x0063a865) */
/* WARNING: Removing unreachable block (ram,0x0063a7cb) */
/* WARNING: Removing unreachable block (ram,0x0063a875) */

int __thiscall FUN_00639f40(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 uVar14;
  char *pcVar15;
  int local_18;
  int *local_14;
  int *local_c;
  uint local_4;
  
  local_18 = 0;
  local_c = (int *)0x0;
  iVar5 = FUN_00a8cab0();
  local_4 = 0;
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    local_c = (int *)FUN_00a7c8a0();
  }
  iVar7 = *param_2;
  if ((((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) || ((iVar7 == 0x1b0 || (iVar7 == 0x147))))
  goto LAB_0063b695;
  if (5 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x3a9] = param_1[0x3a9] | 0x8000000;
  }
  if ((param_2[0x23] & 0x10000000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x400;
  }
  local_14 = (int *)param_2[1];
  if (0.0 < (float)param_1[0x5a1]) {
    local_14 = (int *)0x0;
  }
  if ((*param_2 == 0xe2) && (param_1[0x186] == 0xb0007)) {
    return 0;
  }
  if (*param_2 == 0x9d) {
    local_14 = (int *)0x0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    local_14 = (int *)0x0;
  }
  local_4 = 1;
  if ((param_1[0x1d9] != 0) && (iVar7 = FUN_008e24a0(2), iVar7 != 0)) {
    local_4 = 0x8001;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) goto LAB_0063b695;
  param_1[0x3aa] = param_1[0x3aa] & 0xffffefff;
  if ((*param_2 == 0x93) && (iVar7 = FUN_00621110(), iVar7 != 0)) {
    local_4 = 0x40000;
    goto LAB_0063b695;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    bVar2 = true;
    iVar7 = FUN_006210d0();
    if (((iVar7 != 0) || (param_1[300] == 0x28170)) && ((param_1[0x3a9] & 0x1000U) == 0)) {
      bVar2 = false;
    }
    iVar7 = FUN_00a9b930();
    if (iVar7 != 0) {
      FUN_00a9b930();
      iVar7 = FUN_00bda170();
      if (iVar7 == 0) goto LAB_0063a102;
    }
    if (bVar2) {
      local_4 = local_4 | 0x40;
    }
  }
LAB_0063a102:
  if (((param_2[0x23] & 0x8000U) != 0) &&
     (((iVar7 = FUN_006210d0(), iVar7 == 0 && (param_1[300] != 0x28170)) ||
      ((param_1[0x3a9] & 0x1000U) != 0)))) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_006211c0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x80000;
    }
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar15 = "R_shoulder_pad";
      }
      else {
        pcVar15 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar15);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar15 = "L_shoulder_pad";
      }
      else {
        pcVar15 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar15);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
    }
    param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar7 = FUN_00ac8170(local_c), iVar7 == 0))
  goto LAB_0063b695;
  if ((DAT_01bea094 & 0x20000) != 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x80000;
  }
  if ((param_1[0x21c] < 1) || (iVar7 = FUN_00ac8170(local_c), iVar7 == 0)) {
LAB_0063a6a4:
    param_1[0x458] = param_1[0x458] + -1;
    fVar13 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar13;
    if (((param_1[0x3ab] & 0x8000U) != 0) && (param_1[0x417] != 0)) {
      if ((param_1[0x3aa] & 0x2000000U) == 0) {
        fVar3 = 2.0943952;
      }
      else {
        fVar3 = 1.0471976;
      }
      if ((float)param_1[0x2a8] < fVar3) {
        FUN_00626190(0x110001,0,0,0);
        local_4 = 3;
        goto LAB_0063b695;
      }
    }
    iVar7 = *param_2;
    bVar2 = false;
    if ((((iVar7 == 0x4c) || (iVar7 == 0x4b)) || (iVar7 == 0x4a)) &&
       ((param_1[0x704] == 2 ||
        ((param_1[0x704] == 1 && (uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 1) != 0)))))) {
      bVar2 = true;
    }
    iVar7 = *param_2;
    if (((((iVar7 == 0x30) || (iVar7 == 0x32)) || (iVar7 == 0x33)) ||
        ((iVar7 == 0x34 || (iVar7 == 0x10)))) || (iVar7 == 0x35)) {
      if (param_1[0x704] == 2) {
        uVar9 = FUN_00dde2a0(1,1000);
        if ((uVar9 & 1) != 0) {
LAB_0063a7d5:
          bVar2 = true;
        }
      }
      else if ((param_1[0x704] == 1) && (uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 3) == 2))
      goto LAB_0063a7d5;
    }
    if (((((*param_2 == 0x2f) && (iVar7 = FUN_00ac82f0(), iVar7 != 0)) &&
         (iVar7 = FUN_00ac8350(), iVar7 == 0)) && (param_1[0x186] == 0xa0001)) ||
       ((param_1[0x186] == 0xa000a || (param_1[0x186] == 0xa0000)))) {
      uVar9 = FUN_00dde2a0(1,1000);
      uVar10 = FUN_00ac4780();
      switch(uVar10) {
      case 0:
        bVar12 = (uVar9 & 0xffff) % 10 == 0;
        break;
      case 1:
        bVar12 = (uVar9 & 0xffff) % 5 == 0;
        break;
      case 2:
        bVar12 = (uVar9 & 3) == 0;
        break;
      case 3:
      case 4:
        bVar12 = (uVar9 & 1) == 0;
        break;
      default:
        goto switchD_0063a838_default;
      }
      if (bVar12) {
        bVar2 = true;
      }
    }
switchD_0063a838_default:
    if (param_1[0x41d] != 0) {
      bVar2 = false;
    }
    if ((param_1[0x52b] == 2) || (param_1[0x52b] == 3)) {
      bVar2 = false;
    }
    if (param_1[0x605] == 1) {
      bVar2 = false;
    }
    if (iVar5 == 0xa000d) {
      bVar2 = false;
    }
    if (iVar5 == 0xa0015) {
      bVar2 = false;
    }
    if (param_1[0x605] == 2) {
      bVar2 = false;
    }
    else if (bVar2) {
      local_14 = (int *)0x0;
    }
    (**(code **)(*param_1 + 0x30c))(local_14,0);
    iVar7 = param_1[300];
    param_1[0x6eb] = param_1[0x6eb] + (int)local_14;
    if (((iVar7 == 0x28150) || (iVar7 == 0x28152)) || (iVar7 == 0x28170)) {
      FUN_00621ed0();
    }
    if ((param_2[0x24] & 0x1000U) != 0) {
      param_1[0x21c] = 0;
    }
    if (param_1[0x21c] < 1) {
      uVar9 = param_2[0x24];
      if ((uVar9 & 0x12000) == 0) {
        uVar10 = 0;
        if ((param_2[0x23] & 0x100000U) != 0) {
          uVar10 = 2;
        }
        if ((uVar9 & 0x200) != 0) {
          uVar10 = 4;
        }
        FUN_00621810(uVar10,uVar9 >> 0xb & 1);
        FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      }
      else {
        FUN_0061ca50();
      }
      if (((param_1[0x3ab] & 0x2000U) != 0) && (iVar7 = FUN_0061f3c0(), iVar7 != 0)) {
        FUN_0061f3c0();
        FUN_006e0c20();
      }
      param_1[0x139] = 1;
      param_1[0x3a9] = param_1[0x3a9] | 0x10000000;
      pcVar1 = *(code **)(*param_1 + 0x1d8);
      param_1[0x6e3] = -1;
      param_1[0x6e4] = 0;
      param_1[0x6e5] = 0;
      param_1[0x6e6] = 0;
      param_1[0x6e7] = -1;
      param_1[0x6e8] = 0;
      param_1[0x6e9] = 0;
      param_1[0x6ea] = 0;
      iVar7 = (*pcVar1)();
      if ((iVar7 == 0) && ((param_1[0x3aa] & 0x200000U) == 0)) {
        FUN_00626190(0xb0000,0,0,0);
        iVar7 = FUN_00628160(param_2);
        if (iVar7 != 0) {
          iVar7 = param_1[0x606];
          goto LAB_0063aa61;
        }
      }
      else {
        iVar7 = param_1[0x606];
LAB_0063aa61:
        FUN_00620970(iVar7,0xbf800000);
      }
      if (param_1[0x605] == 1) {
        FUN_00626190(0x60008,0,0,0);
      }
      local_4 = local_4 | 0x80;
      iVar7 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar7 == 0) goto LAB_0063b695;
    }
    bVar12 = true;
    if ((iVar5 == 0xa000d) || (iVar5 == 0x60012)) {
      bVar12 = false;
    }
    iVar7 = FUN_0061c270();
    if ((iVar7 != 0) && (param_1[0x605] != 1)) {
      bVar12 = false;
    }
    if ((param_1[0x60d] == 0) && (4 < *(byte *)((int)param_2 + 0x11))) {
      param_1[0x607] = param_1[0x607] - (uint)*(byte *)((int)param_2 + 0x11);
    }
    if ((param_1[0x69e] != 0) || ((param_1[0x3ab] & 0x2000U) != 0)) goto LAB_0063b695;
    if ((param_1[0x3aa] & 0x200000U) != 0) {
      FUN_00626190(0xa0020,2,0,0);
      goto LAB_0063b695;
    }
    iVar7 = FUN_006210d0();
    if ((iVar7 != 0) && ((*(byte *)(param_2 + 0x23) & 2) != 0)) {
      (**(code **)(*param_1 + 0x358))(399,0);
      if ((param_1[0x3ab] & 0x40000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_006211c0();
        FUN_00ac8d40(1);
        param_1[0x3ab] = param_1[0x3ab] | 0x40000;
      }
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (param_1[300] == 0x28170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x80000;
      }
      if ((param_1[0x3ab] & 0x100000U) == 0) {
        if (param_1[300] == 0x28170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x100000;
      }
      if ((param_1[0x3ab] & 0x200000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("L_forearm_armor1");
          pcVar15 = "R_shoulder_pad";
        }
        else {
          pcVar15 = "R_shoulder_armor";
        }
        FUN_00ac94e0(pcVar15);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x200000;
      }
      if ((param_1[0x3ab] & 0x400000U) == 0) {
        if (param_1[300] == 0x28170) {
          FUN_00ac94e0("L_forearm_armor");
          pcVar15 = "L_shoulder_pad";
        }
        else {
          pcVar15 = "L_shoulder_armor";
        }
        FUN_00ac94e0(pcVar15);
        FUN_00ac9420("_EFD02");
        FUN_00ac8dd0("_L_arm_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x400000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
    }
    if (((param_1[0x3ab] & 0x8000U) != 0) && (param_1[0x417] != 0)) {
      if (*(byte *)((int)param_2 + 0x11) < 6) {
        if (bVar12) {
          if (param_1[0x605] == 1) {
            FUN_00626190(0x60007,0,0,0);
          }
          else {
            FUN_00626190(0x70009,0,0,0);
          }
          goto LAB_0063b695;
        }
      }
      else {
        FUN_00626a10();
        iVar7 = FUN_006210d0();
        if (iVar7 == 0) {
          FUN_0061bfe0(0);
        }
        else {
          param_1[0x693] = 0x2930292;
          param_1[0x694] = 0x2930293;
          param_1[0x695] = 0x2980297;
          param_1[0x696] = 0x2940299;
          param_1[0x697] = 0x2940294;
          param_1[0x698] = 0x2960295;
          param_1[0x699] = 0x29b029a;
          param_1[0x69a] = 0x29e029c;
          param_1[0x69b] = 0x2c1029f;
          param_1[0x69c] = 0x2b1029d;
        }
      }
    }
    iVar7 = FUN_00a8c760(0x10);
    if (iVar7 == 0) {
      if (bVar12) {
        if (param_1[0x605] == 1) {
          uVar10 = 0x60007;
        }
        else {
          FUN_00626190(0xa0000,0,0,0);
          param_1[0x529] = param_1[0x529] + 1;
          if ((*(byte *)(param_1 + 0x529) & 1) == 0) goto LAB_0063ae8a;
          uVar10 = 0xa000a;
        }
        FUN_00626190(uVar10,0,0,0);
      }
    }
    else if (param_1[0x246] != 0) {
      FUN_0041cc40(0x3dcccccd);
    }
LAB_0063ae8a:
    if (((*param_2 == 0x42) || (*param_2 == 99)) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa000a,0,0,0);
    }
    if ((*param_2 == 0x44) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa000a,0,0,0);
    }
    if (*param_2 == 0x3b) {
      FUN_00626190(0xa0017,0,0,0);
    }
    if (*param_2 == 0x3e) {
      FUN_00626190(0xa0018,0,0,0);
    }
    if (*param_2 == 0x46) {
      FUN_00626190(0xa0012,0,0,0);
    }
    if ((param_2[0x24] & 0x8000000U) != 0) {
      FUN_00626190(0xa0012,0,0,0);
    }
    if ((param_1[0x60d] != 0) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa0001,0,0,0);
    }
    if (((*param_2 == 0x34) || (*param_2 == 0x40)) &&
       ((param_1[0x605] != 1 || ((param_1[0x3a9] & 0x20000U) != 0)))) {
      FUN_00626190(0xa000f,0,0,0);
    }
    if ((param_2[0x24] & 0x2000000U) != 0) {
      FUN_00626190(0xa0004,0,0,0);
      param_1[0x607] = 0x1e;
      if (local_c != (int *)0x0) {
        FUN_00a8e880(local_c + 0x10);
        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
      }
    }
    if ((param_2[0x24] & 0x800000U) != 0) {
      param_1[0x607] = 0x1e;
      FUN_00626190(0xa0005,0,0,0);
    }
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x607] = 0x1e;
      FUN_00626190(0xa000c,0,0,0);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x5a7] = 200;
      if (param_1[0x605] == 1) {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar10 = 0;
          uVar14 = 0x60012;
        }
        else {
          uVar10 = 6;
          uVar14 = 0x60012;
        }
      }
      else {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 6;
        }
        uVar14 = 0xa000d;
      }
      FUN_00626190(uVar14,uVar10,0,0);
    }
    if ((*param_2 == 0x54) && (iVar5 != 0xa000d)) {
      param_1[0x5a5] = param_1[0x5a5] + 1;
      param_1[0x5a6] = 0x43340000;
      param_1[0x5a7] = 0xc9;
      if (4 < param_1[0x5a5]) {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 6;
        }
        FUN_00626190(0xa000d,uVar10,0,0);
      }
    }
    if ((iVar5 == 0xa0002) && (*param_2 == 0x4f)) {
      FUN_00626190(0xa0002,2,0,0);
    }
    if ((*param_2 == 0x4c) || (uVar9 = local_4, *param_2 == 0x4b)) {
      if (bVar2) {
        FUN_00626190(0x110001,0,0,0);
        local_4 = 2;
        uVar9 = local_4;
      }
      else {
        param_1[0x607] = 8;
        FUN_00626190(0xa0014,0,0,0);
        bVar12 = true;
        iVar7 = FUN_006210d0();
        if (((iVar7 != 0) || (param_1[300] == 0x28170)) && ((param_1[0x3a9] & 0x1000U) == 0)) {
          bVar12 = false;
        }
        iVar7 = FUN_00a9b930();
        uVar9 = local_4 | 0x20000;
        if (iVar7 != 0) {
          FUN_00a9b930();
          iVar7 = FUN_00bda170();
          if (iVar7 == 0) goto LAB_0063b1c0;
        }
        if (bVar12) {
          uVar9 = local_4 | 0x20040;
        }
      }
    }
LAB_0063b1c0:
    local_4 = uVar9;
    if (iVar5 == 0x110000) {
      if (*(char *)((int)param_2 + 0x11) == '\n') {
        param_1[0x51e] = 0;
        FUN_00626190(0xa000b,0,0,0);
        local_4 = 8;
      }
      if (param_1[0x457] < 0) {
        param_1[0x51e] = 0;
        local_4 = 8;
        FUN_00626190(0xa000b,0,0,0);
        param_1[0x457] = 100;
      }
    }
    if (0.0 < (float)param_1[0x51e]) {
      param_1[0x51e] = 0;
      local_4 = 8;
      FUN_00626190(0xa000b,0,0,0);
    }
    if (iVar5 != 0xa0015) {
      if (((param_2[0x23] & 0x800U) != 0) && (param_1[0x605] != 1)) {
        FUN_00626190(0xa0015,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (param_1[0x605] != 1)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00626190(0xa0015,0,0,0);
      }
    }
    if ((param_2[0x24] & 0x80000000U) != 0) {
      FUN_00626190(0xa0017,0,0,0);
    }
    if ((param_2[0x24] & 0x40000000U) != 0) {
      FUN_00626190(0xa0018,0,0,0);
    }
    if ((param_2[0x24] & 0x20000000U) != 0) {
      FUN_00626190(0xa0019,0,0,0);
    }
    if (((param_2[0x24] & 0x80000U) != 0) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa0001,0,0,0);
    }
    if ((*param_2 == 0x4a) && (bVar2)) {
      FUN_00626190(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar7 = *param_2;
    if ((((((iVar7 == 0x30) || (iVar7 == 0x32)) || (iVar7 == 0x33)) ||
         ((iVar7 == 0x34 || (iVar7 == 0x10)))) || (iVar7 == 0x35)) && (bVar2)) {
      FUN_00626190(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar7 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar7 != 0) {
      if (param_1[0x605] == 1) {
        uVar10 = 0x6000d;
      }
      else {
        uVar10 = 0xa0006;
      }
      FUN_00626190(uVar10,0,0,0);
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00626190(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x40000000U) != 0) {
        FUN_00626190(0xa0018,0,0,0);
      }
      if ((param_2[0x24] & 0x20000000U) != 0) {
        FUN_00626190(0xa0019,0,0,0);
      }
      if ((param_2[0x24] & 0x80000000U) != 0) {
        FUN_00626190(0xa0017,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x51d] = 1;
        if (param_1[0x605] == 1) {
          uVar10 = 0x6000e;
        }
        else {
          uVar10 = 0xa0007;
        }
        FUN_00626190(uVar10,0,0,0);
      }
    }
    if (param_1[0x605] == 1) {
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00626190(0x6000b,0,0,0);
      }
      if ((param_2[0x23] & 0x20000U) != 0) {
        param_1[0x5a7] = 200;
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 6;
        }
        FUN_00626190(0x60012,uVar10,0,0);
      }
      if ((*param_2 == 0x54) && (iVar5 != 0x60012)) {
        param_1[0x5a5] = param_1[0x5a5] + 1;
        param_1[0x5a6] = 0x43340000;
        param_1[0x5a7] = 0xc9;
        if (4 < param_1[0x5a5]) {
          iVar7 = FUN_00a8c760(6);
          if (iVar7 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = 6;
          }
          FUN_00626190(0x60012,uVar10,0,0);
        }
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_00626190(0x6000c,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x607] = 0x1e;
        FUN_00626190(0x6000e,0,0,0);
      }
      iVar7 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar7 != 0) {
        FUN_00626190(0x6000d,0,0,0);
        if ((param_2[0x24] & 0x2000000U) != 0) {
          FUN_00626190(0x6000b,0,0,0);
        }
        if ((param_2[0x24] & 0x40000000U) != 0) {
          FUN_00626190(0xa0018,0,0,0);
        }
        if ((param_2[0x24] & 0x20000000U) != 0) {
          FUN_00626190(0xa0019,0,0,0);
        }
        if ((param_2[0x24] & 0x80000000U) != 0) {
          FUN_00626190(0xa0017,0,0,0);
        }
        if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
          param_1[0x51d] = 1;
          FUN_00626190(0x6000e,0,0,0);
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
    if (param_1[0x522] == 0) goto LAB_0063a6a4;
    iVar8 = param_1[0x186];
    if (((((iVar8 == 0x110001) || (iVar8 == 0x110002)) || (iVar8 == 0x110003)) &&
        ((iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 == 0 && ((param_2[0x23] & 0x2000U) == 0))
        )) && ((param_1[0x704] == 2 || (*(byte *)((int)param_2 + 0x11) < 6)))) {
      local_18 = 1;
      FUN_00a8e880(local_c + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      if ((((param_1[0x3ab] & 0x8000U) == 0) || (param_1[0x417] == 0)) &&
         ((iVar7 = FUN_00a8e2b0(), iVar7 != 0 ||
          ((iVar7 = FUN_00ac82f0(), iVar7 != 0 && (iVar7 = FUN_00ac8350(), iVar7 != 0)))))) {
        FUN_00626190(0x110002,0,0,0);
        if (2 < param_1[0x604]) {
          FUN_00626190(0x110003,0,0,0);
          FUN_00ac82f0();
        }
      }
      else {
        if (param_1[0x604] < 1) {
          FUN_00626190(0x110002,0,0,0);
        }
        else {
          FUN_00626190(0x110003,0,0,0);
          FUN_00ac82f0();
        }
        iVar7 = FUN_006210d0();
        if ((iVar7 != 0) && (*local_c == 0x4f)) {
          FUN_00626190(0x110003,0,0,0);
          FUN_00ac82f0();
        }
      }
      uVar4 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x56);
      (**(code **)(*param_1 + 0x21c))(local_c,uVar4,0x3c23d70a,0);
      param_1[0x604] = param_1[0x604] + 1;
      if ((param_1[0x3aa] & 0x2000000U) != 0) {
        param_1[0x604] = 0;
      }
      goto LAB_0063b695;
    }
    if ((((param_1[0x522] == 0) || (iVar7 != 9)) ||
        (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 != 0)) ||
       (iVar7 = FUN_0061e130(), iVar7 == 0)) goto LAB_0063a6a4;
    (**(code **)(*param_1 + 0x188))(9,iVar6);
    (**(code **)(*local_14 + 0x188))(9,param_1[0x13c]);
    local_4 = 0;
  }
  local_18 = 1;
LAB_0063b695:
  if (((iVar6 != 0) && ((param_1[0x3aa] & 0x200000U) == 0)) && (param_1[0x139] == 0)) {
    if ((*param_2 == 0x1c3) && (iVar5 != 0x120005)) {
      FUN_00a88320(iVar6,param_2 + 0x40);
    }
    else {
      FUN_00a88250(iVar6,param_2 + 0x40);
      piVar11 = (int *)FUN_00c206d0();
      (**(code **)(*piVar11 + 4))(0,param_1[0x13c],param_1 + 0x10);
    }
  }
  if (local_4 != 0) {
    (**(code **)(*param_1 + 0x198))(local_c,param_2,local_4);
  }
  if (local_18 != 0) {
    FUN_006275d0(iVar5);
  }
  return local_18;
}

// 0063B770  FUN_0063b770  size=5505  [between]
/* WARNING: Removing unreachable block (ram,0x0063be2b) */

undefined4 __thiscall FUN_0063b770(int *param_1,int *param_2)

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
  undefined4 local_24;
  int *local_14;
  int local_c;
  uint local_4;
  
  local_24 = 0;
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
  goto LAB_0063cc56;
  if (5 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x3a9] = param_1[0x3a9] | 0x8000000;
  }
  if ((param_2[0x23] & 0x10000000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x400;
  }
  local_c = param_2[1];
  if (0.0 < (float)param_1[0x5a1]) {
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
  if ((DAT_01bea060 & 0x2000000) != 0) goto LAB_0063cc56;
  if (*param_2 == 0x93) {
    local_4 = 0x40000;
    goto LAB_0063cc56;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    uVar7 = param_1[0x3a9];
    iVar6 = FUN_00a9b930();
    if (iVar6 != 0) {
      FUN_00a9b930();
      iVar6 = FUN_00bda170();
      if (iVar6 == 0) goto LAB_0063b900;
    }
    if ((uVar7 & 0x1000) != 0) {
      local_4 = local_4 | 0x40;
    }
  }
LAB_0063b900:
  if (((param_2[0x23] & 0x8000U) != 0) && ((param_1[0x3a9] & 0x1000U) != 0)) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_006211c0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x80000;
    }
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar14 = "R_shoulder_pad";
      }
      else {
        pcVar14 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar14 = "L_shoulder_pad";
      }
      else {
        pcVar14 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
    }
    param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar6 = FUN_00ac8170(local_14), iVar6 == 0))
  goto LAB_0063cc56;
  if ((0 < param_1[0x21c]) && (iVar6 = FUN_00ac8170(local_14), iVar6 != 0)) {
    (**(code **)(*param_1 + 0x21c))(local_14,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
    if ((local_14 != (int *)0x0) && (iVar6 = (**(code **)(*local_14 + 0x17c))(), iVar6 != 0)) {
      (**(code **)(*local_14 + 0x184))(*param_2,param_1[0x13c],param_2);
    }
    if (((param_1[0x522] != 0) &&
        (((iVar6 = param_1[0x186], iVar6 == 0x110001 || (iVar6 == 0x110002)) || (iVar6 == 0x110003))
        )) && ((iVar6 = (**(code **)(*param_1 + 0x1d8))(), iVar6 == 0 &&
               ((param_2[0x23] & 0x2000U) == 0)))) {
      local_24 = 1;
      FUN_00a8e880(local_14 + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      iVar4 = FUN_00a8e2b0();
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_00ac82f0(), iVar4 == 0 || (iVar4 = FUN_00ac8350(), iVar4 == 0)))) {
        if ((param_1[0x604] < 0) || (iVar4 = FUN_00ac82f0(), iVar4 != 0)) {
          local_14 = (int *)0x2;
          FUN_00626190(0x110002,0,0,0);
        }
        else {
          FUN_00626190(0x110003,0,0,0);
          local_14 = (int *)0x200;
        }
      }
      else {
        FUN_00626190(0x110002,0,0,0);
        FUN_00626190(0xa000b,0,0,0);
        local_14 = (int *)&DAT_00000008;
      }
      uVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x56);
      (**(code **)(*param_1 + 0x21c))(piVar9,uVar3,0x3c23d70a,0);
      param_1[0x604] = param_1[0x604] + 1;
      goto LAB_0063cc56;
    }
  }
  param_1[0x458] = param_1[0x458] + -1;
  fVar13 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar13;
  iVar6 = *param_2;
  bVar2 = false;
  if (((iVar6 != 0x4c) && (iVar6 != 0x4b)) && (iVar6 != 0x4a)) goto switchD_0063bd92_default;
  uVar7 = FUN_00dde2a0(1,1000);
  uVar8 = FUN_00ac4780();
  switch(uVar8) {
  case 0:
    if ((uVar7 & 0xffff) % 5 == 2) goto switchD_0063bd92_caseD_3;
    break;
  case 1:
    bVar12 = (uVar7 & 1) == 0;
    goto LAB_0063bdbc;
  case 2:
    bVar12 = (uVar7 & 0xffff) % 5 == 2;
LAB_0063bdbc:
    if (!bVar12) {
switchD_0063bd92_caseD_3:
      bVar2 = true;
    }
    break;
  case 3:
  case 4:
    goto switchD_0063bd92_caseD_3;
  }
switchD_0063bd92_default:
  iVar6 = *param_2;
  if ((((iVar6 == 0x30) || (iVar6 == 0x32)) ||
      ((iVar6 == 0x33 || ((iVar6 == 0x34 || (iVar6 == 0x10)))))) || (iVar6 == 0x35)) {
    if (param_1[0x704] == 2) {
      uVar7 = FUN_00dde2a0(1,1000);
      if ((uVar7 & 1) != 0) {
LAB_0063be35:
        bVar2 = true;
      }
    }
    else if ((param_1[0x704] == 1) && (uVar7 = FUN_00dde2a0(1,1000), (uVar7 & 3) == 2))
    goto LAB_0063be35;
  }
  if (*param_2 != 0x2f) goto switchD_0063be66_default;
  uVar7 = FUN_00dde2a0(1,1000);
  uVar8 = FUN_00ac4780();
  switch(uVar8) {
  case 0:
    uVar7 = (uVar7 & 0xffff) % 10;
    goto joined_r0x0063be89;
  case 1:
    uVar7 = (uVar7 & 0xffff) % 5;
joined_r0x0063be89:
    if (uVar7 == 0) {
switchD_0063be66_caseD_3:
      bVar2 = true;
    }
    break;
  case 2:
    if ((uVar7 & 1) != 0) goto switchD_0063be66_caseD_3;
    break;
  case 3:
  case 4:
    goto switchD_0063be66_caseD_3;
  }
switchD_0063be66_default:
  if (param_1[0x41d] != 0) {
    bVar2 = false;
  }
  if (param_1[0x605] == 1) {
    bVar2 = false;
  }
  if (bVar11) {
    bVar2 = false;
  }
  if (bVar10) {
    bVar2 = false;
  }
  if (param_1[0x605] == 2) {
    bVar2 = false;
  }
  else if (bVar2) {
    local_c = 0;
  }
  (**(code **)(*param_1 + 0x30c))(local_c,0);
  param_1[0x6eb] = param_1[0x6eb] + local_c;
  param_1[0x6fd] = param_1[0x6fd] + local_c;
  FUN_00621ed0();
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
      FUN_00621810(uVar8,uVar7 >> 0xb & 1);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    }
    else {
      FUN_0061ca50();
    }
    param_1[0x139] = 1;
    param_1[0x3a9] = param_1[0x3a9] | 0x10000000;
    pcVar1 = *(code **)(*param_1 + 0x1d8);
    param_1[0x6e3] = -1;
    param_1[0x6e4] = 0;
    param_1[0x6e5] = 0;
    param_1[0x6e6] = 0;
    param_1[0x6e7] = -1;
    param_1[0x6e8] = 0;
    param_1[0x6e9] = 0;
    param_1[0x6ea] = 0;
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) {
      FUN_00626190(0xb0000,0,0,0);
      iVar6 = FUN_00628160(param_2);
      if (iVar6 != 0) {
        iVar6 = param_1[0x606];
        goto LAB_0063c01d;
      }
    }
    else {
      iVar6 = param_1[0x606];
LAB_0063c01d:
      FUN_00620970(iVar6,0xbf800000);
    }
    if (param_1[0x605] == 1) {
      FUN_00626190(0x60008,0,0,0);
    }
    local_4 = local_4 | 0x80;
    iVar6 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar6 == 0) goto LAB_0063cc56;
  }
  if (param_1[0x69e] != 0) goto LAB_0063cc56;
  if ((*(byte *)(param_2 + 0x23) & 2) != 0) {
    (**(code **)(*param_1 + 0x358))(399,0);
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_006211c0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x80000;
    }
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x28170) {
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
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar14 = "R_shoulder_pad";
      }
      else {
        pcVar14 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x28170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar14 = "L_shoulder_pad";
      }
      else {
        pcVar14 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar14);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
    }
    param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  }
  if ((((param_1[0x6fc] <= param_1[0x6fd]) && (param_1[0x6fd] = 0, param_1[0x605] != 1)) &&
      (!bVar10)) && (!bVar11)) {
    FUN_00626190(0xa0001,0,0,0);
  }
  param_1[0x6fa] = param_1[0x6fa] + local_c;
  param_1[0x6f9] = param_1[0x6f8];
  if (((bVar10) || (bVar11)) || (param_1[0x605] == 1)) {
    param_1[0x6fa] = 0;
  }
  else if (param_1[0x6fb] <= param_1[0x6fa]) {
    param_1[0x6fa] = 0;
    FUN_00626190(0xa0015,0,0,0);
    bVar10 = true;
  }
  if (((param_1[0x3a9] & 0x1000U) != 0) || (bVar11)) {
    if ((!bVar10) && (((*(byte *)(param_2 + 0x23) & 1) != 0 && (param_1[0x605] != 1)))) {
      (**(code **)(*param_1 + 0x358))(0x18e,0);
      FUN_00626190(0xa0015,0,0,0);
    }
    iVar6 = FUN_00a8c760(0x10);
    if ((iVar6 != 0) && (param_1[0x246] != 0)) {
      FUN_0041cc40(0x3dcccccd);
    }
    if (((*param_2 == 0x42) || (*param_2 == 99)) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa000a,0,0,0);
    }
    if ((*param_2 == 0x44) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa000a,0,0,0);
    }
    if (*param_2 == 0x3b) {
      FUN_00626190(0xa0017,0,0,0);
    }
    if (*param_2 == 0x3e) {
      FUN_00626190(0xa0018,0,0,0);
    }
    if (*param_2 == 0x46) {
      FUN_00626190(0xa0012,0,0,0);
    }
    if ((param_2[0x24] & 0x8000000U) != 0) {
      FUN_00626190(0xa0012,0,0,0);
    }
    if ((param_1[0x60d] != 0) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa0001,0,0,0);
    }
    if (((*param_2 == 0x34) || (*param_2 == 0x40)) &&
       ((param_1[0x605] != 1 || ((param_1[0x3a9] & 0x20000U) != 0)))) {
      FUN_00626190(0xa000f,0,0,0);
    }
    if ((param_2[0x24] & 0x2000000U) != 0) {
      FUN_00626190(0xa0004,0,0,0);
      param_1[0x607] = 0x1e;
      if (local_14 != (int *)0x0) {
        FUN_00a8e880(local_14 + 0x10);
        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
      }
    }
    if ((param_2[0x24] & 0x800000U) != 0) {
      param_1[0x607] = 0x1e;
      FUN_00626190(0xa0005,0,0,0);
    }
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x607] = 0x1e;
      FUN_00626190(0xa000c,0,0,0);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x5a7] = 200;
      iVar6 = FUN_00a8c760(6);
      if (iVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 6;
      }
      FUN_00626190(0xa000d,uVar8,0,0);
    }
    if ((*param_2 == 0x54) && (iVar4 != 0xa000d)) {
      param_1[0x5a5] = param_1[0x5a5] + 1;
      param_1[0x5a6] = 0x43340000;
      param_1[0x5a7] = 0xc9;
      if (4 < param_1[0x5a5]) {
        iVar6 = FUN_00a8c760(6);
        if (iVar6 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 6;
        }
        FUN_00626190(0xa000d,uVar8,0,0);
      }
    }
    if ((iVar4 == 0xa0002) && (*param_2 == 0x4f)) {
      FUN_00626190(0xa0002,2,0,0);
    }
    if ((*param_2 == 0x4c) || (uVar7 = local_4, *param_2 == 0x4b)) {
      if (bVar2) {
        FUN_00626190(0x110001,0,0,0);
        local_4 = 2;
        uVar7 = local_4;
      }
      else {
        param_1[0x607] = 8;
        FUN_00626190(0xa0014,0,0,0);
        bVar11 = true;
        iVar6 = FUN_006210d0();
        if (((iVar6 != 0) || (param_1[300] == 0x28170)) && ((param_1[0x3a9] & 0x1000U) == 0)) {
          bVar11 = false;
        }
        iVar6 = FUN_00a9b930();
        uVar7 = local_4 | 0x20000;
        if (iVar6 != 0) {
          FUN_00a9b930();
          iVar6 = FUN_00bda170();
          if (iVar6 == 0) goto LAB_0063c7b0;
        }
        if (bVar11) {
          uVar7 = local_4 | 0x20040;
        }
      }
    }
LAB_0063c7b0:
    local_4 = uVar7;
    if (iVar4 == 0x110000) {
      if (*(char *)((int)param_2 + 0x11) == '\n') {
        param_1[0x51e] = 0;
        FUN_00626190(0xa000b,0,0,0);
        local_4 = 8;
      }
      if (param_1[0x457] < 0) {
        param_1[0x51e] = 0;
        local_4 = 8;
        FUN_00626190(0xa000b,0,0,0);
        param_1[0x457] = 100;
      }
    }
    if (0.0 < (float)param_1[0x51e]) {
      param_1[0x51e] = 0;
      local_4 = 8;
      FUN_00626190(0xa000b,0,0,0);
    }
    if (!bVar10) {
      if (((param_2[0x23] & 0x800U) != 0) && (param_1[0x605] != 1)) {
        FUN_00626190(0xa0015,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (param_1[0x605] != 1)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00626190(0xa0015,0,0,0);
      }
    }
    if ((param_2[0x24] & 0x80000000U) != 0) {
      FUN_00626190(0xa0017,0,0,0);
    }
    if ((param_2[0x24] & 0x40000000U) != 0) {
      FUN_00626190(0xa0018,0,0,0);
    }
    if ((param_2[0x24] & 0x20000000U) != 0) {
      FUN_00626190(0xa0019,0,0,0);
    }
    if (((param_2[0x24] & 0x80000U) != 0) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa0001,0,0,0);
    }
    if ((*param_2 == 0x4a) && (bVar2)) {
      FUN_00626190(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar6 = *param_2;
    if (((((iVar6 == 0x30) || (iVar6 == 0x32)) || (iVar6 == 0x33)) ||
        ((iVar6 == 0x34 || (iVar6 == 0x10)))) || (iVar6 == 0x35)) {
      if (bVar2) {
        FUN_00626190(0x110001,0,0,0);
        local_4 = 2;
        goto LAB_0063c999;
      }
    }
    else {
LAB_0063c999:
      if (bVar2) {
        FUN_00626190(0xa0023,0,0,0);
        iVar6 = FUN_00ac82f0();
        local_4 = (-(uint)(iVar6 != 0) & 0x3e00) + 0x200;
      }
    }
    iVar6 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar6 != 0) {
      FUN_00626190(0xa0006,0,0,0);
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00626190(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x40000000U) != 0) {
        FUN_00626190(0xa0018,0,0,0);
      }
      if ((param_2[0x24] & 0x20000000U) != 0) {
        FUN_00626190(0xa0019,0,0,0);
      }
      if ((param_2[0x24] & 0x80000000U) != 0) {
        FUN_00626190(0xa0017,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x51d] = 1;
        FUN_00626190(0xa0007,0,0,0);
      }
    }
    if (param_1[0x605] == 1) {
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00626190(0x6000b,0,0,0);
      }
      if ((param_2[0x23] & 0x20000U) != 0) {
        param_1[0x5a7] = 200;
        iVar6 = FUN_00a8c760(6);
        if (iVar6 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 6;
        }
        FUN_00626190(0x60012,uVar8,0,0);
      }
      if ((*param_2 == 0x54) && (iVar4 != 0x60012)) {
        param_1[0x5a5] = param_1[0x5a5] + 1;
        param_1[0x5a6] = 0x43340000;
        param_1[0x5a7] = 0xc9;
        if (4 < param_1[0x5a5]) {
          iVar4 = FUN_00a8c760(6);
          if (iVar4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 6;
          }
          FUN_00626190(0x60012,uVar8,0,0);
        }
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_00626190(0x6000c,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x607] = 0x1e;
        FUN_00626190(0x6000e,0,0,0);
      }
      iVar4 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar4 != 0) {
        FUN_00626190(0x6000d,0,0,0);
        if ((param_2[0x24] & 0x2000000U) != 0) {
          FUN_00626190(0x6000b,0,0,0);
        }
        if ((param_2[0x24] & 0x40000000U) != 0) {
          FUN_00626190(0xa0018,0,0,0);
        }
        if ((param_2[0x24] & 0x20000000U) != 0) {
          FUN_00626190(0xa0019,0,0,0);
        }
        if ((param_2[0x24] & 0x80000000U) != 0) {
          FUN_00626190(0xa0017,0,0,0);
        }
        if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
          param_1[0x51d] = 1;
          uVar8 = 0x6000e;
          goto LAB_0063cc47;
        }
      }
    }
  }
  else {
    if (bVar2) {
      FUN_00626190(0xa0023,0,0,0);
      iVar4 = FUN_00ac82f0();
      local_4 = (-(uint)(iVar4 != 0) & 0x3e00) + 0x200;
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x5a7] = 200;
      iVar4 = FUN_00a8c760(6);
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 6;
      }
      FUN_00626190(0xa000d,uVar8,0,0);
    }
    iVar4 = *param_2;
    if ((((iVar4 == 0x55) || (iVar4 == 0x57)) || (iVar4 == 0x56)) && (param_1[0x605] != 1)) {
      FUN_00626190(0xa0001,0,0,0);
      param_1[0x6fd] = 0;
    }
    if (((!bVar10) && ((*(byte *)(param_2 + 0x23) & 1) != 0)) && (param_1[0x605] != 1)) {
      (**(code **)(*param_1 + 0x358))(0x18e,0);
      FUN_00626190(0xa0015,0,0,0);
    }
    if (*param_2 == 0x1c3) {
      FUN_00626190(0xa0000,0,0,0);
      param_1[0x529] = param_1[0x529] + 1;
      if ((*(byte *)(param_1 + 0x529) & 1) != 0) {
        uVar8 = 0xa000a;
LAB_0063cc47:
        FUN_00626190(uVar8,0,0,0);
      }
    }
  }
  local_24 = 1;
LAB_0063cc56:
  if (iVar5 != 0) {
    iVar4 = FUN_00a82e60();
    if ((iVar4 == 0) || (*param_2 != 0x1c3)) {
      FUN_00a88250(iVar5,param_2 + 0x40);
      piVar9 = (int *)FUN_00c206d0();
      (**(code **)(*piVar9 + 4))(0,param_1[0x13c],param_1 + 0x10);
    }
    else {
      FUN_00a88320(iVar5,param_2 + 0x40);
    }
  }
  if (local_4 != 0) {
    (**(code **)(*param_1 + 0x198))(local_14,param_2,local_4);
  }
  return local_24;
}

// 0063CD20  FUN_0063cd20  size=219  [between]
undefined4 __thiscall FUN_0063cd20(int *param_1,int *param_2)

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
      if ((param_1[0x3a9] & 0x10000000U) != 0) {
        FUN_00628160(param_2);
      }
    }
    return uVar2;
  }
  return 0;
}

// 0063CE00  FUN_0063ce00  size=762  [between]
void __fastcall FUN_0063ce00(int *param_1)

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
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
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
    FUN_0061dfc0();
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
    FUN_00628330();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
      if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
        param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
      }
      if (((param_1[0x3a9] & 0x80000U) != 0) && (param_1[0x52b] == 2)) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfff7ffff;
        FUN_00626190(0x20005,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
      if (((param_1[0x605] != 2) && ((float)param_1[0x2a3] < 30.25)) &&
         ((float)param_1[0x2a8] < 1.0471976)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_00628410();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00626190(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0063D100  Em8010::vf48  size=1649  [class]
void __fastcall Em8010::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 auStack_30 [5];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((DAT_01bea070 & 0x20000000) != 0) {
    return;
  }
  param_1[0x704] = 0;
  iVar2 = FUN_00ac4780();
  if (iVar2 == 2) {
    param_1[0x704] = 1;
  }
  else if (iVar2 - 3U < 2) {
    param_1[0x704] = 2;
  }
  if ((param_1[0x3a9] & 0x40000U) != 0) {
    param_1[0x404] = (int)((float)param_1[0x404] - (float)param_1[0x244]);
    if (param_1[0x6f5] != 0) {
      fVar7 = (float10)FUN_00ac8f80();
      FUN_0061c7c0((float)(fVar7 - (float10)(float)param_1[0x244] * (float10)0.01));
    }
    if ((float)param_1[0x404] < 0.0) {
      if (param_1[0x6f5] == 0) {
        (**(code **)(*param_1 + 0x110))(0);
      }
      else {
        FUN_009fdde0();
      }
    }
  }
  if (((param_1[0x3a6] != 0x1e) && (iVar2 = FUN_00ac8a50(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x274))(), iVar2 != 0)) goto LAB_0063d243;
  param_1[0x670] = (uint)param_1[0x351] >> 0x19 & 1;
  iVar2 = FUN_00a82d50();
  if (iVar2 == 4) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_0061fbe0();
      param_1[0x67c] = iVar2;
      goto LAB_0063d21a;
    }
  }
  else {
LAB_0063d21a:
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_0061fd00();
      param_1[0x679] = iVar2;
    }
  }
  FUN_00623bb0();
  iVar2 = FUN_00620050();
  param_1[0x67e] = iVar2;
LAB_0063d243:
  EmBaseDLC::vf48();
  fVar1 = (float)param_1[0x456];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x456] = (int)((float)param_1[0x456] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x51e] != ((float)param_1[0x51e] == 0.0)) {
    param_1[0x51e] = (int)((float)param_1[0x51e] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5a6] != ((float)param_1[0x5a6] == 0.0)) {
    param_1[0x5a6] = (int)((float)param_1[0x5a6] - (float)param_1[0x244]);
  }
  if ((float)param_1[0x5a6] < 0.0) {
    param_1[0x5a5] = 0;
  }
  fVar1 = (float)param_1[0x423];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x423] = (int)((float)param_1[0x423] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x6a0] != ((float)param_1[0x6a0] == 0.0)) {
    param_1[0x6a0] = (int)((float)param_1[0x6a0] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x63d] != ((float)param_1[0x63d] == 0.0)) {
    param_1[0x63d] = (int)((float)param_1[0x63d] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x6a3] != ((float)param_1[0x6a3] == 0.0)) {
    param_1[0x6a3] = (int)((float)param_1[0x6a3] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x692] != ((float)param_1[0x692] == 0.0)) {
    param_1[0x692] = (int)((float)param_1[0x692] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x6ff] != ((float)param_1[0x6ff] == 0.0)) {
    param_1[0x6ff] = (int)((float)param_1[0x6ff] - (float)param_1[0x244]);
  }
  if (param_1[300] == 0x28170) {
    fVar1 = (float)param_1[0x6f9];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x6f9] = (int)((float)param_1[0x6f9] - (float)param_1[0x244]);
    }
    if ((float)param_1[0x6f9] < 0.0) {
      param_1[0x6fa] = 0;
    }
  }
  iVar2 = FUN_0061be30();
  param_1[0x66e] = iVar2;
  FUN_00620ed0();
  if ((((param_1[0x12a] & 0x20000U) != 0) && (param_1[0x3a2] == 0)) && (param_1[0x21c] < 1)) {
    (**(code **)(*param_1 + 0x364))(0x20010);
  }
  if ((param_1[0x524] != 0) &&
     (fVar1 = (float)param_1[0x523], param_1[0x523] = (int)(fVar1 - 1.0), fVar1 - 1.0 < 0.0)) {
    param_1[0x524] = 0;
    FUN_00618640();
  }
  if (((param_1[0x5a4] != 0) && (iVar2 = FUN_00ac8410(), iVar2 == 0)) &&
     (fVar1 = (float)param_1[0x5a3], param_1[0x5a3] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x5a4] = 0;
    param_1[0x139] = 1;
    FUN_00626190(0xb0002,0,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  FUN_006273a0();
  FUN_0062b780();
  param_1[0x6da] = 0;
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(1);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar8 = &DAT_01be9c24;
        (**(code **)(*piVar3 + 4))(&DAT_01be9c24);
        iVar2 = FUN_00dd6d80(puVar8);
        uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
      }
      param_1[0x6da] = uVar4;
    }
  }
  param_1[0x6db] = param_1[0x2a1];
  *(undefined2 *)(param_1 + 0x6dc) = 4;
  if (param_1[0x6da] != 0) {
    param_1[0x6db] = param_1[0x6da];
    *(undefined2 *)(param_1 + 0x6dc) = 0;
  }
  if (((param_1[0x3ab] & 0x1000U) != 0) && (DAT_018b9174 == 0x458)) {
    uVar9 = 0xd0013;
    uVar5 = FUN_00e03ea0("explosion",0xd0013);
    iVar2 = FUN_00a18d70(uVar5,uVar9);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      param_1[0x6db] = iVar2;
      *(undefined2 *)(param_1 + 0x6dc) = 0xffff;
    }
  }
  iVar2 = FUN_00a8cab0();
  if ((iVar2 == 8) || (iVar2 = FUN_00a8cab0(), iVar2 == 9)) {
    auStack_30[0] = 0x10800;
    auStack_30[1] = 0x10801;
    auStack_30[2] = 0x10a00;
    auStack_30[3] = 0x10a01;
    uVar4 = 0;
    do {
      iVar2 = FUN_00c27650(param_1 + 0x10,0x40a00000,auStack_30[uVar4]);
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        param_1[0x6db] = iVar2;
        *(undefined2 *)(param_1 + 0x6dc) = 5;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
  }
  param_1[0x68f] = 0;
  if (param_1[0x6db] != 0) {
    iVar2 = FUN_00a12210(3);
    iVar6 = FUN_00a12210((int)(short)param_1[0x6dc]);
    if ((iVar2 != 0) && (iVar6 != 0)) {
      auStack_30[4] = *(undefined4 *)(iVar2 + 0x40);
      uStack_1c = *(undefined4 *)(iVar2 + 0x44);
      uStack_18 = *(undefined4 *)(iVar2 + 0x48);
      uStack_14 = *(undefined4 *)(iVar2 + 0x4c);
      auStack_30[0] = *(undefined4 *)(iVar6 + 0x40);
      auStack_30[1] = *(undefined4 *)(iVar6 + 0x44);
      auStack_30[2] = *(undefined4 *)(iVar6 + 0x48);
      auStack_30[3] = *(undefined4 *)(iVar6 + 0x4c);
      iVar2 = FUN_00620440(auStack_30 + 4,auStack_30);
      param_1[0x68f] = iVar2;
    }
  }
  iVar2 = FUN_00a12210(0);
  iVar2 = FUN_006201a0(iVar2 + 0x40);
  param_1[0x687] = iVar2;
  iVar2 = FUN_00a12210(0);
  iVar2 = FUN_006206b0(iVar2 + 0x40,0x3f266666);
  param_1[0x68c] = iVar2;
  if (((param_1[0x139] == 0) && ((*(byte *)(param_1 + 0x3a9) & 2) == 0)) && (param_1[0x687] != 0)) {
    fVar1 = (float)param_1[0x686];
    param_1[0x686] = (int)((float)param_1[0x244] + fVar1);
    if (30.0 <= (float)param_1[0x244] + fVar1) {
      param_1[0x3a9] = param_1[0x3a9] | 4;
    }
  }
  else {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
    param_1[0x686] = 0;
  }
  if ((-1 < param_1[0x6fe]) && (iVar2 = FUN_00ac89d0(), iVar2 != 0)) {
    FUN_00ac89d0();
    iVar2 = FUN_00a10040(0x3c);
    if ((iVar2 == 2) || ((param_1[0x3aa] & 0x800000U) != 0)) {
      FUN_00c5ad80(param_1[0x6fe]);
      param_1[0x3aa] = param_1[0x3aa] & 0xff7fffff;
      param_1[0x6fe] = -1;
    }
  }
  iVar2 = FUN_00621940();
  param_1[0x6f2] = iVar2;
  return;
}

// 0063D780  FUN_0063d780  size=481  [between]
void __fastcall FUN_0063d780(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  param_1[0x23d] = param_1[0x5f1];
  param_1[0x5d7] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x44f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x5a2] = 0x41f00000;
    FUN_006336f0(1,param_1 + 0x428);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 3;
  }
  else if (param_1[0x187] != 1) goto LAB_0063d8b6;
  fVar1 = (float)param_1[0x5a2];
  param_1[0x5a2] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4e8] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
    iVar3 = FUN_00a12210((int)(short)param_1[0x6dc]);
    FUN_00624080(iVar3 + 0x40);
    param_1[0x4e8] = param_1[0x4e8] + -1;
    param_1[0x5a2] = 0x40c00000;
  }
LAB_0063d8b6:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x4e8] == 0) && ((float)param_1[0x5a2] <= 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = param_1[0x4e9];
    *(undefined1 *)(param_1 + 0x424) = 0;
    FUN_00eaa6e0(0x41200000,0);
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x128] = 6;
    (*pcVar2)();
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
  return;
}

// 0063D970  FUN_0063d970  size=428  [between]
void __fastcall FUN_0063d970(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    fVar4 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar4;
    FUN_00aa4080((int)(short)param_1[0x69c],0,0x3e088889,0x3f800000,0x8000000,0,(float)fVar4);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
  }
  else if (param_1[0x187] != 1) goto LAB_0063d985;
  FUN_00ac80a0(0x3fc00000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_0062ef90();
    if (iVar3 != 0) {
      return;
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    iVar3 = FUN_00a82e80();
    if (((iVar3 != 0) && (param_1[0x670] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00626190(0x14,0,0,0);
      return;
    }
  }
LAB_0063d985:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d8efa35,0);
  }
  return;
}

// 0063DB20  FUN_0063db20  size=562  [between]
void __fastcall FUN_0063db20(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    fVar4 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x248] = (int)(float)fVar4;
    if (param_1[0x455] != 0) {
      param_1[0x248] = 0x3fb33333;
    }
    FUN_00aa4080((int)(short)param_1[0x699],0,0x3d088889,0x3f800000,0x8000000,0,param_1[0x248]);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    param_1[0x455] = param_1[0x454];
    param_1[0x454] = 0;
    if (((((param_1[0x3aa] & 0x40000000U) != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (*(int *)(iVar3 + 0x4b0) == 0x31011)) {
      FUN_00e5e0c0("em0010_vo_line_caution_grenade",param_1,0xffffffff,0);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0063db35;
  FUN_00ac80a0(0x3fc00000,0x3f800000);
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_0062f520();
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_0062f520();
    if (iVar3 != 0) {
      return;
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
  }
LAB_0063db35:
  if ((param_1[0x3aa] & 0x40000000U) == 0) {
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

// 0063DD60  FUN_0063dd60  size=1111  [between]
void __fastcall FUN_0063dd60(int *param_1)

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
    param_1[0x6bc] = param_1[0x5f4];
    param_1[0x6bd] = param_1[0x5f5];
    param_1[0x6be] = param_1[0x5f6];
    param_1[0x6bf] = param_1[0x5f7];
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_006398e0(param_1 + 0x6a4,param_1 + 0x10,param_1 + 0x6bc,0x41f00000,0x40400000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    FUN_00a8e880(param_1 + 0x6bc);
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
    FUN_00a8e880(param_1 + 0x6bc);
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
    FUN_00a8e880(param_1 + 0x6bc);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar5 = param_1 + 0x6bc;
    FUN_006398e0(param_1 + 0x6a4,param_1 + 0x10,piVar5,0x41f00000,0x40400000);
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
                    /* WARNING: Could not recover jumptable at 0x0063e1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0063E1E0  FUN_0063e1e0  size=95  [between]
void __thiscall FUN_0063e1e0(int *param_1,undefined4 param_2,undefined4 param_3)

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

// 0063E240  FUN_0063e240  size=615  [between]
void __fastcall FUN_0063e240(int param_1)

{
  float fVar1;
  int iVar2;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
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
      *(float *)(param_1 + 0x1660) =
           (fVar1 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
    }
    iVar2 = FUN_0061e150();
    if ((iVar2 != 0) && (iVar2 = FUN_00633780(), iVar2 != 0)) {
      return;
    }
    if ((49.0 < *(float *)(param_1 + 0xa8c)) && ((*(byte *)(param_1 + 0xea4) & 4) == 0)) {
      if (*(int *)(param_1 + 0x19c0) == 0) {
        if ((1600.0 < *(float *)(param_1 + 0xa8c)) &&
           ((*(uint *)(param_1 + 0xea8) & 0x10000000) == 0)) goto LAB_0063e36e;
      }
      else {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (NAN(fVar1) || 900.0 < fVar1 == (fVar1 == 900.0)) goto LAB_0063e36e;
      }
      FUN_00626190(0x20005,0,0,0);
    }
  }
LAB_0063e36e:
  if (((((*(int *)(param_1 + 0x19c0) != 0) && (*(int *)(*(int *)(param_1 + 0xa84) + 0x2660) != 0))
       && (*(int *)(param_1 + 0x1498) != 0)) &&
      ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) &&
     (iVar2 = FUN_0061bc60(2,1), iVar2 != 0)) {
    FUN_00626190(0x2000a,0,0,0);
    FUN_0061bcc0();
    return;
  }
  if (((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
     (iVar2 = FUN_00626e00(0xffffffff), iVar2 == 0)) {
    if (0.0 < *(float *)(param_1 + 0x1a40)) {
      *(float *)(param_1 + 0x1a40) = *(float *)(param_1 + 0x1a40) - *(float *)(param_1 + 0x910);
    }
    if (((((*(float *)(param_1 + 0x1a40) <= 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)))
         || ((iVar2 = *(int *)(param_1 + 0x618), iVar2 == 0x20002 &&
             (*(int *)(param_1 + 0x107c) == 0)))) ||
        ((iVar2 == 0x20004 && (*(int *)(param_1 + 0x1080) == 0)))) ||
       ((iVar2 == 0x20003 && (*(int *)(param_1 + 0x1084) == 0)))) {
      FUN_00626190(0x20000,0,0,0);
    }
  }
  return;
}

// 0063E4B0  FUN_0063e4b0  size=150  [between]
void __fastcall FUN_0063e4b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  param_1[0x5d7] = 1;
  if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_00635760();
      return;
    }
    if ((iVar1 == 0x25) && ((param_1[0x3aa] & 0x2000000U) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0063e4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0x60001:
      FUN_00635a00();
      return;
    case 0x60004:
      FUN_00635c50();
      return;
    case 0x60006:
      FUN_00635d60();
      return;
    case 0x60009:
    case 0x6000a:
      if ((float)param_1[0x2a8] < 0.17453292) {
        FUN_00626190(0x60000,0,0,0);
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

// 0063E580  FUN_0063e580  size=178  [between]
void __fastcall FUN_0063e580(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  fStack_c = 9.174064e-39;
  (**(code **)(*param_1 + 0x1d4))();
  iVar1 = param_1[0x186];
  if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
      FUN_006369c0();
      return;
    }
    if ((iVar1 == 0x25) && ((param_1[0x3aa] & 0x2000000U) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0063e5be. Too many branches */
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
      FUN_00636cb0();
      return;
    case 0x50004:
      FUN_00636f10();
      return;
    case 0x50006:
      if (param_1[0x187] != 0) {
        thunk_FUN_00dde510(&fStack_c,&uStack_8,param_1[0x2a1] + 0x40,param_1 + 0x10,uStack_8);
        fVar2 = fStack_c * 1.2732395;
        fVar3 = -1.0;
        if ((-1.0 <= fVar2) && (fVar3 = fVar2, 1.0 < fVar2)) {
          fVar3 = 1.0;
        }
        param_1[0x598] = (int)((fVar3 - (float)param_1[0x598]) * 0.1 + (float)param_1[0x598]);
        if (param_1[0x4e8] == 0) {
          FUN_00626190(0x50004,0,0,0);
          param_1[0x456] = 0x41f00000;
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

// 0063E670  FUN_0063e670  size=153  [between]
void __fastcall FUN_0063e670(int param_1)

{
  float fVar1;
  int iVar2;
  float local_8;
  undefined1 local_4 [4];
  
  if (((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) &&
     ((iVar2 = FUN_0061e150(), iVar2 == 0 || (iVar2 = FUN_00637aa0(), iVar2 == 0)))) {
    thunk_FUN_00dde510(&local_8,local_4,*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x40);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((local_8 < -1.0) || (fVar1 = 1.0, 1.0 < local_8)) {
      local_8 = fVar1;
    }
    *(float *)(param_1 + 0x1660) =
         (local_8 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 0063E710  FUN_0063e710  size=313  [between]
void __fastcall FUN_0063e710(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int local_168;
  undefined1 local_160 [148];
  int iStack_cc;
  int iStack_74;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  piVar5 = *(int **)(param_1 + 0x67c);
  piVar4 = piVar5 + *(int *)(param_1 + 0x684) * 0x54;
  FUN_00445db0();
  local_168 = -1;
  bVar1 = false;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00a81330();
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar6 = &DAT_01b35540;
        (**(code **)(*piVar3 + 4))(&DAT_01b35540);
        iVar2 = FUN_00dd6d80(puVar6);
        if ((iVar2 != 0) && (iVar2 = FUN_00a8ef10(), iVar2 != 0)) {
          return;
        }
      }
    }
  }
  if (piVar5 != piVar4) {
    do {
      if ((*piVar5 != 0x147) && (local_168 < piVar5[1])) {
        bVar1 = true;
        FUN_00448f50(piVar5);
        local_168 = piVar5[1];
      }
      piVar5 = piVar5 + 0x54;
    } while (piVar5 != piVar4);
    if (bVar1) {
      if (((*(int *)(param_1 + 0x8d0) != 0) && (iStack_cc != 0)) && (iStack_74 != 0)) {
        FUN_00a8e5d0(param_1,local_160,0);
        return;
      }
      FUN_00638b80(local_160);
    }
  }
  return;
}

// 0063E850  Em8010::vf334  size=943  [class]
void __thiscall Em8010::vf334(int *param_1,undefined4 param_2,int *param_3)

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
  
  EmBaseDLC::vf334(param_2,param_3);
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
      puVar14 = &DAT_01b35540;
      (**(code **)(*piVar3 + 4))(&DAT_01b35540);
      iVar4 = FUN_00dd6d80(puVar14);
      if ((iVar4 != 0) && (piVar3 != param_1)) {
        uVar5 = FUN_00a8cae0();
        uVar6 = FUN_00a8cad0(uVar5);
        uVar7 = FUN_00a8cac0(uVar6);
        uVar8 = FUN_00a8cab0(uVar7);
        FUN_00626190(uVar8,uVar7,uVar6,uVar5);
        param_1[0x606] = piVar3[0x606];
        FUN_00a92f90();
        FUN_00e36b50(0,2,0);
        uVar15 = 0x3f800000;
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
        param_1[0x3a9] = piVar3[0x3a9];
        param_1[0x3aa] = piVar3[0x3aa];
        param_1[0x3ab] = piVar3[0x3ab];
        uVar6 = 0;
        param_1[0x139] = piVar3[0x139];
        uVar5 = FUN_00a82d50(0);
        FUN_00a88b50(uVar5,uVar6);
        uVar5 = FUN_009f8b40();
        FUN_009f8ae0(uVar5);
        iVar4 = FUN_00a10040(0x3c);
        if (iVar4 == 0) {
          param_1[0x6fe] = piVar3[0x6fe];
        }
        param_1[0x52b] = piVar3[0x52b];
        param_1[0x52c] = piVar3[0x52c];
        param_1[0x3a6] = piVar3[0x3a6];
      }
    }
  }
  iVar4 = param_1[300];
  if (((iVar4 == 0x28150) || (iVar4 == 0x28152)) || (iVar4 == 0x28170)) {
    FUN_00ac8d40(0);
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if ((param_1[0x3ab] & 0x80000U) != 0) {
        FUN_00ac8dd0("_R_leg_",1);
      }
      if ((param_1[0x3ab] & 0x100000U) != 0) {
        FUN_00ac8dd0("_L_leg_",1);
      }
      if ((param_1[0x3ab] & 0x200000U) != 0) {
        FUN_00ac8dd0("_R_arm_",1);
      }
      if ((param_1[0x3ab] & 0x400000U) != 0) {
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
    param_1[0x3a9] = param_1[0x3a9] | 0x40000000;
  }
  iVar4 = FUN_00a8cd60(piVar3,7);
  if (iVar4 != 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x20000000;
  }
  if (((param_1[0x3a9] & 0x200000U) != 0) && ((param_1[0x3a9] & 0x100000U) == 0)) {
    iVar4 = FUN_00a8cd60(piVar3,0x22);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x358))(0x17c,param_1 + 0x640);
    }
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  param_1[0x3a9] = param_1[0x3a9] | 0x80000000;
  iVar4 = param_1[0x3a6];
  param_1[0x52d] = param_1[0x52b];
  param_1[0x52e] = param_1[0x52c];
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  iVar1 = *piVar3;
  param_1[0x3a6] = iVar1;
  iVar2 = piVar3[1];
  param_1[0x3a7] = iVar2;
  iVar9 = iVar1;
  if (iVar1 == 0x10) {
    iVar9 = iVar2;
  }
  iVar4 = FUN_00638cc0(iVar1 == 0x10,iVar9,iVar4);
  if ((param_1[0x294] != 0) && (iVar4 != 0)) {
    FUN_00a88250(0,param_1 + 0x10);
    piVar3 = (int *)FUN_00c206d0();
    (**(code **)(*piVar3 + 4))(0,param_1[0x13c],param_1 + 0x10);
  }
  return;
}

// 0063EC00  FUN_0063ec00  size=155  [callgraph]
void __fastcall FUN_0063ec00(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1164;
  FUN_00a7c950();
  FUN_00a7c950();
  switch(*(undefined4 *)(param_1 + 0x14ac)) {
  case 1:
  case 7:
    FUN_00639470(iVar1);
    FUN_006264e0();
    return;
  case 2:
    FUN_00639590(iVar1);
    FUN_006265b0();
    return;
  case 3:
    FUN_00626790(iVar1);
    FUN_00626650();
    return;
  case 5:
    FUN_00626a80(iVar1);
    FUN_00626650();
    return;
  case 6:
    FUN_006397b0(iVar1,0);
    FUN_006397b0(param_1 + 0x1168,1);
    FUN_00626cc0(0);
  }
  return;
}

// 0063ECC0  FUN_0063ecc0  size=134  [callgraph]
void __fastcall FUN_0063ecc0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x116c;
  FUN_00a7c950();
  FUN_00a7c950();
  switch(*(undefined4 *)(param_1 + 0x14b0)) {
  case 1:
  case 7:
    FUN_00639470(iVar1);
    return;
  case 2:
    FUN_00639590(iVar1);
    return;
  case 3:
    FUN_00626790(iVar1);
    return;
  case 4:
    FUN_0061f880(iVar1);
    return;
  case 5:
    FUN_00626a80(iVar1);
    return;
  case 6:
    FUN_006397b0(iVar1,0);
    FUN_006397b0(param_1 + 0x1170,1);
  }
  return;
}

// 0063F230  FUN_0063f230  size=414  [callgraph]
/* WARNING: Switch with 1 destination removed at 0x0063f31f : 19 cases all go to same destination */

void __fastcall FUN_0063f230(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      return;
    case 1:
      FUN_0062d3f0();
      return;
    case 2:
      FUN_0062da00();
      return;
    case 3:
      FUN_0062db70();
      return;
    case 6:
      FUN_0062e100();
      return;
    case 0xb:
      FUN_0062e6d0();
      return;
    case 0xc:
      FUN_0062e7b0();
      return;
    case 0xd:
      FUN_0061d780();
      return;
    case 0xe:
      FUN_006277e0();
      return;
    case 0xf:
      FUN_00627b50();
      return;
    case 0x10:
      FUN_00627d10();
      return;
    case 0x11:
      FUN_00627eb0();
      return;
    case 0x12:
      FUN_00628030();
      return;
    case 0x13:
      FUN_00639df0();
      return;
    case 0x16:
      FUN_0062eee0();
      return;
    case 0x17:
      FUN_0062f120();
      return;
    case 0x18:
      FUN_0062f320();
      return;
    case 0x25:
      FUN_006183c0();
      return;
    }
  }
  else if (0x20009 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_00628300();
        return;
      }
    }
    else if (iVar1 < 0xb0001) {
      switch(iVar1) {
      case 0xa0004:
        FUN_0061cb70();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00628fe0();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cb90();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cbb0();
        return;
      case 0xa000a:
        FUN_00629660();
        return;
      case 0xa0013:
        FUN_0061cc40();
        return;
      case 0xa0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
  }
  return;
}

// 0063F4B0  FUN_0063f4b0  size=81  [callgraph]
void __thiscall FUN_0063f4b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x10;
  if (*(int *)(param_1 + 0x4b0) == 0x28170) {
    iVar1 = FUN_0063b770(param_2);
  }
  else {
    iVar1 = FUN_00639f40(param_2);
  }
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffef;
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xdb4) & 8) == 0)) {
    *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 1;
  }
  return;
}

// 0063F510  Em8010::vf40  size=6684  [class]
undefined4 __fastcall Em8010::vf40(int *param_1)

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
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [124];
  
  iVar6 = EmBaseDLC::vf40();
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = param_1[300];
  uVar7 = 0x2814f;
  if ((iVar6 == 0x28150) || (iVar6 == 0x28152)) {
    uVar7 = 0x2815f;
  }
  if (iVar6 == 0x28170) {
    uVar7 = 0x28170;
  }
  FUN_00ac9720(0x28012,uVar7);
  param_1[0x1c] = 0x3f8ccccd;
  param_1[0x1d] = 0x3f8ccccd;
  param_1[0x1e] = 0x3f8ccccd;
  param_1[0x5a0] = 0;
  param_1[0x5a1] = -0x40800000;
  param_1[0x21e] = 1;
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  FUN_00a7c950();
  param_1[0x5d6] = 0x3f800000;
  param_1[0x41d] = 1;
  param_1[0x6f5] = 0;
  param_1[0x51c] = 1;
  param_1[0x6e3] = -1;
  param_1[0x6e4] = 0;
  param_1[0x6e5] = 0;
  param_1[0x6e6] = 0;
  param_1[0x6e7] = -1;
  param_1[0x6e8] = 0;
  param_1[0x6e9] = 0;
  param_1[0x6ea] = 0;
  if ((param_1[0x12a] & 0x8000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x80000;
  }
  if ((param_1[0x12a] & 0x40000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x40000;
  }
  param_1[0x5f4] = param_1[0x14];
  param_1[0x5f5] = param_1[0x15];
  param_1[0x5f6] = param_1[0x16];
  param_1[0x5f7] = param_1[0x17];
  param_1[0x5f0] = param_1[0x24];
  param_1[0x5f1] = param_1[0x25];
  param_1[0x5f2] = param_1[0x26];
  param_1[0x5f3] = param_1[0x27];
  uVar1 = param_1[300];
  if (uVar1 < 0x28151) {
    if (uVar1 != 0x28150) {
      if (uVar1 < 0x28143) {
        if (uVar1 == 0x28142) {
          FUN_00acf600(0x28143,"EmC142Body");
        }
        else if (uVar1 == 0x28010) {
          FUN_00acf600(0x28011,"Em8010Body");
        }
        else if (uVar1 == 0x28140) {
          FUN_00acf600(0x28141,"EmC140Body");
        }
      }
      else if (uVar1 == 0x28144) {
        FUN_00acf600(0x28145,"EmC144Body");
      }
      goto LAB_0063f774;
    }
    pcVar13 = "EmC150Body";
    uVar7 = 0x28151;
LAB_0063f75e:
    FUN_00acf600(uVar7,pcVar13);
    iVar6 = 0x3f99999a;
LAB_0063f76b:
    param_1[0x1e] = iVar6;
    param_1[0x1d] = iVar6;
    param_1[0x1c] = iVar6;
  }
  else {
    if (uVar1 == 0x28152) {
      pcVar13 = "EmC152Body";
      uVar7 = 0x28153;
      goto LAB_0063f75e;
    }
    if (uVar1 != 0x28160) {
      if (uVar1 != 0x28170) goto LAB_0063f774;
      FUN_00acf600(0x28171,"EmC170Body");
      iVar6 = 0x3fa66666;
      goto LAB_0063f76b;
    }
    FUN_00acf600(0x28161,"EmC160Body");
  }
LAB_0063f774:
  iVar6 = FUN_00ac8a50();
  param_1[0x3a5] = iVar6;
  param_1[0x3a6] = 0;
  param_1[0x3a8] = 0;
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
  if (((iVar6 == 0x28150) || (iVar6 == 0x28152)) || (iVar6 == 0x28170)) {
    FUN_00ac8d40(0);
  }
  if ((param_1[0x3a5] == 0) && (FUN_00ac94e0(&DAT_0163d9a8), param_1[0x3a5] == 0)) {
    iVar6 = param_1[300];
    uVar7 = 1;
    if (iVar6 == 0x28140) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x28142) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x28144) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x28150) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x28152) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x28160) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x28170) {
      uVar7 = 0x1c2;
    }
    (**(code **)(*param_1 + 0x358))(uVar7,param_1 + 0x490);
  }
  sVar4 = FUN_00dde2d0(0,4);
  param_1[0x700] = (int)sVar4;
  FUN_0061caa0((int)sVar4);
  param_1[0x521] = 0;
  param_1[0x520] = 0;
  FUN_00ac4c70(1);
  lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>();
  FUN_00a929d0();
  if (param_1[0x1d6] != 0) {
    FUN_00a92a90(0xffffffff);
  }
  FUN_00a92a30(0x20010);
  FUN_00ac4c70(0);
  sVar4 = FUN_00dde2d0(0,0x3c);
  FUN_00a8edf0(sVar4 + 0x78);
  if (param_1[0x1d5] != 0) {
    param_1[0x6f6] = 0x3f800000;
    param_1[0x6f7] = 0x3f800000;
    if (param_1[300] == 0x28142) {
      fVar11 = (float10)FUN_00ac85c0(5,0xa3);
      param_1[0x6f6] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(5,0xa4);
      param_1[0x6f7] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x28144) {
      fVar11 = (float10)FUN_00ac85c0(7,0xa3);
      param_1[0x6f6] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(7,0xa4);
      param_1[0x6f7] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x28160) {
      fVar11 = (float10)FUN_00ac85c0(6,0xa3);
      param_1[0x6f6] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(6,0xa4);
      param_1[0x6f7] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x28152) {
      fVar11 = (float10)FUN_00ac85c0(5,0xa6);
      param_1[0x6f6] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(5,0xa7);
      param_1[0x6f7] = (int)(float)fVar11;
    }
    FUN_00ac8660(0,0x2f);
    uVar5 = FUN_00ac8660(0,0x30);
    iVar6 = param_1[300];
    if (((iVar6 == 0x28010) || (iVar6 == 0x28140)) || ((iVar6 == 0x28142 || (iVar6 == 0x28144)))) {
      FUN_00ac8660(0,0x37);
      uVar5 = FUN_00ac8660(0,0x38);
    }
    if ((param_1[0x12a] & 0x2000U) != 0) {
      FUN_00ac8660(0,0x33);
      uVar5 = FUN_00ac8660(0,0x34);
    }
    if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
      FUN_00ac8660(0,0x3b);
      uVar5 = FUN_00ac8660(0,0x3c);
    }
    if (param_1[300] == 0x28170) {
      FUN_00ac8660(0,0x3f);
      uVar5 = FUN_00ac8660(0,0x40);
      iVar6 = FUN_00ac8660(0,0xaa);
      param_1[0x6fb] = iVar6;
      fVar11 = (float10)FUN_00ac85c0(5,0xab);
      param_1[0x6f8] = (int)(float)fVar11;
      param_1[0x6f9] = 0;
      param_1[0x6fa] = 0;
      iVar6 = FUN_00ac8660(0,0xae);
      param_1[0x12a] = param_1[0x12a] | 0x400000;
      param_1[0x6fc] = iVar6;
      param_1[0x6fd] = 0;
    }
    if (param_1[300] == 0x28160) {
      FUN_00ac8660(0,0x43);
      uVar5 = FUN_00ac8660(0,0x44);
    }
    FUN_00dde2d0(0,uVar5);
    uVar7 = FUN_00fdbc60();
    FUN_00a8edf0(uVar7);
    fVar11 = (float10)FUN_00ac85c0(5,0x9f);
    param_1[0x6f3] = (int)(float)(fVar11 * (float10)60.0);
    fVar11 = (float10)FUN_00ac85c0(5,0xa0);
    param_1[0x6f4] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0xb1);
    param_1[0x66d] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0xb9);
    param_1[0x40b] = (int)(float)fVar11;
    iVar6 = FUN_00ac8660(0,0xba);
    param_1[0x40c] = iVar6;
  }
  param_1[0x456] = 0;
  param_1[0x6a3] = 0;
  param_1[0x692] = 0;
  param_1[0x6df] = 0;
  iVar6 = FUN_00ac8660(0,0x69);
  param_1[0x6de] = iVar6;
  uVar7 = FUN_00ac8660(0,0x6a);
  sVar4 = FUN_00dde2d0(0,uVar7);
  param_1[0x6de] = param_1[0x6de] + (int)sVar4;
  if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
    iVar6 = FUN_00ac8660(0,0x6d);
    param_1[0x6de] = iVar6;
    uVar7 = FUN_00ac8660(0,0x6e);
    sVar4 = FUN_00dde2d0(0,uVar7);
    param_1[0x6de] = param_1[0x6de] + (int)sVar4;
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
  if ((param_1[0x12a] & 0x8000U) != 0) {
    param_1[0x1bb] = 0;
  }
  param_1[0x5a6] = -0x40800000;
  param_1[0x5a5] = 0;
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
  FUN_00e272b0(0x28012,0x20010);
  iVar6 = param_1[300];
  if ((((iVar6 == 0x28010) || (iVar6 == 0x28140)) || (iVar6 == 0x28142)) ||
     ((iVar6 == 0x28144 || (iVar6 == 0x28160)))) {
    FUN_00a92f90();
    FUN_00e27330(0x2814f,0x20010);
  }
  if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
    FUN_00a92f90();
    FUN_00e27330(0x2815f,0x20010);
  }
  iVar6 = param_1[300];
  FUN_00a92f90();
  FUN_00e27330(iVar6,0x20010);
  FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  sVar4 = FUN_00dde2d0(0,6);
  param_1[0x51e] = 0;
  param_1[0x458] = sVar4 + 1;
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
  FUN_00620fc0(0x3f733333,0x3ecccccd);
  param_1[0x51f] = 0;
  FUN_00a82790(param_1[0x13c],1,0);
  param_1[0x530] = param_1[0x530] | 0x60;
  param_1[0x55c] = 0;
  param_1[0x55d] = 0;
  param_1[0x55e] = 0x3f800000;
  param_1[0x55f] = iStack_94;
  FUN_00a82870(0x3f860a92,0xbf860a92,0x3dcccccd,0x393702d3,0x3d567750);
  puVar8 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
  param_1[0x360] = (int)puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar10 = &DAT_01881f70;
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
              (param_1[0x13c],5,&DAT_01881ee0,4);
    FUN_00a88b50(1,0);
  }
  if (((param_1[0x351] & 0x80000000U) != 0) && ((param_1[0x12a] & 0x800000U) != 0)) {
    FUN_00a82dd0(1);
    FUN_00a82e00(1);
    FUN_00a82e30(1);
  }
  iVar6 = param_1[300];
  iVar9 = 1;
  if ((iVar6 == 0x28150) || (iVar6 == 0x28152)) {
    iVar9 = 7;
  }
  iVar2 = param_1[0x128];
  param_1[0x52b] = iVar9;
  param_1[0x52c] = 0;
  if (iVar2 == 1) {
    param_1[0x52b] = 2;
    param_1[0x52c] = 0;
  }
  if (iVar2 == 2) {
    param_1[0x52b] = 3;
    param_1[0x52c] = 0;
  }
  if (iVar2 == 3) {
    param_1[0x52b] = iVar9;
    param_1[0x52c] = 2;
  }
  if (iVar2 == 4) {
    param_1[0x52b] = iVar9;
    param_1[0x52c] = 3;
  }
  if (iVar2 == 6) {
    param_1[0x52b] = 2;
    param_1[0x52c] = iVar9;
  }
  if (iVar2 == 7) {
    param_1[0x52b] = 3;
    param_1[0x52c] = iVar9;
  }
  if (iVar2 == 10) {
    param_1[0x52b] = 2;
    param_1[0x52c] = iVar9;
  }
  if (iVar2 == 8) {
    param_1[0x52b] = 0;
    param_1[0x52c] = 0;
  }
  if (iVar2 == 0xe) {
    param_1[0x52b] = 2;
    param_1[0x52c] = iVar9;
  }
  if (iVar2 == 0xf) {
    param_1[0x52b] = iVar9;
    param_1[0x52c] = 4;
  }
  if (iVar2 == 0x10) {
    param_1[0x52b] = 3;
    param_1[0x52c] = iVar9;
  }
  if (iVar2 == 0x11) {
    param_1[0x52b] = 6;
    param_1[0x52c] = 0;
  }
  if (iVar2 == 0x12) {
    param_1[0x52b] = 6;
    param_1[0x52c] = 2;
  }
  if (iVar2 == 0x13) {
    param_1[0x52b] = 2;
    param_1[0x52c] = 6;
  }
  if (iVar6 == 0x28170) {
    param_1[0x52b] = 5;
    param_1[0x52c] = 0;
  }
  if (param_1[0x3a5] != 0) {
    param_1[0x52b] = 0;
    param_1[0x52c] = 0;
  }
  iVar6 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar6 == 0) {
    return 0;
  }
  param_1[0x523] = 0;
  param_1[0x5a2] = 0;
  param_1[0x522] = 1;
  param_1[0x524] = 0;
  sVar4 = FUN_00dde2d0(0,0x14);
  param_1[0x5a4] = 0;
  *(undefined1 *)(param_1 + 0x40e) = 0;
  *(undefined1 *)(param_1 + 0x412) = 0;
  param_1[0x701] = 0;
  param_1[0x607] = 0x1e;
  param_1[0x60d] = 0;
  param_1[0x423] = (int)((float)(int)sVar4 * 60.0 + 900.0);
  param_1[0x5a3] = 0;
  param_1[0x40f] = 0;
  param_1[0x413] = 0;
  param_1[0x60c] = -0x40800000;
  param_1[0x608] = param_1[0x14];
  param_1[0x609] = param_1[0x15];
  param_1[0x60a] = param_1[0x16];
  param_1[0x60b] = param_1[0x17];
  param_1[0x5e4] = param_1[0x608];
  param_1[0x5e5] = param_1[0x609];
  param_1[0x5e6] = param_1[0x60a];
  param_1[0x5e7] = param_1[0x60b];
  FUN_0063ec00();
  FUN_0063ecc0();
  if ((*(byte *)(param_1 + 0x12a) & 0x80) != 0) {
    FUN_00627580();
  }
  uVar5 = 4;
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    FUN_00a88b50(4,0);
  }
  (**(code **)(*param_1 + 0x34c))();
  if (param_1[299] == 1) {
    FUN_00626190(0x100001,0,0,0);
    param_1[0x5e0] = 0;
    if (param_1[0x1d9] != 0) {
      CharacterControl::setHeight(0x3f000000);
      CharacterControl::setRadius(0x3dcccccd);
      FUN_008e1cc0();
    }
  }
  if (param_1[299] == 2) {
    FUN_00626190(0x100000,0,0,0);
    uVar5 = 0x2d4;
  }
  if (param_1[299] == 3) {
    FUN_00a88b50(4,0);
    FUN_00626190(0x100002,0,0,0);
    iVar6 = param_1[0x52b];
    uVar5 = 0x2d6;
    if ((((iVar6 == 1) || (iVar6 == 7)) || (iVar6 == 6)) || (iVar6 == 5)) {
      FUN_00627580();
      param_1[0x41d] = 0;
    }
  }
  if (param_1[299] == 4) {
    FUN_00a88b50(4,0);
    FUN_00626190(0xe,0,0,0);
    uVar5 = 0x241;
    FUN_00627580();
    param_1[0x41d] = 0;
  }
  if (param_1[299] == 5) {
    FUN_00a88b50(4,0);
    FUN_00626190(0x1000b,0,0,0);
    FUN_00627580();
    param_1[0x41d] = 0;
    uVar5 = 0x446;
  }
  if (param_1[299] == 6) {
    FUN_00a88b50(4,0);
    FUN_00626190(0x100003,0,0,0);
    uVar5 = 0x245;
    FUN_00627580();
    param_1[0x41d] = 0;
  }
  if ((param_1[299] == 7) || (param_1[299] == 9)) {
    FUN_00626190(0x100004,0,0,0);
    uVar5 = 0x4bd;
  }
  if ((param_1[299] == 0xb) && ((param_1[0x52b] == 2 || (param_1[0x52b] == 3)))) {
    FUN_006265b0();
    uVar5 = 0x32;
    if (param_1[0x52b] == 3) {
      uVar5 = 0x10e;
    }
    pcVar3 = *(code **)(*param_1 + 0x34c);
    param_1[0x41d] = 0;
    (*pcVar3)();
    param_1[0x3aa] = param_1[0x3aa] | 0x400000;
  }
  if (param_1[299] == 0xc) {
    param_1[0x3aa] = param_1[0x3aa] | 0x10000;
    (**(code **)(*param_1 + 0x34c))();
  }
  if (((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) && (param_1[299] == 8)) {
    FUN_00626190(0xd0000,0,0,0);
    uVar5 = 0x2a1;
    FUN_00626420();
    param_1[0x41d] = 0;
    param_1[0x3aa] = param_1[0x3aa] | 0x20000000;
  }
  if (param_1[0x128] == 10) {
    FUN_00626190(0x10000000,0,0,0);
    uVar5 = 0x3a5;
  }
  if (param_1[0x128] == 0xe) {
    param_1[0x3ab] = param_1[0x3ab] | 0x4000;
    FUN_00626190(8,0,0,0);
    uVar5 = 0x44f;
  }
  if (param_1[0x128] == 0xf) {
    param_1[0x3ab] = param_1[0x3ab] | 0x8000;
    FUN_00626970();
    (**(code **)(*param_1 + 0x34c))();
    uVar5 = 0x454;
  }
  if (param_1[0x128] == 0x10) {
    param_1[0x3ab] = param_1[0x3ab] | 0x1000;
    FUN_006265b0();
    param_1[0x41d] = 0;
    FUN_00626190(0x30000,0,0,0);
    if (DAT_018b9174 == 0x458) {
      param_1[0x3aa] = param_1[0x3aa] | 0x800;
    }
  }
  if (param_1[0x128] == 0xc) {
    param_1[0x3ab] = param_1[0x3ab] | 0xc0;
    FUN_00a88b50(4,0);
    FUN_00626190(0xe,0,0,0);
    if (param_1[299] == 3) {
      FUN_00626190(0x100002,0,0,0);
    }
    FUN_00626420();
    param_1[0x41d] = 0;
    uVar5 = 0x2d6;
  }
  if (param_1[0x128] == 0xd) {
    param_1[0x3ab] = param_1[0x3ab] | 0xa0;
    FUN_00a88b50(4,0);
    FUN_00626190(0xe,0,0,0);
    if (param_1[299] == 3) {
      FUN_00626190(0x100002,0,0,0);
    }
    FUN_00626420();
    param_1[0x41d] = 0;
    uVar5 = 0x2d6;
  }
  if ((param_1[0x12a] & 0x80000U) != 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x100;
  }
  if (param_1[0x3a5] == 0) {
    FUN_00aa4080(uVar5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    switchD_0080dbae::default();
  }
  piVar12 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar12);
  FUN_00987dd0(param_1);
  param_1[0x6fe] = -1;
  if ((param_1[0x3a5] == 0) && ((iVar6 = FUN_006210a0(), iVar6 != 0 || (param_1[300] == 0x28160))))
  {
    FUN_006211c0();
  }
  if ((*(byte *)(param_1 + 0x12a) & 8) != 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x2000000;
  }
  if ((param_1[0x12a] & 0x10U) != 0) {
    param_1[0x2fa] = 1;
  }
  if (((param_1[0x12a] & 0x400U) != 0) && (iVar6 = FUN_00a9b930(), iVar6 != 0)) {
    FUN_00a8e880(iVar6 + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x40490fdb,0);
  }
  if ((param_1[0x12a] & 0x1000U) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x404] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x1cc,0);
  }
  if ((param_1[0x12a] & 0x100000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x80000000;
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x10000000;
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
  iVar6 = param_1[300];
  if ((((iVar6 == 0x28010) || (iVar6 == 0x28140)) || (iVar6 == 0x28142)) || (iVar6 == 0x28144)) {
    if ((param_1[0x52b] == 6) || (param_1[0x52c] == 6)) {
      FUN_00ac9300(&DAT_01646980);
    }
    else {
      FUN_00ac94e0("saya_Double");
    }
  }
  param_1[0x693] = 0x2450241;
  param_1[0x694] = 0x2470247;
  param_1[0x695] = (int)&WORD_025d025a;
  param_1[0x696] = (int)&WORD_024e0260;
  param_1[0x697] = 0x250024f;
  param_1[0x698] = 0x2650264;
  param_1[0x699] = 0x2540253;
  param_1[0x69a] = (int)&DAT_02290255;
  param_1[0x69b] = (int)&DAT_022e022c;
  *(undefined2 *)(param_1 + 0x69c) = 0x263;
  *(undefined **)((int)param_1 + 0x1a72) = &DAT_01ea01f6;
  if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
    if ((param_1[0x3ab] & 0x8000U) == 0) {
      param_1[0x128] = 0xb;
      param_1[0x693] = 0x2930292;
      param_1[0x694] = 0x2930293;
      param_1[0x695] = 0x2980297;
      param_1[0x696] = 0x2940299;
      param_1[0x697] = 0x2940294;
      param_1[0x698] = 0x2960295;
      param_1[0x699] = 0x29b029a;
      param_1[0x69a] = 0x29e029c;
      param_1[0x69b] = 0x2c1029f;
      param_1[0x69c] = 0x2b1029d;
      goto LAB_00640b66;
    }
LAB_00640b72:
    param_1[0x693] = 0x4680454;
    param_1[0x694] = 0x4680468;
    param_1[0x695] = 0x470046c;
    param_1[0x696] = 0x4780474;
    param_1[0x697] = 0x4780478;
    param_1[0x698] = 0x47c047b;
    *(undefined4 *)((int)param_1 + 0x1a6a) = 0x4810481;
    *(undefined4 *)((int)param_1 + 0x1a6e) = 0x47d0483;
    *(undefined4 *)((int)param_1 + 0x1a72) = 0x48c048c;
  }
  else {
LAB_00640b66:
    if ((param_1[0x3ab] & 0x8000U) != 0) goto LAB_00640b72;
  }
  if (param_1[300] == 0x28170) {
    param_1[0x693] = 0x5240521;
    param_1[0x694] = 0x5240524;
    param_1[0x695] = 0x5320531;
    param_1[0x696] = 0x5270533;
    param_1[0x697] = 0x5270527;
    param_1[0x698] = 0x52e052d;
    param_1[0x699] = 0x52a0529;
    param_1[0x69a] = 0x53f052b;
    param_1[0x69b] = 0x5410540;
    param_1[0x69c] = 0x542052f;
  }
  if ((param_1[0x52b] == 6) || (param_1[0x52c] == 6)) {
    param_1[0x693] = 0x26d0268;
    param_1[0x694] = 0x26d026d;
    param_1[0x695] = 0x2720271;
    param_1[0x696] = 0x26f0273;
    param_1[0x697] = 0x26f026f;
    param_1[0x698] = 0x27a0279;
    param_1[0x699] = 0x2760275;
    param_1[0x69a] = 0x2850277;
    param_1[0x69b] = 0x2880286;
    *(undefined2 *)(param_1 + 0x69c) = 0x27b;
    *(undefined4 *)((int)param_1 + 0x1a72) = 0x2810289;
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    param_1[0x66d] = (int)((float)param_1[0x66d] + 2.0);
  }
  if (param_1[0x129] == 9) {
    FUN_00a8edf0(0x50);
  }
  param_1[0x6e2] = -1;
  param_1[0x69f] = -1;
  param_1[0x67c] = 0;
  param_1[0x691] = 0;
  param_1[0x6ff] = 0;
  param_1[0x679] = 0;
  FUN_00a7c950();
  param_1[0x36a] = 0;
  param_1[0x36c] = 0;
  if (param_1[300] != 0x28160) goto LAB_00640ddc;
  iVar6 = param_1[0x129];
  if ((iVar6 == 1) || (iVar6 == 0)) {
    FUN_00ac94e0("_face_C");
    FUN_00ac94e0("_face_D");
    pcVar13 = "Dam_face_A";
LAB_00640da6:
    FUN_00ac94e0(pcVar13);
  }
  else {
    if (iVar6 == 2) {
      FUN_00ac94e0("_face_A");
      FUN_00ac94e0("_face_D");
      pcVar13 = "Dam_face_C";
      goto LAB_00640da6;
    }
    if (iVar6 == 3) {
      FUN_00ac94e0("_face_A");
      pcVar13 = "_face_C";
      goto LAB_00640da6;
    }
  }
  FUN_00ac9300("L_arm_A_DEC");
  if ((param_1[0x52b] == 1) || (param_1[0x52c] == 1)) {
    FUN_00e5e0c0("wp0031_se_setobj_baton",param_1,0xffffffff,0);
  }
LAB_00640ddc:
  if ((param_1[300] == 0x28150) || (param_1[300] == 0x28152)) {
    fVar11 = (float10)FUN_00ac85c0(5,0x80);
    param_1[0x6ec] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x81);
    param_1[0x6ed] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x82);
    param_1[0x6ee] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x83);
    param_1[0x6ef] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x84);
    param_1[0x6f0] = (int)(float)fVar11;
  }
  if (param_1[300] == 0x28170) {
    fVar11 = (float10)FUN_00ac85c0(5,0x87);
    param_1[0x6ec] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x88);
    param_1[0x6ed] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x89);
    param_1[0x6ee] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x8a);
    param_1[0x6ef] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x8b);
    param_1[0x6f0] = (int)(float)fVar11;
  }
  if ((param_1[300] == 0x28144) || (param_1[300] == 0x28160)) {
    if (((param_1[0x52b] != 2) || (param_1[0x52c] == 0)) && (param_1[0x52c] != 2)) {
      FUN_00ac94e0("rifle_ATT");
    }
  }
  if (((param_1[0x12a] & 0x4000U) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e59c0(2);
  }
  return 1;
}

// 00640F30  FUN_00640f30  size=3227  [callgraph]
void __fastcall FUN_00640f30(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 == 0) {
    param_1[0x5d7] = 1;
  }
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    if (iVar1 != 0x10000) {
      switch(iVar1) {
      case 0:
        FUN_0062d1e0();
        break;
      case 1:
        FUN_0062d460();
        break;
      case 2:
        FUN_0062da50();
        break;
      case 3:
        FUN_0062dbc0();
        break;
      case 4:
        FUN_0062dd40();
        break;
      case 5:
        FUN_00617760();
        break;
      case 6:
        FUN_0062e240();
        break;
      case 7:
        FUN_0062d7c0();
        break;
      case 8:
        FUN_00617550();
        break;
      case 9:
        FUN_0063d780();
        break;
      case 10:
        FUN_00617320();
        break;
      case 0xb:
        FUN_00617950();
        break;
      case 0xc:
        FUN_0061d4e0();
        break;
      case 0xd:
        FUN_00623340();
        break;
      case 0xe:
        FUN_00617e80();
        break;
      case 0xf:
        FUN_00617f70();
        break;
      case 0x10:
        FUN_0062eb60();
        break;
      case 0x11:
        FUN_0062ed20();
        break;
      case 0x12:
        FUN_006180f0();
        break;
      case 0x13:
        FUN_006234c0();
        break;
      case 0x14:
        FUN_00623650();
        break;
      case 0x15:
        FUN_0061d800();
        break;
      case 0x16:
        FUN_0063d970();
        break;
      case 0x17:
        FUN_0062f1c0();
        break;
      case 0x18:
        FUN_0062f3c0();
        break;
      case 0x19:
        FUN_0063db20();
        break;
      case 0x1a:
        FUN_0062f830();
        break;
      case 0x1b:
        FUN_0062f9a0();
        break;
      case 0x1c:
        FUN_0062fb10();
        break;
      case 0x1d:
        FUN_0062fc20();
        break;
      case 0x1e:
      case 0x25:
        FUN_00623990();
        break;
      case 0x1f:
      case 0x23:
        FUN_00631c20();
        break;
      case 0x20:
        FUN_00631f80();
        break;
      case 0x21:
        FUN_006322a0();
        break;
      case 0x22:
        FUN_00632460();
        break;
      case 0x24:
        FUN_006308b0();
        break;
      case 0x26:
        FUN_00630a20();
        break;
      case 0x27:
        FUN_00630c20();
      }
      goto switchD_00640f6c_default;
    }
switchD_00641166_caseD_10005:
    FUN_00630d10();
  }
  else {
    if (0x20000 < iVar1) {
      if (iVar1 < 0x30001) {
        if (iVar1 == 0x30000) {
          FUN_00618fb0();
        }
        else {
          switch(iVar1) {
          case 0x20001:
          case 0x20002:
          case 0x20003:
          case 0x20004:
            FUN_00618c50();
            break;
          case 0x20005:
            FUN_00618e10();
            break;
          case 0x20006:
          case 0x20007:
          case 0x20008:
            FUN_00632e70();
            break;
          case 0x20009:
            FUN_00632f90();
            break;
          case 0x2000a:
            FUN_006330e0();
            break;
          case 0x2000b:
            FUN_00633280();
            break;
          case 0x2000c:
            FUN_006333d0();
            break;
          case 0x2000e:
            FUN_00633510();
          }
        }
      }
      else if (iVar1 < 0x40001) {
        if (iVar1 == 0x40000) {
          FUN_006382d0();
        }
        else {
          switch(iVar1) {
          case 0x30001:
          case 0x30002:
          case 0x30003:
          case 0x30004:
            FUN_006190c0();
            break;
          case 0x30005:
            FUN_00619260();
            break;
          case 0x30006:
          case 0x30007:
          case 0x30008:
            FUN_00633d60();
            break;
          case 0x30009:
            FUN_00633e80();
            break;
          case 0x3000a:
            FUN_00633fd0();
            break;
          case 0x3000b:
            FUN_006342b0();
            break;
          case 0x3000c:
            FUN_006345e0();
          }
        }
      }
      else if (iVar1 < 0xb0001) {
        if (iVar1 == 0xb0000) {
          FUN_0062ab90();
        }
        else if (iVar1 < 0x70009) {
          if (iVar1 == 0x70008) {
            FUN_0061f430();
          }
          else if (iVar1 < 0x60001) {
            if (iVar1 == 0x60000) {
              FUN_00635920();
            }
            else if (iVar1 < 0x50001) {
              if (iVar1 == 0x50000) {
                FUN_00636bb0();
              }
              else if (iVar1 == 0x40001) {
                FUN_00638410();
              }
            }
            else {
              switch(iVar1) {
              case 0x50001:
                FUN_00624ba0();
                break;
              case 0x50002:
                FUN_00619e80();
                break;
              case 0x50003:
                FUN_00636e30();
                break;
              case 0x50004:
                FUN_00619f70();
                break;
              case 0x50005:
                FUN_0061a060();
                break;
              case 0x50006:
                FUN_00637120();
                break;
              case 0x50007:
                FUN_0061a150();
              }
            }
          }
          else if (iVar1 < 0x70001) {
            if (iVar1 == 0x70000) {
              FUN_0061b7a0();
            }
            else {
              switch(iVar1) {
              case 0x60001:
                FUN_006198f0();
                break;
              case 0x60002:
                FUN_006199e0();
                break;
              case 0x60003:
                FUN_00635ba0();
                break;
              case 0x60004:
                FUN_00619b00();
                break;
              case 0x60005:
                FUN_00619ba0();
                break;
              case 0x60006:
                FUN_00635da0();
                break;
              case 0x60007:
                FUN_0061e930();
                break;
              case 0x60008:
                FUN_0061ea30();
                break;
              case 0x60009:
              case 0x6000a:
                FUN_00619c70();
                break;
              case 0x6000b:
                FUN_00635fb0();
                break;
              case 0x6000c:
                FUN_00636280();
                break;
              case 0x6000d:
                FUN_00636440();
                break;
              case 0x6000e:
                FUN_00636560();
                break;
              case 0x6000f:
                FUN_00636670();
                break;
              case 0x60010:
                FUN_006366c0();
                break;
              case 0x60011:
                FUN_0061eb10();
                break;
              case 0x60012:
                FUN_006367f0();
              }
            }
          }
        }
        else if (iVar1 < 0xa0001) {
          if (iVar1 == 0xa0000) {
            FUN_0063ce00();
          }
          else {
            switch(iVar1) {
            case 0x70009:
              FUN_0061b830();
              break;
            case 0x7000a:
              FUN_0061f590();
              break;
            case 0x7000b:
              FUN_00638710();
              break;
            case 0x7000c:
              FUN_00638890();
              break;
            case 0x7000d:
              FUN_0061b910();
            }
          }
        }
        else {
          switch(iVar1) {
          case 0xa0001:
            FUN_00628540();
            break;
          case 0xa0002:
            FUN_00628760();
            break;
          case 0xa0003:
            FUN_00628a70();
            break;
          case 0xa0004:
            FUN_00628be0();
            break;
          case 0xa0005:
          case 0xa0012:
            FUN_00629040();
            break;
          case 0xa0006:
            FUN_00629220();
            break;
          case 0xa0007:
            FUN_006293a0();
            break;
          case 0xa0008:
            FUN_006294a0();
            break;
          case 0xa0009:
            FUN_00629500();
            break;
          case 0xa000a:
            FUN_00629690();
            break;
          case 0xa000b:
            FUN_00629880();
            break;
          case 0xa000c:
            FUN_00629950();
            break;
          case 0xa000d:
            FUN_00629a60();
            break;
          case 0xa000e:
            FUN_00622720();
            break;
          case 0xa000f:
            FUN_00629da0();
            break;
          case 0xa0010:
          case 0xa0011:
            FUN_00629e90();
            break;
          case 0xa0013:
          case 0xa0019:
            FUN_0062a080();
            break;
          case 0xa0014:
            FUN_0062a400();
            break;
          case 0xa0015:
            FUN_006227d0();
            break;
          case 0xa0017:
            FUN_0062a520();
            break;
          case 0xa0018:
            FUN_0062a5e0();
            break;
          case 0xa001a:
            FUN_0062a6a0();
            break;
          case 0xa001b:
          case 0xa001c:
            FUN_0062a920();
            break;
          case 0xa001d:
            FUN_0061ccf0();
            break;
          case 0xa001e:
            FUN_0061ce80();
            break;
          case 0xa001f:
            FUN_0061cf20();
            break;
          case 0xa0023:
            FUN_006251e0();
          }
        }
      }
      else if (iVar1 < 0xd0001) {
        if (iVar1 == 0xd0000) {
          FUN_00624d50();
        }
        else {
          switch(iVar1) {
          case 0xb0001:
            FUN_0062afc0();
            break;
          case 0xb0002:
            FUN_0062b1b0();
            break;
          case 0xb0003:
            FUN_006229c0();
            break;
          case 0xb0004:
            FUN_0062b250();
            break;
          case 0xb0005:
            FUN_00634780();
            break;
          case 0xb0006:
            FUN_00634cd0();
            break;
          case 0xb000a:
            FUN_00622ba0();
            break;
          case 0xb000b:
            FUN_0061ce10();
          }
        }
      }
      else if (iVar1 < 0x10000001) {
        if (iVar1 == 0x10000000) {
          FUN_0061a2b0();
        }
        else if (iVar1 < 0x110001) {
          if (iVar1 == 0x110000) {
            FUN_00617c20();
          }
          else if (iVar1 < 0x100001) {
            if (iVar1 == 0x100000) {
              FUN_0062c4e0();
            }
            else if (iVar1 == 0xd0001) {
              FUN_00624e00();
            }
            else if (iVar1 == 0xd0002) {
              FUN_006380f0();
            }
            else if (iVar1 == 0xd0003) {
              FUN_006381e0();
            }
          }
          else {
            switch(iVar1) {
            case 0x100001:
              FUN_0062c5f0();
              break;
            case 0x100002:
              FUN_0062c8d0();
              break;
            case 0x100003:
              FUN_00617250();
              break;
            case 0x100004:
              FUN_0062ce90();
              break;
            case 0x100005:
              FUN_0061d320();
            }
          }
        }
        else if (iVar1 < 0x120001) {
          if (iVar1 == 0x120000) {
            FUN_0062fd10();
          }
          else if (iVar1 == 0x110001) {
            FUN_00617d00();
          }
          else if (iVar1 == 0x110002) {
            FUN_0062e8b0();
          }
          else if (iVar1 == 0x110003) {
            FUN_0062ea20();
          }
        }
        else {
          switch(iVar1) {
          case 0x120001:
          case 0x120002:
          case 0x120003:
            FUN_0062ff40();
            break;
          case 0x120004:
            FUN_00630440();
            break;
          case 0x120005:
            FUN_00618400();
          }
        }
      }
      else {
        switch(iVar1) {
        case 0x10000001:
          FUN_0061a320();
          break;
        case 0x10000002:
          FUN_0061a390();
          break;
        case 0x10000003:
          FUN_0061a490();
          break;
        case 0x10000005:
          FUN_00624c70();
          break;
        case 0x10000006:
        case 0x10000007:
        case 0x10000008:
        case 0x10000009:
          FUN_0061ebe0();
          break;
        case 0x1000000a:
        case 0x1000000b:
        case 0x1000000c:
        case 0x1000000d:
          FUN_0061ed60();
          break;
        case 0x1000000e:
          FUN_0061ada0();
          break;
        case 0x1000000f:
          FUN_0061efd0();
          break;
        case 0x10000010:
        case 0x10000011:
          FUN_0061f0b0();
          break;
        case 0x10000012:
        case 0x10000013:
          FUN_0061f1b0();
          break;
        case 0x10000014:
        case 0x10000015:
          FUN_00637490();
          break;
        case 0x10000016:
        case 0x10000017:
        case 0x10000018:
        case 0x10000019:
          FUN_0061a6b0();
          break;
        case 0x1000001a:
          FUN_0061a8a0();
          break;
        case 0x1000001b:
        case 0x1000001c:
        case 0x1000001d:
        case 0x1000001e:
          FUN_0061a740();
          break;
        case 0x1000001f:
          FUN_0061ab50();
          break;
        case 0x10000020:
          FUN_0061abd0();
          break;
        case 0x10000021:
          FUN_0061ac40();
          break;
        case 0x10000024:
        case 0x10000029:
          FUN_006379c0();
          break;
        case 0x10000025:
          FUN_0061aad0();
          break;
        case 0x10000026:
          FUN_006375b0();
          break;
        case 0x10000027:
          FUN_00637700();
          break;
        case 0x10000028:
          FUN_0061f340();
          break;
        case 0x1000002a:
          FUN_00637830();
          break;
        case 0x1000002b:
          FUN_0061a940();
          break;
        case 0x1000002c:
          FUN_0061aa10();
          break;
        case 0x1000002d:
          FUN_00637c20();
        }
      }
      goto switchD_00640f6c_default;
    }
    if (iVar1 == 0x20000) {
      FUN_00618b40();
      goto switchD_00640f6c_default;
    }
    switch(iVar1) {
    case 0x10001:
      FUN_00630f30();
      break;
    case 0x10002:
    case 0x10003:
      FUN_006311b0();
      break;
    case 0x10004:
      FUN_00631480();
      break;
    case 0x10005:
      goto switchD_00641166_caseD_10005;
    case 0x10006:
      FUN_0061daa0();
      break;
    case 0x10007:
      FUN_006237e0();
      break;
    case 0x10008:
      FUN_00631670();
      break;
    case 0x10009:
      FUN_0061dd30();
      break;
    case 0x1000a:
      FUN_006317e0();
      break;
    case 0x1000b:
      FUN_0063dd60();
      break;
    case 0x1000c:
      FUN_006318e0();
      break;
    case 0x1000d:
      FUN_0061b580();
      break;
    case 0x1000e:
      FUN_0061b630();
      break;
    case 0x1000f:
      FUN_0061b6e0();
      break;
    case 0x10010:
    case 0x10011:
    case 0x10012:
    case 0x10013:
      FUN_00637d70();
      break;
    case 0x10014:
      FUN_0061b2f0();
      break;
    case 0x10015:
      FUN_0061aef0();
      break;
    case 0x10016:
      FUN_00624f20();
      break;
    case 0x10017:
      FUN_00624fd0();
      break;
    case 0x10018:
      FUN_00625080();
      break;
    case 0x10019:
      FUN_00625130();
      break;
    case 0x1001a:
      FUN_0061a200();
    }
  }
switchD_00640f6c_default:
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
    param_1[0x3a9] = param_1[0x3a9] | 0x400;
    (**(code **)(*param_1 + 0x1d4))(0);
  }
  iVar1 = FUN_00a8c760(6);
  if (iVar1 != 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x200;
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
  if (param_1[300] == 0x28160) {
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

// 00641F50  FUN_00641f50  size=1596  [callgraph]
void __fastcall FUN_00641f50(int param_1)

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
  if ((*(byte *)(param_1 + 0xeaa) & 1) != 0) {
    if (*(int *)(param_1 + 0x61c) == 0) {
      FUN_0061ca10();
      return;
    }
    iVar3 = FUN_00621860();
    if (iVar3 == 0) {
      if (0.0 < *(float *)(param_1 + 0x1bfc)) {
        return;
      }
      FUN_00626190(0x21,0,0,0);
      return;
    }
    FUN_0062b3d0();
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_0064255b;
  iVar3 = FUN_00621140();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar3 + 0x4c);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
    FUN_00626190(0x19,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_0064255b;
  if ((*(byte *)(param_1 + 0xea4) & 4) != 0) {
    uVar4 = FUN_00dde2a0(0,100);
    uVar4 = (uVar4 & 0xffff) % 3;
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0x107c) != 0) {
        FUN_00626190(0x12,0,0,0);
        return;
      }
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0x1080) != 0) {
        FUN_00626190(0x10,0,0,0);
        return;
      }
    }
    else if ((uVar4 == 2) && (*(int *)(param_1 + 0x1084) != 0)) goto LAB_00642059;
  }
  iVar3 = FUN_00a82e80();
  if (((iVar3 != 0) &&
      ((*(float *)(param_1 + 0x18f4) < 0.0 && (12.25 < *(float *)(param_1 + 0xa8c))))) &&
     ((*(int *)(param_1 + 0x19c0) == 0 || ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)))) {
    FUN_00626190(0x14,0,0,0);
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
  if ((((iVar3 != 0) && (*(int *)(param_1 + 0x14ac) == 1)) && (*(int *)(param_1 + 0x1488) != 0)) &&
     (*(float *)(param_1 + 0xa8c) < 25.0)) {
    FUN_00626190(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00626190(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00626190(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (6.25 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
      FUN_00626190(0x10001,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xaa0) <= 2.0943952) {
      return;
    }
    FUN_00626190(0x10005,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(int *)(param_1 + 0x19c0) != 0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0x1084) != 0) {
        uVar5 = 0x11;
        goto LAB_0064229b;
      }
    }
    else if (*(int *)(param_1 + 0x1080) != 0) {
      uVar5 = 0x10;
LAB_0064229b:
      FUN_00626190(uVar5,0,0,0);
    }
  }
  if ((*(int *)(param_1 + 0xbe8) == 0) && (*(float *)(param_1 + 0xa8c) <= 4.0)) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
  }
  if ((((36.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
      (*(int *)(param_1 + 0x19c0) != 0)) ||
     (((100.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
      (*(int *)(param_1 + 0x19c0) != 0)))) {
    FUN_00626190(0x13,0,0,0);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xea4) >> 0x16 & 1;
  if (uVar4 != 0) {
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      FUN_00626190(0x18,0,0,0);
      return;
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_006423d1:
      FUN_00626190(0x16,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      FUN_00626190(0x17,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_006423d1;
  }
  if ((*(int *)(param_1 + 0x1494) != 0) && (*(int *)(param_1 + 0x19c0) != 0)) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
    if (*(int *)(param_1 + 0x1498) != 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00626190(sVar2 + 0x1c,uVar5,uVar6,uVar7);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 == 1) {
        FUN_00626190(0x110001,0,0,0);
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
    if (iVar3 == 0) {
      return;
    }
    FUN_00626190(0x10008,0,0,0);
    return;
  }
  if ((uVar4 != 0) && ((*(float *)(param_1 + 0x920) < 0.0 || (*(int *)(param_1 + 0x19c0) == 0)))) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0x1084) != 0) {
LAB_00642059:
        FUN_00626190(0x11,0,0,0);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x1080) != 0) {
      FUN_00626190(0x10,0,0,0);
      return;
    }
  }
  if (((*(float *)(param_1 + 0xa8c) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
     (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3(), iVar3 != 0)) {
    FUN_00626190(0x1000c,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0x924);
  if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
    iVar3 = FUN_00464930();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xdb0) = 1;
    }
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
LAB_0064255b:
  fVar1 = *(float *)(param_1 + 0xa8c);
  if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00626e00(0xffffffff);
  }
  return;
}

// 00642590  FUN_00642590  size=1002  [callgraph]
void __fastcall FUN_00642590(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
         ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 25.0)))) {
        FUN_00626190(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00626190(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00626190(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10005,0,0,0);
          }
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x526] != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00626190(sVar2 + 0x1c,uVar4,uVar5,uVar6);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00626190(0x110001,0,0,0);
          }
        }
        goto LAB_006427fa;
      }
      iVar3 = FUN_00a82e80();
      if ((iVar3 != 0) &&
         (((param_1[0x3a9] & 0x400000U) != 0 &&
          (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))))) {
LAB_0064287b:
        FUN_00626190(0x13,0,0,0);
        return;
      }
      if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
        if (param_1[0x670] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_0064290b;
        }
      }
      else if (param_1[0x670] != 0) goto LAB_0064287b;
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          FUN_00626190(0x11,0,0,0);
        }
        else {
          FUN_00626190(0x10,0,0,0);
        }
      }
    }
  }
LAB_0064290b:
  if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x0064292a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
      return;
    }
    if (1.3962634 <= (float)param_1[0x2a8]) {
      return;
    }
    FUN_00626e00(0xffffffff);
    return;
  }
LAB_006427fa:
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
  if (iVar3 == 0) {
    return;
  }
  FUN_00626190(0x10008,0,0,0);
  return;
}

// 00642980  FUN_00642980  size=947  [callgraph]
void __fastcall FUN_00642980(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = true;
  if (param_1[0x187] != 0) {
    if (param_1[0x420] == 0) {
                    /* WARNING: Could not recover jumptable at 0x006429a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
         ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 36.0)))) {
        FUN_00626190(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00626190(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00626190(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10005,0,0,0);
          }
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if (param_1[0x525] == 0) {
        if (param_1[0x670] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_00642cb5;
        }
      }
      else if (param_1[0x670] != 0) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] != 0) {
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00626190(sVar2 + 0x1c,uVar5,uVar6,uVar7);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00626190(0x110001,0,0,0);
          }
        }
        goto LAB_00642bfa;
      }
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x420] == 0)) {
          if (param_1[0x421] != 0) {
            FUN_00626190(0x1b,0,0,0);
          }
        }
        else {
          FUN_00626190(0x1a,0,0,0);
        }
      }
    }
LAB_00642cb5:
    bVar4 = param_1[0x187] == 0;
  }
  if (((!bVar4) && (100.0 < (float)param_1[0x2a3])) && ((*(byte *)(param_1 + 0x3a9) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00642ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
      return;
    }
    if (1.3962634 <= (float)param_1[0x2a8]) {
      return;
    }
    FUN_00626e00(0xffffffff);
    return;
  }
LAB_00642bfa:
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
  if (iVar3 == 0) {
    return;
  }
  FUN_00626190(0x10008,0,0,0);
  return;
}

// 00642D40  FUN_00642d40  size=947  [callgraph]
void __fastcall FUN_00642d40(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = true;
  if (param_1[0x187] != 0) {
    if (param_1[0x421] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00642d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
         ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 36.0)))) {
        FUN_00626190(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00626190(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00626190(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10005,0,0,0);
          }
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if (param_1[0x525] == 0) {
        if (param_1[0x670] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_00643075;
        }
      }
      else if (param_1[0x670] != 0) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] != 0) {
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00626190(sVar2 + 0x1c,uVar5,uVar6,uVar7);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00626190(0x110001,0,0,0);
          }
        }
        goto LAB_00642fba;
      }
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x420] == 0)) {
          if (param_1[0x421] != 0) {
            FUN_00626190(0x1b,0,0,0);
          }
        }
        else {
          FUN_00626190(0x1a,0,0,0);
        }
      }
    }
LAB_00643075:
    bVar4 = param_1[0x187] == 0;
  }
  if (((!bVar4) && (100.0 < (float)param_1[0x2a3])) && ((*(byte *)(param_1 + 0x3a9) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x006430a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
      return;
    }
    if (1.3962634 <= (float)param_1[0x2a8]) {
      return;
    }
    FUN_00626e00(0xffffffff);
    return;
  }
LAB_00642fba:
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
  if (iVar3 == 0) {
    return;
  }
  FUN_00626190(0x10008,0,0,0);
  return;
}

// 00643100  FUN_00643100  size=878  [callgraph]
void __fastcall FUN_00643100(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00643122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
         ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 25.0)))) {
        FUN_00626190(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00626190(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00626190(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00626190(0x10005,0,0,0);
          }
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x526] != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00626190(sVar2 + 0x1c,uVar4,uVar5,uVar6);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00626190(0x110001,0,0,0);
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
        if (iVar3 == 0) {
          return;
        }
        FUN_00626190(0x10008,0,0,0);
        return;
      }
    }
    if (((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) &&
       ((*(byte *)(param_1 + 0x3a9) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x006433cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00626e00(0xffffffff);
    }
  }
  else if (((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
          ((6.25 < (float)param_1[0x2a3] && ((float)param_1[0x2a8] < 0.7853982)))) {
    FUN_00626190(0x10008,0,0,0);
    return;
  }
  return;
}

// 00643470  FUN_00643470  size=884  [callgraph]
void __fastcall FUN_00643470(int *param_1)

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
    param_1[0x51c] = 1;
    goto LAB_00643769;
  }
  iVar3 = FUN_00621140();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
    FUN_00626190(0x19,0,0,0);
    return;
  }
  iVar3 = FUN_0061c470();
  if (iVar3 != 0) {
    FUN_00626190(0x120000,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0061c320();
  if (iVar3 != 0) {
    FUN_00626190(0x120004,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0061c3b0();
  if (iVar3 != 0) {
    FUN_00626190(0x120001,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0063f1c0();
  if (iVar3 != 0) {
    return;
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = lib::Array<Entity*>::Array<Entity*>_2(), iVar3 != 0)) {
    if (param_1[0x250] == 1) {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 1) != 0)) {
LAB_006435c4:
        uVar5 = 0x10009;
LAB_006435cf:
        FUN_00626190(uVar5,0,0,0);
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((float)param_1[0x2a3] < 16.0) {
        uVar5 = 0x10002;
        goto LAB_006435cf;
      }
    }
    else {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 1) != 0))
      goto LAB_006435c4;
      if ((float)param_1[0x2a3] < 6.25) {
        uVar5 = 0x10004;
        goto LAB_006435cf;
      }
    }
  }
  if (param_1[0x670] == 0) {
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00626190(0x11,0,0,0);
      }
      else {
        FUN_00626190(0x10,0,0,0);
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
  if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
    if (param_1[0x688] == 0) {
      iVar3 = FUN_00ac4d60(4);
      if (iVar3 != 0) {
        FUN_00626190(0x27,0,0,0);
        return;
      }
      iVar3 = FUN_00ac4d60(3);
      if (iVar3 != 0) {
        FUN_00626190(0x26,0,0,0);
        return;
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3();
    if (iVar3 != 0) {
      FUN_00626190(0x1000c,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      uVar5 = 0x11;
    }
    else {
      uVar5 = 0x10;
    }
    FUN_00626190(uVar5,0,0,0);
  }
LAB_00643769:
  if (param_1[0x670] != 0) {
    if (*(int *)(param_1[0x2a1] + 0x2660) != 0) {
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
      if (iVar3 == 0) {
        return;
      }
      FUN_00626190(0x10008,0,0,0);
      return;
    }
    if (((param_1[0x670] != 0) && ((float)param_1[0x2a3] < 12.25)) &&
       ((float)param_1[0x2a8] < 1.3962634)) {
                    /* WARNING: Could not recover jumptable at 0x006437da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  FUN_0063f1c0();
  return;
}

// 006437F0  FUN_006437f0  size=373  [callgraph]
void __fastcall FUN_006437f0(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
    return;
  }
  iVar2 = FUN_00621140();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar2 + 0x4c);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
    FUN_00626190(0x19,0,0,0);
    return;
  }
  iVar2 = FUN_0061c470();
  if (iVar2 != 0) {
    FUN_00626190(0x120000,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  iVar2 = FUN_0061c320();
  if (iVar2 != 0) {
    FUN_00626190(0x120004,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  iVar2 = FUN_0061c3b0();
  if (iVar2 != 0) {
    FUN_00626190(0x120001,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  if ((*(byte *)(param_1 + 0xea4) & 4) != 0) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfffffffb;
    if (*(int *)(param_1 + 0x1a20) == 0) {
      iVar2 = FUN_00ac4d60(4);
      if (iVar2 != 0) {
        FUN_00626190(0x27,0,0,0);
        return;
      }
      iVar2 = FUN_00ac4d60(3);
      if (iVar2 != 0) {
        FUN_00626190(0x26,0,0,0);
        return;
      }
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00626190(0x10,0,0,0);
      FUN_0063f1c0();
      return;
    }
    FUN_00626190(0x11,0,0,0);
  }
  FUN_0063f1c0();
  return;
}

// 00643970  FUN_00643970  size=1189  [callgraph]
void __fastcall FUN_00643970(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00643d6b;
  iVar3 = FUN_00a82e60();
  if ((iVar3 != 0) && (iVar3 = FUN_00621860(), iVar3 != 0)) {
    FUN_0062b3d0();
    return;
  }
  iVar3 = FUN_00a82e60();
  if ((iVar3 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00626190(0,0,0,0);
    return;
  }
  iVar3 = FUN_00a82e80();
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
    FUN_00626190(0x23,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00643d6b;
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
  *(float *)(param_1 + 0x1660) =
       (local_28 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  if ((*(uint *)(param_1 + 0xea8) & 0x40000) != 0) {
    iVar3 = FUN_0061e150();
    if (iVar3 == 0) {
      return;
    }
    FUN_00633780();
    return;
  }
  if (((*(uint *)(param_1 + 0xea8) & 0x400000) != 0) && (iVar3 = FUN_00a82e60(), iVar3 != 0)) {
    return;
  }
  iVar3 = FUN_0061e150();
  if ((iVar3 != 0) && (iVar3 = FUN_00633780(), iVar3 != 0)) {
    return;
  }
  if (((*(float *)(param_1 + 0xa8c) <= 64.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) ||
     (*(int *)(param_1 + 0x1a3c) != 0)) {
    if (*(int *)(param_1 + 0x1a3c) == 0) {
      if ((*(int *)(param_1 + 0x107c) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
        FUN_00626190(0x20002,0,0,0);
        return;
      }
    }
    else {
      fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x1a40) = (float)(fVar4 * (float10)60.0);
    }
    if ((*(int *)(param_1 + 0x1080) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
      FUN_00626190(0x20004,0,0,0);
      return;
    }
    if ((*(int *)(param_1 + 0x1084) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
      FUN_00626190(0x20003,0,0,0);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00626190(0x20006,0,0,0);
      return;
    }
    if (2.5307274 < *(float *)(param_1 + 0xa9c)) {
LAB_00643c65:
      FUN_00626190(0x20008,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00626190(0x20007,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.5307274) goto LAB_00643c65;
  }
  if (((*(uint *)(param_1 + 0xea8) & 0x80400000) == 0) && (36.0 < *(float *)(param_1 + 0xa8c))) {
    if (*(int *)(param_1 + 0x19c0) == 0) {
      if ((*(float *)(param_1 + 0xa8c) <= 2500.0) ||
         ((*(uint *)(param_1 + 0xea8) & 0x10000000) != 0)) {
LAB_00643d15:
        FUN_00626190(0x20005,0,0,0);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 900.0 < fVar1 != (fVar1 == 900.0)) goto LAB_00643d15;
    }
  }
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3();
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x19c0) == 0) {
      if (*(int *)(param_1 + 0x17e8) == 0) goto LAB_00643d6b;
    }
    else if (10.0 <= *(float *)(param_1 + 0xa90)) goto LAB_00643d6b;
    FUN_00626190(0x1000c,0,0,0);
  }
LAB_00643d6b:
  if (((((*(int *)(param_1 + 0x19c0) != 0) && (*(int *)(*(int *)(param_1 + 0xa84) + 0x2660) != 0))
       && (*(int *)(param_1 + 0x1498) != 0)) &&
      ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) &&
     (iVar3 = FUN_0061bc60(2,1), iVar3 != 0)) {
    FUN_00626190(0x2000a,0,0,0);
    FUN_0061bcc0();
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00626e00(0xffffffff);
  }
  return;
}

// 00643E20  FUN_00643e20  size=727  [callgraph]
void __fastcall FUN_00643e20(int *param_1)

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
    param_1[0x598] = (int)((fVar1 - (float)param_1[0x598]) * 0.1 + (float)param_1[0x598]);
    return;
  }
  if (param_1[0x187] != 0) {
    iVar3 = FUN_0061c470();
    if (iVar3 != 0) {
      FUN_00626190(0x120000,0,0,0);
      return;
    }
    iVar3 = FUN_0061c320();
    if (iVar3 != 0) {
      FUN_00626190(0x120004,0,0,0);
      return;
    }
    iVar3 = FUN_0061c3b0();
    if (iVar3 != 0) {
      FUN_00626190(0x120001,0,0,0);
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
      param_1[0x598] = (int)((fVar1 - (float)param_1[0x598]) * 0.1 + (float)param_1[0x598]);
    }
    if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
      param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
      if (param_1[0x688] == 0) {
        iVar3 = FUN_00ac4d60(4);
        if (iVar3 != 0) {
          FUN_00626190(0x27,0,0,0);
          return;
        }
        iVar3 = FUN_00ac4d60(3);
        if (iVar3 != 0) {
          FUN_00626190(0x26,0,0,0);
          return;
        }
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3();
      if (iVar3 != 0) {
        FUN_00626190(0x1000c,0,0,0);
        return;
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        uVar4 = 0x20003;
      }
      else {
        uVar4 = 0x20004;
      }
      FUN_00626190(uVar4,0,0,0);
    }
  }
  if ((DAT_01bea094 & 0x20000) == 0) {
    if (((param_1[0x670] != 0) && ((float)param_1[0x2a3] <= 36.0)) &&
       ((float)param_1[0x2a8] < 1.3962634)) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (((float)param_1[0x2a3] <= 4.0) && ((float)param_1[0x2a8] < 1.3962634)) {
    param_1[0x6e7] = -1;
    FUN_00626190(0x1000a,0,0,0);
    return;
  }
  FUN_0063f1c0();
  return;
}

// 00644100  FUN_00644100  size=1172  [callgraph]
void __fastcall FUN_00644100(int param_1)

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
    if ((iVar3 != 0) && (iVar3 = FUN_00621860(), iVar3 != 0)) {
      FUN_0062b3d0();
      return;
    }
    if ((*(uint *)(param_1 + 0xeac) & 0x1000) != 0) {
      FUN_00a8d230(local_20);
      iVar3 = FUN_00a12210(5);
      thunk_FUN_00dde510(&local_28,local_24,local_20,iVar3 + 0x40);
      local_28 = local_28 * 1.2732395;
      fVar1 = -1.0;
      if ((-1.0 <= local_28) && (fVar1 = 1.0, local_28 <= 1.0)) {
        fVar1 = local_28;
      }
      *(float *)(param_1 + 0x1660) =
           (fVar1 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
      return;
    }
    if ((*(uint *)(param_1 + 0x4a8) & 0x40000) == 0) {
      iVar3 = FUN_00a82d50();
      if ((iVar3 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
        FUN_00626190(0,0,0,0);
        return;
      }
      if (((*(uint *)(param_1 + 0xea8) & 0x400000) == 0) || (iVar3 = FUN_00a82e60(), iVar3 == 0)) {
        if (*(int *)(param_1 + 0xa84) != 0) {
          iVar3 = FUN_0061e150();
          if (iVar3 != 0) goto LAB_006441e6;
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
          *(float *)(param_1 + 0x1660) =
               (local_28 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
          if (((*(float *)(param_1 + 0xa8c) <= 64.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634))
             || (*(int *)(param_1 + 0x1a3c) != 0)) {
            if (*(int *)(param_1 + 0x1a3c) == 0) {
              if ((*(int *)(param_1 + 0x107c) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
                FUN_00626190(0x30002,0,0,0);
                return;
              }
            }
            else {
              fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
              *(float *)(param_1 + 0x1a40) = (float)(fVar4 * (float10)60.0);
            }
            if ((*(int *)(param_1 + 0x1080) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
              FUN_00626190(0x30004,0,0,0);
              return;
            }
            if ((*(int *)(param_1 + 0x1084) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
              FUN_00626190(0x30003,0,0,0);
              return;
            }
          }
          if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
            if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
              FUN_00626190(0x30006,0,0,0);
              return;
            }
            if (2.5307274 < *(float *)(param_1 + 0xa9c)) {
LAB_00644431:
              FUN_00626190(0x30008,0,0,0);
              return;
            }
            if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
              FUN_00626190(0x30007,0,0,0);
              return;
            }
            if (*(float *)(param_1 + 0xa9c) < -2.5307274) goto LAB_00644431;
          }
          if ((((*(uint *)(param_1 + 0xea8) & 0x80400000) == 0) && (*(int *)(param_1 + 0x19c0) == 0)
              ) && ((*(float *)(param_1 + 0xa8c) <= 2500.0 ||
                    ((*(uint *)(param_1 + 0xea8) & 0x10000000) != 0)))) {
            FUN_00626190(0x30005,0,0,0);
          }
          if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
             (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3(), iVar3 != 0)) {
            FUN_00626190(0x1000c,0,0,0);
          }
        }
        if ((((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
            (iVar3 = FUN_00626e00(0xffffffff), iVar3 == 0)) && (0 < *(int *)(param_1 + 0x61c))) {
          iVar3 = FUN_00a82e60();
          if ((iVar3 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
            FUN_00626190(0,0,0,0);
          }
          iVar3 = FUN_00a82e80();
          if ((iVar3 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
            FUN_00626190(0x23,0,0,0);
          }
        }
      }
    }
    else {
      iVar3 = FUN_0061e150();
      if (iVar3 != 0) {
LAB_006441e6:
        FUN_00626190(0x3000b,0,0,0);
        return;
      }
    }
  }
  return;
}

// 006445A0  FUN_006445a0  size=537  [callgraph]
void __fastcall FUN_006445a0(int *param_1)

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
      param_1[0x51c] = 1;
    }
    else {
      iVar3 = FUN_0061c470();
      if (iVar3 != 0) {
        FUN_00626190(0x120000,0,0,0);
        return;
      }
      iVar3 = FUN_0061c320();
      if (iVar3 != 0) {
        FUN_00626190(0x120004,0,0,0);
        return;
      }
      iVar3 = FUN_0061c3b0();
      if (iVar3 != 0) {
        FUN_00626190(0x120001,0,0,0);
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
        param_1[0x598] = (int)((fVar1 - (float)param_1[0x598]) * 0.1 + (float)param_1[0x598]);
      }
      if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
        if (param_1[0x688] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00626190(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00626190(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3();
        if (iVar3 != 0) {
          FUN_00626190(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x30003;
        }
        else {
          uVar4 = 0x30004;
        }
        FUN_00626190(uVar4,0,0,0);
      }
      iVar3 = FUN_0063f1c0();
      if (iVar3 != 0) {
        return;
      }
    }
    if ((((float)param_1[0x2a3] <= 36.0) && ((float)param_1[0x2a8] < 1.3962634)) &&
       (iVar3 = FUN_00626e00(0xffffffff), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 006447C0  FUN_006447c0  size=71  [callgraph]
void __fastcall FUN_006447c0(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  switch(param_1[0x186]) {
  default:
    return;
  case 0x10000002:
    FUN_0063e670();
    return;
  case 0x1000000a:
  case 0x1000000b:
  case 0x1000000c:
  case 0x1000000d:
    FUN_0061a540();
    return;
  case 0x10000012:
  case 0x10000013:
    FUN_0061a5e0();
    return;
  }
}

// 00644850  FUN_00644850  size=1096  [callgraph]
void __fastcall FUN_00644850(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if ((*(byte *)(param_1 + 0xeaa) & 1) == 0) {
      if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
        iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
        if ((iVar3 != 0) && ((*(int *)(param_1 + 0x14ac) == 7 && (*(int *)(param_1 + 0x1488) != 0)))
           ) {
          if ((*(float *)(param_1 + 0xa8c) < 12.25) && (iVar3 = FUN_00ac8190(), iVar3 != 0)) {
            FUN_00626190(0x10014,0,0,0);
            return;
          }
          if (((*(float *)(param_1 + 0xa8c) < 16.0) && (-2.0 < *(float *)(param_1 + 0xa94))) &&
             (*(float *)(param_1 + 0xa94) < 2.0)) {
            do {
              sVar2 = FUN_00dde2d0(0,4);
            } while (sVar2 + 0x10010 == *(int *)(param_1 + 0x1b88));
            FUN_00626190(sVar2 + 0x10010,0,0,0);
            return;
          }
        }
        if ((((((*(uint *)(param_1 + 0xea8) & 0x8000) == 0) &&
              ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)) &&
             ((iVar3 = FUN_00a82e80(), iVar3 != 0 && (64.0 < *(float *)(param_1 + 0xa8c))))) ||
            (((fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)
              && (*(float *)(param_1 + 0xa8c) <= 64.0)) && (*(int *)(param_1 + 0x19c0) != 0)))) ||
           ((((64.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
             (*(int *)(param_1 + 0x19c0) != 0)) ||
            ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982))))))
        {
          FUN_00626190(0x13,0,0,0);
          return;
        }
        if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
          if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
            FUN_00626190(0x18,0,0,0);
            return;
          }
          if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00644ad5:
            FUN_00626190(0x16,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00626190(0x17,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00644ad5;
        }
        if ((*(int *)(param_1 + 0x1494) != 0) && (*(int *)(param_1 + 0x19c0) != 0)) {
          *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (*(int *)(param_1 + 0x1498) != 0) {
            do {
              sVar2 = FUN_00dde2d0(0,4);
            } while (sVar2 + 0x10010 == *(int *)(param_1 + 0x1b88));
            FUN_00626190(sVar2 + 0x10010,0,0,0);
          }
          iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
          if (iVar3 == 0) {
            return;
          }
          FUN_00626190(0x10008,0,0,0);
          return;
        }
        if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x19c0) == 0)) {
          sVar2 = FUN_00dde2d0(0,2);
          if (sVar2 == 0) {
            if (*(int *)(param_1 + 0x1080) != 0) {
              FUN_00626190(0x10,0,0,0);
              return;
            }
          }
          else if (sVar2 == 1) {
            if (*(int *)(param_1 + 0x1084) != 0) {
              FUN_00626190(0x11,0,0,0);
              return;
            }
          }
          else if ((sVar2 == 2) && (*(int *)(param_1 + 0x107c) != 0)) {
            FUN_00626190(0x12,0,0,0);
            return;
          }
        }
        if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
           (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3(), iVar3 != 0)) {
          FUN_00626190(0x1000c,0,0,0);
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
        FUN_00626e00(0xffffffff);
      }
    }
    else {
      if (*(int *)(param_1 + 0x61c) == 0) {
        FUN_0061ca10();
        return;
      }
      iVar3 = FUN_00621860();
      if (iVar3 != 0) {
        FUN_0062b3d0();
        return;
      }
      if (*(float *)(param_1 + 0x1bfc) <= 0.0) {
        FUN_00626190(0x21,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00644CA0  FUN_00644ca0  size=703  [callgraph]
void __fastcall FUN_00644ca0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if (((iVar3 != 0) &&
        (((param_1[0x52b] == 7 && (param_1[0x522] != 0)) && ((float)param_1[0x2a3] < 12.25)))) &&
       ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00626190(sVar2 + 0x10010,0,0,0);
      return;
    }
    if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x526] != 0) {
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00626190(sVar2 + 0x10010,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
      if (iVar3 == 0) {
        return;
      }
      FUN_00626190(0x10008,0,0,0);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00644eb5;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x421] != 0) {
          FUN_00626190(0x11,0,0,0);
        }
      }
      else if (param_1[0x420] != 0) {
        FUN_00626190(0x10,0,0,0);
      }
    }
  }
LAB_00644eb5:
  if (16.0 <= (float)param_1[0x2a3]) {
    if (((((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) &&
         (param_1[0x526] != 0)) &&
        (((float)param_1[0x2a3] < 20.25 && (6.25 < (float)param_1[0x2a3])))) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00626190(sVar2 + 0x10010,0,0,0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00644ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00644F60  FUN_00644f60  size=732  [callgraph]
void __fastcall FUN_00644f60(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if ((iVar3 != 0) &&
       ((((param_1[0x52b] == 7 && (param_1[0x522] != 0)) && ((float)param_1[0x2a3] < 12.25)) &&
        ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00626190(sVar2 + 0x10010,0,0,0);
      return;
    }
    if (param_1[0x525] == 0) {
      bVar4 = param_1[0x670] == 0;
    }
    else {
      bVar4 = param_1[0x670] == 0;
      if (!bVar4) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00626190(sVar2 + 0x10010,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x420] == 0)) {
          if (param_1[0x421] != 0) {
            FUN_00626190(0x1b,0,0,0);
          }
        }
        else {
          FUN_00626190(0x1a,0,0,0);
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
       (param_1[0x670] != 0)) {
LAB_00645177:
      FUN_00626190(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) goto LAB_00645177;
      goto LAB_00645222;
    }
  }
  if ((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x526] == 0) {
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
    } while (sVar2 + 0x10010 == param_1[0x6e2]);
    FUN_00626190(sVar2 + 0x10010,0,0,0);
    return;
  }
LAB_00645222:
  if (param_1[0x420] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064523a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00645240  FUN_00645240  size=732  [callgraph]
void __fastcall FUN_00645240(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if ((iVar3 != 0) &&
       ((((param_1[0x52b] == 7 && (param_1[0x522] != 0)) && ((float)param_1[0x2a3] < 12.25)) &&
        ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00626190(sVar2 + 0x10010,0,0,0);
      return;
    }
    if (param_1[0x525] == 0) {
      bVar4 = param_1[0x670] == 0;
    }
    else {
      bVar4 = param_1[0x670] == 0;
      if (!bVar4) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00626190(sVar2 + 0x10010,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x420] == 0)) {
          if (param_1[0x421] != 0) {
            FUN_00626190(0x1b,0,0,0);
          }
        }
        else {
          FUN_00626190(0x1a,0,0,0);
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
       (param_1[0x670] != 0)) {
LAB_00645457:
      FUN_00626190(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) goto LAB_00645457;
      goto LAB_00645502;
    }
  }
  if ((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x526] == 0) {
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
    } while (sVar2 + 0x10010 == param_1[0x6e2]);
    FUN_00626190(sVar2 + 0x10010,0,0,0);
    return;
  }
LAB_00645502:
  if (param_1[0x421] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0064551a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00645520  FUN_00645520  size=618  [callgraph]
void __fastcall FUN_00645520(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = lib::Array<Entity*>::Array<Entity*>_2();
      if ((((iVar2 != 0) && (param_1[0x52b] == 7)) && (param_1[0x522] != 0)) &&
         ((((float)param_1[0x2a3] < 12.25 && (-2.0 < (float)param_1[0x2a5])) &&
          ((float)param_1[0x2a5] < 2.0)))) {
        do {
          sVar1 = FUN_00dde2d0(0,4);
        } while (sVar1 + 0x10010 == param_1[0x6e2]);
        FUN_00626190(sVar1 + 0x10010,0,0,0);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         (((float)param_1[0x2a8] < 0.7853982 && (param_1[0x670] != 0)))) {
        FUN_00626190(0x13,0,0,0);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar1 + 0x19,uVar3,uVar4,uVar5);
        if (param_1[0x526] != 0) {
          do {
            sVar1 = FUN_00dde2d0(0,4);
          } while (sVar1 + 0x10010 == param_1[0x6e2]);
          FUN_00626190(sVar1 + 0x10010,0,0,0);
        }
        iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
        if (iVar2 == 0) {
          return;
        }
        FUN_00626190(0x10008,0,0,0);
        return;
      }
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x006456d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00645788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    do {
      sVar1 = FUN_00dde2d0(0,4);
    } while (sVar1 + 0x10010 == param_1[0x6e2]);
    FUN_00626190(sVar1 + 0x10010,0,0,0);
    return;
  }
  return;
}

// 00645790  FUN_00645790  size=846  [callgraph]
void __fastcall FUN_00645790(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  iVar3 = FUN_0061c470();
  if (iVar3 != 0) {
    FUN_00626190(0x120000,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0061c320();
  if (iVar3 != 0) {
    FUN_00626190(0x120004,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0061c3b0();
  if (iVar3 != 0) {
    FUN_00626190(0x120001,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
    if (param_1[0x688] == 0) {
      iVar3 = FUN_00ac4d60(4);
      if (iVar3 != 0) {
        FUN_00626190(0x27,0,0,0);
        return;
      }
      iVar3 = FUN_00ac4d60(3);
      if (iVar3 != 0) {
        FUN_00626190(0x26,0,0,0);
        return;
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3();
    if (iVar3 != 0) {
      FUN_00626190(0x1000c,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (param_1[0x421] == 0) goto LAB_006458ce;
      uVar4 = 0x11;
    }
    else {
      if (param_1[0x420] == 0) goto LAB_006458ce;
      uVar4 = 0x10;
    }
    FUN_00626190(uVar4,0,0,0);
  }
LAB_006458ce:
  iVar3 = FUN_0063f1c0();
  if (iVar3 == 0) {
    if (param_1[0x187] != 0) {
      if ((((param_1[0x2a1] != 0) && (iVar3 = lib::Array<Entity*>::Array<Entity*>_2(), iVar3 != 0))
          && ((float)param_1[0x2a3] < 12.25)) &&
         ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))) {
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00626190(sVar2 + 0x10010,0,0,0);
        return;
      }
      if (param_1[0x670] == 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
          sVar2 = FUN_00dde2d0(0,1);
          if (sVar2 == 0) {
            if (param_1[0x421] != 0) {
              FUN_00626190(0x11,0,0,0);
            }
          }
          else if (param_1[0x420] != 0) {
            FUN_00626190(0x10,0,0,0);
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
    if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
      if (((float)param_1[0x2a3] < 4.0) && ((float)param_1[0x2a5] < 2.0)) {
                    /* WARNING: Could not recover jumptable at 0x00645adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
             (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00626190(sVar2 + 0x10010,0,0,0);
      return;
    }
  }
  return;
}

// 00645AE0  FUN_00645ae0  size=809  [callgraph]
void __fastcall FUN_00645ae0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if ((*(byte *)(param_1 + 0xeaa) & 1) == 0) {
      if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
        iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
        if ((iVar3 != 0) && (*(float *)(param_1 + 0xa8c) < 12.25)) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,3);
          FUN_00626190(sVar2 + 0x10016,uVar4,uVar5,uVar6);
          return;
        }
        if (((((((*(uint *)(param_1 + 0xea8) & 0x8000) == 0) &&
               ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)) &&
              (iVar3 = FUN_00a82e80(), iVar3 != 0)) && (64.0 < *(float *)(param_1 + 0xa8c))) ||
            (((64.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
             (*(int *)(param_1 + 0x19c0) != 0)))) ||
           ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
          FUN_00626190(0x13,0,0,0);
          return;
        }
        if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
          if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
            FUN_00626190(0x18,0,0,0);
            return;
          }
          if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00645cb0:
            FUN_00626190(0x16,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00626190(0x17,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00645cb0;
        }
        if ((*(int *)(param_1 + 0x1494) == 0) || (*(int *)(param_1 + 0x19c0) == 0)) {
          if ((*(int *)(param_1 + 0x1a1c) != 0) && (*(int *)(param_1 + 0x1a28) != 0)) {
            FUN_00626190(0x10016,0,0,0);
            return;
          }
          if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x19c0) == 0)) {
            sVar2 = FUN_00dde2d0(0,2);
            if (sVar2 == 0) {
              if (*(int *)(param_1 + 0x1080) != 0) {
                FUN_00626190(0x10,0,0,0);
                return;
              }
            }
            else if (sVar2 == 1) {
              if (*(int *)(param_1 + 0x1084) != 0) {
                FUN_00626190(0x11,0,0,0);
                return;
              }
            }
            else if ((sVar2 == 2) && (*(int *)(param_1 + 0x107c) != 0)) {
              FUN_00626190(0x12,0,0,0);
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
          *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (*(int *)(param_1 + 0x1498) != 0) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            sVar2 = FUN_00dde2d0(0,3);
            FUN_00626190(sVar2 + 0x10016,uVar4,uVar5,uVar6);
            return;
          }
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x61c) == 0) {
        FUN_0061ca10();
        return;
      }
      iVar3 = FUN_00621860();
      if (iVar3 != 0) {
        FUN_0062b3d0();
        return;
      }
      if (*(float *)(param_1 + 0x1bfc) <= 0.0) {
        FUN_00626190(0x21,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00645E10  FUN_00645e10  size=565  [callgraph]
void __fastcall FUN_00645e10(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,3);
      FUN_00626190(sVar2 + 0x10016,uVar4,uVar5,uVar6);
      return;
    }
    if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x526] == 0) {
        return;
      }
      FUN_00626190(0x10016,0,0,0);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00645fa4;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x421] != 0) {
          FUN_00626190(0x11,0,0,0);
        }
      }
      else if (param_1[0x420] != 0) {
        FUN_00626190(0x10,0,0,0);
      }
    }
  }
LAB_00645fa4:
  if (16.0 <= (float)param_1[0x2a3]) {
    if ((((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) &&
        (param_1[0x526] != 0)) &&
       ((((float)param_1[0x2a3] < 20.25 && (6.25 < (float)param_1[0x2a3])) &&
        ((float)param_1[0x2a8] < 0.7853982)))) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,3);
      FUN_00626190(sVar2 + 0x10016,uVar4,uVar5,uVar6);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00645fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00646050  FUN_00646050  size=623  [callgraph]
void __fastcall FUN_00646050(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) goto LAB_00646281;
    if (param_1[0x525] == 0) {
      bVar4 = param_1[0x670] == 0;
    }
    else {
      bVar4 = param_1[0x670] == 0;
      if (!bVar4) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        FUN_00626190(0x10016,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x420] == 0)) {
          if (param_1[0x421] != 0) {
            FUN_00626190(0x1b,0,0,0);
          }
        }
        else {
          FUN_00626190(0x1a,0,0,0);
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
       (param_1[0x670] != 0)) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) {
        FUN_00626190(0xf,0,0,0);
        return;
      }
      goto LAB_006462a5;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
LAB_006462a5:
    if (param_1[0x420] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x006462bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x526] == 0) {
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
LAB_00646281:
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,3);
  FUN_00626190(sVar2 + 0x10016,uVar5,uVar6,uVar7);
  return;
}

// 006462C0  FUN_006462c0  size=623  [callgraph]
void __fastcall FUN_006462c0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) goto LAB_006464f1;
    if (param_1[0x525] == 0) {
      bVar4 = param_1[0x670] == 0;
    }
    else {
      bVar4 = param_1[0x670] == 0;
      if (!bVar4) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        FUN_00626190(0x10016,0,0,0);
        return;
      }
    }
    if (bVar4) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 == 0) || (param_1[0x420] == 0)) {
          if (param_1[0x421] != 0) {
            FUN_00626190(0x1b,0,0,0);
          }
        }
        else {
          FUN_00626190(0x1a,0,0,0);
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
       (param_1[0x670] != 0)) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) {
        FUN_00626190(0xf,0,0,0);
        return;
      }
      goto LAB_00646515;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
LAB_00646515:
    if (param_1[0x421] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0064652d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x526] == 0) {
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
LAB_006464f1:
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,3);
  FUN_00626190(sVar2 + 0x10016,uVar5,uVar6,uVar7);
  return;
}

// 00646530  FUN_00646530  size=483  [callgraph]
void __fastcall FUN_00646530(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = lib::Array<Entity*>::Array<Entity*>_2();
      if ((iVar2 != 0) && ((float)param_1[0x2a3] < 12.25)) {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00626190(sVar1 + 0x10016,uVar3,uVar4,uVar5);
        return;
      }
      if (((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
          ((float)param_1[0x2a8] < 0.7853982)) && (param_1[0x670] != 0)) {
        FUN_00626190(0xf,0,0,0);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar1 + 0x19,uVar3,uVar4,uVar5);
        if (param_1[0x526] == 0) {
          return;
        }
        FUN_00626190(0x10016,0,0,0);
        return;
      }
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00646662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00646711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    sVar1 = FUN_00dde2d0(0,3);
    FUN_00626190(sVar1 + 0x10016,uVar3,uVar4,uVar5);
    return;
  }
  return;
}

// 00646720  FUN_00646720  size=712  [callgraph]
void __fastcall FUN_00646720(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    iVar3 = FUN_0061c470();
    if (iVar3 == 0) {
      iVar3 = FUN_0061c320();
      if (iVar3 != 0) {
        FUN_00626190(0x120004,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      iVar3 = FUN_0061c3b0();
      if (iVar3 != 0) {
        FUN_00626190(0x120001,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
        if (param_1[0x688] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00626190(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00626190(0x26,0,0,0);
            return;
          }
          if (param_1[0x68a] != 0) {
            FUN_00626190(0x10016,0,0,0);
            return;
          }
        }
        (**(code **)(*param_1 + 0x34c))();
      }
      iVar3 = FUN_0063f1c0();
      if (iVar3 == 0) {
        if (param_1[0x187] != 0) {
          if (((param_1[0x2a1] != 0) &&
              (iVar3 = lib::Array<Entity*>::Array<Entity*>_2(), iVar3 != 0)) &&
             ((float)param_1[0x2a3] < 12.25)) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            sVar2 = FUN_00dde2d0(0,3);
            FUN_00626190(sVar2 + 0x10016,uVar4,uVar5,uVar6);
            return;
          }
          if (param_1[0x670] == 0) {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
            if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                if (param_1[0x421] != 0) {
                  FUN_00626190(0x11,0,0,0);
                }
              }
              else if (param_1[0x420] != 0) {
                FUN_00626190(0x10,0,0,0);
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
        if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
          if ((float)param_1[0x2a3] < 4.0) {
                    /* WARNING: Could not recover jumptable at 0x006469e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
                 (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,3);
          FUN_00626190(sVar2 + 0x10016,uVar4,uVar5,uVar6);
          return;
        }
      }
    }
    else {
      FUN_00626190(0x120000,0,0,0);
      param_1[0x6e3] = -1;
    }
  }
  return;
}

// 006469F0  FUN_006469f0  size=1450  [callgraph]
void __fastcall FUN_006469f0(int param_1)

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
  if ((*(byte *)(param_1 + 0xeaa) & 1) != 0) {
    if (*(int *)(param_1 + 0x61c) == 0) {
      FUN_0061ca10();
      return;
    }
    iVar3 = FUN_00621860();
    if (iVar3 == 0) {
      if (0.0 < *(float *)(param_1 + 0x1bfc)) {
        return;
      }
      FUN_00626190(0x21,0,0,0);
      return;
    }
    FUN_0062b3d0();
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00646f69;
  iVar3 = FUN_00621140();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar3 + 0x4c);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
    FUN_00626190(0x19,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00646f69;
  if ((*(byte *)(param_1 + 0xea4) & 4) != 0) {
    uVar4 = FUN_00dde2a0(0,100);
    uVar4 = (uVar4 & 0xffff) % 3;
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0x107c) != 0) {
        FUN_00626190(0x12,0,0,0);
        return;
      }
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0x1080) != 0) {
        FUN_00626190(0x10,0,0,0);
        return;
      }
    }
    else if ((uVar4 == 2) && (*(int *)(param_1 + 0x1084) != 0)) {
      FUN_00626190(0x11,0,0,0);
      return;
    }
  }
  iVar3 = FUN_00a82e80();
  if (((iVar3 != 0) && (*(float *)(param_1 + 0x18f4) < 0.0)) &&
     (((*(int *)(param_1 + 0x19c0) == 0 && (12.25 < *(float *)(param_1 + 0xa8c))) ||
      ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)))) {
    FUN_00626190(0x14,0,0,0);
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
  if ((iVar3 != 0) && (*(float *)(param_1 + 0xa8c) < 16.0)) {
    FUN_00626190(0x1000e,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00626190(0x1000f,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (4.0 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    FUN_00626190(0x1000d,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(int *)(param_1 + 0x19c0) != 0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0x1084) != 0) {
        uVar5 = 0x11;
        goto LAB_00646ca9;
      }
    }
    else if (*(int *)(param_1 + 0x1080) != 0) {
      uVar5 = 0x10;
LAB_00646ca9:
      FUN_00626190(uVar5,0,0,0);
    }
  }
  if (*(float *)(param_1 + 0xa8c) <= 4.0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
  }
  if ((((36.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
      (*(int *)(param_1 + 0x19c0) != 0)) ||
     ((100.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
    FUN_00626190(0x13,0,0,0);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xea4) >> 0x16 & 1;
  if (uVar4 != 0) {
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      FUN_00626190(0x18,0,0,0);
      return;
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00646dcd:
      FUN_00626190(0x16,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      FUN_00626190(0x17,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00646dcd;
  }
  if ((*(int *)(param_1 + 0x1494) == 0) || (*(int *)(param_1 + 0x19c0) == 0)) {
    if ((uVar4 != 0) && ((*(float *)(param_1 + 0x920) < 0.0 || (*(int *)(param_1 + 0x19c0) == 0))))
    {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (*(int *)(param_1 + 0x1084) == 0) {
          return;
        }
        FUN_00626190(0x11,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x1080) == 0) {
        return;
      }
      FUN_00626190(0x10,0,0,0);
      return;
    }
    if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
       (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3(), iVar3 != 0)) {
      FUN_00626190(0x1000c,0,0,0);
    }
    fVar1 = *(float *)(param_1 + 0x924);
    if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
      iVar3 = FUN_00464930();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xdb0) = 1;
      }
      *(undefined4 *)(param_1 + 0x924) = 0;
    }
LAB_00646f69:
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
      FUN_00626e00(0xffffffff);
    }
    return;
  }
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,2);
  FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
  if (*(int *)(param_1 + 0x1498) != 0) {
    sVar2 = FUN_00dde2a0(0,2);
    if (sVar2 == 0) {
      uVar5 = 0x1000d;
    }
    else if (sVar2 == 1) {
      uVar5 = 0x110001;
    }
    else {
      if (sVar2 != 2) goto LAB_00646e72;
      uVar5 = 0x1000f;
    }
    FUN_00626190(uVar5,0,0,0);
  }
LAB_00646e72:
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
  if (iVar3 == 0) {
    return;
  }
  FUN_00626190(0x10008,0,0,0);
  return;
}

// 00646FA0  FUN_00646fa0  size=1070  [callgraph]
void __fastcall FUN_00646fa0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00626190(0x1000e,0,0,0);
        FUN_00c27260(param_1[0x66d]);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00626190(0x1000f,0,0,0);
          FUN_00c27260(param_1[0x66d]);
        }
        if (4.0 <= (float)param_1[0x2a3]) {
          return;
        }
        FUN_00626190(0x1000d,0,0,0);
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x526] != 0) {
          sVar2 = FUN_00dde2a0(0,2);
          if (sVar2 == 0) {
            uVar4 = 0x1000d;
          }
          else if (sVar2 == 1) {
            uVar4 = 0x110001;
          }
          else {
            if (sVar2 != 2) goto LAB_006471bc;
            uVar4 = 0x1000f;
          }
          FUN_00626190(uVar4,0,0,0);
        }
LAB_006471bc:
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
        if (iVar3 == 0) {
          return;
        }
        FUN_00626190(0x10008,0,0,0);
        return;
      }
      iVar3 = FUN_00a82e80();
      if (((iVar3 != 0) && ((param_1[0x3a9] & 0x400000U) != 0)) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) {
LAB_0064723d:
        FUN_00626190(0x13,0,0,0);
        return;
      }
      if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
        if (param_1[0x670] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_006472cd;
        }
      }
      else if (param_1[0x670] != 0) goto LAB_0064723d;
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          FUN_00626190(0x11,0,0,0);
        }
        else {
          FUN_00626190(0x10,0,0,0);
        }
      }
    }
  }
LAB_006472cd:
  if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x006472ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00626e00(0xffffffff);
    }
  }
  else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_00626190(0x1000d,0,0,0);
      return;
    }
    if (sVar2 == 1) {
      FUN_00626190(0x1000f,0,0,0);
      return;
    }
  }
  return;
}

// 006473D0  FUN_006473d0  size=1013  [callgraph]
void __fastcall FUN_006473d0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x420] == 0) {
                    /* WARNING: Could not recover jumptable at 0x006473f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00626190(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00626190(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00626190(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if (param_1[0x525] == 0) {
        if (param_1[0x670] == 0) goto LAB_006475d6;
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
      }
      else {
        if (param_1[0x670] != 0) {
          param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
          if (param_1[0x526] == 0) {
            return;
          }
          uVar4 = FUN_00dde2a0(0,2);
          if ((uVar4 & 0xffff) == 0) goto LAB_006475b9;
          uVar4 = (uVar4 & 0xffff) - 1;
          if (uVar4 == 0) {
            FUN_00626190(0x110001,0,0,0);
            return;
          }
          goto LAB_0064776b;
        }
LAB_006475d6:
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if (60.0 < (float)param_1[0x244] + fVar1) {
          sVar2 = FUN_00dde2d0(0,1);
          if ((sVar2 == 0) || (param_1[0x420] == 0)) {
            if (param_1[0x421] != 0) {
              FUN_00626190(0x1b,0,0,0);
            }
          }
          else {
            FUN_00626190(0x1a,0,0,0);
          }
        }
      }
      if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
         (param_1[0x670] != 0)) {
LAB_006476d6:
        FUN_00626190(0x13,0,0,0);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         ((float)param_1[0x2a8] < 0.7853982)) {
        if (param_1[0x670] != 0) goto LAB_006476d6;
        goto LAB_0064777f;
      }
    }
  }
  if ((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x526] == 0) {
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
LAB_006475b9:
      FUN_00626190(0x1000d,0,0,0);
      return;
    }
LAB_0064776b:
    if (uVar4 != 1) {
      return;
    }
    FUN_00626190(0x1000f,0,0,0);
    return;
  }
LAB_0064777f:
  if (param_1[0x420] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
    return;
  }
  if (1.3962634 <= (float)param_1[0x2a8]) {
    return;
  }
  FUN_00626e00(0xffffffff);
  return;
}

// 006477D0  FUN_006477d0  size=1013  [callgraph]
void __fastcall FUN_006477d0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x421] == 0) {
                    /* WARNING: Could not recover jumptable at 0x006477f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00626190(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00626190(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00626190(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if (param_1[0x525] == 0) {
        if (param_1[0x670] == 0) goto LAB_006479d6;
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
      }
      else {
        if (param_1[0x670] != 0) {
          param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00626190(sVar2 + 0x19,uVar5,uVar6,uVar7);
          if (param_1[0x526] == 0) {
            return;
          }
          uVar4 = FUN_00dde2a0(0,2);
          if ((uVar4 & 0xffff) == 0) goto LAB_006479b9;
          uVar4 = (uVar4 & 0xffff) - 1;
          if (uVar4 == 0) {
            FUN_00626190(0x110001,0,0,0);
            return;
          }
          goto LAB_00647b6b;
        }
LAB_006479d6:
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if (60.0 < (float)param_1[0x244] + fVar1) {
          sVar2 = FUN_00dde2d0(0,1);
          if ((sVar2 == 0) || (param_1[0x420] == 0)) {
            if (param_1[0x421] != 0) {
              FUN_00626190(0x1b,0,0,0);
            }
          }
          else {
            FUN_00626190(0x1a,0,0,0);
          }
        }
      }
      if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
         (param_1[0x670] != 0)) {
LAB_00647ad6:
        FUN_00626190(0x13,0,0,0);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         ((float)param_1[0x2a8] < 0.7853982)) {
        if (param_1[0x670] != 0) goto LAB_00647ad6;
        goto LAB_00647b7f;
      }
    }
  }
  if ((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x526] == 0) {
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
LAB_006479b9:
      FUN_00626190(0x1000d,0,0,0);
      return;
    }
LAB_00647b6b:
    if (uVar4 != 1) {
      return;
    }
    FUN_00626190(0x1000f,0,0,0);
    return;
  }
LAB_00647b7f:
  if (param_1[0x421] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
    return;
  }
  if (1.3962634 <= (float)param_1[0x2a8]) {
    return;
  }
  FUN_00626e00(0xffffffff);
  return;
}

// 00647BD0  FUN_00647bd0  size=868  [callgraph]
void __fastcall FUN_00647bd0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00647bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00621140();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00626190(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00626190(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00626190(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00626190(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00626190(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         (((float)param_1[0x2a8] < 0.7853982 && (param_1[0x670] != 0)))) {
        FUN_00626190(0x13,0,0,0);
        return;
      }
      if (param_1[0x525] != 0) {
        if (param_1[0x670] != 0) {
          param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00626190(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (param_1[0x526] != 0) {
            sVar2 = FUN_00dde2a0(0,2);
            if (sVar2 == 0) {
              uVar4 = 0x1000d;
            }
            else if (sVar2 == 1) {
              uVar4 = 0x110001;
            }
            else {
              if (sVar2 != 2) goto LAB_00647e1b;
              uVar4 = 0x1000f;
            }
            FUN_00626190(uVar4,0,0,0);
          }
LAB_00647e1b:
          iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_2();
          if (iVar3 == 0) {
            return;
          }
          FUN_00626190(0x10008,0,0,0);
          return;
        }
        goto LAB_00647eee;
      }
    }
  }
  if ((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) {
    if (param_1[0x526] == 0) {
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
      FUN_00626190(0x1000d,0,0,0);
      return;
    }
    if (sVar2 != 1) {
      return;
    }
    FUN_00626190(0x1000f,0,0,0);
    return;
  }
LAB_00647eee:
  if (param_1[0x41f] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
    FUN_00626e00(0xffffffff);
  }
  return;
}

// 00647F40  FUN_00647f40  size=952  [callgraph]
void __fastcall FUN_00647f40(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    iVar3 = FUN_0061c470();
    if (iVar3 == 0) {
      iVar3 = FUN_0061c320();
      if (iVar3 != 0) {
        FUN_00626190(0x120004,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      iVar3 = FUN_0061c3b0();
      if (iVar3 != 0) {
        FUN_00626190(0x120001,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
        if (param_1[0x688] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00626190(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00626190(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_3();
        if (iVar3 != 0) {
          FUN_00626190(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x11;
        }
        else {
          uVar4 = 0x10;
        }
        FUN_00626190(uVar4,0,0,0);
      }
      iVar3 = FUN_0063f1c0();
      if (iVar3 == 0) {
        iVar3 = FUN_00621140();
        if (iVar3 != 0) {
          FUN_00a81330();
          iVar3 = FUN_00a7c8a0();
          param_1[600] = *(int *)(iVar3 + 0x40);
          param_1[0x259] = *(int *)(iVar3 + 0x44);
          param_1[0x25a] = *(int *)(iVar3 + 0x48);
          param_1[0x25b] = *(int *)(iVar3 + 0x4c);
          param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
          FUN_00626190(0x19,0,0,0);
          return;
        }
        if (param_1[0x187] != 0) {
          if (((param_1[0x2a1] != 0) &&
              (iVar3 = lib::Array<Entity*>::Array<Entity*>_2(), iVar3 != 0)) &&
             ((float)param_1[0x2a3] < 16.0)) {
            FUN_00626190(0x1000e,0,0,0);
            if ((float)param_1[0x2a3] < 12.25) {
              FUN_00626190(0x1000f,0,0,0);
            }
            if ((float)param_1[0x2a3] < 6.25) {
              FUN_00626190(0x1000d,0,0,0);
            }
            FUN_00c27260(param_1[0x66d]);
            return;
          }
          if (param_1[0x670] == 0) {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
            if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                FUN_00626190(0x11,0,0,0);
              }
              else {
                FUN_00626190(0x10,0,0,0);
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
        if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
          if (((float)param_1[0x2a3] < 4.0) && ((float)param_1[0x2a5] < 2.0)) {
                    /* WARNING: Could not recover jumptable at 0x006482f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
                 (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
          sVar2 = FUN_00dde2a0(0,1);
          if (sVar2 == 0) {
            FUN_00626190(0x1000d,0,0,0);
            return;
          }
          if (sVar2 == 1) {
            FUN_00626190(0x1000f,0,0,0);
            return;
          }
        }
      }
    }
    else {
      FUN_00626190(0x120000,0,0,0);
      param_1[0x6e3] = -1;
    }
  }
  return;
}

// 00648300  FUN_00648300  size=1049  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0064838e) */

void __fastcall FUN_00648300(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x105c) == 0) {
    FUN_00626190(0x7000b,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
  if (((iVar3 == 0) || (*(int *)(param_1 + 0x14ac) != 1)) || (*(int *)(param_1 + 0x1488) == 0)) {
LAB_00648402:
    if ((((64.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
        (*(int *)(param_1 + 0x19c0) != 0)) ||
       ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    if ((((*(float *)(param_1 + 0xa8c) <= 25.0) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
        (*(int *)(param_1 + 0x14ac) != 1)) || (*(int *)(param_1 + 0x1488) == 0)) {
      if (((9.0 <= *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
         ((*(int *)(param_1 + 0x14ac) != 1 || (*(int *)(param_1 + 0x1488) == 0)))) {
        if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
          FUN_00626190(0x18,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) <= 2.1816616) {
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00626190(0x17,0,0,0);
          }
          if (-2.1816616 <= *(float *)(param_1 + 0xa9c)) {
            if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x19c0) == 0)) {
              sVar2 = FUN_00dde2d0(0,2);
              if (sVar2 == 0) {
                if (*(int *)(param_1 + 0x1080) != 0) {
                  FUN_00626190(0x10,0,0,0);
                  return;
                }
              }
              else if (sVar2 == 1) {
                if (*(int *)(param_1 + 0x1084) != 0) {
                  FUN_00626190(0x11,0,0,0);
                  return;
                }
              }
              else if ((sVar2 == 2) && (*(int *)(param_1 + 0x107c) != 0)) {
                FUN_00626190(0x12,0,0,0);
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
        FUN_00626190(0x16,0,0,0);
        return;
      }
      FUN_00626190(0x12,0,0,0);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 != 0) {
        return;
      }
      iVar3 = FUN_00c15850();
      if (iVar3 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x19b8) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x19c0) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0xbe8) != 0) {
        return;
      }
      if (*(float *)(param_1 + 0xaa0) <= 1.0471976) goto LAB_006485dc;
      goto LAB_006485ca;
    }
    FUN_00626190(0xf,0,0,0);
    sVar2 = FUN_00dde2d0(0,3);
    if ((((sVar2 != 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (*(int *)(param_1 + 0x19b8) == 0)
        ) || ((*(int *)(param_1 + 0x19c0) == 0 || (*(int *)(param_1 + 0xbe8) != 0)))) {
      return;
    }
    uVar5 = 0x10002;
  }
  else {
    if ((25.0 <= *(float *)(param_1 + 0xa8c)) || (uVar4 = FUN_00dde2a0(1,100), (uVar4 & 3) != 0)) {
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      goto LAB_00648402;
    }
    FUN_00626190(0x10002,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (6.25 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (*(float *)(param_1 + 0xaa0) <= 1.0471976) {
      return;
    }
LAB_006485ca:
    uVar5 = 0x70008;
  }
  FUN_00626190(uVar5,0,0,0);
LAB_006485dc:
  FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
  return;
}

// 00648720  FUN_00648720  size=486  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0064878f) */

void __fastcall FUN_00648720(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_2();
    if ((iVar3 != 0) && ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))) {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(1,100), (uVar4 & 3) == 0)) {
        FUN_00626190(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
          FUN_00626190(0x70008,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      FUN_00c27260(param_1[0x66d]);
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_006488e2;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00626190(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x421] != 0) {
          FUN_00626190(0x11,0,0,0);
        }
      }
      else if (param_1[0x420] != 0) {
        FUN_00626190(0x10,0,0,0);
      }
    }
  }
LAB_006488e2:
  if (16.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00648904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00648910  FUN_00648910  size=213  [callgraph]
void __fastcall FUN_00648910(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((((param_1[0x2a1] != 0) && (iVar1 = lib::Array<Entity*>::Array<Entity*>_2(), iVar1 != 0)) &&
        (param_1[0x52b] == 1)) && (param_1[0x522] != 0)) {
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00626190(0x70008,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      FUN_00c27260(param_1[0x66d]);
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x006489cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if (param_1[0x41f] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006489e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006489F0  FUN_006489f0  size=256  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00648a5f) */

void __fastcall FUN_006489f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) &&
      (iVar1 = lib::Array<Entity*>::Array<Entity*>_2(), iVar1 != 0)) &&
     ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))) {
    if (((float)param_1[0x2a3] < 36.0) && (uVar2 = FUN_00dde2a0(1,100), (uVar2 & 3) == 0)) {
      FUN_00626190(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
        FUN_00626190(0x70008,0,0,0);
      }
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    FUN_00c27260(param_1[0x66d]);
  }
  if (param_1[0x420] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00648aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00648AF0  FUN_00648af0  size=256  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00648b5f) */

void __fastcall FUN_00648af0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) &&
      (iVar1 = lib::Array<Entity*>::Array<Entity*>_2(), iVar1 != 0)) &&
     ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))) {
    if (((float)param_1[0x2a3] < 36.0) && (uVar2 = FUN_00dde2a0(1,100), (uVar2 & 3) == 0)) {
      FUN_00626190(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
        FUN_00626190(0x70008,0,0,0);
      }
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    FUN_00c27260(param_1[0x66d]);
  }
  if (param_1[0x421] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00648bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00648C00  Em8010::vf32C  size=956  [class]
undefined4 __fastcall Em8010::vf32C(int *param_1)

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
  int local_194;
  undefined1 auStack_170 [16];
  undefined1 local_160 [16];
  undefined1 uStack_150;
  float fStack_130;
  uint uStack_d0;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if ((param_1[0x3aa] & 0x8000000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] & 0xf7ffffff;
    return 0;
  }
  iVar14 = FUN_00a8c240();
  if ((iVar14 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
    iVar14 = FUN_00a8ef10();
    if (iVar14 == 0) {
      iVar14 = FUN_00a8c760(9);
      if (((iVar14 == 0) && ((param_1[0x3aa] & 0x800U) == 0)) &&
         ((param_1[0x186] & 0xffff0000U) != 0x100000)) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
        if (param_1[0x286] != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        param_1[0x51d] = 0;
        piVar17 = (int *)param_1[0x19f];
        piVar16 = piVar17 + param_1[0x1a1] * 0x54;
        FUN_00445db0();
        local_194 = -1;
        bVar13 = false;
        if (piVar17 != piVar16) {
          do {
            if (*piVar17 != 0x147) {
              if (*piVar17 == 0x1b0) {
                (**(code **)(*param_1 + 0x370))(piVar17);
              }
              else if (local_194 <= piVar17[1]) {
                bVar13 = true;
                FUN_00448f50(piVar17);
                local_194 = piVar17[1];
              }
            }
            piVar17 = piVar17 + 0x54;
          } while (piVar17 != piVar16);
          if (bVar13) {
            iVar14 = FUN_00a8f040(local_160);
            if (iVar14 == 0) {
              param_1[0x3aa] = param_1[0x3aa] & 0xffbfffff;
              param_1[0x3a9] = param_1[0x3a9] & 0xf7ffffff;
              param_1[0x3aa] = param_1[0x3aa] & 0xfffffbff;
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
                  if (fVar9 * (fVar3 - fVar6) + fVar8 * (fVar1 - fVar4) + fVar7 * (fVar2 - fVar5) <=
                      0.0) {
                    param_1[0x527] = 1;
                  }
                  else {
                    param_1[0x527] = 0;
                  }
                }
                else {
                  param_1[0x527] = 2;
                }
              }
              else {
                param_1[0x527] = 3;
              }
              fVar19 = (float10)FUN_00ddba30(fStack_130 - (float)param_1[0x25]);
              param_1[0x245] = (int)(float)fVar19;
              iVar14 = FUN_00621a30(local_160);
              if (iVar14 == 0) {
                iVar14 = FUN_00a8c760(0x34);
                if ((iVar14 == 0) && (param_1[0x186] != 0x100001)) {
                  if (param_1[0x139] == 0) {
                    iVar14 = FUN_00416910(6);
                    if ((iVar14 != 0) && ((uStack_d0 & 0x10000) != 0)) {
                      param_1[0x3aa] = param_1[0x3aa] | 0x1000;
                    }
                    uVar18 = FUN_0063f4b0(local_160);
                    if (param_1[0x286] != 0) {
                      LeaveCriticalSection(lpCriticalSection);
                    }
                    return uVar18;
                  }
                  FUN_0063cd20(local_160);
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
        }
        if (param_1[0x286] != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 00648FC0  FUN_00648fc0  size=878  [between]
/* WARNING: Switch with 1 destination removed at 0x006491ad : 19 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x006492c1 : 11 cases all go to same destination */

void __fastcall FUN_00648fc0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    case 2:
      FUN_0062da00();
      FUN_00620cd0();
      return;
    case 3:
      FUN_0062db70();
      FUN_00620cd0();
      return;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 8:
      FUN_00617480();
      FUN_00620cd0();
      return;
    case 9:
      FUN_00617690();
      FUN_00620cd0();
      return;
    case 10:
      FUN_0062d620();
      FUN_00620cd0();
      return;
    case 0xb:
      FUN_0062e6d0();
      FUN_00620cd0();
      return;
    case 0xc:
      FUN_0062e7b0();
      FUN_00620cd0();
      return;
    case 0xd:
      FUN_0061d780();
      FUN_00620cd0();
      return;
    case 0xe:
      FUN_00641f50();
      FUN_00620cd0();
      return;
    case 0xf:
      FUN_00642590();
      FUN_00620cd0();
      return;
    case 0x10:
      FUN_00642980();
      FUN_00620cd0();
      return;
    case 0x11:
      FUN_00642d40();
      FUN_00620cd0();
      return;
    case 0x12:
      FUN_00643100();
      FUN_00620cd0();
      return;
    case 0x13:
      FUN_00643470();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x16:
      FUN_0062eee0();
      FUN_00620cd0();
      return;
    case 0x17:
      FUN_0062f120();
      FUN_00620cd0();
      return;
    case 0x18:
      FUN_0062f320();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  else if (0x20009 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_00628300();
        FUN_00620cd0();
        return;
      }
      FUN_00620cd0();
      return;
    }
    if (iVar1 < 0xb0001) {
      switch(iVar1) {
      default:
        goto switchD_00648fef_caseD_15;
      case 0xa0004:
        FUN_0061cb70();
        FUN_00620cd0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00628fe0();
        FUN_00620cd0();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cb90();
        FUN_00620cd0();
        return;
      case 0xa0007:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00629350();
        FUN_00620cd0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cbb0();
        FUN_00620cd0();
        return;
      case 0xa000a:
        FUN_00629660();
        FUN_00620cd0();
        return;
      case 0xa0013:
      case 0xa0019:
        FUN_0061cc40();
        FUN_00620cd0();
        return;
      case 0xa0014:
        goto switchD_006491ff_caseD_a0014;
      }
    }
    if (0x100000 < iVar1) {
      if (iVar1 < 0x110001) {
        if (iVar1 != 0x110000) {
          switch(iVar1) {
          case 0x100003:
            FUN_0062cbe0();
            FUN_00620cd0();
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
            goto switchD_006491ff_caseD_a0014;
          default:
            goto switchD_00648fef_caseD_15;
          }
        }
        if (iVar1 != 0x120000) {
          FUN_00620cd0();
          return;
        }
switchD_006491ff_caseD_a0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
  }
switchD_00648fef_caseD_15:
  FUN_00620cd0();
  return;
}

// 00649470  FUN_00649470  size=705  [between]
void __fastcall FUN_00649470(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000b) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    case 2:
      FUN_0062da00();
      FUN_00620cd0();
      return;
    case 3:
      FUN_0062db70();
      FUN_00620cd0();
      return;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 8:
      FUN_00617480();
      FUN_00620cd0();
      return;
    case 9:
      FUN_00617690();
      FUN_00620cd0();
      return;
    case 10:
      FUN_0062d620();
      FUN_00620cd0();
      return;
    case 0xb:
      FUN_00632d30();
      FUN_00620cd0();
      return;
    case 0xc:
      FUN_0062e7b0();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      if ((param_1[0x187] == 0) && (iVar1 = FUN_00627070(), iVar1 != 0)) {
        FUN_00626190(0x110001,0,0,0);
        FUN_00620cd0();
        return;
      }
    }
    else if (iVar1 < 0x20001) {
      if (iVar1 == 0x20000) {
        FUN_00643970();
        FUN_00620cd0();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x20001:
      case 0x20002:
      case 0x20003:
      case 0x20004:
        FUN_0063e240();
        FUN_00620cd0();
        return;
      case 0x20005:
        FUN_00643e20();
        FUN_00620cd0();
        return;
      case 0x20006:
      case 0x20007:
      case 0x20008:
        FUN_00632e30();
        FUN_00620cd0();
        return;
      }
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_0061cb70();
      FUN_00620cd0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00628fe0();
      FUN_00620cd0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cb90();
      FUN_00620cd0();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00629350();
      FUN_00620cd0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cbb0();
      FUN_00620cd0();
      return;
    case 0xa000a:
      FUN_00629660();
      FUN_00620cd0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0061cc40();
      break;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00620cd0();
      return;
    }
  }
  FUN_00620cd0();
  return;
}

// 00649830  FUN_00649830  size=677  [between]
void __fastcall FUN_00649830(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000d) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    case 2:
      FUN_0062da00();
      FUN_00620cd0();
      return;
    case 3:
      FUN_0062db70();
      FUN_00620cd0();
      return;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 10:
      FUN_0062d620();
      FUN_00620cd0();
      return;
    case 0xb:
      FUN_00633ac0();
      FUN_00620cd0();
      return;
    case 0xc:
      FUN_0062e7b0();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      if ((param_1[0x187] == 0) && (iVar1 = FUN_00627070(), iVar1 != 0)) {
        FUN_00626190(0x110001,0,0,0);
        FUN_00620cd0();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x30000:
        FUN_00644100();
        FUN_00620cd0();
        return;
      case 0x30001:
      case 0x30002:
      case 0x30003:
      case 0x30004:
        FUN_00633b90();
        FUN_00620cd0();
        return;
      case 0x30005:
        FUN_006445a0();
        FUN_00620cd0();
        return;
      case 0x30006:
      case 0x30007:
      case 0x30008:
        FUN_00633d30();
        FUN_00620cd0();
        return;
      case 0x3000b:
        FUN_00634110();
        FUN_00620cd0();
        return;
      }
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_0061cb70();
      FUN_00620cd0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00628fe0();
      FUN_00620cd0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cb90();
      FUN_00620cd0();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00629350();
      FUN_00620cd0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cbb0();
      FUN_00620cd0();
      return;
    case 0xa000a:
      FUN_00629660();
      FUN_00620cd0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0061cc40();
      break;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00620cd0();
      return;
    }
  }
  FUN_00620cd0();
  return;
}

// 00649BC0  FUN_00649bc0  size=806  [between]
/* WARNING: Switch with 1 destination removed at 0x00649d65 : 20 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00649e83 : 11 cases all go to same destination */

void __fastcall FUN_00649bc0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    case 2:
      FUN_0062da00();
      FUN_00620cd0();
      return;
    case 3:
      FUN_0062db70();
      FUN_00620cd0();
      return;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 10:
      FUN_0062d620();
      FUN_00620cd0();
      return;
    case 0xb:
      FUN_0062e6d0();
      FUN_00620cd0();
      return;
    case 0xc:
      FUN_0062e7b0();
      FUN_00620cd0();
      return;
    case 0xd:
      FUN_0061d780();
      FUN_00620cd0();
      return;
    case 0xe:
      FUN_00644850();
      FUN_00620cd0();
      return;
    case 0xf:
      FUN_00644ca0();
      FUN_00620cd0();
      return;
    case 0x10:
      FUN_00644f60();
      FUN_00620cd0();
      return;
    case 0x11:
      FUN_00645240();
      FUN_00620cd0();
      return;
    case 0x12:
      FUN_00645520();
      FUN_00620cd0();
      return;
    case 0x13:
      FUN_00645790();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (((iVar1 == 0xa0000) && (param_1[0x187] == 0)) && (iVar1 = FUN_00627070(), iVar1 != 0)) {
      FUN_00626190(0x110001,0,0,0);
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_0061cb70();
      FUN_00620cd0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00628fe0();
      FUN_00620cd0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cb90();
      FUN_00620cd0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cbb0();
      FUN_00620cd0();
      return;
    case 0xa000a:
      FUN_00629660();
      FUN_00620cd0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0061cc40();
      FUN_00620cd0();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00620cd0();
      return;
    }
  }
  else if (0xd0000 < iVar1) {
    if (iVar1 < 0x110001) {
      if (((iVar1 != 0x110000) && (iVar1 < 0x100001)) && (iVar1 != 0x100000)) {
        FUN_00620cd0();
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
          goto switchD_00649ec9_caseD_120001;
        default:
          goto switchD_00649bf6_caseD_8;
        }
      }
      if (iVar1 != 0x120000) {
        FUN_00620cd0();
        return;
      }
switchD_00649ec9_caseD_120001:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
switchD_00649bf6_caseD_8:
  FUN_00620cd0();
  return;
}

// 0064A000  FUN_0064a000  size=811  [between]
/* WARNING: Switch with 1 destination removed at 0x0064a1a5 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0064a2e0 : 11 cases all go to same destination */

void __fastcall FUN_0064a000(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10009) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    case 2:
      FUN_0062da00();
      FUN_00620cd0();
      return;
    case 3:
      FUN_0062db70();
      FUN_00620cd0();
      return;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 10:
      FUN_0062d620();
      FUN_00620cd0();
      return;
    case 0xb:
      FUN_0062e6d0();
      FUN_00620cd0();
      return;
    case 0xc:
      FUN_0062e7b0();
      FUN_00620cd0();
      return;
    case 0xd:
      FUN_0061d780();
      FUN_00620cd0();
      return;
    case 0xe:
      FUN_00645ae0();
      FUN_00620cd0();
      return;
    case 0xf:
      FUN_00645e10();
      FUN_00620cd0();
      return;
    case 0x10:
      FUN_00646050();
      FUN_00620cd0();
      return;
    case 0x11:
      FUN_006462c0();
      FUN_00620cd0();
      return;
    case 0x12:
      FUN_00646530();
      FUN_00620cd0();
      return;
    case 0x13:
      FUN_00646720();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (((iVar1 == 0xa0000) && (param_1[0x187] == 0)) && (iVar1 = FUN_00627070(), iVar1 != 0)) {
      FUN_00626190(0x110001,0,0,0);
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0004:
      FUN_0061cb70();
      FUN_00620cd0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00628fe0();
      FUN_00620cd0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cb90();
      FUN_00620cd0();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00629350();
      FUN_00620cd0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0061cbb0();
      FUN_00620cd0();
      return;
    case 0xa000a:
      FUN_00629660();
      FUN_00620cd0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0061cc40();
      FUN_00620cd0();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00620cd0();
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
        goto switchD_0064a30e_caseD_120001;
      default:
        goto switchD_0064a036_caseD_8;
      }
    }
    if (iVar1 != 0x120000) {
      FUN_00620cd0();
      return;
    }
switchD_0064a30e_caseD_120001:
    (**(code **)(*param_1 + 0x1d4))(1);
  }
switchD_0064a036_caseD_8:
  FUN_00620cd0();
  return;
}

// 0064A440  FUN_0064a440  size=779  [between]
/* WARNING: Switch with 1 destination removed at 0x0064a6de : 11 cases all go to same destination */

void __fastcall FUN_0064a440(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10009) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    case 2:
      FUN_0062da00();
      FUN_00620cd0();
      return;
    case 3:
      FUN_0062db70();
      FUN_00620cd0();
      return;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 10:
      FUN_0062d620();
      FUN_00620cd0();
      return;
    case 0xb:
      FUN_0062e6d0();
      FUN_00620cd0();
      return;
    case 0xc:
      FUN_0062e7b0();
      FUN_00620cd0();
      return;
    case 0xd:
      FUN_0061d780();
      FUN_00620cd0();
      return;
    case 0xe:
      FUN_006469f0();
      FUN_00620cd0();
      return;
    case 0xf:
      FUN_00646fa0();
      FUN_00620cd0();
      return;
    case 0x10:
      FUN_006473d0();
      FUN_00620cd0();
      return;
    case 0x11:
      FUN_006477d0();
      FUN_00620cd0();
      return;
    case 0x12:
      FUN_00647bd0();
      FUN_00620cd0();
      return;
    case 0x13:
      FUN_00647f40();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 != 0xa0000) {
      FUN_00620cd0();
      return;
    }
    if ((param_1[0x187] == 0) && (iVar1 = FUN_00627070(), iVar1 != 0)) {
      FUN_00626190(0x110001,0,0,0);
      FUN_00620cd0();
      return;
    }
  }
  else {
    if (iVar1 < 0xb0001) {
      switch(iVar1) {
      default:
        goto switchD_0064a476_caseD_8;
      case 0xa0004:
        FUN_0061cb70();
        FUN_00620cd0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00628fe0();
        FUN_00620cd0();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cb90();
        FUN_00620cd0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cbb0();
        FUN_00620cd0();
        return;
      case 0xa000a:
        FUN_00629660();
        FUN_00620cd0();
        return;
      case 0xa0013:
      case 0xa0019:
        FUN_0061cc40();
        FUN_00620cd0();
        return;
      case 0xa0014:
        goto switchD_0064a639_caseD_a0014;
      }
    }
    if (0x100000 < iVar1) {
      if (iVar1 < 0x110001) {
        if (iVar1 != 0x110000) {
          switch(iVar1) {
          case 0x100003:
            FUN_0062cbe0();
            FUN_00620cd0();
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
            goto switchD_0064a639_caseD_a0014;
          default:
            goto switchD_0064a476_caseD_8;
          }
        }
        if (iVar1 != 0x120000) {
          FUN_00620cd0();
          return;
        }
switchD_0064a639_caseD_a0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
  }
switchD_0064a476_caseD_8:
  FUN_00620cd0();
  return;
}

// 0064A850  FUN_0064a850  size=614  [between]
void __fastcall FUN_0064a850(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (0x70000 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        if ((param_1[0x187] == 0) && (iVar1 = FUN_00627070(), iVar1 != 0)) {
          FUN_00626190(0x110001,0,0,0);
          FUN_00620cd0();
          return;
        }
      }
      else {
        switch(iVar1) {
        case 0x7000b:
          FUN_006253c0();
          FUN_00620cd0();
          return;
        }
      }
    }
    else if (iVar1 < 0xb0005) {
      switch(iVar1) {
      case 0xa0004:
        FUN_0061cb70();
        FUN_00620cd0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_00628fe0();
        FUN_00620cd0();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cb90();
        FUN_00620cd0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0061cbb0();
        FUN_00620cd0();
        return;
      case 0xa000a:
        FUN_00629660();
        FUN_00620cd0();
        return;
      case 0xa0013:
        FUN_0061cc40();
        FUN_00620cd0();
        return;
      case 0xa0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
switchD_0064a886_caseD_2:
    FUN_00620cd0();
    return;
  }
  if (iVar1 != 0x70000) {
    switch(iVar1) {
    case 0:
      FUN_0062d140();
      FUN_00620cd0();
      return;
    case 1:
      FUN_0062d3f0();
      FUN_00620cd0();
      return;
    default:
      goto switchD_0064a886_caseD_2;
    case 4:
      FUN_0062dc90();
      FUN_00620cd0();
      return;
    case 5:
      FUN_0062e0c0();
      FUN_00620cd0();
      return;
    case 6:
      FUN_0062e100();
      FUN_00620cd0();
      return;
    case 7:
      FUN_0062d6c0();
      FUN_00620cd0();
      return;
    case 0xb:
      break;
    case 0xe:
      FUN_00648300();
      FUN_00620cd0();
      return;
    case 0xf:
      FUN_00648720();
      FUN_00620cd0();
      return;
    case 0x10:
      FUN_006489f0();
      FUN_00620cd0();
      return;
    case 0x11:
      FUN_00648af0();
      FUN_00620cd0();
      return;
    case 0x12:
      FUN_00648910();
      FUN_00620cd0();
      return;
    case 0x13:
      FUN_006385c0();
      FUN_00620cd0();
      return;
    case 0x14:
      FUN_006437f0();
      FUN_00620cd0();
      return;
    case 0x1e:
      FUN_00632200();
      FUN_00620cd0();
      return;
    case 0x22:
      FUN_006323e0();
      FUN_00620cd0();
      return;
    case 0x25:
      FUN_006183c0();
      FUN_00620cd0();
      return;
    }
  }
  FUN_00638540();
  FUN_00620cd0();
  return;
}

// 0064AB80  FUN_0064ab80  size=313  [between]
void __fastcall FUN_0064ab80(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = (**(code **)(*param_1 + 0x274))();
  if (iVar2 == 0) {
    param_1[0x69e] = 0;
    param_1[0x3a9] = param_1[0x3a9] & 0xfefffffd;
    if (param_1[0x286] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
    }
    if (param_1[0x605] == 1) {
      FUN_0063e4b0();
    }
    else if (param_1[0x605] == 2) {
      FUN_0063e580();
    }
    else {
      (**(code **)(*param_1 + 0x1f0))(1);
      uVar1 = param_1[0x3ab];
      if ((uVar1 & 0x2000) == 0) {
        if ((uVar1 & 0x8000) == 0) {
          if ((char)uVar1 < '\0') {
            FUN_0063f230();
          }
          else {
            if (param_1[0x52b] == 0) {
              FUN_00648fc0();
            }
            if (param_1[0x52b] == 1) {
              FUN_00648fc0();
            }
            if (param_1[0x52b] == 2) {
              FUN_00649470();
            }
            if (param_1[0x52b] == 3) {
              FUN_00649830();
            }
            if (param_1[0x52b] == 6) {
              FUN_0064a440();
            }
            if (param_1[0x52b] == 7) {
              FUN_00649bc0();
            }
            if (param_1[0x52b] == 5) {
              FUN_0064a000();
            }
          }
        }
        else {
          FUN_0064a850();
        }
      }
      else {
        param_1[0x3a9] = param_1[0x3a9] | 0x1000000;
        FUN_006447c0();
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
    }
  }
  return;
}

// 0064ACC0  Em8010::vf4C  size=1402  [class]
void __fastcall Em8010::vf4C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  uint uStack_198;
  undefined1 auStack_190 [396];
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfffff1ff;
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xffdfffff;
    FUN_00a92fb0();
    fVar8 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar8;
    uVar9 = *(undefined4 *)(param_1 + 0x4f0);
    uVar11 = 0x40800000;
    iVar7 = 0;
    uVar10 = 0x3f860a92;
    *(undefined4 *)(param_1 + 0x1494) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x94);
    uVar2 = FUN_00ac45b0(uVar9,uVar3,0x3f860a92,0x40800000);
    uVar3 = lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4(uVar2,uVar9,uVar3,uVar10,uVar11)
    ;
    *(undefined4 *)(param_1 + 0x1494) = uVar3;
    *(undefined4 *)(param_1 + 0x1498) = 0;
    if ((*(int *)(param_1 + 0xa84) != 0) &&
       ((fVar8 = (float10)FUN_00ddba30(*(float *)(*(int *)(param_1 + 0xa84) + 0x94) -
                                       *(float *)(param_1 + 0x94)), (float10)2.3561945 < fVar8 ||
        (fVar8 < (float10)-2.3561945)))) {
      *(undefined4 *)(param_1 + 0x1498) = 1;
    }
    fVar1 = *(float *)(param_1 + 0x1684);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0x1684) = *(float *)(param_1 + 0x1684) - 1.0;
    }
    if (((*(int *)(param_1 + 0x618) == 0xa000e) && (*(int *)(param_1 + 0xa88) != 0)) &&
       (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar12 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar5 = FUN_00dd6d80(puVar12);
      if ((iVar5 != 0) && (0.0 < (float)piVar4[0x2ed])) {
        *(undefined2 *)(param_1 + 0x81c) = 1;
        *(undefined4 *)(param_1 + 0x820) = 4;
      }
    }
    BehaviorEmBase::vf4C();
    if (*(int *)(param_1 + 0x618) == 0xa0015) {
      *(undefined2 *)(param_1 + 0x824) = 3;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
    iVar5 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3fc90fdb
                         ,0x41200000,0);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x101c) = 0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x101c) + *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x101c) = fVar1;
      if (5.0 < fVar1) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
    }
    FUN_00a7c950();
    iVar5 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3fc90fdb
                         ,0x40200000,1);
    if ((iVar5 != 0) ||
       (iVar5 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),
                             0x40490fdb,0x3fc00000,1), iVar5 != 0)) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    uVar3 = FUN_00c49880(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x102c),2,0);
    *(undefined4 *)(param_1 + 0x1034) = uVar3;
    FUN_00a7c950();
    if (((((*(uint *)(param_1 + 0xea8) & 0x80000) != 0) && (*(int *)(param_1 + 0x618) != 0xb0008))
        && (*(int *)(param_1 + 0x618) != 0xa0020)) &&
       ((iVar5 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),
                              0x3fdf66f3,0x40200000,4), iVar5 != 0 ||
        (iVar5 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),
                              0x3f860a92,0x40a00000,4), iVar5 != 0)))) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_004066f0();
      uStack_1ac = 0x7f7fffee;
      puStack_1a0 = auStack_190;
      ppuStack_1b0 = hkpAllCdPointCollector::vftable;
      uStack_198 = 0x80000008;
      iStack_19c = 0;
      hkpCdPointCollector::hkpCdPointCollector_13(param_1 + 0x50,0,1,&ppuStack_1b0);
      if ((0 < iStack_19c) && (FUN_0112bcf0(), 0 < iStack_19c)) {
        iVar5 = 0;
        do {
          iVar6 = *(int *)(puStack_1a0 + iVar5 + 0x28);
          if ((*(char *)(iVar6 + 0x18) == '\x01') &&
             (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)) {
            FUN_00910a40(iVar6);
            iVar6 = FUN_00915990(9);
            if ((iVar6 == 8) || ((iVar6 == 0x11 || (iVar6 == 0x10)))) {
              *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x200;
            }
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 0x30;
        } while (iVar7 < iStack_19c);
      }
      ppuStack_1b0 = hkpAllCdPointCollector::vftable;
      iStack_19c = 0;
      if (-1 < (int)uStack_198) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_1a0,(uStack_198 & 0x3fffffff) * 0x30);
      }
      puStack_1a0 = (undefined1 *)0x0;
      uStack_198 = 0x80000000;
      ppuStack_1b0 = hkpCdPointCollector::vftable;
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    iVar7 = FUN_00ac4770();
    if (iVar7 == 0) {
      FUN_0064ab80();
    }
    FUN_00640f30();
    *(float *)(param_1 + 0x50) =
         *(float *)(param_1 + 0x1670) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x58) =
         *(float *)(param_1 + 0x1678) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x58);
    fVar8 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1670) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x1670));
    *(float *)(param_1 + 0x1674) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x1674));
    *(float *)(param_1 + 0x1678) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x1678));
    *(float *)(param_1 + 0x167c) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x167c));
    if ((*(char *)(param_1 + 0x1038) == '\x01') &&
       (fVar1 = *(float *)(param_1 + 0x103c) - *(float *)(param_1 + 0x910),
       *(float *)(param_1 + 0x103c) = fVar1, fVar1 < 0.0)) {
      if (*(int *)(param_1 + 0x1040) == 0) {
        FUN_006264e0();
      }
      else {
        FUN_00626420();
      }
      *(undefined1 *)(param_1 + 0x1038) = 0;
    }
    FUN_00632c20();
    FUN_00632c80();
  }
  return;
}

// 00AB4580  Em8010::vf04  size=6  [class]
undefined * Em8010::vf04(void)

{
  return &DAT_01b35540;
}

// 00AB4590  Em8010::vf17C  size=6  [class]
undefined4 Em8010::vf17C(void)

{
  return 1;
}

// 00AB45A0  Em8010::vf180  size=6  [class]
undefined4 Em8010::vf180(void)

{
  return 1;
}

// 00AB45B0  Em8010::vf140  size=39  [class]
float10 Em8010::vf140(void)

{
  int iVar1;
  
  iVar1 = FUN_006210d0();
  if (iVar1 == 0) {
    iVar1 = FUN_006210f0();
    if (iVar1 == 0) {
      return (float10)4.0;
    }
  }
  return (float10)4.8;
}

// 00AB45E0  Em8010::vf144  size=39  [class]
float10 Em8010::vf144(void)

{
  int iVar1;
  
  iVar1 = FUN_006210d0();
  if (iVar1 == 0) {
    iVar1 = FUN_006210f0();
    if (iVar1 == 0) {
      return (float10)4.1;
    }
  }
  return (float10)4.92;
}

// 00AB4610  Em8010::vf20C  size=7  [class]
float10 Em8010::vf20C(void)

{
  return (float10)1.5;
}

// 00AB4620  Em8010::vf1E0  size=36  [class]
void __fastcall Em8010::vf1E0(int param_1)

{
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  return;
}

// 00AB4650  Em8010::vf278  size=17  [class]
void Em8010::vf278(void)

{
  FUN_00626190(0xa0001,0,0,0);
  return;
}

// 00AB4670  Em8010::vf1E8  size=38  [class]
void __fastcall Em8010::vf1E8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x13c0) + 8))(0x41200000,0,0);
  return;
}

// 00AB46A0  Em8010::vf1EC  size=38  [class]
void __fastcall Em8010::vf1EC(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x13c0) + 8))(0x41200000,0,0);
  return;
}

// 00AB46D0  Em8010::vf1E4  size=37  [class]
void __fastcall Em8010::vf1E4(int param_1)

{
  if ((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0x370) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
  }
  return;
}

// 00AB4700  FUN_00ab4700  size=253  [callgraph]
void FUN_00ab4700(void)

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
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00ABA2E0  Em8010::vf00  size=30  [class]
undefined4 __thiscall Em8010::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab4700();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

