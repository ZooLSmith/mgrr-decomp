// src/managers/effectresourcemanager/EffectResourceManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E004B0..00F4DD40, 116 functions

#include "types.h"

// 00E004B0  EffectResourceManager::GetNameFromRoomNo  size=275  [class]
void EffectResourceManager::GetNameFromRoomNo(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c;
  char local_b;
  char local_a;
  char local_9;
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_c);
    return;
  }
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,param_1);
  }
  if (param_1 + 0x1000 == 0xfff) {
    __security_check_cookie(local_4 ^ (uint)&local_c);
    return;
  }
  if (((int)param_1 < 0) || (0xfff < (int)param_1)) {
    FUN_00dd5650(&DAT_016575ac,
                 "EffectResourceManager::GetNameFromRoomNo: (0 <= room_no) && (room_no <= 0xfff)");
  }
  local_b = "0123456789abcdef"[param_1 >> 8 & 0xf];
  local_a = "0123456789abcdef"[param_1 >> 4 & 0xf];
  local_9 = "0123456789abcdef"[param_1 & 0xf];
  local_c = 0x72;
  local_8 = 0;
  SetEffectResource(param_1 + 0x1000,&local_c,iVar1,uVar2);
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

// 00E005D0  EffectResourceManager::GetNameFromPhaseNo  size=275  [class]
void EffectResourceManager::GetNameFromPhaseNo(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c;
  char local_b;
  char local_a;
  char local_9;
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_c);
    return;
  }
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5d0,param_1);
  }
  if (param_1 + 0x2000 == 0xfff) {
    __security_check_cookie(local_4 ^ (uint)&local_c);
    return;
  }
  if (((int)param_1 < 0) || (0xfff < (int)param_1)) {
    FUN_00dd5650(&DAT_016575ac,
                 "EffectResourceManager::GetNameFromPhaseNo: (0 <= phase_no) && (phase_no <= 0xfff)"
                );
  }
  local_b = "0123456789abcdef"[param_1 >> 8 & 0xf];
  local_a = "0123456789abcdef"[param_1 >> 4 & 0xf];
  local_9 = "0123456789abcdef"[param_1 & 0xf];
  local_c = 0x70;
  local_8 = 0;
  SetEffectResource(param_1 + 0x2000,&local_c,iVar1,uVar2);
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

// 00E006F0  FUN_00e006f0  size=205  [between]
void FUN_00e006f0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  local_18 = param_4;
  if (param_3 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  if ((param_1 * 0x10000 & 0xfff0ffffU) != 0) {
    FUN_00dd5650(&DAT_016ca600,param_1);
  }
  if ((param_2 & 0xffff0000) != 0) {
    FUN_00dd5650(&DAT_016ca5e4,param_2);
  }
  iVar1 = param_1 * 0x10000 + 0x20000000U + param_2;
  if (iVar1 == 0xfff) {
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  EffectResourceManager::GetNameFromEventNo(local_14,0x10,param_1,param_2);
  EffectResourceManager::SetEffectResource(iVar1,local_14,param_3,local_18);
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}

// 00E00860  FUN_00e00860  size=90  [between]
void FUN_00e00860(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if ((param_1 * 0x10000 & 0xfff0ffffU) != 0) {
      FUN_00dd5650(&DAT_016ca600,param_1);
    }
    if ((param_2 & 0xffff0000) != 0) {
      FUN_00dd5650(&DAT_016ca5e4,param_2);
    }
    iVar1 = param_1 * 0x10000 + 0x20000000U + param_2;
    if (iVar1 != 0xfff) {
      cEffectData::requestCounterDown(iVar1);
    }
  }
  return;
}

// 00E00900  FUN_00e00900  size=8  [between]
void __fastcall FUN_00e00900(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

// 00E00990  FUN_00e00990  size=202  [between]
void __fastcall FUN_00e00990(int param_1)

{
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0xff;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf0) = 0xffff;
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}

// 00E00A60  EffectResourceManager::GetNameFromRoomNo  size=5  [class]
void EffectResourceManager::GetNameFromRoomNo(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_c;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&uStack_c;
  iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0);
  if (iVar1 == 0) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
    return;
  }
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,param_1);
  }
  if (param_1 + 0x1000 == 0xfff) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
    return;
  }
  if (((int)param_1 < 0) || (0xfff < (int)param_1)) {
    FUN_00dd5650(&DAT_016575ac,
                 "EffectResourceManager::GetNameFromRoomNo: (0 <= room_no) && (room_no <= 0xfff)");
  }
  cStack_b = "0123456789abcdef"[param_1 >> 8 & 0xf];
  cStack_a = "0123456789abcdef"[param_1 >> 4 & 0xf];
  cStack_9 = "0123456789abcdef"[param_1 & 0xf];
  uStack_c = 0x72;
  uStack_8 = 0;
  SetEffectResource(param_1 + 0x1000,&uStack_c,iVar1,uVar2);
  __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
  return;
}

// 00E00A70  EffectResourceManager::GetNameFromPhaseNo  size=5  [class]
void EffectResourceManager::GetNameFromPhaseNo(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_c;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&uStack_c;
  iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0);
  if (iVar1 == 0) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
    return;
  }
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5d0,param_1);
  }
  if (param_1 + 0x2000 == 0xfff) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
    return;
  }
  if (((int)param_1 < 0) || (0xfff < (int)param_1)) {
    FUN_00dd5650(&DAT_016575ac,
                 "EffectResourceManager::GetNameFromPhaseNo: (0 <= phase_no) && (phase_no <= 0xfff)"
                );
  }
  cStack_b = "0123456789abcdef"[param_1 >> 8 & 0xf];
  cStack_a = "0123456789abcdef"[param_1 >> 4 & 0xf];
  cStack_9 = "0123456789abcdef"[param_1 & 0xf];
  uStack_c = 0x70;
  uStack_8 = 0;
  SetEffectResource(param_1 + 0x2000,&uStack_c,iVar1,uVar2);
  __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
  return;
}

// 00E00A80  thunk_FUN_00e006f0  size=5  [callgraph]
void thunk_FUN_00e006f0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&uStack_18;
  uStack_18 = param_4;
  if (param_3 == 0) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_18);
    return;
  }
  if ((param_1 * 0x10000 & 0xfff0ffffU) != 0) {
    FUN_00dd5650(&DAT_016ca600,param_1);
  }
  if ((param_2 & 0xffff0000) != 0) {
    FUN_00dd5650(&DAT_016ca5e4,param_2);
  }
  iVar1 = param_1 * 0x10000 + 0x20000000U + param_2;
  if (iVar1 == 0xfff) {
    __security_check_cookie(uStack_4 ^ (uint)&uStack_18);
    return;
  }
  EffectResourceManager::GetNameFromEventNo(auStack_14,0x10,param_1,param_2);
  EffectResourceManager::SetEffectResource(iVar1,auStack_14,param_3,uStack_18);
  __security_check_cookie(uStack_4 ^ (uint)&uStack_18);
  return;
}

// 00E00A90  FUN_00e00a90  size=75  [callgraph]
void FUN_00e00a90(uint param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0), iVar1 == 0)) {
    return;
  }
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,param_1);
  }
  if (param_1 + 0x1000 != 0xfff) {
    cEffectData::requestCounterDown(param_1 + 0x1000);
  }
  return;
}

// 00E00AE0  FUN_00e00ae0  size=75  [callgraph]
void FUN_00e00ae0(uint param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0), iVar1 == 0)) {
    return;
  }
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5d0,param_1);
  }
  if (param_1 + 0x2000 != 0xfff) {
    cEffectData::requestCounterDown(param_1 + 0x2000);
  }
  return;
}

// 00E00B30  thunk_FUN_00e00860  size=5  [callgraph]
void thunk_FUN_00e00860(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if ((param_1 * 0x10000 & 0xfff0ffffU) != 0) {
      FUN_00dd5650(&DAT_016ca600,param_1);
    }
    if ((param_2 & 0xffff0000) != 0) {
      FUN_00dd5650(&DAT_016ca5e4,param_2);
    }
    iVar1 = param_1 * 0x10000 + 0x20000000U + param_2;
    if (iVar1 != 0xfff) {
      cEffectData::requestCounterDown(iVar1);
    }
  }
  return;
}

// 00E00B40  FUN_00e00b40  size=56  [callgraph]
uint FUN_00e00b40(uint param_1)

{
  if (param_1 == 0x7c0000) {
    return 0;
  }
  if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,param_1);
  }
  return param_1;
}

