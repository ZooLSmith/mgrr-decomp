// src/unsorted/unit_00CE66F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE66F0..00CE66F0, 1 functions

#include "mgrr.h"

// 00CE66F0  FUN_00ce66f0  size=510  [run]
undefined4 __thiscall FUN_00ce66f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[10];
  *(undefined4 *)(param_1 + 0x1c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x20) = param_2[0xc];
  *(int *)(param_1 + 0x24) = (int)*(char *)(param_2 + 0xd);
  *(int *)(param_1 + 0x28) = (int)*(char *)((int)param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x2c) = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x30) = param_2[0x1c];
  iVar5 = FUN_00cac210(param_2 + 4);
  *(undefined4 *)(param_1 + 0x34) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x38) = param_2[0x10];
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x1a);
  uVar1 = param_2[0x13];
  uVar2 = param_2[0x14];
  uVar3 = param_2[0x15];
  *(undefined4 *)(param_1 + 0x40) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = param_2[0xf];
  *(undefined4 *)(param_1 + 0x54) = param_2[0x11];
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)((int)param_2 + 0x6a);
  uVar1 = param_2[0x17];
  uVar2 = param_2[0x18];
  uVar3 = param_2[0x19];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0x16];
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x54);
  *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x68);
  if (iVar5 == -1) {
    FUN_00dd5650(&DAT_016b8e2c,param_2 + 4);
    return 0;
  }
  if (iVar5 == 0) {
    return 1;
  }
  iVar7 = 0;
  piVar6 = &DAT_01dc1528;
  while ((piVar6[-1] != iVar5 || (*piVar6 != DAT_01dc2cd8))) {
    piVar6 = piVar6 + 0x1d;
    iVar7 = iVar7 + 1;
    if (0x1dc1b7f < (int)piVar6) {
      return 0;
    }
  }
  iVar7 = iVar7 * 0x74;
  if (iVar7 != -0x1dc151c) {
    if (*(int *)(iVar7 + 0x1dc153c) == 0) {
      return 0;
    }
    if (*(int *)(iVar7 + 0x1dc1544) != 0) {
      if (iVar7 + 0x1dc1548 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = iVar7 + 0x1dc1548;
      uVar1 = param_2[9];
      cVar4 = *(char *)((int)param_2 + 0x35);
      uVar2 = param_2[8];
      *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xac) = uVar1;
      if (cVar4 == '\0') {
        if (*(int *)(iVar7 + 0x1dc154c) == 0) {
          return 1;
        }
        iVar5 = FUN_00cb1c40(uVar2);
      }
      else {
        if (*(int *)(iVar7 + 0x1dc154c) == 0) {
          return 1;
        }
        iVar5 = FUN_00cb1cd0(uVar2);
      }
      if (-1 < iVar5) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xac) = uVar1;
        *(int *)(param_1 + 0xa8) = iVar5;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

