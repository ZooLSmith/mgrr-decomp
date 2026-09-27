// src/misc/cWeakPointLineMark.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDA980..00D27670, 4 functions

#include "types.h"

// 00CDA980  cWeakPointLineMark::vf0C  size=5  [class]
void __thiscall cWeakPointLineMark::vf0C(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  if ((((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 4) != 0)) &&
      ((1 < DAT_01be8e44 || ((*(uint *)(param_1 + 0x28) & 0x40000) != 0)))) &&
     ((DAT_01dc2d7c == 0 || ((*(uint *)(param_1 + 0x28) & 0x80000) != 0)))) {
    FUN_00cca790(auStack_10);
    uVar1 = 0;
    if (*(int *)(extraout_ECX + 8) == 0x1a) {
      uVar1 = 1;
    }
    else if (*(int *)(extraout_ECX + 8) == 0) {
      uVar1 = 2;
    }
    (**(code **)(*(int *)(extraout_ECX + 0x40) + 4))
              (param_2,0,*(undefined4 *)(extraout_ECX + 0x30),uVar1,auStack_10,auStack_10,0);
  }
  return;
}

// 00D06B80  cWeakPointLineMark::vf00  size=62  [class]
undefined4 * __thiscall cWeakPointLineMark::vf00(undefined4 *param_1,byte param_2)

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

// 00D275F0  FUN_00d275f0  size=114  [callgraph]
undefined4 __fastcall FUN_00d275f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e4);
  iVar2 = FUN_00cc9000(2,0x551);
  if ((iVar2 != 0) && (iVar2 = FUN_00d1df70(&DAT_01b7be50,iVar2), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00d1e000();
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
    return 1;
  }
  return 0;
}

// 00D27670  cWeakPointLineMark::vf08  size=110  [class]
void __thiscall cWeakPointLineMark::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    FUN_00c1cf50();
    iVar1 = FUN_00c1cfd0();
    if ((iVar1 != 0) && (DAT_01dc1b74 == 5)) {
      iVar1 = FUN_00d275f0();
      iVar1 = (-(uint)(iVar1 != 0) & 2) - 1;
      *(int *)(param_1 + 0x1e0) = iVar1;
      if (iVar1 == -1) {
        FUN_00dd5650(&DAT_016bb528);
      }
    }
  }
  else if ((*(int *)(param_1 + 0x1e0) == 1) && (*(int *)(param_1 + 4) != 0)) {
    FUN_00ce01f0(param_2);
    return;
  }
  return;
}

