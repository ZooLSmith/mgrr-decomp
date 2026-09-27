// src/misc/cCodecViewer.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098A950..009B9AA0, 18 functions

#include "types.h"

// 0098A950  cCodecViewer::vf0C  size=183  [class]
void __fastcall cCodecViewer::vf0C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x30);
    do {
      uVar5 = 1;
      uVar4 = 4;
      uVar1 = FUN_00cb3300(*puVar3);
      FUN_00d389f0(0x17,iVar2,0,0,uVar1,uVar4,uVar5);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 6);
    uVar5 = 1;
    uVar4 = 0x20;
    uVar1 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x24));
    FUN_00d389f0(0x17,10,0,0,uVar1,uVar4,uVar5);
    uVar5 = 1;
    uVar4 = 0x24;
    uVar1 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x24));
    FUN_00d389f0(0x17,0xb,0,0,uVar1,uVar4,uVar5);
  }
  return;
}

// 0098AA10  FUN_0098aa10  size=450  [callgraph]
void __thiscall FUN_0098aa10(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char local_40 [64];
  
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x78),1);
  local_40[0x20] = 0;
  local_40[0x21] = '\0';
  local_40[0x22] = '\0';
  local_40[0x23] = '\0';
  local_40[0x24] = '\0';
  local_40[0x25] = '\0';
  local_40[0x26] = '\0';
  local_40[0x27] = '\0';
  local_40[0x28] = '\0';
  local_40[0x29] = '\0';
  local_40[0x2a] = '\0';
  local_40[0x2b] = '\0';
  local_40[0x2c] = '\0';
  local_40[0x2d] = '\0';
  local_40[0x2e] = '\0';
  local_40[0x2f] = '\0';
  local_40[0x30] = '\0';
  local_40[0x31] = '\0';
  local_40[0x32] = '\0';
  local_40[0x33] = '\0';
  local_40[0x34] = '\0';
  local_40[0x35] = '\0';
  local_40[0x36] = '\0';
  local_40[0x37] = '\0';
  local_40[0x38] = '\0';
  local_40[0x39] = '\0';
  local_40[0x3a] = '\0';
  local_40[0x3b] = '\0';
  local_40[0x3c] = '\0';
  local_40[0x3d] = '\0';
  local_40[0x3e] = '\0';
  local_40[0x3f] = 0;
  switch(param_2) {
  case 0:
    pcVar1 = "HUD_PLACE_01";
    break;
  case 1:
    pcVar1 = "HUD_PLACE_02";
    break;
  case 2:
    pcVar1 = "HUD_PLACE_03";
    break;
  case 3:
    pcVar1 = "HUD_PLACE_04";
    break;
  case 4:
    pcVar1 = "HUD_PLACE_05";
    break;
  case 5:
    pcVar1 = "HUD_PLACE_06";
    break;
  case 6:
    pcVar1 = "HUD_PLACE_07";
    break;
  default:
    goto switchD_0098aa5b_default;
  }
  _sprintf_s(local_40 + 0x20,0x20,pcVar1);
switchD_0098aa5b_default:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x78),local_40 + 0x20,0,0xffffffff);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x78),0,3);
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = 0;
  switch(param_2) {
  case 0:
    pcVar1 = "CHAPTER_SEL_01";
    break;
  case 1:
    pcVar1 = "CHAPTER_SEL_02";
    break;
  case 2:
    pcVar1 = "CHAPTER_SEL_03";
    break;
  case 3:
    pcVar1 = "CHAPTER_SEL_04";
    break;
  case 4:
    pcVar1 = "CHAPTER_SEL_05";
    break;
  case 5:
    pcVar1 = "CHAPTER_SEL_06";
    break;
  case 6:
    pcVar1 = "CHAPTER_SEL_07";
    break;
  default:
    goto switchD_0098ab12_default;
  }
  _sprintf_s(local_40,0x20,pcVar1);
switchD_0098ab12_default:
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x98),local_40,0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x9c),local_40,0,0xffffffff);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x98),0,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x9c),0,3);
  return;
}

// 0098AC10  FUN_0098ac10  size=594  [callgraph]
void __thiscall FUN_0098ac10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ec + param_2 * 4);
  if (iVar1 == 7) {
    if (*(int *)(param_1 + 0x21c + param_2 * 4) == 1) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30 + param_2 * 4),2);
    }
    *(undefined4 *)(param_1 + 0x21c + param_2 * 4) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x21c + param_2 * 4) == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30 + param_2 * 4),1);
  }
  *(undefined4 *)(param_1 + 0x21c + param_2 * 4) = 1;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + param_2 * 4),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x160),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x160),(&PTR_s_HUD_CHARA_NAME_S_0029_0188ea10)[iVar1],1,1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x164),(&PTR_s_HUD_CHARA_NAME_S_0029_0188ea10)[iVar1],1,1);
  if (*(&PTR_s_HUD_SQUAD_NAME_S_00_0188ea30)[iVar1] == '\0') {
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x15c),0x40a00000);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x168),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x16c),0);
  }
  else {
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x15c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x168),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x16c),1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x168),(&PTR_s_HUD_SQUAD_NAME_S_00_0188ea30)[iVar1],0,1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x16c),(&PTR_s_HUD_SQUAD_NAME_S_00_0188ea30)[iVar1],0,1);
  }
  FUN_00ce4dc0(1,1);
  if (iVar1 == 2) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x184),0);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x188),"CODEC_SEL_01",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x18c),"CODEC_SEL_01",0,0xffffffff);
    return;
  }
  if (iVar1 == 3) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x184),0);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x188),"CODEC_SEL_03",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x18c),"CODEC_SEL_03",0,0xffffffff);
    return;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x184),0);
  return;
}

