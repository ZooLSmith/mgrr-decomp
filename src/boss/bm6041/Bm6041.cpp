// src/boss/bm6041/Bm6041.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00604370..00AC7250, 5 functions

#include "mgrr.h"
#include "Bm6041.h"

// 00604370  Bm6041::vf30  size=66  [class]
void __fastcall Bm6041::vf30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x4ec);
  iVar2 = FUN_00e03ea0("block");
  if ((iVar1 == iVar2) && (DAT_018b9174 == 0xc30)) {
    piVar3 = (int *)FUN_00a6e640();
    (**(code **)(*piVar3 + 0x48))(10,2);
  }
  Bh0056::vf30();
  return;
}

// 00AB1740  Bm6041::Bm6041  size=18  [class]
undefined4 * __fastcall Bm6041::Bm6041(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB1760  Bm6041::vf04  size=6  [class]
undefined * Bm6041::vf04(void)

{
  return &DAT_01b354f4;
}

// 00AB9A60  Bm6041::vf00  size=43  [class]
undefined4 __thiscall Bm6041::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC7250  Bm6041::vf40  size=350  [class]
undefined4 __fastcall Bm6041::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::vf40();
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

