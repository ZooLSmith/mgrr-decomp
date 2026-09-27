// src/misc/cCodecAnyDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB5DE0..00CEB0B0, 4 functions

#include "types.h"

// 00CB5DE0  cCodecAnyDisp::cCodecAnyDisp  size=184  [class]
void __fastcall cCodecAnyDisp::cCodecAnyDisp(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  
  *param_1 = vftable;
  iVar2 = 1;
  do {
    FUN_00a7c930();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar3 = param_1 + 6;
  local_8 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3[2] = 0xffffffff;
    puVar3[4] = 0xffffffff;
    puVar3[6] = 1;
    puVar3[10] = 0;
    puVar3[0x16] = 0;
    puVar3[0x18] = 0;
    sVar1 = FUN_00dde2d0(0x4b0,0xe10);
    puVar3[0x1a] = (int)sVar1;
    puVar3[0x1c] = 0xffffffff;
    puVar3[0x1e] = 0xffffffff;
    puVar3[0x20] = 0xffffffff;
    puVar3[0x22] = 1;
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}

// 00CB5EA0  FUN_00cb5ea0  size=32  [callgraph]
undefined4 FUN_00cb5ea0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xb0,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cCodecAnyDisp::cCodecAnyDisp();
    return uVar2;
  }
  return 0;
}

// 00CD0A80  cCodecAnyDisp::~cCodecAnyDisp  size=75  [class]
void __fastcall cCodecAnyDisp::~cCodecAnyDisp(undefined4 *param_1)

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
  return;
}

// 00CEB0B0  cCodecAnyDisp::vf00  size=30  [class]
undefined4 __thiscall cCodecAnyDisp::vf00(undefined4 param_1,byte param_2)

{
  ~cCodecAnyDisp();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

