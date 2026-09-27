// lib/havok/unit_010E2CA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010E2CA0..010E5790, 186 functions

#include "types.h"

// 010E2CA0  hkDataArrayNative::vf60  size=49  [run]
void __thiscall hkDataArrayNative::vf60(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x1c) != 0x19) {
    FUN_01027b90(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0xc),
                 *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),1);
  }
  return;
}

// 010E2CE0  FUN_010e2ce0  size=42  [run]
void __thiscall FUN_010e2ce0(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

// 010E2D10  FUN_010e2d10  size=42  [run]
void __thiscall FUN_010e2d10(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

// 010E2D40  FUN_010e2d40  size=44  [run]
void __fastcall FUN_010e2d40(uint param_1)

{
  hkDataObjectNative::~hkDataObjectNative(param_1,param_1 & 0xffffff00);
  return;
}

// 010E2D70  _anon_4671B7E4::DataWorldNative::vf24  size=127  [run]
undefined4 * __thiscall _anon_4671B7E4::DataWorldNative::vf24(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01025be0(param_2,0);
    if (puVar2 != (undefined4 *)0x0) {
      return puVar2;
    }
    param_2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x14);
  puVar2[1] = 0x14;
  puVar2[2] = 0;
  *puVar2 = hkDataClassNative::vftable;
  puVar2[3] = param_2;
  puVar2[4] = param_1;
  FUN_01025470(iVar1,puVar2);
  return puVar2;
}

// 010E2DF0  _anon_4671B7E4::DataWorldNative::vf28  size=120  [run]
void __thiscall
_anon_4671B7E4::DataWorldNative::vf28(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  puVar2[1] = 0x1c;
  puVar2[2] = 0;
  *puVar2 = hkDataObjectNative::vftable;
  iVar3 = param_3[1];
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*param_3);
  }
  FUN_0143ea20(*param_3,iVar3);
  puVar2[5] = param_1;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
  puVar2[2] = puVar2[2] + 1;
  *param_2 = puVar2;
  return;
}

// 010E2E70  _anon_4671B7E4::DataWorldNative::vf18  size=16  [run]
void _anon_4671B7E4::DataWorldNative::vf18(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 010E2E80  _anon_4671B7E4::DataWorldNative::vf1C  size=95  [run]
void __thiscall _anon_4671B7E4::DataWorldNative::vf1C(int param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  puVar2[1] = 0x1c;
  puVar2[2] = 0;
  *puVar2 = hkDataObjectNative::vftable;
  FUN_0143ea40(param_1 + 0x24);
  puVar2[5] = param_1;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
  puVar2[2] = puVar2[2] + 1;
  *param_2 = puVar2;
  return;
}

// 010E2EE0  FUN_010e2ee0  size=88  [run]
void __thiscall FUN_010e2ee0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  pcVar1 = (char *)FUN_01009770((int)&param_2 + 3);
  if (*pcVar1 == '\0') {
    iVar2 = **(int **)(param_1 + 8);
    uVar3 = FUN_010093a0();
    iVar2 = (**(code **)(iVar2 + 0x10))(uVar3);
  }
  else {
    iVar2 = FUN_01027b60(uVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
  }
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 010E2F40  _anon_4671B7E4::DataWorldNative::vf10  size=184  [run]
void __thiscall _anon_4671B7E4::DataWorldNative::vf10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar6;
  
  piVar4 = *(int **)(param_1 + 8);
  uVar1 = (**(code **)(*(int *)*param_2 + 8))();
  (**(code **)(*piVar4 + 0x10))(uVar1);
  uVar1 = FUN_01009750();
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(uVar1);
  uVar6 = extraout_ECX;
  if (iVar3 != 0) {
    uVar1 = FUN_01009750();
    FUN_01015ea0(iVar3,0,uVar1);
    piVar4 = (int *)(**(code **)(*DAT_0209b610 + 0xc))();
    uVar1 = (**(code **)(*(int *)*param_2 + 8))();
    iVar5 = (**(code **)(*piVar4 + 0x1c))(uVar1);
    uVar6 = extraout_ECX_00;
    if (iVar5 != 0) {
      FUN_0102cbc0(iVar3,0);
      uVar6 = extraout_ECX_01;
    }
  }
  hkDataObjectNative::~hkDataObjectNative(param_1,uVar6 & 0xffffff00);
  return;
}

// 010E3000  hkDataWorldNative::hkDataWorldNative  size=226  [run]
undefined4 * __thiscall hkDataWorldNative::hkDataWorldNative(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  uint local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  local_8 = (uint)param_1 & 0xffffff00;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_01025830(local_8);
  *(undefined1 *)(param_1 + 0xb) = param_2;
  hkTypeManager::hkTypeManager();
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x80000000;
  param_1[10] = 0;
  param_1[9] = 0;
  iVar1 = (**(code **)(*DAT_0209b610 + 0x14))();
  if (iVar1 != 0) {
    FUN_01006000();
  }
  if (param_1[3] != 0) {
    FUN_010060a0();
  }
  param_1[3] = iVar1;
  iVar1 = (**(code **)(*DAT_0209b610 + 0x10))();
  if (iVar1 != 0) {
    FUN_01006000();
  }
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = iVar1;
  iVar1 = (**(code **)(*DAT_0209b610 + 0xc))();
  if (iVar1 != 0) {
    FUN_01006000();
  }
  if (param_1[4] != 0) {
    FUN_010060a0();
  }
  param_1[4] = iVar1;
  return param_1;
}

// 010E30F0  hkBaseObject::hkBaseObject_207  size=237  [run]
void __fastcall hkBaseObject::hkBaseObject_207(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_8;
  
  *param_1 = hkDataWorldNative::vftable;
  uStack_8 = param_1;
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&uStack_8 + 3,uVar1);
  while (uStack_8._3_1_ != '\0') {
    puVar2 = (undefined4 *)FUN_01025400(uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890((int)&uStack_8 + 3,uVar1);
  }
  param_1[0x2f] = 0;
  if (-1 < (int)param_1[0x30]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x2e],param_1[0x30] & 0x3fffffff);
  }
  param_1[0x2e] = 0;
  param_1[0x30] = 0x80000000;
  hkBaseObject_221();
  FUN_01025870();
  if (param_1[4] != 0) {
    FUN_010060a0();
  }
  param_1[4] = 0;
  if (param_1[3] != 0) {
    FUN_010060a0();
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 010E31E0  _anon_4671B7E4::DataWorldNative::vf20  size=208  [run]
void __thiscall _anon_4671B7E4::DataWorldNative::vf20(int *param_1,int *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((int *)param_1[2] != (int *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_c = -0x80000000;
    (**(code **)(*(int *)param_1[2] + 0x14))(&local_14);
    local_8 = 0;
    if (0 < local_10) {
      do {
        iVar3 = local_8;
        pbVar1 = (byte *)FUN_010099b0();
        if ((*pbVar1 & 1) == 0) {
          iVar3 = *param_1;
          uVar2 = FUN_010093a0();
          uVar2 = (**(code **)(iVar3 + 0x24))(uVar2);
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,param_2,4);
          }
          *(undefined4 *)(*param_2 + param_2[1] * 4) = uVar2;
          param_2[1] = param_2[1] + 1;
          iVar3 = local_8;
        }
        local_8 = iVar3 + 1;
      } while (local_8 < local_10);
    }
    local_10 = 0;
    if (-1 < local_c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
    }
  }
  return;
}

