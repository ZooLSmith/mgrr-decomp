// src/unsorted/unit_00AC9950.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC9950..00AC9D90, 5 functions

#include "mgrr.h"

// 00AC9950  FUN_00ac9950  size=264  [run]
void __thiscall FUN_00ac9950(int param_1,int param_2)

{
  void *_Src;
  short sVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  undefined4 local_c;
  
  if (param_2 != 0) {
    iVar2 = FUN_00a7c8a0();
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(iVar2 + 0x10),0x40);
    iVar2 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar2 = param_1;
    }
    sVar1 = *(short *)(iVar2 + 0x358);
    local_c = 0;
    if (0 < sVar1) {
      param_2 = 0;
      _Dst = (void *)(param_1 + 0x2a20);
      do {
        iVar2 = *(int *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x360) == 0) {
          iVar2 = param_1;
        }
        if ((local_c < 0) || (*(short *)(iVar2 + 0x358) <= local_c)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x350) + param_2;
        }
        iVar3 = FUN_00a12210((int)*(short *)(iVar2 + 0xa0));
        if (iVar3 != 0) {
          *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
          _Src = (void *)(iVar3 + 0x10);
          FID_conflict__memcpy((void *)(iVar2 + 0x10),_Src,0x40);
          FID_conflict__memcpy((void *)((int)_Dst + -0x2000),_Src,0x40);
          FID_conflict__memcpy(_Dst,_Src,0x40);
        }
        param_2 = param_2 + 0xb0;
        local_c = local_c + 1;
        _Dst = (void *)((int)_Dst + 0x40);
      } while (local_c < sVar1);
    }
    switchD_0080dbae::default();
  }
  return;
}

// 00AC9A60  FUN_00ac9a60  size=322  [run]
void __fastcall FUN_00ac9a60(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Src;
  int local_10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar2 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar3;
  }
  if (*(int *)(param_1 + 0xa08) == 0) {
    FUN_009fdde0();
    return;
  }
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(*(int *)(param_1 + 0xa08) + 0x10),0x40);
  iVar2 = *(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) == 0) {
    iVar2 = param_1;
  }
  sVar1 = *(short *)(iVar2 + 0x358);
  local_c = 0;
  if (0 < sVar1) {
    local_10 = 0;
    _Src = (void *)(param_1 + 0x2a20);
    do {
      iVar2 = *(int *)(param_1 + 0x360);
      if (*(int *)(param_1 + 0x360) == 0) {
        iVar2 = param_1;
      }
      if ((local_c < 0) || (*(short *)(iVar2 + 0x358) <= local_c)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x350) + local_10;
      }
      iVar4 = FUN_00a12210((int)*(short *)(iVar2 + 0xa0));
      if (iVar4 != 0) {
        *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
        FID_conflict__memcpy((void *)(iVar2 + 0x10),(void *)((int)_Src + -0x2000),0x40);
        FID_conflict__memcpy((void *)((int)_Src + -0x2000),_Src,0x40);
        FID_conflict__memcpy(_Src,(void *)(iVar4 + 0x10),0x40);
      }
      local_10 = local_10 + 0xb0;
      local_c = local_c + 1;
      _Src = (void *)((int)_Src + 0x40);
    } while (local_c < sVar1);
  }
  switchD_0080dbae::default();
  return;
}

// 00AC9BB0  FUN_00ac9bb0  size=252  [run]
void __fastcall FUN_00ac9bb0(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 == 0) {
LAB_00ac9c50:
    param_1[0x284] = (int)(-(float)param_1[0x284] * 0.2 + (float)param_1[0x284]);
    if ((*(byte *)(param_1 + 0x130) & 1) != 0) goto LAB_00ac9c7c;
    pcVar4 = *(code **)(*param_1 + 0x1c);
  }
  else {
    iVar3 = FUN_00a7c8a0();
    if ((iVar3 == 0) || (*(float *)(iVar3 + 0x39e4) <= 0.0)) goto LAB_00ac9c50;
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 == 0) goto LAB_00ac9c50;
    iVar3 = FUN_00a7c8a0();
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x39e0) == 0)) goto LAB_00ac9c50;
    fVar1 = ((float)param_1[0x283] - (float)param_1[0x284]) * 0.2 + (float)param_1[0x284];
    param_1[0x284] = (int)fVar1;
    if ((fVar1 < 0.01 == (fVar1 == 0.01)) ||
       (param_1[0x284] = 0, (*(byte *)(param_1 + 0x130) & 1) == 0)) goto LAB_00ac9c7c;
    pcVar4 = *(code **)(*param_1 + 0x20);
  }
  (*pcVar4)();
