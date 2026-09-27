// src/managers/battlecollisionmanager/BattleCollisionManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77300..00D7DC80, 42 functions

#include "types.h"

// 00D77300  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf10  size=1  [class]
void BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf10(void)

{
  return;
}

// 00D77310  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf14  size=1  [class]
void BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf14(void)

{
  return;
}

// 00D77330  BattleCollisionManagerImplement::vf28  size=1  [class]
void BattleCollisionManagerImplement::vf28(void)

{
  return;
}

// 00D77340  BattleCollisionManagerImplement::vf2C  size=1  [class]
void BattleCollisionManagerImplement::vf2C(void)

{
  return;
}

// 00D77350  BattleCollisionManagerImplement::vf30  size=1  [class]
void BattleCollisionManagerImplement::vf30(void)

{
  return;
}

// 00D77EF0  FUN_00d77ef0  size=82  [callgraph]
undefined4 __thiscall FUN_00d77ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x434);
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 4), iVar1 != *(int *)(iVar2 + 8) * 0x160 + iVar1)) {
    iVar2 = *(int *)(iVar2 + 8) * 0x160 + iVar1;
    do {
      if (((param_2 != 0) && (*(int *)(iVar1 + 8) == param_2)) && (*(int *)(iVar1 + 0x10) == 0)) {
        return 1;
      }
      iVar1 = iVar1 + 0x160;
    } while (iVar1 != iVar2);
  }
  return 0;
}

// 00D77F50  FUN_00d77f50  size=124  [callgraph]
undefined4 __thiscall FUN_00d77f50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x434);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x58) {
    piVar3 = piVar2 + *(int *)(iVar1 + 8) * 0x58;
    do {
      if ((*piVar2 == *(int *)(param_2 + 0x354)) &&
         (((piVar2[1] == *(int *)(param_2 + 0x358) && (piVar2[4] == 0)) ||
          ((*(int *)(param_2 + 0x374) != 0 &&
           ((piVar2[2] == *(int *)(param_2 + 0x374) && (piVar2[4] == 0)))))))) {
        return 1;
      }
      piVar2 = piVar2 + 0x58;
    } while (piVar2 != piVar3);
  }
  return 0;
}

// 00D77FD0  FUN_00d77fd0  size=67  [callgraph]
int __fastcall FUN_00d77fd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x434);
  iVar1 = 0;
  if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 4), iVar3 != *(int *)(iVar2 + 8) * 0x160 + iVar3)) {
    iVar2 = *(int *)(iVar2 + 8) * 0x160 + iVar3;
    do {
      if (*(int *)(iVar3 + 0x10) == 0) {
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 0x160;
    } while (iVar3 != iVar2);
  }
  return iVar1;
}