// 0098AE70  FUN_0098ae70  size=124  [callgraph]
void __thiscall FUN_0098ae70(int param_1,undefined4 param_2,undefined4 param_3)

{
  char local_10 [16];
  
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_10[8] = '\0';
  local_10[9] = '\0';
  local_10[10] = '\0';
  local_10[0xb] = '\0';
  local_10[0xc] = '\0';
  local_10[0xd] = '\0';
  local_10[0xe] = '\0';
  local_10[0xf] = 0;
  _sprintf_s(local_10,0x10,"%03d",param_3);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),local_10);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x180),local_10);
  return;
}

// 0098AEF0  FUN_0098aef0  size=414  [callgraph]
void __thiscall FUN_0098aef0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 7;
  *(undefined4 *)(param_1 + 0x1f0) = 7;
  *(undefined4 *)(param_1 + 500) = 7;
  *(undefined4 *)(param_1 + 0x1f8) = 7;
  *(undefined4 *)(param_1 + 0x1fc) = 7;
  *(undefined4 *)(param_1 + 0x200) = 7;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 0;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 1;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 2;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 3;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    return;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 0;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 1;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 2;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 3;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 4;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 0;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 1;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 2;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 3;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 4;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e8) * 4) = 5;
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
  }
  return;
}

// 0098B0D0  FUN_0098b0d0  size=31  [callgraph]
void FUN_0098b0d0(uint param_1)

{
  *(uint *)(&DAT_01bea080 + (param_1 >> 5) * 4) =
       *(uint *)(&DAT_01bea080 + (param_1 >> 5) * 4) & ~(0x80000000U >> ((byte)param_1 & 0x1f));
  return;
}

// 0098B0F0  FUN_0098b0f0  size=171  [callgraph]
float10 __thiscall FUN_0098b0f0(int param_1,int param_2,int param_3)

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
  iVar1 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x74 + param_2 * 4),local_54);
  if (iVar1 != 0) {
    local_58 = local_54[param_3] + local_54[0x11];
  }
  iVar1 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x74 + param_2 * 4));
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 0098B1A0  FUN_0098b1a0  size=38  [callgraph]
float10 __thiscall FUN_0098b1a0(int param_1,int param_2,float param_3)

{
  float local_8 [2];
  
  FUN_00cb3240(local_8,*(undefined4 *)(param_1 + 0x74 + param_2 * 4));
  return (float10)param_3 / (float10)local_8[0];
}

// 0098B1D0  FUN_0098b1d0  size=464  [callgraph]
void __fastcall FUN_0098b1d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_01dc1418 != '\0') {
    uVar1 = FUN_00cc7260(0x5a);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x1b4),uVar2);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x1b8),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1b4),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1b8),uVar1);
    FUN_00ce4d70(3);
    uVar1 = FUN_00cc7260(0x91);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x1bc),uVar2);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x1c0),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1bc),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c0),uVar1);
    FUN_00ce4d70(6);
    return;
  }
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x1b4),uVar1);
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x1b8),uVar1);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1b4),0x2eb626d0);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1b8),0x2eb626d0);
  FUN_00ce4d70(3);
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x1bc),uVar1);
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x1c0),uVar1);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1bc),0x40b847fc);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c0),0x40b847fc);
  FUN_00ce4d70(5);
  return;
}

// 0098B3A0  FUN_0098b3a0  size=226  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0098b3a0(void)

{
  char local_80;
  undefined1 local_7f [127];
  
  DAT_01b389a8 = 0;
  DAT_01b3898c = 0;
  DAT_01b389ac = 0;
  DAT_01b38990 = 0;
  _DAT_01b389b0 = 0;
  _DAT_01b38994 = 0;
  _DAT_01b389b4 = 0;
  _DAT_01b38998 = 0;
  _DAT_01b389b8 = 0;
  _DAT_01b3899c = 0;
  _DAT_01b389bc = 0;
  _DAT_01b389a0 = 0;
  _DAT_01b389c0 = 0;
  _DAT_01b389a4 = 0;
  local_80 = '\0';
  _memset(local_7f,0,0x7f);
  _sprintf_s(&local_80,0x80,"ui\\ui_chapter_%02d.dat",1);
  DAT_01b389a8 = FUN_00e9e570(5,&local_80,&DAT_01b82930,0,0);
  _sprintf_s(&local_80,0x80,"ui\\ui_chapter_%02d.dtt",1);
  DAT_01b3898c = FUN_00e9e570(5,&local_80,&DAT_01b82930,0,0);
  return;
}

