// src/effect/cEffectData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4A4A0..00F4BED0, 6 functions

#include "mgrr.h"

// 00F4A4A0  cEffectData::useCounterDown  size=91  [class]
void __fastcall cEffectData::useCounterDown(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar2 = *(int *)(param_1 + 0x40) + -1;
    *(int *)(param_1 + 0x40) = iVar2;
    if ((((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 8), 0xffff < uVar1)) &&
        (0xfffff < uVar1 + 0xe0000000)) && (uVar1 != 0xffffffff)) {
      FUN_009e02a0(param_1);
      iVar2 = FUN_00e9e810(uVar1);
      if (iVar2 != 0) {
        FUN_00e9ea80(uVar1);
      }
    }
    return;
  }
  FUN_00dd5650(&DAT_016dfee8,param_1 + 0x2c);
  return;
}

// 00F4A580  FUN_00f4a580  size=541  [callgraph]
void FUN_00f4a580(char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_14;
  uint local_10 [3];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_14;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    __security_check_cookie(local_4 ^ (uint)&local_14);
    return;
  }
  iVar3 = 0;
  do {
    iVar1 = __stricmp(param_1,(char *)(&DAT_018d7270)[iVar3]);
    if (iVar1 == 0) goto LAB_00f4a61e;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  uVar2 = FUN_009fde60(param_1);
  if (uVar2 == 0xffffffff) {
    iVar3 = EffectResourceManager::CheckGetId(param_1,"r---ev****",local_10,3);
    if (iVar3 != 0) {
      if ((local_10[0] & 0xffff0000) != 0) {
        FUN_00dd5650(&DAT_016ca5e4,local_10[0]);
      }
      __security_check_cookie(local_4 ^ (uint)&local_14);
      return;
    }
    iVar3 = EffectResourceManager::CheckGetId(param_1,"p---ev****",local_10,3);
    if (iVar3 == 0) {
      iVar3 = EffectResourceManager::CheckGetId(param_1,"ev****",local_10,3);
      if (iVar3 == 0) {
        iVar3 = EffectResourceManager::CheckGetId(param_1,"sst***",local_10,3);
        if (iVar3 != 0) {
          FUN_00e03120(local_10);
          __security_check_cookie(local_4 ^ (uint)&local_14);
          return;
        }
        iVar3 = EffectResourceManager::CheckGetId(param_1,&DAT_016e0504,local_10,3);
        if (iVar3 != 0) {
          FUN_00e03120(local_10);
          __security_check_cookie(local_4 ^ (uint)&local_14);
          return;
        }
        iVar3 = EffectResourceManager::CheckGetId(param_1,&DAT_016e050c,local_10,3);
        if (iVar3 != 0) {
          FUN_00e03150(local_10);
          __security_check_cookie(local_4 ^ (uint)&local_14);
          return;
        }
        __security_check_cookie(local_4 ^ (uint)&local_14);
        return;
      }
      local_14 = 0;
    }
    else {
      local_14 = 2;
    }
    FUN_00e03180(&local_14,local_10);
    __security_check_cookie(local_4 ^ (uint)&local_14);
    return;
  }
  if (uVar2 == 0x7c0000) {
    __security_check_cookie(local_4 ^ (uint)&local_14);
    return;
  }
  if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
LAB_00f4a61e:
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

// 00F4A7A0  FUN_00f4a7a0  size=454  [callgraph]
undefined4 FUN_00f4a7a0(undefined1 *param_1,int param_2,uint param_3)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined1 *)0x0) {
    FUN_00dd5650(&DAT_016e054c,"EffectResourceManager::GetNameFromEffId: pDst != NULL");
  }
  if (param_3 < 4) {
    _Src = (char *)(&DAT_018d7270)[param_3];
    pcVar2 = _Src;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (param_2 <= (int)(pcVar2 + (1 - (int)(_Src + 1)))) {
      FUN_00dd5650("[Fw::StringCopy] len + 1 < size");
      return 1;
    }
    FID_conflict__memcpy(param_1,_Src,(size_t)(pcVar2 + (1 - (int)(_Src + 1))));
    return 1;
  }
  if (((param_3 - 0x1000 < 0x1000) && (uVar3 = param_3 & 0xfff, 4 < param_2)) && (uVar3 < 0x1000)) {
    *param_1 = 0x72;
    param_1[1] = "0123456789abcdef"[uVar3 >> 8];
    param_1[2] = "0123456789abcdef"[uVar3 >> 4 & 0xf];
    param_1[3] = "0123456789abcdef"[param_3 & 0xf];
    param_1[4] = 0;
    return 1;
  }
  if (((param_3 - 0x2000 < 0x1000) && (uVar3 = param_3 & 0xfff, 4 < param_2)) && (uVar3 < 0x1000)) {
    *param_1 = 0x70;
    param_1[1] = "0123456789abcdef"[uVar3 >> 8];
    param_1[2] = "0123456789abcdef"[uVar3 >> 4 & 0xf];
    param_1[3] = "0123456789abcdef"[param_3 & 0xf];
    param_1[4] = 0;
    return 1;
  }
  if (param_3 + 0xe0000000 < 0x100000) {
    local_c = 3;
    local_8 = -1;
    local_4 = 0xffffffff;
    iVar4 = FUN_00f4a3f0(&local_c,param_3);
    if (((iVar4 != 0) && (-1 < local_c)) &&
       ((local_c < 0x10 && ((-1 < local_8 && (local_8 < 0x10000)))))) {
      EffectResourceManager::GetNameFromEventNo(param_1,param_2,local_c,local_8);
      return 1;
    }
  }
  iVar4 = FUN_009f8ea0(param_1,param_2,param_3,1);
  if (iVar4 != 0) {
    return 1;
  }
  *param_1 = 0;
  return 0;
}