// 00D78020  FUN_00d78020  size=115  [callgraph]
void __thiscall FUN_00d78020(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_004066f0();
  uVar2 = (uint)*(ushort *)(param_1 + 0x46) << 0x10 | *(uint *)(param_1 + 0x44) & 0x7fe0 |
          param_2 & 0x1f;
  *(uint *)(param_1 + 0x44) = uVar2;
  FUN_00900a90(uVar2);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00D780A0  FUN_00d780a0  size=106  [callgraph]
void __thiscall FUN_00d780a0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_004066f0();
  uVar2 = param_2 << 0x10 | *(uint *)(param_1 + 0x44) & 0x7fff;
  *(uint *)(param_1 + 0x44) = uVar2;
  FUN_00900a90(uVar2);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00D78120  FUN_00d78120  size=94  [callgraph]
void __fastcall FUN_00d78120(int param_1)

{
  int *piVar1;
  
  FUN_004066f0();
  FUN_00900ca0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00D78180  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf18  size=16  [class]
void BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf18(void)

{
  (**(code **)(*DAT_01dc52ec + 0x28))();
  return;
}

// 00D78190  BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf00  size=31  [class]
undefined4 * __thiscall
BattleCollisionManagerImplement::MainUpdateForPauseSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D781B0  BattleCollisionManagerImplement::addOffense  size=86  [class]
void __thiscall BattleCollisionManagerImplement::addOffense(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 8);
  if ((uint)piVar1[2] < (uint)piVar1[3]) {
    (**(code **)(*piVar1 + 8))(&param_2);
    *(int *)(param_2 + 0x350) = *(int *)(param_2 + 0x350) + 1;
  }
  else {
    FUN_00dd5650(&DAT_016c10b0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

// 00D78210  BattleCollisionManagerImplement::addDefense  size=131  [class]
undefined4 __thiscall BattleCollisionManagerImplement::addDefense(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = 2;
  (**(code **)(*param_2 + 0x20))(0x1c,param_2[0xdc]);
  piVar1 = *(int **)(param_1 + 0x10);
  if ((uint)piVar1[3] <= (uint)piVar1[2]) {
    FUN_00dd5650(&DAT_016c10ec);
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  (**(code **)(*piVar1 + 8))(&stack0xfffffff8);
  *(int *)(iVar2 + 0x350) = *(int *)(iVar2 + 0x350) + 1;
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

// 00D782A0  BattleCollisionManagerImplement::vf18  size=61  [class]
int __thiscall BattleCollisionManagerImplement::vf18(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x354) == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00D782E0  BattleCollisionManagerImplement::vf1C  size=61  [class]
int __thiscall BattleCollisionManagerImplement::vf1C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x354) == param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00D78320  BattleCollisionManagerImplement::vf34  size=14  [class]
undefined4 __fastcall BattleCollisionManagerImplement::vf34(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  }
  return 0;
}

// 00D78330  BattleCollisionManagerImplement::vf38  size=14  [class]
undefined4 __fastcall BattleCollisionManagerImplement::vf38(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return 0;
}

// 00D78340  BattleCollisionManagerImplement::vf3C  size=25  [class]
undefined4 __thiscall BattleCollisionManagerImplement::vf3C(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + param_2 * 4);
  }
  return 0;
}

// 00D78360  BattleCollisionManagerImplement::vf40  size=25  [class]
undefined4 __thiscall BattleCollisionManagerImplement::vf40(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 * 4);
  }
  return 0;
}

// 00D79900  FUN_00d79900  size=102  [callgraph]
void __thiscall FUN_00d79900(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_00d77bf0(param_2,param_3);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x438) != 0)) {
    piVar1 = *(int **)(param_1 + 0x438);
    if ((uint)piVar1[3] <= (uint)piVar1[2]) {
      FUN_00dd5650(&DAT_016c1244);
      return;
    }
    local_8 = param_2;
    local_4 = param_3;
    (**(code **)(*piVar1 + 8))(&local_8);
  }
  return;
}

// 00D79990  FUN_00d79990  size=30  [callgraph]
undefined4 __thiscall FUN_00d79990(undefined4 param_1,byte param_2)

{
  FUN_00d78120();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D79B40  FUN_00d79b40  size=363  [callgraph]
void __thiscall FUN_00d79b40(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  undefined4 local_198;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float fStack_120;
  undefined4 uStack_11c;
  
  iVar5 = *(int *)(param_1 + 0x434);
  if (iVar5 != 0) {
    piVar9 = *(int **)(iVar5 + 4);
    if (piVar9 != piVar9 + *(int *)(iVar5 + 8) * 0x58) {
      piVar10 = piVar9 + *(int *)(iVar5 + 8) * 0x58;
      do {
        if ((*piVar9 == param_2[0xd5]) && (piVar9[1] == param_2[0xd6])) {
          return;
        }
        piVar9 = piVar9 + 0x58;
      } while (piVar9 != piVar10);
    }
    if (*(uint *)(*(int *)(param_1 + 0x434) + 8) < *(uint *)(*(int *)(param_1 + 0x434) + 0xc)) {
      iVar5 = param_2[0xda];
      uVar1 = *(undefined4 *)(iVar5 + 0x80);
      uVar2 = *(undefined4 *)(iVar5 + 0x84);
      uVar3 = *(undefined4 *)(iVar5 + 0x88);
      uVar4 = *(undefined4 *)(iVar5 + 0x8c);
      if (((*(byte *)(param_2 + 0xe1) & 1) != 0) ||
         (local_198 = 1, (*(byte *)(param_1 + 900) & 1) != 0)) {
        local_198 = 0;
      }
      iVar5 = param_2[0xd5];
      iVar6 = param_2[0xfc];
      iVar7 = param_2[0xdd];
      iVar8 = param_2[0xd6];
      fVar11 = (float10)(**(code **)(*param_2 + 0x1c))();
      uStack_164 = local_198;
      fStack_120 = (float)fVar11;
      uStack_160 = 0;
      uStack_11c = 0;
      iStack_170 = iVar5;
      iStack_16c = iVar8;
      iStack_168 = iVar7;
      iStack_15c = iVar6;
      uStack_150 = uVar1;
      uStack_14c = uVar2;
      uStack_148 = uVar3;
      uStack_144 = uVar4;
      FUN_004105d0();
      (**(code **)(**(int **)(param_1 + 0x434) + 8))(&iStack_170);
    }
  }
  return;
}

// 00D79CB0  FUN_00d79cb0  size=24  [callgraph]
void __fastcall FUN_00d79cb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x434);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}