// 0098B490  FUN_0098b490  size=199  [callgraph]
void FUN_0098b490(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_80;
  undefined1 local_7f [127];
  
  local_80 = '\0';
  _memset(local_7f,0,0x7f);
  iVar4 = 1;
  iVar3 = 0;
  iVar2 = 7;
  do {
    if (*(int *)((int)&DAT_01b389a8 + iVar3) == 0) {
      _sprintf_s(&local_80,0x80,"ui\\ui_chapter_%02d.dat",iVar4);
      uVar1 = FUN_00e9e570(5,&local_80,&DAT_01b82930,0,0);
      *(undefined4 *)((int)&DAT_01b389a8 + iVar3) = uVar1;
    }
    if (*(int *)((int)&DAT_01b3898c + iVar3) == 0) {
      _sprintf_s(&local_80,0x80,"ui\\ui_chapter_%02d.dtt",iVar4);
      uVar1 = FUN_00e9e570(5,&local_80,&DAT_01b82930,0,0);
      *(undefined4 *)((int)&DAT_01b3898c + iVar3) = uVar1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0098B560  FUN_0098b560  size=291  [callgraph]
void __thiscall FUN_0098b560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_40 [64];
  
  if (*(int *)(param_1 + 0x2b4) != 0) {
    iVar1 = FUN_00e9cf60((&DAT_01b389a8)[param_2]);
    iVar2 = FUN_00e9cf60((&DAT_01b3898c)[param_2]);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      FUN_00f972f0();
      *(undefined4 *)(param_1 + 0x284) = 0;
      *(undefined4 *)(param_1 + 0x288) = 0;
      *(undefined4 *)(param_1 + 0x28c) = 0;
      *(undefined4 *)(param_1 + 0x290) = 0;
      *(undefined4 *)(param_1 + 0x294) = 0;
      FUN_00de3530();
      uVar3 = FUN_00e9d0b0((&DAT_01b389a8)[param_2]);
      uVar4 = FUN_00e9d0b0((&DAT_01b3898c)[param_2]);
      FUN_00de3540(uVar3,uVar4);
      _sprintf_s(local_40,0x40,"ui_chapter_%02d.wtb",param_2 + 1);
      uVar3 = FUN_00de4550(local_40,0);
      FUN_00fa25d0(uVar3);
      *(int *)(param_1 + 0x288) = param_1 + 0x298;
      if (*(int *)(param_1 + 0x2a4) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x2a0);
      }
      *(undefined4 *)(param_1 + 0x294) = uVar3;
      FUN_00ccde60(*(undefined4 *)(param_1 + 0x20),(undefined4 *)(param_1 + 0x284));
      FUN_00ce4d70(0xc);
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return;
}

// 009AD9A0  cCodecViewer::vf00  size=30  [class]
undefined4 __thiscall cCodecViewer::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AD9C0  cCodecViewer::vf08  size=1766  [class]
void __fastcall cCodecViewer::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *local_38;
  int local_34;
  int local_30 [11];
  
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0x41);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0x42);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0x43);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(0x44);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_00cb25d0(0x58);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x48),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x48),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),0);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x40),1,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x44),1,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x48),1,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x4c),1,1);
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x24));
  FUN_00cb2240(uVar2);
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_00cb25d0(0x22);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = FUN_00cb25d0(0x23);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = FUN_00cb25d0(0x24);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar2 = FUN_00cb25d0(0x25);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar2 = FUN_00cb25d0(0x26);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = FUN_00cb25d0(0x36);
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  FUN_00ce4dc0(0,1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x78),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x80),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0xa0),0);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x84),0);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x94),0);
  local_38 = (undefined4 *)(param_1 + 0x30);
  local_34 = 6;
  do {
    uVar2 = FUN_00cb3300(*local_38);
    FUN_00cb2240(uVar2);
    FUN_00ce4dc0(1,1);
    FUN_00ce4dc0(9,1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
    local_38 = local_38 + 1;
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  uVar2 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uVar2 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  uVar2 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  uVar2 = FUN_00cb25d0(0x36);
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  uVar2 = FUN_00cb25d0(0x37);
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  uVar2 = FUN_00cb25d0(0x38);
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  uVar2 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  uVar2 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  uVar2 = FUN_00cb25d0(0x40);
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  uVar2 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 400) = uVar2;
  local_34 = 6;
  do {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x160),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x168),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x16c),0);
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x50));
  FUN_00cb2240(uVar2);
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x1b4) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  FUN_00ce4dc0(6,1);
  FUN_0098aef0(*(undefined4 *)(param_1 + 0x1dc));
  puVar3 = (undefined4 *)FUN_00dd3500(0x120,&DAT_01b7be50);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    *puVar3 = cMenuKeyInfo::vftable;
    puVar3[0x1d] = 0x3f800000;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[0x17] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x20] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x43] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x44] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x45] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 1;
    puVar3[0x46] = 0;
    puVar3[0x47] = 0;
    _memset(puVar3 + 3,0,0x50);
    uVar2 = FUN_00de4500("ui_menu_keyinfo.mkd");
    puVar3[1] = uVar2;
  }
  *(undefined4 **)(param_1 + 0x280) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
    local_30[0] = *piVar4;
    iVar1 = *(int *)(param_1 + 0x280);
    local_30[1] = piVar4[1];
    FUN_0099a440(iVar1 + 0x8c,&DAT_016575ac,"movie_view");
    *(int *)(iVar1 + 0x10c) = local_30[0];
    *(undefined4 *)(iVar1 + 0x118) = 0;
    *(int *)(iVar1 + 0x110) = local_30[1];
    *(undefined4 *)(iVar1 + 0x5c) = 1;
    *(undefined4 *)(iVar1 + 0x114) = 0x41700000;
    iVar1 = *(int *)(param_1 + 0x280);
    *(undefined4 *)(iVar1 + 0x78) = 1;
    *(undefined4 *)(iVar1 + 0x74) = 0;
  }
  FUN_0098b1d0();
  *(uint *)(param_1 + 0x248) = (uint)DAT_01dc1418;
  local_38 = (undefined4 *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  puVar6 = (uint *)(param_1 + 600);
  do {
    uVar5 = FUN_00dde2d0(0,*(short *)(param_1 + 0x1e8) + -1);
    uVar5 = uVar5 & 0xffff;
    if (local_30[uVar5] == 0) {
      local_38 = (undefined4 *)((int)local_38 + 1);
      *puVar6 = uVar5;
      local_30[uVar5] = 1;
      puVar6 = puVar6 + 1;
    }
  } while ((int)local_38 < *(int *)(param_1 + 0x1e8));
  FUN_00cb2600(1);
  FUN_00cb2630(1);
  FUN_0098b490();
  return;
}

