// src/save/SaveDataCtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C5B80..009C85E0, 59 functions

#include "mgrr.h"

// 009C5B80  SaveDataCtrl::readBinaryDataImpl  size=354  [class]
undefined4 SaveDataCtrl::readBinaryDataImpl(DWORD *param_1)

{
  LPVOID pvVar1;
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  LPVOID lpBuffer;
  BOOL BVar2;
  DWORD local_208;
  size_t local_204;
  char local_200 [256];
  char local_100 [256];
  
  _getenv_s(&local_204,local_100,0x100,"USERPROFILE");
  _sprintf_s(local_200,0x100,"%s\\Documents\\MGR\\SaveData\\%s",local_100,"MGR.sav");
  hFile = CreateFileA(local_200,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00dd5650(&DAT_01658588,local_200);
    return 0;
  }
  nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
  lpBuffer = (LPVOID)FUN_00dd29b0(nNumberOfBytesToRead,0x20,0,0);
  local_208 = 0;
  BVar2 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&local_208,(LPOVERLAPPED)0x0);
  if ((BVar2 != 0) && (nNumberOfBytesToRead == local_208)) {
    CloseHandle(hFile);
    *param_1 = local_208;
    pvVar1 = lpBuffer;
    if (DAT_01b39598 != 0) {
      pvVar1 = DAT_01b39580;
      if (DAT_01b39598 == 1) {
        DAT_01b39584 = (int)lpBuffer + 0x8ee0;
      }
      else if (DAT_01b39598 == 2) {
        DAT_01b39588 = (int)lpBuffer + 0x11dc0;
      }
    }
    DAT_01b39580 = pvVar1;
    FID_conflict__memcpy(&DAT_01b395c0,(&DAT_01b39580)[DAT_01b39598],0x8ee0);
    FUN_00dd48d0(lpBuffer,0);
    return DAT_01b3de24;
  }
  FUN_00dd48d0(lpBuffer,0);
  CloseHandle(hFile);
  return 0;
}

// 009C5CF0  SaveDataCtrl::readBinaryDataImpl_2  size=595  [class]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 SaveDataCtrl::readBinaryDataImpl_2(undefined4 param_1,DWORD param_2)

{
  LPCVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  LPCVOID lpBuffer;
  HANDLE pvVar4;
  BOOL BVar5;
  DWORD DStack_1aeb8;
  size_t sStack_1aeb4;
  char acStack_1aeb0 [256];
  char acStack_1adb0 [256];
  undefined1 auStack_1acb0 [36576];
  undefined1 auStack_11dd0 [36576];
  undefined1 local_8ef0 [36572];
  undefined4 uStack_14;
  
  uStack_14 = 0x9c5d00;
  _getenv_s(&sStack_1aeb4,acStack_1adb0,0x100,"USERPROFILE");
  _sprintf_s(acStack_1aeb0,0x100,"%s\\Documents\\MGR\\SaveData\\%s",acStack_1adb0,"MGR.sav");
  iVar2 = FUN_00981a30("MGR.sav");
  if (iVar2 == 0) {
    uVar3 = readBinaryDataImpl(param_1,param_2);
    return uVar3;
  }
  lpBuffer = (LPCVOID)FUN_00dd29b0(iVar2,0x20,0,0);
  iVar2 = FUN_00981ac0("MGR.sav",lpBuffer,iVar2);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016585f8,acStack_1aeb0);
  }
  else {
    pvVar1 = lpBuffer;
    if (DAT_01b39598 != 0) {
      pvVar1 = DAT_01b39580;
      if (DAT_01b39598 == 1) {
        DAT_01b39584 = (int)lpBuffer + 0x8ee0;
      }
      else if (DAT_01b39598 == 2) {
        DAT_01b39588 = (int)lpBuffer + 0x11dc0;
      }
    }
    DAT_01b39580 = pvVar1;
    FID_conflict__memcpy(&DAT_01b395c0,(&DAT_01b39580)[DAT_01b39598],0x8ee0);
    if (DAT_01b3de24 != 0) {
      pvVar4 = CreateFileA(acStack_1aeb0,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
      ;
      if (pvVar4 == (HANDLE)0xffffffff) {
        pvVar4 = CreateFileA(acStack_1aeb0,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                             (HANDLE)0x0);
        if (pvVar4 == (HANDLE)0xffffffff) {
          FUN_00dd5650(&DAT_016585d0,acStack_1aeb0);
        }
        else {
          FID_conflict__memcpy(auStack_1acb0,&DAT_01b395c0,0x8ee0);
          FID_conflict__memcpy(auStack_11dd0,&DAT_01b424b0,0x8ee0);
          FID_conflict__memcpy(local_8ef0,&DAT_01b4b3a0,0x8ee0);
          BVar5 = WriteFile(pvVar4,auStack_1acb0,param_2,&DStack_1aeb8,(LPOVERLAPPED)0x0);
          if ((BVar5 != 0) && (param_2 == DStack_1aeb8)) {
            CloseHandle(pvVar4);
            return 1;
          }
        }
        CloseHandle(pvVar4);
        return 0;
      }
      BVar5 = WriteFile(pvVar4,lpBuffer,param_2,&DStack_1aeb8,(LPOVERLAPPED)0x0);
      if ((BVar5 != 0) && (param_2 == DStack_1aeb8)) {
        CloseHandle(pvVar4);
        FUN_00dd48d0(lpBuffer,0);
        return 1;
      }
      CloseHandle(pvVar4);
      FUN_00dd48d0(lpBuffer,0);
      return 0;
    }
  }
  return 0;
}

// 009C5F50  FUN_009c5f50  size=192  [between]
BOOL FUN_009c5f50(LPCSTR param_1)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  int iVar4;
  BOOL BVar5;
  char local_208 [4];
  char local_204 [260];
  char local_100 [256];
  
  DVar2 = GetFileAttributesA(param_1);
  if ((DVar2 != 0xffffffff) && ((DVar2 & 0x10) != 0)) {
    return 1;
  }
  __splitpath_s(param_1,local_208,3,local_100,0x100,(char *)0x0,0,(char *)0x0,0);
  _sprintf_s(local_204,0x104,"%s%s",local_208,local_100);
  pcVar3 = local_204;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((pcVar3[(int)(local_208 + (3 - (int)(local_204 + 1)))] == '\\') ||
     (pcVar3[(int)(local_208 + (3 - (int)(local_204 + 1)))] == '/')) {
    pcVar3[(int)(local_208 + (3 - (int)(local_204 + 1)))] = '\0';
  }
  iVar4 = FUN_009c5f50(local_204);
  if (iVar4 == 0) {
    return 0;
  }
  BVar5 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  return BVar5;
}