// 00E00B80  FUN_00e00b80  size=206  [callgraph]
undefined4 FUN_00e00b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(int *)(param_4 + 0x7c) == 0) {
    puVar2 = *(undefined **)(param_4 + 0x80);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_01be9450;
    }
    iVar3 = EffectCall::EffectCallSystem::callOnce
                      (param_1,param_2,param_3,param_4,puVar2,&DAT_016ca680,0xff);
    if (iVar3 != 0) {
      return 1;
    }
    return 0;
  }
  uVar4 = 0;
  if (*(int *)(param_4 + 0x7c) != 0) {
    piVar5 = (int *)(param_4 + 8);
    bVar1 = false;
    do {
      puVar2 = *(undefined **)(param_4 + 0x80);
      if (puVar2 == (undefined *)0x0) {
        if ((uVar4 == 0xff) || (*piVar5 == 0)) {
          puVar2 = &DAT_01be9450;
        }
        else {
          puVar2 = (undefined *)FUN_00a7c910();
        }
      }
      iVar3 = EffectCall::EffectCallSystem::callOnce
                        (param_1,param_2,param_3,param_4,puVar2,piVar5,(char)piVar5[-1]);
      if ((bVar1) || (iVar3 != 0)) {
        bVar1 = true;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 3;
    } while (uVar4 < *(uint *)(param_4 + 0x7c));
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

// 00E00C50  FUN_00e00c50  size=260  [callgraph]
void FUN_00e00c50(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 != 0) {
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  if (param_1 == 0x7c0000) {
    uVar4 = 0;
  }
  else {
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    uVar4 = param_1;
    if (param_1 == 0xfff) goto LAB_00e00d16;
  }
  iVar3 = FUN_009f8ea0(local_14,0x10,param_1,1);
  if (iVar3 != 0) {
    EffectResourceManager::SetEffectResource(uVar4,local_14,iVar1,uVar2);
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
LAB_00e00d16:
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E00D60  FUN_00e00d60  size=119  [callgraph]
void FUN_00e00d60(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0), iVar1 == 0)) {
      return;
    }
    if (param_1 == 0x7c0000) {
      cEffectData::requestCounterDown(0);
      return;
    }
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    if (param_1 != 0xfff) {
      cEffectData::requestCounterDown(param_1);
    }
  }
  return;
}

// 00E00DE0  FUN_00e00de0  size=93  [callgraph]
void FUN_00e00de0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 == 0) {
    if (param_1 == 0x7c0000) {
      FUN_00f4b820();
      return;
    }
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    if (param_1 != 0xfff) {
      FUN_00f4b820();
      return;
    }
  }
  return;
}

// 00E00E40  FUN_00e00e40  size=93  [callgraph]
void FUN_00e00e40(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 == 0) {
    if (param_1 == 0x7c0000) {
      FUN_00f4b860();
      return;
    }
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    if (param_1 != 0xfff) {
      FUN_00f4b860();
      return;
    }
  }
  return;
}

// 00E00F00  FUN_00e00f00  size=166  [callgraph]
void FUN_00e00f00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined3 local_c;
  undefined1 uStack_9;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  FUN_009df6d0();
  iVar1 = FUN_00f4b0b0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00fddccc(param_2,1000);
    local_8 = *(undefined4 *)(&DAT_016d4768 + (int)uVar2 * 4);
    _local_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar2 >> 0x20)]);
    iVar1 = FUN_00de3d80(0,&local_c);
    if (iVar1 != 0) {
      FUN_009df740();
      __security_check_cookie(local_4 ^ (uint)&local_c);
      return;
    }
  }
  FUN_009df740();
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

// 00E00FB0  FUN_00e00fb0  size=104  [callgraph]
void FUN_00e00fb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_6c [12];
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  local_74 = *(undefined4 *)(param_3 + 0xa8);
  local_78 = *(undefined4 *)(param_3 + 0xa8);
  local_7c = *(undefined4 *)(param_3 + 0xa8);
  D3DXMatrixScaling(local_60);
  FUN_00e00b80(param_1,param_2,&stack0xffffff90,param_3);
  __security_check_cookie(uStack_24 ^ (uint)&local_7c);
  return;
}

// 00E01020  FUN_00e01020  size=151  [callgraph]
void FUN_00e01020(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [32];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  local_8c = *(undefined4 *)(param_4 + 0xa8);
  local_88 = *(undefined4 *)(param_4 + 0xa8);
  local_84 = *(undefined4 *)(param_4 + 0xa8);
  local_70 = local_8c;
  local_6c = local_88;
  local_68 = local_84;
  D3DXMatrixScaling(local_60);
  uStack_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  FUN_00e00b80(param_1,param_2,&local_70,param_4);
  __security_check_cookie(uStack_24 ^ (uint)&local_8c);
  return;
}

// 00E010C0  FUN_00e010c0  size=407  [callgraph]
void FUN_00e010c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float *param_4,
                 int param_5)

{
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b8;
  if (*(float *)(param_5 + 0xa8) == 1.0) {
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_64 = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 0x3f800000;
    local_a0 = 0x3f800000;
    if (param_4[2] != 0.0) {
      D3DXMatrixRotationZ(local_60,param_4[2]);
      D3DXMatrixMultiply(local_a8,&local_68,local_a8);
    }
    if (param_4[1] != 0.0) {
      D3DXMatrixRotationY(local_60,param_4[1]);
      D3DXMatrixMultiply(local_a8,&local_68,local_a8);
    }
    if (*param_4 == 0.0) goto LAB_00e01216;
    D3DXMatrixRotationX(local_60,*param_4);
  }
  else {
    local_b0 = *(undefined4 *)(param_5 + 0xa8);
    local_ac = *(undefined4 *)(param_5 + 0xa8);
    local_a8[0] = *(undefined4 *)(param_5 + 0xa8);
    thunk_FUN_00ddc1d0(&local_a0,param_4,5);
    FUN_00ddd140(local_60,&local_b0);
  }
  D3DXMatrixMultiply(&local_a0,local_60,&local_a0);
LAB_00e01216:
  local_70 = *param_3;
  local_6c = param_3[1];
  local_68 = param_3[2];
  FUN_00e00b80(param_1,param_2,&local_a0,param_5);
  __security_check_cookie(local_14 ^ (uint)auStack_b8);
  return;
}

// 00E01260  thunk_FUN_00e00b80  size=5  [callgraph]
undefined4 thunk_FUN_00e00b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(int *)(param_4 + 0x7c) == 0) {
    puVar2 = *(undefined **)(param_4 + 0x80);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_01be9450;
    }
    iVar3 = EffectCall::EffectCallSystem::callOnce
                      (param_1,param_2,param_3,param_4,puVar2,&DAT_016ca680,0xff);
    if (iVar3 != 0) {
      return 1;
    }
    return 0;
  }
  uVar4 = 0;
  if (*(int *)(param_4 + 0x7c) != 0) {
    piVar5 = (int *)(param_4 + 8);
    bVar1 = false;
    do {
      puVar2 = *(undefined **)(param_4 + 0x80);
      if (puVar2 == (undefined *)0x0) {
        if ((uVar4 == 0xff) || (*piVar5 == 0)) {
          puVar2 = &DAT_01be9450;
        }
        else {
          puVar2 = (undefined *)FUN_00a7c910();
        }
      }
      iVar3 = EffectCall::EffectCallSystem::callOnce
                        (param_1,param_2,param_3,param_4,puVar2,piVar5,(char)piVar5[-1]);
      if ((bVar1) || (iVar3 != 0)) {
        bVar1 = true;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 3;
    } while (uVar4 < *(uint *)(param_4 + 0x7c));
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

// 00E01270  FUN_00e01270  size=197  [callgraph]
void FUN_00e01270(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 undefined4 param_5)

{
  float10 fVar1;
  float fStack_20;
  float fStack_1c;
  float local_18;
  
  local_18 = -*param_4 * 90.0 * 0.017453292;
  FUN_00fdef70();
  fVar1 = (float10)FUN_00fdecda();
  fStack_20 = (1.5707964 - (float)fVar1) - *param_4 * 1.5707964;
  fVar1 = (float10)FUN_00fdecda();
  fStack_1c = (float)fVar1;
  FUN_00e010c0(param_1,param_2,param_3,&fStack_20,param_5);
  return;
}

// 00E01340  FUN_00e01340  size=153  [callgraph]
void FUN_00e01340(uint param_1,undefined4 param_2,int param_3)

{
  undefined *local_78;
  uint local_74;
  undefined1 auStack_68 [8];
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  if (param_1 == 0x7c0000) {
    param_1 = 0;
  }
  else if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
    local_74 = param_1;
    local_78 = &DAT_0163e20c;
    FUN_00dd5650();
  }
  local_74 = *(undefined4 *)(param_3 + 0xa8);
  local_78 = *(undefined **)(param_3 + 0xa8);
  D3DXMatrixScaling(local_60,*(undefined4 *)(param_3 + 0xa8));
  FUN_00e00b80(param_1,param_2,&stack0xffffff90,param_3);
  __security_check_cookie(uStack_24 ^ (uint)&local_78);
  return;
}

// 00E013E0  FUN_00e013e0  size=78  [callgraph]
void FUN_00e013e0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0x7c0000) {
    param_1 = 0;
  }
  else if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,param_1);
  }
  FUN_00e01020(param_1,param_2,param_3,param_4);
  return;
}

// 00E01430  FUN_00e01430  size=83  [callgraph]
void FUN_00e01430(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 == 0x7c0000) {
    param_1 = 0;
  }
  else if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,param_1);
  }
  FUN_00e010c0(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 00E01490  FUN_00e01490  size=78  [callgraph]
void FUN_00e01490(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0x7c0000) {
    param_1 = 0;
  }
  else if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,param_1);
  }
  FUN_00e00b80(param_1,param_2,param_3,param_4);
  return;
}

// 00E01540  FUN_00e01540  size=134  [callgraph]
void FUN_00e01540(uint param_1,undefined4 param_2,int param_3)

