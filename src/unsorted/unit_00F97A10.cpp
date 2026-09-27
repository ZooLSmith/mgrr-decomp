// src/unsorted/unit_00F97A10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F97A10..00F98720, 17 functions

#include "mgrr.h"

// 00F97A10  FUN_00f97a10  size=244  [run]
void __fastcall FUN_00f97a10(int param_1)

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

// 00F97B10  FUN_00f97b10  size=407  [run]
uint __thiscall FUN_00f97b10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Dst;
  int *piVar4;
  int local_4;
  
  FUN_00f97a10();
  iVar2 = param_2[3];
  if ((-1 < iVar2) && (iVar2 < 0x80)) {
    uVar1 = param_2[2] * iVar2;
    local_4 = 0;
    piVar4 = (int *)(param_1 + 0xc);
    do {
      iVar2 = FUN_00dd3580(*param_2,param_3);
      piVar4[-2] = iVar2;
      iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_2[1] * 0x20 >> 0x20) != 0) |
                           (uint)((ulonglong)(uint)param_2[1] * 0x20),param_3);
      *piVar4 = iVar2;
      iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 4),param_3);
      piVar4[2] = iVar2;
      if (((piVar4[-2] == 0) || (*piVar4 == 0)) || (iVar2 == 0)) goto LAB_00f97c96;
      local_4 = local_4 + 1;
      piVar4 = piVar4 + 5;
    } while (local_4 < 2);
    uVar3 = FUN_00dd3580(0x48,param_3);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = FUN_00dd3580(0x18,param_3);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    iVar2 = FUN_00dd3580(0x30,param_3);
    *(int *)(param_1 + 0x30) = iVar2;
    if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x34) != 0)) && (iVar2 != 0)) {
      iVar2 = 0;
      do {
        uVar3 = FUN_00dd3580(0x30,param_3);
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8 + iVar2) = uVar3;
        if (*(int *)(*(int *)(param_1 + 0x2c) + 8 + iVar2) == 0) goto LAB_00f97c96;
        iVar2 = iVar2 + 0xc;
      } while (iVar2 < 0x48);
      _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar1 * 4),param_3);
      *(void **)(param_1 + 0x38) = _Dst;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,uVar1 * 4);
        *(undefined4 *)(param_1 + 0x48) = *param_2;
        *(undefined4 *)(param_1 + 0x4c) = param_2[1];
        *(undefined4 *)(param_1 + 0x50) = param_2[2];
        uVar3 = param_2[3];
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 100) = 1;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
LAB_00f97c96:
  uVar1 = FUN_00f97a10();
  return uVar1 & 0xffffff00;
}

// 00F97CF0  FUN_00f97cf0  size=182  [run]
void __fastcall FUN_00f97cf0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_10;
  
  iVar8 = 0;
  iVar9 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 0xc);
  iVar7 = ((6 < *(int *)(*(int *)(param_1 + 0x5c) + 0xc)) - 1 & 0xfffffffb) + 6;
  iVar6 = 0;
  local_10 = 0;
  iVar4 = *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x54);
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x10) + iVar6 * 4);
      if (0 < iVar3) {
        if (iVar8 < 1) {
LAB_00f97d59:
          iVar8 = *(int *)(param_1 + 0x54);
          iVar5 = iVar6 / iVar8;
          *(int *)(*(int *)(param_1 + 0x34) + iVar9 * 4) = iVar5 << 0x1e;
          puVar1 = (uint *)(*(int *)(param_1 + 0x34) + iVar9 * 4);
          *puVar1 = *puVar1 | (iVar6 - iVar8 * iVar5 & 0x7fU) << 0x17;
          iVar9 = iVar9 + 1;
          if (iVar7 <= iVar9) break;
        }
        else if (iVar2 / iVar7 < iVar8 + iVar3) {
          local_10 = 0;
          goto LAB_00f97d59;
        }
        iVar8 = local_10 + iVar3;
        local_10 = iVar8;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(int *)(param_1 + 0x44) = iVar9;
  return;
}