// 009C6110  FUN_009c6110  size=331  [between]
undefined4 __fastcall FUN_009c6110(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  char local_100 [256];
  
  if (*(int *)(param_1 + 300) == 0) {
    iVar5 = 0;
    do {
      pbVar4 = &DAT_016416fa;
      pbVar2 = (&PTR_DAT_0188f460)[iVar5 * 3];
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_009c6168:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_009c616d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_009c6168;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_009c616d:
      if (iVar3 != 0) {
        _sprintf_s(local_100,0x100,"%s%s",&DAT_01be8c30,(&PTR_DAT_0188f460)[iVar5 * 3]);
        if (iVar5 == 6) {
          uVar7 = 0;
LAB_009c61b6:
          FUN_00e9fda0(uVar7,&DAT_01be8c30,&DAT_01b7bcf0);
        }
        else if (iVar5 == 7) {
          uVar7 = 1;
          goto LAB_009c61b6;
        }
        if ((&DAT_0188f464)[iVar5 * 3] != -1) {
          iVar3 = FUN_00deba40(local_100,(&DAT_0188f464)[iVar5 * 3]);
          if (iVar3 == 0) {
            FUN_00dd5650(&DAT_016526f4,local_100);
            goto LAB_009c623d;
          }
          FUN_00dd5650("Cpk Mount File[DLC][%s]",local_100);
        }
        if (((&DAT_0188f468)[iVar5 * 3] == -1) ||
           (iVar3 = FUN_00982310((&DAT_0188f468)[iVar5 * 3],param_1 + 8), iVar3 != 0)) {
          FUN_00dd5650("Use Contents[%02d]",iVar5 + 1);
          *(undefined4 *)(param_1 + 0x10c + iVar5 * 4) = 1;
        }
        else {
          FUN_00dd5650(&DAT_01658668,iVar5);
        }
      }
LAB_009c623d:
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    *(undefined4 *)(param_1 + 300) = 1;
  }
  return 0;
}

// 009C6280  FUN_009c6280  size=233  [between]
undefined4 FUN_009c6280(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_14 [5];
  
  if ((param_1 < 6) || (7 < param_1)) {
    return 1;
  }
  iVar4 = 0;
  do {
    if (iVar4 == -1) {
      piVar2 = &DAT_01b6f7f4;
      piVar1 = (int *)&stack0xffffffe8;
      do {
        piVar1 = piVar1 + 1;
        *piVar1 = 0;
        if (piVar2[-0xf0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (*piVar2 != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (piVar2[0xf0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (piVar2[0x1e0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (piVar2[0x2d0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (piVar2[0x3c0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (piVar2[0x4b0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (piVar2[0x5a0] != 0) {
          *piVar1 = *piVar1 + 1;
        }
        if (7 < *piVar1) {
          return 1;
        }
        piVar2 = piVar2 + 0x30;
      } while ((int)piVar2 < 0x1b6fbb4);
    }
    else {
      iVar3 = 0;
      piVar1 = &DAT_01b6f434 + iVar4 * 0x30;
      while (*piVar1 != 0) {
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 0xf0;
        if (7 < iVar3) {
          return 1;
        }
      }
    }
    if (DAT_01b77e1d != '\0') {
      return 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return 0;
}

// 009C6470  FUN_009c6470  size=27  [between]
void FUN_009c6470(void)

{
  undefined4 local_4;
  
  local_4 = 0x3c;
  thunk_FUN_00dfd2d0(&local_4,&DAT_01b7bcf0);
  return;
}

// 009C64C0  FUN_009c64c0  size=41  [between]
void FUN_009c64c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dfd7a0(0);
  if ((iVar1 != 0) && (DAT_01b5d1dc == 0)) {
    iVar1 = FUN_00932720();
    if (iVar1 != 0xf01) {
      FUN_009c3bd0();
      return;
    }
  }
  return;
}

// 009C6500  thunk_FUN_00dfd6a0  size=5  [between]
undefined4 thunk_FUN_00dfd6a0(void)

{
  return 1;
}

// 009C6540  FUN_009c6540  size=224  [between]
void FUN_009c6540(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = FUN_00dfd7a0(0);
  if (iVar1 == 0) {
    return;
  }
  if (DAT_01b5d1dc != 0) {
    return;
  }
  iVar2 = FUN_00932720();
  iVar1 = DAT_018b9174;
  if (iVar2 == 0xf01) {
    return;
  }
  if (param_1 - 0x34 < 4) {
    iVar2 = FUN_00d46780();
    if ((iVar2 != 0) || (iVar1 == 0xf31)) goto LAB_009c65e4;
    bVar4 = iVar1 == 0xf32;
  }
  else if (param_1 - 0x38 < 4) {
    iVar2 = FUN_00d467a0();
    if ((iVar2 != 0) || (iVar1 == 0xf33)) goto LAB_009c65e4;
    bVar4 = iVar1 == 0xf34;
  }
  else {
    iVar1 = FUN_00d46780();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_00d467a0();
    bVar4 = iVar1 == 0;
  }
  if (!bVar4) {
    return;
  }
LAB_009c65e4:
  iVar1 = FUN_00dfd580(0);
  if (iVar1 != 0) {
    *(uint *)(&DAT_01b737b4 + (param_1 >> 5) * 4) =
         *(uint *)(&DAT_01b737b4 + (param_1 >> 5) * 4) | 0x80000000U >> ((byte)param_1 & 0x1f);
  }
  uVar3 = FUN_00dfd6b0(param_1);
  FUN_00dfd640(0,uVar3);
  return;
}

// 009C6620  thunk_FUN_00dfd560  size=5  [between]
void thunk_FUN_00dfd560(void)

{
  DAT_018cea10 = 0xffffffff;
  return;
}

// 009C6630  FUN_009c6630  size=26  [between]
void FUN_009c6630(void)

{
  if (DAT_01b5d1dc != 0) {
    DAT_01b5d1dc = 0;
    DAT_01b5d1d4 = 0;
    FUN_00dfd560();
    return;
  }
  return;
}

// 009C6650  FUN_009c6650  size=11  [between]
void FUN_009c6650(void)

{
  DAT_01b6efa0 = 0;
  return;
}

// 009C66E0  FUN_009c66e0  size=135  [between]
void __thiscall FUN_009c66e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  _memset(param_2,0,0x90);
  *param_2 = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 10;
  param_2[8] = 10;
  param_2[9] = 10;
  param_2[1] = DAT_01b6efa0;
  param_2[2] = 0;
  uVar1 = FUN_00df7fd0();
  param_2[3] = uVar1;
  uVar1 = FUN_00cacfb0();
  uVar1 = FUN_00cad030(uVar1);
  param_2[4] = uVar1;
  param_2[10] = 5;
  param_2[0xb] = 5;
  FUN_009c42f0(param_1 + 0x11d30);
  return;
}

// 009C6770  FUN_009c6770  size=163  [between]
void FUN_009c6770(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00b79e20();
    }
  }
  if (DAT_01b77e34 == 0) {
    DAT_01bea094 = DAT_01bea094 & 0xff7fffff;
  }
  else {
    DAT_01bea094 = DAT_01bea094 | 0x800000;
  }
  if (DAT_01b77e38 == 0) {
    DAT_01bea094 = DAT_01bea094 & 0xffbfffff;
  }
  else {
    DAT_01bea094 = DAT_01bea094 | 0x400000;
  }
  FUN_009cb5a0((float)DAT_01b77e4c * 0.1);
  FUN_009cb610((float)DAT_01b77e50 * 0.1);
  FUN_009cb680((float)DAT_01b77e54 * 0.1);
  return;
}

// 009C6820  FUN_009c6820  size=255  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009c6820(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_2 != (uint *)0x0) {
    switch(param_1) {
    case 0:
      goto switchD_009c6844_caseD_0;
    case 1:
      puVar3 = &DAT_01b764a0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      return 1;
    case 2:
      FID_conflict__memcpy(&DAT_01b764d0,param_2,0x1800);
      return 1;
    case 3:
      puVar3 = &DAT_01b6efe0;
      for (iVar2 = 0xf4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      return 1;
    default:
      return 0;
    }
  }
  return 0;
switchD_009c6844_caseD_0:
  uVar1 = *param_2 & 0xf00;
  if ((uVar1 == 0xc00) || (uVar1 == 0xd00)) {
    DAT_01b77e04 = *param_2;
    _strcpy_s(&DAT_01b77e08,0x14,(char *)(param_2 + 1));
  }
  else {
    puVar3 = &DAT_01b76470;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((_DAT_01bea098 & 0x80000000) == 0) {
    DAT_01b77e1c = 0;
    _DAT_01b77e1e = 0;
    return 1;
  }
  DAT_01b77e1c = 1;
  _DAT_01b77e1e = CONCAT11(DAT_0188dfe0,DAT_01b391c8);
  return 1;
}

// 009C6930  FUN_009c6930  size=103  [between]
void FUN_009c6930(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01b762bc == 0) {
    uVar1 = FUN_00932720();
    iVar2 = FUN_009c4b40(uVar1);
    if (1 < iVar2) {
      switch(DAT_01b762b8) {
      case 0:
        uVar1 = 0x10;
        break;
      case 1:
        uVar1 = 0x11;
        break;
      case 2:
        uVar1 = 0x12;
        break;
      case 3:
        uVar1 = 0x13;
        break;
      case 4:
        uVar1 = 0x14;
        break;
      case 5:
        uVar1 = 0x35;
        break;
      case 6:
        uVar1 = 0x39;
        break;
      default:
        goto switchD_009c6958_default;
      }
      FUN_009c6540(uVar1);
    }
  }
switchD_009c6958_default:
  DAT_01b762b8 = 0xffffffff;
  DAT_01b762bc = 0;
  return;
}

// 009C69C0  FUN_009c69c0  size=320  [between]
void FUN_009c69c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = DAT_01b75894;
  switch(param_2) {
  case 1:
  case 2:
  case 7:
    goto switchD_009c69ce_caseD_1;
  default:
    DAT_01b7588c = param_1[1];
    uVar1 = *param_1;
    iVar4 = FUN_00d46780();
    uVar2 = DAT_01b75888;
    uVar3 = uVar1;
    if ((iVar4 == 0) && (iVar4 = FUN_00d467a0(), uVar2 = uVar1, uVar3 = DAT_01b75994, iVar4 != 0)) {
      uVar2 = DAT_01b75888;
      DAT_01b759a8 = uVar1;
    }
    DAT_01b75994 = uVar3;
    DAT_01b75888 = uVar2;
    uVar1 = param_1[2];
    iVar4 = FUN_00d46780();
    uVar2 = DAT_01b75890;
    uVar3 = uVar1;
    if ((iVar4 == 0) && (iVar4 = FUN_00d467a0(), uVar2 = uVar1, uVar3 = DAT_01b75990, iVar4 != 0)) {
      uVar2 = DAT_01b75890;
      DAT_01b759a4 = uVar1;
    }
    DAT_01b75990 = uVar3;
    DAT_01b75890 = uVar2;
    uVar1 = *param_1;
    iVar4 = FUN_00d46780();
    uVar2 = DAT_01b75888;
    uVar3 = uVar1;
    if ((iVar4 == 0) && (iVar4 = FUN_00d467a0(), uVar2 = uVar1, uVar3 = DAT_01b75994, iVar4 != 0)) {
      uVar2 = DAT_01b75888;
      DAT_01b759a8 = uVar1;
    }
    DAT_01b75994 = uVar3;
    DAT_01b75888 = uVar2;
    uVar1 = param_1[3];
    iVar4 = FUN_00d46780();
    if (iVar4 != 0) {
      DAT_01b7598c = uVar1;
      return;
    }
    iVar4 = FUN_00d467a0();
    if (iVar4 != 0) {
      DAT_01b759a0 = uVar1;
      return;
    }
switchD_009c69ce_caseD_1:
    DAT_01b75894 = uVar1;
    return;
  case 4:
    FUN_009c4d40(*param_1);
    FUN_009c4ca0(param_1[3]);
    return;
  case 5:
    FUN_009c4ca0(param_1[3]);
    return;
  case 6:
    DAT_01b7588c = param_1[1];
    return;
  }
}

// 009C6B20  FUN_009c6b20  size=319  [between]
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_009c6b20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = DAT_01b71534;
  iVar2 = DAT_01b71834;
  iVar3 = DAT_01b710b4;
  iVar4 = DAT_01b71474;
  iVar5 = DAT_01b718f4;
  iVar6 = DAT_01b71174;
  if (param_1 != 4) {
    iVar7 = DAT_01b70ff4;
    iVar1 = DAT_01b713b4;
    iVar2 = DAT_01b71774;
    iVar8 = DAT_01b70f34;
    iVar6 = DAT_01b71234;
    iVar3 = DAT_01b712f4;
    iVar4 = DAT_01b715f4;
    iVar5 = DAT_01b716b4;
    iVar9 = DAT_01b70e74;
    if ((((param_1 != 0) && (param_1 != 1)) && (param_1 != 2)) &&
       (iVar7 = DAT_01b71174, iVar1 = DAT_01b71534, iVar2 = DAT_01b718f4, iVar8 = DAT_01b710b4,
       iVar6 = DAT_01b713b4, iVar3 = DAT_01b71474, iVar4 = DAT_01b71774, iVar5 = DAT_01b71834,
       iVar9 = DAT_01b70ff4, param_1 != 3)) {
      return 0;
    }
    if (iVar9 != 0) {
      return 1;
    }
    if (iVar8 != 0) {
      return 1;
    }
    if (iVar7 != 0) {
      return 1;
    }
  }
  if (((((iVar6 == 0) && (iVar3 == 0)) && ((iVar1 == 0 && ((iVar4 == 0 && (iVar5 == 0)))))) &&
      (iVar2 == 0)) && (DAT_01b73810 == 0)) {
    return 0;
  }
  return 1;
}

// 009C6C60  FUN_009c6c60  size=913  [between]
undefined4 FUN_009c6c60(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_01b77e1d == '\0') {
    if (param_1 == 4) {
      if ((DAT_01b6f734 == 0) && (DAT_01b6f674 == 0)) {
        return 0;
      }
      if ((DAT_01b6faf4 == 0) && (DAT_01b6fa34 == 0)) {
        return 0;
      }
      if ((DAT_01b6feb4 == 0) && (DAT_01b6fdf4 == 0)) {
        return 0;
      }
      if ((DAT_01b70274 == 0) && (DAT_01b701b4 == 0)) {
        return 0;
      }
      if ((DAT_01b70634 == 0) && (DAT_01b70574 == 0)) {
        return 0;
      }
      if ((DAT_01b709f4 == 0) && (DAT_01b70934 == 0)) {
        return 0;
      }
      if ((DAT_01b70db4 == 0) && (DAT_01b70cf4 == 0)) {
        return 0;
      }
      if ((DAT_01b71174 == 0) && (DAT_01b710b4 == 0)) {
        return 0;
      }
      iVar1 = DAT_01b71834;
      iVar2 = DAT_01b718f4;
      if ((DAT_01b71534 == 0) && (DAT_01b71474 == 0)) {
        return 0;
      }
    }
    else {
      if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
        if (((DAT_01b6f434 == 0) && (DAT_01b6f4f4 == 0)) && (DAT_01b6f5b4 == 0)) {
          return 0;
        }
        if (((DAT_01b6f7f4 == 0) && (DAT_01b6f8b4 == 0)) && (DAT_01b6f974 == 0)) {
          return 0;
        }
        if (((DAT_01b6fbb4 == 0) && (DAT_01b6fc74 == 0)) && (DAT_01b6fd34 == 0)) {
          return 0;
        }
        if (((DAT_01b6ff74 == 0) && (DAT_01b70034 == 0)) && (DAT_01b700f4 == 0)) {
          return 0;
        }
        if (((DAT_01b70334 == 0) && (DAT_01b703f4 == 0)) && (DAT_01b704b4 == 0)) {
          return 0;
        }
        if (((DAT_01b706f4 == 0) && (DAT_01b707b4 == 0)) && (DAT_01b70874 == 0)) {
          return 0;
        }
        if (((DAT_01b70ab4 == 0) && (DAT_01b70b74 == 0)) && (DAT_01b70c34 == 0)) {
          return 0;
        }
        if (((DAT_01b70e74 == 0) && (DAT_01b70f34 == 0)) && (DAT_01b70ff4 == 0)) {
          return 0;
        }
        if (((DAT_01b71234 == 0) && (DAT_01b712f4 == 0)) && (DAT_01b713b4 == 0)) {
          return 0;
        }
        if (DAT_01b715f4 != 0) {
          return 1;
        }
        if (DAT_01b716b4 == 0) {
          if (DAT_01b71774 == 0) {
            return 0;
          }
          return 1;
        }
        return 1;
      }
      if (param_1 != 3) {
        return 0;
      }
      if (((DAT_01b6f5b4 == 0) && (DAT_01b6f674 == 0)) && (DAT_01b6f734 == 0)) {
        return 0;
      }
      if (((DAT_01b6f974 == 0) && (DAT_01b6fa34 == 0)) && (DAT_01b6faf4 == 0)) {
        return 0;
      }
      if (((DAT_01b6fd34 == 0) && (DAT_01b6fdf4 == 0)) && (DAT_01b6feb4 == 0)) {
        return 0;
      }
      if (((DAT_01b700f4 == 0) && (DAT_01b701b4 == 0)) && (DAT_01b70274 == 0)) {
        return 0;
      }
      if (((DAT_01b704b4 == 0) && (DAT_01b70574 == 0)) && (DAT_01b70634 == 0)) {
        return 0;
      }
      if (((DAT_01b70874 == 0) && (DAT_01b70934 == 0)) && (DAT_01b709f4 == 0)) {
        return 0;
      }
      if (((DAT_01b70c34 == 0) && (DAT_01b70cf4 == 0)) && (DAT_01b70db4 == 0)) {
        return 0;
      }
      if (((DAT_01b70ff4 == 0) && (DAT_01b710b4 == 0)) && (DAT_01b71174 == 0)) {
        return 0;
      }
      if (((DAT_01b713b4 == 0) && (DAT_01b71474 == 0)) && (DAT_01b71534 == 0)) {
        return 0;
      }
      iVar1 = DAT_01b718f4;
      iVar2 = DAT_01b71834;
      if (DAT_01b71774 != 0) {
        return 1;
      }
    }
    if ((iVar2 == 0) && (iVar1 == 0)) {
      return 0;
    }
  }
  return 1;
}

// 009C7000  FUN_009c7000  size=83  [between]
undefined4 FUN_009c7000(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_01b762c0;
  do {
    iVar1 = 0;
    piVar2 = piVar3;
    do {
      if (*piVar2 != 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 5);
    piVar3 = piVar3 + 5;
  } while ((int)piVar3 < 0x1b76360);
  iVar1 = FUN_009c5530(&DAT_01b6efe0);
  if ((((iVar1 != 0) || (DAT_01b76470 != 0)) && (-1 < iVar1)) && (iVar1 < 8)) {
    return 1;
  }
  return 0;
}

// 009C7060  FUN_009c7060  size=72  [between]
undefined4 FUN_009c7060(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_01b76360;
  do {
    iVar1 = 0;
    piVar2 = piVar3;
    do {
      if (*piVar2 != 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 5);
    piVar3 = piVar3 + 5;
  } while ((int)piVar3 < 0x1b76388);
  iVar1 = FUN_009c5530(&DAT_01b6efe0);
  if ((7 < iVar1) && (iVar1 < 10)) {
    return 1;
  }
  return 0;
}

// 009C70B0  FUN_009c70b0  size=69  [between]
bool FUN_009c70b0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_01b71234;
  piVar1 = &DAT_01b76360;
  while ((*piVar1 == 0 && (*piVar3 == 0))) {
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 0x30;
    if (0x1b76373 < (int)piVar1) {
      iVar2 = FUN_009c5530(&DAT_01b6efe0);
      return iVar2 == 8;
    }
  }
  return true;
}

// 009C7100  FUN_009c7100  size=69  [between]
bool FUN_009c7100(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_01b715f4;
  piVar1 = &DAT_01b76374;
  while ((*piVar1 == 0 && (*piVar3 == 0))) {
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 0x30;
    if (0x1b76387 < (int)piVar1) {
      iVar2 = FUN_009c5530(&DAT_01b6efe0);
      return iVar2 == 9;
    }
  }
  return true;
}

// 009C7170  FUN_009c7170  size=71  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009c7170(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[1] = 0;
  param_1[5] = 0;
  _DAT_01b39590 = &DAT_01b542a8;
  param_1 = param_1 + 6;
  iVar1 = 3;
  do {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0xffffffff;
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 009C71E0  FUN_009c71e0  size=78  [between]
undefined4 __thiscall FUN_009c71e0(undefined4 *param_1,int param_2)

{
  if (param_2 == -1) {
    FUN_00dd5650(&DAT_016586ac);
    return 0;
  }
  *param_1 = 4;
  DAT_01b3958c = param_1 + 0x14;
  DAT_01b39598 = param_2;
  DAT_01b3959c = 0;
  DAT_01b395a4 = 2;
  param_1[4] = param_2;
  return 1;
}

// 009C7230  FUN_009c7230  size=78  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_009c7230(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = param_1 + 6;
  iVar3 = 3;
  do {
    iVar2 = iVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 4;
    iVar3 = iVar2 + -1;
  } while (iVar3 != 0);
  *param_1 = 2;
  DAT_01b39574 = 0;
  DAT_01b39578 = 0;
  _DAT_01b3957c = 0;
  DAT_01b395a4 = 1;
  DAT_01b39570 = 0;
  return iVar2;
}

// 009C7290  FUN_009c7290  size=62  [between]
undefined4 __thiscall FUN_009c7290(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = 7;
  DAT_01b39598 = param_3;
  DAT_01b3959c = 0;
  DAT_01b3958c = param_1 + 0x14;
  DAT_01b395a4 = 2;
  return 1;
}

// 009C72D0  FUN_009c72d0  size=3  [between]
undefined4 FUN_009c72d0(void)

{
  return 0;
}

// 009C72E0  FUN_009c72e0  size=3  [between]
undefined4 FUN_009c72e0(void)

{
  return 0;
}

// 009C72F0  FUN_009c72f0  size=3  [between]
undefined4 FUN_009c72f0(void)

{
  return 0;
}

// 009C7300  FUN_009c7300  size=6  [between]
undefined4 FUN_009c7300(void)

{
  return 1;
}

// 009C73D0  FUN_009c73d0  size=10  [between]
void FUN_009c73d0(void)

{
  FUN_009c6110();
  return;
}

// 009C73E0  FUN_009c73e0  size=6  [between]
undefined4 FUN_009c73e0(void)

{
  return 1;
}

// 009C73F0  FUN_009c73f0  size=16  [between]
void FUN_009c73f0(undefined4 param_1)

{
  FUN_009c6280(param_1);
  return;
}

// 009C7400  FUN_009c7400  size=3  [between]
undefined4 FUN_009c7400(void)

{
  return 0;
}

// 009C7420  FUN_009c7420  size=5  [between]
undefined4 FUN_009c7420(undefined4 param_1)

{
  return param_1;
}

// 009C7430  FUN_009c7430  size=19  [between]
int FUN_009c7430(int param_1)

{
  if ((param_1 != 6) && (param_1 == 8)) {
    param_1 = 0;
  }
  return param_1;
}

// 009C7450  FUN_009c7450  size=1  [between]
void FUN_009c7450(void)

{
  return;
}

// 009C7470  FUN_009c7470  size=1  [between]
void FUN_009c7470(void)

{
  return;
}

// 009C74C0  FUN_009c74c0  size=206  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c74c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_4 [4];
  
  switch(DAT_01b39570) {
  case 0:
    DAT_01b39570 = 1;
    return;
  case 1:
    iVar1 = 0;
    break;
  case 2:
    iVar1 = SaveDataCtrl::readBinaryDataImpl(local_4,0x1aca0);
    if (iVar1 == 0) {
      DAT_01b39570 = 1;
      return;
    }
    FUN_009c56d0(&DAT_01b395b0,&DAT_01b395c0);
    puVar2 = (undefined4 *)(DAT_01b39598 * 0x10 + _DAT_01b39590);
    *puVar2 = DAT_01b395b0;
    puVar2[1] = DAT_01b395b4;
    puVar2[2] = DAT_01b395b8;
    puVar2[3] = DAT_01b395bc;
    DAT_01b39570 = 1;
    return;
  case 3:
    DAT_01b395a4 = 0;
  default:
    return;
  }
  do {
    if ((&DAT_01b39574)[iVar1] == 0) {
      (&DAT_01b39574)[iVar1] = 1;
      DAT_01b39570 = 2;
      DAT_01b39598 = iVar1;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  DAT_01b39570 = 3;
  return;
}

// 009C75A0  FUN_009c75a0  size=904  [between]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_009c75a0(DWORD param_1)

{
  void *_Src;
  int iVar1;
  HANDLE pvVar2;
  DWORD nNumberOfBytesToRead;
  LPVOID lpBuffer;
  BOOL BVar3;
  undefined4 *_Dst;
  DWORD DStack_1aebc;
  DWORD DStack_1aeb8;
  size_t sStack_1aeb4;
  char acStack_1aeb0 [256];
  char acStack_1adb0 [256];
  undefined1 auStack_1acb0 [36576];
  undefined1 auStack_11dd0 [36576];
  undefined1 local_8ef0 [36572];
  undefined4 uStack_14;
  
  uStack_14 = 0x9c75b0;
  _getenv_s(&sStack_1aeb4,acStack_1adb0,0x100,"USERPROFILE");
  _sprintf_s(acStack_1aeb0,0x100,"%s\\Documents\\MGR\\SaveData",acStack_1adb0);
  iVar1 = FUN_009c5f50(acStack_1aeb0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016586d0);
    return;
  }
  _sprintf_s(acStack_1aeb0,0x100,"%s\\%s",acStack_1aeb0,"MGR.sav");
  pvVar2 = CreateFileA(acStack_1aeb0,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)0xffffffff);
    pvVar2 = CreateFileA(acStack_1aeb0,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (pvVar2 != (HANDLE)0xffffffff) {
      iVar1 = 0;
      _Dst = &DAT_01b395b0;
      do {
        if (iVar1 != DAT_01b39598) {
          _memset(_Dst,0,0x1acd0);
        }
        _Dst = _Dst + 0x23bc;
        iVar1 = iVar1 + 1;
      } while ((int)_Dst < 0x1b54280);
      FID_conflict__memcpy(auStack_1acb0,&DAT_01b395c0,0x8ee0);
      FID_conflict__memcpy(auStack_11dd0,&DAT_01b424b0,0x8ee0);
      FID_conflict__memcpy(local_8ef0,&DAT_01b4b3a0,0x8ee0);
      WriteFile(pvVar2,auStack_1acb0,param_1,&DStack_1aebc,(LPOVERLAPPED)0x0);
      CloseHandle(pvVar2);
      return;
    }
    FUN_00dd5650(&DAT_016585d0,acStack_1aeb0);
    CloseHandle((HANDLE)0xffffffff);
    return;
  }
  nNumberOfBytesToRead = GetFileSize(pvVar2,(LPDWORD)0x0);
  lpBuffer = (LPVOID)FUN_00dd29b0(nNumberOfBytesToRead,0x20,0,0);
  BVar3 = ReadFile(pvVar2,lpBuffer,nNumberOfBytesToRead,&DStack_1aeb8,(LPOVERLAPPED)0x0);
  if ((BVar3 == 0) || (nNumberOfBytesToRead != DStack_1aeb8)) {
    CloseHandle(pvVar2);
    FUN_00dd48d0(lpBuffer,0);
    return;
  }
  DAT_01b39584 = (void *)((int)lpBuffer + 0x8ee0);
  _Src = (void *)((int)lpBuffer + 0x11dc0);
  DAT_01b39580 = lpBuffer;
  DAT_01b39588 = _Src;
  if (DAT_01b39598 == 0) {
    FID_conflict__memcpy(&DAT_01b424b0,DAT_01b39584,0x8ee0);
    FID_conflict__memcpy(&DAT_01b4b3a0,_Src,0x8ee0);
  }
  else if (DAT_01b39598 == 1) {
    FID_conflict__memcpy(&DAT_01b424b0,&DAT_01b395c0,0x8ee0);
    FID_conflict__memcpy(&DAT_01b395c0,lpBuffer,0x8ee0);
    FID_conflict__memcpy(&DAT_01b4b3a0,_Src,0x8ee0);
  }
  else if (DAT_01b39598 == 2) {
    FID_conflict__memcpy(&DAT_01b4b3a0,&DAT_01b395c0,0x8ee0);
    FID_conflict__memcpy(&DAT_01b395c0,lpBuffer,0x8ee0);
    FID_conflict__memcpy(&DAT_01b424b0,DAT_01b39584,0x8ee0);
  }
  CloseHandle(pvVar2);
  pvVar2 = CreateFileA(acStack_1aeb0,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (pvVar2 != (HANDLE)0xffffffff) {
    FID_conflict__memcpy(auStack_1acb0,&DAT_01b395c0,0x8ee0);
    FID_conflict__memcpy(auStack_11dd0,&DAT_01b424b0,0x8ee0);
    FID_conflict__memcpy(local_8ef0,&DAT_01b4b3a0,0x8ee0);
    BVar3 = WriteFile(pvVar2,auStack_1acb0,param_1,&DStack_1aebc,(LPOVERLAPPED)0x0);
    if ((BVar3 != 0) && (param_1 != DStack_1aebc)) {
      CloseHandle(pvVar2);
      FUN_00dd48d0(lpBuffer,0);
      return;
    }
  }
  CloseHandle(pvVar2);
  FUN_00dd48d0(lpBuffer,0);
  return;
}

// 009C7930  FUN_009c7930  size=239  [between]
void FUN_009c7930(void)

{
  int iVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD local_208;
  size_t local_204;
  char local_200 [256];
  char local_100 [256];
  
  _getenv_s(&local_204,local_100,0x100,"USERPROFILE");
  _sprintf_s(local_200,0x100,"%s\\Documents\\MGR\\SaveData",local_100);
  iVar1 = FUN_009c5f50(local_200);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01658758);
    return;
  }
  _sprintf_s(local_200,0x100,"%s\\GraphicOption",local_200);
  hFile = CreateFileA(local_200,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (((hFile != (HANDLE)0xffffffff) &&
      (BVar2 = WriteFile(hFile,&DAT_01b6efb0,0x30,&local_208,(LPOVERLAPPED)0x0), BVar2 != 0)) &&
     (local_208 == 0x30)) {
    CloseHandle(hFile);
    return;
  }
  CloseHandle(hFile);
  FUN_00dd5650(&DAT_01658714);
  return;
}

// 009C7A20  SaveDataCtrl::readBinaryGraphicOption  size=304  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SaveDataCtrl::readBinaryGraphicOption(void)

{
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD local_208;
  size_t local_204;
  char local_200 [256];
  char local_100 [256];
  
  _getenv_s(&local_204,local_100,0x100,"USERPROFILE");
  _sprintf_s(local_200,0x100,"%s\\Documents\\MGR\\SaveData\\GraphicOption",local_100);
  hFile = CreateFileA(local_200,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00dd5650(&DAT_01658788,local_200);
    DAT_01b6efb0 = 2;
    DAT_01b6efb4 = 2;
    DAT_01b6efb8 = 0;
    DAT_01b6efbc = 1;
    DAT_01b6efc0 = 5;
    _DAT_01b6efc4 = 0;
    DAT_01b6efc8 = 1;
    DAT_01b6efcc = 1;
    DAT_01b6efd0 = 1;
    DAT_01b6efd4 = 1;
    FUN_009c7930();
    return;
  }
  nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
  BVar1 = ReadFile(hFile,&DAT_01b39540,nNumberOfBytesToRead,&local_208,(LPOVERLAPPED)0x0);
  if ((BVar1 != 0) && (nNumberOfBytesToRead == local_208)) {
    CloseHandle(hFile);
    puVar3 = &DAT_01b39540;
    puVar4 = &DAT_01b6efb0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  CloseHandle(hFile);
  return;
}

// 009C7B50  FUN_009c7b50  size=126  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009c7b50(void)

{
  int iVar1;
  
  iVar1 = FUN_00dfd500(&DAT_01b7bcf0);
  if (iVar1 != 0) {
    iVar1 = FUN_00dfe7c0();
    if (iVar1 != 0) {
      DAT_01b5428c = 0;
      _DAT_01b54288 = 0;
      _DAT_01b54284 = 0;
      DAT_01b54280 = 0;
      DAT_01b395ac = 0;
      DAT_01b395a8 = 0;
      FUN_00dfe890(&LAB_009c3db0);
      FUN_009c7170();
      DAT_01b5d1d8 = 0;
      DAT_01b6efa0 = 0;
      DAT_01b5d1dc = 0;
      DAT_01b5d1d4 = 0;
      DAT_01b5d1d0 = 0;
      return 1;
    }
  }
  return 0;
}

// 009C7C00  FUN_009c7c00  size=10  [between]
void FUN_009c7c00(void)

{
  FUN_00dfe820();
  FUN_00dfd540();
  return;
}

// 009C7C10  FUN_009c7c10  size=12  [between]
bool FUN_009c7c10(void)

{
  int iVar1;
  
  iVar1 = FUN_00df8000();
  return iVar1 != 0;
}

// 009C7C20  FUN_009c7c20  size=261  [between]
void FUN_009c7c20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = FUN_00d46780();
  uVar3 = DAT_01b75998;
  if ((iVar2 == 0) && (iVar2 = FUN_00d467a0(), uVar3 = DAT_01b759ac, iVar2 == 0)) {
    uVar3 = DAT_01b75880;
  }
  DAT_01be9fb4 = uVar3;
  iVar4 = FUN_00d46780();
  iVar2 = DAT_01b75994;
  if ((iVar4 == 0) && (iVar4 = FUN_00d467a0(), iVar2 = DAT_01b759a8, iVar4 == 0)) {
    iVar2 = DAT_01b75888;
  }
  if ((iVar2 != 6) && (iVar2 == 8)) {
    iVar2 = 0;
  }
  DAT_01bea000 = iVar2;
  iVar2 = FUN_00d46780();
  uVar5 = DAT_01b7599c;
  if ((iVar2 == 0) && (iVar2 = FUN_00d467a0(), uVar5 = DAT_01b759b0, iVar2 == 0)) {
    uVar5 = DAT_01b75884;
  }
  if (3 < uVar5) {
    FUN_00dd5650(&DAT_01655734,uVar5);
    uVar5 = DAT_01be9fb0;
  }
  DAT_01be9fb0 = uVar5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x84))();
  }
  FUN_00954980();
  ProgressFlag::LOAD();
  ProgressFlagDlc2::LOAD();
  ProgressFlagDlc3::LOAD();
  return;
}

// 009C7D30  FUN_009c7d30  size=104  [between]
undefined4 FUN_009c7d30(void)

{
  int iVar1;
  
  if (((DAT_01b73810 == 0) && (DAT_01b70ff4 == 0)) && (DAT_01b710b4 == 0)) {
    iVar1 = FUN_009c6280(6);
    if ((iVar1 == 0) || ((DAT_01b713b4 == 0 && (DAT_01b71474 == 0)))) {
      iVar1 = FUN_009c6280(7);
      if ((iVar1 == 0) || ((DAT_01b71774 == 0 && (DAT_01b71834 == 0)))) {
        return 0;
      }
    }
  }
  return 1;
}

// 009C7DA0  FUN_009c7da0  size=104  [between]
undefined4 FUN_009c7da0(void)

{
  int iVar1;
  
  if (((DAT_01b73810 == 0) && (DAT_01b710b4 == 0)) && (DAT_01b71174 == 0)) {
    iVar1 = FUN_009c6280(6);
    if ((iVar1 == 0) || ((DAT_01b71474 == 0 && (DAT_01b71534 == 0)))) {
      iVar1 = FUN_009c6280(7);
      if ((iVar1 == 0) || ((DAT_01b71834 == 0 && (DAT_01b718f4 == 0)))) {
        return 0;
      }
    }
  }
  return 1;
}

// 009C7E10  FUN_009c7e10  size=681  [between]
void FUN_009c7e10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00d46780();
  iVar3 = DAT_01b75994;
  if ((((iVar1 == 0) && (param_2 != 8)) &&
      (iVar1 = FUN_00d467a0(), iVar3 = DAT_01b759a8, iVar1 == 0)) && (param_2 != 9)) {
    iVar3 = DAT_01b75888;
  }
  param_1[1] = DAT_01b7588c;
  iVar2 = FUN_00d46780();
  iVar1 = DAT_01b75990;
  if (((iVar2 == 0) && (param_2 != 8)) &&
     ((iVar2 = FUN_00d467a0(), iVar1 = DAT_01b759a4, iVar2 == 0 && (param_2 != 9)))) {
    iVar1 = DAT_01b75890;
  }
  param_1[2] = iVar1;
  iVar2 = FUN_00d46780();
  iVar1 = DAT_01b7598c;
  if (((iVar2 == 0) && (param_2 != 8)) &&
     ((iVar2 = FUN_00d467a0(), iVar1 = DAT_01b759a0, iVar2 == 0 && (param_2 != 9)))) {
    iVar1 = DAT_01b75894;
  }
  param_1[3] = iVar1;
  param_1[4] = 0;
  iVar1 = 5;
  if (param_2 == 1) {
    iVar1 = 9;
  }
  else if ((param_2 != 5) && (iVar1 = iVar3, param_2 == 6)) {
    iVar1 = 0;
  }
  if (param_2 == 1) {
    param_1[1] = 0;
  }
  else if ((param_2 == 4) || (param_2 == 5)) {
    param_1[1] = 5;
  }
  switch(param_2) {
  case 1:
  case 4:
  case 5:
  case 6:
    param_1[2] = 0;
  }
  if ((param_2 == 1) || (param_2 == 6)) {
    param_1[3] = 0;
  }
  else if (param_2 == 7) {
    param_1[1] = 5;
    param_1[2] = 0;
    param_1[3] = 0;
    iVar1 = 0;
  }
  else {
    if (param_2 == 8) {
      iVar1 = 10;
    }
    else {
      if (param_2 != 9) goto LAB_009c7f59;
      iVar1 = 0xb;
    }
    param_1[1] = 0;
  }
LAB_009c7f59:
  if ((iVar1 != 6) && (iVar1 == 8)) {
    iVar1 = 0;
  }
  *param_1 = iVar1;
  if ((((param_2 != 8) && (param_2 != 9)) && (param_2 != 1)) &&
     ((iVar3 = FUN_00a4ae30(), iVar3 == 0 && (iVar3 = FUN_00a4a3d0(DAT_018b9174), iVar3 == 0)))) {
    iVar3 = FUN_009c4930(0x2b);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x10;
    }
    iVar3 = FUN_009c4930(0x25);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x1000;
    }
    iVar3 = FUN_009c4930(0x2c);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 4;
    }
    iVar3 = FUN_009c4930(0x29);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 2;
    }
    iVar3 = FUN_009c4930(0x27);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 1;
    }
    iVar3 = FUN_009c4930(0x28);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 8;
    }
    iVar3 = FUN_009c4930(0x2d);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x20;
    }
    iVar3 = FUN_009c4930(0x26);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x800;
    }
    iVar3 = FUN_009c4930(0x2a);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x2000;
    }
    iVar3 = FUN_009c4930(0x2f);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x40;
    }
    iVar3 = FUN_009c4930(0x2e);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x80;
    }
    iVar3 = FUN_009c4930(0x30);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x100;
    }
    iVar3 = FUN_009c4930(0x31);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x200;
    }
    iVar3 = FUN_009c4930(0x32);
    if (iVar3 != 0) {
      param_1[4] = param_1[4] | 0x400;
    }
  }
  return;
}

