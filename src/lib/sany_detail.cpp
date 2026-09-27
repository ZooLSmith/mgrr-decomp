// src/lib/sany_detail.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E92950..00EA9D90, 299 functions

#include "types.h"

// 00E92950  lib::sany_detail::SerializableAnyImpl::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImpl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E93280  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::SerializableAnyImplT<Hw::cVec3>  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::SerializableAnyImplT<Hw::cVec3>
          (undefined4 *param_1,undefined4 *param_2)

{
  if ((_DAT_01d644ac & 1) == 0) {
    _DAT_01d644ac = _DAT_01d644ac | 1;
    DAT_01d644a8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01d644a8;
  *param_1 = vftable;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  return;
}

// 00E933E0  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E933F0  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf0C(void)

{
  return 0x14;
}

// 00E935A0  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E935F0  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::SerializableAnyImplT<Hw::cVec4>  size=86  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::SerializableAnyImplT<Hw::cVec4>
          (undefined4 *param_1,undefined4 *param_2)

{
  if ((_DAT_01be99c4 & 1) == 0) {
    _DAT_01be99c4 = _DAT_01be99c4 | 1;
    DAT_01be99c0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01be99c0;
  *param_1 = vftable;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  return;
}

// 00E93650  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf04(int param_1)

{
  return param_1 + 0x10;
}

// 00E93660  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf0C(void)

{
  return 0x20;
}

// 00E93680  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E936D0  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::SerializableAnyImplT<sys::Vec4w>  size=86  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::SerializableAnyImplT<sys::Vec4w>
          (undefined4 *param_1,undefined4 *param_2)

{
  if ((_DAT_01dda76c & 1) == 0) {
    _DAT_01dda76c = _DAT_01dda76c | 1;
    DAT_01dda768 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda768;
  *param_1 = vftable;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  return;
}

// 00E93730  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf04(int param_1)

{
  return param_1 + 0x10;
}

// 00E93740  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf0C(void)

{
  return 0x20;
}

// 00E93760  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E937D0  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E937E0  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf0C(void)

{
  return 0xc;
}

// 00E93800  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e93812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00E93820  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E93910  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::SerializableAnyImplT<sys::AngleVec3>  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::SerializableAnyImplT<sys::AngleVec3>
          (undefined4 *param_1,undefined4 *param_2)

{
  if ((_DAT_01dda77c & 1) == 0) {
    _DAT_01dda77c = _DAT_01dda77c | 1;
    DAT_01dda778 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda778;
  *param_1 = vftable;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  return;
}

// 00E93960  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E93970  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf0C(void)

{
  return 0x14;
}

// 00E93990  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E939B0  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::SerializableAnyImplT<sys::AngleVec4>  size=86  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::SerializableAnyImplT<sys::AngleVec4>
          (undefined4 *param_1,undefined4 *param_2)

{
  if ((_DAT_01dda784 & 1) == 0) {
    _DAT_01dda784 = _DAT_01dda784 | 1;
    DAT_01dda780 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda780;
  *param_1 = vftable;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  return;
}

// 00E93A10  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf04(int param_1)

{
  return param_1 + 0x10;
}

// 00E93A20  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf0C(void)

{
  return 0x20;
}

// 00E93A40  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E93AB0  lib::sany_detail::SerializableAnyImplT<eObjId>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<eObjId>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E93AC0  lib::sany_detail::SerializableAnyImplT<eObjId>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<eObjId>::vf0C(void)

{
  return 0xc;
}

// 00E93AE0  lib::sany_detail::SerializableAnyImplT<eObjId>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<eObjId>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E94510  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf08  size=41  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
    param_2[3] = *(undefined4 *)(param_1 + 0xc);
    param_2[4] = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

// 00E94540  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf08  size=47  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[4] = *(undefined4 *)(param_1 + 0x10);
    param_2[5] = *(undefined4 *)(param_1 + 0x14);
    param_2[6] = *(undefined4 *)(param_1 + 0x18);
    param_2[7] = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}

// 00E94570  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf08  size=29  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
  }
  return;
}

// 00E94590  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99470(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E945F0  lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<sys::Angle>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99cf0(param_1 + 8);
  return;
}

// 00E94650  lib::sany_detail::SerializableAnyImplT<eObjId>::vf08  size=29  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<eObjId>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
  }
  return;
}

// 00E956F0  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf10(int param_1,undefined4 param_2)

{
  FUN_00c6da10(param_2,param_1 + 8);
  return;
}

// 00E95710  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf10(int param_1,undefined4 param_2)

{
  FUN_00a692d0(param_2,param_1 + 0x10);
  return;
}

// 00E95730  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf08  size=47  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[4] = *(undefined4 *)(param_1 + 0x10);
    param_2[5] = *(undefined4 *)(param_1 + 0x14);
    param_2[6] = *(undefined4 *)(param_1 + 0x18);
    param_2[7] = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}

// 00E95760  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf08  size=41  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
    param_2[3] = *(undefined4 *)(param_1 + 0xc);
    param_2[4] = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

// 00E95790  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf08  size=47  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[4] = *(undefined4 *)(param_1 + 0x10);
    param_2[5] = *(undefined4 *)(param_1 + 0x14);
    param_2[6] = *(undefined4 *)(param_1 + 0x18);
    param_2[7] = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}

// 00E96AE0  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf14  size=89  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_2;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_2;
  local_4 = 0;
  uVar2 = FUN_00c6da10(&local_10,param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E96B40  lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf18  size=84  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::vf18(int param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_8 = param_2;
  local_4 = 0;
  FUN_00c6da10(&local_18,param_1 + 8);
  return;
}

// 00E96BA0  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf14  size=89  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_2;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_2;
  local_4 = 0;
  uVar2 = FUN_00a692d0(&local_10,param_1 + 0x10);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E96C00  lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf18  size=84  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::vf18(int param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_8 = param_2;
  local_4 = 0;
  FUN_00a692d0(&local_18,param_1 + 0x10);
  return;
}

// 00E96C60  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf10  size=74  [class]
undefined4 __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf10(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1 + 8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_2 + 0x1c))(param_1 + 0xc);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x10);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 00E96CB0  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf14  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf14(int param_1,undefined4 param_2)

{
  OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_8
            (param_2,param_1 + 8);
  return;
}

// 00E96CD0  lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf18  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::vf18(int param_1,undefined4 param_2)

{
  InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_24(param_1 + 8,param_2);
  return;
}

// 00E96CF0  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf10  size=74  [class]
undefined4 __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf10(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x14);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x18);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 00E96D40  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf14  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf14(int param_1,undefined4 param_2)

{
  OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_9
            (param_2,param_1 + 0x10);
  return;
}

// 00E96D60  lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf18  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::vf18(int param_1,undefined4 param_2)

{
  InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_25(param_1 + 0x10,param_2);
  return;
}

// 00E96D80  lib::sany_detail::SerializableAnyImplT<eObjId>::vf10  size=20  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<eObjId>::vf10(int param_1,undefined4 param_2)

{
  StaticArray<char,256>::StaticArray<char,256>(param_2,param_1 + 8);
  return;
}

// 00E96DA0  FUN_00e96da0  size=71  [callgraph]
void FUN_00e96da0(undefined4 param_1,int param_2)

{
  undefined1 local_10 [12];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_10;
  FUN_00c6da10(param_1,local_10);
  if (param_2 != 0) {
    lib::sany_detail::SerializableAnyImplT<Hw::cVec3>::SerializableAnyImplT<Hw::cVec3>(local_10);
  }
  __security_check_cookie(local_4 ^ (uint)local_10);
  return;
}

// 00E96DF0  FUN_00e96df0  size=71  [callgraph]
void FUN_00e96df0(undefined4 param_1,int param_2)

{
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  FUN_00a692d0(param_1,local_14);
  if (param_2 != 0) {
    lib::sany_detail::SerializableAnyImplT<Hw::cVec4>::SerializableAnyImplT<Hw::cVec4>(local_14);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E96E40  FUN_00e96e40  size=109  [callgraph]
void FUN_00e96e40(int *param_1,int param_2)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined1 auStack_c [4];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_10;
  cVar1 = (**(code **)(*param_1 + 0x1c))(local_10);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1c))(local_10);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x1c))(auStack_c);
    }
  }
  if (param_2 != 0) {
    lib::sany_detail::SerializableAnyImplT<sys::AngleVec3>::SerializableAnyImplT<sys::AngleVec3>
              (&stack0xffffffec);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffec);
  return;
}

// 00E96EB0  FUN_00e96eb0  size=109  [callgraph]
void FUN_00e96eb0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 local_14 [4];
  undefined1 auStack_10 [8];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  cVar1 = (**(code **)(*param_1 + 0x1c))(local_14);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1c))(local_14);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x1c))(auStack_10);
    }
  }
  if (param_2 != 0) {
    lib::sany_detail::SerializableAnyImplT<sys::AngleVec4>::SerializableAnyImplT<sys::AngleVec4>
              (&stack0xffffffe8);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe8);
  return;
}

// 00E975C0  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>  size=93  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
          (undefined4 *param_1,undefined4 param_2)

{
  if ((_DAT_01dda75c & 1) == 0) {
    _DAT_01dda75c = _DAT_01dda75c | 1;
    DAT_01dda758 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda758;
  *param_1 = vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00c55960(param_2,0,0xffffffff);
  return param_1;
}

// 00E97620  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf04  size=4  [class]
int __fastcall
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E97630  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf0C  size=6  [class]
undefined4
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf0C(void)

{
  return 0x24;
}

// 00E97640  FUN_00e97640  size=77  [between]
uint FUN_00e97640(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  while( true ) {
    param_2._0_1_ = cVar1;
    if ((char)param_2 == '\0') {
      param_2 = (char *)((uint)param_2._1_3_ << 8);
      uVar2 = (**(code **)(*param_1 + 8))(&param_2);
      return uVar2;
    }
    pcVar3 = pcVar3 + 1;
    uVar2 = (**(code **)(*param_1 + 8))(&param_2);
    if ((char)uVar2 == '\0') break;
    cVar1 = *pcVar3;
  }
  return uVar2 & 0xffffff00;
}

// 00E976B0  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf14  size=28  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf14(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    piVar1 = (int *)*piVar1;
  }
  FUN_00e97640(param_2,piVar1);
  return;
}

// 00E976D0  lib::sany_detail::SerializableAnyImpl::SerializableAnyImpl_3  size=64  [class]
void __fastcall lib::sany_detail::SerializableAnyImpl::SerializableAnyImpl_3(undefined4 *param_1)

