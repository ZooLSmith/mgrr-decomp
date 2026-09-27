// src/unsorted/unit_00F43AD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F43AD0..00F43F80, 5 functions

#include "mgrr.h"

// 00F43AD0  FUN_00f43ad0  size=38  [run]
int __fastcall FUN_00f43ad0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e78) = 0;
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  return param_1;
}

// 00F43B00  FUN_00f43b00  size=114  [run]
undefined4 __thiscall FUN_00f43b00(int param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1e70);
  uVar3 = (uint)param_3;
  if ((0x7fff < uVar3) && (uVar3 < 0x8014)) {
    FUN_00dd5650(&DAT_016dfc80,uVar3);
    return 0;
  }
  if (*(int *)(iVar1 + 0x38) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x20));
  }
  uVar2 = FUN_00f42180(param_2,uVar3 + 0x8000,param_4);
  if (*(int *)(iVar1 + 0x38) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x20));
  }
  return uVar2;
}

// 00F43B80  FUN_00f43b80  size=47  [run]
void __fastcall FUN_00f43b80(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00f42ca0();
  *(uint *)(param_1 + 0x1e78) = *(uint *)(param_1 + 0x1e78) | 8;
  uVar3 = 0;
  uVar2 = 0x50000;
  uVar1 = extraout_ECX;
  FUN_00a7c940(param_1 + 0x1ec4);
  FUN_009d5aa0(uVar1,uVar2,uVar3);
  return;
}