// 009C80E0  FUN_009c80e0  size=82  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009c80e0(void *param_1)

{
  FID_conflict__memcpy(param_1,(void *)((int)param_1 + 0x8ee0),0x8ee0);
  FID_conflict__memcpy(&DAT_01b6efe0,(void *)((int)param_1 + 0x8ee0),0x8ee0);
  if ((_DAT_01bea098 & 0x20000000) != 0) {
    *(undefined1 *)((int)param_1 + 0x8e3d) = 1;
    DAT_01b77e1d = 1;
  }
  FUN_009c7c20();
  FUN_009c6770();
  return;
}

// 009C8140  thunk_FUN_009c7930  size=5  [between]
void thunk_FUN_009c7930(void)

{
  int iVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DStack_208;
  size_t sStack_204;
  char acStack_200 [256];
  char acStack_100 [256];
  
  _getenv_s(&sStack_204,acStack_100,0x100,"USERPROFILE");
  _sprintf_s(acStack_200,0x100,"%s\\Documents\\MGR\\SaveData",acStack_100);
  iVar1 = FUN_009c5f50(acStack_200);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01658758);
    return;
  }
  _sprintf_s(acStack_200,0x100,"%s\\GraphicOption",acStack_200);
  hFile = CreateFileA(acStack_200,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (((hFile != (HANDLE)0xffffffff) &&
      (BVar2 = WriteFile(hFile,&DAT_01b6efb0,0x30,&DStack_208,(LPOVERLAPPED)0x0), BVar2 != 0)) &&
     (DStack_208 == 0x30)) {
    CloseHandle(hFile);
    return;
  }
  CloseHandle(hFile);
  FUN_00dd5650(&DAT_01658714);
  return;
}