// 00F4BC40  cEffectData::requestCounterDown  size=476  [class]
void cEffectData::requestCounterDown(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  if (DAT_01ee6550 != 0) {
    puVar5 = &DAT_01885e50;
    iVar4 = DAT_01885e50;
    while (iVar4 != -1) {
      if (param_1 == iVar4) {
        param_1 = puVar5[1];
        break;
      }
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = *piVar1;
    }
    if (param_1 != 0xffe) {
      EspReadWriteLock::enterWrite();
      if (param_1 < 4) {
        FUN_00f4b8f0(param_1);
        FUN_00eaac50();
        __security_check_cookie(local_4 ^ (uint)&local_2c);
        return;
      }
      if ((((int)DAT_018d72b4 < 1) ||
          (pvVar3 = _bsearch(&param_1,DAT_018d72ac,DAT_018d72b4,4,(_PtFuncCompare *)&LAB_00f4d510),
          pvVar3 == (void *)0x0)) || (iVar4 = (int)pvVar3 - (int)DAT_018d72ac >> 2, iVar4 < 0)) {
        local_2c = (int *)((int)DAT_018d72ac + DAT_018d72b4 * 4);
      }
      else {
        local_2c = (int *)((int)DAT_018d72ac + iVar4 * 4);
      }
      if (local_2c != (int *)((int)DAT_018d72ac + DAT_018d72b4 * 4)) {
        iVar4 = *(int *)(*local_2c + 4);
        iVar2 = *(int *)(iVar4 + 0x3c);
        if (iVar2 < 2) {
          FUN_009e02a0(iVar4);
          *(undefined4 *)(iVar4 + 0x3c) = 0;
          *(undefined4 *)(iVar4 + 0x40) = 0;
          *(undefined4 *)(iVar4 + 0x44) = 0;
          *(undefined2 *)(iVar4 + 0x48) = 0;
          *(undefined1 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 8) = 0xfff;
          Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
          ~cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>();
          FUN_00f4ae70();
          FUN_00f4df70(local_28,&local_2c);
          FUN_00f4cf80(iVar4);
        }
        else if (iVar2 < 1) {
          FUN_00dd5650(&DAT_016e0da0);
        }
        else {
          *(int *)(iVar4 + 0x3c) = iVar2 + -1;
        }
        FUN_00eaac50();
        __security_check_cookie(local_4 ^ (uint)&local_2c);
        return;
      }
      FUN_00f4a7a0(local_24,0x20,param_1,0);
      FUN_00dd5650(&DAT_016e04c0,local_24);
      FUN_00eaac50();
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

// 00F4BE20  FUN_00f4be20  size=164  [between]
void FUN_00f4be20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_44;
  if ((param_1 < 4) && (param_1 * 0x54 != -0x1ee5430)) {
    if ((int)(&DAT_01ee546c)[param_1 * 0x15] < 1) {
      Fw::StringCopy(param_1,param_2,param_3,param_4);
      __security_check_cookie(local_4 ^ (uint)local_44);
      return;
    }
    (&DAT_01ee546c)[param_1 * 0x15] = (&DAT_01ee546c)[param_1 * 0x15] + 1;
    __security_check_cookie(local_4 ^ (uint)local_44);
    return;
  }
  FUN_00f4a7a0(local_44,0x40,param_1,0);
  FUN_00dd5650(&DAT_016e0864,local_44);
  __security_check_cookie(local_4 ^ (uint)local_44);
  return;
}

// 00F4BED0  cEffectData::requestCounterDown_2  size=597  [class]
void cEffectData::requestCounterDown_2(void)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int local_38 [2];
  int *local_30;
  uint local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_38;
  local_38[1] = 0;
  if (DAT_01ee5428 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_38);
    return;
  }
  uVar6 = 0;
  local_2c = DAT_01ee5428;
  uVar5 = DAT_01ee5428;
  if (DAT_01ee5428 != 0) {
    do {
      local_38[0] = (&DAT_01ee5530)[uVar6 * 2];
      if (DAT_01ee6550 != 0) {
        puVar4 = &DAT_01885e50;
        iVar3 = DAT_01885e50;
        while (iVar3 != -1) {
          if (local_38[0] == iVar3) {
            local_38[0] = puVar4[1];
            break;
          }
          piVar1 = puVar4 + 2;
          puVar4 = puVar4 + 2;
          iVar3 = *piVar1;
        }
        if (local_38[0] != 0xffe) {
          EspReadWriteLock::enterWrite();
          if (local_38[0] < 4) {
            FUN_00f4b8f0(local_38[0]);
          }
          else {
            if ((((int)DAT_018d72b4 < 1) ||
                (pvVar2 = _bsearch(local_38,DAT_018d72ac,DAT_018d72b4,4,
                                   (_PtFuncCompare *)&LAB_00f4d510), pvVar2 == (void *)0x0)) ||
               (iVar3 = (int)pvVar2 - (int)DAT_018d72ac >> 2, iVar3 < 0)) {
              local_30 = (int *)((int)DAT_018d72ac + DAT_018d72b4 * 4);
            }
            else {
              local_30 = (int *)((int)DAT_018d72ac + iVar3 * 4);
            }
            if (local_30 != (int *)((int)DAT_018d72ac + DAT_018d72b4 * 4)) {
              uVar5 = *(uint *)(*local_30 + 4);
              iVar3 = *(int *)(uVar5 + 0x3c);
              if (iVar3 < 2) {
                FUN_009e02a0(uVar5);
                *(undefined4 *)(uVar5 + 0x3c) = 0;
                *(undefined4 *)(uVar5 + 0x40) = 0;
                *(undefined4 *)(uVar5 + 0x44) = 0;
                *(undefined2 *)(uVar5 + 0x48) = 0;
                *(undefined1 *)(uVar5 + 0x2c) = 0;
                *(undefined4 *)(uVar5 + 8) = 0xfff;
                Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
                ~cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>();
                FUN_00f4ae70();
                FUN_00f4df70(local_28,&local_30);
                if (((DAT_018d72d8 == 0) || (uVar5 < DAT_018d72d8)) ||
                   (DAT_018d72dc * 0x58 + DAT_018d72d8 <= uVar5)) {
LAB_00f4c0a7:
                  FUN_00eaac50();
                  uVar5 = local_2c;
                }
                else {
                  cXml::cXml();
                  FUN_00f4c880(uVar5);
                  FUN_00eaac50();
                  uVar5 = local_2c;
                }
              }
              else {
                if (0 < iVar3) {
                  *(int *)(uVar5 + 0x3c) = iVar3 + -1;
                  goto LAB_00f4c0a7;
                }
                FUN_00dd5650(&DAT_016e0da0);
                FUN_00eaac50();
                uVar5 = local_2c;
              }
              goto LAB_00f4c0e5;
            }
            FUN_00f4a7a0(local_24,0x20,local_38[0],0);
            FUN_00dd5650(&DAT_016e04c0,local_24);
          }
          FUN_00eaac50();
        }
      }
LAB_00f4c0e5:
      if ((&DAT_01ee5530)[uVar6 * 2] - 0x1000 < 0x1000) {
        local_38[1] = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  DAT_01ee5428 = 0;
  __security_check_cookie(local_4 ^ (uint)local_38);
  return;
}