// 00D79CD0  FUN_00d79cd0  size=598  [callgraph]
void __thiscall FUN_00d79cd0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 local_1a0;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 *local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_15c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float fStack_120;
  undefined4 uStack_11c;
  
  iVar5 = *(int *)(param_1 + 0x434);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x41c) = 1;
    piVar4 = *(int **)(iVar5 + 4);
    if (piVar4 != piVar4 + *(int *)(iVar5 + 8) * 0x58) {
      do {
        if ((*piVar4 == param_2[0xd5]) && (piVar4[1] == param_2[0xd6])) {
          return;
        }
        piVar4 = piVar4 + 0x58;
      } while (piVar4 != (int *)(*(int *)(iVar5 + 8) * 0x160 + *(int *)(iVar5 + 4)));
    }
    if (*(uint *)(iVar5 + 0xc) <= *(uint *)(iVar5 + 8)) {
      FUN_00dd5650(&DAT_016c1270);
      return;
    }
    iVar5 = param_2[0xda];
    local_190 = *(undefined4 *)(iVar5 + 0x80);
    local_178 = (undefined4 *)param_2[0xde];
    local_18c = *(undefined4 *)(iVar5 + 0x84);
    local_188 = *(undefined4 *)(iVar5 + 0x88);
    local_184 = *(undefined4 *)(iVar5 + 0x8c);
    if (local_178 == (undefined4 *)0x0) {
      if (((*(byte *)(param_2 + 0xe1) & 1) != 0) ||
         (local_1a0 = 1, (*(byte *)(param_1 + 900) & 1) != 0)) {
        local_1a0 = 0;
      }
      iVar5 = param_2[0xdd];
      iVar1 = param_2[0xd6];
      iVar2 = param_2[0xd5];
      iVar3 = param_2[0xfc];
      fVar7 = (float10)(**(code **)(*param_2 + 0x1c))();
      uStack_150 = local_190;
      uStack_14c = local_18c;
      uStack_148 = local_188;
      uStack_164 = local_1a0;
      uStack_144 = local_184;
      fStack_120 = (float)fVar7;
      uStack_160 = 0;
      uStack_11c = 0;
      iStack_170 = iVar2;
      iStack_16c = iVar1;
      iStack_168 = iVar5;
      iStack_15c = iVar3;
      FUN_004105d0();
      (**(code **)(**(int **)(param_1 + 0x434) + 8))(&iStack_170);
    }
    else {
      puVar8 = &DAT_01dc526c;
      (**(code **)*local_178)(&DAT_01dc526c);
      iVar5 = FUN_00dd6d80(puVar8);
      if (iVar5 != 0) {
        if (((*(byte *)(param_2 + 0xe1) & 1) != 0) ||
           (local_1a0 = 1, (*(byte *)(param_1 + 900) & 1) != 0)) {
          local_1a0 = 0;
        }
        iStack_174 = param_2[0xfc];
        iVar5 = param_2[0xdd];
        iVar1 = param_2[0xd6];
        iVar2 = param_2[0xd5];
        iVar3 = **(int **)(param_1 + 0x434);
        fVar7 = (float10)(**(code **)(*param_2 + 0x1c))();
        uVar6 = FUN_00d79790(iVar2,iVar1,iVar5,local_1a0,iStack_174,local_178[2],&local_190,
                             (float)fVar7);
        (**(code **)(iVar3 + 8))(uVar6);
        return;
      }
    }
  }
  return;
}

