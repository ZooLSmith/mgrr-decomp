// lib/havok/unit_010DE930.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010DE930..010E2B80, 238 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkDataWorldNative.h"
#include "hkDefaultClassWrapper.h"
#include "hkSerializeDeprecated.h"
#include "hkStaticClassNameRegistry.h"
#include "hkTypeManager.h"
#include "hkVersionPatchManager.h"

// 010DE930  FUN_010de930  size=205  [run]
int __thiscall FUN_010de930(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 local_1c [8];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  hkDefaultClassWrapper::hkDefaultClassWrapper(0);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_1c;
  }
  if (((*(uint *)(param_1 + 0x1c) & 0x7fffffff) == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_010dd260();
    if (iVar1 == 1) {
      if (local_14 != 0) {
        FUN_010060a0();
      }
      return 1;
    }
  }
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  iVar1 = FUN_010ddf20(param_2,param_3,&local_10);
  if (iVar1 == 0) {
    iVar1 = FUN_010dcc30(&local_10);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  local_10 = 0;
  local_8 = 0x80000000;
  if (local_14 != 0) {
    FUN_010060a0();
  }
  return iVar1;
}

// 010DEA00  FUN_010dea00  size=56  [run]
void __fastcall FUN_010dea00(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0x1c) & 0x7fffffff) == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_010dd260();
    if (iVar1 == 1) {
      return;
    }
  }
  FUN_010dcc30(param_1 + 0xc);
  return;
}

// 010DEA70  FUN_010dea70  size=18  [run]
bool __thiscall FUN_010dea70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  return *(int *)(param_1 + 8) < param_4;
}

// 010DEA90  FUN_010dea90  size=33  [run]
undefined4 __thiscall FUN_010dea90(int *param_1,int param_2,int param_3)

{
  if ((*param_1 == param_2) && (param_1[1] == param_3)) {
    return 1;
  }
  return 0;
}

