// src/misc/PgIOHookDeferredCRI.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DEE430..00DF68F0, 35 functions

#include "mgrr.h"
#include "PgIOHookDeferredCRI.h"

// 00DEE430  PgIOHookDeferredCRI::vf18  size=8  [class]
undefined4 PgIOHookDeferredCRI::vf18(void)

{
  return 2;
}

// 00DEE440  PgIOHookDeferredCRI::vf1C  size=3  [class]
void PgIOHookDeferredCRI::vf1C(void)

{
  return;
}

// 00DEE450  PgIOHookDeferredCRI::vf08  size=8  [class]
undefined4 PgIOHookDeferredCRI::vf08(void)

{
  return 0x800;
}

// 00DEE460  PgIOHookDeferredCRI::vf0C  size=3  [class]
void PgIOHookDeferredCRI::vf0C(void)

{
  return;
}

// 00DEE470  PgIOHookDeferredCRI::vf10  size=12  [class]
bool __fastcall PgIOHookDeferredCRI::vf10(int param_1)

{
  return *(char *)(param_1 + 0x624) != '\0';
}

// 00DF1110  PgIOHookDeferredCRI::vf10  size=79  [class]
undefined4
PgIOHookDeferredCRI::vf10(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00932c50(param_1);
  if (iVar1 != 0) {
    _strcpy_s(param_4,0x104,param_1);
    return 1;
  }
  uVar2 = FUN_00deeae0(param_1,param_2,param_3,param_4);
  return uVar2;
}

// 00DF1160  PgIOHookDeferredCRI::vf0C  size=8  [class]
void PgIOHookDeferredCRI::vf0C(void)

{
  FUN_00deec50();
  return;
}

// 00DF1170  FUN_00df1170  size=414  [between]
void __thiscall FUN_00df1170(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_110;
  undefined4 local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_110;
  local_10c = param_2;
  local_110 = param_1;
  if (param_3 == 0) {
    uVar7 = 0;
    iVar2 = FUN_00932c30();
    if ((iVar2 != 0) && (iVar2 = FUN_00932c50(param_2), iVar2 != 0)) {
      uVar7 = 1;
    }
    pcVar3 = (char *)FUN_00de88b0(0,uVar7);
    iVar2 = FUN_00932c40();
    if (iVar2 != 0) {
      pcVar3 = (char *)FUN_00de88b0(1,0);
    }
    FUN_00df4e80(param_2,0x104,local_108);
    pcVar4 = local_108;
    uVar6 = 0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != local_108 + 1) {
      do {
        if (local_108[uVar6] == '/') {
          local_108[uVar6] = '\\';
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)((int)pcVar4 - (int)(local_108 + 1)));
    }
    pcVar4 = local_108;
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = _strncmp(local_108,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    if (iVar2 == 0) {
      pcVar4 = local_108 + ((int)pcVar5 - (int)(pcVar3 + 1));
    }
    iVar2 = FUN_00deaf60(pcVar4);
    if ((iVar2 != 0) &&
       (pcVar3 = AK::MemoryMgr::GetBlock(*(long *)(local_110 + 0x62c)), pcVar3 != (char *)0x0)) {
      FUN_00df4e80(local_10c,0x104,pcVar3);
      uVar6 = 0;
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 != pcVar3 + 1) {
        do {
          if (pcVar3[uVar6] == '/') {
            pcVar3[uVar6] = '\\';
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)((int)pcVar4 - (int)(pcVar3 + 1)));
      }
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = iVar2;
      param_4[6] = *(int *)(local_110 + 0x624);
      param_4[4] = (int)pcVar3;
      param_4[3] = 0x104;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_110);
  return;
}

// 00DF1320  PgIOHookDeferredCRI::vf14  size=481  [class]
undefined4 __thiscall
PgIOHookDeferredCRI::vf14(int param_1,int param_2,float *param_3,char *param_4)