{
  undefined *local_78;
  uint local_74;
  undefined1 auStack_68 [8];
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  if ((param_1 & 0xfffff000) != 0) {
    local_74 = param_1;
    local_78 = &DAT_016ca5bc;
    FUN_00dd5650();
  }
  local_74 = *(undefined4 *)(param_3 + 0xa8);
  local_78 = *(undefined **)(param_3 + 0xa8);
  D3DXMatrixScaling(local_60,*(undefined4 *)(param_3 + 0xa8));
  FUN_00e00b80(param_1 + 0x1000,param_2,&stack0xffffff90,param_3);
  __security_check_cookie(uStack_24 ^ (uint)&local_78);
  return;
}

// 00E015D0  FUN_00e015d0  size=59  [callgraph]
void FUN_00e015d0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,param_1);
  }
  FUN_00e01020(param_1 + 0x1000,param_2,param_3,param_4);
  return;
}

// 00E016D0  FUN_00e016d0  size=134  [callgraph]
void FUN_00e016d0(uint param_1,undefined4 param_2,int param_3)

{
  undefined *local_78;
  uint local_74;
  undefined1 auStack_68 [8];
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  if ((param_1 & 0xfffff000) != 0) {
    local_74 = param_1;
    local_78 = &DAT_016ca5d0;
    FUN_00dd5650();
  }
  local_74 = *(undefined4 *)(param_3 + 0xa8);
  local_78 = *(undefined **)(param_3 + 0xa8);
  D3DXMatrixScaling(local_60,*(undefined4 *)(param_3 + 0xa8));
  FUN_00e00b80(param_1 + 0x2000,param_2,&stack0xffffff90,param_3);
  __security_check_cookie(uStack_24 ^ (uint)&local_78);
  return;
}

// 00E01860  FUN_00e01860  size=167  [callgraph]
void FUN_00e01860(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint local_74;
  undefined1 auStack_64 [4];
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_64;
  if ((param_1 * 0x10000 & 0xfff0ffff) != 0) {
    local_74 = param_1;
    FUN_00dd5650(&DAT_016ca600);
  }
  if ((param_2 & 0xffff0000) != 0) {
    local_74 = param_2;
    FUN_00dd5650(&DAT_016ca5e4);
  }
  local_74 = *(uint *)(param_4 + 0xa8);
  D3DXMatrixScaling(local_60,*(undefined4 *)(param_4 + 0xa8),*(undefined4 *)(param_4 + 0xa8));
  FUN_00e00b80(param_1 * 0x10000 + 0x20000000 + param_2,param_3,&stack0xffffff90,param_4);
  __security_check_cookie(uStack_24 ^ (uint)&local_74);
  return;
}

// 00E01AB0  thunk_FUN_00e00c50  size=5  [callgraph]
void thunk_FUN_00e00c50(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)auStack_14;
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 != 0) {
    __security_check_cookie(uStack_4 ^ (uint)auStack_14);
    return;
  }
  iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0);
  if (iVar1 == 0) {
    __security_check_cookie(uStack_4 ^ (uint)auStack_14);
    return;
  }
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  if (param_1 == 0x7c0000) {
    uVar4 = 0;
  }
  else {
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    uVar4 = param_1;
    if (param_1 == 0xfff) goto LAB_00e00d16;
  }
  iVar3 = FUN_009f8ea0(auStack_14,0x10,param_1,1);
  if (iVar3 != 0) {
    EffectResourceManager::SetEffectResource(uVar4,auStack_14,iVar1,uVar2);
    __security_check_cookie(uStack_4 ^ (uint)auStack_14);
    return;
  }
LAB_00e00d16:
  __security_check_cookie(uStack_4 ^ (uint)auStack_14);
  return;
}

// 00E01AC0  thunk_FUN_00e00d60  size=5  [callgraph]
void thunk_FUN_00e00d60(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (iVar1 = FUN_00de3d30(0,&DAT_016ca67c,0), iVar1 == 0)) {
      return;
    }
    if (param_1 == 0x7c0000) {
      cEffectData::requestCounterDown(0);
      return;
    }
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    if (param_1 != 0xfff) {
      cEffectData::requestCounterDown(param_1);
    }
  }
  return;
}

// 00E01AD0  thunk_FUN_00e00de0  size=5  [callgraph]
void thunk_FUN_00e00de0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 == 0) {
    if (param_1 == 0x7c0000) {
      FUN_00f4b820();
      return;
    }
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    if (param_1 != 0xfff) {
      FUN_00f4b820();
      return;
    }
  }
  return;
}

// 00E01AE0  thunk_FUN_00e00e40  size=5  [callgraph]
void thunk_FUN_00e00e40(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f9420(param_1);
  if (iVar1 == 0) {
    if (param_1 == 0x7c0000) {
      FUN_00f4b860();
      return;
    }
    if ((param_1 < 0x10000) || (param_1 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,param_1);
    }
    if (param_1 != 0xfff) {
      FUN_00f4b860();
      return;
    }
  }
  return;
}

// 00E01B50  FUN_00e01b50  size=91  [callgraph]
uint FUN_00e01b50(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x4f0) != 0)) {
    iVar2 = FUN_00a7c800();
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar2 + 0x4b0);
      if (uVar1 == 0x7c0000) {
        return 0;
      }
      if ((uVar1 < 0x10000) || (uVar1 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c,uVar1);
      }
      return uVar1;
    }
  }
  return 0xfff;
}

// 00E01BB0  thunk_FUN_00e00f00  size=5  [callgraph]
void thunk_FUN_00e00f00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined3 uStack_c;
  undefined1 uStack_9;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&uStack_c;
  FUN_009df6d0();
  iVar1 = FUN_00f4b0b0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00fddccc(param_2,1000);
    uStack_8 = *(undefined4 *)(&DAT_016d4768 + (int)uVar2 * 4);
    _uStack_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar2 >> 0x20)]);
    iVar1 = FUN_00de3d80(0,&uStack_c);
    if (iVar1 != 0) {
      FUN_009df740();
      __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
      return;
    }
  }
  FUN_009df740();
  __security_check_cookie(uStack_4 ^ (uint)&uStack_c);
  return;
}

// 00E01C40  FUN_00e01c40  size=28  [callgraph]
void FUN_00e01c40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e01b50(param_1,param_2);
  FUN_00e00f00(uVar1);
  return;
}

// 00E01CA0  FUN_00e01ca0  size=81  [callgraph]
undefined4 * __fastcall FUN_00e01ca0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  return param_1;
}

// 00E01D00  FUN_00e01d00  size=93  [callgraph]
undefined4 * __thiscall FUN_00e01d00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  param_1[0x21] = param_2;
  return param_1;
}

// 00E01D60  FUN_00e01d60  size=103  [callgraph]
undefined4 * __thiscall FUN_00e01d60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  return param_1;
}

// 00E01DD0  FUN_00e01dd0  size=113  [callgraph]
undefined4 * __thiscall
FUN_00e01dd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  param_1[0x23] = param_4;
  return param_1;
}

// 00E01E50  FUN_00e01e50  size=93  [callgraph]
undefined4 * __thiscall FUN_00e01e50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  param_1[0x20] = param_2;
  return param_1;
}

// 00E01EB0  FUN_00e01eb0  size=93  [callgraph]
undefined4 * __thiscall FUN_00e01eb0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  param_1[0x25] = param_2;
  return param_1;
}

// 00E01F10  FUN_00e01f10  size=16  [callgraph]
void FUN_00e01f10(void)

{
  FUN_00e01540();
  return;
}

// 00E01F60  FUN_00e01f60  size=67  [callgraph]
void FUN_00e01f60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0xfffff000) != 0) {
    FUN_00dd5650(&DAT_016ca5bc,uVar1);
  }
  FUN_00e010c0(uVar1 + 0x1000,param_2,param_3,param_4,param_5);
  return;
}

// 00E02040  FUN_00e02040  size=72  [callgraph]
void __thiscall FUN_00e02040(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_3;
  uVar1 = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_2 = CONCAT31(param_2._1_3_,0xff);
  FUN_00e03850(&param_3,&param_2);
  if (param_3 != param_1 + 4 + *(int *)(param_1 + 0x7c) * 0xc) {
    *(undefined4 *)(param_3 + 4) = uVar1;
    *(int *)(param_3 + 8) = iVar2;
  }
  return;
}

// 00E020F0  FUN_00e020f0  size=73  [callgraph]
void __thiscall FUN_00e020f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_4;
  
  uVar1 = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_2 = CONCAT31(param_2._1_3_,0xff);
  local_4 = param_1;
  FUN_00e03850(&local_4,&param_2);
  if (local_4 != param_1 + 4 + *(int *)(param_1 + 0x7c) * 0xc) {
    *(undefined4 *)(local_4 + 4) = uVar1;
    *(undefined4 *)(local_4 + 8) = 0xffffffff;
  }
  return;
}

