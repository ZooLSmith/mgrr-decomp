// src/misc/esp101.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D66E0..009EE720, 7 functions

#include "types.h"

// 009D66E0  esp101::esp101  size=140  [class]
undefined4 * __fastcall esp101::esp101(undefined4 *param_1)

{
  undefined4 local_14;
  
  cEspBase::cEspBase_4();
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *param_1 = vftable;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = local_14;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x124] = 0;
  param_1[0xe1] = 0;
  param_1[0x125] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  return param_1;
}

// 009D6780  esp101::vf00  size=36  [class]
undefined4 * __thiscall esp101::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = esp39::vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009D67B0  FUN_009d67b0  size=198  [between]
undefined4 __fastcall FUN_009d67b0(int param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar2 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar2;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar3 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (psVar1 != (short *)0x0) {
      *(int *)(param_1 + 0x484) = (int)*psVar1;
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (uint *)0x0)) {
    uVar5 = *puVar4;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar5 != 0) {
      *(undefined4 *)(param_1 + 0x480) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar4 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(uVar5 + 0x14);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(uVar5 + 0x18);
  return 1;
}

// 009D6880  esp101::vf10  size=48  [class]
void __fastcall esp101::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x498) == 0) {
    esp39::vf10();
    return;
  }
  FUN_00dd5650(&DAT_01659c58);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return;
}

// 009E8790  esp101::vf04  size=236  [class]
undefined4 __thiscall
esp101::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = esp39::vf04(param_2,param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_009d67b0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x49c) = 0;
      *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x180);
      iVar1 = param_1 + 0x3a0;
      *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined4 *)(param_1 + 0x480) = 0;
      *(undefined4 *)(param_1 + 0x498) = 0;
      FUN_00edfc20(iVar1);
      FUN_00edb3c0(iVar1);
      FUN_00efc5c0(iVar1);
      if (*(int *)(*(int *)(param_1 + 0x3a4) + 0x168) != 0) {
        FUN_00f0b110(iVar1);
      }
      if (*(float *)(param_1 + 0x3f8) != 0.0) {
        *(float *)(param_1 + 0x3f8) = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x3f8);
      }
      FUN_00efd260(iVar1);
      FUN_009d85b0(iVar1);
      return 1;
    }
  }
  return 0;
}

// 009E8880  FUN_009e8880  size=155  [callgraph]
void __thiscall FUN_009e8880(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_009d85b0(param_2);
  if ((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 0x498) = 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x480);
  if (iVar1 == 0) {
    FUN_009e2230(param_2,0);
    FUN_009cfdd0();
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x480) = 2;
    if (*(int *)(param_1 + 0x484) == 0) {
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x100);
      return;
    }
    if (*(int *)(param_1 + 0x484) == 1) {
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x104);
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_009d8550();
    return;
  }
  return;
}

// 009EE720  esp101::vf08  size=27  [class]
void __fastcall esp101::vf08(int param_1)

{
  FUN_00edfc20(param_1 + 0x3a0);
  FUN_009e8880(param_1 + 0x3a0);
  return;
}

