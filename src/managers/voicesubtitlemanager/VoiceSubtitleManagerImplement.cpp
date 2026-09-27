// src/managers/voicesubtitlemanager/VoiceSubtitleManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C20860..00C67780, 17 functions

#include "types.h"

// 00C20860  FUN_00c20860  size=76  [callgraph]
void __thiscall FUN_00c20860(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}

// 00C208B0  FUN_00c208b0  size=116  [callgraph]
void __fastcall FUN_00c208b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  piVar2 = (int *)(param_1 + 8);
  iVar1 = 0x12;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00C209A0  FUN_00c209a0  size=30  [callgraph]
undefined4 __thiscall FUN_00c209a0(undefined4 param_1,byte param_2)

{
  FUN_00c208b0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C209C0  VoiceSubtitleManagerImplement::vf10  size=37  [class]
void __fastcall VoiceSubtitleManagerImplement::vf10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_00c208b0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C49ED0  VoiceSubtitleManagerImplement::vf18  size=13  [class]
void __fastcall VoiceSubtitleManagerImplement::vf18(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00c49c40();
    return;
  }
  return;
}

// 00C54FE0  VoiceSubtitleManagerImplement::vf14  size=58  [class]
void __fastcall VoiceSubtitleManagerImplement::vf14(int param_1)

{
  if ((((*(int *)(param_1 + 0xc) != 0) && (DAT_01bea004 == 0)) && (DAT_01bea000 == DAT_01be9ffc)) &&
     (*DAT_01be9ff4 == 0x13007)) {
    voiceSubtitleResourceForSnake::play();
    return;
  }
  return;
}

// 00C67110  VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement  size=555  [class]
undefined4 * __thiscall
VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [2];
  char cStack_80;
  int iStack_7c;
  char cStack_78;
  int local_74 [29];
  
  *param_1 = vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_88[0] = 0;
  iVar1 = FUN_00a54ae0(local_88,&DAT_01be91ac,"subtitleForVoice.bxm");
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(8,param_2);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = param_2;
      puVar2[1] = 0;
    }
    param_1[2] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return param_1;
    }
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(iVar1);
    cStack_78 = (**(code **)(local_74[0] + 0x10))(&DAT_0164a448,0);
    FUN_00c67030(local_74,"voiceSubtitle",param_1[2]);
    if (cStack_78 != '\0') {
      (**(code **)(local_74[0] + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  iVar1 = FUN_00a54ae0(local_88,&DAT_01be91dc,"subtitleForVoiceDLC2.bxm");
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(8,param_2);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = param_2;
      puVar2[1] = 0;
    }
    param_1[4] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return param_1;
    }
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(iVar1);
    cStack_78 = (**(code **)(local_74[0] + 0x10))(&DAT_0164a448,0);
    FUN_00c67030(local_74,"voiceSubtitle",param_1[4]);
    if (cStack_78 != '\0') {
      (**(code **)(local_74[0] + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  iVar1 = FUN_00a54ae0(local_88,&DAT_01be91dc,"subtitleForVoiceDLC3.bxm");
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(8,param_2);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = param_2;
      puVar2[1] = 0;
    }
    param_1[5] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
      FUN_00e91420(iVar1);
      cStack_80 = (**(code **)(local_74[0] + 0x10))(&DAT_0164a448,0);
      FUN_00c67030(&iStack_7c,"voiceSubtitle",param_1[5]);
      if (cStack_80 != '\0') {
        (**(code **)(iStack_7c + 0x14))(&DAT_0164a448,0);
      }
      cXml::cXml_5();
    }
  }
  return param_1;
}

