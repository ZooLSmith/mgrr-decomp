// src/unsorted/unit_00EC7630.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC7630..00EC7F70, 11 functions

#include "mgrr.h"

// 00EC7630  FUN_00ec7630  size=77  [run]
undefined4 FUN_00ec7630(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00de3580(0);
  if (((uVar1 == 0) || (uVar1 < param_1)) || (param_1 + param_2 <= uVar1)) {
    uVar1 = FUN_00de3580(1);
    if (((uVar1 == 0) || (uVar1 < param_1)) || (param_1 + param_2 <= uVar1)) {
      return 0;
    }
  }
  return 1;
}

// 00EC7680  FUN_00ec7680  size=343  [run]
/* WARNING: Removing unreachable block (ram,0x00ec775b) */

void __thiscall FUN_00ec7680(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puStack_1c;
  int *piStack_18;
  undefined4 local_14;
  undefined4 local_10;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&puStack_1c;
  local_14 = param_2;
  local_10 = param_3;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)&puStack_1c);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (**(code **)(iVar1 + 4))(0);
  iVar1 = (**(code **)(iVar1 + 0x14))(uVar2);
  if (((iVar1 != -1) &&
      (iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(iVar1,param_2), iVar1 != -1)) &&
     (iVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 0x9c))(iVar1,&DAT_016d477c), iVar3 != -1)) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xd8))(iVar3,&stack0xffffffdc);
    FUN_009ca8a0(iVar1,&DAT_016d4780,&stack0xffffffe0);
    uVar4 = FUN_00fddccc(0,1000);
    local_10 = *(undefined4 *)(&DAT_016d4768 + (int)uVar4 * 4);
    local_14 = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar4 >> 0x20)]);
    iVar1 = FUN_00de3d80(0,&local_14);
    if (iVar1 != 0) {
      *puStack_1c = 0;
      *piStack_18 = iVar1;
      __security_check_cookie(uStack_c ^ (uint)&stack0xffffffdc);
      return;
    }
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffdc);
  return;
}

// 00EC77E0  FUN_00ec77e0  size=260  [run]
void __thiscall FUN_00ec77e0(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_14;
  int *local_10;
  undefined3 uStack_c;
  undefined1 uStack_9;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_14;
  local_10 = param_3;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar2 = (**(code **)(iVar1 + 4))(1);
    iVar1 = (**(code **)(iVar1 + 0x14))(uVar2);
    if (iVar1 != -1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(iVar1,param_4);
      if (iVar1 != -1) {
        iStack_14 = 0;
        iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x9c))(iVar1,&DAT_016d4784);
        if (iVar1 != -1) {
          (**(code **)(*(int *)(param_1 + 0xc) + 0xe8))(iVar1,&iStack_14);
          _uStack_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[iStack_14]);
          uStack_8 = 0x627477;
          iVar1 = FUN_00de3d80(1,&uStack_c);
          if (iVar1 != 0) {
            *param_2 = iStack_14;
            *local_10 = iVar1;
            __security_check_cookie(local_4 ^ (uint)&iStack_14);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_14);
  return;
}

// 00EC78F0  FUN_00ec78f0  size=310  [run]
void __thiscall FUN_00ec78f0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBP;
  undefined4 *puStack_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&puStack_18;
  local_10 = (undefined2)param_2;
  uStack_e = (undefined1)((uint)param_2 >> 0x10);
  uStack_d = (undefined1)((uint)param_2 >> 0x18);
  local_14 = param_4;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)&puStack_18);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (**(code **)(iVar1 + 4))(1);
  iVar1 = (**(code **)(iVar1 + 0x14))(uVar2);
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(iVar1,param_3);
    if (iVar1 != -1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x9c))(iVar1,&DAT_016d4788);
      if (iVar1 != -1) {
        (**(code **)(*(int *)(param_1 + 0xc) + 0xe8))(iVar1,&stack0xffffffe0);
        local_14 = 0x2e303030;
        local_10 = 0x7477;
        uStack_e = 0x61;
        uStack_d = 0;
        uVar2 = FUN_00de3d80(0,&local_14);
        *param_3 = uVar2;
        uStack_e = 0x70;
        iVar1 = FUN_00de3d80(1,&local_14);
        *unaff_EBP = iVar1;
        if (iVar1 != 0) {
          *puStack_18 = 0;
          __security_check_cookie(uStack_c ^ (uint)&stack0xffffffe0);
          return;
        }
      }
    }
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffe0);
  return;
}