// 00D79F30  FUN_00d79f30  size=528  [callgraph]
void __thiscall FUN_00d79f30(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined *puVar11;
  undefined4 local_198;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  
  piVar1 = *(int **)(param_1 + 0x434);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x41c) = 1;
    piVar3 = (int *)piVar1[1];
    if (piVar3 != piVar3 + piVar1[2] * 0x58) {
      do {
        if ((*piVar3 == param_2[0xd5]) && (piVar3[1] == param_2[0xd6])) {
          return;
        }
        piVar3 = piVar3 + 0x58;
      } while (piVar3 != (int *)(piVar1[2] * 0x160 + piVar1[1]));
    }
    if ((uint)piVar1[3] <= (uint)piVar1[2]) {
      FUN_00dd5650(&DAT_016c128c);
      return;
    }
    iVar4 = param_2[0xda];
    local_180 = *(undefined4 *)(iVar4 + 0x80);
    puVar2 = (undefined4 *)param_2[0xde];
    local_17c = *(undefined4 *)(iVar4 + 0x84);
    local_178 = *(undefined4 *)(iVar4 + 0x88);
    local_174 = *(undefined4 *)(iVar4 + 0x8c);
    if (puVar2 == (undefined4 *)0x0) {
      if (((*(byte *)(param_2 + 0xe1) & 1) != 0) ||
         (local_198 = 1, (*(byte *)(param_1 + 900) & 1) != 0)) {
        local_198 = 0;
      }
      iVar4 = param_2[0xfc];
      iVar5 = param_2[0xdd];
      iVar9 = *piVar1;
      iVar7 = param_2[0xd6];
      iVar8 = param_2[0xd5];
      fVar10 = (float10)(**(code **)(*param_2 + 0x1c))(param_3,param_4);
      uVar6 = 0;
    }
    else {
      puVar11 = &DAT_01dc526c;
      (**(code **)*puVar2)(&DAT_01dc526c);
      iVar4 = FUN_00dd6d80(puVar11);
      if (iVar4 == 0) {
        return;
      }
      if (((*(byte *)(param_2 + 0xe1) & 1) != 0) ||
         (local_198 = 1, (*(byte *)(param_1 + 900) & 1) != 0)) {
        local_198 = 0;
      }
      iVar4 = param_2[0xfc];
      iVar5 = param_2[0xdd];
      iVar7 = param_2[0xd6];
      iVar8 = param_2[0xd5];
      iVar9 = **(int **)(param_1 + 0x434);
      fVar10 = (float10)(**(code **)(*param_2 + 0x1c))(param_3,param_4);
      uVar6 = puVar2[2];
    }
    uVar6 = FUN_00d79810(iVar8,iVar7,iVar5,local_198,iVar4,uVar6,&local_180,(float)fVar10,param_3,
                         param_4);
    (**(code **)(iVar9 + 8))(uVar6);
  }
  return;
}

