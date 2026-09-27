// src/unsorted/unit_00F422C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F422C0..00F430B0, 16 functions

#include "mgrr.h"

// 00F422C0  FUN_00f422c0  size=221  [run]
void __fastcall FUN_00f422c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_4 [4];
  
  piVar2 = (int *)FUN_00f44c80();
  if (piVar2 != (int *)0x0) {
    while (param_1[4] < param_1[3]) {
      (**(code **)(*param_1 + 0x24))(local_4,piVar2,*(undefined1 *)((int)piVar2 + 0x429));
      piVar2 = (int *)FUN_00f44c80();
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    do {
      (**(code **)(*piVar2 + 0x14))();
      uVar3 = (uint)*(ushort *)(piVar2 + 0x13);
      if (uVar3 < 0x100) {
        iVar1 = uVar3 * 5 + 0x36;
LAB_00f42355:
        if (param_1 + iVar1 == (int *)0x0) goto LAB_00f4236e;
        InterlockedDecrement(param_1 + iVar1 + 3);
        (**(code **)*piVar2)(0);
      }
      else {
        if (uVar3 - 0x8000 < 0x14) {
          iVar1 = uVar3 * 5 + -0x27aca;
          goto LAB_00f42355;
        }
LAB_00f4236e:
        InterlockedDecrement(param_1 + 0x34);
        (**(code **)*piVar2)(0);
      }
      FUN_00dd3d90(piVar2,0);
      piVar2 = (int *)FUN_00f44c80();
    } while (piVar2 != (int *)0x0);
  }
  return;
}

// 00F423A0  FUN_00f423a0  size=168  [run]
void __fastcall FUN_00f423a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00f44c80();
  if (piVar1 != (int *)0x0) {
    do {
      (**(code **)(*piVar1 + 0x14))();
      uVar2 = (uint)*(ushort *)(piVar1 + 0x13);
      if (uVar2 < 0x100) {
        iVar3 = param_1 + 0xd8 + uVar2 * 0x14;
LAB_00f42402:
        if (iVar3 == 0) goto LAB_00f4241b;
        InterlockedDecrement((LONG *)(iVar3 + 0xc));
        (**(code **)*piVar1)(0);
      }
      else {
        if (uVar2 - 0x8000 < 0x14) {
          iVar3 = param_1 + -0x9eb28 + uVar2 * 0x14;
          goto LAB_00f42402;
        }
LAB_00f4241b:
        InterlockedDecrement((LONG *)(param_1 + 0xd0));
        (**(code **)*piVar1)(0);
      }
      FUN_00dd3d90(piVar1,0);
      piVar1 = (int *)FUN_00f44c80();
    } while (piVar1 != (int *)0x0);
  }
  return;
}

// 00F42450  FUN_00f42450  size=94  [run]
void __fastcall FUN_00f42450(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    *(uint *)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x30) | 0x10000000;
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  *(uint *)(param_1 + 0x1e78) = *(uint *)(param_1 + 0x1e78) | 2;
  return;
}

// 00F424C0  FUN_00f424c0  size=87  [run]
void __fastcall FUN_00f424c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    *(uint *)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x30) | 0x10000000;
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return;
}

// 00F42520  FUN_00f42520  size=94  [run]
void __fastcall FUN_00f42520(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    *(uint *)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x30) & 0xefffffff;
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  *(uint *)(param_1 + 0x1e78) = *(uint *)(param_1 + 0x1e78) & 0xfffffffd;
  return;
}

