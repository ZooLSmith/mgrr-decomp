// src/misc/cChainComboParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD0520..00D2B040, 8 functions

#include "types.h"

// 00CD0520  cChainComboParts::cChainComboParts  size=239  [class]
undefined4 * cChainComboParts::cChainComboParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x46] = 0;
  extraout_EDX[0x51] = 0;
  extraout_EDX[0x52] = 0;
  extraout_EDX[0x44] = 0;
  extraout_EDX[0x53] = 0;
  extraout_EDX[0x45] = 0;
  extraout_EDX[0x54] = 0;
  extraout_EDX[0x47] = 0;
  extraout_EDX[0x56] = 0;
  extraout_EDX[0x55] = 0;
  extraout_EDX[0x57] = 0;
  extraout_EDX[0x58] = 0;
  extraout_EDX[0x59] = 0;
  extraout_EDX[0x5a] = 0;
  extraout_EDX[0x5b] = 0;
  extraout_EDX[0x5c] = 0;
  extraout_EDX[0x5d] = 0;
  extraout_EDX[0x5e] = 0;
  extraout_EDX[0x5f] = 0;
  *extraout_EDX = vftable;
  *(undefined2 *)(extraout_EDX + 0x4a) = 0;
  *(undefined2 *)((int)extraout_EDX + 0x12a) = 0;
  *(undefined2 *)(extraout_EDX + 0x4b) = 0;
  *(undefined2 *)((int)extraout_EDX + 0x12e) = 0;
  *(undefined2 *)(extraout_EDX + 0x4c) = 0;
  *(undefined2 *)((int)extraout_EDX + 0x132) = 0;
  *(undefined2 *)(extraout_EDX + 0x4d) = 0;
  *(undefined2 *)((int)extraout_EDX + 0x136) = 0;
  *(undefined2 *)(extraout_EDX + 0x4e) = 0;
  *(undefined2 *)((int)extraout_EDX + 0x13a) = 0;
  *(undefined2 *)(extraout_EDX + 0x4f) = 0;
  *(undefined2 *)((int)extraout_EDX + 0x13e) = 0;
  *(undefined2 *)(extraout_EDX + 0x50) = 0;
  extraout_EDX[0x48] = 0;
  extraout_EDX[0x49] = 0;
  return extraout_EDX;
}

// 00CEAC40  cChainComboParts::vf00  size=30  [class]
undefined4 __thiscall cChainComboParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_23();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEAC60  FUN_00ceac60  size=207  [callgraph]
void __fastcall FUN_00ceac60(int param_1)

{
  int iVar1;
  
  switch(*(undefined2 *)(param_1 + 0x140)) {
  case 1:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(6), iVar1 != 0)) {
      FUN_00cdeec0(4);
      *(short *)(param_1 + 0x140) = *(short *)(param_1 + 0x140) + 1;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(5), iVar1 != 0)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa0),0);
      *(undefined2 *)(param_1 + 0x140) = 0;
    }
  }
  if (*(short *)(param_1 + 300) != 0) {
    FUN_00cb2900(*(undefined4 *)(param_1 + 0xa0),0);
    return;
  }
  if (*(short *)(param_1 + 0x12a) != 0) {
    FUN_00cb2900(*(undefined4 *)(param_1 + 0xa0),0xc2040000);
    return;
  }
  FUN_00cb2900(*(undefined4 *)(param_1 + 0xa0),0xc2840000);
  return;
}

// 00CEAD40  FUN_00cead40  size=345  [callgraph]
void __fastcall FUN_00cead40(int param_1)

{
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xa4),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xb0),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xbc),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xcc),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xdc),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xd0),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xe0),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0xfc),10,0x41a00000,0x42c80000);
  FUN_00cd06a0(*(undefined4 *)(param_1 + 0x100),10,0x41a00000,0x42c80000);
  return;
}

