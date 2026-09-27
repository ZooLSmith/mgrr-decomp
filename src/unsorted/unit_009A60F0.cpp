// src/unsorted/unit_009A60F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A60F0..009A6200, 2 functions

#include "mgrr.h"

// 009A60F0  FUN_009a60f0  size=272  [run]
void __thiscall FUN_009a60f0(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_10 [16];
  
  FUN_0099a460(local_10,"CORE_ETC_04");
  iVar1 = param_2 * 0x5c + param_1;
  FUN_00cf9770(*(undefined4 *)(param_2 * 0x5c + 0x240 + param_1),local_10,0,1);
  FUN_00cf9770(*(undefined4 *)(iVar1 + 0x260),local_10,0,1);
  FUN_00cf9770(*(undefined4 *)(iVar1 + 0x254),"TITEL_SAVE_06",0,9);
  FUN_00cb2310(*(undefined4 *)(iVar1 + 0x244),0);
  FUN_00cb2310(*(undefined4 *)(iVar1 + 0x248),0);
  FUN_00cb2310(*(undefined4 *)(iVar1 + 0x25c),1);
  FUN_00cb2310(*(undefined4 *)(iVar1 + 0x264),1);
  FUN_0099a460(local_10,"--:--");
  FUN_00cce090(*(undefined4 *)(iVar1 + 0x278),local_10);
  FUN_00cce090(*(undefined4 *)(iVar1 + 0x27c),local_10);
  FUN_00cb2310(*(undefined4 *)(param_1 + (param_2 + 7) * 0x5c),0);
  return;
}

// 009A6200  FUN_009a6200  size=533  [run]
void __thiscall FUN_009a6200(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_38 [16];
  char *local_28 [4];
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  
  FUN_0099a460(local_38,"TITEL_SAVE_0%d",param_2);
  iVar4 = param_2 * 0x5c + param_1;
  FUN_00cf9770(*(undefined4 *)(param_2 * 0x5c + 0x240 + param_1),local_38,0,9);
  if ((*param_3 == 8) || (*param_3 == 9)) {
    uVar6 = *(undefined4 *)(iVar4 + 0x254);
    pcVar7 = "TITEL_SAVE_17";
  }
  else {
    uVar6 = *(undefined4 *)(iVar4 + 0x254);
    pcVar7 = "TITEL_SAVE_06";
  }
  FUN_00cf9770(uVar6,pcVar7,0,9);
  local_28[0] = "TITEL_SAVE_07";
  local_28[1] = "TITEL_SAVE_08";
  local_28[2] = "TITEL_SAVE_09";
  local_28[3] = "TITEL_SAVE_10";
  local_18 = "TITEL_SAVE_11";
  local_14 = "TITEL_SAVE_12";
  local_10 = "TITEL_SAVE_13";
  local_c = "TITEL_SAVE_14";
  local_8 = "TITEL_SAVE_15";
  local_4 = "TITEL_SAVE_16";
  FUN_00cb2310(*(undefined4 *)(iVar4 + 0x25c),1);
  FUN_00cb2310(*(undefined4 *)(iVar4 + 0x264),0);
  FUN_00cf9770(*(undefined4 *)(iVar4 + 0x260),local_28[*param_3],0,9);
  FUN_0099a460(local_38,"%02d:%02d",(uint)param_3[1] / 0x3c,(uint)param_3[1] % 0x3c);
  FUN_00cce090(*(undefined4 *)(iVar4 + 0x278),local_38);
  FUN_00cce090(*(undefined4 *)(iVar4 + 0x27c),local_38);
  bVar1 = *(byte *)(param_3 + 2);
  uVar3 = (uint)*(byte *)((int)param_3 + 9);
  FUN_00cb2310(*(undefined4 *)(iVar4 + 0x244),1);
  FUN_00cb2bc0(*(undefined4 *)(iVar4 + 0x244),(float)bVar1 * 0.1 * 1.33 + 1.0);
  FUN_00cb2310(*(undefined4 *)(iVar4 + 0x248),1);
  FUN_00cb2310(*(undefined4 *)((param_2 + 7) * 0x5c + param_1),uVar3 != 0);
  if (uVar3 != 0) {
    iVar2 = 0;
    puVar5 = (undefined4 *)(iVar4 + 0x288);
    do {
      FUN_00cb2310(*puVar5,iVar2 < (int)uVar3);
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar2 < 5);
  }
  return;
}