// 00D7A140  FUN_00d7a140  size=595  [callgraph]
void __fastcall FUN_00d7a140(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  
  FUN_004066f0();
  iVar4 = (**(code **)(**(int **)(*param_1 + 0x368) + 0x14))();
  uVar2 = param_1[0x11];
  uVar1 = *(undefined2 *)((int)param_1 + 0x46);
  param_1[5] = iVar4;
  piVar5 = (int *)FUN_00900480();
  iVar6 = (**(code **)(*piVar5 + 0x10))
                    (param_1[5],*(int *)(*param_1 + 0x368) + 0x50,uVar2 & 0x1f,uVar1,0);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar6);
  FUN_01006780(*param_1 + 0x394);
  FUN_008f7f00(iVar6,*(undefined4 *)(*param_1 + 0x3f0));
  FUN_008f9610(iVar6,4,1);
  FUN_008f9610(iVar6,8,1);
  pvVar3 = ThreadLocalStoragePointer;
  iVar4 = _tls_index;
  if (param_1[0x13] != 0) {
    FUN_004066f0();
    if ((iVar6 != 0) && (uVar2 = *(uint *)(iVar6 + 0xc), uVar2 != 0)) {
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 1;
      puVar7[2] = puVar7[2] | 0x1000;
    }
    if (DAT_01885d68 != 1) {
      piVar5 = (int *)(*(int *)((int)pvVar3 + iVar4 * 4) + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    FUN_004066f0();
    if ((iVar6 != 0) && (uVar2 = *(uint *)(iVar6 + 0xc), uVar2 != 0)) {
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 1;
      puVar7[2] = puVar7[2] | 0x200;
    }
    if (DAT_01885d68 != 1) {
      piVar5 = (int *)(*(int *)((int)pvVar3 + iVar4 * 4) + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if ((*(byte *)(param_1 + 0x12) & 4) != 0) {
    FUN_004066f0();
    if ((iVar6 != 0) && (uVar2 = *(uint *)(iVar6 + 0xc), uVar2 != 0)) {
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 1;
      puVar7[2] = puVar7[2] | 0x400;
    }
    if (DAT_01885d68 != 1) {
      piVar5 = (int *)(*(int *)((int)pvVar3 + iVar4 * 4) + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if ((*(byte *)(param_1 + 0x12) & 8) != 0) {
    FUN_008f9610(iVar6,0x100,1);
  }
  FUN_00900bd0();
  iVar6 = *(int *)(*param_1 + 0x368);
  param_1[0xc] = *(int *)(iVar6 + 0x80);
  param_1[0xd] = *(int *)(iVar6 + 0x84);
  param_1[0xe] = *(int *)(iVar6 + 0x88);
  param_1[0xf] = *(int *)(iVar6 + 0x8c);
  param_1[8] = param_1[0xc];
  param_1[9] = param_1[0xd];
  param_1[10] = param_1[0xe];
  param_1[0xb] = param_1[0xf];
  if (DAT_01885d68 != 1) {
    piVar5 = (int *)(*(int *)((int)pvVar3 + iVar4 * 4) + 4);
    *piVar5 = *piVar5 + -1;
    if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00D7A3A0  FUN_00d7a3a0  size=88  [callgraph]
int * __thiscall FUN_00d7a3a0(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  *param_1 = param_2;
  FUN_009003e0();
  param_1[0x12] = param_5;
  param_1[5] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_3 & 0x1f | param_4 << 0x10;
  if (*(int *)(param_2 + 0x364) != 0) {
    FUN_00d7a140();
    return param_1;
  }
  param_1[0x10] = 1;
  return param_1;
}

// 00D7A400  BattleCollisionManagerImplement::vf20  size=130  [class]
int * __thiscall BattleCollisionManagerImplement::vf20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  if (param_2[1] != 0) {
    param_2[2] = 0;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 4);
  if (piVar2 != piVar2 + *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      iVar1 = *(int *)(*piVar2 + 0x360);
      if (((iVar1 != 1) && (iVar1 < 4)) && (iVar1 == 0)) {
        (**(code **)(*param_2 + 8))(piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 8) + 4) +
                              *(int *)(*(int *)(param_1 + 8) + 8) * 4));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return param_2;
}

// 00D7A490  FUN_00d7a490  size=303  [callgraph]
void __fastcall FUN_00d7a490(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  (**(code **)(*param_1 + 4))();
  if (*(int *)(param_1[5] + 4) != 0) {
    *(undefined4 *)(param_1[5] + 8) = 0;
  }
  while ((iVar3 = param_1[4], *(int *)(iVar3 + 4) != 0 && (*(int *)(iVar3 + 8) != 0))) {
    piVar2 = *(int **)(iVar3 + 4);
    piVar4 = piVar2 + *(int *)(iVar3 + 8);
    iVar5 = -1;
    if (piVar2 != (int *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * 4)) {
      do {
        if (iVar5 < *(int *)(*piVar2 + 0x388)) {
          piVar4 = piVar2;
          iVar5 = *(int *)(*piVar2 + 0x388);
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * 4));
    }
    iVar5 = *(int *)(iVar3 + 4);
    if ((int *)(iVar5 + *(int *)(iVar3 + 8) * 4) != piVar4) {
      piStack_4 = (int *)*piVar4;
      uVar1 = *(uint *)(iVar3 + 8);
      piVar2 = (int *)(iVar5 + uVar1 * 4);
      if ((((piVar4 != piVar2) && (iVar5 != 0)) && (uVar1 != 0)) &&
         ((uint)((int)piVar4 - iVar5 >> 2) < uVar1)) {
        for (; piVar4 != piVar2 + -1; piVar4 = piVar4 + 1) {
          *piVar4 = piVar4[1];
        }
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
      }
      piVar4 = (int *)param_1[5];
      if ((uint)piVar4[2] < (uint)piVar4[3]) {
        (**(code **)(*piVar4 + 8))(&piStack_4);
      }
    }
  }
  iVar3 = param_1[5];
  iVar5 = *(int *)(iVar3 + 4);
  if (iVar5 != iVar5 + *(int *)(iVar3 + 8) * 4) {
    do {
      if (*(uint *)(iVar3 + 0xc) <= (uint)((int *)param_1[4])[2]) break;
      (**(code **)(*(int *)param_1[4] + 8))(iVar5);
      iVar3 = param_1[5];
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * 4);
  }
  if (*(int *)(param_1[5] + 4) != 0) {
    *(undefined4 *)(param_1[5] + 8) = 0;
  }
  return;
}

// 00D7B080  FUN_00d7b080  size=107  [callgraph]
void __fastcall FUN_00d7b080(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xdf];
  if (iVar1 != 0) {
    FUN_00d78120();
    FUN_00dd4920(iVar1);
    param_1[0xdf] = 0;
  }
  if (param_1[0x10a] != -1) {
    FUN_009fe7d0(param_1[0x10a],param_1[0x10b]);
  }
  param_1[0x10a] = -1;
  param_1[0x10b] = -1;
  param_1[0x10c] = 0;
  (**(code **)(*param_1 + 8))(1);
  return;
}

// 00D7B0F0  FUN_00d7b0f0  size=135  [callgraph]
int __fastcall FUN_00d7b0f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + -1;
  if (*(int *)(param_1 + 0x358) != 0) {
    (**(code **)(*DAT_01dc52e4 + 4))(*(int *)(param_1 + 0x358));
    *(undefined4 *)(param_1 + 0x35c) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    if (*(int *)(param_1 + 0x37c) != 0) {
      FUN_00900a90(0x1f);
    }
    *(undefined4 *)(param_1 + 0x358) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x350);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x37c);
    if (iVar2 != 0) {
      FUN_00d78120();
      FUN_00dd4920(iVar2);
      *(undefined4 *)(param_1 + 0x37c) = 0;
    }
    *(undefined4 *)(param_1 + 0x360) = 1;
  }
  return iVar1;
}

// 00D7B180  FUN_00d7b180  size=97  [callgraph]
void __thiscall FUN_00d7b180(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x360) < 4) && (*(int *)(param_1 + 0x360) != 1)) &&
      (iVar1 = *(int *)(param_1 + 0x434), iVar1 != 0)) &&
     (iVar2 = *(int *)(iVar1 + 4), iVar2 != *(int *)(iVar1 + 8) * 0x160 + iVar2)) {
    do {
      if (*(int *)(iVar2 + 4) == param_2) {
        iVar2 = FUN_00d7a850(iVar2);
      }
      else {
        iVar2 = iVar2 + 0x160;
      }
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x434) + 8) * 0x160 +
                      *(int *)(*(int *)(param_1 + 0x434) + 4));
  }
  return;
}

