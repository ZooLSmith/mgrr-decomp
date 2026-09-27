// src/misc/esp113.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D00B0..009E2770, 5 functions

#include "types.h"

// 009D00B0  esp113::vf14  size=21  [class]
void esp113::vf14(void)

{
  FUN_009cf090(0);
  DAT_01be1fe8 = 1;
  return;
}

// 009D4330  esp113::esp113  size=18  [class]
undefined4 * __fastcall esp113::esp113(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009D93D0  esp113::vf04  size=257  [class]
undefined4 __thiscall
esp113::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_009cf090(1);
  *(undefined2 *)(param_1 + 0x428) = 0x7e;
  *(undefined4 *)(param_1 + 0x454) = 1;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar3;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (psVar1 != (short *)0x0) {
      if (*psVar1 == 0) {
        *(undefined2 *)(param_1 + 0x428) = 0x7e;
      }
      else if (*psVar1 == 1) {
        *(undefined2 *)(param_1 + 0x428) = 0x7f;
      }
      *(int *)(param_1 + 0x450) = (int)psVar1[1];
      *(uint *)(param_1 + 0x454) = (uint)((char)psVar1[8] == '\0');
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)*puVar3;
    if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
      uVar4 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x458) = *puVar3;
    }
  }
  DAT_01be1fe8 = *(undefined4 *)(param_1 + 0x454);
  return 1;
}

// 009DF550  esp113::vf00  size=30  [class]
undefined4 __thiscall esp113::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E2770  esp113::vf08  size=353  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp113::vf08(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  
  esp39::vf08();
  FUN_009cf090(1);
  if (*(short *)(param_1 + 0x428) == 0x7e) {
    _DAT_01be1fc4 = *(undefined4 *)(param_1 + 0x194);
    DAT_01be1fe4 = *(undefined4 *)(param_1 + 0x450);
    _DAT_01be1fcc = 0;
  }
  else if (*(short *)(param_1 + 0x428) == 0x7f) {
    local_60 = *(float *)(param_1 + 0x1b0);
    local_5c = *(float *)(param_1 + 0x1b4);
    local_58 = *(float *)(param_1 + 0x1b8);
    local_54 = *(undefined4 *)(param_1 + 0x1bc);
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_00f207a0(&local_50);
      fVar1 = local_4c * local_4c;
      fVar3 = local_50 * local_50;
      fVar2 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
      fVar4 = (float10)FUN_00ddbaa0(-(local_48 / fVar2));
      fVar5 = (float10)fpatan((float10)(local_38 / fVar2),(float10)(local_28 / fVar2));
      local_60 = (float)fVar5;
      local_5c = (float)fVar4;
      fVar4 = (float10)fpatan((float10)local_4c /
                              (float10)SQRT(local_38 * local_38 +
                                            local_40 * local_40 + local_3c * local_3c),
                              (float10)local_50 / (float10)SQRT(local_48 * local_48 + fVar3 + fVar1)
                             );
      local_58 = (float)fVar4;
    }
    FUN_009ce110(param_1 + 400,&local_60,*(undefined4 *)(param_1 + 0x450),
                 *(undefined4 *)(param_1 + 0x458));
    return;
  }
  return;
}