{
  *param_1 = SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
             ::vftable;
  if ((0xf < (uint)param_1[7]) && (DAT_01dda6a0 != '\0')) {
    FUN_00dd48d0(param_1[2],0);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = vftable;
  return;
}

// 00E97710  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf00  size=84  [class]
undefined4 * __thiscall
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((0xf < (uint)param_1[7]) && (DAT_01dda6a0 != '\0')) {
    FUN_00dd48d0(param_1[2],0);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E977E0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf04  size=4  [class]
int __fastcall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf04
          (int param_1)

{
  return param_1 + 8;
}

// 00E977F0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf0C  size=6  [class]
undefined4
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf0C(void)

{
  return 0x1c;
}

// 00E978B0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf10
          (int param_1,undefined4 param_2)

{
  FUN_00e947d0(param_2,param_1 + 8);
  return;
}

// 00E978D0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf14  size=89  [class]
uint __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf14
          (int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_2;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_2;
  local_4 = 0;
  uVar2 = FUN_00e947d0(&local_10,param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E97930  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf18  size=84  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf18
          (int param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_8 = param_2;
  local_4 = 0;
  FUN_00e947d0(&local_18,param_1 + 8);
  return;
}

// 00E97A00  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf04  size=4  [class]
int __fastcall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf04
          (int param_1)

{
  return param_1 + 8;
}

// 00E97A10  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf0C  size=6  [class]
undefined4
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf0C
          (void)

{
  return 0x1c;
}

// 00E981B0  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf10  size=8  [class]
void lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf10(void)

{
  FUN_00e95140();
  return;
}

// 00E981C0  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf14  size=85  [class]
uint lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf14(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_1;
  local_4 = 0;
  uVar2 = FUN_00e95140(&local_10);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E98220  lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf18  size=80  [class]
void lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::vf18(char *param_1)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_1;
  pcVar1 = param_1;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_4 = 0;
  local_8 = param_1;
  FUN_00e95140(&local_18);
  return;
}

// 00E98270  lib::sany_detail::SerializableAnyImplT<eObjId>::vf14  size=89  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<eObjId>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_2;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_2;
  local_4 = 0;
  uVar2 = StaticArray<char,256>::StaticArray<char,256>(&local_10,param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E982D0  lib::sany_detail::SerializableAnyImplT<eObjId>::vf18  size=84  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<eObjId>::vf18(int param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_8 = param_2;
  local_4 = 0;
  StaticArray<char,256>::StaticArray<char,256>(&local_18,param_1 + 8);
  return;
}

// 00E983D0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf10
          (int param_1,undefined4 param_2)

{
  FUN_00e972d0(param_2,param_1 + 8);
  return;
}

// 00E983F0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf14  size=89  [class]
uint __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf14
          (int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_2;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_2;
  local_4 = 0;
  uVar2 = FUN_00e972d0(&local_10,param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E98450  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf18  size=84  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf18
          (int param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_8 = param_2;
  local_4 = 0;
  FUN_00e972d0(&local_18,param_1 + 8);
  return;
}

// 00E984B0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf00  size=95  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[2] = DynamicArray<int,sys::GlobalAllocator>::vftable;
  if (param_1[3] != 0) {
    param_1[4] = 0;
    FUN_00dd48d0(param_1[3],0);
    param_1[3] = 0;
    param_1[5] = 0;
  }
  param_1[2] = Array<int>::vftable;
  if (param_1[3] != 0) {
    param_1[4] = 0;
  }
  param_1[3] = 0;
  param_1[5] = 0;
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E98510  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf00  size=95  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[2] = DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vftable;
  if (param_1[3] != 0) {
    param_1[4] = 0;
    FUN_00dd48d0(param_1[3],0);
    param_1[3] = 0;
    param_1[5] = 0;
  }
  param_1[2] = Array<Hw::cVec3>::vftable;
  if (param_1[3] != 0) {
    param_1[4] = 0;
  }
  param_1[3] = 0;
  param_1[5] = 0;
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E98650  FUN_00e98650  size=67  [between]
void FUN_00e98650(undefined4 param_1,int param_2)

{
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  FUN_00e95140(param_1);
  if (param_2 != 0) {
    lib::sany_detail::SerializableAnyImplT<sys::Vec4w>::SerializableAnyImplT<sys::Vec4w>(local_14);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E986A0  lib::sany_detail::SerializableAnyImplT<eObjId>::SerializableAnyImplT<eObjId>  size=90  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
lib::sany_detail::SerializableAnyImplT<eObjId>::SerializableAnyImplT<eObjId>
          (undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_4;
  
  StaticArray<char,256>::StaticArray<char,256>(param_1,&local_4);
  if (param_2 != (undefined4 *)0x0) {
    if ((_DAT_01d644dc & 1) == 0) {
      _DAT_01d644dc = _DAT_01d644dc | 1;
      DAT_01d644d8 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    param_2[1] = DAT_01d644d8;
    param_2[2] = local_4;
    *param_2 = vftable;
    return 1;
  }
  return 1;
}

// 00E99070  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf08  size=57  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[7] = 0xf;
    param_2[6] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    FUN_00c55960(param_1 + 8,0,0xffffffff);
  }
  return;
}

// 00E990B0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf08  size=66  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::vf08
          (int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = DynamicArray<int,sys::GlobalAllocator>::vftable;
    FUN_00e95d30(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0xc),
                 *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
  }
  return;
}

// 00E99100  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf08  size=69  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::vf08
          (int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vftable;
    FUN_00e95df0(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0xc),
                 *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 0xc);
  }
  return;
}

// 00E99150  FUN_00e99150  size=28  [callgraph]
void FUN_00e99150(void)

{
  FUN_00e98800();
  return;
}

// 00E99170  FUN_00e99170  size=84  [callgraph]
void FUN_00e99170(char *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016563c4,(int)*param_1);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E991D0  FUN_00e991d0  size=84  [callgraph]
void FUN_00e991d0(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016d1a14,*param_1);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E99230  FUN_00e99230  size=84  [callgraph]
void FUN_00e99230(short *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016563c4,(int)*param_1);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E99290  FUN_00e99290  size=84  [callgraph]
void FUN_00e99290(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016d1a14,*param_1);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E992F0  FUN_00e992f0  size=83  [callgraph]
void FUN_00e992f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016563c4,*param_1);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E99350  FUN_00e99350  size=83  [callgraph]
void FUN_00e99350(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016d1a14,*param_1);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E993B0  FUN_00e993b0  size=87  [callgraph]
void FUN_00e993b0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016d1a1c,*param_1,param_1[1]);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E99410  FUN_00e99410  size=87  [callgraph]
void FUN_00e99410(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,"0x%llx",*param_1,param_1[1]);
  FUN_00e98800(uVar1);
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E99470  FUN_00e99470  size=98  [callgraph]
void FUN_00e99470(float *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016cc3e4,(double)*param_1);
  FUN_00ea1e90(uVar1);
  FUN_00e98800();
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E994E0  FUN_00e994e0  size=98  [callgraph]
void FUN_00e994e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_404;
  uVar1 = FUN_00959930(local_404,&DAT_016cc3e4,*param_1);
  FUN_00ea1e90(uVar1);
  FUN_00e98800();
  __security_check_cookie(local_4 ^ (uint)local_404);
  return;
}

// 00E99550  FUN_00e99550  size=153  [callgraph]
bool __thiscall FUN_00e99550(int param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_9;
  undefined1 auStack_8 [4];
  char cStack_4;
  
  piVar1 = *(int **)(param_1 + 8);
  if (((piVar1[1] == 0) || (piVar1[2] == 0)) || (local_9 = 0x20, *(char *)(param_1 + 0xc) != '\0'))
  goto LAB_00e995a2;
  if (piVar1 == (int *)0x0) {
LAB_00e99589:
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar2 = piVar1[2];
    iVar4 = (**(code **)(*piVar1 + 4))();
    if (iVar4 == iVar2) goto LAB_00e99589;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    (**(code **)(**(int **)(param_1 + 8) + 8))(&local_9);
  }
LAB_00e995a2:
  pcVar3 = param_2;
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  FUN_00e97c00(auStack_8,param_2,pcVar5,*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),
               0x22);
  return cStack_4 == '\0';
}

// 00E995F0  FUN_00e995f0  size=41  [callgraph]
undefined4 FUN_00e995f0(undefined1 *param_1)

{
  char cVar1;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E99620  FUN_00e99620  size=41  [callgraph]
undefined4 FUN_00e99620(undefined1 *param_1)

{
  char cVar1;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E99650  FUN_00e99650  size=43  [callgraph]
undefined4 FUN_00e99650(undefined2 *param_1)

{
  char cVar1;
  undefined2 local_8 [4];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E99680  FUN_00e99680  size=43  [callgraph]
undefined4 FUN_00e99680(undefined2 *param_1)

{
  char cVar1;
  undefined2 local_8 [4];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E996B0  FUN_00e996b0  size=41  [callgraph]
undefined4 FUN_00e996b0(undefined4 *param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E996E0  FUN_00e996e0  size=41  [callgraph]
undefined4 FUN_00e996e0(undefined4 *param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E99710  thunk_FUN_00e98bb0  size=5  [callgraph]
void thunk_FUN_00e98bb0(void)

{
  FUN_00e98bb0();
  return;
}

// 00E99720  thunk_FUN_00e98c40  size=5  [callgraph]
void thunk_FUN_00e98c40(void)

{
  FUN_00e98c40();
  return;
}

// 00E99730  thunk_FUN_00e98cd0  size=5  [callgraph]
void thunk_FUN_00e98cd0(void)

{
  FUN_00e98cd0();
  return;
}

// 00E99A90  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>  size=99  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::
SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>
          (undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if ((_DAT_01b35c04 & 1) == 0) {
    _DAT_01b35c04 = _DAT_01b35c04 | 1;
    DAT_01b35c00 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01b35c00;
  *param_1 = vftable;
  iVar1 = *param_2;
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  return param_1;
}

// 00E99B00  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf04  size=4  [class]
int __fastcall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf04
          (int param_1)

{
  return param_1 + 8;
}

// 00E99B10  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf0C  size=6  [class]
undefined4
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf0C(void)

{
  return 0xc;
}

// 00E99B50  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf14  size=49  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf14
          (int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00e97640(param_2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
    return;
  }
  FUN_00e97640(param_2,&DAT_016416fa);
  return;
}

// 00E99B90  lib::sany_detail::SerializableAnyImpl::SerializableAnyImpl_2  size=42  [class]
void __fastcall lib::sany_detail::SerializableAnyImpl::SerializableAnyImpl_2(undefined4 *param_1)

{
  *param_1 = SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vftable;
  if (param_1[2] != 0) {
    FUN_008d98a0(param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E99BC0  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf00  size=62  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[2] != 0) {
    FUN_008d98a0(param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E99CA0  FUN_00e99ca0  size=66  [callgraph]
uint FUN_00e99ca0(undefined1 *param_1)

{
  uint uVar1;
  int local_8;
  int local_4;
  
  uVar1 = FUN_00e98bb0(&local_8);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  if (local_8 != 0 || local_4 != 0) {
    *param_1 = 1;
    return 1;
  }
  *param_1 = 0;
  return 1;
}

// 00E99CF0  FUN_00e99cf0  size=41  [callgraph]
undefined4 FUN_00e99cf0(float *param_1)

{
  char cVar1;
  double local_8;
  
  cVar1 = FUN_00e98cd0(&local_8);
  if (cVar1 != '\0') {
    *param_1 = (float)local_8;
    return 1;
  }
  return 0;
}

// 00E99E20  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf08  size=83  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf08
          (int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    iVar1 = *(int *)(param_1 + 8);
    param_2[2] = iVar1;
    if (iVar1 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e99e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
        return;
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x00e99e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
      return;
    }
  }
  return;
}

// 00E99E80  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf10(int param_1,undefined4 param_2)

{
  DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::
  DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>
            (param_2,param_1 + 8);
  return;
}

// 00E99EA0  lib::sany_detail::SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>::vf18  size=39  [class]
undefined4
lib::sany_detail::
SerializableAnyImplT<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
::vf18(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00e97ef0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return 1;
}

// 00E9A4E0  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf10
          (int param_1,undefined4 param_2)

{
  DynamicArray<char,sys::StringSystem::Allocator>::DynamicArray<char,sys::StringSystem::Allocator>
            (param_2,param_1 + 8);
  return;
}

// 00E9A500  lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf18  size=83  [class]
undefined4 __thiscall
lib::sany_detail::SerializableAnyImplT<lib::HashedString<sys::StringSystem::Allocator>_>::vf18
          (int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar3 = FUN_00ea1210(param_2,(int)pcVar4 - (int)(param_2 + 1));
    uVar3 = FUN_008d93a0(uVar3,param_2,(int)pcVar4 - (int)(param_2 + 1));
  }
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar3;
  if (iVar2 != 0) {
    FUN_008d98a0(iVar2);
  }
  return 1;
}

// 00E9B290  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf04  size=4  [class]
int __fastcall
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E9B2A0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf0C  size=6  [class]
undefined4
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf0C(void)

{
  return 0x1c;
}

// 00E9B360  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf10  size=20  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf10(int param_1,undefined4 param_2)

{
  FUN_00e9a600(param_2,param_1 + 8);
  return;
}

// 00E9B380  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf14  size=89  [class]
uint __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_2;
  local_c = 0;
  local_10 = OutputTextArchive<lib::Array<char>,32>::vftable;
  local_8 = param_2;
  local_4 = 0;
  uVar2 = FUN_00e9a600(&local_10,param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E9B3E0  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf18  size=84  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf18(int param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  undefined1 local_4;
  
  local_14 = 0;
  local_18 = InputTextArchive<char_const*,32>::vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    pcVar1 = local_c + 1;
  } while (*local_c != '\0');
  local_8 = param_2;
  local_4 = 0;
  FUN_00e9a600(&local_18,param_1 + 8);
  return;
}

// 00E9B540  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf00  size=102  [class]
undefined4 * __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[2] = DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::
               vftable;
  FUN_00e9a230();
  if (param_1[3] != 0) {
    FUN_00dd48d0(param_1[3],0);
    param_1[3] = 0;
    param_1[5] = 0;
  }
  param_1[2] = Array<lib::HashedString<sys::StringSystem::Allocator>_>::vftable;
  FUN_00e9a230();
  param_1[3] = 0;
  param_1[5] = 0;
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E9B810  lib::sany_detail::SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>::vf08  size=66  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>
                 ::vftable;
    FUN_00e9aa20(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0xc),
                 *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
  }
  return;
}

// 00E9B9F0  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf04  size=4  [class]
int __fastcall
lib::sany_detail::
SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
::vf04(int param_1)

{
  return param_1 + 8;
}

// 00E9BA00  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf0C  size=6  [class]
undefined4
lib::sany_detail::
SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
::vf0C(void)

{
  return 0x10;
}

// 00E9BA10  lib::sany_detail::SerializableAnyImpl::SerializableAnyImpl  size=53  [class]
void __fastcall lib::sany_detail::SerializableAnyImpl::SerializableAnyImpl(undefined4 *param_1)

{
  *param_1 = SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
             ::vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(0);
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E9BA50  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf00  size=73  [class]
undefined4 * __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(0);
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
  }
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E9BDF0  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf08  size=22  [class]
void lib::sany_detail::
     SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
     ::vf08(int param_1)

{
  if (param_1 != 0) {
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
    ::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_3
              ();
    return;
  }
  return;
}

// 00E9BF60  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf10  size=44  [class]
void lib::sany_detail::
     SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
     ::vf10(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)*param_1)();
  if (cVar1 != '\0') {
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
    ::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_2
              (param_1);
    return;
  }
  FUN_00e9bc30(param_1);
  return;
}

// 00E9BF90  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf14  size=20  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
::vf14(int param_1,undefined4 param_2)

{
  OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>
            (param_2,param_1 + 8);
  return;
}

// 00E9BFB0  lib::sany_detail::SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>::vf18  size=20  [class]
void __thiscall
lib::sany_detail::
SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
::vf18(int param_1,undefined4 param_2)

{
  InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_23(param_1 + 8,param_2);
  return;
}

// 00EA1210  FUN_00ea1210  size=20  [callgraph]
undefined4 FUN_00ea1210(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00ea10e0();
    return uVar1;
  }
  return 0;
}

// 00EA1870  FUN_00ea1870  size=253  [callgraph]
longlong FUN_00ea1870(char *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(param_2 + -1);
  uVar5 = 0;
  lVar1 = 0;
  lVar2 = 0;
  lVar9 = 0;
  uVar7 = 1;
  if (pcVar4 < param_1) {
    return 0;
  }
  lVar8 = 0;
  lVar3 = 0;
  if (1 < (int)(pcVar4 + (1 - (int)param_1))) {
    do {
      lVar8 = __allmul(*pcVar4 + -0x30,*pcVar4 + -0x30 >> 0x1f,uVar7,uVar5);
      lVar1 = lVar8 + lVar1;
      uVar6 = (uVar5 + (uVar5 << 2 | uVar7 >> 0x1e) + (uint)CARRY4(uVar7,uVar7 * 4)) * 2 |
              uVar7 * 5 >> 0x1f;
      uVar5 = uVar7 * 10;
      lVar8 = __allmul(pcVar4[-1] + -0x30,pcVar4[-1] + -0x30 >> 0x1f,uVar5,uVar6);
      lVar2 = lVar8 + lVar2;
      uVar5 = ((uVar6 << 2 | uVar5 >> 0x1e) + uVar6 + (uint)CARRY4(uVar7 * 0x28,uVar5)) * 2 |
              uVar7 * 0x32 >> 0x1f;
      pcVar4 = pcVar4 + -2;
      uVar7 = uVar7 * 100;
      lVar8 = lVar1;
      lVar3 = lVar2;
    } while ((int)(param_1 + 1) <= (int)pcVar4);
  }
  if (param_1 <= pcVar4) {
    lVar9 = __allmul(*pcVar4 + -0x30,*pcVar4 + -0x30 >> 0x1f,uVar7,uVar5);
  }
  return lVar9 + lVar3 + lVar8;
}

// 00EA1970  FUN_00ea1970  size=69  [callgraph]
int __thiscall FUN_00ea1970(byte *param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if (in_EAX != 0) {
    param_2 = param_2 - (int)param_1;
    do {
      in_EAX = in_EAX + -1;
      uVar3 = (uint)*param_1;
      if ((byte)(*param_1 + 0xbf) < 0x1a) {
        uVar3 = uVar3 + 0x20;
      }
      uVar2 = (uint)param_1[param_2];
      if ((byte)(param_1[param_2] + 0xbf) < 0x1a) {
        uVar2 = uVar2 + 0x20;
      }
      param_1 = param_1 + 1;
      iVar1 = (uVar2 & 0xff) - (uVar3 & 0xff);
    } while ((iVar1 == 0) && (in_EAX != 0));
  }
  return iVar1;
}

// 00EA1A60  FUN_00ea1a60  size=62  [callgraph]
undefined4 __thiscall FUN_00ea1a60(int *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 3 >> 2;
  if (uVar1 <= (uint)(param_1[1] - *param_1)) {
    FID_conflict__memcpy((void *)(param_1[2] + *param_1 * 4),param_2,param_3);
    *param_1 = *param_1 + uVar1;
    return 1;
  }
  return 0;
}

// 00EA1AA0  FUN_00ea1aa0  size=172  [callgraph]
uint __thiscall
FUN_00ea1aa0(undefined8 *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint in_EAX;
  void *_Dst;
  
  if ((*(int *)(param_1 + 2) != 0) || (*param_2 == 0)) {
    return in_EAX & 0xffffff00;
  }
  *param_1 = 0;
  *(int *)((int)param_1 + 0xc) = param_5 + param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((param_6 != (int *)0x0) && (*param_6 != 0)) {
    _Dst = (void *)(param_5 + param_4 + *param_6 * -4);
    *(void **)((int)param_1 + 0xc) = _Dst;
    FID_conflict__memcpy(_Dst,(void *)param_6[2],*param_6 * 4);
  }
  if (param_3 != 0) {
    *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + -4;
    **(undefined4 **)((int)param_1 + 0xc) = &DAT_01ddaa78;
    *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + -4;
    puVar1 = *(undefined4 **)((int)param_1 + 0xc);
    *puVar1 = *(undefined4 *)(param_1 + 3);
    *(int *)(param_1 + 1) = param_3;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)((int)param_1 + 0xc);
    return CONCAT31((int3)((uint)puVar1 >> 8),1);
  }
  iVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar2 + 0x18;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((int)param_1 + 0xc);
  return CONCAT31((int3)((uint)(iVar2 + 0x18) >> 8),1);
}

// 00EA1B50  FUN_00ea1b50  size=41  [callgraph]
int FUN_00ea1b50(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 1;
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      if (*piVar1 == param_2) {
        return piVar1[1];
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *param_1);
  }
  return *piVar1;
}

// 00EA1CD0  FUN_00ea1cd0  size=253  [callgraph]
longlong FUN_00ea1cd0(char *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(param_2 + -1);
  uVar5 = 0;
  lVar1 = 0;
  lVar2 = 0;
  lVar9 = 0;
  uVar7 = 1;
  if (pcVar4 < param_1) {
    return 0;
  }
  lVar8 = 0;
  lVar3 = 0;
  if (1 < (int)(pcVar4 + (1 - (int)param_1))) {
    do {
      lVar8 = __allmul(*pcVar4 + -0x30,*pcVar4 + -0x30 >> 0x1f,uVar7,uVar5);
      lVar1 = lVar8 + lVar1;
      uVar6 = (uVar5 + (uVar5 << 2 | uVar7 >> 0x1e) + (uint)CARRY4(uVar7,uVar7 * 4)) * 2 |
              uVar7 * 5 >> 0x1f;
      uVar5 = uVar7 * 10;
      lVar8 = __allmul(pcVar4[-1] + -0x30,pcVar4[-1] + -0x30 >> 0x1f,uVar5,uVar6);
      lVar2 = lVar8 + lVar2;
      uVar5 = ((uVar6 << 2 | uVar5 >> 0x1e) + uVar6 + (uint)CARRY4(uVar7 * 0x28,uVar5)) * 2 |
              uVar7 * 0x32 >> 0x1f;
      pcVar4 = pcVar4 + -2;
      uVar7 = uVar7 * 100;
      lVar8 = lVar1;
      lVar3 = lVar2;
    } while ((int)(param_1 + 1) <= (int)pcVar4);
  }
  if (param_1 <= pcVar4) {
    lVar9 = __allmul(*pcVar4 + -0x30,*pcVar4 + -0x30 >> 0x1f,uVar7,uVar5);
  }
  return lVar9 + lVar3 + lVar8;
}

// 00EA1DD0  FUN_00ea1dd0  size=117  [callgraph]
longlong FUN_00ea1dd0(char *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar4 = 0;
  lVar2 = 0;
  uVar6 = 1;
  for (pcVar5 = (char *)(param_2 + -1); param_1 <= pcVar5; pcVar5 = pcVar5 + -1) {
    cVar1 = *pcVar5;
    iVar3 = 0;
    if (cVar1 < ':') {
      iVar3 = cVar1 + -0x30;
    }
    else if (cVar1 < 'G') {
      iVar3 = cVar1 + -0x37;
    }
    else if (cVar1 < 'g') {
      iVar3 = cVar1 + -0x57;
    }
    lVar7 = __allmul(iVar3,iVar3 >> 0x1f,uVar6,uVar4);
    lVar2 = lVar7 + lVar2;
    uVar4 = uVar4 << 4 | uVar6 >> 0x1c;
    uVar6 = uVar6 << 4;
  }
  return lVar2;
}

// 00EA1E90  FUN_00ea1e90  size=79  [callgraph]
void FUN_00ea1e90(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar1 = (char *)FUN_00fdc7b0(param_1,0x2e);
  for (; (pcVar1 < pcVar2 && ((*pcVar2 == '\0' || (*pcVar2 == '0')))); pcVar2 = pcVar2 + -1) {
  }
  if ((*pcVar2 != '.') && (*pcVar2 != '\0')) {
    pcVar2 = pcVar2 + 1;
  }
  if (param_1 < pcVar2) {
    *pcVar2 = '\0';
  }
  return;
}

// 00EA1FE0  FUN_00ea1fe0  size=3242  [callgraph]
float __fastcall FUN_00ea1fe0(double *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  void *pvVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *puVar8;
  double *pdVar9;
  char *pcVar10;
  short *psVar11;
  float *pfVar12;
  code *pcVar13;
  undefined4 uVar14;
  double *pdVar15;
  undefined4 *puVar16;
  float fVar17;
  int iVar18;
  byte bVar19;
  char cVar20;
  ushort uVar21;
  short sVar22;
  undefined1 *puVar23;
  bool bVar24;
  
  if (((*(float *)(param_1 + 1) == 0.0) || (*(float *)(param_1 + 2) == 4.2039e-45)) ||
     ((*(float *)(param_1 + 2) == 2.8026e-45 &&
      (*(float *)((int)param_1 + 0x14) = (float)((int)*(float *)((int)param_1 + 0x14) - 1),
      0 < (int)*(float *)((int)param_1 + 0x14))))) {
    return 1.4013e-45;
  }
  *(float *)(param_1 + 2) = 1.4013e-45;
  uVar14 = DAT_01dda954;
  fVar17 = *(float *)(param_1 + 2);
  DAT_01dda954 = param_1;
  do {
    if (fVar17 != 1.4013e-45) {
      if (*(float *)(param_1 + 2) == 0.0) {
        *(float *)(param_1 + 2) = 0.0;
        *(float *)((int)param_1 + 0x14) = 0.0;
        *(float *)(param_1 + 1) = 0.0;
      }
      DAT_01dda954 = (double *)uVar14;
      return *(float *)param_1;
    }
    puVar23 = *(undefined1 **)(param_1 + 1);
    dVar2 = 0.0;
    uVar3 = *puVar23;
    pdVar15 = (double *)(puVar23 + 1);
    *(double **)(param_1 + 1) = pdVar15;
    switch(uVar3) {
    case 0:
      *(float *)(param_1 + 2) = 0.0;
      break;
    case 1:
      bVar19 = *(byte *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      fVar17 = (float)(uint)bVar19;
      goto LAB_00ea215c;
    case 2:
      uVar21 = *(ushort *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 3;
      *(uint *)param_1 = (uint)uVar21;
      break;
    case 3:
    case 7:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(float *)param_1 = fVar17;
      break;
    case 4:
      dVar2 = *pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 9;
      *param_1 = dVar2;
      break;
    case 5:
      bVar19 = *(byte *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *(uint *)param_1 = -(uint)bVar19;
      break;
    case 6:
      uVar21 = *(ushort *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 3;
      fVar17 = (float)-(uint)uVar21;
      goto LAB_00ea215c;
    case 8:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(int *)param_1 = (int)*(float *)(param_1 + 3) + (int)fVar17;
      break;
    case 9:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      fVar17 = (float)((int)*(float *)(param_1 + 3) + (int)cVar20);
      goto LAB_00ea215c;
    case 10:
      pbVar7 = *(byte **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(uint *)param_1 = (uint)*pbVar7;
      break;
    case 0xb:
      puVar8 = *(ushort **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(uint *)param_1 = (uint)*puVar8;
      break;
    case 0xc:
      pfVar12 = *(float **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      fVar17 = *pfVar12;
      goto LAB_00ea215c;
    case 0xd:
      pdVar15 = *(double **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *param_1 = *pdVar15;
      break;
    case 0xe:
      pcVar10 = *(char **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(int *)param_1 = (int)*pcVar10;
      break;
    case 0xf:
      psVar11 = *(short **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(int *)param_1 = (int)*psVar11;
      break;
    case 0x10:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(uint *)param_1 = (uint)*(byte *)((int)*(float *)(param_1 + 3) + (int)fVar17);
      break;
    case 0x11:
      fVar17 = *(float *)pdVar15;
      puVar23 = puVar23 + 5;
      goto LAB_00ea2152;
    case 0x12:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      fVar17 = *(float *)((int)fVar17 + (int)*(float *)(param_1 + 3));
      goto LAB_00ea215c;
    case 0x13:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *param_1 = *(double *)((int)fVar17 + (int)*(float *)(param_1 + 3));
      break;
    case 0x14:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *(int *)param_1 = (int)*(char *)((int)*(float *)(param_1 + 3) + (int)fVar17);
      break;
    case 0x15:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      fVar17 = (float)(int)*(short *)((int)*(float *)(param_1 + 3) + (int)fVar17);
      goto LAB_00ea215c;
    case 0x16:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      fVar17 = (float)(uint)*(byte *)((int)*(float *)(param_1 + 3) + (int)cVar20);
      goto LAB_00ea215c;
    case 0x17:
      fVar17 = (float)(int)*(char *)pdVar15;
      puVar23 = puVar23 + 2;
LAB_00ea2152:
      *(undefined1 **)(param_1 + 1) = puVar23;
      fVar17 = (float)(uint)*(ushort *)((int)*(float *)(param_1 + 3) + (int)fVar17);
      goto LAB_00ea215c;
    case 0x18:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      fVar17 = *(float *)((int)cVar20 + (int)*(float *)(param_1 + 3));
      goto LAB_00ea215c;
    case 0x19:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *param_1 = *(double *)((int)cVar20 + (int)*(float *)(param_1 + 3));
      break;
    case 0x1a:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *(int *)param_1 = (int)*(char *)((int)*(float *)(param_1 + 3) + (int)cVar20);
      break;
    case 0x1b:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      fVar17 = (float)(int)*(short *)((int)*(float *)(param_1 + 3) + (int)cVar20);
      goto LAB_00ea215c;
    case 0x1c:
      *(uint *)param_1 = (uint)**(byte **)param_1;
      break;
    case 0x1d:
      *(uint *)param_1 = (uint)**(ushort **)param_1;
      break;
    case 0x1e:
      fVar17 = **(float **)param_1;
      goto LAB_00ea215c;
    case 0x1f:
      *param_1 = **(double **)param_1;
      break;
    case 0x20:
      fVar17 = (float)(int)**(char **)param_1;
      goto LAB_00ea215c;
    case 0x21:
      *(int *)param_1 = (int)**(short **)param_1;
      break;
    case 0x22:
      puVar23 = (undefined1 *)**(undefined4 **)((int)param_1 + 0xc);
      *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
      *puVar23 = *(undefined1 *)param_1;
      break;
    case 0x23:
      puVar4 = (undefined2 *)**(undefined4 **)((int)param_1 + 0xc);
      *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
      *puVar4 = *(undefined2 *)param_1;
      break;
    case 0x24:
      pfVar12 = (float *)**(undefined4 **)((int)param_1 + 0xc);
      *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
      *pfVar12 = *(float *)param_1;
      break;
    case 0x25:
      pdVar15 = (double *)**(undefined4 **)((int)param_1 + 0xc);
      *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
      *pdVar15 = *param_1;
      break;
    case 0x26:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      pvVar5 = (void *)**(undefined4 **)((int)param_1 + 0xc);
      *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
      FID_conflict__memcpy(pvVar5,*(void **)param_1,(size_t)fVar17);
      break;
    case 0x27:
      bVar19 = *(byte *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      pvVar5 = (void *)**(undefined4 **)((int)param_1 + 0xc);
      *(undefined4 **)((int)param_1 + 0xc) = *(undefined4 **)((int)param_1 + 0xc) + 1;
      FID_conflict__memcpy(pvVar5,*(void **)param_1,(uint)bVar19);
      break;
    case 0x28:
      **(undefined1 **)param_1 = 0;
      break;
    case 0x29:
      **(undefined2 **)param_1 = 0;
      break;
    case 0x2a:
      **(undefined4 **)param_1 = 0;
      break;
    case 0x2b:
      **(undefined8 **)param_1 = 0;
      break;
    case 0x2c:
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      _memset(*(void **)param_1,0,(size_t)fVar17);
      break;
    case 0x2d:
      bVar19 = *(byte *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      _memset(*(void **)param_1,0,(uint)bVar19);
      break;
    case 0x2e:
      *(float *)param_1 = (float)(int)*(float *)param_1;
      break;
    case 0x2f:
      *param_1 = (double)(int)*(float *)param_1;
      break;
    case 0x30:
      fVar17 = (float)(int)*(float *)param_1;
      if ((int)*(float *)param_1 < 0) {
        fVar17 = fVar17 + 4.2949673e+09;
      }
      *(float *)param_1 = fVar17;
      break;
    case 0x31:
      dVar2 = (double)(int)*(float *)param_1;
      if ((int)*(float *)param_1 < 0) {
        dVar2 = dVar2 + 4294967296.0;
      }
      *param_1 = dVar2;
      break;
    case 0x32:
      fVar17 = (float)FUN_00fdbc60();
      *(float *)param_1 = fVar17;
      break;
    case 0x33:
      *param_1 = (double)*(float *)param_1;
      break;
    case 0x34:
      fVar17 = (float)FUN_00fdbc60();
      *(float *)param_1 = fVar17;
      break;
    case 0x35:
      *(float *)param_1 = (float)*param_1;
      break;
    case 0x36:
      fVar17 = (float)(uint)(*(float *)param_1 != 0.0);
      goto LAB_00ea215c;
    case 0x37:
      goto switchD_00ea2050_caseD_37;
    case 0x38:
      *(int *)param_1 = (int)*(float *)param_1 + **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      break;
    case 0x39:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(float *)param_1 = fVar17 + *(float *)param_1;
      break;
    case 0x3a:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      *param_1 = dVar2 + *param_1;
      break;
    case 0x3b:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(int *)param_1 = iVar18 - (int)*(float *)param_1;
      break;
    case 0x3c:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(float *)param_1 = fVar17 - *(float *)param_1;
      break;
    case 0x3d:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      *param_1 = dVar2 - *param_1;
      break;
    case 0x3e:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(int *)param_1 = (int)*(float *)param_1 * iVar18;
      break;
    case 0x3f:
      fVar17 = (float)((int)*(float *)param_1 * **(int **)((int)param_1 + 0xc));
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      goto LAB_00ea215c;
    case 0x40:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(float *)param_1 = fVar17 * *(float *)param_1;
      break;
    case 0x41:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      *param_1 = dVar2 * *param_1;
      break;
    case 0x42:
      uVar6 = **(uint **)((int)param_1 + 0xc);
      *(uint **)((int)param_1 + 0xc) = *(uint **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = uVar6 / (uint)*(float *)param_1;
      break;
    case 0x43:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(int *)param_1 = iVar18 / (int)*(float *)param_1;
      break;
    case 0x44:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(float *)param_1 = fVar17 / *(float *)param_1;
      break;
    case 0x45:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      *param_1 = dVar2 / *param_1;
      break;
    case 0x46:
      fVar17 = (float)(**(uint **)((int)param_1 + 0xc) % (uint)*(float *)param_1);
      *(uint **)((int)param_1 + 0xc) = *(uint **)((int)param_1 + 0xc) + 1;
      goto LAB_00ea215c;
    case 0x47:
      fVar17 = (float)(**(int **)((int)param_1 + 0xc) % (int)*(float *)param_1);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      goto LAB_00ea215c;
    case 0x48:
      uVar6 = **(uint **)((int)param_1 + 0xc);
      *(uint **)((int)param_1 + 0xc) = *(uint **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = uVar6 >> (SUB41(*(float *)param_1,0) & 0x1f);
      break;
    case 0x49:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(int *)param_1 = iVar18 >> (SUB41(*(float *)param_1,0) & 0x1f);
      break;
    case 0x4a:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(int *)param_1 = iVar18 << (SUB41(*(float *)param_1,0) & 0x1f);
      break;
    case 0x4b:
      *(uint *)param_1 = (uint)*(float *)param_1 & **(uint **)((int)param_1 + 0xc);
      *(uint **)((int)param_1 + 0xc) = *(uint **)((int)param_1 + 0xc) + 1;
      break;
    case 0x4c:
      *(uint *)param_1 = (uint)*(float *)param_1 ^ **(uint **)((int)param_1 + 0xc);
      *(uint **)((int)param_1 + 0xc) = *(uint **)((int)param_1 + 0xc) + 1;
      break;
    case 0x4d:
      *(uint *)param_1 = (uint)*(float *)param_1 | **(uint **)((int)param_1 + 0xc);
      *(uint **)((int)param_1 + 0xc) = *(uint **)((int)param_1 + 0xc) + 1;
      break;
    case 0x4e:
      *(int *)param_1 = -(int)*(float *)param_1;
      break;
    case 0x4f:
      *(float *)param_1 = -*(float *)param_1;
      break;
    case 0x50:
      *param_1 = -*param_1;
      break;
    case 0x51:
      *(uint *)param_1 = ~(uint)*(float *)param_1;
      break;
    case 0x52:
      bVar19 = *(byte *)pdVar15;
      pbVar7 = *(byte **)param_1;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *(uint *)param_1 = (uint)(*pbVar7 & bVar19);
      *pbVar7 = *pbVar7 | bVar19;
      break;
    case 0x53:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      bVar19 = cVar20 + **(byte **)param_1;
      **(byte **)param_1 = bVar19;
      *(uint *)param_1 = (uint)bVar19;
      break;
    case 0x54:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      uVar21 = (short)cVar20 + **(ushort **)param_1;
      **(ushort **)param_1 = uVar21;
      *(uint *)param_1 = (uint)uVar21;
      break;
    case 0x55:
      cVar20 = *(char *)pdVar15;
      pfVar12 = *(float **)param_1;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *pfVar12 = (float)((int)*pfVar12 + (int)cVar20);
      *(float *)param_1 = *pfVar12;
      break;
    case 0x56:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      fVar17 = (float)(int)cVar20 + **(float **)param_1;
      **(float **)param_1 = fVar17;
      *(float *)param_1 = fVar17;
      break;
    case 0x57:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      dVar2 = (double)(int)cVar20 + **(double **)param_1;
      **(double **)param_1 = dVar2;
      *param_1 = dVar2;
      break;
    case 0x58:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      cVar20 = cVar20 + **(char **)param_1;
      **(char **)param_1 = cVar20;
      *(int *)param_1 = (int)cVar20;
      break;
    case 0x59:
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      sVar22 = (short)cVar20 + **(short **)param_1;
      **(short **)param_1 = sVar22;
      *(int *)param_1 = (int)sVar22;
      break;
    case 0x5a:
      fVar17 = *(float *)pdVar15;
      pfVar12 = *(float **)param_1;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *pfVar12 = (float)((int)*pfVar12 + (int)fVar17);
      *(float *)param_1 = *pfVar12;
      break;
    case 0x5b:
      pbVar7 = *(byte **)param_1;
      *(uint *)param_1 = (uint)*pbVar7;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *pbVar7 = *pbVar7 + cVar20;
      break;
    case 0x5c:
      puVar8 = *(ushort **)param_1;
      *(uint *)param_1 = (uint)*puVar8;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *puVar8 = *puVar8 + (short)cVar20;
      break;
    case 0x5d:
      pfVar12 = *(float **)param_1;
      *(float *)param_1 = *pfVar12;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *pfVar12 = (float)((int)*pfVar12 + (int)cVar20);
      break;
    case 0x5e:
      pfVar12 = *(float **)param_1;
      *(float *)param_1 = *pfVar12;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *pfVar12 = (float)(int)cVar20 + *pfVar12;
      break;
    case 0x5f:
      pdVar9 = *(double **)param_1;
      *param_1 = *pdVar9;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *pdVar9 = (double)(int)cVar20 + *pdVar9;
      break;
    case 0x60:
      pcVar10 = *(char **)param_1;
      *(int *)param_1 = (int)*pcVar10;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *pcVar10 = *pcVar10 + cVar20;
      break;
    case 0x61:
      psVar11 = *(short **)param_1;
      *(int *)param_1 = (int)*psVar11;
      cVar20 = *(char *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      *psVar11 = *psVar11 + (short)cVar20;
      break;
    case 0x62:
      pfVar12 = *(float **)param_1;
      *(float *)param_1 = *pfVar12;
      fVar17 = *(float *)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      *pfVar12 = (float)((int)*pfVar12 + (int)fVar17);
      break;
    case 99:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = (uint)(*(float *)param_1 == fVar17);
      break;
    case 100:
      pdVar15 = (double *)(*(float **)((int)param_1 + 0xc) + 1);
      dVar2 = (double)*(float *)param_1;
      dVar1 = (double)**(float **)((int)param_1 + 0xc);
      goto LAB_00ea2810;
    case 0x65:
      dVar2 = **(double **)((int)param_1 + 0xc);
      pdVar15 = *(double **)((int)param_1 + 0xc) + 1;
      dVar1 = *param_1;
LAB_00ea2810:
      bVar24 = dVar1 != dVar2;
      *(double **)((int)param_1 + 0xc) = pdVar15;
      goto LAB_00ea281a;
    case 0x66:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      fVar17 = (float)(uint)(*(float *)param_1 != fVar17);
      goto LAB_00ea215c;
    case 0x67:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      dVar2 = (double)*(float *)param_1;
      dVar1 = (double)fVar17;
      goto LAB_00ea2879;
    case 0x68:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      goto switchD_00ea2050_caseD_37;
    case 0x69:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = (uint)(iVar18 < (int)*(float *)param_1);
      break;
    case 0x6a:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      if (fVar17 < *(float *)param_1) {
        *(float *)param_1 = 1.4013e-45;
        break;
      }
      goto LAB_00ea240d;
    case 0x6b:
      bVar24 = *param_1 <= **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      goto LAB_00ea281a;
    case 0x6c:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      fVar17 = (float)(uint)(iVar18 <= (int)*(float *)param_1);
      goto LAB_00ea215c;
    case 0x6d:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      if (*(float *)param_1 < fVar17) goto LAB_00ea240d;
      *(float *)param_1 = 1.4013e-45;
      break;
    case 0x6e:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      bVar24 = dVar2 < *param_1 == (dVar2 == *param_1);
      goto LAB_00ea281a;
    case 0x6f:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = (uint)((uint)fVar17 < (uint)*(float *)param_1);
      break;
    case 0x70:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = (uint)((uint)fVar17 <= (uint)*(float *)param_1);
      break;
    case 0x71:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      fVar17 = (float)(uint)((int)*(float *)param_1 < iVar18);
      goto LAB_00ea215c;
    case 0x72:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      bVar24 = fVar17 <= *(float *)param_1;
      goto LAB_00ea281a;
    case 0x73:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      if (dVar2 <= *param_1) goto LAB_00ea240d;
      *(float *)param_1 = 1.4013e-45;
      break;
    case 0x74:
      iVar18 = **(int **)((int)param_1 + 0xc);
      *(int **)((int)param_1 + 0xc) = *(int **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = (uint)((int)*(float *)param_1 <= iVar18);
      break;
    case 0x75:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      bVar24 = *(float *)param_1 < fVar17 == (*(float *)param_1 == fVar17);
LAB_00ea281a:
      if (bVar24) {
LAB_00ea240d:
        *(float *)param_1 = 0.0;
      }
      else {
        *(float *)param_1 = 1.4013e-45;
      }
      break;
    case 0x76:
      dVar2 = **(double **)((int)param_1 + 0xc);
      *(double **)((int)param_1 + 0xc) = *(double **)((int)param_1 + 0xc) + 1;
      if (dVar2 < *param_1) goto LAB_00ea240d;
      *(float *)param_1 = 1.4013e-45;
      break;
    case 0x77:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      *(uint *)param_1 = (uint)((uint)*(float *)param_1 < (uint)fVar17);
      break;
    case 0x78:
      fVar17 = **(float **)((int)param_1 + 0xc);
      *(float **)((int)param_1 + 0xc) = *(float **)((int)param_1 + 0xc) + 1;
      fVar17 = (float)(uint)((uint)*(float *)param_1 <= (uint)fVar17);
LAB_00ea215c:
      *(float *)param_1 = fVar17;
      break;
    case 0x79:
      *(uint *)param_1 = (uint)(*(float *)param_1 == 0.0);
      break;
    case 0x7a:
      *(int *)(param_1 + 1) = (int)*(float *)pdVar15 + (int)pdVar15;
      break;
    case 0x7b:
      if (*(float *)param_1 == 0.0) {
        *(int *)(param_1 + 1) = (int)*(float *)pdVar15 + (int)pdVar15;
      }
      else {
LAB_00ea2a92:
        *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      }
      break;
    case 0x7c:
      if (*(float *)param_1 == 0.0) goto LAB_00ea2a92;
      *(int *)(param_1 + 1) = (int)*(float *)pdVar15 + (int)pdVar15;
      break;
    case 0x7d:
      *(int *)(param_1 + 1) = (int)*(char *)pdVar15 + (int)pdVar15;
      break;
    case 0x7e:
      if (*(float *)param_1 == 0.0) {
        *(int *)(param_1 + 1) = (int)*(char *)pdVar15 + (int)pdVar15;
      }
      else {
LAB_00ea2ace:
        *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      }
      break;
    case 0x7f:
      if (*(float *)param_1 == 0.0) goto LAB_00ea2ace;
      *(int *)(param_1 + 1) = (int)*(char *)pdVar15 + (int)pdVar15;
      break;
    case 0x80:
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) - 4);
      **(undefined4 **)((int)param_1 + 0xc) = puVar23 + 5;
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) - 4);
      **(float **)((int)param_1 + 0xc) = *(float *)(param_1 + 3);
      *(float *)(param_1 + 3) = *(float *)((int)param_1 + 0xc);
      *(float *)(param_1 + 1) = **(float **)(param_1 + 1);
      break;
    case 0x81:
      fVar17 = *(float *)((int)*(float *)((int)param_1 + 0xc) + (int)*(float *)pdVar15 * 4);
      puVar16 = (undefined4 *)((int)*(float *)((int)param_1 + 0xc) - 4);
      *(undefined4 **)((int)param_1 + 0xc) = puVar16;
      *(float *)param_1 = fVar17;
      *puVar16 = puVar23 + 5;
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) - 4);
      **(float **)((int)param_1 + 0xc) = *(float *)(param_1 + 3);
      *(float *)(param_1 + 3) = *(float *)((int)param_1 + 0xc);
      *(float *)(param_1 + 1) = *(float *)param_1;
      break;
    case 0x82:
      pfVar12 = *(float **)(param_1 + 3);
      *(float **)((int)param_1 + 0xc) = pfVar12;
      fVar17 = *pfVar12;
      *(float **)((int)param_1 + 0xc) = pfVar12 + 1;
      *(float *)(param_1 + 3) = fVar17;
      fVar17 = pfVar12[1];
      *(float **)((int)param_1 + 0xc) = pfVar12 + 2;
      *(float *)(param_1 + 1) = fVar17;
      break;
    case 0x83:
      pcVar13 = *(code **)pdVar15;
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      fVar17 = (float)(*pcVar13)(*(float *)((int)param_1 + 0xc));
      *(float *)param_1 = fVar17;
      break;
    case 0x84:
      *(float *)((int)param_1 + 0x14) = *(float *)param_1;
      if (*(float *)param_1 != 0.0) {
        *(float *)(param_1 + 2) = 2.8026e-45;
      }
      break;
    case 0x85:
      fVar17 = *(float *)pdVar15;
      puVar23 = puVar23 + 5;
      goto LAB_00ea2bab;
    case 0x86:
      puVar23 = puVar23 + 2;
      fVar17 = (float)(uint)*(byte *)pdVar15;
LAB_00ea2bab:
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) - (int)fVar17);
      *(undefined1 **)(param_1 + 1) = puVar23;
      *(float *)param_1 = fVar17;
      _memset(*(void **)((int)param_1 + 0xc),0,(size_t)fVar17);
      break;
    case 0x87:
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) - 4);
      **(float **)((int)param_1 + 0xc) = *(float *)param_1;
      break;
    case 0x88:
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) - 8);
      **(double **)((int)param_1 + 0xc) = *param_1;
      break;
    case 0x89:
      fVar17 = *(float *)pdVar15;
      puVar23 = puVar23 + 5;
      goto LAB_00ea2bf6;
    case 0x8a:
      puVar23 = puVar23 + 2;
      fVar17 = (float)(uint)*(byte *)pdVar15;
LAB_00ea2bf6:
      *(float *)((int)param_1 + 0xc) =
           (float)((int)*(float *)((int)param_1 + 0xc) + ((uint)fVar17 >> 2) * -4);
      *(undefined1 **)(param_1 + 1) = puVar23;
      if (((uint)fVar17 & 3) != 0) {
        *(uint *)((int)param_1 + 0xc) = (int)*(float *)((int)param_1 + 0xc) - 4;
      }
      FID_conflict__memcpy(*(void **)((int)param_1 + 0xc),*(void **)param_1,(size_t)fVar17);
      break;
    case 0x8b:
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) + 4);
      break;
    case 0x8c:
      *(float *)((int)param_1 + 0xc) = (float)((int)*(float *)((int)param_1 + 0xc) + 8);
      break;
    case 0x8d:
      *(float *)((int)param_1 + 0xc) =
           (float)((int)*(float *)((int)param_1 + 0xc) + (int)*(float *)pdVar15);
      *(undefined1 **)(param_1 + 1) = puVar23 + 5;
      break;
    case 0x8e:
      *(float *)((int)param_1 + 0xc) =
           (float)((int)*(float *)((int)param_1 + 0xc) + (uint)*(byte *)pdVar15);
      *(undefined1 **)(param_1 + 1) = puVar23 + 2;
      break;
    case 0x8f:
      iVar18 = FUN_00ea1b50(*(float *)pdVar15,*(float *)param_1);
      *(int *)(param_1 + 1) = iVar18 + (int)pdVar15;
    }
switchD_00ea2050_default:
    fVar17 = *(float *)(param_1 + 2);
  } while( true );
switchD_00ea2050_caseD_37:
  dVar1 = *param_1;
LAB_00ea2879:
  if (dVar1 != dVar2) {
    *(float *)param_1 = 1.4013e-45;
    goto switchD_00ea2050_default;
  }
  goto LAB_00ea240d;
}

// 00EA3000  FUN_00ea3000  size=182  [callgraph]
int __thiscall FUN_00ea3000(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *in_EAX;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  pcVar2 = (char *)*param_2;
  pcVar1 = (char *)*param_1;
  for (pcVar5 = pcVar1; pcVar5 != in_EAX; pcVar5 = pcVar5 + 1) {
    pcVar3 = "0123456789";
    do {
      if (*pcVar5 == *pcVar3) goto LAB_00ea3031;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != "");
  }
LAB_00ea3031:
  *param_1 = pcVar5;
  for (pcVar5 = pcVar2; pcVar5 != param_3; pcVar5 = pcVar5 + 1) {
    pcVar3 = "0123456789";
    do {
      if (*pcVar5 == *pcVar3) goto LAB_00ea3059;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != "");
  }
LAB_00ea3059:
  *param_2 = pcVar5;
  if (pcVar1 < (char *)*param_1) {
    if (pcVar5 <= pcVar2) {
      return 1;
    }
    uVar6 = (int)*param_1 - (int)pcVar1;
    iVar4 = FUN_00ea1970(pcVar1);
    if ((iVar4 == 0) && (uVar6 != (int)pcVar5 - (int)pcVar2)) {
      return (-(uint)(uVar6 < (uint)((int)pcVar5 - (int)pcVar2)) & 0xfffffffe) + 1;
    }
  }
  else {
    iVar4 = -(uint)(pcVar2 < pcVar5);
  }
  return iVar4;
}

// 00EA30C0  FUN_00ea30c0  size=68  [callgraph]
void __fastcall FUN_00ea30c0(int *param_1)

{
  if (*param_1 != 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(*param_1);
    }
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(param_1[2]);
    }
    param_1[2] = 0;
  }
  param_1[1] = 0;
  return;
}

// 00EA32D0  FUN_00ea32d0  size=242  [callgraph]
uint __thiscall FUN_00ea32d0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 < 4) {
    param_3 = 4;
  }
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0xffffffff) {
    uVar5 = iVar2 + 7 + param_3 & ~(param_3 - 1);
    uVar3 = (param_1[2] - uVar5) + iVar2;
    if ((0 < (int)uVar3) && (param_2 <= uVar3)) {
      puVar1 = (undefined4 *)(uVar5 - 8);
      *puVar1 = 0;
      *puVar1 = *param_1;
      *param_1 = puVar1;
      *(uint *)(uVar5 - 4) = param_2;
      return uVar5;
    }
  }
  else if (puVar6 != (uint *)0x0) {
    do {
      puVar4 = (uint *)(-(uint)(*puVar6 != 0xffffffff) & *puVar6);
      uVar3 = (int)puVar6 + param_3 + puVar6[1] + 0xf & ~(param_3 - 1);
      puVar7 = puVar4;
      if (puVar4 == (uint *)0x0) {
        puVar7 = (uint *)(param_1[2] + iVar2);
      }
      if ((0 < (int)((int)puVar7 - uVar3)) && (param_2 <= (int)puVar7 - uVar3)) {
        puVar7 = (uint *)(uVar3 - 8);
        *puVar7 = 0;
        if (*puVar6 != 0) {
          *puVar7 = *puVar6;
          *puVar6 = (uint)puVar7;
        }
        *(uint *)(uVar3 - 4) = param_2;
        return uVar3;
      }
      puVar6 = puVar4;
    } while (puVar4 != (uint *)0x0);
  }
  return 0;
}