{
  char cVar1;
  char *_Str1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *_Str2;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar2 = (undefined4 *)param_4;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x630)) {
    piVar8 = (int *)(*(int *)(param_1 + 0x62c) + 8);
    while (*piVar8 != 0) {
      iVar3 = iVar3 + 1;
      piVar8 = piVar8 + 4;
      if (*(int *)(param_1 + 0x630) <= iVar3) {
        return 2;
      }
    }
    *(int *)(param_1 + 0x634) = *(int *)(param_1 + 0x634) + 1;
    iVar3 = iVar3 * 0x10 + *(int *)(param_1 + 0x62c);
    if (iVar3 != 0) {
      *(char **)(iVar3 + 8) = param_4;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      _Str1 = *(char **)(param_2 + 0x10);
      uVar9 = 0;
      iVar4 = FUN_00932c30();
      if (iVar4 != 0) {
        iVar4 = FUN_00932c50(_Str1);
        if (iVar4 != 0) {
          uVar9 = 1;
        }
      }
      _Str2 = (char *)FUN_00de88b0(0,uVar9);
      iVar4 = FUN_00932c40();
      if (iVar4 != 0) {
        _Str2 = (char *)FUN_00de88b0(1,0);
      }
      pcVar5 = _Str2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = _strncmp(_Str1,_Str2,(int)pcVar5 - (int)(_Str2 + 1));
      param_4 = _Str1;
      if (iVar4 == 0) {
        param_4 = _Str1 + ((int)pcVar5 - (int)(_Str2 + 1));
      }
      uVar9 = *(undefined4 *)(iVar3 + 4);
      if ((*param_3 <= 1.0) || (uVar6 = 1, 'P' < *(char *)(param_3 + 1))) {
        uVar6 = 2;
      }
      iVar4 = thunk_FUN_0129b839(uVar9,uVar6);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x634) = *(int *)(param_1 + 0x634) + -1;
        *(undefined4 *)(iVar3 + 8) = 0;
        return 2;
      }
      iVar4 = FUN_00deaed0(param_4);
      if (iVar4 == 0) {
        iVar4 = FUN_00de8bd0();
      }
      iVar7 = FUN_00de8bd0();
      if (iVar4 == iVar7) {
        uVar6 = puVar2[2];
        uVar13 = puVar2[4];
        uVar12 = puVar2[3];
        uVar11 = puVar2[1];
        uVar10 = *puVar2;
        param_4 = _Str1;
      }
      else {
        uVar6 = puVar2[2];
        uVar13 = puVar2[4];
        uVar12 = puVar2[3];
        uVar11 = puVar2[1];
        uVar10 = *puVar2;
      }
      uVar6 = FUN_00de7950(param_4,uVar10,uVar11,uVar12,0,uVar13,uVar6,0);
      iVar4 = FUN_0129c6e2(uVar9,uVar6);
      if (iVar4 != 0) {
        FUN_00dd56a0(&DAT_016c59c0,iVar4);
        *(int *)(param_1 + 0x634) = *(int *)(param_1 + 0x634) + -1;
        *(undefined4 *)(iVar3 + 8) = 0;
        return 2;
      }
      return 1;
    }
  }
  return 2;
}

// 00DF1510  FUN_00df1510  size=77  [between]
void FUN_00df1510(int *param_1,undefined4 param_2)

{
  char cVar1;
  int local_4;
  
  FUN_0129b6d6(param_2,&local_4);
  cVar1 = (local_4 != 2) + '\x01';
  if (param_1[3] != 0) {
    cVar1 = '\x01';
  }
  (**(code **)(param_1[2] + 0x14))(param_1[2],cVar1);
  *(int *)(*param_1 + 0x638) = *(int *)(*param_1 + 0x638) + -1;
  param_1[2] = 0;
  return;
}

// 00DF1560  PgIOHookDeferredCRI::vf04  size=51  [class]
undefined4 __thiscall PgIOHookDeferredCRI::vf04(int param_1,int param_2)