// 009C8150  SaveDataCtrl::readBinaryGraphicOption  size=5  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SaveDataCtrl::readBinaryGraphicOption(void)

{
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD DStack_208;
  size_t sStack_204;
  char acStack_200 [256];
  char acStack_100 [256];
  
  _getenv_s(&sStack_204,acStack_100,0x100,"USERPROFILE");
  _sprintf_s(acStack_200,0x100,"%s\\Documents\\MGR\\SaveData\\GraphicOption",acStack_100);
  hFile = CreateFileA(acStack_200,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00dd5650(&DAT_01658788,acStack_200);
    DAT_01b6efb0 = 2;
    DAT_01b6efb4 = 2;
    DAT_01b6efb8 = 0;
    DAT_01b6efbc = 1;
    DAT_01b6efc0 = 5;
    _DAT_01b6efc4 = 0;
    DAT_01b6efc8 = 1;
    DAT_01b6efcc = 1;
    DAT_01b6efd0 = 1;
    DAT_01b6efd4 = 1;
    FUN_009c7930();
    return;
  }
  nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
  BVar1 = ReadFile(hFile,&DAT_01b39540,nNumberOfBytesToRead,&DStack_208,(LPOVERLAPPED)0x0);
  if ((BVar1 != 0) && (nNumberOfBytesToRead == DStack_208)) {
    CloseHandle(hFile);
    puVar3 = &DAT_01b39540;
    puVar4 = &DAT_01b6efb0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  CloseHandle(hFile);
  return;
}

// 009C8160  FUN_009c8160  size=134  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c8160(void)

{
  undefined1 local_4 [4];
  
  if (DAT_01b3959c == 0) {
    DAT_01b3959c = 1;
  }
  else {
    if (DAT_01b3959c == 1) {
      SaveDataCtrl::readBinaryDataImpl(local_4,0x1aca0);
      FID_conflict__memcpy(DAT_01b3958c,&DAT_01b395c0,0x8ee0);
      DAT_01b3959c = 2;
      return;
    }
    if (DAT_01b3959c == 2) {
      FID_conflict__memcpy(&DAT_01b6efe0,&DAT_01b395c0,0x8ee0);
      if ((_DAT_01bea098 & 0x20000000) != 0) {
        DAT_01b77e1d = 1;
      }
      DAT_01b395a4 = 0;
      return;
    }
  }
  return;
}

// 009C81F0  FUN_009c81f0  size=89  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009c81f0(undefined4 param_1)

{
  DAT_01b39598 = param_1;
  DAT_01b3959c = 0;
  DAT_01b395a4 = 4;
  _DAT_01b77ec0 = FUN_00dd82c0(&LAB_009c7480,0,0x4000,0,"SaveDataDelete",0);
  if (_DAT_01b77ec0 == 0) {
    FUN_00dd5650(&DAT_01658800);
    return 0;
  }
  return 1;
}

// 009C8280  FUN_009c8280  size=353  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009c8280(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  _memset((void *)((int)param_1 + 0x8ee0),0,0x4880);
  iVar1 = (int)param_1 + 0xd760;
  FUN_009c4120(iVar1,0);
  iVar2 = (int)param_1 + 0xf8c0;
  FUN_009c3e30(iVar2,0);
  FUN_009c4120(iVar1,1);
  FUN_009c3e30(iVar2,1);
  iVar3 = FUN_0094a8e0(9);
  *(undefined4 *)((int)param_1 + 0xf884) = 0;
  *(undefined4 *)((int)param_1 + 0xf888) = 0;
  *(undefined4 *)((int)param_1 + 0xf8a0) = 0;
  *(undefined4 *)((int)param_1 + 0xf8a4) = 0;
  *(undefined4 *)((int)param_1 + 0xf8a8) = 0xb;
  *(undefined4 *)((int)param_1 + 0xf8ac) = 0x10;
  *(undefined4 *)((int)param_1 + 0xf8b0) = 0xffffffff;
  if (iVar3 < 0x20) {
    puVar5 = (undefined4 *)((int)param_1 + iVar3 * 4 + 0xf7ac);
    for (iVar4 = 0x20 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
  }
  iVar3 = 0x20cc;
  do {
    *(undefined4 *)(iVar3 + iVar1) = 0xffffffff;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x210c);
  FUN_009c3e30(iVar2,2);
  FUN_009c4020(iVar2);
  _memset((void *)((int)param_1 + 0x10370),0,0x19c0);
  if ((_DAT_01bea098 & 0x20000000) != 0) {
    *(undefined1 *)((int)param_1 + 0x11d1d) = 1;
  }
  *(undefined4 *)((int)param_1 + 0x11bd0) = 0xffffffff;
  FUN_009c66e0((int)param_1 + 0x11d30);
  FID_conflict__memcpy(param_1,(void *)((int)param_1 + 0x8ee0),0x8ee0);
  FID_conflict__memcpy(&DAT_01b6efe0,(void *)((int)param_1 + 0x8ee0),0x8ee0);
  if ((_DAT_01bea098 & 0x20000000) != 0) {
    *(undefined1 *)((int)param_1 + 0x8e3d) = 1;
    DAT_01b77e1d = 1;
  }
  FUN_009c7c20();
  FUN_009c6770();
  return;
}

// 009C83F0  FUN_009c83f0  size=294  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009c83f0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == 1) {
    FUN_009c43a0(param_1 + 0x4880,param_1 + 0xd760);
    iVar2 = param_1 + 0x69e0;
    FUN_009c3e30(iVar2,0);
    FUN_009c3e30(iVar2,1);
    FUN_009c3e30(iVar2,2);
    FUN_009c4020(iVar2);
    _memset((void *)(param_1 + 0x7490),0,0x19c0);
    if ((_DAT_01bea098 & 0x20000000) != 0) {
      *(undefined1 *)(param_1 + 0x8e3d) = 1;
    }
    *(undefined4 *)(param_1 + 0x8cf0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7250) = *(undefined4 *)(param_1 + 0x10130);
    *(undefined4 *)(param_1 + 0x7254) = *(undefined4 *)(param_1 + 0x10134);
  }
  bVar1 = false;
  if (((_DAT_01bea098 & 0x20000000) != 0) || (DAT_01b77e1d != '\0')) {
    bVar1 = true;
  }
  FID_conflict__memcpy(&DAT_01b73860,(void *)(param_1 + 0x4880),0x2160);
  puVar3 = (undefined4 *)(param_1 + 0x69e0);
  puVar4 = &DAT_01b759c0;
  for (iVar2 = 0x2ac; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FID_conflict__memcpy(&DAT_01b76470,(void *)(param_1 + 0x7490),0x19c0);
  if (bVar1) {
    DAT_01b77e1d = '\x01';
  }
  DAT_01b73824 = *(undefined4 *)(param_1 + 0x4844);
  DAT_01b7383c = *(undefined4 *)(param_1 + 0x485c);
  FUN_009c7c20();
  return;
}