LAB_00ac9c7c:
  iVar3 = param_1[0x284];
  iVar6 = 0;
  iVar5 = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      *(int *)(param_1[200] + 0x1c + iVar6) = iVar3;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar5 < (short)param_1[0xc9]);
  }
  return;
}

// 00AC9CF0  FUN_00ac9cf0  size=159  [run]
void FUN_00ac9cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  FUN_00a92f90(1);
  FUN_00e26e50(uVar2);
  iVar1 = FUN_00a92f90();
  *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
  FUN_00a9f4c0("BridgeRun",0,0x8000000,0);
  FUN_00a94640(0xffffffff,0,0,0,0,param_1,0,0x8000000);
  FUN_00a94640(0xffffffff,0,0,0,1,param_2,0,0x8000000);
  FUN_00a94640(0xffffffff,0,0,0,0xffffffff,param_3,0,0x8000000);
  return;
}

// 00AC9D90  FUN_00ac9d90  size=588  [run]
undefined4 __thiscall FUN_00ac9d90(int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  undefined1 local_30 [48];
  
  *(undefined4 *)(param_1 + 0xa2c) = 0;
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  *(undefined4 *)(param_1 + 0xa08) = param_2;
  *(undefined4 *)(param_1 + 0xa18) = param_4;
  *(undefined4 *)(param_1 + 0xa10) = 1;
  if (*(int *)(param_1 + 0x4f0) == 0) {
    FUN_00dd5650(&DAT_0169fcfc);
    return 0;
  }
  iVar2 = FUN_00a92f90();
  *(int *)(param_1 + 0xa00) = iVar2;
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0169fd88);
    return 0;
  }
  FUN_00e26e50(1);
  puVar1 = (uint *)(*(int *)(param_1 + 0xa00) + 0x94);
  *puVar1 = *puVar1 | 2;
  FUN_0095c6a0(local_48,&DAT_0165bfbc,*(undefined4 *)(param_1 + 0xa08));
  FUN_009f8ea0(local_40,0x10,*(uint *)(param_1 + 0x4b0) & 0xffffff,0);
  FUN_00ac7100(local_30,"%s_%04x.mot",local_40,*(undefined4 *)(param_1 + 0xa08));
  iVar2 = FUN_00de4500(local_30);
  if (iVar2 == 0) {
    if (0xcff < *(uint *)(param_1 + 0xa08)) {
      FUN_00dd5650(&DAT_0169fd48,*(uint *)(param_1 + 0xa08));
    }
    iVar2 = FUN_00e3ff90(local_48,0,0,0x3f800000,*(undefined4 *)(param_1 + 0xa18),0xbf800000,
                         0x3f800000);
  }
  else {
    iVar2 = Animation::Unit::setAnimation
                      (iVar2,local_48,0,0,0x3f800000,*(undefined4 *)(param_1 + 0xa18),0xbf800000,
                       0x3f800000);
  }
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00ac7100(local_30,"ET0002_%04x.mot",*(undefined4 *)(param_1 + 0xa08));
    uVar4 = FUN_00de4500(local_30);
    uVar9 = *(undefined4 *)(param_1 + 0xa18);
    uVar11 = 0x3f800000;
    puVar5 = local_48;
    uVar10 = 0xbf800000;
    uVar8 = 0x3f800000;
    uVar7 = 0;
    uVar6 = 0;
    FUN_00a7c890(uVar4,puVar5,0,0,0x3f800000,uVar9,0xbf800000,0x3f800000);
    Animation::Unit::setAnimation(uVar4,puVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  }
  if (iVar2 == -1) {
    return 0;
  }
  iVar3 = FUN_00e26e90();
  if (iVar3 != 0) {
    Animation::Motion::Unit::setCurrentTime(iVar2,param_3 * 0.016666668);
  }
  *(undefined4 *)(param_1 + 0xa10) = 0;
  return 1;
}