{
  if (*(void **)(param_2 + 0x10) != (void *)0x0) {
    AK::MemoryMgr::ReleaseBlock(*(long *)(param_1 + 0x628),*(void **)(param_2 + 0x10));
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return 1;
}

// 00DF1600  FUN_00df1600  size=23  [between]
void FUN_00df1600(undefined4 param_1)

{
  FUN_00dd29b0(param_1,0x20,0,0);
  return;
}

// 00DF1620  FUN_00df1620  size=16  [between]
void FUN_00df1620(undefined4 param_1)

{
  FUN_00dd48d0(param_1,0);
  return;
}

// 00DF1630  FUN_00df1630  size=23  [between]
void FUN_00df1630(undefined4 param_1,undefined4 param_2)

{
  FUN_00dd29b0(param_2,0x20,0,0);
  return;
}

// 00DF1650  FUN_00df1650  size=16  [between]
void FUN_00df1650(undefined4 param_1)

{
  FUN_00dd48d0(param_1,0);
  return;
}

// 00DF1680  FUN_00df1680  size=94  [between]
void __thiscall FUN_00df1680(int param_1,float *param_2)

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

// 00DF16E0  FUN_00df16e0  size=86  [between]
void FUN_00df16e0(void)

{
  ulong *puVar1;
  int iVar2;
  
  if (DAT_01dd4e68 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  if (DAT_018cde3c != 0) {
    puVar1 = &DAT_01dd4a00;
    iVar2 = DAT_018cde3c;
    do {
      if (*puVar1 != 0) {
        AK::SoundEngine::Query::GetState(*puVar1,puVar1 + 1);
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_01dd4e68 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  return;
}

// 00DF1740  FUN_00df1740  size=81  [between]
void FUN_00df1740(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_01dd4e68 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
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
  if (DAT_01dd4e68 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e50);
  }
  FUN_00dd7270();
  return;
}

// 00DF17A0  FUN_00df17a0  size=110  [between]
void __fastcall FUN_00df17a0(RTPCValue_type param_1)

{
  ulong *puVar1;
  int iVar2;
  RTPCValue_type local_4;
  
  local_4 = param_1;
  if (DAT_01dd4e88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  if (DAT_018cde40 != 0) {
    puVar1 = &DAT_01dd4804;
    iVar2 = DAT_018cde40;
    do {
      if (*puVar1 != 0) {
        local_4 = (puVar1[-1] != 0xffffffff) + 1;
        AK::SoundEngine::Query::GetRTPCValue(*puVar1,puVar1[-1],(float *)(puVar1 + 1),&local_4);
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_01dd4e88 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  return;
}

// 00DF1810  FUN_00df1810  size=88  [between]
void FUN_00df1810(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_01dd4e88 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
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
  if (DAT_01dd4e88 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd4e70);
  }
  FUN_00dd7270();
  return;
}

// 00DF1890  FUN_00df1890  size=196  [between]
undefined4 __thiscall FUN_00df1890(int param_1,short *param_2)

{
  wchar_t *pwVar1;
  short sVar2;
  wchar_t wVar3;
  short *psVar4;
  wchar_t *pwVar5;
  uint *puVar6;
  uint local_8;
  uint local_4;
  
  psVar4 = (short *)(param_1 + 0x414);
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  local_8 = (int)psVar4 - (param_1 + 0x416) >> 1;
  psVar4 = (short *)(param_1 + 0x20c);
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  local_4 = (int)psVar4 - (param_1 + 0x20e) >> 1;
  psVar4 = param_2;
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  puVar6 = &local_8;
  if (local_8 <= local_4) {
    puVar6 = &local_4;
  }
  pwVar5 = AK::StreamMgr::GetCurrentLanguage();
  pwVar1 = pwVar5 + 1;
  do {
    wVar3 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar3 != L'\0');
  if (0x103 < *puVar6 + ((int)pwVar5 - (int)pwVar1 >> 1) + 1 +
              ((int)psVar4 - (int)(param_2 + 1) >> 1)) {
    return 0x1f;
  }
  FUN_00df4ee0(param_1 + 4,param_2,0x104);
  return 1;
}

// 00DF1A30  FUN_00df1a30  size=193  [between]
undefined4 __thiscall FUN_00df1a30(int param_1,short *param_2)

{
  wchar_t *pwVar1;
  short sVar2;
  wchar_t wVar3;
  short *psVar4;
  short *psVar5;
  wchar_t *pwVar6;
  uint *puVar7;
  uint local_4;
  
  psVar4 = param_2;
  psVar5 = param_2 + 1;
  do {
    sVar2 = *param_2;
    param_2 = param_2 + 1;
  } while (sVar2 != 0);
  param_2 = (short *)((int)param_2 - (int)psVar5 >> 1);
  psVar5 = (short *)(param_1 + 0x20c);
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  local_4 = (int)psVar5 - (param_1 + 0x20e) >> 1;
  psVar5 = (short *)(param_1 + 4);
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  puVar7 = (uint *)&param_2;
  if (param_2 <= local_4) {
    puVar7 = &local_4;
  }
  pwVar6 = AK::StreamMgr::GetCurrentLanguage();
  pwVar1 = pwVar6 + 1;
  do {
    wVar3 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar3 != L'\0');
  if (0x103 < *puVar7 + ((int)pwVar6 - (int)pwVar1 >> 1) + 1 + ((int)psVar5 - (param_1 + 6) >> 1)) {
    return 0x1f;
  }
  FUN_00df4ee0(param_1 + 0x414,psVar4,0x104);
  return 1;
}

// 00DF1B60  FUN_00df1b60  size=68  [between]
undefined4 __thiscall FUN_00df1b60(int param_1,int param_2)

{
  short sVar1;
  
  *(undefined2 *)(param_1 + 4) = 0;
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != 0)) {
    sVar1 = FUN_00def020(param_2);
    if ((sVar1 == 0) && (1 < **(uint **)(param_1 + 8))) {
      return 0x16;
    }
    *(short *)(param_1 + 4) = sVar1;
  }
  return 1;
}

// 00DF1BB0  FUN_00df1bb0  size=210  [between]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00df1bb0(short *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  short *psVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint auStack_28 [4];
  undefined4 uStack_18;
  
  uVar5 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  psVar6 = param_1;
  do {
    sVar2 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar2 != 0);
  uStack_18 = 0xdf1be5;
  iVar3 = -(((int)psVar6 - (int)(param_1 + 1) >> 1) + 1);
  pcVar7 = &stack0xffffffec + iVar3;
  pbVar11 = &stack0xffffffec + iVar3;
  psVar6 = param_1;
  do {
    sVar2 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar2 != 0);
  *(undefined1 **)((int)&uStack_18 + iVar3) = &stack0xffffffec + iVar3;
  *(int *)((int)auStack_28 + iVar3 + 0xc) = ((int)psVar6 - (int)(param_1 + 1) >> 1) + 1;
  *(short **)((int)auStack_28 + iVar3 + 8) = param_1;
  *(undefined4 *)((int)auStack_28 + iVar3 + 4) = 0xdf1c08;
  FUN_00df4e80();
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar8 = (int)pcVar7 - (int)(&stack0xffffffed + iVar3);
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      cVar1 = (&stack0xffffffec)[uVar9 + iVar3];
      if (('@' < cVar1) && (cVar1 < '[')) {
        (&stack0xffffffec)[uVar9 + iVar3] = cVar1 + ' ';
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  uVar9 = 0x84222325;
  uVar10 = 0xcbf29ce4;
  pbVar4 = &stack0xffffffec + iVar3;
  while (pbVar4 < &stack0xffffffec + uVar8 + iVar3) {
    *(undefined4 *)((int)&uStack_18 + iVar3) = 0x100;
    *(undefined4 *)((int)auStack_28 + iVar3 + 0xc) = 0x1b3;
    *(undefined4 *)((int)auStack_28 + iVar3 + 8) = uVar10;
    *(uint *)((int)auStack_28 + iVar3 + 4) = uVar9;
    *(undefined4 *)((int)auStack_28 + iVar3) = 0xdf1c61;
    uVar12 = __allmul();
    uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar9 = (uint)*pbVar11 ^ (uint)uVar12;
    pbVar11 = pbVar11 + 1;
    pbVar4 = pbVar11;
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

// 00DF1D90  FUN_00df1d90  size=50  [between]
void FUN_00df1d90(uint *param_1)

{
  DAT_01dd4c30 = param_1 + 2;
  DAT_01dd4c2c = param_1;
  if (*param_1 < 0x20120925) {
    DAT_01dd4c34 = param_1;
    DAT_01dd4c30 = param_1 + 1;
    DAT_01dd4c2c = (uint *)0x0;
  }
  return;
}

// 00DF1F00  thunk_FUN_00df00f0  size=5  [between]
int thunk_FUN_00df00f0(int param_1)

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

// 00DF2110  FUN_00df2110  size=110  [between]
undefined4 __thiscall FUN_00df2110(int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = _strrchr(param_2,0x2f);
  pcVar2 = _strrchr(param_2,0x5c);
  if (pcVar1 <= pcVar2) {
    pcVar1 = pcVar2;
  }
  if (pcVar1 != (char *)0x0) {
    pcVar2 = _strrchr(pcVar1 + 1,0x2e);
    if (pcVar2 != (char *)0x0) {
      iVar3 = FUN_00ded990(pcVar1 + 1,pcVar2);
      *param_1 = iVar3;
      if (iVar3 != 0) {
        FUN_00df0ec0();
      }
    }
  }
  return 0;
}

// 00DF2180  FUN_00df2180  size=458  [between]
void FUN_00df2180(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float unaff_EBX;
  float local_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_44;
  local_44 = param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1];
  if (local_44 < 0.0 != (local_44 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_34 = 0;
    local_30 = 1.0;
    local_2c = 0;
  }
  D3DXVec3Normalize(&local_34,param_3);
  if (((*param_4 == 0.0) && (param_4[1] == 0.0)) && (param_4[2] == 0.0)) {
    unaff_EBX = 0.0;
    local_44 = 1.0;
    uStack_40 = 0;
  }
  else {
    if (param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1] <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      unaff_EBX = 0.0;
      local_44 = 1.0;
      uStack_40 = 0;
    }
    D3DXVec3Normalize(&stack0xffffffb8,param_4);
  }
  fStack_18 = *param_2 * -1.0;
  fStack_14 = param_2[1];
  fStack_10 = param_2[2];
  local_30 = fStack_3c * -1.0;
  local_2c = uStack_38;
  uStack_28 = local_34;
  fStack_24 = unaff_EBX * -1.0;
  fStack_20 = local_44;
  uStack_1c = uStack_40;
  AK::SoundEngine::SetListenerPosition((AkListenerPosition *)&local_30,local_4);
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffb4);
  return;
}

// 00DF2440  FUN_00df2440  size=362  [between]
undefined4 __thiscall
FUN_00df2440(IAkFileLocationResolver *param_1,AkDeviceSettings *param_2,int param_3)

{
  IAkFileLocationResolver *pIVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_2 + 0x14) != 2) {
    return 2;
  }
  param_1[0x628] = param_3._0_1_;
  pIVar1 = AK::StreamMgr::GetFileLocationResolver();
  if (pIVar1 == (IAkFileLocationResolver *)0x0) {
    AK::StreamMgr::SetFileLocationResolver(param_1);
  }
  uVar2 = AK::StreamMgr::CreateDevice(param_2,(IAkLowLevelIOHook *)(param_1 + 4));
  *(ulong *)(param_1 + 0x624) = uVar2;
  if (uVar2 == 0xffffffff) {
    return 2;
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x62c) == -1) {
    lVar3 = AK::MemoryMgr::CreatePool((void *)0x0,*(int *)(param_2 + 0x28) * 0x104,0x104,9,0);
    *(long *)(param_1 + 0x62c) = lVar3;
    if (lVar3 == -1) {
      return 2;
    }
  }
  iVar4 = FUN_00dd29b0(*(int *)(param_2 + 0x28) << 4,0x20,0,0);
  *(int *)(param_1 + 0x630) = iVar4;
  if (iVar4 == 0) {
    return 2;
  }
  iVar4 = *(int *)(param_2 + 0x28);
  *(int *)(param_1 + 0x634) = iVar4;
  *(undefined4 *)(param_1 + 0x638) = 0;
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      *(IAkFileLocationResolver **)(iVar5 + *(int *)(param_1 + 0x630)) = param_1;
      *(undefined4 *)(*(int *)(param_1 + 0x630) + 4 + iVar5) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x630) + 8 + iVar5) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x630) + 0xc + iVar5) = 0;
      iVar5 = iVar5 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x634);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar8 = *(int *)(param_1 + 0x630) + iVar7;
      iVar6 = thunk_FUN_0129ca4d(&param_3);
      if ((param_3 == 0) || (iVar6 != 0)) {
        return 2;
      }
      iVar6 = FUN_0129b524(param_3,FUN_00df1510,iVar8);
      if (iVar6 != 0) {
        FUN_0129c89d(param_3);
        return 2;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x10;
      *(int *)(iVar8 + 4) = param_3;
    } while (iVar5 < iVar4);
  }
  return 1;
}

