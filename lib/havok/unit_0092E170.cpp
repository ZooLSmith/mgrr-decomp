// lib/havok/unit_0092E170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092E170..0092E380, 4 functions

#include "types.h"

// 0092E170  HkRemoveContainer::HkRemoveContainer_2  size=140  [run]
undefined4 __thiscall HkRemoveContainer::HkRemoveContainer_2(int param_1,int param_2)

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
      *puVar3 = vftable;
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

// 0092E200  HkRemoveContainer::HkRemoveContainer_4  size=140  [run]
undefined4 __thiscall HkRemoveContainer::HkRemoveContainer_4(int param_1,int param_2)

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
      *puVar3 = vftable;
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

// 0092E290  HkRemoveContainer::HkRemoveContainer_3  size=140  [run]
undefined4 __thiscall HkRemoveContainer::HkRemoveContainer_3(int param_1,int param_2)

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
      *puVar3 = vftable;
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

// 0092E380  HkRemoveContainer::HkRemoveContainer_5  size=140  [run]
undefined4 __thiscall HkRemoveContainer::HkRemoveContainer_5(int param_1,int param_2)

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
      *puVar3 = vftable;
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