// 00D7B1F0  FUN_00d7b1f0  size=197  [callgraph]
void __fastcall FUN_00d7b1f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x434);
  if ((iVar4 != 0) && (iVar5 = *(int *)(iVar4 + 4), iVar5 != *(int *)(iVar4 + 8) * 0x160 + iVar5)) {
    do {
      if ((*(int *)(iVar5 + 0x14) == 0) || ((*(byte *)(*(int *)(iVar5 + 0x14) + 0x28) & 2) == 0)) {
        iVar3 = iVar5 + 0x160;
      }
      else {
        uVar1 = *(uint *)(iVar4 + 8);
        iVar2 = *(int *)(iVar4 + 4);
        iVar3 = uVar1 * 0x160 + iVar2;
        if ((((iVar5 != iVar3) && (iVar2 != 0)) && (uVar1 != 0)) &&
           ((uint)((iVar5 - iVar2) / 0x160) < uVar1)) {
          iVar2 = iVar5;
          while (iVar2 != iVar3 + -0x160) {
            iVar2 = iVar2 + 0x160;
            FUN_00d790a0(iVar2);
          }
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
          iVar3 = iVar5;
        }
      }
      iVar4 = *(int *)(param_1 + 0x434);
      iVar5 = iVar3;
    } while (iVar3 != *(int *)(iVar4 + 8) * 0x160 + *(int *)(iVar4 + 4));
  }
  return;
}