// 009C8520  FUN_009c8520  size=170  [callgraph]
void __thiscall FUN_009c8520(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 4:
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0x7c))();
    FUN_00953d30();
    break;
  case 2:
    FUN_009c8280();
    break;
  case 3:
    FID_conflict__memcpy(&DAT_01b76470,(void *)(param_1 + 0x7490),0x19c0);
    FID_conflict__memcpy(&DAT_01b73860,(void *)(param_1 + 0x4880),0x2160);
    DAT_01b76170 = DAT_01b76170 + 1;
    if (9999999 < (int)DAT_01b76170) {
      DAT_01b76170 = &DAT_0098967f;
    }
  }
  FUN_009c4980(param_1,&DAT_01b6efe0,param_2);
  if (param_3 != 0) {
    FUN_009c4980(param_1 + 0x8ee0,param_1,param_2);
  }
  return;
}

// 009C85E0  FUN_009c85e0  size=101  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009c85e0(void *param_1,void *param_2)

{
  void *_Dst;
  
  _Dst = (void *)((int)param_1 + 0x8ee0);
  FID_conflict__memcpy(_Dst,param_2,0x8ee0);
  FID_conflict__memcpy(param_1,_Dst,0x8ee0);
  FID_conflict__memcpy(&DAT_01b6efe0,_Dst,0x8ee0);
  if ((_DAT_01bea098 & 0x20000000) != 0) {
    *(undefined1 *)((int)param_1 + 0x8e3d) = 1;
    DAT_01b77e1d = 1;
  }
  FUN_009c7c20();
  FUN_009c6770();
  return;
}

