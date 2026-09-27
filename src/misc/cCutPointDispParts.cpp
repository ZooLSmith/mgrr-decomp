// src/misc/cCutPointDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD1570..00D43DD0, 6 functions

#include "mgrr.h"
#include "cCutPointDispParts.h"

// 00CD1570  cCutPointDispParts::cCutPointDispParts  size=231  [class]
void __fastcall cCutPointDispParts::cCutPointDispParts(undefined4 *param_1)

{
  param_1[0x1e] = 0;
  param_1[0x2e] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[4] = 1;
  param_1[0x32] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x30] = 0;
  param_1[0x16] = 0;
  param_1[0x31] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = param_1[0x14];
  param_1[0x19] = param_1[0x15];
  param_1[0x1a] = param_1[0x16];
  param_1[0x1b] = param_1[0x17];
  param_1[0x28] = param_1[0x14];
  param_1[0x29] = param_1[0x15];
  param_1[0x2a] = param_1[0x16];
  param_1[0x2b] = param_1[0x17];
  return;
}

// 00CEB4F0  cCutPointDispParts::vf00  size=30  [class]
undefined4 __thiscall cCutPointDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_19();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D2C5E0  cCutPointDispParts::vf08  size=290  [class]
void __fastcall cCutPointDispParts::vf08(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x9a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x9c);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x9e);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14a);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14c);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar3 != 0) {
    FUN_00cab4a0(1);
  }
  iVar3 = FUN_00d29960(4);
  *(int *)(param_1 + 0xbc) = iVar3;
  *(undefined4 *)(iVar3 + 0x214) = 3;
  puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + 0x28);
  *puVar1 = *puVar1 | 0x10000;
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
  piVar5 = (int *)(param_1 + 0xc0);
  iVar3 = 2;
  do {
    iVar4 = FUN_00d29960(5);
    *piVar5 = iVar4;
    *(undefined4 *)(iVar4 + 0x1e8) = 3;
    *(uint *)(*piVar5 + 0x28) = *(uint *)(*piVar5 + 0x28) | 0x10000;
    iVar4 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 4) = 0;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00D2C710  FUN_00d2c710  size=214  [callgraph]
