// src/managers/triggermanager/actions/TrgActEffectRoomLoop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C973E0..00C973E0, 1 functions

#include "mgrr.h"

// 00C973E0  Trigger::Act::EFFECT_ROOM_LOOP  size=201  [class]
int __fastcall Trigger::Act::EFFECT_ROOM_LOOP(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (iVar5 == 0) {
    FUN_00dd5650(&DAT_016b1534);
    return 0;
  }
  piVar1 = (int *)FUN_00a6dd90();
  iVar2 = (**(code **)(*piVar1 + 0x9c))(*(undefined4 *)(iVar5 + 8));
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)cEspControler::cEspControler();
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = FUN_00e01eb0(puVar3);
        iVar6 = FUN_00e01540(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),uVar4);
        if (iVar6 == 1) {
          uVar4 = FUN_00e03ea0(iVar5 + 0x10);
          iVar5 = FUN_00a71770(puVar3,uVar4);
          return iVar5;
        }
        (**(code **)*puVar3)(1);
      }
    }
  }
  return iVar6;
}

