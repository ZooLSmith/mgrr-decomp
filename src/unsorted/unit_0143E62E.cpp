// src/unsorted/unit_0143E62E.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0143E62E..0143EA90, 37 functions

#include "mgrr.h"

// 0143E62E  FUN_0143e62e  size=45  [run]
undefined4 FUN_0143e62e(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0x16;
  }
  *param_1 = DAT_0225ba8c;
  return 0;
}

// 0143E750  FUN_0143e750  size=22  [run]
void __thiscall FUN_0143e750(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_3 + 0x12);
  param_1[1] = param_3;
  *param_1 = (uint)uVar1 + param_2;
  return;
}

// 0143E770  FUN_0143e770  size=45  [run]
void __thiscall FUN_0143e770(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_01009660(param_4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    *param_1 = (uint)*(ushort *)(iVar1 + 0x12) + param_2;
  }
  return;
}

// 0143E7A0  FUN_0143e7a0  size=22  [run]
undefined4 FUN_0143e7a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  
  FUN_0143e750(param_1,param_2);
  return extraout_ECX;
}

// 0143E7C0  FUN_0143e7c0  size=34  [run]
undefined4 __thiscall FUN_0143e7c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_0143e770(*param_2,param_2[1],param_3);
  return param_1;
}

// 0143E7F0  FUN_0143e7f0  size=32  [run]
undefined4 __thiscall
FUN_0143e7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0143e770(param_2,param_3,param_4);
  return param_1;
}

// 0143E810  FUN_0143e810  size=18  [run]
void __thiscall FUN_0143e810(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 != 0;
  return;
}

// 0143E830  FUN_0143e830  size=3  [run]
undefined4 __fastcall FUN_0143e830(undefined4 *param_1)

{
  return *param_1;
}

// 0143E840  FUN_0143e840  size=3  [run]
undefined4 __fastcall FUN_0143e840(undefined4 *param_1)

{
  return *param_1;
}

// 0143E850  FUN_0143e850  size=15  [run]
int __thiscall FUN_0143e850(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E860  FUN_0143e860  size=15  [run]
int __thiscall FUN_0143e860(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E870  FUN_0143e870  size=15  [run]
int __thiscall FUN_0143e870(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E880  FUN_0143e880  size=12  [run]
int __thiscall FUN_0143e880(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 0143E890  FUN_0143e890  size=15  [run]
int __thiscall FUN_0143e890(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E8A0  FUN_0143e8a0  size=15  [run]
int __thiscall FUN_0143e8a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 0143E8B0  FUN_0143e8b0  size=15  [run]
int __thiscall FUN_0143e8b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E8C0  FUN_0143e8c0  size=15  [run]
int __thiscall FUN_0143e8c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E8D0  FUN_0143e8d0  size=15  [run]
int __thiscall FUN_0143e8d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0143E8E0  FUN_0143e8e0  size=15  [run]
int __thiscall FUN_0143e8e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0143E8F0  FUN_0143e8f0  size=15  [run]
int __thiscall FUN_0143e8f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0143E900  FUN_0143e900  size=15  [run]
int __thiscall FUN_0143e900(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 0143E910  FUN_0143e910  size=15  [run]
int __thiscall FUN_0143e910(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 0143E920  FUN_0143e920  size=12  [run]
int __thiscall FUN_0143e920(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 0143E930  FUN_0143e930  size=12  [run]
int __thiscall FUN_0143e930(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 0143E940  FUN_0143e940  size=15  [run]
int __thiscall FUN_0143e940(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 0143E950  FUN_0143e950  size=18  [run]
int __thiscall FUN_0143e950(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0143E970  FUN_0143e970  size=15  [run]
int __thiscall FUN_0143e970(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 0143E980  FUN_0143e980  size=18  [run]
int __thiscall FUN_0143e980(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0143E9A0  FUN_0143e9a0  size=15  [run]
int __thiscall FUN_0143e9a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0143E9B0  FUN_0143e9b0  size=18  [run]
int __thiscall FUN_0143e9b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0143E9D0  FUN_0143e9d0  size=15  [run]
int __thiscall FUN_0143e9d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0143E9E0  FUN_0143e9e0  size=4  [run]
undefined4 __fastcall FUN_0143e9e0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0143E9F0  FUN_0143e9f0  size=39  [run]
undefined4 __thiscall FUN_0143e9f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010162f0(param_3);
  FUN_0143e7f0(*param_1,uVar1,param_3);
  return param_2;
}

// 0143EA20  FUN_0143ea20  size=20  [run]
void __thiscall FUN_0143ea20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 0143EA40  FUN_0143ea40  size=22  [run]
void __thiscall FUN_0143ea40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// 0143EA60  FUN_0143ea60  size=35  [run]
undefined4 __thiscall FUN_0143ea60(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010162f0();
  FUN_0143ea20(*param_1,uVar1);
  return param_2;
}

// 0143EA90  FUN_0143ea90  size=63  [run]
void __thiscall FUN_0143ea90(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*param_2 != 0) {
    param_3 = param_3 - (int)param_2;
    do {
      iVar1 = *(int *)(param_3 + (int)param_2);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(*param_2 + 0x10) != 0) {
        (**(code **)(*param_1 + 0xc))(*(int *)(*param_2 + 0x10),iVar1);
      }
      param_2 = param_2 + 1;
    } while (*param_2 != 0);
  }
  return;
}