int __thiscall FUN_00d2c710(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D2C7F0  FUN_00d2c7f0  size=1292  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d2c7f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_2c = 0;
  piVar9 = param_1;
  do {
    piVar9 = piVar9 + 1;
    puVar6 = (undefined4 *)0x0;
    if (*(int *)((int)&DAT_01dc0760 + local_2c) == 0) {
      puVar6 = (undefined4 *)*piVar9;
      if (((puVar6 != (undefined4 *)0x0) && (puVar6[0xe] == 0)) &&
         ((puVar6[0xf] != 0 || (puVar6[0x10] == 0)))) {
        (**(code **)*puVar6)(1);
        *piVar9 = 0;
        *(undefined4 *)((int)&DAT_01dc0630 + local_2c) = 0xffffffff;
        *(undefined4 *)((int)&DAT_01dc05b0 + local_2c) = 0;
      }
      goto LAB_00d2c962;
    }
    if (*piVar9 != 0) {
      *(undefined4 *)(*piVar9 + 0x40) = 1;
      goto LAB_00d2c962;
    }
    iVar3 = FUN_00dd3500(0xe0,&DAT_01b7be50);
    if ((iVar3 != 0) &&
       (puVar6 = (undefined4 *)cCutPointDispParts::cCutPointDispParts(), puVar6 != (undefined4 *)0x0
       )) {
      puVar6[3] = "cCutPointDispParts";
      puVar6[2] = 4;
      uVar4 = FUN_00d29960(0xe);
      puVar6[5] = uVar4;
    }
    *piVar9 = (int)puVar6;
    iVar3 = 0;
    switch(*(undefined4 *)((int)&DAT_01dc0630 + local_2c)) {
    case 0:
      uVar4 = 5;
      goto LAB_00d2c8f5;
    case 1:
      iVar5 = FUN_00a12210(0xc);
      iVar3 = FUN_00a12210(8);
      break;
    case 2:
      iVar5 = FUN_00a12210(8);
      iVar3 = FUN_00a12210(0xc);
      break;
    case 3:
      iVar5 = FUN_00a12210(0x14);
      iVar3 = FUN_00a12210(0x10);
      break;
    case 4:
      iVar5 = FUN_00a12210(0x10);
      iVar3 = FUN_00a12210(0x14);
      break;
    case 5:
      uVar4 = 2;
      goto LAB_00d2c8f5;
    case 6:
      uVar4 = 0xffffffff;
LAB_00d2c8f5:
      iVar5 = FUN_00a12210(uVar4);
      break;
    default:
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
        *piVar9 = 0;
      }
      *(undefined4 *)((int)&DAT_01dc0630 + local_2c) = 0xffffffff;
      *(undefined4 *)((int)&DAT_01dc05b0 + local_2c) = 0;
      goto LAB_00d2c962;
    }
    if (iVar5 != 0) {
      iVar1 = *(int *)((int)&DAT_01dc0630 + local_2c);
      if (((iVar1 == 0) || (iVar1 == 5)) || (iVar1 == 6)) {
        uVar4 = *(undefined4 *)((int)&DAT_01dc05b0 + local_2c);
        iVar3 = *piVar9;
        if (iVar1 + 1U < 8) {
          *(int *)(iVar3 + 0x7c) = iVar1;
        }
        else {
          *(undefined4 *)(iVar3 + 0x7c) = 0xffffffff;
        }
        *(undefined4 *)(iVar3 + 0x40) = 1;
        if (*(int *)(iVar3 + 200) != 0) {
          *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar5 + 0x40);
          *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar5 + 0x44);
          *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar5 + 0x48);
          *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar5 + 0x4c);
          *(undefined4 *)(iVar3 + 200) = 0;
        }
        *(undefined4 *)(iVar3 + 0x80) = uVar4;
      }
      else {
        local_20 = *(undefined4 *)(iVar3 + 0x40);
        local_1c = *(undefined4 *)(iVar3 + 0x44);
        local_18 = *(undefined4 *)(iVar3 + 0x48);
        local_14 = *(undefined4 *)(iVar3 + 0x4c);
        FUN_00cb70f0(iVar5 + 0x40,&local_20,iVar1,*(undefined4 *)((int)&DAT_01dc05b0 + local_2c));
      }
    }