// 010DEAF0  FUN_010deaf0  size=20  [run]
void __thiscall FUN_010deaf0(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010DEB10  FUN_010deb10  size=9  [run]
void FUN_010deb10(void)

{
  FUN_010258b0();
  return;
}

// 010DEB20  FUN_010deb20  size=27  [run]
uint __fastcall FUN_010deb20(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010DEB40  FUN_010deb40  size=9  [run]
void FUN_010deb40(void)

{
  FUN_01025470();
  return;
}

// 010DEB50  FUN_010deb50  size=9  [run]
void FUN_010deb50(void)

{
  FUN_01025be0();
  return;
}

// 010DEB70  FUN_010deb70  size=9  [run]
void FUN_010deb70(void)

{
  FUN_01025400();
  return;
}

// 010DEB80  FUN_010deb80  size=9  [run]
void FUN_010deb80(void)

{
  FUN_01025440();
  return;
}

// 010DEB90  FUN_010deb90  size=24  [run]
undefined4 FUN_010deb90(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010DEBB0  FUN_010debb0  size=27  [run]
uint __fastcall FUN_010debb0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010DEBD0  FUN_010debd0  size=9  [run]
void FUN_010debd0(void)

{
  FUN_01025470();
  return;
}

// 010DEBE0  FUN_010debe0  size=9  [run]
void FUN_010debe0(void)

{
  FUN_01025be0();
  return;
}

// 010DEBF0  FUN_010debf0  size=9  [run]
void FUN_010debf0(void)

{
  FUN_01025950();
  return;
}

// 010DEC10  FUN_010dec10  size=9  [run]
void FUN_010dec10(void)

{
  FUN_01025400();
  return;
}

// 010DEC20  FUN_010dec20  size=9  [run]
void FUN_010dec20(void)

{
  FUN_01025440();
  return;
}

// 010DEC30  FUN_010dec30  size=24  [run]
undefined4 FUN_010dec30(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010DEC80  FUN_010dec80  size=15  [run]
int __thiscall FUN_010dec80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010DECD0  FUN_010decd0  size=15  [run]
int __thiscall FUN_010decd0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010DECE0  FUN_010dece0  size=15  [run]
int __thiscall FUN_010dece0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010DECF0  FUN_010decf0  size=44  [run]
void __thiscall FUN_010decf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 010DED50  FUN_010ded50  size=15  [run]
int __thiscall FUN_010ded50(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DED90  FUN_010ded90  size=15  [run]
int __thiscall FUN_010ded90(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DEDA0  FUN_010deda0  size=27  [run]
void FUN_010deda0(undefined4 param_1,undefined4 param_2)

{
  FUN_010105b0(param_1,param_2,0xffffffff,0);
  return;
}

// 010DEDF0  FUN_010dedf0  size=15  [run]
int __thiscall FUN_010dedf0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DEE30  FUN_010dee30  size=15  [run]
int __thiscall FUN_010dee30(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010DEE40  FUN_010dee40  size=15  [run]
int __thiscall FUN_010dee40(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010DEE90  FUN_010dee90  size=15  [run]
int __thiscall FUN_010dee90(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DEEB0  FUN_010deeb0  size=9  [run]
void FUN_010deeb0(void)

{
  FUN_01010160();
  return;
}

// 010DEED0  FUN_010deed0  size=52  [run]
undefined4 __thiscall FUN_010deed0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010DEF20  FUN_010def20  size=34  [run]
void FUN_010def20(int param_1,int param_2,undefined4 *param_3)

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

// 010DEF60  FUN_010def60  size=15  [run]
int __thiscall FUN_010def60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DEF70  FUN_010def70  size=15  [run]
int __thiscall FUN_010def70(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DEF80  FUN_010def80  size=15  [run]
int __thiscall FUN_010def80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DEFB0  FUN_010defb0  size=47  [run]
void FUN_010defb0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    iVar1 = (param_3 - 1U >> 3) + 1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 010DF010  FUN_010df010  size=26  [run]
void __thiscall FUN_010df010(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010DF030  FUN_010df030  size=26  [run]
void __thiscall FUN_010df030(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010DF070  FUN_010df070  size=28  [run]
void __thiscall FUN_010df070(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010DF0B0  FUN_010df0b0  size=28  [run]
void __thiscall FUN_010df0b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010DF0F0  FUN_010df0f0  size=28  [run]
void __thiscall FUN_010df0f0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010DF120  FUN_010df120  size=25  [run]
void __thiscall FUN_010df120(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010DF140  FUN_010df140  size=11  [run]
int FUN_010df140(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010DF150  FUN_010df150  size=28  [run]
void __thiscall FUN_010df150(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010DF170  FUN_010df170  size=11  [run]
int FUN_010df170(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010DF1F0  FUN_010df1f0  size=52  [run]
undefined4 __thiscall FUN_010df1f0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 010DF230  FUN_010df230  size=50  [run]
void FUN_010df230(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *(undefined8 *)(param_3 + (int)param_1);
        param_1[1] = *(undefined8 *)(param_3 + 8 + (int)param_1);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010DF280  FUN_010df280  size=37  [run]
void FUN_010df280(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010DF2B0  FUN_010df2b0  size=16  [run]
undefined4 __thiscall FUN_010df2b0(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4);
}

// 010DF2C0  FUN_010df2c0  size=38  [run]
void FUN_010df2c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010DF2F0  FUN_010df2f0  size=31  [run]
void FUN_010df2f0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010DF310  FUN_010df310  size=39  [run]
void FUN_010df310(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x2c);
  }
  return;
}

// 010DF380  FUN_010df380  size=31  [run]
void FUN_010df380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010104c0(&PTR_vftable_018e9b94,param_1,param_2,param_3,0);
  return;
}

// 010DF3B0  FUN_010df3b0  size=15  [run]
int __thiscall FUN_010df3b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DF3C0  FUN_010df3c0  size=16  [run]
undefined4 __thiscall FUN_010df3c0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 010DF3D0  FUN_010df3d0  size=15  [run]
undefined4 __thiscall FUN_010df3d0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 010DF3E0  FUN_010df3e0  size=21  [run]
void __thiscall FUN_010df3e0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010DF400  FUN_010df400  size=15  [run]
int __thiscall FUN_010df400(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DF410  FUN_010df410  size=16  [run]
undefined4 __thiscall FUN_010df410(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 010DF420  FUN_010df420  size=15  [run]
int __thiscall FUN_010df420(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010DF430  FUN_010df430  size=16  [run]
undefined4 __thiscall FUN_010df430(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 010DF460  FUN_010df460  size=67  [run]
uint __thiscall FUN_010df460(undefined4 *param_1,int *param_2)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    in_EAX = (int *)*param_1;
    do {
      if ((*param_2 == *in_EAX) && (param_2[1] == in_EAX[1])) {
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
      iVar1 = iVar1 + 1;
      in_EAX = in_EAX + 4;
    } while (iVar1 < (int)param_1[1]);
  }
  return (uint)in_EAX & 0xffffff00;
}

// 010DF580  FUN_010df580  size=57  [run]
void __thiscall FUN_010df580(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010DF5C0  FUN_010df5c0  size=55  [run]
void __thiscall FUN_010df5c0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 010DF600  FUN_010df600  size=21  [run]
void FUN_010df600(undefined4 param_1)

{
  FUN_01010160(param_1,0xffffffff);
  return;
}

// 010DF620  FUN_010df620  size=21  [run]
void FUN_010df620(undefined4 param_1)

{
  FUN_01010160(param_1,0xffffffff);
  return;
}

// 010DF640  FUN_010df640  size=71  [run]
void __thiscall FUN_010df640(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar2 = (param_1[1] - param_2) * 0x10;
  puVar1 = (undefined4 *)(*param_1 + param_2 * 0x10);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 3) + 1;
    do {
      *puVar1 = puVar1[4];
      puVar1[1] = puVar1[5];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 010DF690  FUN_010df690  size=45  [run]
undefined4 __thiscall FUN_010df690(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,8);
    return uVar1;
  }
  return 0;
}

// 010DF6C0  FUN_010df6c0  size=61  [run]
void __thiscall FUN_010df6c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DF700  FUN_010df700  size=60  [run]
void __thiscall FUN_010df700(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DF740  FUN_010df740  size=46  [run]
void FUN_010df740(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010DF770  FUN_010df770  size=40  [run]
void FUN_010df770(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010DF7C0  FUN_010df7c0  size=51  [run]
int __thiscall FUN_010df7c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010DF810  FUN_010df810  size=51  [run]
int __thiscall FUN_010df810(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010DF860  FUN_010df860  size=51  [run]
int __thiscall FUN_010df860(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010DF8A0  FUN_010df8a0  size=168  [run]
void __thiscall
FUN_010df8a0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  FUN_01019bd0((param_3 + param_6) * 0x10 + *param_1,(param_4 + param_3) * 0x10 + *param_1,
               ((iVar1 - param_3) - param_4) * 0x10);
  puVar3 = (undefined8 *)(param_3 * 0x10 + *param_1);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(param_5 + (int)puVar3);
        puVar3[1] = *(undefined8 *)(param_5 + 8 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 010DF960  hkDefaultClassWrapper::vf00  size=72  [run]
undefined4 * __thiscall hkDefaultClassWrapper::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010DF9B0  FUN_010df9b0  size=58  [run]
void __thiscall FUN_010df9b0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010DF9F0  FUN_010df9f0  size=56  [run]
void __thiscall FUN_010df9f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010DFA50  FUN_010dfa50  size=37  [run]
void __thiscall FUN_010dfa50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01010560(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010DFA80  FUN_010dfa80  size=31  [run]
void __thiscall FUN_010dfa80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010DFAC0  FUN_010dfac0  size=36  [run]
void __thiscall FUN_010dfac0(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010DFB30  FUN_010dfb30  size=46  [run]
undefined4 __thiscall FUN_010dfb30(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,8);
    return uVar1;
  }
  return 0;
}

// 010DFB60  FUN_010dfb60  size=73  [run]
void __thiscall FUN_010dfb60(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010DFBB0  FUN_010dfbb0  size=37  [run]
void __thiscall FUN_010dfbb0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010DFBE0  FUN_010dfbe0  size=61  [run]
void __fastcall FUN_010dfbe0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFC20  FUN_010dfc20  size=60  [run]
void __fastcall FUN_010dfc20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFC60  FUN_010dfc60  size=61  [run]
void __thiscall FUN_010dfc60(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFCA0  FUN_010dfca0  size=63  [run]
void __thiscall FUN_010dfca0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFCE0  FUN_010dfce0  size=63  [run]
void __thiscall FUN_010dfce0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFD20  FUN_010dfd20  size=63  [run]
void __thiscall FUN_010dfd20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFD60  FUN_010dfd60  size=30  [run]
void FUN_010dfd60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010df8a0(param_1,param_2,0,param_3,param_4);
  return;
}

// 010DFD80  FUN_010dfd80  size=63  [run]
void __thiscall FUN_010dfd80(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFDC0  FUN_010dfdc0  size=46  [run]
int __fastcall FUN_010dfdc0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010DFDF0  FUN_010dfdf0  size=46  [run]
int __fastcall FUN_010dfdf0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010DFE20  FUN_010dfe20  size=46  [run]
int __fastcall FUN_010dfe20(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010DFE50  FUN_010dfe50  size=74  [run]
void __thiscall FUN_010dfe50(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010DFEA0  FUN_010dfea0  size=61  [run]
void __fastcall FUN_010dfea0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFEE0  FUN_010dfee0  size=26  [run]
void FUN_010dfee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010dfd60(param_1,param_2,param_3,1);
  return;
}

// 010DFF00  FUN_010dff00  size=60  [run]
void __fastcall FUN_010dff00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFF40  FUN_010dff40  size=63  [run]
void __fastcall FUN_010dff40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFF80  FUN_010dff80  size=63  [run]
void __fastcall FUN_010dff80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010DFFC0  FUN_010dffc0  size=63  [run]
void __fastcall FUN_010dffc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0000  FUN_010e0000  size=63  [run]
void __fastcall FUN_010e0000(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0040  FUN_010e0040  size=61  [run]
void __fastcall FUN_010e0040(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0080  FUN_010e0080  size=62  [run]
uint __fastcall FUN_010e0080(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  param_1[1] = param_1[1] + 1;
  return uVar1;
}

// 010E00C0  FUN_010e00c0  size=62  [run]
uint __fastcall FUN_010e00c0(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  param_1[1] = param_1[1] + 1;
  return uVar1;
}

// 010E0100  FUN_010e0100  size=62  [run]
uint __fastcall FUN_010e0100(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  param_1[1] = param_1[1] + 1;
  return uVar1;
}

// 010E0160  FUN_010e0160  size=60  [run]
void __fastcall FUN_010e0160(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E01A0  FUN_010e01a0  size=25  [run]
void FUN_010e01a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010dfee0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010E01C0  FUN_010e01c0  size=63  [run]
void __fastcall FUN_010e01c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0200  FUN_010e0200  size=72  [run]
void __thiscall FUN_010e0200(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_01010160(param_2,0xffffffff);
  iVar3 = FUN_010e0080();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar3);
  return;
}

// 010E0250  FUN_010e0250  size=63  [run]
void __fastcall FUN_010e0250(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0290  FUN_010e0290  size=87  [run]
void __thiscall FUN_010e0290(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_010105b0(param_2,param_3,0xffffffff,0);
  iVar3 = FUN_010e00c0();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  FUN_010104c0(&PTR_vftable_018e9b94,param_2,param_3,iVar3,0);
  return;
}

// 010E02F0  FUN_010e02f0  size=63  [run]
void __fastcall FUN_010e02f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0330  FUN_010e0330  size=72  [run]
void __thiscall FUN_010e0330(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_01010160(param_2,0xffffffff);
  iVar3 = FUN_010e0100();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar3);
  return;
}

// 010E0380  FUN_010e0380  size=63  [run]
void __fastcall FUN_010e0380(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E03C0  FUN_010e03c0  size=61  [run]
void __fastcall FUN_010e03c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0400  FUN_010e0400  size=58  [run]
uint __fastcall FUN_010e0400(uint param_1)

{
  undefined4 local_8;
  
  local_8 = (param_1 >> 8) << 8;
  FUN_01025830(local_8);
  local_8 = (param_1 >> 8) << 8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  FUN_01025830(local_8);
  return param_1;
}

// 010E0440  FUN_010e0440  size=53  [run]
int __thiscall FUN_010e0440(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010dcae0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x2c);
  }
  return param_1;
}

// 010E0480  FUN_010e0480  size=38  [run]
void FUN_010e0480(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E04B0  FUN_010e04b0  size=87  [run]
void __fastcall FUN_010e04b0(undefined4 *param_1)

{
  FUN_010107e0(&PTR_vftable_018e9b94);
  FUN_0100fe00();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0510  FUN_010e0510  size=87  [run]
void __fastcall FUN_010e0510(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0570  FUN_010e0570  size=87  [run]
void __fastcall FUN_010e0570(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E0630  FUN_010e0630  size=155  [run]
void __thiscall FUN_010e0630(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_c;
  
  uVar1 = param_1[1];
  iVar2 = 0;
  if (0 < (int)uVar1) {
    iVar4 = *param_1;
    do {
      local_c = (int)*(undefined8 *)(iVar4 + 8);
      if (*(int *)(param_2 + 1) < local_c) {
        FUN_010dfee0(&PTR_vftable_018e9b94,iVar2,param_2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar2 < (int)uVar1);
  }
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar3 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E06D0  hkVersionPatchManager::vf00  size=52  [run]
int __thiscall hkVersionPatchManager::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_73();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010E0710  hkStaticClassNameRegistry::vf0C  size=4  [run]
undefined4 __fastcall hkStaticClassNameRegistry::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 010E0720  FUN_010e0720  size=34  [run]
void __fastcall FUN_010e0720(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_010e0b30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return;
}

// 010E0750  hkStaticClassNameRegistry::hkStaticClassNameRegistry  size=49  [run]
void __thiscall
hkStaticClassNameRegistry::hkStaticClassNameRegistry
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = param_2;
  *param_1 = vftable;
  param_1[4] = param_3;
  param_1[5] = 1;
  param_1[2] = param_4;
  return;
}

// 010E0790  hkStaticClassNameRegistry::vf10  size=87  [run]
undefined4 __thiscall hkStaticClassNameRegistry::vf10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_010e0720();
  iVar3 = 0;
  iVar2 = **(int **)(param_1 + 0xc);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_010093a0();
    iVar2 = FUN_01015b90(param_2,uVar1);
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
}

// 010E07F0  hkStaticClassNameRegistry::hkStaticClassNameRegistry_2  size=49  [run]
void __thiscall
hkStaticClassNameRegistry::hkStaticClassNameRegistry_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = param_2;
  *param_1 = vftable;
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[2] = param_4;
  return;
}

// 010E0830  hkStaticClassNameRegistry::vf14  size=132  [run]
void __thiscall hkStaticClassNameRegistry::vf14(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_010e0720();
  piVar4 = *(int **)(param_1 + 0xc);
  iVar5 = 0;
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    iVar1 = *piVar4;
  }
  iVar2 = param_2[1];
  iVar1 = iVar2 + iVar5;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar3,4);
  }
  param_2[1] = param_2[1] + iVar5;
  iVar1 = *param_2;
  piVar4 = *(int **)(param_1 + 0xc);
  iVar5 = 0;
  if (*piVar4 != 0) {
    iVar3 = 0;
    do {
      *(int *)(iVar3 + iVar1 + iVar2 * 4) = *piVar4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar5 * 4;
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + iVar3);
    } while (*piVar4 != 0);
  }
  return;
}

// 010E08C0  FUN_010e08c0  size=52  [run]
undefined4 __thiscall FUN_010e08c0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010E0900  FUN_010e0900  size=38  [run]
void FUN_010e0900(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E0930  hkStaticClassNameRegistry::vf00  size=53  [run]
undefined4 * __thiscall hkStaticClassNameRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010E0970  FUN_010e0970  size=68  [run]
int __thiscall FUN_010e0970(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 4;
}

// 010E09C0  FUN_010e09c0  size=69  [run]
int __thiscall FUN_010e09c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 4;
}

// 010E0A10  FUN_010e0a10  size=6  [run]
char * FUN_010e0a10(void)

{
  return "hk_2011.3.0-r1";
}

// 010E0A20  FUN_010e0a20  size=118  [run]
void FUN_010e0a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 local_5;
  
  FUN_0143e7c0(param_1,param_2);
  FUN_0143e7c0(param_3,param_4);
  pcVar1 = (char *)FUN_0143e810(&local_5);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)FUN_0143e810(&local_5);
    if (*pcVar1 != '\0') {
      FUN_0143e9e0();
      uVar2 = FUN_01016360();
      uVar2 = FUN_0143e830(uVar2);
      uVar2 = FUN_0143e830(uVar2);
      FUN_01015e80(uVar2);
    }
  }
  return;
}

// 010E0AA0  FUN_010e0aa0  size=129  [run]
void FUN_010e0aa0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_20 [28];
  
  uVar5 = 0;
  uVar1 = FUN_01009750(0);
  hkBufferedStreamWriter::hkBufferedStreamWriter(param_1,uVar1,uVar5);
  iVar4 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_01009590(iVar4);
      iVar2 = FUN_01009660(*puVar3);
      if (iVar2 == 0) {
        hkBufferedStreamWriter::vf1C(*(undefined2 *)((int)puVar3 + 0x12),0);
        FUN_010098a0(iVar4,local_20);
      }
      iVar4 = iVar4 + 1;
      iVar2 = FUN_01009570();
    } while (iVar4 < iVar2);
  }
  hkBaseObject::hkBaseObject_19();
  return;
}

// 010E0B30  FUN_010e0b30  size=115  [run]
void FUN_010e0b30(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0143f0d0(param_1,param_2);
  FUN_010e6cb0();
  iVar1 = *param_1;
  iVar2 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  for (; iVar1 != 0; iVar1 = param_1[iVar1]) {
    FUN_010e71e0(iVar1,&local_10,1);
    iVar1 = iVar2 + 1;
    iVar2 = iVar2 + 1;
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 010E0BF0  FUN_010e0bf0  size=19  [run]
void __thiscall FUN_010e0bf0(undefined4 *param_1,undefined4 *param_2)

{
  param_1[0xd] = param_1[0xd] + 1;
  *param_2 = *param_1;
  *param_1 = param_2;
  return;
}

// 010E0C10  FUN_010e0c10  size=16  [run]
void FUN_010e0c10(void)

{
  FUN_01442b10();
  FUN_014429b0();
  return;
}

// 010E0C20  FUN_010e0c20  size=18  [run]
void __thiscall FUN_010e0c20(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 6;
  return;
}

// 010E0C40  FUN_010e0c40  size=18  [run]
void __thiscall FUN_010e0c40(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 9;
  return;
}

// 010E0C60  FUN_010e0c60  size=18  [run]
void __thiscall FUN_010e0c60(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 3;
  return;
}

// 010E0C80  FUN_010e0c80  size=18  [run]
void __thiscall FUN_010e0c80(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 != 0;
  return;
}

// 010E0CC0  FUN_010e0cc0  size=13  [run]
int __fastcall FUN_010e0cc0(int *param_1)

{
  if (*param_1 == 9) {
    return param_1[2];
  }
  return -1;
}

// 010E0CD0  FUN_010e0cd0  size=12  [run]
int __fastcall FUN_010e0cd0(int *param_1)

{
  if (*param_1 == 6) {
    return param_1[2];
  }
  return 0;
}

// 010E0CE0  FUN_010e0ce0  size=57  [run]
uint FUN_010e0ce0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *param_1;
    uVar2 = (uVar2 << 1 | (uint)((int)uVar2 < 0)) ^ iVar1 * -0x61c8864f;
    if (iVar1 == 6) {
      uVar2 = uVar2 ^ (uint)param_1;
    }
    else if (iVar1 == 9) {
      uVar2 = uVar2 ^ param_1[2];
    }
    param_1 = (int *)param_1[1];
  } while (param_1 != (int *)0x0);
  return uVar2;
}

// 010E0D20  FUN_010e0d20  size=20  [run]
int __fastcall FUN_010e0d20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_010e0ce0(param_1);
  if (iVar1 == -1) {
    iVar1 = 0x7af1f32a;
  }
  return iVar1;
}

// 010E0D40  FUN_010e0d40  size=70  [run]
void __thiscall FUN_010e0d40(int *param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != *param_3) || (param_1[1] != param_3[1])) {
    *param_2 = 0;
    return;
  }
  if ((iVar1 != 6) && (iVar1 != 9)) {
    *param_2 = 1;
    return;
  }
  *param_2 = param_1[2] == param_3[2];
  return;
}

// 010E0D90  FUN_010e0d90  size=26  [run]
void __fastcall FUN_010e0d90(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

// 010E0DB0  FUN_010e0db0  size=202  [run]
void FUN_010e0db0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  do {
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
    switch(*param_1) {
    case 0:
      pcVar3 = "!";
      break;
    case 1:
      pcVar3 = "void";
      break;
    case 2:
      pcVar3 = "byte";
      break;
    case 3:
      pcVar3 = "real";
      break;
    case 4:
      pcVar3 = "int";
      break;
    case 5:
      pcVar3 = "cstring";
      break;
    case 6:
      iVar1 = FUN_010e0cd0();
      if (iVar1 == 0) {
        pcVar3 = "homogeneous/variant class";
      }
      else {
        pcVar3 = (char *)FUN_010e0cd0();
        FUN_01018d00("class ");
      }
      break;
    case 7:
      pcVar3 = "*";
      break;
    case 8:
      pcVar3 = "[]";
      break;
    case 9:
      uVar2 = param_1[2];
      pcVar3 = "}";
      FUN_01018d00(&DAT_017d83f0);
      FUN_01018dc0(uVar2);
      break;
    default:
      goto switchD_010e0dce_default;
    }
    FUN_01018d00(pcVar3);
switchD_010e0dce_default:
    param_1 = (undefined4 *)param_1[1];
  } while( true );
}

// 010E0EB0  FUN_010e0eb0  size=20  [run]
void __thiscall FUN_010e0eb0(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0db0(param_1,param_2);
  return;
}

// 010E0ED0  FUN_010e0ed0  size=154  [run]
void FUN_010e0ed0(undefined1 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    piVar1 = param_3;
    if ((param_2 == (int *)0x0) || (piVar1 = param_2, param_3 == (int *)0x0)) {
      if (piVar1 == (int *)0x0) {
        *param_1 = 1;
        return;
      }
      *param_1 = 0;
      return;
    }
    iVar2 = *param_2;
    if (iVar2 != *param_3) goto LAB_010e0f47;
    if (iVar2 == 6) {
      FUN_010e0cd0();
      uVar4 = FUN_010e0cd0();
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      if ((iVar2 == 0) || ((int)uVar4 == 0)) {
        *param_1 = 1;
        return;
      }
      iVar2 = FUN_01015b90(iVar2,(int)uVar4);
      bVar3 = iVar2 == 0;
LAB_010e0f2c:
      if (!bVar3) {
LAB_010e0f47:
        *param_1 = 0;
        return;
      }
    }
    else if (iVar2 == 9) {
      FUN_010e0cc0();
      uVar4 = FUN_010e0cc0();
      bVar3 = (int)((ulonglong)uVar4 >> 0x20) == (int)uVar4;
      goto LAB_010e0f2c;
    }
    param_2 = (int *)param_2[1];
    param_3 = (int *)param_3[1];
  } while( true );
}

// 010E0F70  FUN_010e0f70  size=42  [run]
undefined1 * __thiscall FUN_010e0f70(int param_1,undefined1 *param_2,int param_3)

{
  if (param_3 == param_1) {
    *param_2 = 1;
    return param_2;
  }
  FUN_010e0ed0(param_2,param_1,param_3);
  return param_2;
}

// 010E0FA0  FUN_010e0fa0  size=104  [run]
void FUN_010e0fa0(undefined1 *param_1,char *param_2)

{
  char cVar1;
  
  if (((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) &&
     ((('`' < cVar1 && (cVar1 < '{')) || ((('@' < cVar1 && (cVar1 < '[')) || (cVar1 == '_')))))) {
    cVar1 = param_2[1];
    while( true ) {
      if (cVar1 == '\0') {
        *param_1 = 1;
        return;
      }
      if (((((cVar1 < 'a') || ('z' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) &&
          ((cVar1 < '0' || ('9' < cVar1)))) && ((cVar1 != ':' && (cVar1 != '_')))) break;
      cVar1 = param_2[2];
      param_2 = param_2 + 1;
    }
  }
  *param_1 = 0;
  return;
}

// 010E1010  FUN_010e1010  size=200  [run]
void FUN_010e1010(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  do {
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
    switch(*param_1) {
    case 0:
      puVar2 = &DAT_017012cc;
      break;
    case 1:
      puVar2 = &DAT_016a747c;
      break;
    case 2:
      puVar2 = &DAT_016ac580;
      break;
    case 3:
      puVar2 = &DAT_0165933c;
      break;
    case 4:
      puVar2 = &DAT_01792598;
      break;
    case 5:
      puVar2 = &DAT_016a7478;
      break;
    case 6:
      puVar2 = &DAT_016f5184;
      uVar1 = FUN_010e0cd0(&DAT_016f5184);
      FUN_01018d00(&DAT_016f4610);
      FUN_01018d00(uVar1);
      break;
    case 7:
      puVar2 = &DAT_016c4ff8;
      break;
    case 8:
      puVar2 = &DAT_017012c0;
      break;
    case 9:
      puVar2 = &DAT_017d83f4;
      uVar1 = FUN_010e0cc0(&DAT_017d83f4);
      FUN_01018d00(&DAT_017d83f0);
      FUN_01018dc0(uVar1);
      break;
    default:
      goto switchD_010e102e_default;
    }
    FUN_01018d00(puVar2);
switchD_010e102e_default:
    param_1 = (undefined4 *)param_1[1];
  } while( true );
}

// 010E1100  FUN_010e1100  size=165  [run]
undefined4 FUN_010e1100(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  switch(*param_1) {
  case 2:
    return 1;
  case 3:
    return 3;
  case 4:
    return 2;
  case 5:
    return 10;
  case 6:
    uVar2 = FUN_010e0cd0();
    *(undefined4 *)((ulonglong)uVar2 >> 0x20) = (int)uVar2;
    return 9;
  case 7:
    if (*(int *)param_1[1] == 6) {
      uVar2 = FUN_010e0cd0();
      *(undefined4 *)((ulonglong)uVar2 >> 0x20) = (int)uVar2;
      return 8;
    }
    break;
  case 9:
    if (*(int *)param_1[1] == 3) {
      uVar1 = FUN_010e0cc0();
      switch(uVar1) {
      case 4:
        return 4;
      case 8:
        return 5;
      case 0xc:
        return 6;
      case 0x10:
        return 7;
      }
    }
  }
  return 0;
}

// 010E11F0  FUN_010e11f0  size=21  [run]
void FUN_010e11f0(undefined4 param_1)

{
  FUN_01025be0(param_1,0);
  return;
}

// 010E1210  FUN_010e1210  size=124  [run]
uint FUN_010e1210(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  undefined8 uVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  if (*param_1 == 8) {
    uVar2 = FUN_010e1100(param_1[1],param_2);
    return uVar2 | 0x10;
  }
  if ((*param_1 == 9) &&
     ((*(int *)param_1[1] != 3 ||
      ((((iVar1 = param_1[2], iVar1 != 4 && (iVar1 != 8)) && (iVar1 != 0xc)) && (iVar1 != 0x10))))))
  {
    uVar3 = FUN_010e0cc0();
    *param_3 = (int)uVar3;
    uVar2 = FUN_010e1100(*(undefined4 *)(extraout_ECX + 4),(int)((ulonglong)uVar3 >> 0x20));
    return uVar2 | 0x20;
  }
  uVar2 = FUN_010e1100(param_1,param_2);
  return uVar2;
}

// 010E1290  FUN_010e1290  size=208  [run]
undefined4 * __thiscall FUN_010e1290(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char local_5;
  
  puVar1 = (undefined4 *)FUN_010e11f0(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 0x50);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 0x70);
      if (puVar1 < *(undefined4 **)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x54) + (int)puVar1;
      }
      else {
        puVar1 = (undefined4 *)FUN_01442cb0();
      }
    }
    else {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      *(undefined4 *)(param_1 + 0x50) = *puVar1;
    }
    *puVar1 = 6;
    puVar1[1] = 0;
    uVar2 = FUN_01025530(param_2);
    FUN_01025890(&local_5,uVar2);
    if (local_5 == '\0') {
      uVar3 = FUN_01015d80(param_2,&PTR_vftable_018e9b94);
      FUN_01025470(uVar3,puVar1);
    }
    else {
      uVar3 = FUN_010253e0(uVar2);
      FUN_01025420(uVar2,puVar1);
    }
    puVar1[2] = uVar3;
    puVar4 = puVar1;
    uVar2 = FUN_010e0d20(puVar1);
    FUN_01444040(uVar2,puVar4);
  }
  return puVar1;
}

// 010E1360  FUN_010e1360  size=77  [run]
void FUN_010e1360(int param_1,int *param_2)

{
  param_2[1] = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
    }
    *(int *)(*param_2 + param_2[1] * 4) = param_1;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

// 010E13C0  hkBaseObject::hkBaseObject_221  size=51  [run]
void __fastcall hkBaseObject::hkBaseObject_221(undefined4 *param_1)

{
  *param_1 = hkTypeManager::vftable;
  FUN_014427f0();
  FUN_01443f80();
  FUN_010e2500();
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 010E1400  FUN_010e1400  size=231  [run]
undefined8 * __thiscall FUN_010e1400(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined1 local_5;
  
  iVar4 = FUN_010e0d20();
  iVar5 = FUN_014440b0(iVar4);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 < iVar5) {
LAB_010e1488:
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x70);
      if (puVar7 < *(undefined8 **)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x54) + (int)puVar7;
      }
      else {
        puVar7 = (undefined8 *)FUN_01442cb0();
      }
    }
    else {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)puVar7;
    }
    *puVar7 = *param_2;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_01444040(iVar4,puVar7);
    return puVar7;
  }
  iVar2 = *(int *)(param_1 + 0x44);
LAB_010e1435:
  puVar7 = *(undefined8 **)(iVar2 + 4 + iVar5 * 8);
  pcVar6 = (char *)FUN_010e0d40(&local_5,puVar7);
  if (*pcVar6 != '\0') {
    return puVar7;
  }
  iVar5 = iVar5 + 1;
  iVar3 = *(int *)(param_1 + 0x4c);
  do {
    if (iVar5 <= iVar3) {
      piVar8 = (int *)(iVar2 + iVar5 * 8);
      do {
        if (*piVar8 == -1) {
          iVar5 = iVar3 + 1;
LAB_010e147b:
          if (iVar1 < iVar5) goto LAB_010e1488;
          goto LAB_010e1435;
        }
        if (*piVar8 == iVar4) goto LAB_010e147b;
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar5 <= iVar3);
    }
    iVar5 = 0;
  } while( true );
}

// 010E14F0  FUN_010e14f0  size=162  [run]
void __thiscall FUN_010e14f0(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = param_3;
  iVar3 = 0;
  param_3[1] = 0;
  iVar4 = *(int *)(param_1 + 0x4c);
  if (-1 < iVar4) {
    piVar5 = *(int **)(param_1 + 0x44);
    do {
      if (*piVar5 != -1) break;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 <= iVar4);
  }
  param_3 = (int *)iVar3;
  if (iVar3 <= iVar4) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 4 + (int)param_3 * 8);
      iVar4 = FUN_010e0d90();
      if (iVar4 == param_2) {
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
        }
        *(undefined4 *)(*piVar2 + piVar2[1] * 4) = uVar1;
        piVar2[1] = piVar2[1] + 1;
      }
      iVar4 = *(int *)(param_1 + 0x4c);
      param_3 = (int *)((int)param_3 + 1);
      if ((int)param_3 <= iVar4) {
        piVar5 = (int *)(*(int *)(param_1 + 0x44) + (int)param_3 * 8);
        do {
          if (*piVar5 != -1) break;
          param_3 = (int *)((int)param_3 + 1);
          piVar5 = piVar5 + 2;
        } while ((int)param_3 <= iVar4);
      }
    } while ((int)param_3 <= iVar4);
  }
  return;
}

// 010E15A0  FUN_010e15a0  size=159  [run]
void FUN_010e15a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = param_1;
  iVar1 = FUN_010e11f0(param_1);
  uVar4 = param_2;
  if ((iVar1 != 0) && (iVar2 = FUN_010e11f0(param_2), iVar2 == 0)) {
    FUN_010e26c0(uVar3);
    uVar3 = FUN_01025530(uVar4);
    FUN_01025890((int)&param_1 + 3,uVar3);
    if (param_1._3_1_ == '\0') {
      uVar3 = FUN_01015d80(uVar4,&PTR_vftable_018e9b94);
      FUN_01025470(uVar3,iVar1);
      *(undefined4 *)(iVar1 + 8) = uVar3;
      return;
    }
    uVar4 = FUN_010253e0(uVar3);
    FUN_01025420(uVar3,iVar1);
    *(undefined4 *)(iVar1 + 8) = uVar4;
  }
  return;
}

// 010E1640  FUN_010e1640  size=68  [run]
void FUN_010e1640(int *param_1,undefined4 param_2,char param_3,undefined4 param_4,int *param_5)

{
  if ((param_3 != '\0') && (*param_1 == 0)) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_5,4);
    }
    *(int **)(*param_5 + param_5[1] * 4) = param_1;
    param_5[1] = param_5[1] + 1;
  }
  return;
}

// 010E1690  FUN_010e1690  size=41  [run]
void FUN_010e1690(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 7;
  local_c = param_1;
  local_8 = 0;
  FUN_010e1400(&local_10);
  return;
}

// 010E16C0  FUN_010e16c0  size=34  [run]
void FUN_010e16c0(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 8;
  local_c = param_1;
  FUN_010e1400(&local_10);
  return;
}

// 010E16F0  FUN_010e16f0  size=40  [run]
void FUN_010e16f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_10 = 9;
  local_8 = param_2;
  FUN_010e1400(&local_10);
  return;
}

// 010E1720  FUN_010e1720  size=85  [run]
int * FUN_010e1720(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1[1] != param_2) {
    iVar1 = *param_1;
    if (iVar1 != 7) {
      if (iVar1 == 8) {
        piVar3 = (int *)FUN_010e16c0(param_2);
        return piVar3;
      }
      if (iVar1 != 9) {
        return (int *)0x0;
      }
      uVar2 = FUN_010e0cc0();
      piVar3 = (int *)FUN_010e16f0(param_2,uVar2);
      return piVar3;
    }
    param_1 = (int *)FUN_010e1690(param_2);
  }
  return param_1;
}

// 010E1780  FUN_010e1780  size=28  [run]
void __thiscall FUN_010e1780(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc + param_2 * 4);
  if (iVar1 == 0) {
    return;
  }
  FUN_010e16c0(iVar1);
  return;
}

// 010E17A0  FUN_010e17a0  size=28  [run]
void FUN_010e17a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010e1290(param_1);
  FUN_010e1690(uVar1);
  return;
}

// 010E17C0  FUN_010e17c0  size=132  [run]
void __thiscall FUN_010e17c0(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_010e0d20();
  iVar3 = FUN_014440b0(iVar2);
  if (*(int *)(param_1 + 0x4c) < iVar3) {
LAB_010e1826:
    *param_2 = 0;
    return;
  }
LAB_010e17f0:
  if (*(int *)(*(int *)(param_1 + 0x44) + 4 + iVar3 * 8) == param_3) {
    *param_2 = 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar3 = iVar3 + 1;
  do {
    if (iVar3 <= iVar1) {
      piVar4 = (int *)(*(int *)(param_1 + 0x44) + iVar3 * 8);
      do {
        if (*piVar4 == -1) {
          iVar3 = iVar1 + 1;
LAB_010e1821:
          if (*(int *)(param_1 + 0x4c) < iVar3) goto LAB_010e1826;
          goto LAB_010e17f0;
        }
        if (*piVar4 == iVar2) goto LAB_010e1821;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar3 <= iVar1);
    }
    iVar3 = 0;
  } while( true );
}

// 010E1850  FUN_010e1850  size=400  [run]
undefined4 __thiscall FUN_010e1850(int param_1,undefined1 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 local_90 [128];
  undefined1 local_10 [12];
  
  switch(*param_2) {
  case 0x21:
    return *(undefined4 *)(param_1 + 0xc);
  case 0x2a:
    uVar4 = FUN_010e1850(param_2 + 1);
    uVar4 = FUN_010e1690(uVar4);
    return uVar4;
  case 0x43:
    pcVar1 = param_2 + 1;
    for (pcVar6 = pcVar1;
        ((((cVar3 = *pcVar6, '`' < cVar3 && (cVar3 < '{')) || (('@' < cVar3 && (cVar3 < '[')))) ||
         (('/' < cVar3 && (cVar3 < ':')))) || ((cVar3 == '_' || (cVar3 == ':'))));
        pcVar6 = pcVar6 + 1) {
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 0x80)) && (*pcVar6 == ';')) {
      FUN_01015cb0(local_90,pcVar1,iVar7);
      local_90[iVar7] = 0;
      uVar4 = FUN_010e1290(local_90);
      return uVar4;
    }
    break;
  case 0x5b:
    uVar4 = FUN_010e1850(param_2 + 2);
    uVar4 = FUN_010e16c0(uVar4);
    return uVar4;
  case 0x62:
    return *(undefined4 *)(param_1 + 0x14);
  case 0x69:
    return *(undefined4 *)(param_1 + 0x1c);
  case 0x72:
    return *(undefined4 *)(param_1 + 0x18);
  case 0x73:
    return *(undefined4 *)(param_1 + 0x20);
  case 0x76:
    return *(undefined4 *)(param_1 + 0x10);
  case 0x7b:
    pcVar1 = param_2 + 1;
    cVar3 = *pcVar1;
    pcVar6 = pcVar1;
    while (('/' < cVar3 && (cVar3 < ':'))) {
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar2;
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 10)) && (*pcVar6 == '}')) {
      FUN_01015cb0(local_10,pcVar1,iVar7);
      local_10[iVar7] = 0;
      uVar4 = FUN_01015cf0(local_10,0);
      uVar5 = FUN_010e1850(pcVar6 + 1);
      uVar4 = FUN_010e16f0(uVar5,uVar4);
      return uVar4;
    }
    return 0;
  }
  return 0;
}

