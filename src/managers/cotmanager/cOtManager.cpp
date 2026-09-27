// src/managers/cotmanager/cOtManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A21000..00A21110, 6 functions

#include "types.h"

// 00A21000  cOtManager::cOtManager  size=29  [class]
undefined4 * __fastcall cOtManager::cOtManager(undefined4 *param_1)

{
  Hw::cOtManagerBase::cOtManagerBase();
  *param_1 = vftable;
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  return param_1;
}

// 00A21020  FUN_00a21020  size=22  [between]
void FUN_00a21020(void)

{
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  Hw::cOtManagerBase::cOtManagerBase_2();
  return;
}

// 00A21040  cOtManager::vf00  size=43  [class]
undefined4 __thiscall cOtManager::vf00(undefined4 param_1,byte param_2)

{
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  Hw::cOtManagerBase::cOtManagerBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A21070  FUN_00a21070  size=132  [between]
undefined4 __fastcall FUN_00a21070(int param_1)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  local_18 = 1;
  local_14 = 0x14000;
  local_10 = 2;
  local_c = 0x6c;
  local_4 = 0x4e6a;
  local_2 = 1;
  cVar1 = FUN_00f97b10(&local_18,&DAT_01b7bcf0);
  if (cVar1 == '\0') {
    return 0;
  }
  DAT_01bea084 = DAT_01bea084 | 0x8000;
  return 1;
}

// 00A21100  thunk_FUN_00f97a10  size=5  [between]
void __fastcall thunk_FUN_00f97a10(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xc);
  iVar2 = 2;
  do {
    if (piVar3[-2] != 0) {
      FUN_00dd4940(piVar3[-2]);
    }
    if (*piVar3 != 0) {
      FUN_00dd4940(*piVar3);
    }
    if (piVar3[2] != 0) {
      FUN_00dd4940(piVar3[2]);
    }
    piVar3 = piVar3 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 8 + *(int *)(param_1 + 0x2c));
      if (iVar1 != 0) {
        FUN_00dd4940(iVar1);
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 < 0x48);
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

// 00A21110  cOtManager::vf04  size=200  [class]
bool __thiscall cOtManager::vf04(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x70) == 0) && ((byte)(param_3 - 8U) < 0x57)) {
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x78) == 0) && ((byte)(param_3 - 1U) < 6)) {
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x80) == 0) && ((byte)(param_3 + 0xb9U) < 4)) {
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x74) == 0) && ((byte)(param_3 - 0x1fU) < 0x18)) {
    bVar2 = true;
  }
  switch(param_3) {
  case '\x14':
    bVar3 = DAT_01edd278 == 0;
    break;
  case '\x15':
    iVar1 = FUN_00f99150();
    bVar3 = iVar1 == 0;
    break;
  default:
    goto switchD_00a2117a_caseD_16;
  case '\x1b':
    iVar1 = FUN_009cd310(0x2c);
    return iVar1 == 0;
  case ' ':
  case '&':
  case ',':
  case '2':
  case '8':
    bVar3 = DAT_0189f774 == 0;
    break;
  case 'A':
  case 'C':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
    goto switchD_00a2117a_caseD_41;
  case 'H':
    if (*(int *)(param_1 + 0x7c) == 0) {
      return true;
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      return true;
    }
    return false;
  }
  if (bVar3) {
switchD_00a2117a_caseD_41:
    bVar2 = true;
  }
switchD_00a2117a_caseD_16:
  return bVar2;
}

