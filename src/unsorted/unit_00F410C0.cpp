// src/unsorted/unit_00F410C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F410C0..00F41EA0, 13 functions

#include "types.h"

// 00F410C0  FUN_00f410c0  size=7  [run]
undefined4 __fastcall FUN_00f410c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f7c);
}

// 00F410D0  FUN_00f410d0  size=7  [run]
float10 __fastcall FUN_00f410d0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x1f88);
}

// 00F41110  FUN_00f41110  size=13  [run]
void __thiscall FUN_00f41110(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1f34) = param_2;
  return;
}

// 00F41120  FUN_00f41120  size=7  [run]
undefined4 __fastcall FUN_00f41120(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f38);
}

// 00F41310  FUN_00f41310  size=381  [run]
int * FUN_00f41310(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  iVar4 = DAT_01be92f4;
  iVar7 = *(int *)(param_2 + 0x8c);
  iVar2 = *(int *)(param_2 + 0x94);
  iVar3 = *(int *)(param_2 + 0x90);
  piVar5 = (int *)(param_2 + 0x8c);
  piVar6 = piVar5;
  while( true ) {
    if (iVar3 <= iVar7) {
      return piVar6;
    }
    do {
      piVar9 = (int *)*piVar5;
      piVar6 = (int *)(iVar3 - (int)piVar9);
      if ((int)piVar6 < 1) {
        return piVar6;
      }
      piVar8 = piVar6;
      if (3 < (int)piVar6) {
        piVar8 = (int *)&DAT_00000004;
      }
      piVar6 = (int *)((uint)piVar6 / (uint)(iVar4 * 2));
      if (piVar8 <= piVar6) {
        piVar8 = piVar6;
      }
      LOCK();
      piVar6 = (int *)*piVar5;
      bVar10 = piVar9 == piVar6;
      if (bVar10) {
        *piVar5 = (int)((int)piVar8 + (int)piVar9);
        piVar6 = piVar9;
      }
      UNLOCK();
    } while (!bVar10);
    if (piVar8 == (int *)0x0) break;
    puVar1 = (undefined1 *)((int)piVar8 + -1) + (int)piVar9;
    for (; (int)piVar9 < (int)puVar1; piVar9 = (int *)((int)piVar9 + 1)) {
      piVar8 = *(int **)(iVar2 + (int)piVar9 * 4);
      if ((piVar8[0xc] & 0xd0000000U) == 0) {
        piVar6 = (int *)cModelBase::getMeshAlphaSystem();
        if (piVar6 == (int *)0x0) {
          iVar7 = FUN_009d58f0(piVar8);
          if ((iVar7 == 0) && ((piVar8[0x1b] & 0x2000U) != 0)) {
            piVar8[0xc] = piVar8[0xc] | 0x80000000;
            piVar6 = (int *)0x0;
          }
          else {
            FUN_009cddb0(piVar8);
            FUN_00edcdd0();
            piVar6 = (int *)(**(code **)(*piVar8 + 8))();
          }
        }
        else {
          piVar8[0xc] = piVar8[0xc] | 0x80000000;
        }
      }
    }
    piVar9 = *(int **)(iVar2 + (int)puVar1 * 4);
    if ((piVar9[0xc] & 0xd0000000U) == 0) {
      piVar6 = (int *)cModelBase::getMeshAlphaSystem();
      if (piVar6 == (int *)0x0) {
        iVar7 = FUN_009d58f0(piVar9);
        if ((iVar7 == 0) && ((piVar9[0x1b] & 0x2000U) != 0)) {
          piVar9[0xc] = piVar9[0xc] | 0x80000000;
          piVar6 = (int *)0x0;
        }
        else {
          FUN_009cddb0(piVar9);
          FUN_00edcdd0();
          piVar6 = (int *)(**(code **)(*piVar9 + 8))();
        }
      }
      else {
        piVar9[0xc] = piVar9[0xc] | 0x80000000;
      }
    }
    iVar7 = *piVar5;
  }
  return piVar6;
}

// 00F41600  FUN_00f41600  size=11  [run]
void FUN_00f41600(void)

{
  FUN_00dd7270();
  return;
}

// 00F41620  FUN_00f41620  size=68  [run]
undefined4 __thiscall FUN_00f41620(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x1e78) & 4) != 0) {
    if (param_2 == -1) {
      if (*(uint *)(param_1 + 0x1edc) < *(uint *)(param_1 + 0x1ee8)) {
        return 0;
      }
    }
    else if ((param_2 == 0) && (*(uint *)(param_1 + 0x1ed8) < *(uint *)(param_1 + 0x1ee8))) {
      return 0;
    }
  }
  return 1;
}