// 010E1A70  FUN_010e1a70  size=214  [run]
int __thiscall FUN_010e1a70(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_2 & 0xf) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x10);
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x14);
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x1c);
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x18);
    break;
  case 4:
    iVar2 = FUN_010e16f0(*(undefined4 *)(param_1 + 0x18),4);
    break;
  case 5:
    iVar2 = FUN_010e16f0(*(undefined4 *)(param_1 + 0x18),8);
    break;
  case 6:
    iVar2 = FUN_010e16f0(*(undefined4 *)(param_1 + 0x18),0xc);
    break;
  case 7:
    iVar2 = FUN_010e16f0(*(undefined4 *)(param_1 + 0x18),0x10);
    break;
  case 8:
    if (param_3 == 0) {
      iVar2 = FUN_010e1690(*(undefined4 *)(param_1 + 8));
    }
    else {
      uVar1 = FUN_010e1290(param_3);
      iVar2 = FUN_010e1690(uVar1);
    }
    break;
  case 9:
    if (param_3 == 0) {
      iVar2 = *(int *)(param_1 + 8);
    }
    else {
      iVar2 = FUN_010e1290(param_3);
    }
    break;
  case 10:
    iVar2 = *(int *)(param_1 + 0x20);
    break;
  default:
    goto switchD_010e1a88_default;
  }
  if (iVar2 != 0) {
    if ((param_2 & 0x10) == 0) {
      if ((param_2 & 0x20) != 0) {
        iVar2 = FUN_010e16f0(iVar2,param_4);
      }
      return iVar2;
    }
    iVar2 = FUN_010e16c0(iVar2);
    return iVar2;
  }
