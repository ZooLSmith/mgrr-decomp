// lib/havok/unit_0092E490.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092E490..0092E610, 8 functions

#include "mgrr.h"
#include "HkRemoveManagerImplement.h"

// 0092E490  HkRemoveManagerImplement::HkRemoveManagerImplement  size=98  [run]
bool HkRemoveManagerImplement::HkRemoveManagerImplement(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x68,&DAT_01b7c218);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    FUN_00dd7290(0);
    DAT_01b35fa4 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01b35fa4 = (undefined4 *)0x0;
  return false;
}

// 0092E500  HkRemoveManagerImplement::vf1C  size=5  [run]
undefined4 __thiscall HkRemoveManagerImplement::vf1C(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0092caf0(param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      FUN_00dd5650(&DAT_0164d744);
      return 0;
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0xc,&DAT_01b7c218);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = HkRemoveContainer::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      *puVar3 = HkRemoveEntity::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      puVar3[2] = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    FUN_00dd7320();
  }
  return 1;
}

// 0092E510  HkRemoveManagerImplement::vf18  size=5  [run]
undefined4 __thiscall HkRemoveManagerImplement::vf18(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0092caf0(param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      FUN_00dd5650(&DAT_0164d744);
      return 0;
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0xc,&DAT_01b7c218);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = HkRemoveContainer::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      *puVar3 = HkRemovePhantom::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      puVar3[2] = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    FUN_00dd7320();
  }
  return 1;
}

// 0092E520  HkRemoveManagerImplement::vf14  size=5  [run]
undefined4 __thiscall HkRemoveManagerImplement::vf14(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0092caf0(param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      FUN_00dd5650(&DAT_0164d744);
      return 0;
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0xc,&DAT_01b7c218);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = HkRemoveContainer::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      *puVar3 = HkRemovePhysicsSystem::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      puVar3[2] = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    FUN_00dd7320();
  }
  return 1;
}

// 0092E530  HkRemoveManagerImplement::vf10  size=95  [run]
undefined4 __thiscall HkRemoveManagerImplement::vf10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0092caf0(param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      FUN_00dd5650(&DAT_0164d744);
      return 0;
    }
    uVar3 = HkRemoveContainer::HkRemoveContainer_6(param_2);
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar3;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    FUN_00dd7320();
  }
  return 1;
}

// 0092E590  HkRemoveManagerImplement::vf0C  size=5  [run]
undefined4 __thiscall HkRemoveManagerImplement::vf0C(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0092caf0(param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      FUN_00dd5650(&DAT_0164d744);
      return 0;
    }
    puVar3 = (undefined4 *)FUN_00dd3500(0xc,&DAT_01b7c218);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = HkRemoveContainer::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      *puVar3 = HkRemoveRagdoll::vftable;
      puVar3[1] = *(undefined4 *)(param_2 + 4);
      puVar3[2] = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar3;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    FUN_00dd7320();
  }
  return 1;
}

// 0092E5A0  HkRemoveManagerImplement::vf20  size=107  [run]
void __fastcall HkRemoveManagerImplement::vf20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004066f0();
  iVar2 = *(int *)(param_1 + 0x5c);
  while (iVar2 != 0) {
    FUN_0092e090(*(undefined4 *)(param_1 + 0x54));
    iVar2 = *(int *)(param_1 + 0x5c);
  }
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

// 0092E610  HkRemoveManagerImplement::HkRemoveManagerImplement  size=5  [run]
bool HkRemoveManagerImplement::HkRemoveManagerImplement(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x68,&DAT_01b7c218);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    FUN_00dd7290(0);
    DAT_01b35fa4 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01b35fa4 = (undefined4 *)0x0;
  return false;
}

