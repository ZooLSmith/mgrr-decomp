// src/ui/cMenuKeyInfoParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00990F30..009A28C0, 7 functions

#include "mgrr.h"
#include "cMenuKeyInfoParts.h"

// 00990F30  cMenuKeyInfoParts::cMenuKeyInfoParts  size=48  [class]
undefined4 * __fastcall cMenuKeyInfoParts::cMenuKeyInfoParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[0xc] = 0x3f800000;
  param_1[7] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00990F70  cMenuKeyInfoParts::cMenuKeyInfoParts_2  size=97  [class]
undefined4 * cMenuKeyInfoParts::cMenuKeyInfoParts_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x44,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    puVar1[0xc] = 0x3f800000;
    *puVar1 = vftable;
    puVar1[0xe] = 0;
    puVar1[7] = 0;
    puVar1[0xf] = 0;
    puVar1[10] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    puVar1[3] = "cMenuKeyInfoParts";
    FUN_00d29ca0(0x6d,10);
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00990FE0  cMenuKeyInfoParts::vf08  size=36  [class]
void __fastcall cMenuKeyInfoParts::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  FUN_00cb2600(0);
  return;
}

// 00991010  FUN_00991010  size=54  [callgraph]
void __fastcall FUN_00991010(int param_1)

{
  if (0 < *(int *)(param_1 + 0x1c)) {
    FUN_00cb2600(1);
    FUN_00cb2710(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),0);
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  return;
}

// 009910A0  FUN_009910a0  size=149  [callgraph]
float10 FUN_009910a0(undefined4 param_1)

{
  int iVar1;
  float local_58;
  float local_54 [21];
  
  local_58 = 0.0;
  local_54[0x11] = 0.0;
  local_54[0x12] = 0.0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  local_54[0x10] = 0.0;
  local_54[0x13] = -NAN;
  iVar1 = FUN_00d29cc0(param_1,local_54);
  if (iVar1 != 0) {
    local_58 = local_54[0];
  }
  iVar1 = FUN_00cb2790(param_1);
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 009A2890  cMenuKeyInfoParts::vf00  size=36  [class]
undefined4 * __thiscall cMenuKeyInfoParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A28C0  cMenuKeyInfoParts::create  size=190  [class]
void __fastcall cMenuKeyInfoParts::create(int param_1)

{
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    bVar1 = *(int *)(param_1 + 0x28) != 0;
    bVar2 = *(int *)(param_1 + 0x2c) != 0;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),bVar1);
    if (bVar1) {
      FUN_00ce4e80(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0,0xffffffff);
      fVar3 = (float10)FUN_009910a0(*(undefined4 *)(param_1 + 0x20));
      *(float *)(param_1 + 0x40) = (float)fVar3;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),bVar2);
    if (bVar2) {
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x40));
      FUN_00ce4e80(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x2c),0,0xffffffff);
      fVar3 = (float10)FUN_009910a0(*(undefined4 *)(param_1 + 0x24));
      *(float *)(param_1 + 0x40) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x30));
  }
  return;
}