switchD_010e1a88_default:
  return 0;
}

// 010E1B80  FUN_010e1b80  size=170  [run]
undefined4 FUN_010e1b80(undefined4 param_1)

{
  undefined1 local_1c [12];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  hkOstream::hkOstream_3(&local_10);
  FUN_010e0eb0(local_1c);
  if (local_c == (local_8 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_10,1);
  }
  *(undefined1 *)(local_10 + local_c) = 0;
  local_c = local_c + 1;
  FUN_010066e0(local_10);
  hkBaseObject::hkBaseObject_38();
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
  }
  return param_1;
}

// 010E1C30  FUN_010e1c30  size=45  [run]
void __thiscall FUN_010e1c30(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_10 [3];
  
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[0] = param_2;
  uVar1 = FUN_010e1400(local_10);
  *(undefined4 *)(param_1 + 0xc + param_2 * 4) = uVar1;
  return;
}

// 010E1C60  FUN_010e1c60  size=345  [run]
void FUN_010e1c60(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  param_1 = FUN_010e0cd0();
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  FUN_010e14f0(extraout_ECX,&local_14);
  uVar2 = local_10;
  local_18 = -0x80000000;
  local_20 = 0;
  local_1c = 0;
  if (0 < (int)local_10) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_20,local_10 & ((int)local_10 < 0) - 1,4);
  }
  local_1c = uVar2;
  iVar5 = 0;
  if (0 < (int)local_10) {
    do {
      uVar3 = FUN_010e0d20();
      *(undefined4 *)(local_20 + iVar5 * 4) = uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_10);
  }
  iVar5 = 0;
  if (0 < (int)local_10) {
    do {
      puVar1 = *(undefined4 **)(local_14 + iVar5 * 4);
      FUN_01444fe0(*(undefined4 *)(local_20 + iVar5 * 4),puVar1);
      iVar5 = iVar5 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
    } while (iVar5 < (int)local_10);
  }
  uVar3 = FUN_01025530(param_1);
  FUN_01025890((int)&param_1 + 3,uVar3);
  if (param_1._3_1_ != '\0') {
    uVar4 = FUN_010253e0(uVar3);
    FUN_01015db0(uVar4,&PTR_vftable_018e9b94);
    FUN_010255c0(uVar3);
  }
  local_1c = 0;
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 4);
  }
  local_20 = 0;
  local_10 = 0;
  local_18 = 0x80000000;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
  }
  return;
}

