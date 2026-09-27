// src/unsorted/unit_00DF7FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DF7FC0..00DF8110, 11 functions

#include "mgrr.h"

// 00DF7FC0  FUN_00df7fc0  size=6  [run]
undefined4 FUN_00df7fc0(void)

{
  return DAT_01dd4f38;
}

// 00DF7FD0  FUN_00df7fd0  size=6  [run]
undefined4 FUN_00df7fd0(void)

{
  return DAT_01dd4f30;
}

// 00DF7FF0  FUN_00df7ff0  size=6  [run]
undefined4 FUN_00df7ff0(void)

{
  return DAT_01dd4f28;
}

// 00DF8000  FUN_00df8000  size=3  [run]
undefined4 FUN_00df8000(void)

{
  return 0;
}

// 00DF8030  FUN_00df8030  size=3  [run]
undefined4 FUN_00df8030(void)

{
  return 0;
}

// 00DF8040  FUN_00df8040  size=6  [run]
undefined4 FUN_00df8040(void)

{
  return 2;
}

// 00DF8060  FUN_00df8060  size=6  [run]
undefined4 FUN_00df8060(void)

{
  return 2;
}

// 00DF8090  FUN_00df8090  size=87  [run]
void FUN_00df8090(char *param_1,size_t param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  _sprintf_s(param_1,param_2,"%s",param_3);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (1 < (int)pcVar2 - (int)(param_1 + 1)) {
    iVar3 = 0;
    if ((*param_1 == '\\') && (param_1[1] == '\\')) {
      iVar3 = 2;
    }
    for (; iVar3 < (int)pcVar2 - (int)(param_1 + 1); iVar3 = iVar3 + 1) {
      if (param_1[iVar3] == '/') {
        param_1[iVar3] = '\\';
      }
    }
  }
  return;
}

// 00DF80F0  thunk_FUN_00df7db0  size=5  [run]
undefined4 thunk_FUN_00df7db0(LPSTR param_1)

{
  DWORD DStack_58;
  _PROCESS_INFORMATION _Stack_54;
  _STARTUPINFOA _Stack_44;
  
  _Stack_54.hProcess = (HANDLE)0x0;
  _Stack_54.hThread = (HANDLE)0x0;
  _Stack_54.dwProcessId = 0;
  _Stack_54.dwThreadId = 0;
  _memset(&_Stack_44,0,0x44);
  _Stack_44.wShowWindow = 1;
  _Stack_44.cb = 0x44;
  _Stack_44.dwFlags = 1;
  CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0,
                 (LPVOID)0x0,(LPCSTR)0x0,&_Stack_44,&_Stack_54);
  DStack_58 = 0x103;
  do {
    GetExitCodeProcess(_Stack_54.hProcess,&DStack_58);
  } while (DStack_58 == 0x103);
  CloseHandle(_Stack_54.hProcess);
  return 1;
}

// 00DF8100  FUN_00df8100  size=6  [run]
undefined4 FUN_00df8100(void)

{
  return DAT_01dd50a4;
}

// 00DF8110  FUN_00df8110  size=135  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df8110(void)

{
  if (DAT_01dd4f40 != 0) {
    return 0;
  }
  timeBeginPeriod(1);
  QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_01dd4f20);
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_01dd4f18);
  DAT_01dd4f40 = 1;
  _DAT_01dd4f14 =
       (float)(((float10)1 /
               (-(float10)(longlong)(((ulonglong)DAT_01dd4f24 & 0x80000000) << 0x20) +
               (float10)(CONCAT44(DAT_01dd4f24,DAT_01dd4f20) & 0x7fffffffffffffff))) *
              (float10)1000.0);
  return 1;
}

