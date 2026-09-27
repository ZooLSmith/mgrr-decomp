// src/enemy/em0100/ZANGEKI_QTE_EM0100DIVE.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BB4700..00BB4700, 1 functions

#include "mgrr.h"

// 00BB4700  ZANGEKI_QTE_EM0100DIVE::updateOnce  size=335  [class]
void __thiscall ZANGEKI_QTE_EM0100DIVE::updateOnce(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar10 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar10);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar3 + 0xc);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar10);
    piVar4 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    FUN_00dd5650(&DAT_016a2500);
  }
  else {
    iVar1 = **(int **)(param_1 + 0x30);
    uVar2 = (**(code **)(*piVar4 + 0x84))();
    (**(code **)(iVar1 + 0x7c))(piVar4 + 0x10,uVar2);
    FUN_00a8cb60(1);
  }
  uVar11 = 0x3f800000;
  uVar9 = 0xbf800000;
  uVar8 = 0x8000000;
  uVar7 = 0x3f800000;
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = FUN_00a81330(0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_00aa4520(0x85,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11);
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_00b8bb40(0);
  *(undefined4 *)(uVar3 + 0x5d4) = 1;
  return;
}