// 010E1DC0  FUN_010e1dc0  size=149  [run]
void __fastcall FUN_010e1dc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_01442bf0(FUN_010e1640,0,&local_10);
  iVar2 = 0;
  if (0 < local_c) {
    do {
      puVar1 = *(undefined4 **)(local_10 + iVar2 * 4);
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      *puVar1 = *(undefined4 *)(param_1 + 0x50);
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + 0x50) = puVar1;
    } while (iVar2 < local_c);
  }
  FUN_01442b10();
  FUN_014429b0();
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 010E1E60  hkTypeManager::hkTypeManager  size=227  [run]
undefined4 * __fastcall hkTypeManager::hkTypeManager(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01025830(local_8);
  FUN_01444e30();
  FUN_01442f20(0xc,4,0x800,0,0);
  FUN_01015ea0(param_1 + 3,0,0x28);
  FUN_010e1c30(1);
  FUN_010e1c30(4);
  FUN_010e1c30(3);
  FUN_010e1c30(5);
  FUN_010e1c30(2);
  puVar1 = (undefined4 *)param_1[0x14];
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[0x1c];
    if (puVar1 < (undefined4 *)param_1[0x1d]) {
      param_1[0x21] = param_1[0x21] + -1;
      param_1[0x1c] = param_1[0x15] + (int)puVar1;
    }
    else {
      puVar1 = (undefined4 *)FUN_01442cb0();
    }
  }
  else {
    param_1[0x21] = param_1[0x21] + -1;
    param_1[0x14] = *puVar1;
  }
  *puVar1 = 6;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar3 = puVar1;
  uVar2 = FUN_010e0d20(puVar1);
  FUN_01444040(uVar2,puVar3);
  param_1[2] = puVar1;
  return param_1;
}