// 010E32C0  FUN_010e32c0  size=27  [run]
uint __fastcall FUN_010e32c0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010E32E0  FUN_010e32e0  size=9  [run]
void FUN_010e32e0(void)

{
  FUN_01025470();
  return;
}

// 010E32F0  FUN_010e32f0  size=9  [run]
void FUN_010e32f0(void)

{
  FUN_01025be0();
  return;
}

// 010E3310  FUN_010e3310  size=9  [run]
void FUN_010e3310(void)

{
  FUN_01025400();
  return;
}

// 010E3320  FUN_010e3320  size=9  [run]
void FUN_010e3320(void)

{
  FUN_01025440();
  return;
}

// 010E3330  FUN_010e3330  size=24  [run]
undefined4 FUN_010e3330(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010E3350  FUN_010e3350  size=14  [run]
void __thiscall FUN_010e3350(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010E3370  FUN_010e3370  size=22  [run]
void __fastcall FUN_010e3370(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010E3390  FUN_010e3390  size=40  [run]
void __thiscall FUN_010e3390(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 010E33E0  FUN_010e33e0  size=22  [run]
void __fastcall FUN_010e33e0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010E3400  FUN_010e3400  size=40  [run]
void __thiscall FUN_010e3400(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 010E3430  FUN_010e3430  size=34  [run]
void FUN_010e3430(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010E3470  FUN_010e3470  size=37  [run]
void FUN_010e3470(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010E34A0  FUN_010e34a0  size=38  [run]
void FUN_010e34a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E34D0  hkDataRefCounted::vf00  size=53  [run]
undefined4 * __thiscall hkDataRefCounted::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E3510  FUN_010e3510  size=38  [run]
void FUN_010e3510(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E3540  hkDataClassNative::hkDataClassNative  size=36  [run]
void __thiscall
hkDataClassNative::hkDataClassNative(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}

// 010E3570  hkDataClassNative::vf04  size=4  [run]
undefined4 __fastcall hkDataClassNative::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 010E3580  hkDataClassNative::vf08  size=8  [run]
void hkDataClassNative::vf08(void)

{
  FUN_010093a0();
  return;
}

// 010E3590  hkDataClassNative::vf0C  size=8  [run]
void hkDataClassNative::vf0C(void)

{
  FUN_010097a0();
  return;
}

// 010E35A0  hkDataClassNative::vf10  size=44  [run]
undefined4 __fastcall hkDataClassNative::vf10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_010093b0();
  if (iVar1 != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    uVar2 = FUN_010093a0();
    uVar2 = (**(code **)(iVar1 + 0x24))(uVar2);
    return uVar2;
  }
  return 0;
}

// 010E35D0  hkDataClassNative::vf14  size=87  [run]
void __thiscall hkDataClassNative::vf14(int *param_1,undefined1 *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 == (int *)0x0) {
      *param_2 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_1 + 8))();
    uVar1 = (**(code **)(*param_3 + 8))(uVar1);
    iVar2 = FUN_01015b90(uVar1);
    if (iVar2 == 0) break;
    param_3 = (int *)(**(code **)(*param_3 + 0x10))();
  }
  *param_2 = 1;
  return;
}

// 010E3630  hkDataClassNative::vf18  size=8  [run]
void hkDataClassNative::vf18(void)

{
  FUN_010095e0();
  return;
}

// 010E3640  hkDataClassNative::vf20  size=12  [run]
void hkDataClassNative::vf20(void)

{
  FUN_01009700();
  return;
}

// 010E3650  hkDataClassNative::vf24  size=8  [run]
void hkDataClassNative::vf24(void)

{
  FUN_01009570();
  return;
}

// 010E3660  hkDataClassNative::vf2C  size=12  [run]
void hkDataClassNative::vf2C(void)

{
  FUN_010096b0();
  return;
}

// 010E3690  hkDataClassNative::vf00  size=53  [run]
undefined4 * __thiscall hkDataClassNative::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDataRefCounted::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E36D0  hkDataClassImpl::vf00  size=53  [run]
undefined4 * __thiscall hkDataClassImpl::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDataRefCounted::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E3710  hkDataObjectNative::hkDataObjectNative  size=52  [run]
undefined4 * __thiscall
hkDataObjectNative::hkDataObjectNative
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  FUN_0143ea40(param_2);
  *(undefined1 *)(param_1 + 6) = param_4;
  param_1[5] = param_3;
  return param_1;
}

// 010E3750  FUN_010e3750  size=20  [run]
void __thiscall FUN_010e3750(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010E3790  hkDataArrayImpl::vf24  size=3  [run]
undefined4 hkDataArrayImpl::vf24(void)

{
  return 0;
}

// 010E37A0  hkDataArrayImpl::vf28  size=5  [run]
undefined4 hkDataArrayImpl::vf28(void)

{
  return 0;
}

// 010E37B0  hkDataArrayImpl::vf2C  size=5  [run]
undefined4 hkDataArrayImpl::vf2C(void)

{
  return 0;
}

// 010E37C0  hkDataArrayImpl::vf30  size=3  [run]
void hkDataArrayImpl::vf30(void)

{
  return;
}

// 010E37D0  hkDataArrayImpl::vf34  size=5  [run]
undefined4 hkDataArrayImpl::vf34(void)

{
  return 0;
}

// 010E37E0  hkDataArrayImpl::vf38  size=3  [run]
void hkDataArrayImpl::vf38(void)

{
  return;
}

// 010E37F0  hkDataArrayImpl::vf3C  size=5  [run]
float10 hkDataArrayImpl::vf3C(void)

{
  return (float10)0;
}

// 010E3800  hkDataArrayImpl::vf40  size=3  [run]
void hkDataArrayImpl::vf40(void)

{
  return;
}

// 010E3810  hkDataArrayImpl::vf44  size=30  [run]
void hkDataArrayImpl::vf44(undefined2 *param_1)

{
  *param_1 = 0;
  return;
}

// 010E3830  hkDataArrayImpl::vf48  size=3  [run]
void hkDataArrayImpl::vf48(void)

{
  return;
}

// 010E3840  hkDataArrayImpl::vf4C  size=5  [run]
undefined4 hkDataArrayImpl::vf4C(void)

{
  return 0;
}

// 010E3850  hkDataArrayImpl::vf50  size=3  [run]
void hkDataArrayImpl::vf50(void)

{
  return;
}

// 010E3860  hkDataArrayImpl::vf54  size=7  [run]
undefined8 hkDataArrayImpl::vf54(void)

{
  return 0;
}

// 010E3870  hkDataArrayImpl::vf58  size=3  [run]
void hkDataArrayImpl::vf58(void)

{
  return;
}

// 010E3880  hkDataArrayImpl::vf5C  size=5  [run]
undefined4 hkDataArrayImpl::vf5C(void)

{
  return 0;
}

// 010E3890  hkDataArrayImpl::vf60  size=3  [run]
void hkDataArrayImpl::vf60(void)

{
  return;
}

// 010E38A0  hkDataArrayImpl::vf64  size=5  [run]
undefined4 hkDataArrayImpl::vf64(void)

{
  return 0;
}

// 010E38B0  hkDataArrayImpl::vf68  size=3  [run]
void hkDataArrayImpl::vf68(void)

{
  return;
}

// 010E38C0  hkDataArrayImpl::vf98  size=3  [run]
void hkDataArrayImpl::vf98(void)

{
  return;
}

// 010E38D0  hkDataArrayImpl::vf94  size=3  [run]
void hkDataArrayImpl::vf94(void)

{
  return;
}

// 010E38E0  hkDataArrayImpl::vf90  size=3  [run]
void hkDataArrayImpl::vf90(void)

{
  return;
}

// 010E38F0  hkDataArrayImpl::vf8C  size=3  [run]
void hkDataArrayImpl::vf8C(void)

{
  return;
}

// 010E3900  hkDataArrayImpl::vf88  size=3  [run]
void hkDataArrayImpl::vf88(void)

{
  return;
}

// 010E3910  hkDataArrayImpl::vf84  size=3  [run]
void hkDataArrayImpl::vf84(void)

{
  return;
}

// 010E3920  hkDataArrayImpl::vf80  size=3  [run]
void hkDataArrayImpl::vf80(void)

{
  return;
}

// 010E3930  hkDataArrayImpl::vf7C  size=3  [run]
void hkDataArrayImpl::vf7C(void)

{
  return;
}

// 010E3940  hkDataArrayImpl::vf78  size=3  [run]
void hkDataArrayImpl::vf78(void)

{
  return;
}

// 010E3950  hkDataArrayImpl::vf74  size=3  [run]
void hkDataArrayImpl::vf74(void)

{
  return;
}

// 010E3960  hkDataArrayImpl::vf70  size=3  [run]
void hkDataArrayImpl::vf70(void)

{
  return;
}

// 010E3970  hkDataArrayImpl::vf6C  size=3  [run]
void hkDataArrayImpl::vf6C(void)

{
  return;
}

// 010E3990  hkDataObjectNative::vf04  size=48  [run]
undefined4 * __thiscall hkDataObjectNative::vf04(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  puVar2 = param_2;
  uVar1 = *(uint *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  pcVar3 = (char *)FUN_01009770((int)&param_2 + 3);
  puVar2[1] = (*pcVar3 != '\0') - 1 & uVar1;
  return puVar2;
}

// 010E39C0  hkDataObjectNative::vf08  size=37  [run]
undefined4 __fastcall hkDataObjectNative::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = **(int **)(param_1 + 0x14);
    uVar2 = FUN_010093a0();
    uVar2 = (**(code **)(iVar1 + 0x24))(uVar2);
    return uVar2;
  }
  return 0;
}

// 010E39F0  hkDataObjectNative::vf0C  size=90  [run]
void __thiscall hkDataObjectNative::vf0C(int param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  FUN_0143e7c0(param_1 + 0xc,param_3);
  pcVar1 = (char *)FUN_0143e810((int)&param_3 + 3);
  if (*pcVar1 != '\0') {
    iVar2 = FUN_0143e9e0();
    *param_2 = param_1;
    param_2[1] = iVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

// 010E3A50  hkDataObjectNative::vf10  size=49  [run]
bool __thiscall hkDataObjectNative::vf10(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  FUN_0143e7c0(param_1 + 0xc,param_2);
  pcVar1 = (char *)FUN_0143e810((int)&param_2 + 3);
  return *pcVar1 != '\0';
}

// 010E3A90  hkDataObjectNative::vf68  size=49  [run]
bool __thiscall hkDataObjectNative::vf68(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  pcVar1 = (char *)FUN_0143e810((int)&param_2 + 3);
  return *pcVar1 != '\0';
}

// 010E3AD0  hkDataObjectNative::vf14  size=3  [run]
undefined4 hkDataObjectNative::vf14(void)

{
  return 0;
}

// 010E3AE0  hkDataObjectNative::vf18  size=25  [run]
bool hkDataObjectNative::vf18(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01009570();
  return param_1 < iVar1;
}

// 010E3B00  hkDataObjectNative::vf1C  size=11  [run]
int hkDataObjectNative::vf1C(int param_1)

{
  return param_1 + 1;
}

// 010E3B10  hkDataObjectNative::vf24  size=33  [run]
void __thiscall hkDataObjectNative::vf24(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01009590(param_3);
  *param_2 = param_1;
  param_2[1] = uVar1;
  return;
}

// 010E3B40  hkDataObjectNative::vf70  size=1  [run]
void hkDataObjectNative::vf70(void)

{
  return;
}

// 010E3B50  hkDataObjectNative::vf60  size=24  [run]
void __thiscall hkDataObjectNative::vf60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01113180(param_1,param_2,param_3);
  return;
}

// 010E3B70  hkDataObjectNative::vf58  size=3  [run]
void hkDataObjectNative::vf58(void)

{
  return;
}

// 010E3B80  hkDataObjectNative::vf6C  size=3  [run]
undefined4 hkDataObjectNative::vf6C(void)

{
  return 0;
}

// 010E3BC0  FUN_010e3bc0  size=97  [run]
void __thiscall FUN_010e3bc0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *param_2 + param_2[1] * 4;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar2 = FUN_010095e0();
    iVar1 = iVar1 + iVar2 * -4;
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_01009590(iVar4);
        *(undefined4 *)(iVar1 + iVar4 * 4) = uVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    iVar2 = FUN_010093b0();
  }
  return;
}

// 010E3C30  hkDataArrayNative::~hkDataArrayNative  size=102  [run]
undefined4 * __thiscall
hkDataArrayNative::~hkDataArrayNative
          (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[0xb] = param_9;
  param_1[7] = param_6;
  *param_1 = vftable;
  param_1[3] = param_2;
  param_1[8] = param_7;
  param_1[9] = param_8;
  param_1[0xc] = param_10;
  uVar1 = (**(code **)(*param_2 + 0x60))(param_6,param_7,param_8,param_9);
  param_1[10] = uVar1;
  return param_1;
}

// 010E3CA0  hkDataArrayNative::vf04  size=4  [run]
undefined4 __fastcall hkDataArrayNative::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}

// 010E3CB0  hkDataArrayNative::vf1C  size=4  [run]
undefined4 __fastcall hkDataArrayNative::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 010E3CC0  hkDataArrayNative::vf0C  size=38  [run]
void __thiscall hkDataArrayNative::vf0C(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01028180(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x24),param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

// 010E3CF0  hkDataArrayNative::vf14  size=21  [run]
undefined4 __fastcall hkDataArrayNative::vf14(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_01028170(*(int *)(param_1 + 0x30));
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x14);
}

// 010E3D10  hkDataArrayNative::vf24  size=24  [run]
undefined4 __fastcall hkDataArrayNative::vf24(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x1c) == 9) || (uVar1 = 4, *(int *)(param_1 + 0x1c) == 10)) {
    uVar1 = 8;
  }
  return uVar1;
}

