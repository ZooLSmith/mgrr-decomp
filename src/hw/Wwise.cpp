// src/hw/Wwise.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DECDA0..00DF7F70, 202 functions

#include "types.h"

// 00DECDA0  Hw::Wwise::BankWork::registData  size=125  [class]
undefined4 __thiscall
Hw::Wwise::BankWork::registData(int param_1,void *param_2,ulong param_3,undefined4 param_4)

{
  AKRESULT AVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd5650(&DAT_016c56bc);
    return 0;
  }
  if (((uint)param_2 & 0xf) != 0) {
    FUN_00dd5650(&DAT_016c5678,param_4);
    return 0;
  }
  AVar1 = AK::SoundEngine::LoadBank(param_2,param_3,(ulong *)(param_1 + 4));
  if (AVar1 != 1) {
    FUN_00dd5650(&DAT_016c563c,param_4,AVar1);
    return 0;
  }
  *(void **)(param_1 + 8) = param_2;
  return 1;
}

// 00DECE20  FUN_00dece20  size=88  [callgraph]
undefined4 __thiscall FUN_00dece20(int param_1,char *param_2)

{
  AKRESULT AVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd5650(&DAT_016c56bc);
    return 0;
  }
  AVar1 = AK::SoundEngine::LoadBank(param_2,-1,(ulong *)(param_1 + 4));
  if (AVar1 != 1) {
    FUN_00dd5650(&DAT_016c56f8,param_2,AVar1,0xffffffff,*(ulong *)(param_1 + 4));
    return 0;
  }
  return 1;
}

// 00DECE90  FUN_00dece90  size=75  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00dece90(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  DAT_01dd4bfc = FUN_00dd29b0(uVar1,0x20,0,0);
  if (DAT_01dd4bfc == 0) {
    return 0;
  }
  _DAT_01dd4bf4 = DAT_01dd4bfc;
  DAT_01dd4bf0 = uVar1 >> 3;
  _DAT_01dd4bf8 = DAT_01dd4bfc + DAT_01dd4bf0 * 4;
  DAT_01dd4bec = 0;
  return 1;
}

// 00DED640  FUN_00ded640  size=42  [callgraph]
void __fastcall FUN_00ded640(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00DED690  FUN_00ded690  size=28  [callgraph]
bool __fastcall FUN_00ded690(int *param_1)

{
  if ((char *)(param_1[1] + *param_1) <= (char *)param_1[2]) {
    return true;
  }
  return *(char *)param_1[2] == '\0';
}

// 00DED6B0  FUN_00ded6b0  size=172  [callgraph]
undefined4 __thiscall FUN_00ded6b0(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (((char *)(param_1[1] + *param_1) <= (char *)param_1[2]) || (*(char *)param_1[2] == '\0')) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  *param_2 = '\0';
  while( true ) {
    *param_2 = '\0';
    iVar2 = FUN_00ded690();
    if (iVar2 != 0) {
      return 1;
    }
    cVar1 = *(char *)param_1[2];
    if (cVar1 == '\r') break;
    if (cVar1 == '\n') {
      param_1[2] = param_1[2] + 1;
      pcVar3 = (char *)param_1[2];
      iVar2 = FUN_00ded690();
      if (iVar2 != 0) {
        return 1;
      }
      bVar4 = *pcVar3 == '\r';
      goto LAB_00ded74d;
    }
    *param_2 = cVar1;
    param_1[2] = param_1[2] + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 1;
    }
  }
  param_1[2] = param_1[2] + 1;
  pcVar3 = (char *)param_1[2];
  iVar2 = FUN_00ded690();
  if (iVar2 != 0) {
    return 1;
  }
  bVar4 = *pcVar3 == '\n';
LAB_00ded74d:
  if (bVar4) {
    param_1[2] = (int)(pcVar3 + 1);
  }
  return 1;
}

// 00DED760  FUN_00ded760  size=191  [callgraph]
undefined4 __thiscall FUN_00ded760(int *param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  
  if (((char *)(param_1[1] + *param_1) <= (char *)param_1[2]) || (*(char *)param_1[2] == '\0')) {
    return 0;
  }
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      *param_2 = '\0';
      iVar2 = FUN_00ded690();
      while (iVar2 == 0) {
        iVar2 = FUN_00fdc7b0(param_4,(int)*(char *)param_1[2]);
        if (iVar2 == 0) {
          while( true ) {
            *param_2 = '\0';
            iVar2 = FUN_00ded690();
            if (iVar2 != 0) {
              return 1;
            }
            cVar1 = *(char *)param_1[2];
            iVar2 = FUN_00fdc7b0(param_4,(int)cVar1);
            if (iVar2 != 0) break;
            *param_2 = cVar1;
            param_1[2] = param_1[2] + 1;
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
            if (param_3 == 0) {
              return 1;
            }
          }
          return 1;
        }
        param_1[2] = param_1[2] + 1;
        iVar2 = FUN_00ded690();
      }
    }
    return 0;
  }
  return 0;
}

// 00DED840  FUN_00ded840  size=77  [callgraph]
undefined4 __thiscall FUN_00ded840(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 1;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_00dd29b0(param_2,0x20,0,0);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      param_1[1] = iVar1;
      param_1[2] = iVar1 + param_2;
      return 1;
    }
  }
  return 0;
}

// 00DED890  FUN_00ded890  size=42  [callgraph]
void __fastcall FUN_00ded890(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00DED990  FUN_00ded990  size=120  [callgraph]
undefined1 * __thiscall FUN_00ded990(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return (undefined1 *)0x0;
  }
  param_3 = param_3 - param_2;
  if (param_3 == 0) {
    return &DAT_016416fa;
  }
  if ((*param_1 != 0) &&
     (puVar1 = (undefined1 *)(param_1[2] - (param_3 + 1)), (undefined1 *)param_1[1] <= puVar1)) {
    param_1[2] = (int)puVar1;
    if (puVar1 != (undefined1 *)0x0) {
      if (param_3 != 0) {
        puVar2 = puVar1;
        iVar3 = param_3;
        do {
          *puVar2 = puVar2[param_2 - (int)puVar1];
          puVar2 = puVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puVar1[param_3] = 0;
      return puVar1;
    }
    return (undefined1 *)0x0;
  }
  FUN_00dd5650(&DAT_016c574c);
  return (undefined1 *)0x0;
}

// 00DEDA10  FUN_00deda10  size=524  [callgraph]
AKRESULT FUN_00deda10(void)

{
  AKRESULT AVar1;
  AKRESULT AVar2;
  
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x6c,FUN_0134f8f0,FUN_01350190);
  AVar2 = 1;
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x6d,FUN_01356100,FUN_01356460);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x6e,FUN_01388cf0,FUN_01389070);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x73,FUN_0136c6a0,FUN_0136cc70);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x76,FUN_0138dfe0,FUN_0138fab0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x6a,FUN_01354a40,FUN_01354dc0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x7d,FUN_01356f90,FUN_01358270);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x83,FUN_01416810,FUN_014174b0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x7e,FUN_01359b60,FUN_0135a450);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x69,FUN_01387190,FUN_013875d0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x81,FUN_0136f050,FUN_0136f3c0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x87,FUN_014074d0,FUN_01407e30);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x88,FUN_013898d0,FUN_0138a0a0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x82,FUN_01412730,FUN_01412b60);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x8a,FUN_0135cae0,FUN_0135d5f0);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x8b,FUN_01359250,FUN_01359420);
  if (AVar1 == 1) {
    AVar1 = AVar2;
  }
  return AVar1;
}

// 00DEDC50  FUN_00dedc50  size=75  [callgraph]
AKRESULT FUN_00dedc50(void)

{
  AKRESULT AVar1;
  AKRESULT AVar2;
  
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0x100,0x6e,FUN_0141f9e0,FUN_01420360);
  AVar2 = 1;
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0x100,0x67,FUN_01432a30,FUN_014331c0);
  if (AVar1 == 1) {
    AVar1 = AVar2;
  }
  return AVar1;
}

// 00DEDCA0  FUN_00dedca0  size=100  [callgraph]
AKRESULT FUN_00dedca0(void)

{
  AKRESULT AVar1;
  AKRESULT AVar2;
  
  AVar1 = AK::SoundEngine::RegisterPlugin(3,0,0x74,FUN_013fe3b0,FUN_013fef50);
  AVar2 = 1;
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(2,0,0x77,FUN_013ff8a0,FUN_01400230);
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AVar1 = AK::SoundEngine::RegisterPlugin(2,0,0x78,FUN_01403000,FUN_014045c0);
  if (AVar1 == 1) {
    AVar1 = AVar2;
  }
  return AVar1;
}

// 00DEDD30  FUN_00dedd30  size=63  [callgraph]
AKRESULT FUN_00dedd30(void)

{
  AKRESULT AVar1;
  AKRESULT AVar2;
  
  AVar1 = AK::SoundEngine::RegisterPlugin(5,0,0x195,FUN_01370d90,FUN_01370e00);
  AVar2 = 1;
  if (AVar1 != 1) {
    AVar2 = AVar1;
  }
  AK::MotionEngine::RegisterMotionDevice(0,0x196,FUN_01391cc0);
  return AVar2;
}

// 00DEDE80  FUN_00dede80  size=100  [callgraph]
bool FUN_00dede80(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = &DAT_016c577c;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00dedeb0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00dedeb5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00dedeb0;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00dedeb5:
  if (iVar3 == 0) {
    *param_1 = 0;
    return true;
  }
  uVar4 = AK::SoundEngine::GetIDFromString((char *)param_2);
  *param_1 = uVar4;
  return uVar4 != 0;
}

