// src/behavior/BehaviorBm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC71A0..00AC7250, 4 functions

#include "mgrr.h"
#include "BehaviorBm.h"

// 00AC71A0  BehaviorBm::BehaviorBm  size=67  [class]
undefined4 * __fastcall BehaviorBm::BehaviorBm(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  param_1[0x29c] = 0;
  cEspControler::cEspControler();
  param_1[0x2ce] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  return param_1;
}

// 00AC71F0  BehaviorBm::vf04  size=6  [class]
undefined * BehaviorBm::vf04(void)

{
  return &DAT_01be9c54;
}

// 00AC7200  BehaviorBm::destruct  size=65  [class]
undefined4 __thiscall BehaviorBm::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC7250  BehaviorBm::startup  size=350  [class]
undefined4 __fastcall BehaviorBm::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a8f840(&DAT_0163bdcc);
  if ((*(int *)(param_1 + 0x4b0) == 0xd0309) || (*(int *)(param_1 + 0x4b0) == 0xd030b)) {
    FUN_00aa92c0(1);
  }
  if (((*(int *)(param_1 + 0x4b0) == 0xd017d) || (*(int *)(param_1 + 0x4b0) == 0xd017e)) &&
     (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f18c0(0x400000);
  }
  if (*(int *)(param_1 + 0x4b0) == 0xd024d) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      **(undefined4 **)(param_1 + 0x370) = 1;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((((((iVar1 == 0xd0250) || (iVar1 == 0xd0251)) ||
        ((iVar1 == 0xd0252 || ((iVar1 == 0xd0253 || (iVar1 == 0xd0254)))))) || (iVar1 == 0xd0255))
      || ((((iVar1 == 0xd0256 || (iVar1 == 0xd0257)) || (iVar1 == 0xd032b)) ||
          ((iVar1 == 0xd032c || (iVar1 == 0xd025b)))))) &&
     (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(1);
  }
  iVar1 = FUN_00d467a0();
  if (((iVar1 != 0) &&
      (((iVar1 = *(int *)(param_1 + 0x4b0), iVar1 == 0xd0315 || (iVar1 == 0xd0316)) ||
       ((iVar1 == 0xd0080 || ((iVar1 == 0xd0084 || (iVar1 == 0xd0085)))))))) &&
     (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f1760(0x100);
  }
  return 1;
}