// 00DF25B0  FUN_00df25b0  size=196  [between]
void __fastcall FUN_00df25b0(IAkFileLocationResolver *param_1)

{
  int iVar1;
  int iVar2;
  IAkFileLocationResolver *pIVar3;
  int iVar4;
  int local_4;
  
  pIVar3 = AK::StreamMgr::GetFileLocationResolver();
  if (pIVar3 == param_1) {
    AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)0x0);
  }
  AK::StreamMgr::DestroyDevice(*(ulong *)(param_1 + 0x624));
  *(undefined4 *)(param_1 + 0x624) = 0xffffffff;
  if (*(int *)(param_1 + 0x630) != 0) {
    local_4 = *(int *)(param_1 + 0x634);
    if (0 < local_4) {
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar4 + 8 + *(int *)(param_1 + 0x630)) = 0;
        iVar1 = *(int *)(param_1 + 0x630);
        iVar2 = *(int *)(iVar1 + 4 + iVar4);
        if (iVar2 != 0) {
          FUN_0129c89d(iVar2);
          *(undefined4 *)(iVar1 + 4 + iVar4) = 0;
        }
        iVar4 = iVar4 + 0x10;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    FUN_00dd48d0(*(undefined4 *)(param_1 + 0x630),0);
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined4 *)(param_1 + 0x634) = 0;
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(int *)(param_1 + 0x62c) != -1) {
    AK::MemoryMgr::DestroyPool(*(int *)(param_1 + 0x62c));
    *(undefined4 *)(param_1 + 0x62c) = 0xffffffff;
  }
  return;
}

