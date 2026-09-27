// src/effect/EffectStencilMaskDrawWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CF690..009DE8E0, 2 functions

#include "mgrr.h"
#include "EffectStencilMaskDrawWork.h"

// 009CF690  EffectStencilMaskDrawWork::draw  size=211  [class]
void __fastcall EffectStencilMaskDrawWork::draw(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00f45d30(0);
  FUN_00f458a0();
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    FUN_00f9de50(8,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd0));
    FUN_00f9df20(*(undefined4 *)(param_1 + 0xd4));
    uVar4 = 3;
    uVar3 = 3;
    uVar2 = 3;
  }
  else {
    if (iVar1 == 1) {
      FUN_00f9dcf0(1);
      FUN_00f9de50(3,*(undefined4 *)(param_1 + 0xd0),0);
      FUN_00f9df20(*(undefined4 *)(param_1 + 0xd0));
      FUN_00f9dd70(1,1,3);
      goto LAB_009cf72c;
    }
    if (iVar1 != 2) goto LAB_009cf72c;
    FUN_00f9dcf0(1);
    FUN_00f9de50(3,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd0));
    uVar4 = 1;
    uVar3 = 1;
    uVar2 = 1;
  }
  FUN_00f9dd70(uVar2,uVar3,uVar4);
LAB_009cf72c:
  if (*(int *)(param_1 + 0xd0) == 0) {
    FUN_00f9df20(*(undefined4 *)(param_1 + 0xd4));
  }
  FUN_00f51000(param_1);
  if (*(int *)(param_1 + 0xd8) - 1U < 2) {
    FUN_00f9dcf0(0);
  }
  return;
}

// 009DE8E0  EffectStencilMaskDrawWork::vf00  size=31  [class]
undefined4 * __thiscall EffectStencilMaskDrawWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

