// src/enemy/emc010/EmC010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00709080..00AB9CF0, 498 functions

#include "mgrr.h"
#include "EmC010.h"

// 00709080  EmC010::vfFC  size=30  [class]
void __fastcall EmC010::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  *(undefined4 *)(param_1 + 0x1b64) = 0xffffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x1000000;
  return;
}

// 007090A0  EmC010::vf100  size=59  [class]
void __fastcall EmC010::vf100(int param_1)

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

// 007090E0  EmC010::vf104  size=66  [class]
void __fastcall EmC010::vf104(int *param_1)

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

// 00709130  EmC010::vf10C  size=35  [class]
undefined4 EmC010::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0x30030) && (param_1 != 0x30070)) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 00709160  EmC010::vf1D0  size=3  [class]
void EmC010::vf1D0(void)

{
  return;
}

// 00709170  EmC010::vf158  size=5  [class]
undefined4 EmC010::vf158(void)

{
  return 0;
}

// 00709180  EmC010::vf184  size=6  [class]
undefined4 EmC010::vf184(void)

{
  return 0xffffffff;
}

// 00709190  EmC010::vf188  size=3  [class]
void EmC010::vf188(void)

{
  return;
}

// 007091D0  FUN_007091d0  size=176  [between]
void __fastcall FUN_007091d0(int *param_1)

{
  param_1[0x3a9] = param_1[0x3a9] | 0x800000;
  if (param_1[0x187] == 0) {
    FUN_00aa4080((int)*(short *)((int)param_1 + 0x1a4e),0,0x3e99999a,0x3f800000,0,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0070923b;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070923b:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 007092A0  FUN_007092a0  size=341  [between]
void __fastcall FUN_007092a0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_007093be;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007093be:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00709400  FUN_00709400  size=198  [between]
void __fastcall FUN_00709400(int param_1)

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

// 007094D0  FUN_007094d0  size=290  [between]
void __fastcall FUN_007094d0(int *param_1)

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

// 00709610  FUN_00709610  size=198  [between]
void __fastcall FUN_00709610(int param_1)

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

// 007096E0  FUN_007096e0  size=474  [between]
/* WARNING: Removing unreachable block (ram,0x00709762) */
/* WARNING: Removing unreachable block (ram,0x0070979e) */

void __fastcall FUN_007096e0(int param_1)

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

// 007098D0  FUN_007098d0  size=685  [between]
void __fastcall FUN_007098d0(int param_1)

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
LAB_00709b20:
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
    goto LAB_00709b20;
  }
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x924)) {
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 00709BA0  FUN_00709ba0  size=193  [between]
void __fastcall FUN_00709ba0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    fVar2 = (float10)FUN_00dde300(0,0x41f00000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)(float)(fVar2 + (float10)60.0);
    param_1[0x249] = 0x40400000;
  }
  else if (param_1[0x187] != 1) goto LAB_00709c3e;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00709c3e:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00709C80  FUN_00709c80  size=349  [between]
void __fastcall FUN_00709c80(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00709dba;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00709dba:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00709E00  FUN_00709e00  size=240  [between]
void __fastcall FUN_00709e00(int param_1)

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

// 00709EF0  FUN_00709ef0  size=380  [between]
void __fastcall FUN_00709ef0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0070a019;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070a019:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0070A070  FUN_0070a070  size=312  [between]
void __fastcall FUN_0070a070(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0070a155;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar3 - (float)param_1[0x244]);
  if (fVar3 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070a155:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0070A340  FUN_0070a340  size=23  [between]
void __fastcall FUN_0070a340(int *param_1)

{
  if ((param_1[0x3aa] & 0x2000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0070a354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0070A370  FUN_0070a370  size=138  [between]
bool __fastcall FUN_0070a370(int param_1)

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

// 0070A450  FUN_0070a450  size=73  [between]
undefined4 __fastcall FUN_0070a450(int param_1)

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

// 0070A4B0  FUN_0070a4b0  size=222  [between]
void FUN_0070a4b0(void)

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

// 0070A590  EmC010::vf2C  size=63  [class]
void EmC010::vf2C(void)

{
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41100000,0);
  return;
}

// 0070A650  EmC010::vf110  size=438  [class]
void __thiscall EmC010::vf110(int param_1,int param_2)

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

// 0070A810  EmC010::vf1C  size=206  [class]
void EmC010::vf1C(void)

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
                    /* WARNING: Could not recover jumptable at 0x0070a8d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x1c))();
      return;
    }
  }
  return;
}

// 0070A8E0  EmC010::vf20  size=206  [class]
void EmC010::vf20(void)

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
                    /* WARNING: Could not recover jumptable at 0x0070a9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 0070A9B0  FUN_0070a9b0  size=263  [callgraph]
void __fastcall FUN_0070a9b0(int param_1)

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
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0070AAC0  FUN_0070aac0  size=445  [callgraph]
void __fastcall FUN_0070aac0(int *param_1)

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
    param_1[0x51c] = 1;
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
  else if (param_1[0x187] != 1) goto LAB_0070ac29;
  FUN_00a947e0(0,0,param_1[0x598],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070ac29:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0070AC80  FUN_0070ac80  size=163  [callgraph]
void __fastcall FUN_0070ac80(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4d,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0070ace6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070ace6:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0070AE10  FUN_0070ae10  size=272  [callgraph]
void __fastcall FUN_0070ae10(int param_1)

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
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0070AF20  FUN_0070af20  size=408  [callgraph]
void __fastcall FUN_0070af20(int *param_1)

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
    param_1[0x51c] = 1;
    FUN_00a9f4c0("RPG WALK",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x115,0x3e888889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar3,0x3e888889,0x80100);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x114,0x3e888889,0x80000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0070b064;
  FUN_00a947e0(0,0,param_1[0x598],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070b064:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
  }
  return;
}

// 0070B0C0  FUN_0070b0c0  size=166  [callgraph]
void __fastcall FUN_0070b0c0(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x121,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0070b129;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070b129:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0070B1A0  FUN_0070b1a0  size=129  [callgraph]
void __thiscall FUN_0070b1a0(int param_1,int param_2)

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

// 0070B2A0  FUN_0070b2a0  size=50  [callgraph]
void __fastcall FUN_0070b2a0(int param_1)

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

// 0070B2F0  FUN_0070b2f0  size=323  [callgraph]
void __fastcall FUN_0070b2f0(int *param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2fd,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070b3b2;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,5);
    param_1[0x423] = (int)((float)(int)sVar1 * 60.0 + 600.0);
  }
LAB_0070b3b2:
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

// 0070B5F0  FUN_0070b5f0  size=63  [callgraph]
void FUN_0070b5f0(void)

{
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 0070B630  FUN_0070b630  size=63  [callgraph]
void FUN_0070b630(void)

{
  FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(2,0,0,0);
  return;
}

// 0070B670  FUN_0070b670  size=63  [callgraph]
void FUN_0070b670(void)

{
  FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 0070B6B0  FUN_0070b6b0  size=47  [callgraph]
void __fastcall FUN_0070b6b0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x61c) == 0) &&
     (*(undefined4 *)(param_1 + 0x61c) = 1, *(int *)(param_1 + 0xa08) != 0)) {
    uVar1 = FUN_009f8b40();
    FUN_009f8ae0(uVar1);
  }
  return;
}

// 0070B6E0  FUN_0070b6e0  size=100  [callgraph]
void __fastcall FUN_0070b6e0(int param_1)

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

// 0070B750  FUN_0070b750  size=82  [callgraph]
void __fastcall FUN_0070b750(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0070b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 0070B7F0  EmC010::vf294  size=1  [class]
void EmC010::vf294(void)

{
  return;
}

// 0070B800  EmC010::vf2AC  size=15  [class]
void __fastcall EmC010::vf2AC(int param_1)

{
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffbf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20;
  return;
}

// 0070B810  EmC010::vf2B0  size=1  [class]
void EmC010::vf2B0(void)

{
  return;
}

// 0070B820  EmC010::vf2BC  size=1  [class]
void EmC010::vf2BC(void)

{
  return;
}

// 0070B830  EmC010::vf2C0  size=1  [class]
void EmC010::vf2C0(void)

{
  return;
}

// 0070B840  EmC010::vf2C4  size=1  [class]
void EmC010::vf2C4(void)

{
  return;
}

// 0070B850  EmC010::vf2C8  size=1  [class]
void EmC010::vf2C8(void)

{
  return;
}

// 0070B860  EmC010::vf2CC  size=1  [class]
void EmC010::vf2CC(void)

{
  return;
}

// 0070B870  EmC010::vf2D0  size=1  [class]
void EmC010::vf2D0(void)

{
  return;
}

// 0070B890  FUN_0070b890  size=210  [callgraph]
void __fastcall FUN_0070b890(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0x367;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x40;
    }
    else if (param_1[0x3a6] != 9) goto LAB_0070b8c0;
    uVar1 = 0x491;
  }
LAB_0070b8c0:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0070b925;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070b925:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 0070B980  FUN_0070b980  size=259  [callgraph]
void __fastcall FUN_0070b980(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x368;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x499;
    }
    else if (param_1[0x3a6] == 9) {
      uVar2 = 0x493;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070ba39;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = 0x41f00000;
  }
LAB_0070ba39:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0070BAA0  FUN_0070baa0  size=140  [callgraph]
void __fastcall FUN_0070baa0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x36b;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar1 = 0x49b;
    }
    else if (*(int *)(param_1 + 0xe98) == 9) {
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

// 0070BB40  FUN_0070bb40  size=167  [callgraph]
void __fastcall FUN_0070bb40(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x36d;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x49c;
    }
    else if (param_1[0x3a6] == 9) {
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
                    /* WARNING: Could not recover jumptable at 0x0070bbe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070BC10  FUN_0070bc10  size=258  [callgraph]
void __fastcall FUN_0070bc10(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0;
    uVar1 = (uint)param_1[0x3a9] >> 0x11 & 1;
    uVar2 = 0x374;
    if (uVar1 != 0) {
      if (param_1[0x3a6] == 8) {
        uVar2 = 0x4a4;
        uVar3 = 0x40;
      }
      else if (param_1[0x3a6] == 9) {
        uVar2 = 0x4a3;
      }
    }
    if (param_1[0x186] == 0x6000a) {
      uVar3 = 0;
      uVar2 = 0x375;
      if (uVar1 != 0) {
        if (param_1[0x3a6] == 8) {
          uVar2 = 0x4a3;
          uVar3 = 0x40;
        }
        else if (param_1[0x3a6] == 9) {
          uVar2 = 0x4a4;
        }
      }
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0070bcde;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0070bcde:
  (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x393702d3,0);
  return;
}

// 0070BD20  FUN_0070bd20  size=102  [callgraph]
void __fastcall FUN_0070bd20(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a94bc0(2,0);
  uVar1 = 0x36c;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar1 = 0x49d;
    }
    if (*(int *)(param_1 + 0xe98) == 9) {
      uVar1 = 0x497;
    }
  }
  FUN_00aa4080(uVar1,2,0,0x3f800000,0x8000010,0,0x3f800000);
  return;
}

// 0070BE20  FUN_0070be20  size=220  [callgraph]
void __fastcall FUN_0070be20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x37f;
    if ((*(byte *)(param_1 + 0x606) & 2) != 0) {
      uVar1 = 0x388;
    }
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070bebf;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = 0x41f00000;
  }
LAB_0070bebf:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0070BF10  FUN_0070bf10  size=224  [callgraph]
void __fastcall FUN_0070bf10(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("HAIZURI ASS WAIT",0x3e088889,0,0);
    uVar1 = (*(uint *)(param_1 + 0x1818) & 2) << 5 | 0x80000;
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x386,0x3e088889,uVar1);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x382,0x3e088889,uVar1);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x385,0x3e088889,uVar1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0070C000  FUN_0070c000  size=136  [callgraph]
void __fastcall FUN_0070c000(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(900,0,0x3e088889,0x3f800000,(param_1[0x606] & 2U | 0x400000) << 5,0xbf800000,
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
                    /* WARNING: Could not recover jumptable at 0x0070c086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070C090  FUN_0070c090  size=79  [callgraph]
void __fastcall FUN_0070c090(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1818);
  FUN_00a94bc0(2,0);
  FUN_00aa4080(899,2,0,0x3f800000,(uVar1 & 2) << 5 | 0x8000010,0,0x3f800000);
  return;
}

// 0070C0F0  FUN_0070c0f0  size=145  [callgraph]
void __fastcall FUN_0070c0f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 2) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0070c17f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070C1A0  FUN_0070c1a0  size=145  [callgraph]
void __fastcall FUN_0070c1a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 2) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0070c22f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070C250  FUN_0070c250  size=96  [callgraph]
void __fastcall FUN_0070c250(int param_1)

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

// 0070C2C0  FUN_0070c2c0  size=99  [callgraph]
void __fastcall FUN_0070c2c0(int param_1)

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

// 0070C330  FUN_0070c330  size=226  [callgraph]
void __fastcall FUN_0070c330(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("KamaeWaitSlider",0x3e2aaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x3ac,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x3a9,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x3ad,0x3e2aaaab,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1074) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0070C430  FUN_0070c430  size=99  [callgraph]
void __fastcall FUN_0070c430(int param_1)

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

// 0070C4E0  FUN_0070c4e0  size=124  [callgraph]
void __fastcall FUN_0070c4e0(int param_1)

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
    *(float *)(param_1 + 0x1660) =
         (local_8 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 0070C580  FUN_0070c580  size=124  [callgraph]
void __fastcall FUN_0070c580(int param_1)

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
    *(float *)(param_1 + 0x1660) =
         (local_8 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 0070C650  FUN_0070c650  size=117  [callgraph]
void __fastcall FUN_0070c650(int param_1)

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

// 0070C6E0  FUN_0070c6e0  size=117  [callgraph]
void __fastcall FUN_0070c6e0(int param_1)

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

// 0070C840  FUN_0070c840  size=138  [callgraph]
void __fastcall FUN_0070c840(int *param_1)

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

// 0070C8E0  FUN_0070c8e0  size=170  [callgraph]
void __fastcall FUN_0070c8e0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x3f2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1074) = 1;
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

// 0070C9B0  FUN_0070c9b0  size=109  [callgraph]
void __fastcall FUN_0070c9b0(int param_1)

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
    goto LAB_0070ca0a;
  }
  FUN_00aa4120(0x3c0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_0070ca0a:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0070CA70  FUN_0070ca70  size=109  [callgraph]
void __fastcall FUN_0070ca70(int param_1)

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
    goto LAB_0070caca;
  }
  FUN_00aa4080(0x438,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_0070caca:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0070CAF0  FUN_0070caf0  size=99  [callgraph]
void __fastcall FUN_0070caf0(int param_1)

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

// 0070CB70  FUN_0070cb70  size=99  [callgraph]
void __fastcall FUN_0070cb70(int param_1)

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

// 0070CBE0  FUN_0070cbe0  size=304  [callgraph]
void __fastcall FUN_0070cbe0(int param_1)

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

// 0070CD40  FUN_0070cd40  size=99  [callgraph]
void __fastcall FUN_0070cd40(int param_1)

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

// 0070CDB0  FUN_0070cdb0  size=40  [callgraph]
void __fastcall FUN_0070cdb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 0070CE80  FUN_0070ce80  size=952  [callgraph]
void __fastcall FUN_0070ce80(int *param_1)

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
    if ((*(byte *)((int)param_1 + 0xea6) & 1) != 0) {
      param_1[0x3a9] = param_1[0x3a9] & 0xfffeffff;
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x250] == param_1[0x6dd]) {
        param_1[0x187] = 8;
      }
    }
    iVar1 = FUN_00a8c760(0xf);
    iVar2 = 0x2b2;
    goto LAB_0070d042;
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
    if ((*(byte *)((int)param_1 + 0xea6) & 1) != 0) {
      param_1[0x3a9] = param_1[0x3a9] & 0xfffeffff;
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x250] == param_1[0x6dd]) {
        param_1[0x187] = 8;
      }
    }
    iVar1 = FUN_00a8c760(0xf);
    iVar2 = 0x2b1;
LAB_0070d042:
    if ((iVar1 != 0) && ((param_1[0x3a9] & 0x8000U) != 0)) {
      param_1[0x3a9] = param_1[0x3a9] & 0xffff7fff;
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

// 0070D280  FUN_0070d280  size=227  [callgraph]
void __fastcall FUN_0070d280(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2b4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070d308;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070d308:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 0070D510  FUN_0070d510  size=159  [callgraph]
void __fastcall FUN_0070d510(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x280,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070d598;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070d598:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 0070D5C0  FUN_0070d5c0  size=159  [callgraph]
void __fastcall FUN_0070d5c0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x281,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070d648;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070d648:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 0070D670  FUN_0070d670  size=159  [callgraph]
void __fastcall FUN_0070d670(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x282,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070d6f8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070d6f8:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 0070D730  FUN_0070d730  size=92  [callgraph]
void __fastcall FUN_0070d730(int param_1)

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

// 0070D7C0  FUN_0070d7c0  size=169  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0070d821) */

void __fastcall FUN_0070d7c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0070d867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070D8A0  FUN_0070d8a0  size=133  [callgraph]
void __fastcall FUN_0070d8a0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0070d923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070DB70  EmC010::thunk_vf1C0  size=5  [class]
void __thiscall EmC010::thunk_vf1C0(int param_1,int *param_2,undefined4 param_3)

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

// 0070DB80  FUN_0070db80  size=45  [between]
void __thiscall FUN_0070db80(int param_1,float param_2)

{
  *(float *)(param_1 + 0x1158) = param_2 * 60.0;
  if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
    *(float *)(param_1 + 0x1158) = param_2 * 60.0 + 120.0;
    return;
  }
  return;
}

// 0070DBB0  FUN_0070dbb0  size=64  [between]
undefined4 __fastcall FUN_0070dbb0(int param_1)

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

// 0070DBF0  FUN_0070dbf0  size=87  [between]
undefined4 __thiscall FUN_0070dbf0(int param_1,int param_2,int param_3)

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

// 0070DC50  FUN_0070dc50  size=368  [between]
void __fastcall FUN_0070dc50(int param_1)

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

// 0070DDC0  FUN_0070ddc0  size=260  [between]
undefined4 FUN_0070ddc0(void)

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

// 0070DED0  FUN_0070ded0  size=153  [between]
void FUN_0070ded0(void)

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

// 0070DF70  FUN_0070df70  size=549  [between]
void __thiscall FUN_0070df70(int param_1,undefined4 param_2)

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

// 0070E200  FUN_0070e200  size=46  [between]
uint __fastcall FUN_0070e200(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xea4);
  if ((((uVar1 & 0x800) == 0) && ((uVar1 & 0x400) == 0)) && ((uVar1 & 0x200) == 0)) {
    return *(uint *)(param_1 + 0xea8) >> 0x15 & 1;
  }
  return 1;
}

// 0070E270  EmC010::vf348  size=33  [class]
undefined4 __thiscall EmC010::vf348(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xea4) & 0x100) != 0) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf348(param_2);
  return uVar1;
}

// 0070E2A0  FUN_0070e2a0  size=132  [between]
undefined4 __fastcall FUN_0070e2a0(int param_1)

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

// 0070E330  FUN_0070e330  size=179  [between]
undefined4 __fastcall FUN_0070e330(int param_1)

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

// 0070E3F0  FUN_0070e3f0  size=98  [between]
bool __fastcall FUN_0070e3f0(int param_1)

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

// 0070E460  FUN_0070e460  size=45  [between]
bool __fastcall FUN_0070e460(int *param_1)

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

// 0070E4E0  FUN_0070e4e0  size=67  [between]
undefined4 __fastcall FUN_0070e4e0(int param_1)

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

// 0070E530  FUN_0070e530  size=66  [between]
undefined4 __thiscall FUN_0070e530(int param_1,float *param_2)

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

// 0070E580  FUN_0070e580  size=273  [between]
bool __fastcall FUN_0070e580(int param_1)

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

// 0070E6A0  FUN_0070e6a0  size=18  [between]
undefined4 __fastcall FUN_0070e6a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xd80) == 0) {
    return 0;
  }
  uVar1 = FUN_00a82d50();
  puVar3 = &DAT_01882aa0;
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

// 0070E6B2  FUN_0070e6b2  size=83  [between]
undefined4 FUN_0070e6b2(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_00a82d50();
  puVar3 = &DAT_01882aa0;
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

// 0070E730  EmC010::vf2FC  size=3  [class]
undefined4 EmC010::vf2FC(void)

{
  return 0;
}

// 0070E740  FUN_0070e740  size=518  [between]
void FUN_0070e740(float param_1)

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

// 0070E960  FUN_0070e960  size=56  [between]
void __fastcall FUN_0070e960(int param_1)

{
  ushort uVar1;
  
  uVar1 = FUN_00dde2a0(1,10);
  *(float *)(param_1 + 0x1c00) = ((float)uVar1 * 0.1 + 5.0) * 60.0;
  return;
}

// 0070E9A0  FUN_0070e9a0  size=74  [between]
void __fastcall FUN_0070e9a0(int *param_1)

{
  param_1[0x6f6] = 1;
  FUN_00ac48e0();
  FUN_00ac8e10(1);
  (**(code **)(*param_1 + 0x110))(1);
  param_1[0x404] = 0x43160000;
  (**(code **)(*param_1 + 0x358))(0x1cc,0);
  return;
}

// 0070E9F0  FUN_0070e9f0  size=132  [between]
void __thiscall FUN_0070e9f0(undefined4 param_1,int param_2)

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

// 0070EAB0  FUN_0070eab0  size=22  [between]
void __fastcall FUN_0070eab0(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0070EAD0  FUN_0070ead0  size=22  [between]
void __fastcall FUN_0070ead0(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0070EAF0  FUN_0070eaf0  size=22  [between]
void __fastcall FUN_0070eaf0(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0070EB60  FUN_0070eb60  size=22  [between]
void __fastcall FUN_0070eb60(int *param_1)

{
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  return;
}

// 0070EC20  FUN_0070ec20  size=162  [between]
void __fastcall FUN_0070ec20(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0070ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0070ED40  FUN_0070ed40  size=87  [between]
void __fastcall FUN_0070ed40(int param_1)

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

// 0070EDB0  FUN_0070edb0  size=138  [between]
void __fastcall FUN_0070edb0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0070ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070EE50  FUN_0070ee50  size=123  [between]
void __fastcall FUN_0070ee50(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0070eec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0070EF00  FUN_0070ef00  size=42  [between]
uint FUN_0070ef00(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b357a0;
  (**(code **)(*param_1 + 4))(&DAT_01b357a0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0070EF60  FUN_0070ef60  size=42  [between]
uint FUN_0070ef60(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b357a8;
  (**(code **)(*param_1 + 4))(&DAT_01b357a8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0070EF90  FUN_0070ef90  size=42  [between]
uint FUN_0070ef90(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b357ac;
  (**(code **)(*param_1 + 4))(&DAT_01b357ac);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0070F060  EmC010::vf30  size=228  [class]
void __fastcall EmC010::vf30(int param_1)

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
      puVar3 = &DAT_01b35940;
      (**(code **)(*piVar2 + 4))(&DAT_01b35940);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_007e6740();
      }
    }
  }
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41100000,0);
  FUN_00a87b80();
  return;
}

// 0070F150  EmC010::vf14C  size=133  [class]
bool __thiscall EmC010::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < param_1[0x21c]) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if ((iVar1 == 0) && (param_1[0x605] != 1)) {
      if (param_2 == 0x24) {
        iVar1 = FUN_0070e200();
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

// 0070F1E0  FUN_0070f1e0  size=445  [between]
void __fastcall FUN_0070f1e0(int *param_1)

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

// 0070F3A0  FUN_0070f3a0  size=648  [between]
void __fastcall FUN_0070f3a0(int *param_1)

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
    goto LAB_0070f48d;
  case 3:
LAB_0070f48d:
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 9 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_0070f3ba_default;
  case 4:
    FUN_00aa4080(0x200,0,0x3e99999a,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0070f4ff;
  case 5:
LAB_0070f4ff:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto LAB_0070f439;
  default:
    goto switchD_0070f3ba_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_0070f439:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0070f3ba_default:
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
      if (param_1[0x250] != 2) goto LAB_0070f5f5;
      param_1[0x23c] = (int)((float)param_1[0x23c] + 0.34906584);
      param_1[0x23d] = (int)((float)param_1[0x23d] + 0.34906584);
      param_1[0x23e] = (int)((float)param_1[0x23e] + 0.34906584);
      fVar1 = (float)param_1[0x23f] + 0.34906584;
    }
    param_1[0x23f] = (int)fVar1;
  }
LAB_0070f5f5:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 0070F640  FUN_0070f640  size=119  [between]
void __fastcall FUN_0070f640(int param_1)

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

// 0070F6C0  FUN_0070f6c0  size=634  [between]
void __fastcall FUN_0070f6c0(int *param_1)

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

// 0070F960  FUN_0070f960  size=643  [between]
void __fastcall FUN_0070f960(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0070fac4;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0,0x3f800000);
LAB_0070fac4:
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

// 0070FBF0  FUN_0070fbf0  size=218  [between]
void __fastcall FUN_0070fbf0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(500,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0070fc74;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0070fc74:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3d567750,0);
  }
  return;
}

// 0070FCD0  EmC010::vf1A0  size=234  [class]
undefined4 __thiscall EmC010::vf1A0(int *param_1,int *param_2,int param_3)

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

// 0070FDC0  EmC010::vf360  size=181  [class]
void __fastcall EmC010::vf360(int param_1)

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
    if (*(int *)(iVar1 + 0x24) == 0x3c070) {
      FUN_00e03080(iVar1,4);
      return;
    }
    if (*(int *)(iVar1 + 0x24) == 0x3c080) {
      FUN_00e03080(iVar1,5);
      return;
    }
    FUN_00e03080(iVar1,1);
  }
  return;
}

// 0070FE80  FUN_0070fe80  size=121  [between]
void __fastcall FUN_0070fe80(int param_1)

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

// 0070FF00  EmC010::setRayCast  size=232  [class]
void __thiscall EmC010::setRayCast(int param_1,undefined4 *param_2)

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
    FUN_00dd5650(&DAT_016476e8);
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
  local_1c = "EmC010MoveArea";
  local_34 = param_2[3];
  local_30 = 0x3f000000;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar3;
  local_44 = uVar4;
  FUN_0090fb00(local_60);
  return;
}

// 0070FFF0  FUN_0070fff0  size=29  [callgraph]
bool __fastcall FUN_0070fff0(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    bVar1 = *(int *)(param_1 + 0x1814) != 1;
  }
  return bVar1;
}

// 00710010  FUN_00710010  size=140  [callgraph]
undefined1 __fastcall FUN_00710010(int param_1)

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

// 007100F0  FUN_007100f0  size=97  [callgraph]
void __fastcall FUN_007100f0(int param_1)

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
  *(undefined4 *)(param_1 + 0x13ac) = 0x44160000;
  return;
}

// 007101C0  FUN_007101c0  size=606  [callgraph]
void __fastcall FUN_007101c0(int *param_1)

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
      param_1[0x3aa] = param_1[0x3aa] | 0x1000000;
      FUN_0070b2a0();
      sVar1 = FUN_00dde2d0(0,0x14);
      param_1[0x423] = (int)((float)(int)sVar1 * 60.0 + 900.0);
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
    FUN_0070b1a0(uVar4);
  }
  return;
}

// 00710AD0  FUN_00710ad0  size=165  [callgraph]
void FUN_00710ad0(void)

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
      puVar3 = &DAT_01b357a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a0);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && ((piVar2[0x3ab] & 0x2000U) != 0)) {
        FUN_00a92f90();
        FUN_00e36b50(0,8,0);
      }
    }
  }
  return;
}

// 00710B80  EmC010::vf29C  size=77  [class]
void __fastcall EmC010::vf29C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffdf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40;
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xfffeffff;
  if (((*(uint *)(param_1 + 0xeac) & 0x3000) == 0) &&
     ((*(uint *)(param_1 + 0xea8) & 0x20000000) == 0)) {
    iVar1 = FUN_00a85630();
    if (iVar1 != 5) {
      FUN_00a8cab0();
      return;
    }
  }
  return;
}

// 00710BD0  FUN_00710bd0  size=204  [between]
void __fastcall FUN_00710bd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0xea8) & 0x80000) == 0) {
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

// 00710CA0  EmC010::vf2D4  size=160  [class]
bool __fastcall EmC010::vf2D4(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x3a6] != 0x1e) && (iVar1 = FUN_00ac8a50(), iVar1 != 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x274))(), iVar1 != 0)) && (param_1[0x139] != 0)) {
    return false;
  }
  if ((((param_1[0x3a9] & 0x4000U) == 0) &&
      (((((param_1[0x3a9] & 0xe00U) == 0 && ((param_1[0x3aa] & 0x200000U) == 0)) ||
        (param_1[0x605] == 1)) && ((param_1[0x186] != 0x100005 && (param_1[0x6f6] == 0)))))) &&
     ((param_1[0x186] != 0xb000a &&
      ((iVar1 = FUN_00a85630(), iVar1 != 2 && (iVar1 = FUN_00a8c760(0x1e), iVar1 == 0)))))) {
    return param_1[0x294] != 0;
  }
  return false;
}

// 00711D60  FUN_00711d60  size=62  [callgraph]
uint FUN_00711d60(void)

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
    puVar4 = &DAT_01b357a8;
    (**(code **)(*piVar3 + 4))(&DAT_01b357a8);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 00711E30  FUN_00711e30  size=62  [callgraph]
uint FUN_00711e30(void)

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
    puVar4 = &DAT_01b357b0;
    (**(code **)(*piVar3 + 4))(&DAT_01b357b0);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  return uVar2;
}

// 00711E70  FUN_00711e70  size=270  [callgraph]
void FUN_00711e70(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("EmC010Shield",0x3c090,0);
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
      puVar4 = &DAT_01b357ac;
      (**(code **)(*piVar3 + 4))(&DAT_01b357ac);
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

// 00711F80  FUN_00711f80  size=79  [callgraph]
uint FUN_00711f80(void)

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
  puVar3 = &DAT_01b357ac;
  (**(code **)(*piVar2 + 4))(&DAT_01b357ac);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00712010  FUN_00712010  size=441  [callgraph]
bool __fastcall FUN_00712010(int param_1)

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
  local_1c = "EmC010View";
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

// 007121D0  FUN_007121d0  size=274  [callgraph]
undefined4 __fastcall FUN_007121d0(int param_1)

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
  local_20 = "EmC010UsePath";
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

// 007122F0  FUN_007122f0  size=270  [callgraph]
undefined4 __fastcall FUN_007122f0(int param_1)

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
  local_20 = "EmC010Obstacle";
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

// 00712400  FUN_00712400  size=575  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00712470) */

void __thiscall FUN_00712400(int param_1,float *param_2)

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
  local_2c = "EmC010NextPointView";
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

// 00712640  FUN_00712640  size=327  [callgraph]
int __fastcall FUN_00712640(int param_1)

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
  pcStack_28 = "EmC010FloorCheck";
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

// 00712790  FUN_00712790  size=672  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0071280e) */

undefined4 __thiscall FUN_00712790(int param_1,float *param_2)

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
  pcStack_34 = "EmC010WallCheck";
  uStack_50 = local_80;
  uStack_4c = local_7c;
  uStack_48 = 0x3dcccccd;
  local_68 = fVar1 + unaff_EBX;
  fStack_64 = fVar2 + fStack_94;
  fStack_60 = fVar3 + fStack_90;
  FUN_0090fb00(&local_78);
  return unaff_ESI;
}

// 00712A30  FUN_00712a30  size=615  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00712ab0) */

undefined4 __thiscall FUN_00712a30(int param_1,float *param_2,float *param_3)

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
  local_1c = "EmC010FireLineCheck";
  local_34 = local_64;
  local_30 = 0x3dcccccd;
  FUN_0090fb00(local_60);
  return uVar3;
}

// 00712CA0  FUN_00712ca0  size=535  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00712d10) */

undefined4 __thiscall FUN_00712ca0(int param_1,float *param_2,undefined4 param_3)

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
  pcStack_34 = "EmC010PhotoFrameRouteWallCheck";
  uStack_4c = uStack_8c;
  uStack_48 = param_3;
  local_68 = fVar8;
  local_64 = fVar9;
  fStack_60 = fVar1 + unaff_EDI;
  fStack_5c = fVar2 + unaff_ESI;
  FUN_0090fb00(&local_78);
  return local_a0;
}

// 00712EC0  FUN_00712ec0  size=158  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00712f1a) */

undefined4 FUN_00712ec0(undefined4 param_1)

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

// 00712F60  FUN_00712f60  size=259  [callgraph]
void __thiscall FUN_00712f60(int *param_1,int param_2,float param_3)

{
  float10 fVar1;
  
  if (((param_1[0x139] != 0) && (param_1[0x5a4] == 0)) && (param_1[0x6f6] == 0)) {
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
    FUN_0070fe80();
    FUN_00eaa6e0(0x41100000,0);
    if (param_1[0x606] == 0) {
      (**(code **)(*param_1 + 0x358))(0x20,param_1 + 0x490);
    }
  }
  return;
}

// 00713070  FUN_00713070  size=277  [callgraph]
void __fastcall FUN_00713070(int *param_1)

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
  FUN_0070ded0();
  return;
}

// 00713190  EmC010::vf368  size=291  [class]
undefined1 __fastcall EmC010::vf368(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar2 = 0;
  if ((iVar1 == 0x2c140) &&
     (uVar2 = (*(uint *)(param_1 + 0xea8) & 0x4000) != 0,
     (*(uint *)(param_1 + 0xea4) & 0x4000000) != 0)) {
    uVar2 = 2;
  }
  if (iVar1 == 0x2c142) {
    uVar2 = 3;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 4;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 5;
    }
  }
  if (iVar1 == 0x2c144) {
    uVar2 = 6;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 7;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 8;
    }
  }
  if (iVar1 == 0x2c150) {
    uVar2 = 0xc;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 0xd;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0xe;
    }
  }
  if (iVar1 == 0x2c152) {
    uVar2 = 0xf;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 0x10;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0x11;
    }
  }
  if (iVar1 == 0x2c160) {
    uVar2 = 9;
    if ((*(uint *)(param_1 + 0xea8) & 0x4000) != 0) {
      uVar2 = 10;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x4000000) != 0) {
      uVar2 = 0xb;
    }
  }
  if (iVar1 == 0x2c170) {
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

// 007132C0  FUN_007132c0  size=355  [between]
undefined4 __fastcall FUN_007132c0(int *param_1)

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
     ((((param_1[0x187] != 0 && (iVar1 = FUN_00a82e80(), iVar1 == 0)) &&
       (iVar1 = FUN_00a8c760(0x3f), iVar1 == 0)) && (param_1[0x186] != 0x100001)))) {
    if (((param_1[0x3aa] & 0x80000U) != 0) && (iVar1 = FUN_00a82e70(), iVar1 != 0)) {
      return 0;
    }
    piVar2 = (int *)FUN_00a9b930();
    if ((piVar2 == (int *)0x0) ||
       (((piVar2[300] != 0x11400 && (iVar1 = (**(code **)(*piVar2 + 0x1d8))(), iVar1 == 0)) &&
        (piVar2[0x139] == 0)))) {
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x3f800000,0x3fc00000,0x40490fdb,0x3f490fdb,
                   0x1001,0);
      return 1;
    }
  }
  return 0;
}

// 00713430  EmC010::vf13C  size=133  [class]
bool __fastcall EmC010::vf13C(int *param_1)

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

// 007134C0  FUN_007134c0  size=233  [between]
undefined4 __fastcall FUN_007134c0(int *param_1)

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

// 007135B0  FUN_007135b0  size=214  [between]
void __thiscall FUN_007135b0(int param_1,undefined4 param_2,undefined4 param_3)

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

// 00713690  FUN_00713690  size=46  [between]
bool __fastcall FUN_00713690(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (((iVar1 != 0x2c010) && (iVar1 != 0x2c140)) && (iVar1 != 0x2c142)) {
    return iVar1 == 0x2c144;
  }
  return true;
}

// 007136C0  FUN_007136c0  size=32  [between]
bool __fastcall FUN_007136c0(int param_1)

{
  if (*(int *)(param_1 + 0x4b0) == 0x2c150) {
    return true;
  }
  return *(int *)(param_1 + 0x4b0) == 0x2c152;
}

// 007136E0  FUN_007136e0  size=16  [between]
bool __fastcall FUN_007136e0(int param_1)

{
  return *(int *)(param_1 + 0x4b0) == 0x2c170;
}

// 00713700  FUN_00713700  size=39  [between]
bool __fastcall FUN_00713700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 != 0x2c144) && (iVar1 != 0x2c152)) {
    return iVar1 == 0x2c170;
  }
  return true;
}

// 00713730  FUN_00713730  size=79  [between]
undefined4 FUN_00713730(void)

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

// 007137B0  FUN_007137b0  size=266  [between]
void __fastcall FUN_007137b0(int *param_1)

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
    param_1[0x6ff] = iVar3;
  }
  return;
}

// 007138C0  FUN_007138c0  size=158  [between]
undefined4 __thiscall FUN_007138c0(int param_1,float param_2,float param_3)

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
    iVar1 = FUN_0070ddc0();
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

// 00713960  FUN_00713960  size=87  [between]
void __thiscall FUN_00713960(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0x4b0) == 0x2c170) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b357a8;
    (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00b2bca0(param_2,param_3);
    }
  }
  return;
}

// 007139C0  FUN_007139c0  size=825  [between]
void __thiscall FUN_007139c0(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar1 = (uint)(param_1[300] == 0x2c152);
  switch(param_2) {
  case 0x49:
    goto switchD_00713a32_caseD_49;
  case 0x4a:
    goto switchD_00713a32_caseD_4a;
  case 0x4b:
    goto switchD_00713a32_caseD_4b;
  case 0x4c:
    break;
  case 0x4d:
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x2c170) {
        if (param_3 != 0) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
        }
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_007137b0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    break;
  default:
    goto switchD_00713a32_default;
  }
  if ((param_1[0x3ab] & 0x80000U) == 0) {
    if (param_1[300] == 0x2c170) {
      FUN_00ac94e0("R_upper_leg_shield");
      FUN_00ac94e0("R_lower_leg_shield");
      if (param_3 != 0) {
        uVar2 = 0x157;
LAB_00713af2:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("R_hip_armor");
      FUN_00ac94e0("R_leg_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1 + 4];
        goto LAB_00713af2;
      }
    }
    FUN_00ac9420("_EFD003");
    FUN_00ac8dd0("_R_leg_",1);
    param_1[0x3ab] = param_1[0x3ab] | 0x80000;
  }
  if (param_4 != 0) goto switchD_00713a32_default;
switchD_00713a32_caseD_4b:
  if ((param_1[0x3ab] & 0x100000U) == 0) {
    if (param_1[300] == 0x2c170) {
      FUN_00ac94e0("L_upper_leg_shield");
      FUN_00ac94e0("L_lower_leg_shield");
      if (param_3 != 0) {
        uVar2 = 0x158;
LAB_00713b88:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("L_hip_armor");
      FUN_00ac94e0("L_leg_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1 + 6];
        goto LAB_00713b88;
      }
    }
    FUN_00ac9420("_EFD004");
    FUN_00ac8dd0("_L_leg_",1);
    param_1[0x3ab] = param_1[0x3ab] | 0x100000;
  }
  if (param_4 != 0) goto switchD_00713a32_default;
switchD_00713a32_caseD_4a:
  if ((param_1[0x3ab] & 0x200000U) == 0) {
    if (param_1[300] == 0x2c170) {
      FUN_00ac94e0("L_forearm_armor1");
      FUN_00ac94e0("R_shoulder_pad");
      if (param_3 != 0) {
        uVar2 = 0x154;
LAB_00713c12:
        (**(code **)(*param_1 + 0x358))(uVar2,0);
      }
    }
    else {
      FUN_00ac94e0("R_shoulder_armor");
      if (param_3 != 0) {
        uVar2 = local_20[uVar1];
        goto LAB_00713c12;
      }
    }
    FUN_00ac9420("_EFD01");
    FUN_00ac8dd0("_R_arm_",1);
    param_1[0x3ab] = param_1[0x3ab] | 0x200000;
  }
  if (param_4 != 0) goto switchD_00713a32_default;
switchD_00713a32_caseD_49:
  if ((param_1[0x3ab] & 0x400000U) != 0) goto switchD_00713a32_default;
  if (param_1[300] == 0x2c170) {
    FUN_00ac94e0("L_forearm_armor");
    FUN_00ac94e0("L_shoulder_pad");
    if (param_3 != 0) {
      uVar2 = 0x155;
LAB_00713c98:
      (**(code **)(*param_1 + 0x358))(uVar2,0);
    }
  }
  else {
    FUN_00ac94e0("L_shoulder_armor");
    if (param_3 != 0) {
      uVar2 = local_20[uVar1 + 2];
      goto LAB_00713c98;
    }
  }
  FUN_00ac9420("_EFD02");
  FUN_00ac8dd0("_L_arm_",1);
  param_1[0x3ab] = param_1[0x3ab] | 0x400000;
switchD_00713a32_default:
  if ((param_1[0x3a9] & 0x1000U) == 0) {
    (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
  }
  param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  return;
}

// 00713D10  FUN_00713d10  size=113  [between]
uint __fastcall FUN_00713d10(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((((iVar1 == 0x2c010) || (iVar1 == 0x2c140)) || (iVar1 == 0x2c142)) ||
     (((iVar1 == 0x2c144 || (iVar1 == 0x2c160)) ||
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

// 00713E00  FUN_00713e00  size=74  [between]
void __thiscall FUN_00713e00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar2 = 0;
    if ((iVar1 == 0x2c150) || (iVar1 == 0x2c152)) {
      uVar2 = 1;
    }
    if (iVar1 == 0x2c170) {
      uVar2 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar2,param_2,param_3);
  }
  return;
}

// 00713E50  FUN_00713e50  size=92  [between]
undefined4 __fastcall FUN_00713e50(int param_1)

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

// 00713EB0  EmC010::vf2F8  size=115  [class]
void __fastcall EmC010::vf2F8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = param_1[300];
    uVar2 = 0;
    if ((iVar1 == 0x2c150) || (iVar1 == 0x2c152)) {
      uVar2 = 1;
    }
    if (iVar1 == 0x2c170) {
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

// 00713F30  FUN_00713f30  size=1187  [between]
undefined4 __thiscall FUN_00713f30(int *param_1,int param_2)

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
  if ((((iVar3 == 0x2c150) || (iVar3 == 0x2c152)) || (iVar3 == 0x2c170)) &&
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
    if (((iVar3 == 0x2c150) || (iVar3 == 0x2c152)) || (iVar3 == 0x2c170)) {
      auStack_20[0] = 0x149;
      auStack_20[1] = 0x14f;
      auStack_20[2] = 0x148;
      auStack_20[3] = 0x14e;
      auStack_20[4] = 0x14a;
      auStack_20[5] = 0x150;
      auStack_20[6] = 0x14b;
      auStack_20[7] = 0x151;
      uVar5 = (uint)(iVar3 == 0x2c152);
      if ((param_1[0x3ab] & 0x40000U) == 0) {
        if (iVar3 == 0x2c170) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_007137b0();
        FUN_00ac8d40(1);
        param_1[0x3ab] = param_1[0x3ab] | 0x40000;
      }
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (param_1[300] == 0x2c170) {
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
        if (param_1[300] == 0x2c170) {
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
        if (param_1[300] == 0x2c170) {
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
        if (param_1[300] == 0x2c170) {
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
  FUN_00a9ba90(param_2);
  return 1;
}

// 007143E0  FUN_007143e0  size=2114  [between]
void __fastcall FUN_007143e0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_20 [8];
  
  iVar3 = param_1[300];
  if (((((iVar3 == 0x2c010) || (iVar3 == 0x2c140)) || (iVar3 == 0x2c142)) ||
      ((iVar3 == 0x2c144 || (iVar3 == 0x2c160)))) ||
     (((param_1[0x3ab] & 0x40000U) != 0 ||
      (((iVar3 != 0x2c150 && (iVar3 != 0x2c152)) && (iVar3 != 0x2c170)))))) {
    return;
  }
  iVar3 = FUN_00a8eea0();
  fVar1 = (float)iVar3;
  iVar3 = FUN_00a8eeb0();
  fVar2 = (float)iVar3;
  if (fVar1 < (float)param_1[0x6f1] * fVar2) {
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x2c152);
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x2c170) {
        (**(code **)(*param_1 + 0x358))(0x156,0);
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_007137b0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
  else if (fVar1 < (float)param_1[0x6f0] * fVar2) {
    local_20[0] = 0x149;
    local_20[1] = 0x14f;
    local_20[2] = 0x148;
    local_20[3] = 0x14e;
    local_20[4] = 0x14a;
    local_20[5] = 0x150;
    local_20[6] = 0x14b;
    local_20[7] = 0x151;
    uVar4 = (uint)(param_1[300] == 0x2c152);
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
    if ((float)param_1[0x6ef] * fVar2 <= fVar1) {
      if (fVar1 < (float)param_1[0x6ee] * fVar2) {
        FUN_007139c0(0x4a,1,0);
        return;
      }
      if ((float)param_1[0x6ed] * fVar2 <= fVar1) {
        return;
      }
      FUN_007139c0(0x49,1,0);
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
    uVar4 = (uint)(param_1[300] == 0x2c152);
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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

// 00714C30  FUN_00714c30  size=172  [between]
void __fastcall FUN_00714c30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1d7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    piVar3 = param_1 + 0x10;
    uVar1 = FUN_00a81330(piVar3);
    FUN_00a88250(uVar1,piVar3);
    FUN_0070fe80();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00713960(&DAT_0163b604,1);
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

// 00714CE0  FUN_00714ce0  size=470  [between]
void __fastcall FUN_00714ce0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x1df;
    if (param_1[300] == 0x2c170) {
      uVar3 = 0x564;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,uVar1,0,0x3f800000);
    FUN_00713960(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    uVar3 = 0x1e0;
    if (param_1[300] == 0x2c170) {
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
    if (param_1[300] == 0x2c170) {
      uVar3 = 0x566;
    }
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 1) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,uVar1,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00714e60;
  case 5:
LAB_00714e60:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0070db80(param_1[0x66d]);
      (**(code **)(*param_1 + 0x34c))();
      FUN_00e5e0c0("em0010_vo_line_action_awake",param_1,0xffffffff,0);
      return;
    }
    goto LAB_00714e9d;
  default:
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
LAB_00714e9d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00714ED0  FUN_00714ed0  size=463  [between]
void __fastcall FUN_00714ed0(int *param_1)

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
    FUN_0070fe80();
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

// 007150B0  FUN_007150b0  size=234  [between]
void __fastcall FUN_007150b0(int *param_1)

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
    param_1[0x6f6] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00ac8f80();
  FUN_0070e740((float)(fVar2 - (float10)(float)param_1[0x244] * (float10)0.01));
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

// 007151A0  EmC010::vf44  size=374  [class]
void __fastcall EmC010::vf44(int param_1)

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

// 00715320  EmC010::getAttackInfo  size=1134  [class]
undefined4 __thiscall EmC010::getAttackInfo(int param_1,ushort *param_2)

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
    FUN_00dd5650(&DAT_016477b8);
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
    goto LAB_00715771;
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
    goto LAB_0071551f;
  case 0x18:
    *puVar1 = 0xa0;
LAB_0071551f:
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
    iVar2 = FUN_007136c0();
    if (iVar2 != 0) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    *(undefined2 *)(puVar1 + 0x21) = 0x1002;
    break;
  case 0x21:
    *puVar1 = 0xa4;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    iVar2 = FUN_007136c0();
    if (iVar2 != 0) {
      puVar1[0x23] = puVar1[0x23] | 0x100;
    }
    uVar6 = 0x1002;
    goto LAB_00715771;
  case 0x24:
  case 0x2c:
    *puVar1 = 0xaa;
    goto LAB_007156c6;
  case 0x25:
    *puVar1 = 0xaa;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_007156ef;
  case 0x26:
    *puVar1 = 0xab;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    goto LAB_0071576c;
  case 0x28:
    *puVar1 = 0xac;
LAB_007156c6:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = 0x1003;
    break;
  case 0x2a:
    *puVar1 = 0xab;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_007156ef:
    uVar6 = 0x1003;
LAB_007156f4:
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = uVar6;
    break;
  case 0x2b:
    *puVar1 = 0xac;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    goto LAB_0071576c;
  case 0x2e:
    *puVar1 = 0xad;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    uVar6 = 0x1002;
    goto LAB_007156f4;
  case 0x30:
    *puVar1 = 0xae;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_0071576c:
    uVar6 = 0x1003;
LAB_00715771:
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

// 00715850  FUN_00715850  size=381  [between]
void __fastcall FUN_00715850(int *param_1)

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
      if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
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

// 007159D0  FUN_007159d0  size=366  [between]
void __fastcall FUN_007159d0(int *param_1)

{
  short sVar1;
  float10 fVar2;
  int local_8;
  undefined2 local_4;
  
  local_8 = *(int *)((int)param_1 + 0x1a5a);
  local_4 = *(undefined2 *)((int)param_1 + 0x1a5e);
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    fVar2 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
      fVar2 = (float10)1;
    }
    FUN_00aa4080((int)*(short *)((int)&local_8 + ((int)(short)param_1[0x2ad] % 3) * 2),0,0x3e088889,
                 0x3f800000,0,0,(float)fVar2);
    sVar1 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    local_8 = (int)sVar1;
    param_1[0x248] = (int)((float)local_8 * 60.0);
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x249] = 0;
    param_1[0x250] = (int)sVar1;
  }
  else if (param_1[0x187] != 1) goto LAB_00715afe;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
LAB_00715afe:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00715B40  FUN_00715b40  size=386  [between]
void __fastcall FUN_00715b40(int *param_1)

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
    if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
      fVar3 = (float10)1;
    }
    FUN_00aa4080(iVar2,0,0x3e2aaaab,0x3f800000,0,0,(float)fVar3);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00715c8b;
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
LAB_00715c8b:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00715CD0  FUN_00715cd0  size=420  [between]
void __fastcall FUN_00715cd0(int *param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_016464f8,1);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00715e1e;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00715e1e:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00715E80  FUN_00715e80  size=339  [between]
void __fastcall FUN_00715e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00715fae;
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
  if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
    uVar2 = 0x535;
  }
  if (*(int *)(param_1 + 0x1814) == 2) {
    uVar2 = 0x37b;
    if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
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
    else if (*(int *)(param_1 + 0xe98) != 9) goto LAB_00715f40;
    uVar2 = 0x490;
  }
LAB_00715f40:
  FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
  FUN_00713960(&DAT_0163b604,1);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
  *(float *)(param_1 + 0x920) = (float)((fVar4 + (float10)1) * (float10)60.0);
LAB_00715fae:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  return;
}

// 00715FE0  EmC010::vf19C  size=179  [class]
void __thiscall EmC010::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 007160A0  FUN_007160a0  size=479  [between]
void __fastcall FUN_007160a0(int param_1)

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
      EmC010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 1:
      iVar2 = FUN_00712ec0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      local_20 = 0;
      local_1c = 0;
      *(uint *)(param_1 + 0x1078) = (uint)(iVar2 == 0);
      local_18 = 0xc0400000;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      EmC010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 2:
      iVar2 = FUN_00712ec0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      local_20 = 0xc0400000;
      local_1c = 0;
      local_18 = 0;
      *(uint *)(param_1 + 0x107c) = (uint)(iVar2 == 0);
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      EmC010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 3:
      iVar2 = FUN_00712ec0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      local_20 = 0x40400000;
      *(uint *)(param_1 + 0x1080) = (uint)(iVar2 == 0);
      local_1c = 0;
      local_18 = 0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      EmC010::setRayCast(auStack_2c);
      *(char *)(param_1 + 0x1088) = *(char *)(param_1 + 0x1088) + '\x01';
      return;
    case 4:
      iVar2 = FUN_00712ec0(param_1 + 0x14a0);
      *(undefined4 *)(param_1 + 0x1a44) = 0x42700000;
      *(uint *)(param_1 + 0x1084) = (uint)(iVar2 == 0);
      *(undefined1 *)(param_1 + 0x1088) = 0;
      return;
    }
  }
  return;
}

// 007162A0  FUN_007162a0  size=414  [between]
void __thiscall
FUN_007162a0(int param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5,int param_6
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

// 00716440  FUN_00716440  size=296  [between]
void FUN_00716440(int param_1)

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
        FUN_0070b5f0();
      }
    }
    else if (iVar3 != 0) {
      FUN_0070b670();
    }
    FUN_0040b190();
    iVar1 = FUN_00a82090("EmC010Magazine",0x3c041,local_90);
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
          FUN_0070b630();
          return;
        }
        FUN_00710ad0();
      }
    }
  }
  return;
}

// 00716570  FUN_00716570  size=743  [between]
void __thiscall FUN_00716570(int param_1,undefined4 param_2)

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

// 00716860  FUN_00716860  size=933  [between]
void __fastcall FUN_00716860(int param_1)

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

// 00716C10  EmC010::thunk_vf2B4  size=5  [class]
void __fastcall EmC010::thunk_vf2B4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0xea8) & 0x80000) == 0) {
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

// 00716C20  EmC010::thunk_vf2B8  size=5  [class]
void __fastcall EmC010::thunk_vf2B8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0xea8) & 0x80000) == 0) {
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

// 00716C30  FUN_00716c30  size=200  [callgraph]
void __fastcall FUN_00716c30(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x37d;
  if (param_1[300] == 0x2c170) {
    uVar1 = 0x577;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,(param_1[0x606] & 2U) << 5,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00716cbb;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00716cbb:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00716D00  FUN_00716d00  size=223  [callgraph]
void __fastcall FUN_00716d00(int param_1)

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
    FUN_00716440(0);
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

// 00716DE0  FUN_00716de0  size=165  [callgraph]
void __fastcall FUN_00716de0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2a1,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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

// 00716E90  FUN_00716e90  size=274  [callgraph]
void __fastcall FUN_00716e90(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00b2bca0(&DAT_0163b604,0);
      }
    }
  }
  return;
}

// 00716FB0  FUN_00716fb0  size=173  [callgraph]
void __fastcall FUN_00716fb0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x538,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00713960(&DAT_01646524,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00717046;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00717046:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00717060  FUN_00717060  size=173  [callgraph]
void __fastcall FUN_00717060(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x539,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00713960(&DAT_0164652c,1);
  }
  else if (param_1[0x187] != 1) goto LAB_007170f6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007170f6:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00717110  FUN_00717110  size=173  [callgraph]
void __fastcall FUN_00717110(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00713960(&DAT_01646534,1);
  }
  else if (param_1[0x187] != 1) goto LAB_007171a6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007171a6:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 007171C0  FUN_007171c0  size=173  [callgraph]
void __fastcall FUN_007171c0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_00713960(&DAT_0164653c,1);
  }
  else if (param_1[0x187] != 1) goto LAB_00717256;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00717256:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00717270  FUN_00717270  size=449  [callgraph]
void __fastcall FUN_00717270(int *param_1)

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
    FUN_00713960(&DAT_0163b604,1);
    FUN_0070fe80();
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x541,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00713960(&DAT_0163b604,1);
    break;
  case 4:
    FUN_00aa4080(0x542,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00713960(&DAT_01646544,1);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_0071728b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0071728b_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 00717450  FUN_00717450  size=351  [callgraph]
void __fastcall FUN_00717450(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b357ac;
      (**(code **)(*piVar2 + 4))(&DAT_01b357ac);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        return;
      }
    }
  }
  if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
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
                    /* WARNING: Could not recover jumptable at 0x007175aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00717600  EmC010::vf33C  size=2951  [class]
void __thiscall EmC010::vf33C(int *param_1,undefined4 *param_2,uint *param_3)

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
LAB_00717e0c:
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
    goto LAB_0071813f;
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
      if (iVar4 != 0) goto LAB_00717e0c;
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
          goto LAB_00718081;
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
          goto LAB_00718081;
        }
        iVar4 = FUN_0043f830(0x11);
        if (iVar4 == 0) {
          *param_2 = 0x15;
          param_3[6] = param_1[0x12d];
          goto LAB_00718081;
        }
        iVar4 = FUN_0043f830(0x12);
        if (iVar4 == 0) {
          *param_2 = 0x16;
          param_3[6] = param_1[0x12d];
          goto LAB_00718081;
        }
      }
      iVar4 = FUN_0043f830(0);
      if ((iVar4 != 0) && (iVar4 = FUN_00713d10(), iVar4 == 0x4d)) {
        iVar4 = FUN_0043f860(8);
        if ((iVar4 == 0) && (iVar4 = FUN_0043f860(2), iVar4 == 0)) {
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x18;
            param_3[6] = param_1[0x12d];
            goto LAB_00718081;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
            param_3[6] = param_1[0x12d];
            goto LAB_00718081;
          }
        }
        iVar4 = FUN_0043f860(0xb);
        if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
          iVar4 = FUN_00a8c760(5);
          if (iVar4 != 0) {
            *param_2 = 0x17;
            param_3[6] = param_1[0x12d];
            goto LAB_00718081;
          }
          iVar4 = FUN_00a8c760(6);
          if (iVar4 != 0) {
            *param_2 = 0x19;
            param_3[6] = param_1[0x12d];
            goto LAB_00718081;
          }
        }
        iVar4 = FUN_0043f860(8);
        if ((((iVar4 != 0) || (iVar4 = FUN_0043f860(9), iVar4 != 0)) ||
            (iVar4 = FUN_0043f860(10), iVar4 != 0)) &&
           (((iVar4 = FUN_0043f860(0xb), iVar4 != 0 || (iVar4 = FUN_0043f860(0xc), iVar4 != 0)) ||
            (iVar4 = FUN_0043f860(0xd), iVar4 != 0)))) {
          iVar4 = FUN_0043f860(1);
          if (iVar4 != 0) goto LAB_00717e0c;
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
          goto LAB_00718081;
        }
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = param_1[0x527];
        param_3[6] = param_1[0x12d];
LAB_00718059:
        iVar4 = FUN_00a8c760(5);
        if (iVar4 != 0) {
          *param_2 = 10;
        }
        iVar4 = FUN_00a8c760(6);
        if (iVar4 != 0) {
          *param_2 = 0xc;
        }
LAB_00718081:
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
              goto LAB_00717ffd;
            }
            goto LAB_00717e3b;
          }
          goto LAB_00717e46;
        }
        iVar4 = FUN_0043f830(0xb);
        if (iVar4 != 0) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
LAB_00717ec1:
            *param_2 = 4;
            goto LAB_00717ffd;
          }
          goto LAB_00717e46;
        }
        iVar4 = FUN_0043f830(0xc);
        if ((iVar4 != 0) || (iVar4 = FUN_0043f830(0xd), iVar4 != 0)) {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            iVar4 = FUN_0043f830(8);
            if ((iVar4 != 0) || (iVar4 = FUN_0043f830(9), iVar4 != 0)) goto LAB_00717ec1;
            *param_2 = 8;
            goto LAB_00717ffd;
          }
          goto LAB_00717e46;
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
                  goto LAB_007180ee;
                }
                *param_2 = 0x1e;
                param_2[1] = 1;
                goto LAB_00718136;
              }
              *param_2 = 1;
              param_2[1] = 1;
              param_3[6] = param_1[0x12d];
              goto LAB_00718059;
            }
            iVar4 = FUN_0043f830(1);
            if (iVar4 == 0) {
              iVar4 = param_1[0x139];
              goto joined_r0x00717f86;
            }
          }
          else {
            iVar4 = FUN_0043f830(1);
            if (iVar4 == 0) {
              iVar4 = param_1[0x139];
joined_r0x00717f86:
              if (iVar4 == 0) {
                *param_2 = 6;
                goto LAB_00717ffd;
              }
            }
          }
        }
        else {
          iVar4 = FUN_0043f830(1);
          if ((iVar4 == 0) && (param_1[0x139] == 0)) {
            *param_2 = 7;
            goto LAB_00717ffd;
          }
        }
        *param_2 = 1;
      }
      else {
        iVar4 = FUN_0043f830(1);
        if ((iVar4 == 0) && (param_1[0x139] == 0)) {
LAB_00717e3b:
          *param_2 = 5;
LAB_00717ffd:
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
          goto LAB_007180ee;
        }
LAB_00717e46:
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
LAB_007180ee:
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
LAB_00718136:
  param_3[6] = param_1[0x12d];
LAB_0071813f:
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

// 00718190  EmC010::vf338  size=138  [class]
void __thiscall EmC010::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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
    if ((iVar1 == 0x2c150) || (iVar1 == 0x2c152)) {
      uVar4 = 1;
    }
    if (iVar1 == 0x2c170) {
      uVar4 = 2;
    }
    (**(code **)(*param_1 + 0x344))(uVar4,1,1);
    (**(code **)(*param_1 + 0x364))(0x20010);
  }
  return;
}

// 00718220  FUN_00718220  size=655  [between]
void __thiscall FUN_00718220(int *param_1,uint param_2,int param_3,int param_4,int param_5)

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
        goto LAB_00718320;
      }
      if (param_1[0x139] != 0) {
        return;
      }
    }
  }
  else if ((param_2 == 0x1f) && (param_1[0x6e3] != 0x1f)) {
    if ((param_1[0x6e3] != -1) || (iVar1 = FUN_00a8cab0(), iVar1 == 0x20)) {
      param_1[0x6e3] = 0x1f;
      goto LAB_00718320;
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
    if (param_1[300] == 0x2c170) {
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
LAB_00718320:
  param_1[0x6e4] = param_3;
  param_1[0x6e5] = param_4;
  param_1[0x6e6] = param_5;
  return;
}

// 007184B0  FUN_007184b0  size=192  [between]
void __fastcall FUN_007184b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b357a8;
    (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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

// 00718570  FUN_00718570  size=206  [between]
void __fastcall FUN_00718570(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b357a8;
    (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = 0xa00;
      if ((*(int *)(param_1 + 0x4b0) == 0x2c150) || (*(int *)(param_1 + 0x4b0) == 0x2c152)) {
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

// 00718640  FUN_00718640  size=153  [between]
void __fastcall FUN_00718640(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b357a8;
    (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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

// 007186E0  FUN_007186e0  size=225  [between]
void __fastcall FUN_007186e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b357a8;
    (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = 0x520;
      if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
        uVar3 = 0;
      }
      FUN_00ac8b80(piVar2[0x13c]);
      FUN_00ac8ad0(2,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],uVar3,0xffffffff,0x35);
      FUN_00b2bc00(&DAT_0163b5f4);
      if ((*(int *)(param_1 + 0x4b0) == 0x2c150) || (*(int *)(param_1 + 0x4b0) == 0x2c152)) {
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

// 007187D0  FUN_007187d0  size=75  [between]
void FUN_007187d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b357a8;
    (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00b2bca0(param_1,param_2);
    }
  }
  return;
}

// 00718820  FUN_00718820  size=470  [between]
void __fastcall FUN_00718820(int param_1)

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
  iVar1 = FUN_00a82090("EmC010_RPG",0x3d003,0);
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
      puVar4 = &DAT_01b357a8;
      (**(code **)(*piVar3 + 4))(&DAT_01b357a8);
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
    FUN_007186e0();
    *(undefined4 *)(param_1 + 0x13a4) = 1;
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    FUN_0040b190();
    iVar1 = FUN_00a82090("EmC010RPGBullet",0x3d004,auStack_90);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01646590);
      return;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b357b0;
      (**(code **)(*piVar3 + 4))(&DAT_01b357b0);
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

// 00718A00  FUN_00718a00  size=154  [between]
void __fastcall FUN_00718a00(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b357ac;
      (**(code **)(*piVar2 + 4))(&DAT_01b357ac);
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

// 00718AA0  FUN_00718aa0  size=102  [between]
void __fastcall FUN_00718aa0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b357ac;
      (**(code **)(*piVar2 + 4))(&DAT_01b357ac);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00ac8b80(piVar2[0x13c]);
        FUN_0070da60();
        *(undefined4 *)(param_1 + 0x105c) = 0;
      }
    }
  }
  return;
}

// 00718B10  FUN_00718b10  size=231  [between]
void FUN_00718b10(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("EmC010_Hammer",0x3c080,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b357a8;
      (**(code **)(*piVar3 + 4))(&DAT_01b357a8);
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
    FUN_007186e0();
    return;
  }
  FUN_00dd5650(&DAT_016465d0);
  return;
}

// 00718C00  FUN_00718c00  size=326  [between]
void __thiscall FUN_00718c00(int param_1,int param_2)

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
      puVar6 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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
        puVar6 = &DAT_01b357a8;
        (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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

// 00718D50  FUN_00718d50  size=308  [between]
void __thiscall FUN_00718d50(int param_1,int param_2)

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
      puVar6 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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
        puVar6 = &DAT_01b357a8;
        (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
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

// 00718E90  FUN_00718e90  size=609  [between]
undefined4 __thiscall FUN_00718e90(int param_1,undefined4 param_2)

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
        goto LAB_007190bf;
      }
    }
  }
  if (iVar2 == -1) {
    return 0;
  }
LAB_007190bf:
  FUN_00718220(iVar2,0,0,0);
  FUN_0070dc50();
  *(undefined4 *)(param_1 + 0x1a7c) = param_2;
  return 1;
}

// 00719100  FUN_00719100  size=397  [between]
undefined4 __fastcall FUN_00719100(int *param_1)

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
         (((param_1[0x705] != 0 || ((param_1[0x3a9] & 0x8000000U) == 0)) &&
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
          iVar2 = FUN_007136c0();
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
        iVar3 = FUN_007136c0();
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

// 00719290  FUN_00719290  size=360  [between]
bool __fastcall FUN_00719290(int *param_1)

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
    FUN_00718220(0xb0002,0,0,0);
    FUN_00713e00(1,1);
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
      FUN_00718220(0xa001d,0,0,0);
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
      FUN_00718220(0xa0010,0,0,0);
    }
    iVar3 = FUN_00a8c760(6);
    if (iVar3 != 0) {
      FUN_00718220(0xa0011,0,0,0);
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
    FUN_00718220(0xa001d,0,0,0);
    return true;
  }
  return bVar4;
}

// 00719430  FUN_00719430  size=327  [between]
undefined4 __fastcall FUN_00719430(int param_1)

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
  iVar2 = FUN_0070e4e0();
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
  FUN_00718220(uVar4,0,0,0);
  FUN_00c27f40(6,0x44e10000);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x4000000;
  return 1;
}

// 00719580  FUN_00719580  size=59  [between]
void __fastcall FUN_00719580(int param_1)

{
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
    if (*(int *)(param_1 + 0x1814) != 1) {
      FUN_00718220(0xa0011,0,0,0);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfffdffff;
  }
  FUN_00718220(0xa001d,0,0,0);
  return;
}

// 007195C0  FUN_007195c0  size=68  [between]
void __fastcall FUN_007195c0(int *param_1)

{
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffdffff;
                    /* WARNING: Could not recover jumptable at 0x007195de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x605] == 1) {
                    /* WARNING: Could not recover jumptable at 0x007195f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00718220(0xa0010,0,0,0);
  return;
}

// 00719610  FUN_00719610  size=79  [between]
void __fastcall FUN_00719610(int param_1)

{
  if (*(int *)(param_1 + 0x14ac) == 5) {
    FUN_00718640();
    *(undefined4 *)(param_1 + 0x1074) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x14ac) != 6) {
    FUN_007184b0();
    *(undefined4 *)(param_1 + 0x1074) = 0;
    return;
  }
  FUN_00718c00(1);
  FUN_00718c00(0);
  *(undefined4 *)(param_1 + 0x1074) = 0;
  return;
}

// 00719660  FUN_00719660  size=220  [between]
void __thiscall FUN_00719660(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x40001) {
    if (param_2 == 0x40000) {
      FUN_00718d50(1);
      FUN_00718d50(0);
      FUN_00718640();
      return;
    }
    if (param_2 < 0x3000a) {
      if ((param_2 == 0x30009) || (param_2 == 0x20009)) goto LAB_0071972c;
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
LAB_0071972c:
      FUN_007184b0();
      FUN_007186e0();
      return;
    }
    if (param_2 != 0xd0002) {
      if (param_2 == 0x40001) {
        FUN_00718c00(1);
        FUN_00718c00(0);
        FUN_007186e0();
        return;
      }
      if (param_2 < 0xd0000) {
        return;
      }
      if (0xd0001 < param_2) {
        return;
      }
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xdfffffff;
      iVar1 = FUN_00711d60();
      if (iVar1 == 0) {
        return;
      }
      FUN_00b2bca0(&DAT_0163b604,0);
      return;
    }
  }
  FUN_00718570();
  FUN_00718640();
  return;
}

// 00719740  FUN_00719740  size=292  [between]
void __fastcall FUN_00719740(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x294] != 0) {
    iVar3 = param_1[300];
    uVar2 = 0;
    if ((iVar3 == 0x2c150) || (iVar3 == 0x2c152)) {
      uVar2 = 1;
    }
    if (iVar3 == 0x2c170) {
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
      FUN_00718220(0x60008,0,0,0);
      return;
    }
    iVar3 = FUN_00ac8a50();
    if (iVar3 != 0) {
      if (param_1[0x605] != 2) {
        return;
      }
      FUN_00712f60(0,0xbf800000);
    }
    FUN_00718220(0xb0000,0,0,0);
    return;
  }
  FUN_00712f60(0,0xbf800000);
  return;
}

// 00719870  FUN_00719870  size=873  [between]
void __fastcall FUN_00719870(int param_1)

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
LAB_0071996e:
    if ((((64.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
        (*(int *)(param_1 + 0x19c0) != 0)) ||
       ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    if ((((25.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
        (*(int *)(param_1 + 0x14ac) == 1)) && (*(int *)(param_1 + 0x1488) != 0)) {
      FUN_00718220(0xf,0,0,0);
      if ((((*(byte *)(param_1 + 0xeac) & 0x20) == 0) || (sVar1 = FUN_00dde2d0(0,3), sVar1 != 0)) ||
         ((iVar2 = FUN_00c15850(), iVar2 == 0 ||
          ((*(int *)(param_1 + 0x19b8) == 0 || (*(int *)(param_1 + 0x19c0) == 0)))))) {
        return;
      }
      goto LAB_00719a71;
    }
    if ((((9.0 <= *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
        (*(int *)(param_1 + 0x14ac) != 1)) || (*(int *)(param_1 + 0x1488) == 0)) {
      if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
        FUN_00718220(0x18,0,0,0);
      }
      if (*(float *)(param_1 + 0xa9c) <= 2.1816616) {
        if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
          FUN_00718220(0x17,0,0,0);
        }
        if (-2.1816616 <= *(float *)(param_1 + 0xa9c)) {
          if ((0.0 <= *(float *)(param_1 + 0x920)) && (*(int *)(param_1 + 0x19c0) != 0)) {
            return;
          }
          sVar1 = FUN_00dde2d0(0,1);
          if (sVar1 == 0) {
            FUN_00718220(0x11,0,0,0);
            return;
          }
          FUN_00718220(0x10,0,0,0);
          return;
        }
      }
      FUN_00718220(0x16,0,0,0);
      return;
    }
    FUN_00718220(0x12,0,0,0);
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
LAB_00719922:
    FUN_00718220(0x10000,0,0,0);
    uVar3 = FUN_00dde2a0(0,100);
    if ((uVar3 & 1) == 0) goto LAB_00719958;
    uVar4 = 0x10001;
  }
  else {
    if ((*(byte *)(param_1 + 0xeac) & 0x40) != 0) {
      if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_0071996e;
      goto LAB_00719922;
    }
LAB_00719a71:
    uVar4 = 0x10002;
  }
  FUN_00718220(uVar4,0,0,0);
LAB_00719958:
  FUN_00c27260(0x40200000);
  return;
}

// 00719BE0  FUN_00719be0  size=437  [between]
void __fastcall FUN_00719be0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    if (((((float)param_1[0x456] < 0.0) &&
         ((((iVar3 = FUN_00c15850(), iVar3 != 0 && (param_1[0x66e] != 0)) && (param_1[0x670] != 0))
          && ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))))) &&
        ((*(byte *)(param_1 + 0x3ab) & 0x20) != 0)) && ((float)param_1[0x2a3] < 25.0)) {
      FUN_00718220(0x10002,0,0,0);
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
        goto LAB_00719d44;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00718220(0x11,0,0,0);
      }
      else {
        FUN_00718220(0x10,0,0,0);
      }
    }
  }
LAB_00719d44:
  if ((*(byte *)(param_1 + 0x3ab) & 0x40) == 0) {
    if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x00719d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if ((float)param_1[0x2a3] < 4.0) {
                    /* WARNING: Could not recover jumptable at 0x00719d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00719DA0  FUN_00719da0  size=410  [between]
void __fastcall FUN_00719da0(int param_1)

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
      FUN_00718220(0x1a,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x1084) == 0) {
      return;
    }
    FUN_00718220(0x1b,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xeac) & 0x20) == 0) {
    if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_00719e8a;
    FUN_00718220(0x10000,0,0,0);
    uVar4 = FUN_00dde2a0(0,100);
    if ((uVar4 & 1) == 0) goto LAB_00719e8a;
    uVar5 = 0x10001;
  }
  else {
    uVar5 = 0x10002;
  }
  FUN_00718220(uVar5,0,0,0);
LAB_00719e8a:
  FUN_00c27260(0x40200000);
  return;
}

// 00719F40  FUN_00719f40  size=384  [between]
void __fastcall FUN_00719f40(int param_1)

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
      FUN_00718220(0x1a,0,0,0);
      return;
    }
    FUN_00718220(0x1b,0,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0xeac) & 0x20) == 0) {
    if (4.0 <= *(float *)(param_1 + 0xa8c)) goto LAB_0071a02a;
    FUN_00718220(0x10000,0,0,0);
    uVar4 = FUN_00dde2a0(0,100);
    if ((uVar4 & 1) == 0) goto LAB_0071a02a;
    uVar5 = 0x10001;
  }
  else {
    uVar5 = 0x10002;
  }
  FUN_00718220(uVar5,0,0,0);
LAB_0071a02a:
  FUN_00c27260(0x40200000);
  return;
}

// 0071A0C0  FUN_0071a0c0  size=295  [between]
void __fastcall FUN_0071a0c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0071a1e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x3ab) & 0x20) == 0) {
    if (4.0 <= (float)param_1[0x2a3]) goto LAB_0071a1a8;
    FUN_00718220(0x10000,0,0,0);
    uVar2 = FUN_00dde2a0(0,100);
    if ((uVar2 & 1) == 0) goto LAB_0071a1a8;
    uVar3 = 0x10001;
  }
  else {
    uVar3 = 0x10002;
  }
  FUN_00718220(uVar3,0,0,0);
LAB_0071a1a8:
  FUN_00c27260(0x40200000);
  return;
}

// 0071A1F0  FUN_0071a1f0  size=419  [between]
bool __thiscall FUN_0071a1f0(int *param_1,int *param_2)

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
    FUN_00718220(0xa000f,0,0,0);
  }
  bVar3 = (param_2[0x24] & 0x8000000U) != 0;
  if (bVar3) {
    FUN_00718220(0xa0012,0,0,0);
  }
  bVar4 = (param_2[0x24] & 0x2000000U) != 0;
  if (bVar4) {
    FUN_00718220(0xa0004,0,0,0);
  }
  bVar5 = (*(byte *)((int)param_2 + 0x93) & 1) != 0;
  if (bVar5) {
    FUN_00718220(0xa000c,0,0,0);
  }
  bVar6 = (param_2[0x24] & 0x800000U) != 0;
  if (bVar6) {
    FUN_00718220(0xa0005,0,0,0);
  }
  bVar7 = (param_2[0x24] & 0x80000000U) != 0;
  if (bVar7) {
    FUN_00718220(0xa0017,0,0,0);
  }
  bVar8 = (param_2[0x24] & 0x40000000U) != 0;
  if (bVar8) {
    FUN_00718220(0xa0018,0,0,0);
  }
  bVar9 = (param_2[0x24] & 0x20000000U) != 0;
  if (bVar9) {
    FUN_00718220(0xa0019,0,0,0);
  }
  bVar9 = bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))))));
  if ((*param_2 == 0x4c) || (*param_2 == 0x4b)) {
    FUN_00718220(0xa0014,0,0,0);
    bVar9 = true;
  }
  iVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar1 != 0) {
    param_1[0x607] = 0x1e;
    FUN_00718220(0xa0005,0,0,0);
    if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
      param_1[0x51d] = 1;
      FUN_00718220(0xa0007,0,0,0);
    }
    return true;
  }
  return bVar9;
}

// 0071A3A0  FUN_0071a3a0  size=396  [between]
void __fastcall FUN_0071a3a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00719100();
    if (iVar1 != 0) {
      FUN_00718220(0x110001,0,0,0);
    }
  }
  iVar1 = FUN_00a8c760(0xf);
  if (((iVar1 != 0) &&
      (((*(int *)(param_1 + 0x4b0) == 0x2c150 || (*(int *)(param_1 + 0x4b0) == 0x2c152)) &&
       (*(int *)(param_1 + 0x14ac) == 1)))) &&
     ((*(int *)(param_1 + 0x1488) != 0 && (*(float *)(param_1 + 0xa8c) < 25.0)))) {
    FUN_00718220(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xa8c) < 6.25) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10001,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
      if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10005,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
    }
  }
  return;
}

// 0071A530  FUN_0071a530  size=213  [between]
undefined4 __fastcall FUN_0071a530(int param_1)

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
    iVar2 = FUN_007136c0();
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
        FUN_00718220(sVar1 + 0x1a,uVar4,uVar5,uVar6);
        *(undefined4 *)(param_1 + 0x1150) = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 0071A610  FUN_0071a610  size=300  [between]
undefined4 __fastcall FUN_0071a610(int param_1)

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
    iVar2 = FUN_007136c0();
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x4b0) != 0x2c170) && (*(float *)(param_1 + 0xa8c) < 6.25)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          FUN_00718220(0x10001,0,0,0);
          if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
            FUN_00718220(0x10005,0,0,0);
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
      FUN_00718220(sVar1 + 0x10010,uVar3,uVar4,uVar5);
      return 1;
    }
  }
  return 0;
}

// 0071A740  FUN_0071a740  size=358  [between]
void __fastcall FUN_0071a740(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if (((iVar1 != 0) &&
      (((*(int *)(param_1 + 0x4b0) == 0x2c150 || (*(int *)(param_1 + 0x4b0) == 0x2c152)) &&
       (*(int *)(param_1 + 0x14ac) == 1)))) &&
     ((*(int *)(param_1 + 0x1488) != 0 && (*(float *)(param_1 + 0xa8c) < 25.0)))) {
    FUN_00718220(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xa8c) < 6.25) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10001,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
      if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10005,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
    }
  }
  return;
}

// 0071A8B0  FUN_0071a8b0  size=535  [between]
void __fastcall FUN_0071a8b0(int *param_1)

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
    goto LAB_0071a9cb;
  }
  FUN_00ac82f0();
  iVar2 = param_1[300];
  uVar3 = 0x19f;
  if (iVar2 == 0x2c170) {
    uVar3 = 0x548;
  }
  if (2.4674013 <= (float)param_1[0x245] * (float)param_1[0x245]) {
LAB_0071a912:
    if (iVar2 != 0x2c170) goto LAB_0071a91a;
  }
  else {
    uVar3 = 0x1a0;
    if (iVar2 == 0x2c170) {
      uVar3 = 0x54a;
      goto LAB_0071a912;
    }
LAB_0071a91a:
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
  FUN_00713960(&DAT_0163b604,1);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_0070fe80();
LAB_0071a9cb:
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_0071a530();
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
        FUN_00718220(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_0071a610();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00718220(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071AAD0  FUN_0071aad0  size=759  [between]
void __fastcall FUN_0071aad0(int *param_1)

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
    FUN_0070fe80();
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
    goto LAB_0071acab;
  case 3:
LAB_0071acab:
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
        FUN_0070db80(param_1[0x66d]);
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        FUN_00718220(0x23,0,0,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_0071ab12_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0xd);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
      FUN_0070db80(param_1[0x66d]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00718220(0x23,0,0,0);
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
switchD_0071ab12_default:
  return;
}

// 0071ADE0  FUN_0071ade0  size=362  [between]
void __fastcall FUN_0071ade0(int *param_1)

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
    FUN_0070fe80();
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
        FUN_00718220(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_0071a610();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00718220(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071AF50  FUN_0071af50  size=983  [between]
void __fastcall FUN_0071af50(int *param_1)

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
    if (param_1[300] == 0x2c170) {
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
    FUN_0070fe80();
    break;
  case 1:
    break;
  case 2:
    uVar6 = 0x4c4;
    if (param_1[300] == 0x2c170) {
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
    goto LAB_0071b20b;
  case 3:
LAB_0071b20b:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 0x324))();
    if (iVar5 == 0) {
      return;
    }
LAB_0071b23f:
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    uVar6 = 0x4c5;
    if (param_1[300] == 0x2c170) {
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
    FUN_0070db80(param_1[0x66d]);
    iVar5 = FUN_00719290();
    if (iVar5 != 0) {
      return;
    }
    if (param_1[0x139] == 0) {
      FUN_00719580();
      return;
    }
    goto LAB_0071b23f;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_0071af7b_default;
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
switchD_0071af7b_default:
  return;
}

// 0071B350  FUN_0071b350  size=82  [between]
void __fastcall FUN_0071b350(int *param_1)

{
  int iVar1;
  
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 3) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00718220(0xa0009,0,0,0);
    }
  }
  return;
}

// 0071B3B0  FUN_0071b3b0  size=451  [between]
void __fastcall FUN_0071b3b0(int *param_1)

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
    if (param_1[300] == 0x2c170) {
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
    FUN_0070fe80();
    (**(code **)(*param_1 + 0x220))(0x41000000);
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0x1a8;
    if (param_1[300] == 0x2c170) {
      uVar2 = 0x54d;
    }
    FUN_00aa4080(uVar2,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00718220(0xa0009,0,0,0);
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

// 0071B590  FUN_0071b590  size=296  [between]
void __fastcall FUN_0071b590(int param_1)

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
    FUN_0070fe80();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00718220(0xa0008,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071B6C0  FUN_0071b6c0  size=70  [between]
void __fastcall FUN_0071b6c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x60d] == 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00718220(0xa0009,0,0,0);
  }
  return;
}

// 0071B710  FUN_0071b710  size=252  [between]
void __fastcall FUN_0071b710(int param_1)

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
    FUN_0070fe80();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00718220(0xa0008,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071B810  FUN_0071b810  size=87  [between]
void __fastcall FUN_0071b810(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_0070fe80();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00718220(0xa0009,0,0,0);
  }
  return;
}

// 0071B870  FUN_0071b870  size=358  [between]
void __fastcall FUN_0071b870(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if (((iVar1 != 0) &&
      (((*(int *)(param_1 + 0x4b0) == 0x2c150 || (*(int *)(param_1 + 0x4b0) == 0x2c152)) &&
       (*(int *)(param_1 + 0x14ac) == 1)))) &&
     ((*(int *)(param_1 + 0x1488) != 0 && (*(float *)(param_1 + 0xa8c) < 25.0)))) {
    FUN_00718220(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xa8c) < 6.25) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10001,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
      if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10005,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
    }
  }
  return;
}

// 0071B9E0  FUN_0071b9e0  size=346  [between]
void __fastcall FUN_0071b9e0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar2 == 0) {
    uVar4 = 0x1a9;
    if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
      uVar4 = 0x54e;
    }
    uVar3 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,0x3c888889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0070fe80();
LAB_0071bac7:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto LAB_0071bb25;
    fVar1 = *(float *)(param_1 + 0x19b4) * 60.0;
    *(float *)(param_1 + 0x1158) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1158) = fVar1 + 120.0;
    }
    iVar2 = FUN_00719290();
    if (iVar2 != 0) goto LAB_0071bb25;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 3;
      goto LAB_0071bb25;
    }
  }
  else {
    if (iVar2 == 1) goto LAB_0071bac7;
    if (iVar2 != 2) {
      return;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) goto LAB_0071bb25;
    fVar1 = *(float *)(param_1 + 0x19b4) * 60.0;
    *(float *)(param_1 + 0x1158) = fVar1;
    if ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0) {
      *(float *)(param_1 + 0x1158) = fVar1 + 120.0;
    }
    iVar2 = FUN_00719290();
    if (iVar2 != 0) goto LAB_0071bb25;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      goto LAB_0071bb25;
    }
  }
  FUN_00719580();
LAB_0071bb25:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071BB40  FUN_0071bb40  size=396  [between]
void __fastcall FUN_0071bb40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00719100();
    if (iVar1 != 0) {
      FUN_00718220(0x110001,0,0,0);
    }
  }
  iVar1 = FUN_00a8c760(0xf);
  if (((iVar1 != 0) &&
      (((*(int *)(param_1 + 0x4b0) == 0x2c150 || (*(int *)(param_1 + 0x4b0) == 0x2c152)) &&
       (*(int *)(param_1 + 0x14ac) == 1)))) &&
     ((*(int *)(param_1 + 0x1488) != 0 && (*(float *)(param_1 + 0xa8c) < 25.0)))) {
    FUN_00718220(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xa8c) < 6.25) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10001,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
      if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10005,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
    }
  }
  return;
}

// 0071BCD0  FUN_0071bcd0  size=492  [between]
void __fastcall FUN_0071bcd0(int *param_1)

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
    FUN_0070fe80();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a952e0(0,0x41200000);
  if (iVar3 != 0) {
    FUN_0071a530();
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
        FUN_00718220(0x20005,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00718220(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071BEC0  FUN_0071bec0  size=201  [between]
void __fastcall FUN_0071bec0(int param_1)

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
    if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
      uVar4 = 0x564;
    }
    uVar2 = 0x8000000;
    if ((*(byte *)(param_1 + 0x1818) & 1) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(uVar4,0,uVar1,0x3f800000,uVar2,0xbf800000,0x3f800000);
    FUN_0070fe80();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00718220(0xa0015,2,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071BFA0  FUN_0071bfa0  size=358  [between]
void __fastcall FUN_0071bfa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if (((iVar1 != 0) &&
      (((*(int *)(param_1 + 0x4b0) == 0x2c150 || (*(int *)(param_1 + 0x4b0) == 0x2c152)) &&
       (*(int *)(param_1 + 0x14ac) == 1)))) &&
     ((*(int *)(param_1 + 0x1488) != 0 && (*(float *)(param_1 + 0xa8c) < 25.0)))) {
    FUN_00718220(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xa8c) < 6.25) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10001,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
      if (2.0943952 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x10005,0,0,0);
        FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
      }
    }
  }
  return;
}

// 0071C110  FUN_0071c110  size=267  [between]
void __fastcall FUN_0071c110(int param_1)

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
    FUN_0070fe80();
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
      FUN_007195c0();
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071C220  FUN_0071c220  size=786  [between]
void __fastcall FUN_0071c220(int *param_1)

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
      FUN_00713960(&DAT_0163b604,1);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0070fe80();
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
                    /* WARNING: Could not recover jumptable at 0x0071c47f. Too many branches */
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
      FUN_00719580();
      return;
    }
  }
  return;
}

// 0071C560  FUN_0071c560  size=230  [between]
void __fastcall FUN_0071c560(int param_1)

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
    if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
      uVar2 = 0x554;
    }
    FUN_00aa4080(uVar2,0,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0070fe80();
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
  if ((iVar3 != 0) && (iVar3 = FUN_00719290(), iVar3 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_00719580();
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071C650  FUN_0071c650  size=483  [between]
void __fastcall FUN_0071c650(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar4 = 0x1aa;
    if (param_1[300] == 0x2c170) {
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
      FUN_00718220(0x1b,0,0,0);
      return;
    }
    FUN_00718220(0x1a,0,0,0);
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) goto LAB_0071c81e;
  param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
  if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
  }
  if ((param_1[0x41d] == 0) || (param_1[0x52b] == 0)) {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x52b] != 1) ||
       (((param_1[0x2a1] == 0 || (iVar2 = FUN_00c15850(), iVar2 == 0)) ||
        (6.25 <= (float)param_1[0x2a3])))) goto LAB_0071c81e;
    if (1.0471976 < (float)param_1[0x2a8]) {
      FUN_00718220(0x10001,0,0,0);
    }
    if ((float)param_1[0x2a8] <= 2.0943952) goto LAB_0071c81e;
    uVar4 = 0x10005;
  }
  else {
    uVar4 = 0x23;
  }
  FUN_00718220(uVar4,0,0,0);
LAB_0071c81e:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071C840  FUN_0071c840  size=838  [between]
void __fastcall FUN_0071c840(int *param_1)

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
LAB_0071ca68:
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
LAB_0071cae2:
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
      FUN_0070db80(param_1[0x66d]);
      iVar2 = FUN_00719290();
      if (iVar2 != 0) {
        return;
      }
      if (param_1[0x139] != 0) goto LAB_0071cae2;
      goto LAB_0071cb75;
    case 6:
      goto LAB_0071c912;
    default:
      break;
    }
switchD_0071c86f_default:
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
      FUN_0070db80(param_1[0x66d]);
      if (param_1[0x139] != 0) {
        param_1[0x187] = 4;
        return;
      }
LAB_0071cb75:
      FUN_00719580();
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
    if (param_1[0x139] != 0) goto LAB_0071ca68;
  case 3:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0070db80(param_1[0x66d]);
      if (param_1[0x139] == 0) {
        FUN_00719580();
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
    goto switchD_0071c86f_default;
  }
LAB_0071c912:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071CBC0  FUN_0071cbc0  size=273  [between]
void __fastcall FUN_0071cbc0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = 0x1db;
    if (param_1[300] == 0x2c170) {
      uVar1 = 0x555;
    }
    param_1[0x225] = 0x3dcccccd;
    FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0070fe80();
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
    iVar2 = FUN_00719290();
    if (iVar2 == 0) {
      if (param_1[0x139] == 0) {
        FUN_00719580();
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  return;
}

// 0071CCE0  FUN_0071cce0  size=222  [between]
void __fastcall FUN_0071cce0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x318))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  param_1[0x69e] = 1;
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
    FUN_00718220(0xa0004,0,0,0);
    (**(code **)(*param_1 + 0x314))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071CDC0  FUN_0071cdc0  size=179  [between]
void __fastcall FUN_0071cdc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    FUN_00aa4080(0x191,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0070fe80();
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
  if ((iVar1 != 0) && (iVar1 = FUN_00719290(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_007195c0();
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  return;
}

// 0071CE80  FUN_0071ce80  size=179  [between]
void __fastcall FUN_0071ce80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    FUN_00aa4080(0x192,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0070fe80();
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
  if ((iVar1 != 0) && (iVar1 = FUN_00719290(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_007195c0();
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  return;
}

// 0071CF40  FUN_0071cf40  size=637  [between]
void __fastcall FUN_0071cf40(int *param_1)

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
LAB_0071cfa8:
        uVar6 = 0x48f;
      }
      else if (param_1[0x3a6] == 9) goto LAB_0071cfa8;
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
        FUN_00718aa0();
        param_1[0x52c] = 0;
      }
      param_1[0x3ab] = param_1[0x3ab] & 0xffff7fff;
    }
    if (param_1[0x41d] != 0) {
      param_1[0x52b] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0070fe80();
    param_1[0x5a4] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0071d161;
  iVar4 = FUN_00a94ce0(0);
  if ((iVar4 != 0) && (iVar4 = FUN_00719290(), iVar4 == 0)) {
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
LAB_0071d161:
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

// 0071D1C0  FUN_0071d1c0  size=624  [between]
void __fastcall FUN_0071d1c0(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar6 = 0x379;
  if (param_1[300] == 0x2c170) {
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
        FUN_00718aa0();
        param_1[0x52c] = 0;
      }
      param_1[0x3ab] = param_1[0x3ab] & 0xffff7fff;
    }
    if (param_1[0x41d] != 0) {
      param_1[0x52b] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0070fe80();
  }
  else if (param_1[0x187] != 1) goto LAB_0071d404;
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
LAB_0071d404:
  iVar5 = FUN_00a8c760(0xe);
  if ((iVar5 != 0) && (param_1[0x139] == 0)) {
    FUN_00e5e0c0("em0010_vo_line_amputate_arm1",param_1,0xffffffff,0);
  }
  return;
}

// 0071D430  FUN_0071d430  size=938  [between]
void __fastcall FUN_0071d430(int *param_1)

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
    if (param_1[0x3a8] != 0) goto LAB_0071d663;
    iVar4 = param_1[300];
    uVar6 = 0x1b0;
    if (iVar4 == 0x2c170) {
      uVar6 = 0x55a;
    }
    break;
  case 1:
    goto switchD_0071d459_caseD_1;
  case 2:
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    FUN_00713070(param_1[0x606]);
    if ((param_1[0x3a9] & 0x100U) != 0) {
      FUN_00718220(0xb000b,0,0,0);
    }
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_0071d459_default;
  }
  uVar5 = 0x8000000;
  switch(param_1[0x3a6]) {
  case 1:
    uVar6 = 0x1b0;
    if (iVar4 == 0x2c170) {
      uVar6 = 0x55a;
    }
    switch(param_1[0x527]) {
    case 0:
      uVar6 = 0x1b0;
      if (iVar4 == 0x2c170) {
        uVar6 = 0x55a;
      }
      break;
    case 1:
      uVar6 = 0x1b1;
      if (iVar4 == 0x2c170) {
        uVar6 = 0x55b;
      }
      break;
    case 2:
      uVar6 = 0x1b2;
      if (iVar4 == 0x2c170) {
        uVar6 = 0x55c;
      }
      break;
    case 3:
      uVar6 = 0x1b2;
      if (iVar4 == 0x2c170) {
        uVar6 = 0x55c;
      }
      uVar5 = 0x8000040;
    }
    if ((param_1[0x3a9] & 0x20000U) != 0) {
      uVar6 = 0x4a1;
    }
    goto switchD_0071d554_default;
  case 2:
    uVar6 = 0x1b4;
    if (iVar4 == 0x2c170) {
      uVar6 = 0x55e;
    }
    switch(param_1[0x527]) {
    case 0:
      uVar6 = 0x1b6;
      if (iVar4 == 0x2c170) {
        uVar6 = 0x560;
      }
      bVar3 = FUN_00dde2a0(0,100);
      if ((bVar3 & 1) != 0) {
        uVar6 = 0x192;
      }
      break;
    case 1:
      uVar6 = 0x1b7;
      if (iVar4 == 0x2c170) {
        uVar6 = 0x561;
      }
      break;
    case 2:
      uVar5 = 0x8000040;
    case 3:
      uVar6 = 0x1b9;
    }
    goto switchD_0071d554_default;
  case 3:
    uVar6 = 0x364;
    break;
  case 10:
  case 0x17:
    uVar6 = 0x4d7;
    goto switchD_0071d554_default;
  case 0xb:
  case 0x18:
    uVar6 = 0x4d6;
    goto switchD_0071d554_default;
  case 0xc:
  case 0x1a:
    goto switchD_0071d4a1_caseD_c;
  case 0xd:
    uVar6 = 0x4db;
    goto switchD_0071d554_default;
  case 0x13:
    uVar6 = 0x4f0;
    if (param_1[0x527] == 1) goto switchD_0071d4a1_caseD_15;
    break;
  case 0x14:
    uVar6 = 0x4f2;
    break;
  case 0x15:
switchD_0071d4a1_caseD_15:
    uVar6 = 0x4f1;
    break;
  case 0x16:
    uVar6 = 0x4f0;
    break;
  case 0x19:
    FUN_00dde300(0x3f666666,0x3f99999a);
    goto switchD_0071d4a1_caseD_c;
  }
switchD_0071d4a1_caseD_4:
  FUN_00aa4080(uVar6,0,0x3c888889,0x3f800000,uVar5,0xbf800000,0x3f800000);
LAB_0071d663:
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00712f60(param_1[0x606],0xbf800000);
  fVar7 = (float10)FUN_00dde300(0,0x42700000);
  param_1[0x248] = (int)(float)fVar7;
switchD_0071d459_caseD_1:
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
switchD_0071d459_default:
  iVar4 = FUN_00a8c760(0xc);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071d757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))();
    return;
  }
  return;
switchD_0071d4a1_caseD_c:
  uVar6 = 0x4dc;
switchD_0071d554_default:
  FUN_00dde300(0x3f666666,0x3f99999a);
  goto switchD_0071d4a1_caseD_4;
}

// 0071D860  FUN_0071d860  size=471  [between]
void __fastcall FUN_0071d860(int param_1)

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
    FUN_00712f60(*(undefined4 *)(param_1 + 0x1818),0xbf800000);
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
    FUN_00713070(*(undefined4 *)(param_1 + 0x1818));
    if ((*(uint *)(param_1 + 0xea4) & 0x100) != 0) {
      FUN_00718220(0xb000b,0,0,0);
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

// 0071DA50  FUN_0071da50  size=157  [between]
void __fastcall FUN_0071da50(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x175c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_0070fe80();
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    FUN_00713070(*(undefined4 *)(param_1 + 0x1818));
    if ((*(uint *)(param_1 + 0xea4) & 0x100) != 0) {
      FUN_00718220(0xb000b,0,0,0);
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

// 0071DAF0  FUN_0071daf0  size=377  [between]
void __fastcall FUN_0071daf0(int *param_1)

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
    FUN_0070fe80();
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
      FUN_0070e740((float)(fVar3 - (float10)0.011111111));
      return;
    }
    (**(code **)(*param_1 + 0x364))(0x20010);
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    FUN_0070e740(unaff_ESI);
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] < 0.0) &&
     (param_1[0x187] = param_1[0x187] + 1, (param_1[0x3a9] & 0x100U) != 0)) {
    FUN_00718220(0xb000b,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0071DC70  FUN_0071dc70  size=50  [between]
void FUN_0071dc70(void)

{
  undefined4 uVar1;
  
  FUN_00a81330();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  FUN_00718220(6,0,0,0);
  return;
}

// 0071DCB0  EmC010::vf108  size=138  [class]
void __thiscall EmC010::vf108(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 0:
    FUN_00718220(0xb,0,0,0);
    return;
  case 1:
    uVar2 = 0x23;
    break;
  case 2:
    uVar2 = 0x13;
    break;
  case 3:
    FUN_007184b0();
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x41d] = 0;
    (*pcVar1)();
    return;
  default:
    (**(code **)(*param_1 + 0x34c))();
    FUN_00dd5650(&DAT_0164664c);
    return;
  }
  FUN_00718220(uVar2,0,0,0);
  FUN_007184b0();
  param_1[0x41d] = 0;
  return;
}

// 0071DD50  EmC010::vf264  size=705  [class]
undefined4 __thiscall EmC010::vf264(int *param_1,int param_2)

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
    FUN_00718220(0,0,0,0);
    param_1[0x3a9] = param_1[0x3a9] | 0x80;
  }
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if ((param_1[0x1f6] != 0) && (*(int *)(param_1[0x1f6] + 0x810) != 0)) {
    FUN_00a8d580(0x40000);
  }
  if (param_1[0x2c9] != -1) {
    FUN_00718220(0x100005,0,0,0);
  }
  if (param_1[299] == 1) {
    param_1[0x5e0] = (int)((float)(int)*(short *)(param_2 + 4) * 45.0 + 300.0);
    iVar1 = FUN_00c19e40(*(undefined4 *)(param_2 + 0xec),(int)*(short *)(param_2 + 2));
    if ((iVar1 != 0) && (FUN_00a7c8a0(), param_1[0x1d9] != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_008e26e0(uVar2);
    }
  }
  FUN_0070e580();
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
    if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
      FUN_00ac85c0(5,0xb5);
    }
    if (param_1[300] == 0x2c170) {
      FUN_00ac85c0(5,0xb6);
    }
    FUN_00a8eea0();
    uVar2 = FUN_00fdbc60();
    FUN_00a8edf0(uVar2);
  }
  return 1;
}

// 0071E020  FUN_0071e020  size=1296  [between]
void __fastcall FUN_0071e020(int *param_1)

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
  if (((param_1[0x3aa] & 0x80000U) == 0) && (iVar4 = FUN_00a82e60(), iVar4 == 0)) {
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
          FUN_00718220(0x23,0,0,0);
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
    if (param_1[0x5fa] != 0) goto LAB_0071e309;
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
    if ((NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) && (!bVar3)) goto LAB_0071e309;
  }
  local_20 = *pfVar5;
  local_1c = (float)param_1[0x5e9];
  local_18 = (float)param_1[0x5ea];
  local_14 = param_1[0x5eb];
  param_1[0x3a9] = param_1[0x3a9] & 0xffbfffff;
LAB_0071e309:
  FUN_00a8e880(&local_20);
  if (((4.0 <= ABS(local_1c - (float)param_1[0x11])) && (iVar4 = FUN_00a8d3d0(7), iVar4 == 0)) &&
     (iVar4 = FUN_00a8d3d0(8), iVar4 == 0)) {
    param_1[0x51c] = 1;
    return;
  }
  return;
}

// 0071E530  EmC010::vf268  size=1015  [class]
undefined4 __thiscall
EmC010::vf268(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

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
  
  if ((param_1[0x139] != 0) && ((param_1[0x3a9] & 0x100U) == 0)) {
switchD_0071e587_caseD_3:
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
    goto switchD_0071e587_caseD_3;
  case 4:
    param_1[0x5e0] = (int)((float)(int)(short)param_1[0x2ad] * 45.0 + 10.0);
    return 1;
  case 9:
    param_1[0x2fa] = 0;
    return 1;
  case 10:
    iVar2 = param_1[0x5f8];
    if (iVar2 == 6) {
      uVar3 = FUN_007136c0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        FUN_00718220(0xd0001,0,0,0);
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
    FUN_00718220(10,0,0,0);
    (**(code **)(*param_1 + 0x314))();
    FUN_0070fe80();
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
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffeff;
    param_1[0x139] = 1;
    uVar4 = 0xb0002;
    break;
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
    if (param_1[0x2c2] == -1) {
      return 1;
    }
    FUN_00a8d790(&local_2c);
    param_1[0x5e4] = local_2c;
    param_1[0x5e5] = local_28;
    uVar4 = 7;
    param_1[0x5e6] = local_24;
    param_1[0x5e7] = 0x3f800000;
  }
  FUN_00718220(uVar4,0,0,0);
  FUN_0070fe80();
  return 1;
}

// 0071E990  EmC010::vf50  size=447  [class]
void __fastcall EmC010::vf50(int param_1)

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
  *(float *)(param_1 + 0x1c18) = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x13a8) != 0) {
    if (*(int *)(param_1 + 0x1b6c) != 0) {
      FUN_00716570(*(int *)(param_1 + 0x1b6c) + 0x40);
    }
    *(undefined4 *)(param_1 + 0x13a8) = 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  FUN_00ac95d0();
  return;
}

// 0071EB50  EmC010::vf150  size=337  [class]
void __thiscall EmC010::vf150(int param_1,int param_2,int param_3)

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
        FUN_00718220(0xa000e,0,0,0);
        return;
      }
      if (param_2 == 0x25) {
        FUN_007100f0();
        if ((DAT_01bea094 & 0x20000) == 0) {
          FUN_00718220(0xb0005,0,0,0);
          return;
        }
        FUN_00718220(0xb0008,0,0,0);
        return;
      }
      if (param_2 == 0x26) {
        FUN_007100f0();
        if ((DAT_01bea094 & 0x20000) == 0) {
          FUN_00718220(0xb0006,0,0,0);
          return;
        }
        FUN_00718220(0xb0009,0,0,0);
        return;
      }
      if (param_2 != 0x27) {
        return;
      }
      FUN_00718220(0xb0007,0,0,0);
      FUN_007100f0();
      return;
    }
    uVar1 = 6;
  }
  FUN_00718220(0xa0022,uVar1,0,0);
  FUN_007100f0();
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x8000000;
  return;
}

// 0071ECB0  FUN_0071ecb0  size=260  [between]
void __fastcall FUN_0071ecb0(int *param_1)

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
    if ((param_1[0x3aa] & 0x40000U) != 0) goto LAB_0071eda7;
    uVar2 = 0x13;
  }
  FUN_00718220(uVar2,0,0,0);
LAB_0071eda7:
                    /* WARNING: Could not recover jumptable at 0x0071edb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x314))();
  return;
}

// 0071EDC0  FUN_0071edc0  size=713  [between]
void __fastcall FUN_0071edc0(int *param_1)

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
      FUN_00718220(uVar4,0,0,0);
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

// 0071F0A0  FUN_0071f0a0  size=760  [between]
void __fastcall FUN_0071f0a0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0071f1af. Too many branches */
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
    if (param_1[300] == 0x2c170) {
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
      FUN_00718220(uVar4,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x0071f392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  }
  return;
}

// 0071F3B0  FUN_0071f3b0  size=669  [between]
void __fastcall FUN_0071f3b0(int *param_1)

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
      FUN_00718220(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00718220(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00718220(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10005,0,0,0);
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
        goto LAB_0071f629;
      }
    }
    else if (param_1[0x670] != 0) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x526] == 0) {
        return;
      }
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00718220(sVar2 + 0x1c,uVar4,uVar5,uVar6);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 != 1) {
        return;
      }
      FUN_00718220(0x110001,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00718220(0x11,0,0,0);
      }
      else {
        FUN_00718220(0x10,0,0,0);
      }
    }
  }
LAB_0071f629:
  if (16.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0071f64b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0071F650  FUN_0071f650  size=658  [between]
void __fastcall FUN_0071f650(int *param_1)

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
      FUN_007184b0();
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
                    /* WARNING: Could not recover jumptable at 0x0071f8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        FUN_00718220(0x23,0,0,0);
        fVar4 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x71);
        param_1[0x6a0] = (int)(float)(fVar4 * (float10)60.0);
        return;
      }
      if (param_1[0x2c2] == -1) {
                    /* WARNING: Could not recover jumptable at 0x0071f8dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00718220(0,0,0,0);
      param_1[0x3a9] = param_1[0x3a9] | 0x80;
      return;
    }
  }
  return;
}

// 0071F900  FUN_0071f900  size=160  [between]
void __fastcall FUN_0071f900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x1bcc) != 0) {
      *(undefined4 *)(param_1 + 0x1b9c) = 0;
      *(undefined4 *)(param_1 + 0x1ba0) = 1;
      FUN_00718220(0x1000a,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00718220(0x23,0,0,0);
    }
  }
  return;
}

// 0071F9A0  FUN_0071f9a0  size=514  [between]
void __fastcall FUN_0071f9a0(int *param_1)

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
  if (param_1[300] == 0x2c170) {
    uVar4 = 0x525;
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
LAB_0071f9f3:
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
    if (iVar3 == 1) goto LAB_0071f9f3;
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
    if (fVar1 < 2.25 == (fVar1 == 2.25)) goto LAB_0071fb2d;
  }
  else {
    cVar2 = FUN_00c9db20(0);
    iVar3 = FUN_00a97e60(0x3f800000,0);
    if ((iVar3 != 0) && (cVar2 != '\0')) {
      FUN_00718220(1,0,0,0);
    }
    iVar3 = FUN_00a85630();
    if (iVar3 != 1) goto LAB_0071fb2d;
  }
  FUN_00718220(1,0,0,0);
LAB_0071fb2d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 0071FBB0  FUN_0071fbb0  size=109  [between]
void __fastcall FUN_0071fbb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
      return;
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00718220(0x23,0,0,0);
    }
  }
  return;
}

// 0071FC20  FUN_0071fc20  size=440  [between]
void __fastcall FUN_0071fc20(int param_1)

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
      FUN_00718220(0,1,0,0);
      return;
    }
  }
  return;
}

// 0071FDE0  FUN_0071fde0  size=156  [between]
void __fastcall FUN_0071fde0(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x187] != 0) && ((*(byte *)(param_1 + 0x3a9) & 4) != 0)) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
    if (param_1[0x688] == 0) {
      iVar1 = FUN_00ac4d60(4);
      if (iVar1 != 0) {
        FUN_00718220(0x27,0,0,0);
        param_1[0x6e7] = 10;
        return;
      }
      iVar1 = FUN_00ac4d60(3);
      if (iVar1 != 0) {
        FUN_00718220(0x26,0,0,0);
        param_1[0x6e7] = 10;
        return;
      }
    }
    if ((float)param_1[0x2a4] < 10.0) {
      FUN_00a87ba0();
                    /* WARNING: Could not recover jumptable at 0x0071fe7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0071FE80  FUN_0071fe80  size=250  [between]
void __fastcall FUN_0071fe80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  else {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
      return;
    }
    iVar1 = FUN_0070e3f0();
    if (iVar1 != 0) {
      FUN_00718220(0x120000,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
      return;
    }
    iVar1 = FUN_0070e2a0();
    if (iVar1 != 0) {
      FUN_00718220(0x120004,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
      return;
    }
    iVar1 = FUN_0070e330();
    if (iVar1 != 0) {
      FUN_00718220(0x120001,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 7;
      return;
    }
  }
  if (*(int *)(param_1 + 0x1bcc) != 0) {
    *(undefined4 *)(param_1 + 0x1b9c) = 7;
    *(undefined4 *)(param_1 + 0x1ba0) = 0;
    FUN_00718220(0x1000a,0,0,0);
  }
  return;
}

// 0071FF80  FUN_0071ff80  size=574  [between]
void __fastcall FUN_0071ff80(int *param_1)

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
        FUN_00718220(0x23,0,0,0);
      }
      else {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    FUN_00a8e960(param_1[0x5f1]);
    uVar3 = 0x3e860a92;
    goto LAB_00720198;
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
      FUN_00718220(0x23,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  uVar3 = 0x3d0efa35;
LAB_00720198:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,uVar3,0);
  return;
}

// 007201C0  FUN_007201c0  size=68  [between]
void __fastcall FUN_007201c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
    }
  }
  return;
}

// 00720210  FUN_00720210  size=275  [between]
void __fastcall FUN_00720210(int param_1)

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
        FUN_00718220(7,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00720330  FUN_00720330  size=68  [between]
void __fastcall FUN_00720330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
    }
  }
  return;
}

// 00720380  FUN_00720380  size=200  [between]
void __fastcall FUN_00720380(int param_1)

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
        FUN_00718220(2,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00720450  FUN_00720450  size=170  [between]
void __fastcall FUN_00720450(int param_1)

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
  iVar1 = FUN_0070e3f0();
  if (iVar1 != 0) {
    FUN_00718220(0x120000,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 4;
    return;
  }
  iVar1 = FUN_0070e2a0();
  if (iVar1 == 0) {
    iVar1 = FUN_0070e330();
    if (iVar1 != 0) {
      FUN_00718220(0x120001,0,0,0);
      *(undefined4 *)(param_1 + 0x1b8c) = 4;
    }
    return;
  }
  FUN_00718220(0x120004,0,0,0);
  *(undefined4 *)(param_1 + 0x1b8c) = 4;
  return;
}

// 00720500  FUN_00720500  size=867  [between]
void __fastcall FUN_00720500(int *param_1)

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
LAB_007207b5:
      if (uVar20 != 0) {
        FUN_00718220(5,0,0,0);
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
    goto LAB_007207b5;
  default:
    break;
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  return;
}

// 00720880  FUN_00720880  size=54  [between]
void __fastcall FUN_00720880(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    FUN_00718220(0x23,0,0,0);
  }
  return;
}

// 007208C0  FUN_007208c0  size=309  [between]
void __fastcall FUN_007208c0(int param_1)

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
       ((*(float *)(param_1 + 0x1c18) < 0.01 && (*(int *)(param_1 + 0x1a30) != 0)))) {
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
      FUN_00718220(7,0,0,0);
    }
  }
  return;
}

// 00720A00  FUN_00720a00  size=1114  [between]
void __fastcall FUN_00720a00(int *param_1)

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
LAB_00720b95:
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
LAB_00720bbf:
    param_1[0x5e7] = iVar4;
    FUN_00718220(7,0,0,0);
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
    goto LAB_00720c93;
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
      goto LAB_00720bbf;
    }
    goto LAB_00720b95;
  default:
    goto switchD_00720a3e_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
switchD_00720a3e_default:
    return;
  }
LAB_00720c93:
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00720E90  FUN_00720e90  size=159  [between]
void __fastcall FUN_00720e90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00713e50();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00718220(6,0,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x1488) != 0) && (0 < *(int *)(param_1 + 0x61c))) {
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00718220(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00718220(0x23,0,0,0);
    }
  }
  return;
}

// 00720F30  FUN_00720f30  size=243  [between]
void __fastcall FUN_00720f30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x618) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
  }
  iVar1 = FUN_00713e50();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00718220(6,0,0,0);
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
    FUN_00718220(0,0,0,0);
    return;
  }
  FUN_00a8cb60(4);
  return;
}

// 00721030  FUN_00721030  size=354  [between]
void __fastcall FUN_00721030(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0072116c;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_00718220(0x110001,0,0,0);
    param_1[0x3aa] = param_1[0x3aa] | 0x2000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0072116c:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 007211A0  FUN_007211a0  size=317  [between]
void __fastcall FUN_007211a0(int *param_1)

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
    FUN_00713960(&DAT_01646524,1);
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_007212ba;
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00718220(0x10003,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007212ba:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 007212E0  FUN_007212e0  size=445  [between]
void __fastcall FUN_007212e0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_007212f6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((*(byte *)(param_1 + 0x3ab) & 0x80) != 0) {
      return;
    }
    iVar2 = param_1[300];
    if ((((iVar2 != 0x2c010) && (iVar2 != 0x2c140)) && (iVar2 != 0x2c142)) && (iVar2 != 0x2c144)) {
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
    FUN_00718220(0x10002,0,0,0);
    return;
  }
LAB_007212f6:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 007214A0  FUN_007214a0  size=445  [between]
void __fastcall FUN_007214a0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_007214b6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
  if (fVar4 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((*(byte *)(param_1 + 0x3ab) & 0x80) != 0) {
      return;
    }
    iVar2 = param_1[300];
    if ((((iVar2 != 0x2c010) && (iVar2 != 0x2c140)) && (iVar2 != 0x2c142)) && (iVar2 != 0x2c144)) {
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
    FUN_00718220(0x10002,0,0,0);
    return;
  }
LAB_007214b6:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00721660  FUN_00721660  size=154  [between]
void __fastcall FUN_00721660(int param_1)

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
      FUN_00718220(0x19,0,0,0);
    }
  }
  return;
}

// 00721700  FUN_00721700  size=154  [between]
void __fastcall FUN_00721700(int param_1)

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
      FUN_00718220(0x19,0,0,0);
    }
  }
  return;
}

// 007217A0  FUN_007217a0  size=154  [between]
void __fastcall FUN_007217a0(int param_1)

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
      FUN_00718220(0x19,0,0,0);
    }
  }
  return;
}

// 00721840  FUN_00721840  size=268  [between]
undefined4 __fastcall FUN_00721840(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
      (*(int *)(param_1 + 0x1488) != 0)) &&
     ((*(int *)(param_1 + 0x4b0) == 0x2c150 || (*(int *)(param_1 + 0x4b0) == 0x2c152)))) {
    if ((*(float *)(param_1 + 0xa8c) < 36.0) &&
       ((*(float *)(param_1 + 0xaa0) < 1.0471976 && (*(int *)(param_1 + 0x19b8) != 0)))) {
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 == 0) {
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00718220(sVar1 + 0x10010,uVar2,uVar3,uVar4);
        return 1;
      }
    }
    if (((*(int *)(param_1 + 0x1154) != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = 0;
      sVar1 = FUN_00dde2d0(0,3);
      FUN_00718220(sVar1 + 0x10010,uVar2,uVar3,uVar4);
      return 1;
    }
  }
  return 0;
}

// 00721950  FUN_00721950  size=518  [between]
void __fastcall FUN_00721950(int *param_1)

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
    if ((iVar1 != 0) && (iVar1 = FUN_00719290(), iVar1 == 0)) {
      if (param_1[0x6e3] == -1) {
                    /* WARNING: Could not recover jumptable at 0x00721b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00718220(param_1[0x6e3],0,0,0);
      return;
    }
  }
  return;
}

// 00721B80  FUN_00721b80  size=1246  [between]
void __fastcall FUN_00721b80(int *param_1)

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
    if (param_1[300] == 0x2c170) {
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
        goto LAB_00721f6e;
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
    goto LAB_00721f6e;
  case 5:
LAB_00721f6e:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (iVar2 = FUN_00719290(), iVar2 == 0)) {
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
        FUN_00718220(param_1[0x6e3],0,0,0);
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

// 00722080  FUN_00722080  size=1091  [between]
void __fastcall FUN_00722080(int *param_1)

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
    goto LAB_0072227c;
  case 4:
LAB_0072227c:
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
    goto LAB_00722434;
  case 7:
LAB_00722434:
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && (iVar3 = FUN_00719290(), iVar3 == 0)) {
      if (param_1[0x6e3] == -1) {
        (**(code **)(*param_1 + 0x34c))();
        FUN_00a8e880(param_1 + 0x6bc);
        return;
      }
      FUN_00718220(param_1[0x6e3],0,0,0);
      FUN_00a8e880(param_1 + 0x6bc);
      return;
    }
  }
  FUN_00a8e880(param_1 + 0x6bc);
  return;
}

// 007224F0  FUN_007224f0  size=362  [between]
void __fastcall FUN_007224f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00722629;
  }
  uVar2 = 0x8000000;
  uVar3 = 0x513;
  if ((*(int *)(param_1 + 0x14ac) == 2) || (*(int *)(param_1 + 0x14ac) == 3)) {
    uVar3 = 0x514;
  }
  if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
    uVar3 = 0x56e;
  }
  if ((*(uint *)(param_1 + 0xeac) & 0x8000) != 0) {
    uVar3 = 0x465;
  }
  if (*(int *)(param_1 + 0x1814) == 2) {
    uVar3 = 0x37b;
    if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
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
    else if (*(int *)(param_1 + 0xe98) != 9) goto LAB_00722597;
    uVar3 = 0x490;
  }
LAB_00722597:
  if ((*(uint *)(param_1 + 0xea8) & 0x20000000) != 0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xdfffffff;
    iVar1 = FUN_00711d60();
    if (iVar1 != 0) {
      FUN_00b2bca0(&DAT_0163b604,0);
    }
  }
  FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
  FUN_00713960(&DAT_0163b604,1);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x2000000;
  *(undefined2 *)(param_1 + 0x824) = 1;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
LAB_00722629:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00718220(0x25,0,0,0);
  }
  return;
}

// 00722660  FUN_00722660  size=483  [between]
void __fastcall FUN_00722660(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x1b;
    if (param_1[300] == 0x2c170) {
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
    if (param_1[300] == 0x2c170) {
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
    if (param_1[300] == 0x2c170) {
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
        FUN_00718220(param_1[0x6e7],0,0,0);
        param_1[0x6e7] = -1;
      }
    }
  }
  iVar2 = FUN_00a8c760(0xc);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072283f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 00722860  FUN_00722860  size=232  [between]
void __fastcall FUN_00722860(int *param_1)

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
    if (param_1[300] == 0x2c170) {
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
    FUN_00718220(param_1[0x6e7],0,0,0);
    param_1[0x6e7] = -1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00722946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00722950  FUN_00722950  size=520  [between]
void __fastcall FUN_00722950(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00722b02;
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
        FUN_00718220(0x10001,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_00718220(0x10005,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00722b02:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00722B60  FUN_00722b60  size=718  [between]
void __fastcall FUN_00722b60(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    sVar2 = (short)param_1[0x69d];
    if (param_1[0x186] == 0x10003) {
      sVar2 = *(short *)((int)param_1 + 0x1a72);
      FUN_00713960(&DAT_0163b604,1);
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
  else if (param_1[0x187] != 1) goto LAB_00722dd8;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) && (param_1[0x186] == 0x10003)) {
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
            FUN_00718220(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            uVar3 = 0x10005;
            goto LAB_00722db8;
          }
        }
        else if (1.0471976 < (float)param_1[0x2a8]) {
          uVar3 = 0x70008;
LAB_00722db8:
          FUN_00718220(uVar3,0,0,0);
        }
      }
    }
  }
  FUN_00ac80a0(param_1[0x248],0x3f800000);
LAB_00722dd8:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00722E30  FUN_00722e30  size=489  [between]
void __fastcall FUN_00722e30(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00722fc3;
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
        FUN_00718220(0x10001,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_00718220(0x10005,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00722fc3:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00723020  FUN_00723020  size=359  [between]
void __fastcall FUN_00723020(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0072313e;
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
    FUN_007162a0(uVar2,uVar5,uVar6,0,0);
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0072313e:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00723190  FUN_00723190  size=281  [between]
void __fastcall FUN_00723190(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x9e,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00723257;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if ((DAT_01bea094 & 0x20000) == 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    else if (param_1[0x6e7] == -1) {
      FUN_00718220(0x20005,0,0,0);
    }
    else {
      FUN_00718220(param_1[0x6e7],param_1[0x6e8],0,0);
    }
  }
LAB_00723257:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 007232B0  FUN_007232b0  size=793  [between]
void __fastcall FUN_007232b0(int *param_1)

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
    goto switchD_007232cc_caseD_1;
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
      FUN_007162a0(uVar5,uVar6,uVar7,0,1);
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (param_1[0x1f6] != 0)) && (param_1[0x2a1] != 0)) {
      iVar3 = *(int *)(param_1[0x1f6] + 0x818);
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if (((iVar3 != 0) && (iVar4 != 0)) && (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))) {
LAB_007234ae:
        (**(code **)(*param_1 + 0x34c))();
        goto switchD_007232cc_default;
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x248] = 0x42700000;
    goto switchD_007232cc_default;
  case 4:
    FUN_00aa4080((int)(short)param_1[0x693],0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 <= fVar1 - (float)param_1[0x244]) goto switchD_007232cc_default;
    if (param_1[0x670] == 0) {
      FUN_00718220(0x1e,0,0,0);
      goto switchD_007232cc_default;
    }
    if (param_1[0x679] != 0) {
      param_1[0x187] = 2;
      goto switchD_007232cc_default;
    }
    goto LAB_007234ae;
  default:
    goto switchD_007232cc_default;
  }
  FUN_00aa4080((int)(short)param_1[0x696],0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x42700000;
  FUN_00a8d280();
switchD_007232cc_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    if ((param_1[0x1f6] != 0) && (param_1[0x2a1] != 0)) {
      iVar3 = *(int *)(param_1[0x1f6] + 0x818);
      iVar4 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if ((iVar3 != 0) && ((iVar4 != 0 && (*(int *)(iVar3 + 0xc) != *(int *)(iVar4 + 0xc))))) {
        (**(code **)(*param_1 + 0x34c))();
        goto switchD_007232cc_default;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007232cc_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 007235F0  FUN_007235f0  size=859  [between]
void __fastcall FUN_007235f0(int *param_1)

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
    if (((((iVar2 == 0x2c010) || (iVar2 == 0x2c140)) || (iVar2 == 0x2c142)) || (iVar2 == 0x2c144))
       && (((param_1[0x52b] == 3 && (param_1[0x52c] == 1)) && ((float)param_1[0x2a3] <= 25.0)))) {
      FUN_0070dc50();
    }
    iVar2 = param_1[300];
    if ((((iVar2 == 0x2c010) || (iVar2 == 0x2c140)) || ((iVar2 == 0x2c142 || (iVar2 == 0x2c144))))
       && (((param_1[0x52b] == 1 && (param_1[0x52c] == 3)) &&
           (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))))) {
      FUN_0070dc50();
    }
    iVar2 = param_1[300];
    iVar3 = 0x4ae;
    if (((iVar2 == 0x2c010) || (iVar2 == 0x2c140)) ||
       ((iVar2 == 0x2c142 || ((iVar2 == 0x2c144 || (iVar2 == 0x2c160)))))) {
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
          FUN_00718640();
          *(undefined1 *)(param_1 + 0x412) = 0;
          FUN_007187d0(&DAT_016466f0,0);
        }
      }
      else {
        iVar3 = 0x453;
        param_1[0x40f] = 0x41a00000;
        *(undefined1 *)(param_1 + 0x40e) = 1;
        param_1[0x410] = 1;
      }
    }
    if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
      if ((param_1[0x3ab] & 0x8000U) == 0) {
        if (param_1[0x52b] == 7) {
          iVar3 = 0x4b4;
          param_1[0x40f] = 0x41980000;
          *(undefined1 *)(param_1 + 0x40e) = 1;
          param_1[0x410] = 1;
        }
        else if (param_1[0x52b] == 3) {
          iVar3 = 0x4b1;
          FUN_00718640();
          *(undefined1 *)(param_1 + 0x412) = 0;
          FUN_007187d0(&DAT_016466f0,0);
        }
      }
      else {
        iVar3 = 0x460;
        param_1[0x40f] = 0x41b80000;
        *(undefined1 *)(param_1 + 0x40e) = 1;
        param_1[0x410] = 1;
      }
    }
    if (param_1[300] == 0x2c170) {
      FUN_00718640();
      *(undefined1 *)(param_1 + 0x412) = 0;
      if (param_1[0x186] == 0x23) {
        iVar3 = 0x522;
        puVar5 = &DAT_016466e4;
      }
      else {
        iVar3 = 0x4b7;
        puVar5 = &DAT_016466dc;
      }
      FUN_00713960(puVar5,1);
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
                    /* WARNING: Could not recover jumptable at 0x00723949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00723950  FUN_00723950  size=625  [between]
void __fastcall FUN_00723950(int param_1)

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
    goto LAB_00723b28;
  }
  iVar2 = *(int *)(param_1 + 0x4b0);
  uVar3 = 0x4af;
  if ((((iVar2 == 0x2c010) || (iVar2 == 0x2c140)) || (iVar2 == 0x2c142)) ||
     ((iVar2 == 0x2c144 || (iVar2 == 0x2c160)))) {
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
        FUN_007187d0(&DAT_0164670c,0);
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
  if ((iVar2 == 0x2c150) || (iVar2 == 0x2c152)) {
    if ((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) {
      if (*(int *)(param_1 + 0x14ac) != 7) goto LAB_00723abd;
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
LAB_00723abd:
  if (iVar2 == 0x2c170) {
    *(undefined4 *)(param_1 + 0x104c) = 0x43560000;
    uVar3 = 0x4b8;
    *(undefined1 *)(param_1 + 0x1048) = 1;
    *(undefined4 *)(param_1 + 0x1050) = 0;
    FUN_00713960(&DAT_016466fc,2);
  }
  FUN_00aa4080(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0x1074) = 1;
LAB_00723b28:
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
    FUN_00718220(7,0,0,0);
  }
  return;
}

// 00723BD0  FUN_00723bd0  size=150  [between]
void __fastcall FUN_00723bd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1[0x3aa] & 0x80000000U) == 0) {
    if (param_1[0x670] != 0) {
      if ((param_1[0x679] != 0) && ((param_1[0x12a] & 0x400000U) == 0)) {
        FUN_00718220(0x1000c,0,0,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00723c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if ((param_1[0x1f6] != 0) && (param_1[0x2a1] != 0)) {
      iVar1 = *(int *)(param_1[0x1f6] + 0x818);
      iVar2 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if ((iVar1 != 0) && ((iVar2 != 0 && (*(int *)(iVar1 + 0xc) != *(int *)(iVar2 + 0xc))))) {
        FUN_00718220(0x14,0,0,0);
      }
    }
  }
  return;
}

// 00723C70  FUN_00723c70  size=311  [between]
void __fastcall FUN_00723c70(int *param_1)

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
    if (param_1[300] == 0x2c170) {
      uVar1 = 0x535;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00723d8b;
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
      FUN_00718220(0x22,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
LAB_00723d8b:
  if ((param_1[0x36c] == 2) || (param_1[0x36c] == -1)) {
    param_1[0x36c] = 1;
  }
  return;
}

// 00723DB0  FUN_00723db0  size=121  [between]
void __fastcall FUN_00723db0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
    return;
  }
  iVar1 = FUN_0070e3f0();
  if (iVar1 != 0) {
    FUN_00718220(0x120000,0,0,0);
    return;
  }
  iVar1 = FUN_0070e2a0();
  if (iVar1 != 0) {
    FUN_00718220(0x120004,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  iVar1 = FUN_0070e330();
  if (iVar1 != 0) {
    FUN_00718220(0x120001,0,0,0);
  }
  return;
}

// 00723E30  FUN_00723e30  size=308  [between]
void __fastcall FUN_00723e30(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00723f30;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = ((float)param_1[0x10] - (float)param_1[0x5e4]) *
          ((float)param_1[0x10] - (float)param_1[0x5e4]) +
          ((float)param_1[0x11] - (float)param_1[0x5e5]) *
          ((float)param_1[0x11] - (float)param_1[0x5e5]) +
          ((float)param_1[0x12] - (float)param_1[0x5e6]) *
          ((float)param_1[0x12] - (float)param_1[0x5e6]);
  if (fVar1 < 2.25 != (fVar1 == 2.25)) {
    FUN_00718220(0x21,0,0,0);
  }
  if (param_1[0x670] != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00723f30:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 00723F70  EmC010::vf34C  size=350  [class]
void __fastcall EmC010::vf34C(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x1bac) = 0;
  if (*(int *)(param_1 + 0x1814) == 1) {
    FUN_00718220(0x60000,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x1814) == 2) {
    FUN_00718220(0x50000,0,0,0);
    return;
  }
  if (((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) || (*(int *)(param_1 + 0x105c) == 0)) {
    *(undefined4 *)(param_1 + 0x18f4) = 0x41f00000;
    FUN_00718220(0xb,0,0,0);
    if (*(int *)(param_1 + 0x1074) == 0) {
      if (*(int *)(param_1 + 0x14ac) == 1) {
        FUN_00718220(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 7) {
        FUN_00718220(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 6) {
        FUN_00718220(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 5) {
        FUN_00718220(0xe,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 2) {
        FUN_00718220(0x20000,0,0,0);
      }
      if (*(int *)(param_1 + 0x14ac) == 3) {
        FUN_00718220(0x30000,0,0,0);
      }
    }
    FUN_00719660(uVar1);
  }
  else {
    FUN_00718220(0x70000,0,0,0);
    if (*(int *)(param_1 + 0x1074) == 0) {
      FUN_00718220(0xe,0,0,0);
      return;
    }
  }
  return;
}

// 007240D0  EmC010::vf1A4  size=501  [class]
void __thiscall EmC010::vf1A4(int param_1,int *param_2,byte param_3)

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
        FUN_00718220(0x60007,0,0,0);
      }
      else {
        FUN_00718220(0xa0002,0,0,0);
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
        FUN_00718220(0x10015,uVar3,0,0);
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
  if ((*(int *)(param_1 + 0x4b0) == 0x2c150) || (*(int *)(param_1 + 0x4b0) == 0x2c152)) {
    if ((param_3 & 4) == 0) {
      if (((*(uint *)(param_1 + 0xea4) & 0x2000) != 0) && ((param_3 & 2) != 0)) {
        *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
        FUN_00718220(0x19,0,0,0);
      }
      *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffdfff;
    }
    else if (*(int *)(param_1 + 0x618) != 0x10015) {
      iVar4 = FUN_0070a370();
      if (iVar4 == 0) {
        FUN_00718220(0x10015,8,0,0);
      }
      else {
        FUN_00718220(0x110001,0,0,0);
      }
    }
  }
  if (((*(int *)(param_1 + 0x4b0) == 0x2c170) && ((*(uint *)(param_1 + 0xea4) & 0x1000) == 0)) &&
     ((param_3 & 4) != 0)) {
    FUN_00718220(0x110002,0,0,0);
  }
  return;
}

// 007242E0  FUN_007242e0  size=620  [between]
void __fastcall FUN_007242e0(int param_1)

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
    uVar2 = FUN_00e00b40(0x2c010,puVar4);
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
    uVar2 = FUN_00e00b40(0x2c010,puVar4);
    FUN_00a8c930(uVar2,puVar4);
  }
  return;
}

// 00724550  FUN_00724550  size=80  [between]
undefined4 __fastcall FUN_00724550(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x14ac) == 1) && (*(int *)(param_1 + 0x1044) == 0)) {
    FUN_00718220(0x23,0,0,0);
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    uVar1 = 1;
  }
  return uVar1;
}

// 007245A0  FUN_007245a0  size=79  [between]
void __fastcall FUN_007245a0(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x1038) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0x103c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x103c) = fVar1, fVar1 < 0.0)) {
    if (*(int *)(param_1 + 0x1040) != 0) {
      FUN_007184b0();
      *(undefined1 *)(param_1 + 0x1038) = 0;
      return;
    }
    FUN_00718570();
    *(undefined1 *)(param_1 + 0x1038) = 0;
  }
  return;
}

// 007245F0  FUN_007245f0  size=89  [between]
void __fastcall FUN_007245f0(int param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x1048) == '\x01') &&
     (fVar1 = *(float *)(param_1 + 0x104c) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x104c) = fVar1, fVar1 < 0.0)) {
    if (*(int *)(param_1 + 0x1050) != 0) {
      FUN_00718640();
      *(undefined4 *)(param_1 + 0x1074) = 0;
      *(undefined1 *)(param_1 + 0x1048) = 0;
      return;
    }
    FUN_007186e0();
    *(undefined1 *)(param_1 + 0x1048) = 0;
  }
  return;
}

// 00724650  FUN_00724650  size=168  [between]
void __fastcall FUN_00724650(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x1060) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x1064) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1064) = fVar1;
    *(float *)(param_1 + 0x1068) = *(float *)(param_1 + 0x1068) - *(float *)(param_1 + 0x910);
    if (fVar1 < 0.0) {
      if (*(int *)(param_1 + 0x106c) == 0) {
        FUN_00718d50(0);
      }
      else {
        FUN_00718c00(0);
      }
    }
    if (*(float *)(param_1 + 0x1068) < 0.0) {
      if (*(int *)(param_1 + 0x106c) == 0) {
        FUN_00718d50(1);
      }
      else {
        FUN_00718c00(1);
      }
    }
    if ((*(float *)(param_1 + 0x1064) < 0.0) && (*(float *)(param_1 + 0x1068) < 0.0)) {
      *(undefined1 *)(param_1 + 0x1060) = 0;
      return;
    }
  }
  return;
}

// 00724700  FUN_00724700  size=195  [between]
void __fastcall FUN_00724700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x1488) != 0) {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x50);
      FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    }
    iVar1 = FUN_00a82e60();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00718220(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00718220(0x23,0,0,0);
    }
  }
  return;
}

// 007247D0  FUN_007247d0  size=64  [between]
void __fastcall FUN_007247d0(int param_1)

{
  if ((((*(int *)(param_1 + 0x14b0) != -1) && (*(float *)(param_1 + 0xa8c) <= 36.0)) &&
      (*(float *)(param_1 + 0xaa0) < 1.3962634)) && (*(int *)(param_1 + 0x1494) != 0)) {
    FUN_00718e90(0xffffffff);
  }
  return;
}

// 00724810  FUN_00724810  size=283  [between]
void __fastcall FUN_00724810(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_007248e1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00718220(0x20000,0,0,0);
  }
LAB_007248e1:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3cd67750,0);
  }
  return;
}

// 00724930  FUN_00724930  size=322  [between]
void __fastcall FUN_00724930(int param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_007184b0();
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 != 0) {
    FUN_007186e0();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00718220(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00718220(0xe,0,0,0);
  }
  return;
}

// 00724A80  FUN_00724a80  size=402  [between]
void __fastcall FUN_00724a80(int *param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        FUN_00b2bca0(&DAT_01646728,0);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00724bbb;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00718220(0xe,0,0,0);
  }
LAB_00724bbb:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 00724C20  FUN_00724c20  size=325  [between]
void __fastcall FUN_00724c20(int param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_00718570();
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 != 0) {
    FUN_00718640();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00718220(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00718220(0x20000,0,0,0);
  }
  return;
}

// 00724D70  FUN_00724d70  size=319  [between]
void __fastcall FUN_00724d70(int param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_00718220(0x20000,0,0,0);
  }
  return;
}

// 00724EB0  FUN_00724eb0  size=479  [between]
void __fastcall FUN_00724eb0(int param_1)

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
    FUN_00716440(0);
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
    FUN_00718220(0x20000,0,0,0);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xffbfffff;
  }
  return;
}

// 00725090  FUN_00725090  size=140  [between]
void FUN_00725090(undefined4 param_1,int param_2)

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

// 00725120  FUN_00725120  size=807  [between]
undefined4 __fastcall FUN_00725120(int *param_1)

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
    FUN_00725090(1,param_1 + 0x428);
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
    goto switchD_00725140_default;
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
switchD_00725140_default:
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
    FUN_00718220(0x2000e,0,0,0);
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

// 00725460  FUN_00725460  size=159  [between]
void __fastcall FUN_00725460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1488) != 0) {
    iVar1 = FUN_00713e50();
    if (iVar1 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00718220(6,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00718220(0,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 4) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00718220(0x1f,0,0,0);
    }
  }
  return;
}

// 00725500  FUN_00725500  size=403  [between]
void __fastcall FUN_00725500(int param_1)

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
    iVar2 = FUN_00710010();
    if (iVar2 != 0) {
      FUN_00718220(0x3000b,0,0,0);
      return;
    }
  }
  if (((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
     (iVar2 = FUN_00718e90(0xffffffff), iVar2 == 0)) {
    if (0.0 < *(float *)(param_1 + 0x1a40)) {
      *(float *)(param_1 + 0x1a40) = *(float *)(param_1 + 0x1a40) - *(float *)(param_1 + 0x910);
    }
    if (((((*(float *)(param_1 + 0x1a40) <= 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)))
         || ((iVar2 = *(int *)(param_1 + 0x618), iVar2 == 0x30002 &&
             (*(int *)(param_1 + 0x107c) == 0)))) ||
        ((iVar2 == 0x30004 && (*(int *)(param_1 + 0x1080) == 0)))) ||
       ((iVar2 == 0x30003 && (*(int *)(param_1 + 0x1084) == 0)))) {
      FUN_00718220(0x30000,0,0,0);
    }
  }
  return;
}

// 007256A0  FUN_007256a0  size=46  [between]
void __fastcall FUN_007256a0(int param_1)

{
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00718e90(0xffffffff);
  }
  return;
}

// 007256D0  FUN_007256d0  size=283  [between]
void __fastcall FUN_007256d0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_007257a1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00718220(0x30000,0,0,0);
  }
LAB_007257a1:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3cd67750,0);
  }
  return;
}

// 007257F0  FUN_007257f0  size=322  [between]
void __fastcall FUN_007257f0(int param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_007184b0();
  }
  iVar2 = FUN_00a8c760(0x31);
  if (iVar2 != 0) {
    FUN_007186e0();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00718220(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00718220(0xe,0,0,0);
  }
  return;
}

// 00725940  FUN_00725940  size=319  [between]
void __fastcall FUN_00725940(int param_1)

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
    FUN_00718640();
    *(undefined1 *)(param_1 + 0x1048) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_00718570();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a7c) != -1) {
      FUN_00718220(*(int *)(param_1 + 0x1a7c),0,0,0);
      return;
    }
    FUN_00718220(0x30000,0,0,0);
  }
  return;
}

// 00725A80  FUN_00725a80  size=415  [between]
void __fastcall FUN_00725a80(int param_1)

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
      FUN_00718220(0x3000c,0,0,0);
      *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_1 + 0x13a4);
    }
    if (((*(int **)(param_1 + 0xa84) != (int *)0x0) &&
        (iVar4 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1fc))(), iVar4 != 0)) &&
       (*(int *)(param_1 + 0x13a0) != *(int *)(param_1 + 0x13a4))) {
      sVar3 = FUN_00dde2d0(0,2);
      local_28 = (float)(sVar3 + 1);
      FUN_0070db80((float)(int)local_28);
      FUN_00718220(0x3000c,0,0,0);
      *(undefined4 *)(param_1 + 0x13a0) = *(undefined4 *)(param_1 + 0x13a4);
    }
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00718e90(0xffffffff);
  }
  return;
}

// 00725C20  FUN_00725c20  size=794  [between]
void __fastcall FUN_00725c20(int *param_1)

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
    FUN_00725090(1,param_1 + 0x428);
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
      FUN_00716860(iVar3 + 0x40);
      piVar4 = (int *)FUN_00711e30();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))();
      }
      param_1[0x4e8] = param_1[0x4e8] + -1;
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a947e0(0,0,param_1[0x598],0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto switchD_00725c3f_default;
  case 2:
    param_1[0x187] = 3;
    param_1[0x249] = 0x42700000;
    break;
  case 3:
    break;
  default:
    goto switchD_00725c3f_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00718220(0x3000c,0,0,0);
  }
switchD_00725c3f_default:
  if (param_1[0x6db] != 0) {
    FUN_00a8e880(param_1[0x6db] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00725F50  FUN_00725f50  size=413  [between]
void __fastcall FUN_00725f50(int param_1)

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
      puVar4 = &DAT_01b357b0;
      (**(code **)(*piVar1 + 4))(&DAT_01b357b0);
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
    FUN_00718220(0x30000,0,0,0);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xffbfffff;
  }
  return;
}

// 007260F0  FUN_007260f0  size=167  [between]
void __fastcall FUN_007260f0(int *param_1)

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
    if (iVar1 != 0) goto LAB_00726158;
  }
  if ((*(byte *)((int)param_1 + 0xeab) & 1) == 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_0070b2a0();
    return;
  }
LAB_00726158:
  if ((param_1[0x187] != 5) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x10006a)) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_0070b2a0();
    FUN_00718220(0xa0001,0,0,0);
  }
  return;
}

// 007261A0  FUN_007261a0  size=1749  [between]
void __fastcall FUN_007261a0(int *param_1)

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
  param_1[0x5d7] = 1;
  param_1[0x3a9] = param_1[0x3a9] | 2;
  if ((uint)param_1[0x187] < 4) {
    fVar9 = (float10)1;
    switch(param_1[0x187]) {
    case 0:
      iVar3 = param_1[300];
      uVar8 = 0x335;
      if ((iVar3 == 0x2c150) || (iVar3 == 0x2c152)) {
        uVar8 = 0x34a;
      }
      if (iVar3 == 0x2c170) {
        uVar8 = 0x34e;
      }
      if (param_1[0x186] == 0xb0006) {
        uVar8 = 0x345;
        uVar10 = FUN_007136c0();
        if ((int)uVar10 != 0) {
          uVar8 = 0x353;
        }
        if ((int)((ulonglong)uVar10 >> 0x20) == 0x2c170) {
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
        FUN_00713e00(3,1);
      }
      else {
        FUN_00ac48e0();
      }
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      param_1[0xd9] = param_1[0xd9] & 0xffefffff;
      param_1[0x21c] = 0;
      if ((param_1[0x3ab] & 0x8000U) != 0) {
        FUN_00718aa0();
      }
      FUN_00a900b0(1);
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a8c760(0x19);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x358))(0x104,param_1 + 0x4bc);
      }
      iVar3 = FUN_00a8c760(0x1f);
      if ((iVar3 != 0) &&
         (((iVar3 = param_1[300], iVar3 == 0x2c150 || (iVar3 == 0x2c152)) || (iVar3 == 0x2c170)))) {
        afStack_34[0] = 4.61027e-43;
        afStack_34[1] = 4.69435e-43;
        afStack_34[2] = 4.59626e-43;
        afStack_34[3] = 4.68034e-43;
        afStack_34[4] = 4.62428e-43;
        afStack_34[5] = 4.70836e-43;
        afStack_34[6] = 4.6383e-43;
        afStack_34[7] = 4.72238e-43;
        uVar7 = (uint)(iVar3 == 0x2c152);
        if ((param_1[0x3ab] & 0x40000U) == 0) {
          if (iVar3 == 0x2c170) {
            (**(code **)(*param_1 + 0x358))(0x156,0);
            FUN_00ac94e0("chest_vest");
          }
          FUN_00ac9420(&DAT_0163d9a8);
          FUN_007137b0();
          FUN_00ac8d40(1);
          param_1[0x3ab] = param_1[0x3ab] | 0x40000;
        }
        if ((param_1[0x3ab] & 0x80000U) == 0) {
          if (param_1[300] == 0x2c170) {
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
          param_1[0x3ab] = param_1[0x3ab] | 0x80000;
        }
        if ((param_1[0x3ab] & 0x100000U) == 0) {
          if (param_1[300] == 0x2c170) {
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
          param_1[0x3ab] = param_1[0x3ab] | 0x100000;
        }
        if ((param_1[0x3ab] & 0x200000U) == 0) {
          if (param_1[300] == 0x2c170) {
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
          param_1[0x3ab] = param_1[0x3ab] | 0x200000;
        }
        if ((param_1[0x3ab] & 0x400000U) == 0) {
          if (param_1[300] == 0x2c170) {
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
          param_1[0x3ab] = param_1[0x3ab] | 0x400000;
        }
        if ((param_1[0x3a9] & 0x1000U) == 0) {
          (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
        }
        param_1[0x3a9] = param_1[0x3a9] | 0x1000;
        fVar6 = unaff_EBX;
      }
      break;
    case 2:
      iVar3 = param_1[300];
      sVar5 = 0x337;
      if ((iVar3 == 0x2c150) || (iVar3 == 0x2c152)) {
        sVar5 = 0x34c;
      }
      if (iVar3 == 0x2c170) {
        sVar5 = 0x350;
      }
      if (param_1[0x186] == 0xb0006) {
        uVar11 = FUN_007136c0();
        sVar5 = (short)((uint6)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          sVar5 = 0x355;
        }
        fVar9 = extraout_ST0;
        if (iVar3 == 0x2c170) {
          sVar5 = 0x359;
        }
      }
      FUN_00aa4080((int)sVar5,0,0x3e2aaaab,(float)fVar9,0x8000000,0,(float)fVar9);
      param_1[0x187] = param_1[0x187] + 1;
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a8c760(0x19);
      if ((iVar3 != 0) && (param_1[0x294] != 0)) {
        (**(code **)(*param_1 + 0x358))(0x104,param_1 + 0x4bc);
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00718220(0xb0004,0,0,0);
      param_1[0x3aa] = param_1[0x3aa] | 0x800000;
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

// 00726890  FUN_00726890  size=2599  [between]
void __fastcall FUN_00726890(int *param_1)

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
  param_1[0x3a9] = param_1[0x3a9] | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00a92f90();
    if (iVar3 != 0) {
      if (param_1[300] == 0x2c170) {
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
    param_1[0x3aa] = param_1[0x3aa] | 0x4000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x33f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_008e6d00();
      CharacterControl::setHeight(0x3ff33333);
      CharacterControl::setRadius(0x3f000000);
      (**(code **)(*param_1 + 0x314))();
      FUN_0070b2a0();
      param_1[0xd9] = param_1[0xd9] | 0x100000;
      if ((param_1[0x3aa] & 0x1000U) == 0) {
        param_1[0x21c] = 0;
        param_1[0x139] = 1;
        FUN_00718220(0xb0002,0,0,0);
        FUN_00713e00(0,1);
      }
      else {
        param_1[0x187] = param_1[0x187] + 1;
        FUN_0070e9a0();
      }
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  iVar3 = param_1[300];
  if (((iVar3 == 0x2c150) || (iVar3 == 0x2c152)) || (iVar3 == 0x2c170)) {
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
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (iVar3 == 0x2c170) {
          FUN_00ac94e0("R_upper_leg_shield");
          FUN_00ac94e0("R_lower_leg_shield");
          (**(code **)(*param_1 + 0x358))(0x157,0);
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          FUN_00ac94e0("R_leg_armor");
          (**(code **)(*param_1 + 0x358))(afStack_34[(iVar3 == 0x2c152) + 4],0);
        }
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x80000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
      iVar3 = param_1[300];
      afStack_34[0] = 4.61027e-43;
      afStack_34[1] = 4.69435e-43;
      afStack_34[2] = 4.59626e-43;
      afStack_34[3] = 4.68034e-43;
      afStack_34[4] = 4.62428e-43;
      afStack_34[5] = 4.70836e-43;
      afStack_34[6] = 4.6383e-43;
      afStack_34[7] = 4.72238e-43;
      if ((param_1[0x3ab] & 0x100000U) == 0) {
        if (iVar3 == 0x2c170) {
          FUN_00ac94e0("L_upper_leg_shield");
          FUN_00ac94e0("L_lower_leg_shield");
          fVar9 = 4.82047e-43;
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          FUN_00ac94e0("L_leg_armor");
          fVar9 = afStack_34[(iVar3 == 0x2c152) + 6];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x100000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
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
      if ((param_1[0x3ab] & 0x200000U) == 0) {
        if (iVar3 == 0x2c170) {
          FUN_00ac94e0("L_forearm_armor1");
          FUN_00ac94e0("R_shoulder_pad");
          fVar9 = 4.76441e-43;
        }
        else {
          FUN_00ac94e0("R_shoulder_armor");
          fVar9 = afStack_34[iVar3 == 0x2c152];
        }
        (**(code **)(*param_1 + 0x358))(fVar9,0);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x200000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
      FUN_007139c0(0x49,1,1);
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
      uVar7 = (uint)(param_1[300] == 0x2c152);
      if ((param_1[0x3ab] & 0x40000U) == 0) {
        if (param_1[300] == 0x2c170) {
          (**(code **)(*param_1 + 0x358))(0x156,0);
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_007137b0();
        FUN_00ac8d40(1);
        param_1[0x3ab] = param_1[0x3ab] | 0x40000;
      }
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (param_1[300] == 0x2c170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x80000;
      }
      if ((param_1[0x3ab] & 0x100000U) == 0) {
        if (param_1[300] == 0x2c170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x100000;
      }
      if ((param_1[0x3ab] & 0x200000U) == 0) {
        if (param_1[300] == 0x2c170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x200000;
      }
      if ((param_1[0x3ab] & 0x400000U) == 0) {
        if (param_1[300] == 0x2c170) {
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
        param_1[0x3ab] = param_1[0x3ab] | 0x400000;
      }
      if ((param_1[0x3a9] & 0x1000U) == 0) {
        (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
      }
      param_1[0x3a9] = param_1[0x3a9] | 0x1000;
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

// 007272D0  EmC010::vf298  size=184  [class]
void __fastcall EmC010::vf298(int param_1)

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
        if ((*(uint *)(param_1 + 0xea8) & 0x80000000) != 0) {
          if (*(int *)(param_1 + 0x1074) != 0) {
            FUN_00718220(5,0,0,0);
            return;
          }
          FUN_00718220(0x1e,0,0,0);
          return;
        }
        FUN_00718220(4,0,0,0);
        if (((*(uint *)(param_1 + 0xea8) & 0x80000) != 0) && (DAT_01d64270 != 0)) {
          *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x100000;
          FUN_00ac4710(10);
          FUN_00a8d710(param_1 + 0x40);
        }
      }
    }
  }
  return;
}

// 00727390  EmC010::vf2A0  size=308  [class]
void __fastcall EmC010::vf2A0(int *param_1)

{
  int iVar1;
  
  param_1[0x3a9] = param_1[0x3a9] & 0xffffffdf;
  param_1[0x3a9] = param_1[0x3a9] | 0x40;
  param_1[0x3aa] = param_1[0x3aa] & 0x7ffeffff;
  if ((param_1[0x3ab] & 0x3000U) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if ((iVar1 == 0) && (param_1[0x605] != 1)) {
      iVar1 = FUN_00a85630();
      if (iVar1 != 5) {
        if ((param_1[0x186] & 0xffff0000U) != 0xa0000) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 == 8) {
            FUN_00718220(9,0,0,0);
            return;
          }
          if ((param_1[0x3aa] & 0x20000000U) != 0) {
            FUN_00718220(0xd0001,0,0,0);
            return;
          }
          if (param_1[0x41d] == 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          else {
            FUN_00718220(0x1f,0,0,0);
          }
        }
        if ((param_1[0x3aa] & 0x80000U) != 0) {
          if (DAT_01d64270 != 0) {
            param_1[0x3aa] = param_1[0x3aa] | 0x100000;
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

// 007274D0  EmC010::vf2A4  size=272  [class]
void __fastcall EmC010::vf2A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffbf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20;
  if ((*(uint *)(param_1 + 0xeac) & 0x2000) == 0) {
    if (*(int *)(param_1 + 0x1814) == 1) {
      FUN_00ac48e0();
      FUN_00718220(0xb000a,0,0,0);
      return;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 != 8) {
      if (*(int *)(param_1 + 0x1074) == 0) {
        FUN_00718220(0x20,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0xb08) == -1) {
        *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_1 + 0x1820);
        *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)(param_1 + 0x1824);
        *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_1 + 0x1828);
        uVar1 = *(undefined4 *)(param_1 + 0x182c);
      }
      else {
        if ((*(uint *)(param_1 + 0xea8) & 0x80000) != 0) {
          FUN_00ac4710(*(int *)(param_1 + 0xb08));
          FUN_00a8d710(param_1 + 0x40);
        }
        FUN_00a8d790(&local_c);
        *(undefined4 *)(param_1 + 0x1790) = local_c;
        *(undefined4 *)(param_1 + 0x1794) = local_8;
        *(undefined4 *)(param_1 + 0x1798) = local_4;
        uVar1 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x179c) = uVar1;
      FUN_00718220(7,0,0,0);
    }
  }
  return;
}

// 007275E0  EmC010::vf2A8  size=124  [class]
void __fastcall EmC010::vf2A8(int param_1)

{
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffbf;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20;
  if ((*(uint *)(param_1 + 0xeac) & 0x2000) == 0) {
    if (*(int *)(param_1 + 0x1814) == 1) {
      FUN_00ac48e0();
      FUN_00718220(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0x4a8) & 0x100000) != 0) {
      *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x80000000;
    }
    if ((*(uint *)(param_1 + 0xea8) & 0x80000) != 0) {
      FUN_00718220(0xc0007,0,0,0);
      return;
    }
    FUN_00718220(0x21,0,0,0);
  }
  return;
}

// 00727660  FUN_00727660  size=441  [callgraph]
void __fastcall FUN_00727660(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_007138c0(*(undefined4 *)(param_1 + 0x1bd0),*(undefined4 *)(param_1 + 0x1bd4));
    if (iVar2 != 0) {
      FUN_00ac48e0();
      FUN_00718220(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0) {
      if ((4.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x920) < 0.0)) {
        FUN_00718220(0x60001,0,0,0);
      }
      if ((((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
          && (*(float *)(param_1 + 0xa8c) < 9.0)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00718220(0x60002,0,0,0);
      }
      if (((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) &&
         (((*(uint *)(param_1 + 0xea8) & 0x200) == 0 &&
          ((*(float *)(param_1 + 0xa8c) < 9.0 && (*(float *)(param_1 + 0xaa0) < 0.5235988)))))) {
        FUN_00718220(0x60003,0,0,0);
      }
      if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
        if (0.5235988 < *(float *)(param_1 + 0xa9c)) {
          FUN_00718220(0x6000a,0,0,0);
        }
        fVar1 = -0.5235988;
      }
      else {
        if (0.87266463 < *(float *)(param_1 + 0xa9c)) {
          FUN_00718220(0x6000a,0,0,0);
        }
        fVar1 = -0.87266463;
      }
      if (*(float *)(param_1 + 0xa9c) < fVar1) {
        FUN_00718220(0x60009,0,0,0);
      }
    }
  }
  return;
}

// 00727820  FUN_00727820  size=223  [callgraph]
void __fastcall FUN_00727820(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0x366;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar2 = 0x40;
    }
    else if (*(int *)(param_1 + 0xe98) != 9) goto LAB_00727850;
    uVar1 = 0x490;
  }
LAB_00727850:
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x14ac) == 1) {
      FUN_007184b0();
      *(undefined4 *)(param_1 + 0x1074) = 0;
    }
    if (*(int *)(param_1 + 0x14ac) == 2) {
      FUN_00718640();
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

// 00727900  FUN_00727900  size=411  [callgraph]
void __fastcall FUN_00727900(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_007138c0(*(undefined4 *)(param_1 + 0x1bd0),*(undefined4 *)(param_1 + 0x1bd4));
    if (iVar2 != 0) {
      FUN_00ac48e0();
      FUN_00718220(0xb000a,0,0,0);
      return;
    }
    if ((((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) &&
        (*(float *)(param_1 + 0xa8c) < 9.0)) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_00718220(0x60002,0,0,0);
      return;
    }
    if (((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) &&
       (((*(uint *)(param_1 + 0xea8) & 0x200) == 0 &&
        ((*(float *)(param_1 + 0xa8c) < 100.0 && (*(float *)(param_1 + 0xaa0) < 0.5235988)))))) {
      FUN_00718220(0x60003,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x60000,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x20000) == 0) {
      if (0.5235988 < *(float *)(param_1 + 0xa9c)) {
        FUN_00718220(0x6000a,0,0,0);
      }
      fVar1 = -0.5235988;
    }
    else {
      if (0.87266463 < *(float *)(param_1 + 0xa9c)) {
        FUN_00718220(0x6000a,0,0,0);
      }
      fVar1 = -0.87266463;
    }
    if (*(float *)(param_1 + 0xa9c) < fVar1) {
      FUN_00718220(0x60009,0,0,0);
    }
  }
  return;
}

// 00727AA0  FUN_00727aa0  size=174  [callgraph]
void __fastcall FUN_00727aa0(int param_1)

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
    FUN_00718220(0x60004,0,0,0);
  }
  return;
}

// 00727B50  FUN_00727b50  size=257  [callgraph]
void __fastcall FUN_00727b50(int param_1)

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
      FUN_00718220(0x60006,0,0,0);
    }
    if (121.0 < *(float *)(param_1 + 0xa8c)) goto LAB_00727c3d;
    fVar1 = 0.54105204;
  }
  else {
    if (((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
       (*(int *)(param_1 + 0x1a3c) == 0)) {
      FUN_00718220(0x60006,0,0,0);
    }
    if (121.0 < *(float *)(param_1 + 0xa8c)) goto LAB_00727c3d;
    fVar1 = 0.80285144;
  }
  if (fVar1 < *(float *)(param_1 + 0xaa0) == (fVar1 == *(float *)(param_1 + 0xaa0))) {
    return;
  }
LAB_00727c3d:
  FUN_00718220(0x60005,0,0,0);
  return;
}

// 00727C60  FUN_00727c60  size=51  [callgraph]
void __fastcall FUN_00727c60(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x13a0) == 0)) {
    FUN_00718220(0x60004,0,0,0);
    *(undefined4 *)(param_1 + 0x1158) = 0x41f00000;
  }
  return;
}

// 00727CA0  FUN_00727ca0  size=465  [callgraph]
void __fastcall FUN_00727ca0(int *param_1)

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
    FUN_00725090(1,param_1 + 0x428);
    param_1[0x4e8] = 0xf;
  }
  else if (param_1[0x187] != 1) goto LAB_00727e3c;
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4e8] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_0070bd20();
    FUN_00716570(param_1[0x2a1] + 0x40);
    param_1[0x4e8] = param_1[0x4e8] + -1;
    param_1[0x249] = 0x40c00000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00718220(0x60004,0,0,0);
  }
LAB_00727e3c:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3ae4c388,0);
  return;
}

// 00727EB0  FUN_00727eb0  size=688  [callgraph]
void __fastcall FUN_00727eb0(int *param_1)

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
    FUN_0070fe80();
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
    goto LAB_0072805b;
  case 3:
LAB_0072805b:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 0x324))();
    if (iVar4 == 0) {
      return;
    }
LAB_0072808f:
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
    FUN_0070db80(param_1[0x66d]);
    iVar4 = FUN_00719290();
    if (iVar4 != 0) {
      return;
    }
    if (param_1[0x139] == 0) {
      FUN_00719580();
      return;
    }
    goto LAB_0072808f;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00727ecb_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00727ecb_default:
  return;
}

// 00728180  FUN_00728180  size=418  [callgraph]
void __fastcall FUN_00728180(int *param_1)

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
    FUN_0070fe80();
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
      FUN_00718220(0x60010,0,0,0);
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

// 00728340  FUN_00728340  size=274  [callgraph]
void __fastcall FUN_00728340(int param_1)

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
    FUN_0070fe80();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00718220(0x6000f,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00728460  FUN_00728460  size=257  [callgraph]
void __fastcall FUN_00728460(int param_1)

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
    FUN_0070fe80();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00718220(0x6000f,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00728570  FUN_00728570  size=80  [callgraph]
void __fastcall FUN_00728570(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    FUN_0070fe80();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00718220(0x60010,0,0,0);
  }
  return;
}

// 007285C0  FUN_007285c0  size=291  [callgraph]
void __fastcall FUN_007285c0(int param_1)

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
    FUN_0070fe80();
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
    iVar1 = FUN_00719290();
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x4e4) != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_0070db80(*(undefined4 *)(param_1 + 0x19b4));
    FUN_00719580();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00719290(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x4e4) == 0) {
      FUN_0070db80(*(undefined4 *)(param_1 + 0x19b4));
      FUN_00719580();
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    return;
  }
  return;
}

// 007286F0  FUN_007286f0  size=431  [callgraph]
void __fastcall FUN_007286f0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x007287ee. Too many branches */
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
      FUN_00719580();
      return;
    }
    break;
  default:
    goto switchD_00728704_default;
  }
switchD_00728704_default:
  return;
}

// 007288C0  FUN_007288c0  size=489  [callgraph]
void __fastcall FUN_007288c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_007138c0(*(undefined4 *)(param_1 + 0x1bd0),*(undefined4 *)(param_1 + 0x1bd4));
    if (iVar1 != 0) {
      FUN_00ac48e0();
      FUN_00718220(0xb000a,0,0,0);
      return;
    }
    if ((*(uint *)(param_1 + 0xea8) & 0x2000000) == 0) {
      if ((2.25 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x920) < 0.0)) {
        FUN_00718220(0x50001,0,0,0);
      }
      if (1.5707964 < *(float *)(param_1 + 0xaa0)) {
        FUN_00718220(0x50001,0,0,0);
      }
      if (*(int *)(param_1 + 0x4b0) != 0x2c170) {
        if (((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
           && ((*(byte *)(param_1 + 0x1818) & 2) == 0)) {
          if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
            FUN_00718220(0x50002,0,0,0);
            return;
          }
        }
        else {
          if (((*(int *)(param_1 + 0x14ac) != 2) || ((*(uint *)(param_1 + 0xea4) & 0x40000000) != 0)
              ) || ((*(byte *)(param_1 + 0x1818) & 2) != 0)) {
            if (4.0 <= *(float *)(param_1 + 0xa8c)) {
              return;
            }
            FUN_00718220(0x50007,0,0,0);
            return;
          }
          if ((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 1.7453293)) {
            FUN_00718220(0x50003,0,0,0);
            return;
          }
        }
        FUN_00718220(0x50001,0,0,0);
        return;
      }
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00718220(0x1001a,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00728AB0  FUN_00728ab0  size=244  [callgraph]
void __fastcall FUN_00728ab0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x37b;
  if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
    uVar1 = 0x576;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,(*(uint *)(param_1 + 0x1818) & 2) << 5,0xbf800000,
                 0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if ((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) {
      FUN_007184b0();
      *(undefined4 *)(param_1 + 0x1074) = 0;
    }
    if ((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0)) {
      FUN_00718640();
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

// 00728BB0  FUN_00728bb0  size=372  [callgraph]
void __fastcall FUN_00728bb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_007138c0(*(undefined4 *)(param_1 + 0x1bd0),*(undefined4 *)(param_1 + 0x1bd4));
    if (iVar1 != 0) {
      FUN_00ac48e0();
      FUN_00718220(0xb000a,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00718220(0x1001a,0,0,0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x14ac) == 1) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
            && ((*(byte *)(param_1 + 0x1818) & 2) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) < 9.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00718220(0x50002,0,0,0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x14ac) == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) == 0))
            && ((*(byte *)(param_1 + 0x1818) & 2) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) < 100.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_00718220(0x50003,0,0,0);
        return;
      }
    }
    else if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x50007,0,0,0);
    }
  }
  return;
}

// 00728D30  FUN_00728d30  size=215  [callgraph]
void __fastcall FUN_00728d30(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x381,0,0x3e088889,0x3f800000,(param_1[0x606] & 2U | 0x400000) << 5,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00728dbd;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00718220(0x50004,0,0,0);
  }
LAB_00728dbd:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00728E10  FUN_00728e10  size=352  [callgraph]
void __fastcall FUN_00728e10(int *param_1)

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
        FUN_00718220(0x50006,0,0,0);
      }
      if ((121.0 < (float)param_1[0x2a3]) ||
         (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 0.80285144 < fVar1 != (fVar1 == 0.80285144))
         ) {
        FUN_00718220(0x50005,0,0,0);
      }
    }
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00729020  FUN_00729020  size=483  [callgraph]
void __fastcall FUN_00729020(int param_1)

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
    FUN_00725090(1,param_1 + 0x10a0);
    *(undefined4 *)(param_1 + 0x13a0) = 0xf;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = fVar1;
  if ((fVar1 <= 0.0) && (*(int *)(param_1 + 0x13a0) != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_0070c090();
    FUN_00716570(*(int *)(param_1 + 0xa84) + 0x40);
    *(int *)(param_1 + 0x13a0) = *(int *)(param_1 + 0x13a0) + -1;
    *(undefined4 *)(param_1 + 0x924) = 0x40c00000;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00718220(0x50004,0,0,0);
  }
  return;
}

// 00729210  FUN_00729210  size=131  [callgraph]
void __fastcall FUN_00729210(int *param_1)

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
  FUN_00718220(0x10000000,0,0,0);
  return;
}

// 007292A0  FUN_007292a0  size=229  [callgraph]
void __fastcall FUN_007292a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x3a6] == 0x10) {
    FUN_00719290();
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

// 00729390  FUN_00729390  size=282  [callgraph]
void __fastcall FUN_00729390(int param_1)

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
    FUN_007187d0(puVar3,1);
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
    iVar2 = FUN_007119b0();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_007119b0();
      uVar1 = *(undefined4 *)(iVar2 + 0x94);
    }
    FUN_007162a0(0xbf490fdb,uVar1,0x40c00000,1,0);
  }
  return;
}

// 007294B0  FUN_007294b0  size=320  [callgraph]
void __fastcall FUN_007294b0(int *param_1)

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
      FUN_00718220(0x10000027,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x007295ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  default:
    goto switchD_007294c4_default;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_007294c4_default:
  return;
}

// 00729600  FUN_00729600  size=301  [callgraph]
void __fastcall FUN_00729600(int *param_1)

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
    FUN_00718220(0x10000028,0,0,0);
  }
  return;
}

// 00729730  FUN_00729730  size=365  [callgraph]
void __fastcall FUN_00729730(int param_1)

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
      FUN_00718220(0xb0000,0,0,0);
      return;
    }
  }
  return;
}

// 007298C0  FUN_007298c0  size=221  [callgraph]
void __fastcall FUN_007298c0(int *param_1)

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
  FUN_00718220(0xa0005,0,0,0);
  param_1[0x187] = 2;
  return;
}

// 007299A0  FUN_007299a0  size=373  [callgraph]
undefined4 __fastcall FUN_007299a0(int param_1)

{
  float fVar1;
  short sVar2;
  
  if (*(int *)(param_1 + 0x1a84) == 0) {
    *(undefined4 *)(param_1 + 0x1688) = 0x42480000;
    FUN_00725090(1,param_1 + 0x10a0);
    *(undefined4 *)(param_1 + 0x1a84) = 1;
  }
  else if (*(int *)(param_1 + 0x1a84) != 1) goto LAB_00729a7a;
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
LAB_00729a7a:
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

// 00729B20  FUN_00729b20  size=868  [callgraph]
void __fastcall FUN_00729b20(int *param_1)

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
      FUN_0070db80((float)(int)sVar2);
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) break;
    if ((20.25 <= (float)param_1[0x2a3]) || (0.7853982 <= (float)param_1[0x2a8])) {
      sVar2 = FUN_00dde2d0(0,1);
LAB_00729d9f:
      FUN_0070db80((float)(int)sVar2);
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
          goto LAB_00729d9f;
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
      FUN_00718220(param_1[0x251],2,0,0);
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

// 00729EA0  FUN_00729ea0  size=234  [callgraph]
void __fastcall FUN_00729ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a4,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00718640();
    *(undefined1 *)(param_1 + 0x412) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_00718570();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00729f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00729F90  FUN_00729f90  size=234  [callgraph]
void __fastcall FUN_00729f90(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2a5,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_007186e0();
    *(undefined1 *)(param_1 + 0x412) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_007184b0();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0072A080  FUN_0072a080  size=310  [callgraph]
void __fastcall FUN_0072a080(int param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_00718220(0x20000,0,0,0);
  }
  return;
}

// 0072A1C0  FUN_0072a1c0  size=301  [callgraph]
void __fastcall FUN_0072a1c0(int param_1)

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
      puVar3 = &DAT_01b357a8;
      (**(code **)(*piVar1 + 4))(&DAT_01b357a8);
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
    FUN_00718220(0xe,0,0,0);
  }
  return;
}

// 0072A2F0  FUN_0072a2f0  size=95  [callgraph]
void __fastcall FUN_0072a2f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00718220(0,0,0,0);
    }
    iVar1 = FUN_00a82e80();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
      FUN_00718220(0x23,0,0,0);
    }
  }
  return;
}

// 0072A350  FUN_0072a350  size=329  [callgraph]
void __fastcall FUN_0072a350(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  if (param_1[0x187] == 0) goto LAB_0072a475;
  if (((param_1[0x2a1] == 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (param_1[0x66e] == 0)) {
LAB_0072a3dd:
    if (param_1[0x670] != 0) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
      goto LAB_0072a475;
    }
  }
  else if (param_1[0x670] != 0) {
    if ((param_1[0x2fa] == 0) && ((float)param_1[0x2a3] < 16.0)) {
      FUN_00718220(0x10002,0,0,0);
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    goto LAB_0072a3dd;
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
  if (30.0 < (float)param_1[0x244] + fVar1) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (param_1[0x421] != 0) {
        FUN_00718220(0x11,0,0,0);
      }
    }
    else if (param_1[0x420] != 0) {
      FUN_00718220(0x10,0,0,0);
    }
  }
LAB_0072a475:
  if (4.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072a497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0072A4A0  FUN_0072a4a0  size=369  [callgraph]
void __fastcall FUN_0072a4a0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0072a50c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0072a50c:
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b357ac;
      (**(code **)(*piVar3 + 4))(&DAT_01b357ac);
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
          FUN_00718220(0x7000c,0,0,0);
        }
      }
    }
  }
  return;
}

// 0072A620  FUN_0072a620  size=237  [callgraph]
void __fastcall FUN_0072a620(int *param_1)

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
    FUN_00718a00();
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
                    /* WARNING: Could not recover jumptable at 0x0072a70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0072A710  FUN_0072a710  size=303  [callgraph]
void __fastcall FUN_0072a710(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4e4) == 0) && (-1 < *(int *)(param_1 + 0x870))) &&
     ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0xb0000)) {
    iVar1 = FUN_00ac8a50();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x105c);
      iVar2 = FUN_00711f80();
      if (iVar2 != 0) {
        FUN_00ac8b80(*(undefined4 *)(iVar2 + 0x4f0));
        *(undefined4 *)(param_1 + 0x105c) = 0;
      }
      if (iVar1 != 0) {
        FUN_00718220(0x7000d,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x14b0) = 0;
      iVar1 = FUN_007136c0();
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
      FUN_0070df70(0);
      *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) & 0xffff7fff;
    }
  }
  return;
}

// 0072A840  FUN_0072a840  size=112  [callgraph]
void __thiscall FUN_0072a840(int *param_1,undefined4 param_2)

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
      FUN_00718220(0x110001,0,0,0);
    }
  }
  return;
}

// 0072A910  FUN_0072a910  size=312  [callgraph]
undefined4 __thiscall FUN_0072a910(int *param_1,int *param_2)

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
        puVar5 = &DAT_01b357a0;
        (**(code **)(*piVar2 + 4))(&DAT_01b357a0);
        iVar1 = FUN_00dd6d80(puVar5);
        uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
  }
  if (param_1[0x236] < 1) {
    if (uVar4 != 0) {
      FUN_0072a710();
    }
    FUN_009fdde0();
    return 1;
  }
  if (uVar4 != 0) {
    FUN_0072a840(param_2);
  }
  return 1;
}

// 0072AA50  FUN_0072aa50  size=837  [callgraph]
bool __thiscall FUN_0072aa50(int *param_1,int param_2,int param_3,int param_4)

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
      FUN_00718220(0xb0000,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 4;
    if (param_1[0x294] != 0) {
      FUN_00713e00(1,1);
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
      FUN_00718220(0xa001a,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 8;
    param_1[0x605] = 1;
    goto LAB_0072abf4;
  case 6:
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x606) & 4) != 0) {
        return true;
      }
      FUN_00718220(0xa001b,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 1;
    param_1[0x605] = 2;
    break;
  case 7:
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x606) & 4) != 0) {
        return true;
      }
      FUN_00718220(0xa001c,0,0,0);
    }
    param_1[0x606] = param_1[0x606] | 2;
    param_1[0x605] = 2;
    FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
    return bVar3;
  case 0xe:
    if (param_2 == 0) {
      if ((param_4 == param_3) || ((param_1[0x605] == 1 && ((param_1[0x3a9] & 0x20000U) == 0)))) {
        FUN_00718220(0x60007,0,0,0);
      }
      else {
        pcVar1 = *(code **)(*param_1 + 0x34c);
        param_1[0x605] = 1;
        (*pcVar1)();
      }
    }
    iVar2 = param_1[0x13c];
    goto LAB_0072ac67;
  case 0xf:
    if (param_2 == 0) {
      FUN_00718220(0xa001d,0,0,0);
    }
    iVar2 = param_1[0x13c];
LAB_0072ac67:
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
      FUN_00718220(0xa001e,0,0,0);
    }
LAB_0072abf4:
    FUN_00c1a300(param_1[0x13c],param_1 + 0x2ac);
    return bVar3;
  case 0x1b:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00718220(0xa001f,0,0,0);
    }
    break;
  case 0x1c:
    FUN_00718220(0xa0020,2,0,0);
    iVar2 = param_1[0x13c];
    goto LAB_0072ab41;
  case 0x1d:
    FUN_00718220(0xb000c,0,0,0);
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    return bVar3;
  case 0x1e:
    if (param_1[0x139] != 0) {
      return bVar3;
    }
    if (param_2 == 0) {
      FUN_00718220(0xa0000,0,0,0);
    }
    iVar2 = param_1[0x13c];
    goto LAB_0072ab41;
  }
  iVar2 = param_1[0x13c];
LAB_0072ab41:
  FUN_00c1a300(iVar2,param_1 + 0x2ac);
  return bVar3;
}

// 0072ADF0  EmC010::vf258  size=960  [class]
void __thiscall EmC010::vf258(int param_1,undefined4 param_2,int param_3,int param_4)

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
        puVar6 = &DAT_01b357a0;
        (**(code **)(*piVar1 + 4))(&DAT_01b357a0);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
      }
    }
  }
  iVar2 = param_4;
  switch(param_2) {
  case 0:
    iVar2 = 1;
    if (*(int *)(param_4 + 0x24) == 0x3c070) {
      iVar2 = 7;
    }
    if (*(int *)(param_4 + 0x24) == 0x3c060) {
      iVar2 = 6;
    }
    param_4 = FUN_00ac8c70(param_4);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    if (*(int *)(param_4 + 0xc) == 9) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(int *)(param_1 + 0x14ac) = iVar2;
      FUN_007184b0();
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
      FUN_00718570();
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0070ef60(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
LAB_0072b191:
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
    if ((iVar2 == 0x3c040) || (iVar2 == 0x3c042)) {
      iVar5 = 2;
    }
    if (iVar2 == 0x3c080) {
      iVar5 = 5;
    }
    param_4 = FUN_00ac8c70(param_4);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    if (*(int *)(param_4 + 0xc) == 9) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      *(int *)(param_1 + 0x14ac) = iVar5;
      FUN_00718640();
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
      FUN_007186e0();
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0070ef60(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      goto LAB_0072b191;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x14b0) = 4;
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0070ef90(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      FUN_00a7c960(&param_4);
      FUN_00718a00();
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
      FUN_00718c00(1);
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
      FUN_00718d50(1);
    }
    uVar3 = FUN_00a7c8a0();
    iVar2 = FUN_0070ef60(uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c940(uVar3);
      goto LAB_0072b191;
    }
    break;
  default:
    goto switchD_0072ae74_default;
  }
switchD_0072ae74_default:
  return;
}

// 0072B1D0  EmC010::vf340  size=40  [class]
void __fastcall EmC010::vf340(int param_1)

{
  BehaviorEmBase::vf340();
  if (*(int *)(param_1 + 0xbfc) != 0) {
    FUN_00dd5650(&DAT_016467e4);
    FUN_00719740();
    return;
  }
  return;
}

// 0072B200  FUN_0072b200  size=276  [between]
void __fastcall FUN_0072b200(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  uVar3 = 0x3c030;
  if ((iVar1 == 0x2c150) || (iVar1 == 0x2c152)) {
    uVar3 = 0x3c070;
  }
  if (iVar1 == 0x2c160) {
    uVar3 = 0x3c031;
  }
  FUN_00a7c950();
  FUN_00a7c950();
  iVar1 = FUN_00a82090("EmC010_Blade",uVar3,0);
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
      puVar4 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c940(uVar3);
        FUN_00a7c960(&stack0x00000000);
        iVar1 = FUN_00ac89d0();
        piVar2[0x146] = iVar1;
        FUN_00718570();
        return;
      }
    }
  }
  FUN_00718570();
  return;
}

// 0072B320  FUN_0072b320  size=530  [between]
void __thiscall FUN_0072b320(int param_1,undefined4 param_2)

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
  uVar1 = 0x3c040;
  if (*(int *)(param_1 + 0x4b0) == 0x2c160) {
    uVar1 = 0x3c042;
  }
  iVar2 = FUN_00a82090("EmC010_Assault",uVar1,0);
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
      puVar4 = &DAT_01b357a8;
      (**(code **)(*piVar3 + 4))(&DAT_01b357a8);
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
    FUN_007186e0();
    uVar1 = FUN_00ac8660(0,0x9b);
    *(undefined4 *)(param_1 + 0x13a4) = uVar1;
    *(undefined4 *)(param_1 + 0x13a0) = uVar1;
    FUN_0040b190();
    iVar2 = FUN_00a82090("EmC010Magazine",0x3c041,auStack_90);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01646860);
      return;
    }
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b357a4;
      (**(code **)(*piVar3 + 4))(&DAT_01b357a4);
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

// 0072B540  FUN_0072b540  size=298  [between]
void FUN_0072b540(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  FUN_00a7c950();
  if (param_2 == 0) {
    FUN_00a7c950();
    uVar4 = 0x3c060;
    pcVar3 = "EmC010_Blade";
  }
  else {
    FUN_00a7c950();
    uVar4 = 0x3c050;
    pcVar3 = "EmC010_SmallBlade";
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
      puVar5 = &DAT_01b357a8;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a8);
      iVar1 = FUN_00dd6d80(puVar5);
      if (iVar1 != 0) {
        uVar4 = FUN_009f8b40();
        FUN_009f8ae0(uVar4);
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c940(uVar4);
        FUN_00a7c960(&stack0x00000000);
        iVar1 = FUN_00ac89d0();
        piVar2[0x146] = iVar1;
        FUN_00718d50(param_2);
        return;
      }
    }
  }
  FUN_00718d50(param_2);
  return;
}

// 0072B670  FUN_0072b670  size=1287  [between]
/* WARNING: Removing unreachable block (ram,0x0072b89b) */
/* WARNING: Removing unreachable block (ram,0x0072ba1e) */

void FUN_0072b670(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

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
  pfStack_64 = (float *)0x72b68f;
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

// 0072BB80  FUN_0072bb80  size=321  [between]
void __fastcall FUN_0072bb80(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) goto LAB_0072bc9d;
  if (((param_1[0x2a1] == 0) || (iVar3 = FUN_00c15850(), iVar3 == 0)) || (param_1[0x66e] == 0)) {
LAB_0072bc13:
    if (param_1[0x670] != 0) {
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        param_1[0x249] = 0;
      }
      goto LAB_0072bc9d;
    }
  }
  else if (param_1[0x670] != 0) {
    iVar3 = FUN_00724550(1);
    if (iVar3 != 0) {
      return;
    }
    if (((param_1[0x250] == 1) && ((*(byte *)(param_1 + 0x3ab) & 0x20) != 0)) &&
       ((float)param_1[0x2a3] < 16.0)) {
      FUN_00718220(0x10002,0,0,0);
      FUN_00c27260(0x40200000);
      return;
    }
    goto LAB_0072bc13;
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
  if (30.0 < (float)param_1[0x244] + fVar1) {
    iVar3 = FUN_00724550(1);
    if (iVar3 != 0) {
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      FUN_00718220(0x11,0,0,0);
    }
    else {
      FUN_00718220(0x10,0,0,0);
    }
  }
LAB_0072bc9d:
  if (4.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0072bcbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0072BCD0  FUN_0072bcd0  size=6669  [between]
/* WARNING: Removing unreachable block (ram,0x0072c6e9) */
/* WARNING: Removing unreachable block (ram,0x0072c64f) */
/* WARNING: Removing unreachable block (ram,0x0072c6f9) */

int __thiscall FUN_0072bcd0(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  float10 fVar14;
  undefined4 uVar15;
  char *pcVar16;
  int local_18;
  int *local_14;
  int local_10;
  uint local_4;
  
  local_18 = 0;
  local_14 = (int *)0x0;
  piVar5 = (int *)FUN_00a8cab0();
  local_4 = 0;
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    local_14 = (int *)FUN_00a7c8a0();
  }
  piVar11 = local_14;
  iVar7 = *param_2;
  if ((((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) || ((iVar7 == 0x1b0 || (iVar7 == 0x147))))
  goto LAB_0072d63a;
  if (5 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x3a9] = param_1[0x3a9] | 0x8000000;
  }
  if ((param_2[0x23] & 0x10000000U) != 0) {
    param_1[0x3aa] = param_1[0x3aa] | 0x400;
  }
  local_10 = param_2[1];
  if (0.0 < (float)param_1[0x5a1]) {
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
  if ((DAT_01bea060 & 0x2000000) != 0) goto LAB_0072d63a;
  param_1[0x3aa] = param_1[0x3aa] & 0xffffefff;
  if ((*param_2 == 0x93) && (iVar7 = FUN_00713700(), iVar7 != 0)) {
    local_4 = 0x40000;
    goto LAB_0072d63a;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    bVar2 = true;
    iVar7 = FUN_007136c0();
    if (((iVar7 != 0) || (param_1[300] == 0x2c170)) && ((param_1[0x3a9] & 0x1000U) == 0)) {
      bVar2 = false;
    }
    iVar7 = FUN_00a9b930();
    if (iVar7 != 0) {
      FUN_00a9b930();
      iVar7 = FUN_00bda170();
      if (iVar7 == 0) goto LAB_0072be90;
    }
    if (bVar2) {
      local_4 = local_4 | 0x40;
    }
  }
LAB_0072be90:
  if (((param_2[0x23] & 0x8000U) != 0) &&
     (((iVar7 = FUN_007136c0(), iVar7 == 0 && (param_1[300] != 0x2c170)) ||
      ((param_1[0x3a9] & 0x1000U) != 0)))) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_007137b0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("R_upper_leg_shield");
        pcVar16 = "R_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("R_hip_armor");
        pcVar16 = "R_leg_armor";
      }
      FUN_00ac94e0(pcVar16);
      FUN_00ac9420("_EFD003");
      FUN_00ac8dd0("_R_leg_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x80000;
    }
    if ((param_1[0x3ab] & 0x100000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("L_upper_leg_shield");
        pcVar16 = "L_lower_leg_shield";
      }
      else {
        FUN_00ac94e0("L_hip_armor");
        pcVar16 = "L_leg_armor";
      }
      FUN_00ac94e0(pcVar16);
      FUN_00ac9420("_EFD004");
      FUN_00ac8dd0("_L_leg_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x100000;
    }
    if ((param_1[0x3ab] & 0x200000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("L_forearm_armor1");
        pcVar16 = "R_shoulder_pad";
      }
      else {
        pcVar16 = "R_shoulder_armor";
      }
      FUN_00ac94e0(pcVar16);
      FUN_00ac9420("_EFD01");
      FUN_00ac8dd0("_R_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x200000;
    }
    if ((param_1[0x3ab] & 0x400000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("L_forearm_armor");
        pcVar16 = "L_shoulder_pad";
      }
      else {
        pcVar16 = "L_shoulder_armor";
      }
      FUN_00ac94e0(pcVar16);
      FUN_00ac9420("_EFD02");
      FUN_00ac8dd0("_L_arm_",1);
      param_1[0x3ab] = param_1[0x3ab] | 0x400000;
    }
    if ((param_1[0x3a9] & 0x1000U) == 0) {
      (**(code **)(*param_1 + 0x358))(0x15b,param_1 + 0x3d8);
    }
    param_1[0x3a9] = param_1[0x3a9] | 0x1000;
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar7 = FUN_00ac8170(local_14), iVar7 == 0))
  goto LAB_0072d63a;
  if ((DAT_01bea094 & 0x20000) != 0) {
    param_1[0x3a9] = param_1[0x3a9] | 0x80000;
  }
  if ((param_1[0x21c] < 1) || (iVar7 = FUN_00ac8170(local_14), iVar7 == 0)) {
LAB_0072c51e:
    param_1[0x458] = param_1[0x458] + -1;
    fVar14 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar14;
    if (((param_1[0x3ab] & 0x8000U) != 0) && (param_1[0x417] != 0)) {
      if ((param_1[0x3aa] & 0x2000000U) == 0) {
        fVar3 = 2.0943952;
      }
      else {
        fVar3 = 1.0471976;
      }
      if ((float)param_1[0x2a8] < fVar3) {
        FUN_00718220(0x110001,0,0,0);
        local_4 = 3;
        goto LAB_0072d63a;
      }
    }
    iVar7 = *param_2;
    bVar2 = false;
    if (((iVar7 == 0x4c) || (iVar7 == 0x4b)) || (iVar7 == 0x4a)) {
      if (param_1[0x705] == 2) {
        bVar2 = true;
      }
      else if ((param_1[0x705] == 1) && (uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 1) != 0)) {
        bVar2 = true;
      }
    }
    iVar7 = *param_2;
    if (((((iVar7 == 0x30) || (iVar7 == 0x32)) || (iVar7 == 0x33)) ||
        ((iVar7 == 0x34 || (iVar7 == 0x10)))) || (iVar7 == 0x35)) {
      if (param_1[0x705] == 2) {
        uVar9 = FUN_00dde2a0(1,1000);
        if ((uVar9 & 1) != 0) {
LAB_0072c659:
          bVar2 = true;
        }
      }
      else if ((param_1[0x705] == 1) && (uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 3) == 2))
      goto LAB_0072c659;
    }
    if (((((*param_2 == 0x2f) && (iVar7 = FUN_00ac82f0(), iVar7 != 0)) &&
         (iVar7 = FUN_00ac8350(), iVar7 == 0)) && (param_1[0x186] == 0xa0001)) ||
       ((param_1[0x186] == 0xa000a || (param_1[0x186] == 0xa0000)))) {
      uVar9 = FUN_00dde2a0(1,1000);
      uVar10 = FUN_00ac4780();
      switch(uVar10) {
      case 0:
        bVar13 = (uVar9 & 0xffff) % 10 == 0;
        break;
      case 1:
        bVar13 = (uVar9 & 0xffff) % 5 == 0;
        break;
      case 2:
        bVar13 = (uVar9 & 3) == 0;
        break;
      case 3:
      case 4:
        bVar13 = (uVar9 & 1) == 0;
        break;
      default:
        goto switchD_0072c6bc_default;
      }
      if (bVar13) {
        bVar2 = true;
      }
    }
switchD_0072c6bc_default:
    if (param_1[0x41d] != 0) {
      bVar2 = false;
    }
    if ((param_1[0x52b] == 2) || (param_1[0x52b] == 3)) {
      bVar2 = false;
    }
    if (param_1[0x605] == 1) {
      bVar2 = false;
    }
    if (piVar5 == (int *)0xa000d) {
      bVar2 = false;
    }
    if (piVar5 == (int *)0xa0015) {
      bVar2 = false;
    }
    if (param_1[0x605] == 2) {
      bVar2 = false;
    }
    else if (bVar2) {
      local_10 = 0;
    }
    (**(code **)(*param_1 + 0x30c))(local_10,0);
    iVar7 = param_1[300];
    param_1[0x6ec] = param_1[0x6ec] + local_10;
    if (((iVar7 == 0x2c150) || (iVar7 == 0x2c152)) || (iVar7 == 0x2c170)) {
      FUN_007143e0();
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
        FUN_00713e00(uVar10,uVar9 >> 0xb & 1);
        FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      }
      else {
        FUN_0070e9a0();
      }
      if (((param_1[0x3ab] & 0x2000U) != 0) && (iVar7 = FUN_007119b0(), iVar7 != 0)) {
        FUN_007119b0();
        FUN_007e6740();
      }
      param_1[0x139] = 1;
      param_1[0x3a9] = param_1[0x3a9] | 0x10000000;
      param_1[0x6e3] = -1;
      param_1[0x6e7] = -1;
      pcVar1 = *(code **)(*param_1 + 0x1d8);
      param_1[0x6e4] = 0;
      param_1[0x6e5] = 0;
      param_1[0x6e6] = 0;
      param_1[0x6e8] = 0;
      param_1[0x6e9] = 0;
      param_1[0x6ea] = 0;
      iVar7 = (*pcVar1)();
      if ((iVar7 == 0) && ((param_1[0x3aa] & 0x200000U) == 0)) {
        FUN_00718220(0xb0000,0,0,0);
        iVar7 = FUN_0071a1f0(param_2);
        if (iVar7 != 0) {
          iVar7 = param_1[0x606];
          goto LAB_0072c8e6;
        }
      }
      else {
        iVar7 = param_1[0x606];
LAB_0072c8e6:
        FUN_00712f60(iVar7,0xbf800000);
      }
      if (param_1[0x605] == 1) {
        FUN_00718220(0x60008,0,0,0);
      }
      local_4 = local_4 | 0x80;
      iVar7 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar7 == 0) goto LAB_0072d63a;
    }
    bVar13 = true;
    if ((piVar5 == (int *)0xa000d) || (piVar5 == (int *)0x60012)) {
      bVar13 = false;
    }
    iVar7 = FUN_0070e200();
    if ((iVar7 != 0) && (param_1[0x605] != 1)) {
      bVar13 = false;
    }
    if ((param_1[0x60d] == 0) && (4 < *(byte *)((int)param_2 + 0x11))) {
      param_1[0x607] = param_1[0x607] - (uint)*(byte *)((int)param_2 + 0x11);
    }
    if ((param_1[0x69e] != 0) || ((param_1[0x3ab] & 0x2000U) != 0)) goto LAB_0072d63a;
    if ((param_1[0x3aa] & 0x200000U) != 0) {
      FUN_00718220(0xa0020,2,0,0);
      goto LAB_0072d63a;
    }
    iVar7 = FUN_007136c0();
    if ((iVar7 != 0) && ((*(byte *)(param_2 + 0x23) & 2) != 0)) {
      (**(code **)(*param_1 + 0x358))(399,0);
      if ((param_1[0x3ab] & 0x40000U) == 0) {
        if (param_1[300] == 0x2c170) {
          FUN_00ac94e0("chest_vest");
        }
        FUN_00ac9420(&DAT_0163d9a8);
        FUN_007137b0();
        FUN_00ac8d40(1);
        param_1[0x3ab] = param_1[0x3ab] | 0x40000;
      }
      if ((param_1[0x3ab] & 0x80000U) == 0) {
        if (param_1[300] == 0x2c170) {
          FUN_00ac94e0("R_upper_leg_shield");
          pcVar16 = "R_lower_leg_shield";
        }
        else {
          FUN_00ac94e0("R_hip_armor");
          pcVar16 = "R_leg_armor";
        }
        FUN_00ac94e0(pcVar16);
        FUN_00ac9420("_EFD003");
        FUN_00ac8dd0("_R_leg_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x80000;
      }
      if ((param_1[0x3ab] & 0x100000U) == 0) {
        if (param_1[300] == 0x2c170) {
          FUN_00ac94e0("L_upper_leg_shield");
          pcVar16 = "L_lower_leg_shield";
        }
        else {
          FUN_00ac94e0("L_hip_armor");
          pcVar16 = "L_leg_armor";
        }
        FUN_00ac94e0(pcVar16);
        FUN_00ac9420("_EFD004");
        FUN_00ac8dd0("_L_leg_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x100000;
      }
      if ((param_1[0x3ab] & 0x200000U) == 0) {
        if (param_1[300] == 0x2c170) {
          FUN_00ac94e0("L_forearm_armor1");
          pcVar16 = "R_shoulder_pad";
        }
        else {
          pcVar16 = "R_shoulder_armor";
        }
        FUN_00ac94e0(pcVar16);
        FUN_00ac9420("_EFD01");
        FUN_00ac8dd0("_R_arm_",1);
        param_1[0x3ab] = param_1[0x3ab] | 0x200000;
      }
      if ((param_1[0x3ab] & 0x400000U) == 0) {
        if (param_1[300] == 0x2c170) {
          FUN_00ac94e0("L_forearm_armor");
          pcVar16 = "L_shoulder_pad";
        }
        else {
          pcVar16 = "L_shoulder_armor";
        }
        FUN_00ac94e0(pcVar16);
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
        if (bVar13) {
          if (param_1[0x605] == 1) {
            FUN_00718220(0x60007,0,0,0);
          }
          else {
            FUN_00718220(0x70009,0,0,0);
          }
          goto LAB_0072d63a;
        }
      }
      else {
        FUN_00718aa0();
        iVar7 = FUN_007136c0();
        if (iVar7 == 0) {
          FUN_0070df70(0);
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
    iVar7 = *param_2;
    bVar12 = false;
    if (((((iVar7 == 0x1a9) || (iVar7 == 0x1aa)) || (iVar7 == 0x1a7)) || (iVar7 == 0x1a8)) &&
       (iVar7 = FUN_007136c0(), iVar7 != 0)) {
      bVar12 = true;
    }
    iVar7 = FUN_00a8c760(0x10);
    if ((iVar7 != 0) || (bVar12)) {
      if (param_1[0x246] != 0) {
        FUN_0041cc40(0x3dcccccd);
      }
    }
    else if (bVar13) {
      if (param_1[0x605] == 1) {
        FUN_00718220(0x60007,0,0,0);
      }
      else {
        FUN_00718220(0xa0000,0,0,0);
        param_1[0x529] = param_1[0x529] + 1;
        if ((*(byte *)(param_1 + 0x529) & 1) != 0) {
          FUN_00718220(0xa000a,0,0,0);
        }
      }
    }
    if (((*param_2 == 0x42) || (*param_2 == 99)) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa000a,0,0,0);
    }
    if ((*param_2 == 0x44) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa000a,0,0,0);
    }
    if (*param_2 == 0x3b) {
      FUN_00718220(0xa0017,0,0,0);
    }
    if (*param_2 == 0x3e) {
      FUN_00718220(0xa0018,0,0,0);
    }
    if (*param_2 == 0x46) {
      FUN_00718220(0xa0012,0,0,0);
    }
    if ((param_2[0x24] & 0x8000000U) != 0) {
      FUN_00718220(0xa0012,0,0,0);
    }
    if ((param_1[0x60d] != 0) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa0001,0,0,0);
    }
    if (((*param_2 == 0x34) || (*param_2 == 0x40)) &&
       ((param_1[0x605] != 1 || ((param_1[0x3a9] & 0x20000U) != 0)))) {
      FUN_00718220(0xa000f,0,0,0);
    }
    if ((param_2[0x24] & 0x2000000U) != 0) {
      FUN_00718220(0xa0004,0,0,0);
      param_1[0x607] = 0x1e;
      if (local_14 != (int *)0x0) {
        FUN_00a8e880(local_14 + 0x10);
        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
      }
    }
    bVar13 = true;
    if ((((*param_2 == 0x1a7) && (iVar7 = FUN_007136c0(), iVar7 != 0)) &&
        (iVar7 = (**(code **)(*param_1 + 0x1fc))(), iVar7 == 0)) &&
       (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 == 0)) {
      bVar13 = false;
    }
    if (((param_2[0x24] & 0x800000U) != 0) && (bVar13)) {
      param_1[0x607] = 0x1e;
      FUN_00718220(0xa0005,0,0,0);
    }
    iVar7 = *param_2;
    bVar13 = true;
    if ((((iVar7 == 0x1a9) || (iVar7 == 0x1aa)) || ((iVar7 == 0x1a7 || (iVar7 == 0x1a8)))) &&
       ((iVar7 = FUN_007136c0(), iVar7 != 0 &&
        (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 == 0)))) {
      bVar13 = false;
    }
    if (((*(byte *)((int)param_2 + 0x93) & 1) != 0) && (bVar13)) {
      param_1[0x607] = 0x1e;
      FUN_00718220(0xa000c,0,0,0);
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      param_1[0x5a7] = 200;
      if (param_1[0x605] == 1) {
        iVar7 = FUN_00a8c760(6);
        if (iVar7 == 0) {
          uVar10 = 0;
          uVar15 = 0x60012;
        }
        else {
          uVar10 = 6;
          uVar15 = 0x60012;
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
        uVar15 = 0xa000d;
      }
      FUN_00718220(uVar15,uVar10,0,0);
    }
    if ((*param_2 == 0x54) && (piVar5 != (int *)0xa000d)) {
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
        FUN_00718220(0xa000d,uVar10,0,0);
      }
    }
    if ((piVar5 == (int *)0xa0002) && (*param_2 == 0x4f)) {
      FUN_00718220(0xa0002,2,0,0);
    }
    if ((*param_2 == 0x4c) || (uVar9 = local_4, *param_2 == 0x4b)) {
      if (bVar2) {
        FUN_00718220(0x110001,0,0,0);
        local_4 = 2;
        uVar9 = local_4;
      }
      else {
        param_1[0x607] = 8;
        FUN_00718220(0xa0014,0,0,0);
        bVar13 = true;
        iVar7 = FUN_007136c0();
        if (((iVar7 != 0) || (param_1[300] == 0x2c170)) && ((param_1[0x3a9] & 0x1000U) == 0)) {
          bVar13 = false;
        }
        iVar7 = FUN_00a9b930();
        uVar9 = local_4 | 0x20000;
        if (iVar7 != 0) {
          FUN_00a9b930();
          iVar7 = FUN_00bda170();
          if (iVar7 == 0) goto LAB_0072d13f;
        }
        if (bVar13) {
          uVar9 = local_4 | 0x20040;
        }
      }
    }
LAB_0072d13f:
    local_4 = uVar9;
    if (piVar5 == (int *)0x110000) {
      if (*(char *)((int)param_2 + 0x11) == '\n') {
        param_1[0x51e] = 0;
        FUN_00718220(0xa000b,0,0,0);
        local_4 = 8;
      }
      if (param_1[0x457] < 0) {
        param_1[0x51e] = 0;
        local_4 = 8;
        FUN_00718220(0xa000b,0,0,0);
        param_1[0x457] = 100;
      }
    }
    if (0.0 < (float)param_1[0x51e]) {
      param_1[0x51e] = 0;
      local_4 = 8;
      FUN_00718220(0xa000b,0,0,0);
    }
    if (piVar5 != (int *)0xa0015) {
      if (((param_2[0x23] & 0x800U) != 0) && (param_1[0x605] != 1)) {
        FUN_00718220(0xa0015,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (param_1[0x605] != 1)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00718220(0xa0015,0,0,0);
      }
    }
    if ((param_2[0x24] & 0x80000000U) != 0) {
      FUN_00718220(0xa0017,0,0,0);
    }
    if ((param_2[0x24] & 0x40000000U) != 0) {
      FUN_00718220(0xa0018,0,0,0);
    }
    if ((param_2[0x24] & 0x20000000U) != 0) {
      FUN_00718220(0xa0019,0,0,0);
    }
    if (((param_2[0x24] & 0x80000U) != 0) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa0001,0,0,0);
    }
    if ((*param_2 == 0x4a) && (bVar2)) {
      FUN_00718220(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar7 = *param_2;
    if ((((((iVar7 == 0x30) || (iVar7 == 0x32)) || (iVar7 == 0x33)) ||
         ((iVar7 == 0x34 || (iVar7 == 0x10)))) || (iVar7 == 0x35)) && (bVar2)) {
      FUN_00718220(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar7 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar7 == 0) {
      param_1[0x6eb] = 0;
    }
    else {
      param_1[0x6eb] = param_1[0x6eb] + 1;
      if (param_1[0x605] == 1) {
        uVar10 = 0x6000d;
LAB_0072d3a8:
        FUN_00718220(uVar10,0,0,0);
      }
      else {
        param_1[0x607] = 0x1e;
        FUN_00718220(0xa0006,0,0,0);
        if (1 < param_1[0x6eb]) {
          uVar10 = 0xa0004;
          goto LAB_0072d3a8;
        }
        if ((param_2[0x24] & 0x800000U) != 0) {
          uVar10 = 0xa0005;
          goto LAB_0072d3a8;
        }
      }
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00718220(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x40000000U) != 0) {
        FUN_00718220(0xa0018,0,0,0);
      }
      if ((param_2[0x24] & 0x20000000U) != 0) {
        FUN_00718220(0xa0019,0,0,0);
      }
      if ((param_2[0x24] & 0x80000000U) != 0) {
        FUN_00718220(0xa0017,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x51d] = 1;
        if (param_1[0x605] == 1) {
          FUN_00718220(0x6000e,0,0,0);
        }
        else {
          FUN_00718220(0xa0007,0,0,0);
        }
      }
    }
    if (param_1[0x605] == 1) {
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00718220(0x6000b,0,0,0);
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
        FUN_00718220(0x60012,uVar10,0,0);
      }
      if ((*param_2 == 0x54) && (piVar5 != (int *)0x60012)) {
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
          FUN_00718220(0x60012,uVar10,0,0);
        }
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_00718220(0x6000c,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x607] = 0x1e;
        FUN_00718220(0x6000e,0,0,0);
      }
      iVar7 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar7 != 0) {
        FUN_00718220(0x6000d,0,0,0);
        if ((param_2[0x24] & 0x2000000U) != 0) {
          FUN_00718220(0x6000b,0,0,0);
        }
        if ((param_2[0x24] & 0x40000000U) != 0) {
          FUN_00718220(0xa0018,0,0,0);
        }
        if ((param_2[0x24] & 0x20000000U) != 0) {
          FUN_00718220(0xa0019,0,0,0);
        }
        if ((param_2[0x24] & 0x80000000U) != 0) {
          FUN_00718220(0xa0017,0,0,0);
        }
        if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
          param_1[0x51d] = 1;
          FUN_00718220(0x6000e,0,0,0);
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x21c))(local_14,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
    iVar7 = -1;
    if ((local_14 != (int *)0x0) && (iVar8 = (**(code **)(*local_14 + 0x17c))(), iVar8 != 0)) {
      iVar7 = (**(code **)(*local_14 + 0x184))(*param_2,param_1[0x13c],param_2);
    }
    if ((param_1[0x522] != 0) &&
       ((((iVar8 = param_1[0x186], iVar8 == 0x110001 || (iVar8 == 0x110002)) || (iVar8 == 0x110003))
        && ((iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 == 0 &&
            ((param_2[0x23] & 0x2000U) == 0)))))) {
      local_18 = 1;
      FUN_00a8e880(local_14 + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      iVar7 = 2;
      if (param_1[0x705] == 2) {
        iVar7 = 1;
      }
      if ((((param_1[0x3ab] & 0x8000U) == 0) || (param_1[0x417] == 0)) &&
         ((iVar8 = FUN_00a8e2b0(), iVar8 != 0 ||
          (((iVar8 = FUN_00ac82f0(), iVar8 != 0 && (iVar8 = FUN_00ac8350(), iVar8 != 0)) ||
           (*piVar5 == 0x1b7)))))) {
        FUN_00718220(0x110002,0,0,0);
        if (param_1[0x604] < 3) {
          local_14 = (int *)0x2;
        }
        else {
          FUN_00718220(0x110003,0,0,0);
          iVar7 = FUN_00ac82f0();
          if ((iVar7 == 0) && (*piVar5 != 0x1b7)) {
            local_14 = (int *)0x200;
          }
          else {
            local_14 = (int *)0x4000;
          }
        }
      }
      else {
        if (param_1[0x604] < iVar7) {
          local_14 = (int *)0x2;
          FUN_00718220(0x110002,0,0,0);
        }
        else {
          FUN_00718220(0x110003,0,0,0);
          iVar7 = FUN_00ac82f0();
          local_14 = (int *)((-(uint)(iVar7 != 0) & 0x3e00) + 0x200);
        }
        iVar7 = FUN_007136c0();
        if ((iVar7 != 0) && (*piVar5 == 0x4f)) {
          FUN_00718220(0x110003,0,0,0);
          iVar7 = FUN_00ac82f0();
          local_14 = (int *)((-(uint)(iVar7 != 0) & 0x3e00) + 0x200);
        }
      }
      uVar4 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x56);
      (**(code **)(*param_1 + 0x21c))(piVar11,uVar4,0x3c23d70a,0);
      param_1[0x604] = param_1[0x604] + 1;
      if ((param_1[0x3aa] & 0x2000000U) != 0) {
        param_1[0x604] = 0;
      }
      goto LAB_0072d63a;
    }
    iVar8 = FUN_007136c0();
    if (iVar8 != 0) {
      iVar8 = param_1[0x186];
      if ((((iVar8 == 0x110001) || (iVar8 == 0x110002)) || (iVar8 == 0x110003)) &&
         (((iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 == 0 &&
           ((param_2[0x23] & 0x2000U) == 0)) && (*param_2 == 0x4f)))) {
        FUN_00718220(0x110003,0,0,0);
        iVar7 = FUN_00ac82f0();
        local_4 = (-(uint)(iVar7 != 0) & 0x3e00) + 0x200;
        goto LAB_0072d63a;
      }
      iVar8 = (**(code **)(*param_1 + 0x1d8))();
      if (((iVar8 == 0) && ((param_2[0x23] & 0x2000U) == 0)) &&
         ((uVar9 = FUN_00dde2a0(1,1000), (uVar9 & 1) != 0 && (*param_2 == 0x1aa)))) {
        FUN_00718220(0x110003,0,0,0);
        iVar7 = FUN_00ac82f0();
        local_4 = (-(uint)(iVar7 != 0) & 0x3e00) + 0x200;
        goto LAB_0072d63a;
      }
    }
    if ((((param_1[0x522] == 0) || (iVar7 != 9)) ||
        (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 != 0)) ||
       (iVar7 = FUN_0070fff0(), iVar7 == 0)) goto LAB_0072c51e;
    (**(code **)(*param_1 + 0x188))(9,iVar6);
    (**(code **)(*local_14 + 0x188))(9,param_1[0x13c]);
    local_4 = 0;
  }
  local_18 = 1;
LAB_0072d63a:
  if (((iVar6 != 0) && ((param_1[0x3aa] & 0x200000U) == 0)) && (param_1[0x139] == 0)) {
    FUN_00a88250(iVar6,param_2 + 0x40);
    piVar11 = (int *)FUN_00c206d0();
    (**(code **)(*piVar11 + 4))(0,param_1[0x13c],param_1 + 0x10);
    if ((param_1[0x3aa] & 0x80000U) != 0) {
      DAT_01d6426c = 1;
    }
  }
  if (local_4 != 0) {
    (**(code **)(*param_1 + 0x198))(local_14,param_2,local_4);
  }
  if (local_18 != 0) {
    FUN_00719660(piVar5);
  }
  return local_18;
}

// 0072D700  FUN_0072d700  size=5777  [between]
/* WARNING: Removing unreachable block (ram,0x0072ddbb) */

undefined4 __thiscall FUN_0072d700(int *param_1,int *param_2)

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
  goto LAB_0072ed2b;
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
  if ((DAT_01bea060 & 0x2000000) != 0) goto LAB_0072ed2b;
  if (*param_2 == 0x93) {
    local_4 = 0x40000;
    goto LAB_0072ed2b;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    uVar7 = param_1[0x3a9];
    iVar6 = FUN_00a9b930();
    if (iVar6 != 0) {
      FUN_00a9b930();
      iVar6 = FUN_00bda170();
      if (iVar6 == 0) goto LAB_0072d890;
    }
    if ((uVar7 & 0x1000) != 0) {
      local_4 = local_4 | 0x40;
    }
  }
LAB_0072d890:
  if (((param_2[0x23] & 0x8000U) != 0) && ((param_1[0x3a9] & 0x1000U) != 0)) {
    local_4 = local_4 & 0xffffffbf | 0x20;
  }
  if (*param_2 == 0x92) {
    local_4 = local_4 & 0xffffffbf | 0x20;
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_007137b0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
  goto LAB_0072ed2b;
  if ((0 < param_1[0x21c]) && (iVar6 = FUN_00ac8170(local_14), iVar6 != 0)) {
    (**(code **)(*param_1 + 0x21c))(local_14,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
    if ((local_14 != (int *)0x0) && (iVar6 = (**(code **)(*local_14 + 0x17c))(), iVar6 != 0)) {
      (**(code **)(*local_14 + 0x184))(*param_2,param_1[0x13c],param_2);
    }
    if ((param_1[0x522] != 0) &&
       ((((iVar6 = param_1[0x186], iVar6 == 0x110001 || (iVar6 == 0x110002)) || (iVar6 == 0x110003))
        && ((iVar6 = (**(code **)(*param_1 + 0x1d8))(), iVar6 == 0 &&
            ((param_2[0x23] & 0x2000U) == 0)))))) {
      local_20 = 1;
      FUN_00a8e880(local_14 + 0x10);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      iVar4 = FUN_00a8e2b0();
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_00ac82f0(), iVar4 == 0 || (iVar4 = FUN_00ac8350(), iVar4 == 0)))) {
        if ((param_1[0x604] < 0) || (iVar4 = FUN_00ac82f0(), iVar4 != 0)) {
          local_14 = (int *)0x2;
          FUN_00718220(0x110002,0,0,0);
        }
        else {
          FUN_00718220(0x110003,0,0,0);
          local_14 = (int *)0x200;
        }
      }
      else {
        FUN_00718220(0x110002,0,0,0);
        FUN_00718220(0xa000b,0,0,0);
        local_14 = (int *)&DAT_00000008;
      }
      uVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x56);
      (**(code **)(*param_1 + 0x21c))(piVar9,uVar3,0x3c23d70a,0);
      param_1[0x604] = param_1[0x604] + 1;
      goto LAB_0072ed2b;
    }
  }
  param_1[0x458] = param_1[0x458] + -1;
  fVar13 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar13;
  iVar6 = *param_2;
  bVar2 = false;
  if (((iVar6 != 0x4c) && (iVar6 != 0x4b)) && (iVar6 != 0x4a)) goto switchD_0072dd22_default;
  uVar7 = FUN_00dde2a0(1,1000);
  uVar8 = FUN_00ac4780();
  switch(uVar8) {
  case 0:
    if ((uVar7 & 0xffff) % 5 == 2) goto switchD_0072dd22_caseD_3;
    break;
  case 1:
    bVar12 = (uVar7 & 1) == 0;
    goto LAB_0072dd4c;
  case 2:
    bVar12 = (uVar7 & 0xffff) % 5 == 2;
LAB_0072dd4c:
    if (!bVar12) {
switchD_0072dd22_caseD_3:
      bVar2 = true;
    }
    break;
  case 3:
  case 4:
    goto switchD_0072dd22_caseD_3;
  }
switchD_0072dd22_default:
  iVar6 = *param_2;
  if ((((iVar6 == 0x30) || (iVar6 == 0x32)) ||
      ((iVar6 == 0x33 || ((iVar6 == 0x34 || (iVar6 == 0x10)))))) || (iVar6 == 0x35)) {
    if (param_1[0x705] == 2) {
      uVar7 = FUN_00dde2a0(1,1000);
      if ((uVar7 & 1) != 0) {
LAB_0072ddc5:
        bVar2 = true;
      }
    }
    else if ((param_1[0x705] == 1) && (uVar7 = FUN_00dde2a0(1,1000), (uVar7 & 3) == 2))
    goto LAB_0072ddc5;
  }
  if ((*param_2 == 0x1aa) && (uVar7 = FUN_00dde2a0(1,1000), (uVar7 & 1) != 0)) {
    bVar2 = true;
  }
  if (*param_2 != 0x2f) goto switchD_0072de1b_default;
  uVar7 = FUN_00dde2a0(1,1000);
  uVar8 = FUN_00ac4780();
  switch(uVar8) {
  case 0:
    uVar7 = (uVar7 & 0xffff) % 10;
    goto joined_r0x0072de3e;
  case 1:
    uVar7 = (uVar7 & 0xffff) % 5;
joined_r0x0072de3e:
    if (uVar7 == 0) {
switchD_0072de1b_caseD_3:
      bVar2 = true;
    }
    break;
  case 2:
    if ((uVar7 & 1) != 0) goto switchD_0072de1b_caseD_3;
    break;
  case 3:
  case 4:
    goto switchD_0072de1b_caseD_3;
  }
switchD_0072de1b_default:
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
  iVar6 = *param_2;
  if ((((iVar6 == 0x1a9) || (iVar6 == 0x1aa)) || (iVar6 == 0x1a7)) || (iVar6 == 0x1a8)) {
    local_c = 0;
  }
  param_1[0x6ec] = param_1[0x6ec] + local_c;
  param_1[0x6fe] = param_1[0x6fe] + local_c;
  FUN_007143e0();
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
      FUN_00713e00(uVar8,uVar7 >> 0xb & 1);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    }
    else {
      FUN_0070e9a0();
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
      FUN_00718220(0xb0000,0,0,0);
      iVar6 = FUN_0071a1f0(param_2);
      if (iVar6 != 0) {
        iVar6 = param_1[0x606];
        goto LAB_0072dffa;
      }
    }
    else {
      iVar6 = param_1[0x606];
LAB_0072dffa:
      FUN_00712f60(iVar6,0xbf800000);
    }
    if (param_1[0x605] == 1) {
      FUN_00718220(0x60008,0,0,0);
    }
    local_4 = local_4 | 0x80;
    iVar6 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar6 == 0) goto LAB_0072ed2b;
  }
  if (param_1[0x69e] != 0) goto LAB_0072ed2b;
  if ((*(byte *)(param_2 + 0x23) & 2) != 0) {
    (**(code **)(*param_1 + 0x358))(399,0);
    if ((param_1[0x3ab] & 0x40000U) == 0) {
      if (param_1[300] == 0x2c170) {
        FUN_00ac94e0("chest_vest");
      }
      FUN_00ac9420(&DAT_0163d9a8);
      FUN_007137b0();
      FUN_00ac8d40(1);
      param_1[0x3ab] = param_1[0x3ab] | 0x40000;
    }
    if ((param_1[0x3ab] & 0x80000U) == 0) {
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
      if (param_1[300] == 0x2c170) {
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
  if (((param_1[0x6fd] <= param_1[0x6fe]) && (param_1[0x6fe] = 0, param_1[0x605] != 1)) &&
     ((!bVar10 && (!bVar11)))) {
    FUN_00718220(0xa0001,0,0,0);
  }
  param_1[0x6fb] = param_1[0x6fb] + local_c;
  param_1[0x6fa] = param_1[0x6f9];
  if (((bVar10) || (bVar11)) || (param_1[0x605] == 1)) {
    param_1[0x6fb] = 0;
  }
  else if (param_1[0x6fc] <= param_1[0x6fb]) {
    param_1[0x6fb] = 0;
    FUN_00718220(0xa0015,0,0,0);
    bVar10 = true;
  }
  if (((param_1[0x3a9] & 0x1000U) != 0) || (bVar11)) {
    if ((!bVar10) && (((*(byte *)(param_2 + 0x23) & 1) != 0 && (param_1[0x605] != 1)))) {
      (**(code **)(*param_1 + 0x358))(0x18e,0);
      FUN_00718220(0xa0015,0,0,0);
    }
    iVar6 = *param_2;
    bVar11 = false;
    if ((((iVar6 == 0x1a9) || (iVar6 == 0x1aa)) || (iVar6 == 0x1a7)) || (iVar6 == 0x1a8)) {
      bVar11 = true;
    }
    iVar6 = FUN_00a8c760(0x10);
    if (((iVar6 != 0) || (bVar11)) && (param_1[0x246] != 0)) {
      FUN_0041cc40(0x3dcccccd);
    }
    if (((*param_2 == 0x42) || (*param_2 == 99)) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa000a,0,0,0);
    }
    if ((*param_2 == 0x44) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa000a,0,0,0);
    }
    if (*param_2 == 0x3b) {
      FUN_00718220(0xa0017,0,0,0);
    }
    if (*param_2 == 0x3e) {
      FUN_00718220(0xa0018,0,0,0);
    }
    if (*param_2 == 0x46) {
      FUN_00718220(0xa0012,0,0,0);
    }
    if ((param_2[0x24] & 0x8000000U) != 0) {
      FUN_00718220(0xa0012,0,0,0);
    }
    if ((param_1[0x60d] != 0) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa0001,0,0,0);
    }
    if (((*param_2 == 0x34) || (*param_2 == 0x40)) &&
       ((param_1[0x605] != 1 || ((param_1[0x3a9] & 0x20000U) != 0)))) {
      FUN_00718220(0xa000f,0,0,0);
    }
    if (((param_2[0x24] & 0x2000000U) != 0) && (!bVar10)) {
      FUN_00718220(0xa0004,0,0,0);
      param_1[0x607] = 0x1e;
      if (local_14 != (int *)0x0) {
        FUN_00a8e880(local_14 + 0x10);
        (**(code **)(*param_1 + 0x308))(0x3f7851ec,0x393702d3,0x40490fdb,0);
      }
    }
    iVar6 = *param_2;
    bVar11 = true;
    if (((((iVar6 == 0x1a9) || (iVar6 == 0x1aa)) || (iVar6 == 0x1a7)) || (iVar6 == 0x1a8)) &&
       ((iVar6 = (**(code **)(*param_1 + 0x1fc))(), iVar6 == 0 &&
        (iVar6 = (**(code **)(*param_1 + 0x1d8))(), iVar6 == 0)))) {
      bVar11 = false;
    }
    if (((param_2[0x24] & 0x800000U) != 0) && (bVar11)) {
      param_1[0x607] = 0x1e;
      FUN_00718220(0xa0005,0,0,0);
    }
    iVar6 = *param_2;
    bVar11 = true;
    if (((((iVar6 == 0x1a9) || (iVar6 == 0x1aa)) || (iVar6 == 0x1a7)) || (iVar6 == 0x1a8)) &&
       (iVar6 = (**(code **)(*param_1 + 0x1d8))(), iVar6 == 0)) {
      bVar11 = false;
    }
    if (((*(byte *)((int)param_2 + 0x93) & 1) != 0) && (bVar11)) {
      param_1[0x607] = 0x1e;
      FUN_00718220(0xa000c,0,0,0);
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
      FUN_00718220(0xa000d,uVar8,0,0);
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
        FUN_00718220(0xa000d,uVar8,0,0);
      }
    }
    if ((iVar4 == 0xa0002) && (*param_2 == 0x4f)) {
      FUN_00718220(0xa0002,2,0,0);
    }
    if ((*param_2 == 0x4c) || (uVar7 = local_4, *param_2 == 0x4b)) {
      if (bVar2) {
        FUN_00718220(0x110001,0,0,0);
        local_4 = 2;
        uVar7 = local_4;
      }
      else {
        param_1[0x607] = 8;
        FUN_00718220(0xa0014,0,0,0);
        bVar11 = true;
        iVar6 = FUN_007136c0();
        if (((iVar6 != 0) || (param_1[300] == 0x2c170)) && ((param_1[0x3a9] & 0x1000U) == 0)) {
          bVar11 = false;
        }
        iVar6 = FUN_00a9b930();
        uVar7 = local_4 | 0x20000;
        if (iVar6 != 0) {
          FUN_00a9b930();
          iVar6 = FUN_00bda170();
          if (iVar6 == 0) goto LAB_0072e823;
        }
        if (bVar11) {
          uVar7 = local_4 | 0x20040;
        }
      }
    }
LAB_0072e823:
    local_4 = uVar7;
    if (iVar4 == 0x110000) {
      if (*(char *)((int)param_2 + 0x11) == '\n') {
        param_1[0x51e] = 0;
        FUN_00718220(0xa000b,0,0,0);
        local_4 = 8;
      }
      if (param_1[0x457] < 0) {
        param_1[0x51e] = 0;
        local_4 = 8;
        FUN_00718220(0xa000b,0,0,0);
        param_1[0x457] = 100;
      }
    }
    if (0.0 < (float)param_1[0x51e]) {
      param_1[0x51e] = 0;
      local_4 = 8;
      FUN_00718220(0xa000b,0,0,0);
    }
    if (!bVar10) {
      if (((param_2[0x23] & 0x800U) != 0) && (param_1[0x605] != 1)) {
        FUN_00718220(0xa0015,0,0,0);
      }
      if (((*(byte *)(param_2 + 0x23) & 1) != 0) && (param_1[0x605] != 1)) {
        (**(code **)(*param_1 + 0x358))(0x18e,0);
        FUN_00718220(0xa0015,0,0,0);
      }
    }
    if ((param_2[0x24] & 0x80000000U) != 0) {
      FUN_00718220(0xa0017,0,0,0);
    }
    if ((param_2[0x24] & 0x40000000U) != 0) {
      FUN_00718220(0xa0018,0,0,0);
    }
    if ((param_2[0x24] & 0x20000000U) != 0) {
      FUN_00718220(0xa0019,0,0,0);
    }
    if (((param_2[0x24] & 0x80000U) != 0) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa0001,0,0,0);
    }
    if ((*param_2 == 0x4a) && (bVar2)) {
      FUN_00718220(0x110001,0,0,0);
      local_4 = 2;
    }
    iVar6 = *param_2;
    if (((((iVar6 == 0x30) || (iVar6 == 0x32)) || (iVar6 == 0x33)) ||
        ((iVar6 == 0x34 || (iVar6 == 0x10)))) || (iVar6 == 0x35)) {
      if (bVar2) {
        FUN_00718220(0x110001,0,0,0);
        local_4 = 2;
        goto LAB_0072ea10;
      }
    }
    else {
LAB_0072ea10:
      if (bVar2) {
        FUN_00718220(0xa0023,0,0,0);
        iVar6 = FUN_00ac82f0();
        local_4 = (-(uint)(iVar6 != 0) & 0x3e00) + 0x200;
      }
    }
    iVar6 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar6 == 0) {
      param_1[0x6eb] = 0;
    }
    else {
      param_1[0x6eb] = param_1[0x6eb] + 1;
      param_1[0x607] = 0x1e;
      FUN_00718220(0xa0006,0,0,0);
      if (param_1[0x6eb] < 2) {
        if ((param_2[0x24] & 0x800000U) != 0) {
          FUN_00718220(0xa0005,0,0,0);
        }
      }
      else {
        FUN_00718220(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00718220(0xa0004,0,0,0);
      }
      if ((param_2[0x24] & 0x40000000U) != 0) {
        FUN_00718220(0xa0018,0,0,0);
      }
      if ((param_2[0x24] & 0x20000000U) != 0) {
        FUN_00718220(0xa0019,0,0,0);
      }
      if ((param_2[0x24] & 0x80000000U) != 0) {
        FUN_00718220(0xa0017,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x51d] = 1;
        FUN_00718220(0xa0007,0,0,0);
      }
    }
    if (param_1[0x605] == 1) {
      if ((param_2[0x24] & 0x2000000U) != 0) {
        FUN_00718220(0x6000b,0,0,0);
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
        FUN_00718220(0x60012,uVar8,0,0);
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
          FUN_00718220(0x60012,uVar8,0,0);
        }
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_00718220(0x6000c,0,0,0);
      }
      if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
        param_1[0x607] = 0x1e;
        FUN_00718220(0x6000e,0,0,0);
      }
      iVar4 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar4 != 0) {
        FUN_00718220(0x6000d,0,0,0);
        if ((param_2[0x24] & 0x2000000U) != 0) {
          FUN_00718220(0x6000b,0,0,0);
        }
        if ((param_2[0x24] & 0x40000000U) != 0) {
          FUN_00718220(0xa0018,0,0,0);
        }
        if ((param_2[0x24] & 0x20000000U) != 0) {
          FUN_00718220(0xa0019,0,0,0);
        }
        if ((param_2[0x24] & 0x80000000U) != 0) {
          FUN_00718220(0xa0017,0,0,0);
        }
        if ((*(byte *)((int)param_2 + 0x93) & 1) != 0) {
          param_1[0x51d] = 1;
          uVar8 = 0x6000e;
          goto LAB_0072ed1c;
        }
      }
    }
  }
  else {
    if (bVar2) {
      FUN_00718220(0xa0023,0,0,0);
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
      FUN_00718220(0xa000d,uVar8,0,0);
    }
    iVar4 = *param_2;
    if ((((iVar4 == 0x55) || (iVar4 == 0x57)) || (iVar4 == 0x56)) && (param_1[0x605] != 1)) {
      FUN_00718220(0xa0001,0,0,0);
      param_1[0x6fe] = 0;
    }
    if (((!bVar10) && ((*(byte *)(param_2 + 0x23) & 1) != 0)) && (param_1[0x605] != 1)) {
      (**(code **)(*param_1 + 0x358))(0x18e,0);
      uVar8 = 0xa0015;
LAB_0072ed1c:
      FUN_00718220(uVar8,0,0,0);
    }
  }
  local_20 = 1;
LAB_0072ed2b:
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

// 0072EDC0  FUN_0072edc0  size=219  [between]
undefined4 __thiscall FUN_0072edc0(int *param_1,int *param_2)

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
        FUN_0071a1f0(param_2);
      }
    }
    return uVar2;
  }
  return 0;
}

// 0072EEA0  FUN_0072eea0  size=762  [between]
void __fastcall FUN_0072eea0(int *param_1)

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
    FUN_0070fe80();
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
    FUN_0071a530();
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
        FUN_00718220(0x20005,0,0,0);
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
        FUN_00718220(sVar1 + 0x19,uVar3,uVar4,uVar5);
      }
      iVar2 = FUN_0071a610();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      FUN_00718220(0x23,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0072F1A0  EmC010::vf48  size=1642  [class]
void __fastcall EmC010::vf48(int *param_1)

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
  param_1[0x705] = 0;
  iVar2 = FUN_00ac4780();
  if (iVar2 == 2) {
    param_1[0x705] = 1;
  }
  else if (iVar2 - 3U < 2) {
    param_1[0x705] = 2;
  }
  if ((param_1[0x3a9] & 0x40000U) != 0) {
    param_1[0x404] = (int)((float)param_1[0x404] - (float)param_1[0x244]);
    if (param_1[0x6f6] != 0) {
      fVar7 = (float10)FUN_00ac8f80();
      FUN_0070e740((float)(fVar7 - (float10)(float)param_1[0x244] * (float10)0.01));
    }
    if ((float)param_1[0x404] < 0.0) {
      if (param_1[0x6f6] == 0) {
        (**(code **)(*param_1 + 0x110))(0);
      }
      else {
        FUN_009fdde0();
      }
    }
  }
  if (((param_1[0x3a6] != 0x1e) && (iVar2 = FUN_00ac8a50(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x274))(), iVar2 != 0)) goto LAB_0072f2e3;
  param_1[0x670] = (uint)param_1[0x351] >> 0x19 & 1;
  iVar2 = FUN_00a82d50();
  if (iVar2 == 4) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_007121d0();
      param_1[0x67c] = iVar2;
      goto LAB_0072f2ba;
    }
  }
  else {
LAB_0072f2ba:
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_007122f0();
      param_1[0x679] = iVar2;
    }
  }
  FUN_007160a0();
  iVar2 = FUN_00712640();
  param_1[0x67e] = iVar2;
LAB_0072f2e3:
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
  if (0.0 < (float)param_1[0x700] != ((float)param_1[0x700] == 0.0)) {
    param_1[0x700] = (int)((float)param_1[0x700] - (float)param_1[0x244]);
  }
  if (param_1[300] == 0x2c170) {
    fVar1 = (float)param_1[0x6fa];
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      param_1[0x6fa] = (int)((float)param_1[0x6fa] - (float)param_1[0x244]);
    }
    if ((float)param_1[0x6fa] < 0.0) {
      param_1[0x6fb] = 0;
    }
  }
  iVar2 = FUN_0070ddc0();
  param_1[0x66e] = iVar2;
  FUN_007134c0();
  if ((((param_1[0x12a] & 0x20000U) != 0) && (param_1[0x3a2] == 0)) && (param_1[0x21c] < 1)) {
    (**(code **)(*param_1 + 0x364))(0x20010);
  }
  if ((param_1[0x524] != 0) &&
     (fVar1 = (float)param_1[0x523], param_1[0x523] = (int)(fVar1 - 1.0), fVar1 - 1.0 < 0.0)) {
    param_1[0x524] = 0;
    FUN_0070a4b0();
  }
  if (((param_1[0x5a4] != 0) && (iVar2 = FUN_00ac8410(), iVar2 == 0)) &&
     (fVar1 = (float)param_1[0x5a3], param_1[0x5a3] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x5a4] = 0;
    param_1[0x139] = 1;
    FUN_00718220(0xb0002,0,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  FUN_00719430();
  FUN_0071e020();
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
      iVar2 = FUN_00712a30(auStack_30 + 4,auStack_30);
      param_1[0x68f] = iVar2;
    }
  }
  iVar2 = FUN_00a12210(0);
  iVar2 = FUN_00712790(iVar2 + 0x40);
  param_1[0x687] = iVar2;
  iVar2 = FUN_00a12210(0);
  iVar2 = FUN_00712ca0(iVar2 + 0x40,0x3f266666);
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
  if ((-1 < param_1[0x6ff]) && (iVar2 = FUN_00ac89d0(), iVar2 != 0)) {
    FUN_00ac89d0();
    iVar2 = FUN_00a10040(0x3c);
    if ((iVar2 == 2) || ((param_1[0x3aa] & 0x800000U) != 0)) {
      FUN_00c5ad80(param_1[0x6ff]);
      param_1[0x3aa] = param_1[0x3aa] & 0xff7fffff;
      param_1[0x6ff] = -1;
    }
  }
  param_1[0x6f3] = 0;
  return;
}

// 0072F810  FUN_0072f810  size=481  [between]
void __fastcall FUN_0072f810(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  param_1[0x23d] = param_1[0x5f1];
  param_1[0x5d7] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x44f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x5a2] = 0x41f00000;
    FUN_00725090(1,param_1 + 0x428);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 3;
  }
  else if (param_1[0x187] != 1) goto LAB_0072f946;
  fVar1 = (float)param_1[0x5a2];
  param_1[0x5a2] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) && (param_1[0x4e8] != 0)) {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00aa4080(0x325,2,0,0x3f800000,0x8000010,0,0x3f800000);
    iVar3 = FUN_00a12210((int)(short)param_1[0x6dc]);
    FUN_00716570(iVar3 + 0x40);
    param_1[0x4e8] = param_1[0x4e8] + -1;
    param_1[0x5a2] = 0x40c00000;
  }
LAB_0072f946:
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

// 0072FA00  FUN_0072fa00  size=1111  [between]
void __fastcall FUN_0072fa00(int *param_1)

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
      FUN_0072b670(param_1 + 0x6a4,param_1 + 0x10,param_1 + 0x6bc,0x41f00000,0x40400000);
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
    FUN_0072b670(param_1 + 0x6a4,param_1 + 0x10,piVar5,0x41f00000,0x40400000);
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
                    /* WARNING: Could not recover jumptable at 0x0072fe4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0072FE80  FUN_0072fe80  size=95  [between]
void __thiscall FUN_0072fe80(int *param_1,undefined4 param_2,undefined4 param_3)

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

// 0072FEE0  FUN_0072fee0  size=615  [between]
void __fastcall FUN_0072fee0(int param_1)

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
    iVar2 = FUN_00710010();
    if ((iVar2 != 0) && (iVar2 = FUN_00725120(), iVar2 != 0)) {
      return;
    }
    if ((49.0 < *(float *)(param_1 + 0xa8c)) && ((*(byte *)(param_1 + 0xea4) & 4) == 0)) {
      if (*(int *)(param_1 + 0x19c0) == 0) {
        if ((1600.0 < *(float *)(param_1 + 0xa8c)) &&
           ((*(uint *)(param_1 + 0xea8) & 0x10000000) == 0)) goto LAB_0073000e;
      }
      else {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (NAN(fVar1) || 900.0 < fVar1 == (fVar1 == 900.0)) goto LAB_0073000e;
      }
      FUN_00718220(0x20005,0,0,0);
    }
  }
LAB_0073000e:
  if (((((*(int *)(param_1 + 0x19c0) != 0) && (*(int *)(*(int *)(param_1 + 0xa84) + 0x2660) != 0))
       && (*(int *)(param_1 + 0x1498) != 0)) &&
      ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) &&
     (iVar2 = FUN_0070dbf0(2,1), iVar2 != 0)) {
    FUN_00718220(0x2000a,0,0,0);
    FUN_0070dc50();
    return;
  }
  if (((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
     (iVar2 = FUN_00718e90(0xffffffff), iVar2 == 0)) {
    if (0.0 < *(float *)(param_1 + 0x1a40)) {
      *(float *)(param_1 + 0x1a40) = *(float *)(param_1 + 0x1a40) - *(float *)(param_1 + 0x910);
    }
    if (((((*(float *)(param_1 + 0x1a40) <= 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)))
         || ((iVar2 = *(int *)(param_1 + 0x618), iVar2 == 0x20002 &&
             (*(int *)(param_1 + 0x107c) == 0)))) ||
        ((iVar2 == 0x20004 && (*(int *)(param_1 + 0x1080) == 0)))) ||
       ((iVar2 == 0x20003 && (*(int *)(param_1 + 0x1084) == 0)))) {
      FUN_00718220(0x20000,0,0,0);
    }
  }
  return;
}

// 00730150  FUN_00730150  size=150  [between]
void __fastcall FUN_00730150(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  param_1[0x5d7] = 1;
  if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_00727660();
      return;
    }
    if ((iVar1 == 0x25) && ((param_1[0x3aa] & 0x2000000U) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00730194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0x60001:
      FUN_00727900();
      return;
    case 0x60004:
      FUN_00727b50();
      return;
    case 0x60006:
      FUN_00727c60();
      return;
    case 0x60009:
    case 0x6000a:
      if ((float)param_1[0x2a8] < 0.17453292) {
        FUN_00718220(0x60000,0,0,0);
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

// 00730220  FUN_00730220  size=178  [between]
void __fastcall FUN_00730220(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  fStack_c = 1.0561865e-38;
  (**(code **)(*param_1 + 0x1d4))();
  iVar1 = param_1[0x186];
  if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
      FUN_007288c0();
      return;
    }
    if ((iVar1 == 0x25) && ((param_1[0x3aa] & 0x2000000U) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0073025e. Too many branches */
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
      FUN_00728bb0();
      return;
    case 0x50004:
      FUN_00728e10();
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
          FUN_00718220(0x50004,0,0,0);
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

// 00730310  FUN_00730310  size=153  [between]
void __fastcall FUN_00730310(int param_1)

{
  float fVar1;
  int iVar2;
  float local_8;
  undefined1 local_4 [4];
  
  if (((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) &&
     ((iVar2 = FUN_00710010(), iVar2 == 0 || (iVar2 = FUN_007299a0(), iVar2 == 0)))) {
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

// 007303B0  FUN_007303b0  size=313  [between]
void __fastcall FUN_007303b0(int param_1)

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
        puVar6 = &DAT_01b357a0;
        (**(code **)(*piVar3 + 4))(&DAT_01b357a0);
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
      FUN_0072a910(local_160);
    }
  }
  return;
}

// 007304F0  EmC010::vf334  size=943  [class]
void __thiscall EmC010::vf334(int *param_1,undefined4 param_2,int *param_3)

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
      puVar14 = &DAT_01b357a0;
      (**(code **)(*piVar3 + 4))(&DAT_01b357a0);
      iVar4 = FUN_00dd6d80(puVar14);
      if ((iVar4 != 0) && (piVar3 != param_1)) {
        uVar5 = FUN_00a8cae0();
        uVar6 = FUN_00a8cad0(uVar5);
        uVar7 = FUN_00a8cac0(uVar6);
        uVar8 = FUN_00a8cab0(uVar7);
        FUN_00718220(uVar8,uVar7,uVar6,uVar5);
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
          param_1[0x6ff] = piVar3[0x6ff];
        }
        param_1[0x52b] = piVar3[0x52b];
        param_1[0x52c] = piVar3[0x52c];
        param_1[0x3a6] = piVar3[0x3a6];
      }
    }
  }
  iVar4 = param_1[300];
  if (((iVar4 == 0x2c150) || (iVar4 == 0x2c152)) || (iVar4 == 0x2c170)) {
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
  iVar4 = FUN_0072aa50(iVar1 == 0x10,iVar9,iVar4);
  if ((param_1[0x294] != 0) && (iVar4 != 0)) {
    FUN_00a88250(0,param_1 + 0x10);
    piVar3 = (int *)FUN_00c206d0();
    (**(code **)(*piVar3 + 4))(0,param_1[0x13c],param_1 + 0x10);
  }
  return;
}

// 007308A0  FUN_007308a0  size=155  [callgraph]
void __fastcall FUN_007308a0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1164;
  FUN_00a7c950();
  FUN_00a7c950();
  switch(*(undefined4 *)(param_1 + 0x14ac)) {
  case 1:
  case 7:
    FUN_0072b200(iVar1);
    FUN_00718570();
    return;
  case 2:
    FUN_0072b320(iVar1);
    FUN_00718640();
    return;
  case 3:
    FUN_00718820(iVar1);
    FUN_007186e0();
    return;
  case 5:
    FUN_00718b10(iVar1);
    FUN_007186e0();
    return;
  case 6:
    FUN_0072b540(iVar1,0);
    FUN_0072b540(param_1 + 0x1168,1);
    FUN_00718d50(0);
  }
  return;
}

// 00730960  FUN_00730960  size=134  [callgraph]
void __fastcall FUN_00730960(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x116c;
  FUN_00a7c950();
  FUN_00a7c950();
  switch(*(undefined4 *)(param_1 + 0x14b0)) {
  case 1:
  case 7:
    FUN_0072b200(iVar1);
    return;
  case 2:
    FUN_0072b320(iVar1);
    return;
  case 3:
    FUN_00718820(iVar1);
    return;
  case 4:
    FUN_00711e70(iVar1);
    return;
  case 5:
    FUN_00718b10(iVar1);
    return;
  case 6:
    FUN_0072b540(iVar1,0);
    FUN_0072b540(param_1 + 0x1170,1);
  }
  return;
}

// 00731060  FUN_00731060  size=450  [callgraph]
/* WARNING: Switch with 1 destination removed at 0x0073114f : 19 cases all go to same destination */

void __fastcall FUN_00731060(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      return;
    case 1:
      FUN_0071fbb0();
      return;
    case 2:
      FUN_007201c0();
      return;
    case 3:
      FUN_00720330();
      return;
    case 6:
      FUN_007208c0();
      return;
    case 0xb:
      FUN_00720e90();
      return;
    case 0xc:
      FUN_00720f30();
      return;
    case 0xd:
      FUN_0070f640();
      return;
    case 0xe:
      FUN_00719870();
      return;
    case 0xf:
      FUN_00719be0();
      return;
    case 0x10:
      FUN_00719da0();
      return;
    case 0x11:
      FUN_00719f40();
      return;
    case 0x12:
      FUN_0071a0c0();
      return;
    case 0x13:
      FUN_0072bb80();
      return;
    case 0x16:
      FUN_00721660();
      return;
    case 0x17:
      FUN_00721700();
      return;
    case 0x18:
      FUN_007217a0();
      return;
    case 0x25:
      FUN_0070a340();
      return;
    }
  }
  else if (0x20009 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_0071a3a0();
        return;
      }
    }
    else if (iVar1 < 0xb0001) {
      switch(iVar1) {
      case 0xa0001:
        FUN_0071a740();
        return;
      case 0xa0004:
        FUN_0070eab0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0071b350();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0070ead0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0070eaf0();
        return;
      case 0xa0009:
        FUN_0071b870();
        return;
      case 0xa000a:
        FUN_0071bb40();
        return;
      case 0xa000c:
        FUN_0071bfa0();
        return;
      case 0xa0013:
        FUN_0070eb60();
        return;
      case 0xa0014:
        (**(code **)(*param_1 + 0x1d4))(1);
        break;
      case 0xa0022:
        FUN_007260f0();
        return;
      }
    }
  }
  return;
}

// 00731310  FUN_00731310  size=81  [callgraph]
void __thiscall FUN_00731310(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x10;
  if (*(int *)(param_1 + 0x4b0) == 0x2c170) {
    iVar1 = FUN_0072d700(param_2);
  }
  else {
    iVar1 = FUN_0072bcd0(param_2);
  }
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xffffffef;
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xdb4) & 8) == 0)) {
    *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 1;
  }
  return;
}

// 00731370  EmC010::vf40  size=6705  [class]
undefined4 __fastcall EmC010::vf40(int *param_1)

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
  uVar7 = 0x2c14f;
  if ((iVar6 == 0x2c150) || (iVar6 == 0x2c152)) {
    uVar7 = 0x2c15f;
  }
  if (iVar6 == 0x2c170) {
    uVar7 = 0x2c170;
  }
  FUN_00ac9720(0x2c012,uVar7);
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
  param_1[0x6f6] = 0;
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
  if (uVar1 < 0x2c151) {
    if (uVar1 != 0x2c150) {
      if (uVar1 < 0x2c143) {
        if (uVar1 == 0x2c142) {
          FUN_00acf600(0x2c143,"EmC142Body");
        }
        else if (uVar1 == 0x2c010) {
          FUN_00acf600(0x2c011,"EmC010Body");
        }
        else if (uVar1 == 0x2c140) {
          FUN_00acf600(0x2c141,"EmC140Body");
        }
      }
      else if (uVar1 == 0x2c144) {
        FUN_00acf600(0x2c145,"EmC144Body");
      }
      goto LAB_007315d4;
    }
    pcVar13 = "EmC150Body";
    uVar7 = 0x2c151;
LAB_007315be:
    FUN_00acf600(uVar7,pcVar13);
    iVar6 = 0x3f99999a;
LAB_007315cb:
    param_1[0x1e] = iVar6;
    param_1[0x1d] = iVar6;
    param_1[0x1c] = iVar6;
  }
  else {
    if (uVar1 == 0x2c152) {
      pcVar13 = "EmC152Body";
      uVar7 = 0x2c153;
      goto LAB_007315be;
    }
    if (uVar1 != 0x2c160) {
      if (uVar1 != 0x2c170) goto LAB_007315d4;
      FUN_00acf600(0x2c171,"EmC170Body");
      iVar6 = 0x3fa66666;
      goto LAB_007315cb;
    }
    FUN_00acf600(0x2c161,"EmC160Body");
  }
LAB_007315d4:
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
  if (((iVar6 == 0x2c150) || (iVar6 == 0x2c152)) || (iVar6 == 0x2c170)) {
    FUN_00ac8d40(0);
  }
  if ((param_1[0x3a5] == 0) && (FUN_00ac94e0(&DAT_0163d9a8), param_1[0x3a5] == 0)) {
    iVar6 = param_1[300];
    uVar7 = 1;
    if (iVar6 == 0x2c140) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x2c142) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x2c144) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x2c150) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x2c152) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x2c160) {
      uVar7 = 0x1c2;
    }
    if (iVar6 == 0x2c170) {
      uVar7 = 0x1c2;
    }
    (**(code **)(*param_1 + 0x358))(uVar7,param_1 + 0x490);
  }
  sVar4 = FUN_00dde2d0(0,4);
  param_1[0x701] = (int)sVar4;
  FUN_0070e9f0((int)sVar4);
  param_1[0x521] = 0;
  param_1[0x520] = 0;
  FUN_00ac4c70(1);
  lib::StaticArray<Behavior::AnimationSlot,16>::StaticArray<Behavior::AnimationSlot,16>();
  FUN_00a929d0();
  if (param_1[0x1d6] != 0) {
    FUN_00a92a90(0xffffffff);
  }
  FUN_00a92a30(0x2c010);
  FUN_00ac4c70(0);
  sVar4 = FUN_00dde2d0(0,0x3c);
  FUN_00a8edf0(sVar4 + 0x78);
  if (param_1[0x1d5] != 0) {
    param_1[0x6f7] = 0x3f800000;
    param_1[0x6f8] = 0x3f800000;
    if (param_1[300] == 0x2c142) {
      fVar11 = (float10)FUN_00ac85c0(5,0xa3);
      param_1[0x6f7] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(5,0xa4);
      param_1[0x6f8] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x2c144) {
      fVar11 = (float10)FUN_00ac85c0(7,0xa3);
      param_1[0x6f7] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(7,0xa4);
      param_1[0x6f8] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x2c160) {
      fVar11 = (float10)FUN_00ac85c0(6,0xa3);
      param_1[0x6f7] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(6,0xa4);
      param_1[0x6f8] = (int)(float)fVar11;
    }
    if (param_1[300] == 0x2c152) {
      fVar11 = (float10)FUN_00ac85c0(5,0xa6);
      param_1[0x6f7] = (int)(float)fVar11;
      fVar11 = (float10)FUN_00ac85c0(5,0xa7);
      param_1[0x6f8] = (int)(float)fVar11;
    }
    FUN_00ac8660(0,0x2f);
    uVar5 = FUN_00ac8660(0,0x30);
    iVar6 = param_1[300];
    if (((iVar6 == 0x2c010) || (iVar6 == 0x2c140)) || ((iVar6 == 0x2c142 || (iVar6 == 0x2c144)))) {
      FUN_00ac8660(0,0x37);
      uVar5 = FUN_00ac8660(0,0x38);
    }
    if ((param_1[0x12a] & 0x2000U) != 0) {
      FUN_00ac8660(0,0x33);
      uVar5 = FUN_00ac8660(0,0x34);
    }
    if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
      FUN_00ac8660(0,0x3b);
      uVar5 = FUN_00ac8660(0,0x3c);
    }
    if (param_1[300] == 0x2c170) {
      FUN_00ac8660(0,0x3f);
      uVar5 = FUN_00ac8660(0,0x40);
      iVar6 = FUN_00ac8660(0,0xaa);
      param_1[0x6fc] = iVar6;
      fVar11 = (float10)FUN_00ac85c0(5,0xab);
      param_1[0x6f9] = (int)(float)fVar11;
      param_1[0x6fa] = 0;
      param_1[0x6fb] = 0;
      iVar6 = FUN_00ac8660(0,0xae);
      param_1[0x12a] = param_1[0x12a] | 0x400000;
      param_1[0x6fd] = iVar6;
      param_1[0x6fe] = 0;
    }
    if (param_1[300] == 0x2c160) {
      FUN_00ac8660(0,0x43);
      uVar5 = FUN_00ac8660(0,0x44);
    }
    FUN_00dde2d0(0,uVar5);
    uVar7 = FUN_00fdbc60();
    FUN_00a8edf0(uVar7);
    fVar11 = (float10)FUN_00ac85c0(5,0x9f);
    param_1[0x6f4] = (int)(float)(fVar11 * (float10)60.0);
    fVar11 = (float10)FUN_00ac85c0(5,0xa0);
    param_1[0x6f5] = (int)(float)fVar11;
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
  if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
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
  FUN_00e272b0(0x2c012,0x20010);
  iVar6 = param_1[300];
  if ((((iVar6 == 0x2c010) || (iVar6 == 0x2c140)) || (iVar6 == 0x2c142)) ||
     ((iVar6 == 0x2c144 || (iVar6 == 0x2c160)))) {
    FUN_00a92f90();
    FUN_00e27330(0x2c14f,0x20010);
  }
  if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
    FUN_00a92f90();
    FUN_00e27330(0x2c15f,0x20010);
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
  FUN_007135b0(0x3f733333,0x3ecccccd);
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
    puVar10 = &DAT_01882aa0;
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
              (param_1[0x13c],5,&DAT_01882a10,4);
    FUN_00a88b50(1,0);
  }
  if ((param_1[0x351] & 0x80000000U) != 0) {
    if ((param_1[0x3aa] & 0x80000U) != 0) {
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
  if ((iVar6 == 0x2c150) || (iVar6 == 0x2c152)) {
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
  if (iVar6 == 0x2c170) {
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
  param_1[0x702] = 0;
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
  FUN_007308a0();
  FUN_00730960();
  if ((*(byte *)(param_1 + 0x12a) & 0x80) != 0) {
    FUN_00719610();
  }
  uVar5 = 4;
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    FUN_00a88b50(4,0);
  }
  (**(code **)(*param_1 + 0x34c))();
  if (param_1[299] == 1) {
    FUN_00718220(0x100001,0,0,0);
    param_1[0x5e0] = 0;
    if (param_1[0x1d9] != 0) {
      CharacterControl::setHeight(0x3f000000);
      CharacterControl::setRadius(0x3dcccccd);
      FUN_008e1cc0();
    }
  }
  if (param_1[299] == 2) {
    FUN_00718220(0x100000,0,0,0);
    uVar5 = 0x2d4;
  }
  if (param_1[299] == 3) {
    FUN_00a88b50(4,0);
    FUN_00718220(0x100002,0,0,0);
    iVar6 = param_1[0x52b];
    uVar5 = 0x2d6;
    if ((((iVar6 == 1) || (iVar6 == 7)) || (iVar6 == 6)) || (iVar6 == 5)) {
      FUN_00719610();
      param_1[0x41d] = 0;
    }
  }
  if (param_1[299] == 4) {
    FUN_00a88b50(4,0);
    FUN_00718220(0xe,0,0,0);
    uVar5 = 0x241;
    FUN_00719610();
    param_1[0x41d] = 0;
  }
  if (param_1[299] == 5) {
    FUN_00a88b50(4,0);
    FUN_00718220(0x1000b,0,0,0);
    FUN_007184b0();
    param_1[0x41d] = 0;
    uVar5 = 0x446;
  }
  if (param_1[299] == 6) {
    FUN_00a88b50(4,0);
    FUN_00718220(0x100003,0,0,0);
    uVar5 = 0x245;
    FUN_007184b0();
    param_1[0x41d] = 0;
  }
  if ((param_1[299] == 7) || (param_1[299] == 9)) {
    FUN_00718220(0x100004,0,0,0);
    uVar5 = 0x4bd;
  }
  if ((param_1[299] == 0xb) && ((param_1[0x52b] == 2 || (param_1[0x52b] == 3)))) {
    FUN_00718640();
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
  if (((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) && (param_1[299] == 8)) {
    FUN_00718220(0xd0000,0,0,0);
    uVar5 = 0x2a1;
    FUN_007184b0();
    param_1[0x41d] = 0;
    param_1[0x3aa] = param_1[0x3aa] | 0x20000000;
  }
  if (param_1[0x128] == 10) {
    FUN_00718220(0x10000000,0,0,0);
    uVar5 = 0x3a5;
  }
  if (param_1[0x128] == 8) {
    uVar5 = 0x38d;
  }
  if (param_1[0x128] == 0xe) {
    param_1[0x3ab] = param_1[0x3ab] | 0x4000;
    FUN_00718220(8,0,0,0);
    uVar5 = 0x44f;
  }
  if (param_1[0x128] == 0xf) {
    param_1[0x3ab] = param_1[0x3ab] | 0x8000;
    (**(code **)(*param_1 + 0x34c))();
    uVar5 = 0x454;
    FUN_00718a00();
  }
  if (param_1[0x128] == 0x10) {
    param_1[0x3ab] = param_1[0x3ab] | 0x1000;
    FUN_00718640();
    param_1[0x41d] = 0;
    FUN_00718220(0x30000,0,0,0);
    if (DAT_018b9174 == 0x458) {
      param_1[0x3aa] = param_1[0x3aa] | 0x800;
    }
  }
  if (param_1[0x128] == 0xc) {
    param_1[0x3ab] = param_1[0x3ab] | 0xc0;
    FUN_00a88b50(4,0);
    FUN_00718220(0xe,0,0,0);
    if (param_1[299] == 3) {
      FUN_00718220(0x100002,0,0,0);
    }
    FUN_007184b0();
    param_1[0x41d] = 0;
    uVar5 = 0x2d6;
  }
  if (param_1[0x128] == 0xd) {
    param_1[0x3ab] = param_1[0x3ab] | 0xa0;
    FUN_00a88b50(4,0);
    FUN_00718220(0xe,0,0,0);
    if (param_1[299] == 3) {
      FUN_00718220(0x100002,0,0,0);
    }
    FUN_007184b0();
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
  param_1[0x6ff] = -1;
  if ((param_1[0x3a5] == 0) && ((iVar6 = FUN_00713690(), iVar6 != 0 || (param_1[300] == 0x2c160))))
  {
    FUN_007137b0();
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
  if ((((iVar6 == 0x2c010) || (iVar6 == 0x2c140)) || (iVar6 == 0x2c142)) || (iVar6 == 0x2c144)) {
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
  if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
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
      goto LAB_007329e4;
    }
LAB_007329f0:
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
LAB_007329e4:
    if ((param_1[0x3ab] & 0x8000U) != 0) goto LAB_007329f0;
  }
  if (param_1[300] == 0x2c170) {
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
  param_1[0x700] = 0;
  param_1[0x679] = 0;
  param_1[0x36a] = 0;
  param_1[0x36c] = 0;
  if (param_1[300] != 0x2c160) goto LAB_00732c51;
  iVar6 = param_1[0x129];
  if ((iVar6 == 1) || (iVar6 == 0)) {
    FUN_00ac94e0("_face_C");
    FUN_00ac94e0("_face_D");
    pcVar13 = "Dam_face_A";
LAB_00732c17:
    FUN_00ac94e0(pcVar13);
  }
  else {
    if (iVar6 == 2) {
      FUN_00ac94e0("_face_A");
      FUN_00ac94e0("_face_D");
      pcVar13 = "Dam_face_C";
      goto LAB_00732c17;
    }
    if (iVar6 == 3) {
      FUN_00ac94e0("_face_A");
      pcVar13 = "_face_C";
      goto LAB_00732c17;
    }
  }
  FUN_00ac9300("L_arm_A_DEC");
  if ((param_1[0x52b] == 1) || (param_1[0x52c] == 1)) {
    FUN_00e5e0c0("wp0031_se_setobj_baton",param_1,0xffffffff,0);
  }
LAB_00732c51:
  if ((param_1[300] == 0x2c150) || (param_1[300] == 0x2c152)) {
    fVar11 = (float10)FUN_00ac85c0(5,0x80);
    param_1[0x6ed] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x81);
    param_1[0x6ee] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x82);
    param_1[0x6ef] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x83);
    param_1[0x6f0] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x84);
    param_1[0x6f1] = (int)(float)fVar11;
  }
  if (param_1[300] == 0x2c170) {
    fVar11 = (float10)FUN_00ac85c0(5,0x87);
    param_1[0x6ed] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x88);
    param_1[0x6ee] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x89);
    param_1[0x6ef] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x8a);
    param_1[0x6f0] = (int)(float)fVar11;
    fVar11 = (float10)FUN_00ac85c0(5,0x8b);
    param_1[0x6f1] = (int)(float)fVar11;
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

// 00732DB0  FUN_00732db0  size=1625  [callgraph]
void __fastcall FUN_00732db0(int param_1)

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
      FUN_0070e960();
      return;
    }
    iVar3 = FUN_00713e50();
    if (iVar3 == 0) {
      if (0.0 < *(float *)(param_1 + 0x1c00)) {
        return;
      }
      FUN_00718220(0x21,0,0,0);
      return;
    }
    FUN_0071dc70();
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_007333d8;
  iVar3 = FUN_00713730();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar3 + 0x4c);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
    FUN_00718220(0x19,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_007333d8;
  if ((*(byte *)(param_1 + 0xea4) & 4) != 0) {
    uVar4 = FUN_00dde2a0(0,100);
    uVar4 = (uVar4 & 0xffff) % 3;
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0x107c) != 0) {
        FUN_00718220(0x12,0,0,0);
        return;
      }
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0x1080) != 0) {
        FUN_00718220(0x10,0,0,0);
        return;
      }
    }
    else if ((uVar4 == 2) && (*(int *)(param_1 + 0x1084) != 0)) goto LAB_00732eb9;
  }
  iVar3 = FUN_00a82e80();
  if (((iVar3 != 0) &&
      ((*(float *)(param_1 + 0x18f4) < 0.0 && (12.25 < *(float *)(param_1 + 0xa8c))))) &&
     ((*(int *)(param_1 + 0x19c0) == 0 || ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)))) {
    FUN_00718220(0x14,0,0,0);
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
  if ((((iVar3 != 0) && (*(int *)(param_1 + 0x14ac) == 1)) && (*(int *)(param_1 + 0x1488) != 0)) &&
     (*(float *)(param_1 + 0xa8c) < 25.0)) {
    FUN_00718220(0x10002,0,0,0);
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x10004,0,0,0);
    }
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 4.0) {
      FUN_00718220(0x10000,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (6.25 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
      FUN_00718220(0x10001,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (*(float *)(param_1 + 0xaa0) <= 2.0943952) {
      return;
    }
    FUN_00718220(0x10005,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(int *)(param_1 + 0x19c0) != 0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0x1084) != 0) {
        uVar5 = 0x11;
        goto LAB_007330fb;
      }
    }
    else if (*(int *)(param_1 + 0x1080) != 0) {
      uVar5 = 0x10;
LAB_007330fb:
      FUN_00718220(uVar5,0,0,0);
    }
  }
  if ((*(int *)(param_1 + 0xbe8) == 0) && (*(float *)(param_1 + 0xa8c) <= 4.0)) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
  }
  if ((((36.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
      (*(int *)(param_1 + 0x19c0) != 0)) ||
     (((100.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
      (*(int *)(param_1 + 0x19c0) != 0)))) {
    FUN_00718220(0x13,0,0,0);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xea4) >> 0x16 & 1;
  if (uVar4 != 0) {
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      FUN_00718220(0x18,0,0,0);
      return;
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00733231:
      FUN_00718220(0x16,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      FUN_00718220(0x17,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00733231;
  }
  if ((*(int *)(param_1 + 0x1494) != 0) && (*(int *)(param_1 + 0x19c0) != 0)) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
    if (*(int *)(param_1 + 0x1498) != 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_00718220(sVar2 + 0x1c,uVar5,uVar6,uVar7);
      sVar2 = FUN_00dde2d0(0,3);
      if (sVar2 == 1) {
        FUN_00718220(0x110001,0,0,0);
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
    if (iVar3 != 0) {
      FUN_00718220(0x10008,0,0,0);
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
    if (iVar3 == 0) {
      return;
    }
    FUN_00718220(0xa0021,0,0,0);
    return;
  }
  if ((uVar4 != 0) && ((*(float *)(param_1 + 0x920) < 0.0 || (*(int *)(param_1 + 0x19c0) == 0)))) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0x1084) != 0) {
LAB_00732eb9:
        FUN_00718220(0x11,0,0,0);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x1080) != 0) {
      FUN_00718220(0x10,0,0,0);
      return;
    }
  }
  if (((*(float *)(param_1 + 0xa8c) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
     (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10(), iVar3 != 0)) {
    FUN_00718220(0x1000c,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0x924);
  if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
    iVar3 = FUN_00464930();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xdb0) = 1;
    }
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
LAB_007333d8:
  fVar1 = *(float *)(param_1 + 0xa8c);
  if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00718e90(0xffffffff);
  }
  return;
}

// 00733410  FUN_00733410  size=1088  [callgraph]
void __fastcall FUN_00733410(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00713730();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00718220(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00718220(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
      if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
         ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 25.0)))) {
        FUN_00718220(0x10002,0,0,0);
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
        if (iVar3 != 0) {
          FUN_00718220(0xa0021,0,0,0);
        }
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00718220(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00718220(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00718220(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00718220(0x10005,0,0,0);
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
        FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x526] != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00718220(sVar2 + 0x1c,uVar4,uVar5,uVar6);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00718220(0x110001,0,0,0);
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
        if (iVar3 != 0) {
          FUN_00718220(0x10008,0,0,0);
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
        if (iVar3 == 0) {
          return;
        }
        FUN_00718220(0xa0021,0,0,0);
        return;
      }
      iVar3 = FUN_00a82e80();
      if (((iVar3 != 0) && ((param_1[0x3a9] & 0x400000U) != 0)) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) {
LAB_00733735:
        FUN_00718220(0x13,0,0,0);
        return;
      }
      if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
        if (param_1[0x670] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_007337c5;
        }
      }
      else if (param_1[0x670] != 0) goto LAB_00733735;
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          FUN_00718220(0x11,0,0,0);
        }
        else {
          FUN_00718220(0x10,0,0,0);
        }
      }
    }
  }
LAB_007337c5:
  if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x007337e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00718e90(0xffffffff);
    }
  }
  else {
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
    if (iVar3 != 0) {
      FUN_00718220(0x10008,0,0,0);
      return;
    }
  }
  return;
}

// 00733850  FUN_00733850  size=1031  [callgraph]
void __fastcall FUN_00733850(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = true;
  if (param_1[0x187] == 0) goto LAB_00733bc6;
  if (param_1[0x420] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00733872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar3 = FUN_00713730();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
    FUN_00718220(0x19,0,0,0);
    return;
  }
  if (param_1[0x2a1] != 0) {
    iVar3 = FUN_00a82e80();
    if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
       (12.25 < (float)param_1[0x2a3])) {
      FUN_00718220(0x14,0,0,0);
      return;
    }
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
       ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 36.0)))) {
      FUN_00718220(0x10002,0,0,0);
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
      if (iVar3 != 0) {
        FUN_00718220(0xa0021,0,0,0);
      }
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00718220(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00718220(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10005,0,0,0);
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
        goto LAB_00733bbf;
      }
    }
    else if (param_1[0x670] != 0) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
      if (param_1[0x526] != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_00718220(sVar2 + 0x1c,uVar5,uVar6,uVar7);
        sVar2 = FUN_00dde2d0(0,3);
        if (sVar2 == 1) {
          FUN_00718220(0x110001,0,0,0);
        }
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
      if (iVar3 != 0) {
        FUN_00718220(0x10008,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
      if (iVar3 == 0) {
        return;
      }
      FUN_00718220(0xa0021,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 == 0) || (param_1[0x420] == 0)) {
        if (param_1[0x421] != 0) {
          FUN_00718220(0x1b,0,0,0);
        }
      }
      else {
        FUN_00718220(0x1a,0,0,0);
      }
    }
  }
LAB_00733bbf:
  bVar4 = param_1[0x187] == 0;
LAB_00733bc6:
  if (((!bVar4) && (100.0 < (float)param_1[0x2a3])) && ((*(byte *)(param_1 + 0x3a9) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00733bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00718e90(0xffffffff);
    }
  }
  else {
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
    if (iVar3 != 0) {
      FUN_00718220(0x10008,0,0,0);
      return;
    }
  }
  return;
}

// 00733C60  FUN_00733c60  size=1031  [callgraph]
void __fastcall FUN_00733c60(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = true;
  if (param_1[0x187] == 0) goto LAB_00733fd6;
  if (param_1[0x421] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00733c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar3 = FUN_00713730();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
    FUN_00718220(0x19,0,0,0);
    return;
  }
  if (param_1[0x2a1] != 0) {
    iVar3 = FUN_00a82e80();
    if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
       (12.25 < (float)param_1[0x2a3])) {
      FUN_00718220(0x14,0,0,0);
      return;
    }
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
       ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 36.0)))) {
      FUN_00718220(0x10002,0,0,0);
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
      if (iVar3 != 0) {
        FUN_00718220(0xa0021,0,0,0);
      }
      if (((float)param_1[0x2a3] < 4.0) &&
         (FUN_00718220(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
        FUN_00718220(0x10005,0,0,0);
      }
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10005,0,0,0);
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
        goto LAB_00733fcf;
      }
    }
    else if (param_1[0x670] != 0) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
      if (param_1[0x526] != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_00718220(sVar2 + 0x1c,uVar5,uVar6,uVar7);
        sVar2 = FUN_00dde2d0(0,3);
        if (sVar2 == 1) {
          FUN_00718220(0x110001,0,0,0);
        }
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
      if (iVar3 != 0) {
        FUN_00718220(0x10008,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
      if (iVar3 == 0) {
        return;
      }
      FUN_00718220(0xa0021,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 == 0) || (param_1[0x420] == 0)) {
        if (param_1[0x421] != 0) {
          FUN_00718220(0x1b,0,0,0);
        }
      }
      else {
        FUN_00718220(0x1a,0,0,0);
      }
    }
  }
LAB_00733fcf:
  bVar4 = param_1[0x187] == 0;
LAB_00733fd6:
  if (((!bVar4) && (100.0 < (float)param_1[0x2a3])) && ((*(byte *)(param_1 + 0x3a9) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00734001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00718e90(0xffffffff);
    }
  }
  else {
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
    if (iVar3 != 0) {
      FUN_00718220(0x10008,0,0,0);
      return;
    }
  }
  return;
}

// 00734070  FUN_00734070  size=936  [callgraph]
void __fastcall FUN_00734070(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00734092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00713730();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00718220(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00718220(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
      if (((iVar3 != 0) && (param_1[0x52b] == 1)) &&
         ((param_1[0x522] != 0 && ((float)param_1[0x2a3] < 25.0)))) {
        FUN_00718220(0x10002,0,0,0);
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
        if (iVar3 != 0) {
          FUN_00718220(0xa0021,0,0,0);
        }
        if (((float)param_1[0x2a3] < 4.0) &&
           (FUN_00718220(0x10000,0,0,0), 2.0943952 < (float)param_1[0x2a8])) {
          FUN_00718220(0x10005,0,0,0);
        }
        if ((float)param_1[0x2a3] < 6.25) {
          if (1.0471976 < (float)param_1[0x2a8]) {
            FUN_00718220(0x10001,0,0,0);
          }
          if (2.0943952 < (float)param_1[0x2a8]) {
            FUN_00718220(0x10005,0,0,0);
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
        FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x526] != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00718220(sVar2 + 0x1c,uVar4,uVar5,uVar6);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            FUN_00718220(0x110001,0,0,0);
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
        if (iVar3 != 0) {
          FUN_00718220(0x10008,0,0,0);
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
        if (iVar3 == 0) {
          return;
        }
        FUN_00718220(0xa0021,0,0,0);
        return;
      }
    }
    if (((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) &&
       ((*(byte *)(param_1 + 0x3a9) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00734377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00718e90(0xffffffff);
    }
  }
  else if (((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
          ((6.25 < (float)param_1[0x2a3] && ((float)param_1[0x2a8] < 0.7853982)))) {
    FUN_00718220(0x10008,0,0,0);
    return;
  }
  return;
}

// 00734420  FUN_00734420  size=917  [callgraph]
void __fastcall FUN_00734420(int *param_1)

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
    goto LAB_00734719;
  }
  iVar3 = FUN_00713730();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    param_1[600] = *(int *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
    FUN_00718220(0x19,0,0,0);
    return;
  }
  iVar3 = FUN_0070e3f0();
  if (iVar3 != 0) {
    FUN_00718220(0x120000,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0070e2a0();
  if (iVar3 != 0) {
    FUN_00718220(0x120004,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0070e330();
  if (iVar3 != 0) {
    FUN_00718220(0x120001,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_00730fd0();
  if (iVar3 != 0) {
    return;
  }
  if ((param_1[0x2a1] != 0) && (iVar3 = lib::Array<Entity*>::Array<Entity*>_5(), iVar3 != 0)) {
    if (param_1[0x250] == 1) {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 1) != 0)) {
LAB_00734574:
        uVar5 = 0x10009;
LAB_0073457f:
        FUN_00718220(uVar5,0,0,0);
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((float)param_1[0x2a3] < 16.0) {
        uVar5 = 0x10002;
        goto LAB_0073457f;
      }
    }
    else {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(0,100), (uVar4 & 1) != 0))
      goto LAB_00734574;
      if ((float)param_1[0x2a3] < 6.25) {
        uVar5 = 0x10004;
        goto LAB_0073457f;
      }
    }
  }
  if (param_1[0x670] == 0) {
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        FUN_00718220(0x11,0,0,0);
      }
      else {
        FUN_00718220(0x10,0,0,0);
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
        FUN_00718220(0x27,0,0,0);
        return;
      }
      iVar3 = FUN_00ac4d60(3);
      if (iVar3 != 0) {
        FUN_00718220(0x26,0,0,0);
        return;
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10();
    if (iVar3 != 0) {
      FUN_00718220(0x1000c,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      uVar5 = 0x11;
    }
    else {
      uVar5 = 0x10;
    }
    FUN_00718220(uVar5,0,0,0);
  }
LAB_00734719:
  if (param_1[0x670] != 0) {
    if (*(int *)(param_1[0x2a1] + 0x2660) != 0) {
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
      if (iVar3 != 0) {
        FUN_00718220(0x10008,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
      if (iVar3 == 0) {
        return;
      }
      FUN_00718220(0xa0021,0,0,0);
      return;
    }
    if (((param_1[0x670] != 0) && ((float)param_1[0x2a3] < 12.25)) &&
       ((float)param_1[0x2a8] < 1.3962634)) {
                    /* WARNING: Could not recover jumptable at 0x007347ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  FUN_00730fd0();
  return;
}

// 007347C0  FUN_007347c0  size=373  [callgraph]
void __fastcall FUN_007347c0(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x1470) = 1;
    return;
  }
  iVar2 = FUN_00713730();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar2 + 0x4c);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
    FUN_00718220(0x19,0,0,0);
    return;
  }
  iVar2 = FUN_0070e3f0();
  if (iVar2 != 0) {
    FUN_00718220(0x120000,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  iVar2 = FUN_0070e2a0();
  if (iVar2 != 0) {
    FUN_00718220(0x120004,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  iVar2 = FUN_0070e330();
  if (iVar2 != 0) {
    FUN_00718220(0x120001,0,0,0);
    *(undefined4 *)(param_1 + 0x1b8c) = 0xffffffff;
    return;
  }
  if ((*(byte *)(param_1 + 0xea4) & 4) != 0) {
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xfffffffb;
    if (*(int *)(param_1 + 0x1a20) == 0) {
      iVar2 = FUN_00ac4d60(4);
      if (iVar2 != 0) {
        FUN_00718220(0x27,0,0,0);
        return;
      }
      iVar2 = FUN_00ac4d60(3);
      if (iVar2 != 0) {
        FUN_00718220(0x26,0,0,0);
        return;
      }
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00718220(0x10,0,0,0);
      FUN_00730fd0();
      return;
    }
    FUN_00718220(0x11,0,0,0);
  }
  FUN_00730fd0();
  return;
}

// 00734940  FUN_00734940  size=427  [callgraph]
undefined4 __fastcall FUN_00734940(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
     (*(int *)(param_1 + 0x1488) != 0)) {
    if ((*(int *)(param_1 + 0x4b0) == 0x2c150) || (*(int *)(param_1 + 0x4b0) == 0x2c152)) {
      if (((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
         (*(int *)(param_1 + 0x19b8) != 0)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,3);
          FUN_00718220(sVar1 + 0x10010,uVar3,uVar4,uVar5);
          return 1;
        }
      }
    }
    else {
      iVar2 = FUN_00713690();
      if ((iVar2 != 0) &&
         ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(int *)(param_1 + 0x19b8) != 0)))) {
        sVar1 = FUN_00dde2d0(0,3);
        if (sVar1 == 0) {
          if (-1 < (char)*(uint *)(param_1 + 0xeac)) {
            FUN_00718220(0x10002,0,0,0);
            if (((*(uint *)(param_1 + 0xeac) & 0x8000) == 0) && (*(float *)(param_1 + 0xa8c) < 9.0))
            {
              FUN_00718220(0x10004,0,0,0);
            }
            FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
            iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
            if (iVar2 != 0) {
              FUN_00718220(0xa0021,0,0,0);
            }
            return 1;
          }
          if ((*(uint *)(param_1 + 0xeac) & 0x20) != 0) {
            FUN_00718220(0x10002,0,0,0);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00734AF0  FUN_00734af0  size=348  [callgraph]
void __fastcall FUN_00734af0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00734b05;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00734940();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a82e80();
    if (((iVar2 != 0) && (param_1[0x670] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00718220(0x14,0,0,0);
      return;
    }
  }
LAB_00734b05:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 00734C50  FUN_00734c50  size=348  [callgraph]
void __fastcall FUN_00734c50(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00734c65;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00734940();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a82e80();
    if (((iVar2 != 0) && (param_1[0x670] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00718220(0x14,0,0,0);
      return;
    }
  }
LAB_00734c65:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 00734DB0  FUN_00734db0  size=547  [callgraph]
undefined4 __fastcall FUN_00734db0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0xbe8) == 0) && (*(int *)(param_1 + 0x14ac) == 1)) &&
     (*(int *)(param_1 + 0x1488) != 0)) {
    if ((*(int *)(param_1 + 0x4b0) == 0x2c150) || (*(int *)(param_1 + 0x4b0) == 0x2c152)) {
      if (((*(float *)(param_1 + 0xa8c) < 16.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
         (*(int *)(param_1 + 0x19b8) != 0)) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,3);
          FUN_00718220(sVar1 + 0x10010,uVar3,uVar4,uVar5);
          return 1;
        }
      }
      if (((*(int *)(param_1 + 0x1154) != 0) && (*(float *)(param_1 + 0xa8c) < 36.0)) &&
         (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00718220(sVar1 + 0x10010,uVar3,uVar4,uVar5);
        return 1;
      }
    }
    else {
      iVar2 = FUN_00713690();
      if (((iVar2 != 0) &&
          ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(int *)(param_1 + 0x19b8) != 0)))) &&
         (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
        sVar1 = FUN_00dde2d0(0,3);
        if (sVar1 == 0) {
          iVar2 = FUN_00c15850();
          if (iVar2 != 0) {
            if ((char)*(uint *)(param_1 + 0xeac) < '\0') {
              FUN_00718220(0x10002,0,0,0);
              if (*(float *)(param_1 + 0xa8c) < 9.0) {
                FUN_00718220(0x10004,0,0,0);
              }
              FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
              iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
              if (iVar2 != 0) {
                FUN_00718220(0xa0021,0,0,0);
              }
              return 1;
            }
            if ((*(uint *)(param_1 + 0xeac) & 0x20) != 0) {
              FUN_00718220(0x10002,0,0,0);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00734FF0  FUN_00734ff0  size=364  [callgraph]
void __fastcall FUN_00734ff0(int *param_1)

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
    FUN_00713960(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = param_1[0x454];
    param_1[0x454] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0073511f;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_00734db0();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00734db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0073511f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 00735160  FUN_00735160  size=364  [callgraph]
void __fastcall FUN_00735160(int *param_1)

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
    FUN_00713960(&DAT_0163b604,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = param_1[0x454];
    param_1[0x454] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0073528f;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_00734db0();
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00734db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0073528f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 007352D0  FUN_007352d0  size=265  [callgraph]
void __fastcall FUN_007352d0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0073539c;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00734db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_0073539c:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 007353E0  FUN_007353e0  size=237  [callgraph]
void __fastcall FUN_007353e0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00735490;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00734db0();
    if (iVar2 != 0) {
      return;
    }
  }
LAB_00735490:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  return;
}

// 007354D0  FUN_007354d0  size=655  [callgraph]
void __fastcall FUN_007354d0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00735709;
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
          FUN_00718220(0x10001,0,0,0);
        }
        if (2.0943952 < (float)param_1[0x2a8]) {
          FUN_00718220(0x10005,0,0,0);
        }
      }
      if ((((float)param_1[0x2a3] < 36.0) && (1.5707964 < (float)param_1[0x2a8])) &&
         (sVar1 = FUN_00dde2d0(0,3), sVar1 == 0)) {
        FUN_00718220(0x10002,0,0,0);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x40490fdb,0);
      }
      iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
      if (iVar2 != 0) {
        FUN_00718220(0xa0021,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00735709:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00735760  FUN_00735760  size=1197  [callgraph]
void __fastcall FUN_00735760(int param_1)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00735b63;
  iVar4 = FUN_00a82e60();
  if ((iVar4 != 0) && (iVar4 = FUN_00713e50(), iVar4 != 0)) {
    FUN_0071dc70();
    return;
  }
  iVar4 = FUN_00a82e60();
  if ((iVar4 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
    *(undefined1 *)(param_1 + 0x1090) = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00718220(0,0,0,0);
    return;
  }
  iVar4 = FUN_00a82e80();
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
    FUN_00718220(0x23,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00735b63;
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
  *(float *)(param_1 + 0x1660) =
       (local_28 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  if ((*(uint *)(param_1 + 0xea8) & 0x40000) != 0) {
    iVar4 = FUN_00710010();
    if (iVar4 == 0) {
      return;
    }
    FUN_00725120();
    return;
  }
  if (((*(uint *)(param_1 + 0xea8) & 0x400000) != 0) && (iVar4 = FUN_00a82e60(), iVar4 != 0)) {
    return;
  }
  iVar4 = FUN_00710010();
  if ((iVar4 != 0) && (iVar4 = FUN_00725120(), iVar4 != 0)) {
    return;
  }
  if (((*(float *)(param_1 + 0xa8c) <= 64.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) ||
     (*(int *)(param_1 + 0x1a3c) != 0)) {
    if (*(int *)(param_1 + 0x1a3c) == 0) {
      if ((*(int *)(param_1 + 0x107c) != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 0)) {
        FUN_00718220(0x20002,0,0,0);
        return;
      }
    }
    else {
      fVar5 = (float10)FUN_00dde300(0x3f800000,0x40000000);
      *(float *)(param_1 + 0x1a40) = (float)(fVar5 * (float10)60.0);
    }
    if ((*(int *)(param_1 + 0x1080) != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 0)) {
      FUN_00718220(0x20004,0,0,0);
      return;
    }
    if ((*(int *)(param_1 + 0x1084) != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 0)) {
      FUN_00718220(0x20003,0,0,0);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00718220(0x20006,0,0,0);
      return;
    }
    if (2.5307274 < *(float *)(param_1 + 0xa9c)) {
LAB_00735a55:
      FUN_00718220(0x20008,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00718220(0x20007,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.5307274) goto LAB_00735a55;
  }
  uVar2 = *(uint *)(param_1 + 0xea8);
  if (((uVar2 & 0x80400000) == 0) && (36.0 < *(float *)(param_1 + 0xa8c))) {
    if (*(int *)(param_1 + 0x19c0) == 0) {
      if ((((uVar2 & 0x80000) != 0) || (*(float *)(param_1 + 0xa8c) <= 2500.0)) ||
         ((uVar2 & 0x10000000) != 0)) {
LAB_00735b0d:
        FUN_00718220(0x20005,0,0,0);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 900.0 < fVar1 != (fVar1 == 900.0)) goto LAB_00735b0d;
    }
  }
  iVar4 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10();
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x19c0) == 0) {
      if (*(int *)(param_1 + 0x17e8) == 0) goto LAB_00735b63;
    }
    else if (10.0 <= *(float *)(param_1 + 0xa90)) goto LAB_00735b63;
    FUN_00718220(0x1000c,0,0,0);
  }
LAB_00735b63:
  if ((((*(int *)(param_1 + 0x19c0) != 0) && (*(int *)(*(int *)(param_1 + 0xa84) + 0x2660) != 0)) &&
      ((*(int *)(param_1 + 0x1498) != 0 &&
       ((*(float *)(param_1 + 0xa8c) < 25.0 && (*(float *)(param_1 + 0xaa0) < 0.7853982)))))) &&
     (iVar4 = FUN_0070dbf0(2,1), iVar4 != 0)) {
    FUN_00718220(0x2000a,0,0,0);
    FUN_0070dc50();
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
    FUN_00718e90(0xffffffff);
  }
  return;
}

// 00735C10  FUN_00735c10  size=774  [callgraph]
void __fastcall FUN_00735c10(int *param_1)

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
    iVar3 = FUN_0070e3f0();
    if (iVar3 != 0) {
      FUN_00718220(0x120000,0,0,0);
      return;
    }
    iVar3 = FUN_0070e2a0();
    if (iVar3 != 0) {
      FUN_00718220(0x120004,0,0,0);
      return;
    }
    iVar3 = FUN_0070e330();
    if (iVar3 != 0) {
      FUN_00718220(0x120001,0,0,0);
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
      if ((param_1[0x3aa] & 0x80000U) == 0) {
        if (param_1[0x688] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00718220(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00718220(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10();
        if (iVar3 != 0) {
          FUN_00718220(0x1000c,0,0,0);
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
        if ((param_1[0x670] != 0) && (param_1[0x688] == 0)) goto LAB_00735e77;
        uVar4 = 0x1e;
      }
      FUN_00718220(uVar4,0,0,0);
    }
  }
LAB_00735e77:
  if ((DAT_01bea094 & 0x20000) == 0) {
    if (((param_1[0x670] != 0) && ((float)param_1[0x2a3] <= 36.0)) &&
       ((float)param_1[0x2a8] < 1.3962634)) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (((float)param_1[0x2a3] <= 4.0) && ((float)param_1[0x2a8] < 1.3962634)) {
    param_1[0x6e7] = -1;
    FUN_00718220(0x1000a,0,0,0);
    return;
  }
  FUN_00730fd0();
  return;
}

// 00735F20  FUN_00735f20  size=1172  [callgraph]
void __fastcall FUN_00735f20(int param_1)

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
    if ((iVar3 != 0) && (iVar3 = FUN_00713e50(), iVar3 != 0)) {
      FUN_0071dc70();
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
        FUN_00718220(0,0,0,0);
        return;
      }
      if (((*(uint *)(param_1 + 0xea8) & 0x400000) == 0) || (iVar3 = FUN_00a82e60(), iVar3 == 0)) {
        if (*(int *)(param_1 + 0xa84) != 0) {
          iVar3 = FUN_00710010();
          if (iVar3 != 0) goto LAB_00736006;
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
                FUN_00718220(0x30002,0,0,0);
                return;
              }
            }
            else {
              fVar4 = (float10)FUN_00dde300(0x3f800000,0x40000000);
              *(float *)(param_1 + 0x1a40) = (float)(fVar4 * (float10)60.0);
            }
            if ((*(int *)(param_1 + 0x1080) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
              FUN_00718220(0x30004,0,0,0);
              return;
            }
            if ((*(int *)(param_1 + 0x1084) != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 0)) {
              FUN_00718220(0x30003,0,0,0);
              return;
            }
          }
          if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
            if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
              FUN_00718220(0x30006,0,0,0);
              return;
            }
            if (2.5307274 < *(float *)(param_1 + 0xa9c)) {
LAB_00736251:
              FUN_00718220(0x30008,0,0,0);
              return;
            }
            if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
              FUN_00718220(0x30007,0,0,0);
              return;
            }
            if (*(float *)(param_1 + 0xa9c) < -2.5307274) goto LAB_00736251;
          }
          if ((((*(uint *)(param_1 + 0xea8) & 0x80400000) == 0) && (*(int *)(param_1 + 0x19c0) == 0)
              ) && ((*(float *)(param_1 + 0xa8c) <= 2500.0 ||
                    ((*(uint *)(param_1 + 0xea8) & 0x10000000) != 0)))) {
            FUN_00718220(0x30005,0,0,0);
          }
          if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
             (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10(), iVar3 != 0)) {
            FUN_00718220(0x1000c,0,0,0);
          }
        }
        if ((((36.0 < *(float *)(param_1 + 0xa8c)) || (1.3962634 <= *(float *)(param_1 + 0xaa0))) ||
            (iVar3 = FUN_00718e90(0xffffffff), iVar3 == 0)) && (0 < *(int *)(param_1 + 0x61c))) {
          iVar3 = FUN_00a82e60();
          if ((iVar3 != 0) && (*(int *)(param_1 + 0xb08) != -1)) {
            FUN_00718220(0,0,0,0);
          }
          iVar3 = FUN_00a82e80();
          if ((iVar3 != 0) && (*(int *)(param_1 + 0x1074) != 0)) {
            FUN_00718220(0x23,0,0,0);
          }
        }
      }
    }
    else {
      iVar3 = FUN_00710010();
      if (iVar3 != 0) {
LAB_00736006:
        FUN_00718220(0x3000b,0,0,0);
        return;
      }
    }
  }
  return;
}

// 007363C0  FUN_007363c0  size=537  [callgraph]
void __fastcall FUN_007363c0(int *param_1)

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
      iVar3 = FUN_0070e3f0();
      if (iVar3 != 0) {
        FUN_00718220(0x120000,0,0,0);
        return;
      }
      iVar3 = FUN_0070e2a0();
      if (iVar3 != 0) {
        FUN_00718220(0x120004,0,0,0);
        return;
      }
      iVar3 = FUN_0070e330();
      if (iVar3 != 0) {
        FUN_00718220(0x120001,0,0,0);
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
            FUN_00718220(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00718220(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10();
        if (iVar3 != 0) {
          FUN_00718220(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x30003;
        }
        else {
          uVar4 = 0x30004;
        }
        FUN_00718220(uVar4,0,0,0);
      }
      iVar3 = FUN_00730fd0();
      if (iVar3 != 0) {
        return;
      }
    }
    if ((((float)param_1[0x2a3] <= 36.0) && ((float)param_1[0x2a8] < 1.3962634)) &&
       (iVar3 = FUN_00718e90(0xffffffff), iVar3 == 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 007365E0  FUN_007365e0  size=71  [callgraph]
void __fastcall FUN_007365e0(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  switch(param_1[0x186]) {
  default:
    return;
  case 0x10000002:
    FUN_00730310();
    return;
  case 0x1000000a:
  case 0x1000000b:
  case 0x1000000c:
  case 0x1000000d:
    FUN_0070c4e0();
    return;
  case 0x10000012:
  case 0x10000013:
    FUN_0070c580();
    return;
  }
}

// 00736670  FUN_00736670  size=1045  [callgraph]
void __fastcall FUN_00736670(int param_1)

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
        iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
        if ((iVar3 != 0) && ((*(int *)(param_1 + 0x14ac) == 7 && (*(int *)(param_1 + 0x1488) != 0)))
           ) {
          if ((*(float *)(param_1 + 0xa8c) < 12.25) && (iVar3 = FUN_00ac8190(), iVar3 != 0)) {
            FUN_00718220(0x10014,0,0,0);
            return;
          }
          if (((*(float *)(param_1 + 0xa8c) < 16.0) && (-2.0 < *(float *)(param_1 + 0xa94))) &&
             (*(float *)(param_1 + 0xa94) < 2.0)) {
            do {
              sVar2 = FUN_00dde2d0(0,4);
            } while (sVar2 + 0x10010 == *(int *)(param_1 + 0x1b88));
            FUN_00718220(sVar2 + 0x10010,0,0,0);
            return;
          }
        }
        if ((((((*(uint *)(param_1 + 0xea8) & 0x8000) == 0) &&
              ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)) &&
             ((iVar3 = FUN_00a82e80(), iVar3 != 0 && (64.0 < *(float *)(param_1 + 0xa8c))))) ||
            (((64.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
             (*(int *)(param_1 + 0x19c0) != 0)))) ||
           ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
          FUN_00718220(0x13,0,0,0);
          return;
        }
        if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
          if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
            FUN_00718220(0x18,0,0,0);
            return;
          }
          if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_007368c2:
            FUN_00718220(0x16,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00718220(0x17,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_007368c2;
        }
        if ((*(int *)(param_1 + 0x1494) != 0) && (*(int *)(param_1 + 0x19c0) != 0)) {
          *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (*(int *)(param_1 + 0x1498) != 0) {
            do {
              sVar2 = FUN_00dde2d0(0,4);
            } while (sVar2 + 0x10010 == *(int *)(param_1 + 0x1b88));
            FUN_00718220(sVar2 + 0x10010,0,0,0);
          }
          iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
          if (iVar3 == 0) {
            return;
          }
          FUN_00718220(0x10008,0,0,0);
          return;
        }
        if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x19c0) == 0)) {
          sVar2 = FUN_00dde2d0(0,2);
          if (sVar2 == 0) {
            if (*(int *)(param_1 + 0x1080) != 0) {
              FUN_00718220(0x10,0,0,0);
              return;
            }
          }
          else if (sVar2 == 1) {
            if (*(int *)(param_1 + 0x1084) != 0) {
              FUN_00718220(0x11,0,0,0);
              return;
            }
          }
          else if ((sVar2 == 2) && (*(int *)(param_1 + 0x107c) != 0)) {
            FUN_00718220(0x12,0,0,0);
            return;
          }
        }
        if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
           (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10(), iVar3 != 0)) {
          FUN_00718220(0x1000c,0,0,0);
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
        FUN_00718e90(0xffffffff);
      }
    }
    else {
      if (*(int *)(param_1 + 0x61c) == 0) {
        FUN_0070e960();
        return;
      }
      iVar3 = FUN_00713e50();
      if (iVar3 != 0) {
        FUN_0071dc70();
        return;
      }
      if (*(float *)(param_1 + 0x1c00) <= 0.0) {
        FUN_00718220(0x21,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00736A90  FUN_00736a90  size=703  [callgraph]
void __fastcall FUN_00736a90(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if (((iVar3 != 0) &&
        (((param_1[0x52b] == 7 && (param_1[0x522] != 0)) && ((float)param_1[0x2a3] < 12.25)))) &&
       ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00718220(sVar2 + 0x10010,0,0,0);
      return;
    }
    if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x526] != 0) {
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00718220(sVar2 + 0x10010,0,0,0);
      }
      iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
      if (iVar3 == 0) {
        return;
      }
      FUN_00718220(0x10008,0,0,0);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00736ca5;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x421] != 0) {
          FUN_00718220(0x11,0,0,0);
        }
      }
      else if (param_1[0x420] != 0) {
        FUN_00718220(0x10,0,0,0);
      }
    }
  }
LAB_00736ca5:
  if (16.0 <= (float)param_1[0x2a3]) {
    if (((((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) &&
         (param_1[0x526] != 0)) &&
        (((float)param_1[0x2a3] < 20.25 && (6.25 < (float)param_1[0x2a3])))) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00718220(sVar2 + 0x10010,0,0,0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00736cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00736D50  FUN_00736d50  size=732  [callgraph]
void __fastcall FUN_00736d50(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if ((iVar3 != 0) &&
       ((((param_1[0x52b] == 7 && (param_1[0x522] != 0)) && ((float)param_1[0x2a3] < 12.25)) &&
        ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00718220(sVar2 + 0x10010,0,0,0);
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
        FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00718220(sVar2 + 0x10010,0,0,0);
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
            FUN_00718220(0x1b,0,0,0);
          }
        }
        else {
          FUN_00718220(0x1a,0,0,0);
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
LAB_00736f67:
      FUN_00718220(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) goto LAB_00736f67;
      goto LAB_00737012;
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
    FUN_00718220(sVar2 + 0x10010,0,0,0);
    return;
  }
LAB_00737012:
  if (param_1[0x420] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073702a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00737030  FUN_00737030  size=732  [callgraph]
void __fastcall FUN_00737030(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if ((iVar3 != 0) &&
       ((((param_1[0x52b] == 7 && (param_1[0x522] != 0)) && ((float)param_1[0x2a3] < 12.25)) &&
        ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))))) {
      do {
        sVar2 = FUN_00dde2d0(0,4);
      } while (sVar2 + 0x10010 == param_1[0x6e2]);
      FUN_00718220(sVar2 + 0x10010,0,0,0);
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
        FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00718220(sVar2 + 0x10010,0,0,0);
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
            FUN_00718220(0x1b,0,0,0);
          }
        }
        else {
          FUN_00718220(0x1a,0,0,0);
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
LAB_00737247:
      FUN_00718220(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) goto LAB_00737247;
      goto LAB_007372f2;
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
    FUN_00718220(sVar2 + 0x10010,0,0,0);
    return;
  }
LAB_007372f2:
  if (param_1[0x421] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073730a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00737310  FUN_00737310  size=618  [callgraph]
void __fastcall FUN_00737310(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = lib::Array<Entity*>::Array<Entity*>_5();
      if ((((iVar2 != 0) && (param_1[0x52b] == 7)) && (param_1[0x522] != 0)) &&
         ((((float)param_1[0x2a3] < 12.25 && (-2.0 < (float)param_1[0x2a5])) &&
          ((float)param_1[0x2a5] < 2.0)))) {
        do {
          sVar1 = FUN_00dde2d0(0,4);
        } while (sVar1 + 0x10010 == param_1[0x6e2]);
        FUN_00718220(sVar1 + 0x10010,0,0,0);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         (((float)param_1[0x2a8] < 0.7853982 && (param_1[0x670] != 0)))) {
        FUN_00718220(0x13,0,0,0);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00718220(sVar1 + 0x19,uVar3,uVar4,uVar5);
        if (param_1[0x526] != 0) {
          do {
            sVar1 = FUN_00dde2d0(0,4);
          } while (sVar1 + 0x10010 == param_1[0x6e2]);
          FUN_00718220(sVar1 + 0x10010,0,0,0);
        }
        iVar2 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
        if (iVar2 == 0) {
          return;
        }
        FUN_00718220(0x10008,0,0,0);
        return;
      }
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x007374c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00737578. Too many branches */
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
    FUN_00718220(sVar1 + 0x10010,0,0,0);
    return;
  }
  return;
}

// 00737580  FUN_00737580  size=846  [callgraph]
void __fastcall FUN_00737580(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a85630();
  if (iVar3 == 2) {
    return;
  }
  iVar3 = FUN_0070e3f0();
  if (iVar3 != 0) {
    FUN_00718220(0x120000,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0070e2a0();
  if (iVar3 != 0) {
    FUN_00718220(0x120004,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  iVar3 = FUN_0070e330();
  if (iVar3 != 0) {
    FUN_00718220(0x120001,0,0,0);
    param_1[0x6e3] = -1;
    return;
  }
  if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
    param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
    if (param_1[0x688] == 0) {
      iVar3 = FUN_00ac4d60(4);
      if (iVar3 != 0) {
        FUN_00718220(0x27,0,0,0);
        return;
      }
      iVar3 = FUN_00ac4d60(3);
      if (iVar3 != 0) {
        FUN_00718220(0x26,0,0,0);
        return;
      }
    }
    iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10();
    if (iVar3 != 0) {
      FUN_00718220(0x1000c,0,0,0);
      return;
    }
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (param_1[0x421] == 0) goto LAB_007376be;
      uVar4 = 0x11;
    }
    else {
      if (param_1[0x420] == 0) goto LAB_007376be;
      uVar4 = 0x10;
    }
    FUN_00718220(uVar4,0,0,0);
  }
LAB_007376be:
  iVar3 = FUN_00730fd0();
  if (iVar3 == 0) {
    if (param_1[0x187] != 0) {
      if ((((param_1[0x2a1] != 0) && (iVar3 = lib::Array<Entity*>::Array<Entity*>_5(), iVar3 != 0))
          && ((float)param_1[0x2a3] < 12.25)) &&
         ((-2.0 < (float)param_1[0x2a5] && ((float)param_1[0x2a5] < 2.0)))) {
        do {
          sVar2 = FUN_00dde2d0(0,4);
        } while (sVar2 + 0x10010 == param_1[0x6e2]);
        FUN_00718220(sVar2 + 0x10010,0,0,0);
        return;
      }
      if (param_1[0x670] == 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
          sVar2 = FUN_00dde2d0(0,1);
          if (sVar2 == 0) {
            if (param_1[0x421] != 0) {
              FUN_00718220(0x11,0,0,0);
            }
          }
          else if (param_1[0x420] != 0) {
            FUN_00718220(0x10,0,0,0);
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
                    /* WARNING: Could not recover jumptable at 0x007378cc. Too many branches */
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
      FUN_00718220(sVar2 + 0x10010,0,0,0);
      return;
    }
  }
  return;
}

// 007378D0  FUN_007378d0  size=809  [callgraph]
void __fastcall FUN_007378d0(int param_1)

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
        iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
        if ((iVar3 != 0) && (*(float *)(param_1 + 0xa8c) < 12.25)) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,3);
          FUN_00718220(sVar2 + 0x10016,uVar4,uVar5,uVar6);
          return;
        }
        if (((((((*(uint *)(param_1 + 0xea8) & 0x8000) == 0) &&
               ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)) &&
              (iVar3 = FUN_00a82e80(), iVar3 != 0)) && (64.0 < *(float *)(param_1 + 0xa8c))) ||
            (((64.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
             (*(int *)(param_1 + 0x19c0) != 0)))) ||
           ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
          FUN_00718220(0x13,0,0,0);
          return;
        }
        if ((*(uint *)(param_1 + 0xea4) & 0x400000) != 0) {
          if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
            FUN_00718220(0x18,0,0,0);
            return;
          }
          if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00737aa0:
            FUN_00718220(0x16,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00718220(0x17,0,0,0);
            return;
          }
          if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00737aa0;
        }
        if ((*(int *)(param_1 + 0x1494) == 0) || (*(int *)(param_1 + 0x19c0) == 0)) {
          if ((*(int *)(param_1 + 0x1a1c) != 0) && (*(int *)(param_1 + 0x1a28) != 0)) {
            FUN_00718220(0x10016,0,0,0);
            return;
          }
          if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x19c0) == 0)) {
            sVar2 = FUN_00dde2d0(0,2);
            if (sVar2 == 0) {
              if (*(int *)(param_1 + 0x1080) != 0) {
                FUN_00718220(0x10,0,0,0);
                return;
              }
            }
            else if (sVar2 == 1) {
              if (*(int *)(param_1 + 0x1084) != 0) {
                FUN_00718220(0x11,0,0,0);
                return;
              }
            }
            else if ((sVar2 == 2) && (*(int *)(param_1 + 0x107c) != 0)) {
              FUN_00718220(0x12,0,0,0);
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
          FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (*(int *)(param_1 + 0x1498) != 0) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            sVar2 = FUN_00dde2d0(0,3);
            FUN_00718220(sVar2 + 0x10016,uVar4,uVar5,uVar6);
            return;
          }
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x61c) == 0) {
        FUN_0070e960();
        return;
      }
      iVar3 = FUN_00713e50();
      if (iVar3 != 0) {
        FUN_0071dc70();
        return;
      }
      if (*(float *)(param_1 + 0x1c00) <= 0.0) {
        FUN_00718220(0x21,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00737C00  FUN_00737c00  size=565  [callgraph]
void __fastcall FUN_00737c00(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,3);
      FUN_00718220(sVar2 + 0x10016,uVar4,uVar5,uVar6);
      return;
    }
    if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
      param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,2);
      FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
      if (param_1[0x526] == 0) {
        return;
      }
      FUN_00718220(0x10016,0,0,0);
      return;
    }
    if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
      if (param_1[0x670] != 0) {
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x249] = 0;
        }
        goto LAB_00737d94;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x421] != 0) {
          FUN_00718220(0x11,0,0,0);
        }
      }
      else if (param_1[0x420] != 0) {
        FUN_00718220(0x10,0,0,0);
      }
    }
  }
LAB_00737d94:
  if (16.0 <= (float)param_1[0x2a3]) {
    if ((((param_1[0x670] != 0) && (*(int *)(param_1[0x2a1] + 0x2660) != 0)) &&
        (param_1[0x526] != 0)) &&
       ((((float)param_1[0x2a3] < 20.25 && (6.25 < (float)param_1[0x2a3])) &&
        ((float)param_1[0x2a8] < 0.7853982)))) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,3);
      FUN_00718220(sVar2 + 0x10016,uVar4,uVar5,uVar6);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00737db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00737E40  FUN_00737e40  size=623  [callgraph]
void __fastcall FUN_00737e40(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) goto LAB_00738071;
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
        FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        FUN_00718220(0x10016,0,0,0);
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
            FUN_00718220(0x1b,0,0,0);
          }
        }
        else {
          FUN_00718220(0x1a,0,0,0);
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
      FUN_00718220(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) {
        FUN_00718220(0xf,0,0,0);
        return;
      }
      goto LAB_00738095;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
LAB_00738095:
    if (param_1[0x420] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x007380ad. Too many branches */
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
LAB_00738071:
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,3);
  FUN_00718220(sVar2 + 0x10016,uVar5,uVar6,uVar7);
  return;
}

// 007380B0  FUN_007380b0  size=623  [callgraph]
void __fastcall FUN_007380b0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if ((iVar3 != 0) && ((float)param_1[0x2a3] < 12.25)) goto LAB_007382e1;
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
        FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
        if (param_1[0x526] == 0) {
          return;
        }
        FUN_00718220(0x10016,0,0,0);
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
            FUN_00718220(0x1b,0,0,0);
          }
        }
        else {
          FUN_00718220(0x1a,0,0,0);
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
      FUN_00718220(0x13,0,0,0);
      return;
    }
    if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
       ((float)param_1[0x2a8] < 0.7853982)) {
      if (param_1[0x670] != 0) {
        FUN_00718220(0xf,0,0,0);
        return;
      }
      goto LAB_00738305;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
LAB_00738305:
    if (param_1[0x421] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0073831d. Too many branches */
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
LAB_007382e1:
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,3);
  FUN_00718220(sVar2 + 0x10016,uVar5,uVar6,uVar7);
  return;
}

// 00738320  FUN_00738320  size=483  [callgraph]
void __fastcall FUN_00738320(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = lib::Array<Entity*>::Array<Entity*>_5();
      if ((iVar2 != 0) && ((float)param_1[0x2a3] < 12.25)) {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,3);
        FUN_00718220(sVar1 + 0x10016,uVar3,uVar4,uVar5);
        return;
      }
      if (((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
          ((float)param_1[0x2a8] < 0.7853982)) && (param_1[0x670] != 0)) {
        FUN_00718220(0xf,0,0,0);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_00718220(sVar1 + 0x19,uVar3,uVar4,uVar5);
        if (param_1[0x526] == 0) {
          return;
        }
        FUN_00718220(0x10016,0,0,0);
        return;
      }
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x00738452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00738501. Too many branches */
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
    FUN_00718220(sVar1 + 0x10016,uVar3,uVar4,uVar5);
    return;
  }
  return;
}

// 00738510  FUN_00738510  size=712  [callgraph]
void __fastcall FUN_00738510(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    iVar3 = FUN_0070e3f0();
    if (iVar3 == 0) {
      iVar3 = FUN_0070e2a0();
      if (iVar3 != 0) {
        FUN_00718220(0x120004,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      iVar3 = FUN_0070e330();
      if (iVar3 != 0) {
        FUN_00718220(0x120001,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
        if (param_1[0x688] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00718220(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00718220(0x26,0,0,0);
            return;
          }
          if (param_1[0x68a] != 0) {
            FUN_00718220(0x10016,0,0,0);
            return;
          }
        }
        (**(code **)(*param_1 + 0x34c))();
      }
      iVar3 = FUN_00730fd0();
      if (iVar3 == 0) {
        if (param_1[0x187] != 0) {
          if (((param_1[0x2a1] != 0) &&
              (iVar3 = lib::Array<Entity*>::Array<Entity*>_5(), iVar3 != 0)) &&
             ((float)param_1[0x2a3] < 12.25)) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            sVar2 = FUN_00dde2d0(0,3);
            FUN_00718220(sVar2 + 0x10016,uVar4,uVar5,uVar6);
            return;
          }
          if (param_1[0x670] == 0) {
            fVar1 = (float)param_1[0x249];
            param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
            if ((30.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x3a9] & 0x400000U) != 0)) {
              sVar2 = FUN_00dde2d0(0,1);
              if (sVar2 == 0) {
                if (param_1[0x421] != 0) {
                  FUN_00718220(0x11,0,0,0);
                }
              }
              else if (param_1[0x420] != 0) {
                FUN_00718220(0x10,0,0,0);
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
                    /* WARNING: Could not recover jumptable at 0x007387d6. Too many branches */
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
          FUN_00718220(sVar2 + 0x10016,uVar4,uVar5,uVar6);
          return;
        }
      }
    }
    else {
      FUN_00718220(0x120000,0,0,0);
      param_1[0x6e3] = -1;
    }
  }
  return;
}

// 007387E0  FUN_007387e0  size=1479  [callgraph]
void __fastcall FUN_007387e0(int param_1)

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
      FUN_0070e960();
      return;
    }
    iVar3 = FUN_00713e50();
    if (iVar3 == 0) {
      if (0.0 < *(float *)(param_1 + 0x1c00)) {
        return;
      }
      FUN_00718220(0x21,0,0,0);
      return;
    }
    FUN_0071dc70();
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00738d76;
  iVar3 = FUN_00713730();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar3 + 0x4c);
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) | 0x40000000;
    FUN_00718220(0x19,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) goto LAB_00738d76;
  if ((*(byte *)(param_1 + 0xea4) & 4) != 0) {
    uVar4 = FUN_00dde2a0(0,100);
    uVar4 = (uVar4 & 0xffff) % 3;
    if (uVar4 == 0) {
      if (*(int *)(param_1 + 0x107c) != 0) {
        FUN_00718220(0x12,0,0,0);
        return;
      }
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0x1080) != 0) {
        FUN_00718220(0x10,0,0,0);
        return;
      }
    }
    else if ((uVar4 == 2) && (*(int *)(param_1 + 0x1084) != 0)) {
      FUN_00718220(0x11,0,0,0);
      return;
    }
  }
  iVar3 = FUN_00a82e80();
  if (((iVar3 != 0) && (*(float *)(param_1 + 0x18f4) < 0.0)) &&
     (((*(int *)(param_1 + 0x19c0) == 0 && (12.25 < *(float *)(param_1 + 0xa8c))) ||
      ((*(uint *)(param_1 + 0xea4) & 0x400000) == 0)))) {
    FUN_00718220(0x14,0,0,0);
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
  if ((iVar3 != 0) && (*(float *)(param_1 + 0xa8c) < 16.0)) {
    FUN_00718220(0x1000e,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (*(float *)(param_1 + 0xa8c) < 12.25) {
      FUN_00718220(0x1000f,0,0,0);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    }
    if (4.0 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    FUN_00718220(0x1000d,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) <= 36.0) && (*(int *)(param_1 + 0x19c0) != 0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) {
      if (*(int *)(param_1 + 0x1084) != 0) {
        uVar5 = 0x11;
        goto LAB_00738a99;
      }
    }
    else if (*(int *)(param_1 + 0x1080) != 0) {
      uVar5 = 0x10;
LAB_00738a99:
      FUN_00718220(uVar5,0,0,0);
    }
  }
  if (*(float *)(param_1 + 0xa8c) <= 4.0) {
    *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
  }
  if ((((36.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
      (*(int *)(param_1 + 0x19c0) != 0)) ||
     ((100.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
    FUN_00718220(0x13,0,0,0);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0xea4) >> 0x16 & 1;
  if (uVar4 != 0) {
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      FUN_00718220(0x18,0,0,0);
      return;
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
LAB_00738bbd:
      FUN_00718220(0x16,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      FUN_00718220(0x17,0,0,0);
      return;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) goto LAB_00738bbd;
  }
  if ((*(int *)(param_1 + 0x1494) == 0) || (*(int *)(param_1 + 0x19c0) == 0)) {
    if ((uVar4 != 0) && ((*(float *)(param_1 + 0x920) < 0.0 || (*(int *)(param_1 + 0x19c0) == 0))))
    {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (*(int *)(param_1 + 0x1084) == 0) {
          return;
        }
        FUN_00718220(0x11,0,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x1080) == 0) {
        return;
      }
      FUN_00718220(0x10,0,0,0);
      return;
    }
    if (((*(float *)(param_1 + 0xa90) < 10.0) && (*(int *)(param_1 + 0x19c0) != 0)) &&
       (iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10(), iVar3 != 0)) {
      FUN_00718220(0x1000c,0,0,0);
    }
    fVar1 = *(float *)(param_1 + 0x924);
    if (!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) {
      iVar3 = FUN_00464930();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xdb0) = 1;
      }
      *(undefined4 *)(param_1 + 0x924) = 0;
    }
LAB_00738d76:
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.3962634)) {
      FUN_00718e90(0xffffffff);
    }
    return;
  }
  *(uint *)(param_1 + 0xea8) = *(uint *)(param_1 + 0xea8) & 0xbfffffff;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = FUN_00dde2d0(0,2);
  FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
  if (*(int *)(param_1 + 0x1498) != 0) {
    sVar2 = FUN_00dde2a0(0,2);
    if (sVar2 == 0) {
      uVar5 = 0x1000d;
    }
    else if (sVar2 == 1) {
      uVar5 = 0x110001;
    }
    else {
      if (sVar2 != 2) goto LAB_00738c62;
      uVar5 = 0x1000f;
    }
    FUN_00718220(uVar5,0,0,0);
  }
LAB_00738c62:
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
  if (iVar3 != 0) {
    FUN_00718220(0x10008,0,0,0);
  }
  iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_9();
  if (iVar3 == 0) {
    return;
  }
  FUN_00718220(0xa0021,0,0,0);
  return;
}

// 00738DB0  FUN_00738db0  size=1070  [callgraph]
void __fastcall FUN_00738db0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00713730();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00718220(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00718220(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00718220(0x1000e,0,0,0);
        FUN_00c27260(param_1[0x66d]);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00718220(0x1000f,0,0,0);
          FUN_00c27260(param_1[0x66d]);
        }
        if (4.0 <= (float)param_1[0x2a3]) {
          return;
        }
        FUN_00718220(0x1000d,0,0,0);
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((param_1[0x525] != 0) && (param_1[0x670] != 0)) {
        param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
        if (param_1[0x526] != 0) {
          sVar2 = FUN_00dde2a0(0,2);
          if (sVar2 == 0) {
            uVar4 = 0x1000d;
          }
          else if (sVar2 == 1) {
            uVar4 = 0x110001;
          }
          else {
            if (sVar2 != 2) goto LAB_00738fcc;
            uVar4 = 0x1000f;
          }
          FUN_00718220(uVar4,0,0,0);
        }
LAB_00738fcc:
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
        if (iVar3 == 0) {
          return;
        }
        FUN_00718220(0x10008,0,0,0);
        return;
      }
      iVar3 = FUN_00a82e80();
      if (((iVar3 != 0) && ((param_1[0x3a9] & 0x400000U) != 0)) &&
         (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) {
LAB_0073904d:
        FUN_00718220(0x13,0,0,0);
        return;
      }
      if (((float)param_1[0x2a3] <= 64.0) || (0.5235988 <= (float)param_1[0x2a8])) {
        if (param_1[0x670] != 0) {
          fVar1 = (float)param_1[0x249];
          param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
          if (fVar1 - (float)param_1[0x244] < 0.0) {
            param_1[0x249] = 0;
          }
          goto LAB_007390dd;
        }
      }
      else if (param_1[0x670] != 0) goto LAB_0073904d;
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
      if (60.0 < (float)param_1[0x244] + fVar1) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          FUN_00718220(0x11,0,0,0);
        }
        else {
          FUN_00718220(0x10,0,0,0);
        }
      }
    }
  }
LAB_007390dd:
  if ((float)param_1[0x2a3] < 16.0) {
                    /* WARNING: Could not recover jumptable at 0x007390fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x670] == 0) || (*(int *)(param_1[0x2a1] + 0x2660) == 0)) {
    fVar1 = (float)param_1[0x2a3];
    if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
      FUN_00718e90(0xffffffff);
    }
  }
  else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
           (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 == 0) {
      FUN_00718220(0x1000d,0,0,0);
      return;
    }
    if (sVar2 == 1) {
      FUN_00718220(0x1000f,0,0,0);
      return;
    }
  }
  return;
}

// 007391E0  FUN_007391e0  size=1013  [callgraph]
void __fastcall FUN_007391e0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00739202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00713730();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00718220(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00718220(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00718220(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00718220(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00718220(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if (param_1[0x525] == 0) {
        if (param_1[0x670] == 0) goto LAB_007393e6;
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
          FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
          if (param_1[0x526] == 0) {
            return;
          }
          uVar4 = FUN_00dde2a0(0,2);
          if ((uVar4 & 0xffff) == 0) goto LAB_007393c9;
          uVar4 = (uVar4 & 0xffff) - 1;
          if (uVar4 == 0) {
            FUN_00718220(0x110001,0,0,0);
            return;
          }
          goto LAB_0073957b;
        }
LAB_007393e6:
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if (60.0 < (float)param_1[0x244] + fVar1) {
          sVar2 = FUN_00dde2d0(0,1);
          if ((sVar2 == 0) || (param_1[0x420] == 0)) {
            if (param_1[0x421] != 0) {
              FUN_00718220(0x1b,0,0,0);
            }
          }
          else {
            FUN_00718220(0x1a,0,0,0);
          }
        }
      }
      if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
         (param_1[0x670] != 0)) {
LAB_007394e6:
        FUN_00718220(0x13,0,0,0);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         ((float)param_1[0x2a8] < 0.7853982)) {
        if (param_1[0x670] != 0) goto LAB_007394e6;
        goto LAB_0073958f;
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
LAB_007393c9:
      FUN_00718220(0x1000d,0,0,0);
      return;
    }
LAB_0073957b:
    if (uVar4 != 1) {
      return;
    }
    FUN_00718220(0x1000f,0,0,0);
    return;
  }
LAB_0073958f:
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
  FUN_00718e90(0xffffffff);
  return;
}

// 007395E0  FUN_007395e0  size=1013  [callgraph]
void __fastcall FUN_007395e0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00739602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00713730();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00718220(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00718220(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00718220(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00718220(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00718220(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if (param_1[0x525] == 0) {
        if (param_1[0x670] == 0) goto LAB_007397e6;
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
          FUN_00718220(sVar2 + 0x19,uVar5,uVar6,uVar7);
          if (param_1[0x526] == 0) {
            return;
          }
          uVar4 = FUN_00dde2a0(0,2);
          if ((uVar4 & 0xffff) == 0) goto LAB_007397c9;
          uVar4 = (uVar4 & 0xffff) - 1;
          if (uVar4 == 0) {
            FUN_00718220(0x110001,0,0,0);
            return;
          }
          goto LAB_0073997b;
        }
LAB_007397e6:
        fVar1 = (float)param_1[0x249];
        param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
        if (60.0 < (float)param_1[0x244] + fVar1) {
          sVar2 = FUN_00dde2d0(0,1);
          if ((sVar2 == 0) || (param_1[0x420] == 0)) {
            if (param_1[0x421] != 0) {
              FUN_00718220(0x1b,0,0,0);
            }
          }
          else {
            FUN_00718220(0x1a,0,0,0);
          }
        }
      }
      if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
         (param_1[0x670] != 0)) {
LAB_007398e6:
        FUN_00718220(0x13,0,0,0);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         ((float)param_1[0x2a8] < 0.7853982)) {
        if (param_1[0x670] != 0) goto LAB_007398e6;
        goto LAB_0073998f;
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
LAB_007397c9:
      FUN_00718220(0x1000d,0,0,0);
      return;
    }
LAB_0073997b:
    if (uVar4 != 1) {
      return;
    }
    FUN_00718220(0x1000f,0,0,0);
    return;
  }
LAB_0073998f:
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
  FUN_00718e90(0xffffffff);
  return;
}

// 007399E0  FUN_007399e0  size=868  [callgraph]
void __fastcall FUN_007399e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x41f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00739a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00713730();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      param_1[600] = *(int *)(iVar3 + 0x40);
      param_1[0x259] = *(int *)(iVar3 + 0x44);
      param_1[0x25a] = *(int *)(iVar3 + 0x48);
      param_1[0x25b] = *(int *)(iVar3 + 0x4c);
      param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
      FUN_00718220(0x19,0,0,0);
      return;
    }
    if (param_1[0x2a1] != 0) {
      iVar3 = FUN_00a82e80();
      if ((((iVar3 != 0) && (param_1[0x670] == 0)) && ((float)param_1[0x63d] < 0.0)) &&
         (12.25 < (float)param_1[0x2a3])) {
        FUN_00718220(0x14,0,0,0);
        return;
      }
      iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
      if ((iVar3 != 0) && ((float)param_1[0x2a3] < 16.0)) {
        FUN_00718220(0x1000e,0,0,0);
        if ((float)param_1[0x2a3] < 12.25) {
          FUN_00718220(0x1000f,0,0,0);
        }
        if ((float)param_1[0x2a3] < 4.0) {
          FUN_00718220(0x1000d,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      if ((((float)param_1[0x456] < 0.0) && (25.0 < (float)param_1[0x2a3])) &&
         (((float)param_1[0x2a8] < 0.7853982 && (param_1[0x670] != 0)))) {
        FUN_00718220(0x13,0,0,0);
        return;
      }
      if (param_1[0x525] != 0) {
        if (param_1[0x670] != 0) {
          param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,2);
          FUN_00718220(sVar2 + 0x19,uVar4,uVar5,uVar6);
          if (param_1[0x526] != 0) {
            sVar2 = FUN_00dde2a0(0,2);
            if (sVar2 == 0) {
              uVar4 = 0x1000d;
            }
            else if (sVar2 == 1) {
              uVar4 = 0x110001;
            }
            else {
              if (sVar2 != 2) goto LAB_00739c2b;
              uVar4 = 0x1000f;
            }
            FUN_00718220(uVar4,0,0,0);
          }
LAB_00739c2b:
          iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_11();
          if (iVar3 == 0) {
            return;
          }
          FUN_00718220(0x10008,0,0,0);
          return;
        }
        goto LAB_00739cfe;
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
      FUN_00718220(0x1000d,0,0,0);
      return;
    }
    if (sVar2 != 1) {
      return;
    }
    FUN_00718220(0x1000f,0,0,0);
    return;
  }
LAB_00739cfe:
  if (param_1[0x41f] == 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  fVar1 = (float)param_1[0x2a3];
  if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) && ((float)param_1[0x2a8] < 1.3962634)) {
    FUN_00718e90(0xffffffff);
  }
  return;
}

// 00739D50  FUN_00739d50  size=952  [callgraph]
void __fastcall FUN_00739d50(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a85630();
  if (iVar3 != 2) {
    iVar3 = FUN_0070e3f0();
    if (iVar3 == 0) {
      iVar3 = FUN_0070e2a0();
      if (iVar3 != 0) {
        FUN_00718220(0x120004,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      iVar3 = FUN_0070e330();
      if (iVar3 != 0) {
        FUN_00718220(0x120001,0,0,0);
        param_1[0x6e3] = -1;
        return;
      }
      if ((*(byte *)(param_1 + 0x3a9) & 4) != 0) {
        param_1[0x3a9] = param_1[0x3a9] & 0xfffffffb;
        if (param_1[0x688] == 0) {
          iVar3 = FUN_00ac4d60(4);
          if (iVar3 != 0) {
            FUN_00718220(0x27,0,0,0);
            return;
          }
          iVar3 = FUN_00ac4d60(3);
          if (iVar3 != 0) {
            FUN_00718220(0x26,0,0,0);
            return;
          }
        }
        iVar3 = lib::StaticArray<Entity*,16>::StaticArray<Entity*,16>_10();
        if (iVar3 != 0) {
          FUN_00718220(0x1000c,0,0,0);
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          uVar4 = 0x11;
        }
        else {
          uVar4 = 0x10;
        }
        FUN_00718220(uVar4,0,0,0);
      }
      iVar3 = FUN_00730fd0();
      if (iVar3 == 0) {
        iVar3 = FUN_00713730();
        if (iVar3 != 0) {
          FUN_00a81330();
          iVar3 = FUN_00a7c8a0();
          param_1[600] = *(int *)(iVar3 + 0x40);
          param_1[0x259] = *(int *)(iVar3 + 0x44);
          param_1[0x25a] = *(int *)(iVar3 + 0x48);
          param_1[0x25b] = *(int *)(iVar3 + 0x4c);
          param_1[0x3aa] = param_1[0x3aa] | 0x40000000;
          FUN_00718220(0x19,0,0,0);
          return;
        }
        if (param_1[0x187] != 0) {
          if (((param_1[0x2a1] != 0) &&
              (iVar3 = lib::Array<Entity*>::Array<Entity*>_5(), iVar3 != 0)) &&
             ((float)param_1[0x2a3] < 16.0)) {
            FUN_00718220(0x1000e,0,0,0);
            if ((float)param_1[0x2a3] < 12.25) {
              FUN_00718220(0x1000f,0,0,0);
            }
            if ((float)param_1[0x2a3] < 6.25) {
              FUN_00718220(0x1000d,0,0,0);
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
                FUN_00718220(0x11,0,0,0);
              }
              else {
                FUN_00718220(0x10,0,0,0);
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
                    /* WARNING: Could not recover jumptable at 0x0073a106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        else if ((((param_1[0x526] != 0) && ((float)param_1[0x2a3] < 20.25)) &&
                 (6.25 < (float)param_1[0x2a3])) && ((float)param_1[0x2a8] < 0.7853982)) {
          sVar2 = FUN_00dde2a0(0,1);
          if (sVar2 == 0) {
            FUN_00718220(0x1000d,0,0,0);
            return;
          }
          if (sVar2 == 1) {
            FUN_00718220(0x1000f,0,0,0);
            return;
          }
        }
      }
    }
    else {
      FUN_00718220(0x120000,0,0,0);
      param_1[0x6e3] = -1;
    }
  }
  return;
}

// 0073A110  FUN_0073a110  size=1049  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0073a19e) */

void __fastcall FUN_0073a110(int param_1)

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
    FUN_00718220(0x7000b,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
  if (((iVar3 == 0) || (*(int *)(param_1 + 0x14ac) != 1)) || (*(int *)(param_1 + 0x1488) == 0)) {
LAB_0073a212:
    if ((((64.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) &&
        (*(int *)(param_1 + 0x19c0) != 0)) ||
       ((144.0 < *(float *)(param_1 + 0xa8c) && (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    if ((((*(float *)(param_1 + 0xa8c) <= 25.0) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
        (*(int *)(param_1 + 0x14ac) != 1)) || (*(int *)(param_1 + 0x1488) == 0)) {
      if (((9.0 <= *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
         ((*(int *)(param_1 + 0x14ac) != 1 || (*(int *)(param_1 + 0x1488) == 0)))) {
        if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
          FUN_00718220(0x18,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) <= 2.1816616) {
          if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
            FUN_00718220(0x17,0,0,0);
          }
          if (-2.1816616 <= *(float *)(param_1 + 0xa9c)) {
            if ((*(float *)(param_1 + 0x920) < 0.0) || (*(int *)(param_1 + 0x19c0) == 0)) {
              sVar2 = FUN_00dde2d0(0,2);
              if (sVar2 == 0) {
                if (*(int *)(param_1 + 0x1080) != 0) {
                  FUN_00718220(0x10,0,0,0);
                  return;
                }
              }
              else if (sVar2 == 1) {
                if (*(int *)(param_1 + 0x1084) != 0) {
                  FUN_00718220(0x11,0,0,0);
                  return;
                }
              }
              else if ((sVar2 == 2) && (*(int *)(param_1 + 0x107c) != 0)) {
                FUN_00718220(0x12,0,0,0);
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
        FUN_00718220(0x16,0,0,0);
        return;
      }
      FUN_00718220(0x12,0,0,0);
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
      if (*(float *)(param_1 + 0xaa0) <= 1.0471976) goto LAB_0073a3ec;
      goto LAB_0073a3da;
    }
    FUN_00718220(0xf,0,0,0);
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
      goto LAB_0073a212;
    }
    FUN_00718220(0x10002,0,0,0);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    if (6.25 <= *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (*(float *)(param_1 + 0xaa0) <= 1.0471976) {
      return;
    }
LAB_0073a3da:
    uVar5 = 0x70008;
  }
  FUN_00718220(uVar5,0,0,0);
LAB_0073a3ec:
  FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
  return;
}

// 0073A530  FUN_0073a530  size=486  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0073a59f) */

void __fastcall FUN_0073a530(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) {
    iVar3 = lib::Array<Entity*>::Array<Entity*>_5();
    if ((iVar3 != 0) && ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))) {
      if (((float)param_1[0x2a3] < 25.0) && (uVar4 = FUN_00dde2a0(1,100), (uVar4 & 3) == 0)) {
        FUN_00718220(0x10002,0,0,0);
        if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
          FUN_00718220(0x70008,0,0,0);
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
        goto LAB_0073a6f2;
      }
    }
    else if (param_1[0x670] != 0) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x244] + fVar1);
    if (60.0 < (float)param_1[0x244] + fVar1) {
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) {
        if (param_1[0x421] != 0) {
          FUN_00718220(0x11,0,0,0);
        }
      }
      else if (param_1[0x420] != 0) {
        FUN_00718220(0x10,0,0,0);
      }
    }
  }
LAB_0073a6f2:
  if (16.0 <= (float)param_1[0x2a3]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073a714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0073A720  FUN_0073a720  size=213  [callgraph]
void __fastcall FUN_0073a720(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((((param_1[0x2a1] != 0) && (iVar1 = lib::Array<Entity*>::Array<Entity*>_5(), iVar1 != 0)) &&
        (param_1[0x52b] == 1)) && (param_1[0x522] != 0)) {
      if ((float)param_1[0x2a3] < 6.25) {
        if (1.0471976 < (float)param_1[0x2a8]) {
          FUN_00718220(0x70008,0,0,0);
        }
        FUN_00c27260(param_1[0x66d]);
        return;
      }
      FUN_00c27260(param_1[0x66d]);
    }
    if ((param_1[0x187] != 0) && (25.0 < (float)param_1[0x2a3])) {
                    /* WARNING: Could not recover jumptable at 0x0073a7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  if (param_1[0x41f] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073a7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0073A800  FUN_0073a800  size=256  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0073a86f) */

void __fastcall FUN_0073a800(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) &&
      (iVar1 = lib::Array<Entity*>::Array<Entity*>_5(), iVar1 != 0)) &&
     ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))) {
    if (((float)param_1[0x2a3] < 36.0) && (uVar2 = FUN_00dde2a0(1,100), (uVar2 & 3) == 0)) {
      FUN_00718220(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
        FUN_00718220(0x70008,0,0,0);
      }
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    FUN_00c27260(param_1[0x66d]);
  }
  if (param_1[0x420] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073a8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0073A900  FUN_0073a900  size=256  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0073a96f) */

void __fastcall FUN_0073a900(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1[0x187] != 0) && (param_1[0x2a1] != 0)) &&
      (iVar1 = lib::Array<Entity*>::Array<Entity*>_5(), iVar1 != 0)) &&
     ((param_1[0x52b] == 1 && (param_1[0x522] != 0)))) {
    if (((float)param_1[0x2a3] < 36.0) && (uVar2 = FUN_00dde2a0(1,100), (uVar2 & 3) == 0)) {
      FUN_00718220(0x10002,0,0,0);
      if (((float)param_1[0x2a3] < 6.25) && (1.0471976 < (float)param_1[0x2a8])) {
        FUN_00718220(0x70008,0,0,0);
      }
      FUN_00c27260(param_1[0x66d]);
      return;
    }
    FUN_00c27260(param_1[0x66d]);
  }
  if (param_1[0x421] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073a9fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0073AA10  EmC010::vf32C  size=975  [class]
undefined4 __fastcall EmC010::vf32C(int *param_1)

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
                if ((*(byte *)(param_1 + 0x3ab) & 0x80) != 0) {
                  param_1[0x2fa] = 0;
                }
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
              iVar14 = FUN_00713f30(local_160);
              if (iVar14 == 0) {
                iVar14 = FUN_00a8c760(0x34);
                if ((iVar14 == 0) && (param_1[0x186] != 0x100001)) {
                  if (param_1[0x139] == 0) {
                    iVar14 = FUN_00416910(6);
                    if ((iVar14 != 0) && ((uStack_d0 & 0x10000) != 0)) {
                      param_1[0x3aa] = param_1[0x3aa] | 0x1000;
                    }
                    uVar18 = FUN_00731310(local_160);
                    if (param_1[0x286] != 0) {
                      LeaveCriticalSection(lpCriticalSection);
                    }
                    return uVar18;
                  }
                  FUN_0072edc0(local_160);
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

// 0073ADE0  FUN_0073ade0  size=938  [between]
/* WARNING: Switch with 1 destination removed at 0x0073afcd : 19 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0073b11d : 11 cases all go to same destination */

void __fastcall FUN_0073ade0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 2:
      FUN_007201c0();
      FUN_007132c0();
      return;
    case 3:
      FUN_00720330();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 8:
      FUN_00709400();
      FUN_007132c0();
      return;
    case 9:
      FUN_00709610();
      FUN_007132c0();
      return;
    case 10:
      FUN_0071fde0();
      FUN_007132c0();
      return;
    case 0xb:
      FUN_00720e90();
      FUN_007132c0();
      return;
    case 0xc:
      FUN_00720f30();
      FUN_007132c0();
      return;
    case 0xd:
      FUN_0070f640();
      FUN_007132c0();
      return;
    case 0xe:
      FUN_00732db0();
      FUN_007132c0();
      return;
    case 0xf:
      FUN_00733410();
      FUN_007132c0();
      return;
    case 0x10:
      FUN_00733850();
      FUN_007132c0();
      return;
    case 0x11:
      FUN_00733c60();
      FUN_007132c0();
      return;
    case 0x12:
      FUN_00734070();
      FUN_007132c0();
      return;
    case 0x13:
      FUN_00734420();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x16:
      FUN_00721660();
      FUN_007132c0();
      return;
    case 0x17:
      FUN_00721700();
      FUN_007132c0();
      return;
    case 0x18:
      FUN_007217a0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else if (0x20009 < iVar1) {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_0071a3a0();
        FUN_007132c0();
        return;
      }
      FUN_007132c0();
      return;
    }
    if (iVar1 < 0xb0001) {
      switch(iVar1) {
      case 0xa0001:
        FUN_0071a740();
        FUN_007132c0();
        return;
      default:
        goto switchD_0073ae0f_caseD_15;
      case 0xa0004:
        FUN_0070eab0();
        FUN_007132c0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0071b350();
        FUN_007132c0();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0070ead0();
        FUN_007132c0();
        return;
      case 0xa0007:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0071b6c0();
        FUN_007132c0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0070eaf0();
        FUN_007132c0();
        return;
      case 0xa0009:
        FUN_0071b870();
        FUN_007132c0();
        return;
      case 0xa000a:
        FUN_0071bb40();
        FUN_007132c0();
        return;
      case 0xa000c:
        FUN_0071bfa0();
        FUN_007132c0();
        return;
      case 0xa0013:
      case 0xa0019:
        FUN_0070eb60();
        FUN_007132c0();
        return;
      case 0xa0014:
        goto switchD_0073b01f_caseD_a0014;
      case 0xa0022:
        FUN_007260f0();
        FUN_007132c0();
        return;
      }
    }
    if (0x100000 < iVar1) {
      if (iVar1 < 0x110001) {
        if (iVar1 != 0x110000) {
          switch(iVar1) {
          case 0x100003:
            FUN_0071f3b0();
            FUN_007132c0();
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
            goto switchD_0073b01f_caseD_a0014;
          default:
            goto switchD_0073ae0f_caseD_15;
          }
        }
        if (iVar1 != 0x120000) {
          FUN_007132c0();
          return;
        }
switchD_0073b01f_caseD_a0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
  }
switchD_0073ae0f_caseD_15:
  FUN_007132c0();
  return;
}

// 0073B2E0  FUN_0073b2e0  size=428  [between]
void __fastcall FUN_0073b2e0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0073b2f5;
  FUN_00ac80a0(0x3fc00000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_00734940();
    if (iVar3 != 0) {
      return;
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
    iVar3 = FUN_00a82e80();
    if (((iVar3 != 0) && (param_1[0x670] == 0)) && (12.25 < (float)param_1[0x2a3])) {
      FUN_00718220(0x14,0,0,0);
      return;
    }
  }
LAB_0073b2f5:
  if ((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d8efa35,0);
  }
  return;
}

// 0073B490  FUN_0073b490  size=562  [between]
void __fastcall FUN_0073b490(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0073b4a5;
  FUN_00ac80a0(0x3fc00000,0x3f800000);
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_00734db0();
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x3aa] = param_1[0x3aa] & 0xbfffffff;
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_00734db0();
    if (iVar3 != 0) {
      return;
    }
    if (((64.0 < (float)param_1[0x2a3]) && ((float)param_1[0x2a8] < 0.5235988)) &&
       (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
      FUN_00718220(0x13,0,0,0);
      return;
    }
  }
LAB_0073b4a5:
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

// 0073B6D0  FUN_0073b6d0  size=707  [between]
void __fastcall FUN_0073b6d0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000b) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 2:
      FUN_007201c0();
      FUN_007132c0();
      return;
    case 3:
      FUN_00720330();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 8:
      FUN_00709400();
      FUN_007132c0();
      return;
    case 9:
      FUN_00709610();
      FUN_007132c0();
      return;
    case 10:
      FUN_0071fde0();
      FUN_007132c0();
      return;
    case 0xb:
      FUN_00724700();
      FUN_007132c0();
      return;
    case 0xc:
      FUN_00720f30();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0071a3a0();
      FUN_007132c0();
      return;
    }
    if (iVar1 < 0x20001) {
      if (iVar1 == 0x20000) {
        FUN_00735760();
        FUN_007132c0();
        return;
      }
    }
    else {
      switch(iVar1) {
      case 0x20001:
      case 0x20002:
      case 0x20003:
      case 0x20004:
        FUN_0072fee0();
        FUN_007132c0();
        return;
      case 0x20005:
        FUN_00735c10();
        FUN_007132c0();
        return;
      case 0x20006:
      case 0x20007:
      case 0x20008:
        FUN_007247d0();
        FUN_007132c0();
        return;
      }
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0001:
      FUN_0071a740();
      FUN_007132c0();
      return;
    case 0xa0004:
      FUN_0070eab0();
      FUN_007132c0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b350();
      FUN_007132c0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070ead0();
      FUN_007132c0();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b6c0();
      FUN_007132c0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070eaf0();
      FUN_007132c0();
      return;
    case 0xa0009:
      FUN_0071b870();
      FUN_007132c0();
      return;
    case 0xa000a:
      FUN_0071bb40();
      FUN_007132c0();
      return;
    case 0xa000c:
      FUN_0071bfa0();
      FUN_007132c0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0070eb60();
      break;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_007132c0();
      return;
    }
  }
  FUN_007132c0();
  return;
}

// 0073BAA0  FUN_0073baa0  size=679  [between]
void __fastcall FUN_0073baa0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x1000d) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 2:
      FUN_007201c0();
      FUN_007132c0();
      return;
    case 3:
      FUN_00720330();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 10:
      FUN_0071fde0();
      FUN_007132c0();
      return;
    case 0xb:
      FUN_00725460();
      FUN_007132c0();
      return;
    case 0xc:
      FUN_00720f30();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0071a3a0();
      FUN_007132c0();
      return;
    }
    switch(iVar1) {
    case 0x30000:
      FUN_00735f20();
      FUN_007132c0();
      return;
    case 0x30001:
    case 0x30002:
    case 0x30003:
    case 0x30004:
      FUN_00725500();
      FUN_007132c0();
      return;
    case 0x30005:
      FUN_007363c0();
      FUN_007132c0();
      return;
    case 0x30006:
    case 0x30007:
    case 0x30008:
      FUN_007256a0();
      FUN_007132c0();
      return;
    case 0x3000b:
      FUN_00725a80();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0001:
      FUN_0071a740();
      FUN_007132c0();
      return;
    case 0xa0004:
      FUN_0070eab0();
      FUN_007132c0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b350();
      FUN_007132c0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070ead0();
      FUN_007132c0();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b6c0();
      FUN_007132c0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070eaf0();
      FUN_007132c0();
      return;
    case 0xa0009:
      FUN_0071b870();
      FUN_007132c0();
      return;
    case 0xa000a:
      FUN_0071bb40();
      FUN_007132c0();
      return;
    case 0xa000c:
      FUN_0071bfa0();
      FUN_007132c0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0070eb60();
      break;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_007132c0();
      return;
    }
  }
  FUN_007132c0();
  return;
}

// 0073BE40  FUN_0073be40  size=827  [between]
/* WARNING: Switch with 1 destination removed at 0x0073bfe5 : 20 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0073c118 : 11 cases all go to same destination */

void __fastcall FUN_0073be40(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10001) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 2:
      FUN_007201c0();
      FUN_007132c0();
      return;
    case 3:
      FUN_00720330();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 10:
      FUN_0071fde0();
      FUN_007132c0();
      return;
    case 0xb:
      FUN_00720e90();
      FUN_007132c0();
      return;
    case 0xc:
      FUN_00720f30();
      FUN_007132c0();
      return;
    case 0xd:
      FUN_0070f640();
      FUN_007132c0();
      return;
    case 0xe:
      FUN_00736670();
      FUN_007132c0();
      return;
    case 0xf:
      FUN_00736a90();
      FUN_007132c0();
      return;
    case 0x10:
      FUN_00736d50();
      FUN_007132c0();
      return;
    case 0x11:
      FUN_00737030();
      FUN_007132c0();
      return;
    case 0x12:
      FUN_00737310();
      FUN_007132c0();
      return;
    case 0x13:
      FUN_00737580();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0071a3a0();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0001:
      FUN_0071a740();
      FUN_007132c0();
      return;
    case 0xa0004:
      FUN_0070eab0();
      FUN_007132c0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b350();
      FUN_007132c0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070ead0();
      FUN_007132c0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070eaf0();
      FUN_007132c0();
      return;
    case 0xa0009:
      FUN_0071b870();
      FUN_007132c0();
      return;
    case 0xa000a:
      FUN_0071bb40();
      FUN_007132c0();
      return;
    case 0xa000c:
      FUN_0071bfa0();
      FUN_007132c0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0070eb60();
      FUN_007132c0();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_007132c0();
      return;
    case 0xa0022:
      FUN_007260f0();
      FUN_007132c0();
      return;
    }
  }
  else if (0xd0000 < iVar1) {
    if (iVar1 < 0x110001) {
      if (((iVar1 != 0x110000) && (iVar1 < 0x100001)) && (iVar1 != 0x100000)) {
        FUN_007132c0();
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
          goto switchD_0073c15e_caseD_120001;
        default:
          goto switchD_0073be76_caseD_8;
        }
      }
      if (iVar1 != 0x120000) {
        FUN_007132c0();
        return;
      }
switchD_0073c15e_caseD_120001:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
switchD_0073be76_caseD_8:
  FUN_007132c0();
  return;
}

// 0073C2A0  FUN_0073c2a0  size=832  [between]
/* WARNING: Switch with 1 destination removed at 0x0073c445 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0073c595 : 11 cases all go to same destination */

void __fastcall FUN_0073c2a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10009) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 2:
      FUN_007201c0();
      FUN_007132c0();
      return;
    case 3:
      FUN_00720330();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 10:
      FUN_0071fde0();
      FUN_007132c0();
      return;
    case 0xb:
      FUN_00720e90();
      FUN_007132c0();
      return;
    case 0xc:
      FUN_00720f30();
      FUN_007132c0();
      return;
    case 0xd:
      FUN_0070f640();
      FUN_007132c0();
      return;
    case 0xe:
      FUN_007378d0();
      FUN_007132c0();
      return;
    case 0xf:
      FUN_00737c00();
      FUN_007132c0();
      return;
    case 0x10:
      FUN_00737e40();
      FUN_007132c0();
      return;
    case 0x11:
      FUN_007380b0();
      FUN_007132c0();
      return;
    case 0x12:
      FUN_00738320();
      FUN_007132c0();
      return;
    case 0x13:
      FUN_00738510();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0071a3a0();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    switch(iVar1) {
    case 0xa0001:
      FUN_0071a740();
      FUN_007132c0();
      return;
    case 0xa0004:
      FUN_0070eab0();
      FUN_007132c0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b350();
      FUN_007132c0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070ead0();
      FUN_007132c0();
      return;
    case 0xa0007:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b6c0();
      FUN_007132c0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070eaf0();
      FUN_007132c0();
      return;
    case 0xa0009:
      FUN_0071b870();
      FUN_007132c0();
      return;
    case 0xa000a:
      FUN_0071bb40();
      FUN_007132c0();
      return;
    case 0xa000c:
      FUN_0071bfa0();
      FUN_007132c0();
      return;
    case 0xa0013:
    case 0xa0019:
      FUN_0070eb60();
      FUN_007132c0();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_007132c0();
      return;
    case 0xa0022:
      FUN_007260f0();
      FUN_007132c0();
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
        goto switchD_0073c5c3_caseD_120001;
      default:
        goto switchD_0073c2d6_caseD_8;
      }
    }
    if (iVar1 != 0x120000) {
      FUN_007132c0();
      return;
    }
switchD_0073c5c3_caseD_120001:
    (**(code **)(*param_1 + 0x1d4))(1);
  }
switchD_0073c2d6_caseD_8:
  FUN_007132c0();
  return;
}

// 0073C700  FUN_0073c700  size=800  [between]
/* WARNING: Switch with 1 destination removed at 0x0073c9b3 : 11 cases all go to same destination */

void __fastcall FUN_0073c700(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x10009) {
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 2:
      FUN_007201c0();
      FUN_007132c0();
      return;
    case 3:
      FUN_00720330();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 10:
      FUN_0071fde0();
      FUN_007132c0();
      return;
    case 0xb:
      FUN_00720e90();
      FUN_007132c0();
      return;
    case 0xc:
      FUN_00720f30();
      FUN_007132c0();
      return;
    case 0xd:
      FUN_0070f640();
      FUN_007132c0();
      return;
    case 0xe:
      FUN_007387e0();
      FUN_007132c0();
      return;
    case 0xf:
      FUN_00738db0();
      FUN_007132c0();
      return;
    case 0x10:
      FUN_007391e0();
      FUN_007132c0();
      return;
    case 0x11:
      FUN_007395e0();
      FUN_007132c0();
      return;
    case 0x12:
      FUN_007399e0();
      FUN_007132c0();
      return;
    case 0x13:
      FUN_00739d50();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else {
    if (iVar1 < 0xa0001) {
      if (iVar1 == 0xa0000) {
        FUN_0071a3a0();
        FUN_007132c0();
        return;
      }
      FUN_007132c0();
      return;
    }
    if (iVar1 < 0xb0001) {
      switch(iVar1) {
      case 0xa0001:
        FUN_0071a740();
        FUN_007132c0();
        return;
      default:
        goto switchD_0073c736_caseD_8;
      case 0xa0004:
        FUN_0070eab0();
        FUN_007132c0();
        return;
      case 0xa0005:
      case 0xa0012:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0071b350();
        FUN_007132c0();
        return;
      case 0xa0006:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0070ead0();
        FUN_007132c0();
        return;
      case 0xa0008:
        (**(code **)(*param_1 + 0x1d4))(1);
        FUN_0070eaf0();
        FUN_007132c0();
        return;
      case 0xa0009:
        FUN_0071b870();
        FUN_007132c0();
        return;
      case 0xa000a:
        FUN_0071bb40();
        FUN_007132c0();
        return;
      case 0xa000c:
        FUN_0071bfa0();
        FUN_007132c0();
        return;
      case 0xa0013:
      case 0xa0019:
        FUN_0070eb60();
        FUN_007132c0();
        return;
      case 0xa0014:
        goto switchD_0073c8d2_caseD_a0014;
      case 0xa0022:
        FUN_007260f0();
        FUN_007132c0();
        return;
      }
    }
    if (0x100000 < iVar1) {
      if (iVar1 < 0x110001) {
        if (iVar1 != 0x110000) {
          switch(iVar1) {
          case 0x100003:
            FUN_0071f3b0();
            FUN_007132c0();
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
            goto switchD_0073c8d2_caseD_a0014;
          default:
            goto switchD_0073c736_caseD_8;
          }
        }
        if (iVar1 != 0x120000) {
          FUN_007132c0();
          return;
        }
switchD_0073c8d2_caseD_a0014:
        (**(code **)(*param_1 + 0x1d4))(1);
      }
    }
  }
switchD_0073c736_caseD_8:
  FUN_007132c0();
  return;
}

// 0073CB40  FUN_0073cb40  size=620  [between]
void __fastcall FUN_0073cb40(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x70001) {
    if (iVar1 == 0x70000) {
      FUN_0072a2f0();
      FUN_007132c0();
      return;
    }
    switch(iVar1) {
    case 0:
      FUN_0071f900();
      FUN_007132c0();
      return;
    case 1:
      FUN_0071fbb0();
      FUN_007132c0();
      return;
    case 4:
      FUN_00720450();
      FUN_007132c0();
      return;
    case 5:
      FUN_00720880();
      FUN_007132c0();
      return;
    case 6:
      FUN_007208c0();
      FUN_007132c0();
      return;
    case 7:
      FUN_0071fe80();
      FUN_007132c0();
      return;
    case 0xe:
      FUN_0073a110();
      FUN_007132c0();
      return;
    case 0xf:
      FUN_0073a530();
      FUN_007132c0();
      return;
    case 0x10:
      FUN_0073a800();
      FUN_007132c0();
      return;
    case 0x11:
      FUN_0073a900();
      FUN_007132c0();
      return;
    case 0x12:
      FUN_0073a720();
      FUN_007132c0();
      return;
    case 0x13:
      FUN_0072a350();
      FUN_007132c0();
      return;
    case 0x14:
      FUN_007347c0();
      FUN_007132c0();
      return;
    case 0x1e:
      FUN_00723bd0();
      FUN_007132c0();
      return;
    case 0x22:
      FUN_00723db0();
      FUN_007132c0();
      return;
    case 0x25:
      FUN_0070a340();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0071a3a0();
      FUN_007132c0();
      return;
    }
    switch(iVar1) {
    case 0x7000b:
      FUN_00717450();
      FUN_007132c0();
      return;
    }
  }
  else if (iVar1 < 0xb0005) {
    switch(iVar1) {
    case 0xa0001:
      FUN_0071a740();
      FUN_007132c0();
      return;
    case 0xa0004:
      FUN_0070eab0();
      FUN_007132c0();
      return;
    case 0xa0005:
    case 0xa0012:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0071b350();
      FUN_007132c0();
      return;
    case 0xa0006:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070ead0();
      FUN_007132c0();
      return;
    case 0xa0008:
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_0070eaf0();
      FUN_007132c0();
      return;
    case 0xa0009:
      FUN_0071b870();
      FUN_007132c0();
      return;
    case 0xa000a:
      FUN_0071bb40();
      FUN_007132c0();
      return;
    case 0xa000c:
      FUN_0071bfa0();
      FUN_007132c0();
      return;
    case 0xa0013:
      FUN_0070eb60();
      FUN_007132c0();
      return;
    case 0xa0014:
      (**(code **)(*param_1 + 0x1d4))(1);
    }
  }
  FUN_007132c0();
  return;
}

// 0073CE80  FUN_0073ce80  size=313  [between]
void __fastcall FUN_0073ce80(int *param_1)

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
      FUN_00730150();
    }
    else if (param_1[0x605] == 2) {
      FUN_00730220();
    }
    else {
      (**(code **)(*param_1 + 0x1f0))(1);
      uVar1 = param_1[0x3ab];
      if ((uVar1 & 0x2000) == 0) {
        if ((uVar1 & 0x8000) == 0) {
          if ((char)uVar1 < '\0') {
            FUN_00731060();
          }
          else {
            if (param_1[0x52b] == 0) {
              FUN_0073ade0();
            }
            if (param_1[0x52b] == 1) {
              FUN_0073ade0();
            }
            if (param_1[0x52b] == 2) {
              FUN_0073b6d0();
            }
            if (param_1[0x52b] == 3) {
              FUN_0073baa0();
            }
            if (param_1[0x52b] == 6) {
              FUN_0073c700();
            }
            if (param_1[0x52b] == 7) {
              FUN_0073be40();
            }
            if (param_1[0x52b] == 5) {
              FUN_0073c2a0();
            }
          }
        }
        else {
          FUN_0073cb40();
        }
      }
      else {
        param_1[0x3a9] = param_1[0x3a9] | 0x1000000;
        FUN_007365e0();
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
    }
  }
  return;
}

// 0073CFD0  FUN_0073cfd0  size=3230  [between]
void __fastcall FUN_0073cfd0(int *param_1)

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
        FUN_0071f9a0();
        break;
      case 1:
        FUN_0071fc20();
        break;
      case 2:
        FUN_00720210();
        break;
      case 3:
        FUN_00720380();
        break;
      case 4:
        FUN_00720500();
        break;
      case 5:
        FUN_007096e0();
        break;
      case 6:
        FUN_00720a00();
        break;
      case 7:
        FUN_0071ff80();
        break;
      case 8:
        FUN_007094d0();
        break;
      case 9:
        FUN_0072f810();
        break;
      case 10:
        FUN_007092a0();
        break;
      case 0xb:
        FUN_007098d0();
        break;
      case 0xc:
        FUN_0070f3a0();
        break;
      case 0xd:
        FUN_00715850();
        break;
      case 0xe:
        FUN_00709e00();
        break;
      case 0xf:
        FUN_00709ef0();
        break;
      case 0x10:
        FUN_007212e0();
        break;
      case 0x11:
        FUN_007214a0();
        break;
      case 0x12:
        FUN_0070a070();
        break;
      case 0x13:
        FUN_007159d0();
        break;
      case 0x14:
        FUN_00715b40();
        break;
      case 0x15:
        FUN_0070f6c0();
        break;
      case 0x16:
        FUN_0073b2e0();
        break;
      case 0x17:
        FUN_00734af0();
        break;
      case 0x18:
        FUN_00734c50();
        break;
      case 0x19:
        FUN_0073b490();
        break;
      case 0x1a:
        FUN_00734ff0();
        break;
      case 0x1b:
        FUN_00735160();
        break;
      case 0x1c:
        FUN_007352d0();
        break;
      case 0x1d:
        FUN_007353e0();
        break;
      case 0x1e:
      case 0x25:
        FUN_00715e80();
        break;
      case 0x1f:
      case 0x23:
        FUN_007235f0();
        break;
      case 0x20:
        FUN_00723950();
        break;
      case 0x21:
        FUN_00723c70();
        break;
      case 0x22:
        FUN_00723e30();
        break;
      case 0x24:
        FUN_007224f0();
        break;
      case 0x26:
        FUN_00722660();
        break;
      case 0x27:
        FUN_00722860();
      }
      goto switchD_0073d00c_default;
    }
switchD_0073d206_caseD_10005:
    FUN_00722950();
  }
  else {
    if (0x20000 < iVar1) {
      if (iVar1 < 0x30001) {
        if (iVar1 == 0x30000) {
          FUN_0070ae10();
        }
        else {
          switch(iVar1) {
          case 0x20001:
          case 0x20002:
          case 0x20003:
          case 0x20004:
            FUN_0070aac0();
            break;
          case 0x20005:
            FUN_0070ac80();
            break;
          case 0x20006:
          case 0x20007:
          case 0x20008:
            FUN_00724810();
            break;
          case 0x20009:
            FUN_00724930();
            break;
          case 0x2000a:
            FUN_00724a80();
            break;
          case 0x2000b:
            FUN_00724c20();
            break;
          case 0x2000c:
            FUN_00724d70();
            break;
          case 0x2000e:
            FUN_00724eb0();
          }
        }
      }
      else if (iVar1 < 0x40001) {
        if (iVar1 == 0x40000) {
          FUN_0072a080();
        }
        else {
          switch(iVar1) {
          case 0x30001:
          case 0x30002:
          case 0x30003:
          case 0x30004:
            FUN_0070af20();
            break;
          case 0x30005:
            FUN_0070b0c0();
            break;
          case 0x30006:
          case 0x30007:
          case 0x30008:
            FUN_007256d0();
            break;
          case 0x30009:
            FUN_007257f0();
            break;
          case 0x3000a:
            FUN_00725940();
            break;
          case 0x3000b:
            FUN_00725c20();
            break;
          case 0x3000c:
            FUN_00725f50();
          }
        }
      }
      else if (iVar1 < 0xb0001) {
        if (iVar1 == 0xb0000) {
          FUN_0071d430();
        }
        else if (iVar1 < 0xa0001) {
          if (iVar1 == 0xa0000) {
            FUN_0072eea0();
          }
          else if (iVar1 < 0x60001) {
            if (iVar1 == 0x60000) {
              FUN_00727820();
            }
            else if (iVar1 < 0x50001) {
              if (iVar1 == 0x50000) {
                FUN_00728ab0();
              }
              else if (iVar1 == 0x40001) {
                FUN_0072a1c0();
              }
            }
            else {
              switch(iVar1) {
              case 0x50001:
                FUN_00716c30();
                break;
              case 0x50002:
                FUN_0070be20();
                break;
              case 0x50003:
                FUN_00728d30();
                break;
              case 0x50004:
                FUN_0070bf10();
                break;
              case 0x50005:
                FUN_0070c000();
                break;
              case 0x50006:
                FUN_00729020();
                break;
              case 0x50007:
                FUN_0070c0f0();
              }
            }
          }
          else if (iVar1 < 0x70001) {
            if (iVar1 == 0x70000) {
              FUN_0070d730();
            }
            else {
              switch(iVar1) {
              case 0x60001:
                FUN_0070b890();
                break;
              case 0x60002:
                FUN_0070b980();
                break;
              case 0x60003:
                FUN_00727aa0();
                break;
              case 0x60004:
                FUN_0070baa0();
                break;
              case 0x60005:
                FUN_0070bb40();
                break;
              case 0x60006:
                FUN_00727ca0();
                break;
              case 0x60007:
                FUN_00710f30();
                break;
              case 0x60008:
                FUN_00711030();
                break;
              case 0x60009:
              case 0x6000a:
                FUN_0070bc10();
                break;
              case 0x6000b:
                FUN_00727eb0();
                break;
              case 0x6000c:
                FUN_00728180();
                break;
              case 0x6000d:
                FUN_00728340();
                break;
              case 0x6000e:
                FUN_00728460();
                break;
              case 0x6000f:
                FUN_00728570();
                break;
              case 0x60010:
                FUN_007285c0();
                break;
              case 0x60011:
                FUN_00711110();
                break;
              case 0x60012:
                FUN_007286f0();
              }
            }
          }
          else {
            switch(iVar1) {
            case 0x70008:
              FUN_00711a20();
              break;
            case 0x70009:
              FUN_0070d7c0();
              break;
            case 0x7000a:
              FUN_00711b80();
              break;
            case 0x7000b:
              FUN_0072a4a0();
              break;
            case 0x7000c:
              FUN_0072a620();
              break;
            case 0x7000d:
              FUN_0070d8a0();
            }
          }
        }
        else {
          switch(iVar1) {
          case 0xa0001:
            FUN_0071a8b0();
            break;
          case 0xa0002:
            FUN_0071aad0();
            break;
          case 0xa0003:
            FUN_0071ade0();
            break;
          case 0xa0004:
            FUN_0071af50();
            break;
          case 0xa0005:
          case 0xa0012:
            FUN_0071b3b0();
            break;
          case 0xa0006:
            FUN_0071b590();
            break;
          case 0xa0007:
            FUN_0071b710();
            break;
          case 0xa0008:
            FUN_0071b810();
            break;
          case 0xa0009:
            FUN_0071b9e0();
            break;
          case 0xa000a:
            FUN_0071bcd0();
            break;
          case 0xa000b:
            FUN_0071bec0();
            break;
          case 0xa000c:
            FUN_0071c110();
            break;
          case 0xa000d:
            FUN_0071c220();
            break;
          case 0xa000e:
            FUN_00714c30();
            break;
          case 0xa000f:
            FUN_0071c560();
            break;
          case 0xa0010:
          case 0xa0011:
            FUN_0071c650();
            break;
          case 0xa0013:
          case 0xa0019:
            FUN_0071c840();
            break;
          case 0xa0014:
            FUN_0071cbc0();
            break;
          case 0xa0015:
            FUN_00714ce0();
            break;
          case 0xa0016:
            FUN_0071cce0();
            break;
          case 0xa0017:
            FUN_0071cdc0();
            break;
          case 0xa0018:
            FUN_0071ce80();
            break;
          case 0xa001a:
            FUN_0071cf40();
            break;
          case 0xa001b:
          case 0xa001c:
            FUN_0071d1c0();
            break;
          case 0xa001d:
            FUN_0070ec20();
            break;
          case 0xa001e:
            FUN_0070edb0();
            break;
          case 0xa001f:
            FUN_0070ee50();
            break;
          case 0xa0021:
            FUN_0070b2f0();
            break;
          case 0xa0022:
            FUN_007101c0();
            break;
          case 0xa0023:
            FUN_00717270();
          }
        }
      }
      else if (iVar1 < 0xd0001) {
        if (iVar1 == 0xd0000) {
          FUN_00716de0();
        }
        else {
          switch(iVar1) {
          case 0xb0001:
            FUN_0071d860();
            break;
          case 0xb0002:
            FUN_0071da50();
            break;
          case 0xb0003:
            FUN_00714ed0();
            break;
          case 0xb0004:
            FUN_0071daf0();
            break;
          case 0xb0005:
          case 0xb0006:
            FUN_007261a0();
            break;
          case 0xb0007:
            FUN_00726890();
            break;
          case 0xb000a:
            FUN_007150b0();
            break;
          case 0xb000b:
            FUN_0070ed40();
          }
        }
      }
      else if (iVar1 < 0x10000001) {
        if (iVar1 == 0x10000000) {
          FUN_0070c250();
        }
        else if (iVar1 < 0x110001) {
          if (iVar1 == 0x110000) {
            FUN_00709ba0();
          }
          else if (iVar1 < 0x100001) {
            if (iVar1 == 0x100000) {
              FUN_0071ecb0();
            }
            else if (iVar1 == 0xd0001) {
              FUN_00716e90();
            }
            else if (iVar1 == 0xd0002) {
              FUN_00729ea0();
            }
            else if (iVar1 == 0xd0003) {
              FUN_00729f90();
            }
          }
          else {
            switch(iVar1) {
            case 0x100001:
              FUN_0071edc0();
              break;
            case 0x100002:
              FUN_0071f0a0();
              break;
            case 0x100003:
              FUN_007091d0();
              break;
            case 0x100004:
              FUN_0071f650();
              break;
            case 0x100005:
              FUN_0070f1e0();
            }
          }
        }
        else if (iVar1 < 0x120001) {
          if (iVar1 == 0x120000) {
            FUN_00721950();
          }
          else if (iVar1 == 0x110001) {
            FUN_00709c80();
          }
          else if (iVar1 == 0x110002) {
            FUN_00721030();
          }
          else if (iVar1 == 0x110003) {
            FUN_007211a0();
          }
        }
        else {
          switch(iVar1) {
          case 0x120001:
          case 0x120002:
          case 0x120003:
            FUN_00721b80();
            break;
          case 0x120004:
            FUN_00722080();
          }
        }
      }
      else {
        switch(iVar1) {
        case 0x10000001:
          FUN_0070c2c0();
          break;
        case 0x10000002:
          FUN_0070c330();
          break;
        case 0x10000003:
          FUN_0070c430();
          break;
        case 0x10000005:
          FUN_00716d00();
          break;
        case 0x10000006:
        case 0x10000007:
        case 0x10000008:
        case 0x10000009:
          FUN_007111e0();
          break;
        case 0x1000000a:
        case 0x1000000b:
        case 0x1000000c:
        case 0x1000000d:
          FUN_00711360();
          break;
        case 0x1000000e:
          FUN_0070cd40();
          break;
        case 0x1000000f:
          FUN_007115c0();
          break;
        case 0x10000010:
        case 0x10000011:
          FUN_007116a0();
          break;
        case 0x10000012:
        case 0x10000013:
          FUN_007117a0();
          break;
        case 0x10000014:
        case 0x10000015:
          FUN_00729390();
          break;
        case 0x10000016:
        case 0x10000017:
        case 0x10000018:
        case 0x10000019:
          FUN_0070c650();
          break;
        case 0x1000001a:
          FUN_0070c840();
          break;
        case 0x1000001b:
        case 0x1000001c:
        case 0x1000001d:
        case 0x1000001e:
          FUN_0070c6e0();
          break;
        case 0x1000001f:
          FUN_0070caf0();
          break;
        case 0x10000020:
          FUN_0070cb70();
          break;
        case 0x10000021:
          FUN_0070cbe0();
          break;
        case 0x10000024:
        case 0x10000029:
          FUN_007298c0();
          break;
        case 0x10000025:
          FUN_0070ca70();
          break;
        case 0x10000026:
          FUN_007294b0();
          break;
        case 0x10000027:
          FUN_00729600();
          break;
        case 0x10000028:
          FUN_00711930();
          break;
        case 0x1000002a:
          FUN_00729730();
          break;
        case 0x1000002b:
          FUN_0070c8e0();
          break;
        case 0x1000002c:
          FUN_0070c9b0();
        }
      }
      goto switchD_0073d00c_default;
    }
    if (iVar1 == 0x20000) {
      FUN_0070a9b0();
      goto switchD_0073d00c_default;
    }
    switch(iVar1) {
    case 0x10001:
      FUN_007354d0();
      break;
    case 0x10002:
    case 0x10003:
      FUN_00722b60();
      break;
    case 0x10004:
      FUN_00722e30();
      break;
    case 0x10005:
      goto switchD_0073d206_caseD_10005;
    case 0x10006:
      FUN_0070f960();
      break;
    case 0x10007:
      FUN_00715cd0();
      break;
    case 0x10008:
      FUN_00723020();
      break;
    case 0x10009:
      FUN_0070fbf0();
      break;
    case 0x1000a:
      FUN_00723190();
      break;
    case 0x1000b:
      FUN_0072fa00();
      break;
    case 0x1000c:
      FUN_007232b0();
      break;
    case 0x1000d:
      FUN_0070d510();
      break;
    case 0x1000e:
      FUN_0070d5c0();
      break;
    case 0x1000f:
      FUN_0070d670();
      break;
    case 0x10010:
    case 0x10011:
    case 0x10012:
    case 0x10013:
      FUN_00729b20();
      break;
    case 0x10014:
      FUN_0070d280();
      break;
    case 0x10015:
      FUN_0070ce80();
      break;
    case 0x10016:
      FUN_00716fb0();
      break;
    case 0x10017:
      FUN_00717060();
      break;
    case 0x10018:
      FUN_00717110();
      break;
    case 0x10019:
      FUN_007171c0();
      break;
    case 0x1001a:
      FUN_0070c1a0();
    }
  }
switchD_0073d00c_default:
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
  if (param_1[300] == 0x2c160) {
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

// 0073E000  EmC010::vf4C  size=1402  [class]
void __fastcall EmC010::vf4C(int param_1)

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
      FUN_0073ce80();
    }
    FUN_0073cfd0();
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
        FUN_00718570();
      }
      else {
        FUN_007184b0();
      }
      *(undefined1 *)(param_1 + 0x1038) = 0;
    }
    FUN_007245f0();
    FUN_00724650();
  }
  return;
}

// 00AB1E60  EmC010::vf04  size=6  [class]
undefined * EmC010::vf04(void)

{
  return &DAT_01b357a0;
}

// 00AB1E70  EmC010::vf17C  size=6  [class]
undefined4 EmC010::vf17C(void)

{
  return 1;
}

// 00AB1E80  EmC010::vf180  size=6  [class]
undefined4 EmC010::vf180(void)

{
  return 1;
}

// 00AB1E90  EmC010::vf140  size=39  [class]
float10 EmC010::vf140(void)

{
  int iVar1;
  
  iVar1 = FUN_007136c0();
  if (iVar1 == 0) {
    iVar1 = FUN_007136e0();
    if (iVar1 == 0) {
      return (float10)4.0;
    }
  }
  return (float10)4.8;
}

// 00AB1EC0  EmC010::vf144  size=39  [class]
float10 EmC010::vf144(void)

{
  int iVar1;
  
  iVar1 = FUN_007136c0();
  if (iVar1 == 0) {
    iVar1 = FUN_007136e0();
    if (iVar1 == 0) {
      return (float10)4.1;
    }
  }
  return (float10)4.92;
}

// 00AB1EF0  EmC010::vf20C  size=7  [class]
float10 EmC010::vf20C(void)

{
  return (float10)1.5;
}

// 00AB1F00  EmC010::vf1E0  size=36  [class]
void __fastcall EmC010::vf1E0(int param_1)

{
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  return;
}

// 00AB1F30  EmC010::vf278  size=17  [class]
void EmC010::vf278(void)

{
  FUN_00718220(0xa0001,0,0,0);
  return;
}

// 00AB1F50  EmC010::vf1E8  size=38  [class]
void __fastcall EmC010::vf1E8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x13c0) + 8))(0x41200000,0,0);
  return;
}

// 00AB1F80  EmC010::vf1EC  size=38  [class]
void __fastcall EmC010::vf1EC(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x13c0) + 8))(0x41200000,0,0);
  return;
}

// 00AB1FB0  EmC010::vf1E4  size=37  [class]
void __fastcall EmC010::vf1E4(int param_1)

{
  if ((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0x370) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
  }
  return;
}

// 00AB1FE0  FUN_00ab1fe0  size=253  [callgraph]
void FUN_00ab1fe0(void)

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

// 00AB9CF0  EmC010::vf00  size=30  [class]
undefined4 __thiscall EmC010::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab1fe0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