// 010E1F50  FUN_010e1f50  size=232  [run]
int FUN_010e1f50(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *local_50;
  uint local_4c;
  undefined1 *local_48;
  undefined1 local_44 [64];
  
  local_50 = local_44;
  local_4c = 0;
  local_48 = &DAT_80000010;
  iVar3 = param_1;
  uVar2 = local_4c;
  do {
    local_4c = uVar2;
    if (local_4c == ((uint)local_48 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_50,4);
    }
    *(int *)(local_50 + local_4c * 4) = iVar3;
    uVar2 = local_4c + 1;
    iVar3 = *(int *)(iVar3 + 4);
  } while (iVar3 != 0);
  uVar1 = local_4c;
  if (*(int *)(local_50 + uVar2 * 4 + -4) != param_2) {
    for (; local_4c = uVar2, -1 < (int)uVar1; uVar1 = uVar1 - 1) {
      param_2 = FUN_010e1720(*(undefined4 *)(local_50 + uVar1 * 4),param_2);
      uVar2 = local_4c;
    }
    local_4c = 0;
    if (-1 < (int)local_48) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,(int)local_48 * 4);
    }
    return param_2;
  }
  if (-1 < (int)local_48) {
    local_4c = iVar3;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,(int)local_48 * 4);
  }
  return param_1;
}

