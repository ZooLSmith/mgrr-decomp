// src/misc/cRadarMap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD5EF0..00D43400, 6 functions

#include "types.h"

// 00CD5EF0  cRadarMap::cRadarMap  size=257  [class]
int __fastcall cRadarMap::cRadarMap(undefined4 *param_1)

{
  int extraout_EDX;
  
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x21] = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 1;
  param_1[0x17] = 1;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  *(undefined4 *)(extraout_EDX + 0x140) = 0;
  *(undefined4 *)(extraout_EDX + 0x148) = 0;
  *(undefined4 *)(extraout_EDX + 0x14c) = 0;
  *(undefined4 *)(extraout_EDX + 0x144) = 0;
  *(undefined4 *)(extraout_EDX + 0x154) = 0;
  *(undefined4 *)(extraout_EDX + 0x158) = 0;
  *(undefined4 *)(extraout_EDX + 0x15c) = 0;
  *(undefined4 *)(extraout_EDX + 0x160) = 0;
  *(undefined4 *)(extraout_EDX + 0x164) = 0;
  *(undefined4 *)(extraout_EDX + 0x168) = 0;
  *(undefined4 *)(extraout_EDX + 0x16c) = 0;
  *(undefined4 *)(extraout_EDX + 0x170) = 0;
  *(undefined4 *)(extraout_EDX + 0x174) = 0;
  *(undefined4 *)(extraout_EDX + 0x184) = 0;
  *(undefined4 *)(extraout_EDX + 0x188) = 0;
  *(undefined4 *)(extraout_EDX + 0x18c) = 0;
  *(undefined4 *)(extraout_EDX + 400) = 0;
  *(undefined4 *)(extraout_EDX + 0x194) = 0;
  *(undefined4 *)(extraout_EDX + 0x198) = 0;
  *(undefined4 *)(extraout_EDX + 0x150) = 0xffffffff;
  DAT_01dc1304 = 0;
  *(undefined4 *)(extraout_EDX + 0x4c) = 0;
  *(undefined4 *)(extraout_EDX + 0x50) = 0;
  *(undefined4 *)(extraout_EDX + 0x54) = 0;
  *(undefined4 *)(extraout_EDX + 0x178) = 0;
  *(undefined4 *)(extraout_EDX + 0x17c) = 0;
  *(undefined4 *)(extraout_EDX + 0x180) = 0;
  DAT_01dc1500 = extraout_EDX;
  return extraout_EDX;
}

// 00CF0DD0  cRadarMap::vf00  size=30  [class]
undefined4 __thiscall cRadarMap::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_26();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF0DF0  FUN_00cf0df0  size=310  [callgraph]
void __fastcall FUN_00cf0df0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x8a);
  }
  *(uint *)(param_1 + 0x120) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x8c);
  }
  *(uint *)(param_1 + 0x124) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x9c);
  }
  *(uint *)(param_1 + 0x128) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x9e);
  }
  *(uint *)(param_1 + 300) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0xa0);
  }
  *(uint *)(param_1 + 0x130) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0xa2);
  }
  *(uint *)(param_1 + 0x134) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x14a);
  }
  *(uint *)(param_1 + 0x138) = uVar1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x14c);
  }
  *(uint *)(param_1 + 0x13c) = uVar1;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00cdeec0(0);
  }
  *(undefined4 *)(param_1 + 0x144) = 0x3d088889;
  iVar2 = *(int *)(param_1 + 0xa8);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x138) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x154) = 1;
  return;
}