// 010E3D30  hkDataArrayNative::vf18  size=37  [run]
undefined4 __fastcall hkDataArrayNative::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = **(int **)(param_1 + 0xc);
    uVar2 = FUN_010093a0();
    uVar2 = (**(code **)(iVar1 + 0x24))(uVar2);
    return uVar2;
  }
  return 0;
}

// 010E3D60  hkDataArrayNative::vf20  size=121  [run]
undefined4 __thiscall hkDataArrayNative::vf20(int *param_1,int *param_2)

{
  int iVar1;
  
  param_2[1] = 1;
  *param_2 = param_1[7];
  switch(param_1[7]) {
  case 0xc:
  case 0xd:
    param_2[1] = 4;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    param_2[1] = 0xc;
    break;
  case 0x11:
  case 0x12:
    param_2[1] = 0x10;
    break;
  default:
    goto switchD_010e3d89_caseD_13;
  case 0x18:
  case 0x1f:
    *param_2 = param_1[8];
    param_2[1] = 1;
    goto switchD_010e3d89_caseD_13;
  }
  *param_2 = 0xb;
switchD_010e3d89_caseD_13:
  iVar1 = (**(code **)(*param_1 + 0x14))();
  param_2[3] = iVar1;
  param_2[4] = param_1[6];
  param_2[2] = param_1[4];
  return 0;
}

