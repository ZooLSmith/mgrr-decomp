// src/misc/esp116.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D04F0..009DF5B0, 7 functions

#include "mgrr.h"
#include "esp116.h"

// 009D04F0  esp116::vf10  size=1  [class]
void esp116::vf10(void)

{
  return;
}

// 009D0500  esp116::vf14  size=23  [class]
void esp116::vf14(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
    return;
  }
  return;
}

// 009D4390  esp116::esp116  size=29  [class]
undefined4 * __fastcall esp116::esp116(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 009D98B0  esp116::vf04  size=441  [class]
undefined4 __thiscall
esp116::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  float local_168;
  undefined1 local_160 [16];
  undefined4 local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  undefined2 local_140;
  uint local_c4;
  uint local_c0;
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
  float local_24;
  float local_20;
  undefined4 local_1c;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if ((iVar2 != 0) && (0 < *(int *)(param_1 + 0x120))) {
    FUN_00efcb90();
    iVar2 = *(int *)(param_1 + 0x120);
    iVar5 = 0;
    local_168 = 0.0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        iVar5 = (int)*psVar1;
        local_168 = (float)(int)psVar1[1] * 0.016666668;
      }
    }
    if (9 < *(int *)(param_1 + 0x120)) {
      FUN_009d4830();
      local_50 = *(undefined4 *)(param_1 + 400);
      local_c4 = local_c4 | 0x100000;
      local_4c = *(undefined4 *)(param_1 + 0x194);
      local_c0 = local_c0 | 0x400;
      local_48 = *(undefined4 *)(param_1 + 0x198);
      local_150 = 0x187;
      local_44 = *(undefined4 *)(param_1 + 0x19c);
      local_144 = 0x14;
      local_40 = *(undefined4 *)(param_1 + 0x1f0);
      local_140 = 0xa00;
      local_1c = 1;
      local_38 = 0;
      local_34 = *(undefined4 *)(param_1 + 0x1f0);
      local_2c = 0;
      local_20 = local_168;
      local_14c = iVar5;
      local_148 = iVar5;
      local_3c = local_40;
      local_30 = local_34;
      local_24 = (float)iVar2 * 0.016666668;
      iVar2 = Behavior::createAttackImpactVolume(local_160);
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
        return 1;
      }
    }
  }
  return 0;
}

// 009D9A70  esp116::vf08  size=57  [class]
void __fastcall esp116::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  
  esp39::vf08();
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  (**(code **)(*piVar2 + 0x6c))(param_1 + 400);
  return;
}

// 009D9AB0  esp116::vf0C  size=32  [class]
void __fastcall esp116::vf0C(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 009DF5B0  esp116::vf00  size=30  [class]
undefined4 __thiscall esp116::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

