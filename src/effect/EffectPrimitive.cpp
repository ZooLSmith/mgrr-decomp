// src/effect/EffectPrimitive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F581C0..00F58370, 2 functions

#include "mgrr.h"

// 00F581C0  EffectPrimitive::Startup  size=379  [class]
undefined4 EffectPrimitive::Startup(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = FUN_00f511d0();
  iVar2 = FUN_00f9cb30(uVar1,param_1);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016e0e7c);
    return 0;
  }
  uVar1 = FUN_00f51200();
  iVar2 = FUN_00f9c810(2,uVar1,param_1);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016e0f28);
    return 0;
  }
  iVar2 = 0;
  do {
    iVar3 = FUN_00f9cb30(0x700000,param_1);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e0f78);
      return 0;
    }
    iVar3 = FUN_00f9c810(2,0x38000,param_1);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016e0fe0);
      return 0;
    }
    iVar2 = iVar2 + 0x1c;
  } while (iVar2 < 0x38);
  FUN_00f99db0();
  FUN_00f99ac0();
  uVar7 = 0;
  do {
    (&DAT_01ee6580)[uVar7] = 0;
    puVar6 = &DAT_018d74e0;
    uVar4 = 0;
    do {
      if (*puVar6 == uVar7) goto LAB_00f582a5;
      uVar4 = uVar4 + 0x10;
      puVar6 = puVar6 + 4;
    } while (uVar4 < 0x100);
    puVar6 = (uint *)0x0;
LAB_00f582a5:
    piVar5 = (int *)(*(code *)puVar6[1])(param_1);
    (&DAT_01ee6580)[uVar7] = piVar5;
    if (piVar5 == (int *)0x0) {
      FUN_00dd5650(&DAT_016e1028);
      FUN_00f4e6f0();
      return 0;
    }
    iVar2 = (**(code **)(*piVar5 + 4))(&DAT_01ee65c4,&DAT_01ee65e0,param_1);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016e1090);
      FUN_00f4e6f0();
      return 0;
    }
    uVar7 = uVar7 + 1;
    if (0xf < uVar7) {
      FUN_00f99df0();
      FUN_00f99b10();
      DAT_01ee65c0 = 0;
      return 1;
    }
  } while( true );
}

// 00F58370  FUN_00f58370  size=32  [callgraph]
undefined4 FUN_00f58370(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x11c,param_1);
  if (iVar1 != 0) {
    uVar2 = EspPrimitiveWorkBillboard::EspPrimitiveWorkBillboard();
    return uVar2;
  }
  return 0;
}