// 00F42590  FUN_00f42590  size=340  [run]
void __fastcall FUN_00f42590(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_00f4c3a0();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1ef8) = 1;
    (**(code **)(**(int **)(param_1 + 0x1e70) + 0x10))();
    *(undefined4 *)(param_1 + 0x1ef8) = 0;
  }
  *(uint *)(param_1 + 0x1e78) = *(uint *)(param_1 + 0x1e78) & 0xfffffff6;
  FUN_00ec9700();
  (**(code **)(**(int **)(param_1 + 0x1e70) + 8))();
  FUN_00f423a0();
  piVar1 = (int *)(param_1 + 0x1f28);
  DAT_01eddb60 = 0;
  DAT_01eddb4c = 0;
  DAT_01eddb38 = 0;
  DAT_01eddb64 = 0;
  DAT_01eddb50 = 0;
  DAT_01eddb3c = 0;
  DAT_01eddb68 = 0;
  DAT_01eddb54 = 0;
  DAT_01eddb40 = 0;
  DAT_01eddb6c = 0;
  DAT_01eddb58 = 0;
  DAT_01eddb44 = 0;
  DAT_01eddb70 = 0;
  DAT_01eddb5c = 0;
  DAT_01eddb48 = 0;
  DAT_01eddb34 = 0;
  DAT_01eddb30 = 0;
  DAT_01eddb2c = 0;
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    if (iVar2 == iVar3) {
      *piVar1 = 0;
    }
    UNLOCK();
  } while (iVar2 != iVar3);
  piVar1 = (int *)(param_1 + 0x1f2c);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    if (iVar2 == iVar3) {
      *piVar1 = 0;
    }
    UNLOCK();
  } while (iVar2 != iVar3);
  FUN_00f44a30();
  FUN_00dd7270();
  if (*(undefined4 **)(param_1 + 0x1e70) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1e70))(1);
  }
  *(undefined4 *)(param_1 + 0x1e70) = 0;
  return;
}

// 00F42780  FUN_00f42780  size=983  [run]
void FUN_00f42780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,float *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,float param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  undefined1 auStack_114 [12];
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_114;
  local_100 = param_4;
  local_104 = param_5;
  local_f8 = param_9;
  local_f4 = param_16;
  local_fc = param_19;
  if (param_6 == (undefined4 *)0x0) {
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
    if (param_7 == (float *)0x0) {
      local_dc = 0;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
    }
    else {
      local_dc = 0;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
      if (param_7[2] != 0.0) {
        local_108 = param_7[2];
        D3DXMatrixRotationZ(local_60,local_108);
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (param_7[1] != 0.0) {
        local_108 = param_7[1];
        D3DXMatrixRotationY(local_60,local_108);
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*param_7 != 0.0) {
        local_108 = *param_7;
        D3DXMatrixRotationX(local_60,local_108);
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
    }
  }
  else if (param_7 == (float *)0x0) {
    D3DXMatrixTranslation(&local_e0,*param_6,param_6[1],param_6[2]);
  }
  else {
    D3DXMatrixTranslation(&local_e0,*param_6,param_6[1],param_6[2]);
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = 0;
    uStack_74 = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    if (param_7[2] != 0.0) {
      D3DXMatrixRotationZ(auStack_70,param_7[2]);
      D3DXMatrixMultiply(&local_b8,&uStack_78,&local_b8);
    }
    if (param_7[1] != 0.0) {
      D3DXMatrixRotationY(auStack_70,param_7[1]);
      D3DXMatrixMultiply(&local_b8,&uStack_78,&local_b8);
    }
    if (*param_7 != 0.0) {
      D3DXMatrixRotationX(auStack_70,*param_7);
      D3DXMatrixMultiply(&local_b8,&uStack_78,&local_b8);
    }
    D3DXMatrixMultiply(auStack_f0,&local_b0,auStack_f0);
  }
  if (param_15 != 1.0) {
    D3DXMatrixScaling(local_60,param_15,param_15,param_15);
    D3DXMatrixMultiply(auStack_f0,auStack_70,auStack_f0);
  }
  FUN_00f41b10(param_1,param_2,param_3,local_100,local_104,&local_e0,auStack_f0,param_8,local_f8,
               param_10,param_11,param_12,param_13,param_14,param_15,local_f4,param_17,param_18,
               local_fc,param_20);
  __security_check_cookie(local_14 ^ (uint)auStack_114);
  return;
}

// 00F42B60  FUN_00f42b60  size=118  [run]
void FUN_00f42b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  FUN_00f42780(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20);
  return;
}