// 00E02140  FUN_00e02140  size=128  [callgraph]
void __thiscall FUN_00e02140(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  if (param_4 == -1) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    param_4 = -1;
    uVar2 = 0xffffffff;
    uStack_4 = param_1;
  }
  else {
    uStack_4 = CONCAT13(0xff,(int3)param_1);
    FUN_00e03760((int)&uStack_4 + 3);
    uVar2 = param_3;
    if (9 < *(int *)(param_1 + 0x7c)) {
      FUN_00dd5650(&DAT_016ca698,10);
      return;
    }
  }
  iVar1 = param_2;
  FUN_00e03850(&param_2,&param_4);
  if (param_2 != param_1 + 4 + *(int *)(param_1 + 0x7c) * 0xc) {
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(int *)(param_2 + 4) = iVar1;
  }
  return;
}

// 00E021C0  FUN_00e021c0  size=83  [callgraph]
void __thiscall FUN_00e021c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_4;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x4f0);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    param_2 = CONCAT31(param_2._1_3_,0xff);
    local_4 = param_1;
    FUN_00e03850(&local_4,&param_2);
    if (local_4 != param_1 + 4 + *(int *)(param_1 + 0x7c) * 0xc) {
      *(undefined4 *)(local_4 + 4) = uVar1;
      *(undefined4 *)(local_4 + 8) = 0xffffffff;
    }
  }
  return;
}

// 00E02240  FUN_00e02240  size=344  [callgraph]
void FUN_00e02240(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_184 [4];
  undefined1 auStack_180 [11];
  undefined1 local_175;
  undefined1 *local_174;
  undefined4 local_170;
  undefined1 local_16c [120];
  int local_f4;
  undefined4 local_e4;
  undefined4 local_c8;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
  if (param_1 == 0) {
    uVar2 = 0xfff;
  }
  else {
    iVar1 = FUN_00a7c800();
    if (iVar1 == 0) {
      uVar2 = 0xfff;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x4b0);
      if (uVar2 == 0x7c0000) {
        uVar2 = 0;
      }
      else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c);
      }
    }
  }
  local_170 = 0;
  local_f4 = 0;
  _memset(local_16c,0,0x78);
  local_e4 = 0;
  local_80 = 0xffff;
  local_7e = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  FUN_00e00990();
  local_f4 = 0;
  local_175 = 0xff;
  FUN_00e03850(&local_174);
  if (local_174 != local_16c + local_f4 * 0xc) {
    *(int *)(local_174 + 4) = param_1;
    *(undefined4 *)(local_174 + 8) = 0xffffffff;
  }
  D3DXMatrixScaling(local_60,local_c8,local_c8);
  FUN_00e00b80(uVar2,param_2,auStack_70,auStack_180);
  __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffe6c);
  return;
}

// 00E023A0  FUN_00e023a0  size=311  [callgraph]
void FUN_00e023a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_144 [11];
  undefined1 local_139;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [120];
  int local_b4;
  undefined4 local_a4;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_144;
  local_134 = param_3;
  if (param_1 == 0) {
    uVar2 = 0xfff;
  }
  else {
    iVar1 = FUN_00a7c800();
    if (iVar1 == 0) {
      uVar2 = 0xfff;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x4b0);
      if (uVar2 == 0x7c0000) {
        uVar2 = 0;
      }
      else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c,uVar2);
      }
    }
  }
  local_130 = 0;
  local_b4 = 0;
  _memset(local_12c,0,0x78);
  local_3e = 0;
  local_a4 = 0;
  local_40 = 0xffff;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_00e00990();
  local_b4 = 0;
  local_139 = 0xff;
  FUN_00e03850(&local_138,&local_139);
  if (local_138 != local_12c + local_b4 * 0xc) {
    *(int *)(local_138 + 4) = param_1;
    *(undefined4 *)(local_138 + 8) = 0xffffffff;
  }
  FUN_00e01020(uVar2,param_2,local_134,&local_130);
  __security_check_cookie(local_14 ^ (uint)auStack_144);
  return;
}

// 00E024E0  FUN_00e024e0  size=327  [callgraph]
void FUN_00e024e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_144 [7];
  undefined1 local_13d;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined1 local_12c [120];
  int local_b4;
  undefined4 local_a4;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_144;
  local_138 = param_3;
  local_13c = param_4;
  if (param_1 == 0) {
    uVar2 = 0xfff;
  }
  else {
    iVar1 = FUN_00a7c800();
    if (iVar1 == 0) {
      uVar2 = 0xfff;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x4b0);
      if (uVar2 == 0x7c0000) {
        uVar2 = 0;
      }
      else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c,uVar2);
      }
    }
  }
  local_130 = 0;
  local_b4 = 0;
  _memset(local_12c,0,0x78);
  local_40 = 0xffff;
  local_a4 = 0;
  local_3e = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_00e00990();
  local_b4 = 0;
  local_13d = 0xff;
  FUN_00e03850(&local_134,&local_13d);
  if (local_134 != local_12c + local_b4 * 0xc) {
    *(int *)(local_134 + 4) = param_1;
    *(undefined4 *)(local_134 + 8) = 0xffffffff;
  }
  FUN_00e010c0(uVar2,param_2,local_138,local_13c,&local_130);
  __security_check_cookie(local_14 ^ (uint)auStack_144);
  return;
}

// 00E02630  FUN_00e02630  size=311  [callgraph]
void FUN_00e02630(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_144 [11];
  undefined1 local_139;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [120];
  int local_b4;
  undefined4 local_a4;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_144;
  local_134 = param_3;
  if (param_1 == 0) {
    uVar2 = 0xfff;
  }
  else {
    iVar1 = FUN_00a7c800();
    if (iVar1 == 0) {
      uVar2 = 0xfff;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x4b0);
      if (uVar2 == 0x7c0000) {
        uVar2 = 0;
      }
      else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c,uVar2);
      }
    }
  }
  local_130 = 0;
  local_b4 = 0;
  _memset(local_12c,0,0x78);
  local_3e = 0;
  local_a4 = 0;
  local_40 = 0xffff;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_00e00990();
  local_b4 = 0;
  local_139 = 0xff;
  FUN_00e03850(&local_138,&local_139);
  if (local_138 != local_12c + local_b4 * 0xc) {
    *(int *)(local_138 + 4) = param_1;
    *(undefined4 *)(local_138 + 8) = 0xffffffff;
  }
  FUN_00e00b80(uVar2,param_2,local_134,&local_130);
  __security_check_cookie(local_14 ^ (uint)auStack_144);
  return;
}

// 00E02770  FUN_00e02770  size=327  [callgraph]
void FUN_00e02770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_144 [7];
  undefined1 local_13d;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined1 local_12c [120];
  int local_b4;
  undefined4 local_a4;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_144;
  local_138 = param_3;
  local_13c = param_4;
  if (param_1 == 0) {
    uVar2 = 0xfff;
  }
  else {
    iVar1 = FUN_00a7c800();
    if (iVar1 == 0) {
      uVar2 = 0xfff;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x4b0);
      if (uVar2 == 0x7c0000) {
        uVar2 = 0;
      }
      else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c,uVar2);
      }
    }
  }
  local_130 = 0;
  local_b4 = 0;
  _memset(local_12c,0,0x78);
  local_40 = 0xffff;
  local_a4 = 0;
  local_3e = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_00e00990();
  local_b4 = 0;
  local_13d = 0xff;
  FUN_00e03850(&local_134,&local_13d);
  if (local_134 != local_12c + local_b4 * 0xc) {
    *(int *)(local_134 + 4) = param_1;
    *(undefined4 *)(local_134 + 8) = 0xffffffff;
  }
  FUN_00e01270(uVar2,param_2,local_138,local_13c,&local_130);
  __security_check_cookie(local_14 ^ (uint)auStack_144);
  return;
}

// 00E028C0  FUN_00e028c0  size=266  [callgraph]
void FUN_00e028c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined1 *local_84;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [7];
  undefined1 local_69;
  undefined1 *local_68;
  int local_64;
  undefined1 local_60 [60];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_74;
  if (param_1 == 0) {
    local_68 = (undefined1 *)0xfff;
  }
  else {
    local_84 = (undefined1 *)0xe028f2;
    iVar1 = FUN_00a7c800();
    if (iVar1 == 0) {
      local_68 = (undefined1 *)0xfff;
    }
    else {
      local_84 = *(undefined1 **)(iVar1 + 0x4b0);
      if (local_84 == (undefined1 *)0x7c0000) {
        local_68 = (undefined1 *)0x0;
      }
      else {
        local_68 = local_84;
        if ((local_84 < (undefined1 *)0x10000) || (local_84 + -0x20000000 < (undefined1 *)0x100000))
        {
          FUN_00dd5650(&DAT_0163e20c);
        }
      }
    }
  }
  if (*(int *)(param_3 + 0x7c) == 0) {
    local_84 = &local_69;
    *(undefined4 *)(param_3 + 0x7c) = 0;
    local_69 = 0xff;
    FUN_00e03850(&local_64);
    if (local_64 != param_3 + 4 + *(int *)(param_3 + 0x7c) * 0xc) {
      *(int *)(local_64 + 4) = param_1;
      *(undefined4 *)(local_64 + 8) = 0xffffffff;
    }
  }
  local_84 = *(undefined1 **)(param_3 + 0xa8);
  D3DXMatrixScaling(local_60,*(undefined4 *)(param_3 + 0xa8),*(undefined4 *)(param_3 + 0xa8));
  FUN_00e00b80(unaff_EBX,param_2,auStack_70,param_3);
  __security_check_cookie(uStack_24 ^ (uint)&local_84);
  return;
}

