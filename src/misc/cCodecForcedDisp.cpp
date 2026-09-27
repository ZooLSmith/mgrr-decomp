// src/misc/cCodecForcedDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6240..00CEB0D0, 4 functions

#include "types.h"

// 00CB6240  cCodecForcedDisp::cCodecForcedDisp  size=444  [class]
void __fastcall cCodecForcedDisp::cCodecForcedDisp(undefined4 *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int local_28;
  undefined4 local_14;
  
  *param_1 = vftable;
  param_1[6] = 0;
  local_28 = 1;
  do {
    FUN_00a7c930();
    local_28 = local_28 + -1;
  } while (-1 < local_28);
  param_1[0x2c] = 0;
  puVar2 = param_1 + 7;
  local_28 = 2;
  do {
    puVar2[-3] = 0;
    *puVar2 = 0;
    puVar2[2] = 0xffffffff;
    puVar2[4] = 0xffffffff;
    puVar2[6] = 1;
    puVar2[10] = 0;
    puVar2[0xc] = 0;
    puVar2[0x51] = 0;
    puVar2[0x53] = 0;
    sVar1 = FUN_00dde2d0(0x4b0,0xe10);
    puVar2[0x55] = (int)sVar1;
    puVar2[0x57] = 0xffffffff;
    puVar2[0x59] = 0xffffffff;
    puVar2[0x5b] = 0xffffffff;
    puVar2[0x5d] = 1;
    puVar2 = puVar2 + 1;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x30] = 0x44610000;
  param_1[0x31] = 0x43910000;
  param_1[0x32] = 0x42480000;
  param_1[0x33] = local_14;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3f000000;
  param_1[0x3e] = 0;
  param_1[0x3f] = local_14;
  param_1[0x34] = 0x44458000;
  param_1[0x35] = 0x43870000;
  param_1[0x36] = 0x430c0000;
  param_1[0x37] = local_14;
  param_1[0x40] = 0;
  param_1[0x41] = 0x3e19999a;
  param_1[0x42] = 0;
  param_1[0x43] = local_14;
  param_1[0x38] = 0x4481a000;
  param_1[0x39] = 0x43870000;
  param_1[0x3a] = 0x42200000;
  param_1[0x3b] = local_14;
  param_1[0x44] = 0;
  param_1[0x45] = 0x3f333333;
  param_1[0x46] = 0;
  param_1[0x47] = local_14;
  return;
}

// 00CB6400  FUN_00cb6400  size=32  [callgraph]
undefined4 FUN_00cb6400(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x1a0,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cCodecForcedDisp::cCodecForcedDisp();
    return uVar2;
  }
  return 0;
}

// 00CD0C40  cCodecForcedDisp::~cCodecForcedDisp  size=96  [class]
void __fastcall cCodecForcedDisp::~cCodecForcedDisp(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = vftable;
  piVar3 = param_1 + 4;
  iVar2 = 2;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
      *piVar3 = 0;
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      FUN_00a7c950();
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
    param_1[6] = 0;
  }
  return;
}

// 00CEB0D0  cCodecForcedDisp::vf00  size=30  [class]
undefined4 __thiscall cCodecForcedDisp::vf00(undefined4 param_1,byte param_2)

{
  ~cCodecForcedDisp();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