// 010E3E10  FUN_010e3e10  size=88  [run]
void __thiscall FUN_010e3e10(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (((param_2 == 4) && (iVar1 = param_1[7], iVar2 = iVar1, iVar1 != 1)) &&
     (iVar2 = param_2, iVar1 == 2)) {
    iVar2 = iVar1;
  }
  if (iVar2 == param_1[7]) {
    (**(code **)(*param_1 + 0x10))(param_4);
    iVar2 = FUN_01016260(iVar2);
    FUN_01015e80(param_1[4],param_3,*(short *)(iVar2 + 8) * param_4);
  }
  return;
}

// 010E3E70  hkDataArrayNative::vf98  size=61  [run]
void __thiscall hkDataArrayNative::vf98(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 1) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(1);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E3EB0  hkDataArrayNative::vf94  size=61  [run]
void __thiscall hkDataArrayNative::vf94(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 2) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(2);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E3EF0  hkDataArrayNative::vf90  size=61  [run]
void __thiscall hkDataArrayNative::vf90(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 3) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(3);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E3F30  hkDataArrayNative::vf8C  size=84  [run]
void __thiscall hkDataArrayNative::vf8C(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[7];
  iVar2 = iVar1;
  if ((iVar1 != 1) && (iVar2 = 4, iVar1 == 2)) {
    iVar2 = iVar1;
  }
  if (iVar2 == iVar1) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(iVar2);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E3F90  hkDataArrayNative::vf88  size=61  [run]
void __thiscall hkDataArrayNative::vf88(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 5) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(5);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E3FD0  hkDataArrayNative::vf84  size=61  [run]
void __thiscall hkDataArrayNative::vf84(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 6) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(6);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E4010  hkDataArrayNative::vf80  size=61  [run]
void __thiscall hkDataArrayNative::vf80(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 7) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(7);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E4050  hkDataArrayNative::vf7C  size=61  [run]
void __thiscall hkDataArrayNative::vf7C(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 8) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(8);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E4090  hkDataArrayNative::vf78  size=61  [run]
void __thiscall hkDataArrayNative::vf78(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 9) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(9);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E40D0  hkDataArrayNative::vf74  size=61  [run]
void __thiscall hkDataArrayNative::vf74(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 10) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(10);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E4110  hkDataArrayNative::vf70  size=61  [run]
void __thiscall hkDataArrayNative::vf70(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 0xb) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(0xb);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E4150  hkDataArrayNative::vf6C  size=61  [run]
void __thiscall hkDataArrayNative::vf6C(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[7] == 0x20) {
    (**(code **)(*param_1 + 0x10))(param_3);
    iVar1 = FUN_01016260(0x20);
    FUN_01015e80(param_1[4],param_2,*(short *)(iVar1 + 8) * param_3);
  }
  return;
}

// 010E4190  hkDataArrayNative::vf68  size=3  [run]
void hkDataArrayNative::vf68(void)

{
  return;
}

// 010E41C0  hkDataArrayNative::vf2C  size=44  [run]
void __thiscall hkDataArrayNative::vf2C(int param_1,int param_2)

{
  FUN_01028cc0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x2c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),
               *(int *)(param_1 + 0xc) + 0xb8);
  return;
}

// 010E41F0  hkDataArrayNative::vf34  size=30  [run]
void __thiscall hkDataArrayNative::vf34(int param_1,int param_2)

