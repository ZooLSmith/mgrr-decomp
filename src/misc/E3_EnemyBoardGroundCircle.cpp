// src/misc/E3_EnemyBoardGroundCircle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040B020..00AB93E0, 6 functions

#include "mgrr.h"
#include "E3_EnemyBoardGroundCircle.h"

// 0040B020  E3_EnemyBoardGroundCircle::startup  size=31  [class]
undefined4 __fastcall E3_EnemyBoardGroundCircle::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  return 1;
}

// 0040B040  FUN_0040b040  size=156  [callgraph]
void __fastcall FUN_0040b040(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_00a9e290(&DAT_0163bafc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if (param_1[0x187] == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1c))();
      FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
  }
  return;
}

// 0040C110  E3_EnemyBoardGroundCircle::vf4C  size=54  [class]
void __fastcall E3_EnemyBoardGroundCircle::vf4C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_0040b040();
      ExcelStage::vf4C();
      return;
    }
    if (iVar1 != 2) goto LAB_0040c13e;
  }
  (**(code **)(*param_1 + 0x20))();
LAB_0040c13e:
  ExcelStage::vf4C();
  return;
}

// 00AB0A70  E3_EnemyBoardGroundCircle::E3_EnemyBoardGroundCircle  size=18  [class]
undefined4 * __fastcall E3_EnemyBoardGroundCircle::E3_EnemyBoardGroundCircle(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0A90  E3_EnemyBoardGroundCircle::vf04  size=6  [class]
undefined * E3_EnemyBoardGroundCircle::vf04(void)

{
  return &DAT_01b34b5c;
}

// 00AB93E0  E3_EnemyBoardGroundCircle::destruct  size=43  [class]
undefined4 __thiscall E3_EnemyBoardGroundCircle::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