// 00C67340  FUN_00c67340  size=27  [between]
void __fastcall FUN_00c67340(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00C67360  VoiceSubtitleManagerImplement::vf04  size=1  [class]
void VoiceSubtitleManagerImplement::vf04(void)

{
  return;
}

// 00C67370  VoiceSubtitleManagerImplement::vf08  size=1  [class]
void VoiceSubtitleManagerImplement::vf08(void)

{
  return;
}

// 00C67380  FUN_00c67380  size=47  [between]
int __thiscall FUN_00c67380(int param_1,byte param_2)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C673C0  FUN_00c673c0  size=147  [between]
undefined4 __thiscall FUN_00c673c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 4) != 0) && ((DAT_01bea060 & 0x40000) == 0)) {
    cVar1 = FUN_00936770();
    if (cVar1 == '\0') {
      if ((DAT_01bea064 & 0x4000) == 0) {
        iVar3 = *(int *)(param_1 + 4);
        iVar2 = *(int *)(iVar3 + 4);
        if (iVar2 != *(int *)(iVar3 + 8) * 0x2c + iVar2) {
          iVar3 = *(int *)(iVar3 + 8) * 0x2c + iVar2;
          do {
            if (param_2 == *(int *)(iVar2 + 0x20)) {
              if ((DAT_01bea064 & 0x8000) == 0) {
                uVar4 = *(undefined4 *)(iVar2 + 0x28);
              }
              else {
                uVar4 = *(undefined4 *)(iVar2 + 0x24);
              }
              FUN_00ce3070(iVar2,0,uVar4,0);
              return 1;
            }
            iVar2 = iVar2 + 0x2c;
          } while (iVar2 != iVar3);
        }
      }
      return 0;
    }
  }
  return 0;
}

// 00C67460  FUN_00c67460  size=143  [between]
undefined4 __thiscall FUN_00c67460(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 4) != 0) && ((DAT_01bea060 & 0x40000) == 0)) {
    cVar1 = FUN_00936770();
    if (((cVar1 == '\0') && ((DAT_01bea064 & 0x4000) == 0)) &&
       ((DAT_01be9f9c == 0 || (DAT_01be9f9c == 1)))) {
      iVar3 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(iVar3 + 4);
      if (iVar2 != *(int *)(iVar3 + 8) * 0x30 + iVar2) {
        iVar3 = *(int *)(iVar3 + 8) * 0x30 + iVar2;
        do {
          if (param_2 == *(int *)(iVar2 + 0x20)) {
            FUN_00ce3070(iVar2,0,*(undefined4 *)(iVar2 + 0x24),0);
            return 1;
          }
          iVar2 = iVar2 + 0x30;
        } while (iVar2 != iVar3);
      }
    }
  }
  return 0;
}

// 00C674F0  VoiceSubtitleManagerImplement::vf00  size=127  [class]
undefined4 __thiscall VoiceSubtitleManagerImplement::vf00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar1 = FUN_00c67460(param_2), iVar1 != 0)) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x10) != 0) && (iVar1 = FUN_00d46780(), iVar1 != 0)) &&
     (iVar1 = FUN_00c673c0(param_2), iVar1 != 0)) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x14) != 0) && (iVar1 = FUN_00d467a0(), iVar1 != 0)) &&
     (iVar1 = FUN_00c673c0(param_2), iVar1 != 0)) {
    return 1;
  }
  uVar2 = FUN_00c673c0(param_2);
  return uVar2;
}

// 00C67610  VoiceSubtitleManagerImplement::vf1C  size=30  [class]
undefined4 __thiscall VoiceSubtitleManagerImplement::vf1C(undefined4 param_1,byte param_2)

{
  VoiceSubtitleManager::VoiceSubtitleManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C67630  VoiceSubtitleManagerImplement::vf0C  size=266  [class]
void __thiscall VoiceSubtitleManagerImplement::vf0C(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_80;
  int local_7c [2];
  int local_74;
  
  FUN_00de3530();
  FUN_009fe6b0(local_7c,param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    FUN_00c208b0();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_80 = 0;
  iVar2 = FUN_00a54ae0(&local_80,local_7c,"subtitleForVoice.bxm");
  if (iVar2 != 0) {
    iVar3 = FUN_00dd3500(0x58,&DAT_01b7bcf0);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00c20860(&DAT_01b7bcf0);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    if (*(int *)(param_1 + 8) != 0) {
      lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
      FUN_00e91420(iVar2);
      cVar1 = (**(code **)(local_74 + 0x10))(&DAT_0164a448,0);
      FUN_00c670a0(local_7c,"voiceSubtitle",*(undefined4 *)(param_1 + 0xc));
      if (cVar1 != '\0') {
        (**(code **)(local_7c[0] + 0x14))(&DAT_0164a448,0);
      }
      cXml::cXml_5();
    }
  }
  return;
}

// 00C67780  FUN_00c67780  size=62  [callgraph]
bool FUN_00c67780(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x18,param_1);
  if (iVar1 != 0) {
    DAT_01bea1a8 = VoiceSubtitleManagerImplement::VoiceSubtitleManagerImplement(param_1);
    return DAT_01bea1a8 != 0;
  }
  DAT_01bea1a8 = 0;
  return false;
}