// 009AE0B0  FUN_009ae0b0  size=2314  [callgraph]
void __fastcall FUN_009ae0b0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 uStack_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  iVar6 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x30);
  do {
    uVar4 = FUN_00cb3300(*puVar5);
    FUN_00d38a30(0x17,iVar6,uVar4);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 < 6);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    do {
      if ((*(int *)(param_1 + 0x240) == 0) && (cVar3 = FUN_00d0d3e0(0x17,iVar6), cVar3 != '\0')) {
        FUN_00ce4d70(1);
        *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e0);
        *(int *)(param_1 + 0x1e0) = iVar6;
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
        FUN_00ce4d70(0);
        FUN_00ce4d70(2);
        FUN_00ce4d70(10);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
        local_1c = 0;
        uStack_18 = 0;
        local_17 = 0;
        local_13 = 0;
        local_11 = 0;
        local_20 = 0;
        _sprintf_s((char *)&local_20,0x10,"%03d",
                   *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
        FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),&local_20);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x180),&local_20);
        *(undefined4 *)(param_1 + 0x1c4) = 3;
        if (*(int *)(param_1 + 0x280) != 0) {
          puVar5 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
          local_20 = *puVar5;
          iVar2 = *(int *)(param_1 + 0x280);
          local_1c = puVar5[1];
          FUN_0099a440(iVar2 + 0x8c,&DAT_016575ac,"movie_view_play");
          *(undefined4 *)(iVar2 + 0x10c) = local_20;
          *(undefined4 *)(iVar2 + 0x118) = 0;
          *(undefined4 *)(iVar2 + 0x110) = local_1c;
          *(undefined4 *)(iVar2 + 0x5c) = 1;
          *(undefined4 *)(iVar2 + 0x114) = 0x41700000;
        }
        FUN_00e5e050("core_se_sys_cursor",0);
        if (iVar6 != -1) {
          return;
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1e8));
  }
  iVar6 = 0;
  cVar3 = FUN_00d0d3e0(0x17,10);
  if ((cVar3 != '\0') || (cVar3 = FUN_00d0d3e0(0x17,0xb), cVar3 != '\0')) {
    *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
    if (6 < *(int *)(param_1 + 0x1dc)) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
    FUN_0098aa10(*(undefined4 *)(param_1 + 0x1dc));
    FUN_00ce4d70(7);
    FUN_0098aef0(*(undefined4 *)(param_1 + 0x1dc));
    puVar5 = (undefined4 *)(param_1 + 0x204);
    do {
      *puVar5 = 0;
      FUN_0098ac10(iVar6);
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 6);
    *(undefined4 *)(param_1 + 0x2b4) = 1;
    FUN_00e5e050("core_se_sys_cursor",0);
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x240) != 0) {
    iVar6 = FUN_00ce4dd0(4);
    if (iVar6 == 0) {
      return;
    }
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e0);
    iVar6 = *(int *)(param_1 + 0x1e0) + -1;
    *(int *)(param_1 + 0x1e0) = iVar6;
    if (iVar6 < 1) {
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x150),0);
      FUN_00ce4dc0(9,1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
      if (*(int *)(param_1 + 0x280) != 0) {
        puVar5 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
        local_20 = *puVar5;
        iVar6 = *(int *)(param_1 + 0x280);
        local_1c = puVar5[1];
        FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"movie_view");
        *(undefined4 *)(iVar6 + 0x10c) = local_20;
        *(undefined4 *)(iVar6 + 0x118) = 0;
        *(undefined4 *)(iVar6 + 0x110) = local_1c;
        *(undefined4 *)(iVar6 + 0x5c) = 1;
        *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
      }
      FUN_00ce4d70(0);
      *(undefined4 *)(param_1 + 0x240) = 0;
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
    FUN_00ce4d70(6);
    FUN_00ce4dc0(1,1);
    FUN_00ce4dc0(9,1);
    return;
  }
  cVar3 = FUN_00cac7e0(8,0);
  if (((cVar3 == '\0') && (cVar3 = FUN_00cac7e0(0x40000,0), cVar3 == '\0')) &&
     (cVar3 = FUN_00cac9c0(0), cVar3 == '\0')) {
    cVar3 = FUN_00cac7e0(4,0);
    if (((cVar3 == '\0') && (cVar3 = FUN_00cac7e0(0x80000,0), cVar3 == '\0')) &&
       (cVar3 = FUN_00cac9c0(1), cVar3 == '\0')) {
      cVar3 = FUN_00cac7e0(1,0);
      if ((cVar3 != '\0') || (cVar3 = FUN_00cac7e0(0x10000,0), cVar3 != '\0')) {
        piVar1 = (int *)(param_1 + 0x1dc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(undefined4 *)(param_1 + 0x1dc) = 6;
        }
        FUN_0098aa10(*(undefined4 *)(param_1 + 0x1dc));
        FUN_00ce4d70(6);
        FUN_0098aef0(*(undefined4 *)(param_1 + 0x1dc));
        puVar5 = (undefined4 *)(param_1 + 0x204);
        do {
          *puVar5 = 0;
          FUN_0098ac10(iVar6);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar6 < 6);
        *(undefined4 *)(param_1 + 0x2b4) = 1;
        FUN_00e5e050("core_se_sys_cursor",0);
        return;
      }
      cVar3 = FUN_00cac7e0(2,0);
      if ((cVar3 == '\0') && (cVar3 = FUN_00cac7e0(0x20000,0), cVar3 == '\0')) {
        cVar3 = FUN_00ce1360(0);
        if ((cVar3 == '\0') && (cVar3 = FUN_00cac960(), cVar3 == '\0')) {
          return;
        }
        (**(code **)(*(int *)(param_1 + 0x270) + 4))(0x35,0,1);
        *(undefined4 *)(param_1 + 0x1c8) = 2;
        *(undefined4 *)(param_1 + 0x1c4) = 5;
        FUN_00e5e050("core_se_sys_cancel",0);
        return;
      }
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
      if (6 < *(int *)(param_1 + 0x1dc)) {
        *(undefined4 *)(param_1 + 0x1dc) = 0;
      }
      FUN_0098aa10(*(undefined4 *)(param_1 + 0x1dc));
      FUN_00ce4d70(7);
      FUN_0098aef0(*(undefined4 *)(param_1 + 0x1dc));
      puVar5 = (undefined4 *)(param_1 + 0x204);
      do {
        *puVar5 = 0;
        FUN_0098ac10(iVar6);
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 < 6);
      *(undefined4 *)(param_1 + 0x2b4) = 1;
      FUN_00e5e050("core_se_sys_cursor",0);
      return;
    }
    if (*(int *)(param_1 + 0x1e8) == 0) {
      return;
    }
    FUN_00ce4d70(1);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    FUN_00ce4d70(10);
    FUN_00ce4d70(2);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
    local_1c = 0;
    uStack_18 = 0;
    local_17 = 0;
    local_13 = 0;
    local_11 = 0;
    local_20 = 0;
    _sprintf_s((char *)&local_20,0x10,"%03d",
               *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
    FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),&local_20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x180),&local_20);
    if (*(int *)(param_1 + 0x280) != 0) {
      puVar5 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
      local_20 = *puVar5;
      iVar6 = *(int *)(param_1 + 0x280);
      local_1c = puVar5[1];
      FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"movie_view_play");
      *(undefined4 *)(iVar6 + 0x10c) = local_20;
      *(undefined4 *)(iVar6 + 0x118) = 0;
      *(undefined4 *)(iVar6 + 0x110) = local_1c;
      *(undefined4 *)(iVar6 + 0x5c) = 1;
      *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1e8) == 0) {
      return;
    }
    FUN_00ce4d70(1);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    FUN_00ce4d70(5);
    FUN_00ce4dc0(1,1);
    FUN_00ce4dc0(9,1);
    *(undefined4 *)(param_1 + 0x23c) = 1;
    if (*(int *)(param_1 + 0x280) != 0) {
      puVar5 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
      local_20 = *puVar5;
      iVar6 = *(int *)(param_1 + 0x280);
      local_1c = puVar5[1];
      FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"movie_view_play");
      *(undefined4 *)(iVar6 + 0x10c) = local_20;
      *(undefined4 *)(iVar6 + 0x118) = 0;
      *(undefined4 *)(iVar6 + 0x110) = local_1c;
      *(undefined4 *)(iVar6 + 0x5c) = 1;
      *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
    }
  }
  *(undefined4 *)(param_1 + 0x1c4) = 3;
  FUN_00e5e050("core_se_sys_cursor",0);
  return;
}