LAB_00d2c962:
    local_2c = local_2c + 4;
    if (0x7f < local_2c) {
      uVar7 = 0;
      piVar9 = param_1;
      do {
        piVar9 = piVar9 + 1;
        if (*piVar9 != 0) {
          if (*(int *)((int)&DAT_01dc0530 + uVar7) != 0) {
            *(undefined4 *)(*piVar9 + 0x88) = 1;
          }
          (**(code **)(*(int *)*piVar9 + 4))();
        }
        *(undefined4 *)((int)&DAT_01dc07e0 + uVar7) = *(undefined4 *)((int)&DAT_01dc0760 + uVar7);
        *(undefined4 *)((int)&DAT_01dc0760 + uVar7) = 0;
        iVar3 = *piVar9;
        *(undefined4 *)((int)&DAT_01dc0530 + uVar7) = 0;
        uVar8 = uVar7 + 4;
        *(uint *)((int)&DAT_01dc06b0 + uVar7) = (uint)(iVar3 != 0);
        uVar7 = uVar8;
      } while (uVar8 < 0x80);
      DAT_01dc04f0 = DAT_01dc04b0;
      DAT_01dc04f4 = DAT_01dc04b4;
      _DAT_01dc04f8 = DAT_01dc04b8;
      _DAT_01dc04fc = DAT_01dc04bc;
      _DAT_01dc0500 = DAT_01dc04c0;
      _DAT_01dc0504 = DAT_01dc04c4;
      _DAT_01dc0508 = DAT_01dc04c8;
      _DAT_01dc050c = DAT_01dc04cc;
      _DAT_01dc0510 = DAT_01dc04d0;
      _DAT_01dc0514 = DAT_01dc04d4;
      _DAT_01dc0518 = DAT_01dc04d8;
      _DAT_01dc051c = DAT_01dc04dc;
      _DAT_01dc0520 = DAT_01dc04e0;
      param_1 = param_1 + 0x21;
      _DAT_01dc0524 = DAT_01dc04e4;
      _DAT_01dc0528 = DAT_01dc04e8;
      _DAT_01dc052c = DAT_01dc04ec;
      puVar6 = &DAT_01dc4198;
      local_28 = 0;
      local_24 = 0x10;
      do {
        if (*(int *)((int)&DAT_01dc04f0 + local_28) != 0) {
          if (*param_1 == 0) {
            iVar3 = FUN_00dd3500(0xe0,&DAT_01b7be50);
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = cCutPointDispParts::cCutPointDispParts();
              if (iVar3 != 0) {
                *(char **)(iVar3 + 0xc) = "cCutPointDispParts";
                *(undefined4 *)(iVar3 + 8) = 4;
                uVar4 = FUN_00d29960(0xe);
                *(undefined4 *)(iVar3 + 0x14) = uVar4;
              }
            }
            *param_1 = iVar3;
            if (*(int *)((int)&DAT_01dc0470 + local_28) + 1U < 8) {
              *(int *)(iVar3 + 0x7c) = *(int *)((int)&DAT_01dc0470 + local_28);
            }
            else {
              *(undefined4 *)(iVar3 + 0x7c) = 0xffffffff;
            }
            *(undefined4 *)(iVar3 + 0x40) = 1;
            if (*(int *)(iVar3 + 200) != 0) {
              *(undefined4 *)(iVar3 + 0x50) = puVar6[-2];
              *(undefined4 *)(iVar3 + 0x54) = puVar6[-1];
              *(undefined4 *)(iVar3 + 0x58) = *puVar6;
              *(undefined4 *)(iVar3 + 0x5c) = puVar6[1];
              *(undefined4 *)(iVar3 + 200) = 0;
            }
            *(undefined4 *)(iVar3 + 0x80) = 100;
          }
          *(undefined4 *)((int)&DAT_01dc04f0 + local_28) = 0;
        }
        if ((int *)*param_1 != (int *)0x0) {
          (**(code **)(*(int *)*param_1 + 4))();
          puVar2 = (undefined4 *)*param_1;
          if (((puVar2[0xe] == 0) && ((puVar2[0xf] != 0 || (puVar2[0x10] == 0)))) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
            *param_1 = 0;
          }
        }
        local_28 = local_28 + 4;
        puVar6 = puVar6 + 4;
        param_1 = param_1 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      DAT_01dc04b0 = 0;
      DAT_01dc04b4 = 0;
      DAT_01dc04b8 = 0;
      DAT_01dc04bc = 0;
      DAT_01dc04c0 = 0;
      DAT_01dc04c4 = 0;
      DAT_01dc04c8 = 0;
      DAT_01dc04cc = 0;
      DAT_01dc04d0 = 0;
      DAT_01dc04d4 = 0;
      DAT_01dc04d8 = 0;
      DAT_01dc04dc = 0;
      DAT_01dc04e0 = 0;
      DAT_01dc04e4 = 0;
      DAT_01dc04e8 = 0;
      DAT_01dc04ec = 0;
      return;
    }
  } while( true );
}