// 00F41670  FUN_00f41670  size=68  [run]
undefined4 __thiscall FUN_00f41670(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x1e78) & 4) != 0) {
    if (param_2 == -1) {
      if (*(int *)(param_1 + 0x1ee4) < *(int *)(param_1 + 0x1f24)) {
        return 0;
      }
    }
    else if ((param_2 == 0) && (*(int *)(param_1 + 0x1ee0) < *(int *)(param_1 + 0x1f24))) {
      return 0;
    }
  }
  return 1;
}

// 00F416C0  FUN_00f416c0  size=47  [run]
void __fastcall FUN_00f416c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f4c3a0();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1ef8) = 1;
    (**(code **)(**(int **)(param_1 + 0x1e70) + 0x10))();
    *(undefined4 *)(param_1 + 0x1ef8) = 0;
  }
  return;
}

// 00F416F0  FUN_00f416f0  size=1021  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00f416f0(void *param_1)

{
  float fVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float local_44;
  
  if (*(int *)((int)param_1 + 0x1ecc) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3f800000;
  }
  *(undefined4 *)((int)param_1 + 0x1ed0) = uVar5;
  FUN_009ce4a0();
  *(undefined4 *)((int)param_1 + 0x1efc) = 0x3f800000;
  FUN_00e9fe70();
  FUN_00e9feb0();
  FUN_00fdef70();
  FUN_00fdecda();
  fVar9 = (float10)FUN_00fdee60();
  local_44 = ABS((float)fVar9);
  if (0.6 < local_44) {
    if (1.0 < local_44) {
      local_44 = 1.0;
    }
    fVar1 = (local_44 - 0.6) / 0.39999998;
    if (0.0 < fVar1) {
      if (fVar1 <= 1.0) {
        *(float *)((int)param_1 + 0x1efc) = 1.0 - fVar1;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x1efc) = 0;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1efc) = 0x3f800000;
    }
  }
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
  pvVar2 = (void *)FUN_00e9ff50();
  FID_conflict__memcpy(param_1,pvVar2,0x40);
  puVar3 = (undefined4 *)FUN_00e9fe70();
  *(undefined4 *)((int)param_1 + 0x40) = *puVar3;
  *(undefined4 *)((int)param_1 + 0x44) = puVar3[1];
  *(undefined4 *)((int)param_1 + 0x48) = puVar3[2];
  *(undefined4 *)((int)param_1 + 0x4c) = puVar3[3];
  puVar3 = (undefined4 *)FUN_00e9feb0();
  *(undefined4 *)((int)param_1 + 0x50) = *puVar3;
  *(undefined4 *)((int)param_1 + 0x54) = puVar3[1];
  *(undefined4 *)((int)param_1 + 0x58) = puVar3[2];
  *(undefined4 *)((int)param_1 + 0x5c) = puVar3[3];
  iVar4 = FUN_00e9fef0();
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)(iVar4 + 4);
  uVar5 = FUN_00f98a90();
  *(undefined4 *)((int)param_1 + 100) = uVar5;
  uVar5 = FUN_00f98aa0();
  *(undefined4 *)((int)param_1 + 0x68) = uVar5;
  pvVar2 = (void *)FUN_00e9ff30();
  FID_conflict__memcpy((void *)((int)param_1 + 0x70),pvVar2,0x40);
  *(float *)((int)param_1 + 0x6c) =
       (_DAT_01be942c - *(float *)((int)param_1 + 0x6c)) * 0.1 + *(float *)((int)param_1 + 0x6c);
  uVar5 = FUN_00e9fe60();
  *(undefined4 *)((int)param_1 + 0x1e74) = uVar5;
  (**(code **)(**(int **)((int)param_1 + 0x1e70) + 0x14))();
  uVar8 = 0;
  do {
    uVar6 = uVar8 >> 5;
    uVar7 = 0x80000000 >> ((byte)uVar8 & 0x1f);
    if (((&DAT_01eddb60)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb34)[uVar6] = (&DAT_01eddb34)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb4c)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb30)[uVar6] = (&DAT_01eddb30)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb38)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb2c)[uVar6] = (&DAT_01eddb2c)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb64)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb34)[uVar6] = (&DAT_01eddb34)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb50)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb30)[uVar6] = (&DAT_01eddb30)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb3c)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb2c)[uVar6] = (&DAT_01eddb2c)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb68)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb34)[uVar6] = (&DAT_01eddb34)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb54)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb30)[uVar6] = (&DAT_01eddb30)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb40)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb2c)[uVar6] = (&DAT_01eddb2c)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb6c)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb34)[uVar6] = (&DAT_01eddb34)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb58)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb30)[uVar6] = (&DAT_01eddb30)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb44)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb2c)[uVar6] = (&DAT_01eddb2c)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb70)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb34)[uVar6] = (&DAT_01eddb34)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb5c)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb30)[uVar6] = (&DAT_01eddb30)[uVar6] | uVar7;
    }
    if (((&DAT_01eddb48)[uVar6] & uVar7) != 0) {
      (&DAT_01eddb2c)[uVar6] = (&DAT_01eddb2c)[uVar6] | uVar7;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 10);
  return;
}

