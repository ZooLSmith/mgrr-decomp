// src/unsorted/unit_00CB1DC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB1DC0..00CB20B0, 4 functions

#include "mgrr.h"

// 00CB1DC0  FUN_00cb1dc0  size=399  [run]
undefined4 FUN_00cb1dc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00a281f0("fontshader.vso");
  uVar2 = FUN_00a281f0("fontshader.pso");
  iVar3 = FUN_00fce310(uVar1,uVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b70e0,"m_FontShader");
    return 0;
  }
  uVar1 = FUN_00a281f0("fontoverlayshader.vso");
  uVar2 = FUN_00a281f0("fontoverlayshader.pso");
  iVar3 = FUN_00fce820(uVar1,uVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b70e0,"m_FontOverlayShader");
    return 0;
  }
  uVar1 = FUN_00a281f0("fontdodgeshader.vso");
  uVar2 = FUN_00a281f0("fontdodgeshader.pso");
  iVar3 = FUN_00fce960(uVar1,uVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b70e0,"m_FontDodgeShader");
    return 0;
  }
  uVar1 = FUN_00a281f0("fontscreenshader.vso");
  uVar2 = FUN_00a281f0("fontscreenshader.pso");
  iVar3 = FUN_00fceaa0(uVar1,uVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b70e0,"m_FontScreenShader");
    return 0;
  }
  uVar1 = FUN_00a281f0("fontcustomobjshader.vso");
  uVar2 = FUN_00a281f0("fontcustomobjshader.pso");
  iVar3 = FUN_00fce480(uVar1,uVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b70e0,"m_FontCustomObjShader");
    return 0;
  }
  uVar1 = FUN_00a281f0("fontcustomobjlightshader.vso");
  uVar2 = FUN_00a281f0("fontcustomobjlightshader.pso");
  iVar3 = FUN_00fce690(uVar1,uVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b70e0,"m_FontCustomObjLightShader");
    return 0;
  }
  return 1;
}

// 00CB1F60  FUN_00cb1f60  size=209  [run]
undefined4 __fastcall FUN_00cb1f60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00de4500("MessCommon.wtb");
  iVar2 = FUN_00de4500("MessCommon.mcd");
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      iVar1 = FUN_00fa25d0(iVar1);
      if (iVar1 == 0) goto LAB_00cb1fb3;
    }
    *(int *)(param_1 + 8) = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar3 = FUN_00de4500("MessRubyInfo.rbd");
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x3b4))();
    if (iVar1 == 0) {
      FUN_00dd5650("Failure: cMessVertexFormat::startup().");
      return 0;
    }
    return 1;
  }
LAB_00cb1fb3:
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  FUN_00dd5650("Failure: m_CommonCtrl::create().");
  return 0;
}

// 00CB2040  FUN_00cb2040  size=111  [run]
void __fastcall FUN_00cb2040(int param_1)

{
  FUN_00f9cb70();
  (**(code **)(*(int *)(param_1 + 0x268) + 4))();
  (**(code **)(*(int *)(param_1 + 800) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1e0) + 4))();
  (**(code **)(*(int *)(param_1 + 0x158) + 4))();
  (**(code **)(*(int *)(param_1 + 0xd0) + 4))();
                    /* WARNING: Could not recover jumptable at 0x00cb20ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x48) + 4))();
  return;
}

// 00CB20B0  FUN_00cb20b0  size=28  [run]
void __fastcall FUN_00cb20b0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  return;
}