// 010E2040  FUN_010e2040  size=250  [run]
int __thiscall FUN_010e2040(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_50;
  int local_4c;
  undefined1 *local_48;
  undefined1 local_44 [64];
  
  iVar3 = param_2;
  pcVar1 = (char *)FUN_010e17c0((int)&param_2 + 3,param_2);
  if (*pcVar1 != '\0') {
    return iVar3;
  }
  local_50 = local_44;
  local_4c = 0;
  local_48 = &DAT_80000010;
  FUN_010e1360(iVar3,&local_50);
  if (**(int **)(local_50 + local_4c * 4 + -4) == 6) {
    uVar2 = FUN_010e0cd0();
    iVar3 = FUN_010e1290(uVar2);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc + **(int **)(local_50 + local_4c * 4 + -4) * 4);
  }
  if (iVar3 == 0) {
    local_4c = 0;
    if (-1 < (int)local_48) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,(int)local_48 * 4);
    }
    return 0;
  }
  for (iVar4 = local_4c + -2; -1 < iVar4; iVar4 = iVar4 + -1) {
    iVar3 = FUN_010e1720(*(undefined4 *)(local_50 + iVar4 * 4),iVar3);
  }
  local_4c = 0;
  if (-1 < (int)local_48) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,(int)local_48 * 4);
  }
  return iVar3;
}

