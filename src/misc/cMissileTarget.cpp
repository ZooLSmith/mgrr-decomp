// src/misc/cMissileTarget.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEDDD0..00D23C00, 4 functions

#include "mgrr.h"
#include "cMissileTarget.h"

// 00CEDDD0  cMissileTarget::cMissileTarget  size=107  [class]
undefined4 * __fastcall cMissileTarget::cMissileTarget(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = cUIWorkBase::vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00CEDE70  cMissileTarget::vf00  size=62  [class]
undefined4 * __thiscall cMissileTarget::vf00(undefined4 *param_1,byte param_2)

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

// 00D23B90  FUN_00d23b90  size=106  [callgraph]
undefined4 __fastcall FUN_00d23b90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cc9000(2,0x33);
  if ((iVar1 != 0) && (iVar1 = FUN_00d1df70(&DAT_01b7be50,iVar1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 8) = 2;
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

// 00D23C00  cMissileTarget::vf08  size=282  [class]
void __thiscall cMissileTarget::vf08(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    FUN_00c1cf50();
    iVar2 = FUN_00c1cfd0();
    if ((iVar2 != 0) && (DAT_01dc1b74 == 5)) {
      iVar2 = FUN_00d23b90();
      iVar2 = (-(uint)(iVar2 != 0) & 2) - 1;
      *(int *)(param_1 + 0x1e0) = iVar2;
      if (iVar2 == -1) {
        FUN_00dd5650(&DAT_016bb438);
      }
    }
    return;
  }
  if (*(int *)(param_1 + 0x1e0) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1e8) == 0) {
    uVar1 = (uint)(*(int *)(param_1 + 0x1ec) != *(int *)(param_1 + 0x1f0));
    *(uint *)(param_1 + 0x1ec) = uVar1;
    if (uVar1 != 0) {
      uVar1 = FUN_00dde2a0(0x14,0x28);
      *(uint *)(param_1 + 500) = uVar1 & 0xffff;
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
    if (*(int *)(param_1 + 0x1e8) == 0) goto LAB_00d23c95;
  }
  uVar1 = *(int *)(param_1 + 500) - 1;
  uVar1 = uVar1 & ((int)uVar1 < 1) - 1;
  *(uint *)(param_1 + 500) = uVar1;
  if (uVar1 == 0) {
    FUN_00cdeec0(0);
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
LAB_00d23c95:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0x1e4);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_00ce01f0(param_2);
  }
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  return;
}

