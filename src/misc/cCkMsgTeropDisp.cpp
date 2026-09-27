// src/misc/cCkMsgTeropDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0B600..00D29A90, 11 functions

#include "mgrr.h"
#include "cCkMsgTeropDisp.h"

// 00D0B600  cCkMsgTeropDisp::cCkMsgTeropDisp  size=18  [class]
undefined4 * __fastcall cCkMsgTeropDisp::cCkMsgTeropDisp(undefined4 *param_1)

{
  cCkMsgDisp::cCkMsgDisp();
  *param_1 = vftable;
  return param_1;
}

// 00D1BED0  cCkMsgTeropDisp::cCkMsgTeropDisp_2  size=61  [class]
undefined4 * cCkMsgTeropDisp::cCkMsgTeropDisp_2(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x210,0x20,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x210);
  cCkMsgDisp::cCkMsgDisp();
  *_Dst = vftable;
  return _Dst;
}

// 00D1DE90  cCkMsgTeropDisp::vf00  size=62  [class]
undefined4 * __thiscall cCkMsgTeropDisp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIWorkBase::vftable;
  FUN_00cc7640();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D1DED0  FUN_00d1ded0  size=21  [callgraph]
undefined4 * __fastcall FUN_00d1ded0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 00D1DEF0  FUN_00d1def0  size=36  [callgraph]
void __fastcall FUN_00d1def0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b6e0();
  }
  Hw::cHeap::cHeap_5();
  return;
}

// 00D1DF20  FUN_00d1df20  size=21  [callgraph]
undefined4 * __fastcall FUN_00d1df20(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 00D1DF40  FUN_00d1df40  size=36  [callgraph]
void __fastcall FUN_00d1df40(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b720();
  }
  Hw::cHeap::cHeap_5();
  return;
}

// 00D1DF70  FUN_00d1df70  size=96  [callgraph]
undefined4 __thiscall FUN_00d1df70(int param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  FUN_00cc7640();
  if (param_3 != 0) {
    iVar2 = cUIDrawHit::cUIDrawHit(param_2,param_1);
    if (iVar2 != 0) {
      uVar3 = 0;
      puVar4 = (undefined2 *)(param_1 + 0x88);
      do {
        uVar3 = uVar3 + 1;
        uVar1 = FUN_00cc8300(uVar3);
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < 99);
      *(undefined4 *)(param_1 + 0x74) = param_2;
      return 1;
    }
  }
  FUN_00cc7640();
  return 0;
}

// 00D1DFD0  FUN_00d1dfd0  size=43  [callgraph]
undefined4 __thiscall FUN_00d1dfd0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00d0d100(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00cc7640();
  return 0;
}

// 00D1E000  FUN_00d1e000  size=156  [callgraph]
uint __fastcall FUN_00d1e000(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_4;
  
  iVar3 = 0;
  local_4 = 1;
  uVar2 = 1;
  if (0 < *(int *)(param_1 + 0x80)) {
    iVar4 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x7c) + iVar4;
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x3f0) != 0)) {
        iVar1 = (**(code **)(**(int **)(iVar5 + 0x3f0) + 8))();
        if (iVar1 == 9) {
          if (*(int **)(iVar5 + 0x3f0) != (int *)0x0) {
            uVar2 = cUICtrl::HIT(*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),
                                 iVar3);
            local_4 = local_4 & uVar2;
          }
        }
        else {
          iVar1 = (**(code **)(**(int **)(iVar5 + 0x3f0) + 8))();
          if ((iVar1 == 0) && (*(int *)(iVar5 + 0x3f0) != 0)) {
            FUN_00d1e000();
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x400;
      uVar2 = local_4;
    } while (iVar3 < *(int *)(param_1 + 0x80));
  }
  return uVar2;
}

// 00D29A90  cCkMsgTeropDisp::vf14  size=106  [class]
undefined4 __fastcall cCkMsgTeropDisp::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cc9000(1,0x12);
  if ((iVar1 != 0) && (iVar1 = FUN_00d1df70(&DAT_01b7be50,iVar1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 8) = 0x18;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00d1e000();
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x63060000;
    return 1;
  }
  return 0;
}