{
  FUN_01027fe0(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10));
  return;
}

// 010E4210  hkDataArrayNative::vf3C  size=30  [run]
void __thiscall hkDataArrayNative::vf3C(int param_1,int param_2)

{
  FUN_01027500(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10));
  return;
}

// 010E4230  hkDataArrayNative::vf4C  size=34  [run]
void __thiscall hkDataArrayNative::vf4C(int param_1,int param_2)

{
  FUN_01027640(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10));
  return;
}

// 010E4260  hkDataArrayNative::vf54  size=34  [run]
void __thiscall hkDataArrayNative::vf54(int param_1,int param_2)

{
  FUN_01027640(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10));
  return;
}

// 010E4290  hkDataArrayNative::vf64  size=241  [run]
undefined4 __thiscall hkDataArrayNative::vf64(int param_1,int param_2)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0x19) {
      iVar1 = FUN_01009750();
    }
    else {
      iVar1 = FUN_01016260(*(int *)(param_1 + 0x1c));
      iVar1 = (int)*(short *)(iVar1 + 8);
    }
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x34);
    *(undefined2 *)(iVar3 + 4) = 0x34;
    uVar4 = ~hkDataArrayNative(*(undefined4 *)(param_1 + 0xc),puVar5,*(undefined4 *)(param_1 + 0x2c)
                               ,iVar1,*(undefined4 *)(param_1 + 0x1c),
                               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x1c) == 0x16) {
    uVar4 = FUN_01027c20(*(undefined4 *)(param_1 + 0x20),0,*(undefined4 *)(param_1 + 0x24),0);
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x34);
    *(undefined2 *)(iVar1 + 4) = 0x34;
    uVar4 = ~hkDataArrayNative(*(undefined4 *)(param_1 + 0xc),*puVar5,puVar5[1],uVar4,
                               *(undefined4 *)(param_1 + 0x20),0,*(undefined4 *)(param_1 + 0x24),0,0
                              );
    return uVar4;
  }
  return 0;
}

// 010E4390  FUN_010e4390  size=17  [run]
int __thiscall FUN_010e4390(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10);
}

// 010E43B0  hkDataArrayNative::vf00  size=53  [run]
undefined4 * __thiscall hkDataArrayNative::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDataRefCounted::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E43F0  hkDataArrayImpl::vf00  size=53  [run]
undefined4 * __thiscall hkDataArrayImpl::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDataRefCounted::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E4430  hkDataObjectNative::hkDataObjectNative_2  size=77  [run]
undefined4 * __thiscall
hkDataObjectNative::hkDataObjectNative_2(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_3 + 0xc) + 0x14))(*param_2);
  }
  FUN_0143ea20(*param_2,iVar1);
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}

// 010E4480  hkDataRefCounted::hkDataRefCounted_17  size=31  [run]
void __fastcall hkDataRefCounted::hkDataRefCounted_17(undefined4 *param_1)

{
  *param_1 = hkDataObjectNative::vftable;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_010060a0();
  }
  *param_1 = vftable;
  return;
}

// 010E44A0  hkDataObjectNative::vf20  size=21  [run]
undefined4 hkDataObjectNative::vf20(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01009590(param_1);
  return *puVar1;
}

// 010E44C0  hkDataObjectNative::vf74  size=18  [run]
void __fastcall hkDataObjectNative::vf74(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  FUN_010e3bc0();
  return;
}

// 010E44E0  hkDataObjectNative::vf5C  size=138  [run]
void __thiscall hkDataObjectNative::vf5C(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar5 = (*(ushort *)(param_2 + 0x10) & 0x200) != 0x200;
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  if (param_3 != 0) {
    uVar4 = *(undefined4 *)(param_3 + 0xc);
    uVar1 = *(undefined4 *)(param_3 + 0x10);
    uVar2 = FUN_0143e840(bVar5);
    FUN_01027b90(uVar1,uVar4,uVar2);
    return;
  }
  iVar3 = FUN_01016300();
  if (iVar3 != 0) {
    uVar4 = FUN_0143e840(bVar5);
    uVar4 = FUN_01016300(0,uVar4);
    FUN_01027b90(uVar4);
  }
  return;
}

// 010E4570  hkDataObjectNative::vf00  size=73  [run]
undefined4 * __thiscall hkDataObjectNative::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_010060a0();
  }
  *param_1 = hkDataRefCounted::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E45C0  hkDataObjectImpl::vf00  size=53  [run]
undefined4 * __thiscall hkDataObjectImpl::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDataRefCounted::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E4600  hkDataWorld::vf00  size=53  [run]
undefined4 * __thiscall hkDataWorld::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E4640  FUN_010e4640  size=57  [run]
void __thiscall FUN_010e4640(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E46A0  FUN_010e46a0  size=248  [run]
void FUN_010e46a0(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  iVar3 = (**(code **)(*param_2 + 0x2c))();
  *param_4 = *param_3;
  param_4[1] = param_1;
  if (((*(ushort *)(param_3 + 4) & 0x400) == 0x400) && ((char)param_2[0xb] == '\0')) {
    param_4[2] = *(undefined4 *)(iVar3 + 0x10);
    return;
  }
  iVar3 = FUN_01016300();
  if (iVar3 != 0) {
    iVar4 = FUN_01016340(PTR_s_hk_DataObjectType_01b1db18);
    if (iVar4 == 0) {
      uVar7 = FUN_010093a0("hkpMaxSizeMotion");
      iVar4 = FUN_01015b90(uVar7);
      if (iVar4 != 0) goto LAB_010e475d;
      pcVar6 = *(code **)(*(int *)param_2[2] + 0x10);
      pcVar8 = "hkpMotion";
    }
    else {
      FUN_0143e7c0(iVar4,"typeName");
      iVar3 = *(int *)param_2[2];
      puVar5 = (undefined4 *)FUN_0143e860(0);
      pcVar8 = (char *)*puVar5;
      pcVar6 = *(code **)(iVar3 + 0x10);
    }
    iVar3 = (*pcVar6)(pcVar8);
  }
LAB_010e475d:
  uVar1 = *(undefined1 *)((int)param_3 + 0xd);
  uVar2 = *(undefined1 *)(param_3 + 3);
  iVar4 = *param_2;
  uVar7 = FUN_01016320();
  uVar7 = (**(code **)(iVar4 + 0x60))(uVar2,uVar1,iVar3,uVar7);
  param_4[2] = uVar7;
  return;
}

// 010E47A0  FUN_010e47a0  size=28  [run]
void __thiscall FUN_010e47a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010e46a0(param_1,*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  return;
}

// 010E47C0  hkDataClassNative::vf1C  size=57  [run]
void __thiscall hkDataClassNative::vf1C(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010095f0(param_2);
  FUN_010e46a0(param_1,*(undefined4 *)(param_1 + 0x10),uVar1,param_3);
  uVar1 = FUN_01009950(param_2);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  return;
}

// 010E4800  hkDataClassNative::vf28  size=57  [run]
void __thiscall hkDataClassNative::vf28(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01009590(param_2);
  FUN_010e46a0(param_1,*(undefined4 *)(param_1 + 0x10),uVar1,param_3);
  uVar1 = FUN_01009870(param_2);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  return;
}

// 010E4840  hkDataClassNative::vf30  size=135  [run]
void __thiscall hkDataClassNative::vf30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2[1] * 0x10 + *param_2;
  iVar3 = *(int *)(param_1 + 0xc);
  while (iVar3 != 0) {
    iVar1 = FUN_010095e0();
    iVar5 = iVar5 + iVar1 * -0x10;
    iVar4 = 0;
    iVar3 = iVar5;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_010095f0(iVar4);
        FUN_010e46a0(param_1,*(undefined4 *)(param_1 + 0x10),uVar2,iVar3);
        uVar2 = FUN_01009950(iVar4);
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < iVar1);
    }
    iVar3 = FUN_010093b0();
  }
  return;
}