// 00D7B2C0  BattleCollisionManagerImplement::MainUpdateForPauseSlot::MainUpdateForPauseSlot  size=323  [class]
undefined4 * __thiscall
BattleCollisionManagerImplement::MainUpdateForPauseSlot::MainUpdateForPauseSlot
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = BattleCollisionManagerImplement::vftable;
  param_1[1] = param_2;
  param_1[0xc] = 0;
  FUN_00dd7240();
  puVar1 = (undefined4 *)FUN_00dd3500(0x210,param_1[1]);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x80;
    *puVar1 = lib::StaticArray<Collision*,128>::vftable;
  }
  param_1[2] = puVar1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x210,param_1[1]);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x80;
    *puVar1 = lib::StaticArray<Collision*,128>::vftable;
  }
  param_1[3] = puVar1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x1010,param_1[1]);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x400;
    *puVar1 = lib::StaticArray<Collision*,1024>::vftable;
  }
  param_1[4] = puVar1;
  puVar1 = (undefined4 *)FUN_00dd3500(0x1010,param_1[1]);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1 + 4;
    puVar1[2] = 0;
    puVar1[3] = 0x400;
    *puVar1 = lib::StaticArray<Collision*,1024>::vftable;
  }
  param_1[5] = puVar1;
  if (*(int *)(param_1[2] + 4) != 0) {
    *(undefined4 *)(param_1[2] + 8) = 0;
  }
  if (*(int *)(param_1[3] + 4) != 0) {
    *(undefined4 *)(param_1[3] + 8) = 0;
  }
  if (*(int *)(param_1[4] + 4) != 0) {
    *(undefined4 *)(param_1[4] + 8) = 0;
  }
  if (*(int *)(param_1[5] + 4) != 0) {
    *(undefined4 *)(param_1[5] + 8) = 0;
  }
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_1[1]);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = vftable;
  }
  param_1[0xe] = puVar1;
  FUN_00d89ec0(9,puVar1);
  return param_1;
}

// 00D7B410  BattleCollisionManagerImplement::vf10  size=94  [class]
void __thiscall BattleCollisionManagerImplement::vf10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar2 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x354) == *(int *)(param_2 + 0x354)) {
        FUN_00d7b0f0();
        break;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

// 00D7B470  BattleCollisionManagerImplement::vf14  size=94  [class]
void __thiscall BattleCollisionManagerImplement::vf14(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar2 = *(int *)(param_1 + 0x10);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x354) == *(int *)(param_2 + 0x354)) {
        FUN_00d7b0f0();
        break;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

// 00D7B4D0  FUN_00d7b4d0  size=175  [callgraph]
void __fastcall FUN_00d7b4d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*DAT_01dc52e4 + 0xc))();
  while (iVar1 != 0) {
    uVar2 = (**(code **)(*DAT_01dc52e4 + 8))();
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    if (iVar1 != iVar1 + *(int *)(*(int *)(param_1 + 0x10) + 8) * 4) {
      do {
        FUN_00d7b180(uVar2);
        FUN_00d7b1f0();
        iVar1 = iVar1 + 4;
      } while (iVar1 != *(int *)(*(int *)(param_1 + 0x10) + 4) +
                        *(int *)(*(int *)(param_1 + 0x10) + 8) * 4);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    if (iVar1 != iVar1 + *(int *)(*(int *)(param_1 + 8) + 8) * 4) {
      do {
        FUN_00d7b180(uVar2);
        FUN_00d7b1f0();
        iVar1 = iVar1 + 4;
      } while (iVar1 != *(int *)(*(int *)(param_1 + 8) + 4) +
                        *(int *)(*(int *)(param_1 + 8) + 8) * 4);
    }
    iVar1 = (**(code **)(*DAT_01dc52e4 + 0xc))();
  }
  return;
}

// 00D7BD00  BattleCollisionManagerImplement::vf24  size=30  [class]
undefined4 __thiscall BattleCollisionManagerImplement::vf24(undefined4 param_1,byte param_2)