// 00F42BE0  FUN_00f42be0  size=179  [run]
undefined4 __thiscall FUN_00f42be0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar2 != piVar1;
      piVar2 = (int *)piVar2[2]) {
    piVar3 = (int *)*piVar2;
    if ((((piVar3[0xc] & 0xc0000000U) == 0) &&
        ((param_2 == -0x80000000 || (piVar3[0x1e] == param_2)))) &&
       ((param_3 == 0 || (piVar3[0x1d] == param_3)))) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return 1;
}

// 00F42CA0  FUN_00f42ca0  size=144  [run]
undefined4 __fastcall FUN_00f42ca0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    piVar3 = (int *)*piVar1;
    if ((piVar3[0xc] & 0xc0000000U) == 0) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  FUN_00f423a0();
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return 1;
}

// 00F42D30  FUN_00f42d30  size=130  [run]
undefined4 __fastcall FUN_00f42d30(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    piVar3 = (int *)*piVar1;
    if (((piVar3[0xc] & 0xc0000000U) == 0) && ((piVar3[0x1b] & 0x8000U) == 0)) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return 1;
}

// 00F42DC0  FUN_00f42dc0  size=127  [run]
undefined4 __fastcall FUN_00f42dc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    piVar3 = (int *)*piVar1;
    if (((piVar3[0xc] & 0xc0000000U) == 0) && ((*(byte *)(piVar3 + 0x1b) & 4) != 0)) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return 1;
}

// 00F42E50  FUN_00f42e50  size=127  [run]
undefined4 __fastcall FUN_00f42e50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    piVar3 = (int *)*piVar1;
    if (((piVar3[0xc] & 0xc0000000U) == 0) && ((*(byte *)(piVar3 + 0x1b) & 0x80) != 0)) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return 1;
}

// 00F42F70  FUN_00f42f70  size=144  [run]
void __thiscall FUN_00f42f70(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    piVar3 = (int *)*piVar1;
    if (((piVar3[0xc] & 0xc0000000U) == 0) &&
       (iVar4 = (**(code **)(*piVar3 + 0x18))(param_2), iVar4 != 0)) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return;
}

// 00F43000  FUN_00f43000  size=170  [run]
void __fastcall FUN_00f43000(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    piVar3 = (int *)*piVar1;
    if ((((piVar3[0xc] & 0xc0000000U) == 0) && (piVar3[0x18] == 0)) &&
       (((iVar4 = piVar3[0x1a], iVar4 == 0x61 ||
         (((iVar4 == 0x5e || (iVar4 == 99)) || (iVar4 == 0x191)))) ||
        ((iVar4 == 0x193 || (iVar4 == 400)))))) {
      piVar3[0xc] = piVar3[0xc] | 0x80000000;
      (**(code **)(*piVar3 + 0xc))();
      piVar3[0xc] = piVar3[0xc] | 0x8000000;
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return;
}

// 00F430B0  FUN_00f430b0  size=211  [run]
undefined4 __thiscall
FUN_00f430b0(int param_1,undefined4 param_2,float param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_3 == 0.0) {
    param_3 = 0.01;
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  FUN_00f422c0();
  piVar2 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x1c);
  for (piVar1 = *(int **)(*(int *)(param_1 + 0x1e70) + 0x18); piVar1 != piVar2;
      piVar1 = (int *)piVar1[2]) {
    iVar3 = *piVar1;
    if (((((*(uint *)(iVar3 + 0x30) & 0xc0000000) == 0) &&
         ((param_4 == -0x80000000 || (*(int *)(iVar3 + 0x78) == param_4)))) &&
        ((param_5 == 0 || (*(int *)(iVar3 + 0x74) == param_5)))) &&
       (((param_6 != 0 || (*(uint **)(iVar3 + 0x24) == (uint *)0x0)) ||
        ((**(uint **)(iVar3 + 0x24) & 0x8000) == 0)))) {
      FUN_00edbe30(param_2,param_3);
    }
  }
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return 1;
}