// 00E029D0  FUN_00e029d0  size=183  [callgraph]
void FUN_00e029d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    uVar3 = 0xfff;
  }
  else {
    iVar2 = FUN_00a7c800();
    if (iVar2 == 0) {
      uVar3 = 0xfff;
    }
    else {
      uVar3 = *(uint *)(iVar2 + 0x4b0);
      if (uVar3 == 0x7c0000) {
        uVar3 = 0;
      }
      else if ((uVar3 < 0x10000) || (uVar3 + 0xe0000000 < 0x100000)) {
        FUN_00dd5650(&DAT_0163e20c,uVar3);
      }
    }
  }
  iVar2 = param_4;
  if (*(int *)(param_4 + 0x7c) == 0) {
    *(undefined4 *)(param_4 + 0x7c) = 0;
    param_1 = CONCAT31(param_1._1_3_,0xff);
    FUN_00e03850(&param_4,&param_1);
    if (param_4 != iVar2 + 4 + *(int *)(iVar2 + 0x7c) * 0xc) {
      *(int *)(param_4 + 4) = iVar1;
      *(undefined4 *)(param_4 + 8) = 0xffffffff;
    }
  }
  FUN_00e01020(uVar3,param_2,param_3,iVar2);
  return;
}

// 00E02CD0  FUN_00e02cd0  size=19  [callgraph]
void FUN_00e02cd0(void)

{
  FUN_00e02240();
  return;
}

// 00E02CF0  FUN_00e02cf0  size=19  [callgraph]
void FUN_00e02cf0(void)

{
  FUN_00e023a0();
  return;
}

// 00E02D10  FUN_00e02d10  size=19  [callgraph]
void FUN_00e02d10(void)

{
  FUN_00e024e0();
  return;
}

// 00E02D50  FUN_00e02d50  size=19  [callgraph]
void FUN_00e02d50(void)

{
  FUN_00e028c0();
  return;
}

// 00E02D70  FUN_00e02d70  size=19  [callgraph]
void FUN_00e02d70(void)

{
  FUN_00e029d0();
  return;
}

// 00E02DF0  FUN_00e02df0  size=161  [callgraph]
undefined4 * __thiscall
FUN_00e02df0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  uVar1 = param_4;
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  param_1[0x1f] = 0;
  param_2 = CONCAT31(param_2._1_3_,0xff);
  FUN_00e03850(&param_3,&param_2);
  if (param_3 != param_1 + param_1[0x1f] * 3 + 1) {
    param_3[1] = uVar1;
    param_3[2] = 0xffffffff;
  }
  return param_1;
}

// 00E02EA0  FUN_00e02ea0  size=171  [callgraph]
undefined4 * __thiscall
FUN_00e02ea0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[0x1f] = 0;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(param_4 + 0x4f0);
    param_1[0x1f] = 0;
    param_2 = CONCAT31(param_2._1_3_,0xff);
    FUN_00e03850(&param_3,&param_2);
    if (param_3 != param_1 + param_1[0x1f] * 3 + 1) {
      param_3[1] = uVar1;
      param_3[2] = 0xffffffff;
    }
  }
  return param_1;
}

// 00E02FE0  FUN_00e02fe0  size=153  [callgraph]
undefined4 * __thiscall FUN_00e02fe0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_4;
  
  *param_1 = 0;
  param_1[0x1f] = 0;
  local_4 = param_1;
  _memset(param_1 + 1,0,0x78);
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_00e00990();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x4f0);
    param_1[0x1f] = 0;
    param_2 = CONCAT31(param_2._1_3_,0xff);
    FUN_00e03850(&local_4,&param_2);
    if (local_4 != param_1 + param_1[0x1f] * 3 + 1) {
      local_4[1] = uVar1;
      local_4[2] = 0xffffffff;
    }
  }
  return param_1;
}

// 00F49E10  EffectResourceManager::GetNameFromEventNo  size=533  [class]
void EffectResourceManager::GetNameFromEventNo
               (undefined2 *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  
  if ((param_3 < 0) || (0xf < param_3)) {
    FUN_00dd5650(&DAT_016e05a4,
                 "EffectResourceManager::GetNameFromEventNo: (0 <= event_type) && (event_type <= 0xf)"
                );
  }
  if (((int)param_4 < 0) || (0xffff < (int)param_4)) {
    FUN_00dd5650(&DAT_016e05fc,
                 "EffectResourceManager::GetNameFromEventNo: (0 <= event_no) && (event_no <= 0xffff)"
                );
  }
  if (param_3 == 0) {
    if (param_2 < 6) {
      FUN_00dd5650(&DAT_016e0654,
                   "EffectResourceManager::GetNameFromEventNo: size >= EFFECT_RESOURCE_NAME_SIZE_EVENT"
                  );
    }
    *param_1 = 0x5645;
    *(char *)(param_1 + 1) = "0123456789abcdef"[param_4 >> 0xc & 0xf];
    *(char *)((int)param_1 + 3) = "0123456789abcdef"[param_4 >> 8 & 0xf];
    *(char *)(param_1 + 2) = "0123456789abcdef"[param_4 >> 4 & 0xf];
    *(char *)((int)param_1 + 5) = "0123456789abcdef"[param_4 & 0xf];
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (param_3 == 1) {
      if (param_2 < 0xb) {
        FUN_00dd5650(&DAT_016e06b0,
                     "EffectResourceManager::GetNameFromEventNo: size >= EFFECT_RESOURCE_NAME_SIZE_ROOMEVENT"
                    );
      }
      *(undefined1 *)param_1 = 0x52;
      uVar2 = FUN_00932710();
      *(char *)((int)param_1 + 1) = "0123456789abcdef"[uVar2 >> 8 & 0xf];
      *(char *)(param_1 + 1) = "0123456789abcdef"[uVar2 >> 4 & 0xf];
      *(char *)((int)param_1 + 3) = "0123456789abcdef"[uVar2 & 0xf];
      param_1[2] = 0x5645;
      *(char *)(param_1 + 3) = "0123456789abcdef"[param_4 >> 0xc & 0xf];
      *(char *)((int)param_1 + 7) = "0123456789abcdef"[param_4 >> 8 & 0xf];
      *(char *)(param_1 + 4) = "0123456789abcdef"[param_4 >> 4 & 0xf];
      cVar1 = "0123456789abcdef"[param_4 & 0xf];
      *(undefined1 *)(param_1 + 5) = 0;
      *(char *)((int)param_1 + 9) = cVar1;
      return;
    }
    if (param_3 == 2) {
      if (param_2 < 0xb) {
        FUN_00dd5650(&DAT_016e06b4,
                     "EffectResourceManager::GetNameFromEventNo: size >= EFFECT_RESOURCE_NAME_SIZE_PHASEEVENT"
                    );
      }
      *(undefined1 *)param_1 = 0x50;
      uVar2 = FUN_00932720();
      *(char *)((int)param_1 + 1) = "0123456789abcdef"[uVar2 >> 8 & 0xf];
      *(char *)(param_1 + 1) = "0123456789abcdef"[uVar2 >> 4 & 0xf];
      *(char *)((int)param_1 + 3) = "0123456789abcdef"[uVar2 & 0xf];
      param_1[2] = 0x5645;
      *(char *)(param_1 + 3) = "0123456789abcdef"[param_4 >> 0xc & 0xf];
      *(char *)((int)param_1 + 7) = "0123456789abcdef"[param_4 >> 8 & 0xf];
      *(char *)(param_1 + 4) = "0123456789abcdef"[param_4 >> 4 & 0xf];
      cVar1 = "0123456789abcdef"[param_4 & 0xf];
      *(undefined1 *)(param_1 + 5) = 0;
      *(char *)((int)param_1 + 9) = cVar1;
      return;
    }
  }
  return;
}

// 00F4A060  FUN_00f4a060  size=146  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f4a060(void)

{
  DAT_01ee546c = 0;
  DAT_01ee5470 = 0;
  DAT_01ee5474 = 0;
  DAT_01ee5478 = 0;
  DAT_01ee545c = 0;
  _DAT_01ee547c = 0;
  _DAT_01ee5480 = 0;
  DAT_01ee54c0 = 0;
  DAT_01ee54c4 = 0;
  DAT_01ee54c8 = 0;
  DAT_01ee54cc = 0;
  DAT_01ee54b0 = 0;
  _DAT_01ee54d0 = 0;
  _DAT_01ee54d4 = 0;
  _DAT_01ee5514 = 0;
  _DAT_01ee551c = 0;
  _DAT_01ee5520 = 0;
  _DAT_01ee5524 = 0;
  _DAT_01ee5528 = 0;
  _DAT_01ee5518 = 1;
  _DAT_01ee5504 = 0x54494445;
  DAT_01ee5508 = 0;
  _DAT_01ee54e0 = 2;
  return;
}