// 00DEDEF0  FUN_00dedef0  size=91  [callgraph]
void FUN_00dedef0(ulong param_1,int param_2,undefined4 param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  local_1c = param_3;
  local_18 = param_3;
  local_14 = param_3;
  local_8 = param_3;
  local_10 = param_3;
  local_c = param_3;
  AK::SoundEngine::SetListenerSpatialization(param_1,param_2 != 0,(AkSpeakerVolumes *)&local_1c);
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DEDF50  FUN_00dedf50  size=65  [callgraph]
undefined4 FUN_00dedf50(float *param_1,char *param_2)

{
  AKRESULT AVar1;
  RTPCValue_type local_8;
  float local_4;
  
  local_8 = 0;
  AVar1 = AK::SoundEngine::Query::GetRTPCValue(param_2,0xffffffff,&local_4,&local_8);
  if (AVar1 != 1) {
    return 0;
  }
  *param_1 = local_4;
  return 1;
}

// 00DEE1D0  FUN_00dee1d0  size=53  [callgraph]
void __thiscall FUN_00dee1d0(int param_1,int param_2)

{
  if (*(ulong *)(param_1 + 0x14) != 0) {
    AK::SoundEngine::CancelEventCallback(*(ulong *)(param_1 + 0x14));
    if (param_2 != 0) {
      AK::SoundEngine::StopPlayingID(*(ulong *)(param_1 + 0x14),0,4);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 00DEE320  FUN_00dee320  size=136  [callgraph]
int FUN_00dee320(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_01dd4c34 == (int *)0x0) {
    if ((DAT_01dd4c2c != 0) && (param_1 != 0)) {
      iVar4 = 0;
      iVar3 = *(int *)(DAT_01dd4c2c + 4) + -1;
      if (-1 < iVar3) {
        do {
          iVar2 = (iVar3 + iVar4) / 2;
          uVar1 = *(uint *)(DAT_01dd4c30 + iVar2 * 8);
          if (uVar1 == param_1) {
            return iVar2;
          }
          if (uVar1 < param_1) {
            iVar4 = iVar2 + 1;
          }
          else {
            iVar3 = iVar2 + -1;
          }
        } while (iVar4 <= iVar3);
      }
    }
  }
  else if (param_1 != 0) {
    iVar4 = 0;
    iVar3 = *DAT_01dd4c34 + -1;
    if (-1 < iVar3) {
      do {
        iVar2 = (iVar3 + iVar4) / 2;
        uVar1 = *(uint *)(DAT_01dd4c30 + iVar2 * 8);
        if (uVar1 == param_1) {
          return iVar2;
        }
        if (uVar1 < param_1) {
          iVar4 = iVar2 + 1;
        }
        else {
          iVar3 = iVar2 + -1;
        }
      } while (iVar4 <= iVar3);
      return -1;
    }
  }
  return -1;
}

// 00DEE650  FUN_00dee650  size=93  [callgraph]
undefined4 __thiscall FUN_00dee650(int param_1,uint param_2,char *param_3)

{
  AKRESULT AVar1;
  
  if (*(int *)(param_1 + 4) != -1) {
    return 0;
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    AVar1 = AK::SoundEngine::RegisterGameObj(param_2);
    if (AVar1 != 1) {
      return 0;
    }
  }
  else {
    AVar1 = AK::SoundEngine::RegisterGameObj(param_2,param_3);
    if (AVar1 != 1) {
      return 0;
    }
  }
  *(uint *)(param_1 + 4) = param_2;
  return 1;
}

// 00DEE6B0  FUN_00dee6b0  size=36  [callgraph]
void __fastcall FUN_00dee6b0(int param_1)

{
  if (*(uint *)(param_1 + 4) != 0xffffffff) {
    AK::SoundEngine::UnregisterGameObj(*(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00DEE700  FUN_00dee700  size=94  [callgraph]
void __thiscall FUN_00dee700(int param_1,float *param_2)

{
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  local_1c = *param_2 * -1.0;
  local_18 = param_2[1];
  local_14 = param_2[2];
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  AK::SoundEngine::SetPosition(*(uint *)(param_1 + 4),(AkSoundPosition *)&local_1c,0xffffffff);
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DEE780  FUN_00dee780  size=283  [callgraph]
void __thiscall FUN_00dee780(int param_1,int param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  AkAuxSendValue local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10 [4];
  
  local_10[3] = DAT_018e8764 ^ (uint)&local_38;
  if (4 < (int)param_3) {
    param_3 = 4;
  }
  iVar3 = 0;
  if (3 < (int)param_3) {
    local_30 = (int)&local_18 - param_2;
    local_38 = (int)&local_14 - param_2;
    local_28 = (int)&local_1c - param_2;
    local_34 = (int)local_10 - param_2;
    puVar2 = (undefined4 *)(param_2 + 8);
    do {
      uVar1 = puVar2[-1];
      *(undefined4 *)(local_24 + iVar3 * 8) = puVar2[-2];
      (&local_20)[iVar3 * 2] = uVar1;
      uVar1 = puVar2[1];
      *(undefined4 *)(local_24 + -param_2 + (int)puVar2) = *puVar2;
      *(undefined4 *)(((int)&local_20 - param_2) + (int)puVar2) = uVar1;
      uVar1 = puVar2[3];
      *(undefined4 *)(local_28 + (int)puVar2) = puVar2[2];
      *(undefined4 *)(local_30 + (int)puVar2) = uVar1;
      uVar1 = puVar2[5];
      *(undefined4 *)((int)puVar2 + local_38) = puVar2[4];
      *(undefined4 *)(local_34 + (int)puVar2) = uVar1;
      iVar3 = iVar3 + 4;
      puVar2 = puVar2 + 8;
    } while (iVar3 < (int)(param_3 - 3));
  }
  if (iVar3 < (int)param_3) {
    puVar2 = (undefined4 *)(param_2 + iVar3 * 8);
    iVar3 = param_3 - iVar3;
    do {
      uVar1 = *puVar2;
      *(undefined4 *)((int)puVar2 + ((int)&local_20 - param_2)) = puVar2[1];
      *(undefined4 *)((int)puVar2 + (int)(local_24 + -param_2)) = uVar1;
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_2c = param_1;
  AK::SoundEngine::SetGameObjectAuxSendValues(*(uint *)(param_1 + 4),local_24,param_3);
  __security_check_cookie(local_10[3] ^ (uint)&local_38);
  return;
}

// 00DEE920  FUN_00dee920  size=49  [callgraph]
undefined4 FUN_00dee920(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00dd7240();
  if (DAT_018cde3c != 0) {
    puVar1 = &DAT_01dd4a08;
    iVar2 = DAT_018cde3c;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}

// 00DEE960  FUN_00dee960  size=54  [callgraph]
undefined4 FUN_00dee960(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00dd7240();
  if (DAT_018cde40 != 0) {
    puVar1 = &DAT_01dd4808;
    iVar2 = DAT_018cde40;
    do {
      *puVar1 = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}

// 00DEEAE0  FUN_00deeae0  size=355  [callgraph]
undefined4 __thiscall
FUN_00deeae0(int param_1,short *param_2,int *param_3,int param_4,short *param_5)

{
  short sVar1;
  wchar_t wVar2;
  uint uVar3;
  short *psVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  
  if (param_2 == (short *)0x0) {
    return 0x1f;
  }
  psVar4 = param_2;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  uVar3 = (int)psVar4 - (int)(param_2 + 1) >> 1;
  if (0x103 < uVar3) {
    return 0x1f;
  }
  if (((param_3 == (int *)0x0) || (param_3[1] != 0xc9)) || (*param_3 != 0)) {
    FUN_00df4ee0(param_5,param_1 + 4,0x104);
  }
  else {
    *param_5 = 0;
  }
  if ((param_3 != (int *)0x0) && (param_4 == 0)) {
    if ((*param_3 == 0) && (param_3[1] == 0)) {
      psVar4 = (short *)(param_1 + 0x20c);
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      uVar3 = uVar3 + ((int)psVar4 - (param_1 + 0x20e) >> 1);
      if (0x103 < uVar3) {
        return 2;
      }
      FUN_00df4f40(param_5,(short *)(param_1 + 0x20c),0x104);
    }
    if ((char)param_3[4] != '\0') {
      pwVar5 = AK::StreamMgr::GetCurrentLanguage();
      pwVar7 = pwVar5 + 1;
      do {
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar2 != L'\0');
      iVar6 = (int)pwVar5 - (int)pwVar7 >> 1;
      if (iVar6 != 0) {
        uVar3 = uVar3 + 1 + iVar6;
        if (0x103 < uVar3) {
          return 2;
        }
        uVar8 = 0x104;
        pwVar7 = AK::StreamMgr::GetCurrentLanguage();
        FUN_00df4f40(param_5,pwVar7,uVar8);
        FUN_00df4f40(param_5,&DAT_016c5878,0x104);
      }
    }
  }
  psVar4 = param_5;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  if (0x103 < ((int)psVar4 - (int)(param_5 + 1) >> 1) + uVar3) {
    return 2;
  }
  FUN_00df4f40(param_5,param_2,0x104);
  return 1;
}

// 00DEEC50  FUN_00deec50  size=346  [callgraph]
undefined4 __thiscall
FUN_00deec50(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  short sVar1;
  wchar_t wVar2;
  short *psVar3;
  short *psVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  short *psVar9;
  undefined4 uVar10;
  
  if ((param_3 == (int *)0x0) || ((*param_3 != 0 && (*param_3 != 1)))) {
    return 2;
  }
  psVar3 = (short *)(param_1 + 4);
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  FUN_00df4ee0(param_5,(short *)(param_1 + 4),0x104);
  if (param_3[1] == 0) {
    psVar9 = (short *)(param_1 + 0x20c);
    iVar6 = param_1 + 0x20e;
    psVar4 = psVar9;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
  }
  else {
    psVar9 = (short *)(param_1 + 0x414);
    iVar6 = param_1 + 0x416;
    psVar4 = psVar9;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
  }
  uVar8 = ((int)psVar3 - (param_1 + 6) >> 1) + ((int)psVar4 - iVar6 >> 1);
  if (uVar8 < 0x104) {
    FUN_00df4f40(param_5,psVar9,0x104);
    if ((char)param_3[4] != '\0') {
      pwVar5 = AK::StreamMgr::GetCurrentLanguage();
      pwVar7 = pwVar5 + 1;
      do {
        wVar2 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar2 != L'\0');
      iVar6 = (int)pwVar5 - (int)pwVar7 >> 1;
      if (iVar6 != 0) {
        uVar8 = uVar8 + 1 + iVar6;
        if (0x103 < uVar8) {
          return 2;
        }
        uVar10 = 0x104;
        pwVar7 = AK::StreamMgr::GetCurrentLanguage();
        FUN_00df4f40(param_5,pwVar7,uVar10);
        FUN_00df4f40(param_5,&DAT_016c5878,0x104);
      }
    }
    if (uVar8 + 0xf < 0x105) {
      if (param_3[1] == 0) {
        pwVar7 = L"%u.bnk";
      }
      else {
        pwVar7 = L"%u.wem";
      }
      FUN_00decb20(param_5 + uVar8 * 2,pwVar7,param_2);
      return 1;
    }
  }
  return 2;
}

// 00DEEED0  FUN_00deeed0  size=196  [callgraph]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00deeed0(short *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uStack_28;
  rsize_t arStack_24 [3];
  uint uStack_18;
  
  uVar4 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  psVar5 = param_1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  uVar6 = (int)psVar5 - (int)(param_1 + 1) >> 1;
  iVar1 = uVar6 + 1;
  uStack_18 = 0xdeef0a;
  iVar3 = iVar1 * -2;
  psVar5 = (short *)(&stack0xffffffec + iVar3);
  psVar7 = param_1;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  if (((int)psVar7 - (int)(param_1 + 1) >> 1) + 1U <= uVar6) {
    psVar7 = param_1;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    uVar6 = ((int)psVar7 - (int)(param_1 + 1) >> 1) + 1;
  }
  *(uint *)((int)&uStack_18 + iVar3) = uVar6;
  *(short **)((int)arStack_24 + iVar3 + 8) = param_1;
  *(int *)((int)arStack_24 + iVar3 + 4) = iVar1;
  *(undefined1 **)((int)arStack_24 + iVar3) = &stack0xffffffec + iVar3;
  *(undefined4 *)((int)&uStack_28 + iVar3) = 0xdeef4e;
  _wcsncpy_s(*(wchar_t **)((int)arStack_24 + iVar3),*(rsize_t *)((int)arStack_24 + iVar3 + 4),
             *(wchar_t **)((int)arStack_24 + iVar3 + 8),*(rsize_t *)((int)&uStack_18 + iVar3));
  *(undefined2 *)(&stack0xffffffec + uVar6 * 2 + iVar3) = 0;
  sVar2 = *(short *)(&stack0xffffffec + iVar3);
  do {
    if (sVar2 == 0) {
LAB_00deef75:
      *(undefined1 **)((int)&uStack_18 + iVar3) = &stack0xffffffec + iVar3;
      *(undefined4 *)((int)arStack_24 + iVar3 + 8) = 0xdeef7b;
      AK::SoundEngine::GetIDFromString(*(wchar_t **)((int)&uStack_18 + iVar3));
      __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*psVar5 == 0x2e) {
      *psVar5 = 0;
      goto LAB_00deef75;
    }
    psVar5 = psVar5 + 1;
    sVar2 = *psVar5;
  } while( true );
}

// 00DEEFD0  FUN_00deefd0  size=66  [callgraph]
void FUN_00deefd0(short *param_1)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar4 = (int)psVar3 - (int)(param_1 + 1) >> 1;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = param_1[uVar5];
      if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
        param_1[uVar5] = uVar2 + 0x20;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return;
}

// 00DEF020  FUN_00def020  size=275  [callgraph]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_00def020(int *param_1,short *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined4 uStack_34;
  undefined4 uStack_30;
  rsize_t arStack_2c [3];
  uint uStack_20;
  
  uVar4 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  psVar6 = param_2;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  uVar5 = (int)psVar6 - (int)(param_2 + 1) >> 1;
  iVar12 = uVar5 + 1;
  uStack_20 = 0xdef05a;
  iVar3 = iVar12 * -2;
  psVar6 = param_2;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  if (((int)psVar6 - (int)(param_2 + 1) >> 1) + 1U <= uVar5) {
    psVar6 = param_2;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    uVar5 = ((int)psVar6 - (int)(param_2 + 1) >> 1) + 1;
  }
  *(uint *)((int)&uStack_20 + iVar3) = uVar5;
  *(short **)((int)arStack_2c + iVar3 + 8) = param_2;
  *(int *)((int)arStack_2c + iVar3 + 4) = iVar12;
  *(undefined1 **)((int)arStack_2c + iVar3) = &stack0xffffffe4 + iVar3;
  *(undefined4 *)((int)&uStack_30 + iVar3) = 0xdef09f;
  _wcsncpy_s(*(wchar_t **)((int)arStack_2c + iVar3),*(rsize_t *)((int)arStack_2c + iVar3 + 4),
             *(wchar_t **)((int)arStack_2c + iVar3 + 8),*(rsize_t *)((int)&uStack_20 + iVar3));
  *(undefined1 **)((int)&uStack_30 + iVar3) = &stack0xffffffe4 + iVar3;
  *(undefined2 *)(&stack0xffffffe4 + uVar5 * 2 + iVar3) = 0;
  *(undefined4 *)((int)&uStack_34 + iVar3) = 0xdef0ab;
  FUN_00deefd0();
  iVar11 = 0;
  iVar12 = *param_1 + -1;
  do {
    iVar7 = (iVar12 - iVar11) / 2 + iVar11;
    puVar8 = (ushort *)(param_1[iVar7 * 2 + 1] + (int)param_1);
    puVar10 = (ushort *)(&stack0xffffffe4 + iVar3);
    do {
      uVar2 = *puVar8;
      bVar13 = uVar2 < *puVar10;
      if (uVar2 != *puVar10) {
LAB_00def0f6:
        iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00def0fb;
      }
      if (uVar2 == 0) break;
      uVar2 = puVar8[1];
      bVar13 = uVar2 < puVar10[1];
      if (uVar2 != puVar10[1]) goto LAB_00def0f6;
      puVar8 = puVar8 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar2 != 0);
    iVar9 = 0;
LAB_00def0fb:
    if (iVar9 == 0) break;
    if (iVar9 < 1) {
      iVar11 = iVar7 + 1;
    }
    else {
      iVar12 = iVar7 + -1;
    }
  } while (iVar11 <= iVar12);
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

// 00DEF1C0  FUN_00def1c0  size=39  [callgraph]
void __fastcall FUN_00def1c0(IAkFileLocationResolver *param_1)

{
  IAkFileLocationResolver *pIVar1;
  
  pIVar1 = AK::StreamMgr::GetFileLocationResolver();
  if (pIVar1 == param_1) {
    AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)0x0);
  }
  AK::StreamMgr::DestroyDevice(*(ulong *)(param_1 + 0x624));
  return;
}

// 00DEF580  FUN_00def580  size=68  [callgraph]
void __fastcall FUN_00def580(IAkFileLocationResolver *param_1)

{
  IAkFileLocationResolver *pIVar1;
  
  pIVar1 = AK::StreamMgr::GetFileLocationResolver();
  if (pIVar1 == param_1) {
    AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)0x0);
  }
  AK::StreamMgr::DestroyDevice(*(ulong *)(param_1 + 0x624));
  if (DAT_018cde44 != -1) {
    AK::MemoryMgr::DestroyPool(DAT_018cde44);
    DAT_018cde44 = -1;
  }
  return;
}

// 00DEF970  FUN_00def970  size=9  [callgraph]
void FUN_00def970(void)

{
  AK::SoundEngine::StopAll(0xffffffff);
  return;
}

// 00DEF980  FUN_00def980  size=118  [callgraph]
void FUN_00def980(void)

{
  int iVar1;
  
  if (DAT_01dd4c58 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4c40);
  }
  DAT_01dd4c00 = 1;
  if (DAT_01dd4c58 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4c40);
  }
  AK::SoundEngine::StopAll(0xffffffff);
  do {
    AK::SoundEngine::RenderAudio();
    if (DAT_01dd4c58 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4c40);
    }
    iVar1 = DAT_01dd4c00;
    if (DAT_01dd4c58 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4c40);
    }
  } while (iVar1 != 0);
  return;
}

// 00DEFA60  FUN_00defa60  size=49  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00defa60(int param_1)

{
  if (param_1 == -1) {
    param_1 = FUN_00df7f70();
  }
  _DAT_01dd4c0c = param_1;
  if (param_1 != 0) {
    AK::StreamMgr::SetCurrentLanguage(L"English(US)");
    return;
  }
  AK::StreamMgr::SetCurrentLanguage(L"Japanese");
  return;
}

// 00DEFAC0  FUN_00defac0  size=97  [callgraph]
float10 __thiscall FUN_00defac0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00dee320(param_2,param_1);
  if (DAT_01dd4c34 == (int *)0x0) {
    if (((DAT_01dd4c2c != 0) && (-1 < iVar1)) && (iVar1 < *(int *)(DAT_01dd4c2c + 4))) {
      return (float10)*(float *)(DAT_01dd4c30 + 4 + iVar1 * 8);
    }
  }
  else if ((-1 < iVar1) && (iVar1 < *DAT_01dd4c34)) {
    return (float10)*(float *)(DAT_01dd4c30 + 4 + iVar1 * 8);
  }
  return (float10)0.0;
}

// 00DEFB40  thunk_FUN_00dede80  size=5  [callgraph]
bool thunk_FUN_00dede80(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = &DAT_016c577c;
  pbVar2 = param_2;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00dedeb0:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00dedeb5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00dedeb0;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00dedeb5:
  if (iVar3 == 0) {
    *param_1 = 0;
    return true;
  }
  uVar4 = AK::SoundEngine::GetIDFromString((char *)param_2);
  *param_1 = uVar4;
  return uVar4 != 0;
}

// 00DEFBA0  FUN_00defba0  size=65  [callgraph]
undefined4 FUN_00defba0(float *param_1,char *param_2)

{
  AKRESULT AVar1;
  RTPCValue_type local_8;
  float local_4;
  
  local_8 = 0;
  AVar1 = AK::SoundEngine::Query::GetRTPCValue(param_2,0xffffffff,&local_4,&local_8);
  if (AVar1 != 1) {
    return 0;
  }
  *param_1 = local_4;
  return 1;
}

// 00DEFC30  FUN_00defc30  size=1  [callgraph]
void FUN_00defc30(void)

{
  return;
}

// 00DEFC90  FUN_00defc90  size=150  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00defc90(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  do {
    uVar3 = DAT_01dd4bec;
    uVar2 = DAT_01dd4bec & 0xffffff00;
    LOCK();
    bVar4 = uVar2 != DAT_01dd4bec;
    uVar2 = ~uVar2 & 0x10000000;
    if (bVar4) {
      uVar2 = DAT_01dd4bec;
    }
    DAT_01dd4bec = uVar2;
    UNLOCK();
  } while (bVar4);
  uVar2 = uVar3 >> 8 & 0xfffff;
  if (DAT_01dd4c14 < uVar2) {
    DAT_01dd4c14 = uVar2;
  }
  _DAT_01dd4c10 = uVar2;
  if (uVar2 < DAT_01dd4bf0) {
    iVar1 = *(int *)(&DAT_01dd4bf4 + (uVar3 >> 0x1c) * 4);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        (**(code **)(*(int *)(iVar1 + 4 + uVar3 * 4) + 4))();
        uVar3 = uVar3 + *(int *)(iVar1 + uVar3 * 4);
      } while (uVar3 < uVar2);
    }
  }
  return;
}