// 00D2A690  FUN_00d2a690  size=72  [callgraph]
int FUN_00d2a690(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x180,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cChainComboParts::cChainComboParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cChainComboParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(7);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2A6E0  cChainComboParts::vf08  size=1394  [class]
void __fastcall cChainComboParts::vf08(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar5 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar3;
  if (iVar5 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar5 + 0x8a);
  }
  *(uint *)(param_1 + 0x94) = uVar3;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x8c);
  }
  *(uint *)(param_1 + 0x98) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x8e);
  }
  *(uint *)(param_1 + 0x9c) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x90);
  }
  *(uint *)(param_1 + 0xa0) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x9c);
  }
  *(uint *)(param_1 + 0xa4) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xb0);
  }
  *(uint *)(param_1 + 0xa8) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xc4);
  }
  *(uint *)(param_1 + 0xac) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x9e);
  }
  *(uint *)(param_1 + 0xb0) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xb2);
  }
  *(uint *)(param_1 + 0xb4) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xc6);
  }
  *(uint *)(param_1 + 0xb8) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xa0);
  }
  *(uint *)(param_1 + 0xbc) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xb4);
  }
  *(uint *)(param_1 + 0xc0) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 200);
  }
  *(uint *)(param_1 + 0xc4) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xde);
  }
  *(uint *)(param_1 + 200) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xa4);
  }
  *(uint *)(param_1 + 0xcc) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xb8);
  }
  *(uint *)(param_1 + 0xd0) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xcc);
  }
  *(uint *)(param_1 + 0xd4) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xe2);
  }
  *(uint *)(param_1 + 0xd8) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xa8);
  }
  *(uint *)(param_1 + 0xdc) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xbc);
  }
  *(uint *)(param_1 + 0xe0) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xd0);
  }
  *(uint *)(param_1 + 0xe4) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xe4);
  }
  *(uint *)(param_1 + 0xe8) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xa2);
  }
  *(uint *)(param_1 + 0xec) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xa6);
  }
  *(uint *)(param_1 + 0xf0) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0xaa);
  }
  *(uint *)(param_1 + 0xf4) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x10a);
  }
  *(uint *)(param_1 + 0xf8) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x128);
  }
  *(uint *)(param_1 + 0xfc) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x12a);
  }
  *(uint *)(param_1 + 0x100) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x13e);
  }
  *(uint *)(param_1 + 0x104) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x140);
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  if (iVar5 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar5 + 0x14a);
  }
  *(uint *)(param_1 + 0x10c) = uVar4;
  if (((iVar5 != 0) && (uVar3 < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = uVar3 * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xac) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 200) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 200) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xe8) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xe8) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xec) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xec) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xf0) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xf0) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0xf4) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0xf4) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0x108) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0x108) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0x10c) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0x10c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(undefined4 *)(iVar5 + 0x3b0) = 0;
  }
  iVar5 = FUN_00d29960(4);
  *(int *)(param_1 + 0x11c) = iVar5;
  *(undefined4 *)(iVar5 + 0x214) = 0;
  puVar1 = (uint *)(*(int *)(param_1 + 0x11c) + 0x28);
  *puVar1 = *puVar1 | 0x100000;
  *(undefined4 *)(*(int *)(param_1 + 0x11c) + 4) = 0;
  piVar6 = (int *)(param_1 + 0x120);
  iVar5 = 2;
  do {
    iVar2 = FUN_00d29960(5);
    *piVar6 = iVar2;
    *(undefined4 *)(iVar2 + 0x1e8) = 0;
    *(uint *)(*piVar6 + 0x28) = *(uint *)(*piVar6 + 0x28) | 0x100000;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
    *(undefined4 *)(iVar2 + 4) = 0;
  } while (iVar5 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D2AC60  cChainComboParts::vf14  size=967  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cChainComboParts::vf14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  switch(*(undefined4 *)(param_1 + 0x110)) {
  case 0:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x120) + 4) = (uint)((int)uVar6 < 2);
    break;
  case 1:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x11c) + 4) = (uint)((int)uVar6 < 2);
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x124) + 4) = (uint)((int)uVar6 < 2);
    fVar3 = *(float *)(param_1 + 0x118) + _DAT_018b8c5c;
    *(float *)(param_1 + 0x118) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    }
    break;
  case 2:
    fVar3 = *(float *)(param_1 + 0x118) + _DAT_018b8c5c;
    *(float *)(param_1 + 0x118) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x118) == 1.0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x10c),1);
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x108),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x104),1,3);
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    }
    goto switchD_00d2ac81_default;
  case 3:
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    bVar8 = SBORROW4(*(int *)(param_1 + 0x114),0x1e);
    iVar5 = *(int *)(param_1 + 0x114) + -0x1e;
    bVar7 = iVar5 == 0;
    goto LAB_00d2acbf;
  case 4:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x10c) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x10c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(uint *)(iVar5 + 0x3b0) = (uint)(2 < (int)uVar6);
    }
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x11c) + 4) = (uint)(2 < (int)uVar6);
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x120) + 4) = (uint)(2 < (int)uVar6);
    break;
  default:
    goto switchD_00d2ac81_default;
  }
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  iVar2 = *(int *)(param_1 + 0x114);
  bVar8 = SBORROW4(iVar2,0xc);
  iVar5 = iVar2 + -0xc;
  bVar7 = iVar2 == 0xc;
