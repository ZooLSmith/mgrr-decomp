// src/managers/triggermanager/actions/TrgActObjAttach.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FB10..00C87EA0, 2 functions

#include "mgrr.h"

// 00C7FB10  Trigger::Act::OBJ_ATTACH  size=322  [class]
undefined4 __fastcall Trigger::Act::OBJ_ATTACH(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab124);
    return 0;
  }
  iVar5 = iVar1 + 8;
  if (iVar5 != 0) {
    iVar2 = FUN_009fde60(iVar5);
    if (iVar2 == -1) {
      uVar3 = FUN_00e03ea0(iVar5);
      iVar2 = FUN_00a18cf0(uVar3);
    }
    else {
      iVar2 = FUN_00a7f600(iVar2);
    }
    if (iVar2 != 0) {
      iVar5 = iVar1 + 0x18;
      if (iVar5 != 0) {
        iVar4 = FUN_009fde60(iVar5);
        if (iVar4 == -1) {
          uVar3 = FUN_00e03ea0(iVar5);
          iVar4 = FUN_00a18cf0(uVar3);
        }
        else {
          iVar4 = FUN_00a7f600(iVar4);
        }
        if (iVar4 != 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 4) + 4);
          if (iVar5 != 0x58) {
            if (iVar5 == 0x59) {
              FUN_00a7c8a0(iVar4);
              FUN_00a9e0d0(iVar4);
            }
            return 1;
          }
          iVar5 = FUN_00a7c8a0();
          if (*(int *)(iVar5 + 0x7c4) == 0) {
            FUN_00a7c8a0();
            iVar5 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
            if (iVar5 == 0) {
              return 0;
            }
          }
          uVar3 = *(undefined4 *)(iVar1 + 0x28);
          uVar7 = 0xffffffff;
          uVar6 = 0;
          FUN_00a7c8a0(0,iVar2,iVar4,uVar3,0xffffffff);
          FUN_00a8c5f0(uVar6,iVar2,iVar4,uVar3,uVar7);
          return 1;
        }
      }
      FUN_00dd5650(&DAT_016ab098,iVar5);
      return 0;
    }
  }
  FUN_00dd5650(&DAT_016ab0e0,iVar5);
  return 0;
}

// 00C87EA0  Trigger::Act::OBJ_ATTACH_2  size=27  [class]
undefined4 __fastcall Trigger::Act::OBJ_ATTACH_2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab124);
    return 0;
  }
  iVar1 = iVar2 + 8;
  if (iVar1 != 0) {
    iVar3 = FUN_009fde60(iVar1);
    if (iVar3 == -1) {
      uVar4 = FUN_00e03ea0(iVar1);
      iVar3 = FUN_00a18cf0(uVar4);
      if (iVar3 == 0) goto LAB_00c87f5c;
      iVar5 = FUN_00a7c8a0();
      uVar4 = *(undefined4 *)(iVar5 + 0x4b0);
      iVar5 = FUN_009f9480(uVar4);
      if (iVar5 == 0) {
        iVar5 = FUN_009f9460(uVar4);
        if (iVar5 == 0) goto LAB_00c87f1a;
      }
    }
    else {
      iVar5 = FUN_009f9480(iVar3);
      if (iVar5 == 0) {
        iVar5 = FUN_009f9460(iVar3);
        if (iVar5 == 0) {
LAB_00c87f1a:
          FUN_00dd5650(&DAT_016ac9e0,iVar1);
          return 0;
        }
      }
      iVar3 = FUN_00a7f600(iVar3);
    }
    if (iVar3 != 0) {
      FUN_00a7c8a0();
      if (*(int *)(iVar2 + 0x18) == 1) {
        FUN_00a8f8a0();
        return 1;
      }
      FUN_00a8f920();
      return 1;
    }
  }
LAB_00c87f5c:
  FUN_00dd5650(&DAT_016ac99c,iVar1);
  return 0;
}

