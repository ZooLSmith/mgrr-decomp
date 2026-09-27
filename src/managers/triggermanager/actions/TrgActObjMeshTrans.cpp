// src/managers/triggermanager/actions/TrgActObjMeshTrans.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87EBB..00C87EBB, 1 functions

#include "mgrr.h"

// 00C87EBB  Trigger::Act::OBJ_MESH_TRANS  size=233  [class]
undefined4 Trigger::Act::OBJ_MESH_TRANS(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = unaff_EBP + 8;
  if (iVar1 != 0) {
    iVar2 = FUN_009fde60(iVar1);
    if (iVar2 == -1) {
      uVar3 = FUN_00e03ea0(iVar1);
      iVar2 = FUN_00a18cf0(uVar3);
      if (iVar2 == 0) goto LAB_00c87f5c;
      iVar4 = FUN_00a7c8a0();
      uVar3 = *(undefined4 *)(iVar4 + 0x4b0);
      iVar4 = FUN_009f9480(uVar3);
      if (iVar4 == 0) {
        iVar4 = FUN_009f9460(uVar3);
        if (iVar4 == 0) goto LAB_00c87f1a;
      }
    }
    else {
      iVar4 = FUN_009f9480(iVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_009f9460(iVar2);
        if (iVar4 == 0) {
LAB_00c87f1a:
          FUN_00dd5650(&DAT_016ac9e0,iVar1);
          return 0;
        }
      }
      iVar2 = FUN_00a7f600(iVar2);
    }
    if (iVar2 != 0) {
      FUN_00a7c8a0();
      if (*(int *)(unaff_EBP + 0x18) == 1) {
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