// 00EA3680  FUN_00ea3680  size=69  [callgraph]
uint FUN_00ea3680(undefined8 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 < param_3) {
    uVar1 = FUN_00ea77b0(param_2,param_3,"0123456789abcdefABCDEF","");
    if (param_2 < uVar1) {
      uVar2 = FUN_00ea1dd0(param_2,uVar1);
      *param_1 = uVar2;
      return uVar1;
    }
  }
  return 0;
}

// 00EA36D0  FUN_00ea36d0  size=239  [callgraph]
char * FUN_00ea36d0(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '+') {
    param_2 = param_2 + 1;
    if (param_2 < param_3) {
      pcVar2 = (char *)FUN_00ea77b0(param_2,param_3,"0123456789abcdefABCDEF","abcdefABCDEF");
      if (param_2 < pcVar2) {
LAB_00ea37a7:
        uVar3 = FUN_00ea1cd0(param_2,pcVar2);
        *(undefined8 *)param_1 = uVar3;
        return pcVar2;
      }
    }
  }
  else if (cVar1 == '-') {
    param_2 = param_2 + 1;
    if (param_2 < param_3) {
      pcVar2 = (char *)FUN_00ea77b0(param_2,param_3,"0123456789abcdefABCDEF","abcdefABCDEF");
      if (param_2 < pcVar2) {
        uVar3 = FUN_00ea1cd0(param_2,pcVar2);
        *(undefined8 *)param_1 = uVar3;
        if (pcVar2 != (char *)0x0) {
          *param_1 = -(int)uVar3;
          param_1[1] = -(param_1[1] + (uint)((int)uVar3 != 0));
        }
        return pcVar2;
      }
    }
  }
  else {
    if ((cVar1 == '0') && (param_2[1] == 'x')) {
      pcVar2 = (char *)FUN_00ea3680(param_1,param_2 + 2,param_3);
      return pcVar2;
    }
    if (param_2 < param_3) {
      pcVar2 = (char *)FUN_00ea77b0(param_2,param_3,"0123456789abcdefABCDEF","abcdefABCDEF");
      if (param_2 < pcVar2) goto LAB_00ea37a7;
    }
  }
  return (char *)0x0;
}