// 00F4A100  EffectResourceManager::CheckGetId  size=371  [class]
undefined4 EffectResourceManager::CheckGetId(int param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    FUN_00dd5650(&DAT_016e0884,"[EffectResourceManager::CheckGetId] pTarget != NULL");
  }
  if (param_2 == (byte *)0x0) {
    FUN_00dd5650(&DAT_016e09c4,"[EffectResourceManager::CheckGetId] pFormat != NULL");
  }
  iVar4 = -1;
  if (*param_2 != 0) {
    param_1 = param_1 - (int)param_2;
    bVar3 = 0;
    do {
      bVar1 = param_2[param_1];
      bVar2 = *param_2;
      if (bVar2 == 0x2a) {
        uVar5 = (uint)(byte)(&DAT_016cabd0)[bVar1];
        if (uVar5 == 0xff) {
          return 0;
        }
        if ((param_3 != 0) && (iVar4 < param_4)) {
          if (bVar3 == 0x2a) {
            if (iVar4 < 0) {
              FUN_00dd5650(&DAT_016e09f8,"[EffectResourceManager::CheckGetId] posD >= 0");
            }
            *(uint *)(param_3 + iVar4 * 4) = *(int *)(param_3 + iVar4 * 4) * 0x10 + uVar5;
          }
          else {
            if (iVar4 + 1 < 0) {
              pcVar7 = "[EffectResourceManager::CheckGetId] posD >= 0";
              puVar6 = &DAT_016e0a2c;
LAB_00f4a24a:
              FUN_00dd5650(puVar6,pcVar7);
            }
LAB_00f4a252:
            iVar4 = iVar4 + 1;
            *(uint *)(param_3 + iVar4 * 4) = uVar5;
          }
        }
      }
      else if (bVar2 == 0x2b) {
        uVar5 = (uint)(byte)(&DAT_016caad0)[bVar1];
        if (uVar5 == 0xff) {
          return 0;
        }
        if ((param_3 != 0) && (iVar4 < param_4)) {
          if (bVar3 != 0x2b) {
            if (iVar4 + 1 < 0) {
              pcVar7 = "[EffectResourceManager::CheckGetId] posD >= 0";
              puVar6 = &DAT_016e0a94;
              goto LAB_00f4a24a;
            }
            goto LAB_00f4a252;
          }
          if (iVar4 < 0) {
            FUN_00dd5650(&DAT_016e0a60,"[EffectResourceManager::CheckGetId] posD >= 0");
          }
          *(uint *)(param_3 + iVar4 * 4) = uVar5 + *(int *)(param_3 + iVar4 * 4) * 10;
        }
      }
      else if ((bVar2 != 0x2d) && ((&DAT_016cbe20)[bVar2] != (&DAT_016cbe20)[bVar1])) {
        return 0;
      }
      param_2 = param_2 + 1;
      bVar3 = bVar2;
    } while (*param_2 != 0);
  }
  return 1;
}

// 00F4AFF0  FUN_00f4aff0  size=188  [callgraph]
bool FUN_00f4aff0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_00ec4790(&DAT_016e0098);
    return false;
  }
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    FUN_00ec4790(&DAT_016e00c0);
    return false;
  }
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    FUN_00ec4790(&DAT_016e00ec);
    return false;
  }
  Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
  cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
  iVar1 = FUN_00f4dc70(0x400,param_1);
  if (iVar1 == 0) {
    FUN_00ec4790(&DAT_016e0118);
    return false;
  }
  Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
  cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3();
  iVar1 = FUN_00f4dd40(0x400,param_1);
  if (iVar1 == 0) {
    FUN_00ec4790(&DAT_016e013c);
    return false;
  }
  FUN_00f4a060();
  iVar1 = FUN_00f4aa40(param_1);
  return iVar1 != 0;
}

// 00F4B0B0  FUN_00f4b0b0  size=116  [callgraph]
undefined * FUN_00f4b0b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 < 4) {
    return &DAT_01ee5430 + param_1 * 0x54;
  }
  if ((((int)DAT_018d72b4 < 1) ||
      (pvVar1 = _bsearch(&param_1,DAT_018d72ac,DAT_018d72b4,4,(_PtFuncCompare *)&LAB_00f4d510),
      pvVar1 == (void *)0x0)) || (iVar2 = (int)pvVar1 - (int)DAT_018d72ac >> 2, iVar2 < 0)) {
    piVar3 = (int *)((int)DAT_018d72ac + DAT_018d72b4 * 4);
  }
  else {
    piVar3 = (int *)((int)DAT_018d72ac + iVar2 * 4);
  }
  if (piVar3 == (int *)((int)DAT_018d72ac + DAT_018d72b4 * 4)) {
    return (undefined *)0x0;
  }
  return *(undefined **)(*piVar3 + 4);
}

// 00F4B130  FUN_00f4b130  size=45  [callgraph]
void __fastcall FUN_00f4b130(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xfff;
  FUN_00f4ace0();
  FUN_00f4ae70();
  return;
}