// 00D43DD0  cCutPointDispParts::vf14  size=1849  [class]
void __fastcall cCutPointDispParts::vf14(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfStack_bc;
  float *pfStack_b8;
  float *local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 auStack_78 [4];
  uint local_74;
  float local_70;
  undefined1 uStack_6c;
  undefined2 local_6b;
  undefined1 local_69;
  undefined1 auStack_64 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  local_74 = 0;
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 0:
    if (*(int *)(param_1 + 0x40) == 0) break;
    if (*(int *)(param_1 + 0x18) != 0) {
      local_b4 = (float *)0x1;
      pfStack_b8 = (float *)0x0;
      pfStack_bc = (float *)0xd43e16;
      FUN_00cdef90();
    }
    switch(*(undefined4 *)(param_1 + 0x7c)) {
    case 0:
      *(undefined4 *)(param_1 + 0x8c) = 1;
      pfStack_bc = (float *)0x16bc21c;
      goto LAB_00d43ea4;
    case 1:
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      pfStack_bc = (float *)0x16bc208;
      break;
    case 2:
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      pfStack_bc = (float *)0x16bc1f4;
      break;
    case 3:
      pfStack_bc = (float *)0x16bc1e0;
      goto LAB_00d43ea4;
    case 4:
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      pfStack_bc = (float *)0x16bc1cc;
      break;
    case 5:
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      pfStack_bc = (float *)0x16bc1b8;
      *(undefined4 *)(param_1 + 0x8c) = 1;
      *(undefined4 *)(param_1 + 0x88) = 1;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x88) = 1;
      pfStack_bc = (float *)0x16bc1a4;
LAB_00d43ea4:
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      break;
    case 0xffffffff:
      *(undefined4 *)(param_1 + 0x3c) = 3;
      return;
    default:
      goto switchD_00d43e23_default;
    }
    local_b4 = (float *)0xffffffff;
    pfStack_b8 = (float *)0x0;
    FUN_00cf9770(uVar5);