// 00F43BB0  FUN_00f43bb0  size=969  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00f43bb0(void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  double adStack_104 [3];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [52];
  undefined1 auStack_6c [12];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)adStack_104;
  pvVar1 = (void *)FUN_00e9ff50();
  FID_conflict__memcpy(param_1,pvVar1,0x40);
  puVar2 = (undefined4 *)FUN_00e9fe70();
  *(undefined4 *)((int)param_1 + 0x40) = *puVar2;
  *(undefined4 *)((int)param_1 + 0x44) = puVar2[1];
  *(undefined4 *)((int)param_1 + 0x48) = puVar2[2];
  *(undefined4 *)((int)param_1 + 0x4c) = puVar2[3];
  puVar2 = (undefined4 *)FUN_00e9feb0();
  *(undefined4 *)((int)param_1 + 0x50) = *puVar2;
  *(undefined4 *)((int)param_1 + 0x54) = puVar2[1];
  *(undefined4 *)((int)param_1 + 0x58) = puVar2[2];
  *(undefined4 *)((int)param_1 + 0x5c) = puVar2[3];
  iVar3 = FUN_00e9fef0();
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)(iVar3 + 4);
  uVar4 = FUN_00f98a90();
  *(undefined4 *)((int)param_1 + 100) = uVar4;
  uVar4 = FUN_00f98aa0();
  *(undefined4 *)((int)param_1 + 0x68) = uVar4;
  pvVar1 = (void *)FUN_00e9ff30();
  FID_conflict__memcpy((void *)((int)param_1 + 0x70),pvVar1,0x40);
  uVar4 = FUN_00e9fe60();
  *(undefined4 *)((int)param_1 + 0x1e74) = uVar4;
  if ((DAT_01ee540c & 1) == 0) {
    _DAT_01ee5400 = 0;
    DAT_01ee540c = DAT_01ee540c | 1;
    _DAT_01ee5404 = 0;
    _DAT_01ee5408 = 0x41200000;
  }
  if ((DAT_01ee540c & 2) == 0) {
    _DAT_01ee53f4 = 0;
    DAT_01ee540c = DAT_01ee540c | 2;
    _DAT_01ee53f8 = 0;
    _DAT_01ee53fc = 0;
  }
  local_ec = 0;
  local_e8 = 0xbf800000;
  local_e4 = 0;
  FUN_00de01a0(local_a0,&DAT_01ee5400,&DAT_01ee53f4,&local_ec);
  FUN_00ddccc0(local_60,_DAT_018d70e4,0x3f800000,_DAT_018d70e8,_DAT_018d70ec,0,0);
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_a4 = 0x3f800000;
  local_b8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_e0 = 0xbf800000;
  D3DXMatrixMultiply(local_a0,local_a0,&local_e0);
  FUN_01437400(&local_ac);
  FUN_01437410(auStack_6c);
  FUN_01437430();
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
    uVar4 = FUN_00e9ff10();
    D3DXMatrixInverse(iVar3 + 0x10,0,uVar4);
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
  }
  iVar3 = FUN_009cdd90();
  *(uint *)((int)param_1 + 0x1ecc) = (uint)(iVar3 == 0);
  FUN_00f422c0();
  if (*(int *)((int)param_1 + 0x1f80) == 0) {
    *(undefined4 *)((int)param_1 + 0x1f7c) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x1f80) = 0;
    *(undefined4 *)((int)param_1 + 0x1f88) = *(undefined4 *)((int)param_1 + 0x1f84);
    *(undefined4 *)((int)param_1 + 0x1f7c) = 1;
  }
  FUN_00ec7030();
  FUN_00ec74d0();
  *(undefined4 *)((int)param_1 + 0x1f3c) = 1;
  (**(code **)(**(int **)((int)param_1 + 0x1e70) + 0xc))();
  iVar3 = *(int *)((int)param_1 + 0x1f34);
  *(undefined4 *)((int)param_1 + 0x1f3c) = 0;
  adStack_104[0] = (double)CONCAT44(adStack_104[0]._4_4_,iVar3);
  *(undefined4 *)((int)param_1 + 0x1f34) = 0;
  *(undefined4 *)((int)param_1 + 0x1f8c) = 1;
  *(undefined4 *)((int)param_1 + 0x1f38) = 0;
  if (iVar3 != 0) {
    do {
      *(undefined4 *)((int)param_1 + 0x1ef8) = 1;
      (**(code **)(**(int **)((int)param_1 + 0x1e70) + 0x10))();
      *(undefined4 *)((int)param_1 + 0x1ef8) = 0;
      if (*(int *)((int)param_1 + 0x1f80) == 0) {
        *(undefined4 *)((int)param_1 + 0x1f7c) = 0;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x1f80) = 0;
        *(undefined4 *)((int)param_1 + 0x1f88) = *(undefined4 *)((int)param_1 + 0x1f84);
        *(undefined4 *)((int)param_1 + 0x1f7c) = 1;
      }
      FUN_00ec7030();
      FUN_00ec74d0();
      *(undefined4 *)((int)param_1 + 0x1f3c) = 1;
      (**(code **)(**(int **)((int)param_1 + 0x1e70) + 0xc))();
      *(int *)((int)param_1 + 0x1f38) = *(int *)((int)param_1 + 0x1f38) + 1;
      *(undefined4 *)((int)param_1 + 0x1f3c) = 0;
    } while (*(uint *)((int)param_1 + 0x1f38) < adStack_104[0]._0_4_);
  }
  *(undefined4 *)((int)param_1 + 0x1f8c) = 0;
  *(undefined4 *)((int)param_1 + 0x1ee8) = *(undefined4 *)(*(int *)((int)param_1 + 0x1e70) + 0x10);
  if (0.0 < *(float *)((int)param_1 + 0x1ed4)) {
    adStack_104[0] = (double)*(float *)((int)param_1 + 0x1ed4);
    fVar5 = (float10)FUN_00e049b0();
    *(float *)((int)param_1 + 0x1ed4) = (float)((float10)adStack_104[0] - fVar5);
    if (0.0 <= *(float *)((int)param_1 + 0x1ed4)) goto LAB_00f43f4e;
  }
  *(undefined4 *)((int)param_1 + 0x1ed4) = 0;
LAB_00f43f4e:
  *(undefined4 *)((int)param_1 + 0x1f20) = 0;
  if (*(int *)((int)param_1 + 0x1f28) < 1) {
    *(undefined4 *)((int)param_1 + 0x1f2c) = 0;
  }
  __security_check_cookie(uStack_20 ^ (uint)&stack0xfffffef0);
  return;
}

// 00F43F80  FUN_00f43f80  size=168  [run]
void FUN_00f43f80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined3 local_c;
  undefined1 uStack_9;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  if (param_1 != 0xffe) {
    FUN_009df6d0();
    iVar1 = FUN_00f4b0b0(param_1);
    FUN_009df740();
    if (iVar1 != 0) {
      uVar2 = FUN_00fddccc(param_2,1000);
      local_8 = *(undefined4 *)(&DAT_016d4768 + (int)uVar2 * 4);
      _local_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar2 >> 0x20)]);
      FUN_00de3d80(0,&local_c);
      __security_check_cookie(local_4 ^ (uint)&local_c);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

