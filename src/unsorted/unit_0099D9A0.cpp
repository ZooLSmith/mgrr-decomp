// src/unsorted/unit_0099D9A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099D9A0..0099DEF0, 3 functions

#include "mgrr.h"

// 0099D9A0  FUN_0099d9a0  size=1174  [run]
void __fastcall FUN_0099d9a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_24;
  char local_20 [32];
  
  iVar1 = *(int *)(param_1 + 0xf8) / 5 - *(int *)(param_1 + 0xf0);
  piVar5 = &DAT_01b393b0 + iVar1 * 5;
  iVar1 = iVar1 * 5;
  local_24 = 0x14;
  do {
    if (iVar1 < *(int *)(param_1 + 0x4ec)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x458),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x45c),1);
      if ((iVar1 < 0) || (0x5f < iVar1)) {
LAB_0099dcaa:
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),0);
        local_20[1] = '\0';
        local_20[2] = '\0';
        local_20[3] = '\0';
        local_20[4] = '\0';
        local_20[5] = '\0';
        local_20[6] = '\0';
        local_20[7] = '\0';
        local_20[8] = '\0';
        local_20[9] = '\0';
        local_20[10] = '\0';
        local_20[0xb] = '\0';
        local_20[0xc] = '\0';
        local_20[0xd] = '\0';
        local_20[0xe] = '\0';
        local_20[0xf] = '\0';
        local_20[0x10] = '\0';
        local_20[0x11] = '\0';
        local_20[0x12] = '\0';
        local_20[0x13] = '\0';
        local_20[0x14] = '\0';
        local_20[0x15] = '\0';
        local_20[0x16] = '\0';
        local_20[0x17] = '\0';
        local_20[0x18] = '\0';
        local_20[0x19] = '\0';
        local_20[0x1a] = '\0';
        local_20[0x1b] = '\0';
        local_20[0x1c] = '\0';
        local_20[0x1d] = '\0';
        local_20[0x1e] = '\0';
        local_20[0x1f] = 0;
        local_20[0] = '\0';
        _sprintf_s(local_20,0x20,"%03d",iVar1 + 1);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x468),local_20);
        if (iVar1 == *(int *)(param_1 + 0x1b8)) {
          FUN_00cce0e0(*(undefined4 *)(param_1 + 0x468),1,3);
        }
        uVar3 = FUN_00e03ea0("collect_item_01");
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
        uVar3 = FUN_00ca9da0(iVar1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),1);
        uVar4 = FUN_00e03ea0(uVar3);
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x450),uVar4);
        uVar4 = FUN_00e03ea0(uVar3);
        uVar3 = *(undefined4 *)(param_1 + 0x454);
LAB_0099ddcb:
        FUN_00cb2ce0(uVar3,uVar4);
        if (iVar1 != *(int *)(param_1 + 0xf8)) {
          uVar3 = 1;
LAB_0099dddc:
          FUN_00ce4d70(uVar3);
        }
      }
      else {
        if (piVar5[-0x60] == 0) {
          if ((0x5f < iVar1) || (*piVar5 == 0)) goto LAB_0099dcaa;
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),0);
          uVar3 = FUN_00e03ea0("collect_item_01");
          FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
          uVar3 = FUN_00ca9da0(iVar1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),1);
          uVar4 = FUN_00e03ea0(uVar3);
          FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x450),uVar4);
          uVar4 = FUN_00e03ea0(uVar3);
          uVar3 = *(undefined4 *)(param_1 + 0x454);
          goto LAB_0099ddcb;
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),1);
        uVar3 = FUN_00e03ea0("collect_item_06");
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),0);
        if (iVar1 != *(int *)(param_1 + 0xf8)) {
          uVar3 = 2;
          goto LAB_0099dddc;
        }
      }
      uVar3 = FUN_00ca9d10(iVar1);
      uVar3 = FUN_00ca9cf0(uVar3);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x470),uVar3,0,0xffffffff);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x470),1);
    }
    else {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x458),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x45c),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),0);
      local_20[0] = '\0';
      local_20[1] = '\0';
      local_20[2] = '\0';
      local_20[3] = '\0';
      local_20[4] = '\0';
      local_20[5] = '\0';
      local_20[6] = '\0';
      local_20[7] = '\0';
      local_20[8] = '\0';
      local_20[9] = '\0';
      local_20[10] = '\0';
      local_20[0xb] = '\0';
      local_20[0xc] = '\0';
      local_20[0xd] = '\0';
      local_20[0xe] = '\0';
      local_20[0xf] = '\0';
      local_20[0x10] = '\0';
      local_20[0x11] = '\0';
      local_20[0x12] = '\0';
      local_20[0x13] = '\0';
      local_20[0x14] = '\0';
      local_20[0x15] = '\0';
      local_20[0x16] = '\0';
      local_20[0x17] = '\0';
      local_20[0x18] = '\0';
      local_20[0x19] = '\0';
      local_20[0x1a] = '\0';
      local_20[0x1b] = '\0';
      local_20[0x1c] = '\0';
      local_20[0x1d] = '\0';
      local_20[0x1e] = '\0';
      local_20[0x1f] = 0;
      _sprintf_s(local_20,0x20,"-");
      FUN_00cce090(*(undefined4 *)(param_1 + 0x468),local_20);
      iVar2 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x468));
      if (iVar2 != 0) {
        FUN_00cce0e0(*(undefined4 *)(param_1 + 0x468),1,3);
      }
      uVar3 = FUN_00e03ea0("collect_item_06");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x470),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),0);
    }
    piVar5 = piVar5 + 1;
    iVar1 = iVar1 + 1;
    local_24 = local_24 + -1;
    if (local_24 == 0) {
      return;
    }
  } while( true );
}

// 0099DE40  FUN_0099de40  size=174  [run]
void __fastcall FUN_0099de40(int param_1)

{
  int iVar1;
  undefined1 local_18 [24];
  
  iVar1 = FUN_00ca9e50(*(undefined4 *)(param_1 + 0xf8));
  iVar1 = iVar1 + 1;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x50),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x50),0);
  FUN_0099a350(local_18,"COLLECT_ID_A_%02d",iVar1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),local_18,0,0xffffffff);
  FUN_0099a350(local_18,"COLLECT_ID_B_%02d",iVar1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 100),local_18,0,0xffffffff);
  FUN_0099a350(local_18,"COLLECT_ID_C_%02d",iVar1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x68),local_18,0,0xffffffff);
  return;
}

// 0099DEF0  FUN_0099def0  size=124  [run]
undefined4 FUN_0099def0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 != 0x20140) && (iVar1 != 0x20144)) && (iVar1 != 0x20160)) {
      FUN_00a805f0();
      FUN_00a7c950();
      return 1;
    }
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9c78;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
      FUN_00dd6d80(puVar3);
      FUN_00b2f3a0();
    }
    FUN_00a7c950();
  }
  return 1;
}