// 00EA3850  FUN_00ea3850  size=97  [callgraph]
char * FUN_00ea3850(undefined4 *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if ((*param_2 == '0') && (param_2[1] == 'x')) {
    param_2 = param_2 + 2;
  }
  if (param_2 < param_3) {
    pcVar1 = (char *)FUN_00ea77b0(param_2,param_3,"0123456789abcdefABCDEF","");
    if (param_2 < pcVar1) {
      uVar2 = FUN_00ea1dd0(param_2,pcVar1);
      if (pcVar1 != (char *)0x0) {
        *param_1 = uVar2;
      }
      return pcVar1;
    }
  }
  return (char *)0x0;
}

// 00EA38F0  FUN_00ea38f0  size=60  [callgraph]
void FUN_00ea38f0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_8 [2];
  
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  iVar3 = FUN_00ea36d0(local_8,param_2,pcVar2);
  if (iVar3 != 0) {
    *param_1 = local_8[0];
  }
  return;
}

// 00EA39A0  FUN_00ea39a0  size=113  [callgraph]
char * FUN_00ea39a0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_2;
  do {
    pcVar1 = pcVar2;
    pcVar2 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  if ((*param_2 == '0') && (param_2[1] == 'x')) {
    param_2 = param_2 + 2;
  }
  if (param_2 < pcVar1) {
    pcVar2 = (char *)FUN_00ea77b0(param_2,pcVar1,"0123456789abcdefABCDEF","");
    if (param_2 < pcVar2) {
      uVar3 = FUN_00ea1dd0(param_2,pcVar2);
      if (pcVar2 != (char *)0x0) {
        *param_1 = uVar3;
      }
      return pcVar2;
    }
  }
  return (char *)0x0;
}