// 010E2160  FUN_010e2160  size=27  [run]
uint __fastcall FUN_010e2160(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010E2180  FUN_010e2180  size=9  [run]
void FUN_010e2180(void)

{
  FUN_01025be0();
  return;
}

// 010E2190  FUN_010e2190  size=12  [run]
undefined4 __fastcall FUN_010e2190(undefined4 param_1)

{
  FUN_01444e30();
  return param_1;
}

// 010E21A0  FUN_010e21a0  size=9  [run]
void FUN_010e21a0(void)

{
  FUN_01444040();
  return;
}

// 010E21B0  FUN_010e21b0  size=9  [run]
void FUN_010e21b0(void)

{
  FUN_014440b0();
  return;
}

// 010E21C0  FUN_010e21c0  size=9  [run]
void FUN_010e21c0(void)

{
  FUN_01444fe0();
  return;
}

// 010E21D0  FUN_010e21d0  size=9  [run]
void FUN_010e21d0(void)

{
  FUN_01025470();
  return;
}

// 010E21E0  FUN_010e21e0  size=9  [run]
void FUN_010e21e0(void)

{
  FUN_01025530();
  return;
}

// 010E21F0  FUN_010e21f0  size=9  [run]
void FUN_010e21f0(void)

{
  FUN_010253e0();
  return;
}

// 010E2200  FUN_010e2200  size=9  [run]
void FUN_010e2200(void)

{
  FUN_01025420();
  return;
}

// 010E2210  FUN_010e2210  size=24  [run]
undefined4 FUN_010e2210(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010E2230  FUN_010e2230  size=9  [run]
void FUN_010e2230(void)

{
  FUN_010255c0();
  return;
}

// 010E2250  FUN_010e2250  size=9  [run]
void FUN_010e2250(void)

{
  FUN_01025440();
  return;
}

// 010E2270  FUN_010e2270  size=16  [run]
undefined4 __thiscall FUN_010e2270(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 010E2280  FUN_010e2280  size=21  [run]
void __thiscall FUN_010e2280(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010E22D0  FUN_010e22d0  size=15  [run]
int __thiscall FUN_010e22d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010E2300  FUN_010e2300  size=14  [run]
bool FUN_010e2300(int param_1)

{
  return param_1 != -1;
}

// 010E2310  FUN_010e2310  size=16  [run]
bool FUN_010e2310(int param_1,int param_2)

{
  return param_1 == param_2;
}

// 010E2320  FUN_010e2320  size=32  [run]
void __thiscall FUN_010e2320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010E2360  FUN_010e2360  size=34  [run]
void FUN_010e2360(int param_1,int param_2,undefined4 *param_3)

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

// 010E2390  FUN_010e2390  size=26  [run]
void __thiscall FUN_010e2390(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010E23B0  FUN_010e23b0  size=61  [run]
void __thiscall FUN_010e23b0(int *param_1,undefined1 *param_2)

{
  int iVar1;
  
  if (((*param_1 == 9) && (*(int *)param_1[1] == 3)) &&
     ((iVar1 = param_1[2], iVar1 == 4 || (((iVar1 == 8 || (iVar1 == 0xc)) || (iVar1 == 0x10)))))) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 010E23F0  FUN_010e23f0  size=27  [run]
uint __fastcall FUN_010e23f0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010E2410  FUN_010e2410  size=105  [run]
undefined4 FUN_010e2410(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_1;
  uVar1 = FUN_01025530(param_1);
  FUN_01025890((int)&param_1 + 3,uVar1);
  if (param_1._3_1_ == '\0') {
    uVar2 = FUN_01015d80(uVar2,&PTR_vftable_018e9b94);
    FUN_01025470(uVar2,param_2);
    return uVar2;
  }
  uVar2 = FUN_010253e0(uVar1);
  FUN_01025420(uVar1,param_2);
  return uVar2;
}

// 010E2480  FUN_010e2480  size=16  [run]
undefined4 __thiscall FUN_010e2480(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 010E2490  FUN_010e2490  size=21  [run]
void __thiscall FUN_010e2490(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010E24D0  FUN_010e24d0  size=44  [run]
void FUN_010e24d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010253e0(param_1);
  FUN_01015db0(uVar1,&PTR_vftable_018e9b94);
  FUN_010255c0(param_1);
  return;
}

// 010E2500  FUN_010e2500  size=96  [run]
void FUN_010e2500(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&uStack_8 + 3,uVar1);
  while (uStack_8._3_1_ != '\0') {
    uVar2 = FUN_010253e0(uVar1);
    FUN_01015db0(uVar2,&PTR_vftable_018e9b94);
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890((int)&uStack_8 + 3,uVar1);
  }
  FUN_01025720();
  return;
}

// 010E2580  FUN_010e2580  size=65  [run]
int __thiscall FUN_010e2580(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[2];
  param_2 = param_2 + 1;
  do {
    if (param_2 <= iVar1) {
      piVar2 = (int *)(*param_1 + param_2 * 8);
      do {
        if (*piVar2 == -1) {
          return iVar1 + 1;
        }
        if (*piVar2 == param_3) {
          return param_2;
        }
        param_2 = param_2 + 1;
        piVar2 = piVar2 + 2;
      } while (param_2 <= iVar1);
    }
    param_2 = 0;
  } while( true );
}

// 010E25D0  FUN_010e25d0  size=36  [run]
void __thiscall FUN_010e25d0(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010E2610  FUN_010e2610  size=57  [run]
void __thiscall FUN_010e2610(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E2650  FUN_010e2650  size=32  [run]
void __thiscall FUN_010e2650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010E2670  FUN_010e2670  size=61  [run]
void __thiscall FUN_010e2670(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E26B0  FUN_010e26b0  size=16  [run]
void FUN_010e26b0(void)

{
  FUN_010e2500();
  FUN_01025870();
  return;
}

// 010E26C0  FUN_010e26c0  size=85  [run]
undefined4 FUN_010e26c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_01025530(param_1);
  FUN_01025890((int)&param_1 + 3,uVar1);
  if (param_1._3_1_ != '\0') {
    uVar2 = FUN_010253e0(uVar1);
    FUN_01015db0(uVar2,&PTR_vftable_018e9b94);
    FUN_010255c0(uVar1);
    return 0;
  }
  return 1;
}

// 010E2740  FUN_010e2740  size=36  [run]
void __thiscall FUN_010e2740(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010E2770  FUN_010e2770  size=65  [run]
int __thiscall FUN_010e2770(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[2];
  param_2 = param_2 + 1;
  do {
    if (param_2 <= iVar1) {
      piVar2 = (int *)(*param_1 + param_2 * 8);
      do {
        if (*piVar2 == -1) {
          return iVar1 + 1;
        }
        if (*piVar2 == param_3) {
          return param_2;
        }
        param_2 = param_2 + 1;
        piVar2 = piVar2 + 2;
      } while (param_2 <= iVar1);
    }
    param_2 = 0;
  } while( true );
}

// 010E27C0  FUN_010e27c0  size=55  [run]
void __thiscall FUN_010e27c0(int *param_1,undefined1 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E2800  FUN_010e2800  size=58  [run]
void __thiscall FUN_010e2800(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E2840  FUN_010e2840  size=61  [run]
void __fastcall FUN_010e2840(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E2880  FUN_010e2880  size=38  [run]
void FUN_010e2880(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E28B0  FUN_010e28b0  size=61  [run]
void __fastcall FUN_010e28b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E28F0  FUN_010e28f0  size=27  [run]
void __thiscall FUN_010e28f0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 010E2910  hkTypeManager::vf00  size=52  [run]
int __thiscall hkTypeManager::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_221();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010E2950  FUN_010e2950  size=61  [run]
void __fastcall FUN_010e2950(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E2990  hkSerializeDeprecated::vf10  size=5  [run]
undefined4 hkSerializeDeprecated::vf10(void)

{
  return 0;
}

// 010E29A0  hkSerializeDeprecated::vf0C  size=38  [run]
undefined4 hkSerializeDeprecated::vf0C(void)

{
  undefined4 *in_stack_00000018;
  
  if (in_stack_00000018 != (undefined4 *)0x0) {
    *in_stack_00000018 = 7;
    FUN_01006780(
                "XML packfile support is not linked. Perhaps you have HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700 in hkProductFeatures"
                );
  }
  return 1;
}

// 010E29D0  hkSerializeDeprecated::vf14  size=35  [run]
undefined4 hkSerializeDeprecated::vf14(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 7;
    FUN_01006780(
                "Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0.0.\nTo do so requires linking some deprecated code from Source/Common/Compat/Deprecated\nIf you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700.\nNote that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\nSome extra effort is required to strip the unused code and data but it will still cost several hundred Kb.\nAlternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest version before loading.\n"
                );
  }
  return 0;
}

// 010E2A00  hkSerializeDeprecated::vf18  size=35  [run]
undefined4 hkSerializeDeprecated::vf18(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 7;
    FUN_01006780(
                "Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0.0.\nTo do so requires linking some deprecated code from Source/Common/Compat/Deprecated\nIf you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700.\nNote that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\nSome extra effort is required to strip the unused code and data but it will still cost several hundred Kb.\nAlternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest version before loading.\n"
                );
  }
  return 0;
}

// 010E2B40  hkDataWorldNative::vf60  size=35  [run]
void __thiscall
hkDataWorldNative::vf60
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_010e7db0(param_1 + 0x30,param_2,param_3,param_4,param_5);
  return;
}

// 010E2B70  _anon_4671B7E4::DataWorldNative::vf0C  size=5  [run]
undefined4 _anon_4671B7E4::DataWorldNative::vf0C(void)

{
  return 0;
}

// 010E2B80  _anon_4671B7E4::DataWorldNative::vf14  size=5  [run]
undefined4 _anon_4671B7E4::DataWorldNative::vf14(void)

{
  return 0;
}