switchD_00d43e23_default:
    pfStack_bc = *(float **)(param_1 + 0x80);
    local_b4 = (float *)0x8;
    pfStack_b8 = &local_70;
    local_70 = 0.0;
    uStack_6c = 0;
    local_6b = 0;
    local_69 = 0;
    FUN_00ca84a0();
    pfStack_b8 = *(float **)(param_1 + 0x24);
    local_b4 = &local_70;
    pfStack_bc = (float *)0xd43ee8;
    FUN_00cce090();
    pfStack_b8 = *(float **)(param_1 + 0x28);
    local_b4 = &local_70;
    pfStack_bc = (float *)0xd43ef8;
    FUN_00cce090();
    pfStack_b8 = *(float **)(param_1 + 0x24);
    local_b4 = (float *)0x0;
    pfStack_bc = (float *)0xd43f04;
    FUN_00cb2310();
    pfStack_b8 = *(float **)(param_1 + 0x28);
    local_b4 = (float *)0x0;
    pfStack_bc = (float *)0xd43f10;
    FUN_00cb2310();
    if (*(int *)(param_1 + 0x70) != 0) {
      local_b4 = (float *)0xd43f1c;
      FUN_00d42650();
      local_70 = (float)(uint)(*(int *)(param_1 + 0x74) != 0);
      *(float *)(param_1 + 0x78) = 45.0 - (float)(int)local_70 * 90.0;
    }
    pfStack_bc = *(float **)(param_1 + 0x1c);
    local_b4 = (float *)0x3;
    pfStack_b8 = (float *)0x1;
    FUN_00ccdf90();
    *(undefined4 *)(param_1 + 0x38) = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      local_b4 = (float *)0x0;
      pfStack_b8 = (float *)0xd43f59;
      FUN_00cdeec0();
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      local_b4 = (float *)0x1;
      pfStack_b8 = (float *)0xd43f66;
      FUN_00cdeec0();
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    break;
  case 1:
    if ((*(int *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x40) == 0)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        local_b4 = (float *)0x2;
        pfStack_b8 = (float *)0xd43f89;
        FUN_00cdeec0();
      }
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 3;
    }
    else {
      if (DAT_01dc14c8 != (int *)0x0) {
        local_b4 = (float *)0xd43faf;
        iVar3 = (**(code **)(*DAT_01dc14c8 + 0x32c))();
        if (iVar3 != 0) break;
      }
      pfStack_b8 = *(float **)(param_1 + 0x24);
      local_b4 = (float *)0x1;
      pfStack_bc = (float *)0xd43fc8;
      FUN_00cb2310();
      pfStack_b8 = *(float **)(param_1 + 0x28);
      local_b4 = (float *)0x1;
      pfStack_bc = (float *)0xd43fd4;
      FUN_00cb2310();
      pfStack_bc = *(float **)(param_1 + 0x24);
      local_b4 = (float *)0x3;
      pfStack_b8 = (float *)0x1;
      FUN_00cce0e0();
      pfStack_bc = *(float **)(param_1 + 0x28);
      local_b4 = (float *)0x3;
      pfStack_b8 = (float *)0x1;
      FUN_00cce0e0();
      local_b4 = (float *)0xd43ff5;
      piVar2 = (int *)FUN_00c1b9a0();
      local_b4 = *(float **)(param_1 + 0x80);
      pfStack_b8 = (float *)0xd44005;
      (**(code **)(*piVar2 + 0x3c))();
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x90) = 1;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    break;
  case 2:
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    if (0x78 < *(int *)(param_1 + 0x84)) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        local_b4 = (float *)0x2;
        pfStack_b8 = (float *)0xd44046;
        FUN_00cdeec0();
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x18) != 0) {
      local_b4 = (float *)0x2;
      pfStack_b8 = (float *)0xd4405f;
      iVar3 = FUN_00cdf400();
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 200) = 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x7c) == 6) {
      local_b4 = (float *)0x9;
      pfStack_b8 = (float *)0xd4408f;
      iVar3 = FUN_00a12210();
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x48);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x4c);
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      local_b4 = (float *)(param_1 + 0x50);
      pfStack_b8 = &local_60;
      pfStack_bc = (float *)0xd440c2;
      iVar3 = FUN_00d9fa80();
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x18) == 0) {
          local_74 = *(uint *)(param_1 + 0x38);
        }
        else {
          *(float *)(*(int *)(param_1 + 0x18) + 0x40) = local_60;
          *(float *)(*(int *)(param_1 + 0x18) + 0x44) = local_5c;
          *(float *)(*(int *)(param_1 + 0x18) + 0x48) = local_58;
          local_74 = *(uint *)(param_1 + 0x38);
        }
      }
    }
    else {
      local_b4 = (float *)0xd44111;
      FUN_00cd16f0();
      if (*(int *)(param_1 + 0x70) == 0) {
        local_a0 = *(float *)(param_1 + 0x50);
        local_b4 = (float *)(param_1 + 0x50);
        local_9c = *(float *)(param_1 + 0x54) + 0.6;
        pfStack_b8 = &local_90;
        local_98 = *(float *)(param_1 + 0x58);
        local_94 = 1.0;
        pfStack_bc = (float *)0xd44150;
        iVar3 = FUN_00d9fa80();
        if (iVar3 != 0) {
          local_b4 = &local_a0;
          pfStack_b8 = &local_60;
          pfStack_bc = (float *)0xd4416c;
          iVar3 = FUN_00d9fa80();
          if (iVar3 != 0) {
            pfStack_b8 = (float *)local_50;
            local_94 = *(float *)(param_1 + 0xb8);
            local_a0 = (local_60 - local_90) * local_94;
            local_9c = (local_5c - local_8c) * local_94;
            local_98 = (local_58 - local_88) * local_94;
            local_94 = (local_54 - local_84) * local_94;
            local_b4 = (float *)0x3f490fdb;
            pfStack_bc = (float *)0xd441ca;
            D3DXMatrixRotationZ();
            pfStack_bc = &local_58;
            D3DXVec3TransformNormal(&stack0xffffff58,&stack0xffffff58);
            local_a0 = local_a0 + local_90;
            local_b4 = &local_a0;
            local_9c = local_9c + local_8c;
            local_98 = local_88 + local_98;
            local_94 = local_84 + local_94;
            pfStack_b8 = (float *)0xd4421c;
            FUN_00cb26d0();
            local_b4 = (float *)local_8c;
            pfStack_b8 = (float *)local_90;
            pfStack_bc = (float *)0xd44239;
            FUN_00cb5810();
            local_b4 = (float *)local_9c;
            pfStack_b8 = (float *)local_a0;
            pfStack_bc = (float *)0xd44256;
            FUN_00cb5810();
            local_b4 = (float *)0x3f800000;
            pfStack_b8 = &local_a0;
            pfStack_bc = &local_90;
            FUN_00cb5540();
            local_74 = *(uint *)(param_1 + 0x38);
          }
        }
      }
      else {
        local_b4 = (float *)0xd44284;
        FUN_00d42650();
        local_70 = 45.0 - (float)(*(int *)(param_1 + 0x74) != 0) * 90.0;
        if (local_70 != *(float *)(param_1 + 0x78)) {
          fVar1 = *(float *)(param_1 + 0x78) - local_70;
          if ((fVar1 <= -2.0) || (2.0 <= fVar1)) {
            *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) - fVar1 * 0.1;
          }
          else {
            *(float *)(param_1 + 0x78) = local_70;
          }
        }
        local_a0 = *(float *)(param_1 + 0x50);
        local_b4 = (float *)(param_1 + 0x50);
        local_9c = *(float *)(param_1 + 0x54) + 0.6;
        pfStack_b8 = &local_90;
        local_98 = *(float *)(param_1 + 0x58);
        local_94 = 1.0;
        pfStack_bc = (float *)0xd44324;
        iVar3 = FUN_00d9fa80();
        if (iVar3 != 0) {
          local_b4 = &local_a0;
          pfStack_b8 = &local_60;
          pfStack_bc = (float *)0xd44340;
          iVar3 = FUN_00d9fa80();
          if (iVar3 != 0) {
            local_94 = *(float *)(param_1 + 0xb8);
            local_a0 = (local_60 - local_90) * local_94;
            local_9c = (local_5c - local_8c) * local_94;
            local_98 = (local_58 - local_88) * local_94;
            local_94 = (local_54 - local_84) * local_94;
            if (local_70 == *(float *)(param_1 + 0x78)) {
              pfStack_b8 = (float *)local_50;
              local_b4 = (float *)(*(float *)(param_1 + 0x78) * 0.017453292);
              pfStack_bc = (float *)0xd4440d;
              D3DXMatrixRotationZ();
              pfStack_bc = &local_58;
              D3DXVec3TransformNormal(&stack0xffffff58,&stack0xffffff58);
            }
            else {
              local_b4 = (float *)(local_70 * 0.017453292);
              pfStack_b8 = (float *)local_50;
              pfStack_bc = (float *)0xd443b2;
              D3DXMatrixRotationZ();
              pfStack_bc = &local_58;
              D3DXVec3TransformNormal(auStack_78,&stack0xffffff58);
              D3DXMatrixRotationZ(auStack_64,*(float *)(param_1 + 0x78) * 0.017453292);
              D3DXVec3TransformNormal(&pfStack_bc,&pfStack_bc,&uStack_6c);
              local_9c = (float)CONCAT13(local_69,CONCAT21(local_6b,uStack_6c));
            }
            local_b4 = &local_a0;
            local_a0 = local_a0 + local_90;
            local_9c = local_9c + local_8c;
            local_98 = local_88 + local_98;
            local_94 = local_84 + local_94;
            pfStack_b8 = (float *)0xd44461;
            FUN_00cb26d0();
            local_b4 = (float *)local_8c;
            pfStack_b8 = (float *)local_90;
            pfStack_bc = (float *)0xd4447e;
            FUN_00cb5810();
            local_b4 = (float *)local_9c;
            pfStack_b8 = (float *)local_a0;
            pfStack_bc = (float *)0xd4449b;
            FUN_00cb5810();
            local_b4 = (float *)0x3f800000;
            pfStack_b8 = &local_a0;
            pfStack_bc = &local_90;
            FUN_00cb5540();
            local_74 = *(uint *)(param_1 + 0x38);
          }
        }
      }
    }
  }
  local_b4 = (float *)0xd444c4;
  uVar4 = FUN_00cb72a0();
  if (*(int *)(param_1 + 0x14) != 0) {
    *(uint *)(*(int *)(param_1 + 0x14) + 4) = local_74 & uVar4;
  }
  if ((local_74 & uVar4) == 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