// 00D3E590  cRadarMap::vf08  size=958  [class]
void __fastcall cRadarMap::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_00dd3500(0xc0,&DAT_01b7be50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cRadarMapEnemyLIconParts::cRadarMapEnemyLIconParts();
    if (iVar2 != 0) {
      *(char **)(iVar2 + 0xc) = "cRadarMapEnemyLIconParts";
      *(undefined4 *)(iVar2 + 8) = 5;
      uVar3 = FUN_00d29960(0x3a);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
    }
  }
  *(int *)(param_1 + 0x188) = iVar2;
  iVar2 = FUN_00dd3500(0x140,&DAT_01b7be50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cRadarMapEnemyMIconParts::cRadarMapEnemyMIconParts();
    if (iVar2 != 0) {
      *(char **)(iVar2 + 0xc) = "cRadarMapEnemyMIconParts";
      *(undefined4 *)(iVar2 + 8) = 5;
      uVar3 = FUN_00d29960(0x3b);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
    }
  }
  *(int *)(param_1 + 0x18c) = iVar2;
  iVar2 = FUN_00dd3500(0x140,&DAT_01b7be50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cRadarMapEnemySIconParts::cRadarMapEnemySIconParts();
    if (iVar2 != 0) {
      *(char **)(iVar2 + 0xc) = "cRadarMapEnemySIconParts";
      *(undefined4 *)(iVar2 + 8) = 5;
      uVar3 = FUN_00d29960(0x3c);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
    }
  }
  *(int *)(param_1 + 400) = iVar2;
  iVar2 = FUN_00dd3500(0xf0,&DAT_01b7be50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cRadarMapFreeIconParts::cRadarMapFreeIconParts();
    if (iVar2 != 0) {
      *(char **)(iVar2 + 0xc) = "cRadarMapFreeIconParts";
      *(undefined4 *)(iVar2 + 8) = 5;
      uVar3 = FUN_00d29960(0x39);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
    }
  }
  *(int *)(param_1 + 0x194) = iVar2;
  iVar2 = FUN_00dd3500(0xf0,&DAT_01b7be50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cRadarMapDestIconParts::cRadarMapDestIconParts();
    if (iVar2 != 0) {
      *(char **)(iVar2 + 0xc) = "cRadarMapDestIconParts";
      *(undefined4 *)(iVar2 + 8) = 5;
      uVar3 = FUN_00d29960(0x38);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x198) = iVar2;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x1c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x8e);
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x90);
  }
  *(uint *)(param_1 + 0x24) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x94);
  }
  *(uint *)(param_1 + 0x28) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x2c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x126);
  }
  *(uint *)(param_1 + 0x30) = uVar5;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x34) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (((iVar1 != 0) && (uVar5 < *(uint *)(iVar1 + 0x80))) &&
     (piVar4 = *(int **)(uVar5 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar4 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar4 + 8))();
    if (iVar2 == 0) {
      piVar4 = piVar4 + 4;
      goto LAB_00d3e7e6;
    }
  }
  piVar4 = (int *)0x0;
LAB_00d3e7e6:
  *(int **)(param_1 + 0xa8) = piVar4;
  if (DAT_01dc2d70 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x18c) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 400) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x194) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x198) + 0x20) = 0;
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x18c) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(param_1 + 400) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x194) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x198) + 0x20) = 1;
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 8;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  FUN_00cf0df0();
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D3E950  FUN_00d3e950  size=1146  [callgraph]
void __fastcall FUN_00d3e950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x48) == 0) ||
     ((*(int *)(param_1 + 0x3c) < 6 && (*(int *)(param_1 + 0x58) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = uVar2;
  }
  if ((DAT_01bea090 & 0x80000000) == 0) {
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0x13c),0x40000000,0x40000000,0x43960000,0x43480000);
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    if (*(int *)(param_1 + 0x160) == 0) {
      if (*(int *)(param_1 + 0x164) != 0) {
        FUN_00d02f20();
      }
    }
    else {
      FUN_00cbda30();
    }
  }
  else {
    FUN_00d02cd0();
    if ((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(param_1 + 0x154) != 0)) {
      *(undefined4 *)(param_1 + 0x148) = 3;
      *(undefined4 *)(param_1 + 0x140) = 0x45bb7b33;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x148)) {
  case 1:
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - 1.0;
    iVar1 = FUN_00ce4dd0(1);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdeec0(6);
      }
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(9);
      }
    }
    break;
  case 2:
    iVar1 = FUN_00ce4dd0(6);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdeec0(6);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(9);
      }
    }
    if (*(float *)(param_1 + 0x140) < 0.0) {
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      *(undefined4 *)(param_1 + 0x140) = 0x45bb8000;
    }
    break;
  case 3:
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
    iVar1 = FUN_00ce4dd0(6);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdeec0(6);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(9);
      }
    }
    if (*(float *)(param_1 + 0x140) < 0.0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x120),"HUD_PIECE_13",1,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x124),"HUD_PIECE_13",1,0xffffffff);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x120),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x124),1,3);
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdeec0(4);
      }
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      *(undefined4 *)(param_1 + 0x140) = 0x45bb7b33;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(7);
      }
    }
    goto LAB_00d3ecea;
  case 4:
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
    iVar1 = FUN_00ce4dd0(4);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdeec0(5);
      }
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(8);
      }
    }
    goto LAB_00d3ecea;
  case 5:
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x144);
    iVar1 = FUN_00ce4dd0(5);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (*(int *)(param_1 + 0x14c) == 0) {
        if (iVar1 != 0) {
          FUN_00cdeec0(5);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(8);
        }
      }
      else {
        if (*(int *)(param_1 + 0x168) == 0) {
          if (iVar1 != 0) {
            FUN_00cdeec0(2);
          }
        }
        else if (iVar1 != 0) {
          FUN_00cdef90(2,1);
        }
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(4);
        }
        FUN_00e5e050("core_se_sys_map_alert_off",0);
      }
    }
    if (*(float *)(param_1 + 0x140) < 0.0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
LAB_00d3ecea:
    FUN_00cd6290(*(undefined4 *)(param_1 + 0x140));
    break;
  case 6:
    iVar1 = FUN_00ce4dd0(2);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdeec0(0);
      }
      *(undefined4 *)(param_1 + 0x148) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(5);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    break;
  case 7:
    iVar1 = FUN_00ce4dd0(6);
    if ((iVar1 != 0) || (*(int *)(param_1 + 0x168) != 0)) {
      if (*(int *)(param_1 + 0x168) == 0) {
        if (*(int *)(param_1 + 0xa8) != 0) {
          FUN_00cdeec0(2);
        }
      }
      else if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_00cdef90(2,1);
      }
      *(undefined4 *)(param_1 + 0x148) = 6;
      FUN_00e5e050("core_se_sys_map_alert_off",0);
    }
  }
  FUN_00d32910();
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}