// 00F4B160  FUN_00f4b160  size=453  [callgraph]
void __fastcall FUN_00f4b160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_018e8764 ^ (uint)auStack_24;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 == 0) {
    uVar5 = 0;
    do {
      uStack_1c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[uVar5]);
      uStack_18 = 0x7477;
      uStack_16 = 0x61;
      uStack_15 = 0;
      uVar2 = FUN_00de3d80(0,&uStack_1c);
      uStack_16 = 0x70;
      iVar1 = FUN_00de3d80(1,&uStack_1c);
      if ((iVar1 == 0) || (iVar1 = FUN_00f4ab60(uVar5,uVar2,iVar1), iVar1 == 0)) {
        uStack_14 = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[uVar5]);
        uStack_10 = 0x627477;
        iVar1 = FUN_00de3d80(1,&uStack_14);
        if ((iVar1 == 0) || (iVar1 = FUN_00f4aa90(uVar5,iVar1), iVar1 == 0)) goto LAB_00f4b25e;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xff);
  }
  else {
    iVar4 = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
    if (iVar1 != 0) {
      uStack_1c = *(int *)(param_1 + 0xc);
      uVar2 = (**(code **)(uStack_1c + 4))(1);
      iVar1 = (**(code **)(uStack_1c + 0x14))(uVar2);
      if ((iVar1 != -1) && (iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(iVar1), 0 < iVar1)
         ) {
        do {
          uStack_1c = 0;
          uStack_20 = 0;
          uStack_14 = 0xffff;
          iVar3 = FUN_00ec78f0(&uStack_14,&uStack_1c,&uStack_20,iVar4);
          if (((iVar3 == 0) || (iVar3 = FUN_00f4ab60(uStack_14,uStack_1c,uStack_20), iVar3 == 0)) &&
             ((iVar3 = FUN_00ec77e0(&uStack_14,&uStack_20,iVar4), iVar3 == 0 ||
              (iVar3 = FUN_00f4aa90(uStack_14,uStack_20), iVar3 == 0)))) {
LAB_00f4b25e:
            __security_check_cookie(local_c ^ (uint)auStack_24);
            return;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}

// 00F4B330  FUN_00f4b330  size=427  [callgraph]
void __fastcall FUN_00f4b330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  undefined1 uStack_18;
  undefined1 *puStack_17;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  char cStack_d;
  undefined1 uStack_c;
  undefined4 uStack_b;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&uStack_28;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 == 0) {
    uVar5 = 0;
    do {
      cStack_1c = "0123456789abcdef"[uVar5 >> 0xc & 0xf];
      cStack_1b = "0123456789abcdef"[uVar5 >> 8 & 0xf];
      cStack_1a = "0123456789abcdef"[uVar5 >> 4 & 0xf];
      cStack_19 = "0123456789abcdef"[uVar5 & 0xf];
      uStack_18 = 0x2e;
      puStack_17 = &LAB_00746164;
      uStack_c = 0x2e;
      uStack_b = 0x747464;
      cStack_10 = cStack_1c;
      cStack_f = cStack_1b;
      cStack_e = cStack_1a;
      cStack_d = cStack_19;
      iVar1 = FUN_00de3d80(0,&cStack_1c);
      uVar2 = FUN_00de3d80(1,&cStack_10);
      if ((iVar1 != 0) && (iVar1 = FUN_00f4ac40(uVar5,iVar1,uVar2), iVar1 == 0)) goto LAB_00f4b3f2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x255);
  }
  else {
    iVar4 = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      uVar2 = (**(code **)(iVar1 + 4))(2);
      iVar1 = (**(code **)(iVar1 + 0x14))(uVar2);
      if ((iVar1 != -1) && (iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(iVar1), 0 < iVar1)
         ) {
        do {
          uStack_28 = 0xffff;
          uStack_20 = 0;
          uStack_24 = 0;
          iVar3 = FUN_00ec7a30(&uStack_28,&uStack_20,&uStack_24,iVar4);
          if ((iVar3 == 0) || (iVar3 = FUN_00f4ac40(uStack_28,uStack_20,uStack_24), iVar3 == 0)) {
LAB_00f4b3f2:
            __security_check_cookie(local_4 ^ (uint)&uStack_28);
            return;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&uStack_28);
  return;
}

// 00F4B4E0  EffectResourceManager::OnDestroyResource  size=493  [class]
void EffectResourceManager::OnDestroyResource(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  
  if (DAT_01ee6550 != 0) {
    EspReadWriteLock::enterWrite();
    piVar5 = &DAT_01ee546c;
    iVar4 = 3;
    do {
      if ((0 < *piVar5) && ((char)piVar5[-4] != '\0')) {
        iVar2 = FUN_00ec7630(param_1,param_2);
        if (iVar2 != 0) {
          FUN_00dd5650(&DAT_016e0198,piVar5 + -4);
          FUN_009e02a0(piVar5 + -0xf);
          *(undefined2 *)(piVar5 + 3) = 0;
          *(undefined1 *)(piVar5 + -4) = 0;
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[-0xd] = 0xfff;
          FUN_00f4ace0();
          FUN_00f4ae70();
        }
      }
      piVar5 = piVar5 + 0x15;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = DAT_018d72ac;
    puVar6 = DAT_018d72ac;
    if (DAT_018d72ac != DAT_018d72ac + DAT_018d72b4) {
      do {
        uVar1 = *(uint *)(*puVar6 + 4);
        if (((*(int *)(uVar1 + 0x3c) < 1) || (*(char *)(uVar1 + 0x2c) == '\0')) ||
           (iVar4 = FUN_00ec7630(param_1,param_2), puVar3 = DAT_018d72ac, iVar4 == 0)) {
          puVar6 = puVar6 + 1;
        }
        else {
          FUN_00dd5650(&DAT_016e01e8,(undefined1 *)(uVar1 + 0x2c));
          FUN_009e02a0(uVar1);
          *(undefined2 *)(uVar1 + 0x48) = 0;
          *(undefined1 *)(uVar1 + 0x2c) = 0;
          *(undefined4 *)(uVar1 + 0x3c) = 0;
          *(undefined4 *)(uVar1 + 0x40) = 0;
          *(undefined4 *)(uVar1 + 0x44) = 0;
          *(undefined4 *)(uVar1 + 8) = 0xfff;
          FUN_00f4ace0();
          FUN_00f4ae70();
          if (((DAT_018d72d8 != 0) && (DAT_018d72d8 <= uVar1)) &&
             (uVar1 < DAT_018d72dc * 0x58 + DAT_018d72d8)) {
            cXml::cXml_8();
            FUN_00f4c880(uVar1);
          }
          uVar1 = *puVar6;
          if (uVar1 != 0) {
            if (((DAT_018d7298 != 0) && (DAT_018d7298 <= uVar1)) &&
               (uVar1 < DAT_018d7298 + DAT_018d729c * 0xc)) {
              FUN_00f4ca90(uVar1);
            }
            *puVar6 = 0;
          }
          iVar2 = (int)puVar6 - (int)DAT_018d72ac >> 2;
          iVar4 = iVar2;
          if (iVar2 < DAT_018d72b4 + -1) {
            do {
              DAT_018d72ac[iVar4] = DAT_018d72ac[iVar4 + 1];
              iVar4 = iVar4 + 1;
            } while (iVar4 < DAT_018d72b4 + -1);
          }
          DAT_018d72b4 = DAT_018d72b4 + -1;
          puVar6 = DAT_018d72ac + iVar2;
          puVar3 = DAT_018d72ac;
        }
      } while (puVar6 != puVar3 + DAT_018d72b4);
    }
    FUN_00eaac50();
    return;
  }
  return;
}

// 00F4B6D0  FUN_00f4b6d0  size=331  [callgraph]
void FUN_00f4b6d0(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *local_50;
  undefined3 local_4c;
  undefined1 uStack_49;
  undefined4 local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_50;
  local_50 = param_2;
  FUN_009df6d0();
  iVar1 = FUN_00f4b0b0(param_3);
  *local_50 = iVar1;
  if (iVar1 == 0) {
    FUN_00f4a7a0(local_44,0x40,param_3,0);
    FUN_00ec4790(&DAT_016e0758,local_44,param_4);
    FUN_009df740();
    __security_check_cookie(local_4 ^ (uint)&local_50);
    return;
  }
  uVar3 = FUN_00fddccc(param_4,1000);
  local_48 = *(undefined4 *)(&DAT_016d4768 + (int)uVar3 * 4);
  _local_4c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar3 >> 0x20)]);
  iVar1 = FUN_00de3d80(0,&local_4c);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    iVar1 = param_4 + -1000;
    if (999 < param_4 - 1000U) {
      iVar1 = param_4;
    }
    puVar2 = &DAT_016e07a0;
    if (999 < param_4 - 1000U) {
      puVar2 = &DAT_016e07a4;
    }
    FUN_00ec4790(&DAT_016e0820,*local_50 + 0x2c,iVar1,puVar2);
    FUN_009df740();
    __security_check_cookie(local_4 ^ (uint)&local_50);
    return;
  }
  FUN_009df740();
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}

// 00F4B820  FUN_00f4b820  size=54  [callgraph]
void FUN_00f4b820(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_01ee6550 != 0) {
    EspReadWriteLock::enterWrite();
    iVar1 = FUN_00f4b0b0(param_1);
    if (iVar1 != 0) {
      FUN_00f4a450();
    }
    FUN_00eaac50();
    return;
  }
  return;
}

// 00F4B860  FUN_00f4b860  size=54  [callgraph]
void FUN_00f4b860(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_01ee6550 != 0) {
    EspReadWriteLock::enterWrite();
    iVar1 = FUN_00f4b0b0(param_1);
    if (iVar1 != 0) {
      cEffectData::useCounterDown();
    }
    FUN_00eaac50();
    return;
  }
  return;
}

// 00F4C130  EffectResourceManager::SetEffectResource  size=538  [class]
undefined4 EffectResourceManager::SetEffectResource(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_3;
  if (param_3 == 0) {
    FUN_00dd5650(&DAT_016e0270,"EffectResourceManager::SetEffectResource: pData != NULL");
  }
  if (DAT_01ee6550 != 0) {
    puVar6 = &DAT_01885e50;
    iVar3 = DAT_01885e50;
    while (iVar3 != -1) {
      if (param_1 == iVar3) {
        param_1 = puVar6[1];
        break;
      }
      piVar1 = puVar6 + 2;
      puVar6 = puVar6 + 2;
      iVar3 = *piVar1;
    }
    if (param_1 != 0xffe) {
      if (param_1 < 4) {
        EspReadWriteLock::enterWrite();
        uVar2 = FUN_00f4be20(param_1,param_2,iVar5,param_4);
        FUN_00eaac50();
        return uVar2;
      }
      EspReadWriteLock::enterWrite();
      iVar3 = FUN_00f4b0b0(param_1);
      if (iVar3 == 0) {
        FUN_00eaac50();
        iVar3 = FUN_00f4a970();
        param_3 = iVar3;
        if (iVar3 == 0) {
          FUN_00dd5650(&DAT_016e0448);
          return 0;
        }
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x40) = 0;
        *(undefined2 *)(iVar3 + 0x48) = 0;
        *(undefined1 *)(iVar3 + 0x2c) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x50) = 0;
        iVar5 = Fw::StringCopy(param_1,param_2,iVar5,param_4);
        if (iVar5 == 0) {
          FUN_00f4cf80(iVar3);
          FUN_00dd5650(&DAT_016e0498);
          return 0;
        }
        EspReadWriteLock::enterWrite();
        FUN_00f4e660(&param_1,&param_3);
        FUN_00eaac50();
        return 1;
      }
      iVar4 = FUN_00de3560();
      if (iVar5 != iVar4) {
        if (param_2 != 0) {
          FUN_00dd5650(&DAT_016e02a8,param_2);
          FUN_00eaac50();
          return 0;
        }
        FUN_00dd5650(&DAT_016e0310);
        FUN_00eaac50();
        return 0;
      }
      iVar5 = FUN_00de3550();
      if (param_4 == iVar5) {
        *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + 1;
        FUN_00eaac50();
        return 1;
      }
      if (param_2 != 0) {
        FUN_00dd5650(&DAT_016e0378,param_2);
        FUN_00eaac50();
        return 0;
      }
      FUN_00dd5650(&DAT_016e03e0);
      FUN_00eaac50();
      return 0;
    }
  }
  return 0;
}

// 00F4C350  FUN_00f4c350  size=69  [callgraph]
undefined4 FUN_00f4c350(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00de3d30(0,&DAT_016e015c,0);
  uVar2 = FUN_00de3d30(1,&DAT_016e0160,0);
  if (iVar1 != 0) {
    EffectResourceManager::SetEffectResource(0,&DAT_016e0164,iVar1,uVar2);
  }
  return 1;
}

// 00F4C3A0  FUN_00f4c3a0  size=57  [callgraph]
undefined4 FUN_00f4c3a0(void)

{
  undefined4 uVar1;
  
  if (DAT_01ee6570 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ee6558);
    uVar1 = cEffectData::requestCounterDown_2();
    if (DAT_01ee6570 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ee6558);
    }
    return uVar1;
  }
  uVar1 = cEffectData::requestCounterDown_2();
  return uVar1;
}

// 00F4C420  FUN_00f4c420  size=12  [callgraph]
undefined4 __fastcall FUN_00f4c420(undefined4 param_1)

{
  FUN_00ec75e0();
  return param_1;
}

// 00F4C4A0  FUN_00f4c4a0  size=47  [callgraph]
void __thiscall FUN_00f4c4a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar1 != 0) {
    param_1 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_2 + 0x24) = param_1;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

