// src/player/pl0010/state/GlobalStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81550..00BAAF90, 10 functions

#include "mgrr.h"
#include "GlobalStatePl0010.h"

// 00B81550  GlobalStatePl0010::vf0C  size=5  [class]
void __thiscall GlobalStatePl0010::vf0C(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}

// 00B81560  GlobalStatePl0010::thunk_vf10  size=5  [class]
undefined4 __thiscall GlobalStatePl0010::thunk_vf10(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 3;
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  return 1;
}

// 00B81570  GlobalStatePl0010::vf14  size=5  [class]
undefined4 __thiscall GlobalStatePl0010::vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B81580  GlobalStatePl0010::vf18  size=5  [class]
undefined4 __thiscall GlobalStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B81590  GlobalStatePl0010::vf1C  size=5  [class]
undefined4 __thiscall GlobalStatePl0010::vf1C(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 6;
  return 1;
}

// 00B815A0  GlobalStatePl0010::vf24  size=53  [class]
undefined4 __thiscall GlobalStatePl0010::vf24(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 1;
}

// 00B81600  GlobalStatePl0010::vf00  size=6  [class]
undefined * GlobalStatePl0010::vf00(void)

{
  return &DAT_01be9e14;
}

// 00B90F80  GlobalStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall GlobalStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAAAD0  GlobalStatePl0010::vf08  size=1202  [class]
undefined4 __thiscall GlobalStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar4 + 0x40) = 2;
  *(undefined4 *)(uVar4 + 0x38) = 0;
  *(undefined4 *)(uVar4 + 0x3c) = 0;
  *(undefined4 *)(uVar3 + 0x507c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = FUN_00dd3580(200,&DAT_01b7bd48);
  *(int *)(param_1 + 0x30) = iVar2;
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x34) * 4) = 0xa0006;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0xb0007;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0xc0008;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0xd0009;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x13000f;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x140010;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x150011;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x160012;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02000100;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02010101;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02020102;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02030103;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02040104;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02050105;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02060106;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02070107;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02080108;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02090109;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_020a010a;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_020b010b;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_020c010c;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_020d010d;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_020e010e;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_020f010f;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02100110;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02110111;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined **)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = &DAT_02120112;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x5080501;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x5090502;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x50a0503;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x50b0504;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x50c0505;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x50d0506;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x50e0507;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x5130511;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x5140512;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x5160515;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = 0x7010700;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  FUN_00a95e20(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  FUN_004066f0();
  *(float *)(*(int *)(uVar3 + 0x764) + 0xf4) = *(float *)(DAT_01885d20 + 0x14) * 5.0;
  FUN_008e5270(4);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return 1;
}

// 00BAAF90  GlobalStatePl0010::vf20  size=248  [class]
undefined4 __thiscall GlobalStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  FUN_00a8c9b0(0,8,0x3e4ccccd,0);
  FUN_00a94bc0(4,0);
  FUN_00a94bc0(3,0);
  FUN_00a94bc0(2,0);
  *(float *)(*(int *)(uVar3 + 0x764) + 0xf4) = *(float *)(*(int *)(uVar3 + 0x764) + 0xf4) * 0.75;
  FUN_008e5370(4);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(uVar4 + 0x34) = 0;
  return 1;
}