// 009AE9C0  FUN_009ae9c0  size=3799  [callgraph]
void __fastcall FUN_009ae9c0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 uStack_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  
  local_24 = (undefined4 *)(param_1 + 0x30);
  iVar6 = 0;
  do {
    uVar3 = FUN_00cb3300(*local_24);
    FUN_00d38a30(0x17,iVar6,uVar3);
    local_24 = local_24 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  iVar6 = 0;
  local_24 = (undefined4 *)0xffffffff;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    do {
      if (((*(int *)(param_1 + 0x234) == 0) && (*(int *)(param_1 + 0x238) == 0)) &&
         (cVar2 = FUN_00d0d3e0(0x17,iVar6), cVar2 != '\0')) {
        iVar5 = *(int *)(param_1 + 0x1e0);
        if (iVar5 == iVar6) {
          piVar1 = (int *)(param_1 + 0x204 + iVar5 * 4);
          *piVar1 = *piVar1 + 1;
          iVar6 = *(int *)(param_1 + 0x1e0);
          if (*(int *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] + iVar6 * 8 + 4) <=
              *(int *)(param_1 + 0x204 + iVar6 * 4)) {
            *(undefined4 *)(param_1 + 0x204 + iVar6 * 4) = 0;
          }
          local_1c = 0;
          uStack_18 = 0;
          local_17 = 0;
          local_13 = 0;
          local_11 = 0;
          local_20 = 0;
          _sprintf_s((char *)&local_20,0x10,"%03d",
                     *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
          FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),&local_20);
          FUN_00cce090(*(undefined4 *)(param_1 + 0x180),&local_20);
          FUN_00ce4d70(0xf);
        }
        else {
          *(int *)(param_1 + 0x1e4) = iVar5;
          *(int *)(param_1 + 0x1e0) = iVar6;
          FUN_00ce4d70(0);
          FUN_00ce4d70(1);
          FUN_00ce4dc0(9,1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
          FUN_00ce4d70(0);
          FUN_00ce4d70(2);
          FUN_00ce4d70(10);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
          local_1c = 0;
          uStack_18 = 0;
          local_17 = 0;
          local_13 = 0;
          local_11 = 0;
          local_20 = 0;
          _sprintf_s((char *)&local_20,0x10,"%03d",
                     *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
          FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),&local_20);
          FUN_00cce090(*(undefined4 *)(param_1 + 0x180),&local_20);
          local_24 = (undefined4 *)iVar6;
        }
        FUN_00e5e050("core_se_sys_cursor",0);
        if (local_24 != (undefined4 *)0xffffffff) {
          return;
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1e8));
  }
  cVar2 = FUN_00d0d3e0(0x17,10);
  if ((cVar2 != '\0') || (cVar2 = FUN_00d0d3e0(0x17,0xb), cVar2 != '\0')) {
    FUN_00ce4d70(1);
    FUN_00ce4d70(10);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x150),0);
    FUN_00ce4dc0(9,1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
    FUN_00ce4d70(0);
    if (*(int *)(param_1 + 0x280) != 0) {
      puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
      local_20 = *puVar4;
      iVar6 = *(int *)(param_1 + 0x280);
      local_1c = puVar4[1];
      FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"movie_view");
      *(undefined4 *)(iVar6 + 0x10c) = local_20;
      *(undefined4 *)(iVar6 + 0x118) = 0;
      *(undefined4 *)(iVar6 + 0x110) = local_1c;
      *(undefined4 *)(iVar6 + 0x5c) = 1;
      *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
    }
    *(undefined4 *)(param_1 + 0x1c4) = 2;
    FUN_00e5e050("core_se_sys_cursor",0);
  }
  if (*(int *)(param_1 + 0x234) == 0) {
    if (*(int *)(param_1 + 0x238) == 0) {
      if (*(int *)(param_1 + 0x23c) == 0) {
        cVar2 = FUN_00cac7e0(8,0);
        if (((cVar2 == '\0') && (cVar2 = FUN_00cac7e0(0x40000,0), cVar2 == '\0')) &&
           (cVar2 = FUN_00cac9c0(0), cVar2 == '\0')) {
          cVar2 = FUN_00cac7e0(4,0);
          if (((cVar2 == '\0') && (cVar2 = FUN_00cac7e0(0x80000,0), cVar2 == '\0')) &&
             (cVar2 = FUN_00cac9c0(1), cVar2 == '\0')) {
            cVar2 = FUN_00cac7e0(1,0);
            if ((cVar2 == '\0') && (cVar2 = FUN_00cac7e0(0x10000,0), cVar2 == '\0')) {
              cVar2 = FUN_00cac7e0(2,0);
              if ((cVar2 == '\0') && (cVar2 = FUN_00cac7e0(0x20000,0), cVar2 == '\0')) {
                cVar2 = FUN_00ce12f0(0);
                if (cVar2 != '\0') {
                  FUN_00ce4d70(1);
                  *(undefined4 *)(param_1 + 0x1c4) = 4;
                  *(undefined4 *)(param_1 + 0x244) = 0;
                  FUN_00e5e050("core_se_sys_decide_s",0);
                  local_1c = 0;
                  uStack_18 = 0;
                  local_17 = 0;
                  local_13 = 0;
                  local_11 = 0;
                  local_20 = 0;
                  _sprintf_s((char *)&local_20,0x10,"%03d",
                             *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
                  FUN_00cce090(*(undefined4 *)(param_1 + 0x1b0),&local_20);
                  FUN_00cce090(*(undefined4 *)(param_1 + 0x1b0),&local_20);
                  iVar6 = *(int *)(param_1 + 0x280);
                  if (iVar6 != 0) {
                    *(undefined4 *)(iVar6 + 0x78) = 1;
                    *(undefined4 *)(iVar6 + 0x74) = 0;
                  }
                  *(undefined4 *)(param_1 + 0x250) = 0;
                  return;
                }
                cVar2 = FUN_00cac640(0x40,0);
                if ((cVar2 == '\0') && (iVar6 = FUN_00dd9400(0x58), iVar6 == 0)) {
                  cVar2 = FUN_00ce1360(0);
                  if ((cVar2 == '\0') && (cVar2 = FUN_00cac960(), cVar2 == '\0')) {
                    return;
                  }
                  (**(code **)(*(int *)(param_1 + 0x270) + 4))(0x35,0,1);
                  *(undefined4 *)(param_1 + 0x1c8) = 3;
                  *(undefined4 *)(param_1 + 0x1c4) = 5;
                  FUN_00e5e050("core_se_sys_cancel",0);
                  return;
                }
                FUN_00ce4d70(1);
                *(undefined4 *)(param_1 + 0x1c4) = 4;
                *(undefined4 *)(param_1 + 0x244) = 0;
                FUN_00e5e050("core_se_sys_decide_s",0);
                local_1c = 0;
                uStack_18 = 0;
                local_17 = 0;
                local_13 = 0;
                local_11 = 0;
                local_20 = 0;
                _sprintf_s((char *)&local_20,0x10,"%03d",
                           *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
                FUN_00cce090(*(undefined4 *)(param_1 + 0x1b0),&local_20);
                FUN_00cce090(*(undefined4 *)(param_1 + 0x1b0),&local_20);
                iVar6 = *(int *)(param_1 + 0x280);
                if (iVar6 != 0) {
                  *(undefined4 *)(iVar6 + 0x78) = 1;
                  *(undefined4 *)(iVar6 + 0x74) = 0;
                }
                *(undefined4 *)(param_1 + 0x250) = 1;
                return;
              }
              piVar1 = (int *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4);
              *piVar1 = *piVar1 + 1;
              iVar6 = *(int *)(param_1 + 0x1e0);
              local_20 = *(undefined4 *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] + iVar6 * 8)
              ;
              if (*(int *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] + iVar6 * 8 + 4) <=
                  *(int *)(param_1 + 0x204 + iVar6 * 4)) {
                *(undefined4 *)(param_1 + 0x204 + iVar6 * 4) = 0;
              }
              FUN_0098ae70(*(int *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
              uVar3 = 0xf;
            }
            else {
              piVar1 = (int *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4);
              *piVar1 = *piVar1 + -1;
              iVar6 = *(int *)(param_1 + 0x1e0);
              local_20 = *(undefined4 *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] + iVar6 * 8)
              ;
              if (*(int *)(param_1 + 0x204 + iVar6 * 4) < 0) {
                *(int *)(param_1 + 0x204 + iVar6 * 4) =
                     *(int *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] + iVar6 * 8 + 4) + -1;
              }
              FUN_0098ae70(*(int *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
              uVar3 = 0xe;
            }
            FUN_00ce4d70(uVar3);
          }
          else {
            iVar6 = *(int *)(param_1 + 0x1e0) + 1;
            *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e0);
            iVar5 = *(int *)(param_1 + 0x1e8) + -1;
            *(int *)(param_1 + 0x1e0) = iVar6;
            if (iVar5 < iVar6) {
              *(int *)(param_1 + 0x1e0) = iVar5;
              FUN_00ce4d70(6);
              FUN_00ce4d70(1);
              FUN_00ce4d70(10);
              *(undefined4 *)(param_1 + 0x240) = 1;
              if (*(int *)(param_1 + 0x280) != 0) {
                puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
                FUN_009a2df0("movie_view",*puVar4,puVar4[1],0x41700000,0);
              }
              *(undefined4 *)(param_1 + 0x1c4) = 2;
            }
            else {
              *(undefined4 *)(param_1 + 0x238) = 1;
              FUN_00ce4d70(3);
              FUN_00ce4d70(1);
              FUN_00ce4d70(2);
              FUN_0098ae70(*(int *)(param_1 + 0x1e0),
                           *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
            }
          }
        }
        else {
          *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e0);
          iVar6 = *(int *)(param_1 + 0x1e0) + -1;
          *(int *)(param_1 + 0x1e0) = iVar6;
          if (iVar6 < 0) {
            *(undefined4 *)(param_1 + 0x1e0) = 0;
            FUN_00ce4d70(1);
            FUN_00ce4d70(9);
            FUN_00ce4d70(0);
            if (*(int *)(param_1 + 0x280) != 0) {
              puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x54));
              local_20 = *puVar4;
              iVar6 = *(int *)(param_1 + 0x280);
              local_1c = puVar4[1];
              FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"movie_view");
              *(undefined4 *)(iVar6 + 0x10c) = local_20;
              *(undefined4 *)(iVar6 + 0x118) = 0;
              *(undefined4 *)(iVar6 + 0x110) = local_1c;
              *(undefined4 *)(iVar6 + 0x5c) = 1;
              *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
            }
            *(undefined4 *)(param_1 + 0x1c4) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x234) = 1;
            FUN_00ce4d70(4);
            FUN_00ce4d70(1);
            FUN_00ce4d70(2);
            local_1c = 0;
            uStack_18 = 0;
            local_17 = 0;
            local_13 = 0;
            local_11 = 0;
            local_20 = 0;
            _sprintf_s((char *)&local_20,0x10,"%03d",
                       *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
            FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),&local_20);
            FUN_00cce090(*(undefined4 *)(param_1 + 0x180),&local_20);
          }
        }
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      else {
        iVar6 = FUN_00ce4dd0(4);
        if (iVar6 != 0) {
          iVar6 = *(int *)(param_1 + 0x1e0) + 1;
          *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e0);
          iVar5 = *(int *)(param_1 + 0x1e8) + -1;
          *(int *)(param_1 + 0x1e0) = iVar6;
          if (iVar5 <= iVar6) {
            *(int *)(param_1 + 0x1e0) = iVar5;
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
            FUN_00ce4dc0(9,1);
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
            FUN_00ce4d70(0);
            FUN_00ce4dc0(10,1);
            local_1c = 0;
            uStack_18 = 0;
            local_17 = 0;
            local_13 = 0;
            local_11 = 0;
            local_20 = 0;
            _sprintf_s((char *)&local_20,0x10,"%03d",
                       *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4));
            FUN_00cce090(*(undefined4 *)(param_1 + 0x17c),&local_20);
            FUN_00cce090(*(undefined4 *)(param_1 + 0x180),&local_20);
            *(undefined4 *)(param_1 + 0x23c) = 0;
            return;
          }
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
          FUN_00ce4d70(5);
          FUN_00ce4dc0(1,1);
          FUN_00ce4dc0(9,1);
          return;
        }
      }
    }
    else {
      iVar6 = FUN_00ce4dd0(3);
      if (iVar6 != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
        FUN_00ce4dc0(9,1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
        FUN_00ce4d70(0);
        FUN_00ce4dc0(10,1);
        *(undefined4 *)(param_1 + 0x238) = 0;
        return;
      }
    }
  }
  else {
    iVar6 = FUN_00ce4dd0(4);
    if (iVar6 != 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),0);
      FUN_00ce4dc0(9,1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
      FUN_00ce4d70(0);
      FUN_00ce4dc0(10,1);
      *(undefined4 *)(param_1 + 0x234) = 0;
      return;
    }
  }
  return;
}

