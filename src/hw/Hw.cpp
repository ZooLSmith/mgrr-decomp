// src/hw/Hw.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1D670..00FA1BE0, 596 functions

#include "types.h"

// 00A1D670  FUN_00a1d670  size=144  [callgraph]
bool FUN_00a1d670(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(DAT_01b6efb0) {
  case 0:
    uVar1 = 800;
    uVar3 = 600;
    break;
  case 1:
    uVar1 = 0x400;
    uVar3 = 0x300;
    break;
  default:
    uVar3 = 0x2d0;
    uVar1 = 0x500;
    break;
  case 3:
    uVar1 = 0x556;
    uVar3 = 0x300;
    break;
  case 4:
    uVar1 = 0x690;
    uVar3 = 0x41a;
    break;
  case 5:
    uVar1 = 0x780;
    uVar3 = 0x438;
  }
  thunk_FUN_00df8f20(uVar1,uVar3);
  uVar1 = DAT_01b6efc8;
  FUN_00df8cc0(DAT_01b6efc8);
  FUN_00df8ce0(uVar1);
  FUN_00df9580("METAL GEAR RISING: REVENGEANCE");
  iVar2 = FUN_00df9c70("../../../../PRJ_020/p1");
  return iVar2 != 0;
}

// 00A1D720  thunk_FUN_00df9980  size=5  [callgraph]
undefined4 thunk_FUN_00df9980(void)

{
  int iVar1;
  
  iVar1 = FUN_00df8e40();
  if (iVar1 != 0) {
    FUN_00df8410();
    DAT_01dd4f28 = DAT_01dd4f28 + 1;
    return 1;
  }
  return 0;
}

// 00A1D730  HW::OsWindow  size=5  [class]
void HW::OsWindow(void)

{
  int iVar1;
  
  if (DAT_01dd504c != (HWND)0x0) {
    FUN_00dd5650("[HW::OsWindow] Warning cleanup.\n ");
    DestroyWindow(DAT_01dd504c);
    iVar1 = FUN_00df8e40();
    if (iVar1 != 0) {
      FUN_00df8410();
    }
  }
  if (DAT_01dd4f44 != (HINSTANCE)0x0) {
    UnregisterClassA(&DAT_01dd4f48,DAT_01dd4f44);
    DAT_01dd4f44 = (HINSTANCE)0x0;
  }
  if (DAT_01dd4f40 != 0) {
    timeEndPeriod(1);
    DAT_01dd4f40 = 0;
  }
  return;
}

// 00DD29B0  FUN_00dd29b0  size=69  [callgraph]
void __thiscall
FUN_00dd29b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 unaff_ESI;
  
  iVar1 = (**(code **)(*param_1 + 0x38))(param_2,param_3,param_4,param_5);
  if ((iVar1 == 0) && (param_1[10] != 0)) {
    (**(code **)(*(int *)param_1[10] + 0x38))(unaff_ESI,param_3,param_4,param_5);
  }
  return;
}

// 00DD2A00  FUN_00dd2a00  size=47  [callgraph]
void __thiscall FUN_00dd2a00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x30) = param_2;
    return;
  }
  do {
    param_1 = *(int *)(param_1 + 0x30);
  } while (*(int *)(param_1 + 0x30) != 0);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}

// 00DD2A30  FUN_00dd2a30  size=43  [callgraph]
void __thiscall FUN_00dd2a30(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    while (iVar1 = *(int *)(param_1 + 0x30), iVar1 != param_2) {
      param_1 = iVar1;
      if (*(int *)(iVar1 + 0x30) == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  return;
}

// 00DD2AB0  Hw::cHeapFixed  size=227  [class]
undefined4 __thiscall
Hw::cHeapFixed(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2 + 3U & 0xfffffffc;
  uVar2 = param_4 + 3U & 0xfffffffc;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == 0) {
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      iVar4 = (uVar3 + 0xb + uVar2 & ~(uVar2 - 1)) * param_3 + uVar2;
      iVar1 = (**(code **)(*param_5 + 0x38))(iVar4,uVar2,0,0);
      if (iVar1 != 0) {
LAB_00dd2b4d:
        param_1[0x10] = iVar1;
        param_1[0x11] = iVar4;
        param_1[0x12] = uVar3;
        param_1[0x14] = uVar2;
        param_1[0x13] =
             ((iVar1 - (iVar1 + 0xb + uVar2 & ~(uVar2 - 1))) + 0xc + iVar4) /
             (uVar2 + 0xb + uVar3 & ~(uVar2 - 1));
        param_1[0xe] = param_6;
        (**(code **)(*param_1 + 4))();
        return 1;
      }
      if (param_5[10] != 0) {
        iVar1 = (**(code **)(*(int *)param_5[10] + 0x38))(iVar4,uVar2,0,0);
        if (iVar1 != 0) goto LAB_00dd2b4d;
      }
    }
  }
  FUN_00dd56a0(&DAT_016c43fc,param_6);
  return 0;
}

// 00DD2BA0  FUN_00dd2ba0  size=27  [callgraph]
bool __thiscall FUN_00dd2ba0(int param_1,uint param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x48) < param_2) {
    return false;
  }
  return param_3 <= *(uint *)(param_1 + 0x54);
}

// 00DD2BC0  FUN_00dd2bc0  size=53  [callgraph]
void __fastcall FUN_00dd2bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0x14];
  iVar2 = param_1[0x12];
  iVar3 = (**(code **)(*param_1 + 0x38))(iVar2,iVar1,0,0);
  if ((iVar3 == 0) && (param_1[10] != 0)) {
    (**(code **)(*(int *)param_1[10] + 0x38))(iVar2,iVar1,0,0);
  }
  return;
}

// 00DD2CA0  Hw::cHeapOneTime  size=152  [class]
undefined4 __thiscall Hw::cHeapOneTime(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 == 0) {
    iVar2 = FUN_00dd7240();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_3 + 0x38))(param_2,0x20,0,0);
      if (iVar2 == 0) {
        if (param_3[10] != 0) {
          iVar2 = (**(code **)(*(int *)param_3[10] + 0x38))(param_2,0x20,0,0);
          if (iVar2 != 0) goto LAB_00dd2d12;
        }
        FUN_00dd56a0(&DAT_016c4498,unaff_EBX);
        return 0;
      }
LAB_00dd2d12:
      param_1[0x10] = iVar2;
      param_1[0x11] = iVar2 + param_2;
      pcVar1 = *(code **)(*param_1 + 4);
      param_1[0xe] = unaff_EBX;
      param_1[0x12] = param_2;
      (*pcVar1)();
      return 1;
    }
  }
  return 0;
}

// 00DD4130  Hw::cHeapPhysical  size=183  [class]
undefined4 __thiscall Hw::cHeapPhysical(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 == 0) {
    iVar2 = FUN_00dd7240();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_3 + 0x38))(param_2,0x1000,1,0);
      if (iVar2 == 0) {
        if ((int *)param_3[10] != (int *)0x0) {
          iVar2 = (**(code **)(*(int *)param_3[10] + 0x38))(param_2,0x1000,1,0);
          if (iVar2 != 0) goto LAB_00dd41ac;
        }
        FUN_00dd56a0(&DAT_016c48e4,unaff_EBX);
        return 0;
      }
LAB_00dd41ac:
      param_1[0xb] = (int)param_3;
      iVar1 = param_3[0xd];
      if (iVar1 == 0) {
        param_3[0xd] = (int)param_1;
      }
      else if (*(int *)(iVar1 + 0x30) == 0) {
        *(int **)(iVar1 + 0x30) = param_1;
      }
      else {
        FUN_00dd2a00(param_1);
      }
      FUN_00dd3890(iVar2,param_2,unaff_EBX);
      return 1;
    }
  }
  return 0;
}

// 00DD5650  FUN_00dd5650  size=1  [callgraph]
void FUN_00dd5650(void)

{
  return;
}

// 00DD56A0  FUN_00dd56a0  size=1  [callgraph]
void FUN_00dd56a0(void)

{
  return;
}

// 00DD58A0  FUN_00dd58a0  size=227  [callgraph]
void FUN_00dd58a0(uint *param_1,LPCSTR param_2)

{
  HANDLE hFile;
  BOOL BVar1;
  _FILETIME local_50;
  _SYSTEMTIME local_48;
  _BY_HANDLE_FILE_INFORMATION local_38;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  hFile = CreateFileA(param_2,0,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    GetFileInformationByHandle(hFile,&local_38);
    CloseHandle(hFile);
    BVar1 = FileTimeToLocalFileTime(&local_38.ftLastWriteTime,&local_50);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_50,&local_48);
      if (BVar1 != 0) {
        *param_1 = (uint)local_48.wYear;
        param_1[2] = (uint)local_48.wDay;
        param_1[1] = (uint)local_48.wMonth;
        param_1[3] = (uint)local_48.wHour;
        param_1[5] = (uint)local_48.wSecond;
        param_1[4] = (uint)local_48.wMinute;
        param_1[6] = (uint)local_48.wMilliseconds;
        __security_check_cookie(local_4 ^ (uint)&local_50);
        return;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}

// 00DD5E40  FUN_00dd5e40  size=261  [callgraph]
void __fastcall FUN_00dd5e40(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_c;
  
  if (*param_1 == 0) {
    return;
  }
  iVar2 = param_1[2];
  local_c = (float)param_1[3];
  iVar5 = 0;
  iVar4 = 0;
  do {
    uVar3 = param_1[0xd] + iVar4 & 0x8000003f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
    }
    piVar1 = param_1 + uVar3 * 0x44 + 0x10;
    if (param_1[5] <= param_1[uVar3 * 0x44 + 0x11]) {
      if ((char)piVar1[4] == '\0') break;
      if ((piVar1[2] == 0) || (param_1[10] == 0)) {
        FUN_00f96580(iVar2,local_c,param_1[4],*piVar1,param_1[1],"    %s",piVar1 + 4);
      }
      else {
        FUN_00f96580(iVar2,local_c,param_1[4],*piVar1,param_1[1],"%3d %s",piVar1[2],piVar1 + 4);
      }
      iVar5 = iVar5 + 1;
      local_c = (float)param_1[4] + 2.0 + local_c;
      if (param_1[6] <= iVar5) break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  FUN_00dd7270();
  return;
}

// 00DD5F50  FUN_00dd5f50  size=470  [callgraph]
void __thiscall FUN_00dd5f50(int param_1,int param_2,int param_3,char *param_4,va_list param_5)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  byte local_104 [256];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_104;
  if ((*(int *)(param_1 + 0x4458) != 0) && (*(int *)(param_1 + 0x4458) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4440));
  }
  __vsnprintf_s((char *)local_104,0x100,0xffffffff,param_4,param_5);
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00dd5650(&DAT_016575ac,local_104);
  }
  iVar8 = *(int *)(param_1 + 0x34) * 0x110;
  iVar6 = iVar8 + 0x40 + param_1;
  if ((*(int *)(iVar8 + 0x40 + param_1) == param_3) && (*(int *)(iVar6 + 4) == param_2)) {
    pbVar7 = local_104;
    pbVar3 = (byte *)(iVar6 + 0x10);
    do {
      bVar2 = *pbVar3;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00dd6014:
        iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00dd6019;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00dd6014;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00dd6019:
    if (iVar8 == 0) {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      if (999 < *(int *)(iVar6 + 8)) {
        *(undefined4 *)(iVar6 + 8) = 999;
      }
      uVar4 = FUN_00df7ff0();
      *(undefined4 *)(iVar6 + 0xc) = uVar4;
      goto LAB_00dd6093;
    }
  }
  uVar5 = *(int *)(param_1 + 0x34) + 0x3fU & 0x8000003f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
  }
  *(uint *)(param_1 + 0x34) = uVar5;
  piVar1 = (int *)(uVar5 * 0x110 + 0x40 + param_1);
  *piVar1 = param_3;
  piVar1[1] = param_2;
  piVar1[2] = 0;
  iVar6 = FUN_00df7ff0();
  piVar1[3] = iVar6;
  _strncpy_s((char *)(piVar1 + 4),0x100,(char *)local_104,0x100);
  *(undefined1 *)((int)piVar1 + 0x10f) = 0;
LAB_00dd6093:
  if ((*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x1c)) && (*(int *)(param_1 + 0x14) <= param_2)
     ) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x1c);
  }
  if (param_2 != 0x10000) {
    FUN_00dd6740();
  }
  if ((param_2 == 4) && (*(int *)(param_1 + 0x3c) == 0)) {
    iVar6 = MessageBoxA((HWND)0x0,(LPCSTR)local_104,&DAT_016c4ac8,0x50012);
    if ((iVar6 != 3) && (iVar6 == 5)) {
      *(undefined4 *)(param_1 + 0x3c) = 1;
    }
  }
  if ((*(int *)(param_1 + 0x4458) != 0) && (*(int *)(param_1 + 0x4458) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4440));
  }
  __security_check_cookie(local_4 ^ (uint)local_104);
  return;
}

// 00DD65F0  FUN_00dd65f0  size=59  [callgraph]
void __fastcall FUN_00dd65f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x48);
  iVar1 = 0x40;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    _memset(puVar2 + 2,0,0x100);
    puVar2 = puVar2 + 0x44;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00DD6630  FUN_00dd6630  size=16  [callgraph]
void __fastcall FUN_00dd6630(undefined4 *param_1)

{
  FUN_00dd65f0();
  *param_1 = 0;
  return;
}

// 00DD6720  FUN_00dd6720  size=30  [callgraph]
void FUN_00dd6720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00dd5f50(param_2,param_3,param_4,&stack0x00000014);
  return;
}

// 00DD6740  FUN_00dd6740  size=61  [callgraph]
void __fastcall FUN_00dd6740(int param_1)

{
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if ((*(int *)(param_1 + 0x24) != 0) && (5000 < *(int *)(param_1 + 0x38))) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd6720(param_1,0x10000,0xffff4444,&DAT_016c4b5c);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00DD67B0  FUN_00dd67b0  size=150  [callgraph]
undefined4 * __fastcall FUN_00dd67b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 0x10;
  iVar1 = 0x3f;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    _memset(puVar2 + 4,0,0x100);
    puVar2 = puVar2 + 0x44;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x1116] = 0;
  param_1[4] = 0x41800000;
  param_1[2] = 0x42000000;
  *param_1 = 0;
  param_1[8] = 1;
  param_1[3] = 0x44220000;
  param_1[9] = 1;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 4;
  param_1[7] = 0xb4;
  FUN_00dd65f0();
  return param_1;
}

// 00DD6850  FUN_00dd6850  size=26  [callgraph]
void __fastcall FUN_00dd6850(undefined4 *param_1)

{
  FUN_00dd65f0();
  *param_1 = 0;
  FUN_00dd7270();
  return;
}

// 00DD6870  FUN_00dd6870  size=39  [callgraph]
void __fastcall FUN_00dd6870(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00dd65f0();
      return;
    }
  }
  else {
    FUN_00dd5e40();
    if (0 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
  }
  return;
}

// 00DD68A0  FUN_00dd68a0  size=42  [callgraph]
void __fastcall FUN_00dd68a0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00dd6b50();
                    /* WARNING: Could not recover jumptable at 0x00dd68c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DD6B50  FUN_00dd6b50  size=59  [callgraph]
void __fastcall FUN_00dd6b50(int param_1)

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

// 00DD6BA0  FUN_00dd6ba0  size=42  [callgraph]
void __fastcall FUN_00dd6ba0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00dd6b50();
                    /* WARNING: Could not recover jumptable at 0x00dd6bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DD6BF0  FUN_00dd6bf0  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00dd6bf0(int *param_1)

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

// 00DD6C20  FUN_00dd6c20  size=42  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00dd6c20(int *param_1)

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

// 00DD6D50  FUN_00dd6d50  size=11  [callgraph]
void __thiscall FUN_00dd6d50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00DD6D70  FUN_00dd6d70  size=12  [callgraph]
bool __thiscall FUN_00dd6d70(int param_1,int param_2)

{
  return param_2 == param_1;
}

// 00DD6D80  FUN_00dd6d80  size=31  [callgraph]
undefined4 __thiscall FUN_00dd6d80(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_2 == param_1) break;
    param_1 = (undefined4 *)*param_1;
  }
  return 1;
}

// 00DD6DF0  FUN_00dd6df0  size=25  [callgraph]
void __fastcall FUN_00dd6df0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00DD6E30  FUN_00dd6e30  size=61  [callgraph]
void __thiscall
FUN_00dd6e30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00dd56a0(&DAT_016c4be4);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}

// 00DD6F30  FUN_00dd6f30  size=13  [callgraph]
void __fastcall FUN_00dd6f30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00DD6F40  FUN_00dd6f40  size=365  [callgraph]
void __thiscall FUN_00dd6f40(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  if (0 < param_2) {
    puVar3 = (undefined4 *)(param_1 + 0x14);
    do {
      *puVar3 = *(undefined4 *)(param_3 + iVar1 * 4);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < param_2);
  }
  if (*(uint *)(param_1 + 0x14) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x14) & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)(param_1 + 0x2c + uVar2 * 4) = 0;
  }
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x18) & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)(param_1 + 0x2c + uVar2 * 4) = 1;
  }
  if (*(uint *)(param_1 + 0x1c) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x1c) & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)(param_1 + 0x2c + uVar2 * 4) = 2;
  }
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x20) & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)(param_1 + 0x2c + uVar2 * 4) = 3;
  }
  if (*(uint *)(param_1 + 0x24) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x24) & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)(param_1 + 0x2c + uVar2 * 4) = 4;
  }
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x28) & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)(param_1 + 0x2c + uVar2 * 4) = 5;
  }
  return;
}

// 00DD7240  FUN_00dd7240  size=42  [callgraph]
undefined4 __fastcall FUN_00dd7240(LPCRITICAL_SECTION param_1)

{
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    return 0;
  }
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x1;
  return 1;
}

// 00DD7270  FUN_00dd7270  size=25  [callgraph]
void __fastcall FUN_00dd7270(LPCRITICAL_SECTION param_1)

{
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    DeleteCriticalSection(param_1);
    param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  return;
}

// 00DD7290  FUN_00dd7290  size=47  [callgraph]
undefined4 __fastcall FUN_00dd7290(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),4000);
  *(undefined4 *)(param_1 + 0x40) = 1;
  return 1;
}

// 00DD72C0  FUN_00dd72c0  size=17  [callgraph]
void __fastcall FUN_00dd72c0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return;
}

// 00DD72E0  FUN_00dd72e0  size=17  [callgraph]
void __fastcall FUN_00dd72e0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return;
}

// 00DD7300  FUN_00dd7300  size=17  [callgraph]
void __fastcall FUN_00dd7300(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return;
}

// 00DD7320  FUN_00dd7320  size=17  [callgraph]
void __fastcall FUN_00dd7320(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return;
}

// 00DD7340  FUN_00dd7340  size=26  [callgraph]
void __fastcall FUN_00dd7340(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

// 00DD7370  FUN_00dd7370  size=49  [callgraph]
bool __thiscall FUN_00dd7370(int *param_1,LONG param_2,LONG param_3)

{
  HANDLE pvVar1;
  
  if (*param_1 != 0) {
    return false;
  }
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_2,param_3,(LPCSTR)0x0);
  *param_1 = (int)pvVar1;
  return pvVar1 != (HANDLE)0x0;
}

// 00DD73B0  FUN_00dd73b0  size=24  [callgraph]
void __fastcall FUN_00dd73b0(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD73F0  FUN_00dd73f0  size=38  [callgraph]
void __thiscall FUN_00dd73f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    while (*(int *)(iVar1 + 0xc) != param_2) {
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        return;
      }
    }
    *(undefined4 *)(iVar1 + 0x34) = param_3;
  }
  return;
}

// 00DD7420  FUN_00dd7420  size=120  [callgraph]
void __thiscall FUN_00dd7420(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x30);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    }
    if (*(int *)(iVar1 + 0x30) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = 0;
    while ((iVar2 = iVar4, iVar2 != 0 && (*(int *)(iVar2 + 0x10) <= param_2))) {
      iVar3 = iVar2;
      iVar4 = *(int *)(iVar2 + 0x30);
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0x2c) = iVar3;
    *(int *)(iVar1 + 0x30) = iVar2;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x30) = iVar1;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x2c) = iVar1;
    }
    if (iVar3 == 0) {
      *(int *)(param_1 + 8) = iVar1;
    }
    return;
  }
  return;
}

// 00DD7500  FUN_00dd7500  size=14  [callgraph]
undefined4 __fastcall FUN_00dd7500(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
  }
  return 0;
}

// 00DD7510  FUN_00dd7510  size=38  [callgraph]
undefined4 __thiscall FUN_00dd7510(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x30);
  }
  return 1;
}

// 00DD7540  FUN_00dd7540  size=79  [callgraph]
undefined4 __thiscall
FUN_00dd7540(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  
  if (param_1[9] == 0) {
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    param_1[9] = pvVar1;
  }
  if (param_1[10] == 0) {
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    param_1[10] = pvVar1;
  }
  *param_1 = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0;
  param_1[8] = param_2;
  return 1;
}

// 00DD75D0  FUN_00dd75d0  size=132  [callgraph]
void __thiscall FUN_00dd75d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1] <= param_4) {
    FUN_00dd5650(&DAT_016c4c2c);
    return;
  }
  if (param_1[4] != 0) {
    FUN_00dd5650(&DAT_016c4c08);
    return;
  }
  if (param_4 < 0) {
    iVar2 = 0;
    if (0 < param_1[1]) {
      iVar1 = 0;
      do {
        *(undefined4 *)(iVar1 + 0x10 + *param_1) = param_2;
        *(undefined4 *)(iVar1 + 0x14 + *param_1) = param_3;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar2 < param_1[1]);
      return;
    }
  }
  else {
    *(undefined4 *)(param_4 * 0x18 + 0x10 + *param_1) = param_2;
    *(undefined4 *)(param_4 * 0x18 + 0x14 + *param_1) = param_3;
  }
  return;
}

// 00DD76A0  FUN_00dd76a0  size=139  [callgraph]
void FUN_00dd76a0(DWORD param_1)

{
  uint uVar1;
  HANDLE hHandle;
  DWORD *pDVar2;
  
  if (DAT_01dd0590 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  if (param_1 != 0) {
    uVar1 = 0;
    pDVar2 = DAT_01dd056c;
    if (DAT_01dd0570 != 0) {
      do {
        if (pDVar2[2] == param_1) {
          hHandle = OpenThread(0x100000,0,*pDVar2);
          if (DAT_01dd0590 != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
          }
          WaitForSingleObject(hHandle,0xffffffff);
          CloseHandle(hHandle);
          return;
        }
        uVar1 = uVar1 + 1;
        pDVar2 = pDVar2 + 5;
      } while (uVar1 < DAT_01dd0570);
    }
  }
  if (DAT_01dd0590 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  return;
}

// 00DD77B0  FUN_00dd77b0  size=67  [callgraph]
DWORD FUN_00dd77b0(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  uint uVar3;
  
  DVar1 = GetCurrentThreadId();
  uVar3 = 0;
  pDVar2 = DAT_01dd056c;
  if (DAT_01dd0570 != 0) {
    while ((pDVar2[2] == 0 || (*pDVar2 != DVar1))) {
      uVar3 = uVar3 + 1;
      pDVar2 = pDVar2 + 5;
      if (DAT_01dd0570 <= uVar3) {
        return 0;
      }
    }
    if (pDVar2 != (DWORD *)0x0) {
      return pDVar2[2];
    }
  }
  return 0;
}

// 00DD7850  FUN_00dd7850  size=24  [callgraph]
void __fastcall FUN_00dd7850(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD7870  FUN_00dd7870  size=109  [callgraph]
undefined4 FUN_00dd7870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  
  iVar3 = FUN_00dd7420(param_3);
  if (iVar3 == 0) {
    FUN_00dd56a0(&DAT_016c4c50);
    return 0;
  }
  piVar1 = (int *)(extraout_ECX + 0x14);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x14) = 1;
  }
  uVar2 = *(undefined4 *)(extraout_ECX + 0x14);
  if (*(int *)(iVar3 + 0x18) != 0) {
    FUN_00dd56a0(&DAT_016c4be4);
  }
  *(undefined4 *)(iVar3 + 0x14) = param_4;
  *(undefined4 *)(iVar3 + 0xc) = uVar2;
  *(undefined4 *)(iVar3 + 4) = param_1;
  *(undefined4 *)(iVar3 + 8) = param_2;
  *(undefined4 *)(iVar3 + 0x18) = 1;
  return uVar2;
}

// 00DD78E0  FUN_00dd78e0  size=47  [callgraph]
void __fastcall FUN_00dd78e0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x28) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x24) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 00DD7910  FUN_00dd7910  size=53  [callgraph]
void __fastcall FUN_00dd7910(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     (iVar1 = *(int *)(param_1 + 0x1c) + -1, *(int *)(param_1 + 0x1c) = iVar1, iVar1 < 1)) {
    *(undefined4 *)(param_1 + 0x18) = 4;
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x24),1,(LPLONG)0x0);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x28),0xffffffff);
  }
  return;
}

// 00DD7950  FUN_00dd7950  size=79  [callgraph]
void __fastcall FUN_00dd7950(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 1) && (*(int *)(param_1 + 0x18) != 3)) {
    FUN_00dd56a0(&DAT_016c4c70);
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 5;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x24),1,(LPLONG)0x0);
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x28),0xffffffff);
  return;
}

// 00DD79A0  FUN_00dd79a0  size=288  [callgraph]
void __thiscall FUN_00dd79a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_00dd5650(&DAT_016c4c94);
      param_2 = param_1[1];
    }
    iVar3 = param_1[4];
    piVar1 = param_1 + 4;
    while( true ) {
      if (iVar3 != 0) {
        FUN_00dd5650(&DAT_016c4c08);
        return;
      }
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      if (iVar3 == 0) break;
      iVar3 = *piVar1;
    }
    iVar3 = 1;
    param_1[3] = param_2;
    if (1 < param_2) {
      iVar2 = 0x18;
      do {
        ReleaseSemaphore(*(HANDLE *)(iVar2 + 8 + *param_1),1,(LPLONG)0x0);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar3 < param_1[3]);
    }
    (**(code **)(*param_1 + 0x10))(0,*(undefined4 *)(*param_1 + 0x14));
    iVar3 = 1;
    if (1 < param_1[3]) {
      iVar2 = 0x18;
      do {
        WaitForSingleObject(*(HANDLE *)(iVar2 + 0xc + *param_1),0xffffffff);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar3 < param_1[3]);
    }
    param_1[3] = 0;
    do {
      iVar2 = *piVar1;
      LOCK();
      iVar3 = *piVar1;
      if (iVar2 == iVar3) {
        *piVar1 = 0;
      }
      UNLOCK();
    } while (iVar2 != iVar3);
  }
  return;
}

// 00DD7AD0  FUN_00dd7ad0  size=65  [callgraph]
int __fastcall FUN_00dd7ad0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[3] == 0) {
    return 0;
  }
  iVar1 = FUN_00dd77b0();
  if (iVar1 != 0) {
    iVar2 = 1;
    if (1 < param_1[1]) {
      piVar3 = (int *)(*param_1 + 0x1c);
      do {
        if (iVar1 == *piVar3) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < param_1[1]);
    }
  }
  return 0;
}

// 00DD7B70  FUN_00dd7b70  size=245  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00dd7b70(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  DAT_01dd0568 = FUN_00dd29b0(param_1 * 0x14,0x20,0,0);
  if ((DAT_01dd0568 != 0) && (DAT_01dd0590 == 0)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_01dd0578,4000);
    DAT_01dd0590 = 1;
    if (DAT_01dd056c == 0) {
      if (DAT_01dd0568 != 0) {
        uVar2 = 0;
        DAT_01dd056c = DAT_01dd0568;
        DAT_01dd0570 = param_1;
        if (param_1 != 0) {
          iVar3 = 0;
          do {
            iVar1 = DAT_01dd056c;
            *(undefined4 *)(DAT_01dd056c + 8 + iVar3) = 0;
            *(undefined4 *)(iVar1 + 0xc + iVar3) = 0;
            *(undefined4 *)(iVar1 + 0x10 + iVar3) = 0;
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x14;
          } while (uVar2 < DAT_01dd0570);
        }
        DAT_01dd0560 = 0;
        DAT_01dd0574 = 0;
        return 1;
      }
      DAT_01dd056c = 0;
      FUN_00dd56a0(&DAT_016c4cac);
    }
  }
  return 0;
}

// 00DD7C70  FUN_00dd7c70  size=105  [callgraph]
void FUN_00dd7c70(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  uint uVar3;
  
  if (DAT_01dd0590 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  DVar1 = GetCurrentThreadId();
  uVar3 = 0;
  pDVar2 = DAT_01dd056c;
  if (DAT_01dd0570 != 0) {
    do {
      if ((pDVar2[2] != 0) && (*pDVar2 == DVar1)) goto LAB_00dd7cb4;
      uVar3 = uVar3 + 1;
      pDVar2 = pDVar2 + 5;
    } while (uVar3 < DAT_01dd0570);
  }
  pDVar2 = (DWORD *)0x0;
LAB_00dd7cb4:
  pDVar2[2] = 0;
  if (DAT_01dd0590 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  __endthreadex(0);
  return;
}

// 00DD7CE0  FUN_00dd7ce0  size=202  [callgraph]
void FUN_00dd7ce0(void)

{
  HANDLE hHandle;
  uint uVar1;
  int iVar2;
  
  if (DAT_01dd0590 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  DAT_01dd0574 = 1;
  if (DAT_01dd0590 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  uVar1 = 0;
  if (DAT_01dd0570 != 0) {
    iVar2 = 0;
    do {
      if (DAT_01dd0590 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
      }
      if (*(int *)(iVar2 + 8 + DAT_01dd056c) == 0) {
        if (DAT_01dd0590 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
        }
      }
      else {
        hHandle = OpenThread(0x100000,0,*(DWORD *)(iVar2 + DAT_01dd056c));
        if (DAT_01dd0590 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
        }
        WaitForSingleObject(hHandle,0xffffffff);
        CloseHandle(hHandle);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar1 < DAT_01dd0570);
  }
  return;
}

// 00DD7DB0  FUN_00dd7db0  size=84  [callgraph]
undefined4
FUN_00dd7db0(void *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  HANDLE hThread;
  
  hThread = (HANDLE)__beginthreadex((void *)0x0,param_2,(_StartAddress *)&LAB_00dd7b20,param_1,4,
                                    param_1);
  if (hThread == (HANDLE)0x0) {
    return 0;
  }
  *(undefined4 *)((int)param_1 + 4) = param_3;
  if (param_5 != 0) {
    SetThreadPriority(hThread,param_5);
  }
  ResumeThread(hThread);
  CloseHandle(hThread);
  return 1;
}

// 00DD7E20  FUN_00dd7e20  size=47  [callgraph]
void __fastcall FUN_00dd7e20(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00DD7E50  FUN_00dd7e50  size=91  [callgraph]
void __fastcall FUN_00dd7e50(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
    param_1[5] = 1;
    ReleaseSemaphore((HANDLE)param_1[3],1,(LPLONG)0x0);
    WaitForSingleObject((HANDLE)param_1[4],0xffffffff);
    if ((HANDLE)param_1[3] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[3]);
      param_1[3] = 0;
    }
    if ((HANDLE)param_1[4] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[4]);
      param_1[4] = 0;
    }
  }
  return;
}

// 00DD8000  FUN_00dd8000  size=130  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00dd801a) */

void __fastcall FUN_00dd8000(int param_1)

{
  if ((*(int *)(param_1 + 0x18) == 1) || (*(int *)(param_1 + 0x18) == 3)) {
    if (*(int *)(param_1 + 0x18) == 1) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 5;
      ReleaseSemaphore(*(HANDLE *)(param_1 + 0x24),1,(LPLONG)0x0);
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x28),0xffffffff);
    }
  }
  if (*(HANDLE *)(param_1 + 0x24) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x28) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 00DD8090  FUN_00dd8090  size=66  [callgraph]
void __thiscall FUN_00dd8090(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4cd4);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 2;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD80E0  FUN_00dd80e0  size=132  [callgraph]
void __thiscall FUN_00dd80e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4cf8);
  }
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 3;
  uVar1 = DAT_01dd0564;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x28),1,(LPLONG)0x0);
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),0xffffffff);
  if (*(int *)(param_1 + 0x18) == 5) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(code **)(param_1 + 0x34) != (code *)0x0) {
      (**(code **)(param_1 + 0x34))(0);
    }
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x28),1,(LPLONG)0x0);
    FUN_00dd7c70();
    return;
  }
  DAT_01dd0564 = uVar1;
  return;
}

// 00DD8170  FUN_00dd8170  size=49  [callgraph]
void __fastcall FUN_00dd8170(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4d1c);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD8240  FUN_00dd8240  size=116  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dd8240(void)

{
  FUN_00dd7ce0();
  DAT_01dd056c = 0;
  DAT_01dd0570 = 0;
  if (DAT_01dd0590 != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
    DAT_01dd0590 = 0;
  }
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  FUN_00dd3d90(DAT_01dd0568,0);
  return;
}

// 00DD82C0  FUN_00dd82c0  size=254  [callgraph]
int FUN_00dd82c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_01dd0590 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  if (DAT_01dd0574 != 0) {
    FUN_00dd5650(&DAT_016c4d60);
    if (DAT_01dd0590 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
    }
    return 0;
  }
  uVar3 = 0;
  iVar4 = DAT_01dd056c;
  if (DAT_01dd0570 != 0) {
    do {
      if (*(int *)(iVar4 + 8) == 0) {
        DAT_01dd0560 = DAT_01dd0560 + 1;
        if (DAT_01dd0560 == 0) {
          DAT_01dd0560 = 1;
        }
        iVar1 = DAT_01dd0560;
        *(undefined4 *)(iVar4 + 0xc) = param_1;
        *(undefined4 *)(iVar4 + 0x10) = param_2;
        *(int *)(iVar4 + 8) = iVar1;
        iVar2 = FUN_00dd7db0(iVar4,param_3,param_4,param_5,param_6);
        if (iVar2 != 0) {
          if (DAT_01dd0590 != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
          }
          return iVar1;
        }
        goto LAB_00dd8374;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (uVar3 < DAT_01dd0570);
  }
  iVar4 = 0;
LAB_00dd8374:
  FUN_00dd56a0(&DAT_016c4d40);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 8) = 0;
  }
  if (DAT_01dd0590 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd0578);
  }
  return 0;
}

// 00DD8450  FUN_00dd8450  size=184  [callgraph]
void __fastcall FUN_00dd8450(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[1] != 0) {
    param_1[6] = (uint)DAT_01dd0564;
    uVar2 = 0;
    DAT_01dd0564 = param_1;
    if (*param_1 != 0) {
      do {
        FUN_00dd8000();
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      iVar1 = *(int *)(uVar2 - 4) + -1;
      if (-1 < iVar1) {
        puVar3 = (undefined4 *)(uVar2 + *(int *)(uVar2 - 4) * 0x38 + 0x24);
        do {
          puVar4 = puVar3 + -0xe;
          if ((HANDLE)puVar3[-0xd] != (HANDLE)0x0) {
            CloseHandle((HANDLE)puVar3[-0xd]);
            puVar3[-0xd] = 0;
          }
          if ((HANDLE)*puVar4 != (HANDLE)0x0) {
            CloseHandle((HANDLE)*puVar4);
            *puVar4 = 0;
          }
          iVar1 = iVar1 + -1;
          puVar3 = puVar4;
        } while (-1 < iVar1);
      }
      FUN_00dd4940(uVar2 - 4);
    }
    DAT_01dd0564 = (uint *)param_1[6];
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
  }
  return;
}

// 00DD8520  FUN_00dd8520  size=67  [callgraph]
void __thiscall FUN_00dd8520(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4cd4);
  }
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = 2;
  ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD8570  FUN_00dd8570  size=8  [callgraph]
void FUN_00dd8570(void)

{
  FUN_00dd80e0();
  return;
}

// 00DD8580  FUN_00dd8580  size=50  [callgraph]
void __fastcall FUN_00dd8580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4d1c);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD85C0  FUN_00dd85c0  size=194  [callgraph]
void __thiscall FUN_00dd85c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 != 0) {
    if (*(int *)(iVar3 + 0xc) == param_2) {
      if ((*(int *)(iVar3 + 0x18) != 1) && (*(int *)(iVar3 + 0x18) != 3)) {
        FUN_00dd56a0(&DAT_016c4c70);
      }
      if (*(int *)(iVar3 + 0x18) == 1) {
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x18) = 5;
        ReleaseSemaphore(*(HANDLE *)(iVar3 + 0x24),1,(LPLONG)0x0);
        WaitForSingleObject(*(HANDLE *)(iVar3 + 0x28),0xffffffff);
      }
      iVar1 = *(int *)(iVar3 + 0x30);
      if (*(int *)(param_1 + 8) == iVar3) {
        *(int *)(param_1 + 8) = iVar1;
      }
      if (*(int *)(iVar3 + 0x2c) != 0) {
        *(undefined4 *)(*(int *)(iVar3 + 0x2c) + 0x30) = *(undefined4 *)(iVar3 + 0x30);
      }
      if (*(int *)(iVar3 + 0x30) != 0) {
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
      }
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      iVar2 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(int *)(iVar3 + 0x30) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x2c) = iVar3;
      }
      *(int *)(param_1 + 0xc) = iVar3;
      iVar3 = iVar1;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x30);
    }
  }
  return;
}

// 00DD8690  FUN_00dd8690  size=206  [callgraph]
void __thiscall FUN_00dd8690(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    iVar3 = __stricmp(*(char **)(iVar2 + 0x14),param_2);
    if (iVar3 == 0) {
      if ((*(int *)(iVar2 + 0x18) != 1) && (*(int *)(iVar2 + 0x18) != 3)) {
        FUN_00dd56a0(&DAT_016c4c70);
      }
      if (*(int *)(iVar2 + 0x18) == 1) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x18) = 5;
        ReleaseSemaphore(*(HANDLE *)(iVar2 + 0x24),1,(LPLONG)0x0);
        WaitForSingleObject(*(HANDLE *)(iVar2 + 0x28),0xffffffff);
      }
      iVar3 = *(int *)(iVar2 + 0x30);
      if (*(int *)(param_1 + 8) == iVar2) {
        *(int *)(param_1 + 8) = iVar3;
      }
      if (*(int *)(iVar2 + 0x2c) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 0x30) = *(undefined4 *)(iVar2 + 0x30);
      }
      if (*(int *)(iVar2 + 0x30) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x30) + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(int *)(iVar2 + 0x30) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x2c) = iVar2;
      }
      *(int *)(param_1 + 0xc) = iVar2;
      iVar2 = iVar3;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x30);
    }
  }
  return;
}

// 00DD8760  FUN_00dd8760  size=174  [callgraph]
void __fastcall FUN_00dd8760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 != 0) {
    if ((*(int *)(iVar3 + 0x18) != 1) && (*(int *)(iVar3 + 0x18) != 3)) {
      FUN_00dd56a0(&DAT_016c4c70);
    }
    if (*(int *)(iVar3 + 0x18) == 1) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x18) = 5;
      ReleaseSemaphore(*(HANDLE *)(iVar3 + 0x24),1,(LPLONG)0x0);
      WaitForSingleObject(*(HANDLE *)(iVar3 + 0x28),0xffffffff);
    }
    iVar1 = *(int *)(iVar3 + 0x30);
    if (*(int *)(param_1 + 8) == iVar3) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (*(int *)(iVar3 + 0x2c) != 0) {
      *(undefined4 *)(*(int *)(iVar3 + 0x2c) + 0x30) = *(undefined4 *)(iVar3 + 0x30);
    }
    if (*(int *)(iVar3 + 0x30) != 0) {
      *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
    }
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(int *)(iVar3 + 0x30) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x2c) = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar3;
    iVar3 = iVar1;
  }
  return;
}

// 00DD8810  FUN_00dd8810  size=75  [callgraph]
void FUN_00dd8810(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),0xffffffff);
  (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4d1c);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD8860  FUN_00dd8860  size=231  [callgraph]
void __fastcall FUN_00dd8860(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1[2] & 1U) != 0) {
    if (*param_1 != 0) {
      iVar2 = 1;
      param_1[2] = param_1[2] | 2;
      if (1 < param_1[1]) {
        iVar1 = 0x18;
        do {
          iVar3 = *param_1 + iVar1;
          ReleaseSemaphore(*(HANDLE *)(*param_1 + 8 + iVar1),1,(LPLONG)0x0);
          FUN_00dd76a0(*(undefined4 *)(iVar3 + 4));
          *(undefined4 *)(iVar3 + 4) = 0;
          if (*(HANDLE *)(iVar3 + 8) != (HANDLE)0x0) {
            CloseHandle(*(HANDLE *)(iVar3 + 8));
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          if (*(HANDLE *)(iVar3 + 0xc) != (HANDLE)0x0) {
            CloseHandle(*(HANDLE *)(iVar3 + 0xc));
            *(undefined4 *)(iVar3 + 0xc) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x18;
        } while (iVar2 < param_1[1]);
      }
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + -4) + -1;
        if (-1 < iVar1) {
          puVar4 = (undefined4 *)(iVar2 + *(int *)(iVar2 + -4) * 0x18 + 8);
          do {
            puVar5 = puVar4 + -6;
            if ((HANDLE)puVar4[-5] != (HANDLE)0x0) {
              CloseHandle((HANDLE)puVar4[-5]);
              puVar4[-5] = 0;
            }
            if ((HANDLE)*puVar5 != (HANDLE)0x0) {
              CloseHandle((HANDLE)*puVar5);
              *puVar5 = 0;
            }
            iVar1 = iVar1 + -1;
            puVar4 = puVar5;
          } while (-1 < iVar1);
        }
        FUN_00dd4940(iVar2 + -4);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// 00DD8950  FUN_00dd8950  size=69  [callgraph]
void FUN_00dd8950(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01dd0564 + 0x10);
  if (*(int *)(iVar1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4cd4);
  }
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = 2;
  ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD89A0  FUN_00dd89a0  size=20  [callgraph]
void FUN_00dd89a0(undefined4 param_1)

{
  FUN_00dd80e0(param_1);
  return;
}

// 00DD89C0  FUN_00dd89c0  size=55  [callgraph]
void FUN_00dd89c0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01dd0564 + 0x10);
  if (*(int *)(iVar1 + 0x18) != 4) {
    FUN_00dd56a0(&DAT_016c4d1c);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x28),1,(LPLONG)0x0);
  FUN_00dd7c70();
  return;
}

// 00DD8A00  thunk_FUN_00dd8450  size=5  [callgraph]
void __fastcall thunk_FUN_00dd8450(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[1] != 0) {
    param_1[6] = (uint)DAT_01dd0564;
    uVar2 = 0;
    DAT_01dd0564 = param_1;
    if (*param_1 != 0) {
      do {
        FUN_00dd8000();
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      iVar1 = *(int *)(uVar2 - 4) + -1;
      if (-1 < iVar1) {
        puVar3 = (undefined4 *)(uVar2 + *(int *)(uVar2 - 4) * 0x38 + 0x24);
        do {
          puVar4 = puVar3 + -0xe;
          if ((HANDLE)puVar3[-0xd] != (HANDLE)0x0) {
            CloseHandle((HANDLE)puVar3[-0xd]);
            puVar3[-0xd] = 0;
          }
          if ((HANDLE)*puVar4 != (HANDLE)0x0) {
            CloseHandle((HANDLE)*puVar4);
            *puVar4 = 0;
          }
          iVar1 = iVar1 + -1;
          puVar3 = puVar4;
        } while (-1 < iVar1);
      }
      FUN_00dd4940(uVar2 - 4);
    }
    DAT_01dd0564 = (uint *)param_1[6];
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
  }
  return;
}

// 00DD8A10  FUN_00dd8a10  size=278  [callgraph]
undefined4 __thiscall FUN_00dd8a10(uint *param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  HANDLE pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = 0;
  if (param_1[1] != 0) {
    return 0;
  }
  uVar5 = -(uint)((int)((ulonglong)param_2 * 0x38 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x38)
  ;
  puVar1 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,param_4);
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    iVar6 = param_2 - 1;
    *puVar1 = param_2;
    puVar2 = puVar1 + 1;
    if (-1 < iVar6) {
      puVar1 = puVar1 + 0xb;
      do {
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1 = puVar1 + 0xe;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  param_1[1] = (uint)puVar2;
  if (puVar2 != (uint *)0x0) {
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[3] = (uint)puVar2;
    param_1[6] = 0;
    param_1[5] = 0;
    if (param_2 != 0) {
      iVar6 = 0;
      param_4 = param_2;
      do {
        piVar7 = (int *)(param_1[1] + iVar6);
        if (piVar7[9] == 0) {
          pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
          piVar7[9] = (int)pvVar3;
        }
        if (piVar7[10] == 0) {
          pvVar3 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
          piVar7[10] = (int)pvVar3;
        }
        *piVar7 = (int)param_1;
        piVar7[8] = param_3;
        piVar7[0xb] = 0;
        piVar7[0xc] = 0;
        piVar7[6] = 0;
        piVar7[0xd] = 0;
        iVar4 = param_1[1] + iVar6;
        *(int *)(iVar4 + 0x2c) = iVar8;
        *(undefined4 *)(iVar4 + 0x30) = 0;
        if (iVar8 != 0) {
          *(int *)(iVar8 + 0x30) = iVar4;
        }
        iVar8 = param_1[1] + iVar6;
        iVar6 = iVar6 + 0x38;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    return 1;
  }
  FUN_00dd56a0(&DAT_016c4da4);
  FUN_00dd8450();
  return 0;
}

// 00DD8B60  thunk_FUN_00dd8860  size=5  [callgraph]
void thunk_FUN_00dd8860(void)

{
  FUN_00dd8860();
  return;
}

// 00DD8B70  FUN_00dd8b70  size=406  [callgraph]
undefined4 __thiscall
FUN_00dd8b70(int *param_1,uint param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 *param_7,int param_8)

{
  uint *puVar1;
  HANDLE pvVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  param_1[0x2b] = param_5;
  param_1[0x2c] = param_6;
  uVar5 = -(uint)((int)((ulonglong)param_2 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x18)
  ;
  puVar1 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,param_4);
  if (puVar1 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = puVar1 + 1;
    *puVar1 = param_2;
    FUN_00401040(puVar7,0x18,param_2,&LAB_00dd9220);
  }
  *param_1 = (int)puVar7;
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  FUN_00dd6f40(param_2,param_3);
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 1;
  param_1[4] = 0;
  *(int **)*param_1 = param_1;
  param_5 = 1;
  if (1 < param_1[1]) {
    param_2 = 0x18;
    puVar8 = param_7;
    do {
      puVar8 = puVar8 + 1;
      puVar9 = (undefined4 *)(*param_1 + param_2);
      *puVar9 = param_1;
      puVar9[1] = 0;
      if (puVar9[2] == 0) {
        pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
        puVar9[2] = pvVar2;
      }
      if (puVar9[3] == 0) {
        pvVar2 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
        puVar9[3] = pvVar2;
      }
      uVar6 = 0;
      if (param_8 != 0) {
        uVar6 = *(undefined4 *)((param_8 - (int)param_7) + (int)puVar8);
      }
      if (param_7 == (undefined4 *)0x0) {
        pcVar3 = "JobManager";
      }
      else {
        pcVar3 = (char *)*puVar8;
      }
      iVar4 = FUN_00dd82c0(&LAB_00dd81b0,puVar9,0x10000,
                           *(undefined4 *)((param_3 - (int)param_7) + (int)puVar8),pcVar3,uVar6);
      puVar9[1] = iVar4;
      if (iVar4 == 0) {
        FUN_00dd56a0(&DAT_016c4dd0);
        FUN_00dd8860();
        return 0;
      }
      param_2 = param_2 + 0x18;
      param_5 = param_5 + 1;
    } while (param_5 < param_1[1]);
  }
  return 1;
}

// 00DD8DA0  FUN_00dd8da0  size=289  [callgraph]
void __fastcall FUN_00dd8da0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x18) = DAT_01dd0564;
  DAT_01dd0564 = param_1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    DAT_01dd0564 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x10);
    do {
      iVar3 = *(int *)(iVar1 + 0x18);
      if (iVar3 < 1) {
LAB_00dd8de8:
        FUN_00dd56a0(&DAT_016c4e08);
      }
      else {
        if (iVar3 < 3) {
          *(undefined4 *)(iVar1 + 0x18) = 3;
          *(undefined4 *)(iVar1 + 0x1c) = 1;
          FUN_00dd82c0(FUN_00dd8810,iVar1,*(undefined4 *)(iVar1 + 0x20),0,
                       *(undefined4 *)(iVar1 + 0x14),0);
        }
        else if (iVar3 != 3) goto LAB_00dd8de8;
        if ((*(int *)(iVar1 + 0x1c) == 0) ||
           (iVar3 = *(int *)(iVar1 + 0x1c) + -1, *(int *)(iVar1 + 0x1c) = iVar3, iVar3 < 1)) {
          *(undefined4 *)(iVar1 + 0x18) = 4;
          ReleaseSemaphore(*(HANDLE *)(iVar1 + 0x24),1,(LPLONG)0x0);
          WaitForSingleObject(*(HANDLE *)(iVar1 + 0x28),0xffffffff);
        }
      }
    } while (*(int *)(iVar1 + 0x18) == 2);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(iVar1 + 0x30);
    if (*(int *)(iVar1 + 0x18) == 0) {
      if (*(int *)(param_1 + 8) == iVar1) {
        *(int *)(param_1 + 8) = iVar3;
      }
      if (*(int *)(iVar1 + 0x2c) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0x30) = *(undefined4 *)(iVar1 + 0x30);
      }
      if (*(int *)(iVar1 + 0x30) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
      }
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      iVar2 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(int *)(iVar1 + 0x30) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x2c) = iVar1;
      }
      *(int *)(param_1 + 0xc) = iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      DAT_01dd0564 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
  } while( true );
}

// 00DD8F60  FUN_00dd8f60  size=29  [callgraph]
undefined4 __fastcall FUN_00dd8f60(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  return 1;
}

// 00DD8FA0  FUN_00dd8fa0  size=49  [callgraph]
bool __thiscall FUN_00dd8fa0(int *param_1,LONG param_2,LONG param_3)

{
  HANDLE pvVar1;
  
  if (*param_1 != 0) {
    return false;
  }
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_2,param_3,(LPCSTR)0x0);
  *param_1 = (int)pvVar1;
  return pvVar1 != (HANDLE)0x0;
}

// 00DD8FE0  FUN_00dd8fe0  size=24  [callgraph]
void __fastcall FUN_00dd8fe0(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD9030  FUN_00dd9030  size=26  [callgraph]
void __fastcall FUN_00dd9030(int *param_1)

{
  HANDLE pvVar1;
  
  if (*param_1 == 0) {
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    *param_1 = (int)pvVar1;
  }
  return;
}

// 00DD9070  FUN_00dd9070  size=24  [callgraph]
void __fastcall FUN_00dd9070(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD90A0  FUN_00dd90a0  size=26  [callgraph]
void __fastcall FUN_00dd90a0(int *param_1)

{
  HANDLE pvVar1;
  
  if (*param_1 == 0) {
    pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    *param_1 = (int)pvVar1;
  }
  return;
}

// 00DD90E0  FUN_00dd90e0  size=24  [callgraph]
void __fastcall FUN_00dd90e0(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD9110  FUN_00dd9110  size=24  [callgraph]
void __fastcall FUN_00dd9110(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD9140  FUN_00dd9140  size=24  [callgraph]
void __fastcall FUN_00dd9140(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00DD9230  FUN_00dd9230  size=47  [callgraph]
void __fastcall FUN_00dd9230(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00DD93A0  FUN_00dd93a0  size=35  [callgraph]
bool __thiscall FUN_00dd93a0(int param_1,int param_2)

{
  return (0x80000000U >> ((byte)param_2 & 0x1f) & *(uint *)(param_1 + (param_2 >> 5) * 4)) != 0;
}

// 00DD9400  FUN_00dd9400  size=36  [callgraph]
bool __thiscall FUN_00dd9400(int param_1,int param_2)

{
  return (0x80000000U >> ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0x18 + (param_2 >> 5) * 4)) !=
         0;
}

// 00DD94C0  FUN_00dd94c0  size=36  [callgraph]
bool __thiscall FUN_00dd94c0(int param_1,int param_2)

{
  return (0x80000000U >> ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0x48 + (param_2 >> 5) * 4)) !=
         0;
}

// 00DD9520  FUN_00dd9520  size=181  [callgraph]
uint __fastcall FUN_00dd9520(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*(uint *)(param_1 + 0x48 + ((int)uVar1 >> 5) * 4) & 0x80000000U >> ((byte)uVar1 & 0x1f))
         == 0) {
    uVar1 = uVar1 + 1;
    if (0xb5 < uVar1) {
      return 0;
    }
  }
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x80)) {
    return uVar1;
  }
  switch(uVar1) {
  case 0xa6:
    return 0x30;
  case 0xa7:
    return 0x31;
  case 0xa8:
    return 0x32;
  case 0xa9:
    return 0x33;
  case 0xaa:
    return 0x34;
  case 0xab:
    return 0x35;
  case 0xac:
    return 0x36;
  case 0xad:
    return 0x37;
  case 0xae:
    return 0x38;
  case 0xaf:
    return 0x39;
  case 0xb0:
    return 0x2b;
  case 0xb1:
    return 0x2d;
  case 0xb2:
    return 0x2e;
  case 0xb3:
    return 0x2f;
  case 0xb4:
    return 0x2a;
  case 0xb5:
    return 10;
  default:
    return uVar1;
  }
}

// 00DD9670  FUN_00dd9670  size=137  [callgraph]
void FUN_00dd9670(void)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  
  iVar1 = FUN_00df8590();
  if (iVar1 != 0) {
    hWnd = (HWND)FUN_00df84c0();
    BVar2 = IsIconic(hWnd);
    if (BVar2 == 0) {
      if (DAT_01dd06f0 == 0) {
        iVar1 = (**(code **)(*DAT_01dd06e8 + 0x1c))(DAT_01dd06e8);
        if (iVar1 < 0) {
          DAT_01dd06ec = 0;
          return;
        }
        DAT_01dd06f0 = 1;
      }
      iVar1 = (**(code **)(*DAT_01dd06e8 + 0x24))(DAT_01dd06e8,0x100,&DAT_01dd06f8);
      if (iVar1 == -0x7ff8ffe2) {
        DAT_01dd06f0 = 0;
        DAT_01dd06ec = 0;
        return;
      }
      if (-1 < iVar1) {
        DAT_01dd06ec = 1;
        return;
      }
    }
  }
  DAT_01dd06ec = 0;
  return;
}

// 00DD9710  FUN_00dd9710  size=226  [callgraph]
void FUN_00dd9710(void)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_01dd07fc = DAT_01dd07f8;
  iVar1 = FUN_00df8590();
  if (((iVar1 != 0) && (iVar1 = FUN_00df8ca0(), iVar1 != 0)) && (iVar1 = FUN_00df8cb0(), iVar1 != 0)
     ) {
    if (DAT_01dd0800 == 0) {
      iVar1 = (**(code **)(*DAT_01dd06f4 + 0x1c))(DAT_01dd06f4);
      if (iVar1 < 0) {
        DAT_01dd07f8 = 0;
        return;
      }
      DAT_01dd0800 = 1;
    }
    iVar1 = (**(code **)(*DAT_01dd06f4 + 0x24))(DAT_01dd06f4,0x14,&DAT_01dd06d0);
    if (iVar1 == -0x7ff8ffe2) {
      DAT_01dd0800 = 0;
      DAT_01dd07f8 = 0;
      return;
    }
    if (-1 < iVar1) {
      uVar2 = DAT_018cddf4;
      if (DAT_018cddfc == -1) {
        uVar2 = FUN_00df85c0();
      }
      DAT_018cddfc = uVar2;
      if (DAT_018cde00 == -1) {
        DAT_018cde00 = FUN_00df85d0();
      }
      else {
        DAT_018cde00 = DAT_018cddf8;
      }
      DAT_018cddf4 = FUN_00df85c0();
      DAT_018cddf8 = FUN_00df85d0();
      DAT_01dd07f8 = 1;
      return;
    }
  }
  DAT_01dd07f8 = 0;
  return;
}

// 00DD9800  FUN_00dd9800  size=208  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00dd9800(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[8] = (uint)(float)DAT_018cddfc;
  uVar3 = 0;
  param_1[9] = (uint)(float)DAT_018cde00;
  if (DAT_01dd07f8 == 0) {
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    param_1[4] = (uint)(float)DAT_018cddf4;
    param_1[5] = (uint)(float)DAT_018cddf8;
    uVar3 = (uint)((DAT_01dd06dc & 0x80) != 0);
    if ((DAT_01dd06dd & 0x80) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((DAT_01dd06de & 0x80) != 0) {
      uVar3 = uVar3 | 4;
    }
    param_1[6] = -(uint)(DAT_01dd07fc != 0) & _DAT_01dd06d8;
  }
  uVar1 = *param_1;
  uVar2 = (uVar1 ^ uVar3) & uVar3;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = (uVar1 ^ uVar3) & uVar1;
  param_1[3] = uVar2;
  if (uVar1 == uVar3) {
    param_1[7] = param_1[7] + 1;
    uVar1 = param_1[7];
    if (uVar1 != DAT_018cddec) {
      if (uVar1 < DAT_018cddec + DAT_018cddf0) {
        return DAT_01dd07f8;
      }
      param_1[7] = uVar1 - DAT_018cddf0;
    }
    param_1[3] = uVar2 | uVar3;
    return DAT_01dd07f8;
  }
  param_1[7] = 0;
  return DAT_01dd07f8;
}

// 00DD99F0  FUN_00dd99f0  size=126  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dd99f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 5) {
    _DAT_01dd05e0 = param_1;
    _DAT_01dd05d0 = param_2;
    _DAT_01dd05c0 = param_3;
    _DAT_01dd05c4 = param_3;
    _DAT_01dd05c8 = param_3;
    _DAT_01dd05cc = param_3;
    _DAT_01dd05e4 = param_1;
    _DAT_01dd05e8 = param_1;
    _DAT_01dd05ec = param_1;
    _DAT_01dd05d4 = param_2;
    _DAT_01dd05d8 = param_2;
    _DAT_01dd05dc = param_2;
    return;
  }
  *(undefined4 *)(&DAT_01dd05e0 + param_4 * 4) = param_1;
  *(undefined4 *)(&DAT_01dd05d0 + param_4 * 4) = param_2;
  *(undefined4 *)(&DAT_01dd05c0 + param_4 * 4) = param_3;
  return;
}

// 00DD9A70  FUN_00dd9a70  size=20  [callgraph]
void FUN_00dd9a70(undefined4 param_1,undefined4 param_2)

{
  DAT_01dd05bc = param_1;
  DAT_01dd05b8 = param_2;
  return;
}

// 00DD9BF0  FUN_00dd9bf0  size=344  [callgraph]
void __fastcall FUN_00dd9bf0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_3c;
  ushort local_38;
  undefined1 local_36;
  undefined1 local_35;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_3c;
  puVar3 = &local_3c;
  puVar2 = (undefined4 *)register0x00000010;
  for (iVar1 = 0xe; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *param_1 = (int)local_34;
  param_1[1] = -(int)local_32;
  param_1[2] = (int)local_30;
  param_1[3] = -(int)local_2e;
  *(undefined1 *)(param_1 + 5) = local_36;
  *(undefined1 *)((int)param_1 + 0x15) = local_35;
  param_1[4] = 0;
  if ((local_38 & 1) == 0) {
    if ((local_38 & 2) == 0) {
      if ((local_38 & 4) == 0) {
        if ((local_38 & 8) != 0) {
          param_1[4] = 2;
        }
      }
      else {
        param_1[4] = 1;
      }
    }
    else {
      param_1[4] = 4;
    }
  }
  else {
    param_1[4] = 8;
  }
  if ((local_38 & 1) != 0) {
    param_1[4] = param_1[4] | 0x8000000;
  }
  if ((local_38 & 2) != 0) {
    param_1[4] = param_1[4] | 0x4000000;
  }
  if ((local_38 & 4) != 0) {
    param_1[4] = param_1[4] | 0x1000000;
  }
  if ((local_38 & 8) != 0) {
    param_1[4] = param_1[4] | 0x2000000;
  }
  if ((local_38 & 0x10) != 0) {
    param_1[4] = param_1[4] | 0x100;
  }
  if ((local_38 & 0x20) != 0) {
    param_1[4] = param_1[4] | 0x200;
  }
  if ((local_38 & 0x40) != 0) {
    param_1[4] = param_1[4] | 0x1000;
  }
  if ((char)local_38 < '\0') {
    param_1[4] = param_1[4] | 0x8000;
  }
  if ((local_38 & 0x100) != 0) {
    param_1[4] = param_1[4] | 0x400;
  }
  if ((local_38 & 0x200) != 0) {
    param_1[4] = param_1[4] | 0x2000;
  }
  if ((local_38 & 0x1000) != 0) {
    param_1[4] = param_1[4] | 0x10;
  }
  if ((local_38 & 0x2000) != 0) {
    param_1[4] = param_1[4] | 0x20;
  }
  if ((local_38 & 0x4000) != 0) {
    param_1[4] = param_1[4] | 0x40;
  }
  if ((local_38 & 0x8000) != 0) {
    param_1[4] = param_1[4] | 0x80;
  }
  __security_check_cookie(local_4 ^ (uint)&local_3c);
  return;
}

// 00DDA0E0  FUN_00dda0e0  size=140  [callgraph]
void FUN_00dda0e0(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  if ((*(uint *)(param_1 + 0x18) & 3) != 0) {
    local_1c = 0x18;
    local_18 = 0x10;
    local_10 = 2;
    local_c = 0xffff8001;
    local_8 = 0x7fff;
    local_14 = *(uint *)(param_1 + 0x18);
    iVar1 = (**(code **)(*(int *)(&DAT_01dd05a8)[DAT_01dd0808] + 0x18))
                      ((int *)(&DAT_01dd05a8)[DAT_01dd0808],4,&local_1c);
    if (iVar1 < 0) {
      __security_check_cookie(local_4 ^ (uint)&local_1c);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DDA210  FUN_00dda210  size=90  [callgraph]
void FUN_00dda210(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uVar1 ^ param_2) & param_2;
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = (uVar1 ^ param_2) & uVar1;
  param_1[3] = uVar2;
  if (uVar1 != param_2) {
    param_1[0xb] = 0;
    return;
  }
  param_1[0xb] = param_1[0xb] + 1;
  uVar1 = param_1[0xb];
  if (uVar1 != DAT_01dd05bc) {
    if (uVar1 < DAT_01dd05bc + DAT_01dd05b8) {
      return;
    }
    param_1[0xb] = uVar1 - DAT_01dd05b8;
  }
  param_1[3] = uVar2 | param_2;
  return;
}

// 00DDA270  FUN_00dda270  size=40  [callgraph]
void FUN_00dda270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00dd99f0(param_1,param_2,param_3,param_4);
  return;
}

// 00DDA2F0  FUN_00dda2f0  size=42  [callgraph]
void FUN_00dda2f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00dfd140(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)(&DAT_01dd0624 + iVar1 * 0x38) = param_1;
  } while (iVar2 < 4);
  return;
}

// 00DDA320  FUN_00dda320  size=30  [callgraph]
undefined4 FUN_00dda320(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dfd140(param_1);
  return *(undefined4 *)(&DAT_01dd0624 + iVar1 * 0x38);
}

// 00DDA340  FUN_00dda340  size=30  [callgraph]
undefined4 FUN_00dda340(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dfd140(param_1);
  return *(undefined4 *)(&DAT_01dd0600 + iVar1 * 0x38);
}

// 00DDA360  FUN_00dda360  size=77  [callgraph]
void FUN_00dda360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00dfd140(param_1);
  iVar1 = iVar1 * 0x38;
  *(undefined4 *)(&DAT_01dd0604 + iVar1) = param_2;
  *(undefined4 *)(&DAT_01dd0608 + iVar1) = param_2;
  *(undefined4 *)(&DAT_01dd061c + iVar1) = param_4;
  *(undefined4 *)(&DAT_01dd0620 + iVar1) = param_4;
  *(undefined4 *)(&DAT_01dd060c + iVar1) = param_3;
  *(undefined4 *)(&DAT_01dd0610 + iVar1) = param_3;
  return;
}

// 00DDA3B0  FUN_00dda3b0  size=87  [callgraph]
void FUN_00dda3b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00dfd140(param_1);
  iVar1 = iVar1 * 0x38;
  *(undefined4 *)(&DAT_01dd061c + iVar1) = param_4;
  *(undefined4 *)(&DAT_01dd0620 + iVar1) = param_4;
  *(undefined4 *)(&DAT_01dd0604 + iVar1) = *param_2;
  *(undefined4 *)(&DAT_01dd0608 + iVar1) = param_2[1];
  *(undefined4 *)(&DAT_01dd060c + iVar1) = *param_3;
  *(undefined4 *)(&DAT_01dd0610 + iVar1) = param_3[1];
  return;
}

// 00DDA410  FUN_00dda410  size=10  [callgraph]
void FUN_00dda410(undefined4 param_1)

{
  DAT_01dd0810 = param_1;
  return;
}

// 00DDA450  thunk_FUN_00dd9800  size=5  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_00dd9800(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[8] = (uint)(float)DAT_018cddfc;
  uVar3 = 0;
  param_1[9] = (uint)(float)DAT_018cde00;
  if (DAT_01dd07f8 == 0) {
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    param_1[4] = (uint)(float)DAT_018cddf4;
    param_1[5] = (uint)(float)DAT_018cddf8;
    uVar3 = (uint)((DAT_01dd06dc & 0x80) != 0);
    if ((DAT_01dd06dd & 0x80) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((DAT_01dd06de & 0x80) != 0) {
      uVar3 = uVar3 | 4;
    }
    param_1[6] = -(uint)(DAT_01dd07fc != 0) & _DAT_01dd06d8;
  }
  uVar1 = *param_1;
  uVar2 = (uVar1 ^ uVar3) & uVar3;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = (uVar1 ^ uVar3) & uVar1;
  param_1[3] = uVar2;
  if (uVar1 == uVar3) {
    param_1[7] = param_1[7] + 1;
    uVar1 = param_1[7];
    if (uVar1 != DAT_018cddec) {
      if (uVar1 < DAT_018cddec + DAT_018cddf0) {
        return DAT_01dd07f8;
      }
      param_1[7] = uVar1 - DAT_018cddf0;
    }
    param_1[3] = uVar2 | uVar3;
    return DAT_01dd07f8;
  }
  param_1[7] = 0;
  return DAT_01dd07f8;
}

// 00DDA460  FUN_00dda460  size=49  [callgraph]
void FUN_00dda460(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fdbc60();
  uVar1 = FUN_00fdbc60(uVar1);
  FUN_00df85e0(uVar1);
  if (param_3 == 0) {
    DAT_018cddfc = 0xffffffff;
    DAT_018cde00 = 0xffffffff;
  }
  return;
}

// 00DDA500  FUN_00dda500  size=323  [callgraph]
void FUN_00dda500(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar3 = *param_1 ^ param_1[0x18];
  param_1[0xc] = uVar3 & param_1[0x18];
  param_1[6] = uVar3 & *param_1;
  uVar3 = param_1[1] ^ param_1[0x19];
  param_1[0xd] = uVar3 & param_1[0x19];
  param_1[7] = uVar3 & param_1[1];
  uVar3 = param_1[2] ^ param_1[0x1a];
  param_1[0xe] = uVar3 & param_1[0x1a];
  param_1[8] = uVar3 & param_1[2];
  uVar3 = param_1[3] ^ param_1[0x1b];
  param_1[0xf] = uVar3 & param_1[0x1b];
  param_1[9] = uVar3 & param_1[3];
  uVar3 = param_1[4] ^ param_1[0x1c];
  param_1[0x10] = uVar3 & param_1[0x1c];
  param_1[10] = uVar3 & param_1[4];
  uVar3 = param_1[5] ^ param_1[0x1d];
  param_1[0xb] = uVar3 & param_1[5];
  param_1[0x11] = uVar3 & param_1[0x1d];
  param_1[0x12] = param_1[6];
  param_1[0x13] = param_1[7];
  param_1[0x14] = param_1[8];
  param_1[0x15] = param_1[9];
  param_1[0x16] = param_1[10];
  param_1[0x17] = param_1[0xb];
  uVar3 = 0x18;
  puVar1 = param_1;
  puVar2 = param_1 + 0x18;
  do {
    puVar5 = puVar2;
    puVar4 = puVar1;
    if (*puVar5 != *puVar4) goto LAB_00dda5f0;
    uVar3 = uVar3 - 4;
    puVar1 = puVar4 + 1;
    puVar2 = puVar5 + 1;
  } while (3 < uVar3);
  if ((uVar3 == 0) ||
     (((char)puVar4[1] == (char)puVar5[1] &&
      ((uVar3 < 2 ||
       ((*(char *)((int)puVar4 + 5) == *(char *)((int)puVar5 + 5) &&
        ((uVar3 < 3 || (*(char *)((int)puVar4 + 6) == *(char *)((int)puVar5 + 6))))))))))) {
    param_1[0x1e] = param_1[0x1e] + 1;
    uVar3 = param_1[0x1e];
    if (uVar3 != DAT_018cd830) {
      if (uVar3 < DAT_018cd830 + DAT_018cd834) {
        return;
      }
      param_1[0x1e] = uVar3 - DAT_018cd834;
    }
    param_1[0x12] = param_1[0x12] | *param_1;
    param_1[0x13] = param_1[0x13] | param_1[1];
    param_1[0x14] = param_1[0x14] | param_1[2];
    param_1[0x15] = param_1[0x15] | param_1[3];
    param_1[0x16] = param_1[0x16] | param_1[4];
    param_1[0x17] = param_1[0x17] | param_1[5];
    return;
  }
LAB_00dda5f0:
  param_1[0x1e] = 0;
  return;
}

// 00DDA660  FUN_00dda660  size=122  [callgraph]
undefined4 FUN_00dda660(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  if (DAT_01dd06e8 == (int *)0x0) {
    piVar3 = DAT_01dd06e4;
    iVar1 = (**(code **)(*DAT_01dd06e4 + 0xc))(DAT_01dd06e4,&DAT_01824748,local_4,0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,&DAT_01824e44);
      if (-1 < iVar1) {
        iVar1 = *piVar3;
        uVar2 = FUN_00df84c0(10);
        iVar1 = (**(code **)(iVar1 + 0x34))(piVar3,uVar2);
        if (-1 < iVar1) {
          DAT_01dd06e8 = piVar3;
          return 1;
        }
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return 0;
}

// 00DDA710  FUN_00dda710  size=247  [callgraph]
int FUN_00dda710(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_018cdde8 != 0) {
    param_1[0x18] = *param_1;
    param_1[0x19] = param_1[1];
    param_1[0x1a] = param_1[2];
    param_1[0x1b] = param_1[3];
    param_1[0x1c] = param_1[4];
    param_1[0x1d] = param_1[5];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (DAT_01dd06ec != 0) {
      uVar3 = 0;
      do {
        iVar2 = *(int *)((int)&DAT_018cd838 + uVar3) >> 5;
        bVar1 = (byte)*(int *)((int)&DAT_018cd838 + uVar3);
        if (((&DAT_01dd06f8)[*(int *)((int)&DAT_018cd83c + uVar3)] & 0x80) == 0) {
          param_1[iVar2] = param_1[iVar2] & ~(0x80000000U >> (bVar1 & 0x1f));
        }
        else {
          param_1[iVar2] = param_1[iVar2] | 0x80000000U >> (bVar1 & 0x1f);
        }
        iVar2 = *(int *)((int)&DAT_018cd840 + uVar3) >> 5;
        bVar1 = (byte)*(int *)((int)&DAT_018cd840 + uVar3);
        if (((&DAT_01dd06f8)[*(int *)((int)&DAT_018cd844 + uVar3)] & 0x80) == 0) {
          param_1[iVar2] = param_1[iVar2] & ~(0x80000000U >> (bVar1 & 0x1f));
        }
        else {
          param_1[iVar2] = param_1[iVar2] | 0x80000000U >> (bVar1 & 0x1f);
        }
        uVar3 = uVar3 + 0x10;
      } while (uVar3 < 0x5b0);
    }
    FUN_00dda500(param_1);
    return DAT_01dd06ec;
  }
  _memset(param_1,0,0x7c);
  return 0;
}

// 00DDA850  FUN_00dda850  size=122  [callgraph]
undefined4 FUN_00dda850(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_4 [4];
  
  if (DAT_01dd06f4 == (int *)0x0) {
    piVar3 = DAT_01dd06e4;
    iVar1 = (**(code **)(*DAT_01dd06e4 + 0xc))(DAT_01dd06e4,&DAT_01824738,local_4,0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,&DAT_0182504c);
      if (-1 < iVar1) {
        iVar1 = *piVar3;
        uVar2 = FUN_00df84c0(10);
        iVar1 = (**(code **)(iVar1 + 0x34))(piVar3,uVar2);
        if (-1 < iVar1) {
          DAT_01dd06f4 = piVar3;
          return 1;
        }
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return 0;
}

// 00DDA900  FUN_00dda900  size=410  [callgraph]
void FUN_00dda900(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_10;
  float local_c;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  if (((DAT_01dd0810 != 0) && (iVar2 = FUN_00df8590(), iVar2 == 0)) || (iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((float)*(int *)(param_1 + 0x30) <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)*(int *)(param_1 + 0x2c) / (float)*(int *)(param_1 + 0x30);
  }
  local_10 = *(float *)(param_1 + 0x18) * (1.0 - fVar1) + *(float *)(param_1 + 0x14) * fVar1;
  local_c = (1.0 - fVar1) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c) * fVar1;
  if (0.0 <= local_10) {
    if (1.0 < local_10) {
      local_10 = 1.0;
    }
  }
  else {
    local_10 = 0.0;
  }
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  if ((*(float *)(param_1 + 0x24) != local_10) || (*(float *)(param_1 + 0x28) != local_c)) {
    local_4._0_2_ = (undefined2)(int)ROUND(local_10 * 65535.0);
    local_8 = (undefined2)local_4;
    local_4 = (int)ROUND(local_c * 65535.0);
    local_6 = (undefined2)local_4;
    iVar3 = XInputSetState(param_2,&local_8);
    if (iVar3 == 0) {
      *(float *)(param_1 + 0x24) = local_10;
      *(float *)(param_1 + 0x28) = local_c;
      return;
    }
  }
  return;
}

// 00DDAAC0  FUN_00ddaac0  size=933  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00ddaac0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 auStack_64 [12];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  byte local_4;
  byte local_3;
  
  puVar5 = param_1;
  uStack_30 = param_2;
  uStack_34 = 0xddaad1;
  iVar6 = FUN_00dfd140();
  iVar8 = *(int *)(&DAT_01dd0600 + iVar6 * 0x38);
  if (DAT_01dd0810 == 0) {
LAB_00ddab49:
    if (iVar8 != 0) {
      puVar10 = (undefined4 *)(&DAT_01dd05f0 + iVar6 * 0x38);
      puVar11 = auStack_64;
      for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      FUN_00dd9bf0();
      if (local_18 < 0) {
        fVar2 = (float)local_18 * _DAT_01dd05e0 * 3.0517578e-05;
      }
      else {
        fVar2 = ((float)local_18 * _DAT_01dd05e0) / 32767.0;
      }
      param_1[4] = (uint)fVar2;
      if (local_14 < 0) {
        fVar3 = (float)local_14 * _DAT_01dd05e0 * 3.0517578e-05;
      }
      else {
        fVar3 = ((float)local_14 * _DAT_01dd05e0) / 32767.0;
      }
      param_1[5] = (uint)fVar3;
      if (local_10 < 0) {
        fVar4 = (float)local_10 * _DAT_01dd05e4 * 3.0517578e-05;
      }
      else {
        fVar4 = ((float)local_10 * _DAT_01dd05e4) / 32767.0;
      }
      param_1[6] = (uint)fVar4;
      if (local_c < 0) {
        param_1 = (uint *)((float)local_c * _DAT_01dd05e4 * 3.0517578e-05);
      }
      else {
        param_1 = (uint *)(((float)local_c * _DAT_01dd05e4) / 32767.0);
      }
      puVar5[7] = (uint)param_1;
      if (fVar3 * fVar3 + fVar2 * fVar2 < _DAT_01dd05d0 * _DAT_01dd05d0) {
        puVar5[4] = 0;
        puVar5[5] = 0;
      }
      if ((float)param_1 * (float)param_1 + fVar4 * fVar4 < _DAT_01dd05d4 * _DAT_01dd05d4) {
        puVar5[6] = 0;
        puVar5[7] = 0;
      }
      fVar2 = -_DAT_01dd05c0;
      if ((float)puVar5[4] <= fVar2) {
        local_8 = local_8 | 0x10000;
      }
      if (_DAT_01dd05c0 <= (float)puVar5[4]) {
        local_8 = local_8 | 0x20000;
      }
      if ((float)puVar5[5] < fVar2 != ((float)puVar5[5] == fVar2)) {
        local_8 = local_8 | 0x40000;
      }
      if (_DAT_01dd05c0 <= (float)puVar5[5]) {
        local_8 = local_8 | 0x80000;
      }
      fVar2 = -_DAT_01dd05c4;
      if ((float)puVar5[6] <= fVar2) {
        local_8 = local_8 | 0x100000;
      }
      if (_DAT_01dd05c4 <= (float)puVar5[6]) {
        local_8 = local_8 | 0x200000;
      }
      if ((float)puVar5[7] < fVar2 != ((float)puVar5[7] == fVar2)) {
        local_8 = local_8 | 0x400000;
      }
      if (_DAT_01dd05c4 <= (float)puVar5[7]) {
        local_8 = local_8 | 0x800000;
      }
      fVar3 = ((float)local_4 * _DAT_01dd05e8) / 255.0;
      fVar2 = ((float)local_3 * _DAT_01dd05ec) / 255.0;
      if (ABS(fVar3) < _DAT_01dd05d8) {
        fVar3 = 0.0;
      }
      if (ABS(fVar2) < _DAT_01dd05dc) {
        fVar2 = 0.0;
      }
      if (_DAT_01dd05c8 < fVar3 != (_DAT_01dd05c8 == fVar3)) {
        local_8 = local_8 | 0x800;
      }
      if (_DAT_01dd05cc < fVar2 != (_DAT_01dd05cc == fVar2)) {
        local_8 = local_8 | 0x4000;
      }
      puVar5[8] = (uint)fVar3;
      puVar5[10] = 1;
      goto LAB_00ddab1a;
    }
  }
  else {
    uStack_30 = 0xddaafa;
    iVar7 = FUN_00df8590();
    if (iVar7 != 0) goto LAB_00ddab49;
    iVar8 = 0;
  }
  fVar2 = 0.0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  local_8 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
LAB_00ddab1a:
  uVar1 = *puVar5;
  puVar5[9] = (uint)fVar2;
  uVar9 = (uVar1 ^ local_8) & local_8;
  *puVar5 = local_8;
  puVar5[1] = uVar9;
  puVar5[2] = (uVar1 ^ local_8) & uVar1;
  puVar5[3] = uVar9;
  if (uVar1 != local_8) {
    puVar5[0xb] = 0;
    return iVar8;
  }
  puVar5[0xb] = puVar5[0xb] + 1;
  uVar1 = puVar5[0xb];
  if (uVar1 != DAT_01dd05bc) {
    if (uVar1 < DAT_01dd05bc + DAT_01dd05b8) {
      return iVar8;
    }
    puVar5[0xb] = uVar1 - DAT_01dd05b8;
  }
  puVar5[3] = uVar9 | local_8;
  return iVar8;
}

// 00DDAF70  FUN_00ddaf70  size=69  [callgraph]
void FUN_00ddaf70(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)((int)&DAT_01dd05a8 + uVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      piVar1 = *(int **)((int)&DAT_01dd05a8 + uVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)((int)&DAT_01dd05a8 + uVar2) = 0;
      }
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x10);
  DAT_01dd0804 = 0;
  return;
}

// 00DDAFC0  FUN_00ddafc0  size=18  [callgraph]
void FUN_00ddafc0(void *param_1)

{
  _memset(param_1,0,0x30);
  return;
}

// 00DDAFE0  thunk_FUN_00ddaac0  size=5  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_00ddaac0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 auStack_64 [12];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  byte bStack_4;
  byte bStack_3;
  
  puVar5 = param_1;
  uStack_30 = param_2;
  uStack_34 = 0xddaad1;
  iVar6 = FUN_00dfd140();
  iVar8 = *(int *)(&DAT_01dd0600 + iVar6 * 0x38);
  if (DAT_01dd0810 == 0) {
LAB_00ddab49:
    if (iVar8 != 0) {
      puVar10 = (undefined4 *)(&DAT_01dd05f0 + iVar6 * 0x38);
      puVar11 = auStack_64;
      for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      FUN_00dd9bf0();
      if (iStack_18 < 0) {
        fVar2 = (float)iStack_18 * _DAT_01dd05e0 * 3.0517578e-05;
      }
      else {
        fVar2 = ((float)iStack_18 * _DAT_01dd05e0) / 32767.0;
      }
      param_1[4] = (uint)fVar2;
      if (iStack_14 < 0) {
        fVar3 = (float)iStack_14 * _DAT_01dd05e0 * 3.0517578e-05;
      }
      else {
        fVar3 = ((float)iStack_14 * _DAT_01dd05e0) / 32767.0;
      }
      param_1[5] = (uint)fVar3;
      if (iStack_10 < 0) {
        fVar4 = (float)iStack_10 * _DAT_01dd05e4 * 3.0517578e-05;
      }
      else {
        fVar4 = ((float)iStack_10 * _DAT_01dd05e4) / 32767.0;
      }
      param_1[6] = (uint)fVar4;
      if (iStack_c < 0) {
        param_1 = (uint *)((float)iStack_c * _DAT_01dd05e4 * 3.0517578e-05);
      }
      else {
        param_1 = (uint *)(((float)iStack_c * _DAT_01dd05e4) / 32767.0);
      }
      puVar5[7] = (uint)param_1;
      if (fVar3 * fVar3 + fVar2 * fVar2 < _DAT_01dd05d0 * _DAT_01dd05d0) {
        puVar5[4] = 0;
        puVar5[5] = 0;
      }
      if ((float)param_1 * (float)param_1 + fVar4 * fVar4 < _DAT_01dd05d4 * _DAT_01dd05d4) {
        puVar5[6] = 0;
        puVar5[7] = 0;
      }
      fVar2 = -_DAT_01dd05c0;
      if ((float)puVar5[4] <= fVar2) {
        uStack_8 = uStack_8 | 0x10000;
      }
      if (_DAT_01dd05c0 <= (float)puVar5[4]) {
        uStack_8 = uStack_8 | 0x20000;
      }
      if ((float)puVar5[5] < fVar2 != ((float)puVar5[5] == fVar2)) {
        uStack_8 = uStack_8 | 0x40000;
      }
      if (_DAT_01dd05c0 <= (float)puVar5[5]) {
        uStack_8 = uStack_8 | 0x80000;
      }
      fVar2 = -_DAT_01dd05c4;
      if ((float)puVar5[6] <= fVar2) {
        uStack_8 = uStack_8 | 0x100000;
      }
      if (_DAT_01dd05c4 <= (float)puVar5[6]) {
        uStack_8 = uStack_8 | 0x200000;
      }
      if ((float)puVar5[7] < fVar2 != ((float)puVar5[7] == fVar2)) {
        uStack_8 = uStack_8 | 0x400000;
      }
      if (_DAT_01dd05c4 <= (float)puVar5[7]) {
        uStack_8 = uStack_8 | 0x800000;
      }
      fVar3 = ((float)bStack_4 * _DAT_01dd05e8) / 255.0;
      fVar2 = ((float)bStack_3 * _DAT_01dd05ec) / 255.0;
      if (ABS(fVar3) < _DAT_01dd05d8) {
        fVar3 = 0.0;
      }
      if (ABS(fVar2) < _DAT_01dd05dc) {
        fVar2 = 0.0;
      }
      if (_DAT_01dd05c8 < fVar3 != (_DAT_01dd05c8 == fVar3)) {
        uStack_8 = uStack_8 | 0x800;
      }
      if (_DAT_01dd05cc < fVar2 != (_DAT_01dd05cc == fVar2)) {
        uStack_8 = uStack_8 | 0x4000;
      }
      puVar5[8] = (uint)fVar3;
      puVar5[10] = 1;
      goto LAB_00ddab1a;
    }
  }
  else {
    uStack_30 = 0xddaafa;
    iVar7 = FUN_00df8590();
    if (iVar7 != 0) goto LAB_00ddab49;
    iVar8 = 0;
  }
  fVar2 = 0.0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  uStack_8 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
LAB_00ddab1a:
  uVar1 = *puVar5;
  puVar5[9] = (uint)fVar2;
  uVar9 = (uVar1 ^ uStack_8) & uStack_8;
  *puVar5 = uStack_8;
  puVar5[1] = uVar9;
  puVar5[2] = (uVar1 ^ uStack_8) & uVar1;
  puVar5[3] = uVar9;
  if (uVar1 != uStack_8) {
    puVar5[0xb] = 0;
    return iVar8;
  }
  puVar5[0xb] = puVar5[0xb] + 1;
  uVar1 = puVar5[0xb];
  if (uVar1 != DAT_01dd05bc) {
    if (uVar1 < DAT_01dd05bc + DAT_01dd05b8) {
      return iVar8;
    }
    puVar5[0xb] = uVar1 - DAT_01dd05b8;
  }
  puVar5[3] = uVar9 | uStack_8;
  return iVar8;
}

// 00DDAFF0  FUN_00ddaff0  size=18  [callgraph]
void FUN_00ddaff0(void *param_1)

{
  _memset(param_1,0,0x7c);
  return;
}

// 00DDB010  thunk_FUN_00dda710  size=5  [callgraph]
int thunk_FUN_00dda710(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_018cdde8 != 0) {
    param_1[0x18] = *param_1;
    param_1[0x19] = param_1[1];
    param_1[0x1a] = param_1[2];
    param_1[0x1b] = param_1[3];
    param_1[0x1c] = param_1[4];
    param_1[0x1d] = param_1[5];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (DAT_01dd06ec != 0) {
      uVar3 = 0;
      do {
        iVar2 = *(int *)((int)&DAT_018cd838 + uVar3) >> 5;
        bVar1 = (byte)*(int *)((int)&DAT_018cd838 + uVar3);
        if (((&DAT_01dd06f8)[*(int *)((int)&DAT_018cd83c + uVar3)] & 0x80) == 0) {
          param_1[iVar2] = param_1[iVar2] & ~(0x80000000U >> (bVar1 & 0x1f));
        }
        else {
          param_1[iVar2] = param_1[iVar2] | 0x80000000U >> (bVar1 & 0x1f);
        }
        iVar2 = *(int *)((int)&DAT_018cd840 + uVar3) >> 5;
        bVar1 = (byte)*(int *)((int)&DAT_018cd840 + uVar3);
        if (((&DAT_01dd06f8)[*(int *)((int)&DAT_018cd844 + uVar3)] & 0x80) == 0) {
          param_1[iVar2] = param_1[iVar2] & ~(0x80000000U >> (bVar1 & 0x1f));
        }
        else {
          param_1[iVar2] = param_1[iVar2] | 0x80000000U >> (bVar1 & 0x1f);
        }
        uVar3 = uVar3 + 0x10;
      } while (uVar3 < 0x5b0);
    }
    FUN_00dda500(param_1);
    return DAT_01dd06ec;
  }
  _memset(param_1,0,0x7c);
  return 0;
}

// 00DDB020  FUN_00ddb020  size=42  [callgraph]
void FUN_00ddb020(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0xbf800000;
  param_1[5] = 0xbf800000;
  return;
}

// 00DDB140  FUN_00ddb140  size=228  [callgraph]
void FUN_00ddb140(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_01dd0804 == 0) && (DAT_01dd06e4 != (int *)0x0)) {
    DAT_01dd0808 = 0;
    iVar2 = (**(code **)(*DAT_01dd06e4 + 0x10))(DAT_01dd06e4,4,&LAB_00dda170,0,1);
    if (iVar2 < 0) {
      FUN_00ddaf70();
      return;
    }
    if (DAT_01dd05a8 == 0) {
      FUN_00ddaf70();
      return;
    }
    uVar4 = 0;
    do {
      piVar1 = *(int **)((int)&DAT_01dd05a8 + uVar4);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,&DAT_01825254);
        if (iVar2 < 0) goto LAB_00ddb224;
        iVar2 = **(int **)((int)&DAT_01dd05a8 + uVar4);
        uVar3 = FUN_00df84c0(10);
        iVar2 = (**(code **)(iVar2 + 0x34))(*(undefined4 *)((int)&DAT_01dd05a8 + uVar4),uVar3);
        if (iVar2 < 0) goto LAB_00ddb224;
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x10);
    uVar4 = 0;
    do {
      if ((int *)(&DAT_01dd05a8)[uVar4] != (int *)0x0) {
        iVar2 = *(int *)(&DAT_01dd05a8)[uVar4];
        DAT_01dd0808 = uVar4;
        uVar3 = FUN_00df84c0(0);
        iVar2 = (**(code **)(iVar2 + 0x10))((&DAT_01dd05a8)[uVar4],FUN_00dda0e0,uVar3);
        if (iVar2 < 0) {
LAB_00ddb224:
          FUN_00ddaf70();
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    DAT_01dd0804 = 1;
  }
  return;
}

// 00DDB230  FUN_00ddb230  size=103  [callgraph]
void FUN_00ddb230(void)

{
  if (DAT_01dd06f4 != (int *)0x0) {
    (**(code **)(*DAT_01dd06f4 + 8))(DAT_01dd06f4);
    DAT_01dd06f4 = (int *)0x0;
  }
  DAT_01dd07f8 = 0;
  DAT_01dd0800 = 0;
  if (DAT_01dd06e8 != (int *)0x0) {
    (**(code **)(*DAT_01dd06e8 + 8))(DAT_01dd06e8);
    DAT_01dd06e8 = (int *)0x0;
  }
  DAT_01dd06ec = 0;
  DAT_01dd06f0 = 0;
  FUN_00ddaf70();
  if (DAT_01dd06e4 != (int *)0x0) {
    (**(code **)(*DAT_01dd06e4 + 8))(DAT_01dd06e4);
    DAT_01dd06e4 = (int *)0x0;
  }
  return;
}

// 00DDB2A0  FUN_00ddb2a0  size=163  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ddb2a0(void)

{
  _memset(&DAT_01dd05f0,0,0xe0);
  FUN_00ddb140();
  _DAT_01dd05e0 = 0x447a0000;
  DAT_01dd05bc = 10;
  _DAT_01dd05d0 = 0x43c80000;
  DAT_01dd05b8 = 3;
  _DAT_01dd0624 = 1;
  _DAT_01dd05c0 = 0x44160000;
  _DAT_01dd065c = 1;
  _DAT_01dd05c4 = 0x44160000;
  _DAT_01dd0694 = 1;
  _DAT_01dd05c8 = 0x44160000;
  _DAT_01dd06cc = 1;
  _DAT_01dd05cc = 0x44160000;
  _DAT_01dd05e4 = 0x447a0000;
  _DAT_01dd05e8 = 0x447a0000;
  _DAT_01dd05ec = 0x447a0000;
  _DAT_01dd05d4 = 0x43c80000;
  _DAT_01dd05d8 = 0x43c80000;
  _DAT_01dd05dc = 0x43c80000;
  return;
}

// 00DDB350  FUN_00ddb350  size=97  [callgraph]
void FUN_00ddb350(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = FUN_00dfd140(iVar4);
    iVar1 = iVar2 * 0x38;
    iVar3 = XInputGetState(iVar2,&DAT_01dd05f0 + iVar1);
    *(uint *)(&DAT_01dd0600 + iVar1) = (uint)(iVar3 == 0);
    FUN_00dda900(&DAT_01dd05f0 + iVar1,iVar2);
    iVar2 = *(int *)(&DAT_01dd061c + iVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(&DAT_01dd0620 + iVar1) = 0;
      *(undefined4 *)(&DAT_01dd0604 + iVar1) = 0;
      *(undefined4 *)(&DAT_01dd0608 + iVar1) = 0;
      *(undefined4 *)(&DAT_01dd060c + iVar1) = 0;
      *(undefined4 *)(&DAT_01dd0610 + iVar1) = 0;
    }
    if (0 < iVar2) {
      *(int *)(&DAT_01dd061c + iVar1) = iVar2 + -1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

// 00DDB3C0  FUN_00ddb3c0  size=97  [callgraph]
bool FUN_00ddb3c0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01dd06e4 == 0) {
    uVar1 = FUN_00df84b0(0x800,&DAT_018245d8,&DAT_01dd06e4,0);
    iVar2 = DirectInput8Create(uVar1);
    if (iVar2 < 0) {
      FUN_00dd56a0(&DAT_016c4e2c);
    }
    else {
      iVar2 = FUN_00ddb2a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00dda660();
        if (iVar2 != 0) {
          DAT_018cdde8 = 1;
          iVar2 = FUN_00dda850();
          return iVar2 != 0;
        }
      }
    }
  }
  return false;
}

// 00DDB430  FUN_00ddb430  size=15  [callgraph]
void FUN_00ddb430(void)

{
  FUN_00ddb350();
  FUN_00dd9670();
  FUN_00dd9710();
  return;
}

// 00DDB500  FUN_00ddb500  size=1  [callgraph]
void FUN_00ddb500(void)

{
  return;
}

// 00DDB510  FUN_00ddb510  size=66  [callgraph]
float10 FUN_00ddb510(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return (float10)((float)((iVar1 + 5) / 10) * *(float *)(&DAT_016c4ed0 + param_2 * 4));
}

// 00DDB590  FUN_00ddb590  size=278  [callgraph]
void FUN_00ddb590(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar5 = (float10)FUN_00fdee60();
  fVar6 = (float10)FUN_00fdee60();
  fVar7 = (float10)FUN_00fdee60();
  fVar1 = (float)fVar7;
  fVar7 = (float10)FUN_00fded30();
  fVar8 = (float10)FUN_00fded30();
  fVar9 = (float10)FUN_00fded30();
  fVar2 = (float)fVar9;
  fVar4 = (float)fVar5 * (float)fVar8;
  fVar3 = (float)fVar7 * (float)fVar6;
  *param_1 = fVar2 * fVar4 - fVar1 * fVar3;
  param_1[1] = fVar2 * fVar3 + fVar1 * fVar4;
  fVar3 = (float)fVar7 * (float)fVar8;
  fVar4 = (float)fVar6 * (float)fVar5;
  param_1[2] = fVar1 * fVar3 - fVar2 * fVar4;
  param_1[3] = fVar1 * fVar4 + fVar2 * fVar3;
  return;
}

// 00DDB6B0  FUN_00ddb6b0  size=812  [callgraph]
void FUN_00ddb6b0(float *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  fVar7 = (float10)FUN_00fdee60();
  fVar1 = (float)fVar7;
  fVar7 = (float10)FUN_00fdee60();
  fVar2 = (float)fVar7;
  fVar7 = (float10)FUN_00fdee60();
  fVar3 = (float)fVar7;
  fVar7 = (float10)FUN_00fded30();
  fVar4 = (float)fVar7;
  fVar7 = (float10)FUN_00fded30();
  fVar5 = (float)fVar7;
  fVar7 = (float10)FUN_00fded30();
  fVar6 = (float)fVar7;
  switch(param_3) {
  case 1:
    *param_1 = fVar1 * fVar5 * fVar6 - fVar4 * fVar3 * fVar2;
    param_1[1] = fVar4 * fVar2 * fVar6 - fVar1 * fVar3 * fVar5;
    param_1[2] = fVar4 * fVar3 * fVar5 + fVar1 * fVar2 * fVar6;
    param_1[3] = fVar4 * fVar5 * fVar6 + fVar3 * fVar2 * fVar1;
    return;
  case 2:
    *param_1 = fVar5 * fVar1 * fVar6 + fVar2 * fVar4 * fVar3;
    param_1[1] = fVar2 * fVar4 * fVar6 - fVar5 * fVar3 * fVar1;
    param_1[2] = fVar5 * fVar4 * fVar3 - fVar2 * fVar1 * fVar6;
    param_1[3] = fVar2 * fVar3 * fVar1 + fVar5 * fVar4 * fVar6;
    return;
  case 3:
    *param_1 = fVar5 * fVar1 * fVar6 + fVar2 * fVar4 * fVar3;
    param_1[1] = fVar2 * fVar4 * fVar6 + fVar5 * fVar3 * fVar1;
    param_1[2] = fVar5 * fVar4 * fVar3 - fVar2 * fVar1 * fVar6;
    param_1[3] = fVar5 * fVar4 * fVar6 - fVar3 * fVar1 * fVar2;
    return;
  case 4:
    *param_1 = fVar6 * fVar1 * fVar5 - fVar3 * fVar4 * fVar2;
    param_1[1] = fVar6 * fVar4 * fVar2 + fVar3 * fVar1 * fVar5;
    param_1[2] = fVar3 * fVar4 * fVar5 + fVar6 * fVar2 * fVar1;
    param_1[3] = fVar6 * fVar4 * fVar5 - fVar2 * fVar1 * fVar3;
    return;
  case 5:
    *param_1 = fVar6 * fVar1 * fVar5 - fVar3 * fVar4 * fVar2;
    param_1[1] = fVar6 * fVar4 * fVar2 + fVar3 * fVar1 * fVar5;
    param_1[2] = fVar3 * fVar4 * fVar5 - fVar6 * fVar2 * fVar1;
    param_1[3] = fVar3 * fVar2 * fVar1 + fVar6 * fVar4 * fVar5;
    return;
  default:
    *param_1 = fVar1 * fVar5 * fVar6 + fVar4 * fVar3 * fVar2;
    param_1[1] = fVar4 * fVar2 * fVar6 - fVar1 * fVar3 * fVar5;
    param_1[2] = fVar4 * fVar3 * fVar5 + fVar1 * fVar2 * fVar6;
    param_1[3] = fVar4 * fVar5 * fVar6 - fVar1 * fVar3 * fVar2;
    return;
  }
}

// 00DDB9F0  FUN_00ddb9f0  size=16  [callgraph]
void FUN_00ddb9f0(undefined4 param_1,undefined4 param_2)

{
  D3DXMatrixRotationQuaternion(param_1,param_2);
  return;
}

// 00DDBA00  FUN_00ddba00  size=16  [callgraph]
void FUN_00ddba00(undefined4 param_1,undefined4 param_2)

{
  D3DXQuaternionRotationMatrix(param_1,param_2);
  return;
}

// 00DDBA30  FUN_00ddba30  size=111  [callgraph]
void FUN_00ddba30(float param_1)

{
  if (param_1 < -3.1415927) {
    do {
      param_1 = param_1 + 6.2831855;
    } while (param_1 < -3.1415927);
    return;
  }
  if (param_1 <= 3.1415927) {
    return;
  }
  do {
    param_1 = param_1 - 6.2831855;
  } while (3.1415927 < param_1);
  return;
}

// 00DDBAA0  FUN_00ddbaa0  size=88  [callgraph]
float10 FUN_00ddbaa0(float param_1)

{
  float10 fVar1;
  
  if (param_1 < -1.0 != (param_1 == -1.0)) {
    return (float10)-1.5707964;
  }
  if (!NAN(param_1) && 1.0 < param_1 != (param_1 == 1.0)) {
    return (float10)1.5707964;
  }
  fVar1 = (float10)FUN_00fdc8b0();
  return (float10)(float)fVar1;
}

// 00DDBB00  FUN_00ddbb00  size=65  [callgraph]
float10 __thiscall FUN_00ddbb00(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00ddbaa0(param_2,param_1);
  fVar1 = (float)fVar2;
  if (0.0 <= fVar1) {
    return (float10)(3.1415927 - fVar1);
  }
  return (float10)(-3.1415927 - fVar1);
}

// 00DDBB50  FUN_00ddbb50  size=84  [callgraph]
float10 FUN_00ddbb50(float param_1)

{
  float10 fVar1;
  
  if (param_1 < -1.0 != (param_1 == -1.0)) {
    return (float10)3.1415927;
  }
  if (!NAN(param_1) && 1.0 < param_1 != (param_1 == 1.0)) {
    return (float10)0.0;
  }
  fVar1 = (float10)FUN_00fdc4e0();
  return (float10)(float)fVar1;
}

// 00DDBBB0  FUN_00ddbbb0  size=3  [callgraph]
undefined4 __fastcall FUN_00ddbbb0(undefined4 param_1)

{
  return param_1;
}

// 00DDBBC0  FUN_00ddbbc0  size=1  [callgraph]
void FUN_00ddbbc0(void)

{
  return;
}

// 00DDBBD0  FUN_00ddbbd0  size=9  [callgraph]
void __thiscall FUN_00ddbbd0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00DDBBE0  FUN_00ddbbe0  size=3  [callgraph]
undefined4 __fastcall FUN_00ddbbe0(undefined4 *param_1)

{
  return *param_1;
}

// 00DDBDB0  FUN_00ddbdb0  size=53  [callgraph]
void FUN_00ddbdb0(float *param_1,undefined4 *param_2)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*param_2);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(undefined4 *)(extraout_ECX + 4));
  *(float *)(extraout_EDX + 4) = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(undefined4 *)(extraout_ECX_00 + 8));
  *(float *)(extraout_EDX_00 + 8) = (float)fVar1;
  return;
}

// 00DDBF80  FUN_00ddbf80  size=154  [callgraph]
void FUN_00ddbf80(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 + *param_3;
  param_1[1] = param_2[1] + param_3[1];
  param_1[2] = param_2[2] + param_3[2];
  param_1[3] = param_2[3] + param_3[3];
  param_1[4] = param_2[4] + param_3[4];
  param_1[5] = param_2[5] + param_3[5];
  param_1[6] = param_2[6] + param_3[6];
  param_1[7] = param_2[7] + param_3[7];
  param_1[8] = param_2[8] + param_3[8];
  param_1[9] = param_2[9] + param_3[9];
  param_1[10] = param_2[10] + param_3[10];
  param_1[0xb] = param_2[0xb] + param_3[0xb];
  param_1[0xc] = param_2[0xc] + param_3[0xc];
  param_1[0xd] = param_2[0xd] + param_3[0xd];
  param_1[0xe] = param_2[0xe] + param_3[0xe];
  param_1[0xf] = param_2[0xf] + param_3[0xf];
  return;
}

// 00DDC140  FUN_00ddc140  size=141  [callgraph]
void FUN_00ddc140(float *param_1,float *param_2,float param_3)

{
  *param_1 = param_3 * *param_2;
  param_1[1] = param_2[1] * param_3;
  param_1[2] = param_2[2] * param_3;
  param_1[3] = param_2[3] * param_3;
  param_1[4] = param_2[4] * param_3;
  param_1[5] = param_2[5] * param_3;
  param_1[6] = param_2[6] * param_3;
  param_1[7] = param_2[7] * param_3;
  param_1[8] = param_2[8] * param_3;
  param_1[9] = param_2[9] * param_3;
  param_1[10] = param_2[10] * param_3;
  param_1[0xb] = param_2[0xb] * param_3;
  param_1[0xc] = param_2[0xc] * param_3;
  param_1[0xd] = param_2[0xd] * param_3;
  param_1[0xe] = param_2[0xe] * param_3;
  param_1[0xf] = param_3 * param_2[0xf];
  return;
}

// 00DDC1D0  FUN_00ddc1d0  size=854  [callgraph]
void FUN_00ddc1d0(undefined4 *param_1,float *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [8];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  switch(param_3) {
  case 0:
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(local_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(local_60,param_2[1]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationZ(local_60,param_2[2]);
    break;
  case 1:
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(local_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(local_60,param_2[2]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationY(local_60,param_2[1]);
    break;
  case 2:
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(local_60,param_2[1]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(local_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationZ(local_60,param_2[2]);
    break;
  case 3:
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(local_60,param_2[1]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(local_60,param_2[2]);
LAB_00ddc4e0:
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    goto LAB_00ddc4ee;
  case 4:
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(local_60,param_2[2]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(local_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationY(local_60,param_2[1]);
    break;
  default:
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(local_60,param_2[2]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(local_60,param_2[1]);
      goto LAB_00ddc4e0;
    }
LAB_00ddc4ee:
    if (*param_2 == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationX(local_60,*param_2);
  }
  D3DXMatrixMultiply(param_1,auStack_68,param_1);
LAB_00ddc515:
  __security_check_cookie(local_14 ^ (uint)auStack_68);
  return;
}

// 00DDC540  thunk_FUN_00ddc1d0  size=5  [callgraph]
void thunk_FUN_00ddc1d0(undefined4 *param_1,float *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [76];
  uint uStack_14;
  
  uStack_14 = DAT_018e8764 ^ (uint)auStack_68;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  switch(param_3) {
  case 0:
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(auStack_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(auStack_60,param_2[1]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationZ(auStack_60,param_2[2]);
    break;
  case 1:
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(auStack_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(auStack_60,param_2[2]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationY(auStack_60,param_2[1]);
    break;
  case 2:
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(auStack_60,param_2[1]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(auStack_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationZ(auStack_60,param_2[2]);
    break;
  case 3:
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(auStack_60,param_2[1]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(auStack_60,param_2[2]);
LAB_00ddc4e0:
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    goto LAB_00ddc4ee;
  case 4:
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(auStack_60,param_2[2]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (*param_2 != 0.0) {
      D3DXMatrixRotationX(auStack_60,*param_2);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationY(auStack_60,param_2[1]);
    break;
  default:
    if (param_2[2] != 0.0) {
      D3DXMatrixRotationZ(auStack_60,param_2[2]);
      D3DXMatrixMultiply(param_1,auStack_68,param_1);
    }
    if (param_2[1] != 0.0) {
      D3DXMatrixRotationY(auStack_60,param_2[1]);
      goto LAB_00ddc4e0;
    }
LAB_00ddc4ee:
    if (*param_2 == 0.0) goto LAB_00ddc515;
    D3DXMatrixRotationX(auStack_60,*param_2);
  }
  D3DXMatrixMultiply(param_1,auStack_68,param_1);
LAB_00ddc515:
  __security_check_cookie(uStack_14 ^ (uint)auStack_68);
  return;
}

// 00DDC550  FUN_00ddc550  size=1015  [callgraph]
void FUN_00ddc550(undefined4 *param_1,float *param_2,undefined4 param_3)

{
  float *pfStack_90;
  undefined4 *puStack_8c;
  float *pfStack_88;
  float local_84;
  undefined1 auStack_7c [12];
  float local_70;
  float local_6c;
  float local_68 [2];
  undefined1 local_60 [56];
  uint uStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  local_70 = -*param_2;
  local_6c = -param_2[1];
  local_68[0] = -param_2[2];
  switch(param_3) {
  case 1:
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0xf] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[5] = 0x3f800000;
    *param_1 = 0x3f800000;
    if (local_6c != 0.0) {
      pfStack_88 = (float *)local_60;
      puStack_8c = (undefined4 *)0xddc5ed;
      local_84 = local_6c;
      D3DXMatrixRotationY();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_68[0] != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_68[0];
      puStack_8c = (undefined4 *)0xddc620;
      D3DXMatrixRotationZ();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_70 != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_70;
      puStack_8c = (undefined4 *)0xddc655;
      D3DXMatrixRotationX();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
      __security_check_cookie(uStack_28 ^ (uint)&pfStack_90);
      return;
    }
    break;
  case 2:
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0xf] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[5] = 0x3f800000;
    *param_1 = 0x3f800000;
    if (local_68[0] != 0.0) {
      pfStack_88 = (float *)local_60;
      puStack_8c = (undefined4 *)0xddc6c5;
      local_84 = local_68[0];
      D3DXMatrixRotationZ();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_70 != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_70;
      puStack_8c = (undefined4 *)0xddc6f8;
      D3DXMatrixRotationX();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_6c != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_6c;
      puStack_8c = (undefined4 *)0xddc72d;
      D3DXMatrixRotationY();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
      __security_check_cookie(uStack_28 ^ (uint)&pfStack_90);
      return;
    }
    break;
  case 3:
    local_84 = 1.4013e-45;
    pfStack_88 = &local_70;
    puStack_8c = param_1;
    pfStack_90 = (float *)0xddc756;
    FUN_00ddc1d0();
    __security_check_cookie(local_14 ^ (uint)auStack_7c);
    return;
  case 4:
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0xf] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[5] = 0x3f800000;
    *param_1 = 0x3f800000;
    if (local_6c != 0.0) {
      pfStack_88 = (float *)local_60;
      puStack_8c = (undefined4 *)0xddc7bd;
      local_84 = local_6c;
      D3DXMatrixRotationY();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_70 != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_70;
      puStack_8c = (undefined4 *)0xddc7f0;
      D3DXMatrixRotationX();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_68[0] != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_68[0];
      puStack_8c = (undefined4 *)0xddc825;
      D3DXMatrixRotationZ();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
      __security_check_cookie(uStack_28 ^ (uint)&pfStack_90);
      return;
    }
    break;
  case 5:
    local_84 = 0.0;
    pfStack_88 = &local_70;
    puStack_8c = param_1;
    pfStack_90 = (float *)0xddc84e;
    FUN_00ddc1d0();
    __security_check_cookie(local_14 ^ (uint)auStack_7c);
    return;
  default:
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0xf] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[5] = 0x3f800000;
    *param_1 = 0x3f800000;
    if (local_68[0] != 0.0) {
      pfStack_88 = (float *)local_60;
      puStack_8c = (undefined4 *)0xddc8b5;
      local_84 = local_68[0];
      D3DXMatrixRotationZ();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_6c != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_6c;
      puStack_8c = (undefined4 *)0xddc8e8;
      D3DXMatrixRotationY();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
    }
    if (local_70 != 0.0) {
      pfStack_88 = (float *)local_60;
      local_84 = local_70;
      puStack_8c = (undefined4 *)0xddc919;
      D3DXMatrixRotationX();
      puStack_8c = param_1;
      pfStack_90 = local_68;
      D3DXMatrixMultiply(param_1);
      __security_check_cookie(uStack_28 ^ (uint)&pfStack_90);
      return;
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_7c);
  return;
}

// 00DDC960  FUN_00ddc960  size=272  [callgraph]
void FUN_00ddc960(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[1] * *param_3 * -2.0;
  fVar2 = param_3[2] * *param_3 * -2.0;
  fVar3 = param_3[1] * -2.0 * param_3[2];
  fVar4 = (param_2[2] * param_3[2] + *param_2 * *param_3 + param_2[1] * param_3[1]) * 2.0;
  *param_1 = 1.0 - *param_3 * *param_3 * 2.0;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = 0.0;
  param_1[4] = fVar1;
  param_1[5] = 1.0 - param_3[1] * param_3[1] * 2.0;
  param_1[6] = fVar3;
  param_1[9] = fVar3;
  param_1[7] = 0.0;
  param_1[8] = fVar2;
  param_1[10] = 1.0 - param_3[2] * param_3[2] * 2.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar4 * *param_3;
  param_1[0xd] = fVar4 * param_3[1];
  param_1[0xe] = fVar4 * param_3[2];
  param_1[0xf] = 1.0;
  return;
}

// 00DDCAA0  FUN_00ddcaa0  size=270  [callgraph]
void FUN_00ddcaa0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  
  fVar1 = 1.0 - param_4;
  *param_1 = *param_3 * param_4 + fVar1 * *param_2;
  param_1[1] = param_3[1] * param_4 + param_2[1] * fVar1;
  param_1[2] = param_3[2] * param_4 + param_2[2] * fVar1;
  param_1[3] = param_3[3] * param_4 + param_2[3] * fVar1;
  param_1[4] = param_3[4] * param_4 + param_2[4] * fVar1;
  param_1[5] = param_3[5] * param_4 + param_2[5] * fVar1;
  param_1[6] = param_3[6] * param_4 + param_2[6] * fVar1;
  param_1[7] = param_3[7] * param_4 + param_2[7] * fVar1;
  param_1[8] = param_3[8] * param_4 + param_2[8] * fVar1;
  param_1[9] = param_3[9] * param_4 + param_2[9] * fVar1;
  param_1[10] = param_3[10] * param_4 + param_2[10] * fVar1;
  param_1[0xb] = param_3[0xb] * param_4 + param_2[0xb] * fVar1;
  param_1[0xc] = param_3[0xc] * param_4 + param_2[0xc] * fVar1;
  param_1[0xd] = param_3[0xd] * param_4 + param_2[0xd] * fVar1;
  param_1[0xe] = param_3[0xe] * param_4 + param_2[0xe] * fVar1;
  param_1[0xf] = fVar1 * param_2[0xf] + param_3[0xf] * param_4;
  return;
}

// 00DDCBB0  FUN_00ddcbb0  size=156  [callgraph]
void FUN_00ddcbb0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
  double dVar1;
  float unaff_retaddr;
  float fVar2;
  float fVar3;
  undefined4 local_8;
  undefined4 uStack_4;
  
  dVar1 = (double)(param_6 - param_7);
  fVar3 = 2.0 / (param_5 - param_4);
  fVar2 = 2.0 / (param_3 - param_2);
  D3DXMatrixScaling(param_1,fVar2,fVar3,1.0 / (param_6 - param_7));
  local_8 = SUB84(dVar1,0);
  uStack_4 = (float)((ulonglong)dVar1 >> 0x20);
  *(float *)((int)param_1 + 0x30) = (uStack_4 + local_8) / (local_8 - uStack_4);
  *(float *)((int)param_1 + 0x34) = (param_1 + unaff_retaddr) / (unaff_retaddr - param_1);
  *(float *)((int)param_1 + 0x38) = param_2 / (float)(double)CONCAT44(fVar3,fVar2);
  return;
}

// 00DDCCC0  FUN_00ddccc0  size=180  [callgraph]
void FUN_00ddccc0(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  float unaff_retaddr;
  
  fVar1 = (float10)FUN_00fded30();
  fVar2 = (float10)FUN_00fdee60();
  param_5 = param_5 / (param_4 - param_5);
  D3DXMatrixScaling(param_1,((float)fVar1 / (float)fVar2) / param_3,(float)fVar1 / (float)fVar2,
                    param_5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(float *)(param_1 + 0x38) = unaff_ESI * unaff_retaddr;
  *(float *)(param_1 + 0x20) = param_5 * -2.0;
  *(float *)(param_1 + 0x24) = param_3 * -2.0;
  *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

// 00DDCFE0  FUN_00ddcfe0  size=47  [callgraph]
void FUN_00ddcfe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  local_24 = param_3;
  uStack_28 = param_2;
  puStack_2c = local_20;
  D3DXQuaternionRotationAxis();
  D3DXMatrixRotationQuaternion(param_1,&puStack_2c);
  return;
}

// 00DDD010  FUN_00ddd010  size=47  [callgraph]
void FUN_00ddd010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  local_24 = param_3;
  uStack_28 = param_2;
  puStack_2c = local_20;
  D3DXQuaternionRotationAxis();
  D3DXMatrixRotationQuaternion(param_1,&puStack_2c);
  return;
}

// 00DDD140  FUN_00ddd140  size=76  [callgraph]
void FUN_00ddd140(undefined4 *param_1,undefined4 *param_2)

{
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  *param_1 = *param_2;
  param_1[5] = param_2[1];
  param_1[10] = param_2[2];
  return;
}

// 00DDD1E0  FUN_00ddd1e0  size=1388  [callgraph]
void FUN_00ddd1e0(float *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  switch(param_3) {
  case 1:
    fVar5 = (float10)FUN_00fdecda();
    *param_1 = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[1] = (float)fVar5;
    fVar5 = (float10)FUN_00ddbaa0((fVar2 * fVar1 - fVar4 * fVar3) * -2.0);
    param_1[2] = (float)fVar5;
    return;
  case 2:
    fVar5 = (float10)FUN_00ddbaa0((fVar3 * fVar2 - fVar4 * fVar1) * -2.0);
    *param_1 = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[1] = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[2] = (float)fVar5;
    return;
  case 3:
    fVar5 = (float10)FUN_00fdecda();
    *param_1 = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[1] = (float)fVar5;
    fVar1 = fVar2 * fVar1 + fVar4 * fVar3;
    fVar5 = (float10)FUN_00ddbaa0(fVar1 + fVar1);
    param_1[2] = (float)fVar5;
    return;
  case 4:
    fVar1 = fVar4 * fVar1 + fVar3 * fVar2;
    fVar5 = (float10)FUN_00ddbaa0(fVar1 + fVar1);
    *param_1 = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[1] = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[2] = (float)fVar5;
    return;
  case 5:
    fVar5 = (float10)FUN_00fdecda();
    *param_1 = (float)fVar5;
    fVar5 = (float10)FUN_00ddbaa0((fVar3 * fVar1 - fVar4 * fVar2) * -2.0);
    param_1[1] = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[2] = (float)fVar5;
    return;
  default:
    fVar5 = (float10)FUN_00fdecda();
    *param_1 = (float)fVar5;
    fVar1 = fVar3 * fVar1 + fVar4 * fVar2;
    fVar5 = (float10)FUN_00ddbaa0(fVar1 + fVar1);
    param_1[1] = (float)fVar5;
    fVar5 = (float10)FUN_00fdecda();
    param_1[2] = (float)fVar5;
    return;
  }
}

// 00DDD760  FUN_00ddd760  size=31  [callgraph]
void FUN_00ddd760(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00ddd1e0(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return;
}

// 00DDDDE0  FUN_00dddde0  size=125  [callgraph]
float10 FUN_00dddde0(undefined4 *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdef70(*param_1,param_1[2],param_1[3]);
  return (float10)(float)fVar1;
}

// 00DDDE60  FUN_00ddde60  size=112  [callgraph]
float10 FUN_00ddde60(float *param_1)

{
  return (float10)(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1 +
                  param_1[3] * param_1[3]);
}

// 00DDDED0  FUN_00ddded0  size=132  [callgraph]
void FUN_00ddded0(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fdef70();
  if ((float)fVar2 != 0.0) {
    fVar1 = 1.0 / (float)fVar2;
    *param_1 = fVar1 * *param_2;
    param_1[1] = fVar1 * param_2[1];
    param_1[2] = param_2[2] * fVar1;
    param_1[3] = fVar1 * param_2[3];
    return;
  }
  return;
}

// 00DDE0A0  FUN_00dde0a0  size=353  [callgraph]
void FUN_00dde0a0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = param_2[3] * param_3[3] +
          param_2[2] * param_3[2] + param_2[1] * param_3[1] + *param_2 * *param_3;
  pfVar2 = param_3;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
    pfVar2 = &local_20;
    local_20 = -*param_3;
    local_1c = -param_3[1];
    local_18 = -param_3[2];
    local_14 = -param_3[3];
  }
  if (fVar1 <= 0.9999) {
    fVar3 = (float10)FUN_00fdef70();
    FUN_00fdc4e0();
    fVar4 = (float10)FUN_00fdee60();
    local_24 = (float)fVar4 / (float)fVar3;
    fVar4 = (float10)FUN_00fdee60();
    param_4 = (float)fVar4 / (float)fVar3;
  }
  else {
    local_24 = 1.0 - param_4;
  }
  *param_1 = param_4 * *pfVar2 + local_24 * *param_2;
  param_1[1] = local_24 * param_2[1] + pfVar2[1] * param_4;
  param_1[2] = param_2[2] * local_24 + pfVar2[2] * param_4;
  param_1[3] = param_4 * pfVar2[3] + param_2[3] * local_24;
  return;
}

// 00DDE210  FUN_00dde210  size=117  [callgraph]
void FUN_00dde210(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00ddba30(param_2 - param_1);
  param_2 = (float)(fVar2 * (float10)param_3);
  fVar1 = -param_4;
  if ((param_2 < fVar1) || (fVar1 = param_4, param_4 < param_2)) {
    param_2 = fVar1;
  }
  FUN_00ddba30(param_2 + param_1);
  return;
}

// 00DDE290  FUN_00dde290  size=7  [callgraph]
void __fastcall FUN_00dde290(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00DDE2A0  FUN_00dde2a0  size=43  [callgraph]
int __thiscall FUN_00dde2a0(uint *param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return ((((uint)param_3 - (uint)param_2) + 1) * (uVar1 >> 0x10) >> 0x10) + (uint)param_2;
}

// 00DDE2D0  FUN_00dde2d0  size=43  [callgraph]
int __thiscall FUN_00dde2d0(uint *param_1,short param_2,short param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return ((((int)param_3 - (int)param_2) + 1) * (uVar1 >> 0x10) >> 0x10) + (int)param_2;
}

// 00DDE300  FUN_00dde300  size=77  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00dde31d) */

float10 __thiscall FUN_00dde300(uint *param_1,float param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar2;
  fVar1 = (float)(uVar2 >> 8) / 16777215.0;
  return (float10)((1.0 - fVar1) * param_3 + param_2 * fVar1);
}

// 00DDE350  FUN_00dde350  size=210  [callgraph]
void FUN_00dde350(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = *param_1 * *param_2 + param_2[1] * param_1[1];
  fVar1 = (float10)FUN_00fdef70(param_1[1],fVar3,(double)*param_2,(double)param_2[1]);
  fVar2 = (float10)FUN_00fdef70();
  FUN_00ddbb50(fVar3 / ((float)fVar2 * (float)fVar1));
  return;
}

// 00DDE430  FUN_00dde430  size=111  [callgraph]
void FUN_00dde430(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2[2] * param_3[2] + param_2[1] * param_3[1] + *param_2 * *param_3;
  fVar3 = fVar3 + fVar3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_1 = *param_2 - fVar3 * *param_3;
  param_1[1] = param_2[1] - fVar3 * fVar1;
  param_1[2] = param_2[2] - fVar3 * fVar2;
  return;
}

// 00DDE500  thunk_FUN_00dde430  size=5  [callgraph]
void thunk_FUN_00dde430(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2[2] * param_3[2] + param_2[1] * param_3[1] + *param_2 * *param_3;
  fVar3 = fVar3 + fVar3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_1 = *param_2 - fVar3 * *param_3;
  param_1[1] = param_2[1] - fVar3 * fVar1;
  param_1[2] = param_2[2] - fVar3 * fVar2;
  return;
}

// 00DDE510  FUN_00dde510  size=152  [callgraph]
void FUN_00dde510(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  
  FUN_00fdef70((double)(param_3[1] - param_4[1]),*param_3 - *param_4,param_3[1] - param_4[1],
               param_3[2] - param_4[2]);
  fVar1 = (float10)FUN_00fdecda();
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00fdecda();
  *param_2 = (float)fVar1;
  return;
}

// 00DDE5B0  thunk_FUN_00dde510  size=5  [callgraph]
void thunk_FUN_00dde510(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  
  FUN_00fdef70((double)(param_3[1] - param_4[1]),*param_3 - *param_4,param_3[1] - param_4[1],
               param_3[2] - param_4[2]);
  fVar1 = (float10)FUN_00fdecda();
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00fdecda();
  *param_2 = (float)fVar1;
  return;
}

// 00DDE5D0  thunk_FUN_00dde510  size=5  [callgraph]
void thunk_FUN_00dde510(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  
  FUN_00fdef70((double)(param_3[1] - param_4[1]),*param_3 - *param_4,param_3[1] - param_4[1],
               param_3[2] - param_4[2]);
  fVar1 = (float10)FUN_00fdecda();
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00fdecda();
  *param_2 = (float)fVar1;
  return;
}

// 00DDE5E0  FUN_00dde5e0  size=118  [callgraph]
undefined4 FUN_00dde5e0(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fdecda();
  fVar2 = (float10)FUN_00ddba30((float)fVar2 - param_3);
  fVar1 = (float)fVar2;
  if ((-param_4 < fVar1 != (-param_4 == fVar1)) && (fVar1 <= param_4)) {
    return 1;
  }
  return 0;
}

// 00DDE6C0  FUN_00dde6c0  size=37  [callgraph]
void FUN_00dde6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00dde5e0(param_1,param_2,param_3,param_4);
  return;
}

// 00DDE6F0  FUN_00dde6f0  size=168  [callgraph]
undefined4
FUN_00dde6f0(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            float param_6)

{
  float fVar1;
  float10 fVar2;
  float local_8;
  float local_4;
  
  FUN_00dde510(&local_8,&local_4,param_1,param_2);
  fVar2 = (float10)FUN_00ddba30(local_8 - param_3);
  local_8 = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_4 - param_4);
  fVar1 = (float)fVar2;
  if ((((-param_5 < local_8 != (-param_5 == local_8)) && (local_8 <= param_5)) &&
      (-param_6 < fVar1 != (-param_6 == fVar1))) && (fVar1 <= param_6)) {
    return 1;
  }
  return 0;
}

// 00DDE860  FUN_00dde860  size=176  [callgraph]
float10 FUN_00dde860(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)0;
  if ((fVar3 == (float10)(*param_1 - *param_2)) && (fVar3 == (float10)(param_1[2] - param_2[2]))) {
    return fVar3;
  }
  fVar3 = (float10)FUN_00fdecda();
  fVar3 = (float10)FUN_00ddba30((float)fVar3 - param_3);
  fVar1 = (float)fVar3;
  fVar2 = -param_4;
  if ((fVar2 <= fVar1) && (fVar2 = param_4, fVar1 <= param_4)) {
    return (float10)fVar1;
  }
  return (float10)fVar2;
}

// 00DDE970  FUN_00dde970  size=37  [callgraph]
void FUN_00dde970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00dde860(param_1,param_2,param_3,param_4);
  return;
}

// 00DDE9A0  FUN_00dde9a0  size=447  [callgraph]
void FUN_00dde9a0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                 float param_6,float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  
  fVar1 = *param_3;
  fVar2 = *param_4;
  fVar6 = param_3[2] - param_4[2];
  if (((fVar1 - fVar2 == 0.0) && (param_3[1] - param_4[1] == 0.0)) && (fVar6 == 0.0)) {
    *param_1 = 0.0;
  }
  else {
    FUN_00fdef70(fVar6,(double)(param_3[1] - param_4[1]));
    fVar5 = (float10)FUN_00fdecda();
    fVar5 = (float10)FUN_00ddba30((float)fVar5 - param_5);
    fVar3 = (float)fVar5;
    fVar4 = -param_7;
    if ((fVar4 <= fVar3) && (fVar4 = fVar3, param_7 < fVar3)) {
      fVar4 = param_7;
    }
    *param_1 = fVar4;
  }
  if ((fVar1 - fVar2 == 0.0) && (fVar6 == 0.0)) {
    *param_2 = 0.0;
    return;
  }
  fVar5 = (float10)FUN_00fdecda();
  fVar5 = (float10)FUN_00ddba30((float)fVar5 - param_6);
  fVar1 = (float)fVar5;
  fVar2 = -param_8;
  if ((fVar2 <= fVar1) && (fVar2 = param_8, fVar1 <= param_8)) {
    *param_2 = fVar1;
    return;
  }
  *param_2 = fVar2;
  return;
}

// 00DDEEC0  FUN_00ddeec0  size=91  [callgraph]
void FUN_00ddeec0(float *param_1,float *param_2,float *param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*param_2 + *param_3);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_ECX + 4) + *(float *)(extraout_EDX + 4));
  param_1[1] = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_ECX_00 + 8) + *(float *)(extraout_EDX_00 + 8));
  param_1[2] = (float)fVar1;
  return;
}

// 00DDEF20  FUN_00ddef20  size=91  [callgraph]
void FUN_00ddef20(float *param_1,float *param_2,float *param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*param_2 - *param_3);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_ECX + 4) - *(float *)(extraout_EDX + 4));
  param_1[1] = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_ECX_00 + 8) - *(float *)(extraout_EDX_00 + 8));
  param_1[2] = (float)fVar1;
  return;
}

// 00DDEF80  FUN_00ddef80  size=93  [callgraph]
int FUN_00ddef80(float *param_1,float *param_2,float *param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*param_2 - *param_3);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_EDX + 4) - param_3[1]);
  *(float *)(extraout_ECX + 4) = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_EDX_00 + 8) - param_3[2]);
  *(float *)(extraout_ECX_00 + 8) = (float)fVar1;
  return extraout_ECX_00;
}

// 00DDEFE0  FUN_00ddefe0  size=261  [callgraph]
void FUN_00ddefe0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  puVar1 = param_2;
  if ((param_4 < 0.0 == (param_4 == 0.0)) &&
     (puVar1 = param_3, NAN(param_4) || 1.0 < param_4 == (param_4 == 1.0))) {
    FUN_00ddb6b0(&local_30,param_2,param_5);
    FUN_00ddb6b0(&local_40,param_3,param_5);
    if (local_24 * local_34 + local_28 * local_38 + local_40 * local_30 + local_2c * local_3c <=
        0.999) {
      D3DXQuaternionSlerp(local_20,&local_30,&local_40,param_4);
      FUN_00ddd1e0(param_1,&local_30,param_5);
      param_1[3] = 0x3f800000;
      return;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}

// 00DDF0F0  FUN_00ddf0f0  size=338  [callgraph]
void FUN_00ddf0f0(float *param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_EBX;
  float fStack_18;
  float fStack_14;
  uint local_10 [3];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&fStack_18;
  D3DXVec3TransformNormal(local_10,param_2,param_5);
  fVar1 = *(float *)(param_5 + 0x30);
  fStack_18 = *(float *)(param_5 + 0x34) + fStack_18;
  fStack_14 = *(float *)(param_5 + 0x38) + fStack_14;
  fVar2 = -fStack_14;
  if (1e-06 <= ABS(fVar2)) {
    D3DXVec3TransformNormal(&stack0xffffffe4,&stack0xffffffe4,param_4);
    fVar2 = 1.0 / fVar2;
    fStack_18 = fVar2 * (*(float *)(param_4 + 0x34) + fStack_18);
    fVar3 = fVar2 * (*(float *)(param_4 + 0x38) + fStack_14);
    *param_1 = (float)*param_3 +
               (fVar2 * (*(float *)(param_4 + 0x30) + unaff_EBX + fVar1) + 1.0) * (float)param_3[2]
               * 0.5;
    param_1[1] = (float)param_3[3] * (1.0 - fStack_18) * 0.5 + (float)param_3[1];
    fStack_14 = fVar3;
  }
  else {
    fStack_18 = (float)param_3[3] * 0.5 + (float)param_3[1];
    *param_1 = (float)*param_3 + (float)param_3[2] * 0.5;
    param_1[1] = fStack_18;
    fVar3 = 0.0;
  }
  param_1[2] = fVar3;
  __security_check_cookie(local_10[0] ^ (uint)&stack0xffffffdc);
  return;
}

// 00DDF270  thunk_FUN_00ddf0f0  size=5  [callgraph]
void thunk_FUN_00ddf0f0(float *param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_EBX;
  float fStack_18;
  float fStack_14;
  uint auStack_10 [3];
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&fStack_18;
  D3DXVec3TransformNormal(auStack_10,param_2,param_5);
  fVar1 = *(float *)(param_5 + 0x30);
  fStack_18 = *(float *)(param_5 + 0x34) + fStack_18;
  fStack_14 = *(float *)(param_5 + 0x38) + fStack_14;
  fVar2 = -fStack_14;
  if (1e-06 <= ABS(fVar2)) {
    D3DXVec3TransformNormal(&stack0xffffffe4,&stack0xffffffe4,param_4);
    fVar2 = 1.0 / fVar2;
    fStack_18 = fVar2 * (*(float *)(param_4 + 0x34) + fStack_18);
    fVar3 = fVar2 * (*(float *)(param_4 + 0x38) + fStack_14);
    *param_1 = (float)*param_3 +
               (fVar2 * (*(float *)(param_4 + 0x30) + unaff_EBX + fVar1) + 1.0) * (float)param_3[2]
               * 0.5;
    param_1[1] = (float)param_3[3] * (1.0 - fStack_18) * 0.5 + (float)param_3[1];
    fStack_14 = fVar3;
  }
  else {
    fStack_18 = (float)param_3[3] * 0.5 + (float)param_3[1];
    *param_1 = (float)*param_3 + (float)param_3[2] * 0.5;
    param_1[1] = fStack_18;
    fVar3 = 0.0;
  }
  param_1[2] = fVar3;
  __security_check_cookie(auStack_10[0] ^ (uint)&stack0xffffffdc);
  return;
}

// 00DDF280  FUN_00ddf280  size=132  [callgraph]
void FUN_00ddf280(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar2 * param_3[4] + fVar1 * *param_3 + fVar3 * param_3[8] + param_3[0xc];
  param_1[1] = param_3[9] * fVar3 + param_3[1] * fVar1 + param_3[5] * fVar2 + param_3[0xd];
  param_1[2] = fVar3 * param_3[10] + param_3[6] * fVar2 + param_3[2] * fVar1 + param_3[0xe];
  return;
}

// 00DDF310  FUN_00ddf310  size=123  [callgraph]
void FUN_00ddf310(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar2 * param_3[4] + fVar1 * *param_3 + fVar3 * param_3[8];
  param_1[1] = param_3[9] * fVar3 + param_3[1] * fVar1 + param_3[5] * fVar2;
  param_1[2] = fVar3 * param_3[10] + param_3[6] * fVar2 + param_3[2] * fVar1;
  return;
}

// 00DDF390  FUN_00ddf390  size=102  [callgraph]
float10 FUN_00ddf390(undefined4 *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdef70(*param_1,param_1[2]);
  return (float10)(float)fVar1;
}

// 00DDF400  FUN_00ddf400  size=89  [callgraph]
float10 FUN_00ddf400(float *param_1)

{
  return (float10)(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
}

// 00DDF460  FUN_00ddf460  size=182  [callgraph]
void FUN_00ddf460(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2] != 0.0) {
    fVar2 = (float10)FUN_00fdef70();
    fVar1 = (float)fVar2;
    *param_1 = *param_2 / fVar1;
    param_1[1] = param_2[1] / fVar1;
    param_1[2] = param_2[2] / fVar1;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

// 00DDF520  FUN_00ddf520  size=16  [callgraph]
undefined4 FUN_00ddf520(void)

{
  DAT_01dd0814 = 0;
  return 1;
}

// 00DDF530  FUN_00ddf530  size=176  [callgraph]
void FUN_00ddf530(int param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int iStack_a4;
  float *pfStack_a0;
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 auStack_74 [4];
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_60 [28];
  uint uStack_44;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_74;
  local_8c = *param_3 * -1.0;
  puStack_90 = local_60;
  local_88 = param_3[1] * -1.0;
  local_84 = param_3[2] * -1.0;
  uStack_94 = 0xddf594;
  local_70 = local_8c;
  local_6c = local_88;
  local_68 = local_84;
  D3DXMatrixTranslation();
  uStack_94 = param_4;
  uStack_98 = param_2;
  puStack_9c = &stack0xffffff80;
  pfStack_a0 = (float *)0xddf5a6;
  D3DXQuaternionRotationAxis();
  pfStack_a0 = &local_8c;
  iStack_a4 = param_1;
  D3DXMatrixRotationQuaternion();
  *(float *)(param_1 + 0x30) = *param_3;
  *(float *)(param_1 + 0x34) = param_3[1];
  *(float *)(param_1 + 0x38) = param_3[2];
  D3DXMatrixMultiply(param_1,&local_84,param_1);
  __security_check_cookie(uStack_44 ^ (uint)&iStack_a4);
  return;
}

// 00DDF620  FUN_00ddf620  size=32  [callgraph]
void FUN_00ddf620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00ddf530(param_1,param_2,param_3,param_4);
  return;
}

// 00DDF640  FUN_00ddf640  size=987  [callgraph]
void FUN_00ddf640(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4,float param_5
                 ,float param_6)

{
  float fVar1;
  float *unaff_EBX;
  float10 fVar2;
  float *pfStack_98;
  char *pcStack_94;
  float *pfStack_90;
  float *pfStack_8c;
  float *pfStack_88;
  float *pfStack_84;
  float fVar3;
  float fStack_74;
  undefined1 auStack_70 [4];
  float fStack_6c;
  undefined4 local_68;
  float local_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_74;
  local_68 = param_4;
  local_64 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (local_64 < 0.0 != (local_64 == 0.0)) {
    pfStack_84 = (float *)&DAT_0163d0ac;
    pfStack_88 = (float *)0xddf6c7;
    FUN_00dd5650();
    local_38 = 0.0;
    local_34 = 1.0;
    local_30 = 0.0;
  }
  pfStack_84 = param_2;
  pfStack_88 = &local_38;
  pfStack_8c = (float *)0xddf6e5;
  D3DXVec3Normalize();
  fStack_6c = param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1];
  if (fStack_6c < 0.0 != (fStack_6c == 0.0)) {
    pfStack_8c = (float *)&DAT_0163d0ac;
    pfStack_90 = (float *)0xddf745;
    FUN_00dd5650();
    fStack_4c = 0.0;
    fStack_48 = 1.0;
    fStack_44 = 0.0;
  }
  pfStack_8c = param_3;
  pfStack_90 = &fStack_4c;
  pcStack_94 = (char *)0xddf763;
  D3DXVec3Normalize();
  fStack_74 = fStack_40 * fStack_4c + fStack_44 * fStack_50 + fStack_48 * fStack_54;
  if (fStack_74 < 0.9999999) {
    pcStack_94 = (char *)0xddf7e0;
    fVar2 = (float10)FUN_00fdc4e0();
    fVar3 = (float)fVar2;
    if (fStack_74 < -0.9999999) {
      fVar3 = 3.1415927;
    }
    param_5 = fVar3 * param_5;
    if (param_6 < param_5) {
      param_5 = param_6;
    }
    fStack_74 = fVar3;
    if (0.0009 <= param_5) {
      if (fVar3 <= 3.1315928) {
        fStack_3c = fStack_4c * fStack_44 - fStack_50 * fStack_40;
        local_38 = fStack_54 * fStack_40 - fStack_48 * fStack_4c;
        fVar3 = fStack_54;
        fVar1 = fStack_50;
        fStack_50 = fStack_48;
        fStack_54 = fStack_44;
      }
      else {
        fVar3 = unaff_EBX[2] * unaff_EBX[2] + *unaff_EBX * *unaff_EBX + unaff_EBX[1] * unaff_EBX[1];
        if (fVar3 < 0.0 != (fVar3 == 0.0)) {
          pcStack_94 = &DAT_0163d0ac;
          pfStack_98 = (float *)0xddf8be;
          FUN_00dd5650();
          local_30 = 0.0;
          fStack_2c = 1.0;
          fStack_28 = 0.0;
        }
        pfStack_98 = &local_30;
        D3DXVec3Normalize();
        fStack_3c = fStack_2c * fStack_4c - fStack_28 * fStack_50;
        local_38 = fStack_54 * fStack_28 - local_30 * fStack_4c;
        fVar3 = fStack_2c;
        fVar1 = local_30;
      }
      local_34 = fStack_50 * fVar1 - fVar3 * fStack_54;
      if (ABS(local_38) + ABS(fStack_3c) + ABS(local_34) == 0.0) {
        pcStack_94 = "MtxInitRotAxisVecToVec: ZeroVec";
        param_1[0xe] = 0;
        param_1[0xd] = 0;
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        param_1[0xf] = 0x3f800000;
        param_1[10] = 0x3f800000;
        param_1[5] = 0x3f800000;
        *param_1 = 0x3f800000;
        pfStack_98 = (float *)0xddf9d2;
        FUN_00dd5650();
        pfStack_88 = (float *)0xddf9e3;
        __security_check_cookie(uStack_24 ^ (uint)&pfStack_84);
        return;
      }
      pfStack_98 = &fStack_3c;
      pcStack_94 = (char *)param_5;
      D3DXQuaternionRotationAxis(auStack_70);
      D3DXMatrixRotationQuaternion(param_1,&stack0xffffff84);
      __security_check_cookie((uint)local_38 ^ (uint)&pfStack_98);
      return;
    }
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  pfStack_88 = (float *)0xddf7d7;
  __security_check_cookie(uStack_24 ^ (uint)&pfStack_84);
  return;
}

// 00DDFFF0  FUN_00ddfff0  size=411  [callgraph]
void FUN_00ddfff0(float *param_1)

{
  float10 fVar1;
  
  FUN_00fdef70();
  FUN_00fdef70();
  FUN_00fdef70();
  fVar1 = (float10)FUN_00fdecda();
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00fdecda();
  param_1[1] = (float)fVar1;
  param_1[2] = 0.0;
  return;
}

// 00DE0190  thunk_FUN_00ddfff0  size=5  [callgraph]
void thunk_FUN_00ddfff0(float *param_1)

{
  float10 fVar1;
  
  FUN_00fdef70();
  FUN_00fdef70();
  FUN_00fdef70();
  fVar1 = (float10)FUN_00fdecda();
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00fdecda();
  param_1[1] = (float)fVar1;
  param_1[2] = 0.0;
  return;
}

// 00DE01A0  FUN_00de01a0  size=929  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00de0327) */
/* WARNING: Removing unreachable block (ram,0x00de023b) */
/* WARNING: Removing unreachable block (ram,0x00de0417) */

void FUN_00de01a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfStack_50;
  float *pfStack_4c;
  float *pfStack_48;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_38;
  local_28 = *param_2 - *param_3;
  local_24 = param_2[1] - param_3[1];
  local_20 = param_2[2] - param_3[2];
  local_38 = local_28 * local_28 + local_24 * local_24 + local_20 * local_20;
  if (local_38 < 0.0 != (local_38 == 0.0)) {
    pfStack_48 = (float *)&DAT_0163d0ac;
    pfStack_4c = (float *)0xde024d;
    FUN_00dd5650();
    local_28 = 0.0;
    local_24 = 1.0;
    local_20 = 0.0;
  }
  pfStack_4c = &local_28;
  pfStack_50 = (float *)0xde026d;
  pfStack_48 = pfStack_4c;
  D3DXVec3Normalize();
  local_24 = local_28 * param_4[1] - fStack_2c * param_4[2];
  local_38 = fStack_30 * param_4[2] - *param_4 * local_28;
  fStack_34 = *param_4 * fStack_2c - fStack_30 * param_4[1];
  fVar1 = local_24 * local_24 + local_38 * local_38 + fStack_34 * fStack_34;
  local_20 = local_38;
  fStack_1c = fStack_34;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    pfStack_50 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_24 = 0.0;
    local_20 = 1.0;
    fStack_1c = 0.0;
  }
  pfStack_50 = &local_24;
  D3DXVec3Normalize(pfStack_50);
  local_20 = local_24 * fStack_34 - local_28 * fStack_30;
  fVar2 = fStack_2c * fStack_30 - local_38 * local_24;
  fVar1 = local_38 * local_28 - fStack_2c * fStack_34;
  pfStack_48 = (float *)(local_20 * local_20 + fVar2 * fVar2 + fVar1 * fVar1);
  fStack_1c = fVar2;
  fStack_18 = fVar1;
  if ((float)pfStack_48 < 0.0 != ((float)pfStack_48 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    fStack_1c = 1.0;
    fStack_18 = 0.0;
  }
  D3DXVec3Normalize(&local_20,&local_20);
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xb] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  param_1[0xf] = 1.0;
  param_1[10] = 1.0;
  param_1[5] = 1.0;
  *param_1 = 1.0;
  *param_1 = fStack_34;
  param_1[4] = fStack_30;
  param_1[8] = fStack_2c;
  param_1[1] = local_28;
  param_1[5] = local_24;
  param_1[9] = local_20;
  param_1[2] = fVar2;
  param_1[6] = fVar1;
  param_1[10] = local_38;
  param_1[0xc] = (*param_2 * fStack_34 + param_2[1] * fStack_30 + param_2[2] * fStack_2c) * -1.0;
  param_1[0xd] = (*param_2 * local_28 + param_2[1] * local_24 + param_2[2] * local_20) * -1.0;
  pfStack_50 = (float *)(param_2[2] * local_38 + fVar1 * param_2[1] + *param_2 * fVar2);
  param_1[0xe] = (float)pfStack_50 * -1.0;
  __security_check_cookie((uint)fStack_1c ^ (uint)&pfStack_50);
  return;
}

// 00DE05B0  thunk_FUN_00de01a0  size=5  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00de0327) */
/* WARNING: Removing unreachable block (ram,0x00de023b) */
/* WARNING: Removing unreachable block (ram,0x00de0417) */

void thunk_FUN_00de01a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfStack_50;
  float *pfStack_4c;
  float *pfStack_48;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&fStack_38;
  fStack_28 = *param_2 - *param_3;
  fStack_24 = param_2[1] - param_3[1];
  fStack_20 = param_2[2] - param_3[2];
  fStack_38 = fStack_28 * fStack_28 + fStack_24 * fStack_24 + fStack_20 * fStack_20;
  if (fStack_38 < 0.0 != (fStack_38 == 0.0)) {
    pfStack_48 = (float *)&DAT_0163d0ac;
    pfStack_4c = (float *)0xde024d;
    FUN_00dd5650();
    fStack_28 = 0.0;
    fStack_24 = 1.0;
    fStack_20 = 0.0;
  }
  pfStack_4c = &fStack_28;
  pfStack_50 = (float *)0xde026d;
  pfStack_48 = pfStack_4c;
  D3DXVec3Normalize();
  fStack_24 = fStack_28 * param_4[1] - fStack_2c * param_4[2];
  fStack_38 = fStack_30 * param_4[2] - *param_4 * fStack_28;
  fStack_34 = *param_4 * fStack_2c - fStack_30 * param_4[1];
  fVar1 = fStack_24 * fStack_24 + fStack_38 * fStack_38 + fStack_34 * fStack_34;
  fStack_20 = fStack_38;
  fStack_1c = fStack_34;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    pfStack_50 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    fStack_24 = 0.0;
    fStack_20 = 1.0;
    fStack_1c = 0.0;
  }
  pfStack_50 = &fStack_24;
  D3DXVec3Normalize(pfStack_50);
  fStack_20 = fStack_24 * fStack_34 - fStack_28 * fStack_30;
  fVar2 = fStack_2c * fStack_30 - fStack_38 * fStack_24;
  fVar1 = fStack_38 * fStack_28 - fStack_2c * fStack_34;
  pfStack_48 = (float *)(fStack_20 * fStack_20 + fVar2 * fVar2 + fVar1 * fVar1);
  fStack_1c = fVar2;
  fStack_18 = fVar1;
  if ((float)pfStack_48 < 0.0 != ((float)pfStack_48 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_20 = 0.0;
    fStack_1c = 1.0;
    fStack_18 = 0.0;
  }
  D3DXVec3Normalize(&fStack_20,&fStack_20);
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xb] = 0.0;
  param_1[9] = 0.0;
  param_1[8] = 0.0;
  param_1[7] = 0.0;
  param_1[6] = 0.0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  param_1[0xf] = 1.0;
  param_1[10] = 1.0;
  param_1[5] = 1.0;
  *param_1 = 1.0;
  *param_1 = fStack_34;
  param_1[4] = fStack_30;
  param_1[8] = fStack_2c;
  param_1[1] = fStack_28;
  param_1[5] = fStack_24;
  param_1[9] = fStack_20;
  param_1[2] = fVar2;
  param_1[6] = fVar1;
  param_1[10] = fStack_38;
  param_1[0xc] = (*param_2 * fStack_34 + param_2[1] * fStack_30 + param_2[2] * fStack_2c) * -1.0;
  param_1[0xd] = (*param_2 * fStack_28 + param_2[1] * fStack_24 + param_2[2] * fStack_20) * -1.0;
  pfStack_50 = (float *)(param_2[2] * fStack_38 + fVar1 * param_2[1] + *param_2 * fVar2);
  param_1[0xe] = (float)pfStack_50 * -1.0;
  __security_check_cookie((uint)fStack_1c ^ (uint)&pfStack_50);
  return;
}

// 00DE0760  FUN_00de0760  size=1552  [callgraph]
void FUN_00de0760(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = ((((((((((((param_2[9] * param_2[6] * param_2[3] * param_2[0xc] +
                     param_2[8] * param_2[3] * param_2[5] * param_2[0xe] +
                     param_2[10] * param_2[4] * param_2[3] * param_2[0xd] +
                     param_2[8] * param_2[7] * param_2[2] * param_2[0xd] +
                     param_2[0xb] * param_2[2] * param_2[5] * param_2[0xc] +
                     param_2[9] * param_2[4] * param_2[2] * param_2[0xf] +
                     param_2[10] * param_2[7] * param_2[1] * param_2[0xc] +
                     param_2[8] * param_2[6] * param_2[1] * param_2[0xf] +
                     param_2[0xb] * param_2[4] * param_2[1] * param_2[0xe] +
                     param_2[9] * param_2[7] * *param_2 * param_2[0xe] +
                     param_2[10] * *param_2 * param_2[5] * param_2[0xf] +
                     param_2[0xb] * param_2[6] * *param_2 * param_2[0xd]) -
                    param_2[0xe] * param_2[0xb] * *param_2 * param_2[5]) -
                   param_2[0xf] * param_2[9] * param_2[6] * *param_2) -
                  param_2[0xd] * param_2[10] * param_2[7] * *param_2) -
                 param_2[0xf] * param_2[10] * param_2[4] * param_2[1]) -
                param_2[0xc] * param_2[0xb] * param_2[6] * param_2[1]) -
               param_2[8] * param_2[7] * param_2[1] * param_2[0xe]) -
              param_2[0xb] * param_2[4] * param_2[2] * param_2[0xd]) -
             param_2[8] * param_2[2] * param_2[5] * param_2[0xf]) -
            param_2[9] * param_2[7] * param_2[2] * param_2[0xc]) -
           param_2[9] * param_2[4] * param_2[3] * param_2[0xe]) -
          param_2[10] * param_2[3] * param_2[5] * param_2[0xc]) -
          param_2[8] * param_2[6] * param_2[3] * param_2[0xd];
  if (fVar1 == 0.0) {
    param_1[0xe] = 0.0;
    param_1[0xd] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xb] = 0.0;
    param_1[9] = 0.0;
    param_1[8] = 0.0;
    param_1[7] = 0.0;
    param_1[6] = 0.0;
    param_1[4] = 0.0;
    param_1[3] = 0.0;
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    param_1[0xf] = 1.0;
    param_1[10] = 1.0;
    param_1[5] = 1.0;
    *param_1 = 1.0;
    return;
  }
  *param_1 = (((param_2[9] * param_2[7] * param_2[0xe] +
               param_2[10] * param_2[5] * param_2[0xf] + param_2[0xb] * param_2[6] * param_2[0xd]) -
              param_2[0xb] * param_2[5] * param_2[0xe]) - param_2[9] * param_2[6] * param_2[0xf]) -
             param_2[7] * param_2[10] * param_2[0xd];
  param_1[1] = (((param_2[3] * param_2[10] * param_2[0xd] +
                 param_2[9] * param_2[2] * param_2[0xf] + param_2[0xb] * param_2[1] * param_2[0xe])
                - param_2[1] * param_2[10] * param_2[0xf]) -
               param_2[0xb] * param_2[2] * param_2[0xd]) - param_2[9] * param_2[3] * param_2[0xe];
  param_1[2] = (((param_2[3] * param_2[5] * param_2[0xe] +
                 param_2[6] * param_2[1] * param_2[0xf] + param_2[7] * param_2[2] * param_2[0xd]) -
                param_2[7] * param_2[1] * param_2[0xe]) - param_2[2] * param_2[5] * param_2[0xf]) -
               param_2[6] * param_2[3] * param_2[0xd];
  param_1[3] = (((param_2[6] * param_2[3] * param_2[9] +
                 param_2[2] * param_2[5] * param_2[0xb] + param_2[7] * param_2[1] * param_2[10]) -
                param_2[6] * param_2[1] * param_2[0xb]) - param_2[7] * param_2[2] * param_2[9]) -
               param_2[3] * param_2[5] * param_2[10];
  param_1[4] = (((param_2[7] * param_2[10] * param_2[0xc] +
                 param_2[8] * param_2[6] * param_2[0xf] + param_2[0xb] * param_2[4] * param_2[0xe])
                - param_2[4] * param_2[10] * param_2[0xf]) -
               param_2[0xb] * param_2[6] * param_2[0xc]) - param_2[8] * param_2[7] * param_2[0xe];
  param_1[5] = (((param_2[8] * param_2[3] * param_2[0xe] +
                 *param_2 * param_2[10] * param_2[0xf] + param_2[0xb] * param_2[2] * param_2[0xc]) -
                param_2[0xb] * *param_2 * param_2[0xe]) - param_2[8] * param_2[2] * param_2[0xf]) -
               param_2[3] * param_2[10] * param_2[0xc];
  param_1[6] = (((param_2[6] * param_2[3] * param_2[0xc] +
                 param_2[4] * param_2[2] * param_2[0xf] + param_2[7] * *param_2 * param_2[0xe]) -
                param_2[6] * *param_2 * param_2[0xf]) - param_2[7] * param_2[2] * param_2[0xc]) -
               param_2[4] * param_2[3] * param_2[0xe];
  param_1[7] = (((param_2[4] * param_2[3] * param_2[10] +
                 param_2[7] * param_2[2] * param_2[8] + param_2[6] * *param_2 * param_2[0xb]) -
                param_2[7] * *param_2 * param_2[10]) - param_2[4] * param_2[2] * param_2[0xb]) -
               param_2[6] * param_2[3] * param_2[8];
  param_1[8] = (((param_2[8] * param_2[7] * param_2[0xd] +
                 param_2[9] * param_2[4] * param_2[0xf] + param_2[0xb] * param_2[5] * param_2[0xc])
                - param_2[0xb] * param_2[4] * param_2[0xd]) - param_2[8] * param_2[5] * param_2[0xf]
               ) - param_2[9] * param_2[7] * param_2[0xc];
  param_1[9] = (((param_2[9] * param_2[3] * param_2[0xc] +
                 param_2[0xb] * *param_2 * param_2[0xd] + param_2[8] * param_2[1] * param_2[0xf]) -
                param_2[9] * *param_2 * param_2[0xf]) - param_2[0xb] * param_2[1] * param_2[0xc]) -
               param_2[8] * param_2[3] * param_2[0xd];
  param_1[10] = (((param_2[4] * param_2[3] * param_2[0xd] +
                  param_2[7] * param_2[1] * param_2[0xc] + *param_2 * param_2[5] * param_2[0xf]) -
                 param_2[7] * *param_2 * param_2[0xd]) - param_2[4] * param_2[1] * param_2[0xf]) -
                param_2[3] * param_2[5] * param_2[0xc];
  param_1[0xb] = (((param_2[3] * param_2[5] * param_2[8] +
                   param_2[4] * param_2[1] * param_2[0xb] + param_2[7] * *param_2 * param_2[9]) -
                  *param_2 * param_2[5] * param_2[0xb]) - param_2[7] * param_2[1] * param_2[8]) -
                 param_2[4] * param_2[3] * param_2[9];
  param_1[0xc] = (((param_2[9] * param_2[6] * param_2[0xc] +
                   param_2[4] * param_2[10] * param_2[0xd] + param_2[8] * param_2[5] * param_2[0xe])
                  - param_2[9] * param_2[4] * param_2[0xe]) -
                 param_2[10] * param_2[5] * param_2[0xc]) - param_2[8] * param_2[6] * param_2[0xd];
  param_1[0xd] = (((param_2[8] * param_2[2] * param_2[0xd] +
                   param_2[9] * *param_2 * param_2[0xe] + param_2[1] * param_2[10] * param_2[0xc]) -
                  *param_2 * param_2[10] * param_2[0xd]) - param_2[8] * param_2[1] * param_2[0xe]) -
                 param_2[9] * param_2[2] * param_2[0xc];
  param_1[0xe] = (((param_2[2] * param_2[5] * param_2[0xc] +
                   param_2[4] * param_2[1] * param_2[0xe] + param_2[6] * *param_2 * param_2[0xd]) -
                  *param_2 * param_2[5] * param_2[0xe]) - param_2[6] * param_2[1] * param_2[0xc]) -
                 param_2[4] * param_2[2] * param_2[0xd];
  param_1[0xf] = (((param_2[4] * param_2[2] * param_2[9] +
                   param_2[6] * param_2[1] * param_2[8] + *param_2 * param_2[5] * param_2[10]) -
                  param_2[6] * *param_2 * param_2[9]) - param_2[4] * param_2[1] * param_2[10]) -
                 param_2[2] * param_2[5] * param_2[8];
  FUN_00ddc140(param_1,param_1,1.0 / fVar1);
  return;
}

// 00DE0D70  FUN_00de0d70  size=167  [callgraph]
void FUN_00de0d70(void *param_1,undefined4 *param_2)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_60;
  local_60 = *param_2;
  local_5c = param_2[4];
  local_58 = param_2[8];
  local_54 = param_2[0xc];
  local_50 = param_2[1];
  local_4c = param_2[5];
  local_48 = param_2[9];
  local_44 = param_2[0xd];
  local_40 = param_2[2];
  local_3c = param_2[6];
  local_38 = param_2[10];
  local_34 = param_2[0xe];
  local_30 = param_2[3];
  local_2c = param_2[7];
  local_28 = param_2[0xb];
  local_24 = param_2[0xf];
  FID_conflict__memcpy(param_1,&local_60,0x40);
  __security_check_cookie(local_14 ^ (uint)&local_60);
  return;
}

// 00DE0E20  FUN_00de0e20  size=595  [callgraph]
void FUN_00de0e20(void *param_1,float *param_2,float *param_3)

{
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_60;
  local_60 = param_3[0xc] * param_2[3] +
             param_3[8] * param_2[2] + param_2[1] * param_3[4] + *param_2 * *param_3;
  local_5c = param_3[0xd] * param_2[3] +
             param_3[9] * param_2[2] + param_3[1] * *param_2 + param_3[5] * param_2[1];
  local_58 = param_3[0xe] * param_2[3] +
             param_3[10] * param_2[2] + param_3[2] * *param_2 + param_3[6] * param_2[1];
  local_54 = param_3[0xf] * param_2[3] +
             param_3[0xb] * param_2[2] + param_3[3] * *param_2 + param_3[7] * param_2[1];
  local_50 = param_3[0xc] * param_2[7] +
             param_2[6] * param_3[8] + param_2[4] * *param_3 + param_2[5] * param_3[4];
  local_4c = param_3[0xd] * param_2[7] +
             param_2[6] * param_3[9] + param_2[4] * param_3[1] + param_2[5] * param_3[5];
  local_48 = param_3[0xe] * param_2[7] +
             param_2[6] * param_3[10] + param_2[4] * param_3[2] + param_2[5] * param_3[6];
  local_44 = param_3[0xf] * param_2[7] +
             param_3[0xb] * param_2[6] + param_2[4] * param_3[3] + param_2[5] * param_3[7];
  local_40 = param_2[0xb] * param_3[0xc] +
             param_2[10] * param_3[8] + param_2[8] * *param_3 + param_2[9] * param_3[4];
  local_3c = param_2[0xb] * param_3[0xd] +
             param_2[10] * param_3[9] + param_2[8] * param_3[1] + param_2[9] * param_3[5];
  local_38 = param_2[0xb] * param_3[0xe] +
             param_2[10] * param_3[10] + param_2[8] * param_3[2] + param_2[9] * param_3[6];
  local_34 = param_2[0xb] * param_3[0xf] +
             param_2[10] * param_3[0xb] + param_2[8] * param_3[3] + param_2[9] * param_3[7];
  local_30 = param_2[0xf] * param_3[0xc] +
             param_2[0xe] * param_3[8] + param_2[0xc] * *param_3 + param_2[0xd] * param_3[4];
  local_2c = param_2[0xf] * param_3[0xd] +
             param_2[0xe] * param_3[9] + param_2[0xc] * param_3[1] + param_2[0xd] * param_3[5];
  local_28 = param_2[0xf] * param_3[0xe] +
             param_2[0xe] * param_3[10] + param_2[0xc] * param_3[2] + param_2[0xd] * param_3[6];
  local_24 = param_2[0xf] * param_3[0xf] +
             param_2[0xe] * param_3[0xb] + param_2[0xc] * param_3[3] + param_2[0xd] * param_3[7];
  FID_conflict__memcpy(param_1,&local_60,0x40);
  __security_check_cookie(local_14 ^ (uint)&local_60);
  return;
}

// 00DE1080  FUN_00de1080  size=770  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00de11b8) */
/* WARNING: Removing unreachable block (ram,0x00de12bc) */

void FUN_00de1080(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  local_20 = param_3[2] * param_2[2] + param_3[1] * param_2[1] + *param_3 * *param_2;
  if (0.99999 < local_20) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 1.0;
    __security_check_cookie(local_4 ^ (uint)&local_24);
    return;
  }
  if (-0.99999 <= local_20) {
    local_1c = param_3[2] * param_2[1] - param_2[2] * param_3[1];
    local_18 = *param_3 * param_2[2] - *param_2 * param_3[2];
    local_14 = *param_2 * param_3[1] - *param_3 * param_2[1];
    local_24 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
    local_10 = local_1c;
    local_c = local_18;
    local_8 = local_14;
    if (local_24 < 0.0 != (local_24 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_10 = 0.0;
      local_c = 1.0;
      local_8 = 0.0;
    }
    D3DXVec3Normalize(&local_10,&local_10);
    fVar2 = (float10)FUN_00fdef70();
    fVar1 = (float)fVar2;
    local_18 = fVar1 * local_18;
    local_14 = fVar1 * local_14;
    local_10 = fVar1 * local_10;
    *param_1 = local_18;
    param_1[1] = local_14;
    param_1[2] = local_10;
    fVar2 = (float10)FUN_00fdef70();
    param_1[3] = (float)fVar2;
    __security_check_cookie((uint)local_c ^ (uint)&stack0xffffffd4);
    return;
  }
  local_10 = 0.0;
  local_c = *param_2;
  local_8 = -param_2[1];
  local_20 = local_8 * local_8 + local_c * local_c + 0.0;
  fVar2 = (float10)FUN_00fdef70();
  if ((float)fVar2 < 1e-05) {
    local_10 = -param_2[2];
    local_c = 0.0;
    local_8 = *param_2;
  }
  local_20 = local_10 * local_10 + local_c * local_c + local_8 * local_8;
  if (local_20 < 0.0 != (local_20 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_10 = 0.0;
    local_c = 1.0;
    local_8 = 0.0;
  }
  D3DXVec3Normalize(&local_10,&local_10);
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  param_1[3] = 0.0;
  __security_check_cookie((uint)local_c ^ (uint)&stack0xffffffd4);
  return;
}

// 00DE13B0  thunk_FUN_00de1080  size=5  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00de11b8) */
/* WARNING: Removing unreachable block (ram,0x00de12bc) */

void thunk_FUN_00de1080(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&fStack_24;
  fStack_20 = param_3[2] * param_2[2] + param_3[1] * param_2[1] + *param_3 * *param_2;
  if (0.99999 < fStack_20) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 1.0;
    __security_check_cookie(uStack_4 ^ (uint)&fStack_24);
    return;
  }
  if (-0.99999 <= fStack_20) {
    fStack_1c = param_3[2] * param_2[1] - param_2[2] * param_3[1];
    fStack_18 = *param_3 * param_2[2] - *param_2 * param_3[2];
    fStack_14 = *param_2 * param_3[1] - *param_3 * param_2[1];
    fStack_24 = fStack_1c * fStack_1c + fStack_18 * fStack_18 + fStack_14 * fStack_14;
    fStack_10 = fStack_1c;
    fStack_c = fStack_18;
    fStack_8 = fStack_14;
    if (fStack_24 < 0.0 != (fStack_24 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_10 = 0.0;
      fStack_c = 1.0;
      fStack_8 = 0.0;
    }
    D3DXVec3Normalize(&fStack_10,&fStack_10);
    fVar2 = (float10)FUN_00fdef70();
    fVar1 = (float)fVar2;
    fStack_18 = fVar1 * fStack_18;
    fStack_14 = fVar1 * fStack_14;
    fStack_10 = fVar1 * fStack_10;
    *param_1 = fStack_18;
    param_1[1] = fStack_14;
    param_1[2] = fStack_10;
    fVar2 = (float10)FUN_00fdef70();
    param_1[3] = (float)fVar2;
    __security_check_cookie((uint)fStack_c ^ (uint)&stack0xffffffd4);
    return;
  }
  fStack_10 = 0.0;
  fStack_c = *param_2;
  fStack_8 = -param_2[1];
  fStack_20 = fStack_8 * fStack_8 + fStack_c * fStack_c + 0.0;
  fVar2 = (float10)FUN_00fdef70();
  if ((float)fVar2 < 1e-05) {
    fStack_10 = -param_2[2];
    fStack_c = 0.0;
    fStack_8 = *param_2;
  }
  fStack_20 = fStack_10 * fStack_10 + fStack_c * fStack_c + fStack_8 * fStack_8;
  if (fStack_20 < 0.0 != (fStack_20 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_10 = 0.0;
    fStack_c = 1.0;
    fStack_8 = 0.0;
  }
  D3DXVec3Normalize(&fStack_10,&fStack_10);
  *param_1 = fStack_18;
  param_1[1] = fStack_14;
  param_1[2] = fStack_10;
  param_1[3] = 0.0;
  __security_check_cookie((uint)fStack_c ^ (uint)&stack0xffffffd4);
  return;
}

// 00DE13C0  FUN_00de13c0  size=418  [callgraph]
void FUN_00de13c0(float *param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  float *extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  float10 fVar2;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  
  FUN_00ddd1e0(&local_50,param_2,param_4);
  local_44 = 0x3f800000;
  fVar2 = (float10)FUN_00ddba30(local_50 + 3.1415927);
  local_40 = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(3.1415927 - local_4c);
  local_3c = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_48 + 3.1415927);
  local_38 = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_50 - *param_3);
  local_30 = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_4c - *(float *)(extraout_ECX + 4));
  local_2c = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_48 - *(float *)(extraout_ECX_00 + 8));
  local_28 = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_40 - *extraout_ECX_01);
  local_20 = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_3c - *(float *)(extraout_ECX_02 + 4));
  local_1c = (float)fVar2;
  fVar2 = (float10)FUN_00ddba30(local_38 - *(float *)(extraout_ECX_03 + 8));
  pfVar1 = &local_50;
  if (local_20 * local_20 + local_1c * local_1c + (float)fVar2 * (float)fVar2 <
      local_30 * local_30 + local_2c * local_2c + local_28 * local_28) {
    pfVar1 = &local_40;
  }
  *param_1 = *pfVar1;
  param_1[1] = pfVar1[1];
  param_1[2] = pfVar1[2];
  param_1[3] = pfVar1[3];
  return;
}

// 00DE1570  FUN_00de1570  size=575  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00de16be) */
/* WARNING: Removing unreachable block (ram,0x00de160c) */
/* WARNING: Removing unreachable block (ram,0x00de1772) */

void FUN_00de1570(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 *puStack_44;
  undefined *puStack_40;
  float *pfStack_3c;
  float *pfStack_38;
  float fVar2;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  local_1c = *param_2 * -1.0;
  local_18 = param_2[1] * -1.0;
  local_14 = param_2[2] * -1.0;
  local_2c = local_18 * local_18 + local_1c * local_1c + local_14 * local_14;
  if (local_2c < 0.0 != (local_2c == 0.0)) {
    pfStack_38 = (float *)&DAT_0163d0ac;
    pfStack_3c = (float *)0xde161e;
    FUN_00dd5650();
    local_1c = 0.0;
    local_18 = 1.0;
    local_14 = 0.0;
  }
  pfStack_3c = &local_1c;
  puStack_40 = (undefined *)0xde163e;
  pfStack_38 = pfStack_3c;
  D3DXVec3Normalize();
  fVar2 = *param_3 * -1.0;
  local_2c = param_3[1] * -1.0;
  fStack_28 = param_3[2] * -1.0;
  fVar1 = local_2c * local_2c + fVar2 * fVar2 + fStack_28 * fStack_28;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    puStack_40 = &DAT_0163d0ac;
    puStack_44 = (undefined1 *)0xde16d0;
    FUN_00dd5650();
    fVar2 = 0.0;
    local_2c = 1.0;
    fStack_28 = 0.0;
  }
  puStack_44 = &stack0xffffffd0;
  puStack_40 = puStack_44;
  D3DXVec3Normalize();
  fStack_20 = (float)pfStack_38 + local_2c;
  local_1c = fVar1 + fStack_28;
  local_18 = fVar2 + fStack_24;
  pfStack_3c = (float *)(fStack_20 * fStack_20 + local_1c * local_1c + local_18 * local_18);
  if ((float)pfStack_3c < 0.0 != ((float)pfStack_3c == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1[2] = 0;
  }
  D3DXVec3Normalize(param_1,&fStack_20);
  __security_check_cookie((uint)local_1c ^ (uint)&puStack_44);
  return;
}

// 00DE1820  FUN_00de1820  size=333  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00de18b8) */

void FUN_00de1820(int param_1,float *param_2,float *param_3)

{
  float local_20;
  float fStack_1c;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  local_10 = *param_3 - *param_2;
  local_c = param_3[1] - param_2[1];
  local_8 = param_3[2] - param_2[2];
  local_20 = local_c * local_c + local_10 * local_10 + local_8 * local_8;
  if (local_20 < 0.0 != (local_20 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_10 = 0.0;
    local_c = 1.0;
    local_8 = 0.0;
  }
  D3DXVec3Normalize(&local_10,&local_10);
  local_20 = *(float *)(param_1 + 4) - param_2[1];
  fStack_1c = *(float *)(param_1 + 8) - param_2[2];
  __security_check_cookie((uint)local_c ^ (uint)&stack0xffffffd8);
  return;
}

// 00DE19D0  FUN_00de19d0  size=558  [callgraph]
float10 FUN_00de19d0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    if (param_4 != (float *)0x0) {
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
    }
    fVar7 = (float10)FUN_00fdef70(param_1[2] - param_2[2]);
    return (float10)(float)fVar7;
  }
  fVar1 = param_1[2];
  fVar2 = param_2[2];
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar3 = (fVar6 * (fVar1 - fVar2) +
          fVar5 * (param_1[1] - param_2[1]) + fVar4 * (*param_1 - *param_2)) /
          (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = *param_2 + fVar3 * fVar4;
    param_4[1] = param_2[1] + fVar5 * fVar3;
    param_4[2] = fVar3 * fVar6 + param_2[2];
  }
  fVar7 = (float10)FUN_00fdef70((fVar1 - fVar2) - fVar3 * fVar6);
  return (float10)(float)fVar7;
}

// 00DE1CE0  thunk_FUN_00de19d0  size=5  [callgraph]
float10 thunk_FUN_00de19d0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    if (param_4 != (float *)0x0) {
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
    }
    fVar7 = (float10)FUN_00fdef70(param_1[2] - param_2[2]);
    return (float10)(float)fVar7;
  }
  fVar1 = param_1[2];
  fVar2 = param_2[2];
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar3 = (fVar6 * (fVar1 - fVar2) +
          fVar5 * (param_1[1] - param_2[1]) + fVar4 * (*param_1 - *param_2)) /
          (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = *param_2 + fVar3 * fVar4;
    param_4[1] = param_2[1] + fVar5 * fVar3;
    param_4[2] = fVar3 * fVar6 + param_2[2];
  }
  fVar7 = (float10)FUN_00fdef70((fVar1 - fVar2) - fVar3 * fVar6);
  return (float10)(float)fVar7;
}

// 00DE1CF0  FUN_00de1cf0  size=654  [callgraph]
float10 FUN_00de1cf0(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdef70();
  return (float10)(float)fVar1;
}

// 00DE2060  thunk_FUN_00de1cf0  size=5  [callgraph]
float10 thunk_FUN_00de1cf0(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdef70();
  return (float10)(float)fVar1;
}

// 00DE2070  FUN_00de2070  size=242  [callgraph]
void FUN_00de2070(float *param_1,float *param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_4[0xe] / (param_2[2] + param_4[10]);
  fVar2 = -fVar1;
  fVar1 = (fVar1 * (((*param_2 - (float)*param_3) * 2.0) / (float)param_3[2] - 1.0)) / *param_4 -
          param_5[0xc];
  fVar3 = (fVar2 * (((param_2[1] - (float)param_3[1]) * 2.0) / (float)param_3[3] - 1.0)) /
          param_4[5] - param_5[0xd];
  fVar2 = fVar2 - param_5[0xe];
  *param_1 = fVar3 * param_5[1] + fVar1 * *param_5 + fVar2 * param_5[2];
  param_1[1] = param_5[6] * fVar2 + param_5[4] * fVar1 + param_5[5] * fVar3;
  param_1[2] = fVar2 * param_5[10] + param_5[9] * fVar3 + param_5[8] * fVar1;
  return;
}

// 00DE2190  thunk_FUN_00de2070  size=5  [callgraph]
void thunk_FUN_00de2070(float *param_1,float *param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_4[0xe] / (param_2[2] + param_4[10]);
  fVar2 = -fVar1;
  fVar1 = (fVar1 * (((*param_2 - (float)*param_3) * 2.0) / (float)param_3[2] - 1.0)) / *param_4 -
          param_5[0xc];
  fVar3 = (fVar2 * (((param_2[1] - (float)param_3[1]) * 2.0) / (float)param_3[3] - 1.0)) /
          param_4[5] - param_5[0xd];
  fVar2 = fVar2 - param_5[0xe];
  *param_1 = fVar3 * param_5[1] + fVar1 * *param_5 + fVar2 * param_5[2];
  param_1[1] = param_5[6] * fVar2 + param_5[4] * fVar1 + param_5[5] * fVar3;
  param_1[2] = fVar2 * param_5[10] + param_5[9] * fVar3 + param_5[8] * fVar1;
  return;
}

// 00DE21A0  FUN_00de21a0  size=1374  [callgraph]
void FUN_00de21a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float param_4)

{
  undefined4 *puVar1;
  float unaff_ESI;
  float10 fVar2;
  undefined4 uStack_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  puVar1 = param_2;
  if ((param_4 < 0.0 != (param_4 == 0.0)) ||
     (puVar1 = param_3, !NAN(param_4) && 1.0 < param_4 != (param_4 == 1.0))) {
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[3] = puVar1[3];
    return;
  }
  local_50 = *param_2;
  local_4c = (float)param_2[1];
  local_48 = param_2[2];
  local_44 = param_2[3];
  local_60 = *param_3;
  local_5c = (float)param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_6c = 0.0;
  if (0.5 < param_4) {
    local_64 = ABS(ABS(local_5c) - 1.5707964);
    if (local_64 < 0.008726646) {
      if (local_5c <= 1.5707964) {
        if (-1.5707964 <= local_5c) {
          if (local_5c <= 0.0) {
            local_6c = -1.5620697 - local_5c;
          }
          else {
            local_6c = 1.5620697 - local_5c;
          }
        }
        else {
          local_6c = -1.579523 - local_5c;
        }
      }
      else {
        local_6c = 1.579523 - local_5c;
      }
      local_64 = local_4c + local_6c;
      fVar2 = (float10)FUN_00ddba30(local_64);
      local_4c = (float)fVar2;
      local_64 = local_5c + local_6c;
      fVar2 = (float10)FUN_00ddba30(local_64);
      local_5c = (float)fVar2;
    }
    FUN_00de34c0(local_20,&local_50);
    FUN_00ddef80(&local_30,&local_50,&local_60);
    FUN_00ddef80(&local_40,local_20,&local_60);
    local_64 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    local_68 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if ((local_64 == 0.0) || (local_68 == 0.0)) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      return;
    }
    if (local_68 <= local_64) {
      FUN_00ddb6b0(&local_40,local_20,5);
      FUN_00ddb6b0(&local_30,&local_60,5);
    }
    else {
      FUN_00ddb6b0(&local_40,&local_50,5);
      FUN_00ddb6b0(&local_30,&local_60,5);
    }
    D3DXQuaternionSlerp(local_20,&local_40,&local_30,param_4);
    puVar1 = &uStack_70;
  }
  else {
    local_68 = ABS(ABS(local_4c) - 1.5707964);
    if (local_68 < 0.008726646) {
      if (local_4c <= 1.5707964) {
        if (-1.5707964 <= local_4c) {
          if (local_4c <= 0.0) {
            local_6c = -1.5620697 - local_4c;
          }
          else {
            local_6c = 1.5620697 - local_4c;
          }
        }
        else {
          local_6c = -1.579523 - local_4c;
        }
      }
      else {
        local_6c = 1.579523 - local_4c;
      }
      local_68 = local_4c + local_6c;
      fVar2 = (float10)FUN_00ddba30(local_68);
      local_4c = (float)fVar2;
      local_68 = local_5c + local_6c;
      fVar2 = (float10)FUN_00ddba30(local_68);
      local_5c = (float)fVar2;
    }
    FUN_00de34c0(local_20,&local_60);
    FUN_00ddef80(&local_40,&local_50,&local_60);
    FUN_00ddef80(&local_30,&local_50,local_20);
    local_68 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    local_64 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if ((local_68 == 0.0) || (local_64 == 0.0)) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      return;
    }
    if (local_64 <= local_68) {
      FUN_00ddb6b0(&local_40,&local_50,5);
      FUN_00ddb6b0(&local_30,local_20,5);
    }
    else {
      FUN_00ddb6b0(&local_40,&local_50,5);
      FUN_00ddb6b0(&local_30,&local_60,5);
    }
    D3DXQuaternionSlerp(local_20,&local_40,&local_30,param_4);
    puVar1 = &local_60;
  }
  FUN_00de13c0(&local_50,&local_30,puVar1,5);
  if (unaff_ESI != 0.0) {
    fVar2 = (float10)FUN_00ddba30(local_4c - unaff_ESI);
    local_4c = (float)fVar2;
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  return;
}

// 00DE2700  FUN_00de2700  size=90  [callgraph]
void FUN_00de2700(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_40 [16];
  undefined1 local_30 [4];
  undefined1 auStack_2c [12];
  undefined1 local_20 [28];
  
  FUN_00ddb6b0(local_30,param_2,5);
  FUN_00ddb6b0(local_40,param_3,5);
  D3DXQuaternionMultiply(local_20,local_30,local_40);
  FUN_00de13c0(param_1,auStack_2c,param_2,5);
  return;
}

// 00DE2760  FUN_00de2760  size=117  [callgraph]
void FUN_00de2760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_5c [12];
  undefined1 local_50 [16];
  undefined1 local_40 [4];
  undefined1 auStack_3c [12];
  undefined1 local_30 [4];
  undefined1 auStack_2c [40];
  
  FUN_00ddb6b0(local_50,param_2,5);
  FUN_00ddb6b0(local_40,param_3,5);
  D3DXQuaternionMultiply(local_30,local_50,local_40);
  D3DXQuaternionSlerp(auStack_2c,auStack_5c,auStack_3c,param_4);
  FUN_00de13c0(param_1,auStack_3c,param_2,5);
  return;
}

// 00DE27E0  FUN_00de27e0  size=103  [callgraph]
void FUN_00de27e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [8];
  undefined1 local_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 local_30 [8];
  undefined1 auStack_28 [36];
  
  FUN_00ddb6b0(local_30,param_2,5);
  FUN_00ddb6b0(local_40,param_3,5);
  D3DXQuaternionInverse(local_40,local_40);
  D3DXQuaternionMultiply(auStack_28,auStack_38,auStack_48);
  FUN_00de13c0(param_1,auStack_34,param_2,5);
  return;
}

// 00DE2850  FUN_00de2850  size=130  [callgraph]
void FUN_00de2850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 local_50 [8];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 local_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [48];
  
  FUN_00ddb6b0(local_40,param_2,5);
  FUN_00ddb6b0(local_50,param_3,5);
  D3DXQuaternionInverse(local_50,local_50);
  D3DXQuaternionMultiply(auStack_38,auStack_48,auStack_58);
  D3DXQuaternionSlerp(auStack_34,auStack_54,auStack_44,param_4);
  FUN_00de13c0(param_1,auStack_44,param_2,5);
  return;
}

// 00DE28E0  FUN_00de28e0  size=721  [callgraph]
void FUN_00de28e0(undefined4 *param_1,float *param_2)

{
  float10 fVar1;
  undefined1 auStack_b8 [8];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [2];
  undefined1 auStack_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b8;
  local_80 = *param_2;
  local_a4 = param_2[1];
  local_74 = param_2[4];
  local_7c = param_2[5];
  local_ac = param_2[6];
  local_78 = param_2[8];
  local_84 = param_2[9];
  local_b0 = param_2[10];
  local_a8 = local_a4 * local_a4 + local_80 * local_80 + param_2[2] * param_2[2];
  fVar1 = (float10)FUN_00fdef70();
  local_a8 = (float)fVar1;
  local_ac = local_7c * local_7c + local_74 * local_74 + local_ac * local_ac;
  local_a0 = local_a8;
  fVar1 = (float10)FUN_00fdef70();
  local_ac = (float)fVar1;
  local_b0 = local_84 * local_84 + local_78 * local_78 + local_b0 * local_b0;
  local_9c = local_ac;
  fVar1 = (float10)FUN_00fdef70();
  local_a4 = (float)fVar1;
  local_b0 = param_2[10] / local_a4;
  fVar1 = (float10)FUN_00fdecda();
  fStack_70 = (float)fVar1;
  local_b0 = -param_2[2] / local_a4;
  fVar1 = (float10)FUN_00ddbaa0(local_b0);
  fStack_6c = (float)fVar1;
  local_b0 = *param_2 / local_a0;
  fVar1 = (float10)FUN_00fdecda();
  local_b0 = (float)fVar1;
  local_a0 = param_2[0xc];
  local_9c = param_2[0xd];
  fStack_98 = param_2[0xe];
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  afStack_68[0] = local_b0;
  if (local_b0 != 0.0) {
    D3DXMatrixRotationZ(auStack_60,local_b0);
    D3DXMatrixMultiply(param_1,afStack_68,param_1);
  }
  if (fStack_6c != 0.0) {
    D3DXMatrixRotationY(auStack_60,fStack_6c);
    D3DXMatrixMultiply(param_1,afStack_68,param_1);
  }
  if (fStack_70 != 0.0) {
    D3DXMatrixRotationX(auStack_60,fStack_70);
    D3DXMatrixMultiply(param_1,afStack_68,param_1);
  }
  param_1[0xc] = local_a0;
  param_1[0xd] = local_9c;
  param_1[0xe] = fStack_98;
  __security_check_cookie(local_14 ^ (uint)auStack_b8);
  return;
}

// 00DE2BC0  FUN_00de2bc0  size=1025  [callgraph]
void FUN_00de2bc0(undefined4 *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float10 fVar2;
  float local_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  fVar1 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,param_2);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  if (param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1] <= 0.0) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_50 = 0.0;
    local_4c = 1.0;
    local_48 = 0.0;
  }
  else {
    FUN_00ddf460(&local_50,param_3);
  }
  fVar1 = local_48 * local_28 + local_50 * local_30 + local_4c * local_2c;
  if (fVar1 < 0.9999999) {
    fVar2 = (float10)FUN_00fdc4e0();
    local_64 = (float)fVar2;
    if (fVar1 < -0.9999999) {
      local_64 = 3.1415927;
    }
    fVar1 = local_64;
    local_64 = local_64 * param_5;
    if (param_6 < local_64) {
      local_64 = param_6;
    }
    if (local_64 < 0.0009) {
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[0xf] = 0x3f800000;
      param_1[10] = 0x3f800000;
      param_1[5] = 0x3f800000;
      *param_1 = 0x3f800000;
      return;
    }
    if (fVar1 <= 3.1315928) {
      local_40 = local_2c * local_48 - local_28 * local_4c;
      local_3c = local_50 * local_28 - local_30 * local_48;
      local_38 = local_4c * local_30 - local_2c * local_50;
      local_34 = local_14;
    }
    else {
      fVar1 = param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1];
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,param_4);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_30 = 0.0;
        local_2c = 1.0;
        local_28 = 0.0;
      }
      local_40 = local_48 * local_2c - local_4c * local_28;
      local_3c = local_50 * local_28 - local_30 * local_48;
      local_38 = local_30 * local_4c - local_50 * local_2c;
      local_34 = local_14;
    }
    if (ABS(local_3c) + ABS(local_40) + ABS(local_38) != 0.0) {
      D3DXQuaternionRotationAxis(local_20,&local_40,local_64);
      D3DXMatrixRotationQuaternion(param_1,&local_2c);
      return;
    }
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}

// 00DE3120  FUN_00de3120  size=333  [callgraph]
float10 FUN_00de3120(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_24 = param_3[3] - param_2[3];
  fVar1 = local_2c * local_2c + local_30 * local_30 + local_28 * local_28;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  fVar4 = fVar3 * local_28 + fVar2 * local_2c + fVar1 * local_30;
  return (float10)((fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) - fVar4 * fVar4);
}

// 00DE3460  FUN_00de3460  size=87  [callgraph]
void FUN_00de3460(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = *param_2;
  fVar4 = param_3[2];
  fVar5 = param_3[1];
  fVar6 = *param_2;
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}

// 00DE34C0  FUN_00de34c0  size=97  [callgraph]
int FUN_00de34c0(float *param_1,float *param_2)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00ddba30(*param_2 + 3.1415927);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(3.1415927 - *(float *)(extraout_EDX + 4));
  *(float *)(extraout_ECX + 4) = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30(*(float *)(extraout_EDX_00 + 8) + 3.1415927);
  *(float *)(extraout_ECX_00 + 8) = (float)fVar1;
  return extraout_ECX_00;
}

// 00DE3530  FUN_00de3530  size=3  [callgraph]
undefined4 __fastcall FUN_00de3530(undefined4 param_1)

{
  return param_1;
}

// 00DE3540  FUN_00de3540  size=16  [callgraph]
void __thiscall FUN_00de3540(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 00DE3550  FUN_00de3550  size=4  [callgraph]
undefined4 __fastcall FUN_00de3550(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 00DE3560  FUN_00de3560  size=3  [callgraph]
undefined4 __fastcall FUN_00de3560(undefined4 *param_1)

{
  return *param_1;
}

// 00DE3570  FUN_00de3570  size=14  [callgraph]
void __thiscall FUN_00de3570(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + param_3 * 4) = param_2;
  return;
}

// 00DE3580  FUN_00de3580  size=10  [callgraph]
undefined4 __thiscall FUN_00de3580(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}

// 00DE3590  FUN_00de3590  size=11  [callgraph]
undefined4 __fastcall FUN_00de3590(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}

// 00DE3610  FUN_00de3610  size=18  [callgraph]
void __thiscall FUN_00de3610(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 00DE3670  FUN_00de3670  size=48  [callgraph]
undefined4 __thiscall FUN_00de3670(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0xffffffff) {
    iVar1 = *(int *)(param_1 + (param_2 >> 0x1c) * 4);
    if (((param_2 & 0xfffffff) < *(uint *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x14) != 0)) {
      return *(undefined4 *)(*(int *)(iVar1 + 0x14) + (param_2 & 0xfffffff) * 4 + iVar1);
    }
  }
  return 0;
}

// 00DE36A0  FUN_00de36a0  size=136  [callgraph]
int __thiscall FUN_00de36a0(int param_1,int param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar2 = *(int *)(param_1 + param_2 * 4);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 0)) {
    return -1;
  }
  uVar3 = 0;
  uVar7 = 0;
  pbVar6 = (byte *)(*(int *)(iVar2 + 0xc) + iVar2);
  pbVar4 = param_3;
  pbVar8 = pbVar6;
  if (*(uint *)(iVar2 + 4) != 0) {
LAB_00de36d6:
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00de36f6;
          pbVar6 = pbVar6 + 2;
          pbVar4 = pbVar4 + 2;
          if (bVar1 != 0) goto LAB_00de36d6;
        }
        iVar5 = 0;
      }
      else {
LAB_00de36f6:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar5 == 0) {
        if (param_4 <= uVar3) {
          return param_2 * 0x10000000 + uVar7;
        }
        uVar3 = uVar3 + 1;
      }
      uVar7 = uVar7 + 1;
      pbVar6 = pbVar8 + 4;
      pbVar4 = param_3;
      pbVar8 = pbVar6;
    } while (uVar7 < *(uint *)(iVar2 + 4));
  }
  return -1;
}

// 00DE3730  FUN_00de3730  size=99  [callgraph]
int __thiscall FUN_00de3730(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *_Str2;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + param_2 * 4);
  if ((iVar4 != 0) && (iVar1 = *(int *)(iVar4 + 0x10), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + iVar4);
    uVar3 = *(uint *)(iVar4 + 4);
    uVar5 = 0;
    _Str2 = (char *)(iVar1 + 4 + iVar4);
    if (uVar3 != 0) {
      do {
        iVar4 = __stricmp(param_3,_Str2);
        if (iVar4 == 0) {
          return param_2 * 0x10000000 + uVar5;
        }
        uVar5 = uVar5 + 1;
        _Str2 = _Str2 + iVar2;
      } while (uVar5 < uVar3);
    }
    return -1;
  }
  return -1;
}

// 00DE37A0  FUN_00de37a0  size=170  [callgraph]
int __thiscall FUN_00de37a0(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar2 = *(int *)(param_1 + param_2 * 4);
  if (iVar2 == 0) {
    return -1;
  }
  iVar3 = *(int *)(iVar2 + 0x18);
  if (iVar3 != 0) {
    bVar4 = (byte)*(undefined4 *)(iVar3 + iVar2);
    uVar1 = *(ushort *)
             (*(int *)(iVar3 + 4 + iVar2) + (param_3 >> (bVar4 & 0x1f)) * 2 + iVar3 + iVar2);
    uVar5 = (uint)uVar1;
    if (uVar1 != 0xffff) {
      iVar6 = *(int *)(iVar3 + 8 + iVar2) + uVar5 * 4 + iVar3;
      for (puVar7 = (uint *)(iVar6 + iVar2);
          (uVar5 <= *(int *)(iVar2 + 4) - 1U &&
          (*puVar7 >> (bVar4 & 0x1f) == *(uint *)(iVar6 + iVar2) >> (bVar4 & 0x1f)));
          puVar7 = puVar7 + 1) {
        if (*puVar7 == param_3) {
          return (uint)*(ushort *)(*(int *)(iVar3 + 0xc + iVar2) + iVar3 + iVar2 + uVar5 * 2) +
                 param_2 * 0x10000000;
        }
        uVar5 = uVar5 + 1;
      }
    }
    return -1;
  }
  return -1;
}

// 00DE3850  FUN_00de3850  size=118  [callgraph]
int __thiscall FUN_00de3850(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_4;
  
  iVar4 = *(int *)(param_1 + param_2 * 4);
  uVar5 = 0;
  if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + 0x10), iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + iVar4);
    uVar2 = *(uint *)(iVar4 + 4);
    iVar4 = iVar3 + 4 + iVar4;
    local_4 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_00fdbbd0(iVar4,param_3);
        if (iVar3 != 0) {
          if (param_4 <= local_4) {
            return param_2 * 0x10000000 + uVar5;
          }
          local_4 = local_4 + 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + iVar1;
      } while (uVar5 < uVar2);
    }
    return -1;
  }
  return -1;
}

// 00DE38D0  FUN_00de38d0  size=56  [callgraph]
int __thiscall FUN_00de38d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0xffffffff) {
    iVar1 = *(int *)(param_1 + (param_2 >> 0x1c) * 4);
    if (((param_2 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
       (iVar2 = *(int *)(iVar1 + 0x10), iVar2 != 0)) {
      return *(int *)(iVar2 + iVar1) * (param_2 & 0xfffffff) + iVar2 + 4 + iVar1;
    }
  }
  return 0;
}

// 00DE3910  FUN_00de3910  size=77  [callgraph]
undefined4 __thiscall
FUN_00de3910(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = FUN_00de36a0(param_2,param_3,param_4);
    if (uVar2 != 0xffffffff) {
      iVar1 = param_1[uVar2 >> 0x1c];
      if (((uVar2 & 0xfffffff) < *(uint *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x14) != 0)) {
        return *(undefined4 *)(*(int *)(iVar1 + 0x14) + (uVar2 & 0xfffffff) * 4 + iVar1);
      }
    }
  }
  return 0;
}

// 00DE3960  FUN_00de3960  size=51  [callgraph]
undefined4 __thiscall FUN_00de3960(int *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (*param_3 != '\0')) {
    iVar1 = FUN_00de3730(param_2,param_3);
    if (iVar1 != -1) {
      uVar2 = FUN_00de3670(iVar1);
      return uVar2;
    }
  }
  return 0;
}

// 00DE39A0  FUN_00de39a0  size=58  [callgraph]
undefined4 __thiscall FUN_00de39a0(int *param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (*param_3 != '\0')) {
    iVar1 = FUN_00de3850(param_2,param_3,param_4);
    if (iVar1 != -1) {
      uVar2 = FUN_00de3670(iVar1);
      return uVar2;
    }
  }
  return 0;
}

// 00DE39E0  FUN_00de39e0  size=62  [callgraph]
undefined4 __thiscall FUN_00de39e0(int *param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (*param_3 != '\0')) {
    uVar1 = FUN_00e03ea0(param_3);
    iVar2 = FUN_00de37a0(param_2,uVar1);
    if (iVar2 != -1) {
      uVar1 = FUN_00de3670(iVar2);
      return uVar1;
    }
  }
  return 0;
}

// 00DE3A20  FUN_00de3a20  size=72  [callgraph]
undefined4 __thiscall FUN_00de3a20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = FUN_00de37a0(param_2,param_3);
    if (uVar2 != 0xffffffff) {
      iVar1 = param_1[uVar2 >> 0x1c];
      if (((uVar2 & 0xfffffff) < *(uint *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x14) != 0)) {
        return *(undefined4 *)(*(int *)(iVar1 + 0x14) + (uVar2 & 0xfffffff) * 4 + iVar1);
      }
    }
  }
  return 0;
}

// 00DE3C20  FUN_00de3c20  size=54  [callgraph]
undefined4 __thiscall FUN_00de3c20(int *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0xc) != 0) && (param_3 < *(uint *)(iVar1 + 4))) {
    _strncpy_s(param_2,4,(char *)(*(int *)(iVar1 + 0xc) + param_3 * 4 + iVar1),4);
    return 1;
  }
  return 0;
}

// 00DE3CF0  FUN_00de3cf0  size=54  [callgraph]
int __thiscall FUN_00de3cf0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (param_2 != 0xffffffff)) {
    iVar1 = param_1[param_2 >> 0x1c];
    if (((param_2 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
       (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (param_2 & 0xfffffff) * 4), iVar2 != 0)) {
      return iVar2 + iVar1;
    }
  }
  return 0;
}

// 00DE3D30  FUN_00de3d30  size=78  [callgraph]
int __thiscall FUN_00de3d30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar3 = FUN_00de36a0(param_2,param_3,param_4);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE3D80  FUN_00de3d80  size=79  [callgraph]
int __thiscall FUN_00de3d80(int *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    if (*param_3 == '\0') {
      return *param_1;
    }
    uVar3 = FUN_00de3730(param_2,param_3);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE3DD0  FUN_00de3dd0  size=84  [callgraph]
int __thiscall FUN_00de3dd0(int *param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    if (*param_3 == '\0') {
      return *param_1;
    }
    uVar3 = FUN_00de3850(param_2,param_3,param_4);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE3E30  FUN_00de3e30  size=88  [callgraph]
int __thiscall FUN_00de3e30(int *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*param_1 != 0) {
    if (*param_3 == '\0') {
      return *param_1;
    }
    uVar3 = FUN_00e03ea0(param_3);
    uVar4 = FUN_00de37a0(param_2,uVar3);
    if (uVar4 != 0xffffffff) {
      iVar1 = param_1[uVar4 >> 0x1c];
      if (((uVar4 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar4 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE3E90  FUN_00de3e90  size=73  [callgraph]
int __thiscall FUN_00de3e90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar3 = FUN_00de37a0(param_2,param_3);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE3EE0  FUN_00de3ee0  size=53  [callgraph]
undefined4 __thiscall FUN_00de3ee0(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 != 0) && (param_2 != 0xffffffff)) {
    iVar1 = param_1[param_2 >> 0x1c];
    if (((param_2 & 0xfffffff) < *(uint *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x14) != 0)) {
      return *(undefined4 *)(*(int *)(iVar1 + 0x14) + (param_2 & 0xfffffff) * 4 + iVar1);
    }
  }
  return 0;
}

// 00DE3F20  FUN_00de3f20  size=171  [callgraph]
int __thiscall FUN_00de3f20(int *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  uint local_8;
  
  local_8 = 0;
  do {
    iVar2 = *param_1;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      uVar6 = 0;
      uVar7 = 0;
      pbVar5 = (byte *)(*(int *)(iVar2 + 0xc) + iVar2);
      pbVar3 = param_2;
      pbVar8 = pbVar5;
      if (*(uint *)(iVar2 + 4) != 0) {
LAB_00de3f56:
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar5;
          if (bVar1 == *pbVar5) {
            if (bVar1 != 0) {
              bVar1 = pbVar3[1];
              bVar9 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00de3f76;
              pbVar5 = pbVar5 + 2;
              pbVar3 = pbVar3 + 2;
              if (bVar1 != 0) goto LAB_00de3f56;
            }
            iVar4 = 0;
          }
          else {
LAB_00de3f76:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          }
          if (iVar4 == 0) {
            if (param_3 <= uVar6) {
              if (local_8 + uVar7 != -1) {
                return local_8 + uVar7;
              }
              break;
            }
            uVar6 = uVar6 + 1;
          }
          uVar7 = uVar7 + 1;
          pbVar5 = pbVar8 + 4;
          pbVar3 = param_2;
          pbVar8 = pbVar5;
        } while (uVar7 < *(uint *)(iVar2 + 4));
      }
    }
    local_8 = local_8 + 0x10000000;
    param_1 = param_1 + 1;
    if (0x1fffffff < local_8) {
      return -1;
    }
  } while( true );
}

// 00DE3FD0  FUN_00de3fd0  size=130  [callgraph]
int __thiscall FUN_00de3fd0(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *_Str2;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  do {
    iVar4 = *param_1;
    if ((iVar4 != 0) && (iVar1 = *(int *)(iVar4 + 0x10), iVar1 != 0)) {
      uVar2 = *(uint *)(iVar4 + 4);
      iVar3 = *(int *)(iVar1 + iVar4);
      uVar5 = 0;
      _Str2 = (char *)(iVar1 + 4 + iVar4);
      if (uVar2 != 0) {
        do {
          iVar4 = __stricmp(param_2,_Str2);
          if (iVar4 == 0) {
            if (local_8 + uVar5 != -1) {
              return local_8 + uVar5;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          _Str2 = _Str2 + iVar3;
        } while (uVar5 < uVar2);
      }
    }
    local_8 = local_8 + 0x10000000;
    param_1 = param_1 + 1;
    if (0x1fffffff < local_8) {
      return -1;
    }
  } while( true );
}

// 00DE4060  FUN_00de4060  size=193  [callgraph]
int __thiscall FUN_00de4060(int *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint local_c;
  
  local_c = 0;
  do {
    iVar3 = *param_1;
    if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + 0x18), iVar2 != 0)) {
      bVar4 = (byte)*(undefined4 *)(iVar2 + iVar3);
      uVar1 = *(ushort *)
               (*(int *)(iVar2 + 4 + iVar3) + (param_2 >> (bVar4 & 0x1f)) * 2 + iVar2 + iVar3);
      uVar5 = (uint)uVar1;
      if (uVar1 != 0xffff) {
        iVar6 = *(int *)(iVar2 + 8 + iVar3) + uVar5 * 4 + iVar2;
        puVar7 = (uint *)(iVar6 + iVar3);
        while( true ) {
          if ((*(int *)(iVar3 + 4) - 1U < uVar5) ||
             (*puVar7 >> (bVar4 & 0x1f) != *(uint *)(iVar6 + iVar3) >> (bVar4 & 0x1f)))
          goto LAB_00de40f2;
          if (*puVar7 == param_2) break;
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = *(ushort *)(*(int *)(iVar2 + 0xc + iVar3) + iVar2 + iVar3 + uVar5 * 2) + local_c;
        if (iVar3 != -1) {
          return iVar3;
        }
      }
    }
LAB_00de40f2:
    local_c = local_c + 0x10000000;
    param_1 = param_1 + 1;
    if (0x1fffffff < local_c) {
      return -1;
    }
  } while( true );
}

// 00DE4130  FUN_00de4130  size=148  [callgraph]
int __thiscall FUN_00de4130(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    iVar4 = *param_1;
    uVar5 = 0;
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + 0x10), iVar3 != 0)) {
      uVar1 = *(uint *)(iVar4 + 4);
      iVar2 = *(int *)(iVar3 + iVar4);
      iVar4 = iVar3 + 4 + iVar4;
      local_c = 0;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_00fdbbd0(iVar4,param_2);
          if (iVar3 != 0) {
            if (param_3 <= local_c) {
              if (local_8 + uVar5 != -1) {
                return local_8 + uVar5;
              }
              break;
            }
            local_c = local_c + 1;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + iVar2;
        } while (uVar5 < uVar1);
      }
    }
    local_8 = local_8 + 0x10000000;
    param_1 = param_1 + 1;
    if (0x1fffffff < local_8) {
      return -1;
    }
  } while( true );
}

// 00DE41D0  FUN_00de41d0  size=156  [callgraph]
undefined4 __thiscall FUN_00de41d0(int param_1,undefined4 param_2,char *param_3,rsize_t param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *_Src;
  uint uVar7;
  uint local_8;
  
  local_8 = 0;
  do {
    iVar5 = *(int *)(param_1 + local_8 * 4);
    if ((iVar5 != 0) && (iVar2 = *(int *)(iVar5 + 0x10), iVar2 != 0)) {
      uVar3 = *(uint *)(iVar5 + 4);
      iVar4 = *(int *)(iVar2 + iVar5);
      uVar7 = 0;
      _Src = (char *)(iVar2 + 4 + iVar5);
      if (uVar3 != 0) {
LAB_00de4203:
        iVar5 = FUN_00fdbbd0(_Src,param_2);
        if (iVar5 == 0) break;
        pcVar6 = _Src;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar6 - (int)(_Src + 1) < (int)param_4) {
          _strcpy_s(param_3,param_4,_Src);
          return 1;
        }
      }
    }
LAB_00de4234:
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return 0;
    }
  } while( true );
  uVar7 = uVar7 + 1;
  _Src = _Src + iVar4;
  if (uVar3 <= uVar7) goto LAB_00de4234;
  goto LAB_00de4203;
}

// 00DE4270  FUN_00de4270  size=207  [callgraph]
undefined4 __thiscall FUN_00de4270(int *param_1,char *param_2,rsize_t param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  
  local_c = 0;
  piVar5 = param_1;
  do {
    iVar1 = *piVar5;
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x10), iVar2 != 0)) {
      uVar6 = 0;
      uVar7 = local_c;
      if (*(uint *)(iVar1 + 4) != 0) {
        do {
          if (uVar7 == 0xffffffff) {
            iVar4 = 0;
          }
          else {
            iVar3 = param_1[uVar7 >> 0x1c];
            if ((uVar7 & 0xfffffff) < *(uint *)(iVar3 + 4)) {
              iVar4 = *(int *)(*(int *)(iVar3 + 8) + iVar3 + (uVar7 & 0xfffffff) * 4);
              if (iVar4 != 0) {
                iVar4 = iVar4 + iVar3;
              }
            }
            else {
              iVar4 = 0;
            }
          }
          if (iVar4 == param_4) {
            _strcpy_s(param_2,param_3,(char *)(uVar6 * *(int *)(iVar2 + iVar1) + iVar2 + 4 + iVar1))
            ;
            return 1;
          }
          uVar6 = uVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar6 < *(uint *)(iVar1 + 4));
      }
    }
    local_c = local_c + 0x10000000;
    piVar5 = piVar5 + 1;
    if (0x1fffffff < local_c) {
      return 0;
    }
  } while( true );
}

// 00DE43C0  FUN_00de43c0  size=84  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00de43c0(undefined4 param_1)

{
  int iVar1;
  
  if ((_DAT_01b83b48 & 1) == 0) {
    _DAT_01b83b48 = _DAT_01b83b48 | 1;
    Hw::cHeapGlobal::cHeapGlobal();
    _atexit((_func_4879 *)&LAB_015ed410);
  }
  iVar1 = (**(code **)(DAT_01dd0820 + 0x40))(0x28,param_1,4,&DAT_01b83af0,"FactoryFixed");
  return iVar1 != 0;
}

// 00DE4420  FUN_00de4420  size=86  [callgraph]
undefined4 FUN_00de4420(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd2bc0();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _strcpy_s((char *)(puVar1 + 2),0x20,param_3);
    return 1;
  }
  return 0;
}

// 00DE4480  FUN_00de4480  size=47  [callgraph]
void FUN_00de4480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00de4270(param_1,param_2,param_3);
  return;
}

// 00DE44B0  FUN_00de44b0  size=73  [callgraph]
int __thiscall FUN_00de44b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar3 = FUN_00de3f20(param_2,param_3);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE4500  FUN_00de4500  size=74  [callgraph]
int __thiscall FUN_00de4500(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    if (*param_2 == '\0') {
      return *param_1;
    }
    uVar3 = FUN_00de3fd0(param_2);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE4550  FUN_00de4550  size=79  [callgraph]
int __thiscall FUN_00de4550(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    if (*param_2 == '\0') {
      return *param_1;
    }
    uVar3 = FUN_00de4130(param_2,param_3);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE45A0  FUN_00de45a0  size=83  [callgraph]
int __thiscall FUN_00de45a0(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*param_1 != 0) {
    if (*param_2 == '\0') {
      return *param_1;
    }
    uVar3 = FUN_00e03ea0(param_2);
    uVar4 = FUN_00de4060(uVar3);
    if (uVar4 != 0xffffffff) {
      iVar1 = param_1[uVar4 >> 0x1c];
      if (((uVar4 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar4 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE4600  FUN_00de4600  size=66  [callgraph]
int __thiscall FUN_00de4600(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar3 = FUN_00de4060(param_2);
    if (uVar3 != 0xffffffff) {
      iVar1 = param_1[uVar3 >> 0x1c];
      if (((uVar3 & 0xfffffff) < *(uint *)(iVar1 + 4)) &&
         (iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar1 + (uVar3 & 0xfffffff) * 4), iVar2 != 0)) {
        return iVar1 + iVar2;
      }
    }
  }
  return 0;
}

// 00DE4650  FUN_00de4650  size=72  [callgraph]
undefined4 __thiscall FUN_00de4650(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = FUN_00de3f20(param_2,param_3);
    if (uVar2 != 0xffffffff) {
      iVar1 = param_1[uVar2 >> 0x1c];
      if (((uVar2 & 0xfffffff) < *(uint *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x14) != 0)) {
        return *(undefined4 *)(*(int *)(iVar1 + 0x14) + (uVar2 & 0xfffffff) * 4 + iVar1);
      }
    }
  }
  return 0;
}

// 00DE46A0  FUN_00de46a0  size=46  [callgraph]
undefined4 __thiscall FUN_00de46a0(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (*param_2 != '\0')) {
    iVar1 = FUN_00de3fd0(param_2);
    if (iVar1 != -1) {
      uVar2 = FUN_00de3670(iVar1);
      return uVar2;
    }
  }
  return 0;
}

// 00DE46D0  FUN_00de46d0  size=53  [callgraph]
undefined4 __thiscall FUN_00de46d0(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (*param_2 != '\0')) {
    iVar1 = FUN_00de4130(param_2,param_3);
    if (iVar1 != -1) {
      uVar2 = FUN_00de3670(iVar1);
      return uVar2;
    }
  }
  return 0;
}

// 00DE4710  FUN_00de4710  size=57  [callgraph]
undefined4 __thiscall FUN_00de4710(int *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (*param_2 != '\0')) {
    uVar1 = FUN_00e03ea0(param_2);
    iVar2 = FUN_00de4060(uVar1);
    if (iVar2 != -1) {
      uVar1 = FUN_00de3670(iVar2);
      return uVar1;
    }
  }
  return 0;
}

// 00DE4750  FUN_00de4750  size=65  [callgraph]
undefined4 __thiscall FUN_00de4750(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = FUN_00de4060(param_2);
    if (uVar2 != 0xffffffff) {
      iVar1 = param_1[uVar2 >> 0x1c];
      if (((uVar2 & 0xfffffff) < *(uint *)(iVar1 + 4)) && (*(int *)(iVar1 + 0x14) != 0)) {
        return *(undefined4 *)(*(int *)(iVar1 + 0x14) + (uVar2 & 0xfffffff) * 4 + iVar1);
      }
    }
  }
  return 0;
}

// 00DE47A0  FUN_00de47a0  size=125  [callgraph]
undefined4 __thiscall FUN_00de47a0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 2);
  cVar4 = *param_2;
  iVar5 = 0;
  if (cVar1 != '\0') {
    iVar5 = 0;
    pcVar3 = param_2;
    do {
      if ((cVar4 == '\0') ||
         ((cVar1 != cVar4 &&
          (((cVar1 != '\\' && (cVar1 != '/')) || ((cVar4 != '\\' && (cVar4 != '/')))))))) {
        return 0;
      }
      cVar1 = pcVar3[(int)param_1 + (9 - (int)param_2)];
      cVar4 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
  }
  if (cVar4 == '\0') {
    return *param_1;
  }
  uVar2 = FUN_00de4500(param_2 + iVar5 + 1);
  return uVar2;
}

// 00DE4820  FUN_00de4820  size=45  [callgraph]
void FUN_00de4820(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dd0820 + 0xc))();
  if (iVar1 != 0) {
    FUN_00de4c10();
                    /* WARNING: Could not recover jumptable at 0x00de484a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_01dd0820 + 8))();
    return;
  }
  return;
}

// 00DE4850  FUN_00de4850  size=74  [callgraph]
int FUN_00de4850(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dd0820 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00de47a0(unaff_retaddr);
    if (iVar2 != 0) break;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar1 + -4);
    }
    iVar1 = (**(code **)(*piVar3 + 0x1c))(iVar1);
  }
  return iVar2;
}

// 00DE48A0  FUN_00de48a0  size=83  [callgraph]
void FUN_00de48a0(void)

{
  int *piVar1;
  int unaff_retaddr;
  
  piVar1 = (int *)(**(code **)(DAT_01dd0820 + 0x1c))(0);
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != unaff_retaddr) {
      piVar1 = (int *)(**(code **)(*(int *)piVar1[-1] + 0x1c))();
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    (**(code **)(DAT_01dd0820 + 0x1c))(piVar1);
    FUN_00dd4920(piVar1);
  }
  return;
}

// 00DE4B90  FUN_00de4b90  size=21  [callgraph]
undefined4 * __fastcall FUN_00de4b90(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DE4C10  FUN_00de4c10  size=59  [callgraph]
void __fastcall FUN_00de4c10(int param_1)

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

// 00DE4C60  FUN_00de4c60  size=36  [callgraph]
void __fastcall FUN_00de4c60(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00de4c10();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DE4C90  FUN_00de4c90  size=42  [callgraph]
void __fastcall FUN_00de4c90(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00de4c10();
                    /* WARNING: Could not recover jumptable at 0x00de4cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00DE4CE0  FUN_00de4ce0  size=21  [callgraph]
undefined4 * __fastcall FUN_00de4ce0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DE4D00  FUN_00de4d00  size=36  [callgraph]
void __fastcall FUN_00de4d00(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00de4c10();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00DE4D30  FUN_00de4d30  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00de4d30(int *param_1)

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

// 00DE4D60  FUN_00de4d60  size=93  [callgraph]
void __thiscall FUN_00de4d60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(float *)(param_1 + 0x90) = (float)iVar1 / (float)iVar2;
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  *(undefined4 *)(param_1 + 0x94) = param_4;
  return;
}

// 00DE4DC0  FUN_00de4dc0  size=113  [callgraph]
void __thiscall FUN_00de4dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  local_1c = 0;
  local_18 = 0;
  local_14 = FUN_00f98a90();
  local_10 = FUN_00f98aa0();
  local_c = 0;
  local_8 = 0x3f800000;
  thunk_FUN_00de2070(param_2,param_3,&local_1c,param_1 + 0x10,param_4);
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DE4E40  FUN_00de4e40  size=123  [callgraph]
void __thiscall
FUN_00de4e40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  local_1c = 0;
  local_18 = 0;
  local_14 = FUN_00f98ab0(param_5);
  local_10 = FUN_00f98ac0(param_5);
  local_c = 0;
  local_8 = 0x3f800000;
  thunk_FUN_00de2070(param_2,param_3,&local_1c,param_1 + 0x10,param_4);
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00DE4EC0  FUN_00de4ec0  size=95  [callgraph]
void __fastcall FUN_00de4ec0(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 2;
  *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
  return;
}

// 00DE4FA0  FUN_00de4fa0  size=229  [callgraph]
void __thiscall FUN_00de4fa0(int param_1,undefined4 param_2)

{
  float unaff_ESI;
  undefined1 *puStack_84;
  float fStack_78;
  float fStack_74;
  float local_70 [4];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_78;
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  FUN_00ddc1d0(local_60,param_1 + 0x130);
  puStack_84 = local_60;
  D3DXVec3TransformNormal(local_70,param_2);
  *(float *)(param_1 + 0x100) = unaff_ESI + *(float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x104) = fStack_78 + *(float *)(param_1 + 0x104);
  *(float *)(param_1 + 0x108) = fStack_74 + *(float *)(param_1 + 0x108);
  *(float *)(param_1 + 0x10c) = local_70[0] + *(float *)(param_1 + 0x10c);
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + unaff_ESI;
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x114) + fStack_78;
  *(float *)(param_1 + 0x118) = fStack_74 + *(float *)(param_1 + 0x118);
  *(float *)(param_1 + 0x11c) = local_70[0] + *(float *)(param_1 + 0x11c);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE5090  FUN_00de5090  size=214  [callgraph]
void __thiscall FUN_00de5090(int param_1,undefined4 param_2)

{
  float unaff_ESI;
  float unaff_EDI;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  float local_84;
  float afStack_78 [4];
  undefined1 auStack_68 [8];
  undefined1 local_60 [56];
  uint uStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)afStack_78;
  local_84 = *(float *)(param_1 + 0x134);
  puStack_88 = local_60;
  puStack_8c = (undefined1 *)0xde50bf;
  D3DXMatrixRotationY();
  puStack_8c = auStack_68;
  D3DXVec3TransformNormal(afStack_78,param_2);
  *(float *)(param_1 + 0x100) = local_84 + *(float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x104) = unaff_EDI + *(float *)(param_1 + 0x104);
  *(float *)(param_1 + 0x108) = unaff_ESI + *(float *)(param_1 + 0x108);
  *(float *)(param_1 + 0x10c) = afStack_78[0] + *(float *)(param_1 + 0x10c);
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + local_84;
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x114) + unaff_EDI;
  *(float *)(param_1 + 0x118) = unaff_ESI + *(float *)(param_1 + 0x118);
  *(float *)(param_1 + 0x11c) = afStack_78[0] + *(float *)(param_1 + 0x11c);
  __security_check_cookie(uStack_28 ^ (uint)&puStack_8c);
  return;
}

// 00DE5170  FUN_00de5170  size=13  [callgraph]
void __fastcall FUN_00de5170(int param_1)

{
  D3DXMatrixInverse(param_1 + 0x80,0,param_1);
  return;
}

// 00DE5180  FUN_00de5180  size=34  [callgraph]
void __thiscall FUN_00de5180(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  D3DXMatrixInverse(param_1 + 0x20,0,param_1);
  return;
}

// 00DE51B0  FUN_00de51b0  size=170  [callgraph]
void __fastcall FUN_00de51b0(int param_1)

{
  float *pfStack_88;
  undefined1 *puStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70 [4];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_7c;
  local_70[0] = 0.0;
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70[1] = 0.0;
  pfStack_88 = (float *)(param_1 + 0x130);
  local_70[2] = -*(float *)(param_1 + 0x144);
  FUN_00ddc1d0(local_60);
  puStack_84 = local_60;
  pfStack_88 = local_70;
  D3DXVec3TransformNormal(pfStack_88);
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x110) - fStack_7c;
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x114) - fStack_78;
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x118) - fStack_74;
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x11c) - local_70[0];
  __security_check_cookie(uStack_20 ^ (uint)&pfStack_88);
  return;
}

// 00DE5260  FUN_00de5260  size=170  [callgraph]
void __fastcall FUN_00de5260(int param_1)

{
  float *pfStack_88;
  undefined1 *puStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70 [4];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_7c;
  local_70[0] = 0.0;
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70[1] = 0.0;
  pfStack_88 = (float *)(param_1 + 0x130);
  local_70[2] = -*(float *)(param_1 + 0x144);
  FUN_00ddc1d0(local_60);
  puStack_84 = local_60;
  pfStack_88 = local_70;
  D3DXVec3TransformNormal(pfStack_88);
  *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x100) + fStack_7c;
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x104) + fStack_78;
  *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x108) + fStack_74;
  *(float *)(param_1 + 0x11c) = *(float *)(param_1 + 0x10c) + local_70[0];
  __security_check_cookie(uStack_20 ^ (uint)&pfStack_88);
  return;
}

// 00DE5310  FUN_00de5310  size=104  [callgraph]
void __fastcall FUN_00de5310(int param_1)

{
  undefined4 *puStack_88;
  undefined1 *puStack_84;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_7c;
  local_70 = 0;
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_6c = 0x3f800000;
  puStack_88 = (undefined4 *)(param_1 + 0x130);
  local_68 = 0;
  FUN_00ddc1d0(local_60);
  puStack_84 = local_60;
  puStack_88 = &local_70;
  D3DXVec3TransformNormal(param_1 + 0x120);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_88);
  return;
}

// 00DE5380  FUN_00de5380  size=345  [callgraph]
void __fastcall FUN_00de5380(int param_1)

{
  float10 fVar1;
  undefined4 **ppuStack_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  float fStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  float *pfStack_9c;
  undefined1 *puStack_98;
  float fStack_94;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  float local_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  float local_68 [2];
  undefined1 auStack_60 [36];
  uint uStack_3c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_8c;
  local_70 = *(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x100);
  local_6c = *(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104);
  local_68[0] = *(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x108);
  local_80 = (double)local_6c;
  local_84 = local_70 * local_70 + local_68[0] * local_68[0];
  fStack_94 = 2.0417608e-38;
  fVar1 = (float10)FUN_00fdef70();
  local_84 = (float)fVar1;
  fStack_94 = 2.0417632e-38;
  fVar1 = (float10)FUN_00fdecda();
  local_84 = (float)fVar1;
  *(float *)(param_1 + 0x130) = local_84;
  fStack_94 = 2.0417675e-38;
  fVar1 = (float10)FUN_00fdecda();
  local_84 = (float)fVar1;
  *(float *)(param_1 + 0x134) = local_84;
  puStack_98 = auStack_60;
  local_80 = *(double *)(param_1 + 0x120);
  uStack_78 = *(undefined4 *)(param_1 + 0x128);
  uStack_74 = *(undefined4 *)(param_1 + 300);
  fStack_94 = -local_84;
  pfStack_9c = (float *)0xde5472;
  D3DXMatrixRotationY();
  pfStack_9c = local_68;
  puStack_a4 = auStack_88;
  fStack_a8 = 2.0417799e-38;
  puStack_a0 = puStack_a4;
  D3DXVec3TransformNormal();
  fStack_a8 = -*(float *)(param_1 + 0x130);
  puStack_ac = &uStack_74;
  iStack_b0 = 0xde549a;
  D3DXMatrixRotationX();
  iStack_b0 = (int)&local_80 + 4;
  ppuStack_b4 = &pfStack_9c;
  D3DXVec3TransformNormal(ppuStack_b4);
  fVar1 = (float10)FUN_00fdecda();
  puStack_ac = (undefined4 *)(float)fVar1;
  *(undefined4 **)(param_1 + 0x138) = puStack_ac;
  __security_check_cookie(uStack_3c ^ (uint)&ppuStack_b4);
  return;
}

// 00DE54E0  FUN_00de54e0  size=120  [callgraph]
void __fastcall FUN_00de54e0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 0x144) = (float)fVar1;
  return;
}

// 00DE5560  FUN_00de5560  size=239  [callgraph]
void __thiscall
FUN_00de5560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float)param_5;
  if (param_5 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_6;
  if (param_6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0x60) = fVar1 / fVar2;
  fVar3 = (float10)FUN_00fded30();
  *(float *)(param_1 + 0x6c) = (float)fVar3;
  fVar4 = (float10)FUN_00fdee60();
  *(float *)(param_1 + 0x70) = (float)fVar4;
  fVar5 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 100) = (float)fVar3 / (float)fVar5;
  *(float *)(param_1 + 0x68) = ((float)fVar4 * (fVar1 / fVar2)) / (float)fVar5;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0x78) = param_4;
  _memset((void *)(param_1 + 0x10),0,0x40);
  return;
}

// 00DE5650  FUN_00de5650  size=192  [callgraph]
undefined4 __thiscall FUN_00de5650(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  fVar1 = param_1[2] * param_2[2] + *param_2 * *param_1 + param_1[1] * param_2[1] + param_1[3];
  if ((param_1[0x1d] - param_3 <= fVar1) && (fVar1 <= param_1[0x1e] + param_3)) {
    uVar3 = 0;
    do {
      if (param_3 < param_1[uVar3 * 4 + 6] * param_2[2] +
                    *param_2 * param_1[uVar3 * 4 + 4] + param_1[uVar3 * 4 + 5] * param_2[1] +
                    param_1[uVar3 * 4 + 7]) {
        return 0;
      }
      bVar2 = (char)uVar3 + 1;
      uVar3 = (uint)bVar2;
    } while (bVar2 < 4);
    return 1;
  }
  return 0;
}

// 00DE5710  FUN_00de5710  size=157  [callgraph]
undefined4 __thiscall FUN_00de5710(float *param_1,float *param_2,float param_3)

{
  uint uVar1;
  
  if (param_1[0x1d] - param_3 <=
      param_1[2] * param_2[2] + *param_2 * *param_1 + param_1[1] * param_2[1] + param_1[3]) {
    uVar1 = 0;
    param_1 = param_1 + 6;
    while( true ) {
      if (param_3 < param_2[2] * *param_1 + param_1[-2] * *param_2 + param_1[-1] * param_2[1] +
                    param_1[1]) break;
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 4;
      if (3 < uVar1) {
        return 1;
      }
    }
  }
  return 0;
}

// 00DE57B0  FUN_00de57b0  size=304  [callgraph]
undefined4 __thiscall FUN_00de57b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = ABS(param_1[2]) * param_2[6] + ABS(*param_1) * param_2[4] + ABS(param_1[1]) * param_2[5];
  fVar2 = param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_2 * *param_1 + param_1[3];
  if ((param_1[0x1d] - fVar1 <= fVar2) && (fVar2 <= fVar1 + param_1[0x1e])) {
    iVar3 = 0;
    param_1 = param_1 + 5;
    do {
      if (ABS(param_1[1]) * param_2[6] + ABS(*param_1) * param_2[5] + ABS(param_1[-1]) * param_2[4]
          < param_1[1] * param_2[2] + param_1[-1] * *param_2 + *param_1 * param_2[1] + param_1[2]) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < 4);
    return 1;
  }
  return 0;
}

// 00DE58E0  FUN_00de58e0  size=264  [callgraph]
undefined4 __thiscall FUN_00de58e0(float *param_1,float *param_2)

{
  int iVar1;
  
  if (param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_2 * *param_1 + param_1[3] <
      param_1[0x1d] -
      (ABS(param_1[2]) * param_2[6] + ABS(*param_1) * param_2[4] + ABS(param_1[1]) * param_2[5])) {
    return 0;
  }
  iVar1 = 0;
  param_1 = param_1 + 5;
  do {
    if (ABS(param_1[1]) * param_2[6] + ABS(param_1[-1]) * param_2[4] + ABS(*param_1) * param_2[5] <
        param_1[1] * param_2[2] + *param_1 * param_2[1] + *param_2 * param_1[-1] + param_1[2]) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return 1;
}

// 00DE59F0  FUN_00de59f0  size=163  [callgraph]
void __fastcall FUN_00de59f0(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)FUN_00fded30();
  *(float *)(param_1 + 0x6c) = (float)fVar2;
  fVar3 = (float10)FUN_00fdee60();
  *(float *)(param_1 + 0x70) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0x60);
  fVar4 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 100) = (float)fVar2 / (float)fVar4;
  *(float *)(param_1 + 0x68) = ((float)fVar3 * fVar1) / (float)fVar4;
  return;
}

// 00DE5AA0  FUN_00de5aa0  size=143  [callgraph]
void __fastcall FUN_00de5aa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    FUN_00f98aa0();
    FUN_00f98a90();
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    uVar2 = *(undefined4 *)(param_1 + 0x98);
    uVar1 = 0x3fe38e39;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    uVar2 = *(undefined4 *)(param_1 + 0x98);
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  FUN_00ddccc0(param_1 + 0x10,*(undefined4 *)(param_1 + 0x94),uVar1,uVar2,uVar3,0,0);
  D3DXMatrixInverse(param_1 + 0x50,0,param_1 + 0x10);
  return;
}

// 00DE5B30  FUN_00de5b30  size=37  [callgraph]
void __thiscall FUN_00de5b30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  D3DXMatrixInverse(param_1 + 0x50,0,(undefined4 *)(param_1 + 0x10));
  return;
}

// 00DE5B60  FUN_00de5b60  size=202  [callgraph]
void FUN_00de5b60(undefined4 *param_1,undefined4 param_2,int param_3,float param_4)

{
  int local_44;
  undefined1 local_40 [8];
  float fStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_44;
  local_2c = 0;
  local_28 = 0;
  local_24 = FUN_00f98a90();
  local_20 = FUN_00f98aa0();
  local_1c = 0;
  local_18 = 0x3f800000;
  thunk_FUN_00ddf0f0(param_1,param_2,&local_2c,local_44 + 0x10,param_3);
  if (((float)param_1[2] < 0.0) || (1.0 < (float)param_1[2])) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_4 = -0.1;
  }
  else {
    D3DXVec3TransformNormal(local_40,param_2,param_3);
    fStack_38 = *(float *)(param_3 + 0x38) + fStack_38;
    param_4 = fStack_38 * param_4;
  }
  param_1[3] = param_4;
  __security_check_cookie(local_14 ^ (uint)&local_44);
  return;
}

// 00DE5C30  FUN_00de5c30  size=210  [callgraph]
void FUN_00de5c30(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 float param_5)

{
  int local_44;
  undefined1 local_40 [8];
  float fStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_44;
  local_2c = 0;
  local_28 = 0;
  local_24 = FUN_00f98ab0(param_4);
  local_20 = FUN_00f98ac0(param_4);
  local_1c = 0;
  local_18 = 0x3f800000;
  thunk_FUN_00ddf0f0(param_1,param_2,&local_2c,local_44 + 0x10,param_3);
  if (((float)param_1[2] < 0.0) || (1.0 < (float)param_1[2])) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_5 = -0.1;
  }
  else {
    D3DXVec3TransformNormal(local_40,param_2,param_3);
    fStack_38 = *(float *)(param_3 + 0x38) + fStack_38;
    param_5 = fStack_38 * param_5;
  }
  param_1[3] = param_5;
  __security_check_cookie(local_14 ^ (uint)&local_44);
  return;
}

// 00DE5D10  FUN_00de5d10  size=136  [callgraph]
void __thiscall
FUN_00de5d10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 0x100) = *param_2;
  *(undefined4 *)(param_1 + 0x104) = param_2[1];
  *(undefined4 *)(param_1 + 0x108) = param_2[2];
  *(undefined4 *)(param_1 + 0x10c) = param_2[3];
  *(undefined4 *)(param_1 + 0x110) = *param_3;
  *(undefined4 *)(param_1 + 0x114) = param_3[1];
  *(undefined4 *)(param_1 + 0x118) = param_3[2];
  *(undefined4 *)(param_1 + 0x11c) = param_3[3];
  *(undefined4 *)(param_1 + 0x120) = *param_4;
  *(undefined4 *)(param_1 + 0x124) = param_4[1];
  *(undefined4 *)(param_1 + 0x128) = param_4[2];
  *(undefined4 *)(param_1 + 300) = param_4[3];
  FUN_00de5380();
  FUN_00de54e0();
  return;
}

// 00DE5DA0  FUN_00de5da0  size=185  [callgraph]
void __thiscall FUN_00de5da0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *puStack_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  *(undefined4 *)(param_1 + 0x100) = *param_2;
  *(undefined4 *)(param_1 + 0x104) = param_2[1];
  *(undefined4 *)(param_1 + 0x108) = param_2[2];
  *(undefined4 *)(param_1 + 0x10c) = param_2[3];
  *(undefined4 *)(param_1 + 0x130) = *param_3;
  *(undefined4 *)(param_1 + 0x134) = param_3[1];
  *(undefined4 *)(param_1 + 0x138) = param_3[2];
  *(undefined4 *)(param_1 + 0x13c) = param_3[3];
  *(undefined4 *)(param_1 + 0x144) = param_4;
  puStack_84 = (undefined1 *)0xde5e0b;
  FUN_00de5260();
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  FUN_00ddc1d0(local_60,(undefined4 *)(param_1 + 0x130));
  puStack_84 = local_60;
  D3DXVec3TransformNormal(param_1 + 0x120,&local_70);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE5E60  FUN_00de5e60  size=185  [callgraph]
void __thiscall FUN_00de5e60(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *puStack_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  *(undefined4 *)(param_1 + 0x110) = *param_2;
  *(undefined4 *)(param_1 + 0x114) = param_2[1];
  *(undefined4 *)(param_1 + 0x118) = param_2[2];
  *(undefined4 *)(param_1 + 0x11c) = param_2[3];
  *(undefined4 *)(param_1 + 0x130) = *param_3;
  *(undefined4 *)(param_1 + 0x134) = param_3[1];
  *(undefined4 *)(param_1 + 0x138) = param_3[2];
  *(undefined4 *)(param_1 + 0x13c) = param_3[3];
  *(undefined4 *)(param_1 + 0x144) = param_4;
  puStack_84 = (undefined1 *)0xde5ecb;
  FUN_00de51b0();
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  FUN_00ddc1d0(local_60,(undefined4 *)(param_1 + 0x130));
  puStack_84 = local_60;
  D3DXVec3TransformNormal(param_1 + 0x120,&local_70);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE5F20  FUN_00de5f20  size=58  [callgraph]
void __thiscall FUN_00de5f20(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x100) = *param_2;
  *(undefined4 *)(param_1 + 0x104) = param_2[1];
  *(undefined4 *)(param_1 + 0x108) = param_2[2];
  *(undefined4 *)(param_1 + 0x10c) = param_2[3];
  FUN_00de5380();
  FUN_00de54e0();
  return;
}

// 00DE5FC0  FUN_00de5fc0  size=58  [callgraph]
void __thiscall FUN_00de5fc0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x110) = *param_2;
  *(undefined4 *)(param_1 + 0x114) = param_2[1];
  *(undefined4 *)(param_1 + 0x118) = param_2[2];
  *(undefined4 *)(param_1 + 0x11c) = param_2[3];
  FUN_00de5380();
  FUN_00de54e0();
  return;
}

// 00DE6060  FUN_00de6060  size=47  [callgraph]
void __thiscall FUN_00de6060(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x120) = *param_2;
  *(undefined4 *)(param_1 + 0x124) = param_2[1];
  *(undefined4 *)(param_1 + 0x128) = param_2[2];
  *(undefined4 *)(param_1 + 300) = param_2[3];
  FUN_00de5380();
  return;
}

// 00DE6090  FUN_00de6090  size=142  [callgraph]
void __thiscall FUN_00de6090(int param_1,undefined4 *param_2)

{
  undefined1 *puStack_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  *(undefined4 *)(param_1 + 0x130) = *param_2;
  *(undefined4 *)(param_1 + 0x134) = param_2[1];
  *(undefined4 *)(param_1 + 0x138) = param_2[2];
  *(undefined4 *)(param_1 + 0x13c) = param_2[3];
  puStack_84 = (undefined1 *)0xde60d0;
  FUN_00de5260();
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  FUN_00ddc1d0(local_60,param_1 + 0x130);
  puStack_84 = local_60;
  D3DXVec3TransformNormal(param_1 + 0x120,&local_70);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE6120  FUN_00de6120  size=129  [callgraph]
void __thiscall FUN_00de6120(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puStack_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  puStack_84 = param_2;
  iVar1 = param_1 + 0x130;
  FUN_00ddeec0(iVar1,iVar1);
  puStack_84 = (undefined1 *)0xde6153;
  FUN_00de5260();
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  FUN_00ddc1d0(local_60,iVar1);
  puStack_84 = local_60;
  D3DXVec3TransformNormal(param_1 + 0x120,&local_70);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE61B0  FUN_00de61b0  size=142  [callgraph]
void __thiscall FUN_00de61b0(int param_1,undefined4 *param_2)

{
  undefined1 *puStack_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  *(undefined4 *)(param_1 + 0x130) = *param_2;
  *(undefined4 *)(param_1 + 0x134) = param_2[1];
  *(undefined4 *)(param_1 + 0x138) = param_2[2];
  *(undefined4 *)(param_1 + 0x13c) = param_2[3];
  puStack_84 = (undefined1 *)0xde61f0;
  FUN_00de51b0();
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  FUN_00ddc1d0(local_60,param_1 + 0x130);
  puStack_84 = local_60;
  D3DXVec3TransformNormal(param_1 + 0x120,&local_70);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE6240  FUN_00de6240  size=129  [callgraph]
void __thiscall FUN_00de6240(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puStack_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  puStack_84 = param_2;
  iVar1 = param_1 + 0x130;
  FUN_00ddeec0(iVar1,iVar1);
  puStack_84 = (undefined1 *)0xde6273;
  FUN_00de51b0();
  puStack_84 = *(undefined1 **)(param_1 + 0x140);
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  FUN_00ddc1d0(local_60,iVar1);
  puStack_84 = local_60;
  D3DXVec3TransformNormal(param_1 + 0x120,&local_70);
  __security_check_cookie(uStack_20 ^ (uint)&puStack_84);
  return;
}

// 00DE6390  FUN_00de6390  size=118  [callgraph]
void __thiscall FUN_00de6390(int param_1,float param_2,float param_3,float param_4)

{
  param_2 = param_2 + *(float *)(param_1 + 0x144);
  *(float *)(param_1 + 0x144) = param_2;
  if ((0.0 <= param_3) && (param_2 < param_3)) {
    *(float *)(param_1 + 0x144) = param_3;
  }
  if ((0.0 <= param_4) && (param_4 < *(float *)(param_1 + 0x144))) {
    *(float *)(param_1 + 0x144) = param_4;
    FUN_00de51b0();
    return;
  }
  FUN_00de51b0();
  return;
}

// 00DE6410  FUN_00de6410  size=67  [callgraph]
void __fastcall FUN_00de6410(void *param_1)

{
  void *_Dst;
  
  thunk_FUN_00de01a0(param_1,(int)param_1 + 0x100,(int)param_1 + 0x110,(int)param_1 + 0x120);
  _Dst = (void *)((int)param_1 + 0x40);
  FID_conflict__memcpy(_Dst,param_1,0x40);
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  D3DXMatrixTranspose(_Dst,_Dst);
  return;
}

// 00DE6460  FUN_00de6460  size=1728  [callgraph]
void __thiscall FUN_00de6460(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_40 = *param_3 - *param_2;
  local_3c = param_3[1] - param_2[1];
  local_38 = param_3[2] - param_2[2];
  local_34 = param_3[3] - param_2[3];
  fVar1 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(param_1,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
  }
  param_1[3] = -(param_2[2] * param_1[2] + param_2[1] * param_1[1] + *param_2 * *param_1);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  local_24 = param_4[3];
  local_14 = param_4[3];
  if (0.99 < ABS(fVar3 * param_1[2] + fVar2 * param_1[1] + fVar1 * *param_1)) {
    fVar1 = *param_4;
    fVar2 = param_4[2];
    fVar3 = param_4[1];
    local_24 = local_34;
  }
  local_20 = fVar2 * param_1[2] - fVar3 * param_1[1];
  local_1c = fVar3 * *param_1 - param_1[2] * fVar1;
  local_18 = fVar1 * param_1[1] - *param_1 * fVar2;
  local_40 = local_18 * param_1[1] - local_1c * param_1[2];
  local_3c = local_20 * param_1[2] - *param_1 * local_18;
  local_38 = local_1c * *param_1 - param_1[1] * local_20;
  fVar1 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  fVar1 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
  }
  fVar1 = param_1[0x19];
  fVar2 = -param_1[0x1a];
  param_1[4] = fVar2 * *param_1 + fVar1 * local_20;
  param_1[5] = fVar2 * param_1[1] + local_1c * fVar1;
  param_1[6] = local_18 * fVar1 + param_1[2] * fVar2;
  param_1[7] = local_14 * fVar1 + fVar2 * param_1[3];
  fVar1 = param_1[0x19];
  fVar2 = -param_1[0x1a];
  param_1[8] = fVar2 * *param_1 - fVar1 * local_20;
  param_1[9] = fVar2 * param_1[1] - fVar1 * local_1c;
  param_1[10] = param_1[2] * fVar2 - local_18 * fVar1;
  param_1[0xb] = fVar2 * param_1[3] - local_14 * fVar1;
  fVar1 = param_1[0x1b];
  fVar2 = -param_1[0x1c];
  param_1[0xc] = fVar2 * *param_1 + local_30 * fVar1;
  param_1[0xd] = fVar2 * param_1[1] + local_2c * fVar1;
  param_1[0xe] = param_1[2] * fVar2 + local_28 * fVar1;
  param_1[0xf] = fVar2 * param_1[3] + local_24 * fVar1;
  fVar1 = param_1[0x1b];
  fVar2 = -param_1[0x1c];
  param_1[0x10] = fVar2 * *param_1 - fVar1 * local_30;
  param_1[0x11] = fVar2 * param_1[1] - fVar1 * local_2c;
  param_1[0x12] = fVar2 * param_1[2] - local_28 * fVar1;
  param_1[0x13] = fVar2 * param_1[3] - fVar1 * local_24;
  param_1[7] = -(param_1[6] * param_2[2] + *param_2 * param_1[4] + param_1[5] * param_2[1]);
  param_1[0xb] = -(param_1[10] * param_2[2] + *param_2 * param_1[8] + param_1[9] * param_2[1]);
  param_1[0xf] = -(param_1[0xe] * param_2[2] + *param_2 * param_1[0xc] + param_1[0xd] * param_2[1]);
  param_1[0x13] =
       -(param_1[0x12] * param_2[2] + *param_2 * param_1[0x10] + param_1[0x11] * param_2[1]);
  param_1[0x14] = *param_2;
  param_1[0x15] = param_2[1];
  param_1[0x16] = param_2[2];
  param_1[0x17] = param_2[3];
  return;
}

// 00DE6B20  FUN_00de6b20  size=1222  [callgraph]
void __thiscall
FUN_00de6b20(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6
            ,float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_40 = *param_3 - *param_2;
  local_3c = param_3[1] - param_2[1];
  local_38 = param_3[2] - param_2[2];
  local_34 = param_3[3] - param_2[3];
  fVar1 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(param_1,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
  }
  param_1[3] = -(param_2[2] * param_1[2] + param_2[1] * param_1[1] + *param_2 * *param_1);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  local_24 = param_4[3];
  local_14 = param_4[3];
  if (0.99 < ABS(fVar2 * param_1[1] + fVar1 * *param_1 + fVar3 * param_1[2])) {
    fVar1 = *param_4;
    fVar2 = param_4[2];
    fVar3 = param_4[1];
    local_24 = local_34;
  }
  local_20 = fVar3 * param_1[1] - param_1[2] * fVar2;
  local_1c = param_1[2] * fVar1 - *param_1 * fVar3;
  local_18 = *param_1 * fVar2 - fVar1 * param_1[1];
  local_40 = local_1c * param_1[2] - local_18 * param_1[1];
  local_3c = *param_1 * local_18 - local_20 * param_1[2];
  local_38 = param_1[1] * local_20 - local_1c * *param_1;
  fVar1 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  fVar1 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
  }
  param_1[4] = local_20;
  param_1[5] = local_1c;
  param_1[6] = local_18;
  param_1[7] = local_14;
  param_1[8] = local_30;
  param_1[9] = local_2c;
  param_1[10] = local_28;
  param_1[0xb] = local_24;
  param_1[0xc] = local_20 * -1.0;
  param_1[0xd] = local_1c * -1.0;
  param_1[0xe] = local_18 * -1.0;
  param_1[0xf] = local_14 * -1.0;
  param_1[0x10] = local_30 * -1.0;
  param_1[0x11] = local_2c * -1.0;
  param_1[0x12] = local_28 * -1.0;
  param_1[0x13] = local_24 * -1.0;
  param_1[7] = -(param_1[6] * param_2[2] + param_1[4] * *param_2 + param_1[5] * param_2[1]) -
               param_6;
  param_1[0xb] = -(param_1[10] * param_2[2] + param_1[8] * *param_2 + param_1[9] * param_2[1]) -
                 param_8;
  param_1[0xf] = param_5 - (param_1[0xe] * param_2[2] +
                           param_1[0xc] * *param_2 + param_1[0xd] * param_2[1]);
  param_1[0x13] =
       param_7 - (param_1[0x12] * param_2[2] + *param_2 * param_1[0x10] + param_1[0x11] * param_2[1]
                 );
  param_1[0x1d] = param_9;
  param_1[0x1e] = param_10;
  param_1[0x14] = *param_2;
  param_1[0x15] = param_2[1];
  param_1[0x16] = param_2[2];
  param_1[0x17] = param_2[3];
  return;
}

// 00DE6FF0  FUN_00de6ff0  size=1854  [callgraph]
undefined4 __thiscall FUN_00de6ff0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  uint uVar21;
  float10 fVar22;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 local_80 [84];
  undefined1 auStack_2c [40];
  
  D3DXVec3TransformNormal(local_80,param_2,param_3);
  fStack_8c = param_3[0xc] + fStack_8c;
  fStack_88 = param_3[0xd] + fStack_88;
  fStack_84 = param_3[0xe] + fStack_84;
  D3DXVec3TransformNormal(auStack_2c,(float *)(param_2 + 0x10),param_3);
  fVar22 = (float10)FUN_00fdef70();
  iVar20 = FUN_00de5710(&fStack_98,(float)fVar22);
  if (iVar20 == 0) {
    return 0;
  }
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar4 = fVar1 * *param_3 * 2.0;
  fVar5 = param_3[1] * fVar1 * 2.0;
  fVar6 = fVar1 * param_3[2] * 2.0;
  fVar7 = fVar2 * param_3[4] * 2.0;
  fVar8 = param_3[5] * fVar2 * 2.0;
  fVar9 = fVar2 * param_3[6] * 2.0;
  fVar12 = ((fStack_98 - fVar1 * *param_3) - fVar2 * param_3[4]) - fVar3 * param_3[8];
  fVar11 = ((fStack_94 - param_3[1] * fVar1) - param_3[5] * fVar2) - param_3[9] * fVar3;
  fVar10 = ((fStack_90 - fVar1 * param_3[2]) - fVar2 * param_3[6]) - fVar3 * param_3[10];
  fVar13 = fVar12 + fVar3 * param_3[8] * 2.0;
  fVar15 = fVar11 + param_3[9] * fVar3 * 2.0;
  fVar17 = fVar10 + fVar3 * param_3[10] * 2.0;
  fVar18 = fVar7 + fVar12;
  fVar14 = fVar8 + fVar11;
  fVar16 = fVar9 + fVar10;
  fVar7 = fVar13 + fVar7;
  fVar8 = fVar8 + fVar15;
  fVar9 = fVar9 + fVar17;
  fVar19 = param_1[0x1d] - param_1[3];
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  if (((((fVar19 <= fVar3 * fVar10 + fVar1 * fVar12 + fVar2 * fVar11) ||
        (fVar19 <= fVar3 * fVar17 + fVar1 * fVar13 + fVar2 * fVar15)) ||
       (fVar19 <= fVar3 * fVar16 + fVar1 * fVar18 + fVar2 * fVar14)) ||
      ((fVar19 <= fVar3 * fVar9 + fVar1 * fVar7 + fVar2 * fVar8 ||
       (fVar19 <= fVar3 * (fVar6 + fVar10) + fVar1 * (fVar4 + fVar12) + fVar2 * (fVar5 + fVar11)))))
     || ((fVar19 <= fVar3 * (fVar17 + fVar6) + fVar1 * (fVar13 + fVar4) + fVar2 * (fVar15 + fVar5)
         || ((fVar19 <= fVar3 * (fVar16 + fVar6) +
                        (fVar18 + fVar4) * fVar1 + fVar2 * (fVar14 + fVar5) ||
             (fVar19 <= fVar3 * (fVar6 + fVar9) + (fVar5 + fVar8) * fVar2 + (fVar7 + fVar4) * fVar1)
             ))))) {
    uVar21 = 0;
    param_1 = param_1 + 6;
    while( true ) {
      fVar19 = -param_1[1];
      fVar1 = param_1[-2];
      fVar2 = param_1[-1];
      fVar3 = *param_1;
      if ((((fVar19 < fVar3 * fVar10 + fVar1 * fVar12 + fVar2 * fVar11) &&
           (fVar19 < fVar3 * fVar17 + fVar1 * fVar13 + fVar2 * fVar15)) &&
          (fVar19 < fVar3 * fVar16 + fVar1 * fVar18 + fVar2 * fVar14)) &&
         (((fVar19 < fVar3 * fVar9 + fVar1 * fVar7 + fVar2 * fVar8 &&
           (fVar19 < fVar3 * (fVar6 + fVar10) + fVar1 * (fVar4 + fVar12) + fVar2 * (fVar5 + fVar11))
           ) && ((fVar19 < fVar3 * (fVar17 + fVar6) +
                           fVar1 * (fVar13 + fVar4) + fVar2 * (fVar15 + fVar5) &&
                 ((fVar19 < fVar3 * (fVar16 + fVar6) +
                            fVar1 * (fVar18 + fVar4) + fVar2 * (fVar14 + fVar5) &&
                  (fVar19 < fVar3 * (fVar6 + fVar9) +
                            (fVar5 + fVar8) * fVar2 + (fVar7 + fVar4) * fVar1)))))))) break;
      uVar21 = uVar21 + 1;
      param_1 = param_1 + 4;
      if (3 < uVar21) {
        return 1;
      }
    }
  }
  return 0;
}

// 00DE7820  FUN_00de7820  size=82  [callgraph]
float10 __thiscall FUN_00de7820(int param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined1 local_20 [28];
  
  D3DXVec3TransformNormal(local_20,param_1 + 0x10,param_2);
  fVar1 = (float10)FUN_00fdef70();
  return (float10)(float)fVar1;
}

// 00DE7910  FUN_00de7910  size=41  [callgraph]
void __fastcall FUN_00de7910(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_01297c59(param_1[1]);
    param_1[1] = 0;
  }
  param_1[4] = 0xffffffff;
  *param_1 = 0;
  return;
}

// 00DE7950  FUN_00de7950  size=4  [callgraph]
undefined4 __fastcall FUN_00de7950(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 00DE7C30  FUN_00de7c30  size=161  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00de7c30(char *param_1)

{
  char *_Str;
  int iVar1;
  char *pcVar2;
  
  DAT_01dd4130 = DAT_01dd4130 + 1;
  if (0xff < DAT_01dd4130) {
    DAT_01dd4130 = 0;
  }
  iVar1 = DAT_01dd4130 * 0x38;
  pcVar2 = _strrchr(param_1,0x2f);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strrchr(param_1,0x5c), pcVar2 != (char *)0x0)) {
    if (pcVar2 != param_1) {
      _Str = pcVar2 + -1;
      pcVar2 = _strrchr(_Str,0x2f);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = _strrchr(_Str,0x5c);
      }
    }
    if (pcVar2 != (char *)0x0) goto LAB_00de7ca6;
  }
  pcVar2 = param_1;
LAB_00de7ca6:
  if ((*pcVar2 == '/') || (*pcVar2 == '\\')) {
    pcVar2 = pcVar2 + 1;
  }
  _sprintf_s(&DAT_01dd0908 + iVar1,0x38,"%s",pcVar2);
  _DAT_01dd4134 = 0x3c;
  return;
}

// 00DE7E50  FUN_00de7e50  size=174  [callgraph]
bool __thiscall FUN_00de7e50(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x244) != -1) {
    return false;
  }
  if (param_1 != param_2) {
    _strcpy_s(param_1,0x104,param_2);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_1 + 1);
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        if (param_1[uVar6] == '/') {
          param_1[uVar6] = '\\';
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    if (param_1[uVar3 - 1] == '\\') {
      _strcat_s(param_1,0x104,"*");
    }
  }
  pvVar4 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_1 + 0x104));
  *(HANDLE *)(param_1 + 0x244) = pvVar4;
  *(uint *)(param_1 + 0x248) = (uint)(pvVar4 != (HANDLE)0xffffffff);
  if ((pvVar4 != (HANDLE)0xffffffff) != 0) {
    return true;
  }
  DVar5 = GetLastError();
  return DVar5 == 2;
}

// 00DE7F00  FUN_00de7f00  size=59  [callgraph]
uint __fastcall FUN_00de7f00(int param_1)

{
  BOOL BVar1;
  
  if (*(HANDLE *)(param_1 + 0x244) == (HANDLE)0xffffffff) {
    FUN_00dd56a0(&DAT_016c4ffc);
    return 0;
  }
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x244),(LPWIN32_FIND_DATAA)(param_1 + 0x104));
  *(uint *)(param_1 + 0x248) = (uint)(BVar1 != 0);
  return (uint)(BVar1 != 0);
}

// 00DE7F40  FUN_00de7f40  size=43  [callgraph]
void __fastcall FUN_00de7f40(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x244) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x244));
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x248) = 0;
  return;
}

// 00DE7F70  FUN_00de7f70  size=51  [callgraph]
void __fastcall FUN_00de7f70(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x244) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x244));
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x248) = 0;
  FUN_00de7e50(param_1);
  return;
}

// 00DE8100  FUN_00de8100  size=85  [callgraph]
void __fastcall FUN_00de8100(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  if (param_1[3] != 0) {
    FUN_00dd48d0(param_1[3],0);
  }
  if (param_1[6] != 0) {
    FUN_00dd48d0(param_1[6],0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00DE81C0  FUN_00de81c0  size=78  [callgraph]
void __fastcall FUN_00de81c0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  if (param_1[3] != 0) {
    FUN_00dd48d0(param_1[3],0);
  }
  if (param_1[6] != 0) {
    FUN_00dd48d0(param_1[6],0);
  }
  *param_1 = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  return;
}

// 00DE8210  FUN_00de8210  size=38  [callgraph]
void __fastcall FUN_00de8210(int param_1)

{
  FUN_00dd5650("Hw:cDvdFst Dir:%d/%d File:%d/%d Str:%d/%d",*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x1c));
  return;
}

// 00DE8260  FUN_00de8260  size=243  [callgraph]
undefined4 FUN_00de8260(char *param_1,char *param_2,int param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  
  if (((param_1 == (char *)0x0) || (param_3 == 0)) || (param_4 == 0)) {
    return 0;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      pcVar2 = *(char **)(param_3 + uVar7 * 4);
      pcVar5 = pcVar2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (-1 - (int)(pcVar2 + 1));
      pcVar6 = pcVar3 + (-1 - (int)(param_2 + 1));
      if ((int)(pcVar3 + (-1 - (int)(param_2 + 1))) <= (int)pcVar5) {
        for (; -1 < (int)pcVar6; pcVar6 = pcVar6 + -1) {
          if (pcVar2[(int)pcVar5] != param_2[(int)pcVar6]) {
            if (-1 < (int)pcVar6) goto LAB_00de8336;
            break;
          }
          pcVar5 = pcVar5 + -1;
        }
        pcVar6 = pcVar4 + (-1 - (int)(param_1 + 1));
        if ((int)pcVar5 <= (int)pcVar6) {
          for (; -1 < (int)pcVar5; pcVar5 = pcVar5 + -1) {
            cVar1 = pcVar2[(int)pcVar5];
            if ((cVar1 == '\\') || (cVar1 == '/')) {
              if (param_1[(int)pcVar6] != '\\') {
                bVar8 = param_1[(int)pcVar6] == '/';
                goto LAB_00de8319;
              }
            }
            else {
              bVar8 = cVar1 == param_1[(int)pcVar6];
LAB_00de8319:
              if (!bVar8) {
                if (-1 < (int)pcVar5) goto LAB_00de8336;
                break;
              }
            }
            pcVar6 = pcVar6 + -1;
          }
          if ((((int)pcVar6 < 0) || (param_1[(int)pcVar6] == '\\')) || (param_1[(int)pcVar6] == '/')
             ) {
            return 1;
          }
        }
      }
LAB_00de8336:
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  return 0;
}

// 00DE8360  FUN_00de8360  size=203  [callgraph]
void __thiscall FUN_00de8360(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  _strcpy_s(local_108,0x104,param_2);
  pcVar3 = local_108;
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  if (pcVar4[-1] != '\\') {
    _strcat_s(local_108,0x104,"\\");
  }
  pcVar3 = local_108;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(param_3 + 0x20);
  if (*(char **)(param_3 + 0x1c) < pcVar3 + iVar2 + (1 - (int)(local_108 + 1))) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)(*(int *)(param_3 + 0x18) + iVar2);
    _strcpy_s(pcVar4,(int)*(char **)(param_3 + 0x1c) - iVar2,local_108);
    *(int *)(param_3 + 0x20) = (int)(pcVar3 + *(int *)(param_3 + 0x20) + (1 - (int)(local_108 + 1)))
    ;
  }
  *param_1 = pcVar4;
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DE84A0  FUN_00de84a0  size=112  [callgraph]
bool __thiscall FUN_00de84a0(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *_Dst;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(param_3 + 0x20);
  if (*(char **)(param_3 + 0x1c) < pcVar3 + iVar2 + (1 - (int)(param_2 + 1))) {
    *param_1 = 0;
    return false;
  }
  _Dst = (char *)(*(int *)(param_3 + 0x18) + iVar2);
  _strcpy_s(_Dst,(int)*(char **)(param_3 + 0x1c) - iVar2,param_2);
  *(int *)(param_3 + 0x20) = (int)(pcVar3 + *(int *)(param_3 + 0x20) + (1 - (int)(param_2 + 1)));
  *param_1 = _Dst;
  return _Dst != (char *)0x0;
}

// 00DE8560  FUN_00de8560  size=39  [callgraph]
void FUN_00de8560(undefined4 param_1,int param_2)

{
  DAT_01dd414c = FUN_00dd29b0(param_2 << 4,0x20,0,0);
  DAT_01dd4150 = param_2;
  return;
}

// 00DE8610  FUN_00de8610  size=23  [callgraph]
undefined4 __fastcall FUN_00de8610(undefined4 *param_1)

{
  switch(*param_1) {
  default:
    return 1;
  case 1:
  case 2:
  case 4:
    return 0;
  }
}

// 00DE8800  FUN_00de8800  size=10  [callgraph]
void FUN_00de8800(undefined4 param_1)

{
  DAT_018cde0c = param_1;
  return;
}

// 00DE8810  FUN_00de8810  size=10  [callgraph]
void FUN_00de8810(undefined4 param_1)

{
  DAT_018cde10 = param_1;
  return;
}

// 00DE8820  FUN_00de8820  size=10  [callgraph]
void FUN_00de8820(undefined4 param_1)

{
  DAT_018cde14 = param_1;
  return;
}

// 00DE8850  FUN_00de8850  size=10  [callgraph]
void FUN_00de8850(undefined4 param_1)

{
  DAT_018cde18 = param_1;
  return;
}

// 00DE88B0  FUN_00de88b0  size=6  [callgraph]
undefined * FUN_00de88b0(void)

{
  return &DAT_01dd4158;
}

// 00DE88C0  FUN_00de88c0  size=6  [callgraph]
undefined4 FUN_00de88c0(void)

{
  return DAT_01dd4154;
}

// 00DE88D0  FUN_00de88d0  size=231  [callgraph]
void FUN_00de88d0(char *param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char local_308 [4];
  char local_304 [256];
  char local_204 [256];
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_308;
  switch(param_4) {
  case 1:
    puVar1 = &DAT_0165c260;
    break;
  case 2:
    puVar1 = &DAT_016b6e74;
    break;
  case 3:
    puVar1 = &DAT_016b6e70;
    break;
  case 4:
    puVar1 = &DAT_016b6e6c;
    break;
  case 5:
    puVar1 = &DAT_016b6e68;
    break;
  case 6:
    puVar1 = &DAT_016b6e64;
    break;
  case 7:
    puVar1 = &DAT_016b6e60;
    break;
  default:
    puVar1 = &DAT_016416fa;
  }
  __splitpath_s(param_3,local_308,3,local_104,0x100,local_204,0x100,local_304,0x100);
  _sprintf_s(param_1,param_2,"%s%s%s%s%s",local_308,local_104,local_204,puVar1,local_304);
  __security_check_cookie(local_4 ^ (uint)local_308);
  return;
}

// 00DE8AB0  FUN_00de8ab0  size=22  [callgraph]
undefined * FUN_00de8ab0(void)

{
  return &DAT_01dd0908 + DAT_01dd4130 * 0x38;
}

// 00DE8BD0  FUN_00de8bd0  size=6  [callgraph]
undefined4 * FUN_00de8bd0(void)

{
  return &DAT_018cde24;
}

// 00DE8C00  FUN_00de8c00  size=60  [callgraph]
void FUN_00de8c00(void)

{
  int *piVar1;
  
  piVar1 = &DAT_01dd4624;
  do {
    if (piVar1[-1] != 0) {
      if (*piVar1 != 0) {
        FUN_01297c59(*piVar1);
        *piVar1 = 0;
      }
      piVar1[-1] = 0;
      piVar1[3] = -1;
    }
    piVar1 = piVar1 + 5;
  } while ((int)piVar1 < 0x1dd4804);
  return;
}

// 00DE8CD0  FUN_00de8cd0  size=41  [callgraph]
void __fastcall FUN_00de8cd0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_01297c59(param_1[1]);
    param_1[1] = 0;
  }
  param_1[4] = 0xffffffff;
  *param_1 = 0;
  return;
}

// 00DE8D00  FUN_00de8d00  size=81  [callgraph]
void __fastcall FUN_00de8d00(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[3] == 1) {
    iVar1 = FUN_01297d56(param_1[2],param_1 + 3);
    if ((iVar1 != 0) || ((iVar1 = param_1[3], iVar1 != 1 && (iVar1 != 2)))) {
      if (param_1[1] != 0) {
        FUN_01297c59(param_1[1]);
        param_1[1] = 0;
      }
      *param_1 = 0;
      param_1[4] = 0xffffffff;
    }
  }
  return;
}

// 00DE8E40  FUN_00de8e40  size=73  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00de8e40(void)

{
  DAT_01dd4124 = 0;
  DAT_01dd4128 = 0;
  DAT_01dd412c = 0;
  _memset(&DAT_01dd0908,0,0x3800);
  DAT_01dd4130 = 0;
  _DAT_01dd4134 = 0;
  _memset(&DAT_01dd0888,0,0x80);
  return 1;
}

// 00DE8E90  FUN_00de8e90  size=69  [callgraph]
void FUN_00de8e90(int param_1)

{
  if (DAT_01dd4128 == 0) {
    DAT_01dd4128 = param_1;
  }
  if (DAT_01dd412c != 0) {
    *(int *)(DAT_01dd412c + 0x70) = param_1;
  }
  *(int *)(param_1 + 0x6c) = DAT_01dd412c;
  *(undefined4 *)(param_1 + 0x70) = 0;
  DAT_01dd412c = param_1;
  if (DAT_018cde08 < *(int *)(param_1 + 0x5c)) {
    DAT_018cde08 = *(int *)(param_1 + 0x5c);
  }
  return;
}

// 00DE8EE0  FUN_00de8ee0  size=132  [callgraph]
void FUN_00de8ee0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_01dd4128 == param_1) {
    DAT_01dd4128 = *(int *)(param_1 + 0x70);
  }
  if (DAT_01dd412c == param_1) {
    DAT_01dd412c = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x70) = *(undefined4 *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (DAT_018cde08 <= *(int *)(param_1 + 0x5c)) {
    iVar3 = -1;
    DAT_018cde08 = -1;
    for (iVar2 = DAT_01dd4128; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x70)) {
      iVar1 = *(int *)(iVar2 + 0x5c);
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
        DAT_018cde08 = iVar1;
      }
    }
  }
  return;
}

// 00DE8F70  FUN_00de8f70  size=85  [callgraph]
undefined4 FUN_00de8f70(int param_1)

{
  if (((DAT_01dd4118 == 0) && (DAT_01dd411c == 0)) && (DAT_01dd4120 == 0)) {
    DAT_01dd4124 = 0;
    return 1;
  }
  if (((DAT_01dd4124 == 0) || (DAT_01dd4124 == param_1)) &&
     (DAT_018cde08 <= *(int *)(param_1 + 0x5c))) {
    DAT_01dd4124 = param_1;
    return 1;
  }
  return 0;
}

// 00DE8FD0  FUN_00de8fd0  size=43  [callgraph]
void __fastcall FUN_00de8fd0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x244) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x244));
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x248) = 0;
  return;
}

// 00DE9120  FUN_00de9120  size=390  [callgraph]
void __fastcall FUN_00de9120(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_4;
  
  puVar1 = (undefined4 *)(param_1 + 0x9c);
  piVar2 = (int *)(param_1 + 0xe4);
  local_4 = 3;
  do {
    if (piVar2[-3] != 0) {
      FUN_00dd48d0(piVar2[-3],0);
    }
    if (*piVar2 != 0) {
      FUN_00dd48d0(*piVar2,0);
    }
    if (piVar2[3] != 0) {
      FUN_00dd48d0(piVar2[3],0);
    }
    piVar2[-3] = 0;
    piVar2[-2] = 0;
    piVar2[-1] = 0;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *puVar1 = 0;
    piVar2 = piVar2 + 9;
    puVar1 = puVar1 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x44),0);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x50),0);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x5c),0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x84),0);
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x90),0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

// 00DE92D0  FUN_00de92d0  size=85  [callgraph]
void __fastcall FUN_00de92d0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd48d0(*param_1,0);
  }
  if (param_1[3] != 0) {
    FUN_00dd48d0(param_1[3],0);
  }
  if (param_1[6] != 0) {
    FUN_00dd48d0(param_1[6],0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00DE9330  FUN_00de9330  size=146  [callgraph]
undefined4 __fastcall FUN_00de9330(int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 0) && (param_1[3] == 0)) && (param_1[6] == 0)) {
    iVar1 = FUN_00dd29b0(param_1[1] << 4,0x20,0,0);
    *param_1 = iVar1;
    param_1[2] = 0;
    iVar1 = FUN_00dd29b0(param_1[4] * 0xc,0x20,0,0);
    param_1[3] = iVar1;
    param_1[5] = 0;
    iVar1 = FUN_00dd29b0(param_1[7],0x20,0,0);
    param_1[6] = iVar1;
    param_1[8] = 0;
    if (((*param_1 != 0) && (param_1[3] != 0)) && (iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

// 00DE93D0  FUN_00de93d0  size=40  [callgraph]
undefined4 * __fastcall FUN_00de93d0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1[2];
  if (uVar1 < (uint)param_1[1]) {
    puVar2 = (undefined4 *)(uVar1 * 0x10 + *param_1);
    param_1[2] = uVar1 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

// 00DE9400  FUN_00de9400  size=41  [callgraph]
undefined4 * __fastcall FUN_00de9400(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar2 * 0xc);
    *(uint *)(param_1 + 0x14) = uVar2 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// 00DE9430  FUN_00de9430  size=832  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00de9430(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *local_360;
  int local_35c;
  undefined4 local_358;
  _WIN32_FIND_DATAA local_250;
  HANDLE local_110;
  uint local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_360;
  local_358 = param_4;
  local_360 = param_1;
  if (param_2 == (char *)0x0) {
    _strcpy_s(local_108,0x104,(char *)*param_1);
  }
  else {
    _strcpy_s(local_108,0x104,param_2);
    _strcat_s(local_108,0x104,(char *)*param_1);
  }
  local_110 = (HANDLE)0xffffffff;
  local_10c = 0;
  iVar1 = FUN_00de7e50(local_108);
  if (iVar1 == 0) {
LAB_00de973f:
    if (local_110 != (HANDLE)0xffffffff) {
      FindClose(local_110);
      local_110 = (HANDLE)0xffffffff;
    }
    local_10c = 0;
    if (local_110 != (HANDLE)0xffffffff) {
      FindClose(local_110);
    }
  }
  else {
    iVar1 = 0;
    local_35c = 0;
    while (local_10c != 0) {
      if ((((local_10c != 0) && (iVar2 = __stricmp(local_250.cFileName,"."), iVar2 != 0)) &&
          (local_10c != 0)) &&
         (((iVar2 = __stricmp(local_250.cFileName,".."), iVar2 != 0 && (local_10c != 0)) &&
          ((iVar2 = __stricmp(local_250.cFileName,".svn"), iVar2 != 0 && (local_10c != 0)))))) {
        if ((local_250.dwFileAttributes >> 4 & 1) == 0) {
          if ((~(local_250.dwFileAttributes >> 4) & 1) != 0) {
            iVar2 = FUN_00de9400();
            if ((iVar2 == 0) || (iVar3 = FUN_00de84a0(local_250.cFileName,param_3), iVar3 == 0))
            goto LAB_00de973f;
            if ((local_10c != 0) && (local_250.nFileSizeLow != 0)) {
              *(DWORD *)(iVar2 + 8) = local_250.nFileSizeLow;
              if (iVar1 == 0) {
                local_360[3] = iVar2;
              }
              else {
                *(int *)(iVar1 + 4) = iVar2;
              }
              _DAT_01dd4140 = _DAT_01dd4140 + 1;
              iVar1 = iVar2;
            }
          }
        }
        else {
          iVar2 = FUN_00de8260(local_108,local_250.cFileName,local_358,param_5);
          if (iVar2 == 0) {
            iVar2 = FUN_00de93d0();
            if (((iVar2 == 0) || (iVar3 = FUN_00de8360(local_250.cFileName,param_3), iVar3 == 0)) ||
               (iVar3 = FUN_00de9430(local_108,param_3,local_358,param_5), iVar3 == 0))
            goto LAB_00de973f;
            if (local_35c == 0) {
              local_360[2] = iVar2;
              _DAT_01dd413c = _DAT_01dd413c + 1;
              local_35c = iVar2;
            }
            else {
              *(int *)(local_35c + 4) = iVar2;
              _DAT_01dd413c = _DAT_01dd413c + 1;
              local_35c = iVar2;
            }
          }
        }
      }
      if (local_110 == (HANDLE)0xffffffff) {
        FUN_00dd56a0(&DAT_016c4ffc);
      }
      else {
        BVar4 = FindNextFileA(local_110,&local_250);
        local_10c = (uint)(BVar4 != 0);
      }
    }
    if (local_110 != (HANDLE)0xffffffff) {
      FindClose(local_110);
      local_110 = (HANDLE)0xffffffff;
    }
    local_10c = 0;
    if (local_110 != (HANDLE)0xffffffff) {
      FindClose(local_110);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_360);
  return;
}

// 00DE9780  FUN_00de9780  size=138  [callgraph]
int __thiscall FUN_00de9780(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00fdc7b0(param_2,0x5c);
  if (iVar1 == 0) {
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    if (puVar3 != (undefined4 *)0x0) {
      do {
        iVar1 = __stricmp((char *)*puVar3,param_2);
        if (iVar1 == 0) {
          return puVar3[2];
        }
        puVar3 = (undefined4 *)puVar3[1];
      } while (puVar3 != (undefined4 *)0x0);
      return 0;
    }
  }
  else {
    for (puVar3 = *(undefined4 **)(param_1 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      iVar2 = __strnicmp((char *)*puVar3,param_2,(iVar1 - (int)param_2) + 1);
      if ((iVar2 == 0) && (iVar2 = FUN_00de9780(iVar1 + 1), iVar2 != 0)) {
        return iVar2;
      }
    }
  }
  return 0;
}

// 00DE9810  FUN_00de9810  size=70  [callgraph]
longlong __fastcall FUN_00de9810(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    lVar3 = FUN_00de9810();
    lVar2 = lVar3 + lVar2;
  }
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) +
                     (uint)CARRY4((uint)lVar2,*(uint *)(iVar1 + 8)),
                     (uint)lVar2 + *(uint *)(iVar1 + 8));
  }
  return lVar2;
}

// 00DE9860  FUN_00de9860  size=79  [callgraph]
void __fastcall FUN_00de9860(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00de8ee0(param_1);
    if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
      DAT_01dd4124 = (int *)0x0;
    }
    *param_1 = 5;
  }
  else if (*param_1 == 2) {
    FUN_0129be04(param_1[2]);
    *param_1 = 4;
    return;
  }
  return;
}

// 00DE98B0  FUN_00de98b0  size=79  [callgraph]
void __fastcall FUN_00de98b0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_0129c89d(param_1[2]);
    param_1[2] = 0;
  }
  FUN_00de8ee0(param_1);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
    DAT_01dd4124 = (undefined4 *)0x0;
  }
  *param_1 = 0;
  return;
}

// 00DE9900  FUN_00de9900  size=323  [callgraph]
void __fastcall FUN_00de9900(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  DWORD DVar6;
  char *pcVar7;
  bool bVar8;
  byte local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  if (param_1[0x1a] == 0) {
    iVar3 = FUN_00de8f70(param_1);
    if (iVar3 == 0) {
      __security_check_cookie(local_4 ^ (uint)local_108);
      return;
    }
  }
  iVar3 = *(int *)(param_1[1] + 4);
  pbVar1 = (byte *)(param_1 + 3);
  pbVar4 = pbVar1;
  if (iVar3 == 0) {
    pcVar7 = "PRJ_020_SaveData.bxm";
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < (byte)*pcVar7;
      if (bVar2 != *pcVar7) {
LAB_00de9980:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00de9985;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar8 = bVar2 < (byte)pcVar7[1];
      if (bVar2 != pcVar7[1]) goto LAB_00de9980;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00de9985:
    pcVar7 = "D:/project/PRJ_020/SaveData/";
    if (iVar5 != 0) {
      pcVar7 = &DAT_01dd4158;
    }
    _sprintf_s((char *)local_108,0x104,"%s%s",pcVar7,pbVar1);
    pbVar4 = local_108;
  }
  iVar3 = FUN_0129c6e2(param_1[2],iVar3,pbVar4,0,0,param_1[0x16],0,param_1[0x15],param_1[0x16],0);
  if (iVar3 == 0) {
    FUN_00de7c30(pbVar1);
    DVar6 = timeGetTime();
    param_1[0x14] = DVar6;
    *param_1 = 2;
  }
  else {
    FUN_00dd5650(&DAT_016c50c0);
    FUN_00de8ee0(param_1);
    if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
      DAT_01dd4124 = (undefined4 *)0x0;
    }
    *param_1 = 6;
  }
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DE9A50  FUN_00de9a50  size=213  [callgraph]
undefined4 __fastcall FUN_00de9a50(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  if (DAT_01dd4118 != 0) {
    FUN_00de7c30(param_1 + 3);
    DVar1 = timeGetTime();
    if (DVar1 - param_1[0x14] < (uint)param_1[0x13]) {
      return 0;
    }
  }
  iVar2 = FUN_0129b6d6(param_1[2],&local_4);
  if (iVar2 == 0) {
    if (local_4 != (undefined4 *)0x1) {
      if ((local_4 == (undefined4 *)0x0) || (local_4 != (undefined4 *)0x2)) {
        *param_1 = 6;
      }
      else {
        *param_1 = 3;
      }
      if ((DAT_01dd411c != 0) && (local_4 == (undefined4 *)0x2)) {
        timeGetTime();
      }
      FUN_00de8ee0(param_1);
      if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
        DAT_01dd4124 = (undefined4 *)0x0;
      }
    }
    return 0;
  }
  FUN_00de8ee0(param_1);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
    DAT_01dd4124 = (undefined4 *)0x0;
  }
  *param_1 = 6;
  return 0;
}

// 00DE9B30  FUN_00de9b30  size=164  [callgraph]
undefined4 __fastcall FUN_00de9b30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *local_4;
  
  local_4 = param_1;
  iVar1 = FUN_0129b6d6(param_1[2],&local_4);
  if (iVar1 != 0) {
    FUN_00de8ee0(param_1);
    if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
      DAT_01dd4124 = (undefined4 *)0x0;
    }
    *param_1 = 6;
    return 0;
  }
  if (local_4 != (undefined4 *)0x1) {
    if ((local_4 == (undefined4 *)0x0) || (local_4 == (undefined4 *)0x2)) {
      *param_1 = 5;
    }
    else {
      *param_1 = 6;
    }
    FUN_00de8ee0(param_1);
    if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
      DAT_01dd4124 = (undefined4 *)0x0;
    }
  }
  return 0;
}

// 00DE9BE0  FUN_00de9be0  size=157  [callgraph]
void __fastcall FUN_00de9be0(int param_1)

{
  int iVar1;
  undefined1 local_12c [4];
  undefined1 local_128 [12];
  undefined4 local_11c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_12c;
  iVar1 = FUN_00de8f70(param_1);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_12c,0);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    _sprintf_s(local_108,0x104,"%s%s",&DAT_01dd4158,param_1 + 0xc);
  }
  FUN_012984c8(iVar1,param_1 + 0xc,local_128,local_12c);
  __security_check_cookie(local_4 ^ (uint)local_12c,local_11c);
  return;
}

// 00DE9C80  FUN_00de9c80  size=54  [callgraph]
void FUN_00de9c80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dd45c0 + 0x40))(0xcc,param_1,4,param_2,"DvdReadFactory");
  if (iVar1 == 0) {
    return;
  }
  DAT_01dd0880 = 1;
  return;
}

// 00DE9CE0  FUN_00de9ce0  size=118  [callgraph]
void __fastcall FUN_00de9ce0(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00de8ee0(param_1);
    if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
      DAT_01dd4124 = (int *)0x0;
    }
    *param_1 = 5;
  }
  else if (*param_1 == 2) {
    FUN_0129be04(param_1[2]);
    param_1[0x31] = param_1[0x31] | 1;
    *param_1 = 4;
    param_1[0x30] = 0;
    return;
  }
  param_1[0x31] = param_1[0x31] | 1;
  param_1[0x30] = 0;
  return;
}

// 00DE9D60  FUN_00de9d60  size=87  [callgraph]
void __fastcall FUN_00de9d60(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_0129c89d(param_1[2]);
    param_1[2] = 0;
  }
  FUN_00de8ee0(param_1);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
    DAT_01dd4124 = (undefined4 *)0x0;
  }
  *param_1 = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  return;
}

// 00DE9E30  thunk_FUN_00de8c00  size=5  [callgraph]
void thunk_FUN_00de8c00(void)

{
  int *piVar1;
  
  piVar1 = &DAT_01dd4624;
  do {
    if (piVar1[-1] != 0) {
      if (*piVar1 != 0) {
        FUN_01297c59(*piVar1);
        *piVar1 = 0;
      }
      piVar1[-1] = 0;
      piVar1[3] = -1;
    }
    piVar1 = piVar1 + 5;
  } while ((int)piVar1 < 0x1dd4804);
  return;
}

// 00DE9E40  FUN_00de9e40  size=24  [callgraph]
bool FUN_00de9e40(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd2ba0(0xcc,1);
  return iVar1 != 0;
}

// 00DE9E70  FUN_00de9e70  size=224  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00de9e70(int param_1)

{
  int iVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_2c;
  local_20 = *(int *)(param_1 + 8) + 0x30;
  local_24 = *(int *)(param_1 + 0xc) + 1;
  local_10 = *(int *)(param_1 + 0xc) + 4;
  local_1c = 2;
  local_18 = 0x10;
  local_28 = 0;
  local_8 = 0x208;
  local_14 = 1;
  local_c = local_20;
  FUN_0129a6df(&local_28,local_2c);
  FUN_0129a1ed(&LAB_00de8ca0,0);
  FUN_0129a216(&LAB_00de8cc0,0);
  iVar1 = FUN_0129acee(&local_28,0,0);
  if ((iVar1 == 0) && (DAT_018cde24 == 0)) {
    DAT_018cde24 = 1;
    DAT_018cde28 = 0;
    _DAT_018cde30 = 2;
    __security_check_cookie(local_4 ^ (uint)local_2c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_2c);
  return;
}

// 00DE9F90  FUN_00de9f90  size=376  [callgraph]
void __fastcall FUN_00de9f90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
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
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return;
}

// 00DEA110  FUN_00dea110  size=373  [callgraph]
void __fastcall FUN_00dea110(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00de9120();
  iVar1 = 2;
  puVar2 = (undefined4 *)(param_1 + 0x144);
  do {
    if (puVar2[-9] != 0) {
      FUN_00dd48d0(puVar2[-9],0);
    }
    if (puVar2[-6] != 0) {
      FUN_00dd48d0(puVar2[-6],0);
    }
    if (puVar2[-3] != 0) {
      FUN_00dd48d0(puVar2[-3],0);
    }
    iVar1 = iVar1 + -1;
    puVar2[-9] = 0;
    puVar2[-8] = 0;
    puVar2[-7] = 0;
    puVar2[-6] = 0;
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    puVar2 = puVar2 + -9;
  } while (-1 < iVar1);
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x84),0);
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x90),0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x44),0);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x50),0);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x5c),0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 00DEA290  Hw::cDvdFst  size=225  [class]
undefined4 __thiscall
Hw::cDvdFst(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
           undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 3) {
    iVar5 = param_2 * 9 + 0x36;
    uVar1 = *(undefined4 *)(param_1 + 4 + iVar5 * 4);
    uVar2 = *(undefined4 *)(param_1 + 0x10 + iVar5 * 4);
    uVar3 = *(undefined4 *)(param_1 + 0x1c + iVar5 * 4);
    iVar5 = param_1 + iVar5 * 4;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x20) = 0;
    iVar4 = param_1 + param_2 * 0x24;
    *(undefined4 *)(iVar4 + 0xdc) = uVar1;
    *(undefined4 *)(iVar4 + 0xe8) = uVar2;
    *(undefined4 *)(iVar4 + 0xf4) = uVar3;
    iVar4 = FUN_00de9330(param_4);
    if (iVar4 != 0) {
      iVar4 = FUN_00de8360(param_3,iVar5);
      if (iVar4 != 0) {
        iVar5 = FUN_00de9430(0,iVar5,param_5,param_6);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x9c + param_2 * 4) = 1;
          FUN_00dd5650("Hw::cDvdFst ContentsPath%d[%s]",param_2,param_3);
          return 1;
        }
        FUN_00de8100();
        FUN_00dd5650(&DAT_016c5198);
      }
    }
  }
  FUN_00dd56a0(&DAT_016c5150);
  return 0;
}

// 00DEA380  FUN_00dea380  size=244  [between]
void __thiscall FUN_00dea380(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_10;
  uint local_c;
  
  local_10 = (int *)(param_1 + 0x9c);
  puVar4 = (undefined4 *)(param_1 + 0xb4);
  local_c = 0;
  do {
    if (*local_10 != 0) {
      iVar2 = FUN_00fdc7b0(param_2,0x5c);
      if (iVar2 == 0) {
        for (puVar1 = (undefined4 *)*puVar4; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[1]) {
          iVar2 = __stricmp((char *)*puVar1,param_2);
          if (iVar2 == 0) {
            if (puVar1[2] != 0) {
              return;
            }
            break;
          }
        }
      }
      else {
        for (puVar1 = (undefined4 *)puVar4[-1]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[1]) {
          iVar3 = __strnicmp((char *)*puVar1,param_2,(iVar2 - (int)param_2) + 1);
          if ((iVar3 == 0) && (iVar3 = FUN_00de9780(iVar2 + 1), iVar3 != 0)) {
            return;
          }
        }
      }
    }
    local_10 = local_10 + 1;
    local_c = local_c + 1;
    puVar4 = puVar4 + 4;
    if (2 < local_c) {
      iVar2 = FUN_00de9780(param_2);
      if ((iVar2 == 0) && (iVar2 = FUN_00de9780(param_2), iVar2 == 0)) {
        FUN_00de9780(param_2);
      }
      return;
    }
  } while( true );
}

// 00DEA490  Hw::cDvdFst_2  size=251  [class]
undefined4 __thiscall Hw::cDvdFst_2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  piVar1 = (int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*piVar1 != 0) {
    FUN_00dd48d0(*piVar1,0);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x84),0);
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x90),0);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  iVar5 = FUN_00de9330(param_3);
  if (iVar5 != 0) {
    iVar5 = FUN_00de8360(param_2,piVar1);
    if (iVar5 != 0) {
      iVar5 = FUN_00de9430(0,piVar1,0,0);
      if (iVar5 != 0) {
        FUN_00dd5650("Hw::cDvdFst SaveDataPath[%s]",param_2);
        return 1;
      }
      FUN_00de8100();
      FUN_00dd5650(&DAT_016c5228);
    }
  }
  FUN_00dd5650(&DAT_016c5150);
  return 0;
}

// 00DEA590  FUN_00dea590  size=544  [between]
void FUN_00dea590(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  DWORD DVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int local_120;
  int local_11c;
  uint local_10c;
  byte local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_120;
  if (0 < DAT_01dd4148) {
    iVar14 = 0;
    local_11c = 1;
    iVar10 = DAT_01dd414c;
    do {
      if (local_11c < DAT_01dd4148) {
        local_120 = DAT_01dd4148 - local_11c;
        puVar8 = (uint *)(iVar14 + 0x10 + iVar10);
        do {
          uVar3 = *(uint *)(iVar14 + 4 + iVar10);
          if ((puVar8[1] <= uVar3) &&
             ((uVar3 != puVar8[1] || (*puVar8 < *(uint *)(iVar14 + iVar10))))) {
            local_10c = *(uint *)(iVar14 + 0xc + iVar10);
            uVar3 = *(uint *)(iVar14 + iVar10);
            uVar4 = *(uint *)(iVar14 + 4 + iVar10);
            uVar5 = *(uint *)(iVar14 + 8 + iVar10);
            *(uint *)(iVar14 + iVar10) = *puVar8;
            *(uint *)(iVar14 + 4 + iVar10) = puVar8[1];
            *(uint *)(iVar14 + 8 + iVar10) = puVar8[2];
            *(uint *)(iVar14 + 0xc + iVar10) = puVar8[3];
            *puVar8 = uVar3;
            puVar8[1] = uVar4;
            puVar8[2] = uVar5;
            puVar8[3] = local_10c;
          }
          puVar8 = puVar8 + 4;
          local_120 = local_120 + -1;
        } while (local_120 != 0);
      }
      puVar6 = *(undefined4 **)(iVar14 + 8 + iVar10);
      puVar7 = DAT_01dd4124;
      if (puVar6[0x1a] == 0) {
        if (((DAT_01dd4118 == 0) && (DAT_01dd411c == 0)) && (DAT_01dd4120 == 0)) {
          DAT_01dd4124 = (undefined4 *)0x0;
          puVar7 = DAT_01dd4124;
          goto LAB_00dea687;
        }
        if (((DAT_01dd4124 == (undefined4 *)0x0) || (DAT_01dd4124 == puVar6)) &&
           (puVar7 = puVar6, DAT_018cde08 <= (int)puVar6[0x17])) goto LAB_00dea687;
      }
      else {
LAB_00dea687:
        DAT_01dd4124 = puVar7;
        local_120 = *(int *)(puVar6[1] + 4);
        pbVar1 = (byte *)(puVar6 + 3);
        pbVar9 = pbVar1;
        if (local_120 == 0) {
          pcVar12 = "PRJ_020_SaveData.bxm";
          do {
            bVar2 = *pbVar9;
            bVar15 = bVar2 < (byte)*pcVar12;
            if (bVar2 != *pcVar12) {
LAB_00dea6c1:
              iVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00dea6c6;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar15 = bVar2 < (byte)pcVar12[1];
            if (bVar2 != pcVar12[1]) goto LAB_00dea6c1;
            pbVar9 = pbVar9 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_00dea6c6:
          pcVar12 = "D:/project/PRJ_020/SaveData/";
          if (iVar10 != 0) {
            pcVar12 = &DAT_01dd4158;
          }
          _sprintf_s((char *)local_108,0x104,"%s%s",pcVar12,pbVar1);
          pbVar9 = local_108;
        }
        iVar10 = FUN_0129c6e2(puVar6[2],local_120,pbVar9,0,0,puVar6[0x16],0,puVar6[0x15],
                              puVar6[0x16],0);
        if (iVar10 == 0) {
          FUN_00de7c30(pbVar1);
          DVar11 = timeGetTime();
          puVar6[0x14] = DVar11;
          *puVar6 = 2;
          iVar10 = DAT_01dd414c;
        }
        else {
          FUN_00dd5650(&DAT_016c50c0);
          FUN_00de8ee0(puVar6);
          if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == puVar6)) {
            DAT_01dd4124 = (undefined4 *)0x0;
          }
          *puVar6 = 6;
          iVar10 = DAT_01dd414c;
        }
      }
      iVar13 = local_11c + 1;
      iVar14 = iVar14 + 0x10;
      bVar15 = local_11c < DAT_01dd4148;
      local_11c = iVar13;
    } while (bVar15);
  }
  DAT_01dd4148 = 0;
  DAT_01dd4144 = 0;
  __security_check_cookie(local_4 ^ (uint)&local_120);
  return;
}

// 00DEA7B0  FUN_00dea7b0  size=79  [between]
void __fastcall FUN_00dea7b0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_0129c89d(param_1[2]);
    param_1[2] = 0;
  }
  FUN_00de8ee0(param_1);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
    DAT_01dd4124 = (undefined4 *)0x0;
  }
  *param_1 = 0;
  return;
}

// 00DEA800  FUN_00dea800  size=134  [between]
void __fastcall FUN_00dea800(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_1[2] != 0) {
    do {
      switch(*param_1) {
      default:
        goto switchD_00dea817_caseD_0;
      case 1:
        if (DAT_01dd4144 != 0) {
          puVar2 = (undefined4 *)(DAT_01dd4148 * 0x10 + DAT_01dd414c);
          uVar3 = FUN_00de9be0();
          *puVar2 = (int)uVar3;
          DAT_01dd4148 = DAT_01dd4148 + 1;
          puVar2[1] = (int)((ulonglong)uVar3 >> 0x20);
          puVar2[2] = param_1;
          if (DAT_01dd4148 <= DAT_01dd4150) {
            return;
          }
          FUN_00dd5650(&DAT_016c5294);
          return;
        }
        iVar1 = FUN_00de9900();
        break;
      case 2:
        iVar1 = FUN_00de9a50();
        break;
      case 4:
        iVar1 = FUN_00de9b30();
      }
      if (iVar1 == 0) {
        return;
      }
    } while( true );
  }
switchD_00dea817_caseD_0:
  return;
}

// 00DEA8B0  FUN_00dea8b0  size=46  [between]
void __fastcall FUN_00dea8b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 1;
  iVar1 = FUN_00de8610();
  while (iVar1 == 0) {
    FUN_00dea800();
    iVar1 = FUN_00de8610();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

// 00DEA910  FUN_00dea910  size=84  [between]
void __fastcall FUN_00dea910(undefined4 *param_1)

{
  FUN_00de9d60();
  if (param_1[2] != 0) {
    FUN_0129c89d(param_1[2]);
    param_1[2] = 0;
  }
  FUN_00de8ee0(param_1);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
    DAT_01dd4124 = (undefined4 *)0x0;
  }
  *param_1 = 0;
  return;
}

// 00DEA970  Hw::cDvdReadWork  size=72  [class]
void __fastcall Hw::cDvdReadWork(int *param_1)

{
  int iVar1;
  
  FUN_00dea800();
  if (*param_1 == 6) {
    FUN_00de98b0();
    if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
      iVar1 = FUN_00df7c00(8);
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016c52b8,param_1 + 0x1d);
        param_1[0x30] = 0x3c;
      }
    }
  }
  return;
}

// 00DEA9C0  FUN_00dea9c0  size=36  [between]
void FUN_00dea9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  Hw::cDvdFst(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 00DEAAA0  FUN_00deaaa0  size=135  [between]
bool __thiscall FUN_00deaaa0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 local_20 [20];
  int local_c;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = FUN_00dea380(param_3);
      *param_2 = iVar1;
      return iVar1 != 0;
    }
    if (iVar1 == 2) {
      *param_2 = 0;
      iVar1 = FUN_012984c8(param_1[1],param_3,local_20,&param_3);
      if ((iVar1 == 0) && (param_3 != 0)) {
        *param_2 = local_c;
        return true;
      }
      return false;
    }
  }
  return false;
}

// 00DEAB30  FUN_00deab30  size=378  [between]
undefined4 __thiscall
FUN_00deab30(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar2 = (float10)thunk_FUN_00df81d0();
  iVar1 = FUN_00de9330();
  if (((iVar1 != 0) && (iVar1 = FUN_00de8360(param_2,param_1 + 0x10), iVar1 != 0)) &&
     (iVar1 = FUN_00de9430(0,param_1 + 0x10,param_5,param_6), iVar1 != 0)) {
    if (param_3 != 0) {
      iVar1 = FUN_00de9330();
      if ((iVar1 == 0) || (iVar1 = FUN_00de8360(param_3,param_1 + 0x44), iVar1 == 0))
      goto LAB_00deaba4;
      iVar1 = FUN_00de9430(0,param_1 + 0x44,param_5,param_6);
      if (iVar1 == 0) {
        FUN_00de8100();
        FUN_00dd5650();
      }
    }
    uVar4 = FUN_00de9810();
    fVar3 = (float10)thunk_FUN_00df81d0();
    FUN_00dd5650(&DAT_016c5320,(double)((float)(fVar3 - (float10)(float)fVar2) / 1000.0),
                 (double)(float)((-(float10)(longlong)((uVar4 >> 0x20 & 0x80000000) << 0x20) +
                                 (float10)(uVar4 & 0x7fffffffffffffff)) *
                                (float10)9.313225746154785e-10));
    FUN_00dd5650("Hw:cDvdFst RootPath[%s]",param_2);
    if (param_3 != 0) {
      FUN_00dd5650("Hw:cDvdFst PatchRootPath[%s]",param_3);
    }
    FUN_00de8210();
    FUN_00de8210();
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return 1;
  }
LAB_00deaba4:
  FUN_00dd56a0();
  return 0;
}

// 00DEACB0  FUN_00deacb0  size=112  [between]
void __fastcall FUN_00deacb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[1] != 0) {
      FUN_01297c59(puVar1[1]);
      puVar1[1] = 0;
    }
    *puVar1 = 0;
    puVar1[4] = 0xffffffff;
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[1] != 0) {
        FUN_01297c59(puVar1[1]);
        puVar1[1] = 0;
      }
      *puVar1 = 0;
      puVar1[4] = 0xffffffff;
      FUN_01293b75(DAT_01dd0884,puVar1);
    }
    *param_1 = 0;
  }
  return;
}

// 00DEAD20  Hw::cDvd  size=418  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Hw::cDvd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  BOOL BVar3;
  char *pcVar4;
  int iVar5;
  undefined *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00df7e50(&DAT_01dd4158,0x104,param_1);
  BVar3 = SetCurrentDirectoryA(&DAT_01dd4158);
  if (BVar3 == 0) {
    FUN_00dd5650(&DAT_016c5060);
    return false;
  }
  _DAT_01dd4484 = DAT_018cde0c;
  _DAT_01dd44b8 = DAT_018cde0c;
  _DAT_01dd454c = DAT_018cde0c;
  _DAT_01dd4570 = DAT_018cde0c;
  _DAT_01dd4594 = DAT_018cde0c;
  _DAT_01dd44ec = DAT_018cde0c;
  _DAT_01dd4490 = DAT_018cde10;
  _DAT_01dd44c4 = DAT_018cde10;
  _DAT_01dd4558 = DAT_018cde10;
  _DAT_01dd457c = DAT_018cde10;
  _DAT_01dd45a0 = DAT_018cde10;
  _DAT_01dd44f8 = DAT_018cde10;
  _DAT_01dd449c = DAT_018cde14;
  _DAT_01dd44d0 = DAT_018cde14;
  _DAT_01dd4564 = DAT_018cde14;
  _DAT_01dd4588 = DAT_018cde14;
  _DAT_01dd45ac = DAT_018cde14;
  _DAT_01dd4504 = DAT_018cde14;
  pcVar4 = &DAT_01dd4368;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == &DAT_01dd4369) {
    iVar5 = FUN_00deab30(&DAT_01dd4158,0,param_3,param_4,param_5);
    uVar2 = DAT_018cde1c;
  }
  else {
    iVar5 = FUN_00deab30(&DAT_01dd4158,&DAT_01dd4368,param_3,param_4,param_5);
    uVar2 = DAT_018cde1c;
  }
  DAT_018cde1c = uVar2;
  if (iVar5 != 0) {
    FUN_01293d68();
    DAT_01dd4114 = FUN_00dd29b0(uVar2,0x20,0,0);
    DAT_01dd0884 = FUN_01293ba0(DAT_01dd4114,uVar2);
    local_10 = &DAT_01dd4158;
    local_c = 0;
    local_8 = DAT_018cde18;
    local_4 = DAT_018cde20;
    iVar5 = FUN_00de9e70(&local_10);
    if (iVar5 != 0) {
      FUN_00de8560(param_3,DAT_018cde18);
      iVar5 = FUN_00de9c80(DAT_018cde18,param_3);
      if (iVar5 != 0) {
        iVar5 = FUN_00de8e40();
        return iVar5 != 0;
      }
    }
  }
  return false;
}

// 00DEAED0  FUN_00deaed0  size=135  [between]
undefined4 * FUN_00deaed0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  iVar1 = FUN_00dea380(param_1);
  if (iVar1 != 0) {
    return &DAT_018cde24;
  }
  iVar1 = 0;
  piVar4 = &DAT_01dd4620;
  do {
    if ((*piVar4 != 0) && (iVar3 = *piVar4, iVar3 != 0)) {
      if (iVar3 == 1) {
        iVar3 = FUN_00dea380(param_1);
      }
      else if ((iVar3 != 2) ||
              (iVar2 = FUN_012984c8(piVar4[1],param_1,0,&local_4), iVar3 = local_4, iVar2 != 0))
      goto LAB_00deaf35;
      if (iVar3 != 0) {
        return &DAT_01dd4620 + iVar1 * 5;
      }
    }
LAB_00deaf35:
    piVar4 = piVar4 + 5;
    iVar1 = iVar1 + 1;
    if (0x1dd47ff < (int)piVar4) {
      return (undefined4 *)0x0;
    }
  } while( true );
}

// 00DEAF60  FUN_00deaf60  size=79  [between]
int FUN_00deaf60(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  iVar1 = FUN_00dea380(param_1);
  if (iVar1 == 0) {
    piVar2 = &DAT_01dd4620;
    local_4 = 0;
    do {
      if (*piVar2 != 0) {
        iVar1 = FUN_00deaaa0(&local_4,param_1);
        if (iVar1 != 0) {
          return local_4;
        }
      }
      piVar2 = piVar2 + 5;
    } while ((int)piVar2 < 0x1dd4800);
    iVar1 = 0;
  }
  return iVar1;
}

// 00DEAFB0  FUN_00deafb0  size=266  [between]
void __thiscall
FUN_00deafb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  if ((*param_1 == 0) && (piVar1 = param_1 + 1, param_1[1] == 0)) {
    iVar2 = FUN_012971bb(piVar1);
    if ((iVar2 == 0) && (*piVar1 != 0)) {
      puVar3 = (undefined4 *)FUN_00deaed0(param_2);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_018cde24;
      }
      if (puVar3[1] == 0) {
        _sprintf_s(local_108,0x104,"%s%s",&DAT_01dd4158,param_2);
        iVar2 = __raise_excf(*piVar1,0,local_108,0,0,param_1 + 2);
      }
      else {
        iVar2 = __raise_excf(*piVar1,puVar3[1],param_2,0,0,param_1 + 2);
      }
      if (iVar2 == 0) {
        param_1[3] = 1;
        *param_1 = 2;
        param_1[4] = param_5;
        goto LAB_00deb0a1;
      }
    }
    if (*piVar1 != 0) {
      FUN_01297c59(*piVar1);
      *piVar1 = 0;
    }
    *param_1 = 0;
    param_1[4] = -1;
  }
LAB_00deb0a1:
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DEB0C0  FUN_00deb0c0  size=160  [between]
undefined4 __thiscall FUN_00deb0c0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
    return 0;
  }
  piVar1 = param_1 + 1;
  if (param_1[1] == 0) {
    iVar2 = FUN_012971bb(piVar1);
    if ((iVar2 == 0) && (*piVar1 != 0)) {
      puVar3 = (undefined4 *)FUN_00deaed0(param_2);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_018cde24;
      }
      iVar2 = __raise_excf(*piVar1,puVar3[1],param_2,0,0,param_1 + 2);
      if (iVar2 == 0) {
        param_1[3] = 1;
        *param_1 = 2;
        param_1[4] = param_3;
        return 1;
      }
    }
    if (*piVar1 != 0) {
      FUN_01297c59(*piVar1);
      *piVar1 = 0;
    }
    *param_1 = 0;
    param_1[4] = -1;
  }
  return 0;
}

// 00DEB160  FUN_00deb160  size=396  [between]
void __thiscall FUN_00deb160(int *param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  FUN_00df8090(local_108,0x104,param_2);
  piVar1 = param_1 + 2;
  if (*piVar1 == 0) {
    if (*param_1 == 0) {
      iVar2 = FUN_00deaed0(local_108);
      param_1[1] = iVar2;
      if (iVar2 == 0) {
        FUN_00dd5650(&DAT_016c54a0,local_108);
      }
      else {
        iVar2 = thunk_FUN_0129ca4d(piVar1);
        if (*piVar1 == 0) {
          puVar3 = &DAT_016c546c;
        }
        else if (iVar2 == 0) {
          if (param_5 == -1) {
            iVar2 = -2;
          }
          else if (param_5 == 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = -(uint)(param_5 != 1);
          }
          iVar2 = thunk_FUN_0129b839(*piVar1,iVar2);
          if (iVar2 == 0) {
            _strcpy_s((char *)(param_1 + 3),0x40,local_108);
            param_1[0x15] = param_3;
            param_1[0x16] = param_4;
            param_1[0x17] = param_5;
            param_1[0x13] = param_4 / 0x1a9f + 400;
            FUN_00de8e90(param_1);
            *param_1 = 1;
            goto LAB_00deb2d3;
          }
          puVar3 = &DAT_016c5404;
        }
        else {
          puVar3 = &DAT_016c5438;
        }
        FUN_00dd5650(puVar3,local_108);
        FUN_00de98b0();
        *param_1 = 6;
      }
    }
    else {
      FUN_00dd5650(&DAT_016c54d0,local_108);
    }
  }
  else {
    FUN_00dd5650(&DAT_016c550c,local_108);
  }
LAB_00deb2d3:
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DEB2F0  FUN_00deb2f0  size=127  [between]
undefined4 __thiscall
FUN_00deb2f0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00df7c00(8);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00deb160(param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  _strcpy_s((char *)(param_1 + 0x74),0x40,param_2);
  *(undefined4 *)(param_1 + 200) = param_5;
  *(undefined4 *)(param_1 + 0xb4) = param_3;
  *(undefined4 *)(param_1 + 0xb8) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return 1;
}

// 00DEB370  FUN_00deb370  size=66  [between]
void __fastcall FUN_00deb370(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
  if (*(int *)(param_1 + 0xc0) < 1) {
    iVar1 = FUN_00deb2f0(param_1 + 0x74,*(undefined4 *)(param_1 + 0xb4),
                         *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 200));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0x3c;
    }
  }
  return;
}

// 00DEB3D0  FUN_00deb3d0  size=112  [between]
undefined4 __thiscall FUN_00deb3d0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_01293a92(DAT_01dd0884,0x14,"binder_work",8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[3] = 6;
      puVar1[4] = 0xffffffff;
    }
    *param_1 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_00deafb0(param_2,0,0,0xffffffff);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_00deacb0();
    }
  }
  return 0;
}

// 00DEB440  FUN_00deb440  size=59  [between]
void __fastcall FUN_00deb440(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_00de8d00();
    if ((*param_1 == 0) || ((iVar1 = *(int *)(*param_1 + 0xc), iVar1 != 1 && (iVar1 != 2)))) {
      FUN_00deacb0();
      return;
    }
  }
  return;
}

// 00DEB490  FUN_00deb490  size=152  [between]
void FUN_00deb490(char *param_1,rsize_t param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *_Src;
  char local_148 [64];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_148;
  FUN_00df8090(local_108,0x104,param_3);
  FUN_00de88d0(local_148,0x40,local_108,param_4);
  iVar1 = FUN_00deaf60(local_148);
  if (iVar1 == 0) {
    _Src = local_108;
  }
  else {
    _Src = local_148;
  }
  _strcpy_s(param_1,param_2,_Src);
  __security_check_cookie(local_4 ^ (uint)local_148);
  return;
}

// 00DEB530  FUN_00deb530  size=154  [between]
undefined4 __thiscall
FUN_00deb530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00deafb0(param_2,param_3,param_4,param_5);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016c5530);
  }
  else {
    piVar1 = param_1 + 3;
    iVar2 = param_1[3];
    while (iVar2 == 1) {
      iVar2 = FUN_01297d56(param_1[2],piVar1);
      if ((iVar2 != 0) || ((*piVar1 != 1 && (*piVar1 != 2)))) {
        if (param_1[1] != 0) {
          FUN_01297c59(param_1[1]);
          param_1[1] = 0;
        }
        *param_1 = 0;
        param_1[4] = 0xffffffff;
      }
      iVar2 = *piVar1;
    }
    if (*piVar1 == 2) {
      *param_1 = 2;
      return 1;
    }
  }
  return 0;
}

// 00DEB690  Hw::DvdReadManager  size=209  [class]
int Hw::DvdReadManager(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *_Dst;
  int iVar1;
  int iVar2;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  _Dst = (undefined4 *)FUN_00dd2bc0();
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    _memset(_Dst,0,0xcc);
    *_Dst = 0;
    _Dst[1] = 0;
    _Dst[2] = 0;
    _Dst[0x18] = 0;
    _Dst[0x19] = 0;
    _Dst[0x1a] = 0;
    _Dst[0x1b] = 0;
    _Dst[0x1c] = 0;
    _Dst[0x31] = 0;
  }
  local_8 = _Dst;
  if (_Dst == DAT_01dd45b8) {
    FUN_00dd5650(&DAT_016c5550,param_1);
  }
  else {
    iVar1 = FUN_00deb2f0(param_1,param_2,param_3,param_4);
    iVar2 = DAT_01dd0880;
    if (iVar1 != 0) {
      DAT_01dd0880 = DAT_01dd0880 + 1;
      if (DAT_01dd0880 == 0) {
        DAT_01dd0880 = 1;
      }
      _Dst[0x2f] = iVar2;
      return iVar2;
    }
  }
  if (_Dst != DAT_01dd45b8) {
    FUN_00dec850(local_4,&local_8);
  }
  return 0;
}

// 00DEB7B0  Hw::cDvdReadWork_2  size=141  [class]
void __fastcall Hw::cDvdReadWork_2(int *param_1)

{
  int iVar1;
  
  if (param_1[0x30] == 0) {
    FUN_00dea800();
    if (*param_1 == 6) {
      FUN_00de98b0();
      if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
        iVar1 = FUN_00df7c00(8);
        if (iVar1 == 0) {
          FUN_00dd5650(&DAT_016c52b8,param_1 + 0x1d);
          param_1[0x30] = 0x3c;
          return;
        }
      }
    }
  }
  else {
    iVar1 = param_1[0x30] + -1;
    param_1[0x30] = iVar1;
    if (iVar1 < 1) {
      iVar1 = FUN_00deb2f0(param_1 + 0x1d,param_1[0x2d],param_1[0x2e],param_1[0x32]);
      if (iVar1 == 0) {
        param_1[0x30] = 0x3c;
      }
    }
  }
  return;
}

// 00DEB840  FUN_00deb840  size=112  [between]
undefined4 __thiscall FUN_00deb840(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_01293a92(DAT_01dd0884,0x14,"binder_work",8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[3] = 6;
      puVar1[4] = 0xffffffff;
    }
    *param_1 = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_00deb530(param_2,0,0,0xffffffff);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_00deacb0();
    }
  }
  return 0;
}

// 00DEB8B0  FUN_00deb8b0  size=193  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00deb8b0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dd45c0 + 0xc))();
  if (iVar1 != 0) {
    FUN_00dec940();
    (**(code **)(DAT_01dd45c0 + 8))();
  }
  if (DAT_01dd414c != 0) {
    FUN_00dd48d0(DAT_01dd414c,0);
    DAT_01dd414c = 0;
    DAT_01dd4150 = 0;
  }
  FUN_00de8c00();
  if (DAT_018cde28 != 0) {
    FUN_01297c59(DAT_018cde28);
    DAT_018cde28 = 0;
  }
  DAT_018cde24 = 0;
  _DAT_018cde34 = 0xffffffff;
  FUN_0129a851();
  if (DAT_01dd0884 != 0) {
    FUN_01293bfa(DAT_01dd0884);
  }
  DAT_01dd0884 = 0;
  if (DAT_01dd4114 != 0) {
    FUN_00dd48d0(DAT_01dd4114,0);
  }
  DAT_01dd4114 = 0;
  FUN_01293a6b();
  FUN_00de9120();
  return;
}

// 00DEB980  FUN_00deb980  size=77  [between]
void FUN_00deb980(undefined4 param_1)

{
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  FUN_00df8090(local_108,0x104,param_1);
  FUN_00deaf60(local_108);
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DEB9D0  FUN_00deb9d0  size=108  [between]
uint FUN_00deb9d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_00dea380(param_1);
    if (iVar1 != 0) {
      iVar1 = 0;
      piVar2 = &DAT_01dd4620;
      do {
        if (*piVar2 == 0) {
          if (&DAT_01dd4620 + iVar1 * 5 == (undefined4 *)0x0) {
            return 0;
          }
          iVar3 = FUN_00deb530(param_1,param_2,param_3,param_4);
          return -(uint)(iVar3 != 0) & (uint)(&DAT_01dd4620 + iVar1 * 5);
        }
        piVar2 = piVar2 + 5;
        iVar1 = iVar1 + 1;
      } while ((int)piVar2 < 0x1dd4800);
      return 0;
    }
  }
  return 0;
}

// 00DEBA40  FUN_00deba40  size=182  [between]
undefined4 * FUN_00deba40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_01dd4620;
  while (*piVar2 != 0) {
    piVar2 = piVar2 + 5;
    iVar4 = iVar4 + 1;
    if (0x1dd47ff < (int)piVar2) {
      return (undefined4 *)0x0;
    }
  }
  puVar1 = &DAT_01dd4620 + iVar4 * 5;
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = FUN_00deb0c0(param_1,param_2);
    if (iVar3 != 0) {
      piVar2 = &DAT_01dd462c + iVar4 * 5;
      iVar3 = (&DAT_01dd462c)[iVar4 * 5];
      while (iVar3 == 1) {
        iVar3 = FUN_01297d56(*(undefined4 *)(iVar4 * 0x14 + 0x1dd4628),piVar2);
        if ((iVar3 != 0) || ((*piVar2 != 1 && (*piVar2 != 2)))) {
          if ((&DAT_01dd4624)[iVar4 * 5] != 0) {
            FUN_01297c59((&DAT_01dd4624)[iVar4 * 5]);
            (&DAT_01dd4624)[iVar4 * 5] = 0;
          }
          *puVar1 = 0;
          (&DAT_01dd4630)[iVar4 * 5] = 0xffffffff;
        }
        iVar3 = *piVar2;
      }
      if (*piVar2 == 2) {
        *puVar1 = 2;
        return puVar1;
      }
    }
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

// 00DEBB00  FUN_00debb00  size=286  [between]
void FUN_00debb00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_01dd4144 = 1;
  DAT_01dd4148 = 0;
  puVar1 = (undefined4 *)(**(code **)(DAT_01dd45c0 + 0x1c))(0);
joined_r0x00debb28:
  do {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00dea590();
      return;
    }
    Hw::cDvdReadWork_2();
    if (puVar1[0x30] == 0) {
      switch(*puVar1) {
      default:
        puVar2 = (undefined4 *)(**(code **)(DAT_01dd45c0 + 0x1c))(puVar1);
        if (puVar1[2] != 0) {
          FUN_0129c89d(puVar1[2]);
          puVar1[2] = 0;
        }
        FUN_00de8ee0(puVar1);
        if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == puVar1)) {
          DAT_01dd4124 = (undefined4 *)0x0;
        }
        *puVar1 = 0;
        puVar1[0x2d] = 0;
        puVar1[0x2e] = 0;
        puVar1[0x30] = 0;
        if (puVar1[2] != 0) {
          FUN_0129c89d(puVar1[2]);
          puVar1[2] = 0;
        }
        FUN_00de8ee0(puVar1);
        if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == puVar1)) {
          DAT_01dd4124 = (undefined4 *)0x0;
        }
        *puVar1 = 0;
        FUN_00dd4920(puVar1);
        puVar1 = puVar2;
        goto joined_r0x00debb28;
      case 1:
      case 2:
      case 4:
        break;
      }
    }
    puVar1 = (undefined4 *)(**(code **)(*(int *)puVar1[-1] + 0x1c))(puVar1);
  } while( true );
}

// 00DEBC30  FUN_00debc30  size=65  [between]
void FUN_00debc30(void)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dd45c0 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0xbc) == unaff_retaddr) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  FUN_00de9ce0();
  return;
}

// 00DEBC80  FUN_00debc80  size=68  [between]
bool FUN_00debc80(void)

{
  int iVar1;
  int unaff_retaddr;
  
  for (iVar1 = (**(code **)(DAT_01dd45c0 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(int *)(iVar1 + 0xbc) == unaff_retaddr) goto LAB_00debcb9;
  }
  iVar1 = 0;
LAB_00debcb9:
  return iVar1 != 0;
}

// 00DEBCD0  FUN_00debcd0  size=24  [between]
void FUN_00debcd0(void)

{
  FUN_00debb00();
  if (DAT_01dd4110 != 0) {
    FUN_0129990c();
  }
  FUN_01299f20();
  return;
}

// 00DEBD10  Hw::DvdSystem  size=241  [class]
void Hw::DvdSystem(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *local_110;
  int *local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_110;
  local_10c = param_1;
  local_110 = param_2;
  FUN_00df8090(local_108,0x104,param_3);
  iVar1 = FUN_00deaf60(local_108);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016c55ac,param_3);
  }
  else {
    iVar2 = FUN_00dd29b0(iVar1,param_5,1,0);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016c5584,param_3);
    }
    else {
      iVar3 = DvdReadManager(param_3,iVar2,iVar1,param_6);
      if (iVar3 != 0) {
        *local_10c = iVar2;
        *local_110 = iVar1;
        goto LAB_00debde8;
      }
      FUN_00dd48d0(iVar2,0);
    }
  }
  *local_10c = 0;
  *local_110 = 0;
LAB_00debde8:
  __security_check_cookie(local_4 ^ (uint)&local_110);
  return;
}

// 00DEBE10  Hw::DvdSystem_2  size=251  [class]
void Hw::DvdSystem_2(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                    undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  FUN_00df8090(local_108,0x104,param_4);
  uVar1 = FUN_00deaf60(local_108);
  if (uVar1 == 0) {
    FUN_00dd5650(&DAT_016c55ac,param_4);
    *param_1 = 0;
    __security_check_cookie(local_4 ^ (uint)local_108);
    return;
  }
  if (param_3 < uVar1) {
    FUN_00dd5650(&DAT_016c55d0,param_4);
    *param_1 = 0;
    __security_check_cookie(local_4 ^ (uint)local_108);
    return;
  }
  iVar2 = DvdReadManager(param_4,param_2,uVar1,param_5);
  if (iVar2 == 0) {
    *param_1 = 0;
    __security_check_cookie(local_4 ^ (uint)local_108);
    return;
  }
  *param_1 = uVar1;
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DEBF10  thunk_FUN_00debc30  size=5  [between]
void thunk_FUN_00debc30(void)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dd45c0 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0xbc) == unaff_retaddr) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  FUN_00de9ce0();
  return;
}

// 00DEBF70  thunk_FUN_00debc80  size=5  [between]
bool thunk_FUN_00debc80(void)

{
  int iVar1;
  int unaff_retaddr;
  
  for (iVar1 = (**(code **)(DAT_01dd45c0 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(int *)(iVar1 + 0xbc) == unaff_retaddr) goto LAB_00debcb9;
  }
  iVar1 = 0;
LAB_00debcb9:
  return iVar1 != 0;
}

// 00DEC000  Hw::DvdSystem_3  size=459  [class]
void Hw::DvdSystem_3(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *local_188;
  int *local_184;
  undefined4 local_180;
  int local_17c [24];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_188;
  local_188 = param_1;
  local_184 = param_2;
  local_180 = param_5;
  local_17c[0] = 0;
  local_17c[1] = 0;
  local_17c[2] = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  FUN_00df8090(local_108,0x104,param_3);
  iVar1 = FUN_00deaf60(local_108);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016c55ac,param_3);
  }
  else {
    iVar2 = FUN_00dd29b0(iVar1,local_180,1,0);
    if (((iVar2 != 0) && (iVar3 = FUN_00deb160(param_3,iVar2,iVar1,param_6), iVar3 != 0)) &&
       (FUN_00dea8b0(), local_17c[0] != 6)) {
      *local_188 = iVar2;
      *local_184 = iVar1;
      FUN_00de98b0();
      FUN_00dea7b0();
      goto LAB_00dec1b2;
    }
  }
  *local_188 = 0;
  *local_184 = 0;
  if (local_17c[2] != 0) {
    FUN_0129c89d(local_17c[2]);
    local_17c[2] = 0;
  }
  FUN_00de8ee0(local_17c);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == local_17c)) {
    DAT_01dd4124 = (int *)0x0;
  }
  local_17c[0] = 0;
  if (local_17c[2] != 0) {
    FUN_0129c89d(local_17c[2]);
    local_17c[2] = 0;
  }
  FUN_00de8ee0(local_17c);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == local_17c)) {
    DAT_01dd4124 = (int *)0x0;
  }
LAB_00dec1b2:
  __security_check_cookie(local_4 ^ (uint)&local_188);
  return;
}

// 00DEC390  FUN_00dec390  size=83  [callgraph]
void FUN_00dec390(undefined4 param_1)

{
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  FUN_00df8090(local_108,0x104,param_1);
  FUN_00deaf60(local_108);
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00DEC420  FUN_00dec420  size=35  [callgraph]
void FUN_00dec420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_4 [4];
  
  Hw::DvdSystem_2(local_4,param_1,param_2,param_3,param_4);
  return;
}

// 00DEC4D0  FUN_00dec4d0  size=40  [callgraph]
void FUN_00dec4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 local_4 [4];
  
  Hw::DvdSystem_3(param_1,local_4,param_2,param_3,param_4,param_5);
  return;
}

// 00DEC6D0  FUN_00dec6d0  size=61  [callgraph]
undefined4 * __thiscall FUN_00dec6d0(undefined4 *param_1,byte param_2)

{
  if (param_1[1] != 0) {
    FUN_01297c59(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = 0;
  param_1[4] = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DEC730  FUN_00dec730  size=21  [callgraph]
undefined4 * __fastcall FUN_00dec730(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00DEC780  FUN_00dec780  size=104  [callgraph]
undefined4 * __thiscall FUN_00dec780(undefined4 *param_1,byte param_2)

{
  FUN_00de9d60();
  if (param_1[2] != 0) {
    FUN_0129c89d(param_1[2]);
    param_1[2] = 0;
  }
  FUN_00de8ee0(param_1);
  if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_1)) {
    DAT_01dd4124 = (undefined4 *)0x0;
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00DEC850  FUN_00dec850  size=129  [callgraph]
undefined4 * __thiscall FUN_00dec850(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_retaddr;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(*param_3);
  param_3 = (undefined4 *)*param_3;
  *unaff_retaddr = uVar1;
  if (param_3 != (undefined4 *)0x0) {
    FUN_00de9d60();
    if (param_3[2] != 0) {
      FUN_0129c89d(param_3[2]);
      param_3[2] = 0;
    }
    FUN_00de8ee0(param_3);
    if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == param_3)) {
      DAT_01dd4124 = (undefined4 *)0x0;
    }
    *param_3 = 0;
    FUN_00dd4920(param_3);
  }
  return unaff_retaddr;
}

// 00DEC940  FUN_00dec940  size=214  [callgraph]
void __fastcall FUN_00dec940(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[2] != 0) {
        FUN_0129c89d(puVar1[2]);
        puVar1[2] = 0;
      }
      FUN_00de8ee0(puVar1);
      if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == puVar1)) {
        DAT_01dd4124 = (undefined4 *)0x0;
      }
      *puVar1 = 0;
      puVar1[0x2d] = 0;
      puVar1[0x2e] = 0;
      puVar1[0x30] = 0;
      if (puVar1[2] != 0) {
        FUN_0129c89d(puVar1[2]);
        puVar1[2] = 0;
      }
      FUN_00de8ee0(puVar1);
      if (((DAT_01dd4118 == 0) && (DAT_01dd4120 == 0)) || (DAT_01dd4124 == puVar1)) {
        DAT_01dd4124 = (undefined4 *)0x0;
      }
      *puVar1 = 0;
      FUN_00dd4920(puVar1);
    }
  }
  return;
}

// 00DF8C10  thunk_FUN_00df81d0  size=5  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 thunk_FUN_00df81d0(void)

{
  uint uVar1;
  LARGE_INTEGER LStack_8;
  
  QueryPerformanceCounter(&LStack_8);
  uVar1 = (LStack_8.s.HighPart - _DAT_01dd4f1c) - (uint)(LStack_8.s.LowPart < _DAT_01dd4f18);
  return (float10)(float)((-(float10)(longlong)(((ulonglong)uVar1 & 0x80000000) << 0x20) +
                          (float10)(CONCAT44(uVar1,LStack_8.s.LowPart - _DAT_01dd4f18) &
                                   0x7fffffffffffffff)) * (float10)_DAT_01dd4f14);
}

// 00DF8C20  FUN_00df8c20  size=117  [callgraph]
void FUN_00df8c20(WORD *param_1)

{
  _SYSTEMTIME local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_14;
  GetLocalTime(&local_14);
  *param_1 = local_14.wYear;
  param_1[1] = local_14.wMonth;
  param_1[3] = local_14.wDay;
  param_1[2] = local_14.wDayOfWeek;
  param_1[4] = local_14.wHour;
  param_1[6] = local_14.wSecond;
  param_1[5] = local_14.wMinute;
  param_1[7] = local_14.wMilliseconds;
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

// 00DF8CA0  FUN_00df8ca0  size=6  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df8ca0(void)

{
  return _DAT_018ce9a4;
}

// 00DF8CB0  FUN_00df8cb0  size=6  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df8cb0(void)

{
  return _DAT_018ce9a8;
}

// 00DF8CC0  FUN_00df8cc0  size=10  [callgraph]
void FUN_00df8cc0(undefined4 param_1)

{
  DAT_018ce9c0 = param_1;
  return;
}

// 00DF8CE0  FUN_00df8ce0  size=28  [callgraph]
void FUN_00df8ce0(int param_1)

{
  if (DAT_018ce9c8 != param_1) {
    ShowCursor(param_1);
    DAT_018ce9c8 = param_1;
  }
  return;
}

// 00DF8D10  FUN_00df8d10  size=291  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df8d10(void)

{
  int nWidth;
  int nHeight;
  DWORD dwStyle;
  
  if (DAT_01dd50a4 == 0) {
    _DAT_018ce9ac = GetSystemMetrics(0);
    _DAT_018ce9b0 = GetSystemMetrics(1);
    if (DAT_018ce9c0 == 0) {
      _DAT_018ce9a4 = _DAT_018ce9ac;
      _DAT_018ce9a8 = _DAT_018ce9b0;
    }
    _DAT_01dd5050 = 0;
    _DAT_01dd5054 = 0;
    DAT_01dd5058 = _DAT_018ce9a4;
    DAT_01dd505c = _DAT_018ce9a8;
    AdjustWindowRect((LPRECT)&DAT_01dd5050,DAT_018ce9b4,0);
    DAT_01dd5058 = DAT_01dd5058 - _DAT_01dd5050;
    DAT_01dd505c = DAT_01dd505c - _DAT_01dd5054;
    _DAT_01dd5050 = 0;
    _DAT_01dd5054 = 0;
    nWidth = DAT_01dd5058;
    nHeight = DAT_01dd505c;
    dwStyle = DAT_018ce9b4;
    if (DAT_018ce9c0 == 0) {
      nWidth = _DAT_018ce9a4;
      nHeight = _DAT_018ce9a8;
      dwStyle = DAT_018ce9b8;
    }
    DAT_01dd504c = CreateWindowExA(0,&DAT_01dd4f48,&DAT_01dd4f48,dwStyle,-0x80000000,-0x80000000,
                                   nWidth,nHeight,(HWND)0x0,(HMENU)0x0,DAT_01dd4f44,(LPVOID)0x0);
    if (DAT_01dd504c != (HWND)0x0) {
      ShowWindow(DAT_01dd504c,5);
      DAT_018ce9bc = DAT_018ce9c0;
      return 1;
    }
    FUN_00dd56a0(&DAT_016c5c74);
  }
  return 0;
}

// 00DF8E40  FUN_00df8e40  size=187  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df8e40(void)

{
  int iVar1;
  
  if (DAT_01dd5060 == 0) {
    ShowWindow(DAT_01dd504c,1);
    UpdateWindow(DAT_01dd504c);
    SetForegroundWindow(DAT_01dd504c);
    DAT_01dd5060 = 1;
  }
  _DAT_01dd507c = 0;
  iVar1 = PeekMessageA((LPMSG)&DAT_01dd5080,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    TranslateMessage((MSG *)&DAT_01dd5080);
    DispatchMessageA((MSG *)&DAT_01dd5080);
    if (DAT_01dd5084 == 0x12) break;
    iVar1 = PeekMessageA((LPMSG)&DAT_01dd5080,(HWND)0x0,0,0,1);
  }
  if ((DAT_01dd50a4 == 1) || (DAT_01dd5084 == 0x12)) {
    DAT_01dd504c = (HWND)0x0;
  }
  return;
}

// 00DF8F20  FUN_00df8f20  size=260  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df8f20(int param_1,int param_2)

{
  tagRECT local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_14;
  GetWindowRect(DAT_01dd504c,&local_14);
  if (DAT_018ce9bc != 0) {
    _DAT_018ce9a4 = param_1;
    _DAT_018ce9a8 = param_2;
  }
  _DAT_01dd5050 = 0;
  _DAT_01dd5054 = 0;
  DAT_01dd5058 = _DAT_018ce9a4;
  DAT_01dd505c = _DAT_018ce9a8;
  AdjustWindowRect((LPRECT)&DAT_01dd5050,DAT_018ce9b4,0);
  DAT_01dd5058 = DAT_01dd5058 - _DAT_01dd5050;
  DAT_01dd505c = DAT_01dd505c - _DAT_01dd5054;
  _DAT_01dd5050 = 0;
  _DAT_01dd5054 = 0;
  SetWindowPos(DAT_01dd504c,(HWND)0x0,(local_14.right + local_14.left) / 2 - DAT_01dd5058 / 2,
               (local_14.bottom + local_14.top) / 2 - DAT_01dd505c / 2,DAT_01dd5058,DAT_01dd505c,6);
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

// 00DF9030  FUN_00df9030  size=571  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df9030(void)

{
  uint uVar1;
  int cx;
  int X;
  int cy;
  int Y;
  
  Y = DAT_01dd5068;
  X = DAT_01dd5064;
  DAT_018ce9c0 = (uint)(DAT_018ce9bc == 0);
  if (DAT_018ce9c0 == 0) {
    GetWindowRect(DAT_01dd504c,(LPRECT)&DAT_01dd5064);
    _DAT_018ce9a8 = _DAT_018ce9b0;
    DAT_01dd505c = _DAT_018ce9b0;
    DAT_01dd5074 = 1;
    _DAT_018ce9a4 = _DAT_018ce9ac;
    _DAT_01dd5050 = 0;
    _DAT_01dd5054 = 0;
    DAT_01dd5058 = _DAT_018ce9ac;
    DAT_018ce9c4 = 1;
    SetWindowPos(DAT_01dd504c,(HWND)0x0,0,0,_DAT_018ce9ac,_DAT_018ce9b0,4);
    DAT_018ce9c4 = 1;
    SetWindowLongA(DAT_01dd504c,-0x10,DAT_018ce9b8 | 0x10000000);
    SetWindowPos(DAT_01dd504c,(HWND)0x0,0,0,_DAT_018ce9a4,_DAT_018ce9a8,0x27);
  }
  else {
    if (DAT_01dd5074 == 0) {
      X = _DAT_018ce9a4 / 2 + -0x280;
      Y = _DAT_018ce9a8 / 2 + -0x168;
      _DAT_018ce9a4 = 0x500;
      _DAT_018ce9a8 = 0x2d0;
      _DAT_01dd5050 = 0;
      _DAT_01dd5054 = 0;
      DAT_01dd5058 = 0x500;
      DAT_01dd505c = 0x2d0;
      AdjustWindowRect((LPRECT)&DAT_01dd5050,DAT_018ce9b4,0);
      cx = DAT_01dd5058 - _DAT_01dd5050;
      cy = DAT_01dd505c - _DAT_01dd5054;
      _DAT_01dd5050 = 0;
      _DAT_01dd5054 = 0;
      DAT_01dd5058 = cx;
      DAT_01dd505c = cy;
      SetWindowLongA(DAT_01dd504c,-0x10,DAT_018ce9b4 | 0x10000000);
    }
    else {
      DAT_01dd5058 = DAT_01dd506c;
      cx = DAT_01dd506c - DAT_01dd5064;
      cy = DAT_01dd5070 - DAT_01dd5068;
      _DAT_01dd5050 = DAT_01dd5064;
      _DAT_01dd5054 = DAT_01dd5068;
      DAT_01dd505c = DAT_01dd5070;
      DAT_018ce9c4 = 1;
      _DAT_018ce9a4 = cx;
      _DAT_018ce9a8 = cy;
      SetWindowLongA(DAT_01dd504c,-0x10,DAT_018ce9b4 | 0x10000000);
    }
    SetWindowPos(DAT_01dd504c,(HWND)0xfffffffe,X,Y,cx,cy,0x23);
  }
  uVar1 = DAT_018ce9c0;
  DAT_018ce9bc = DAT_018ce9c0;
  if (DAT_018ce9c8 != DAT_018ce9c0) {
    ShowCursor(DAT_018ce9c0);
    DAT_018ce9c8 = uVar1;
  }
  return;
}

// 00DF92C0  FUN_00df92c0  size=427  [callgraph]
void FUN_00df92c0(LPCSTR param_1)

{
  HRESULT HVar1;
  HANDLE hFile;
  DWORD dwBytes;
  SIZE_T SVar2;
  BOOL BVar3;
  int iVar4;
  LPSTREAM local_64;
  HANDLE pvStack_60;
  DWORD local_5c;
  undefined1 auStack_58 [28];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_64;
  if (DAT_01dd53dc == 0) {
    local_64 = (IStream *)0x0;
    HVar1 = OleInitialize((LPVOID)0x0);
    if (-1 < HVar1) {
      DAT_01dd53dc = 1;
      hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        dwBytes = GetFileSize(hFile,(LPDWORD)0x0);
        DAT_01dd53e4 = GlobalAlloc(0x40,dwBytes);
        if (DAT_01dd53e4 != (HGLOBAL)0x0) {
          SVar2 = GlobalSize(DAT_01dd53e4);
          if (dwBytes <= SVar2) {
            BVar3 = ReadFile(hFile,DAT_01dd53e4,dwBytes,&local_5c,(LPOVERLAPPED)0x0);
            if (BVar3 != 0) {
              CloseHandle(hFile);
              hFile = (HANDLE)0x0;
              HVar1 = CreateStreamOnHGlobal(DAT_01dd53e4,0,&local_64);
              if (-1 < HVar1) {
                iVar4 = OleLoadPicture(local_64,dwBytes,1,&DAT_01826efc);
                if (-1 < iVar4) {
                  (*local_64->lpVtbl->Release)(local_64);
                  local_64 = (IStream *)0x0;
                  (**(code **)(*DAT_01dd53e0 + 0xc))(DAT_01dd53e0);
                  iVar4 = GetObjectA(pvStack_60,0x54,auStack_58);
                  if (iVar4 != 0) {
                    DAT_01dd53e8 = uStack_3c;
                    DAT_01dd53ec = uStack_38;
                    (**(code **)(*DAT_01dd53e0 + 0x18))(DAT_01dd53e0);
                    (**(code **)(*DAT_01dd53e0 + 0x1c))(DAT_01dd53e0,&DAT_01dd4e90);
                    __security_check_cookie(uStack_14 ^ (uint)&stack0xffffff8c);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      if (local_64 != (IStream *)0x0) {
        (*local_64->lpVtbl->Release)(local_64);
      }
      CloseHandle(hFile);
      FUN_00df8a60();
      __security_check_cookie(local_4 ^ (uint)&local_64);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_64);
  return;
}

// 00DF9580  FUN_00df9580  size=29  [callgraph]
void FUN_00df9580(char *param_1)

{
  _strncpy_s(&DAT_01dd4f48,0x104,param_1,0x104);
  return;
}

// 00DF95A0  thunk_FUN_00df8f20  size=5  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00df8f20(int param_1,int param_2)

{
  tagRECT tStack_14;
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)&tStack_14;
  GetWindowRect(DAT_01dd504c,&tStack_14);
  if (DAT_018ce9bc != 0) {
    _DAT_018ce9a4 = param_1;
    _DAT_018ce9a8 = param_2;
  }
  _DAT_01dd5050 = 0;
  _DAT_01dd5054 = 0;
  DAT_01dd5058 = _DAT_018ce9a4;
  DAT_01dd505c = _DAT_018ce9a8;
  AdjustWindowRect((LPRECT)&DAT_01dd5050,DAT_018ce9b4,0);
  DAT_01dd5058 = DAT_01dd5058 - _DAT_01dd5050;
  DAT_01dd505c = DAT_01dd505c - _DAT_01dd5054;
  _DAT_01dd5050 = 0;
  _DAT_01dd5054 = 0;
  SetWindowPos(DAT_01dd504c,(HWND)0x0,(tStack_14.right + tStack_14.left) / 2 - DAT_01dd5058 / 2,
               (tStack_14.bottom + tStack_14.top) / 2 - DAT_01dd505c / 2,DAT_01dd5058,DAT_01dd505c,6
              );
  __security_check_cookie(uStack_4 ^ (uint)&tStack_14);
  return;
}

// 00DF9980  FUN_00df9980  size=29  [callgraph]
undefined4 FUN_00df9980(void)

{
  int iVar1;
  
  iVar1 = FUN_00df8e40();
  if (iVar1 != 0) {
    FUN_00df8410();
    DAT_01dd4f28 = DAT_01dd4f28 + 1;
    return 1;
  }
  return 0;
}

// 00DF99F0  FUN_00df99f0  size=205  [callgraph]
undefined4 FUN_00df99f0(void)

{
  ATOM AVar1;
  WNDCLASSEXA local_30;
  
  _memset(&local_30,0,0x30);
  local_30.cbSize = 0x30;
  local_30.style = DAT_018ce9a0;
  local_30.lpfnWndProc = (WNDPROC)&LAB_00df9610;
  local_30.cbClsExtra = 0;
  local_30.cbWndExtra = 0;
  local_30.hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_30.hIcon = LoadIconA(local_30.hInstance,"MAINICON");
  local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_30.hbrBackground = (HBRUSH)0x6;
  local_30.lpszMenuName = (LPCSTR)0x0;
  local_30.lpszClassName = &DAT_01dd4f48;
  local_30.hIconSm = LoadIconA(local_30.hInstance,"SMALLICON");
  AVar1 = RegisterClassExA(&local_30);
  if (AVar1 == 0) {
    FUN_00dd56a0(&DAT_016c5c14);
    return 0;
  }
  DAT_01dd4f44 = local_30.hInstance;
  return 1;
}

// 00DF9B70  HW::OsWindow  size=107  [class]
void HW::OsWindow(void)

{
  int iVar1;
  
  if (DAT_01dd504c != (HWND)0x0) {
    FUN_00dd5650("[HW::OsWindow] Warning cleanup.\n ");
    DestroyWindow(DAT_01dd504c);
    iVar1 = FUN_00df8e40();
    if (iVar1 != 0) {
      FUN_00df8410();
    }
  }
  if (DAT_01dd4f44 != (HINSTANCE)0x0) {
    UnregisterClassA(&DAT_01dd4f48,DAT_01dd4f44);
    DAT_01dd4f44 = (HINSTANCE)0x0;
  }
  if (DAT_01dd4f40 != 0) {
    timeEndPeriod(1);
    DAT_01dd4f40 = 0;
  }
  return;
}

// 00DF9BE0  FUN_00df9be0  size=70  [between]
undefined4 FUN_00df9be0(void)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = FindWindowA(&DAT_01dd4f48,&DAT_01dd4f48);
  if (pHVar1 != (HWND)0x0) {
    DAT_01dd50a4 = 1;
  }
  iVar2 = FUN_00df99f0();
  if (iVar2 != 0) {
    iVar2 = FUN_00df8d10();
    if (iVar2 != 0) {
      FUN_00ddaff0(&DAT_01dd4e98);
      return 1;
    }
  }
  return 0;
}

// 00DF9C70  FUN_00df9c70  size=59  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00df9c70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00df8110();
  if (iVar1 != 0) {
    iVar1 = FUN_00df9be0();
    if (iVar1 != 0) {
      iVar1 = FUN_00df7cf0(param_1);
      if (iVar1 != 0) {
        DAT_01dd4f28 = 0;
        _DAT_018ce99c = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 00DF9D60  FUN_00df9d60  size=44  [between]
void __fastcall FUN_00df9d60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 2;
  param_1[5] = 0xc00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00DF9DA0  FUN_00df9da0  size=20  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df9da0(int param_1)

{
  if (param_1 == -1) {
    param_1 = FUN_00df7f70();
  }
  _DAT_01dd5438 = param_1;
  return;
}

// 00DF9E10  FUN_00df9e10  size=188  [between]
void FUN_00df9e10(int param_1,int param_2,float param_3)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 local_8;
  
  iVar3 = 0;
  piVar1 = &DAT_01dd53f8;
  do {
    if (*piVar1 == param_1) {
      if ((&DAT_01dd53fc)[iVar3 * 4] == 0) {
        if (param_2 == 0) {
          return;
        }
      }
      else if (param_2 != 0) {
        return;
      }
      (&DAT_01dd53f8)[iVar3 * 4] = param_1;
      return;
    }
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x1dd5438);
  iVar3 = 0;
  piVar1 = &DAT_01dd53f8;
  do {
    if (*piVar1 == 0) {
      (&DAT_01dd53fc)[iVar3 * 4] = param_2;
      (&DAT_01dd53f8)[iVar3 * 4] = param_1;
      local_8 = (undefined4)(longlong)ROUND(param_3 * 1000.0);
      (&DAT_01dd5400)[iVar3 * 4] = local_8;
      DVar2 = timeGetTime();
      (&DAT_01dd5404)[iVar3 * 4] = DVar2;
      return;
    }
    piVar1 = piVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x1dd5438);
  return;
}

// 00DF9FA0  FUN_00df9fa0  size=223  [between]
void FUN_00df9fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int aiStack_44 [17];
  
  aiStack_44[3] = 0x42700000;
  aiStack_44[0xc] = 0x45160000;
  iVar1 = DAT_018ce9f0 + DAT_018ce9f4 * 2;
  aiStack_44[5] = 0x10;
  aiStack_44[6] = 0x10;
  aiStack_44[7] = 0x10;
  aiStack_44[8] = 0x10;
  aiStack_44[2] = 0;
  aiStack_44[4] = 1;
  aiStack_44[9] = 0x20;
  aiStack_44[10] = 0x20;
  aiStack_44[0xb] = 8;
  aiStack_44[0xd] = 0;
  aiStack_44[0xe] = 0;
  aiStack_44[0xf] = 0;
  aiStack_44[0x10] = 0;
  uVar2 = FUN_012a63b5(aiStack_44 + 2);
  uVar3 = (*DAT_018cea04)(0,uVar2);
  FUN_012a63bf(aiStack_44 + 2,uVar3,uVar2);
  aiStack_44[1] = 0;
  DAT_01dd5448 = uVar3;
  aiStack_44[0] = iVar1;
  uVar2 = FUN_012dfbd0(aiStack_44);
  uVar3 = (*DAT_018cea04)(2,uVar2);
  FUN_012dfc40(aiStack_44,uVar3,uVar2);
  DAT_01dd5450 = uVar3;
  DAT_01dd543c = 1;
  return;
}

// 00DFA080  FUN_00dfa080  size=130  [between]
void FUN_00dfa080(void)

{
  FUN_012df1a0();
  if (DAT_018ce9dc != -1) {
    FUN_012a7354(DAT_018ce9dc);
    DAT_018ce9dc = -1;
  }
  FUN_012a640f();
  if (DAT_01dd5448 != 0) {
    (*DAT_018cea08)(0,DAT_01dd5448);
    DAT_01dd5448 = 0;
  }
  if (DAT_01dd544c != 0) {
    (*DAT_018cea08)(1,DAT_01dd544c);
    DAT_01dd544c = 0;
  }
  if (DAT_01dd5450 != 0) {
    (*DAT_018cea08)(2,DAT_01dd5450);
    DAT_01dd5450 = 0;
  }
  DAT_01dd543c = 0;
  return;
}

// 00DFA1D0  FUN_00dfa1d0  size=79  [between]
void __fastcall FUN_00dfa1d0(int param_1)

{
  if (*(int *)(param_1 + 0x1c4) == 0) {
    FUN_012e1220(*(undefined4 *)(param_1 + 0x20),0,param_1 + 0x184);
  }
  else {
    FUN_012e12f0(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x1c4),
                 *(undefined4 *)(param_1 + 0x1c8),0);
  }
  FUN_012e1340(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 8) = 3;
  return;
}

// 00DFA2D0  FUN_00dfa2d0  size=167  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00dfa2d0(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_012dfe20();
  iVar2 = FUN_00dd29b0(uVar1,0x20,0,0);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x24) = iVar2;
    iVar2 = FUN_012dff10(iVar2,uVar1);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x20) = iVar2;
      if ((*param_1 & 0x10) == 0) {
        DAT_01dd5444 = DAT_01dd5444 + 1;
      }
      if (*(int *)(param_1 + 0x10) - 2U < 2) {
        FUN_012e3640(iVar2,0);
      }
      FUN_012e1f30(*(undefined4 *)(param_1 + 0x20),_DAT_018ce9e0);
      FUN_012e2050(*(undefined4 *)(param_1 + 0x20),_DAT_018ce9e4);
      FUN_012e35d0(*(undefined4 *)(param_1 + 0x20),0x40000000);
      return 1;
    }
  }
  return 0;
}

// 00DFA380  FUN_00dfa380  size=145  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00dfa380(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_012e2000(*(undefined4 *)(param_1 + 0x20));
  fVar3 = (float10)FUN_012e20a0(*(undefined4 *)(param_1 + 0x20));
  fVar1 = _DAT_018ce9e4;
  if (_DAT_018ce9e0 != (float)fVar2) {
    FUN_012e1f30(*(undefined4 *)(param_1 + 0x20),_DAT_018ce9e0);
  }
  if (fVar1 == (float)fVar3) {
    return;
  }
  FUN_012e2050(*(undefined4 *)(param_1 + 0x20),fVar1);
  return;
}

// 00DFA420  FUN_00dfa420  size=53  [between]
undefined4 __fastcall FUN_00dfa420(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1cc) < 1) {
    iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      return 1;
    }
  }
  else {
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
  }
  return 0;
}

// 00DFA6D0  FUN_00dfa6d0  size=27  [between]
void FUN_00dfa6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00df9e10(param_1,param_2,param_3);
  return;
}

// 00DFA6F0  FUN_00dfa6f0  size=44  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfa6f0(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0();
  _DAT_018ce9e0 = (float)fVar1;
  return;
}

// 00DFA720  FUN_00dfa720  size=44  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfa720(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdc1f0();
  _DAT_018ce9e4 = (float)fVar1;
  return;
}

// 00DFA7E0  FUN_00dfa7e0  size=246  [between]
void __thiscall FUN_00dfa7e0(uint *param_1,char *param_2,int param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = *(uint *)(param_3 + 0x30);
  param_1[0x60] = 0xffffffff;
  param_1[3] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[4] = 1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  if ((*param_1 & 2) != 0) {
    param_1[1] = param_1[1] | 0x10;
  }
  if ((*param_1 & 0x80000004) != 0) {
    param_1[1] = param_1[1] | 0x40;
  }
  if ((DAT_018ce9ec != 0) && (DAT_01dd5440 == 0)) {
    FUN_00df9fa0();
  }
  DAT_01dd5440 = DAT_01dd5440 + 1;
  _strcpy_s((char *)(param_1 + 0x61),0x40,param_2);
  *(char *)(param_1 + 0x74) = '\0';
  pcVar2 = (char *)(param_3 + 0x38);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != (char *)(param_3 + 0x39)) {
    _strcpy_s((char *)(param_1 + 0x74),0x40,(char *)(param_3 + 0x38));
  }
  param_1[0xd] = 1;
  return;
}

// 00DFAA80  FUN_00dfaa80  size=91  [between]
void __fastcall FUN_00dfaa80(byte *param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if ((*param_1 & 0x10) == 0) {
      DAT_01dd5444 = DAT_01dd5444 + -1;
    }
    FUN_012e02e0(*(undefined4 *)(param_1 + 0x20));
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  return;
}

// 00DFAAE0  FUN_00dfaae0  size=69  [between]
void __fastcall FUN_00dfaae0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (((*(byte *)(param_1 + 0x2c) & 2) == 0) || ((*(uint *)(param_1 + 4) & 0x20) != 0)) {
      if ((*(byte *)(param_1 + 4) & 8) != 0) {
        FUN_012e1d40(iVar1,0);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
      }
    }
    else if ((*(uint *)(param_1 + 4) & 8) == 0) {
      FUN_012e1d40(iVar1,1);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
      return;
    }
  }
  return;
}

// 00DFAB30  FUN_00dfab30  size=459  [between]
void __fastcall FUN_00dfab30(int param_1)

{
  int iVar1;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc [46];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_10c;
  if (*(int *)(param_1 + 8) != 5) goto LAB_00dface5;
  iVar1 = FUN_00f991a0();
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 0x2c) & 2) != 0) goto LAB_00dface5;
    iVar1 = FUN_012e22b0(*(undefined4 *)(param_1 + 0x20),local_bc);
    if (iVar1 == 0) goto LAB_00dface5;
    iVar1 = FUN_012e2580(*(undefined4 *)(param_1 + 0x20),local_bc);
  }
  else {
    iVar1 = FUN_012e22b0(*(undefined4 *)(param_1 + 0x20),local_bc);
  }
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 4) & 0x40) != 0) {
      FUN_00f974a0(&local_f0,&local_fc);
      FUN_00f974a0(&local_104,&local_f4);
      FUN_00f974a0(&local_100,&local_f8);
      if (*(int *)(param_1 + 0x48) == 0) {
        local_10c = 0;
        local_108 = 0;
      }
      else {
        FUN_00f974a0(&local_10c,&local_108);
      }
      local_e4 = local_fc;
      local_e8 = *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x38);
      local_ec = local_f0;
      local_e0 = local_104;
      local_dc = (*(int *)(param_1 + 0x3c) / 2) * (*(int *)(param_1 + 0x38) / 2);
      local_d8 = local_f4;
      local_d4 = local_100;
      local_cc = local_f8;
      local_c8 = local_10c;
      local_c0 = local_108;
      local_d0 = local_dc;
      local_c4 = local_e8;
      FUN_012e2630(*(undefined4 *)(param_1 + 0x20),local_bc,&local_ec);
      cLockableTexture::unlock();
      cLockableTexture::unlock();
      cLockableTexture::unlock();
      if (*(int *)(param_1 + 0x48) != 0) {
        cLockableTexture::unlock();
      }
    }
    FUN_012e29a0(*(undefined4 *)(param_1 + 0x20),local_bc);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    *(undefined4 *)(param_1 + 0x4c) = local_bc[0];
  }
LAB_00dface5:
  __security_check_cookie(local_4 ^ (uint)&local_10c);
  return;
}

// 00DFAD00  FUN_00dfad00  size=145  [between]
void __fastcall FUN_00dfad00(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 8) == 5) || (*(int *)(param_1 + 8) == 6)) &&
      ((*(byte *)(param_1 + 4) & 0x20) == 0)) && (*(float *)(param_1 + 0x30) != 0.0)) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = FUN_00fdbc60();
    iVar2 = iVar1 - iVar2;
    *(int *)(param_1 + 0x180) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    if (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x180)) {
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x40) + -1;
    }
    if (*(int *)(param_1 + 0x180) != iVar1) {
      FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
      *(undefined4 *)(param_1 + 8) = 7;
      return;
    }
  }
  return;
}

// 00DFADA0  FUN_00dfada0  size=64  [between]
undefined4 __fastcall FUN_00dfada0(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_00debc80(*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 4) & 4) == 0) {
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c);
      FUN_00dfa1d0();
      return 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}

// 00DFADE0  FUN_00dfade0  size=56  [between]
undefined4 __fastcall FUN_00dfade0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 6) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    *(undefined4 *)(param_1 + 8) = 6;
    *(undefined4 *)(param_1 + 0x34) = 4;
    return 1;
  }
  if (iVar1 == 0) {
    FUN_00dfa1d0();
  }
  return 0;
}

// 00DFAE20  FUN_00dfae20  size=70  [between]
void __fastcall FUN_00dfae20(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 4) == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else if (*(int *)(param_1 + 8) - 3U < 5) {
      FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 8) = 8;
      *(undefined4 *)(param_1 + 0x34) = 5;
      return;
    }
  }
  return;
}

// 00DFAE70  FUN_00dfae70  size=261  [between]
char __thiscall FUN_00dfae70(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x58) == 0) {
    return '\0';
  }
  if (*(int *)(param_1 + 0x1cc) < 2) {
    *(undefined4 *)(param_1 + 0x1cc) = 2;
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x14c);
  if ((*(byte *)(param_1 + 4) & 0x40) == 0) {
    return '\x01';
  }
  return (*(int *)(param_1 + 0x48) != 0) + '\x02';
}

// 00DFAF80  FUN_00dfaf80  size=20  [between]
bool FUN_00dfaf80(void)

{
  return DAT_01dd5460 == 0 && DAT_01dd5468 == 0;
}

// 00DFB0B0  FUN_00dfb0b0  size=535  [between]
void __fastcall FUN_00dfb0b0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_74 [112];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_84;
  if ((*(int *)(param_1 + 0x10) == 3) || (*(int *)(param_1 + 0x10) == 4)) {
    iVar4 = 3;
    do {
      Hw::cTexture::cTexture_6();
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar4 = FUN_00dfae70(local_74);
    fVar1 = *(float *)(param_1 + 0x24c);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      local_84 = (float)FUN_00f98a90();
      local_7c = (float)(int)local_84;
    }
    else {
      local_7c = *(float *)(param_1 + 0x24c);
    }
    if (0.0 < *(float *)(param_1 + 0x250) == (*(float *)(param_1 + 0x250) == 0.0)) {
      local_84 = (float)FUN_00f98aa0();
      local_80 = (float)(int)local_84;
    }
    else {
      local_80 = *(float *)(param_1 + 0x250);
    }
    if (0.0 < *(float *)(param_1 + 0x244) == (*(float *)(param_1 + 0x244) == 0.0)) {
      iVar2 = FUN_00f98a90();
      local_84 = ((float)iVar2 - local_7c) * 0.5;
    }
    else {
      local_84 = *(float *)(param_1 + 0x244);
    }
    fVar1 = *(float *)(param_1 + 0x248);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      iVar2 = FUN_00f98aa0();
      local_78 = ((float)iVar2 - local_80) * 0.5;
    }
    else {
      local_78 = *(float *)(param_1 + 0x248);
    }
    local_7c = local_84 + local_7c;
    local_80 = local_78 + local_80;
    if (iVar4 == 2) {
      FUN_00f95e80(local_84,local_78,local_7c,local_80,local_74,0,0xffffffff);
    }
    else if (iVar4 == 3) {
      FUN_00f95e90(local_84,local_78,local_7c,local_80,local_74,0);
    }
    else {
      uVar8 = 0x3f800000;
      uVar7 = 0x3f800000;
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = FUN_00fa0740(0);
      FUN_00f95e50(local_84,local_78,local_7c,local_80,uVar3,uVar5,uVar6,uVar7,uVar8);
    }
    iVar4 = 3;
    do {
      Hw::cTexture::cTexture_5();
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_84);
  return;
}

// 00DFB2D0  FUN_00dfb2d0  size=20  [between]
bool FUN_00dfb2d0(void)

{
  return DAT_01dd5460 == 0 && DAT_01dd5468 == 0;
}

// 00DFB400  FUN_00dfb400  size=58  [between]
void FUN_00dfb400(int param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = DAT_01dd5460; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 8) == param_1) goto LAB_00dfb432;
  }
  iVar1 = DAT_01dd5468;
  if (DAT_01dd5468 != 0) {
    while (*(int *)(iVar1 + 8) != param_1) {
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 == 0) {
        return;
      }
    }
LAB_00dfb432:
    *(undefined4 *)(iVar1 + 0x30) = param_2;
  }
  return;
}

// 00DFB440  FUN_00dfb440  size=126  [between]
void __fastcall FUN_00dfb440(int param_1)

{
  int iVar1;
  
  iVar1 = Hw::DvdSystem(param_1 + 0x18,param_1 + 0x1c,param_1 + 0x184,*(undefined4 *)(param_1 + 0xc)
                        ,0x1000,0);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 4) & 4) == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
      if (*(int *)(param_1 + 8) == 1) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
      }
      if (*(int *)(param_1 + 8) - 3U < 5) {
        FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 8) = 8;
        *(undefined4 *)(param_1 + 0x34) = 5;
        return;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return;
}

// 00DFB4C0  FUN_00dfb4c0  size=109  [between]
void __fastcall FUN_00dfb4c0(int param_1)

{
  int iVar1;
  
  FUN_00dfaa80();
  if ((*(int *)(param_1 + 0x10) == 2) && (*(int *)(param_1 + 0x18) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = 4;
  do {
    FUN_00fa26b0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((((*(byte *)(param_1 + 4) & 1) != 0) && (DAT_01dd5440 = DAT_01dd5440 + -1, DAT_018ce9ec != 0))
     && (DAT_01dd5440 == 0)) {
    FUN_00dfa080();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00DFB530  FUN_00dfb530  size=76  [between]
void __fastcall FUN_00dfb530(int param_1)

{
  if (((*(byte *)(param_1 + 0x2c) & 4) != 0) && ((*(uint *)(param_1 + 4) & 4) == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else if (*(int *)(param_1 + 8) - 3U < 5) {
      FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 8) = 8;
      *(undefined4 *)(param_1 + 0x34) = 5;
      return;
    }
  }
  return;
}

// 00DFB580  FUN_00dfb580  size=347  [between]
void __fastcall FUN_00dfb580(int param_1)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  CRect *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 8) != 5) {
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x38);
  this = (CRect *)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 4) & 0x40) == 0) {
    puVar4 = &DAT_01b7c2c8;
    iVar3 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      CRect::SetRect(this,iVar2,iVar1,3,0x1b83680);
      if (extraout_EAX_02 == 0) goto LAB_00dfb67b;
      iVar1 = iVar1 / 2;
      iVar2 = iVar2 / 2;
      CRect::SetRect((CRect *)(param_1 + 0x9c),iVar2,iVar1,3,0x1b83680);
      if (extraout_EAX_03 == 0) goto LAB_00dfb67b;
      puVar4 = &DAT_01b83680;
      this = (CRect *)(param_1 + 0xe8);
    }
    else {
      CRect::SetRect(this,iVar2,iVar1,3,0x1b7f860);
      if (extraout_EAX == 0) goto LAB_00dfb67b;
      CRect::SetRect((CRect *)(param_1 + 0x9c),iVar2 / 2,iVar1 / 2,3,0x1b7f860);
      if ((extraout_EAX_00 == 0) ||
         (CRect::SetRect((CRect *)(param_1 + 0xe8),iVar2 / 2,iVar1 / 2,3,0x1b7f860),
         extraout_EAX_01 == 0)) goto LAB_00dfb67b;
      puVar4 = &DAT_01b7f860;
      this = (CRect *)(param_1 + 0x134);
    }
    iVar3 = 3;
  }
  CRect::SetRect(this,iVar2,iVar1,iVar3,(int)puVar4);
  if (extraout_EAX_04 != 0) {
    return;
  }
LAB_00dfb67b:
  iVar1 = 4;
  do {
    FUN_00fa26b0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((*(uint *)(param_1 + 4) & 4) == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else if (*(int *)(param_1 + 8) - 3U < 5) {
      FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 8) = 8;
      *(undefined4 *)(param_1 + 0x34) = 5;
      return;
    }
  }
  return;
}

// 00DFB6E0  FUN_00dfb6e0  size=145  [between]
undefined4 __fastcall FUN_00dfb6e0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((param_1[1] & 0x10) == 0) && (DAT_01dd5444 != 0)) {
    return 0;
  }
  iVar2 = FUN_00dfa2d0(param_1[3]);
  if (iVar2 == 0) {
    FUN_00dfae20();
    return 1;
  }
  if ((*param_1 & 8) != 0) {
    FUN_012e1dd0(param_1[8],1);
  }
  if ((*param_1 & 0x40000000) != 0) {
    FUN_012e1030(param_1[8],&LAB_00dfa500,&LAB_00dfa510,param_1[8],3);
  }
  uVar1 = param_1[4];
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      FUN_00dfb440();
      return 1;
    }
    if (uVar1 != 3) {
      return 1;
    }
  }
  FUN_00dfa1d0();
  return 1;
}

// 00DFB780  FUN_00dfb780  size=399  [between]
void __fastcall FUN_00dfb780(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_378 [12];
  undefined4 local_36c;
  undefined4 local_368;
  undefined1 local_33c [44];
  undefined1 local_310 [36];
  undefined4 local_2ec;
  undefined4 local_2e0;
  int local_2bc;
  int local_3c;
  int local_18;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_378;
  iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 1) {
    __security_check_cookie(local_4 ^ (uint)local_378);
    return;
  }
  if (iVar1 == 2) {
    FUN_012e1490(*(undefined4 *)(param_1 + 0x20),local_310);
    *(undefined4 *)(param_1 + 0x40) = local_2e0;
    *(undefined4 *)(param_1 + 0x44) = local_2ec;
    if ((local_3c == 0) || (local_18 == 0)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if (local_2bc != 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
    }
    FUN_012e31f0(*(undefined4 *)(param_1 + 0x20),1);
    FUN_012e0cf0(*(undefined4 *)(param_1 + 0x20),local_378,local_33c);
    *(undefined4 *)(param_1 + 0x38) = local_36c;
    *(undefined4 *)(param_1 + 0x3c) = local_368;
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar2 = FUN_012e0570(*(undefined4 *)(param_1 + 0x20),local_378,local_33c);
      iVar1 = FUN_00dd29b0(uVar2,0x20,0,0);
      if (iVar1 == 0) {
        FUN_00dfae20();
        goto LAB_00dfb8f4;
      }
      *(int *)(param_1 + 0x28) = iVar1;
      FUN_012e06f0(*(undefined4 *)(param_1 + 0x20),local_378,local_33c,iVar1,uVar2);
    }
    if (*(int *)(param_1 + 0x180) != -1) {
      FUN_012e3230(*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x180));
    }
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
      FUN_012e21a0(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      FUN_012e2220(*(undefined4 *)(param_1 + 0x20));
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    }
    *(undefined4 *)(param_1 + 8) = 4;
  }
  else {
    FUN_00dfae20();
  }
LAB_00dfb8f4:
  __security_check_cookie(local_4 ^ (uint)local_378);
  return;
}

// 00DFB910  FUN_00dfb910  size=119  [between]
undefined4 __fastcall FUN_00dfb910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
  if ((iVar1 != 2) && (iVar1 != 3)) {
    if (((*(byte *)(param_1 + 0x2c) & 1) != 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      FUN_012e2220(*(undefined4 *)(param_1 + 0x20));
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    }
    if (iVar1 != 4) {
      if (iVar1 != 5) {
        FUN_00dfae20();
        return 1;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
      *(undefined4 *)(param_1 + 8) = 5;
      *(undefined4 *)(param_1 + 0x34) = 3;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  return 0;
}

// 00DFB990  FUN_00dfb990  size=64  [between]
undefined4 __fastcall FUN_00dfb990(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 5) {
    return 0;
  }
  if (iVar1 != 6) {
    FUN_00dfae20();
    return 1;
  }
  *(undefined4 *)(param_1 + 8) = 6;
  *(undefined4 *)(param_1 + 0x34) = 4;
  return 1;
}

// 00DFB9D0  FUN_00dfb9d0  size=88  [between]
undefined4 __fastcall FUN_00dfb9d0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 0x10) != 0) {
    return 0;
  }
  if ((uVar1 & 4) == 0) {
    *(uint *)(param_1 + 4) = uVar1 | 4;
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else if (*(int *)(param_1 + 8) - 3U < 5) {
      FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 8) = 8;
      *(undefined4 *)(param_1 + 0x34) = 5;
      return 1;
    }
  }
  return 1;
}

// 00DFBA30  FUN_00dfba30  size=100  [between]
void FUN_00dfba30(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_01dd5460;
  if (param_1 == 0) {
    if (0 < DAT_01dd5458) {
      puVar1 = (uint *)(DAT_01dd5454 + 0x2c);
      iVar2 = DAT_01dd5458;
      do {
        if (puVar1[-9] != 0) {
          *puVar1 = *puVar1 | 1;
        }
        puVar1 = puVar1 + 0x9d;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfba92;
    }
    iVar2 = DAT_01dd5468;
    if (DAT_01dd5468 != 0) {
      while (*(int *)(iVar2 + 8) != param_1) {
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          return;
        }
      }
LAB_00dfba92:
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 1;
    }
  }
  return;
}

// 00DFBAA0  FUN_00dfbaa0  size=100  [between]
void FUN_00dfbaa0(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_01dd5460;
  if (param_1 == 0) {
    if (0 < DAT_01dd5458) {
      puVar1 = (uint *)(DAT_01dd5454 + 0x2c);
      iVar2 = DAT_01dd5458;
      do {
        if (puVar1[-9] != 0) {
          *puVar1 = *puVar1 | 4;
        }
        puVar1 = puVar1 + 0x9d;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfbb02;
    }
    iVar2 = DAT_01dd5468;
    if (DAT_01dd5468 != 0) {
      while (*(int *)(iVar2 + 8) != param_1) {
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          return;
        }
      }
LAB_00dfbb02:
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 4;
    }
  }
  return;
}

// 00DFBE20  FUN_00dfbe20  size=100  [between]
void FUN_00dfbe20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_01dd5470;
  if (DAT_01dd5470 == (int *)0x0) {
    return;
  }
  if (DAT_01dd5474 == DAT_01dd5470) {
    DAT_01dd5474 = (int *)*DAT_01dd5470;
  }
  iVar2 = *DAT_01dd5470;
  iVar4 = DAT_01dd5470[1];
  if (iVar2 != 0) {
    piVar1 = DAT_01dd5470 + 1;
    DAT_01dd5470 = (int *)DAT_01dd5470[1];
    *(int *)(iVar2 + 4) = *piVar1;
    iVar4 = (int)DAT_01dd5470;
  }
  DAT_01dd5470 = (int *)iVar4;
  if ((int *)piVar3[1] != (int *)0x0) {
    *(int *)piVar3[1] = *piVar3;
  }
  piVar3[1] = 0;
  *piVar3 = 0;
  piVar3[2] = DAT_018ce9e8;
  DAT_018ce9e8 = DAT_018ce9e8 + 1;
  if (DAT_018ce9e8 == 0) {
    DAT_018ce9e8 = 1;
  }
  return;
}

// 00DFBE90  FUN_00dfbe90  size=142  [between]
undefined4 * __fastcall FUN_00dfbe90(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = 3;
  do {
    Hw::cTextureInstance::cTextureInstance_2();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x91] = 0xbf800000;
  param_1[0x92] = 0xbf800000;
  param_1[0x93] = 0xbf800000;
  param_1[0x94] = 0xbf800000;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0x3f800000;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0x3f800000;
  param_1[0x9b] = 0x3f800000;
  param_1[0x9c] = 0x3f800000;
  return param_1;
}

// 00DFBF70  thunk_FUN_00dfba30  size=5  [between]
void thunk_FUN_00dfba30(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_01dd5460;
  if (param_1 == 0) {
    if (0 < DAT_01dd5458) {
      puVar1 = (uint *)(DAT_01dd5454 + 0x2c);
      iVar2 = DAT_01dd5458;
      do {
        if (puVar1[-9] != 0) {
          *puVar1 = *puVar1 | 1;
        }
        puVar1 = puVar1 + 0x9d;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfba92;
    }
    iVar2 = DAT_01dd5468;
    if (DAT_01dd5468 != 0) {
      while (*(int *)(iVar2 + 8) != param_1) {
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          return;
        }
      }
LAB_00dfba92:
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 1;
    }
  }
  return;
}

// 00DFBF80  thunk_FUN_00dfbaa0  size=5  [between]
void thunk_FUN_00dfbaa0(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_01dd5460;
  if (param_1 == 0) {
    if (0 < DAT_01dd5458) {
      puVar1 = (uint *)(DAT_01dd5454 + 0x2c);
      iVar2 = DAT_01dd5458;
      do {
        if (puVar1[-9] != 0) {
          *puVar1 = *puVar1 | 4;
        }
        puVar1 = puVar1 + 0x9d;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfbb02;
    }
    iVar2 = DAT_01dd5468;
    if (DAT_01dd5468 != 0) {
      while (*(int *)(iVar2 + 8) != param_1) {
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          return;
        }
      }
LAB_00dfbb02:
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 4;
    }
  }
  return;
}

// 00DFBFB0  FUN_00dfbfb0  size=56  [between]
undefined4 FUN_00dfbfb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = DAT_01dd5460; iVar1 = DAT_01dd5468, iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfbfe4;
  }
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 8) == param_1) break;
    iVar1 = *(int *)(iVar2 + 4);
  }
LAB_00dfbfe4:
  return *(undefined4 *)(iVar2 + 0x10);
}

// 00DFBFF0  FUN_00dfbff0  size=59  [between]
uint FUN_00dfbff0(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = DAT_01dd5460; iVar1 = DAT_01dd5468, iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfc024;
  }
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 8) == param_1) break;
    iVar1 = *(int *)(iVar2 + 4);
  }
LAB_00dfc024:
  return *(uint *)(iVar2 + 0x2c) & 2;
}

// 00DFC030  FUN_00dfc030  size=56  [between]
int FUN_00dfc030(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = DAT_01dd5460; iVar1 = DAT_01dd5468, iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfc064;
  }
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 8) == param_1) break;
    iVar1 = *(int *)(iVar2 + 4);
  }
LAB_00dfc064:
  return iVar2 + 0x14;
}

// 00DFC070  FUN_00dfc070  size=57  [between]
undefined4 FUN_00dfc070(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = DAT_01dd5460; iVar1 = DAT_01dd5468, iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 8) == param_1) goto LAB_00dfc0a5;
  }
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    if (*(int *)(iVar2 + 8) == param_1) break;
    iVar1 = *(int *)(iVar2 + 4);
  }
LAB_00dfc0a5:
  return *(undefined4 *)(iVar2 + 0x28);
}

// 00DFC0B0  FUN_00dfc0b0  size=66  [between]
undefined4 FUN_00dfc0b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  for (iVar1 = DAT_01dd5460; iVar2 = DAT_01dd5468, iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 8) == param_2) goto LAB_00dfc0e4;
  }
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 8) == param_2) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
LAB_00dfc0e4:
  uVar3 = FUN_00dfae70(param_1);
  return uVar3;
}

// 00DFC100  FUN_00dfc100  size=118  [between]
void FUN_00dfc100(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  
  DVar3 = timeGetTime();
  piVar5 = &DAT_01dd53f8;
LAB_00dfc110:
  iVar1 = *piVar5;
  if ((iVar1 != 0) && ((uint)piVar5[2] <= DVar3 - piVar5[3])) {
    for (iVar4 = DAT_01dd5460; iVar2 = DAT_01dd5468, iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      if (*(int *)(iVar4 + 8) == iVar1) goto LAB_00dfc154;
    }
    while (iVar4 = iVar2, iVar4 != 0) {
      if (*(int *)(iVar4 + 8) == iVar1) goto LAB_00dfc154;
      iVar2 = *(int *)(iVar4 + 4);
    }
    goto LAB_00dfc162;
  }
  goto LAB_00dfc168;
LAB_00dfc154:
  if (piVar5[1] == 0) {
    *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) & 0xfffffffd;
  }
  else {
    *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 2;
  }
LAB_00dfc162:
  *piVar5 = 0;
LAB_00dfc168:
  piVar5 = piVar5 + 4;
  if (0x1dd5437 < (int)piVar5) {
    return;
  }
  goto LAB_00dfc110;
}

// 00DFC180  FUN_00dfc180  size=199  [between]
void __thiscall FUN_00dfc180(int param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x30) = param_3[1];
  if (iVar2 != 0) {
    if (((uVar1 & 2) == 0) || ((*(uint *)(param_1 + 4) & 0x20) != 0)) {
      if ((*(byte *)(param_1 + 4) & 8) != 0) {
        FUN_012e1d40(iVar2,0);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
      }
    }
    else if ((*(uint *)(param_1 + 4) & 8) == 0) {
      FUN_012e1d40(iVar2,1);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
    }
  }
  if (((*(byte *)(param_1 + 0x2c) & 4) != 0) && ((*(uint *)(param_1 + 4) & 4) == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else if (*(int *)(param_1 + 8) - 3U < 5) {
      FUN_012e1c50(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 8) = 8;
      *(undefined4 *)(param_1 + 0x34) = 5;
    }
  }
  FUN_00dfa380();
  FUN_00dfb580();
  FUN_00dfab30();
  FUN_00dfad00();
  puVar3 = (undefined4 *)(param_1 + 0x34);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// 00DFC250  FUN_00dfc250  size=268  [between]
void __fastcall FUN_00dfc250(int param_1)

{
  int iVar1;
  
LAB_00dfc260:
  do {
    switch(*(undefined4 *)(param_1 + 8)) {
    case 1:
      iVar1 = FUN_00dfb6e0();
      break;
    case 2:
      iVar1 = thunk_FUN_00debc80(*(undefined4 *)(param_1 + 0x14));
      if (iVar1 != 0) {
        return;
      }
      if ((*(byte *)(param_1 + 4) & 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c);
      FUN_00dfa1d0();
      goto LAB_00dfc260;
    case 3:
      iVar1 = FUN_00dfb780();
      break;
    case 4:
      iVar1 = FUN_00dfb910();
      break;
    case 5:
      iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
      if (iVar1 == 5) {
        return;
      }
      if (iVar1 == 6) goto LAB_00dfc30c;
      FUN_00dfae20();
      goto LAB_00dfc260;
    case 6:
      iVar1 = FUN_00dfb9d0();
      break;
    case 7:
      iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
      if (iVar1 != 6) {
        if (iVar1 == 0) {
          FUN_00dfa1d0();
          return;
        }
        return;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
LAB_00dfc30c:
      *(undefined4 *)(param_1 + 8) = 6;
      *(undefined4 *)(param_1 + 0x34) = 4;
      goto LAB_00dfc260;
    case 8:
      if (0 < *(int *)(param_1 + 0x1cc)) {
        *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
        return;
      }
      iVar1 = FUN_012e0490(*(undefined4 *)(param_1 + 0x20));
      if (iVar1 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      goto LAB_00dfc260;
    default:
      return;
    }
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}

// 00DFC380  FUN_00dfc380  size=204  [between]
undefined4 FUN_00dfc380(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_018ce9f0 + DAT_018ce9f4;
  iVar2 = (*DAT_018cea04)(3,iVar4 * 0x274);
  if (iVar2 != 0) {
    DAT_01dd5454 = iVar2;
    if (0 < iVar4) {
      iVar3 = 0;
      iVar2 = iVar4;
      do {
        if (iVar3 + DAT_01dd5454 != 0) {
          FUN_00dfbe90();
        }
        iVar3 = iVar3 + 0x274;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    DAT_01dd5458 = iVar4;
    if (0 < iVar4) {
      iVar2 = 0;
      do {
        piVar1 = (int *)(iVar2 + DAT_01dd5454);
        if ((*(int *)(iVar2 + DAT_01dd5454) == 0) && (piVar1[1] == 0)) {
          if (DAT_01dd5470 == (int *)0x0) {
            DAT_01dd5470 = piVar1;
          }
          if (DAT_01dd5474 != (int *)0x0) {
            if ((int *)DAT_01dd5474[1] != (int *)0x0) {
              *(int *)DAT_01dd5474[1] = (int)piVar1;
            }
            piVar1[1] = DAT_01dd5474[1];
            *piVar1 = (int)DAT_01dd5474;
            DAT_01dd5474[1] = (int)piVar1;
          }
        }
        else {
          FUN_00dd5650(&DAT_016c5d80);
          piVar1 = DAT_01dd5474;
        }
        DAT_01dd5474 = piVar1;
        iVar2 = iVar2 + 0x274;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return 1;
  }
  return 0;
}

// 00DFC450  FUN_00dfc450  size=136  [between]
void FUN_00dfc450(int *param_1)

{
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = -1;
  param_1[10] = -1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  FUN_00dfb4c0();
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    if (DAT_01dd5470 == (int *)0x0) {
      DAT_01dd5470 = param_1;
    }
    if (DAT_01dd5474 != (int *)0x0) {
      if (*(undefined4 **)((int)DAT_01dd5474 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)((int)DAT_01dd5474 + 4) = param_1;
      }
      param_1[1] = *(int *)((int)DAT_01dd5474 + 4);
      *param_1 = (int)DAT_01dd5474;
      *(int **)((int)DAT_01dd5474 + 4) = param_1;
    }
    DAT_01dd5474 = param_1;
    return;
  }
  FUN_00dd5650();
  return;
}

// 00DFC4E0  FUN_00dfc4e0  size=136  [between]
undefined4 __thiscall
FUN_00dfc4e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar1 = (uint *)(param_1 + 0x2c);
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3[0xc];
  puVar3 = param_3;
  puVar4 = (undefined4 *)(param_1 + 0x244);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((*(byte *)(param_3 + 0xc) & 1) == 0) {
    *puVar1 = *puVar1 | 1;
  }
  iVar2 = FUN_00dfa7e0(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00dfc180((undefined4 *)(param_1 + 0x10),puVar1);
  return 1;
}

// 00DFC6A0  FUN_00dfc6a0  size=231  [between]
void __fastcall FUN_00dfc6a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [112];
  undefined4 local_38;
  undefined4 local_34 [12];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_bc;
  if ((*(int *)(param_1 + 0x10) == 3) || (*(int *)(param_1 + 0x10) == 4)) {
    if (DAT_018cea0c == (code *)0x0) {
      FUN_00dd5650(&DAT_016c5db8);
      __security_check_cookie(local_4 ^ (uint)&local_bc);
      return;
    }
    FUN_00dfcfc0();
    local_38 = FUN_00dfae70(local_a8);
    local_bc = *(undefined4 *)(param_1 + 0x14);
    local_b8 = *(undefined4 *)(param_1 + 0x18);
    local_b4 = *(undefined4 *)(param_1 + 0x1c);
    local_b0 = *(undefined4 *)(param_1 + 0x20);
    local_ac = *(undefined4 *)(param_1 + 0x24);
    puVar2 = (undefined4 *)(param_1 + 0x244);
    puVar3 = local_34;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (*DAT_018cea0c)(&local_bc);
    iVar1 = 3;
    do {
      Hw::cTexture::cTexture_5();
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  __security_check_cookie(local_4 ^ (uint)&local_bc);
  return;
}

// 00DFC790  FUN_00dfc790  size=77  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00dfc790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_018ce9ec;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  _DAT_01dd5438 = FUN_00df7f70();
  DAT_01dd53f8 = 0;
  DAT_01dd5408 = 0;
  _DAT_01dd5418 = 0;
  _DAT_01dd5428 = 0;
  if (DAT_018ce9ec == 0) {
    FUN_00df9fa0();
  }
  iVar1 = FUN_00dfc380();
  return iVar1 != 0;
}

// 00DFC810  FUN_00dfc810  size=201  [between]
void FUN_00dfc810(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_01dd5454 != 0) {
    iVar1 = DAT_018ce9f4 + DAT_018ce9f0;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)(DAT_01dd5454 + iVar3);
        if (DAT_01dd5470 == piVar2) {
          DAT_01dd5470 = (int *)piVar2[1];
        }
        if (DAT_01dd5474 == piVar2) {
          DAT_01dd5474 = (int *)*piVar2;
        }
        if (*piVar2 != 0) {
          *(int *)(*piVar2 + 4) = piVar2[1];
        }
        if ((int *)piVar2[1] != (int *)0x0) {
          *(int *)piVar2[1] = *piVar2;
        }
        iVar3 = iVar3 + 0x274;
        iVar1 = iVar1 + -1;
        piVar2[1] = 0;
        *piVar2 = 0;
      } while (iVar1 != 0);
    }
    uVar4 = 0;
    if (DAT_01dd5458 != 0) {
      do {
        iVar1 = 3;
        do {
          Hw::cTexture::cTexture_3();
          iVar1 = iVar1 + -1;
        } while (-1 < iVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_01dd5458);
    }
    (*DAT_018cea08)(3,DAT_01dd5454);
    DAT_01dd5454 = 0;
  }
  return;
}

// 00DFC8E0  FUN_00dfc8e0  size=137  [between]
int FUN_00dfc8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dfbe20();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00dfc4e0(param_1,param_2,param_3);
    if (iVar2 != 0) {
      if ((*piVar1 == 0) && (piVar1[1] == 0)) {
        if (DAT_01dd5460 == (int *)0x0) {
          DAT_01dd5460 = piVar1;
        }
        if (DAT_01dd5464 != (int *)0x0) {
          if (*(undefined4 **)((int)DAT_01dd5464 + 4) != (undefined4 *)0x0) {
            **(undefined4 **)((int)DAT_01dd5464 + 4) = piVar1;
          }
          piVar1[1] = *(int *)((int)DAT_01dd5464 + 4);
          *piVar1 = (int)DAT_01dd5464;
          *(int **)((int)DAT_01dd5464 + 4) = piVar1;
        }
        DAT_01dd5464 = piVar1;
        return piVar1[2];
      }
      FUN_00dd5650(&DAT_016c5d80);
      return piVar1[2];
    }
    FUN_00dfc450(piVar1);
  }
  return 0;
}

// 00DFCA90  FUN_00dfca90  size=57  [between]
void __fastcall FUN_00dfca90(int param_1)

{
  FUN_00dfc180(param_1 + 0x10,(byte *)(param_1 + 0x2c));
  if ((*(byte *)(param_1 + 0x2c) & 4) == 0) {
    if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
      FUN_00dfc6a0();
      return;
    }
    if ((int)*(uint *)(param_1 + 0xc) < 0) {
      FUN_00dfb0b0();
      return;
    }
  }
  return;
}

// 00DFCAD0  FUN_00dfcad0  size=57  [between]
void FUN_00dfcad0(void)

{
  int iVar1;
  
  FUN_00dfc100();
  iVar1 = DAT_01dd5468;
  if (DAT_01dd543c != 0) {
    thunk_FUN_0149a007();
    FUN_012df8b0();
    FUN_012df850();
    iVar1 = DAT_01dd5468;
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_00dfc250();
  }
  return;
}

// 00DFCB10  thunk_FUN_00dfc8e0  size=5  [between]
int thunk_FUN_00dfc8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dfbe20();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00dfc4e0(param_1,param_2,param_3);
    if (iVar2 != 0) {
      if ((*piVar1 == 0) && (piVar1[1] == 0)) {
        if (DAT_01dd5460 == (int *)0x0) {
          DAT_01dd5460 = piVar1;
        }
        if (DAT_01dd5464 != (int *)0x0) {
          if (*(undefined4 **)((int)DAT_01dd5464 + 4) != (undefined4 *)0x0) {
            **(undefined4 **)((int)DAT_01dd5464 + 4) = piVar1;
          }
          piVar1[1] = *(int *)((int)DAT_01dd5464 + 4);
          *piVar1 = (int)DAT_01dd5464;
          *(int **)((int)DAT_01dd5464 + 4) = piVar1;
        }
        DAT_01dd5464 = piVar1;
        return piVar1[2];
      }
      FUN_00dd5650(&DAT_016c5d80);
      return piVar1[2];
    }
    FUN_00dfc450(piVar1);
  }
  return 0;
}

// 00DFCB40  FUN_00dfcb40  size=293  [between]
void FUN_00dfcb40(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_01dd5460;
  piVar2 = DAT_01dd546c;
  while (DAT_01dd546c = piVar2, piVar2 = piVar1, piVar1 = DAT_01dd5468, piVar2 != (int *)0x0) {
    if (DAT_01dd5460 == piVar2) {
      DAT_01dd5460 = (int *)piVar2[1];
    }
    if (DAT_01dd5464 == piVar2) {
      DAT_01dd5464 = (int *)*piVar2;
    }
    piVar1 = (int *)piVar2[1];
    if (*piVar2 != 0) {
      *(int **)(*piVar2 + 4) = piVar1;
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    piVar2[1] = 0;
    *piVar2 = 0;
    if (DAT_01dd5468 == (int *)0x0) {
      DAT_01dd5468 = piVar2;
    }
    if (DAT_01dd546c != (int *)0x0) {
      if ((undefined4 *)DAT_01dd546c[1] != (undefined4 *)0x0) {
        *(undefined4 *)DAT_01dd546c[1] = piVar2;
      }
      piVar2[1] = DAT_01dd546c[1];
      *piVar2 = (int)DAT_01dd546c;
      DAT_01dd546c[1] = (int)piVar2;
    }
  }
  while (piVar1 != (int *)0x0) {
    FUN_00dfc180(piVar1 + 4,piVar1 + 0xb);
    if ((*(byte *)(piVar1 + 0xb) & 4) == 0) {
      if ((piVar1[3] & 4U) == 0) {
        if (piVar1[3] < 0) {
          FUN_00dfb0b0();
        }
      }
      else {
        FUN_00dfc6a0();
      }
    }
    if (piVar1[0xf] == 0) {
      if (DAT_01dd5468 == piVar1) {
        DAT_01dd5468 = (int *)piVar1[1];
      }
      if (DAT_01dd546c == piVar1) {
        DAT_01dd546c = (int *)*piVar1;
      }
      piVar2 = (int *)piVar1[1];
      if (*piVar1 != 0) {
        *(int **)(*piVar1 + 4) = piVar2;
      }
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      piVar1[1] = 0;
      *piVar1 = 0;
      FUN_00dfc450(piVar1);
      piVar1 = piVar2;
    }
    else {
      piVar1 = (int *)piVar1[1];
    }
  }
  return;
}

// 00DFCC70  thunk_FUN_00dfcb40  size=5  [between]
void thunk_FUN_00dfcb40(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_01dd5460;
  piVar2 = DAT_01dd546c;
  while (DAT_01dd546c = piVar2, piVar2 = piVar1, piVar1 = DAT_01dd5468, piVar2 != (int *)0x0) {
    if (DAT_01dd5460 == piVar2) {
      DAT_01dd5460 = (int *)piVar2[1];
    }
    if (DAT_01dd5464 == piVar2) {
      DAT_01dd5464 = (int *)*piVar2;
    }
    piVar1 = (int *)piVar2[1];
    if (*piVar2 != 0) {
      *(int **)(*piVar2 + 4) = piVar1;
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    piVar2[1] = 0;
    *piVar2 = 0;
    if (DAT_01dd5468 == (int *)0x0) {
      DAT_01dd5468 = piVar2;
    }
    if (DAT_01dd546c != (int *)0x0) {
      if ((undefined4 *)DAT_01dd546c[1] != (undefined4 *)0x0) {
        *(undefined4 *)DAT_01dd546c[1] = piVar2;
      }
      piVar2[1] = DAT_01dd546c[1];
      *piVar2 = (int)DAT_01dd546c;
      DAT_01dd546c[1] = (int)piVar2;
    }
  }
  while (piVar1 != (int *)0x0) {
    FUN_00dfc180(piVar1 + 4,piVar1 + 0xb);
    if ((*(byte *)(piVar1 + 0xb) & 4) == 0) {
      if ((piVar1[3] & 4U) == 0) {
        if (piVar1[3] < 0) {
          FUN_00dfb0b0();
        }
      }
      else {
        FUN_00dfc6a0();
      }
    }
    if (piVar1[0xf] == 0) {
      if (DAT_01dd5468 == piVar1) {
        DAT_01dd5468 = (int *)piVar1[1];
      }
      if (DAT_01dd546c == piVar1) {
        DAT_01dd546c = (int *)*piVar1;
      }
      piVar2 = (int *)piVar1[1];
      if (*piVar1 != 0) {
        *(int **)(*piVar1 + 4) = piVar2;
      }
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      piVar1[1] = 0;
      *piVar1 = 0;
      FUN_00dfc450(piVar1);
      piVar1 = piVar2;
    }
    else {
      piVar1 = (int *)piVar1[1];
    }
  }
  return;
}

// 00DFCC80  FUN_00dfcc80  size=122  [between]
void FUN_00dfcc80(void)

{
  uint *puVar1;
  int iVar2;
  
  if (0 < DAT_01dd5458) {
    puVar1 = (uint *)(DAT_01dd5454 + 0x2c);
    iVar2 = DAT_01dd5458;
    do {
      if (puVar1[-9] != 0) {
        *puVar1 = *puVar1 | 4;
      }
      puVar1 = puVar1 + 0x9d;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00dfaf80();
  while (iVar2 == 0) {
    FUN_00dfcb40();
    FUN_00dfc100();
    iVar2 = DAT_01dd5468;
    if (DAT_01dd543c != 0) {
      thunk_FUN_0149a007();
      FUN_012df8b0();
      FUN_012df850();
      iVar2 = DAT_01dd5468;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      FUN_00dfc250();
    }
    iVar2 = FUN_00dfaf80();
  }
  return;
}

// 00DFCD00  FUN_00dfcd00  size=162  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfcd00(void)

{
  uint *puVar1;
  int iVar2;
  
  if (0 < DAT_01dd5458) {
    puVar1 = (uint *)(DAT_01dd5454 + 0x2c);
    iVar2 = DAT_01dd5458;
    do {
      if (puVar1[-9] != 0) {
        *puVar1 = *puVar1 | 4;
      }
      puVar1 = puVar1 + 0x9d;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00dfaf80();
  while (iVar2 == 0) {
    FUN_00dfcb40();
    FUN_00dfc100();
    iVar2 = DAT_01dd5468;
    if (DAT_01dd543c != 0) {
      thunk_FUN_0149a007();
      FUN_012df8b0();
      FUN_012df850();
      iVar2 = DAT_01dd5468;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      FUN_00dfc250();
    }
    iVar2 = FUN_00dfaf80();
  }
  FUN_00dfc810();
  if (DAT_018ce9ec == 0) {
    FUN_00dfa080();
  }
  DAT_01dd53f8 = 0;
  DAT_01dd5408 = 0;
  _DAT_01dd5418 = 0;
  _DAT_01dd5428 = 0;
  return;
}

// 00DFCFC0  FUN_00dfcfc0  size=119  [between]
int __fastcall FUN_00dfcfc0(int param_1)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 0x88) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x94) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  return param_1;
}

// 00DFD140  FUN_00dfd140  size=28  [between]
int FUN_00dfd140(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (((DAT_018cea10 != -1) && (iVar1 = DAT_018cea10, param_1 != 0)) &&
     (iVar1 = param_1, DAT_018cea10 == param_1)) {
    return 0;
  }
  return iVar1;
}

// 00DFD2D0  FUN_00dfd2d0  size=99  [between]
undefined4 FUN_00dfd2d0(size_t *param_1,undefined4 param_2)

{
  size_t _Size;
  
  _Size = *param_1;
  DAT_01dd547c = (void *)FUN_00dd3580(_Size,param_2);
  DAT_01dd5480 = (void *)FUN_00dd3580(_Size,param_2);
  if ((DAT_01dd547c != (void *)0x0) && (DAT_01dd5480 != (void *)0x0)) {
    _memset(DAT_01dd547c,0,_Size);
    _memset(DAT_01dd5480,0,_Size);
    DAT_01dd5478 = _Size;
    return 1;
  }
  return 0;
}

// 00DFD500  FUN_00dfd500  size=47  [between]
bool FUN_00dfd500(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Hw::cHeapVariable::vf40(0x4000,param_1,"Variable");
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00dd7240();
  return iVar1 != 0;
}

// 00DFD530  FUN_00dfd530  size=10  [between]
void FUN_00dfd530(void)

{
  FUN_00981b40();
  return;
}

// 00DFD540  FUN_00dfd540  size=20  [between]
void FUN_00dfd540(void)

{
  FUN_00dd7270();
  Hw::cHeapVariable::vf08();
  return;
}

// 00DFD560  FUN_00dfd560  size=16  [between]
void FUN_00dfd560(void)

{
  DAT_018cea10 = 0xffffffff;
  return;
}

// 00DFD570  FUN_00dfd570  size=10  [between]
void FUN_00dfd570(undefined4 param_1)

{
  DAT_018cea10 = param_1;
  return;
}

// 00DFD580  FUN_00dfd580  size=6  [between]
undefined4 FUN_00dfd580(void)

{
  return 1;
}

// 00DFD590  FUN_00dfd590  size=3  [between]
undefined4 FUN_00dfd590(void)

{
  return 0;
}

// 00DFD640  FUN_00dfd640  size=16  [between]
void FUN_00dfd640(undefined4 param_1,undefined4 param_2)

{
  FUN_00981d10(param_2);
  return;
}

// 00DFD680  FUN_00dfd680  size=3  [between]
undefined4 FUN_00dfd680(void)

{
  return 0;
}

// 00DFD6A0  FUN_00dfd6a0  size=6  [between]
undefined4 FUN_00dfd6a0(void)

{
  return 1;
}

// 00DFD6B0  FUN_00dfd6b0  size=5  [between]
undefined4 FUN_00dfd6b0(undefined4 param_1)

{
  return param_1;
}

// 00DFD6C0  FUN_00dfd6c0  size=6  [between]
undefined4 FUN_00dfd6c0(void)

{
  return DAT_01dd5478;
}

// 00DFD6F0  thunk_FUN_00dfd2d0  size=5  [between]
undefined4 thunk_FUN_00dfd2d0(size_t *param_1,undefined4 param_2)

{
  size_t _Size;
  
  _Size = *param_1;
  DAT_01dd547c = (void *)FUN_00dd3580(_Size,param_2);
  DAT_01dd5480 = (void *)FUN_00dd3580(_Size,param_2);
  if ((DAT_01dd547c != (void *)0x0) && (DAT_01dd5480 != (void *)0x0)) {
    _memset(DAT_01dd547c,0,_Size);
    _memset(DAT_01dd5480,0,_Size);
    DAT_01dd5478 = _Size;
    return 1;
  }
  return 0;
}

// 00DFD7A0  FUN_00dfd7a0  size=6  [between]
undefined4 FUN_00dfd7a0(void)

{
  return 1;
}

// 00DFD8E0  FUN_00dfd8e0  size=23  [between]
void __fastcall FUN_00dfd8e0(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = (*(code *)(&PTR_LAB_018cead0)[*(int *)(param_1 + 8)])();
  } while (iVar1 != 0);
  return;
}

// 00DFDA60  FUN_00dfda60  size=23  [between]
void __fastcall FUN_00dfda60(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = (*(code *)(&PTR_LAB_018ceaf4)[*(int *)(param_1 + 8)])();
  } while (iVar1 != 0);
  return;
}

// 00DFE290  FUN_00dfe290  size=42  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00dfe290(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01dd5678;
  do {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 0x5c;
  } while ((int)puVar1 < 0x1dd7338);
  _DAT_01dd5508 = 0x6000000;
  return 1;
}

// 00DFE2D0  FUN_00dfe2d0  size=47  [between]
void FUN_00dfe2d0(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_01dd5680;
  do {
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      iVar1 = (*(code *)(&PTR_LAB_018cead0)[*piVar2])();
    }
    piVar2 = piVar2 + 0x5c;
  } while ((int)piVar2 < 0x1dd7340);
  return;
}

// 00DFE380  Hw::cStragePackageFileControlWork  size=82  [class]
undefined4 * Hw::cStragePackageFileControlWork(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    if ((param_1 & 0xff000000) == 0x6000000) {
      iVar1 = 0;
      puVar2 = &DAT_01dd5678;
      do {
        if (*puVar2 == param_1) {
          return &DAT_01dd5678 + iVar1 * 0x5c;
        }
        puVar2 = puVar2 + 0x5c;
        iVar1 = iVar1 + 1;
      } while ((int)puVar2 < 0x1dd7338);
      return (undefined4 *)0x0;
    }
    FUN_00dd5650(&DAT_016ca1f4);
  }
  return (undefined4 *)0x0;
}

// 00DFE420  FUN_00dfe420  size=132  [between]
undefined4 __thiscall
FUN_00dfe420(int *param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,int param_7)

{
  if ((param_1[2] == 0) && (*param_1 == 0)) {
    param_1[3] = param_2;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[8] = param_4;
    param_1[7] = param_3;
    param_1[2] = 1;
    param_1[10] = param_6;
    FID_conflict__memcpy(param_1 + 0xb,param_5,0x13c);
    *param_1 = param_7;
    return 1;
  }
  FUN_00dd5650(&DAT_016ca280);
  return 0;
}

// 00DFE4D0  FUN_00dfe4d0  size=82  [between]
undefined4 __thiscall FUN_00dfe4d0(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 8) = 5;
    return 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 8) = 7;
    return 1;
  }
  if (-1 < *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}

// 00DFE530  FUN_00dfe530  size=42  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00dfe530(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01dd7338;
  do {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 0x5a;
  } while ((int)puVar1 < 0x1dd8f58);
  _DAT_01dd5504 = 0x5000000;
  return 1;
}

// 00DFE570  FUN_00dfe570  size=47  [between]
void FUN_00dfe570(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_01dd7340;
  do {
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      iVar1 = (*(code *)(&PTR_LAB_018ceaf4)[*piVar2])();
    }
    piVar2 = piVar2 + 0x5a;
  } while ((int)piVar2 < 0x1dd8f60);
  return;
}

// 00DFE620  Hw::cStragePackageFileEnumWork  size=82  [class]
undefined4 * Hw::cStragePackageFileEnumWork(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    if ((param_1 & 0xff000000) == 0x5000000) {
      iVar1 = 0;
      puVar2 = &DAT_01dd7338;
      do {
        if (*puVar2 == param_1) {
          return &DAT_01dd7338 + iVar1 * 0x5a;
        }
        puVar2 = puVar2 + 0x5a;
        iVar1 = iVar1 + 1;
      } while ((int)puVar2 < 0x1dd8f58);
      return (undefined4 *)0x0;
    }
    FUN_00dd5650(&DAT_016ca2c0);
  }
  return (undefined4 *)0x0;
}

// 00DFE6C0  FUN_00dfe6c0  size=120  [between]
undefined4 __thiscall
FUN_00dfe6c0(int *param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,int param_7)

{
  if ((param_1[2] == 0) && (*param_1 == 0)) {
    param_1[3] = param_2;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = param_4;
    param_1[7] = param_3;
    param_1[2] = 1;
    param_1[10] = param_6;
    FID_conflict__memcpy(param_1 + 0xb,param_5,0x13c);
    *param_1 = param_7;
    return 1;
  }
  FUN_00dd5650(&DAT_016ca344);
  return 0;
}

// 00DFE760  FUN_00dfe760  size=82  [between]
undefined4 __thiscall FUN_00dfe760(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 8) = 5;
    return 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 8) = 7;
    return 1;
  }
  if (-1 < *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}

// 00DFE7C0  FUN_00dfe7c0  size=72  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00dfe7c0(void)

{
  int iVar1;
  
  _DAT_01dd5500 = 0;
  _DAT_01dd550c = 0x1000000;
  DAT_01dd5510 = 0x2000000;
  DAT_01dd5514 = 0x3000000;
  DAT_01dd5518 = 0x4000000;
  iVar1 = FUN_00dfe530();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00dfe290();
  return iVar1 != 0;
}

// 00DFE810  FUN_00dfe810  size=10  [between]
void FUN_00dfe810(void)

{
  FUN_00dfe570();
  FUN_00dfe2d0();
  return;
}

// 00DFE820  FUN_00dfe820  size=1  [between]
void FUN_00dfe820(void)

{
  return;
}

// 00DFE870  FUN_00dfe870  size=6  [between]
undefined4 FUN_00dfe870(void)

{
  return 1;
}

// 00DFE880  FUN_00dfe880  size=6  [between]
undefined4 FUN_00dfe880(void)

{
  return 1;
}

// 00DFE890  FUN_00dfe890  size=1  [between]
void FUN_00dfe890(void)

{
  return;
}

// 00DFEA40  Hw::cStrageFileEnumWork  size=39  [class]
undefined4 Hw::cStrageFileEnumWork(undefined4 param_1,uint param_2)

{
  if ((param_2 != 0) && ((param_2 & 0xff000000) != 0x3000000)) {
    FUN_00dd5650(&DAT_016ca188);
  }
  return 6;
}

// 00DFEA70  Hw::cStrageFileEnumWork_2  size=39  [class]
undefined4 Hw::cStrageFileEnumWork_2(uint param_1)

{
  if ((param_1 != 0) && ((param_1 & 0xff000000) != 0x3000000)) {
    FUN_00dd5650(&DAT_016ca188);
  }
  return 6;
}

// 00DFEB00  Hw::cStragePackageControlWork  size=39  [class]
undefined4 Hw::cStragePackageControlWork(uint param_1)

{
  if ((param_1 != 0) && ((param_1 & 0xff000000) != 0x2000000)) {
    FUN_00dd5650(&DAT_016ca1bc);
  }
  return 6;
}

// 00DFEB30  Hw::cStragePackageControlWork_2  size=39  [class]
undefined4 Hw::cStragePackageControlWork_2(undefined4 param_1,uint param_2)

{
  if ((param_2 != 0) && ((param_2 & 0xff000000) != 0x2000000)) {
    FUN_00dd5650(&DAT_016ca1bc);
  }
  return 6;
}

// 00DFEB60  Hw::cStragePackageControlWork_3  size=39  [class]
undefined4 Hw::cStragePackageControlWork_3(uint param_1)

{
  if ((param_1 != 0) && ((param_1 & 0xff000000) != 0x2000000)) {
    FUN_00dd5650(&DAT_016ca1bc);
  }
  return 6;
}

// 00DFEC70  FUN_00dfec70  size=52  [between]
undefined4 FUN_00dfec70(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Hw::cStragePackageFileControlWork(param_2);
  if (iVar1 == 0) {
    return 6;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x16c);
  }
  if (*(int *)(iVar1 + 8) != 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

// 00DFECB0  FUN_00dfecb0  size=60  [between]
undefined4 FUN_00dfecb0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)Hw::cStragePackageFileControlWork(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 6;
  }
  if (puVar1[2] != 0) {
    FUN_00dd5650(&DAT_016ca0c8);
    return 2;
  }
  *puVar1 = 0;
  return 1;
}

// 00DFEEB0  FUN_00dfeeb0  size=60  [between]
undefined4 FUN_00dfeeb0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)Hw::cStragePackageFileEnumWork(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 6;
  }
  if (puVar1[2] != 0) {
    FUN_00dd5650(&DAT_016ca110);
    return 2;
  }
  *puVar1 = 0;
  return 1;
}

// 00DFF070  Hw::cStrageFileControlWork  size=151  [class]
/* WARNING: Removing unreachable block (ram,0x00dff0b6) */

undefined4 Hw::cStrageFileControlWork(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = param_2 & 0xff000000;
  if ((int)uVar1 < 0x4000001) {
    if ((uVar1 != 0x4000000) && (uVar1 != 0x1000000)) {
      if (uVar1 == 0x2000000) {
        uVar2 = cStragePackageControlWork_2();
        return uVar2;
      }
      if (uVar1 == 0x3000000) {
        uVar2 = cStrageFileEnumWork();
        return uVar2;
      }
    }
  }
  else if (uVar1 == 0x5000000) {
    iVar3 = cStragePackageFileEnumWork(param_2);
    if (iVar3 != 0) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *(undefined4 *)(iVar3 + 0x24);
      }
      if (*(int *)(iVar3 + 8) == 0) {
        return *(undefined4 *)(iVar3 + 0x10);
      }
      return 0;
    }
  }
  else if (uVar1 == 0x6000000) {
    uVar2 = FUN_00dfec70();
    return uVar2;
  }
  return 6;
}

// 00DFF110  Hw::cStrageFileControlWork_2  size=121  [class]
/* WARNING: Removing unreachable block (ram,0x00dff156) */

undefined4 Hw::cStrageFileControlWork_2(uint param_1)

{
  undefined4 uVar1;
  
  param_1 = param_1 & 0xff000000;
  if ((int)param_1 < 0x4000001) {
    if ((param_1 != 0x4000000) && (param_1 != 0x1000000)) {
      if (param_1 == 0x2000000) {
        uVar1 = cStragePackageControlWork_3();
        return uVar1;
      }
      if (param_1 == 0x3000000) {
        uVar1 = cStrageFileEnumWork_2();
        return uVar1;
      }
    }
  }
  else {
    if (param_1 == 0x5000000) {
      uVar1 = FUN_00dfeeb0();
      return uVar1;
    }
    if (param_1 == 0x6000000) {
      uVar1 = FUN_00dfecb0();
      return uVar1;
    }
  }
  return 6;
}

// 00DFF3B0  FUN_00dff3b0  size=106  [callgraph]
undefined4 __fastcall FUN_00dff3b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Hw::cStrageFileControlWork(0,*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      Hw::cStrageFileControlWork_2(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar2 = FUN_00dfe4d0(iVar1);
      return uVar2;
    }
    if (*(int *)(param_1 + 0x168) != 4) {
      *(undefined4 *)(param_1 + 8) = 3;
      return 1;
    }
    if ((*(uint *)(param_1 + 4) & 0x80000000) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}

// 00DFF4B0  FUN_00dff4b0  size=59  [callgraph]
undefined4 __fastcall FUN_00dff4b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18) & 0xff000000;
  if (((((int)uVar1 < 0x4000001) && (uVar1 != 0x4000000)) && (uVar1 != 0x1000000)) &&
     (uVar1 == 0x2000000)) {
    Hw::cStragePackageControlWork(*(uint *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 6;
  return 1;
}

// 00DFF4F0  FUN_00dff4f0  size=99  [callgraph]
undefined4 __fastcall FUN_00dff4f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Hw::cStrageFileControlWork(0,*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    return 0;
  }
  Hw::cStrageFileControlWork_2(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 2) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (*(uint *)(param_1 + 0x24) < *(uint *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 8) = 3;
      return 1;
    }
    *(undefined4 *)(param_1 + 8) = 7;
    return 1;
  }
  uVar2 = FUN_00dfe4d0(2);
  return uVar2;
}

// 00DFF560  FUN_00dff560  size=59  [callgraph]
undefined4 __fastcall FUN_00dff560(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 0xff000000;
  if (((((int)uVar1 < 0x4000001) && (uVar1 != 0x4000000)) && (uVar1 != 0x1000000)) &&
     (uVar1 == 0x2000000)) {
    Hw::cStragePackageControlWork(*(uint *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 8) = 8;
  return 1;
}

// 00DFF5A0  FUN_00dff5a0  size=67  [callgraph]
undefined4 __fastcall FUN_00dff5a0(int param_1)

{
  int iVar1;
  
  iVar1 = Hw::cStrageFileControlWork(0,*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    Hw::cStrageFileControlWork_2(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((*(uint *)(param_1 + 4) & 0x80000000) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}

// 00DFF620  FUN_00dff620  size=47  [callgraph]
void __fastcall FUN_00dff620(int param_1)

{
  int iVar1;
  
  iVar1 = Hw::cStrageFileControlWork(0,*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 3;
    return;
  }
  FUN_00dfe760(iVar1);
  return;
}

// 00DFF680  FUN_00dff680  size=49  [callgraph]
void __fastcall FUN_00dff680(int param_1)

{
  int iVar1;
  
  iVar1 = Hw::cStrageFileControlWork(param_1 + 0x24,*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 5;
    return;
  }
  FUN_00dfe760(iVar1);
  return;
}

// 00DFF6C0  FUN_00dff6c0  size=59  [callgraph]
undefined4 __fastcall FUN_00dff6c0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18) & 0xff000000;
  if (((((int)uVar1 < 0x4000001) && (uVar1 != 0x4000000)) && (uVar1 != 0x1000000)) &&
     (uVar1 == 0x2000000)) {
    Hw::cStragePackageControlWork(*(uint *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 6;
  return 1;
}

// 00DFF700  FUN_00dff700  size=56  [callgraph]
undefined4 __fastcall FUN_00dff700(int param_1)

{
  int iVar1;
  
  iVar1 = Hw::cStrageFileControlWork(0,*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    return 0;
  }
  Hw::cStrageFileControlWork_2(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 7;
  return 1;
}

// 00DFF740  FUN_00dff740  size=59  [callgraph]
undefined4 __fastcall FUN_00dff740(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 0xff000000;
  if (((((int)uVar1 < 0x4000001) && (uVar1 != 0x4000000)) && (uVar1 != 0x1000000)) &&
     (uVar1 == 0x2000000)) {
    Hw::cStragePackageControlWork(*(uint *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 8) = 8;
  return 1;
}

// 00DFF780  FUN_00dff780  size=67  [callgraph]
undefined4 __fastcall FUN_00dff780(int param_1)

{
  int iVar1;
  
  iVar1 = Hw::cStrageFileControlWork(0,*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    Hw::cStrageFileControlWork_2(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((*(uint *)(param_1 + 4) & 0x80000000) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}

// 00F9B2B0  Hw::GraphicDevice  size=2249  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::GraphicDevice(int *param_1)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined2 in_FPUControlWord;
  float10 fVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 uStack_1ec;
  int *piStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int *piStack_1d0;
  int *piStack_1cc;
  undefined4 uStack_1c8;
  undefined4 *puStack_1c4;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  undefined1 local_188 [4];
  undefined4 uStack_184;
  undefined4 uStack_11c;
  uint uStack_c4;
  float afStack_9c [38];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&uStack_1b4;
  if (DAT_01f206d4 != 0) {
    __security_check_cookie(local_4 ^ (uint)&uStack_1b4);
    return;
  }
  _DAT_01f206b8 = 0.0;
  DAT_01f20668 = 0;
  DAT_01f2066c = 0;
  _DAT_01f20670 = 0;
  _DAT_01f20674 = 0;
  _DAT_01f20678 = 0;
  _DAT_01f2067c = 0;
  DAT_01f20698 = 0;
  _DAT_01f2069c = 1.12104e-44;
  DAT_01f206a0 = 0;
  DAT_01f206a4 = 0;
  _DAT_01f206a8 = 0;
  _DAT_01f206ac = 0;
  _DAT_01f206b0 = 0;
  _DAT_01f206b4 = 0;
  _DAT_01f206bc = 1;
  _DAT_01f206c0 = 0;
  _DAT_01f206c4 = 0;
  _DAT_01f206c8 = 0;
  _DAT_01f206cc = 0;
  DAT_01f206dc = *param_1;
  DAT_01f206e0 = param_1[1];
  puStack_1c4 = (undefined4 *)0xf9b38b;
  iVar3 = FUN_00f981c0();
  if (iVar3 != 0) {
    puStack_1c4 = (undefined4 *)0xf9b398;
    iVar3 = FUN_00f98250();
    if (iVar3 != 0) {
      puStack_1c4 = (undefined4 *)local_188;
      uStack_1c8 = 1;
      piStack_1cc = (int *)0x0;
      piStack_1d0 = DAT_01f206d8;
      uStack_1d4 = 0xf9b3b4;
      iVar3 = (**(code **)(*DAT_01f206d8 + 0x38))();
      if (iVar3 < 0) {
        puStack_1c4 = (undefined4 *)&DAT_016eb820;
        goto LAB_00f9bb64;
      }
      if (0xfffe02ff < uStack_c4) {
        DAT_01f20698 = 1;
      }
      DAT_01f206a4 = uStack_11c;
      puStack_1c4 = &uStack_198;
      uStack_1c8 = uStack_184;
      piStack_1cc = DAT_01f206d8;
      piStack_1d0 = (int *)0xf9b3f3;
      (**(code **)(*DAT_01f206d8 + 0x20))();
      piStack_1d0 = (int *)0x4d;
      uStack_1d4 = 3;
      uStack_1d8 = 2;
      uStack_1dc = uStack_198;
      iStack_1e0 = iStack_194;
      iStack_1e4 = iStack_190;
      piStack_1e8 = DAT_01f206d8;
      uStack_1ec = 0xf9b415;
      iVar3 = (**(code **)(*DAT_01f206d8 + 0x28))();
      if (iVar3 < 0) {
        _DAT_01f206bc = 0;
      }
      uStack_1ec = 0x4c4c554e;
      fVar13 = 1.4013e-45;
      iVar3 = (**(code **)(*DAT_01f206d8 + 0x28))
                        (DAT_01f206d8,uStack_1b0._4_4_,SUB84(uStack_1b0,0),uStack_1b4,1,1);
      if (iVar3 < 0) {
        _DAT_01f206bc = 0;
      }
      afStack_9c[0] = 1.12104e-44;
      afStack_9c[1] = 5.60519e-45;
      afStack_9c[2] = 2.8026e-45;
      iStack_1e4 = 0;
      piStack_1e8 = (int *)0x0;
      iVar3 = 0;
      do {
        fVar10 = afStack_9c[iVar3];
        iVar4 = (**(code **)(*DAT_01f206d8 + 0x2c))
                          (DAT_01f206d8,0,1,DAT_01f20628,DAT_01f20640,fVar10,&iStack_1e4);
        if ((-1 < iVar4) &&
           (iVar4 = (**(code **)(*DAT_01f206d8 + 0x2c))
                              (DAT_01f206d8,0,1,0x4b,DAT_01f20640,fVar10,&piStack_1e8), -1 < iVar4))
        break;
        fVar10 = fVar13;
        iVar3 = iVar3 + 1;
        fVar13 = fVar10;
      } while (iVar3 < 3);
      iStack_1e0 = 0;
      uStack_1ec = 0;
      iVar3 = 0;
      do {
        fVar9 = afStack_9c[iVar3];
        iVar4 = (**(code **)(*DAT_01f206d8 + 0x2c))
                          (DAT_01f206d8,0,1,DAT_01f205f0,DAT_01f20608,fVar9,&iStack_1e0);
        if ((-1 < iVar4) &&
           (iVar4 = (**(code **)(*DAT_01f206d8 + 0x2c))
                              (DAT_01f206d8,0,1,0x4b,DAT_01f20608,fVar9,&uStack_1ec), -1 < iVar4))
        break;
        fVar9 = fVar13;
        iVar3 = iVar3 + 1;
        fVar13 = fVar9;
      } while (iVar3 < 3);
      _DAT_01f2069c = fVar10;
      if ((fVar10 != fVar9) && ((int)fVar9 <= (int)fVar10)) {
        _DAT_01f2069c = fVar9;
      }
      DAT_01f206a0 = 0;
      if ((int)_DAT_01f2069c < (int)DAT_01f20708) {
        DAT_01f20708 = _DAT_01f2069c;
      }
      if (DAT_01f20708 != 0.0) {
        _DAT_01f20634 = 0;
        _DAT_01f205fc = 0;
      }
      _DAT_01f205f8 = 0;
      if (DAT_01f20708 == 2.8026e-45) {
        _DAT_01f205f8 = 2;
      }
      else if (DAT_01f20708 == 5.60519e-45) {
        _DAT_01f205f8 = 4;
      }
      else if (DAT_01f20708 == 1.12104e-44) {
        _DAT_01f205f8 = 8;
      }
      _DAT_01f20630 = _DAT_01f205f8;
      iVar3 = (**(code **)(*DAT_01f206d8 + 0x18))(DAT_01f206d8,0,DAT_01f205f0);
      afStack_9c[0] = 1920.0;
      afStack_9c[1] = 1080.0;
      iVar4 = 0;
      afStack_9c[2] = 0.0;
      afStack_9c[3] = 1680.0;
      afStack_9c[4] = 1050.0;
      afStack_9c[5] = 0.0;
      afStack_9c[6] = 1366.0;
      afStack_9c[7] = 768.0;
      afStack_9c[8] = 0.0;
      afStack_9c[9] = 1280.0;
      afStack_9c[10] = 720.0;
      afStack_9c[0xb] = 0.0;
      afStack_9c[0xc] = 1024.0;
      afStack_9c[0xd] = 768.0;
      afStack_9c[0xe] = 0.0;
      afStack_9c[0xf] = 800.0;
      afStack_9c[0x10] = 600.0;
      afStack_9c[0x11] = 0.0;
      if (0 < iVar3) {
        do {
          iVar5 = (**(code **)(*DAT_01f206d8 + 0x1c))(DAT_01f206d8,0,0x16,iVar4,&piStack_1e8);
          if (iVar5 < 0) {
            FUN_00dd5650(&DAT_016eb834);
          }
          else {
            fVar13 = (float)(int)piStack_1e8;
            if ((int)piStack_1e8 < 0) {
              fVar13 = fVar13 + 4.2949673e+09;
            }
            puVar6 = &DAT_01f20668;
            pfVar8 = afStack_9c + 1;
            do {
              if (fVar13 == pfVar8[-1]) {
                fVar10 = (float)iStack_1e4;
                if (iStack_1e4 < 0) {
                  fVar10 = fVar10 + 4.2949673e+09;
                }
                if (fVar10 == *pfVar8) {
                  fVar10 = (float)iStack_1e0;
                  if (iStack_1e0 < 0) {
                    fVar10 = fVar10 + 4.2949673e+09;
                  }
                  puVar6[6] = iStack_1e0;
                  pfVar8[1] = fVar10;
                  *puVar6 = 1;
                }
              }
              puVar6 = puVar6 + 1;
              pfVar8 = pfVar8 + 3;
            } while ((int)puVar6 < 0x1f20680);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      bVar1 = true;
      iVar3 = 0;
      pfVar8 = afStack_9c + 2;
      do {
        if ((&DAT_01f20668)[iVar3] != 0) {
          fVar13 = (float)DAT_01f205e8;
          if (DAT_01f205e8 < 0) {
            fVar13 = fVar13 + 4.2949673e+09;
          }
          if (pfVar8[-2] <= fVar13) {
            DAT_01f205e8 = (int)(longlong)ROUND(afStack_9c[iVar3 * 3]);
            DAT_01f205ec = (int)(longlong)ROUND(afStack_9c[iVar3 * 3 + 1]);
            DAT_01f20620 = DAT_01f205e8;
            DAT_01f20624 = DAT_01f205ec;
            _DAT_01f206a8 = DAT_01f205e8;
            _DAT_01f206ac = DAT_01f205ec;
            DAT_01f206dc = DAT_01f205e8;
            DAT_01f206e0 = DAT_01f205ec;
            if (bVar1) {
              _DAT_01f20618 = (undefined4)(longlong)ROUND(afStack_9c[iVar3 * 3 + 2]);
            }
            break;
          }
          if (bVar1) {
            bVar1 = false;
            _DAT_01f20618 = (undefined4)(longlong)ROUND(*pfVar8);
          }
        }
        iVar3 = iVar3 + 1;
        pfVar8 = pfVar8 + 3;
      } while (iVar3 < 6);
      DAT_01f206e4 = DAT_01f206dc;
      _DAT_018da490 = (float)DAT_01f206dc / 1280.0;
      DAT_01f206e8 = DAT_01f206e0;
      _DAT_018da494 = (float)DAT_01f206e0 / 720.0;
      DAT_01f205e8 = FUN_00df84f0();
      DAT_01f205ec = FUN_00df8500();
      iVar3 = FUN_00df8520();
      _DAT_01f206b0 = DAT_01f205e8;
      _DAT_01f206b4 = DAT_01f205ec;
      if (iVar3 != 0) {
        _DAT_01f206b0 = DAT_01f20620;
        _DAT_01f206b4 = DAT_01f20624;
      }
      fVar13 = (float)_DAT_01f206b4;
      if (_DAT_01f206b4 < 0) {
        fVar13 = fVar13 + 4.2949673e+09;
      }
      fVar10 = (float)_DAT_01f206b0;
      if (_DAT_01f206b0 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      _DAT_01f206b8 = fVar13 / fVar10;
      if (0.5625 <= _DAT_01f206b8) {
        _DAT_01f206c0 = 0;
        _DAT_01f206c4 = (uint)(_DAT_01f206b4 - (int)(longlong)ROUND(fVar10 * 0.0625 * 9.0)) >> 1;
        _DAT_01f206cc = _DAT_01f206b4 + _DAT_01f206c4 * -2;
        _DAT_01f206c8 = _DAT_01f206b0;
      }
      else {
        _DAT_01f206c4 = 0;
        _DAT_01f206c0 = (uint)(_DAT_01f206b0 - (int)(longlong)ROUND((fVar13 / 9.0) * 16.0)) >> 1;
        _DAT_01f206c8 = _DAT_01f206b0 + _DAT_01f206c0 * -2;
        _DAT_01f206cc = _DAT_01f206b4;
      }
      iVar3 = FUN_00df8520();
      DAT_01f205e4 = &DAT_01f20620;
      if (iVar3 == 0) {
        DAT_01f205e4 = &DAT_01f205e8;
      }
      iVar3 = FUN_00df8520();
      puVar6 = &DAT_01f20620;
      if (iVar3 == 0) {
        puVar6 = &DAT_01f205e8;
      }
      iVar3 = *DAT_01f206d8;
      uVar7 = FUN_00df84c0(0x44,puVar6,&DAT_01f206d4);
      iVar3 = (**(code **)(iVar3 + 0x40))(DAT_01f206d8,0,1,uVar7);
      if (-1 < iVar3) {
        DAT_01f2070c = 0;
        _DAT_01f206d0 = param_1[2];
        if (_DAT_01f206d0 == 1) {
          fVar13 = 0.033333335;
        }
        else {
          fVar13 = 0.016666668;
        }
        uStack_1b4._2_2_ = (undefined2)((uint)fVar13 >> 0x10);
        uStack_1b0 = (double)(longlong)ROUND(fVar13 * 1000.0 * 3.0);
        DAT_01f206ec = (undefined4)uStack_1b0;
        puStack_1c4 = (undefined4 *)0xf9badf;
        uVar12 = FUN_00df8230();
        uStack_1b0 = (double)(uVar12 & 0x7fffffffffffffff);
        dVar2 = (double)(longlong)uStack_1b0;
        uStack_1b0 = (double)((ulonglong)((uint)(uVar12 >> 0x20) & 0x80000000) << 0x20);
        uStack_1b0 = -(double)(longlong)uStack_1b0 + dVar2;
        puStack_1c4 = (undefined4 *)0xf9bb11;
        fVar11 = (float10)FUN_00df8260();
        uStack_1b4 = CONCAT22(uStack_1b4._2_2_,in_FPUControlWord);
        uStack_1b0 = (double)(longlong)ROUND(fVar11 * (float10)uStack_1b0 * (float10)3.0);
        _DAT_01f206f0 = (undefined4)uStack_1b0;
        __security_check_cookie(local_4 ^ (uint)&uStack_1b4);
        return;
      }
    }
  }
  puStack_1c4 = (undefined4 *)&DAT_016eb848;
LAB_00f9bb64:
  uStack_1c8 = 0xf9bb69;
  FUN_00dd5650();
  __security_check_cookie(local_4 ^ (uint)&uStack_1b4);
  return;
}

// 00F9F5F0  FUN_00f9f5f0  size=160  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9f5f0(void)

{
  if (DAT_01f20758 != 0) {
    FUN_00dd7270();
  }
  if (DAT_01f20724 != 0) {
    FUN_00dd48d0(DAT_01f20724,0);
    DAT_01f20724 = 0;
    _DAT_01f20728 = 0;
    _DAT_01f2072c = 0;
    DAT_01f20730 = DAT_01f20720;
    DAT_01f20734 = DAT_01f20720;
    DAT_01f20738 = DAT_01f20720;
  }
  if (DAT_01f206fc != (int *)0x0) {
    (**(code **)(*DAT_01f206fc + 8))(DAT_01f206fc);
  }
  if (DAT_01f20700 != (int *)0x0) {
    (**(code **)(*DAT_01f20700 + 8))(DAT_01f20700);
  }
  if (DAT_01f206d8 != (int *)0x0) {
    (**(code **)(*DAT_01f206d8 + 8))(DAT_01f206d8);
    DAT_01f206d8 = (int *)0x0;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    (**(code **)(*DAT_01f206d4 + 8))(DAT_01f206d4);
    DAT_01f206d4 = (int *)0x0;
  }
  return;
}

// 00F9F690  FUN_00f9f690  size=49  [callgraph]
undefined4 FUN_00f9f690(void)

{
  if (DAT_018da64c != 4) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x17,4);
    }
    DAT_018da64c = 4;
  }
  return 1;
}

// 00F9F6D0  FUN_00f9f6d0  size=119  [callgraph]
undefined4 FUN_00f9f6d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(DAT_01f20594 + 0x10);
  local_8 = *(undefined4 *)(DAT_01f205a0 + 0x1c);
  local_14 = 0;
  local_c = 0;
  local_10 = param_2;
  local_18 = param_1;
  iVar1 = FUN_00f9bf90(0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_00f98720(&local_18,DAT_01f20594);
  return uVar2;
}

// 00F9F750  FUN_00f9f750  size=176  [callgraph]
undefined4 FUN_00f9f750(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = *(uint *)(DAT_01f20594 + 0x18);
  local_4 = *(undefined4 *)(DAT_01f20594 + 0x10);
  local_8 = *(undefined4 *)(DAT_01f205a0 + 0x1c);
  local_14 = 0;
  local_c = 0;
  if (uVar3 == 0) {
switchD_00f9f791_default:
    uVar3 = 0;
  }
  else {
    switch(param_1) {
    case 1:
      break;
    case 2:
      uVar3 = uVar3 >> 1;
      break;
    case 3:
      uVar3 = uVar3 - 1;
      break;
    case 4:
      uVar3 = uVar3 / 3;
      break;
    case 5:
    case 6:
      uVar3 = uVar3 - 2;
      break;
    default:
      goto switchD_00f9f791_default;
    }
  }
  local_18 = param_1;
  local_10 = uVar3;
  iVar1 = FUN_00f9bf90(0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (uVar3 != 0) {
    uVar2 = FUN_00f98720(&local_18,DAT_01f20594);
    return uVar2;
  }
  return 1;
}

// 00F9F880  FUN_00f9f880  size=192  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f9f880(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Hw::cHeapVariable::vf40(0x50000,param_1,"TextureInfoManager");
  if (iVar1 != 0) {
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      _DAT_01f20a60 = &DAT_01f209a8;
      _memset(&DAT_01f20a88,0,0x1024);
      iVar1 = FUN_00dd7240();
      if (iVar1 != 0) {
        iVar1 = FUN_00fa92c0(&DAT_01f209a8,0xc00);
        if (iVar1 != 0) {
          iVar1 = FUN_00fa9040(&DAT_01f209a8,0x800);
          if (iVar1 != 0) {
            iVar1 = FUN_00fa8df0(&DAT_01f209a8,0x1000);
            if (iVar1 != 0) {
              DAT_01f204d0 = 0;
              DAT_01f126cc = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F9F940  FUN_00f9f940  size=176  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9f940(void)

{
  FUN_00fa9740();
  if (DAT_01f21ab0 != 0) {
    FUN_00dd48d0(DAT_01f21ab0,0);
  }
  _DAT_01f21adc = 0;
  _DAT_01f21ad8 = 0;
  _DAT_01f21aec = 0;
  DAT_01f21ab0 = 0;
  _DAT_01f21ae8 = 0;
  _DAT_01f21ae0 = 0;
  _DAT_01f21ae4 = 0;
  FUN_00dd7270();
  if (DAT_01f20968 != 0) {
    FUN_00dd48d0(DAT_01f20968,0);
  }
  _DAT_01f20994 = 0;
  _DAT_01f20990 = 0;
  _DAT_01f209a4 = 0;
  DAT_01f20968 = 0;
  _DAT_01f209a0 = 0;
  _DAT_01f20998 = 0;
  _DAT_01f2099c = 0;
  FUN_00dd7270();
  FUN_00dd7270();
  Hw::cHeapVariable::vf08();
  return;
}

// 00F9F9F0  FUN_00f9f9f0  size=206  [callgraph]
int FUN_00f9f9f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  if (param_2 != 0) {
    if (DAT_01f20a18 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    iVar1 = FUN_00f9e300(param_2);
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x2c) = param_2;
      if ((*(byte *)(param_1 + 0x1c) & 0x40) == 0) {
        Hw::cInfoHash::pushNormal(param_1);
      }
      else {
        Hw::cInfoHash::pushReduce(param_1);
      }
      goto LAB_00f9faa7;
    }
  }
  iVar1 = FUN_00fa90e0();
  DAT_01f204d0 = DAT_01f204d0 + 1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_2;
    *(int *)(param_1 + 0x2c) = param_2;
    if ((*(byte *)(param_1 + 0x1c) & 0x40) == 0) {
      iVar2 = Hw::cInfoHash::pushNormal(param_1);
    }
    else {
      iVar2 = Hw::cInfoHash::pushReduce(param_1);
    }
    if (iVar2 != 0) {
      FUN_00fa9820(iVar1);
    }
  }
LAB_00f9faa7:
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  return param_1;
}

// 00F9FAC0  FUN_00f9fac0  size=184  [callgraph]
undefined4 FUN_00f9fac0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  if (param_1 != 0) {
    if (DAT_01f20a18 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    piVar1 = (int *)FUN_00f9e300(param_1);
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    if (piVar1 != (int *)0x0) {
      if (piVar1[4] == -0x80000000) {
        if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
          if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)piVar1[1];
          }
        }
        else {
          uVar2 = *(undefined4 *)*piVar1;
        }
      }
      else {
        uVar2 = FUN_00f9fac0(piVar1[4]);
      }
      if (DAT_01f20a18 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
      }
      return uVar2;
    }
  }
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  return 0;
}

// 00F9FB80  FUN_00f9fb80  size=249  [callgraph]
undefined4 FUN_00f9fb80(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (DAT_01f204d8 == param_2) {
    uVar1 = 0;
    do {
      if (param_1 == (&DAT_01f204e0)[uVar1 * 2]) {
        return (&DAT_01f204e4)[uVar1 * 2];
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
  }
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  if (param_1 != 0) {
    if (DAT_01f20a18 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    piVar2 = (int *)FUN_00f9e300(param_1);
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    if (piVar2 != (int *)0x0) {
      if (piVar2[4] == -0x80000000) {
        if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
          if ((undefined4 *)piVar2[1] == (undefined4 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)piVar2[1];
          }
        }
        else {
          uVar3 = *(undefined4 *)*piVar2;
        }
      }
      else {
        uVar3 = FUN_00f9fac0(piVar2[4]);
      }
      if (DAT_01f20a18 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
      }
      goto LAB_00f9fc57;
    }
  }
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  uVar3 = 0;
LAB_00f9fc57:
  (&DAT_01f204e0)[(DAT_01f204d4 & 0xf) * 2] = param_1;
  (&DAT_01f204e4)[(DAT_01f204d4 & 0xf) * 2] = uVar3;
  DAT_01f204d4 = DAT_01f204d4 + 1;
  return uVar3;
}

// 00F9FC80  FUN_00f9fc80  size=248  [callgraph]
undefined4 * FUN_00f9fc80(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  if (param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00f9e300(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      if (DAT_01f20a18 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
      }
      return puVar1;
    }
  }
  piVar2 = (int *)FUN_00f9e300(0x132ed5c3);
  if ((piVar2 != (int *)0x0) && (param_1 != 0)) {
    puVar1 = (undefined4 *)FUN_00fa90e0();
    DAT_01f204d0 = DAT_01f204d0 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[3] = param_1;
      *puVar1 = 0;
      puVar1[1] = 0;
      if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
        if ((undefined4 *)piVar2[1] == (undefined4 *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)piVar2[1];
        }
      }
      else {
        uVar3 = *(undefined4 *)*piVar2;
      }
      puVar1[2] = puVar1[2] | 0x2000000;
      iVar4 = Hw::cInfoHash::pushReduce(uVar3);
      if (iVar4 != 0) {
        FUN_00fa9820(puVar1);
        puVar1[2] = puVar1[2] | 0x200;
      }
      if (DAT_01f20a18 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
      }
      return puVar1;
    }
  }
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  return (undefined4 *)0x0;
}

// 00F9FD80  Hw::TextureManager  size=636  [class]
/* WARNING: Removing unreachable block (ram,0x00f9fe36) */

int * Hw::TextureManager(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint local_8;
  
  iVar7 = 0;
  uVar3 = 0;
  do {
    if (*(int *)((int)&DAT_01f144d0 + uVar3) == param_1) {
      if (&DAT_01f144d0 + iVar7 * 6 != (int *)0x0) {
        return &DAT_01f144d0 + iVar7 * 6;
      }
      break;
    }
    uVar3 = uVar3 + 0x18;
    iVar7 = iVar7 + 1;
  } while (uVar3 < 0xc000);
  iVar7 = 0;
  uVar3 = 0;
  while (*(int *)((int)&DAT_01f144d0 + uVar3) != 0) {
    uVar3 = uVar3 + 0x18;
    iVar7 = iVar7 + 1;
    if (0xbfff < uVar3) {
      FUN_00dd5650(&DAT_016ebbd8);
      return (int *)0x0;
    }
  }
  piVar9 = &DAT_01f144d0 + iVar7 * 6;
  if (piVar9 == (int *)0x0) {
    FUN_00dd5650(&DAT_016ebbd8);
    return (int *)0x0;
  }
  LOCK();
  DAT_01f126c8 = 1;
  UNLOCK();
  uVar3 = *(uint *)(param_1 + 8);
  puVar4 = (undefined4 *)cTextureInstance::cTextureInstance_3(uVar3);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016ebc0c);
    return (int *)0x0;
  }
  local_8 = 0;
  if (uVar3 != 0) {
    puVar8 = puVar4 + 7;
    do {
      iVar1 = local_8 * 4;
      uVar6 = *(uint *)(*(int *)(param_1 + 0x14) + iVar1 + param_1);
      *puVar8 = uVar6;
      if ((uVar6 & 1) == 0) {
        if ((int)uVar6 < 0) {
          if ((uVar6 & 0x40000000) != 0) goto LAB_00f9ff7f;
          iVar5 = FUN_00f971f0(puVar8 + -7,
                               *(int *)(iVar1 + *(int *)(param_1 + 0xc) + param_1) + param_1,
                               *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar1 + param_1));
        }
        else {
          if ((uVar6 & 0x40000000) != 0) goto LAB_00f9ff7f;
          iVar5 = FUN_00f97120(puVar8 + -7,
                               *(int *)(iVar1 + *(int *)(param_1 + 0xc) + param_1) + param_1,
                               *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar1 + param_1),
                               ~(uVar6 >> 1) & 1);
        }
        if (iVar5 == 0) {
LAB_00f9ff7f:
          piVar9 = puVar4 + 1;
          do {
            if (piVar9[7] != 0) {
              piVar2 = (int *)*piVar9;
              if (piVar2 != (int *)0x0) {
                (**(code **)(*piVar2 + 8))(piVar2);
                *piVar9 = 0;
              }
              *piVar9 = 0;
            }
            *piVar9 = 0;
            piVar9[1] = 0;
            piVar9[2] = 0;
            piVar9[3] = 0;
            piVar9[5] = 0;
            piVar9[6] = 0;
            piVar9[7] = 1;
            piVar9[4] = 0;
            piVar9[9] = 0;
            piVar9 = piVar9 + 0xc;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          if (puVar4[-1] == 0) {
            FUN_00dd4940(puVar4 + -1);
            return (int *)0x0;
          }
          (**(code **)*puVar4)(3);
          return (int *)0x0;
        }
        if ((*puVar8 & 0x20) != 0) {
          if (param_2 == 0) {
            uVar6 = *(uint *)(*(int *)(param_1 + 0x18) + iVar1 + param_1);
          }
          else {
            uVar6 = *(uint *)(*(int *)(param_1 + 0x18) + iVar1 + param_1) | 0x80000000;
          }
          FUN_00f9f9f0(puVar8 + -7,uVar6);
        }
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 0xc;
    } while (local_8 < uVar3);
  }
  (&DAT_01f144d8)[iVar7 * 6] = uVar3;
  (&DAT_01f144d4)[iVar7 * 6] = puVar4;
  *piVar9 = param_1;
  (&DAT_01f144dc)[iVar7 * 6] = *(undefined4 *)(param_1 + 4);
  return piVar9;
}

// 00FA0000  FUN_00fa0000  size=379  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00fa0037) */

undefined4 FUN_00fa0000(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint local_c;
  
  uVar3 = *(uint *)(*param_1 + 8);
  LOCK();
  DAT_01f126c8 = 1;
  UNLOCK();
  local_c = 0;
  if (uVar3 != 0) {
    puVar8 = (uint *)(param_2 + 0x1c);
    do {
      iVar2 = local_c * 4;
      uVar6 = *(uint *)(*(int *)(*param_1 + 0x14) + iVar2 + *param_1);
      *puVar8 = uVar6;
      if ((uVar6 & 1) == 0) {
        if ((int)uVar6 < 0) {
          if ((uVar6 & 0x40000000) != 0) {
            return 0;
          }
          iVar5 = *param_1;
          uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar2 + iVar5);
          iVar7 = *(int *)(iVar2 + *(int *)(iVar5 + 0xc) + iVar5);
          if (param_1[1] == 0) {
            iVar5 = FUN_00f971f0(puVar8 + -7,iVar7 + iVar5,uVar4);
          }
          else {
            iVar5 = FUN_00f971f0(puVar8 + -7,iVar7 + param_1[1],uVar4);
          }
        }
        else {
          if ((uVar6 & 0x40000000) != 0) {
            return 0;
          }
          iVar5 = *param_1;
          puVar1 = (undefined4 *)(*(int *)(iVar5 + 0x10) + iVar2 + iVar5);
          iVar7 = *(int *)(iVar5 + 0xc) + iVar5;
          if (param_1[1] != 0) {
            iVar5 = param_1[1];
          }
          iVar5 = FUN_00f97120(puVar8 + -7,*(int *)(iVar2 + iVar7) + iVar5,*puVar1,~(uVar6 >> 1) & 1
                              );
        }
        if (iVar5 == 0) {
          return 0;
        }
        if ((*puVar8 & 0x20) != 0) {
          iVar5 = *param_1;
          if (param_3 == 0) {
            uVar6 = *(uint *)(*(int *)(iVar5 + 0x18) + iVar2 + iVar5);
          }
          else {
            uVar6 = *(uint *)(*(int *)(iVar5 + 0x18) + iVar2 + iVar5) | 0x80000000;
          }
          FUN_00f9f9f0(puVar8 + -7,uVar6);
        }
      }
      local_c = local_c + 1;
      puVar8 = puVar8 + 0xc;
    } while (local_c < uVar3);
  }
  return 1;
}

// 00FA0D80  Hw::GraphicDevice_2  size=152  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Hw::GraphicDevice_2(undefined4 param_1)

{
  int iVar1;
  
  if ((DAT_01f20724 == 0) && (DAT_01f20724 = FUN_00dd29b0(0x75330,0x20,0,0), DAT_01f20724 != 0)) {
    DAT_01f20738 = DAT_01f20724 + 480000;
    _DAT_01f20728 = 10000;
    _DAT_01f2072c = 0;
    FUN_00fa99f0();
    if ((DAT_01f206d8 == 0) && (DAT_01f206d8 = Direct3DCreate9(0x20), DAT_01f206d8 != 0)) {
      iVar1 = GraphicDevice(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_00dd7240();
      return 1;
    }
    FUN_00dd5650(&DAT_016eb7e0);
  }
  return 0;
}

// 00FA0E20  FUN_00fa0e20  size=213  [between]
undefined4 FUN_00fa0e20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_4;
  
  uVar3 = 0;
  local_4 = (int *)0x0;
  if (((param_2 != 0) && (iVar2 = FUN_00fa0740(0), iVar2 != 0)) &&
     (piVar1 = *(int **)(iVar2 + 4), piVar1 != (int *)0x0)) {
    if (*(int *)(param_2 + 0x40) == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1,0,&local_4);
      if (iVar2 < 0) goto LAB_00fa0ede;
    }
    else {
      local_4 = *(int **)(param_2 + 0x4c);
      if (local_4 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*local_4 + 4))(local_4);
    }
  }
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (DAT_01f20704 == (int *)0x0) {
        return 1;
      }
      local_4 = DAT_01f20704;
      DAT_01f20704 = (int *)0x0;
    }
    else if (DAT_01f20704 == (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0x98))(DAT_01f206d4,0,&DAT_01f20704);
    }
  }
  iVar2 = (**(code **)(*DAT_01f206d4 + 0x94))(DAT_01f206d4,param_1,local_4);
  if (-1 < iVar2) {
    uVar3 = 1;
  }
LAB_00fa0ede:
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  return uVar3;
}

// 00FA0F00  FUN_00fa0f00  size=372  [between]
void FUN_00fa0f00(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_30;
  local_30 = 0;
  local_2c = 0;
  if (((DAT_01f206d4 != (int *)0x0) && (iVar1 = FUN_00fa0740(0), iVar1 != 0)) &&
     (piVar2 = *(int **)(iVar1 + 4), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_2c);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*DAT_01f206d4 + 0x98))(DAT_01f206d4,0,&stack0xffffffc4), -1 < iVar1)) {
      if (param_4 == (int *)0x0) {
        iStack_14 = DAT_01f206e0;
        iStack_28 = DAT_01f206dc;
        if (param_2 != 0) {
          iStack_14 = *(int *)(param_2 + 0x28);
          iStack_28 = *(int *)(param_2 + 0x24);
        }
        if (*(int *)(param_1 + 0x24) <= iStack_28) {
          iStack_28 = *(int *)(param_1 + 0x24);
        }
        if (*(int *)(param_1 + 0x28) <= iStack_14) {
          iStack_14 = *(int *)(param_1 + 0x28);
        }
        iStack_20 = 0;
        iStack_1c = 0;
        iStack_24 = iStack_14;
        iStack_18 = iStack_28;
      }
      else {
        iStack_20 = *param_4;
        iStack_28 = param_4[2];
        iStack_18 = iStack_28 + iStack_20;
        iStack_1c = param_4[1];
        iStack_24 = param_4[3];
        iStack_14 = iStack_1c + iStack_24;
      }
      local_2c = 0;
      local_30 = 0;
      if (param_3 == 0) {
        puVar3 = &local_30;
        piVar2 = &iStack_20;
      }
      else {
        puVar3 = (undefined4 *)0x0;
        piVar2 = (int *)0x0;
      }
      (**(code **)(*DAT_01f206d4 + 0x88))(DAT_01f206d4,unaff_ESI,piVar2,unaff_EBP,puVar3,1);
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffc4);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}

// 00FA1080  FUN_00fa1080  size=400  [between]
void FUN_00fa1080(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  local_2c = param_1;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  if (DAT_01f206d4 == (int *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  iVar1 = FUN_00fa0740(0);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_30);
    if (-1 < iVar1) {
      iVar1 = FUN_00fa0740(0);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
      }
      if (piVar2 == (int *)0x0) goto LAB_00fa1102;
      iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_34);
      if (-1 < iVar1) {
        if (param_4 == (int *)0x0) {
          iStack_1c = *(int *)(param_2 + 0x24);
          if (*(int *)(local_2c + 0x24) <= *(int *)(param_2 + 0x24)) {
            iStack_1c = *(int *)(local_2c + 0x24);
          }
          iStack_18 = *(int *)(param_2 + 0x28);
          if (*(int *)(local_2c + 0x28) <= *(int *)(param_2 + 0x28)) {
            iStack_18 = *(int *)(local_2c + 0x28);
          }
          iStack_14 = 0;
          iStack_10 = 0;
          iStack_c = iStack_1c;
          iStack_8 = iStack_18;
        }
        else {
          iStack_14 = *param_4;
          iStack_1c = param_4[2];
          iStack_c = iStack_14 + iStack_1c;
          iStack_10 = param_4[1];
          iStack_18 = param_4[3];
          iStack_8 = iStack_18 + iStack_10;
        }
        uStack_20 = 0;
        uStack_24 = 0;
        if (param_6 == 0) {
          puVar3 = &uStack_24;
          piVar2 = &iStack_14;
        }
        else {
          puVar3 = (undefined4 *)0x0;
          piVar2 = (int *)0x0;
        }
        (**(code **)(*DAT_01f206d4 + 0x88))(DAT_01f206d4,local_34,piVar2,local_30,puVar3,1);
      }
    }
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))(local_34);
      local_34 = (int *)0x0;
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
    }
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
LAB_00fa1102:
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00FA1210  FUN_00fa1210  size=422  [between]
void FUN_00fa1210(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  local_2c = param_1;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  if (DAT_01f206d4 == (int *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  iVar1 = FUN_00fa0740(0);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_30);
    if ((-1 < iVar1) && (iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_30), -1 < iVar1)) {
      iVar1 = FUN_00fa0740(0);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
      }
      if (piVar2 == (int *)0x0) goto LAB_00fa12a8;
      iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_34);
      if (-1 < iVar1) {
        if (param_4 == (int *)0x0) {
          iStack_1c = *(int *)(param_2 + 0x24);
          if (*(int *)(local_2c + 0x24) <= *(int *)(param_2 + 0x24)) {
            iStack_1c = *(int *)(local_2c + 0x24);
          }
          iStack_18 = *(int *)(param_2 + 0x28);
          if (*(int *)(local_2c + 0x28) <= *(int *)(param_2 + 0x28)) {
            iStack_18 = *(int *)(local_2c + 0x28);
          }
          iStack_14 = 0;
          iStack_10 = 0;
          iStack_c = iStack_1c;
          iStack_8 = iStack_18;
        }
        else {
          iStack_14 = *param_4;
          iStack_1c = param_4[2];
          iStack_c = iStack_14 + iStack_1c;
          iStack_10 = param_4[1];
          iStack_18 = param_4[3];
          iStack_8 = iStack_18 + iStack_10;
        }
        uStack_20 = 0;
        uStack_24 = 0;
        if (param_6 == 0) {
          puVar3 = &uStack_24;
          piVar2 = &iStack_14;
        }
        else {
          puVar3 = (undefined4 *)0x0;
          piVar2 = (int *)0x0;
        }
        (**(code **)(*DAT_01f206d4 + 0x88))(DAT_01f206d4,local_34,piVar2,local_30,puVar3,1);
      }
    }
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))(local_34);
      local_34 = (int *)0x0;
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
    }
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
LAB_00fa12a8:
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00FA13C0  FUN_00fa13c0  size=422  [between]
void FUN_00fa13c0(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  local_2c = param_1;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  if (DAT_01f206d4 == (int *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  iVar1 = FUN_00fa0740(0);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_30);
    if ((-1 < iVar1) && (iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_30), -1 < iVar1)) {
      iVar1 = FUN_00fa0740(0);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
      }
      if (piVar2 == (int *)0x0) goto LAB_00fa1458;
      iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,0,&local_34);
      if (-1 < iVar1) {
        if (param_4 == (int *)0x0) {
          iStack_1c = *(int *)(param_2 + 0x24);
          if (*(int *)(local_2c + 0x24) <= *(int *)(param_2 + 0x24)) {
            iStack_1c = *(int *)(local_2c + 0x24);
          }
          iStack_18 = *(int *)(param_2 + 0x28);
          if (*(int *)(local_2c + 0x28) <= *(int *)(param_2 + 0x28)) {
            iStack_18 = *(int *)(local_2c + 0x28);
          }
          iStack_14 = 0;
          iStack_10 = 0;
          iStack_c = iStack_1c;
          iStack_8 = iStack_18;
        }
        else {
          iStack_14 = *param_4;
          iStack_1c = param_4[2];
          iStack_c = iStack_14 + iStack_1c;
          iStack_10 = param_4[1];
          iStack_18 = param_4[3];
          iStack_8 = iStack_18 + iStack_10;
        }
        uStack_20 = 0;
        uStack_24 = 0;
        if (param_6 == 0) {
          puVar3 = &uStack_24;
          piVar2 = &iStack_14;
        }
        else {
          puVar3 = (undefined4 *)0x0;
          piVar2 = (int *)0x0;
        }
        (**(code **)(*DAT_01f206d4 + 0x88))(DAT_01f206d4,local_34,piVar2,local_30,puVar3,1);
      }
    }
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))(local_34);
      local_34 = (int *)0x0;
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
    }
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
LAB_00fa1458:
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00FA1600  FUN_00fa1600  size=194  [between]
undefined4 FUN_00fa1600(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piStack_14;
  int *piStack_10;
  int local_4;
  
  uVar3 = 0;
  local_4 = 0;
  if (DAT_01f206d4 == (int *)0x0) {
    return 0;
  }
  piStack_10 = (int *)0x0;
  piStack_14 = (int *)0xfa1628;
  iVar2 = FUN_00fa0740();
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 4);
    if (piVar1 != (int *)0x0) {
      piStack_10 = &local_4;
      piStack_14 = (int *)0x0;
      iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
      if (((iVar2 < 0) ||
          (iVar2 = (**(code **)(*DAT_01f206d4 + 0x98))(DAT_01f206d4,0,&piStack_14), iVar2 < 0)) ||
         (iVar2 = (**(code **)(*DAT_01f206d4 + 0x80))(DAT_01f206d4,piStack_14,piStack_10), iVar2 < 0
         )) {
        FUN_00dd5650(&DAT_016eb998);
      }
      else {
        uVar3 = 1;
      }
      if (piStack_14 != (int *)0x0) {
        (**(code **)(*piStack_14 + 8))(piStack_14);
        piStack_14 = (int *)0x0;
      }
      if (piStack_10 != (int *)0x0) {
        (**(code **)(*piStack_10 + 8))(piStack_10);
      }
      return uVar3;
    }
    return 0;
  }
  return 0;
}

// 00FA16D0  FUN_00fa16d0  size=155  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa16d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_01f20734;
  if (DAT_01f20758 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20740);
    piVar2 = DAT_01f20734;
  }
  do {
    piVar1 = DAT_01f20730;
    if (piVar2 == DAT_01f20738) {
LAB_00fa1756:
      DAT_01f20730 = piVar1;
      if (DAT_01f20758 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20740);
      }
      return;
    }
    if (*piVar2 == param_1) {
      iVar3 = piVar2[10];
      piVar1 = (int *)piVar2[0xb];
      if (iVar3 != 0) {
        *(int **)(iVar3 + 0x2c) = piVar1;
      }
      if (piVar1 != (int *)0x0) {
        piVar1[10] = iVar3;
      }
      if (DAT_01f20734 == piVar2) {
        DAT_01f20734 = piVar1;
      }
      _DAT_01f2072c = _DAT_01f2072c + -1;
      if (DAT_01f20730 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_01f20730[10];
      }
      piVar2[10] = iVar3;
      piVar2[0xb] = (int)DAT_01f20730;
      if (iVar3 != 0) {
        *(int **)(iVar3 + 0x2c) = piVar2;
      }
      piVar1 = piVar2;
      if (DAT_01f20730 != (int *)0x0) {
        DAT_01f20730[10] = (int)piVar2;
      }
      goto LAB_00fa1756;
    }
    piVar2 = (int *)piVar2[0xb];
  } while( true );
}

// 00FA17A0  FUN_00fa17a0  size=67  [between]
void FUN_00fa17a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_3;
  local_10 = param_2;
  local_8 = param_4;
  local_4 = param_5;
  FUN_00fa0f00(param_1,DAT_018da6d4,0,&local_10,0,0);
  return;
}

// 00FA17F0  FUN_00fa17f0  size=68  [between]
void FUN_00fa17f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_4;
  local_10 = param_3;
  local_8 = param_5;
  local_4 = param_6;
  FUN_00fa1080(param_1,param_2,0,&local_10,0,param_7);
  return;
}

// 00FA1840  FUN_00fa1840  size=68  [between]
void FUN_00fa1840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_4;
  local_10 = param_3;
  local_8 = param_5;
  local_4 = param_6;
  FUN_00fa1210(param_1,param_2,0,&local_10,0,param_7);
  return;
}

// 00FA1890  FUN_00fa1890  size=68  [between]
void FUN_00fa1890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_4;
  local_10 = param_3;
  local_8 = param_5;
  local_4 = param_6;
  FUN_00fa13c0(param_1,param_2,0,&local_10,0,param_7);
  return;
}

// 00FA18E0  FUN_00fa18e0  size=22  [between]
void FUN_00fa18e0(undefined4 param_1)

{
  FUN_00fa1600(param_1,DAT_018da6d4,0);
  return;
}

// 00FA1A10  FUN_00fa1a10  size=115  [between]
int FUN_00fa1a10(int param_1)

{
  int iVar1;
  
  if (DAT_01f20a18 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  if (param_1 != 0) {
    iVar1 = FUN_00f9e300(param_1);
    if (iVar1 != 0) goto LAB_00fa1a4e;
  }
  iVar1 = FUN_00f9fc80(param_1);
  if (iVar1 == 0) {
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    return 0;
  }
LAB_00fa1a4e:
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  if (DAT_01f20a18 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
  }
  return iVar1;
}

// 00FA1A90  FUN_00fa1a90  size=73  [between]
void FUN_00fa1a90(int param_1)

{
  if (param_1 != 0) {
    if (DAT_01f20a18 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
    FUN_00fa98c0(param_1);
    FUN_00faa050(param_1);
    if (DAT_01f20a18 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f20a00);
    }
  }
  return;
}

// 00FA1AE0  FUN_00fa1ae0  size=114  [between]
undefined4 FUN_00fa1ae0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_01f21b60 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01f21b48);
  }
  iVar1 = Hw::TextureManager(param_2,0);
  if (iVar1 == 0) {
    if (DAT_01f21b60 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f21b48);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 8);
  *(uint *)(param_1 + 0x10) = (uint)(*(int *)(iVar1 + 0xc) != 0);
  if (DAT_01f21b60 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01f21b48);
  }
  return 1;
}

// 00FA1BE0  Hw::TextureManager_2  size=363  [class]
int * Hw::TextureManager_2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  undefined4 local_4;
  
  iVar5 = 0;
  uVar2 = 0;
  do {
    if (*(int *)((int)&DAT_01f144d0 + uVar2) == param_1) {
      if (&DAT_01f144d0 + iVar5 * 6 != (int *)0x0) {
        return &DAT_01f144d0 + iVar5 * 6;
      }
      break;
    }
    uVar2 = uVar2 + 0x18;
    iVar5 = iVar5 + 1;
  } while (uVar2 < 0xc000);
  iVar5 = 0;
  uVar2 = 0;
  while (*(int *)((int)&DAT_01f144d0 + uVar2) != 0) {
    uVar2 = uVar2 + 0x18;
    iVar5 = iVar5 + 1;
    if (0xbfff < uVar2) {
      FUN_00dd5650(&DAT_016ebc44);
      return (int *)0x0;
    }
  }
  piVar7 = &DAT_01f144d0 + iVar5 * 6;
  if (piVar7 == (int *)0x0) {
    FUN_00dd5650(&DAT_016ebc44);
    return (int *)0x0;
  }
  iVar6 = *(int *)(param_1 + 8);
  local_8 = param_1;
  local_4 = param_2;
  puVar3 = (undefined4 *)cTextureInstance::cTextureInstance_3(iVar6);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016ebc78);
    return (int *)0x0;
  }
  iVar4 = FUN_00fa0000(&local_8,puVar3,param_3);
  if (iVar4 == 0) {
    if (iVar6 != 0) {
      piVar7 = puVar3 + 1;
      do {
        if (piVar7[7] != 0) {
          piVar1 = (int *)*piVar7;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *piVar7 = 0;
          }
          *piVar7 = 0;
        }
        *piVar7 = 0;
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[5] = 0;
        piVar7[6] = 0;
        piVar7[7] = 1;
        piVar7[4] = 0;
        piVar7[9] = 0;
        piVar7 = piVar7 + 0xc;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (puVar3[-1] == 0) {
      FUN_00dd4940(puVar3 + -1);
      return (int *)0x0;
    }
    (**(code **)*puVar3)(3);
    return (int *)0x0;
  }
  *piVar7 = param_1;
  (&DAT_01f144d4)[iVar5 * 6] = puVar3;
  (&DAT_01f144d8)[iVar5 * 6] = iVar6;
  (&DAT_01f144dc)[iVar5 * 6] = *(undefined4 *)(param_1 + 4);
  return piVar7;
}