// 00DEFD30  FUN_00defd30  size=103  [callgraph]
void FUN_00defd30(void)

{
  bool bVar1;
  uint uVar2;
  
  InterlockedDecrement((LONG *)&DAT_01dd4bec);
  uVar2 = DAT_01dd4bec >> 8 & 0xfffff;
  bVar1 = false;
  if (DAT_01dd4bf0 - 0x80U <= uVar2) {
    do {
      if (!bVar1) {
        FUN_00dd5650(&DAT_016c5908,uVar2 * 4,DAT_01dd4bf0 * 4);
        bVar1 = true;
      }
      uVar2 = DAT_01dd4bec >> 8 & 0xfffff;
    } while (DAT_01dd4bf0 - 0x80U <= uVar2);
  }
  return;
}

// 00DEFDF0  Hw::Wwise::Command::ListenerSpatializationWork::vf04  size=92  [class]
void __fastcall Hw::Wwise::Command::ListenerSpatializationWork::vf04(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_1c = local_20;
  local_18 = local_20;
  local_14 = local_20;
  local_10 = local_20;
  local_c = local_20;
  local_8 = local_20;
  AK::SoundEngine::SetListenerSpatialization
            (*(ulong *)(param_1 + 4),*(int *)(param_1 + 8) != 0,(AkSpeakerVolumes *)&local_1c);
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

// 00DEFE50  Hw::Wwise::Command::StateWork::vf04  size=17  [class]
void __fastcall Hw::Wwise::Command::StateWork::vf04(int param_1)

{
  AK::SoundEngine::SetState(*(ulong *)(param_1 + 4),*(ulong *)(param_1 + 8));
  return;
}

// 00DEFFF0  FUN_00defff0  size=115  [callgraph]
int FUN_00defff0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  iVar2 = DAT_01dd4c18;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    uVar6 = 0;
    if (*(uint *)(iVar2 + 0xc) != 0) {
      puVar7 = (undefined4 *)(*(int *)(iVar2 + 8) + 4);
      do {
        pbVar3 = (byte *)*puVar7;
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00df0036:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00df003b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00df0036;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00df003b:
        if (iVar4 == 0) {
          iVar4 = *(int *)(*(int *)(iVar2 + 8) + uVar6 * 0x10);
          if (iVar4 != 0) {
            return iVar4;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar6 < *(uint *)(iVar2 + 0xc));
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

// 00DF00F0  FUN_00df00f0  size=69  [callgraph]
int FUN_00df00f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = DAT_01dd4c18;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    if (*(uint *)(iVar2 + 0xc) != 0) {
      piVar4 = *(int **)(iVar2 + 8);
      do {
        if (*piVar4 == param_1) {
          iVar1 = (*(int **)(iVar2 + 8))[uVar3 * 4 + 1];
          if (iVar1 != 0) {
            return iVar1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(uint *)(iVar2 + 0xc));
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

// 00DF0EC0  FUN_00df0ec0  size=42  [callgraph]
void __fastcall FUN_00df0ec0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00DF0EF0  FUN_00df0ef0  size=46  [callgraph]
undefined4 __fastcall FUN_00df0ef0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}

// 00DF0F20  FUN_00df0f20  size=42  [callgraph]
void __fastcall FUN_00df0f20(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00DF0F50  FUN_00df0f50  size=263  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df0f50(void)

{
  AKRESULT AVar1;
  AkMusicSettings local_4 [4];
  
  AK::SoundEngine::GetDefaultInitSettings((AkInitSettings *)&DAT_01dd4bc0);
  _DAT_01dd4bd0 = 0x3f800000;
  _DAT_01dd4bcc = 0x300000;
  AK::SoundEngine::GetDefaultPlatformInitSettings((AkPlatformInitSettings *)&DAT_01dd4b80);
  _DAT_01dd4ba0 = 0x3f4ccccd;
  _DAT_01dd4b9c = 0x3c0000;
  AVar1 = AK::SoundEngine::Init
                    ((AkInitSettings *)&DAT_01dd4bc0,(AkPlatformInitSettings *)&DAT_01dd4b80);
  if (AVar1 == 1) {
    AK::MusicEngine::GetDefaultInitSettings(local_4);
    AVar1 = AK::MusicEngine::Init(local_4);
    if (AVar1 == 1) {
      FUN_00deda10();
      AK::SoundEngine::RegisterPlugin(2,0,100,FUN_01393720,FUN_01393a50);
      AK::SoundEngine::RegisterPlugin(2,0,0x66,FUN_01413940,FUN_01413d40);
      AK::SoundEngine::RegisterPlugin(2,0,0x65,FUN_01392eb0,FUN_01392e90);
      FUN_00dedc50();
      AK::SoundEngine::RegisterPlugin(3,0,0x7f,FUN_013514b0,FUN_01351df0);
      FUN_00dedca0();
      AK::SoundEngine::RegisterCodec(0,4,FUN_01418440,FUN_01418e00);
      FUN_00dedd30();
      AK::Monitor::SetLocalOutput
                (2,(_func_void_ErrorCode_wchar_t_ptr_ErrorLevel_ulong_uint *)&DAT_00dedfe0);
      return 1;
    }
  }
  return 0;
}

// 00DF2810  Hw::Wwise::StateWatcher  size=182  [class]
undefined4 Hw::Wwise::StateWatcher(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_01dd4e68 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  iVar1 = DAT_01dd4e68;
  uVar3 = 0;
  if (DAT_018cde3c != 0) {
    piVar2 = &DAT_01dd4a00;
    do {
      if (*piVar2 == param_1) {
        piVar2[2] = piVar2[2] + 1;
        goto LAB_00df28af;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar3 < DAT_018cde3c);
  }
  uVar3 = 0;
  if (DAT_018cde3c != 0) {
    piVar2 = &DAT_01dd4a00;
    do {
      if (*piVar2 == 0) {
        *piVar2 = param_1;
        piVar2[1] = 0;
        piVar2[2] = 1;
LAB_00df28af:
        if (iVar1 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
        }
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar3 < DAT_018cde3c);
  }
  FUN_00dd5650(&DAT_016c5b34);
  if (DAT_01dd4e68 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  return 0;
}

// 00DF28D0  FUN_00df28d0  size=126  [between]
undefined4 FUN_00df28d0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (DAT_01dd4e68 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
    uVar2 = 0;
    if (DAT_018cde3c != 0) {
      piVar1 = &DAT_01dd4a00;
      do {
        if ((*piVar1 == param_2) && (piVar1[1] != 0)) {
          *param_1 = piVar1[1];
          if (DAT_01dd4e68 != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
          }
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (uVar2 < DAT_018cde3c);
    }
    if (DAT_01dd4e68 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
  }
  return 0;
}

// 00DF2950  FUN_00df2950  size=102  [between]
void FUN_00df2950(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (DAT_01dd4e68 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
    uVar3 = 0;
    if (DAT_018cde3c != 0) {
      piVar2 = &DAT_01dd4a00;
      do {
        if (*piVar2 == param_1) {
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *piVar2 = 0;
            piVar2[1] = 0;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (uVar3 < DAT_018cde3c);
    }
    if (DAT_01dd4e68 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
  }
  return;
}

// 00DF2AB0  FUN_00df2ab0  size=72  [between]
ulong FUN_00df2ab0(char *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar2 = FUN_00dee320(uVar1);
    if (iVar2 == -1) {
      return 0;
    }
  }
  else if ((param_2 == 2) && (iVar2 = FUN_00defff0(param_1), iVar2 == 0)) {
    return 0;
  }
  return uVar1;
}

// 00DF2B00  Hw::Wwise::StateWatcher  size=5  [class]
undefined4 Hw::Wwise::StateWatcher(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_01dd4e68 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  iVar1 = DAT_01dd4e68;
  uVar3 = 0;
  if (DAT_018cde3c != 0) {
    piVar2 = &DAT_01dd4a00;
    do {
      if (*piVar2 == param_1) {
        piVar2[2] = piVar2[2] + 1;
        goto LAB_00df28af;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar3 < DAT_018cde3c);
  }
  uVar3 = 0;
  if (DAT_018cde3c != 0) {
    piVar2 = &DAT_01dd4a00;
    do {
      if (*piVar2 == 0) {
        *piVar2 = param_1;
        piVar2[1] = 0;
        piVar2[2] = 1;
LAB_00df28af:
        if (iVar1 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
        }
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar3 < DAT_018cde3c);
  }
  FUN_00dd5650(&DAT_016c5b34);
  if (DAT_01dd4e68 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  return 0;
}

// 00DF2B10  thunk_FUN_00df28d0  size=5  [between]
undefined4 thunk_FUN_00df28d0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (DAT_01dd4e68 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
    uVar2 = 0;
    if (DAT_018cde3c != 0) {
      piVar1 = &DAT_01dd4a00;
      do {
        if ((*piVar1 == param_2) && (piVar1[1] != 0)) {
          *param_1 = piVar1[1];
          if (DAT_01dd4e68 != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
          }
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (uVar2 < DAT_018cde3c);
    }
    if (DAT_01dd4e68 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
  }
  return 0;
}

// 00DF2B20  thunk_FUN_00df2950  size=5  [between]
void thunk_FUN_00df2950(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (DAT_01dd4e68 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
    uVar3 = 0;
    if (DAT_018cde3c != 0) {
      piVar2 = &DAT_01dd4a00;
      do {
        if (*piVar2 == param_1) {
          piVar1 = piVar2 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *piVar2 = 0;
            piVar2[1] = 0;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (uVar3 < DAT_018cde3c);
    }
    if (DAT_01dd4e68 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
    }
  }
  return;
}

// 00DF2B70  FUN_00df2b70  size=77  [between]
undefined4 FUN_00df2b70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[7];
  uVar1 = param_1[1];
  if (iVar3 != 0) {
    iVar2 = (**(code **)(DAT_01dd4c68 + 0x40))(0xc,*param_1,0x10,iVar3,"FactoryFixed");
    if (iVar2 != 0) {
      iVar3 = FUN_00df6180(uVar1,iVar3);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00DF2BC0  FUN_00df2bc0  size=61  [between]
void FUN_00df2bc0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    AK::SoundEngine::UnloadBank(param_1[1],(long *)0x0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_00df62c0(*param_1);
  FUN_00dd4920(param_1);
  return;
}

// 00DF2EE0  Hw::Wwise::Command::ListenerPositionWork::vf04  size=25  [class]
void __fastcall Hw::Wwise::Command::ListenerPositionWork::vf04(int param_1)

{
  FUN_00df2180(*(undefined4 *)(param_1 + 4),param_1 + 8,param_1 + 0x14,param_1 + 0x20);
  return;
}

// 00DF30A0  FUN_00df30a0  size=78  [between]
undefined4 FUN_00df30a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if (iVar3 != 0) {
    iVar2 = (**(code **)(DAT_01dd4d18 + 0x40))
                      (0x18,*(undefined4 *)(param_1 + 0x10),0x10,iVar3,"FactoryFixed");
    if (iVar2 != 0) {
      iVar3 = FUN_00df63b0(uVar1,iVar3);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00DF3140  FUN_00df3140  size=92  [between]
undefined4 FUN_00df3140(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (uVar2 < DAT_01dd4d78) {
    if ((((*(uint *)(DAT_01dd4d88 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (iVar1 = *(int *)(DAT_01dd4d88 + 4 + uVar2 * 8), iVar1 != 0)) {
      switch(*(undefined4 *)(iVar1 + 4)) {
      case 0:
      case 1:
        return 0;
      case 2:
      case 3:
        break;
      default:
        return 0xffffffff;
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return 1;
}

// 00DF31B0  FUN_00df31b0  size=123  [between]
uint FUN_00df31b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  AKRESULT AVar3;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (uVar2 < DAT_01dd4d78) {
    if ((((*(uint *)(DAT_01dd4d88 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (iVar1 = *(int *)(DAT_01dd4d88 + 4 + uVar2 * 8), iVar1 != 0)) {
      switch(*(undefined4 *)(iVar1 + 4)) {
      case 0:
        return 0;
      case 1:
        if ((*(byte *)(iVar1 + 0x10) & 1) != 0) {
          AVar3 = AK::SoundEngine::GetSourcePlayPosition
                            (*(ulong *)(iVar1 + 0x14),(long *)&param_1,false);
          return ~-(uint)(AVar3 != 1) & param_1;
        }
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return 0xffffffff;
}

// 00DF32B0  FUN_00df32b0  size=78  [between]
undefined4 FUN_00df32b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 != 0) {
    iVar2 = (**(code **)(DAT_01dd4db8 + 0x40))
                      (0xc,*(undefined4 *)(param_1 + 8),0x10,iVar3,"FactoryFixed");
    if (iVar2 != 0) {
      iVar3 = FUN_00df65f0(uVar1,iVar3);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00DF3350  FUN_00df3350  size=174  [between]
void FUN_00df3350(uint param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    local_1c = *param_2 * -1.0;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    AK::SoundEngine::SetPosition(*(uint *)(iVar1 + 4),(AkSoundPosition *)&local_1c,0xffffffff);
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DF3400  FUN_00df3400  size=174  [between]
void FUN_00df3400(uint param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    local_1c = *param_2 * -1.0;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    AK::SoundEngine::SetPosition(*(uint *)(iVar1 + 4),(AkSoundPosition *)&local_1c,0xffffffff);
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DF34B0  FUN_00df34b0  size=86  [between]
void FUN_00df34b0(uint param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    AK::SoundEngine::SetAttenuationScalingFactor(*(uint *)(iVar1 + 4),param_2);
  }
  return;
}

// 00DF3570  FUN_00df3570  size=86  [between]
void FUN_00df3570(uint param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    AK::SoundEngine::SetGameObjectOutputBusVolume(*(uint *)(iVar1 + 4),param_2);
  }
  return;
}

// 00DF35D0  FUN_00df35d0  size=95  [between]
void FUN_00df35d0(uint param_1,ulong param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    AK::SoundEngine::SetRTPCValue(param_2,param_3,*(uint *)(iVar1 + 4),0,4);
  }
  return;
}

// 00DF3630  FUN_00df3630  size=88  [between]
void FUN_00df3630(uint param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    AK::SoundEngine::SetSwitch(param_2,param_3,*(uint *)(iVar1 + 4));
  }
  return;
}

// 00DF36B0  FUN_00df36b0  size=72  [between]
undefined4 FUN_00df36b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (uVar2 < DAT_01dd4e18) {
    if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return 0xffffffff;
}

// 00DF3740  FUN_00df3740  size=269  [between]
undefined4 FUN_00df3740(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_01dd4e88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  uVar1 = (int)param_2 >> 8 & 0xffff;
  if (uVar1 < DAT_01dd4e18) {
    if ((((*(uint *)(DAT_01dd4e28 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) &&
       (iVar3 = *(int *)(DAT_01dd4e28 + 4 + uVar1 * 8), iVar3 != 0)) {
      iVar3 = *(int *)(iVar3 + 4);
      goto LAB_00df3789;
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  iVar3 = -1;
LAB_00df3789:
  if (DAT_018cde40 != 0) {
    piVar2 = &DAT_01dd4800;
    uVar1 = 0;
    do {
      if ((piVar2[1] == param_1) && (*piVar2 == iVar3)) {
        piVar2[3] = piVar2[3] + 1;
        goto LAB_00df3833;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < DAT_018cde40);
  }
  if (DAT_018cde40 != 0) {
    piVar2 = &DAT_01dd4800;
    uVar1 = 0;
    do {
      if (piVar2[1] == 0) {
        piVar2[1] = param_1;
        piVar2[2] = 0;
        *piVar2 = iVar3;
        piVar2[3] = 1;
LAB_00df3833:
        if (DAT_01dd4e88 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
        }
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < DAT_018cde40);
  }
  FUN_00dd5650(&DAT_016c5b88);
  if (DAT_01dd4e88 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  return 0;
}

// 00DF3850  FUN_00df3850  size=207  [between]
undefined4 FUN_00df3850(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_01dd4e88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  uVar1 = (int)param_3 >> 8 & 0xffff;
  if (uVar1 < DAT_01dd4e18) {
    if ((((*(uint *)(DAT_01dd4e28 + uVar1 * 8) ^ param_3) & 0xffffff00) == 0) &&
       (iVar3 = *(int *)(DAT_01dd4e28 + 4 + uVar1 * 8), iVar3 != 0)) {
      iVar3 = *(int *)(iVar3 + 4);
      goto LAB_00df3898;
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  iVar3 = -1;
LAB_00df3898:
  uVar1 = 0;
  if (DAT_018cde40 != 0) {
    piVar2 = &DAT_01dd4800;
    do {
      if ((piVar2[1] == param_2) && (*piVar2 == iVar3)) {
        *param_1 = piVar2[2];
        if (DAT_01dd4e88 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
        }
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < DAT_018cde40);
  }
  if (DAT_01dd4e88 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  return 0;
}

// 00DF39F0  FUN_00df39f0  size=21  [between]
void FUN_00df39f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ObjectReleaseWork::ObjectReleaseWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  FUN_00defd30();
  return;
}

// 00DF3A30  Hw::Wwise::setObjectPosition  size=124  [class]
/* WARNING: Removing unreachable block (ram,0x00df3a76) */

void Hw::Wwise::setObjectPosition(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = Command::ObjectPositionWork::ObjectPositionWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = *param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_2[1];
    *(undefined4 *)(iVar1 + 0x10) = param_2[2];
  }
  FUN_00defd30();
  return;
}

// 00DF3AB0  FUN_00df3ab0  size=28  [between]
void FUN_00df3ab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ScalingFactorWork::ScalingFactorWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  FUN_00defd30();
  return;
}

// 00DF3AD0  FUN_00df3ad0  size=69  [between]
void FUN_00df3ad0(undefined4 param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ObjectEnvironmentValuesWork::ObjectEnvironmentValuesWork();
  if (iVar1 != 0) {
    if (4 < param_3) {
      param_3 = 4;
    }
    *(undefined4 *)(iVar1 + 4) = param_1;
    FID_conflict__memcpy((void *)(iVar1 + 8),param_2,param_3 * 8);
    *(int *)(iVar1 + 0x28) = param_3;
  }
  FUN_00defd30();
  return;
}

// 00DF3B20  FUN_00df3b20  size=28  [between]
void FUN_00df3b20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::ObjectEnvironmentDryLevelWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  FUN_00defd30();
  return;
}

// 00DF3B40  FUN_00df3b40  size=28  [between]
void FUN_00df3b40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ReleaseEventWork::ReleaseEventWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  FUN_00defd30();
  return;
}

// 00DF3B60  FUN_00df3b60  size=21  [between]
void FUN_00df3b60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::PostEventWork::PostEventWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
  }
  FUN_00defd30();
  return;
}

// 00DF3B80  FUN_00df3b80  size=28  [between]
void FUN_00df3b80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::StopEventWork::StopEventWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  FUN_00defd30();
  return;
}

// 00DF3BF0  thunk_FUN_00df3140  size=5  [between]
undefined4 thunk_FUN_00df3140(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (uVar2 < DAT_01dd4d78) {
    if ((((*(uint *)(DAT_01dd4d88 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (iVar1 = *(int *)(DAT_01dd4d88 + 4 + uVar2 * 8), iVar1 != 0)) {
      switch(*(undefined4 *)(iVar1 + 4)) {
      case 0:
      case 1:
        return 0;
      case 2:
      case 3:
        break;
      default:
        return 0xffffffff;
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return 1;
}

// 00DF3C00  thunk_FUN_00df31b0  size=5  [between]
uint thunk_FUN_00df31b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  AKRESULT AVar3;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (uVar2 < DAT_01dd4d78) {
    if ((((*(uint *)(DAT_01dd4d88 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (iVar1 = *(int *)(DAT_01dd4d88 + 4 + uVar2 * 8), iVar1 != 0)) {
      switch(*(undefined4 *)(iVar1 + 4)) {
      case 0:
        return 0;
      case 1:
        if ((*(byte *)(iVar1 + 0x10) & 1) != 0) {
          AVar3 = AK::SoundEngine::GetSourcePlayPosition
                            (*(ulong *)(iVar1 + 0x14),(long *)&param_1,false);
          return ~-(uint)(AVar3 != 1) & param_1;
        }
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return 0xffffffff;
}

// 00DF3C10  FUN_00df3c10  size=48  [between]
void FUN_00df3c10(undefined4 param_1,char *param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_2);
  iVar2 = Hw::Wwise::Command::ObjectRTPCValueWork::ObjectRTPCValueWork();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    *(undefined4 *)(iVar2 + 4) = param_1;
    *(ulong *)(iVar2 + 8) = uVar1;
  }
  FUN_00defd30();
  return;
}

// 00DF3C40  FUN_00df3c40  size=35  [between]
void FUN_00df3c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ObjectRTPCValueWork::ObjectRTPCValueWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  FUN_00defd30();
  return;
}

// 00DF3CD0  FUN_00df3cd0  size=48  [between]
void FUN_00df3cd0(char *param_1,undefined4 param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_1);
  iVar2 = Hw::Wwise::Command::ObjectRTPCValueWork::ObjectRTPCValueWork();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 0xc) = param_2;
    *(ulong *)(iVar2 + 8) = uVar1;
  }
  FUN_00defd30();
  return;
}

// 00DF3D00  FUN_00df3d00  size=35  [between]
void FUN_00df3d00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ObjectRTPCValueWork::ObjectRTPCValueWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = param_1;
  }
  FUN_00defd30();
  return;
}

// 00DF3D30  FUN_00df3d30  size=22  [between]
void FUN_00df3d30(char *param_1)

{
  ulong uVar1;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_1);
  FUN_00df3740(uVar1,0);
  return;
}

// 00DF3D50  FUN_00df3d50  size=27  [between]
void FUN_00df3d50(undefined4 param_1,char *param_2)

{
  ulong uVar1;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_2);
  FUN_00df3850(param_1,uVar1,0);
  return;
}

// 00DF3D90  FUN_00df3d90  size=35  [between]
void FUN_00df3d90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ObjectSwitchWork::ObjectSwitchWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
  }
  FUN_00defd30();
  return;
}

// 00DF3E00  FUN_00df3e00  size=84  [between]
void FUN_00df3e00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = Hw::Wwise::Command::ListenerPositionWork::ListenerPositionWork();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 8) = *param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_2[1];
    *(undefined4 *)(iVar1 + 0x10) = param_2[2];
    *(undefined4 *)(iVar1 + 0x14) = *param_3;
    *(undefined4 *)(iVar1 + 0x18) = param_3[1];
    *(undefined4 *)(iVar1 + 0x1c) = param_3[2];
    *(undefined4 *)(iVar1 + 0x20) = *param_4;
    *(undefined4 *)(iVar1 + 0x24) = param_4[1];
    *(undefined4 *)(iVar1 + 0x28) = param_4[2];
  }
  FUN_00defd30();
  return;
}

// 00DF3F10  FUN_00df3f10  size=109  [between]
int * FUN_00df3f10(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dd2bc0();
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    iVar2 = FUN_00df6200(piVar1);
    if (iVar2 != 0) {
      if (*piVar1 == 0) {
        *piVar1 = iVar2;
        if (piVar1[1] != 0) {
          FUN_00df2bc0(piVar1);
          return (int *)0x0;
        }
        return piVar1;
      }
      FUN_00df62c0(iVar2);
    }
    FUN_00df62c0(*piVar1);
    FUN_00dd4920(piVar1);
  }
  return (int *)0x0;
}

// 00DF3F80  Hw::Wwise::Command::ObjectListenerMaskWork::vf04  size=84  [class]
void __fastcall Hw::Wwise::Command::ObjectListenerMaskWork::vf04(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)*(uint *)(param_1 + 4) >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ *(uint *)(param_1 + 4)) & 0xffffff00) == 0) &&
     (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
    AK::SoundEngine::SetActiveListeners(*(uint *)(iVar1 + 4),*(ulong *)(param_1 + 8));
  }
  return;
}

// 00DF3FE0  Hw::Wwise::Command::ObjectPositionWork::vf04  size=17  [class]
void __fastcall Hw::Wwise::Command::ObjectPositionWork::vf04(int param_1)

{
  FUN_00df3400(*(undefined4 *)(param_1 + 4),param_1 + 8);
  return;
}

// 00DF4000  Hw::Wwise::Command::ScalingFactorWork::vf04  size=20  [class]
void __fastcall Hw::Wwise::Command::ScalingFactorWork::vf04(int param_1)

{
  FUN_00df34b0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

// 00DF4020  Hw::Wwise::Command::ObjectEnvironmentValuesWork::vf04  size=85  [class]
void __fastcall Hw::Wwise::Command::ObjectEnvironmentValuesWork::vf04(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(uint *)(param_1 + 4) >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar1) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar1 * 8) ^ *(uint *)(param_1 + 4)) & 0xffffff00) == 0) &&
     (*(int *)(DAT_01dd4e28 + 4 + uVar1 * 8) != 0)) {
    FUN_00dee780(param_1 + 8,*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

// 00DF4080  Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::vf04  size=20  [class]
void __fastcall Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::vf04(int param_1)

{
  FUN_00df3570(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

// 00DF40A0  Hw::Wwise::Command::ObjectRTPCValueWork::vf04  size=50  [class]
void __fastcall Hw::Wwise::Command::ObjectRTPCValueWork::vf04(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    AK::SoundEngine::SetRTPCValue(*(ulong *)(param_1 + 8),*(float *)(param_1 + 0xc),0xffffffff,0,4);
    return;
  }
  FUN_00df35d0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*(float *)(param_1 + 0xc));
  return;
}

// 00DF40E0  Hw::Wwise::Command::ObjectSwitchWork::vf04  size=21  [class]
void __fastcall Hw::Wwise::Command::ObjectSwitchWork::vf04(int param_1)

{
  FUN_00df3630(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  return;
}

// 00DF4100  Hw::Wwise::Command::ObjectOutputMaskWork::vf04  size=31  [class]
void __fastcall Hw::Wwise::Command::ObjectOutputMaskWork::vf04(int param_1)

{
  if (DAT_01dd4e18 <= (*(int *)(param_1 + 4) >> 8 & 0xffffU)) {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return;
}

// 00DF4120  FUN_00df4120  size=134  [between]
void FUN_00df4120(uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4d78 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4d88 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (puVar1 = *(undefined4 **)(DAT_01dd4d88 + 4 + uVar2 * 8), puVar1 != (undefined4 *)0x0)) {
    if (puVar1[5] != 0) {
      AK::SoundEngine::CancelEventCallback(puVar1[5]);
      if (param_2 != 0) {
        AK::SoundEngine::StopPlayingID(puVar1[5],0,4);
      }
      puVar1[5] = 0;
    }
    FUN_00df64f0(*puVar1);
    FUN_00dd4920(puVar1);
  }
  return;
}

// 00DF41B0  FUN_00df41b0  size=127  [between]
undefined4 * FUN_00df41b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00df73b0();
  if (puVar1 != (undefined4 *)0x0) {
    if (((puVar1[3] == 0) && (puVar1[5] == 0)) && (puVar1[3] = param_1, param_1 != 0)) {
      puVar1[2] = param_2;
      puVar1[4] = param_3;
      return puVar1;
    }
    puVar1[1] = 3;
    if (puVar1[5] != 0) {
      AK::SoundEngine::CancelEventCallback(puVar1[5]);
      AK::SoundEngine::StopPlayingID(puVar1[5],0,4);
      puVar1[5] = 0;
    }
    FUN_00df64f0(*puVar1);
    FUN_00dd4920(puVar1);
  }
  return (undefined4 *)0x0;
}

// 00DF4230  FUN_00df4230  size=159  [between]
undefined4 __fastcall FUN_00df4230(void *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)((int)param_1 + 0x14) != 0) {
    return 0;
  }
  uVar2 = (int)*(uint *)((int)param_1 + 8) >> 8 & 0xffff;
  if (uVar2 < DAT_01dd4e18) {
    if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ *(uint *)((int)param_1 + 8)) & 0xffffff00) == 0) &&
       (iVar1 = *(int *)(DAT_01dd4e28 + 4 + uVar2 * 8), iVar1 != 0)) {
      uVar2 = *(uint *)(iVar1 + 4);
      goto LAB_00df425e;
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  uVar2 = 0xffffffff;
LAB_00df425e:
  if (uVar2 != 0xffffffff) {
    uVar3 = 5;
    if ((*(byte *)((int)param_1 + 0x10) & 1) != 0) {
      uVar3 = 0x10005;
    }
    uVar3 = AK::SoundEngine::PostEvent
                      (*(ulong *)((int)param_1 + 0xc),uVar2,uVar3,
                       (_func_void_AkCallbackType_AkCallbackInfo_ptr *)&LAB_00dee2a0,param_1,0,
                       (AkExternalSourceInfo *)0x0,0);
    *(ulong *)((int)param_1 + 0x14) = uVar3;
    if (uVar3 != 0) {
      *(undefined4 *)((int)param_1 + 4) = 1;
      return 1;
    }
  }
  *(undefined4 *)((int)param_1 + 4) = 3;
  return 0;
}

// 00DF42D0  FUN_00df42d0  size=98  [between]
undefined4 __thiscall FUN_00df42d0(int param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x14);
  if (uVar2 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar1 = FUN_00df36b0(*(undefined4 *)(param_1 + 8));
    if (uVar1 != 0xffffffff) {
      AK::SoundEngine::ExecuteActionOnEvent
                (*(ulong *)(param_1 + 0xc),0,uVar1,param_2,4,*(ulong *)(param_1 + 0x14));
      return 1;
    }
    uVar2 = *(ulong *)(param_1 + 0x14);
  }
  AK::SoundEngine::StopPlayingID(uVar2,0,4);
  return 1;
}

// 00DF4340  FUN_00df4340  size=253  [between]
void FUN_00df4340(void)

{
  IAkStreamMgr *pIVar1;
  int iVar2;
  AKRESULT AVar3;
  AkStreamMgrSettings local_38 [4];
  AkDeviceSettings local_34 [4];
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_38;
  AK::StreamMgr::GetDefaultSettings(local_38);
  pIVar1 = AK::StreamMgr::Create(local_38);
  if (pIVar1 != (IAkStreamMgr *)0x0) {
    AK::StreamMgr::GetDefaultDeviceSettings(local_34);
    local_10 = 0x457a0000;
    local_8 = 0x40000000;
    local_20 = 2;
    local_30 = 0x1c0000;
    local_24 = 0x10000;
    local_c = 0x30;
    iVar2 = FUN_00df2440(local_34,1);
    if (iVar2 == 1) {
      iVar2 = FUN_00df1890(&DAT_016c5bfc);
      if (iVar2 == 1) {
        iVar2 = FUN_00df1a30(L"sound/stream/");
        if (iVar2 == 1) {
          AVar3 = AK::StreamMgr::SetCurrentLanguage(L"English(US)");
          if (AVar3 == 1) {
            __security_check_cookie(local_4 ^ (uint)local_38);
            return;
          }
        }
      }
    }
    FUN_00df25b0();
    if (AK::IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0) {
      (**(code **)(*(int *)AK::IAkStreamMgr::m_pStreamMgr + 4))();
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_38);
  return;
}

// 00DF4440  FUN_00df4440  size=148  [between]
undefined4 FUN_00df4440(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650(&DAT_01663fb0);
    return 0;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (puVar1 = *(undefined4 **)(DAT_01dd4e28 + 4 + uVar2 * 8), puVar1 != (undefined4 *)0x0)) {
    iVar3 = FUN_00dee650(param_1,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    if (puVar1[1] != 0xffffffff) {
      AK::SoundEngine::UnregisterGameObj(puVar1[1]);
      puVar1[1] = 0xffffffff;
      puVar1[2] = 0;
    }
    FUN_00df6730(*puVar1);
    FUN_00dd4920(puVar1);
  }
  return 0;
}

// 00DF44E0  FUN_00df44e0  size=118  [between]
void FUN_00df44e0(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd4e18 <= uVar2) {
    FUN_00dd5650();
    return;
  }
  if ((((*(uint *)(DAT_01dd4e28 + uVar2 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (puVar1 = *(undefined4 **)(DAT_01dd4e28 + 4 + uVar2 * 8), puVar1 != (undefined4 *)0x0)) {
    if (puVar1[1] != 0xffffffff) {
      AK::SoundEngine::UnregisterGameObj(puVar1[1]);
      puVar1[1] = 0xffffffff;
      puVar1[2] = 0;
    }
    FUN_00df6730(*puVar1);
    FUN_00dd4920(puVar1);
  }
  return;
}

// 00DF4570  FUN_00df4570  size=316  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df4570(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00dd7240();
  iVar2 = param_1;
  DAT_01dd4c38 = *(int *)(param_1 + 0x1c);
  _DAT_01dd4c3c = *(undefined4 *)(param_1 + 0x20);
  if (DAT_01dd4c38 != 0) {
    param_1 = 0x3c;
    iVar1 = FUN_0136d430(&param_1);
    if (iVar1 == 1) {
      iVar1 = FUN_00df4340(iVar2);
      if (iVar1 != 0) {
        DAT_01dd4c2c = 0;
        DAT_01dd4c30 = 0;
        DAT_01dd4c34 = 0;
        iVar1 = FUN_00dece90(iVar2);
        if (iVar1 != 0) {
          iVar1 = FUN_00df0f50(iVar2,&LAB_00df1d40);
          if (iVar1 != 0) {
            iVar1 = FUN_00df2b70(iVar2);
            if (iVar1 != 0) {
              iVar1 = FUN_00df32b0(iVar2);
              if (iVar1 != 0) {
                iVar1 = FUN_00df30a0(iVar2);
                if (iVar1 != 0) {
                  iVar1 = FUN_00dee920(iVar2);
                  if (iVar1 != 0) {
                    iVar2 = FUN_00dee960(iVar2);
                    if (iVar2 != 0) {
                      AK::SoundEngine::RegisterGlobalCallback((_func_void_bool *)&LAB_00df1d40);
                      FUN_00dd82c0(&LAB_00df2a40,0,0x8000,4,"WwiseUpdate",1);
                      DAT_01dd4c04 = 1;
                      _DAT_01dd4c0c = FUN_00df7f70();
                      if (_DAT_01dd4c0c != 0) {
                        AK::StreamMgr::SetCurrentLanguage(L"English(US)");
                        return 1;
                      }
                      AK::StreamMgr::SetCurrentLanguage(L"Japanese");
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00DF4770  Hw::Wwise::Command::ObjectRegisterWork::vf04  size=17  [class]
void __fastcall Hw::Wwise::Command::ObjectRegisterWork::vf04(int param_1)

{
  FUN_00df4440(*(undefined4 *)(param_1 + 4),param_1 + 8);
  return;
}

// 00DF4790  Hw::Wwise::Command::ObjectReleaseWork::vf04  size=11  [class]
void __fastcall Hw::Wwise::Command::ObjectReleaseWork::vf04(int param_1)

{
  FUN_00df44e0(*(undefined4 *)(param_1 + 4));
  return;
}

// 00DF47A0  Hw::Wwise::Command::ReleaseEventWork::vf04  size=17  [class]
void __fastcall Hw::Wwise::Command::ReleaseEventWork::vf04(int param_1)

{
  FUN_00df4120(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

// 00DF48B0  FUN_00df48b0  size=55  [between]
undefined4 FUN_00df48b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00df3f10();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = Hw::Wwise::BankWork::registData(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return *puVar1;
    }
    FUN_00df2bc0(puVar1);
  }
  return 0;
}

// 00DF48F0  FUN_00df48f0  size=45  [between]
undefined4 FUN_00df48f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00df3f10();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00dece20(param_1);
    if (iVar2 != 0) {
      return *puVar1;
    }
    FUN_00df2bc0(puVar1);
  }
  return 0;
}

// 00DF4920  FUN_00df4920  size=96  [between]
int FUN_00df4920(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00df7420();
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if (iVar3 != 0) {
    iVar2 = Hw::Wwise::Command::ObjectRegisterWork::ObjectRegisterWork();
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar3;
      if (param_1 == (char *)0x0) {
        *(undefined1 *)(iVar2 + 8) = 0;
      }
      else {
        _strcpy_s((char *)(iVar2 + 8),0x10,param_1);
      }
    }
    FUN_00defd30();
    if (iVar2 != 0) {
      return iVar3;
    }
    FUN_00df44e0(iVar3);
  }
  return 0;
}

// 00DF4980  FUN_00df4980  size=48  [between]
undefined4 FUN_00df4980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00df41b0(param_1,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_00932cc0(param_1);
  return *puVar1;
}

// 00DF49B0  FUN_00df49b0  size=153  [between]
void FUN_00df49b0(void)

{
  int iVar1;
  
  for (iVar1 = (**(code **)(DAT_01dd4c68 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(ulong *)(iVar1 + 4) != 0) {
      AK::SoundEngine::UnloadBank(*(ulong *)(iVar1 + 4),(long *)0x0);
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  if (DAT_01dd4cd8 != 0) {
    FUN_00dd4940(DAT_01dd4cd8);
    DAT_01dd4cd8 = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(DAT_01dd4c68 + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7480();
                    /* WARNING: Could not recover jumptable at 0x00df4a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_01dd4c68 + 8))();
    return;
  }
  return;
}

// 00DF4A90  Hw::Wwise::Command::PostEventWork::vf04  size=71  [class]
void __fastcall Hw::Wwise::Command::PostEventWork::vf04(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(uint *)(param_1 + 4) >> 8 & 0xffff;
  if (uVar1 < DAT_01dd4d78) {
    if ((((*(uint *)(DAT_01dd4d88 + uVar1 * 8) ^ *(uint *)(param_1 + 4)) & 0xffffff00) == 0) &&
       (*(int *)(DAT_01dd4d88 + 4 + uVar1 * 8) != 0)) {
      FUN_00df4230();
      return;
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  return;
}

// 00DF4AE0  Hw::Wwise::Command::StopEventWork::vf04  size=79  [class]
void __fastcall Hw::Wwise::Command::StopEventWork::vf04(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)*(uint *)(param_1 + 4) >> 8 & 0xffff;
  if (DAT_01dd4d78 <= uVar1) {
    FUN_00dd5650(&DAT_01663fb0);
    return;
  }
  if ((((*(uint *)(DAT_01dd4d88 + uVar1 * 8) ^ *(uint *)(param_1 + 4)) & 0xffffff00) == 0) &&
     (*(int *)(DAT_01dd4d88 + 4 + uVar1 * 8) != 0)) {
    FUN_00df42d0(*(undefined4 *)(param_1 + 8));
  }
  return;
}

// 00DF4B30  FUN_00df4b30  size=163  [between]
void FUN_00df4b30(void)

{
  int iVar1;
  
  for (iVar1 = (**(code **)(DAT_01dd4d18 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(ulong *)(iVar1 + 0x14) != 0) {
      AK::SoundEngine::CancelEventCallback(*(ulong *)(iVar1 + 0x14));
      AK::SoundEngine::StopPlayingID(*(ulong *)(iVar1 + 0x14),0,4);
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
  }
  if (DAT_01dd4d88 != 0) {
    FUN_00dd4940(DAT_01dd4d88);
    DAT_01dd4d88 = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(DAT_01dd4d18 + 0xc))();
  if (iVar1 == 0) {
    return;
  }
  FUN_00df74c0();
                    /* WARNING: Could not recover jumptable at 0x00df4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_01dd4d18 + 8))();
  return;
}

// 00DF4C40  FUN_00df4c40  size=156  [between]
void FUN_00df4c40(void)

{
  int iVar1;
  
  for (iVar1 = (**(code **)(DAT_01dd4db8 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(uint *)(iVar1 + 4) != 0xffffffff) {
      AK::SoundEngine::UnregisterGameObj(*(uint *)(iVar1 + 4));
      *(undefined4 *)(iVar1 + 4) = 0xffffffff;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  if (DAT_01dd4e28 != 0) {
    FUN_00dd4940(DAT_01dd4e28);
    DAT_01dd4e28 = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(DAT_01dd4db8 + 0xc))();
  if (iVar1 == 0) {
    return;
  }
  FUN_00df7500();
                    /* WARNING: Could not recover jumptable at 0x00df4cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_01dd4db8 + 8))();
  return;
}

// 00DF4CE0  FUN_00df4ce0  size=225  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df4ce0(void)

{
  DAT_01dd4c08 = 1;
  while (DAT_01dd4c04 != 0) {
    Sleep(1);
  }
  DAT_01dd4c18 = 0;
  _DAT_01dd4c1c = 0;
  _DAT_01dd4c20 = 0;
  _DAT_01dd4c24 = 0;
  _DAT_01dd4c28 = 0;
  if (DAT_01dd4d00 != 0) {
    FUN_00dd48d0(DAT_01dd4d00,0);
  }
  DAT_01dd4d00 = 0;
  _DAT_01dd4d04 = 0;
  _DAT_01dd4d08 = 0;
  FUN_00df4b30();
  FUN_00df4c40();
  FUN_00df49b0();
  AK::MusicEngine::Term();
  AK::SoundEngine::Term();
  FUN_00dd48d0(DAT_01dd4bfc,0);
  DAT_01dd4c2c = 0;
  DAT_01dd4c30 = 0;
  DAT_01dd4c34 = 0;
  FUN_00df25b0();
  if (AK::IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0) {
    (**(code **)(*(int *)AK::IAkStreamMgr::m_pStreamMgr + 4))();
  }
  AK::MemoryMgr::Term();
  DAT_01dd4c38 = 0;
  _DAT_01dd4c3c = 0;
  FUN_00dd7270();
  return;
}

// 00DF4DD0  FUN_00df4dd0  size=64  [between]
void FUN_00df4dd0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = (**(code **)(DAT_01dd4c68 + 0x1c))(0); iVar1 != 0;
        iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
      if (*(int *)(iVar1 + 8) == param_1) {
        FUN_00df2bc0();
        return;
      }
    }
  }
  return;
}

// 00DF4E10  FUN_00df4e10  size=85  [between]
undefined4 FUN_00df4e10(char *param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_00dee320(uVar1);
    uVar4 = -(uint)(iVar2 != -1) & uVar1;
  }
  puVar3 = (undefined4 *)FUN_00df41b0(uVar4,param_2,param_3);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_00932cc0(uVar4);
  return *puVar3;
}

// 00DF4E80  FUN_00df4e80  size=90  [between]
void FUN_00df4e80(LPCWSTR param_1,uint param_2,LPSTR param_3)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  uint cchWideChar;
  
  pWVar2 = param_1;
  do {
    WVar1 = *pWVar2;
    pWVar2 = pWVar2 + 1;
  } while (WVar1 != L'\0');
  cchWideChar = param_2;
  if (((int)pWVar2 - (int)(param_1 + 1) >> 1) + 1U < param_2) {
    pWVar2 = param_1;
    do {
      WVar1 = *pWVar2;
      pWVar2 = pWVar2 + 1;
    } while (WVar1 != L'\0');
    cchWideChar = ((int)pWVar2 - (int)(param_1 + 1) >> 1) + 1;
  }
  WideCharToMultiByte(0,0,param_1,cchWideChar,param_3,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}

// 00DF4EE0  FUN_00df4ee0  size=92  [between]
void FUN_00df4ee0(wchar_t *param_1,wchar_t *param_2,rsize_t param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint _MaxCount;
  
  pwVar2 = param_2;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  _MaxCount = param_3 - 1;
  if (((int)pwVar2 - (int)(param_2 + 1) >> 1) + 1U <= _MaxCount) {
    pwVar2 = param_2;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    _MaxCount = ((int)pwVar2 - (int)(param_2 + 1) >> 1) + 1;
  }
  _wcsncpy_s(param_1,param_3,param_2,_MaxCount);
  param_1[_MaxCount] = L'\0';
  return;
}

// 00DF4F40  FUN_00df4f40  size=128  [between]
void FUN_00df4f40(wchar_t *param_1,wchar_t *param_2,rsize_t param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  rsize_t _MaxCount;
  
  pwVar2 = param_1;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  _MaxCount = (param_3 - ((int)pwVar2 - (int)(param_1 + 1) >> 1)) - 1;
  pwVar2 = param_2;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  if ((int)_MaxCount < (int)pwVar2 - (int)(param_2 + 1) >> 1) {
    _wcsncat_s(param_1,param_3,param_2,_MaxCount);
    return;
  }
  pwVar2 = param_2;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  _wcsncat_s(param_1,param_3,param_2,(int)pwVar2 - (int)(param_2 + 1) >> 1);
  return;
}

// 00DF5030  AK::StreamMgr::IAkLowLevelIOHook::vf00  size=31  [between]
undefined4 * __thiscall AK::StreamMgr::IAkLowLevelIOHook::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5080  AK::StreamMgr::IAkFileLocationResolver::vf00  size=31  [between]
undefined4 * __thiscall
AK::StreamMgr::IAkFileLocationResolver::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF50D0  Hw::Wwise::Command::Work::vf00  size=31  [class]
undefined4 * __thiscall Hw::Wwise::Command::Work::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5DA0  Hw::Wwise::Command::ListenerPositionWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ListenerPositionWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5DE0  Hw::Wwise::Command::ListenerSpatializationWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ListenerSpatializationWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5E20  Hw::Wwise::Command::StateWork::vf00  size=31  [class]
undefined4 * __thiscall Hw::Wwise::Command::StateWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5E60  Hw::Wwise::Command::ObjectRegisterWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectRegisterWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5EA0  Hw::Wwise::Command::ObjectReleaseWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectReleaseWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5EE0  Hw::Wwise::Command::ObjectListenerMaskWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectListenerMaskWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5F20  Hw::Wwise::Command::ObjectPositionWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectPositionWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5F60  Hw::Wwise::Command::ScalingFactorWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ScalingFactorWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5FA0  Hw::Wwise::Command::ObjectEnvironmentValuesWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectEnvironmentValuesWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF5FE0  Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF6020  Hw::Wwise::Command::ObjectRTPCValueWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectRTPCValueWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF6060  Hw::Wwise::Command::ObjectSwitchWork::vf00  size=31  [class]
undefined4 * __thiscall Hw::Wwise::Command::ObjectSwitchWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF60A0  Hw::Wwise::Command::ObjectOutputMaskWork::vf00  size=31  [class]
undefined4 * __thiscall
Hw::Wwise::Command::ObjectOutputMaskWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF60E0  Hw::Wwise::Command::ReleaseEventWork::vf00  size=31  [class]
undefined4 * __thiscall Hw::Wwise::Command::ReleaseEventWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF6120  Hw::Wwise::Command::PostEventWork::vf00  size=31  [class]
undefined4 * __thiscall Hw::Wwise::Command::PostEventWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF6160  Hw::Wwise::Command::StopEventWork::vf00  size=31  [class]
undefined4 * __thiscall Hw::Wwise::Command::StopEventWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DF6180  FUN_00df6180  size=125  [callgraph]
undefined4 __thiscall FUN_00df6180(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_2 < 0x10000) {
    puVar2 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)param_2 * 8),param_3);
    param_1[4] = (uint)puVar2;
    uVar1 = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00DF6200  FUN_00df6200  size=184  [callgraph]
int __thiscall FUN_00df6200(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == 0) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00DF62C0  FUN_00df62c0  size=129  [callgraph]
void __thiscall FUN_00df62c0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00df632f;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00df632f:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00DF63B0  FUN_00df63b0  size=125  [callgraph]
undefined4 __thiscall FUN_00df63b0(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_2 < 0x10000) {
    puVar2 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)param_2 * 8),param_3);
    param_1[4] = (uint)puVar2;
    uVar1 = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00DF6430  FUN_00df6430  size=184  [callgraph]
int __thiscall FUN_00df6430(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == 0) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00DF64F0  FUN_00df64f0  size=129  [callgraph]
void __thiscall FUN_00df64f0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00df655f;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00df655f:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00DF65F0  FUN_00df65f0  size=125  [callgraph]
undefined4 __thiscall FUN_00df65f0(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_2 < 0x10000) {
    puVar2 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)param_2 * 8),param_3);
    param_1[4] = (uint)puVar2;
    uVar1 = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00DF6670  FUN_00df6670  size=184  [callgraph]
int __thiscall FUN_00df6670(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == 0) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00DF6730  FUN_00df6730  size=129  [callgraph]
void __thiscall FUN_00df6730(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00df679f;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00df679f:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00DF6A10  Hw::Wwise::Command::ListenerPositionWork::ListenerPositionWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ListenerPositionWork::ListenerPositionWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0xc01);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 0xb < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 0xc;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6B30  Hw::Wwise::Command::ObjectRegisterWork::ObjectRegisterWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectRegisterWork::ObjectRegisterWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x701);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 6 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 7;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6B90  Hw::Wwise::Command::ObjectReleaseWork::ObjectReleaseWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectReleaseWork::ObjectReleaseWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x301);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 2 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 3;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6C50  Hw::Wwise::Command::ObjectPositionWork::ObjectPositionWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectPositionWork::ObjectPositionWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x601);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 5 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 6;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6CB0  Hw::Wwise::Command::ScalingFactorWork::ScalingFactorWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ScalingFactorWork::ScalingFactorWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x401);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 3 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 4;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6D10  Hw::Wwise::Command::ObjectEnvironmentValuesWork::ObjectEnvironmentValuesWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectEnvironmentValuesWork::ObjectEnvironmentValuesWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0xc01);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 0xb < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 0xc;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6D70  Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::ObjectEnvironmentDryLevelWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectEnvironmentDryLevelWork::ObjectEnvironmentDryLevelWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x401);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 3 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 4;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6DD0  Hw::Wwise::Command::ObjectRTPCValueWork::ObjectRTPCValueWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectRTPCValueWork::ObjectRTPCValueWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x501);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 4 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 5;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6E30  Hw::Wwise::Command::ObjectSwitchWork::ObjectSwitchWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ObjectSwitchWork::ObjectSwitchWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x501);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 4 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 5;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6EF0  Hw::Wwise::Command::ReleaseEventWork::ReleaseEventWork  size=92  [class]
undefined4 * Hw::Wwise::Command::ReleaseEventWork::ReleaseEventWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x401);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 3 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 4;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6F50  Hw::Wwise::Command::PostEventWork::PostEventWork  size=92  [class]
undefined4 * Hw::Wwise::Command::PostEventWork::PostEventWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x301);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 2 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 3;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF6FB0  Hw::Wwise::Command::StopEventWork::StopEventWork  size=92  [class]
undefined4 * Hw::Wwise::Command::StopEventWork::StopEventWork(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = InterlockedExchangeAdd(&DAT_01dd4bec,0x401);
  uVar3 = uVar2 >> 8 & 0xfffff;
  if (uVar3 + 3 < DAT_01dd4bf0) {
    *(undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + uVar3 * 4) = 4;
    puVar1 = (undefined4 *)(*(int *)(&DAT_01dd4bf4 + (uVar2 >> 0x1c) * 4) + 4 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = vftable;
      return puVar1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c5b5c);
  }
  return (undefined4 *)0x0;
}

// 00DF7010  FUN_00df7010  size=21  [callgraph]
undefined4 * __fastcall FUN_00df7010(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DF70F0  FUN_00df70f0  size=21  [callgraph]
undefined4 * __fastcall FUN_00df70f0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DF7320  FUN_00df7320  size=87  [callgraph]
int * FUN_00df7320(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dd2bc0();
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = FUN_00df6200(piVar1);
  if (iVar2 != 0) {
    if (*piVar1 == 0) {
      *piVar1 = iVar2;
      return piVar1;
    }
    FUN_00df62c0(iVar2);
  }
  FUN_00df62c0(*piVar1);
  FUN_00dd4920(piVar1);
  return (int *)0x0;
}

// 00DF73B0  FUN_00df73b0  size=98  [callgraph]
int * FUN_00df73b0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dd2bc0();
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    iVar2 = FUN_00df6430(piVar1);
    if (iVar2 != 0) {
      if (*piVar1 == 0) {
        *piVar1 = iVar2;
        return piVar1;
      }
      FUN_00df64f0(iVar2);
    }
    FUN_00df64f0(*piVar1);
    FUN_00dd4920(piVar1);
  }
  return (int *)0x0;
}

// 00DF7420  FUN_00df7420  size=91  [callgraph]
int * FUN_00df7420(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dd2bc0();
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = -1;
  piVar1[2] = 0;
  iVar2 = FUN_00df6670(piVar1);
  if (iVar2 != 0) {
    if (*piVar1 == 0) {
      *piVar1 = iVar2;
      return piVar1;
    }
    FUN_00df6730(iVar2);
  }
  FUN_00df6730(*piVar1);
  FUN_00dd4920(piVar1);
  return (int *)0x0;
}

// 00DF7480  FUN_00df7480  size=59  [callgraph]
void __fastcall FUN_00df7480(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00DF74C0  FUN_00df74c0  size=59  [callgraph]
void __fastcall FUN_00df74c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00DF7500  FUN_00df7500  size=59  [callgraph]
void __fastcall FUN_00df7500(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00DF75A0  FUN_00df75a0  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00df75a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00DF75D0  FUN_00df75d0  size=36  [callgraph]
void __fastcall FUN_00df75d0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7480();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7650  FUN_00df7650  size=36  [callgraph]
void __fastcall FUN_00df7650(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df74c0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7680  FUN_00df7680  size=36  [callgraph]
void __fastcall FUN_00df7680(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7500();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF76B0  FUN_00df76b0  size=42  [callgraph]
void __fastcall FUN_00df76b0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7480();
                    /* WARNING: Could not recover jumptable at 0x00df76d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DF76E0  FUN_00df76e0  size=42  [callgraph]
void __fastcall FUN_00df76e0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df74c0();
                    /* WARNING: Could not recover jumptable at 0x00df7705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DF7710  FUN_00df7710  size=42  [callgraph]
void __fastcall FUN_00df7710(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7500();
                    /* WARNING: Could not recover jumptable at 0x00df7735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DF7740  FUN_00df7740  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00df7740(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00DF7770  FUN_00df7770  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00df7770(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00DF77A0  FUN_00df77a0  size=21  [callgraph]
undefined4 * __fastcall FUN_00df77a0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DF77C0  FUN_00df77c0  size=36  [callgraph]
void __fastcall FUN_00df77c0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7480();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF77F0  FUN_00df77f0  size=21  [callgraph]
undefined4 * __fastcall FUN_00df77f0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DF7810  FUN_00df7810  size=36  [callgraph]
void __fastcall FUN_00df7810(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df74c0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7840  FUN_00df7840  size=21  [callgraph]
undefined4 * __fastcall FUN_00df7840(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DF7860  FUN_00df7860  size=36  [callgraph]
void __fastcall FUN_00df7860(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7500();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7890  FUN_00df7890  size=76  [callgraph]
void __fastcall FUN_00df7890(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7480();
                    /* WARNING: Could not recover jumptable at 0x00df78d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DF78E0  FUN_00df78e0  size=76  [callgraph]
void __fastcall FUN_00df78e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df74c0();
                    /* WARNING: Could not recover jumptable at 0x00df7927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DF7980  FUN_00df7980  size=76  [callgraph]
void __fastcall FUN_00df7980(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7500();
                    /* WARNING: Could not recover jumptable at 0x00df79c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DF7A20  FUN_00df7a20  size=38  [callgraph]
undefined4 * __fastcall FUN_00df7a20(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  return param_1;
}

// 00DF7A50  FUN_00df7a50  size=81  [callgraph]
void __fastcall FUN_00df7a50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7480();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7AB0  FUN_00df7ab0  size=38  [callgraph]
undefined4 * __fastcall FUN_00df7ab0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  return param_1;
}

// 00DF7AE0  FUN_00df7ae0  size=81  [callgraph]
void __fastcall FUN_00df7ae0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df74c0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7B40  FUN_00df7b40  size=38  [callgraph]
undefined4 * __fastcall FUN_00df7b40(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  return param_1;
}

// 00DF7B70  FUN_00df7b70  size=81  [callgraph]
void __fastcall FUN_00df7b70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00df7500();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DF7C00  FUN_00df7c00  size=3  [callgraph]
undefined4 FUN_00df7c00(void)

{
  return 0;
}

// 00DF7CF0  FUN_00df7cf0  size=57  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df7cf0(void)

{
  DAT_01dd4f3c = 1;
  DAT_01dd4f38 = 0;
  _DAT_01dd4f34 = 1;
  DAT_01dd4f30 = 1;
  _DAT_01dd4f2c = IsDebuggerPresent();
  return 1;
}

// 00DF7DB0  FUN_00df7db0  size=156  [callgraph]
undefined4 FUN_00df7db0(LPSTR param_1)

{
  DWORD local_58;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  local_54.hProcess = (HANDLE)0x0;
  local_54.hThread = (HANDLE)0x0;
  local_54.dwProcessId = 0;
  local_54.dwThreadId = 0;
  _memset(&local_44,0,0x44);
  local_44.wShowWindow = 1;
  local_44.cb = 0x44;
  local_44.dwFlags = 1;
  CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0,
                 (LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  local_58 = 0x103;
  do {
    GetExitCodeProcess(local_54.hProcess,&local_58);
  } while (local_58 == 0x103);
  CloseHandle(local_54.hProcess);
  return 1;
}

// 00DF7E50  FUN_00df7e50  size=259  [callgraph]
void FUN_00df7e50(char *param_1,rsize_t param_2,char *param_3)

{
  char *_Src;
  char local_310 [4];
  char local_30c [260];
  char local_208 [256];
  CHAR local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_310;
  _Src = param_3;
  if (param_3 == (char *)0x0) {
    _Src = "";
  }
  _strcpy_s(local_30c,0x104,_Src);
  __splitpath_s(local_30c,local_310,3,(char *)0x0,0,(char *)0x0,0,(char *)0x0,0);
  if (local_310[0] == '\0') {
    GetModuleFileNameA((HMODULE)0x0,local_108,0x104);
    __splitpath_s(local_108,local_310,3,local_208,0x100,(char *)0x0,0,(char *)0x0,0);
    _sprintf_s(local_30c,0x104,"%s%s%s",local_310,local_208,param_3);
  }
  _strcpy_s(param_1,param_2,local_30c);
  __security_check_cookie(local_4 ^ (uint)local_310);
  return;
}

// 00DF7F70  FUN_00df7f70  size=6  [callgraph]
undefined4 FUN_00df7f70(void)

{
  return DAT_01dd4f3c;
}