// 00EC7A30  FUN_00ec7a30  size=404  [run]
void __thiscall FUN_00ec7a30(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBP;
  int *piStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_1c;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  undefined1 uStack_14;
  undefined4 uStack_13;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&piStack_28;
  local_20 = param_3;
  local_24 = param_4;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)&piStack_28);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (**(code **)(iVar1 + 4))(2);
  iVar1 = (**(code **)(iVar1 + 0x14))(uVar2);
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x14))(iVar1,param_3);
    if (iVar1 != -1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x9c))(iVar1,&DAT_016d478c);
      if (iVar1 != -1) {
        (**(code **)(*(int *)(param_1 + 0xc) + 0x128))(iVar1,&stack0xffffffd0);
        cStack_15 = '0';
        cStack_18 = '0';
        cStack_17 = '0';
        cStack_16 = '0';
        local_24 = 0x30303030;
        local_20 = 0x7461642e;
        uStack_1c = 0;
        uStack_14 = 0x2e;
        uStack_13 = 0x747464;
        iVar1 = FUN_00de3d80(0,&local_24);
        uVar2 = FUN_00de3d80(1,&cStack_18);
        if (iVar1 != 0) {
          *param_2 = 0;
          *piStack_28 = iVar1;
          *unaff_EBP = uVar2;
          __security_check_cookie(uStack_c ^ (uint)&stack0xffffffd0);
          return;
        }
      }
    }
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffd0);
  return;
}

// 00EC7C90  FUN_00ec7c90  size=85  [run]
uint FUN_00ec7c90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_01eddb24 != (int *)0x0) {
    iVar2 = *DAT_01eddb24;
    piVar3 = DAT_01eddb24;
    while (iVar2 != -1) {
      if (iVar2 == param_1) goto LAB_00ec7cd7;
      piVar1 = piVar3 + 2;
      piVar3 = piVar3 + 2;
      iVar2 = *piVar1;
    }
  }
  if (DAT_01eddb20 != (int *)0x0) {
    iVar2 = *DAT_01eddb20;
    piVar3 = DAT_01eddb20;
    while (iVar2 != -1) {
      if (iVar2 == param_1) {
LAB_00ec7cd7:
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        return (uint)piVar3[1] >> 2 & 1;
      }
      piVar1 = piVar3 + 2;
      piVar3 = piVar3 + 2;
      iVar2 = *piVar1;
    }
  }
  return 0;
}

// 00EC7DB0  FUN_00ec7db0  size=138  [run]
void __thiscall
FUN_00ec7db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,void *param_15)

{
  void *pvVar1;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[4] = param_14;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  FUN_00e08600(param_8);
  param_1[0x11] = param_11;
  param_1[9] = param_9;
  FUN_00a7c960(&param_12);
  pvVar1 = param_15;
  param_1[10] = param_13;
  if (param_15 != (void *)0x0) {
    FID_conflict__memcpy(param_1 + 0x14,param_15,0x40);
    *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)((int)pvVar1 + 0x40);
  }
  return;
}

// 00EC7E40  FUN_00ec7e40  size=129  [run]
undefined4 * __thiscall FUN_00ec7e40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  FUN_00e08600(param_2 + 7);
  param_1[9] = param_2[9];
  param_1[0x11] = param_2[0x11];
  FUN_00a7c960(param_2 + 0xb);
  param_1[10] = param_2[10];
  FID_conflict__memcpy(param_1 + 0x14,param_2 + 0x14,0x40);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  return param_1;
}

// 00EC7ED0  FUN_00ec7ed0  size=20  [run]
void FUN_00ec7ed0(void)

{
  int iVar1;
  
  iVar1 = FUN_00f5b460();
  if (iVar1 == 0) {
    return;
  }
  FUN_00ec4c90();
  return;
}

// 00EC7EF0  FUN_00ec7ef0  size=127  [run]
void FUN_00ec7ef0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_01eddaf0 == 0) {
    FUN_00ec69d0();
  }
  DAT_01eddaf0 = 1;
  iVar2 = DAT_01eddb0c;
  iVar1 = DAT_01eddb08;
  if (DAT_01eddaf4 != 0) {
    iVar2 = DAT_01eddb08;
    iVar1 = DAT_01eddb0c;
  }
  DAT_01eddb04 = &DAT_01be1010 + iVar1 * 0x50;
  DAT_01eddaec = iVar2 + 9;
  DAT_01eddb00 = &DAT_01be1010 + iVar2 * 0x50;
  DAT_01eddaf4 = (uint)(DAT_01eddaf4 == 0);
  return;
}

// 00EC7F70  FUN_00ec7f70  size=78  [run]
void FUN_00ec7f70(void *param_1)

{
  if (DAT_01ede1a8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede190);
  }
  FID_conflict__memcpy(&DAT_01ede110,param_1,0x40);
  D3DXMatrixInverse(&DAT_01ede150,0,&DAT_01ede110);
  if (DAT_01ede1a8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede190);
  }
  return;
}