// 010E48D0  hkDataArrayNative::vf08  size=28  [run]
void __fastcall hkDataArrayNative::vf08(int param_1)

{
  FUN_01028bd0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10),*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
  return;
}

// 010E48F0  hkDataArrayNative::vf10  size=56  [run]
void __thiscall hkDataArrayNative::vf10(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (param_2 != iVar1) {
    iVar1 = FUN_01028c10(*(undefined4 *)(param_1[3] + 0x10),param_1[0xc],param_1[7],param_1[9],
                         param_2);
    param_1[4] = iVar1;
  }
  return;
}

// 010E4930  hkDataArrayNative::vf5C  size=101  [run]
undefined4 __thiscall hkDataArrayNative::vf5C(int param_1,int param_2)

{
  undefined4 uVar1;
  uint extraout_ECX;
  undefined8 uVar2;
  
  uVar2 = FUN_010282b0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc),
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + 8),
                       *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10));
  if (((int)uVar2 != 0) && ((int)((ulonglong)uVar2 >> 0x20) != 0)) {
    uVar1 = hkDataObjectNative::~hkDataObjectNative
                      (*(undefined4 *)(param_1 + 0xc),extraout_ECX & 0xffffff00);
    return uVar1;
  }
  return 0;
}

// 010E49A0  hkDataArrayNative::vf28  size=198  [run]
undefined4 * __thiscall hkDataArrayNative::vf28(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  LPVOID pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar7 = FUN_01009660(param_2);
  uVar3 = *(ushort *)(iVar7 + 0x12);
  bVar1 = *(byte *)(iVar7 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  puVar9 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 4))(0x34);
  *(undefined2 *)(puVar9 + 1) = 0x34;
  bVar2 = *(byte *)(iVar7 + 0xd);
  uVar10 = FUN_01016320();
  uVar11 = FUN_01016300();
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  piVar6 = *(int **)(param_1 + 0xc);
  *(undefined2 *)((int)puVar9 + 6) = 0;
  puVar9[2] = 0;
  puVar9[5] = uVar5;
  puVar9[6] = uVar12;
  puVar9[4] = (uint)uVar3 + iVar4;
  puVar9[7] = (uint)bVar1;
  puVar9[8] = (uint)bVar2;
  *puVar9 = vftable;
  puVar9[3] = piVar6;
  puVar9[9] = uVar11;
  puVar9[0xb] = uVar10;
  puVar9[0xc] = 0;
  uVar12 = (**(code **)(*piVar6 + 0x60))((uint)bVar1,(uint)bVar2,uVar11,uVar10);
  puVar9[10] = uVar12;
  return puVar9;
}

// 010E4A70  hkDataArrayNative::vf30  size=40  [run]
void __thiscall hkDataArrayNative::vf30(int param_1,int param_2,undefined4 param_3)

{
  FUN_01027a60(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x2c),param_3,
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),0xffffffff);
  return;
}

// 010E4AA0  hkDataArrayNative::vf38  size=34  [run]
void __thiscall hkDataArrayNative::vf38(int param_1,int param_2,undefined4 param_3)

{
  FUN_010277b0(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),param_3);
  return;
}

// 010E4AD0  hkDataArrayNative::vf40  size=41  [run]
void __thiscall hkDataArrayNative::vf40(int param_1,int param_2,undefined4 param_3)

{
  FUN_01027530(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),param_3);
  return;
}

// 010E4B00  hkDataArrayNative::vf48  size=34  [run]
void __thiscall hkDataArrayNative::vf48(int param_1,int param_2,undefined4 param_3)

{
  FUN_01027560(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),param_3);
  return;
}

// 010E4B30  hkDataArrayNative::vf50  size=36  [run]
void __thiscall hkDataArrayNative::vf50(int param_1,int param_2,int param_3)

{
  FUN_01027680(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),param_3,param_3 >> 0x1f
              );
  return;
}

// 010E4B60  hkDataArrayNative::vf58  size=38  [run]
void __thiscall
hkDataArrayNative::vf58(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01027680(*(undefined4 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),param_3,param_4);
  return;
}