// 009AF8A0  FUN_009af8a0  size=1251  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009af8a0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined2 local_13;
  undefined1 local_11;
  
  switch(*(undefined4 *)(param_1 + 0x244)) {
  case 0:
    FUN_00cca180(*(undefined4 *)(&DAT_0188e9f4 + *(int *)(param_1 + 0x1dc) * 4));
    *(undefined4 *)(param_1 + 0x24c) =
         *(undefined4 *)(param_1 + 0x204 + *(int *)(param_1 + 0x1e0) * 4);
    *(undefined4 *)(param_1 + 0x244) = 1;
    break;
  case 1:
    iVar3 = FUN_00ce2140();
    if (iVar3 != 0) {
      FUN_00ce2450();
      FUN_00936500();
      FUN_00ce4d70(3);
      *(undefined4 *)(param_1 + 0x244) = 3;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x1d8) < 0x3d) {
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    }
    cVar2 = FUN_00cac640(0x400,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_00cac640(0x2000,0);
      if (cVar2 == '\0') {
        cVar2 = FUN_00cac640(0x20,0);
        if ((cVar2 == '\0') && (iVar3 = FUN_00dd9400(0x91), iVar3 == 0)) {
          cVar2 = FUN_00936770();
          if (cVar2 != '\0') break;
          if (*(int *)(param_1 + 0x250) != 0) {
            local_20 = *(float *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] +
                                 *(int *)(param_1 + 0x1e0) * 8);
            iVar3 = *(int *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] +
                            *(int *)(param_1 + 0x1e0) * 8 + 4);
            *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
            *(undefined4 *)(param_1 + 0x1d8) = 0;
            *(uint *)(param_1 + 0x244) = (uint)(iVar3 <= *(int *)(param_1 + 0x24c)) * 2 + 4;
            break;
          }
        }
        else {
          FUN_009398e0();
          *(undefined4 *)(param_1 + 0x1d8) = 0;
        }
        *(undefined4 *)(param_1 + 0x244) = 6;
      }
      else {
        local_20 = *(float *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] +
                             *(int *)(param_1 + 0x1e0) * 8);
        iVar3 = *(int *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] +
                        *(int *)(param_1 + 0x1e0) * 8 + 4);
        *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
        *(uint *)(param_1 + 0x244) = (uint)(iVar3 <= *(int *)(param_1 + 0x24c)) * 2 + 4;
        FUN_009398e0();
        *(undefined4 *)(param_1 + 0x1d8) = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x1d8) < 0x3c) {
        piVar1 = (int *)(param_1 + 0x24c);
        *piVar1 = *piVar1 + -1;
        *(uint *)(param_1 + 0x244) = (uint)(*piVar1 < 0) * 2 + 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x244) = 4;
      }
      FUN_009398e0();
      *(undefined4 *)(param_1 + 0x1d8) = 0;
    }
    break;
  case 3:
    FUN_0093b4a0(*(undefined4 *)
                  (*(int *)((&PTR_PTR_0188e9d8)[*(int *)(param_1 + 0x1dc)] +
                           *(int *)(param_1 + 0x1e0) * 8) + *(int *)(param_1 + 0x24c) * 4),0,0);
    switch(*(undefined4 *)(param_1 + 0x1ec + *(int *)(param_1 + 0x1e0) * 4)) {
    case 0:
      _DAT_01b36890 = 1;
      break;
    case 1:
      _DAT_01b36890 = 2;
      break;
    case 2:
      _DAT_01b36890 = 3;
      break;
    case 3:
      _DAT_01b36890 = 4;
      break;
    case 4:
      _DAT_01b36890 = 5;
      break;
    default:
      _DAT_01b36890 = 0xffffffff;
    }
    local_1c = 0.0;
    local_18 = 0;
    uStack_14 = 0;
    local_13 = 0;
    local_11 = 0;
    local_20 = 0.0;
    _sprintf_s((char *)&local_20,0x10,"%03d",*(undefined4 *)(param_1 + 0x24c));
    FUN_00cce090(*(undefined4 *)(param_1 + 0x1b0),&local_20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x1b0),&local_20);
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x244) = 2;
    break;
  case 4:
    cVar2 = FUN_00936770();
    if (cVar2 == '\0') {
      FUN_00984a00();
      *(undefined4 *)(param_1 + 0x244) = 5;
    }
    break;
  case 5:
    iVar3 = FUN_00984a10();
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x244) = 3;
    }
    break;
  case 6:
    FUN_00984a00();
    FUN_00936540();
    FUN_00ce1e40();
    *(undefined4 *)(param_1 + 0x244) = 7;
    break;
  case 7:
    iVar3 = FUN_00984a10();
    if (iVar3 == 0) {
      FUN_00ce4d70(2);
      iVar3 = *(int *)(param_1 + 0x280);
      *(undefined4 *)(param_1 + 0x1c4) = 3;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x78) = 1;
        *(undefined4 *)(iVar3 + 0x74) = 0x3f800000;
      }
      FUN_00ce4d70(4);
    }
  }
  iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x28));
  local_1c = *(float *)(iVar3 + 0x94);
  local_18 = *(undefined4 *)(iVar3 + 0x98);
  local_20 = *(float *)(iVar3 + 0x90);
  fVar4 = (float10)FUN_00cad4b0();
  local_20 = (float)((float10)local_20 / fVar4);
  fVar4 = (float10)FUN_00cad4d0();
  local_1c = (float)((float10)local_1c / fVar4);
  FUN_00984be0(&local_20,0);
  iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x2c));
  local_1c = *(float *)(iVar3 + 0x94);
  local_18 = *(undefined4 *)(iVar3 + 0x98);
  local_20 = *(float *)(iVar3 + 0x90);
  fVar4 = (float10)FUN_00cad4b0();
  local_20 = (float)((float10)local_20 / fVar4);
  fVar4 = (float10)FUN_00cad4d0();
  local_1c = (float)((float10)local_1c / fVar4);
  FUN_00984be0(&local_20,1);
  if (*(uint *)(param_1 + 0x248) != (uint)DAT_01dc1418) {
    FUN_0098b1d0();
    *(uint *)(param_1 + 0x248) = (uint)DAT_01dc1418;
  }
  local_20 = (float)(*(int *)(param_1 + 0x1e8) + -1);
  FUN_00cb2900(*(undefined4 *)(param_1 + 0x50),(float)(int)local_20 * 46.0);
  return;
}

// 009B9AA0  cCodecViewer::vf14  size=101  [class]
void __fastcall cCodecViewer::vf14(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x1c4)) {
  case 0:
    FUN_0099ca70();
    break;
  case 2:
    FUN_009ae0b0();
    break;
  case 3:
    FUN_009ae9c0();
    break;
  case 4:
    FUN_009af8a0();
    break;
  case 5:
    FUN_0099ce50();
  }
  if (*(int *)(param_1 + 0x1c4) != 0) {
    FUN_0099ce90();
  }
  FUN_0098b560(*(undefined4 *)(param_1 + 0x1dc));
  if (*(int *)(param_1 + 0x280) != 0) {
    FUN_009a2a10();
    return;
  }
  return;
}