// 00DF2680  PgIOHookDeferredCRI::vf08  size=174  [class]
void __thiscall
PgIOHookDeferredCRI::vf08
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
          undefined4 *param_6)

{
  int iVar1;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20c;
  if ((*param_5 == '\0') && ((char)param_1[0x18a] != '\0')) {
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    param_6[6] = param_1[0x189];
    param_6[4] = 0;
    param_6[3] = 0;
  }
  else {
    *param_5 = '\x01';
    iVar1 = (**(code **)(*param_1 + 0x10))(param_2,param_4,param_3,local_20c);
    if (iVar1 == 1) {
      FUN_00df1170(local_20c,param_3,param_6);
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}

// 00DF2730  PgIOHookDeferredCRI::vf04  size=174  [class]
void __thiscall
PgIOHookDeferredCRI::vf04
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
          undefined4 *param_6)

{
  int iVar1;
  undefined1 local_20c [520];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20c;
  if ((*param_5 == '\0') && ((char)param_1[0x18a] != '\0')) {
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    param_6[6] = param_1[0x189];
    param_6[4] = 0;
    param_6[3] = 0;
  }
  else {
    *param_5 = '\x01';
    iVar1 = (**(code **)(*param_1 + 0xc))(param_2,param_4,param_3,local_20c);
    if (iVar1 == 1) {
      FUN_00df1170(local_20c,param_3,param_6);
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}

// 00DF5A40  PgIOHookDeferredCRI::vf00  size=8  [class]
void PgIOHookDeferredCRI::vf00(void)

{
  vf00();
  return;
}

// 00DF68E0  PgIOHookDeferredCRI::vf00  size=8  [class]
void PgIOHookDeferredCRI::vf00(void)

{
  vf00();
  return;
}

// 00DF68F0  PgIOHookDeferredCRI::vf00  size=52  [class]
undefined4 * __thiscall PgIOHookDeferredCRI::vf00(undefined4 *param_1,byte param_2)

{
  param_1[1] = vftable;
  param_1[2] = CAkFileLocationBase::vftable;
  param_1[1] = AK::StreamMgr::IAkLowLevelIOHook::vftable;
  *param_1 = AK::StreamMgr::IAkFileLocationResolver::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

