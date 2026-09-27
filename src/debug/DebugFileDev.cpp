// src/debug/DebugFileDev.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C5960..009C5960, 1 functions

#include "mgrr.h"

// 009C5960  DebugFileDev::ReadAlloc  size=532  [class]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void DebugFileDev::ReadAlloc(void)

{
  LPVOID pvVar1;
  HANDLE pvVar2;
  DWORD nNumberOfBytesToRead;
  LPVOID lpBuffer;
  BOOL BVar3;
  int iVar4;
  DWORD DStack_1aebc;
  DWORD DStack_1aeb8;
  size_t sStack_1aeb4;
  char acStack_1aeb0 [256];
  char acStack_1adb0 [256];
  undefined1 auStack_1acb0 [36576];
  undefined1 auStack_11dd0 [36576];
  undefined1 local_8ef0 [36572];
  undefined4 uStack_14;
  
  uStack_14 = 0x9c5970;
  _getenv_s(&sStack_1aeb4,acStack_1adb0,0x100,"USERPROFILE");
  _sprintf_s(acStack_1aeb0,0x100,"%s\\Documents\\MGR\\SaveData\\%s",acStack_1adb0,"MGR.sav");
  pvVar2 = CreateFileA(acStack_1aeb0,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    FUN_00dd5650(&DAT_01658510,acStack_1aeb0);
    return;
  }
  nNumberOfBytesToRead = GetFileSize(pvVar2,(LPDWORD)0x0);
  lpBuffer = (LPVOID)FUN_00dd29b0(nNumberOfBytesToRead,0x20,0,0);
  BVar3 = ReadFile(pvVar2,lpBuffer,nNumberOfBytesToRead,&DStack_1aebc,(LPOVERLAPPED)0x0);
  if ((BVar3 != 0) && (nNumberOfBytesToRead == DStack_1aebc)) {
    CloseHandle(pvVar2);
    iVar4 = 0;
    do {
      pvVar1 = lpBuffer;
      if (iVar4 != 0) {
        pvVar1 = DAT_01b39580;
        if (iVar4 == 1) {
          DAT_01b39584 = (void *)((int)lpBuffer + 0x8ee0);
        }
        else if (iVar4 == 2) {
          DAT_01b39588 = (void *)((int)lpBuffer + 0x11dc0);
        }
      }
      DAT_01b39580 = pvVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    pvVar2 = CreateFileA(acStack_1aeb0,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (pvVar2 != (HANDLE)0xffffffff) {
      FID_conflict__memcpy(auStack_1acb0,DAT_01b39580,0x8ee0);
      FID_conflict__memcpy(auStack_11dd0,DAT_01b39584,0x8ee0);
      FID_conflict__memcpy(local_8ef0,DAT_01b39588,0x8ee0);
      _memset(auStack_1acb0 + DAT_01b39598 * 0x8ee0,0,0x8ee0);
      iVar4 = FUN_00981a70("MGR.sav",auStack_1acb0,nNumberOfBytesToRead);
      if (iVar4 == 0) {
        FUN_00dd5650("Failed to save Steam");
      }
      WriteFile(pvVar2,auStack_1acb0,nNumberOfBytesToRead,&DStack_1aeb8,(LPOVERLAPPED)0x0);
    }
    CloseHandle(pvVar2);
    FUN_00dd48d0(lpBuffer,0);
    return;
  }
  FUN_00dd48d0(lpBuffer,0);
  CloseHandle(pvVar2);
  return;
}