// 00F97DD0  FUN_00f97dd0  size=6  [run]
undefined4 FUN_00f97dd0(void)

{
  return 1;
}

// 00F97DE0  FUN_00f97de0  size=7  [run]
void __fastcall FUN_00f97de0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00F97DF0  FUN_00f97df0  size=9  [run]
void __thiscall FUN_00f97df0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00F97F90  FUN_00f97f90  size=105  [run]
undefined4 FUN_00f97f90(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_01f206d4 + 0x44))(DAT_01f206d4,0,0,0,0);
  if ((iVar1 == -0x7789f798) || (DAT_01f2070c != 0)) {
    DAT_01f206f4 = 1;
  }
  else if (iVar1 < 0) {
    FUN_00dd5650("present failed.");
    return 0;
  }
  if (DAT_01f20700 != (int *)0x0) {
    (**(code **)(*DAT_01f20700 + 0xc))(DAT_01f20700,0,0,DAT_01f205e0,0,0);
  }
  return 1;
}

// 00F98000  FUN_00f98000  size=110  [run]
undefined4 FUN_00f98000(void)

{
  double dVar1;
  float10 fVar2;
  ulonglong uVar3;
  ulonglong local_8;
  
  uVar3 = FUN_00df8230();
  local_8 = uVar3 & 0x7fffffffffffffff;
  dVar1 = (double)local_8;
  local_8 = (ulonglong)((uint)(uVar3 >> 0x20) & 0x80000000) << 0x20;
  fVar2 = (float10)FUN_00df8260();
  local_8._0_4_ =
       (undefined4)
       (longlong)ROUND(fVar2 * (float10)(-(double)(longlong)local_8 + dVar1) * (float10)3.0);
  return (undefined4)local_8;
}

// 00F98070  FUN_00f98070  size=204  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f98070(void)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  ulonglong uVar4;
  int local_20;
  
  FUN_00f97f90();
  iVar1 = FUN_00f98000();
  uVar2 = iVar1 - _DAT_01f206f0;
  if (uVar2 < DAT_01f206ec) {
    do {
      uVar2 = (DAT_01f206ec - uVar2) / 3;
      if (uVar2 != 0) {
        Sleep(uVar2);
      }
      uVar4 = FUN_00df8230();
      fVar3 = (float10)FUN_00df8260();
      local_20 = (int)(longlong)
                      ROUND(fVar3 * (float10)(-(double)(longlong)
                                                       ((uVar4 >> 0x20 & 0x80000000) << 0x20) +
                                             (double)(uVar4 & 0x7fffffffffffffff)) * (float10)3.0);
      uVar2 = local_20 - _DAT_01f206f0;
    } while (uVar2 < DAT_01f206ec);
  }
  _DAT_01f206f0 = FUN_00f98000();
  return;
}

// 00F981C0  FUN_00f981c0  size=142  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f981c0(void)

{
  _memset(&DAT_01f20620,0,0x38);
  DAT_01f20620 = DAT_01f206dc;
  DAT_01f20624 = DAT_01f206e0;
  DAT_01f20628 = 0x15;
  _DAT_01f2062c = 0;
  _DAT_01f20630 = 0;
  _DAT_01f20634 = 0;
  _DAT_01f20638 = 1;
  _DAT_01f2063c = FUN_00df84c0();
  _DAT_01f20644 = 0;
  _DAT_01f2064c = 0;
  _DAT_01f20650 = 0;
  _DAT_01f20648 = 0x4b;
  DAT_01f20640 = 1;
  _DAT_01f20654 = 0x80000000;
  return 1;
}

// 00F98250  FUN_00f98250  size=142  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f98250(void)