// 010E4B90  hkDataObjectNative::vf28  size=481  [run]
undefined4 * __thiscall hkDataObjectNative::vf28(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *local_14;
  uint local_c;
  int local_8;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  local_14 = (int *)0x0;
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x19:
  case 0x1e:
  case 0x20:
    local_8 = FUN_0143e840();
    FUN_0143e9e0();
    local_c = FUN_01016320();
    uVar8 = (uint)*(byte *)(param_2 + 0xc);
    iVar7 = FUN_01016300();
    if (uVar8 != 0x19) {
      iVar2 = FUN_01016260(uVar8);
      param_2 = (int)*(short *)(iVar2 + 8);
      goto LAB_010e4cf9;
    }
    goto LAB_010e4c8b;
  default:
    local_8 = 0;
    local_c = 0;
    iVar7 = 0;
    break;
  case 0x16:
  case 0x1a:
    local_14 = (int *)FUN_0143e840();
    local_8 = *local_14;
    local_c = local_14[1];
    goto LAB_010e4c1f;
  case 0x1b:
    iVar7 = FUN_0143e840();
    local_8 = *(int *)(iVar7 + 4);
    local_14 = (int *)(iVar7 + 4);
    local_c = *(uint *)(iVar7 + 8);
    piVar1 = (int *)FUN_0143e840();
    iVar7 = *piVar1;
    if (iVar7 != 0) {
      param_2 = FUN_01009750();
      uVar8 = 0x19;
      goto LAB_010e4cf9;
    }
    break;
  case 0x22:
    puVar3 = (ushort *)FUN_0143e840();
    local_c = (uint)*puVar3;
    local_8 = (uint)puVar3[1] + (int)puVar3;
LAB_010e4c1f:
    iVar7 = FUN_01016300();
    uVar8 = (uint)*(byte *)(param_2 + 0xd);
    iVar2 = FUN_01016260(uVar8);
    param_2 = (int)*(short *)(iVar2 + 8);
    if (uVar8 == 0) {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      iVar7 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x34);
      *(undefined2 *)(iVar7 + 4) = 0x34;
      puVar5 = (undefined4 *)
               hkDataArrayNative::~hkDataArrayNative
                         (*(undefined4 *)(param_1 + 0x14),0,0,0,0,0,0,0,0);
      return puVar5;
    }
    if (param_2 == -1) {
LAB_010e4c8b:
      param_2 = FUN_01009750();
    }
    goto LAB_010e4cf9;
  }
  uVar8 = 0;
  param_2 = 0;
LAB_010e4cf9:
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x34);
  *(undefined2 *)(puVar5 + 1) = 0x34;
  piVar1 = *(int **)(param_1 + 0x14);
  puVar5[4] = local_8;
  puVar5[5] = local_c;
  puVar5[6] = param_2;
  *(undefined2 *)((int)puVar5 + 6) = 0;
  puVar5[2] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  *puVar5 = hkDataArrayNative::vftable;
  puVar5[3] = piVar1;
  puVar5[7] = uVar8;
  puVar5[9] = iVar7;
  puVar5[0xc] = local_14;
  uVar6 = (**(code **)(*piVar1 + 0x60))(uVar8,0,iVar7,0);
  puVar5[10] = uVar6;
  return puVar5;
}

// 010E4DB0  hkDataObjectNative::vf2C  size=52  [run]
void __thiscall hkDataObjectNative::vf2C(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840();
  FUN_01027fe0(uVar1,uVar2);
  return;
}

// 010E4DF0  hkDataObjectNative::vf30  size=59  [run]
void __thiscall hkDataObjectNative::vf30(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xd);
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  uVar3 = FUN_0143e840();
  FUN_01027640(uVar2,uVar1,uVar3);
  return;
}

// 010E4E30  hkDataObjectNative::vf34  size=135  [run]
undefined4 __thiscall hkDataObjectNative::vf34(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint extraout_ECX;
  undefined8 uVar5;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
  uVar3 = FUN_0143e830();
  uVar4 = FUN_01016300(uVar4,uVar2,uVar3);
  uVar5 = FUN_010282b0(uVar1,uVar4);
  if (((int)uVar5 != 0) && ((int)((ulonglong)uVar5 >> 0x20) != 0)) {
    uVar4 = ~hkDataObjectNative(*(undefined4 *)(param_1 + 0x14),extraout_ECX & 0xffffff00);
    return uVar4;
  }
  return 0;
}

// 010E4EC0  hkDataObjectNative::vf38  size=76  [run]
void __thiscall hkDataObjectNative::vf38(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840(*(int *)(param_1 + 0x14) + 0xb8);
  uVar2 = FUN_01016320(uVar2);
  FUN_01028cc0(uVar1,uVar2);
  return;
}

// 010E4F10  hkDataObjectNative::vf3C  size=52  [run]
void __thiscall hkDataObjectNative::vf3C(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840();
  FUN_01027500(uVar1,uVar2);
  return;
}

// 010E4F50  hkDataObjectNative::vf54  size=56  [run]
void __thiscall hkDataObjectNative::vf54(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840(param_3);
  FUN_010277b0(uVar1,uVar2);
  return;
}

// 010E4F90  hkDataObjectNative::vf50  size=63  [run]
void __thiscall hkDataObjectNative::vf50(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840(param_3);
  FUN_01027530(uVar1,uVar2);
  return;
}

// 010E4FD0  hkDataObjectNative::vf4C  size=73  [run]
void __thiscall hkDataObjectNative::vf4C(int param_1,int param_2,short param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840((int)param_3 << 0x10);
  FUN_01027530(uVar1,uVar2);
  return;
}

// 010E5020  hkDataObjectNative::vf48  size=70  [run]
void __thiscall
hkDataObjectNative::vf48(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  uVar2 = FUN_0143e840(param_4);
  uVar2 = FUN_01016320(param_3,uVar2);
  FUN_01027a60(uVar1,uVar2);
  return;
}

// 010E5070  hkDataObjectNative::vf40  size=67  [run]
void __thiscall
hkDataObjectNative::vf40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xd);
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  uVar3 = FUN_0143e840(param_3,param_4);
  FUN_01027760(uVar2,uVar1,uVar3);
  return;
}

// 010E50C0  hkDataObjectNative::vf44  size=65  [run]
void __thiscall hkDataObjectNative::vf44(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  FUN_0143e7a0(*(undefined4 *)(param_1 + 0xc),param_2);
  uVar1 = *(undefined1 *)(param_2 + 0xd);
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  uVar3 = FUN_0143e840(param_3,param_3 >> 0x1f);
  FUN_01027760(uVar2,uVar1,uVar3);
  return;
}

// 010E5110  hkDataObjectNative::vf64  size=29  [run]
void __thiscall hkDataObjectNative::vf64(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010e46a0(0,*(undefined4 *)(param_1 + 0x14),param_2,param_3);
  return;
}

