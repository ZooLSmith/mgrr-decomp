// src/hw/cPrimIF.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA2C30..00FAABF0, 3 functions

#include "mgrr.h"

// 00FA2C30  Hw::cPrimIF::vf04  size=947  [class]
void __fastcall Hw::cPrimIF::vf04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = DAT_018da644;
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((*(byte *)(param_1 + 0xa0) & 0x40) == 0) {
    uVar7 = 6;
    uVar6 = 5;
  }
  else {
    uVar7 = 1;
    uVar6 = 2;
  }
  FUN_00f9d970(uVar6,uVar7,1);
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    FUN_00fa05b0(((*(byte *)(param_1 + 0x9e) & 0x1fe | (uint)*(byte *)(param_1 + 0x9f) << 9) << 8 |
                 *(byte *)(param_1 + 0x9d) & 0x1fe) << 7 | (uint)(*(byte *)(param_1 + 0x9c) >> 1));
    FUN_00f9eec0(&DAT_018da524,param_1 + 0x10);
    if (DAT_018da644 != 0) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,0);
      }
      DAT_018da644 = 0;
    }
    if (DAT_01f20590 != &PTR_vftable_018da4f0) {
      DAT_01f20590 = &PTR_vftable_018da4f0;
      DAT_01f2058c = 1;
    }
    if (DAT_01f2059c != &PTR_vftable_018da4c0) {
      DAT_01f2059c = &PTR_vftable_018da4c0;
      DAT_01f20598 = 1;
    }
    iVar3 = param_1 + 0x50;
    if ((DAT_01f205a0 != iVar3) && (iVar2 = FUN_00f98600(0,iVar3), iVar2 != 0)) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar3;
    }
    FUN_00f99090(param_1 + 0x78);
    FUN_00f9f750(*(undefined4 *)(param_1 + 0x98));
  }
  iVar3 = DAT_018da648;
  iVar2 = iVar3;
  if ((*(uint *)(param_1 + 0xa0) & 2) == 0) {
    iVar2 = 0;
    if (((*(uint *)(param_1 + 0xa0) & 0x20) != 0) && (iVar2 = iVar3, DAT_018da648 != 1)) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,1);
      }
      DAT_018da648 = 1;
    }
  }
  else if (DAT_018da648 != 0) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,0);
    }
    DAT_018da648 = 0;
  }
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0x9c));
  FUN_00f9eec0(&DAT_018da524,param_1 + 0x10);
  iVar3 = DAT_018da63c;
  iVar5 = 3;
  if (((*(byte *)(param_1 + 0xa0) & 4) != 0) && (iVar5 = iVar3, DAT_018da63c != 1)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,1);
    }
    DAT_018da63c = 1;
  }
  iVar3 = DAT_018da63c;
  if (((*(byte *)(param_1 + 0xa0) & 8) != 0) && (iVar5 = iVar3, DAT_018da63c != 2)) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,2);
    }
    DAT_018da63c = 2;
  }
  iVar3 = DAT_018da644;
  if ((DAT_018da644 != iVar4) && (iVar3 = iVar4, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,7,iVar4 != 0);
  }
  DAT_018da644 = iVar3;
  if (DAT_01f20590 != &PTR_vftable_018da4f0) {
    DAT_01f20590 = &PTR_vftable_018da4f0;
    DAT_01f2058c = 1;
  }
  if (DAT_01f2059c != &PTR_vftable_018da4c0) {
    DAT_01f2059c = &PTR_vftable_018da4c0;
    DAT_01f20598 = 1;
  }
  iVar4 = param_1 + 0x50;
  if ((DAT_01f205a0 != iVar4) && (iVar3 = FUN_00f98600(0,iVar4), iVar3 != 0)) {
    DAT_01f20598 = 1;
    DAT_01f205a0 = iVar4;
  }
  puVar1 = (undefined4 *)(param_1 + 0x78);
  if ((DAT_01f20594 != puVar1) && (DAT_01f206d4 != (int *)0x0)) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar4 = (**(code **)(*DAT_01f206d4 + 0x1a0))(DAT_01f206d4,0);
    }
    else {
      iVar4 = (**(code **)(*DAT_01f206d4 + 0x1a0))(DAT_01f206d4,*puVar1);
    }
    if (-1 < iVar4) {
      DAT_01f20594 = puVar1;
    }
  }
  FUN_00f9f750(*(undefined4 *)(param_1 + 0x98));
  iVar4 = DAT_018da648;
  if ((((*(byte *)(param_1 + 0xa0) & 0x22) != 0) && (DAT_018da648 != iVar2)) &&
     (iVar4 = iVar2, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xe,iVar2 != 0);
  }
  DAT_018da648 = iVar4;
  iVar4 = DAT_018da63c;
  if ((((*(byte *)(param_1 + 0xa0) & 0xc) != 0) && (DAT_018da63c != iVar5)) &&
     (iVar4 = iVar5, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x16,iVar5);
  }
  DAT_018da63c = iVar4;
  return;
}

// 00FAA7C0  Hw::cPrimIF::cPrimIF  size=80  [class]
void __fastcall Hw::cPrimIF::cPrimIF(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  return;
}

// 00FAABF0  Hw::cPrimIF::vf00  size=30  [class]
undefined4 __thiscall Hw::cPrimIF::vf00(undefined4 param_1,byte param_2)

{
  cOtWork::cOtWork_15();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

