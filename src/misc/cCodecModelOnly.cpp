// src/misc/cCodecModelOnly.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6BC0..00CEB1D0, 7 functions

#include "types.h"

// 00CB6BC0  cCodecModelOnly::cCodecModelOnly_2  size=130  [class]
undefined4 * __fastcall cCodecModelOnly::cCodecModelOnly_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[6] = 1;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[1] = 0;
  param_1[0x1b] = 0;
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[9] = 1;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  param_1[0xe] = 1;
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  param_1[0x11] = 1;
  param_1[0x12] = 1;
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  param_1[0x15] = 1;
  param_1[0x16] = 1;
  param_1[0x17] = 1;
  param_1[0x18] = 1;
  param_1[0x19] = 1;
  param_1[0x1a] = 1;
  return param_1;
}

// 00CB6C50  FUN_00cb6c50  size=29  [callgraph]
undefined4 FUN_00cb6c50(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x78,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cCodecModelOnly::cCodecModelOnly_2();
    return uVar2;
  }
  return 0;
}

// 00CB6C70  FUN_00cb6c70  size=10  [callgraph]
void __thiscall FUN_00cb6c70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 00CB6C80  FUN_00cb6c80  size=53  [callgraph]
int FUN_00cb6c80(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  do {
    iVar2 = iVar1;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      FUN_00a7c950();
    }
    iVar1 = iVar2 + -1;
  } while (iVar1 != 0);
  return iVar2;
}

// 00CD1240  cCodecModelOnly::cCodecModelOnly  size=35  [class]
void __fastcall cCodecModelOnly::cCodecModelOnly(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00cb6c80();
  if (param_1[2] != -1) {
    FUN_009869c0(param_1[2]);
  }
  return;
}

// 00CEB190  cCodecModelOnly::vf00  size=55  [class]
undefined4 * __thiscall cCodecModelOnly::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cb6c80();
  if (param_1[2] != -1) {
    FUN_009869c0(param_1[2]);
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEB1D0  FUN_00ceb1d0  size=381  [callgraph]
void __fastcall FUN_00ceb1d0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (*(int *)(param_1 + 0xc) != -1) {
      iVar3 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) != iVar3) {
        if (iVar3 != -1) {
          FUN_009869c0(iVar3);
        }
        FUN_00984ce0(*(undefined4 *)(param_1 + 0xc));
        iVar3 = *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 8) = iVar3;
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x1c + iVar3 * 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 4) = 1;
    }
    break;
  case 1:
    iVar3 = FUN_00cd1270(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 4) = 2;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 4) = 3;
  case 3:
    if ((*(int *)(param_1 + 0x18) != 0) || (*(int *)(param_1 + 0xc) != -1)) {
      *(undefined4 *)(param_1 + 4) = 4;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00cb6c80();
      FUN_00984660(0);
      FUN_00984660(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 8);
  if ((iVar3 != -1) && (iVar3 != 0)) {
    if (*(int *)(param_1 + 0x74) != -1) {
      FUN_00cb6da0(iVar3,*(int *)(param_1 + 0x74));
    }
    FUN_009860d0(0,*(undefined4 *)(param_1 + 8));
    FUN_009860d0(1,*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    if (*(int *)(param_1 + 0x6c) < 1) {
      iVar3 = 2;
      do {
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          uVar10 = 0x3f800000;
          uVar9 = 0xbf800000;
          uVar8 = 0x8040200;
          uVar7 = 0x3f800000;
          uVar6 = 0x3e4ccccd;
          uVar5 = 2;
          puVar4 = &DAT_016b8e88;
          FUN_00a81330(&DAT_016b8e88,2,0x3e4ccccd,0x3f800000,0x8040200,0xbf800000,0x3f800000);
          FUN_00a7c890();
          FUN_00e3ff90(puVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      sVar1 = FUN_00dde2d0(0x13,300);
      *(int *)(param_1 + 0x6c) = (int)sVar1;
    }
  }
  return;
}