// 00D43400  cRadarMap::vf14  size=908  [class]
void __fastcall cRadarMap::vf14(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 fVar4;
  float10 extraout_ST1_00;
  undefined4 uVar5;
  undefined4 uStack_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  if ((*(int *)(param_1 + 0x188) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x188) + 0x14), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  if ((*(int *)(param_1 + 0x18c) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x18c) + 0x14), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  if ((*(int *)(param_1 + 400) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 400) + 0x14), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  if ((*(int *)(param_1 + 0x194) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x194) + 0x14), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  if ((*(int *)(param_1 + 0x198) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x198) + 0x14), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_00d3e950();
    if (*(int *)(param_1 + 0x178) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x178) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x17c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x17c) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x180) + 4) = 0;
      return;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x80) == 0) {
      if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = uVar1 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 0;
      }
      FUN_00cb2af0(*(undefined4 *)(param_1 + 0x28),0);
      local_64 = (float)FUN_00fdbc60();
      fVar4 = extraout_ST0 - (float10)(int)local_64 * extraout_ST1;
      local_64 = (float)FUN_00fdbc60();
      local_5c = (float)(extraout_ST0_00 - (float10)(int)local_64 * fVar4);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),(float)extraout_ST1_00);
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x28),local_5c);
      iVar3 = FUN_00a7c8d0();
      fVar2 = *(float *)(iVar3 + 4) + *(float *)(param_1 + 0x60);
      uVar5 = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = uVar1 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
      local_6c = *(float *)(param_1 + 0x60);
      FUN_00cb2af0(*(undefined4 *)(param_1 + 0x20),0);
      local_64 = -local_6c;
      FUN_00cb2af0(*(undefined4 *)(param_1 + 0x28),local_64);
      local_68 = *(float *)(param_1 + 0x84) * 121.0;
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 0;
      local_54 = 0x3f800000;
      D3DXMatrixRotationZ(local_50,local_6c);
      D3DXVec3TransformNormal(&local_68,param_1 + 0x70,&local_58);
      FUN_00fdbc60();
      FUN_00fdbc60();
      D3DXMatrixRotationZ(&local_64,uStack_78);
      D3DXVec3TransformNormal(&stack0xffffff84,&stack0xffffff84,&local_6c);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),-local_60);
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x28),-local_5c);
      iVar3 = FUN_00a7c8d0();
      fVar2 = *(float *)(iVar3 + 4) + local_6c;
      uVar5 = *(undefined4 *)(param_1 + 0x2c);
    }
    FUN_00cb2af0(uVar5,-(fVar2 - 1.5707964));
    if (*(int *)(param_1 + 0x188) != 0) {
      (**(code **)(**(int **)(param_1 + 0x188) + 4))();
    }
    if (*(int *)(param_1 + 0x18c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18c) + 4))();
    }
    if (*(int *)(param_1 + 400) != 0) {
      (**(code **)(**(int **)(param_1 + 400) + 4))();
    }
    if (*(int *)(param_1 + 0x194) != 0) {
      (**(code **)(**(int **)(param_1 + 0x194) + 4))();
    }
    if (*(int *)(param_1 + 0x198) != 0) {
      (**(code **)(**(int **)(param_1 + 0x198) + 4))();
    }
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x84));
    FUN_00cb2c20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x84));
    FUN_00d3e950();
  }
  return;
}