// 00EA3A20  FUN_00ea3a20  size=215  [callgraph]
void FUN_00ea3a20(double *param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  double dVar5;
  double *local_408;
  char local_404 [1024];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_408;
  local_408 = param_1;
  if (param_3 <= param_2) goto LAB_00ea3ade;
  cVar1 = *param_2;
  bVar2 = false;
  bVar3 = false;
  if ((cVar1 == '+') || (cVar1 == '-')) {
LAB_00ea3a6f:
    bVar2 = bVar3;
    pcVar4 = param_2 + 1;
  }
  else {
    pcVar4 = param_2;
    if (cVar1 == '.') {
      bVar3 = true;
      goto LAB_00ea3a6f;
    }
  }
  pcVar4 = (char *)FUN_00ea77b0(pcVar4,param_3,"0123456789abcdefABCDEF","abcdefABCDEF");
  if (((!bVar2) && (pcVar4 < param_3)) && (*pcVar4 == '.')) {
    pcVar4 = (char *)FUN_00ea77b0(pcVar4 + 1,param_3,"0123456789abcdefABCDEF","abcdefABCDEF");
  }
  if (param_2 < pcVar4) {
    FID_conflict__memcpy(local_404,param_2,(int)pcVar4 - (int)param_2);
    local_404[(int)pcVar4 - (int)param_2] = '\0';
    dVar5 = _atof(local_404);
    *local_408 = dVar5;
  }
LAB_00ea3ade:
  __security_check_cookie(local_4 ^ (uint)&local_408);
  return;
}

// 00EA3B60  FUN_00ea3b60  size=60  [callgraph]
void FUN_00ea3b60(float *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  double local_8;
  
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  iVar3 = FUN_00ea3a20(&local_8,param_2,pcVar2);
  if (iVar3 != 0) {
    *param_1 = (float)local_8;
  }
  return;
}

// 00EA3BA0  FUN_00ea3ba0  size=83  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00ea3ba0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_01ddaa7c;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (undefined4 *)0xffffffff;
    _atexit(FUN_015f1460);
    puVar1 = DAT_01ddaa7c;
  }
  for (; (puVar1 != (undefined4 *)0xffffffff && (puVar1 != (undefined4 *)0x0));
      puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[1] == param_1) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// 00EA3C00  FUN_00ea3c00  size=83  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00ea3c00(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_01ddaa7c;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (undefined4 *)0xffffffff;
    _atexit(FUN_015f1460);
    puVar1 = DAT_01ddaa7c;
  }
  for (; (puVar1 != (undefined4 *)0xffffffff && (puVar1 != (undefined4 *)0x0));
      puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[3] == param_1) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// 00EA3C60  FUN_00ea3c60  size=123  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00ea3c60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = 0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
  }
  if ((DAT_01ddaa7c != (int *)0xffffffff) && (piVar2 = DAT_01ddaa7c, DAT_01ddaa7c != (int *)0x0)) {
    do {
      local_8 = piVar2[2];
      local_4 = piVar2[1];
      (**(code **)(*param_1 + 8))(&local_8);
      piVar2 = (int *)*piVar2;
      iVar1 = iVar1 + 1;
      if (piVar2 == (int *)0xffffffff) {
        return iVar1;
      }
    } while (piVar2 != (int *)0x0);
    return iVar1;
  }
  return 0;
}

// 00EA3CE0  FUN_00ea3ce0  size=65  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea3ce0(int *param_1)

{
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
  }
  if (*param_1 == 0) {
    *param_1 = (int)DAT_01ddaa7c;
    DAT_01ddaa7c = param_1;
  }
  return;
}

// 00EA3D30  FUN_00ea3d30  size=92  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea3d30(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = -1;
    _atexit(FUN_015f1460);
  }
  if ((*param_1 != 0) && (piVar2 = &DAT_01ddaa7c, DAT_01ddaa7c != -1)) {
    while (piVar1 = (int *)*piVar2, piVar1 != param_1) {
      piVar2 = piVar1;
      if (*piVar1 == -1) {
        return;
      }
    }
    *piVar2 = *param_1;
    *param_1 = 0;
  }
  return;
}

// 00EA3F60  FUN_00ea3f60  size=122  [callgraph]
void __fastcall FUN_00ea3f60(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  if (*param_1 != 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(*param_1);
    }
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(param_1[2]);
    }
    param_1[2] = 0;
  }
  param_1[1] = 0;
  piVar1 = (int *)param_1[4];
  param_1[4] = 0;
  param_1[3] = 0;
  if (piVar1 != (int *)0x0) {
    LVar2 = InterlockedDecrement(piVar1 + 1);
    if (LVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar2 = InterlockedDecrement(piVar1 + 2);
      if (LVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ea3fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 8))();
        return;
      }
    }
  }
  return;
}

// 00EA3FE0  FUN_00ea3fe0  size=158  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00ea3fe0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 < 1) {
    return param_2;
  }
  do {
    iVar3 = *param_2;
    if ((_DAT_01ddaa88 & 1) == 0) {
      _DAT_01ddaa88 = _DAT_01ddaa88 | 1;
      DAT_01ddaa84 = (int *)0xffffffff;
      _atexit((_func_4879 *)&DAT_015f1470);
    }
    piVar2 = DAT_01ddaa84;
    if (DAT_01ddaa84 != (int *)0xffffffff) {
      while (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        if (iVar3 == iVar1) {
          if (iVar1 == piVar2[1]) {
            iVar3 = piVar2[2];
          }
          else {
LAB_00ea406f:
            iVar3 = *(int *)(piVar2[2] + (iVar3 - iVar1) * 4);
          }
          goto LAB_00ea4052;
        }
        if ((iVar1 <= iVar3) && (iVar3 < piVar2[1])) goto LAB_00ea406f;
        piVar2 = (int *)piVar2[3];
        if (piVar2 == (int *)0xffffffff) break;
      }
    }
    iVar3 = 0;
LAB_00ea4052:
    *(int *)(param_2[1] + param_3) = *(int *)(param_2[1] + param_3) + iVar3;
    param_2 = param_2 + 2;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return param_2;
    }
  } while( true );
}

// 00EA4080  FUN_00ea4080  size=8  [callgraph]
void __fastcall FUN_00ea4080(undefined4 param_1)

{
  FUN_00ea3d30(param_1);
  return;
}

// 00EA40B0  FUN_00ea40b0  size=24  [callgraph]
undefined4 FUN_00ea40b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ea3ba0(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

// 00EA4130  FUN_00ea4130  size=73  [callgraph]
undefined4 FUN_00ea4130(undefined4 param_1)

{
  int iVar1;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  iVar1 = FUN_00ea9130(local_10,param_1);
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = FUN_00ea90b0(local_8,param_1);
    if (*(int *)(iVar1 + 4) == 0) {
      return 0;
    }
  }
  return 1;
}

// 00EA4180  FUN_00ea4180  size=74  [callgraph]
int FUN_00ea4180(undefined4 param_1)

{
  undefined1 local_8 [4];
  int local_4;
  
  FUN_00ea90b0(local_8,param_1);
  if ((local_4 == 0) || (*(char *)(local_4 + 0x11) != '\0')) {
    FUN_00ea9130(local_8,param_1);
    if ((local_4 == 0) || (*(char *)(local_4 + 0x11) != '\0')) {
      local_4 = 0;
    }
  }
  return local_4;
}

// 00EA42B0  FUN_00ea42b0  size=204  [callgraph]
undefined4 __fastcall FUN_00ea42b0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint _Size;
  size_t _Size_00;
  
  iVar1 = param_1[1];
  _Size_00 = *(int *)(iVar1 + 0x10) + 0x18;
  if ((int *)param_1[3] == (int *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)(**(code **)(*(int *)param_1[3] + 4))(_Size_00);
  }
  *param_1 = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    FUN_00ea3f60();
    return 0;
  }
  FID_conflict__memcpy(pvVar3,(void *)param_1[1],_Size_00);
  iVar2 = *param_1;
  piVar4 = (int *)(*(int *)(iVar1 + 0x14) + _Size_00 + param_1[1]);
  piVar5 = piVar4 + 1;
  iVar7 = *piVar4;
  if (0 < iVar7) {
    do {
      piVar4 = (int *)(*piVar5 + iVar2);
      *piVar4 = *piVar4 + iVar2;
      piVar5 = piVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar2 = param_1[1];
  iVar7 = *param_1;
  piVar4 = piVar5 + 1;
  iVar6 = *piVar5;
  if (0 < iVar6) {
    do {
      *(int *)(*piVar4 + iVar7) = *(int *)(*piVar4 + iVar7) + iVar2 + _Size_00;
      piVar4 = piVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  _Size = (*(int *)(iVar1 + 0xc) - (int)piVar4) + param_1[1];
  if (4 < _Size) {
    if ((int *)param_1[3] == (int *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)(**(code **)(*(int *)param_1[3] + 4))(_Size);
    }
    param_1[2] = (int)pvVar3;
    FID_conflict__memcpy(pvVar3,piVar4,_Size);
    FUN_00ea3fe0(*(undefined4 *)param_1[2],(undefined4 *)param_1[2] + 1,*param_1);
  }
  return 1;
}

// 00EA4380  FUN_00ea4380  size=17  [callgraph]
void FUN_00ea4380(void)

{
  FUN_00ea9b10();
  FUN_00ea9c50();
  return;
}

// 00EA43A0  FUN_00ea43a0  size=138  [callgraph]
void __thiscall FUN_00ea43a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 4;
  if ((*(int *)(param_2 + 0x24) != 0) && (*(code **)(param_2 + 0x28) != (code *)0x0)) {
    (**(code **)(param_2 + 0x28))(*(int *)(param_2 + 0x24),iVar1);
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    if ((*(int *)(param_2 + 0x24) != 0) && (*(code **)(param_2 + 0x28) != (code *)0x0)) {
      (**(code **)(param_2 + 0x28))(*(int *)(param_2 + 0x24),iVar1);
    }
    FUN_00ea75d0(iVar1);
    *(undefined1 **)(param_2 + 0x28) = &LAB_00ea9310;
    *(int *)(param_2 + 0x24) = param_1 + 0x2c;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    return;
  }
  if ((*(int *)(param_2 + 0x24) != 0) && (*(code **)(param_2 + 0x28) != (code *)0x0)) {
    (**(code **)(param_2 + 0x28))(*(int *)(param_2 + 0x24),iVar1);
  }
  FUN_00ea7550(iVar1);
  *(undefined1 **)(param_2 + 0x28) = &LAB_00ea92c0;
  *(int *)(param_2 + 0x24) = param_1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

// 00EA4470  thunk_FUN_00ea9d90  size=5  [callgraph]
void __fastcall thunk_FUN_00ea9d90(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[2];
  cVar1 = *(char *)(iVar2 + 0xd);
  while (cVar1 == '\0') {
    param_1[8] = param_1[8] + -1;
    FUN_00ea8980(iVar2);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    iVar2 = param_1[2];
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  puVar3 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    if (*(char *)(puVar3[1] + 0xd) == '\0') {
      FUN_00ea4d30(puVar3[1]);
    }
    if (*(char *)(puVar3[2] + 0xd) == '\0') {
      FUN_00ea4d30(puVar3[2]);
    }
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  param_1[8] = 0;
  return;
}

// 00EA4500  FUN_00ea4500  size=107  [callgraph]
uint __thiscall FUN_00ea4500(int *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(*param_1);
    }
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(param_1[2]);
    }
    param_1[2] = 0;
  }
  param_1[1] = 0;
  if ((param_2 != (uint *)0x0) && ((*param_2 & 0xfffffff0) == 400)) {
    param_1[1] = (int)param_2;
    uVar1 = FUN_00ea42b0();
    return uVar1;
  }
  return (uint)param_2 & 0xffffff00;
}

// 00EA4570  FUN_00ea4570  size=70  [callgraph]
void __thiscall FUN_00ea4570(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0x24) != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
    (**(code **)(param_1 + 0x28))(*(int *)(param_1 + 0x24),param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  FUN_00ea43a0(param_1);
  return;
}

// 00EA45C0  FUN_00ea45c0  size=73  [callgraph]
void __thiscall FUN_00ea45c0(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0x24) != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
    (**(code **)(param_1 + 0x28))(*(int *)(param_1 + 0x24),param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  FUN_00ea43a0(param_1);
  return;
}

// 00EA4610  FUN_00ea4610  size=115  [callgraph]
bool __thiscall FUN_00ea4610(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 4;
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x1c),iVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x1c),iVar1);
  }
  FUN_00ea7650(iVar1);
  *(int *)(param_1 + 0x1c) = param_3;
  *(undefined1 **)(param_1 + 0x20) = &LAB_00ea9350;
  *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x11) != '\0')) {
    param_1 = 0;
  }
  return param_1 != 0;
}

// 00EA4B70  FUN_00ea4b70  size=65  [callgraph]
void FUN_00ea4b70(undefined4 *param_1)

{
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    FUN_00ea4b70(param_1[1]);
  }
  if (*(char *)(param_1[2] + 0xd) == '\0') {
    FUN_00ea4b70(param_1[2]);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 00EA4C50  FUN_00ea4c50  size=65  [callgraph]
void FUN_00ea4c50(undefined4 *param_1)

{
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    FUN_00ea4c50(param_1[1]);
  }
  if (*(char *)(param_1[2] + 0xd) == '\0') {
    FUN_00ea4c50(param_1[2]);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 00EA4D30  FUN_00ea4d30  size=65  [callgraph]
void FUN_00ea4d30(undefined4 *param_1)

{
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    FUN_00ea4d30(param_1[1]);
  }
  if (*(char *)(param_1[2] + 0xd) == '\0') {
    FUN_00ea4d30(param_1[2]);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 00EA4F30  FUN_00ea4f30  size=73  [callgraph]
void __thiscall FUN_00ea4f30(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  param_2[1] = piVar1[2];
  if (*(char *)(piVar1[2] + 0xd) == '\0') {
    *(int **)piVar1[2] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 8)) {
    *(int **)(iVar2 + 8) = piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 4) = piVar1;
  piVar1[2] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00EA4F80  FUN_00ea4f80  size=73  [callgraph]
void __thiscall FUN_00ea4f80(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[2];
  param_2[2] = piVar1[1];
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    *(int **)piVar1[1] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 4)) {
    *(int **)(iVar2 + 4) = piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 8) = piVar1;
  piVar1[1] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00EA5060  FUN_00ea5060  size=73  [callgraph]
void __thiscall FUN_00ea5060(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  param_2[1] = piVar1[2];
  if (*(char *)(piVar1[2] + 0xd) == '\0') {
    *(int **)piVar1[2] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 8)) {
    *(int **)(iVar2 + 8) = piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 4) = piVar1;
  piVar1[2] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00EA50B0  FUN_00ea50b0  size=73  [callgraph]
void __thiscall FUN_00ea50b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[2];
  param_2[2] = piVar1[1];
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    *(int **)piVar1[1] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 4)) {
    *(int **)(iVar2 + 4) = piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 8) = piVar1;
  piVar1[1] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00EA51A0  FUN_00ea51a0  size=73  [callgraph]
void __thiscall FUN_00ea51a0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  param_2[1] = piVar1[2];
  if (*(char *)(piVar1[2] + 0xd) == '\0') {
    *(int **)piVar1[2] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 8)) {
    *(int **)(iVar2 + 8) = piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 4) = piVar1;
  piVar1[2] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00EA51F0  FUN_00ea51f0  size=73  [callgraph]
void __thiscall FUN_00ea51f0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[2];
  param_2[2] = piVar1[1];
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    *(int **)piVar1[1] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 4)) {
    *(int **)(iVar2 + 4) = piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 8) = piVar1;
  piVar1[1] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00EA5580  lib::sany_detail::SerializableAnyImplT<bool>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<bool>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5590  lib::sany_detail::SerializableAnyImplT<bool>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<bool>::vf0C(void)

{
  return 0xc;
}

// 00EA55A0  lib::sany_detail::SerializableAnyImplT<bool>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<bool>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea55b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}

// 00EA55C0  lib::sany_detail::SerializableAnyImplT<bool>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<bool>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5630  lib::sany_detail::SerializableAnyImplT<char>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<char>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5640  lib::sany_detail::SerializableAnyImplT<char>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<char>::vf0C(void)

{
  return 0xc;
}

// 00EA5650  lib::sany_detail::SerializableAnyImplT<char>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<char>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}

// 00EA5670  lib::sany_detail::SerializableAnyImplT<char>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<char>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA56E0  lib::sany_detail::SerializableAnyImplT<signed_char>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<signed_char>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA56F0  lib::sany_detail::SerializableAnyImplT<signed_char>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<signed_char>::vf0C(void)

{
  return 0xc;
}

// 00EA5700  lib::sany_detail::SerializableAnyImplT<signed_char>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<signed_char>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}