// 00F4C520  FUN_00f4c520  size=62  [callgraph]
void __thiscall FUN_00f4c520(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  while (iVar1 != 0) {
    param_1 = *(int *)(param_1 + 0xa4);
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  *(int *)(param_1 + 0xa4) = param_2;
  *(int *)(param_2 + 0xa0) = param_1;
  *(undefined4 *)(param_2 + 0xa4) = 0;
  return;
}

// 00F4C640  FUN_00f4c640  size=30  [callgraph]
undefined4 __thiscall FUN_00f4c640(undefined4 param_1,byte param_2)

{
  cXml::cXml_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F4C7D0  FUN_00f4c7d0  size=120  [callgraph]
undefined4 __thiscall FUN_00f4c7d0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_016e0d60,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00F4C880  FUN_00f4c880  size=71  [callgraph]
void __thiscall FUN_00f4c880(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x54) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00f4c8c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00F4C8D0  FUN_00f4c8d0  size=155  [callgraph]
longlong __fastcall FUN_00f4c8d0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x54));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00F4CA10  FUN_00f4ca10  size=15  [callgraph]
undefined4 __fastcall FUN_00f4ca10(undefined4 param_1)

{
  Hw::cTexture::cTexture_6();
  return param_1;
}

// 00F4CA20  FUN_00f4ca20  size=15  [callgraph]
undefined4 __fastcall FUN_00f4ca20(undefined4 param_1)

{
  FUN_00f49a20();
  return param_1;
}

// 00F4CA90  FUN_00f4ca90  size=71  [callgraph]
void __thiscall FUN_00f4ca90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 8) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00f4cad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00F4CAE0  FUN_00f4cae0  size=71  [callgraph]
void __thiscall FUN_00f4cae0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x38) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00f4cb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00F4CB30  FUN_00f4cb30  size=155  [callgraph]
longlong __fastcall FUN_00f4cb30(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x38));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00F4CBD0  FUN_00f4cbd0  size=74  [callgraph]
void __thiscall FUN_00f4cbd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0xb4) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00f4cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00F4CC20  FUN_00f4cc20  size=158  [callgraph]
longlong __fastcall FUN_00f4cc20(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0xb4));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00F4CD70  FUN_00f4cd70  size=155  [callgraph]
longlong __fastcall FUN_00f4cd70(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 8));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00F4CF80  FUN_00f4cf80  size=68  [callgraph]
undefined4 __thiscall FUN_00f4cf80(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x1c) * 0x58 + uVar1)) {
    cXml::cXml_8();
    FUN_00f4c880(param_2);
    return 1;
  }
  return 0;
}

// 00F4CFD0  FUN_00f4cfd0  size=111  [callgraph]
void __thiscall FUN_00f4cfd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 < 0xf000) || (0xf01f < iVar1)) {
    if (999 < iVar1) {
      FUN_00dd5650(&DAT_016e0ba0,iVar1,1000);
      return;
    }
    piVar3 = (int *)(param_1 + 0x28 + iVar1 * 4);
  }
  else {
    piVar3 = (int *)(param_1 + -0x3b038 + iVar1 * 4);
  }
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x30);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x30);
      iVar2 = *(int *)(iVar1 + 0x30);
    }
    *(int *)(iVar1 + 0x30) = param_2;
    *(int *)(param_2 + 0x2c) = iVar1;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return;
  }
  *piVar3 = param_2;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  return;
}

// 00F4D040  FUN_00f4d040  size=143  [callgraph]
void __thiscall FUN_00f4d040(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 < 0xf000) || (0xf01f < iVar1)) {
    if (999 < iVar1) {
      FUN_00dd5650(&DAT_016e0bdc,iVar1,1000);
      return;
    }
    piVar2 = (int *)(param_1 + 0x28 + iVar1 * 4);
  }
  else {
    piVar2 = (int *)(param_1 + -0x3b038 + iVar1 * 4);
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    if (*(int *)(param_2 + 0x30) == 0) {
      if (*piVar2 == 0) {
        FUN_00dd5650(&DAT_016e0c0c,iVar1);
      }
      *piVar2 = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x30) + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    return;
  }
  *piVar2 = *(int *)(param_2 + 0x30);
  return;
}

// 00F4D0D0  FUN_00f4d0d0  size=157  [callgraph]
void __thiscall FUN_00f4d0d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_2 + 4);
  if ((iVar2 < 0xf000) || (0xf01f < iVar2)) {
    if (0xfff < iVar2) {
      FUN_00dd5650(&DAT_016e0c68,iVar2,0x1000);
      return;
    }
    piVar3 = (int *)(param_1 + 0x28 + iVar2 * 4);
  }
  else {
    piVar3 = (int *)(param_1 + -0x37fd8 + iVar2 * 4);
  }
  iVar2 = *piVar3;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xac);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar2 + 0xac);
      iVar1 = *(int *)(iVar2 + 0xac);
    }
    *(int *)(iVar2 + 0xac) = param_2;
    *(int *)(param_2 + 0xa8) = iVar2;
    *(undefined4 *)(param_2 + 0xac) = 0;
    return;
  }
  *piVar3 = param_2;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_2 + 0xac) = 0;
  return;
}

// 00F4D130  FUN_00f4d130  size=170  [callgraph]
void __thiscall FUN_00f4d130(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 < 0xf000) || (0xf01f < iVar1)) {
    if (0xfff < iVar1) {
      FUN_00dd5650(&DAT_016e0ca4,iVar1,0x1000);
      return;
    }
    piVar2 = (int *)(param_1 + 0x28 + iVar1 * 4);
  }
  else {
    piVar2 = (int *)(param_1 + -0x37fd8 + iVar1 * 4);
  }
  if (*(int *)(param_2 + 0xa8) == 0) {
    if (*(int *)(param_2 + 0xac) == 0) {
      if (*piVar2 == 0) {
        FUN_00dd5650(&DAT_016e0cd4,iVar1);
      }
      *piVar2 = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0xa8) + 0xac) = *(undefined4 *)(param_2 + 0xac);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xac) + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    return;
  }
  *piVar2 = *(int *)(param_2 + 0xac);
  return;
}

// 00F4D250  FUN_00f4d250  size=43  [callgraph]
void __fastcall FUN_00f4d250(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00F4D3A0  FUN_00f4d3a0  size=114  [callgraph]
void __fastcall FUN_00f4d3a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x54) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x58;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00F4D4D0  FUN_00f4d4d0  size=33  [callgraph]
undefined4 __thiscall FUN_00f4d4d0(undefined4 param_1,byte param_2)

{
  Hw::cTexture::cTexture_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F4D540  FUN_00f4d540  size=114  [callgraph]
void __fastcall FUN_00f4d540(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 8) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0xc;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00F4D5C0  FUN_00f4d5c0  size=114  [callgraph]
void __fastcall FUN_00f4d5c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x38) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x3c;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00F4D640  FUN_00f4d640  size=120  [callgraph]
void __fastcall FUN_00f4d640(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0xb4) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0xb8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00F4D6C0  FUN_00f4d6c0  size=131  [callgraph]
char FUN_00f4d6c0(undefined4 param_1,int param_2,int param_3,int param_4,code *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < param_4) {
    do {
      iVar2 = param_4 + param_3 >> 1;
      iVar1 = (*param_5)(param_1,*(int *)(param_2 + 4) + iVar2 * 4);
      if (iVar1 == 0) {
        if (param_6 == (int *)0x0) {
          return '\0';
        }
        *param_6 = iVar2;
        return '\0';
      }
      if (iVar1 < 1) {
        param_4 = iVar2 + -1;
      }
      else {
        param_3 = iVar2 + 1;
      }
    } while (param_3 < param_4);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = param_3;
  }
  iVar1 = (*param_5)(param_1,*(int *)(param_2 + 4) + param_3 * 4);
  if (iVar1 == 0) {
    return '\0';
  }
  return (0 < iVar1) + '\x01';
}

// 00F4D890  FUN_00f4d890  size=48  [callgraph]
void __fastcall FUN_00f4d890(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00F4D940  FUN_00f4d940  size=48  [callgraph]
void __fastcall FUN_00f4d940(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00F4D970  FUN_00f4d970  size=113  [callgraph]
undefined4 __thiscall FUN_00f4d970(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x58,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00f4d3a0();
  return 1;
}

// 00F4DB10  FUN_00f4db10  size=43  [callgraph]
void __fastcall FUN_00f4db10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00F4DB70  FUN_00f4db70  size=115  [callgraph]
undefined4 __thiscall FUN_00f4db70(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0xc,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00f4d540();
  return 1;
}

// 00F4DBF0  FUN_00f4dbf0  size=88  [callgraph]
void __fastcall FUN_00f4dbf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x2c);
  if (puVar3 != puVar3 + *(int *)(param_1 + 0x34)) {
    do {
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        uVar2 = *(uint *)(param_1 + 0x18);
        if (((uVar2 != 0) && (uVar2 <= uVar1)) && (uVar1 < uVar2 + *(int *)(param_1 + 0x1c) * 0xc))
        {
          FUN_00f4ca90(uVar1);
        }
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (uint *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4));
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 00F4DC70  FUN_00f4dc70  size=119  [callgraph]
undefined4 __thiscall FUN_00f4dc70(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x3c,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00f4d5c0();
  return 1;
}

// 00F4DD40  FUN_00f4dd40  size=116  [callgraph]
undefined4 __thiscall FUN_00f4dd40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0xb8,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00f4d640();
  return 1;
}