// 00F41AF0  FUN_00f41af0  size=17  [run]
bool __fastcall FUN_00f41af0(int param_1)

{
  return 0 < *(int *)(*(int *)(param_1 + 0x1e70) + 0x10);
}

// 00F41B10  FUN_00f41b10  size=900  [run]
void __thiscall
FUN_00f41b10(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,int param_12,uint param_13,undefined4 param_14,
            undefined1 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            int param_19,undefined4 param_20)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_b4;
  local_8c = param_5;
  local_84 = param_10;
  local_94 = param_2;
  local_a0 = param_20;
  local_a8 = param_6;
  local_b4 = param_7;
  local_9c = param_17;
  if (param_7 != (undefined4 *)0x0) {
    local_ac = *param_7;
    local_b0 = param_7[1];
    local_74 = param_7[2];
    local_7c = param_7[4];
    local_78 = param_7[5];
    local_98 = param_7[6];
    local_80 = param_7[8];
    local_90 = param_7[9];
    local_a4 = param_7[10];
    local_70 = param_7[0xc];
    local_6c = param_7[0xd];
    local_68 = param_7[0xe];
  }
  local_88 = param_1;
  if (((*(byte *)(param_1 + 0x1e78) & 2) == 0) && (param_3 != 0xffe)) {
    local_ac = 0;
    local_b0 = 0;
    iVar2 = FUN_00f4b6d0(&local_b0,&local_ac,param_3,param_4);
    if ((iVar2 == 0) ||
       ((InterlockedIncrement((LONG *)(param_1 + 0x1f20)), (*(byte *)(param_1 + 0x1e78) & 8) != 0 ||
        (piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x1e70) + 0x1688))(param_3,param_4),
        piVar3 == (int *)0x0)))) {
      __security_check_cookie(local_14 ^ (uint)&local_b4);
      return;
    }
    piVar3[10] = local_88;
    piVar3[0x136] = param_19;
    piVar3[0x10c] = local_b0;
    uVar4 = local_9c;
    uVar5 = local_9c;
    uVar6 = local_a0;
    FUN_00a7f290(local_a8);
    FUN_00ec7db0(param_3,local_ac,param_4,param_11,local_84,param_9,local_8c,local_94,0,param_16,
                 uVar4,uVar5,param_18,uVar6);
    if (param_13 == 0) {
      param_13 = FUN_00dde2a0(0,0xffff);
      param_13 = param_13 & 0xffff;
    }
    puVar1 = local_b4;
    *(undefined1 *)(piVar3 + 0x10a) = param_15;
    piVar3[0x109] = param_12;
    if (local_b4 == (undefined4 *)0x0) {
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_54 = 0;
      uStack_58 = 0;
      uStack_5c = 0;
      uStack_24 = 0x3f800000;
      uStack_38 = 0x3f800000;
      uStack_4c = 0x3f800000;
      uStack_60 = 0x3f800000;
      FUN_00a7c930();
      if (local_a8 != 0) {
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
      }
      (**(code **)(*piVar3 + 4))(0,&uStack_60,param_13);
    }
    else {
      FUN_00a7c930();
      if (local_a8 != 0) {
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
      }
      (**(code **)(*piVar3 + 4))(0,puVar1,param_13);
    }
    FUN_00eaa260(piVar3[0x21],piVar3);
  }
  __security_check_cookie(local_14 ^ (uint)&local_b4);
  return;
}

// 00F41EA0  FUN_00f41ea0  size=64  [run]
void __thiscall FUN_00f41ea0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  *(undefined4 *)(param_1 + 0x1f80) = 1;
  *(undefined4 *)(param_1 + 0x1f84) = param_2;
  if (*(int *)(param_1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f00));
  }
  return;
}