{
  BattleCollisionManager::BattleCollisionManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7BD20  BattleCollisionManagerImplement::vf04  size=233  [class]
void __fastcall BattleCollisionManagerImplement::vf04(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 8) + 4);
  if (puVar5 != puVar5 + *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      iVar3 = FUN_00d7b8e0();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 8);
        uVar1 = *(uint *)(iVar3 + 8);
        iVar2 = *(int *)(iVar3 + 4);
        puVar6 = (undefined4 *)(iVar2 + uVar1 * 4);
        if ((((puVar5 != puVar6) && (iVar2 != 0)) && (uVar1 != 0)) &&
           ((uint)((int)puVar5 - iVar2 >> 2) < uVar1)) {
          for (puVar4 = puVar5; puVar4 != puVar6 + -1; puVar4 = puVar4 + 1) {
            *puVar4 = puVar4[1];
          }
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
          puVar6 = puVar5;
        }
      }
      else {
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 8) + 4) +
                       *(int *)(*(int *)(param_1 + 8) + 8) * 4));
  }
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 4);
  if (puVar5 != puVar5 + *(int *)(*(int *)(param_1 + 0x10) + 8)) {
    do {
      iVar3 = FUN_00d7b8e0();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x10);
        uVar1 = *(uint *)(iVar3 + 8);
        iVar2 = *(int *)(iVar3 + 4);
        puVar6 = (undefined4 *)(iVar2 + uVar1 * 4);
        if (((puVar5 != puVar6) && (iVar2 != 0)) &&
           ((uVar1 != 0 && ((uint)((int)puVar5 - iVar2 >> 2) < uVar1)))) {
          for (puVar4 = puVar5; puVar4 != puVar6 + -1; puVar4 = puVar4 + 1) {
            *puVar4 = puVar4[1];
          }
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
          puVar6 = puVar5;
        }
      }
      else {
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x10) + 4) +
                       *(int *)(*(int *)(param_1 + 0x10) + 8) * 4));
  }
  return;
}

// 00D7DC80  BattleCollisionManagerImplement::vf00  size=529  [class]
void __fastcall BattleCollisionManagerImplement::vf00(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  FUN_00d7a490();
  FUN_00d7b4d0();
  FUN_00d7d970();
  if (((DAT_01bea094 & 0x10000000) == 0) &&
     (piVar7 = *(int **)(*(int *)(param_1 + 8) + 4),
     piVar7 != piVar7 + *(int *)(*(int *)(param_1 + 8) + 8))) {
    do {
      piVar1 = (int *)*piVar7;
      if (piVar1[0xd7] != 0) {
        iVar2 = piVar1[0x10e];
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
          *(undefined4 *)(iVar2 + 8) = 0;
        }
        (**(code **)(*piVar1 + 0x10))();
        piVar6 = *(int **)(*(int *)(param_1 + 0x10) + 4);
        if (piVar6 != piVar6 + *(int *)(*(int *)(param_1 + 0x10) + 8)) {
          do {
            iVar2 = *piVar6;
            if ((*(int *)(iVar2 + 0x35c) != 0) &&
               (((((*(byte *)(piVar1 + 0xe1) & 1) != 0 ||
                  (uVar3 = *(uint *)(iVar2 + 900), (uVar3 & 1) != 0)) ||
                 (iVar4 = FUN_00d77ef0(*(undefined4 *)(iVar2 + 0x374)), iVar4 == 0)) ||
                (((uVar3 & 2) != 0 && (iVar4 = FUN_00d77f50(piVar1), iVar4 == 0)))))) {
              piVar5 = (int *)FUN_00a7c8a0();
              if (piVar5 != (int *)0x0) {
                puVar8 = &DAT_01be9c24;
                (**(code **)(*piVar5 + 4))(&DAT_01be9c24);
                iVar4 = FUN_00dd6d80(puVar8);
                if ((iVar4 != 0) && (iVar4 = FUN_00a8ef10(), iVar4 != 0)) goto LAB_00d7de44;
              }
              iVar4 = (**(code **)*DAT_01dc52e0)(piVar1[0xdb],*(undefined4 *)(iVar2 + 0x36c));
              if (((iVar4 != 0) &&
                  ((((piVar1[0xdc] == 0 || (*(int *)(iVar2 + 0x370) == 0)) ||
                    (piVar1[0xdc] != *(int *)(iVar2 + 0x370))) &&
                   ((iVar4 = FUN_00d77bf0(*(undefined4 *)(iVar2 + 0x370),
                                          *(undefined4 *)(iVar2 + 0x374)), iVar4 == 0 ||
                    ((*(byte *)(iVar2 + 900) & 2) != 0)))))) &&
                 (iVar4 = (**(code **)(*piVar1 + 0xc))(iVar2), iVar4 != 0)) {
                FUN_00d79b40(iVar2);
                FUN_00d79900(*(undefined4 *)(iVar2 + 0x370),*(undefined4 *)(iVar2 + 0x374));
              }
            }
LAB_00d7de44:
            piVar6 = piVar6 + 1;
          } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) +
                                    *(int *)(*(int *)(param_1 + 0x10) + 8) * 4));
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)(*(int *)(*(int *)(param_1 + 8) + 4) +
                              *(int *)(*(int *)(param_1 + 8) + 8) * 4));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