// 00EA5720  lib::sany_detail::SerializableAnyImplT<signed_char>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<signed_char>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5790  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA57A0  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf0C(void)

{
  return 0xc;
}

// 00EA57B0  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea57c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}

// 00EA57D0  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5840  lib::sany_detail::SerializableAnyImplT<short>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<short>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5850  lib::sany_detail::SerializableAnyImplT<short>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<short>::vf0C(void)

{
  return 0xc;
}

// 00EA5860  lib::sany_detail::SerializableAnyImplT<short>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<short>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))();
  return;
}

// 00EA5880  lib::sany_detail::SerializableAnyImplT<short>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<short>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA58F0  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5900  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf0C(void)

{
  return 0xc;
}

// 00EA5910  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}

// 00EA5930  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA59A0  lib::sany_detail::SerializableAnyImplT<int>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<int>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA59B0  lib::sany_detail::SerializableAnyImplT<int>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<int>::vf0C(void)

{
  return 0xc;
}

// 00EA59C0  lib::sany_detail::SerializableAnyImplT<int>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<int>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea59d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}

// 00EA59E0  lib::sany_detail::SerializableAnyImplT<int>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<int>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5A50  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5A60  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf0C(void)

{
  return 0xc;
}

// 00EA5A70  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

// 00EA5A90  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5B10  lib::sany_detail::SerializableAnyImplT<__int64>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<__int64>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5B20  lib::sany_detail::SerializableAnyImplT<__int64>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<__int64>::vf0C(void)

{
  return 0x10;
}

// 00EA5B30  lib::sany_detail::SerializableAnyImplT<__int64>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<__int64>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}

// 00EA5B50  lib::sany_detail::SerializableAnyImplT<__int64>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<__int64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5BE0  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5BF0  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf0C(void)

{
  return 0x10;
}

// 00EA5C00  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}

// 00EA5C20  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5CA0  lib::sany_detail::SerializableAnyImplT<float>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<float>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5CB0  lib::sany_detail::SerializableAnyImplT<float>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<float>::vf0C(void)

{
  return 0xc;
}

// 00EA5CC0  lib::sany_detail::SerializableAnyImplT<float>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<float>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00EA5CE0  lib::sany_detail::SerializableAnyImplT<float>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<float>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5D50  lib::sany_detail::SerializableAnyImplT<double>::vf04  size=4  [class]
int __fastcall lib::sany_detail::SerializableAnyImplT<double>::vf04(int param_1)

{
  return param_1 + 8;
}

// 00EA5D60  lib::sany_detail::SerializableAnyImplT<double>::vf0C  size=6  [class]
undefined4 lib::sany_detail::SerializableAnyImplT<double>::vf0C(void)

{
  return 0x10;
}

// 00EA5D70  lib::sany_detail::SerializableAnyImplT<double>::vf10  size=20  [class]
void lib::sany_detail::SerializableAnyImplT<double>::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ea5d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}

// 00EA5D90  lib::sany_detail::SerializableAnyImplT<double>::vf00  size=31  [class]
undefined4 * __thiscall
lib::sany_detail::SerializableAnyImplT<double>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = SerializableAnyImpl::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EA5FA0  FUN_00ea5fa0  size=55  [between]
void __thiscall FUN_00ea5fa0(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0x20) != 0) && (*(code **)(param_1 + 0x24) != (code *)0x0)) {
    (**(code **)(param_1 + 0x24))(*(int *)(param_1 + 0x20),param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  return;
}

// 00EA6070  FUN_00ea6070  size=81  [between]
void __fastcall FUN_00ea6070(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    if (*(char *)(puVar1[1] + 0xd) == '\0') {
      FUN_00ea4b70(puVar1[1]);
    }
    if (*(char *)(puVar1[2] + 0xd) == '\0') {
      FUN_00ea4b70(puVar1[2]);
    }
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  return;
}

// 00EA60F0  FUN_00ea60f0  size=64  [between]
void FUN_00ea60f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    iVar4 = *(int *)(param_1[1] + 8);
    if (*(char *)(iVar4 + 0xd) == '\0') {
      do {
        iVar4 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar4 + 0xd) == '\0');
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_1 + 0xd);
    piVar3 = (int *)*param_1;
    while ((piVar2 = piVar3, cVar1 == '\0' && (param_1 == (int *)piVar2[1]))) {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = (int *)*piVar2;
      param_1 = piVar2;
    }
  }
  return;
}

// 00EA6150  FUN_00ea6150  size=81  [between]
void __fastcall FUN_00ea6150(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    if (*(char *)(puVar1[1] + 0xd) == '\0') {
      FUN_00ea4c50(puVar1[1]);
    }
    if (*(char *)(puVar1[2] + 0xd) == '\0') {
      FUN_00ea4c50(puVar1[2]);
    }
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  return;
}

// 00EA61D0  FUN_00ea61d0  size=64  [between]
void FUN_00ea61d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    iVar4 = *(int *)(param_1[1] + 8);
    if (*(char *)(iVar4 + 0xd) == '\0') {
      do {
        iVar4 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar4 + 0xd) == '\0');
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_1 + 0xd);
    piVar3 = (int *)*param_1;
    while ((piVar2 = piVar3, cVar1 == '\0' && (param_1 == (int *)piVar2[1]))) {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = (int *)*piVar2;
      param_1 = piVar2;
    }
  }
  return;
}

// 00EA6230  FUN_00ea6230  size=81  [between]
void __fastcall FUN_00ea6230(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    if (*(char *)(puVar1[1] + 0xd) == '\0') {
      FUN_00ea4d30(puVar1[1]);
    }
    if (*(char *)(puVar1[2] + 0xd) == '\0') {
      FUN_00ea4d30(puVar1[2]);
    }
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  return;
}

// 00EA62B0  FUN_00ea62b0  size=64  [between]
void FUN_00ea62b0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    iVar4 = *(int *)(param_1[1] + 8);
    if (*(char *)(iVar4 + 0xd) == '\0') {
      do {
        iVar4 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar4 + 0xd) == '\0');
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_1 + 0xd);
    piVar3 = (int *)*param_1;
    while ((piVar2 = piVar3, cVar1 == '\0' && (param_1 == (int *)piVar2[1]))) {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = (int *)*piVar2;
      param_1 = piVar2;
    }
  }
  return;
}

// 00EA63A0  FUN_00ea63a0  size=434  [between]
void __thiscall FUN_00ea63a0(int *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *param_4 = (int)param_3;
  param_4[2] = (int)param_1;
  param_4[1] = (int)param_1;
  *(undefined2 *)(param_4 + 3) = 1;
  if (param_3 == param_1) {
    *param_1 = (int)param_4;
    param_1[2] = (int)param_4;
  }
  else {
    if (param_2 != '\0') {
      param_3[2] = (int)param_4;
      if (param_3 == (int *)param_1[2]) {
        param_1[2] = (int)param_4;
      }
      goto LAB_00ea63e2;
    }
    param_3[1] = (int)param_4;
    if (param_3 != (int *)param_1[1]) goto LAB_00ea63e2;
  }
  param_1[1] = (int)param_4;
LAB_00ea63e2:
  if (*(char *)(*param_4 + 0xc) == '\0') {
    *(undefined1 *)(*param_1 + 0xc) = 0;
    return;
  }
  do {
    piVar1 = (int *)*param_4;
    iVar2 = *piVar1;
    if (piVar1 == *(int **)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar2 + 4);
      if (*(char *)(iVar2 + 0xc) != '\0') goto LAB_00ea649e;
      if (param_4 == (int *)piVar1[1]) {
        piVar3 = (int *)piVar1[1];
        piVar1[1] = piVar3[2];
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int **)piVar3[2] = piVar1;
        }
        *piVar3 = *piVar1;
        if (piVar1 == (int *)*param_1) {
          *param_1 = (int)piVar3;
        }
        else {
          iVar2 = *piVar1;
          if (piVar1 == *(int **)(iVar2 + 8)) {
            *(int **)(iVar2 + 8) = piVar3;
          }
          else {
            *(int **)(iVar2 + 4) = piVar3;
          }
        }
        piVar3[2] = (int)piVar1;
        *piVar1 = (int)piVar3;
        param_4 = piVar1;
      }
      *(undefined1 *)(*param_4 + 0xc) = 0;
      *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
      piVar1 = *(int **)*param_4;
      piVar3 = (int *)piVar1[2];
      piVar1[2] = piVar3[1];
      if (*(char *)(piVar3[1] + 0xd) == '\0') {
        *(int **)piVar3[1] = piVar1;
      }
      *piVar3 = *piVar1;
      if (piVar1 == (int *)*param_1) {
        *param_1 = (int)piVar3;
        piVar3[1] = (int)piVar1;
      }
      else {
        iVar2 = *piVar1;
        if (piVar1 == *(int **)(iVar2 + 4)) {
          *(int **)(iVar2 + 4) = piVar3;
          piVar3[1] = (int)piVar1;
        }
        else {
          *(int **)(iVar2 + 8) = piVar3;
          piVar3[1] = (int)piVar1;
        }
      }
LAB_00ea6531:
      *piVar1 = (int)piVar3;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
      if (*(char *)(iVar2 + 0xc) == '\0') {
        if (param_4 == (int *)piVar1[2]) {
          piVar3 = (int *)piVar1[2];
          piVar1[2] = piVar3[1];
          if (*(char *)(piVar3[1] + 0xd) == '\0') {
            *(int **)piVar3[1] = piVar1;
          }
          *piVar3 = *piVar1;
          if (piVar1 == (int *)*param_1) {
            *param_1 = (int)piVar3;
          }
          else {
            iVar2 = *piVar1;
            if (piVar1 == *(int **)(iVar2 + 4)) {
              *(int **)(iVar2 + 4) = piVar3;
            }
            else {
              *(int **)(iVar2 + 8) = piVar3;
            }
          }
          piVar3[1] = (int)piVar1;
          *piVar1 = (int)piVar3;
          param_4 = piVar1;
        }
        *(undefined1 *)(*param_4 + 0xc) = 0;
        *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
        piVar1 = *(int **)*param_4;
        piVar3 = (int *)piVar1[1];
        piVar1[1] = piVar3[2];
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int **)piVar3[2] = piVar1;
        }
        *piVar3 = *piVar1;
        if (piVar1 == (int *)*param_1) {
          *param_1 = (int)piVar3;
        }
        else {
          iVar2 = *piVar1;
          if (piVar1 == *(int **)(iVar2 + 8)) {
            *(int **)(iVar2 + 8) = piVar3;
          }
          else {
            *(int **)(iVar2 + 4) = piVar3;
          }
        }
        piVar3[2] = (int)piVar1;
        goto LAB_00ea6531;
      }
LAB_00ea649e:
      *(undefined1 *)(piVar1 + 3) = 0;
      *(undefined1 *)(iVar2 + 0xc) = 0;
      *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
      param_4 = *(int **)*param_4;
    }
    if (*(char *)(*param_4 + 0xc) == '\0') {
      *(undefined1 *)(*param_1 + 0xc) = 0;
      return;
    }
  } while( true );
}

// 00EA6560  FUN_00ea6560  size=434  [between]
void __thiscall FUN_00ea6560(int *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *param_4 = (int)param_3;
  param_4[2] = (int)param_1;
  param_4[1] = (int)param_1;
  *(undefined2 *)(param_4 + 3) = 1;
  if (param_3 == param_1) {
    *param_1 = (int)param_4;
    param_1[2] = (int)param_4;
  }
  else {
    if (param_2 != '\0') {
      param_3[2] = (int)param_4;
      if (param_3 == (int *)param_1[2]) {
        param_1[2] = (int)param_4;
      }
      goto LAB_00ea65a2;
    }
    param_3[1] = (int)param_4;
    if (param_3 != (int *)param_1[1]) goto LAB_00ea65a2;
  }
  param_1[1] = (int)param_4;
LAB_00ea65a2:
  if (*(char *)(*param_4 + 0xc) == '\0') {
    *(undefined1 *)(*param_1 + 0xc) = 0;
    return;
  }
  do {
    piVar1 = (int *)*param_4;
    iVar2 = *piVar1;
    if (piVar1 == *(int **)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar2 + 4);
      if (*(char *)(iVar2 + 0xc) != '\0') goto LAB_00ea665e;
      if (param_4 == (int *)piVar1[1]) {
        piVar3 = (int *)piVar1[1];
        piVar1[1] = piVar3[2];
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int **)piVar3[2] = piVar1;
        }
        *piVar3 = *piVar1;
        if (piVar1 == (int *)*param_1) {
          *param_1 = (int)piVar3;
        }
        else {
          iVar2 = *piVar1;
          if (piVar1 == *(int **)(iVar2 + 8)) {
            *(int **)(iVar2 + 8) = piVar3;
          }
          else {
            *(int **)(iVar2 + 4) = piVar3;
          }
        }
        piVar3[2] = (int)piVar1;
        *piVar1 = (int)piVar3;
        param_4 = piVar1;
      }
      *(undefined1 *)(*param_4 + 0xc) = 0;
      *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
      piVar1 = *(int **)*param_4;
      piVar3 = (int *)piVar1[2];
      piVar1[2] = piVar3[1];
      if (*(char *)(piVar3[1] + 0xd) == '\0') {
        *(int **)piVar3[1] = piVar1;
      }
      *piVar3 = *piVar1;
      if (piVar1 == (int *)*param_1) {
        *param_1 = (int)piVar3;
        piVar3[1] = (int)piVar1;
      }
      else {
        iVar2 = *piVar1;
        if (piVar1 == *(int **)(iVar2 + 4)) {
          *(int **)(iVar2 + 4) = piVar3;
          piVar3[1] = (int)piVar1;
        }
        else {
          *(int **)(iVar2 + 8) = piVar3;
          piVar3[1] = (int)piVar1;
        }
      }
LAB_00ea66f1:
      *piVar1 = (int)piVar3;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
      if (*(char *)(iVar2 + 0xc) == '\0') {
        if (param_4 == (int *)piVar1[2]) {
          piVar3 = (int *)piVar1[2];
          piVar1[2] = piVar3[1];
          if (*(char *)(piVar3[1] + 0xd) == '\0') {
            *(int **)piVar3[1] = piVar1;
          }
          *piVar3 = *piVar1;
          if (piVar1 == (int *)*param_1) {
            *param_1 = (int)piVar3;
          }
          else {
            iVar2 = *piVar1;
            if (piVar1 == *(int **)(iVar2 + 4)) {
              *(int **)(iVar2 + 4) = piVar3;
            }
            else {
              *(int **)(iVar2 + 8) = piVar3;
            }
          }
          piVar3[1] = (int)piVar1;
          *piVar1 = (int)piVar3;
          param_4 = piVar1;
        }
        *(undefined1 *)(*param_4 + 0xc) = 0;
        *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
        piVar1 = *(int **)*param_4;
        piVar3 = (int *)piVar1[1];
        piVar1[1] = piVar3[2];
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int **)piVar3[2] = piVar1;
        }
        *piVar3 = *piVar1;
        if (piVar1 == (int *)*param_1) {
          *param_1 = (int)piVar3;
        }
        else {
          iVar2 = *piVar1;
          if (piVar1 == *(int **)(iVar2 + 8)) {
            *(int **)(iVar2 + 8) = piVar3;
          }
          else {
            *(int **)(iVar2 + 4) = piVar3;
          }
        }
        piVar3[2] = (int)piVar1;
        goto LAB_00ea66f1;
      }
LAB_00ea665e:
      *(undefined1 *)(piVar1 + 3) = 0;
      *(undefined1 *)(iVar2 + 0xc) = 0;
      *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
      param_4 = *(int **)*param_4;
    }
    if (*(char *)(*param_4 + 0xc) == '\0') {
      *(undefined1 *)(*param_1 + 0xc) = 0;
      return;
    }
  } while( true );
}

