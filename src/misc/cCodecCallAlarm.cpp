// src/misc/cCodecCallAlarm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6190..00D2B1F0, 4 functions

#include "types.h"

// 00CB6190  cCodecCallAlarm::vf08  size=101  [class]
void __fastcall cCodecCallAlarm::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xd8);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xec);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xee);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0x2c) = (uint)*(ushort *)(iVar1 + 0x14c);
  return;
}

// 00CE31D0  cCodecCallAlarm::vf00  size=63  [class]
undefined4 * __thiscall cCodecCallAlarm::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CFE990  cCodecCallAlarm::vf14  size=578  [class]
void __fastcall cCodecCallAlarm::vf14(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *local_50 [4];
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x30);
  }
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 0:
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      if ((iVar3 == -1) || (iVar3 == 0xe)) {
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        pcVar4 = "HUD_CHARA_NAME_S_0000";
      }
      else {
        local_50[0] = "HUD_CHARA_NAME_S_0028";
        local_50[1] = "HUD_CHARA_NAME_S_0029";
        local_50[2] = "HUD_CHARA_NAME_S_0030";
        local_50[3] = "HUD_CHARA_NAME_S_0031";
        local_40 = "HUD_CHARA_NAME_S_0032";
        local_3c = "HUD_CHARA_NAME_S_0033";
        local_38 = "HUD_CHARA_NAME_S_0010";
        local_34 = "HUD_CHARA_NAME_S_0037";
        local_30 = "HUD_CHARA_NAME_S_0019";
        local_2c = "HUD_CHARA_NAME_S_0021";
        local_28 = "HUD_CHARA_NAME_S_0023";
        local_24 = "HUD_CHARA_NAME_S_0027";
        local_20 = "HUD_CHARA_NAME_S_0034";
        local_1c = "HUD_CHARA_NAME_S_0025";
        local_18 = "HUD_CHARA_NAME_S_0000";
        local_14 = "HUD_CHARA_NAME_S_0000";
        local_10 = "HUD_CHARA_NAME_S_0021";
        local_c = "HUD_CHARA_NAME_S_0038";
        local_8 = "HUD_CHARA_NAME_S_0037";
        local_4 = "HUD_CHARA_NAME_S_0019";
        pcVar4 = local_50[iVar3];
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
      }
      FUN_00cf9770(uVar2,pcVar4,0,0xffffffff);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),0);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
      uVar2 = FUN_00e5e050("core_se_sys_radio_call_on",0);
      *(undefined4 *)(param_1 + 100) = uVar2;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(1), iVar3 != 0)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
      *(undefined4 *)(param_1 + 0x58) = 2;
    }
    break;
  case 2:
    if (((*(int *)(param_1 + 100) != 0) &&
        (iVar3 = thunk_FUN_00e58ed0(*(int *)(param_1 + 100)), iVar3 != 0)) ||
       (iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x1c)), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x58) = 3;
    }
    break;
  case 3:
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x1c));
    if (iVar3 != 0) break;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(2);
    }
    *(undefined4 *)(param_1 + 0x58) = 4;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(2), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x58) = 5;
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar1;
  return;
}

// 00D2B1F0  cCodecCallAlarm::cCodecCallAlarm  size=113  [class]
undefined4 * cCodecCallAlarm::cCodecCallAlarm(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x70,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0xc] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[3] = "cCodecCallAlarm";
    puVar1[4] = 0;
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(9);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