LAB_00d2acbf:
  if (!bVar7 && bVar8 == iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  }
switchD_00d2ac81_default:
  if (*(int *)(param_1 + 0x110) != 5) {
    puVar4 = (undefined4 *)FUN_00caac30(2);
    local_50 = *puVar4;
    local_4c = puVar4[1];
    local_48 = puVar4[2];
    local_44 = puVar4[3];
    FUN_00d9fa80(&local_30,&local_50);
    iVar5 = *(int *)(param_1 + 0x120);
    if (*(int *)(iVar5 + 0x18) != 0) {
      *(undefined4 *)(iVar5 + 0x80) = local_30;
      *(undefined4 *)(iVar5 + 0x84) = local_2c;
    }
    FUN_00cb5b30(&local_5c);
    local_40 = local_5c;
    local_3c = local_58;
    local_38 = local_54;
    local_34 = 0x3f800000;
    FUN_00caccc0(local_20,&local_40);
    FUN_00cb5540(&local_30,local_20,*(undefined4 *)(param_1 + 0x118));
    iVar5 = *(int *)(param_1 + 0x124);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x204);
    if (*(int *)(iVar5 + 0x18) != 0) {
      *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x200);
      *(undefined4 *)(iVar5 + 0x84) = uVar1;
    }
  }
  if ((2 < *(int *)(param_1 + 0x110)) && (*(int *)(param_1 + 0x164) == 0)) {
    FUN_00d21060();
  }
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0xf8),0x40000000,0x40000000,0x43c80000,0x43960000);
  if (*(int *)(param_1 + 0x178) != 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    FUN_00cead40();
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(7);
    }
  }
  if (*(int *)(param_1 + 0x17c) != 0) {
    *(undefined4 *)(param_1 + 0x17c) = 0;
    FUN_00cd0720();
  }
  iVar5 = FUN_00cb5c60();
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x120) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x120) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x11c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x11c) + 4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(*(int *)(param_1 + 0x14) + 4) = iVar5;
  }
  return;
}

// 00D2B040  FUN_00d2b040  size=316  [callgraph]
void __fastcall FUN_00d2b040(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_018b440c;
  piVar3 = (int *)FUN_00c1b9a0();
  DAT_018b440c = (**(code **)(*piVar3 + 0x80))();
  if ((DAT_018b440c == 0) || (*(int *)(param_1 + 0x30) != 0)) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    if ((puVar1 != (undefined4 *)0x0) &&
       (((puVar1[0x59] != 0 && (puVar1[6] != 0)) && (iVar5 = FUN_00cdf400(1), iVar5 != 0)))) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar4 = FUN_00d2a690();
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = 0xf0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  if ((iVar2 != 0) && (DAT_018b440c == 0)) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar3 = (int *)(param_1 + 0x14);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      DAT_018b440c = 0;
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(iVar2 + 0x164) = 1;
      if (*(int *)(iVar2 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
    }
  }
  iVar5 = FUN_00f98aa0();
  iVar6 = FUN_00f98a90();
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(float *)(*(int *)(iVar2 + 0x18) + 0x40) = (float)iVar6 * 0.00078125 * 1000.0;
    *(float *)(*(int *)(iVar2 + 0x18) + 0x44) = (float)iVar5 * 0.0013888889 * 280.0;
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00d2b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  return;
}