// 00EA6720  FUN_00ea6720  size=434  [between]
void __thiscall FUN_00ea6720(int *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *param_4 = (int)param_3;
  param_4[2] = (int)param_1;
  param_4[1] = (int)param_1;
  *(undefined2 *)(param_4 + 3) = 1;
  if (param_3 == param_1) {
    *param_1 = (int)param_4;
    param_1[2] = (int)param_4;
  }
  else {
    if (param_2 != '\0') {
      param_3[2] = (int)param_4;
      if (param_3 == (int *)param_1[2]) {
        param_1[2] = (int)param_4;
      }
      goto LAB_00ea6762;
    }
    param_3[1] = (int)param_4;
    if (param_3 != (int *)param_1[1]) goto LAB_00ea6762;
  }
  param_1[1] = (int)param_4;
LAB_00ea6762:
  if (*(char *)(*param_4 + 0xc) == '\0') {
    *(undefined1 *)(*param_1 + 0xc) = 0;
    return;
  }
  do {
    piVar1 = (int *)*param_4;
    iVar2 = *piVar1;
    if (piVar1 == *(int **)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar2 + 4);
      if (*(char *)(iVar2 + 0xc) != '\0') goto LAB_00ea681e;
      if (param_4 == (int *)piVar1[1]) {
        piVar3 = (int *)piVar1[1];
        piVar1[1] = piVar3[2];
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int **)piVar3[2] = piVar1;
        }
        *piVar3 = *piVar1;
        if (piVar1 == (int *)*param_1) {
          *param_1 = (int)piVar3;
        }
        else {
          iVar2 = *piVar1;
          if (piVar1 == *(int **)(iVar2 + 8)) {
            *(int **)(iVar2 + 8) = piVar3;
          }
          else {
            *(int **)(iVar2 + 4) = piVar3;
          }
        }
        piVar3[2] = (int)piVar1;
        *piVar1 = (int)piVar3;
        param_4 = piVar1;
      }
      *(undefined1 *)(*param_4 + 0xc) = 0;
      *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
      piVar1 = *(int **)*param_4;
      piVar3 = (int *)piVar1[2];
      piVar1[2] = piVar3[1];
      if (*(char *)(piVar3[1] + 0xd) == '\0') {
        *(int **)piVar3[1] = piVar1;
      }
      *piVar3 = *piVar1;
      if (piVar1 == (int *)*param_1) {
        *param_1 = (int)piVar3;
        piVar3[1] = (int)piVar1;
      }
      else {
        iVar2 = *piVar1;
        if (piVar1 == *(int **)(iVar2 + 4)) {
          *(int **)(iVar2 + 4) = piVar3;
          piVar3[1] = (int)piVar1;
        }
        else {
          *(int **)(iVar2 + 8) = piVar3;
          piVar3[1] = (int)piVar1;
        }
      }
LAB_00ea68b1:
      *piVar1 = (int)piVar3;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
      if (*(char *)(iVar2 + 0xc) == '\0') {
        if (param_4 == (int *)piVar1[2]) {
          piVar3 = (int *)piVar1[2];
          piVar1[2] = piVar3[1];
          if (*(char *)(piVar3[1] + 0xd) == '\0') {
            *(int **)piVar3[1] = piVar1;
          }
          *piVar3 = *piVar1;
          if (piVar1 == (int *)*param_1) {
            *param_1 = (int)piVar3;
          }
          else {
            iVar2 = *piVar1;
            if (piVar1 == *(int **)(iVar2 + 4)) {
              *(int **)(iVar2 + 4) = piVar3;
            }
            else {
              *(int **)(iVar2 + 8) = piVar3;
            }
          }
          piVar3[1] = (int)piVar1;
          *piVar1 = (int)piVar3;
          param_4 = piVar1;
        }
        *(undefined1 *)(*param_4 + 0xc) = 0;
        *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
        piVar1 = *(int **)*param_4;
        piVar3 = (int *)piVar1[1];
        piVar1[1] = piVar3[2];
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int **)piVar3[2] = piVar1;
        }
        *piVar3 = *piVar1;
        if (piVar1 == (int *)*param_1) {
          *param_1 = (int)piVar3;
        }
        else {
          iVar2 = *piVar1;
          if (piVar1 == *(int **)(iVar2 + 8)) {
            *(int **)(iVar2 + 8) = piVar3;
          }
          else {
            *(int **)(iVar2 + 4) = piVar3;
          }
        }
        piVar3[2] = (int)piVar1;
        goto LAB_00ea68b1;
      }
LAB_00ea681e:
      *(undefined1 *)(piVar1 + 3) = 0;
      *(undefined1 *)(iVar2 + 0xc) = 0;
      *(undefined1 *)(*(int *)*param_4 + 0xc) = 1;
      param_4 = *(int **)*param_4;
    }
    if (*(char *)(*param_4 + 0xc) == '\0') {
      *(undefined1 *)(*param_1 + 0xc) = 0;
      return;
    }
  } while( true );
}

// 00EA69A0  lib::sany_detail::SerializableAnyImplT<bool>::vf08  size=29  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<bool>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  }
  return;
}

// 00EA69C0  lib::sany_detail::SerializableAnyImplT<char>::vf08  size=29  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<char>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  }
  return;
}

// 00EA69E0  lib::sany_detail::SerializableAnyImplT<signed_char>::vf08  size=29  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<signed_char>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  }
  return;
}

// 00EA6A00  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf08  size=29  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 8);
  }
  return;
}

// 00EA6A20  lib::sany_detail::SerializableAnyImplT<short>::vf08  size=31  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<short>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 8);
  }
  return;
}

// 00EA6A40  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf08  size=31  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 8);
  }
  return;
}

// 00EA6A60  lib::sany_detail::SerializableAnyImplT<int>::vf08  size=29  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<int>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
  }
  return;
}

// 00EA6A80  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf08  size=29  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
  }
  return;
}

// 00EA6AA0  lib::sany_detail::SerializableAnyImplT<__int64>::vf08  size=35  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<__int64>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
    param_2[3] = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

// 00EA6AD0  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf08  size=35  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
    param_2[3] = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

// 00EA6B00  lib::sany_detail::SerializableAnyImplT<float>::vf08  size=29  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<float>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    param_2[2] = *(undefined4 *)(param_1 + 8);
  }
  return;
}

// 00EA6B20  lib::sany_detail::SerializableAnyImplT<double>::vf08  size=29  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<double>::vf08(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = *(undefined4 *)(param_1 + 4);
    *param_2 = vftable;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 8);
  }
  return;
}

// 00EA6D40  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::SerializableAnyImplT<unsigned___int64>  size=84  [class]
void lib::sany_detail::SerializableAnyImplT<unsigned___int64>::
     SerializableAnyImplT<unsigned___int64>(int *param_1,undefined4 *param_2)

{
  undefined4 unaff_ESI;
  undefined4 local_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  (**(code **)(*param_1 + 0x20))(&local_c);
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 10;
    *param_2 = vftable;
    param_2[2] = unaff_ESI;
    param_2[3] = local_c;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffff0);
  return;
}

// 00EA7550  FUN_00ea7550  size=122  [callgraph]
void __thiscall FUN_00ea7550(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = true;
  if (*(char *)(*param_1 + 0xd) == '\0') {
    iVar1 = *(int *)(param_2 + 0x10);
    piVar3 = (int *)*param_1;
    do {
      param_1 = piVar3;
      iVar2 = param_1[4];
      bVar5 = SBORROW4(iVar1,iVar2);
      bVar4 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        if (*(int *)(param_2 + 0x14) == param_1[5]) {
          bVar4 = *(uint *)(param_2 + 0x18) < (uint)param_1[6];
          if (*(uint *)(param_2 + 0x18) == param_1[6]) {
            bVar5 = SBORROW4(*(int *)(param_2 + 0x1c),param_1[7]);
            bVar4 = *(int *)(param_2 + 0x1c) - param_1[7] < 0;
            goto LAB_00ea7591;
          }
        }
        else {
          bVar5 = SBORROW4(iVar1,iVar2);
          bVar4 = iVar1 - iVar2 < 0;
          if (iVar1 != iVar2) goto LAB_00ea7591;
          bVar4 = *(uint *)(param_2 + 0x14) < (uint)param_1[5];
        }
      }
      else {
LAB_00ea7591:
        bVar4 = bVar5 != bVar4;
      }
      if (bVar4 == false) {
        piVar3 = (int *)param_1[1];
      }
      else {
        piVar3 = (int *)param_1[2];
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  FUN_00ea63a0(bVar4,param_1,param_2);
  return;
}

// 00EA75D0  FUN_00ea75d0  size=117  [callgraph]
void __thiscall FUN_00ea75d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = true;
  if (*(char *)(*param_1 + 0xd) == '\0') {
    iVar1 = *(int *)(param_2 + 0x10);
    piVar3 = (int *)*param_1;
    do {
      param_1 = piVar3;
      iVar2 = param_1[4];
      if (iVar1 == iVar2) {
        if (*(int *)(param_2 + 0x14) == param_1[5]) {
          bVar4 = *(uint *)(param_2 + 0x18) < (uint)param_1[6];
        }
        else {
          if (iVar1 != iVar2) goto LAB_00ea761b;
          bVar4 = *(uint *)(param_2 + 0x14) < (uint)param_1[5];
        }
      }
      else {
LAB_00ea761b:
        bVar4 = iVar1 < iVar2;
      }
      if (bVar4 == false) {
        piVar3 = (int *)param_1[1];
      }
      else {
        piVar3 = (int *)param_1[2];
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  FUN_00ea6560(bVar4,param_1,param_2);
  return;
}

// 00EA7650  FUN_00ea7650  size=101  [callgraph]
void __thiscall FUN_00ea7650(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(char *)(*param_1 + 0xd) == '\0') {
    piVar1 = (int *)*param_1;
    do {
      param_1 = piVar1;
      if (*(int *)(param_2 + 0x10) == param_1[4]) {
        bVar2 = *(uint *)(param_2 + 0x14) < (uint)param_1[5];
      }
      else {
        bVar2 = *(int *)(param_2 + 0x10) < param_1[4];
      }
      if (bVar2) {
        piVar1 = (int *)param_1[2];
      }
      else {
        piVar1 = (int *)param_1[1];
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
  }
  FUN_00ea6720(bVar2,param_1,param_2);
  return;
}

// 00EA77B0  FUN_00ea77b0  size=60  [callgraph]
char * FUN_00ea77b0(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = param_2;
  if (param_1 != param_2) {
    while (pcVar1 = param_1, param_3 != param_4) {
      pcVar1 = param_3;
      while (*pcVar1 != *param_1) {
        pcVar1 = pcVar1 + 1;
        if (pcVar1 == param_4) {
          return param_1;
        }
      }
      if (pcVar1 == param_4) {
        return param_1;
      }
      param_1 = param_1 + 1;
      if (param_1 == param_2) {
        return param_2;
      }
    }
  }
  return pcVar1;
}

// 00EA78C0  lib::sany_detail::SerializableAnyImplT<bool>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<bool>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99ca0(param_1 + 8);
  return;
}

// 00EA7920  lib::sany_detail::SerializableAnyImplT<char>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<char>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e995f0(param_1 + 8);
  return;
}

// 00EA7980  lib::sany_detail::SerializableAnyImplT<signed_char>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<signed_char>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e995f0(param_1 + 8);
  return;
}

// 00EA79E0  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf18  size=81  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99620(param_1 + 8);
  return;
}

// 00EA7A40  lib::sany_detail::SerializableAnyImplT<short>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<short>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99650(param_1 + 8);
  return;
}

// 00EA7AA0  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf18  size=81  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99680(param_1 + 8);
  return;
}

// 00EA7B00  lib::sany_detail::SerializableAnyImplT<int>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<int>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e996b0(param_1 + 8);
  return;
}

// 00EA7B60  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf18  size=81  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e996e0(param_1 + 8);
  return;
}

// 00EA7BC0  lib::sany_detail::SerializableAnyImplT<__int64>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<__int64>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_00e98bb0(param_1 + 8);
  return;
}

// 00EA7C20  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf18  size=81  [class]
void __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_00e98c40(param_1 + 8);
  return;
}

// 00EA7C80  lib::sany_detail::SerializableAnyImplT<float>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<float>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99cf0(param_1 + 8);
  return;
}

// 00EA7CE0  lib::sany_detail::SerializableAnyImplT<double>::vf18  size=81  [class]
void __thiscall lib::sany_detail::SerializableAnyImplT<double>::vf18(int param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_00e98cd0(param_1 + 8);
  return;
}

// 00EA8440  FUN_00ea8440  size=656  [callgraph]
void __thiscall FUN_00ea8440(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_2[2];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    if (*(char *)(param_2[1] + 0xd) == '\0') {
      piVar5 = (int *)FUN_00ea60f0(param_2);
      piVar7 = (int *)piVar5[1];
      if (piVar5 != param_2) {
        *(int **)param_2[2] = piVar5;
        piVar5[2] = param_2[2];
        piVar6 = piVar5;
        if (piVar5 != (int *)param_2[1]) {
          piVar6 = (int *)*piVar5;
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            *piVar7 = (int)piVar6;
          }
          piVar6[2] = (int)piVar7;
          piVar5[1] = param_2[1];
          *(int **)param_2[1] = piVar5;
        }
        if ((int *)*param_1 == param_2) {
          *param_1 = (int)piVar5;
        }
        else {
          iVar3 = *param_2;
          if (*(int **)(iVar3 + 8) == param_2) {
            *(int **)(iVar3 + 8) = piVar5;
          }
          else {
            *(int **)(iVar3 + 4) = piVar5;
          }
        }
        *piVar5 = *param_2;
        iVar3 = piVar5[3];
        *(char *)(piVar5 + 3) = (char)param_2[3];
        *(char *)(param_2 + 3) = (char)iVar3;
        goto LAB_00ea8544;
      }
    }
  }
  else {
    piVar7 = (int *)param_2[1];
  }
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    *piVar7 = (int)piVar6;
  }
  if ((int *)*param_1 == param_2) {
    *param_1 = (int)piVar7;
  }
  else if ((int *)piVar6[2] == param_2) {
    piVar6[2] = (int)piVar7;
  }
  else {
    piVar6[1] = (int)piVar7;
  }
  if ((int *)param_1[2] == param_2) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[2] + 0xd);
      piVar2 = (int *)piVar7[2];
      piVar5 = piVar7;
      while (piVar4 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)piVar4[2];
        cVar1 = *(char *)((int)piVar2 + 0xd);
        piVar5 = piVar4;
      }
    }
    param_1[2] = (int)piVar5;
  }
  if ((int *)param_1[1] == param_2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar5 = (int *)piVar7[1];
      piVar2 = piVar7;
      while (piVar4 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)piVar4[1];
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar2 = piVar4;
      }
      param_1[1] = (int)piVar2;
    }
    else {
      param_1[1] = (int)piVar6;
    }
  }
LAB_00ea8544:
  if ((char)param_2[3] == '\0') {
    if (piVar7 != (int *)*param_1) {
      while (piVar5 = piVar6, (char)piVar7[3] == '\0') {
        piVar6 = (int *)piVar5[2];
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[1];
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[1];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[1] = piVar6[2];
            if (*(char *)(piVar6[2] + 0xd) == '\0') {
              *(int **)piVar6[2] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 8)) {
                *(int **)(iVar3 + 8) = piVar6;
              }
              else {
                *(int **)(iVar3 + 4) = piVar6;
              }
            }
            piVar6[2] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[1];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) != '\0') || (*(char *)(piVar6[1] + 0xc) != '\0')) {
              if (*(char *)(piVar6[1] + 0xc) == '\0') {
                *(undefined1 *)(piVar6[2] + 0xc) = 0;
                *(undefined1 *)(piVar6 + 3) = 1;
                FUN_00ea4f80(piVar6);
                piVar6 = (int *)piVar5[1];
              }
              *(char *)(piVar6 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 0;
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              FUN_00ea4f30(piVar5);
              *(undefined1 *)(piVar7 + 3) = 0;
              return;
            }
LAB_00ea867a:
            *(undefined1 *)(piVar6 + 3) = 1;
          }
        }
        else {
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[2];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[2] = piVar6[1];
            if (*(char *)(piVar6[1] + 0xd) == '\0') {
              *(int **)piVar6[1] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 4)) {
                *(int **)(iVar3 + 4) = piVar6;
              }
              else {
                *(int **)(iVar3 + 8) = piVar6;
              }
            }
            piVar6[1] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[1] + 0xc) == '\0') && (*(char *)(piVar6[2] + 0xc) == '\0'))
            goto LAB_00ea867a;
            if (*(char *)(piVar6[2] + 0xc) == '\0') {
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              *(undefined1 *)(piVar6 + 3) = 1;
              FUN_00ea4f30(piVar6);
              piVar6 = (int *)piVar5[2];
            }
            *(char *)(piVar6 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 0;
            *(undefined1 *)(piVar6[2] + 0xc) = 0;
            FUN_00ea4f80(piVar5);
            break;
          }
        }
        piVar7 = piVar5;
        piVar6 = (int *)*piVar5;
        if (piVar5 == (int *)*param_1) {
          *(undefined1 *)(piVar5 + 3) = 0;
          return;
        }
      }
    }
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  return;
}