// 010E5130  FUN_010e5130  size=58  [run]
void __thiscall FUN_010e5130(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E5170  FUN_010e5170  size=38  [run]
void FUN_010e5170(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E51A0  hkDataWorldNative::vf00  size=52  [run]
int __thiscall hkDataWorldNative::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_207();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010E51F0  FUN_010e51f0  size=18  [run]
void __thiscall FUN_010e51f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010E5220  FUN_010e5220  size=48  [run]
undefined4 __fastcall FUN_010e5220(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(*(int *)*param_1 + 100))(param_1[1],&local_14);
  return local_c;
}

// 010E5250  hkDataWorld::vf30  size=3  [run]
void hkDataWorld::vf30(void)

{
  return;
}

// 010E5260  hkDataWorld::vf34  size=3  [run]
void hkDataWorld::vf34(void)

{
  return;
}

// 010E5270  hkDataWorld::vf38  size=3  [run]
void hkDataWorld::vf38(void)

{
  return;
}

// 010E5280  hkDataWorld::vf3C  size=3  [run]
void hkDataWorld::vf3C(void)

{
  return;
}

// 010E5290  hkDataWorld::vf48  size=3  [run]
void hkDataWorld::vf48(void)

{
  return;
}

// 010E52A0  hkDataWorld::vf4C  size=3  [run]
void hkDataWorld::vf4C(void)

{
  return;
}

// 010E52B0  hkDataWorld::vf50  size=3  [run]
void hkDataWorld::vf50(void)

{
  return;
}

// 010E52C0  hkDataWorld::vf54  size=3  [run]
void hkDataWorld::vf54(void)

{
  return;
}

// 010E52D0  hkDataWorld::vf58  size=3  [run]
void hkDataWorld::vf58(void)

{
  return;
}

// 010E52E0  hkDataWorld::vf44  size=3  [run]
void hkDataWorld::vf44(void)

{
  return;
}

// 010E52F0  hkDataWorld::vf5C  size=5  [run]
undefined4 hkDataWorld::vf5C(void)

{
  return 0;
}

// 010E5300  hkDataWorld::vf40  size=3  [run]
void hkDataWorld::vf40(void)

{
  return;
}

// 010E5310  FUN_010e5310  size=68  [run]
void __thiscall FUN_010e5310(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      (**(code **)(*(int *)*param_1 + 0x1c))(iVar2,*param_2 + iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < iVar1);
  }
  return;
}

// 010E5360  FUN_010e5360  size=235  [run]
void __thiscall FUN_010e5360(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = param_1;
  uVar1 = (**(code **)(*(int *)*param_1 + 8))();
  *param_2 = uVar1;
  uVar1 = (**(code **)(*(int *)*param_1 + 0xc))();
  param_2[1] = uVar1;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x10))();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_1 + 0x10))();
    uVar1 = (**(code **)(*piVar3 + 8))();
  }
  param_2[2] = uVar1;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x18))();
  piVar3 = param_2 + 3;
  if ((int)(param_2[5] & 0x3fffffff) < iVar2) {
    iVar4 = (param_2[5] & 0x3fffffff) * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar3,iVar4,0xc);
  }
  iVar4 = 0;
  if (iVar2 != param_2[4] && -1 < iVar2 - param_2[4]) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2 - param_2[4]);
  }
  iVar4 = 0;
  param_2[4] = iVar2;
  if (0 < iVar2) {
    param_2 = (undefined4 *)0x0;
    do {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      (**(code **)(*(int *)*local_8 + 0x1c))(iVar4,&local_18);
      puVar5 = (undefined4 *)(*piVar3 + (int)param_2);
      param_2 = (undefined4 *)((int)param_2 + 0xc);
      iVar4 = iVar4 + 1;
      *puVar5 = local_18;
      puVar5[1] = local_10;
    } while (iVar4 < iVar2);
  }
  return;
}

// 010E5460  FUN_010e5460  size=260  [run]
/* WARNING: Removing unreachable block (ram,0x010e5508) */

void __thiscall
FUN_010e5460(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined1 local_84 [128];
  
  (**(code **)(*param_1 + 0x2c))();
  if (param_5 == 0) {
    iVar1 = FUN_010e1850(param_4);
  }
  else {
    local_84[0] = 0;
    FUN_01026640(param_4,0xffffffff);
    FUN_01026640(&DAT_016f4610,0xffffffff);
    FUN_01026640(param_5,0xffffffff);
    FUN_01026640(&DAT_016f5184,0xffffffff);
    iVar1 = FUN_010e1850(local_84);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x40))(param_2,param_3,iVar1,param_6);
  }
  return;
}

// 010E5570  FUN_010e5570  size=18  [run]
int __thiscall FUN_010e5570(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010E5590  FUN_010e5590  size=15  [run]
int __thiscall FUN_010e5590(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010E55A0  FUN_010e55a0  size=52  [run]
undefined4 __thiscall FUN_010e55a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 010E55E0  FUN_010e55e0  size=55  [run]
void __thiscall FUN_010e55e0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0xc);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 010E5620  FUN_010e5620  size=56  [run]
void __thiscall FUN_010e5620(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010E5680  FUN_010e5680  size=53  [run]
undefined4 FUN_010e5680(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 extraout_var;
  
  pcVar1 = (char *)FUN_01009770(&stack0xfffffffb);
  if (*pcVar1 == '\0') {
    return unaff_EDI;
  }
  if (unaff_ESI != (int *)0x0) {
    uVar2 = (**(code **)(*unaff_ESI + 0x14))(param_1,extraout_var);
    return uVar2;
  }
  return 0;
}

// 010E56C0  FUN_010e56c0  size=31  [run]
void FUN_010e56c0(undefined4 param_1,undefined4 param_2)

{
  FUN_01015b50(param_1,param_2,&DAT_016575ac,"hk_2011.3.0-r1");
  return;
}

// 010E56E0  hkXmlPackfileWriter::vf10  size=48  [run]
void __thiscall
hkXmlPackfileWriter::vf10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  uVar2 = (**(code **)(*DAT_0209b610 + 0x14))(param_4);
  (**(code **)(iVar1 + 0xc))(param_2,param_3,uVar2);
  return;
}

// 010E5710  hkXmlPackfileWriter::vf14  size=81  [run]
void __thiscall hkXmlPackfileWriter::vf14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010160(param_2,0xffffffff);
  if (-1 < iVar1) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x10 + iVar1 * 0x18) = 0xfffffffe;
  }
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,0xfffffffe);
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,param_3);
  return;
}

// 010E5770  hkXmlPackfileWriter::vf18  size=28  [run]
void hkXmlPackfileWriter::vf18(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010E5790  hkBaseObject::hkBaseObject_243  size=92  [run]
void hkBaseObject::hkBaseObject_243
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined **local_18 [4];
  undefined1 local_8 [4];
  
  FUN_010e6cb0();
  uVar1 = 0;
  if (param_4 == '\0') {
    uVar1 = 2;
  }
  hkPlatformObjectWriter::hkPlatformObjectWriter(local_8,0,uVar1);
  hkOffsetOnlyStreamWriter::hkOffsetOnlyStreamWriter();
  hkPlatformObjectWriter::vf0C(local_18,param_1,param_2,param_3);
  local_18[0] = vftable;
  hkBaseObject_86();
  return;
}