{
  _memset(&DAT_01f205e8,0,0x38);
  DAT_01f205e8 = DAT_01f206dc;
  DAT_01f205ec = DAT_01f206e0;
  DAT_01f205f0 = 0x16;
  _DAT_01f205f4 = 0;
  _DAT_01f205f8 = 0;
  _DAT_01f205fc = 0;
  _DAT_01f20600 = 1;
  _DAT_01f20604 = FUN_00df84c0();
  _DAT_01f2060c = 0;
  _DAT_01f20614 = 0;
  DAT_01f20608 = 0;
  _DAT_01f20610 = 0x4b;
  _DAT_01f20618 = 0x3c;
  _DAT_01f2061c = 1;
  return 1;
}

// 00F98300  FUN_00f98300  size=93  [run]
undefined4 FUN_00f98300(void)

{
  int iVar1;
  
  if (DAT_01f206f4 == 0) {
    return 0;
  }
  iVar1 = FUN_00df8520();
  if ((iVar1 == 0) || (DAT_01f2070c == 0)) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0xc))(DAT_01f206d4);
    if (iVar1 == -0x7789f798) {
      return 0;
    }
    if ((iVar1 != -0x7789f797) && ((iVar1 = FUN_00df8520(), iVar1 != 0 || (DAT_01f2070c == 0)))) {
      FUN_00dd5650("TestCooperativeLevel returned unexpected value.");
      return 0;
    }
  }
  return 1;
}

// 00F983B0  FUN_00f983b0  size=151  [run]
void FUN_00f983b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_14;
  if (DAT_01f206d4 != (int *)0x0) {
    local_14 = param_1;
    local_c = param_1 + param_3;
    local_10 = param_2;
    local_8 = param_2 + param_4;
    iVar1 = (**(code **)(*DAT_01f206d4 + 0xac))
                      (DAT_01f206d4,1,&local_14,param_8,param_5,param_6,param_7);
    if (-1 < iVar1) {
      __security_check_cookie(local_4 ^ (uint)&local_14);
      return;
    }
    FUN_00dd5650(&DAT_016eb970);
  }
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

// 00F98450  FUN_00f98450  size=124  [run]
void FUN_00f98450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  int *piStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  puStack_20 = (undefined1 *)&local_1c;
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  if (DAT_01f206d4 == (int *)0x0) {
    puStack_20 = (undefined1 *)0xf98472;
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  local_c = param_5;
  local_18 = param_2;
  local_8 = param_6;
  local_1c = param_1;
  local_10 = param_4;
  local_14 = param_3;
  piStack_24 = DAT_01f206d4;
  (**(code **)(*DAT_01f206d4 + 0xbc))();
  __security_check_cookie(local_c ^ (uint)&piStack_24);
  return;
}

// 00F98510  FUN_00f98510  size=140  [run]
void FUN_00f98510(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int *piStack_20;
  undefined1 *puStack_1c;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_14;
  if (DAT_01f206d4 != (int *)0x0) {
    local_14 = param_1;
    local_c = param_1 + param_3;
    local_10 = param_2;
    local_8 = param_2 + param_4;
    piStack_20 = DAT_01f206d4;
    puStack_1c = (undefined1 *)&local_14;
    iVar1 = (**(code **)(*DAT_01f206d4 + 300))();
    if (-1 < iVar1) {
      puStack_1c = (undefined1 *)0xae;
      piStack_20 = DAT_01f206d4;
      (**(code **)(*DAT_01f206d4 + 0xe4))();
      __security_check_cookie(local_10 ^ (uint)&piStack_20);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

// 00F98600  FUN_00f98600  size=91  [run]
bool FUN_00f98600(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 400))(DAT_01f206d4,param_1,0,0,0);
    return -1 < iVar1;
  }
  iVar1 = (**(code **)(*DAT_01f206d4 + 400))(DAT_01f206d4,param_1,*param_2,param_2[5],param_2[6]);
  return -1 < iVar1;
}

// 00F98720  FUN_00f98720  size=65  [run]
bool FUN_00f98720(undefined4 *param_1)

{
  int iVar1;
  
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_01f206d4 + 0x148))
                    (DAT_01f206d4,*param_1,param_1[1],param_1[3],param_1[4],param_1[5],param_1[2]);
  return -1 < iVar1;
}