// 00EA86E0  FUN_00ea86e0  size=656  [callgraph]
void __thiscall FUN_00ea86e0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_2[2];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    if (*(char *)(param_2[1] + 0xd) == '\0') {
      piVar5 = (int *)FUN_00ea61d0(param_2);
      piVar7 = (int *)piVar5[1];
      if (piVar5 != param_2) {
        *(int **)param_2[2] = piVar5;
        piVar5[2] = param_2[2];
        piVar6 = piVar5;
        if (piVar5 != (int *)param_2[1]) {
          piVar6 = (int *)*piVar5;
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            *piVar7 = (int)piVar6;
          }
          piVar6[2] = (int)piVar7;
          piVar5[1] = param_2[1];
          *(int **)param_2[1] = piVar5;
        }
        if ((int *)*param_1 == param_2) {
          *param_1 = (int)piVar5;
        }
        else {
          iVar3 = *param_2;
          if (*(int **)(iVar3 + 8) == param_2) {
            *(int **)(iVar3 + 8) = piVar5;
          }
          else {
            *(int **)(iVar3 + 4) = piVar5;
          }
        }
        *piVar5 = *param_2;
        iVar3 = piVar5[3];
        *(char *)(piVar5 + 3) = (char)param_2[3];
        *(char *)(param_2 + 3) = (char)iVar3;
        goto LAB_00ea87e4;
      }
    }
  }
  else {
    piVar7 = (int *)param_2[1];
  }
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    *piVar7 = (int)piVar6;
  }
  if ((int *)*param_1 == param_2) {
    *param_1 = (int)piVar7;
  }
  else if ((int *)piVar6[2] == param_2) {
    piVar6[2] = (int)piVar7;
  }
  else {
    piVar6[1] = (int)piVar7;
  }
  if ((int *)param_1[2] == param_2) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[2] + 0xd);
      piVar2 = (int *)piVar7[2];
      piVar5 = piVar7;
      while (piVar4 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)piVar4[2];
        cVar1 = *(char *)((int)piVar2 + 0xd);
        piVar5 = piVar4;
      }
    }
    param_1[2] = (int)piVar5;
  }
  if ((int *)param_1[1] == param_2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar5 = (int *)piVar7[1];
      piVar2 = piVar7;
      while (piVar4 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)piVar4[1];
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar2 = piVar4;
      }
      param_1[1] = (int)piVar2;
    }
    else {
      param_1[1] = (int)piVar6;
    }
  }
LAB_00ea87e4:
  if ((char)param_2[3] == '\0') {
    if (piVar7 != (int *)*param_1) {
      while (piVar5 = piVar6, (char)piVar7[3] == '\0') {
        piVar6 = (int *)piVar5[2];
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[1];
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[1];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[1] = piVar6[2];
            if (*(char *)(piVar6[2] + 0xd) == '\0') {
              *(int **)piVar6[2] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 8)) {
                *(int **)(iVar3 + 8) = piVar6;
              }
              else {
                *(int **)(iVar3 + 4) = piVar6;
              }
            }
            piVar6[2] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[1];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) != '\0') || (*(char *)(piVar6[1] + 0xc) != '\0')) {
              if (*(char *)(piVar6[1] + 0xc) == '\0') {
                *(undefined1 *)(piVar6[2] + 0xc) = 0;
                *(undefined1 *)(piVar6 + 3) = 1;
                FUN_00ea50b0(piVar6);
                piVar6 = (int *)piVar5[1];
              }
              *(char *)(piVar6 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 0;
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              FUN_00ea5060(piVar5);
              *(undefined1 *)(piVar7 + 3) = 0;
              return;
            }
LAB_00ea891a:
            *(undefined1 *)(piVar6 + 3) = 1;
          }
        }
        else {
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[2];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[2] = piVar6[1];
            if (*(char *)(piVar6[1] + 0xd) == '\0') {
              *(int **)piVar6[1] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 4)) {
                *(int **)(iVar3 + 4) = piVar6;
              }
              else {
                *(int **)(iVar3 + 8) = piVar6;
              }
            }
            piVar6[1] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[1] + 0xc) == '\0') && (*(char *)(piVar6[2] + 0xc) == '\0'))
            goto LAB_00ea891a;
            if (*(char *)(piVar6[2] + 0xc) == '\0') {
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              *(undefined1 *)(piVar6 + 3) = 1;
              FUN_00ea5060(piVar6);
              piVar6 = (int *)piVar5[2];
            }
            *(char *)(piVar6 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 0;
            *(undefined1 *)(piVar6[2] + 0xc) = 0;
            FUN_00ea50b0(piVar5);
            break;
          }
        }
        piVar7 = piVar5;
        piVar6 = (int *)*piVar5;
        if (piVar5 == (int *)*param_1) {
          *(undefined1 *)(piVar5 + 3) = 0;
          return;
        }
      }
    }
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  return;
}

// 00EA8980  FUN_00ea8980  size=656  [callgraph]
void __thiscall FUN_00ea8980(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_2[2];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    if (*(char *)(param_2[1] + 0xd) == '\0') {
      piVar5 = (int *)FUN_00ea62b0(param_2);
      piVar7 = (int *)piVar5[1];
      if (piVar5 != param_2) {
        *(int **)param_2[2] = piVar5;
        piVar5[2] = param_2[2];
        piVar6 = piVar5;
        if (piVar5 != (int *)param_2[1]) {
          piVar6 = (int *)*piVar5;
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            *piVar7 = (int)piVar6;
          }
          piVar6[2] = (int)piVar7;
          piVar5[1] = param_2[1];
          *(int **)param_2[1] = piVar5;
        }
        if ((int *)*param_1 == param_2) {
          *param_1 = (int)piVar5;
        }
        else {
          iVar3 = *param_2;
          if (*(int **)(iVar3 + 8) == param_2) {
            *(int **)(iVar3 + 8) = piVar5;
          }
          else {
            *(int **)(iVar3 + 4) = piVar5;
          }
        }
        *piVar5 = *param_2;
        iVar3 = piVar5[3];
        *(char *)(piVar5 + 3) = (char)param_2[3];
        *(char *)(param_2 + 3) = (char)iVar3;
        goto LAB_00ea8a84;
      }
    }
  }
  else {
    piVar7 = (int *)param_2[1];
  }
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    *piVar7 = (int)piVar6;
  }
  if ((int *)*param_1 == param_2) {
    *param_1 = (int)piVar7;
  }
  else if ((int *)piVar6[2] == param_2) {
    piVar6[2] = (int)piVar7;
  }
  else {
    piVar6[1] = (int)piVar7;
  }
  if ((int *)param_1[2] == param_2) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[2] + 0xd);
      piVar2 = (int *)piVar7[2];
      piVar5 = piVar7;
      while (piVar4 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)piVar4[2];
        cVar1 = *(char *)((int)piVar2 + 0xd);
        piVar5 = piVar4;
      }
    }
    param_1[2] = (int)piVar5;
  }
  if ((int *)param_1[1] == param_2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[1] + 0xd);
      piVar5 = (int *)piVar7[1];
      piVar2 = piVar7;
      while (piVar4 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)piVar4[1];
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar2 = piVar4;
      }
      param_1[1] = (int)piVar2;
    }
    else {
      param_1[1] = (int)piVar6;
    }
  }
LAB_00ea8a84:
  if ((char)param_2[3] == '\0') {
    if (piVar7 != (int *)*param_1) {
      while (piVar5 = piVar6, (char)piVar7[3] == '\0') {
        piVar6 = (int *)piVar5[2];
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[1];
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[1];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[1] = piVar6[2];
            if (*(char *)(piVar6[2] + 0xd) == '\0') {
              *(int **)piVar6[2] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 8)) {
                *(int **)(iVar3 + 8) = piVar6;
              }
              else {
                *(int **)(iVar3 + 4) = piVar6;
              }
            }
            piVar6[2] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[1];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) != '\0') || (*(char *)(piVar6[1] + 0xc) != '\0')) {
              if (*(char *)(piVar6[1] + 0xc) == '\0') {
                *(undefined1 *)(piVar6[2] + 0xc) = 0;
                *(undefined1 *)(piVar6 + 3) = 1;
                FUN_00ea51f0(piVar6);
                piVar6 = (int *)piVar5[1];
              }
              *(char *)(piVar6 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 0;
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              FUN_00ea51a0(piVar5);
              *(undefined1 *)(piVar7 + 3) = 0;
              return;
            }
LAB_00ea8bba:
            *(undefined1 *)(piVar6 + 3) = 1;
          }
        }
        else {
          if ((char)piVar6[3] != '\0') {
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6 = (int *)piVar5[2];
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5[2] = piVar6[1];
            if (*(char *)(piVar6[1] + 0xd) == '\0') {
              *(int **)piVar6[1] = piVar5;
            }
            *piVar6 = *piVar5;
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            else {
              iVar3 = *piVar5;
              if (piVar5 == *(int **)(iVar3 + 4)) {
                *(int **)(iVar3 + 4) = piVar6;
              }
              else {
                *(int **)(iVar3 + 8) = piVar6;
              }
            }
            piVar6[1] = (int)piVar5;
            *piVar5 = (int)piVar6;
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[1] + 0xc) == '\0') && (*(char *)(piVar6[2] + 0xc) == '\0'))
            goto LAB_00ea8bba;
            if (*(char *)(piVar6[2] + 0xc) == '\0') {
              *(undefined1 *)(piVar6[1] + 0xc) = 0;
              *(undefined1 *)(piVar6 + 3) = 1;
              FUN_00ea51a0(piVar6);
              piVar6 = (int *)piVar5[2];
            }
            *(char *)(piVar6 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 0;
            *(undefined1 *)(piVar6[2] + 0xc) = 0;
            FUN_00ea51f0(piVar5);
            break;
          }
        }
        piVar7 = piVar5;
        piVar6 = (int *)*piVar5;
        if (piVar5 == (int *)*param_1) {
          *(undefined1 *)(piVar5 + 3) = 0;
          return;
        }
      }
    }
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  return;
}

// 00EA8C20  lib::sany_detail::SerializableAnyImplT<bool>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<bool>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99150(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8C80  lib::sany_detail::SerializableAnyImplT<char>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<char>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99170(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8CE0  lib::sany_detail::SerializableAnyImplT<signed_char>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<signed_char>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99170(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8D40  lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf14  size=86  [class]
uint __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_char>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e991d0(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8DA0  lib::sany_detail::SerializableAnyImplT<short>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<short>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99230(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8E00  lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf14  size=86  [class]
uint __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned_short>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99290(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8E60  lib::sany_detail::SerializableAnyImplT<int>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<int>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e992f0(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8EC0  lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<unsigned_int>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99350(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8F20  lib::sany_detail::SerializableAnyImplT<__int64>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<__int64>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e993b0(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8F80  lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf14  size=86  [class]
uint __thiscall
lib::sany_detail::SerializableAnyImplT<unsigned___int64>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99410(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8FE0  lib::sany_detail::SerializableAnyImplT<float>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<float>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e99470(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA9040  lib::sany_detail::SerializableAnyImplT<double>::vf14  size=86  [class]
uint __thiscall lib::sany_detail::SerializableAnyImplT<double>::vf14(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2;
  uVar2 = FUN_00e994e0(param_1 + 8);
  if ((char)uVar2 != '\0') {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA90B0  FUN_00ea90b0  size=108  [callgraph]
void __thiscall FUN_00ea90b0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = FUN_00ea6e20(param_3);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
    iVar2 = *param_3;
    bVar5 = SBORROW4(iVar2,iVar1);
    bVar4 = iVar2 - iVar1 < 0;
    if (iVar2 == iVar1) {
      if (param_3[1] == *(int *)(iVar3 + 0x14)) {
        bVar4 = (uint)param_3[2] < *(uint *)(iVar3 + 0x18);
        if (param_3[2] == *(uint *)(iVar3 + 0x18)) {
          bVar5 = SBORROW4(param_3[3],*(int *)(iVar3 + 0x1c));
          bVar4 = param_3[3] - *(int *)(iVar3 + 0x1c) < 0;
          goto LAB_00ea90e5;
        }
      }
      else {
        bVar5 = SBORROW4(iVar2,iVar1);
        bVar4 = iVar2 - iVar1 < 0;
        if (iVar2 != iVar1) goto LAB_00ea90e5;
        bVar4 = (uint)param_3[1] < *(uint *)(iVar3 + 0x14);
      }
    }
    else {
LAB_00ea90e5:
      bVar4 = bVar5 != bVar4;
    }
    if (!bVar4) {
      iVar3 = iVar3 + -4;
      goto LAB_00ea9102;
    }
  }
  iVar3 = 0;
LAB_00ea9102:
  *param_2 = param_1;
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x11) != '\0')) {
    iVar3 = 0;
  }
  param_2[1] = iVar3;
  return;
}

// 00EA9130  FUN_00ea9130  size=103  [callgraph]
void __thiscall FUN_00ea9130(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = FUN_00ea6e90(param_3);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x10);
    iVar2 = *param_3;
    if (iVar2 == iVar1) {
      if (param_3[1] == *(int *)(iVar3 + 0x14)) {
        bVar4 = (uint)param_3[2] < *(uint *)(iVar3 + 0x18);
      }
      else {
        if (iVar2 != iVar1) goto LAB_00ea916f;
        bVar4 = (uint)param_3[1] < *(uint *)(iVar3 + 0x14);
      }
    }
    else {
LAB_00ea916f:
      bVar4 = iVar2 < iVar1;
    }
    if (!bVar4) {
      iVar3 = iVar3 + -4;
      goto LAB_00ea917d;
    }
  }
  iVar3 = 0;
LAB_00ea917d:
  *param_2 = param_1;
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x11) != '\0')) {
    iVar3 = 0;
  }
  param_2[1] = iVar3;
  return;
}

// 00EA9370  FUN_00ea9370  size=137  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9370(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar4 = 0;
  }
  else {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_00ea10e0(param_2,(int)pcVar3 - (int)(param_2 + 1));
  }
  uVar2 = _DAT_01ddaa80 & 1;
  param_1[3] = iVar4;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6b40;
  if (uVar2 == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9400  FUN_00ea9400  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9400(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 2;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6b70;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9490  FUN_00ea9490  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9490(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 3;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6ba0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9520  FUN_00ea9520  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9520(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6bd0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA95B0  FUN_00ea95b0  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea95b0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 5;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6c00;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9640  FUN_00ea9640  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9640(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 6;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6c40;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA96D0  FUN_00ea96d0  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea96d0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 7;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6c80;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9760  FUN_00ea9760  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9760(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6cb0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA97F0  FUN_00ea97f0  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea97f0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 9;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0x10;
  param_1[5] = (int)&LAB_00ea6ce0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9880  FUN_00ea9880  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9880(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 10;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0x10;
  param_1[5] = (int)lib::sany_detail::SerializableAnyImplT<unsigned___int64>::
                    SerializableAnyImplT<unsigned___int64>;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9910  FUN_00ea9910  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea9910(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0xb;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0xc;
  param_1[5] = (int)&LAB_00ea6da0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA99A0  FUN_00ea99a0  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00ea99a0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0xc;
  param_1[2] = (int)param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_00ea10e0(param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  param_1[3] = iVar3;
  param_1[4] = 0x10;
  param_1[5] = (int)&LAB_00ea6dd0;
  if ((_DAT_01ddaa80 & 1) == 0) {
    _DAT_01ddaa80 = _DAT_01ddaa80 | 1;
    DAT_01ddaa7c = (int *)0xffffffff;
    _atexit(FUN_015f1460);
    if (*param_1 != 0) {
      return param_1;
    }
  }
  *param_1 = (int)DAT_01ddaa7c;
  DAT_01ddaa7c = param_1;
  return param_1;
}

// 00EA9B10  FUN_00ea9b10  size=109  [callgraph]
void __fastcall FUN_00ea9b10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[2];
  cVar1 = *(char *)(iVar2 + 0xd);
  while (cVar1 == '\0') {
    param_1[10] = param_1[10] + -1;
    FUN_00ea8440(iVar2);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    iVar2 = param_1[2];
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  puVar3 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    if (*(char *)(puVar3[1] + 0xd) == '\0') {
      FUN_00ea4b70(puVar3[1]);
    }
    if (*(char *)(puVar3[2] + 0xd) == '\0') {
      FUN_00ea4b70(puVar3[2]);
    }
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  param_1[10] = 0;
  return;
}

// 00EA9C50  FUN_00ea9c50  size=109  [callgraph]
void __fastcall FUN_00ea9c50(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[2];
  cVar1 = *(char *)(iVar2 + 0xd);
  while (cVar1 == '\0') {
    param_1[10] = param_1[10] + -1;
    FUN_00ea86e0(iVar2);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    iVar2 = param_1[2];
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  puVar3 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    if (*(char *)(puVar3[1] + 0xd) == '\0') {
      FUN_00ea4c50(puVar3[1]);
    }
    if (*(char *)(puVar3[2] + 0xd) == '\0') {
      FUN_00ea4c50(puVar3[2]);
    }
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  param_1[10] = 0;
  return;
}

// 00EA9D90  FUN_00ea9d90  size=109  [callgraph]
void __fastcall FUN_00ea9d90(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1[2];
  cVar1 = *(char *)(iVar2 + 0xd);
  while (cVar1 == '\0') {
    param_1[8] = param_1[8] + -1;
    FUN_00ea8980(iVar2);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    iVar2 = param_1[2];
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  puVar3 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    if (*(char *)(puVar3[1] + 0xd) == '\0') {
      FUN_00ea4d30(puVar3[1]);
    }
    if (*(char *)(puVar3[2] + 0xd) == '\0') {
      FUN_00ea4d30(puVar3[2]);
    }
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  param_1[8] = 0;
  return;
}

